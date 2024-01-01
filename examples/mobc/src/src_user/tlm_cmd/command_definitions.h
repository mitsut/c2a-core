/**
 * @file
 * @brief コマンド定義
 * @note  このコードは自動生成されています！
 * @note  コード生成元 tlm-cmd-db:
 *          repository:    github.com/arkedge/c2a-core.git
 *          CSV files MD5: 080c9a327ce9999a29f411605eec903b
 * @note  コード生成パラメータ:
 *          db_prefix:             SAMPLE_MOBC
 *          tlm_id_range:          [0x00, 0x100]
 *          is_cmd_prefixed_in_db: 0
 *          input_file_encoding:   utf-8
 *          output_file_encoding:  utf-8
 */
#ifndef COMMAND_DEFINITIONS_H_
#define COMMAND_DEFINITIONS_H_

typedef enum
{
  Cmd_CODE_NOP = 0x0000,
  Cmd_CODE_TMGR_SET_TIME = 0x0001,
  Cmd_CODE_TMGR_UPDATE_UNIXTIME = 0x0002,
  Cmd_CODE_TMGR_SET_UTL_UNIXTIME_EPOCH = 0x0003,
  Cmd_CODE_TMGR_SET_CYCLE_CORRECTION = 0x0004,
  Cmd_CODE_TMGR_RESET_CYCLE_CORRECTION = 0x0005,
  Cmd_CODE_TMGR_CLEAR_UNIXTIME_INFO = 0x0006,
  Cmd_CODE_AM_REGISTER_APP = 0x0007,
  Cmd_CODE_AM_INITIALIZE_APP = 0x0008,
  Cmd_CODE_AM_EXECUTE_APP = 0x0009,
  Cmd_CODE_AM_SET_PAGE_FOR_TLM = 0x000A,
  Cmd_CODE_AM_CLEAR_APP_INFO = 0x000B,
  Cmd_CODE_MM_SET_MODE_LIST = 0x000C,
  Cmd_CODE_MM_SET_TRANSITION_TABLE = 0x000D,
  Cmd_CODE_MM_START_TRANSITION = 0x000E,
  Cmd_CODE_MM_FINISH_TRANSITION = 0x000F,
  Cmd_CODE_MM_UPDATE_TRANSITION_TABLE_FOR_TLM = 0x0010,
  Cmd_CODE_TDSP_SET_TASK_LIST = 0x0011,
  Cmd_CODE_TLCD_CLEAR_ALL_TIMELINE = 0x0012,
  Cmd_CODE_TLCD_CLEAR_TIMELINE_AT = 0x0013,
  Cmd_CODE_TLCD_DEPLOY_BLOCK = 0x0014,
  Cmd_CODE_TLCD_CLEAR_ERR_LOG = 0x0015,
  Cmd_CODE_TLCD_SET_SOE_FLAG = 0x0016,
  Cmd_CODE_TLCD_SET_LOUT_FLAG = 0x0017,
  Cmd_CODE_TLCD_SET_ID_FOR_TLM = 0x0018,
  Cmd_CODE_TLCD_SET_PAGE_FOR_TLM = 0x0019,
  Cmd_CODE_CDIS_MGR_SET_IDX_FOR_TLM = 0x001A,
  Cmd_CODE_GENERATE_TLM = 0x001B,
  Cmd_CODE_TG_GENERATE_TLM = 0x001C,
  Cmd_CODE_TG_GENERATE_HP_TLM = 0x001D,
  Cmd_CODE_TG_GENERATE_RT_TLM = 0x001E,
  Cmd_CODE_TG_GENERATE_ST_TLM = 0x001F,
  Cmd_CODE_TG_FORWARD_TLM = 0x0020,
  Cmd_CODE_TG_FORWARD_AS_HP_TLM = 0x0021,
  Cmd_CODE_TG_FORWARD_AS_RT_TLM = 0x0022,
  Cmd_CODE_TG_FORWARD_AS_ST_TLM = 0x0023,
  Cmd_CODE_BCT_CLEAR_BLOCK = 0x0024,
  Cmd_CODE_BCT_SET_BLOCK_POSITION = 0x0025,
  Cmd_CODE_BCT_COPY_BCT = 0x0026,
  Cmd_CODE_BCT_OVERWRITE_CMD = 0x0027,
  Cmd_CODE_BCT_FILL_NOP = 0x0028,
  Cmd_CODE_BCE_ACTIVATE_BLOCK = 0x0029,
  Cmd_CODE_BCE_ACTIVATE_BLOCK_BY_ID = 0x002A,
  Cmd_CODE_BCE_INACTIVATE_BLOCK_BY_ID = 0x002B,
  Cmd_CODE_BCE_ROTATE_BLOCK = 0x002C,
  Cmd_CODE_BCE_COMBINE_BLOCK = 0x002D,
  Cmd_CODE_BCE_TIMELIMIT_COMBINE_BLOCK = 0x002E,
  Cmd_CODE_BCE_RESET_ROTATOR_INFO = 0x002F,
  Cmd_CODE_BCE_RESET_COMBINER_INFO = 0x0030,
  Cmd_CODE_BCE_SET_ROTATE_INTERVAL = 0x0031,
  Cmd_CODE_GSCD_CLEAR_ERR_LOG = 0x0032,
  Cmd_CODE_RTCD_CLEAR_ALL_REALTIME = 0x0033,
  Cmd_CODE_RTCD_CLEAR_ERR_LOG = 0x0034,
  Cmd_CODE_MEM_SET_REGION = 0x0035,
  Cmd_CODE_MEM_DUMP_REGION = 0x0036,
  Cmd_CODE_MEM_DUMP_SINGLE = 0x0037,
  Cmd_CODE_MEM_LOAD = 0x0038,
  Cmd_CODE_MEM_SET_DESTINATION_FOR_COPY = 0x0039,
  Cmd_CODE_MEM_COPY_REGION = 0x003A,
  Cmd_CODE_EL_INIT = 0x003B,
  Cmd_CODE_EL_CLEAR_LOG_ALL = 0x003C,
  Cmd_CODE_EL_CLEAR_LOG_BY_ERR_LEVEL = 0x003D,
  Cmd_CODE_EL_CLEAR_STATISTICS = 0x003E,
  Cmd_CODE_EL_CLEAR_TLOG = 0x003F,
  Cmd_CODE_EL_CLEAR_CLOG = 0x0040,
  Cmd_CODE_EL_RECORD_EVENT = 0x0041,
  Cmd_CODE_EL_TLOG_SET_PAGE_FOR_TLM = 0x0042,
  Cmd_CODE_EL_CLOG_SET_PAGE_FOR_TLM = 0x0043,
  Cmd_CODE_EL_INIT_LOGGING_SETTINGS = 0x0044,
  Cmd_CODE_EL_ENABLE_LOGGING = 0x0045,
  Cmd_CODE_EL_DISABLE_LOGGING = 0x0046,
  Cmd_CODE_EL_ENABLE_LOGGING_ALL = 0x0047,
  Cmd_CODE_EL_DISABLE_LOGGING_ALL = 0x0048,
  Cmd_CODE_EL_ENABLE_TLOG_OVERWRITE = 0x0049,
  Cmd_CODE_EL_DISABLE_TLOG_OVERWRITE = 0x004A,
  Cmd_CODE_EL_ENABLE_TLOG_OVERWRITE_ALL = 0x004B,
  Cmd_CODE_EL_DISABLE_TLOG_OVERWRITE_ALL = 0x004C,
  Cmd_CODE_EH_INIT = 0x004D,
  Cmd_CODE_EH_CLEAR_ALL_RULE = 0x004E,
  Cmd_CODE_EH_LOAD_DEFAULT_RULE = 0x004F,
  Cmd_CODE_EH_SET_REGISTER_RULE_EVENT_PARAM = 0x0050,
  Cmd_CODE_EH_SET_REGISTER_RULE_CONDITION_PARAM = 0x0051,
  Cmd_CODE_EH_REGISTER_RULE = 0x0052,
  Cmd_CODE_EH_DELETE_RULE = 0x0053,
  Cmd_CODE_EH_INIT_RULE = 0x0054,
  Cmd_CODE_EH_INIT_RULE_FOR_MULTI_LEVEL = 0x0055,
  Cmd_CODE_EH_ACTIVATE_RULE = 0x0056,
  Cmd_CODE_EH_INACTIVATE_RULE = 0x0057,
  Cmd_CODE_EH_ACTIVATE_RULE_FOR_MULTI_LEVEL = 0x0058,
  Cmd_CODE_EH_INACTIVATE_RULE_FOR_MULTI_LEVEL = 0x0059,
  Cmd_CODE_EH_SET_RULE_COUNTER = 0x005A,
  Cmd_CODE_EH_CLEAR_RULE_COUNTER = 0x005B,
  Cmd_CODE_EH_CLEAR_RULE_COUNTER_BY_EVENT = 0x005C,
  Cmd_CODE_EH_CLEAR_LOG = 0x005D,
  Cmd_CODE_EH_SET_MAX_RESPONSE_NUM = 0x005E,
  Cmd_CODE_EH_SET_MAX_CHECK_EVENT_NUM = 0x005F,
  Cmd_CODE_EH_SET_MAX_MULTI_LEVEL_NUM = 0x0060,
  Cmd_CODE_EH_SET_PAGE_OF_RULE_TABLE_FOR_TLM = 0x0061,
  Cmd_CODE_EH_SET_PAGE_OF_RULE_SORTED_IDX_FOR_TLM = 0x0062,
  Cmd_CODE_EH_SET_PAGE_OF_LOG_TABLE_FOR_TLM = 0x0063,
  Cmd_CODE_EH_SET_TARGET_ID_OF_RULE_TABLE_FOR_TLM = 0x0064,
  Cmd_CODE_EH_MATCH_EVENT_COUNTER_TO_EL = 0x0065,
  Cmd_CODE_EH_INIT_RULE_BY_EVENT_GROUP = 0x0066,
  Cmd_CODE_EH_INIT_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL = 0x0067,
  Cmd_CODE_EH_ACTIVATE_RULE_BY_EVENT_GROUP = 0x0068,
  Cmd_CODE_EH_INACTIVATE_RULE_BY_EVENT_GROUP = 0x0069,
  Cmd_CODE_EH_ACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL = 0x006A,
  Cmd_CODE_EH_INACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL = 0x006B,
  Cmd_CODE_EVENT_UTIL_ENABLE_EH_EXEC = 0x006C,
  Cmd_CODE_EVENT_UTIL_DISABLE_EH_EXEC = 0x006D,
  Cmd_CODE_EVENT_UTIL_EXEC_EH = 0x006E,
  Cmd_CODE_TF_INIT = 0x006F,
  Cmd_CODE_CA_INIT = 0x0070,
  Cmd_CODE_TF_REGISTER_TLM = 0x0071,
  Cmd_CODE_CA_REGISTER_CMD = 0x0072,
  Cmd_CODE_TF_SET_PAGE_FOR_TLM = 0x0073,
  Cmd_CODE_CA_SET_PAGE_FOR_TLM = 0x0074,
  Cmd_CODE_TLM_MGR_INIT = 0x0075,
  Cmd_CODE_TLM_MGR_INIT_MASTER_AND_DEPLOY_BC = 0x0076,
  Cmd_CODE_TLM_MGR_CLEAR_HK_TLM = 0x0077,
  Cmd_CODE_TLM_MGR_CLEAR_HIGH_FREQ_TLM = 0x0078,
  Cmd_CODE_TLM_MGR_CLEAR_LOW_FREQ_TLM = 0x0079,
  Cmd_CODE_TLM_MGR_CLEAR_USER_TLM = 0x007A,
  Cmd_CODE_TLM_MGR_START_TLM = 0x007B,
  Cmd_CODE_TLM_MGR_STOP_TLM = 0x007C,
  Cmd_CODE_TLM_MGR_REGISTER_GENERATE_RT_TLM = 0x007D,
  Cmd_CODE_TLM_MGR_REGISTER_GENERATE_ST_TLM = 0x007E,
  Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_RT_TLM = 0x007F,
  Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_ST_TLM = 0x0080,
  Cmd_CODE_TLM_MGR_REGISTER_REPLAY_TLM = 0x0081,
  Cmd_CODE_TLM_MGR_DELETE_GENERATE_RT_TLM = 0x0082,
  Cmd_CODE_TLM_MGR_DELETE_GENERATE_ST_TLM = 0x0083,
  Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_RT_TLM = 0x0084,
  Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_ST_TLM = 0x0085,
  Cmd_CODE_TLM_MGR_DELETE_REPLAY_TLM = 0x0086,
  Cmd_CODE_DCU_ABORT_CMD = 0x0087,
  Cmd_CODE_DCU_DOWN_ABORT_FLAG = 0x0088,
  Cmd_CODE_DCU_CLEAR_LOG = 0x0089,
  Cmd_CODE_CCP_DUMP_CDIS = 0x008A,
  Cmd_CODE_CCP_DUMP_BCT = 0x008B,
  Cmd_CODE_TL_BCT_DIGEST_TL = 0x008C,
  Cmd_CODE_TL_BCT_DIGEST_BCT = 0x008D,
  Cmd_CODE_CDRV_UTIL_CDSC_ENABLE_MONITOR_FOR_RX_DISRUPTION = 0x008E,
  Cmd_CODE_CDRV_UTIL_CDSC_DISABLE_MONITOR_FOR_RX_DISRUPTION = 0x008F,
  Cmd_CODE_CDRV_UTIL_CDSC_SET_TIME_THRESHOLD_FOR_RX_DISRUPTION = 0x0090,
  Cmd_CODE_CDRV_UTIL_CDSSC_ENABLE = 0x0091,
  Cmd_CODE_CDRV_UTIL_CDSSC_DISABLE = 0x0092,
  Cmd_CODE_CDRV_UTIL_CDSSC_ENABLE_MONITOR_FOR_TLM_DISRUPTION = 0x0093,
  Cmd_CODE_CDRV_UTIL_CDSSC_DISABLE_MONITOR_FOR_TLM_DISRUPTION = 0x0094,
  Cmd_CODE_CDRV_UTIL_CDSSC_SET_TIME_THRESHOLD_FOR_TLM_DISRUPTION = 0x0095,
  Cmd_CODE_CDRV_UTIL_SET_TLM = 0x0096,
  Cmd_CODE_TEST_CCP_REGISTER_TLC_ASAP = 0x0097,
  Cmd_CODE_TEST_CCP_GET_RAW_PARAM_INFO = 0x0098,
  Cmd_CODE_CSRV_GS_DRIVER_RESET = 0x0100,
  Cmd_CODE_CSRV_GS_SET_RT_FLUSH_INTERVAL = 0x0101,
  Cmd_CODE_CSRV_GS_SET_RP_FLUSH_INTERVAL = 0x0102,
  Cmd_CODE_CSRV_GS_SET_FARM_PW = 0x0103,
  Cmd_CODE_CSRV_GS_SET_INFO = 0x0104,
  Cmd_CODE_CSRV_GS_CCSDS_GET_BUFFER = 0x0105,
  Cmd_CODE_CSRV_GS_CCSDS_SET_RATE = 0x0106,
  Cmd_CODE_CSRV_GS_UART_TLM_ON = 0x0107,
  Cmd_CODE_CSRV_GS_UART_TLM_OFF = 0x0108,
  Cmd_CODE_WDT_INIT = 0x0109,
  Cmd_CODE_WDT_ENABLE = 0x010A,
  Cmd_CODE_WDT_DISABLE = 0x010B,
  Cmd_CODE_WDT_STOP_CLEAR = 0x010C,
  Cmd_CODE_WDT_START_CLEAR = 0x010D,
  Cmd_CODE_UART_TEST_INIT_CSRV = 0x010E,
  Cmd_CODE_UART_TEST_UPDATE = 0x010F,
  Cmd_CODE_UART_TEST_SEND_TEST = 0x0110,
  Cmd_CODE_UTIL_CMD_ADD = 0x03E0,
  Cmd_CODE_UTIL_CMD_SEND = 0x03E1,
  Cmd_CODE_UTIL_CMD_RESET = 0x03E2,

  Cmd_CODE_MAX
} CMD_CODE;

#endif
