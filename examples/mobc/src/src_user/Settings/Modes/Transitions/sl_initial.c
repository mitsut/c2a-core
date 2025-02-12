#pragma section REPRO
#include "sl_initial.h"

#include "../../../tlm_cmd/block_command_definitions.h"
#include "../../../tlm_cmd/command_definitions.h"

#include "../../../Drivers/Com/gs.h"

#include <src_core/applications/timeline_command_dispatcher_id_define.h>
#include <src_core/tlm_cmd/block_command_loader.h>
#include <src_core/system/time_manager/obc_time.h>

void BCL_load_sl_start_up_to_initial(void)
{
  BCL_tool_register_deploy(OBCT_sec2cycle(1), BC_HK_CYCLIC_TLM, TLCD_ID_DEPLOY_TLM);

  BCL_tool_prepare_param_uint8((uint8_t)GS_PORT_TYPE_UART);
  BCL_tool_register_cmd(OBCT_sec2cycle(2), Cmd_CODE_DI_GS_SET_INFO);

  BCL_tool_register_cmd(OBCT_sec2cycle(10), Cmd_CODE_MM_FINISH_TRANSITION);
}

#pragma section
