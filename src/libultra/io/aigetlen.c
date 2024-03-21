#include "PR/rcp.h"

u32 osAiGetLength() {
    return IO_READ(AI_LEN_REG);
}
