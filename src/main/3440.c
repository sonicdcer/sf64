#include "global.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002840.s")

void func_8000291C(void) {
    u8 sp1F;
    s32 i;

    osContInit(&D_800E2128, &sp1F, &D_800DD8F0);
    for(i = 0; i < 4; i++) {
        D_800DD8B0[i] = (sp1F >> i) & 1;
        D_800DD8B8[i] = 0;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_800029A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002AF4.s")

void func_80002BE8(void) {
    if ((D_80137E80 == 0) && (func_800072E0(&D_80144F60) == 0)) {
        osSendMesg(&D_800E2318, 15, 0);
        return;
    }
    osSendMesg(&D_800E2318, 14, 0);
}

void func_80002C50(void) {
    if ((D_80137E80 == 0) && (func_800071FC(&D_80144F60) == 0)) {
        osSendMesg(&D_800E2318, 15, 0);
        return;
    }
    osSendMesg(&D_800E2318, 14, 0);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002CB8.s")
