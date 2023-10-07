#include "common.h"

extern s32 D_8013C3D0;
extern s32 D_80144BD0;

void func_80006F20(void) {
    D_80144BD0 = &D_8013C3D0;
}

s32 func_80006F38(s32 arg0) {
    s32 tmp = D_80144BD0;
    
    D_80144BD0 = ((arg0 + 0xF) & ~0xF) + D_80144BD0;
    return tmp;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_80006F60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_80006FD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_80007068.s")

void func_8000707C(s32* arg0, s32 arg1) {
    *arg0 = arg1;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_80007088.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_800070C8.s")
