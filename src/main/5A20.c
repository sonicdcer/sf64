#include "common.h"

extern s32 D_8013B3A0;
extern s32 D_8013B3A4;
extern s32 D_8013B3A8;
extern s32 D_8013B3AC;
extern s32 D_8013B3B0;
extern s32 D_8013B3B4;

extern void func_80005680(s32, s32, s32*);
extern u64 func_80023000(void);

f32 func_80004E20(f32 arg0, f32 arg1) {
    return arg0 - ((s32)(arg0 / arg1) * arg1);
}

void func_80004E4C(void) {
    D_8013B3A4 = (s32)func_80023000() % 30000;
    D_8013B3A8 = (s32)func_80023000() % 30000;
    D_8013B3AC = (s32)func_80023000() % 30000;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80004EB0.s")

void func_80004FC8(s32 arg0, s32 arg1, s32 arg2) {
    D_8013B3B0 = arg0;
    D_8013B3B4 = arg1;
    D_8013B3A0 = arg2;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80004FE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005100.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_800051F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005320.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_800053C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_800054C8.s")

f32 func_800055DC(f32 arg0, s32 arg1) {
    f32 var_fv1 = 1.0f;
    
    while (arg1 > 0) {
        arg1--;
        var_fv1 *= arg0;
    }
    return var_fv1;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005604.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005680.s")

void func_80005708(s32* arg0) {
    func_80005680(*arg0 + 64, *arg0, arg0);
    *arg0 += 0x40;
}

void func_80005740(s32* arg0) {
    *arg0 -= 64;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005754.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005B00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005C34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005D44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005E90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005FE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_8000612C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006500.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_8000671C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006970.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006A20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006AB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006C7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006E3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006EB8.s")
