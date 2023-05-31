#pragma section REPRO
/**
 * @file
 * @brief  コマンド定義
 * @note   このコードは自動生成されています！
 */
#include <src_core/TlmCmd/command_analyze.h>
#include "command_definitions.h"
#include "command_source.h"

void CA_load_cmd_table(CA_CmdInfo cmd_table[CA_MAX_CMDS])
{
  cmd_table[Cmd_CODE_NOP].cmd_func = Cmd_NOP;
  cmd_table[Cmd_CODE_TMGR_SET_TIME].cmd_func = Cmd_TMGR_SET_TIME;
  cmd_table[Cmd_CODE_TMGR_UPDATE_UNIXTIME].cmd_func = Cmd_TMGR_UPDATE_UNIXTIME;
  cmd_table[Cmd_CODE_TMGR_SET_UTL_UNIXTIME_EPOCH].cmd_func = Cmd_TMGR_SET_UTL_UNIXTIME_EPOCH;
  cmd_table[Cmd_CODE_TMGR_SET_CYCLE_CORRECTION].cmd_func = Cmd_TMGR_SET_CYCLE_CORRECTION;
  cmd_table[Cmd_CODE_TMGR_RESET_CYCLE_CORRECTION].cmd_func = Cmd_TMGR_RESET_CYCLE_CORRECTION;
  cmd_table[Cmd_CODE_TMGR_CLEAR_UNIXTIME_INFO].cmd_func = Cmd_TMGR_CLEAR_UNIXTIME_INFO;
  cmd_table[Cmd_CODE_AM_REGISTER_APP].cmd_func = Cmd_AM_REGISTER_APP;
  cmd_table[Cmd_CODE_AM_INITIALIZE_APP].cmd_func = Cmd_AM_INITIALIZE_APP;
  cmd_table[Cmd_CODE_AM_EXECUTE_APP].cmd_func = Cmd_AM_EXECUTE_APP;
  cmd_table[Cmd_CODE_AM_SET_PAGE_FOR_TLM].cmd_func = Cmd_AM_SET_PAGE_FOR_TLM;
  cmd_table[Cmd_CODE_AM_CLEAR_APP_INFO].cmd_func = Cmd_AM_CLEAR_APP_INFO;
  cmd_table[Cmd_CODE_MM_SET_MODE_LIST].cmd_func = Cmd_MM_SET_MODE_LIST;
  cmd_table[Cmd_CODE_MM_SET_TRANSITION_TABLE].cmd_func = Cmd_MM_SET_TRANSITION_TABLE;
  cmd_table[Cmd_CODE_MM_START_TRANSITION].cmd_func = Cmd_MM_START_TRANSITION;
  cmd_table[Cmd_CODE_MM_FINISH_TRANSITION].cmd_func = Cmd_MM_FINISH_TRANSITION;
  cmd_table[Cmd_CODE_MM_UPDATE_TRANSITION_TABLE_FOR_TLM].cmd_func = Cmd_MM_UPDATE_TRANSITION_TABLE_FOR_TLM;
  cmd_table[Cmd_CODE_TDSP_SET_TASK_LIST].cmd_func = Cmd_TDSP_SET_TASK_LIST;
  cmd_table[Cmd_CODE_TLCD_CLEAR_ALL_TIMELINE].cmd_func = Cmd_TLCD_CLEAR_ALL_TIMELINE;
  cmd_table[Cmd_CODE_TLCD_CLEAR_TIMELINE_AT].cmd_func = Cmd_TLCD_CLEAR_TIMELINE_AT;
  cmd_table[Cmd_CODE_TLCD_DEPLOY_BLOCK].cmd_func = Cmd_TLCD_DEPLOY_BLOCK;
  cmd_table[Cmd_CODE_TLCD_CLEAR_ERR_LOG].cmd_func = Cmd_TLCD_CLEAR_ERR_LOG;
  cmd_table[Cmd_CODE_TLCD_SET_SOE_FLAG].cmd_func = Cmd_TLCD_SET_SOE_FLAG;
  cmd_table[Cmd_CODE_TLCD_SET_LOUT_FLAG].cmd_func = Cmd_TLCD_SET_LOUT_FLAG;
  cmd_table[Cmd_CODE_TLCD_SET_ID_FOR_TLM].cmd_func = Cmd_TLCD_SET_ID_FOR_TLM;
  cmd_table[Cmd_CODE_TLCD_SET_PAGE_FOR_TLM].cmd_func = Cmd_TLCD_SET_PAGE_FOR_TLM;
  cmd_table[Cmd_CODE_GENERATE_TLM].cmd_func = Cmd_GENERATE_TLM;
  cmd_table[Cmd_CODE_TG_GENERATE_TLM].cmd_func = Cmd_TG_GENERATE_TLM;
  cmd_table[Cmd_CODE_TG_GENERATE_HP_TLM].cmd_func = Cmd_TG_GENERATE_HP_TLM;
  cmd_table[Cmd_CODE_TG_GENERATE_MS_TLM].cmd_func = Cmd_TG_GENERATE_MS_TLM;
  cmd_table[Cmd_CODE_TG_GENERATE_ST_TLM].cmd_func = Cmd_TG_GENERATE_ST_TLM;
  cmd_table[Cmd_CODE_TG_FORWARD_TLM].cmd_func = Cmd_TG_FORWARD_TLM;
  cmd_table[Cmd_CODE_TG_FORWARD_AS_HP_TLM].cmd_func = Cmd_TG_FORWARD_AS_HP_TLM;
  cmd_table[Cmd_CODE_TG_FORWARD_AS_MS_TLM].cmd_func = Cmd_TG_FORWARD_AS_MS_TLM;
  cmd_table[Cmd_CODE_TG_FORWARD_AS_ST_TLM].cmd_func = Cmd_TG_FORWARD_AS_ST_TLM;
  cmd_table[Cmd_CODE_BCT_CLEAR_BLOCK].cmd_func = Cmd_BCT_CLEAR_BLOCK;
  cmd_table[Cmd_CODE_BCT_SET_BLOCK_POSITION].cmd_func = Cmd_BCT_SET_BLOCK_POSITION;
  cmd_table[Cmd_CODE_BCT_COPY_BCT].cmd_func = Cmd_BCT_COPY_BCT;
  cmd_table[Cmd_CODE_BCT_OVERWRITE_CMD].cmd_func = Cmd_BCT_OVERWRITE_CMD;
  cmd_table[Cmd_CODE_BCT_FILL_NOP].cmd_func = Cmd_BCT_FILL_NOP;
  cmd_table[Cmd_CODE_BCE_ACTIVATE_BLOCK].cmd_func = Cmd_BCE_ACTIVATE_BLOCK;
  cmd_table[Cmd_CODE_BCE_ACTIVATE_BLOCK_BY_ID].cmd_func = Cmd_BCE_ACTIVATE_BLOCK_BY_ID;
  cmd_table[Cmd_CODE_BCE_INACTIVATE_BLOCK_BY_ID].cmd_func = Cmd_BCE_INACTIVATE_BLOCK_BY_ID;
  cmd_table[Cmd_CODE_BCE_ROTATE_BLOCK].cmd_func = Cmd_BCE_ROTATE_BLOCK;
  cmd_table[Cmd_CODE_BCE_COMBINE_BLOCK].cmd_func = Cmd_BCE_COMBINE_BLOCK;
  cmd_table[Cmd_CODE_BCE_TIMELIMIT_COMBINE_BLOCK].cmd_func = Cmd_BCE_TIMELIMIT_COMBINE_BLOCK;
  cmd_table[Cmd_CODE_BCE_RESET_ROTATOR_INFO].cmd_func = Cmd_BCE_RESET_ROTATOR_INFO;
  cmd_table[Cmd_CODE_BCE_RESET_COMBINER_INFO].cmd_func = Cmd_BCE_RESET_COMBINER_INFO;
  cmd_table[Cmd_CODE_BCE_SET_ROTATE_INTERVAL].cmd_func = Cmd_BCE_SET_ROTATE_INTERVAL;
  cmd_table[Cmd_CODE_GSCD_CLEAR_ERR_LOG].cmd_func = Cmd_GSCD_CLEAR_ERR_LOG;
  cmd_table[Cmd_CODE_RTCD_CLEAR_ALL_REALTIME].cmd_func = Cmd_RTCD_CLEAR_ALL_REALTIME;
  cmd_table[Cmd_CODE_RTCD_CLEAR_ERR_LOG].cmd_func = Cmd_RTCD_CLEAR_ERR_LOG;
  cmd_table[Cmd_CODE_MEM_SET_REGION].cmd_func = Cmd_MEM_SET_REGION;
  cmd_table[Cmd_CODE_MEM_LOAD].cmd_func = Cmd_MEM_LOAD;
  cmd_table[Cmd_CODE_MEM_SET_DESTINATION].cmd_func = Cmd_MEM_SET_DESTINATION;
  cmd_table[Cmd_CODE_MEM_COPY_REGION_SEQ].cmd_func = Cmd_MEM_COPY_REGION_SEQ;
  cmd_table[Cmd_CODE_EL_INIT].cmd_func = Cmd_EL_INIT;
  cmd_table[Cmd_CODE_EL_CLEAR_LOG_ALL].cmd_func = Cmd_EL_CLEAR_LOG_ALL;
  cmd_table[Cmd_CODE_EL_CLEAR_LOG_BY_ERR_LEVEL].cmd_func = Cmd_EL_CLEAR_LOG_BY_ERR_LEVEL;
  cmd_table[Cmd_CODE_EL_CLEAR_STATISTICS].cmd_func = Cmd_EL_CLEAR_STATISTICS;
  cmd_table[Cmd_CODE_EL_CLEAR_TLOG].cmd_func = Cmd_EL_CLEAR_TLOG;
  cmd_table[Cmd_CODE_EL_CLEAR_CLOG].cmd_func = Cmd_EL_CLEAR_CLOG;
  cmd_table[Cmd_CODE_EL_RECORD_EVENT].cmd_func = Cmd_EL_RECORD_EVENT;
  cmd_table[Cmd_CODE_EL_TLOG_SET_PAGE_FOR_TLM].cmd_func = Cmd_EL_TLOG_SET_PAGE_FOR_TLM;
  cmd_table[Cmd_CODE_EL_CLOG_SET_PAGE_FOR_TLM].cmd_func = Cmd_EL_CLOG_SET_PAGE_FOR_TLM;
  cmd_table[Cmd_CODE_EL_INIT_LOGGING_SETTINGS].cmd_func = Cmd_EL_INIT_LOGGING_SETTINGS;
  cmd_table[Cmd_CODE_EL_ENABLE_LOGGING].cmd_func = Cmd_EL_ENABLE_LOGGING;
  cmd_table[Cmd_CODE_EL_DISABLE_LOGGING].cmd_func = Cmd_EL_DISABLE_LOGGING;
  cmd_table[Cmd_CODE_EL_ENABLE_LOGGING_ALL].cmd_func = Cmd_EL_ENABLE_LOGGING_ALL;
  cmd_table[Cmd_CODE_EL_DISABLE_LOGGING_ALL].cmd_func = Cmd_EL_DISABLE_LOGGING_ALL;
  cmd_table[Cmd_CODE_EL_ENABLE_TLOG_OVERWRITE].cmd_func = Cmd_EL_ENABLE_TLOG_OVERWRITE;
  cmd_table[Cmd_CODE_EL_DISABLE_TLOG_OVERWRITE].cmd_func = Cmd_EL_DISABLE_TLOG_OVERWRITE;
  cmd_table[Cmd_CODE_EL_ENABLE_TLOG_OVERWRITE_ALL].cmd_func = Cmd_EL_ENABLE_TLOG_OVERWRITE_ALL;
  cmd_table[Cmd_CODE_EL_DISABLE_TLOG_OVERWRITE_ALL].cmd_func = Cmd_EL_DISABLE_TLOG_OVERWRITE_ALL;
  cmd_table[Cmd_CODE_EH_INIT].cmd_func = Cmd_EH_INIT;
  cmd_table[Cmd_CODE_EH_CLEAR_ALL_RULE].cmd_func = Cmd_EH_CLEAR_ALL_RULE;
  cmd_table[Cmd_CODE_EH_LOAD_DEFAULT_RULE].cmd_func = Cmd_EH_LOAD_DEFAULT_RULE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_EVENT_PARAM].cmd_func = Cmd_EH_SET_REGISTER_RULE_EVENT_PARAM;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_CONDITION_PARAM].cmd_func = Cmd_EH_SET_REGISTER_RULE_CONDITION_PARAM;
  cmd_table[Cmd_CODE_EH_REGISTER_RULE].cmd_func = Cmd_EH_REGISTER_RULE;
  cmd_table[Cmd_CODE_EH_DELETE_RULE].cmd_func = Cmd_EH_DELETE_RULE;
  cmd_table[Cmd_CODE_EH_INIT_RULE].cmd_func = Cmd_EH_INIT_RULE;
  cmd_table[Cmd_CODE_EH_INIT_RULE_FOR_MULTI_LEVEL].cmd_func = Cmd_EH_INIT_RULE_FOR_MULTI_LEVEL;
  cmd_table[Cmd_CODE_EH_ACTIVATE_RULE].cmd_func = Cmd_EH_ACTIVATE_RULE;
  cmd_table[Cmd_CODE_EH_INACTIVATE_RULE].cmd_func = Cmd_EH_INACTIVATE_RULE;
  cmd_table[Cmd_CODE_EH_ACTIVATE_RULE_FOR_MULTI_LEVEL].cmd_func = Cmd_EH_ACTIVATE_RULE_FOR_MULTI_LEVEL;
  cmd_table[Cmd_CODE_EH_INACTIVATE_RULE_FOR_MULTI_LEVEL].cmd_func = Cmd_EH_INACTIVATE_RULE_FOR_MULTI_LEVEL;
  cmd_table[Cmd_CODE_EH_SET_RULE_COUNTER].cmd_func = Cmd_EH_SET_RULE_COUNTER;
  cmd_table[Cmd_CODE_EH_CLEAR_RULE_COUNTER].cmd_func = Cmd_EH_CLEAR_RULE_COUNTER;
  cmd_table[Cmd_CODE_EH_CLEAR_RULE_COUNTER_BY_EVENT].cmd_func = Cmd_EH_CLEAR_RULE_COUNTER_BY_EVENT;
  cmd_table[Cmd_CODE_EH_CLEAR_LOG].cmd_func = Cmd_EH_CLEAR_LOG;
  cmd_table[Cmd_CODE_EH_SET_MAX_RESPONSE_NUM].cmd_func = Cmd_EH_SET_MAX_RESPONSE_NUM;
  cmd_table[Cmd_CODE_EH_SET_MAX_CHECK_EVENT_NUM].cmd_func = Cmd_EH_SET_MAX_CHECK_EVENT_NUM;
  cmd_table[Cmd_CODE_EH_SET_MAX_MULTI_LEVEL_NUM].cmd_func = Cmd_EH_SET_MAX_MULTI_LEVEL_NUM;
  cmd_table[Cmd_CODE_EH_SET_PAGE_OF_RULE_TABLE_FOR_TLM].cmd_func = Cmd_EH_SET_PAGE_OF_RULE_TABLE_FOR_TLM;
  cmd_table[Cmd_CODE_EH_SET_PAGE_OF_RULE_SORTED_IDX_FOR_TLM].cmd_func = Cmd_EH_SET_PAGE_OF_RULE_SORTED_IDX_FOR_TLM;
  cmd_table[Cmd_CODE_EH_SET_PAGE_OF_LOG_TABLE_FOR_TLM].cmd_func = Cmd_EH_SET_PAGE_OF_LOG_TABLE_FOR_TLM;
  cmd_table[Cmd_CODE_EH_SET_TARGET_ID_OF_RULE_TABLE_FOR_TLM].cmd_func = Cmd_EH_SET_TARGET_ID_OF_RULE_TABLE_FOR_TLM;
  cmd_table[Cmd_CODE_EH_MATCH_EVENT_COUNTER_TO_EL].cmd_func = Cmd_EH_MATCH_EVENT_COUNTER_TO_EL;
  cmd_table[Cmd_CODE_EH_INIT_RULE_BY_EVENT_GROUP].cmd_func = Cmd_EH_INIT_RULE_BY_EVENT_GROUP;
  cmd_table[Cmd_CODE_EH_INIT_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL].cmd_func = Cmd_EH_INIT_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL;
  cmd_table[Cmd_CODE_EH_ACTIVATE_RULE_BY_EVENT_GROUP].cmd_func = Cmd_EH_ACTIVATE_RULE_BY_EVENT_GROUP;
  cmd_table[Cmd_CODE_EH_INACTIVATE_RULE_BY_EVENT_GROUP].cmd_func = Cmd_EH_INACTIVATE_RULE_BY_EVENT_GROUP;
  cmd_table[Cmd_CODE_EH_ACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL].cmd_func = Cmd_EH_ACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL;
  cmd_table[Cmd_CODE_EH_INACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL].cmd_func = Cmd_EH_INACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL;
  cmd_table[Cmd_CODE_EVENT_UTIL_ENABLE_EH_EXEC].cmd_func = Cmd_EVENT_UTIL_ENABLE_EH_EXEC;
  cmd_table[Cmd_CODE_EVENT_UTIL_DISABLE_EH_EXEC].cmd_func = Cmd_EVENT_UTIL_DISABLE_EH_EXEC;
  cmd_table[Cmd_CODE_EVENT_UTIL_EXEC_EH].cmd_func = Cmd_EVENT_UTIL_EXEC_EH;
  cmd_table[Cmd_CODE_TF_INIT].cmd_func = Cmd_TF_INIT;
  cmd_table[Cmd_CODE_CA_INIT].cmd_func = Cmd_CA_INIT;
  cmd_table[Cmd_CODE_TF_REGISTER_TLM].cmd_func = Cmd_TF_REGISTER_TLM;
  cmd_table[Cmd_CODE_CA_REGISTER_CMD].cmd_func = Cmd_CA_REGISTER_CMD;
  cmd_table[Cmd_CODE_TF_SET_PAGE_FOR_TLM].cmd_func = Cmd_TF_SET_PAGE_FOR_TLM;
  cmd_table[Cmd_CODE_CA_SET_PAGE_FOR_TLM].cmd_func = Cmd_CA_SET_PAGE_FOR_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_INIT].cmd_func = Cmd_TLM_MGR_INIT;
  cmd_table[Cmd_CODE_TLM_MGR_INIT_MASTER_AND_DEPLOY_BC].cmd_func = Cmd_TLM_MGR_INIT_MASTER_AND_DEPLOY_BC;
  cmd_table[Cmd_CODE_TLM_MGR_CLEAR_HK_TLM].cmd_func = Cmd_TLM_MGR_CLEAR_HK_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_CLEAR_HIGH_FREQ_TLM].cmd_func = Cmd_TLM_MGR_CLEAR_HIGH_FREQ_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_CLEAR_LOW_FREQ_TLM].cmd_func = Cmd_TLM_MGR_CLEAR_LOW_FREQ_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_CLEAR_USER_TLM].cmd_func = Cmd_TLM_MGR_CLEAR_USER_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_START_TLM].cmd_func = Cmd_TLM_MGR_START_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_STOP_TLM].cmd_func = Cmd_TLM_MGR_STOP_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_GENERATE_MS_TLM].cmd_func = Cmd_TLM_MGR_REGISTER_GENERATE_MS_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_GENERATE_ST_TLM].cmd_func = Cmd_TLM_MGR_REGISTER_GENERATE_ST_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_MS_TLM].cmd_func = Cmd_TLM_MGR_REGISTER_FORWARD_AS_MS_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_ST_TLM].cmd_func = Cmd_TLM_MGR_REGISTER_FORWARD_AS_ST_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_REPLAY_TLM].cmd_func = Cmd_TLM_MGR_REGISTER_REPLAY_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_GENERATE_MS_TLM].cmd_func = Cmd_TLM_MGR_DELETE_GENERATE_MS_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_GENERATE_ST_TLM].cmd_func = Cmd_TLM_MGR_DELETE_GENERATE_ST_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_MS_TLM].cmd_func = Cmd_TLM_MGR_DELETE_FORWARD_AS_MS_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_ST_TLM].cmd_func = Cmd_TLM_MGR_DELETE_FORWARD_AS_ST_TLM;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_REPLAY_TLM].cmd_func = Cmd_TLM_MGR_DELETE_REPLAY_TLM;
  cmd_table[Cmd_CODE_DCU_ABORT_CMD].cmd_func = Cmd_DCU_ABORT_CMD;
  cmd_table[Cmd_CODE_DCU_DOWN_ABORT_FLAG].cmd_func = Cmd_DCU_DOWN_ABORT_FLAG;
  cmd_table[Cmd_CODE_DCU_CLEAR_LOG].cmd_func = Cmd_DCU_CLEAR_LOG;
  cmd_table[Cmd_CODE_TEST_CCP_REGISTER_TLC_ASAP].cmd_func = Cmd_TEST_CCP_REGISTER_TLC_ASAP;
  cmd_table[Cmd_CODE_TEST_CCP_GET_RAW_PARAM_INFO].cmd_func = Cmd_TEST_CCP_GET_RAW_PARAM_INFO;
  cmd_table[Cmd_CODE_DI_GS_DRIVER_RESET].cmd_func = Cmd_DI_GS_DRIVER_RESET;
  cmd_table[Cmd_CODE_DI_GS_SET_MS_FLUSH_INTERVAL].cmd_func = Cmd_DI_GS_SET_MS_FLUSH_INTERVAL;
  cmd_table[Cmd_CODE_DI_GS_SET_RP_FLUSH_INTERVAL].cmd_func = Cmd_DI_GS_SET_RP_FLUSH_INTERVAL;
  cmd_table[Cmd_CODE_DI_GS_SET_FARM_PW].cmd_func = Cmd_DI_GS_SET_FARM_PW;
  cmd_table[Cmd_CODE_DI_GS_SET_INFO].cmd_func = Cmd_DI_GS_SET_INFO;
  cmd_table[Cmd_CODE_DI_GS_CCSDS_GET_BUFFER].cmd_func = Cmd_DI_GS_CCSDS_GET_BUFFER;
  cmd_table[Cmd_CODE_DI_GS_CCSDS_SET_RATE].cmd_func = Cmd_DI_GS_CCSDS_SET_RATE;
  cmd_table[Cmd_CODE_DI_GS_UART_TLM_ON].cmd_func = Cmd_DI_GS_UART_TLM_ON;
  cmd_table[Cmd_CODE_DI_GS_UART_TLM_OFF].cmd_func = Cmd_DI_GS_UART_TLM_OFF;
  cmd_table[Cmd_CODE_WDT_INIT].cmd_func = Cmd_WDT_INIT;
  cmd_table[Cmd_CODE_WDT_ENABLE].cmd_func = Cmd_WDT_ENABLE;
  cmd_table[Cmd_CODE_WDT_DISABLE].cmd_func = Cmd_WDT_DISABLE;
  cmd_table[Cmd_CODE_WDT_STOP_CLEAR].cmd_func = Cmd_WDT_STOP_CLEAR;
  cmd_table[Cmd_CODE_WDT_START_CLEAR].cmd_func = Cmd_WDT_START_CLEAR;
  cmd_table[Cmd_CODE_UART_TEST_INIT_DI].cmd_func = Cmd_UART_TEST_INIT_DI;
  cmd_table[Cmd_CODE_UART_TEST_UPDATE].cmd_func = Cmd_UART_TEST_UPDATE;
  cmd_table[Cmd_CODE_UART_TEST_SEND_TEST].cmd_func = Cmd_UART_TEST_SEND_TEST;
  cmd_table[Cmd_CODE_UTIL_CMD_ADD].cmd_func = Cmd_UTIL_CMD_ADD;
  cmd_table[Cmd_CODE_UTIL_CMD_SEND].cmd_func = Cmd_UTIL_CMD_SEND;
  cmd_table[Cmd_CODE_UTIL_CMD_RESET].cmd_func = Cmd_UTIL_CMD_RESET;

  cmd_table[Cmd_CODE_TMGR_SET_TIME].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_TMGR_UPDATE_UNIXTIME].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_8BYTE;
  cmd_table[Cmd_CODE_TMGR_UPDATE_UNIXTIME].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_TMGR_UPDATE_UNIXTIME].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_TMGR_SET_UTL_UNIXTIME_EPOCH].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_8BYTE;
  cmd_table[Cmd_CODE_TMGR_SET_CYCLE_CORRECTION].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_8BYTE;
  cmd_table[Cmd_CODE_AM_REGISTER_APP].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_AM_REGISTER_APP].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_AM_REGISTER_APP].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_AM_INITIALIZE_APP].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_AM_EXECUTE_APP].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_AM_SET_PAGE_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_MM_SET_MODE_LIST].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_MM_SET_MODE_LIST].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_MM_SET_TRANSITION_TABLE].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_MM_SET_TRANSITION_TABLE].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_MM_SET_TRANSITION_TABLE].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_MM_START_TRANSITION].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TDSP_SET_TASK_LIST].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLCD_CLEAR_ALL_TIMELINE].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLCD_CLEAR_TIMELINE_AT].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLCD_CLEAR_TIMELINE_AT].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_TLCD_DEPLOY_BLOCK].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLCD_DEPLOY_BLOCK].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TLCD_CLEAR_ERR_LOG].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLCD_SET_SOE_FLAG].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLCD_SET_SOE_FLAG].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLCD_SET_LOUT_FLAG].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLCD_SET_LOUT_FLAG].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLCD_SET_ID_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLCD_SET_PAGE_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_GENERATE_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_GENERATE_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_GENERATE_TLM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_GENERATE_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_GENERATE_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_GENERATE_TLM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_GENERATE_TLM].param_size_infos[1].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_GENERATE_HP_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_GENERATE_MS_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_GENERATE_ST_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_GENERATE_ST_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_TLM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_TLM].param_size_infos[1].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_TLM].param_size_infos[2].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_AS_HP_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_AS_HP_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_AS_MS_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_AS_MS_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_AS_ST_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_AS_ST_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TG_FORWARD_AS_ST_TLM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_BCT_CLEAR_BLOCK].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCT_SET_BLOCK_POSITION].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCT_SET_BLOCK_POSITION].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_BCT_COPY_BCT].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCT_COPY_BCT].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCT_OVERWRITE_CMD].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCT_OVERWRITE_CMD].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_BCT_OVERWRITE_CMD].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCT_OVERWRITE_CMD].param_size_infos[1].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_BCT_OVERWRITE_CMD].param_size_infos[2].packed_info.bit.first = CA_PARAM_SIZE_TYPE_RAW;
  cmd_table[Cmd_CODE_BCT_FILL_NOP].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_BCE_ACTIVATE_BLOCK_BY_ID].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCE_INACTIVATE_BLOCK_BY_ID].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCE_ROTATE_BLOCK].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCE_COMBINE_BLOCK].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCE_TIMELIMIT_COMBINE_BLOCK].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCE_TIMELIMIT_COMBINE_BLOCK].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_BCE_SET_ROTATE_INTERVAL].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_BCE_SET_ROTATE_INTERVAL].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_MEM_SET_REGION].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_MEM_SET_REGION].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_MEM_LOAD].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_MEM_LOAD].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_RAW;
  cmd_table[Cmd_CODE_MEM_SET_DESTINATION].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_MEM_COPY_REGION_SEQ].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EL_CLEAR_LOG_BY_ERR_LEVEL].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EL_CLEAR_TLOG].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EL_CLEAR_CLOG].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EL_RECORD_EVENT].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EL_RECORD_EVENT].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EL_RECORD_EVENT].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EL_RECORD_EVENT].param_size_infos[1].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EL_TLOG_SET_PAGE_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EL_TLOG_SET_PAGE_FOR_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EL_CLOG_SET_PAGE_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EL_CLOG_SET_PAGE_FOR_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EL_ENABLE_LOGGING].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EL_DISABLE_LOGGING].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EL_ENABLE_TLOG_OVERWRITE].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EL_DISABLE_TLOG_OVERWRITE].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_EVENT_PARAM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_EVENT_PARAM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_EVENT_PARAM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_EVENT_PARAM].param_size_infos[1].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_EVENT_PARAM].param_size_infos[2].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_EVENT_PARAM].param_size_infos[2].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_CONDITION_PARAM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_CONDITION_PARAM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_CONDITION_PARAM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EH_SET_REGISTER_RULE_CONDITION_PARAM].param_size_infos[1].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_DELETE_RULE].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_INIT_RULE].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_INIT_RULE_FOR_MULTI_LEVEL].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_ACTIVATE_RULE].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_INACTIVATE_RULE].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_ACTIVATE_RULE_FOR_MULTI_LEVEL].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_INACTIVATE_RULE_FOR_MULTI_LEVEL].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_SET_RULE_COUNTER].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_SET_RULE_COUNTER].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_CLEAR_RULE_COUNTER].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_CLEAR_RULE_COUNTER_BY_EVENT].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EH_CLEAR_RULE_COUNTER_BY_EVENT].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EH_CLEAR_RULE_COUNTER_BY_EVENT].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_SET_MAX_RESPONSE_NUM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_SET_MAX_CHECK_EVENT_NUM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_SET_MAX_MULTI_LEVEL_NUM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_SET_PAGE_OF_RULE_TABLE_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_SET_PAGE_OF_RULE_SORTED_IDX_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_SET_PAGE_OF_LOG_TABLE_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_EH_SET_TARGET_ID_OF_RULE_TABLE_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_EH_INIT_RULE_BY_EVENT_GROUP].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EH_INIT_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EH_ACTIVATE_RULE_BY_EVENT_GROUP].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EH_INACTIVATE_RULE_BY_EVENT_GROUP].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EH_ACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_EH_INACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_TF_REGISTER_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TF_REGISTER_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_CA_REGISTER_CMD].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_CA_REGISTER_CMD].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_CA_REGISTER_CMD].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_RAW;
  cmd_table[Cmd_CODE_TF_SET_PAGE_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_CA_SET_PAGE_FOR_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_GENERATE_MS_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_GENERATE_MS_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_GENERATE_ST_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_GENERATE_ST_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_GENERATE_ST_TLM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_MS_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_MS_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_MS_TLM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_ST_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_ST_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_ST_TLM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_FORWARD_AS_ST_TLM].param_size_infos[1].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_REPLAY_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_REGISTER_REPLAY_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_GENERATE_MS_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_GENERATE_MS_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_GENERATE_ST_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_GENERATE_ST_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_GENERATE_ST_TLM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_MS_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_MS_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_MS_TLM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_ST_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_ST_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_ST_TLM].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_FORWARD_AS_ST_TLM].param_size_infos[1].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_REPLAY_TLM].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TLM_MGR_DELETE_REPLAY_TLM].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_DCU_ABORT_CMD].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_DCU_DOWN_ABORT_FLAG].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TEST_CCP_REGISTER_TLC_ASAP].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_TEST_CCP_GET_RAW_PARAM_INFO].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_2BYTE;
  cmd_table[Cmd_CODE_TEST_CCP_GET_RAW_PARAM_INFO].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_TEST_CCP_GET_RAW_PARAM_INFO].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_RAW;
  cmd_table[Cmd_CODE_DI_GS_SET_MS_FLUSH_INTERVAL].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_DI_GS_SET_RP_FLUSH_INTERVAL].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_DI_GS_SET_FARM_PW].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_DI_GS_SET_INFO].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_DI_GS_CCSDS_SET_RATE].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_UART_TEST_SEND_TEST].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_UTIL_CMD_ADD].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
  cmd_table[Cmd_CODE_UTIL_CMD_ADD].param_size_infos[0].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_UTIL_CMD_ADD].param_size_infos[1].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_UTIL_CMD_ADD].param_size_infos[1].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_UTIL_CMD_ADD].param_size_infos[2].packed_info.bit.first = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_UTIL_CMD_ADD].param_size_infos[2].packed_info.bit.second = CA_PARAM_SIZE_TYPE_4BYTE;
  cmd_table[Cmd_CODE_UTIL_CMD_SEND].param_size_infos[0].packed_info.bit.first = CA_PARAM_SIZE_TYPE_1BYTE;
}

#pragma section
