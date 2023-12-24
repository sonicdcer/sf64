#include "global.h"

void func_80187520(s32, void*);

void func_8002E3E0(Object_2F4* obj2F4) {
    s32 hits = 0;

    if (gCurrentLevel == LEVEL_VENOM_SW) {
        if (D_8015F940 < 0xF00) {
            hits = 50;
        } else if (D_8015F940 < 0x1680) {
            hits = 30;
        } else if (D_8015F940 < 0x1E00) {
            hits = 20;
        } else if (D_8015F940 < 0x2580) {
            hits = 10;
        }
    } else {
        if (D_8015F940 < 0xF00) {
            hits = 10;
        } else if (D_8015F940 < 0x1680) {
            hits = 5;
        } else if (D_8015F940 < 0x1E00) {
            hits = 2;
        } else if (D_8015F940 < 0x2580) {
            hits = 1;
        }
    }
    if (hits != 0) {
        func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, hits);
    }
    gHitCount += hits;
    D_80177850 = 15;
}

s32 func_8002E4F8(u16* arg0, s32 arg1) {
    if ((gRadioState == 0) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_0)) {
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
            Audio_PlaySfx(0x4900C02A, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_8002E5E0(Object_408* obj408) {
    func_80187520(0x5B, obj408);
}

void func_8002E604(Object_408* obj408) {
    func_80187520(0x5C, obj408);
}

void func_8002E628(Object_408* obj408) {
    func_80187520(0x5D, obj408);
}

void func_8002E64C(Object_408* obj408) {
    func_80187520(0x5E, obj408);
}

void func_8002E670(Object_2F4* obj408) {
    func_80187520(0x5F, obj408);
}

void func_8002E694(Object_2F4* obj408) {
    func_80187520(0x60, obj408);
}

void func_8002E6B8(Object_2F4* obj408) {
    func_80187520(0x61, obj408);
}

void func_8002E6DC(Object_2F4* obj408) {
    func_80187520(0x62, obj408);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002E700.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002ED60.s")

void func_8002EE34(void) {
    D_8015F904 = gRadioState = gObjects2F4[1].unk_054 = gObjects2F4[2].unk_054 = gObjects2F4[3].unk_054 = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002EE64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002F180.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002F3E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002F5F4.s")

void func_8002F64C(void) {
    if ((D_80177CD0[0] + D_80177CD0[1] + D_80177CD0[2] + D_80177CD0[3]) == 0) {
        gRadioState = 0;
    }
    func_8002F5F4();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002F69C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002FB4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_2EFE0/func_8002FC00.s")

s32 func_8002FE74(void) {
    switch (gCurrentLevel) {
        case LEVEL_FORTUNA:
            return D_8015F928 == (D_800C9B4C + 0x960);
        case LEVEL_BOLSE:
            return gObjects408[2].unk_0D0 == 4;
        case LEVEL_KATINA:
            return gObjects408[1].unk_0A6 == 2;
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
