#pragma section REPRO
#include "telemetry_generator.h"

#include <stddef.h> // for NULL

#include "telemetry_frame.h"
#include "packet_handler.h"
#include "../System/TimeManager/time_manager.h"
#include "common_cmd_packet.h"
#include "common_cmd_packet_util.h"
#include <src_user/TlmCmd/telemetry_definitions.h>
#include <src_user/Settings/TlmCmd/common_tlm_packet_define.h>
#include "./Ccsds/tlm_space_packet.h"   // FIXME: TSP 依存性はNGなので， TCP → SP 大工事終わったら直す


/**
 * @brief 自身のテレメを生成
 * @note  2nd OBC のテレメは生成できない
 * @param[in] tlm_id:     Tlm ID
 * @param[in] dest_flags: Dest Flags
 * @param[in] dest_info:  Dest Info
 * @param[in] num_dumps:  テレメ送出回数
 * @return CCP_CmdRet
 */
static CCP_CmdRet TG_generate_tlm_(TLM_CODE tlm_id,
                                   ctp_dest_flags_t dest_flags,
                                   uint8_t dest_info,
                                   uint8_t num_dumps);
static uint8_t TG_get_next_adu_counter_(void);

static CommonTlmPacket TG_ctp_;


// FIXME: 現在のコードは，MOBC と 2nd OBC の Tlm id がユニークであることを想定している
//        本来被っても良いはず
// DEPRECATED!!!!!
CCP_CmdRet Cmd_GENERATE_TLM(const CommonCmdPacket* packet)
{
  uint8_t category = CCP_get_param_from_packet(packet, 0, uint8_t);
  TLM_CODE id = (TLM_CODE)CCP_get_param_from_packet(packet, 1, uint8_t);
  uint8_t num_dumps = CCP_get_param_from_packet(packet, 2, uint8_t);
  uint16_t len;
  TF_TLM_FUNC_ACK ack;
  uint8_t dr_partition_mask = 0x1f; // 00011111b        // FIXME: 一時的な対応
  uint8_t dest_flags_mask = 0xe0; // 11100000b        // FIXME: 一時的な対応
  uint8_t dr_partition;
  ctp_dest_flags_t dest_flags;

  if (num_dumps >= 8)
  {
    // パケット生成回数の上限は8回とする。
    // 32kbpsでのDL時に8VCDU/secで1秒分の通信量。
    // これを超える場合は複数回コマンドを送信して対応する。
    return CCP_make_cmd_ret_without_err_code(CCP_EXEC_ILLEGAL_PARAMETER);
  }

  // ctp の ヘッダ部分の APID をクリア
  // この後で， 配送元 OBC が自身か 2nd obc かを割り出せるように
  CTP_set_apid(&TG_ctp_, (APID)(APID_UNKNOWN & 0x7ff));    // FIXME: APID_UNKNOWN = APID_FILL_PKT + 1 だと 11 bit から溢れてる...

  // ADU生成
  // ADU分割が発生しない場合に限定したコードになっている。
  // TLM定義シート上で定義するADUはADU長をADU分割が発生しない長さに制限する。
  ack = TF_generate_contents(id,
                             TG_ctp_.packet,
                             &len,
                             TSP_MAX_LEN);

  // 範囲外のTLM IDを除外
  if (ack == TF_TLM_FUNC_ACK_NOT_DEFINED) return CCP_make_cmd_ret_without_err_code(CCP_EXEC_ILLEGAL_PARAMETER);
  if (ack != TF_TLM_FUNC_ACK_SUCCESS) return CCP_make_cmd_ret_without_err_code(CCP_EXEC_ILLEGAL_CONTEXT);

  // Header
  if ((APID)(CTP_get_apid(&TG_ctp_) & 0x7ff) != (APID)(APID_UNKNOWN & 0x7ff))    // FIXME: APID_UNKNOWN = APID_FILL_PKT + 1 だと 11 bit から溢れてる...
  {
    // 2nd OBC で生成された TLM の primary header, secondary header の board time はそのまま維持
  }
  else
  {
    // Primary Header
    // FIXME: Space Packet 依存を直す
    TSP_setup_primary_hdr(&TG_ctp_, CTP_APID_FROM_ME, len);
    TSP_set_seq_count(&TG_ctp_, TG_get_next_adu_counter_());

    // Secondary Header
    TSP_set_board_time(&TG_ctp_, (uint32_t)(TMGR_get_master_total_cycle()));
  }

  // FIXME: 他の時刻も入れる
  CTP_set_global_time(&TG_ctp_);
  TSP_set_on_board_subnet_time(&TG_ctp_, (uint32_t)(TMGR_get_master_total_cycle()));   // FIXME: 暫定

  // FIXME: 他 OBC からのパケットは別処理する
  // FIXME: 一旦雑に category を処理してるが後でちゃんと直す
  dr_partition = (uint8_t)(category & dr_partition_mask);
  dest_flags = (uint8_t)( (category & dest_flags_mask) >> 5 );
  if (dest_flags == 0)
  {
    dest_flags = CTP_DEST_FLAG_RP;
  }
  TSP_set_dest_flags(&TG_ctp_, dest_flags);
  TSP_set_dest_info(&TG_ctp_, dr_partition);   // FIXME: もはや dr partition ですらない
  TSP_set_tlm_id(&TG_ctp_, id);

  // 生成したパケットを指定された回数配送処理へ渡す
  while (num_dumps != 0)
  {
    PH_analyze_tlm_packet(&TG_ctp_);
    --num_dumps;
  }

  return CCP_make_cmd_ret_without_err_code(CCP_EXEC_SUCCESS);
}


CCP_CmdRet Cmd_TG_GENERATE_TLM(const CommonCmdPacket* packet)
{
  TLM_CODE tlm_id = (TLM_CODE)CCP_get_param_from_packet(packet, 0, uint8_t);
  ctp_dest_flags_t dest_flags = (ctp_dest_flags_t)CCP_get_param_from_packet(packet, 1, uint8_t);
  uint8_t dest_info = CCP_get_param_from_packet(packet, 2, uint8_t);
  uint8_t dump_num = CCP_get_param_from_packet(packet, 3, uint8_t);

  return TG_generate_tlm_(tlm_id, dest_flags, dest_info, dump_num);
}


CCP_CmdRet Cmd_TG_GENERATE_HK_TLM(const CommonCmdPacket* packet)
{
  TLM_CODE tlm_id = (TLM_CODE)CCP_get_param_from_packet(packet, 0, uint8_t);
  uint8_t dump_num = CCP_get_param_from_packet(packet, 1, uint8_t);

  return TG_generate_tlm_(tlm_id, (ctp_dest_flags_t)CTP_DEST_FLAG_HK, 0, dump_num);
}


CCP_CmdRet Cmd_TG_GENERATE_MS_TLM(const CommonCmdPacket* packet)
{
  TLM_CODE tlm_id = (TLM_CODE)CCP_get_param_from_packet(packet, 0, uint8_t);
  uint8_t dump_num = CCP_get_param_from_packet(packet, 1, uint8_t);


  return TG_generate_tlm_(tlm_id, (ctp_dest_flags_t)CTP_DEST_FLAG_MS, 0, dump_num);
}


CCP_CmdRet Cmd_TG_GENERATE_ST_TLM(const CommonCmdPacket* packet)
{
  TLM_CODE tlm_id = (TLM_CODE)CCP_get_param_from_packet(packet, 0, uint8_t);
  uint8_t dr_partition = CCP_get_param_from_packet(packet, 1, uint8_t);
  uint8_t dump_num = CCP_get_param_from_packet(packet, 2, uint8_t);


  return TG_generate_tlm_(tlm_id, (ctp_dest_flags_t)CTP_DEST_FLAG_ST, dr_partition, dump_num);
}


static CCP_CmdRet TG_generate_tlm_(TLM_CODE tlm_id,
                                   ctp_dest_flags_t dest_flags,
                                   uint8_t dest_info,
                                   uint8_t dump_num)
{




  return CCP_make_cmd_ret_without_err_code(CCP_EXEC_SUCCESS);
}


// FIXME: space packet 大工事でビット幅が変わってるので直す！
static uint8_t TG_get_next_adu_counter_(void)
{
  // インクリメントした値を返すため初期値は0xffとする
  static uint8_t adu_counter_ = 0xff;
  return ++adu_counter_;
}

#pragma section
