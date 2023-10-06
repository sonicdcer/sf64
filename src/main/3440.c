#include "common.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002840.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_8000291C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_800029A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002AF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002BE8.s")

s32 func_800071FC(s32*);
s32 func_80020720(s32*, s32, s32);

extern s32 D_800E2318;
extern u8 D_80137E80;
extern s32 D_80144F60;

void func_80002C50(void) {
    if ((D_80137E80 == 0) && (func_800071FC(&D_80144F60) == 0)) {
        func_80020720(&D_800E2318, 15, 0);
        return;
    }
    func_80020720(&D_800E2318, 14, 0);
}


#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002CB8.s")
