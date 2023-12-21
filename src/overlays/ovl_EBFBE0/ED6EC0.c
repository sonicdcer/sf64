#include "global.h"

extern s32 D_EBFBE0_801CD944;
extern s32 D_EBFBE0_801CD948;
extern s32 D_EBFBE0_801CD954;
extern s32 D_EBFBE0_801CD960;
extern s32 D_EBFBE0_801CD9B8;
extern s32 D_EBFBE0_801CD9BC;
extern s32 D_EBFBE0_801CD9C0;
extern s32 D_EBFBE0_801CD9D4;
extern s32 D_EBFBE0_801CEFC8;

void func_EBFBE0_8019E800(void);
void func_EBFBE0_8019E99C(void);
void func_EBFBE0_8019FF48(void);
void func_EBFBE0_801A4F8C(void);
void func_EBFBE0_801A4FC4(void);
void func_EBFBE0_801A53C8(void);

void func_EBFBE0_8019E800(void) {
    Memory_FreeAll();
    func_800A5D6C();
    D_80178410 = 0;
    gNextGameState = 4;
    D_80161A34 = 5;
    D_80177868 = 2;
    D_80177898 = 0;
}

void func_EBFBE0_8019E85C(void) {
    switch (D_80177868) {
        case 0:
            if (D_8017783C == 0) {
                D_80177868 = 1;
            }
            break;

        case 2:
            break;

        case 1:
            func_EBFBE0_8019E800();
            break;
    }
}

void func_EBFBE0_8019E8C8(void) {
}

void func_EBFBE0_8019E8D0(void) {
    if (D_EBFBE0_801CD9B8 > 0) {
        D_EBFBE0_801CD9B8--;
    }
    if (D_EBFBE0_801CD9BC > 0) {
        D_EBFBE0_801CD9BC--;
    }
    if (D_EBFBE0_801CD9C0 > 0) {
        D_EBFBE0_801CD9C0--;
    }

    switch (D_80177B40) {
        case 0:
            if (D_8017783C == 0) {
                D_80177B40 = 1;
            }
            break;

        case 1:
            D_80177898 = 0;
            func_EBFBE0_8019E99C();
            break;

        case 2:
            D_80177898 = 3;
            func_EBFBE0_8019FF48();
            break;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019E99C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019F164.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019F42C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019F600.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019F83C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019F910.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019F97C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019FA1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019FC04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019FD1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_8019FF48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A01A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A05B4.s")

void func_EBFBE0_801A0788(void) {
    D_80178410 = 800;

    Memory_FreeAll();
    func_800A5D6C();

    D_80178420 = 320.0f;
    D_80178424 = 240.0f;
    D_8017842C = 0.0f;
    D_80178430 = 0.0f;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A07E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A0954.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A0D14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A116C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A1528.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A19A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A1AE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A1C14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A2304.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A25C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A2674.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A281C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A2B8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A2EB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A3440.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A3550.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A36A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A3A00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A4394.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A4650.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A48C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A4A38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A4AE8.s")

void func_EBFBE0_801A4D0C(u32 arg0) {
    switch (arg0) {
        case 1:
        case 4:
            if (D_EBFBE0_801CD9D4 != 0) {
                func_EBFBE0_801A4F8C();
            } else {
                func_EBFBE0_801A4FC4();
            }
            break;

        case 3:
            func_EBFBE0_801A53C8();
        case 0:
        case 2:
            break;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A4D7C.s")

void func_EBFBE0_801A4F8C(void) {
    D_80178410 = 0;
    gGameState = 5;
    D_80177868 = 0;
    D_8017783C = 2;
    D_80177898 = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A4FC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A53C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A5770.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A5834.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A5C90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A5E80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A61B4.s")

bool func_EBFBE0_801A62FC(u32 arg0) {
    u32 sp4;
    s32 ret = true;

    switch (arg0) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            sp4 = arg0;
            break;

        case 14:
            sp4 = 0xD;
            break;
    }

    if (gSaveFile.save.data.unk_00[sp4].unk_5 & 1) {
        ret = false;
    }

    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A6368.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A6480.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A655C.s")

void func_EBFBE0_801A659C(void) {
    func_8001A838(0x1100004CU);
    func_8001A838(0x1100204CU);

    if (D_EBFBE0_801CD954 != 9) {
        func_80019218(0x49000003U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    D_EBFBE0_801CEFC8 = 0;
    D_EBFBE0_801CD944 = 2;
    D_EBFBE0_801CD948 = 0;
}

void func_EBFBE0_801A6628(void) {
    gGameState = 7;
    D_8017783C = 2;
    D_80177854 = 0;
    D_80177898 = 0;
    gHitCount = 0;

    func_800A5844();

    D_80177CA0 = 0;
    D_80177CB0 = 0.0f;
    D_8017782C = 1;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A6694.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A68E4.s")

void func_EBFBE0_801A6A24(void) {
    switch (D_EBFBE0_801CD960) {
        case 0:
            if (D_80178340 != 0) {
                D_80178340 -= 5;
            } else {
                D_EBFBE0_801CD960 = 255;
            }
            break;

        case 1:
            if (D_80178340 != 255) {
                D_80178340 += 15;
            } else {
                D_EBFBE0_801CD960 = 255;
            }
            break;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A6A98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A6DAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A6EC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A7230.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A74F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A7684.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A77B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A791C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A7A84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A7BEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A7D3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A7F1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A809C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A8738.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A89BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A8F40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A914C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9224.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9448.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9814.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9910.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9A8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9DE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B74F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9EE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9FD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AA1CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AA434.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AA778.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AB17C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AB284.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AB300.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B750C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B7510.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B7514.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AB978.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801ABCDC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801ABF1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AC200.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AC530.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AC80C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AC9A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801ACD90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AD048.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AD11C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AD718.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AD7EC.s")
