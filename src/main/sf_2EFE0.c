#include "global.h"

extern s32 D_8015F904;
extern s32 D_80177CD0[4];
extern s32 D_8017829C;
extern s32 D_800C9B4C;
extern s16 D_8016F5BE;
extern s16 D_8016F9F0;

void func_80187520(s32, void*);

void func_8002E3E0(Object_2F4* arg0) {
    s32 var_a3 = 0;

    if (D_80178234 == 0x13) {
        if (D_8015F940 < 0xF00) {
            var_a3 = 50;
        } else if (D_8015F940 < 0x1680) {
            var_a3 = 30;
        } else if (D_8015F940 < 0x1E00) {
            var_a3 = 20;
        } else if (D_8015F940 < 0x2580) {
            var_a3 = 10;
        }
    } else {
        if (D_8015F940 < 0xF00) {
            var_a3 = 10;
        } else if (D_8015F940 < 0x1680) {
            var_a3 = 5;
        } else if (D_8015F940 < 0x1E00) {
            var_a3 = 2;
        } else if (D_8015F940 < 0x2580) {
            var_a3 = 1;
        }
    }
    if (var_a3 != 0) {
        func_80077240(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, var_a3);
    }
    D_80161A98 += var_a3;
    D_80177850 = 0xF;
}

s32 func_8002E4F8(u16* arg0, s32 arg1) {
    if ((D_8017829C == 0) && (gPlayers[0].unk_1C8 != 0)) {
        func_800BA808(arg0, arg1);
        return true;
    } else {
        return false;
    }
}

void func_8002E548(void) {
    if (D_8015F93C != 0) {
        s32 sp24 = D_8015F930[1];

        func_8008E51C(D_8015F930, D_8015F944);
        if ((D_8015F930[0] == 0) && (sp24 != D_8015F930[1]) && (D_8015F930[1] < 15)) {
            func_80019218(0x4900C02A, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_8002E5E0(Object_408* arg0) {
    func_80187520(0x5B, arg0);
}

void func_8002E604(Object_408* arg0) {
    func_80187520(0x5C, arg0);
}

void func_8002E628(Object_408* arg0) {
    func_80187520(0x5D, arg0);
}

void func_8002E64C(Object_408* arg0) {
    func_80187520(0x5E, arg0);
}

void func_8002E670(Object_2F4* arg0) {
    func_80187520(0x5F, arg0);
}

void func_8002E694(Object_2F4* arg0) {
    func_80187520(0x60, arg0);
}

void func_8002E6B8(Object_2F4* arg0) {
    func_80187520(0x61, arg0);
}

void func_8002E6DC(Object_2F4* arg0) {
    func_80187520(0x62, arg0);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002E700.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002ED60.s")

void func_8002EE34(void) {
    D_8015F904 = D_8017829C = D_80163FE0[1].unk_054 = D_80163FE0[2].unk_054 = D_80163FE0[3].unk_054 = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002EE64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002F180.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002F3E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002F5F4.s")

void func_8002F64C(void) {
    if ((D_80177CD0[0] + D_80177CD0[1] + D_80177CD0[2] + D_80177CD0[3]) == 0) {
        D_8017829C = 0;
    }
    func_8002F5F4();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002F69C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002FB4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002FC00.s")

s32 func_8002FE74(void) {
    switch (D_80178234) {
        case 14:
            return D_8015F928 == (D_800C9B4C + 0x960);
        case 17:
            return D_8016F110[2].unk_0D0 == 4;
        case 16:
            return D_8016F110[1].unk_0A6 == 2;
        default:
            return 0;
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002FEF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8003010C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_800301F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8003049C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8003088C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_80031858.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_80031900.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_800319AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_80034E64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_80035098.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_800352E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_80035448.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/D_800D4E10.s")
