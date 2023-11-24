#include "global.h"

void func_EBFBE0_801875E0(void) {
    D_80137E78 = 2;

    D_80177DB0 = 0;

    D_80177AE0 = 2;

    D_80161A34 = 0;
    D_800D2870 = 0;

    D_80177AF8 = func_EBFBE0_80187ABC();

    D_80178348 = 0;
    D_80178350 = 0;
    D_80178354 = 0;
    D_80178340 = 0;

    D_80178320 = 0;
    D_80178328 = 0;
    D_80178330 = 0;

    D_80161A36 = 0;

    D_EBFBE0_801B8284 = 0;
    D_EBFBE0_801B82A8 = 0;
    D_EBFBE0_801B82AC = 0;

    D_EBFBE0_801B833C = 0.0f;

    D_EBFBE0_801B82C0 = 0;
    D_EBFBE0_801B8280 = 0;

    D_EBFBE0_801B7BCC = 255.0f;
    D_EBFBE0_801B7BC8 = 255.0f;

    Memory_FreeAll();

    func_800A5D6C();
    D_80178420 = 320.0f;
    D_80178424 = 240.0f;

    func_EBFBE0_80188010();

    if ((D_80177AF8 == -1) || (D_EBFBE0_801B827C != 0)) {
        func_8001DC6C(0, 0x17);
        D_EBFBE0_801B82C4 = 0;
        D_EBFBE0_801B827C = 0;
    } else {
        func_8001DC6C(0, 0x16);
        D_EBFBE0_801B82C4 = 1;
    }
    gStopInputTimer = 0x1E;
}

void func_EBFBE0_80187754(void) {
    switch (D_80177AE0) {
        case 0:
            if (D_8017783C == 0) {
                D_80177898 = 0;
                D_80177AE0 = 1;
            }
            break;

        case 1:
            D_80177898 = 0;
            func_EBFBE0_801875E0();
            break;

        case 2:
            D_80177898 = 1;
            func_EBFBE0_801877F0();
            break;
    }
    D_80177DB0++;
}

void func_EBFBE0_801877F0(void) {
    if (D_EBFBE0_801B82A8 > 0) {
        D_EBFBE0_801B82A8 -= 1;
    }

    if (D_EBFBE0_801B82AC > 0) {
        D_EBFBE0_801B82AC -= 1;
    }

    switch (D_EBFBE0_801B82C4) {
        case 7:
            func_EBFBE0_80187B00();
            break;
        case 0:
            func_EBFBE0_801888E8();
            func_EBFBE0_8019111C();
            break;
        case 1:
            func_EBFBE0_8018994C();
            break;
        case 2:
            func_EBFBE0_8018A644();
            break;
        case 3:
            func_EBFBE0_8018ACEC();
            break;
        case 4:
            func_EBFBE0_8018B5C4();
            break;
        case 5:
            func_EBFBE0_8018C644();
            break;
    }
    func_EBFBE0_80190E64();
}

void func_EBFBE0_801878D8(void) {
    switch (D_EBFBE0_801B82C4) {
        case 7:
            func_EBFBE0_80187CA8();
            break;

        case 0:
            func_EBFBE0_801918FC();
            func_EBFBE0_80189208();
            Matrix_Pop(&gGfxMatrix);
            func_EBFBE0_8018F680();
            func_EBFBE0_8018F85C();
            func_EBFBE0_8018FC14();
            func_EBFBE0_8018F8E4();
            func_EBFBE0_801918FC();
            func_EBFBE0_8018F77C();
            Matrix_Pop(&gGfxMatrix);
            break;

        case 1:
            if (D_EBFBE0_801B8348 != 0) {
                func_EBFBE0_801918FC();
                func_EBFBE0_8018A2F8();
                Matrix_Pop(&gGfxMatrix);
                func_800BB5D0();
                func_EBFBE0_80190C9C();
            }
            func_EBFBE0_8018FF74();
            func_EBFBE0_801906A0();
            break;

        case 2:
            func_EBFBE0_801918FC();
            func_EBFBE0_8018A990();
            Matrix_Pop(&gGfxMatrix);
            if (D_EBFBE0_801B8344 != 0) {
                func_EBFBE0_8018FD08();
            }
            break;

        case 3:
            func_EBFBE0_801918FC();
            func_EBFBE0_8018B038();
            Matrix_Pop(&gGfxMatrix);
            break;

        case 4:
            func_EBFBE0_801918FC();
            func_EBFBE0_8018C114();
            Matrix_Pop(&gGfxMatrix);
            func_EBFBE0_80190C9C();
            break;

        case 5:
            func_EBFBE0_801918FC();
            func_EBFBE0_8018CB90();
            Matrix_Pop(&gGfxMatrix);
            break;
    }

    if (D_EBFBE0_801B8284 != 0) {
        D_80178340 = 0;
        D_80178348 = 0;
        D_80178350 = 0;
        D_80178354 = 0;
        func_80084688(2, D_EBFBE0_801B8284);
    }
}

s32 func_EBFBE0_80187ABC(void) {
    s32 ret = -1;
    s32 i;

    for (i = 0; i < 4; i++) {
        if (gControllerStatus[i] == 1) {
            ret = i;
            break;
        }
    }

    return ret;
}

void func_EBFBE0_80187B00(void) {
    switch (D_EBFBE0_801B82C0) {
        case 0:
            D_EBFBE0_801B8288 = 0;
            D_80178410 = 800;
            D_EBFBE0_801B82BC = 450;
            D_EBFBE0_801B82C0++;
            D_EBFBE0_801B82A8 = 20;
            break;

        case 1:
            if (D_EBFBE0_801B82BC != 0) {
                func_800B6F50(D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0);
                D_8017842C -= 1.0f;
                if (D_EBFBE0_801B82BC == 60) {
                    func_800182F4(0x103C00FF);
                    func_800182F4(0x113C00FF);
                }
            } else {
                D_80178410 = 0;
                D_8017829C = 0;
                D_EBFBE0_801B82C0 = 0;
                D_80177898 = 0;
                func_8001DC6C(0, 0x16);
                D_EBFBE0_801B82C4 = 1;
            }

            if (D_EBFBE0_801B8288 == 0xA) {
                D_EBFBE0_801B82BC -= 1;
            }
            break;
    }

    if ((D_EBFBE0_801B82A8 == 0) && ((D_80177DB0 & 7) == 7) && (D_EBFBE0_801B8288 < 10)) {
        D_EBFBE0_801B8288++;
    }
}

void func_EBFBE0_80187CA8(void) {
    s32 temp = 20;
    s32 temp2 = 36;

    func_800B8DD0(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    func_800A1200(temp2, temp, 1.0f, 1.0f, D_EBFBE0_801ADA44);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    func_8009D994(&gMasterDisp, D_5000300, 16, 8, 148.0f, temp, 1.0f, 1.0f);
    func_8009D994(&gMasterDisp, D_5000200, 16, 8, 164, temp, 1.0f, 1.0f);

    func_800B8DD0(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    func_8009D994(&gMasterDisp, D_50077B0, 16, 2, 36, 32, 15.2f, 1.0f);
    func_EBFBE0_80187E28();
}

void func_EBFBE0_80187E28(void) {
    s32 temp;
    s32 i;

    func_800B8DD0(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    func_800A1200(94, 38, 1.0f, 1.0f, "RANK");
    func_800A1200(146, 38, 1.0f, 1.0f, "NAME");
    func_800A1200(192, 38, 1.0f, 1.0f, "HITS");
    temp = 55;

    for (i = 0; i < D_EBFBE0_801B8288; i++) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

        func_8009FEA0(105 - ((func_8008BCBC(i + 1) - 1) * 8), temp, i + 1);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

        func_800A1200(150, temp, 1.0f, 1.0f, &D_EBFBE0_801B8248[i][0]);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

        func_8009FEA0(211 - ((func_8008BCBC(D_EBFBE0_801B8220[i]) - 1) * 8), temp, D_EBFBE0_801B8220[i]);
        temp += 17;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80188010.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_801881FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_801888E8.s")

extern UnkStruct_D_801B8350 D_EBFBE0_801B8350[];

void func_EBFBE0_80189208(void) {
    s32 i;

    D_80178548 = D_EBFBE0_801B82F8;
    D_8017854C = D_EBFBE0_801B82FC;
    D_80178550 = D_EBFBE0_801B8300;
    D_80178554 = (s32) D_EBFBE0_801B8304;
    D_80178558 = (s32) D_EBFBE0_801B8308;
    D_8017855C = (s32) D_EBFBE0_801B830C;

    if ((D_EBFBE0_801B86A4 < 2) && (D_EBFBE0_801B9040 != 0)) {
        D_EBFBE0_801B86D8 = Math_Atan2F(-D_EBFBE0_801B9060, sqrtf((-D_EBFBE0_801B905C * -D_EBFBE0_801B905C) +
                                                                  (-D_EBFBE0_801B9064 * -D_EBFBE0_801B9064))) *
                            180.0f / M_PI;
        D_EBFBE0_801B86DC = (Math_Atan2F(D_EBFBE0_801B905C, D_EBFBE0_801B9064) * 180.0f) / M_PI;

        func_8009BC2C(&D_EBFBE0_801B86C8, D_EBFBE0_801B86D8, 0.1f, 100.0f, 0.0001f);
        func_8009BC2C(&D_EBFBE0_801B86CC, D_EBFBE0_801B86DC, 0.1f, 100.0f, 0.0001f);
    }

    func_EBFBE0_80191674(D_EBFBE0_801B86C8, D_EBFBE0_801B86CC, 100.0f, &D_EBFBE0_801B82E0, &D_EBFBE0_801B82E4,
                         &D_EBFBE0_801B82E8);

    for (i = 0; i < 4; i++) {
        func_EBFBE0_8018EA78(D_EBFBE0_801ADA84[i]);
        D_EBFBE0_801B8350[D_EBFBE0_801ADA84[i]].unk_54 += D_EBFBE0_801B8350[D_EBFBE0_801ADA84[i]].unk_58;
    }

    D_80178548 = D_EBFBE0_801B8310;
    D_8017854C = D_EBFBE0_801B8314;
    D_80178550 = D_EBFBE0_801B8318;

    D_80178554 = D_EBFBE0_801B831C;
    D_80178558 = D_EBFBE0_801B8320;
    D_8017855C = D_EBFBE0_801B8324;

    func_EBFBE0_80191674(D_EBFBE0_801B86D0, D_EBFBE0_801B86D4, 100.0f, &D_EBFBE0_801B82E0, &D_EBFBE0_801B82E4,
                         &D_EBFBE0_801B82E8);

    func_EBFBE0_8018D2B8(0);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_801894E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018994C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018A2F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018A338.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018A644.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018A990.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018ABC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018ACEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018B038.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018B058.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018B5C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018C114.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018C1C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018C644.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018CB90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018CC30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018CD9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018D2B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018D510.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018D80C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018DDB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018DF0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018E058.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018E200.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018E67C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018EA78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018EDC8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018F438.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018F680.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018F77C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018F85C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018F8E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018FC14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018FD08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8018FF74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80190144.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_801903B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_801906A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80190950.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80190A98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80190B30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80190C9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80190E64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80190EA4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80190FD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_8019111C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_801912A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80191320.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_801914AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80191674.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80191798.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_80191844.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_801918FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/EBFCA0/func_EBFBE0_801919C4.s")
