#pragma section REPRO
#include "app_info.h"

#include <stddef.h> // for NULL

AppInfo create_app_info(const char* name,
                        void (*initializer)(void),
                        void (*entry_point)(void))
{
  AppInfo ai;

  ai.name = name;
  ai.init_duration = 0;
  ai.prev = 0;
  ai.max = 0;
  ai.min = 0xffffffff;
  ai.initializer = initializer;
  ai.entry_point = entry_point;

  return ai;
}
#pragma section
