#include "common.h"

s32 func_800234B0(s32*, u8, s32, s32);

extern s32 D_800E2128;

s32 func_80007130(s32 arg0, s32 arg1) {
    if (func_800234B0(&D_800E2128, arg0, arg1, arg0) != 0) {
        return -1;
    } else {
        return 0;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7D30/func_8000716C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7D30/func_800071FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7D30/func_800072E0.s")
