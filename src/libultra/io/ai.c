#include "global.h"
#include "PR/rcp.h"
#include "hardware.h"

s32 __osAiDeviceBusy(void) {
    register s32 status = HW_REG(AI_STATUS_REG, u32);

    if (status & AI_STATUS_AI_FULL) {
        return 1;
    } else {
        return 0;
    }
}
