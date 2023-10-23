

#include "global.h"

s32 func_80007130(s32 arg0, u8* arg1) {
    if (osEepromRead(&D_800E2128, arg0, arg1)) {
        return -1;
    } else {
        return 0;
    }
}

s32 func_8000716C(s32 arg0, u8* arg1) {
    s64 temp_ret;
    s64 temp_ret_2;
    s64 temp_ret_3;

    if (osEepromWrite(&D_800E2128, arg0, arg1)) {
        return -1;
    }
    temp_ret = __ull_div(osClockRate, 0x3D09);
    temp_ret_2 = __ll_mul(0x3A98, temp_ret);
    temp_ret_3 = __ull_div(temp_ret_2, 0x40);
    func_800070C8(temp_ret_3);

    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7D30/func_800071FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7D30/func_800072E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7D30/D_800C8120.s")
