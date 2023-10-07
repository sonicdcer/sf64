#include "common.h"

extern s32 D_8013C3D0;
extern s32 D_80144BD0;

void func_80006F20(void) {
    D_80144BD0 = &D_8013C3D0;
}

void func_80006F38(s32 arg0) {
    //! FAKE:
    s32 new_var;
    s32 new_var2;
    s32* new_var3;

    if (!D_80144BD0) {}

    new_var2 = arg0;
    new_var = *(new_var3 = &new_var2);
    D_80144BD0 = D_80144BD0 + ((new_var + 0xF) & (~0xF));
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_80006F60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_80006FD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_80007068.s")

void func_8000707C(s32* arg0, s32 arg1) {
    *arg0 = arg1;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_80007088.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_800070C8.s")
