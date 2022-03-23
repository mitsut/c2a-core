#ifndef APP_REGISTRY_H_
#define APP_REGISTRY_H_
// こいつの自動生成がほしい．．．
typedef enum
{
  AR_NOP,
  AR_DI_GS_CMD_PH,
  AR_DI_GS_MST_PH,
  AR_DI_GS_RPT_PH,
  AR_DI_UART_TEST,
  AR_GSC_DISPATCHER,
  AR_RTC_DISPATCHER,
  AR_TLC0_DISPATCHER,
  AR_TLC1_DISPATCHER,
  AR_TLC2_DISPATCHER,
  AR_EVENT_UTILITY,
  AR_ANOMALY_HANDLER,
  AR_MEM_DUMP,
  AR_TELEMETRY_MANAGER,
  AR_DIVIDED_CMD_UTILITY,
  AR_UTILITY_CMD,
  AR_UTILITY_COUNTER,
  AR_APP_DBG_FLUSH_SCREEN,
  AR_APP_DBG_PRINT_TIMESTAMP,
  AR_APP_DBG_PRINT_CMD_STATUS,
  AR_APP_DBG_PRINT_EVENT_LOGGER0,
  AR_APP_DBG_PRINT_EVENT_LOGGER1,
  AR_APP_DBG_PRINT_EVENT_HANDLER,
  AR_APP_DBG_PRINT_GIT_REV
} AR_APP_ID;

void AR_load_initial_settings(void);

#endif // APP_REGISTRY_H_
