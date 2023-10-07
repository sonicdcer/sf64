#include "common.h"

extern s32 func_800071FC(s32*);
extern s32 func_800072E0(s32*);
extern void func_8001FFC0(s32*, u8*, s32*);
extern s32 func_80020720(s32*, s32, s32);

extern s8 D_800DD8B0;
extern s8 D_800DD8B1;
extern s8 D_800DD8B2;
extern s8 D_800DD8B3;
extern s8 D_800DD8B8;
extern s8 D_800DD8B9;
extern s8 D_800DD8BA;
extern s8 D_800DD8BB;
extern s32 D_800DD8F0;
extern s32 D_800E2128;
extern s32 D_800E2318;
extern u8 D_80137E80;
extern s32 D_80144F60;

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002840.s")

void func_8000291C(void) {
    u8 sp1F;

    func_8001FFC0(&D_800E2128, &sp1F, &D_800DD8F0);
    D_800DD8B0 = sp1F & 1;
    D_800DD8B8 = 0;
    D_800DD8B1 = (sp1F >> 1) & 1;
    D_800DD8B9 = 0;
    D_800DD8B2 = (sp1F >> 2) & 1;
    D_800DD8BA = 0;
    D_800DD8B3 = (sp1F >> 3) & 1;
    D_800DD8BB = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_800029A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002AF4.s")

void func_80002BE8(void) {
    if ((D_80137E80 == 0) && (func_800072E0(&D_80144F60) == 0)) {
        func_80020720(&D_800E2318, 15, 0);
        return;
    }
    func_80020720(&D_800E2318, 14, 0);
}

void func_80002C50(void) {
    if ((D_80137E80 == 0) && (func_800071FC(&D_80144F60) == 0)) {
        func_80020720(&D_800E2318, 15, 0);
        return;
    }
    func_80020720(&D_800E2318, 14, 0);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002CB8.s")
