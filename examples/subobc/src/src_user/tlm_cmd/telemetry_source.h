/**
 * @file
 * @brief  テレメトリ定義に必要なヘッダー
 */
#ifndef TELEMETRY_SOURCE_H_
#define TELEMETRY_SOURCE_H_

#include "string.h" // for memcpy
#include <src_core/library/git_revision.h>
#include <src_core/system/application_manager/app_manager.h>
#include <src_core/system/task_manager/task_dispatcher.h>
#include <src_core/system/mode_manager/mode_manager.h>
#include <src_core/system/event_manager/event_logger.h>
#include <src_core/system/event_manager/event_handler.h>
#include <src_core/system/watchdog_timer/watchdog_timer.h>
#include <src_core/system/time_manager/time_manager.h>
#include <src_core/tlm_cmd/command_analyze.h>
#include <src_core/tlm_cmd/command_dispatcher_manager.h>
#include <src_core/tlm_cmd/block_command_executor.h>
#include "../applications/app_headers.h"
#include "../Settings/build_settings.h"

#endif
