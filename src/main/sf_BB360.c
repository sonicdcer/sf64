#include "global.h"

void func_800BA760(void) {
    func_800B9358();
    if (D_80177D50 == 1.3f) {
        D_801782F8 = func_800C2F30(D_80178308, D_801782D8);
    }
}

s32 func_800BA7BC(s32 arg0, s32 arg1) {
    s32 var_v0 = D_800D4A70;

    if (arg1 == var_v0) {
        return 0;
    }

    if (arg1 < var_v0) {
        return 1;
    }

    if (var_v0 < arg1) {
        D_800D4A70 = arg1;
        return 2;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BA808.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BAAE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BB388.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BB5D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BC040.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BC4B0.s")
