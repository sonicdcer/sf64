#include "global.h"
#include "PR/rcp.h"

// TODO: Put in proper header:
typedef unsigned long int uintptr_t;

#define HW_REG(reg, type) *(volatile type*)(uintptr_t)((reg) | 0xa0000000)
#define AI_STATUS_REG 0x0450000C
#define AI_STATUS_AI_FULL (1 << 31)

s32 __osAiDeviceBusy(void) {
    register s32 status = HW_REG(AI_STATUS_REG, u32);

    if (status & AI_STATUS_AI_FULL) {
        return 1;
    } else {
        return 0;
    }
}
