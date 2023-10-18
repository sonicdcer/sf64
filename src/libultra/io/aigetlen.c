#include "global.h"
#include "hardware.h"

u32 osAiGetLength() {
    return HW_REG(AI_LEN_REG, u32);
}
