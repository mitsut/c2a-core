#pragma section REPRO
/**
 * @file  event_manager.c
 * @brief C2A全体のイベントを管理する
 * @note  event_logger と event_handler を管理する
 */
#include "event_manager.h"
#include "event_logger.h"
#include "event_handler.h"

void EM_initialize(void)
{
  EL_initialize();
}

#pragma section
