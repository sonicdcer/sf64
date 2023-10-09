#include "common.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B1F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B238.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B28C.s")

// Matches with IDO 5.3/7.1 -O1 -g0
#ifdef NON_MATCHING
void func_8002B2C0(s32* arg0, s32* arg1, s32 arg2, u32 arg3) {
    s32 pad;

    arg3 = arg2;
    arg2--;

    while (arg3 > 0) {
        arg3 = arg2;
        arg2--;
        *arg0++ = *arg1++;
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B2C0.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B2F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B330.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B52C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B778.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B7F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/D_800C95E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B804.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B8AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2BDF0/func_8002B91C.s")
