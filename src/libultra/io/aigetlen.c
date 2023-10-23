#include "global.h"

u32 osAiGetLength() {
    return IO_READ(AI_LEN_REG);
}
