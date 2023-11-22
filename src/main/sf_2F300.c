#include "global.h"

extern s32 D_8015F904;
extern s32 D_80177CD0[4];
extern s32 D_8017829C;
extern s32 D_800C9B4C;
extern s16 D_8016F5BE;
extern s16 D_8016F9F0;

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8002E700.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8002ED60.s")

void func_8002EE34(void) {
    D_8015F904 = D_8017829C = D_80163FE0[1].unk_054 = D_80163FE0[2].unk_054 = D_80163FE0[3].unk_054 = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8002EE64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8002F180.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8002F3E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8002F5F4.s")

void func_8002F64C(void) {
    if ((D_80177CD0[0] + D_80177CD0[1] + D_80177CD0[2] + D_80177CD0[3]) == 0) {
        D_8017829C = 0;
    }
    func_8002F5F4();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8002F69C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8002FB4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8002FC00.s")

s32 func_8002FE74(void) {
    switch (D_80178234) {
        case 14:
            return D_8015F928 == (D_800C9B4C + 0x960);
        case 17:
            return D_8016F9F0 == 4;
        case 16:
            return D_8016F5BE == 2;
        default:
            return 0;
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8002FEF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8003010C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_800301F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8003049C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_8003088C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_80031858.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_80031900.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_800319AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_80034E64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_80035098.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_800352E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/func_80035448.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2F300/D_800D4E10.s")
