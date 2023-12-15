/**
 * @file
 * @brief コマンド定義
 * @note  このコードは自動生成されています！
 * @note  コード生成 tlm-cmd-db:
 *          repository:    arkedge/c2a-core
 *          db hash (MD5): a68cdf10ca467fd750b1d988780fcb5b
 * @note  コード生成パラメータ:
 *          db_prefix:             SAMPLE_AOBC
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
  Cmd_CODE_EL_INIT = 0x0035,
  Cmd_CODE_EL_CLEAR_LOG_ALL = 0x0036,
  Cmd_CODE_EL_CLEAR_LOG_BY_ERR_LEVEL = 0x0037,
  Cmd_CODE_EL_CLEAR_STATISTICS = 0x0038,
  Cmd_CODE_EL_CLEAR_TLOG = 0x0039,
  Cmd_CODE_EL_CLEAR_CLOG = 0x003A,
  Cmd_CODE_EL_RECORD_EVENT = 0x003B,
  Cmd_CODE_EL_TLOG_SET_PAGE_FOR_TLM = 0x003C,
  Cmd_CODE_EL_CLOG_SET_PAGE_FOR_TLM = 0x003D,
  Cmd_CODE_EL_INIT_LOGGING_SETTINGS = 0x003E,
  Cmd_CODE_EL_ENABLE_LOGGING = 0x003F,
  Cmd_CODE_EL_DISABLE_LOGGING = 0x0040,
  Cmd_CODE_EL_ENABLE_LOGGING_ALL = 0x0041,
  Cmd_CODE_EL_DISABLE_LOGGING_ALL = 0x0042,
  Cmd_CODE_EL_ENABLE_TLOG_OVERWRITE = 0x0043,
  Cmd_CODE_EL_DISABLE_TLOG_OVERWRITE = 0x0044,
  Cmd_CODE_EL_ENABLE_TLOG_OVERWRITE_ALL = 0x0045,
  Cmd_CODE_EL_DISABLE_TLOG_OVERWRITE_ALL = 0x0046,
  Cmd_CODE_EH_INIT = 0x0047,
  Cmd_CODE_EH_CLEAR_ALL_RULE = 0x0048,
  Cmd_CODE_EH_LOAD_DEFAULT_RULE = 0x0049,
  Cmd_CODE_EH_SET_REGISTER_RULE_EVENT_PARAM = 0x004A,
  Cmd_CODE_EH_SET_REGISTER_RULE_CONDITION_PARAM = 0x004B,
  Cmd_CODE_EH_REGISTER_RULE = 0x004C,
  Cmd_CODE_EH_DELETE_RULE = 0x004D,
  Cmd_CODE_EH_INIT_RULE = 0x004E,
  Cmd_CODE_EH_INIT_RULE_FOR_MULTI_LEVEL = 0x004F,
  Cmd_CODE_EH_ACTIVATE_RULE = 0x0050,
  Cmd_CODE_EH_INACTIVATE_RULE = 0x0051,
  Cmd_CODE_EH_ACTIVATE_RULE_FOR_MULTI_LEVEL = 0x0052,
  Cmd_CODE_EH_INACTIVATE_RULE_FOR_MULTI_LEVEL = 0x0053,
  Cmd_CODE_EH_SET_RULE_COUNTER = 0x0054,
  Cmd_CODE_EH_CLEAR_RULE_COUNTER = 0x0055,
  Cmd_CODE_EH_CLEAR_RULE_COUNTER_BY_EVENT = 0x0056,
  Cmd_CODE_EH_CLEAR_LOG = 0x0057,
  Cmd_CODE_EH_SET_MAX_RESPONSE_NUM = 0x0058,
  Cmd_CODE_EH_SET_MAX_CHECK_EVENT_NUM = 0x0059,
  Cmd_CODE_EH_SET_MAX_MULTI_LEVEL_NUM = 0x005A,
  Cmd_CODE_EH_SET_PAGE_OF_RULE_TABLE_FOR_TLM = 0x005B,
  Cmd_CODE_EH_SET_PAGE_OF_RULE_SORTED_IDX_FOR_TLM = 0x005C,
  Cmd_CODE_EH_SET_PAGE_OF_LOG_TABLE_FOR_TLM = 0x005D,
  Cmd_CODE_EH_SET_TARGET_ID_OF_RULE_TABLE_FOR_TLM = 0x005E,
  Cmd_CODE_EH_MATCH_EVENT_COUNTER_TO_EL = 0x005F,
  Cmd_CODE_EH_INIT_RULE_BY_EVENT_GROUP = 0x0060,
  Cmd_CODE_EH_INIT_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL = 0x0061,
  Cmd_CODE_EH_ACTIVATE_RULE_BY_EVENT_GROUP = 0x0062,
  Cmd_CODE_EH_INACTIVATE_RULE_BY_EVENT_GROUP = 0x0063,
  Cmd_CODE_EH_ACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL = 0x0064,
  Cmd_CODE_EH_INACTIVATE_RULE_BY_EVENT_GROUP_FOR_MULTI_LEVEL = 0x0065,
  Cmd_CODE_EVENT_UTIL_ENABLE_EH_EXEC = 0x0066,
  Cmd_CODE_EVENT_UTIL_DISABLE_EH_EXEC = 0x0067,
  Cmd_CODE_EVENT_UTIL_EXEC_EH = 0x0068,
  Cmd_CODE_TF_INIT = 0x0069,
  Cmd_CODE_CA_INIT = 0x006A,
  Cmd_CODE_TF_REGISTER_TLM = 0x006B,
  Cmd_CODE_CA_REGISTER_CMD = 0x006C,
  Cmd_CODE_TF_SET_PAGE_FOR_TLM = 0x006D,
  Cmd_CODE_CA_SET_PAGE_FOR_TLM = 0x006E,
  Cmd_CODE_WDT_INIT = 0x0100,
  Cmd_CODE_WDT_ENABLE = 0x0101,
  Cmd_CODE_WDT_DISABLE = 0x0102,
  Cmd_CODE_WDT_STOP_CLEAR = 0x0103,
  Cmd_CODE_WDT_START_CLEAR = 0x0104,

  Cmd_CODE_MAX
} CMD_CODE;

#endif
