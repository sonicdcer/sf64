#include "global.h"
#include "fox_title.h"

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_80188010.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_801881FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_801888E8.s")

void func_EBFBE0_80189208(void) {
    s32 i;

    D_80178548 = D_EBFBE0_801B82F8;
    D_8017854C = D_EBFBE0_801B82FC;
    D_80178550 = D_EBFBE0_801B8300;
    D_80178554 = D_EBFBE0_801B8304;
    D_80178558 = D_EBFBE0_801B8308;
    D_8017855C = D_EBFBE0_801B830C;

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
        D_EBFBE0_801B8350[D_EBFBE0_801ADA84[i]].unk_58 += D_EBFBE0_801B8350[D_EBFBE0_801ADA84[i]].unk_5C;
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_801894E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018994C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018A2F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018A338.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018A644.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018A990.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018ABC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018ACEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018B038.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018B058.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018B5C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018C114.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018C1C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018C644.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018CB90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018CC30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018CD9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018D2B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018D510.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018D80C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018DDB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018DF0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018E058.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018E200.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018E67C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018EA78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018EDC8.s")

void func_EBFBE0_8018F438(void) {
    f32 sp54;

    Lights_SetOneLight(&gMasterDisp, 0, 0, 0, 0, 0, 0, D_80178554, D_80178558, D_8017855C);

    if (D_801779C0 < D_80177988) {
        sp54 = 1.0f;
    } else {
        sp54 = 3.0f;
    }

    D_EBFBE0_801B82C8 += 70.0f;
    D_EBFBE0_801B82C8 = Math_ModF(D_EBFBE0_801B82C8, 4101.6f);

    func_800BA1D0(D_80178320, D_80178328, D_80178330, 255, 995, 1000);

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, (3079.2002f * sp54) - D_EBFBE0_801B82C8, 1);
    Matrix_Scale(gGfxMatrix, 0.6f, 0.6f, 0.6f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_602E380);

    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -6836.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_602E380);

    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -6836.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_602E380);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_8018F680(void) {
    s32 i;

    func_800B8DD0(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    for (i = 0; i < 30; i++) {
        func_8009D418(&gMasterDisp, D_6000000 + (i * 472), 236, 2, D_EBFBE0_801B9054, D_EBFBE0_801B9058 + (i * 2.0f),
                      1.0f, 1.0f);
    }
}

void func_EBFBE0_8018F77C(void) {
    func_800B8DD0(&gMasterDisp, 0x35);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, D_EBFBE0_801B905C, D_EBFBE0_801B9060, D_EBFBE0_801B9064, 1);
    Matrix_Scale(gGfxMatrix, D_EBFBE0_801B9068, D_EBFBE0_801B906C, 1.0f, 1);
    Matrix_RotateX(gGfxMatrix, M_DTOR * 90, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_60148D0);
    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_8018F85C(void) {
    func_800B8DD0(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_8009D994(&gMasterDisp, D_6013470, 16, 16, 234.0f, 20.0f, 1.0f, 1.0f);
}

#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_8018F8E4(void) {
    f32 temp2;
    s32 i;
    static f32 D_EBFBE0_801AE464 = 68.0f;
    static f32 D_EBFBE0_801AE468 = 170.0f;
    static f32 D_EBFBE0_801AE46C = 5.55f;
    static f32 D_EBFBE0_801AE470 = 0.9f;
    static f32 D_EBFBE0_801AE474 = 70.0f;
    static f32 D_EBFBE0_801AE478 = 172.0f;

    if (gStopInputTimer == 0) {
        temp2 = 188.0f;

        if ((s32) func_8009BC2C(&D_EBFBE0_801B7BC8, D_EBFBE0_801B7BCC, 0.5f, 100.0f, 1.0f) == 0.0f) {
            if (D_EBFBE0_801B7BC8 == 32.0f) {
                D_EBFBE0_801B7BCC = 255.0f;
            } else {
                D_EBFBE0_801B7BCC = 32.0f;
            }
        }

        if (D_80177AF8 < 0) {
            func_800B8DD0(&gMasterDisp, 0x55);

            gDPSetPrimColor(gMasterDisp++, 0, 0, 60, 60, 255, 200);

            func_8009D0BC(&gMasterDisp, &D_601D750, &D_601DB50, 32, 32, D_EBFBE0_801AE464, D_EBFBE0_801AE468,
                          D_EBFBE0_801AE46C, D_EBFBE0_801AE470);
            func_800B8DD0(&gMasterDisp, 0x53);

            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, (s32) D_EBFBE0_801B7BC8, (s32) D_EBFBE0_801B7BC8, 255);

            for (i = 0; i < 6; i++) {
                func_8009D994(&gMasterDisp, D_60123F0 + (704 * i), 176, 4, D_EBFBE0_801AE474,
                              D_EBFBE0_801AE478 + (i * 4.0f), 1.0f, 1.0f);
            }
        } else {
            func_800B8DD0(&gMasterDisp, 0x53);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, (s32) D_EBFBE0_801B7BC8, (s32) D_EBFBE0_801B7BC8, 255);

            for (i = 0; i < 2; i++) {
                func_8009D994(&gMasterDisp, D_600E360 + (i * 720), 120, 6, 101.0f, temp2 + (i * 6.0f), 1.0f, 1.0f);
            }
            func_8009D994(&gMasterDisp, D_600E360 + 1440, 120, 1, 101.0f, temp2 + 12, 1.0f, 1.0f);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018F8E4.s")
#endif

void func_EBFBE0_8018FC14(void) {
    s32 i;

    func_800B8DD0(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    for (i = 0; i < 2; i++) {
        func_8009D994(&gMasterDisp, D_600DDC0 + (i * 720), 120, 6, 102.0f, 209.0f + (i * 6.0f), 1.0f, 1.0f);
    }
}

#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_8018FD08(void) {
    s32 i;
    Gfx* temp_v1;
    f32 temp_fs2;
    s32 var_s0;
    s32 var_s0_2;
    f32 temp;
    static f32 D_EBFBE0_801AE47C[] = { 90.0f, 100.0f, 75.0f, 75.0f };

    temp_fs2 = D_EBFBE0_801AE47C[D_EBFBE0_801B8340];
    temp = 210.0f;

    func_800B8DD0(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    switch (D_EBFBE0_801B8340) {
        case 0:
            func_8009D994(&gMasterDisp, D_600F940, 144, 13, temp_fs2, temp, 1.0f, 1.0f);
            break;

        case 1:
            func_8009D994(&gMasterDisp, D_6010090, 120, 13, temp_fs2, temp, 1.0f, 1.0f);
            break;

        case 2:
            for (i = 0; i < 3; i++) {
                func_8009D994(&gMasterDisp, D_60106B0 + (704 * i), 176, 4, temp_fs2, temp + (i * 4), 1.0f, 1.0f);
            }
            func_8009D994(&gMasterDisp, D_60106B0 + 2112, 176, 1, temp_fs2, temp + 12.0f, 1.0f, 1.0f);
            break;

        case 3:
            for (i = 0; i < 3; i++) {
                func_8009D994(&gMasterDisp, D_6010FA0 + (i * 704), 176, 4, temp_fs2, temp + (i * 4), 1.0f, 1.0f);
            }
            func_8009D994(&gMasterDisp, D_6010FA0 + 2112, 176, 1, temp_fs2, temp + 12, 1.0f, 1.0f);
            break;
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_8018FD08.s")
#endif

void func_EBFBE0_8018FF74(void) {
    if (D_EBFBE0_801B7BD8 != 0) {
        if ((D_EBFBE0_801B7BB8 > -870.0f) && (D_EBFBE0_801B7BB8 < 900.0f) && (D_80178340 > 0)) {
            if ((D_EBFBE0_801B7BB8 < 0.0f) && (D_EBFBE0_801B7BD0 < 255)) {
                D_EBFBE0_801B7BD0 += 2;
            }
            if ((D_EBFBE0_801B7BB8 > 0.0f) && (D_EBFBE0_801B7BD0 > 0)) {
                D_EBFBE0_801B7BD0 -= 2;
            }

            func_800B8DD0(&gMasterDisp, 0x53);

            gDPSetAlphaDither(gMasterDisp++, G_AD_NOISE);
            gDPSetColorDither(gMasterDisp++, G_CD_NOISE);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_EBFBE0_801B7BD0);

            func_8009D418(&gMasterDisp, &D_600D5C0, 32, 32, D_EBFBE0_801B9080, D_EBFBE0_801B9084, D_EBFBE0_801B7BB0,
                          D_EBFBE0_801B7BB4);
            D_EBFBE0_801B9080 += 1.66f;
        }

        func_EBFBE0_801918FC();
        func_EBFBE0_80190144();
        func_EBFBE0_801903B8();

        Matrix_Pop(&gGfxMatrix);
    }
}

void func_EBFBE0_80190144(void) {
    s32 i;

    if (D_80178340 > 0) {
        D_80178340 -= 4;
    }

    D_801783D0 = D_EBFBE0_801B7BB8;
    D_801783D4 = D_EBFBE0_801B7BBC;

    if (D_801783D0 < 950.0f) {
        if (D_801783D0 > -900.0f) {
            D_80178340 += 8;
            if (D_80178340 > 60) {
                D_80178340 = 60;
            }
            D_80178348 = 208;
            D_80178350 = 208;
            D_80178354 = 208;
        }
    }

    if (D_80178340 > 0) {
        func_800B8DD0(&gMasterDisp, 0x3E);

        gDPSetAlphaDither(gMasterDisp++, G_AD_NOISE);
        gDPSetColorDither(gMasterDisp++, G_CD_NOISE);

        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, D_801783D0, D_801783D4, -200.0f, 1);

        for (i = 0; i < 4; i++) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, D_EBFBE0_801AE4EC[i] * 0.5f, D_EBFBE0_801AE4EC[i] * 0.5f,
                         D_EBFBE0_801AE4EC[i] * 0.5f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);

            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, D_EBFBE0_801AE51C[i], D_EBFBE0_801AE528[i]);
            gSPDisplayList(gMasterDisp++, D_EBFBE0_801AE48C[i]);

            Matrix_Pop(&gGfxMatrix);
        }
        Matrix_Pop(&gGfxMatrix);
    }
}

// needs in-function static
#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_801903B8(void) {
    static s32 D_EBFBE0_801AE558 = 12;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 var_fs1;
    f32 temp;
    s32 i;

    func_800B8DD0(&gMasterDisp, 0x3E);

    gDPSetAlphaDither(gMasterDisp++, G_AD_NOISE);
    gDPSetColorDither(gMasterDisp++, G_CD_NOISE);

    if (D_80178340 > 0) {
        temp_fs3 = D_801783D0 * -0.03f;
        temp_fs4 = D_801783D4 * 0.03f;

        var_fs1 = 1.0f;
        if (D_80178340 < 10) {
            var_fs1 = D_80178340 / 10.0f;
        }

        var_fs1 *= 0.5f;

        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, D_801783D0, D_801783D4, -200.0f, 1);

        for (i = 4; i < 12; i++) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, D_EBFBE0_801AE4BC[i] * temp_fs3, -D_EBFBE0_801AE4BC[i] * temp_fs4, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, D_EBFBE0_801AE4EC[i] * 0.5f, D_EBFBE0_801AE4EC[i] * 0.5f,
                         D_EBFBE0_801AE4EC[i] * 0.5f, 1);

            Matrix_SetGfxMtx(&gMasterDisp);

            temp = (f32) D_EBFBE0_801AE528[i] * var_fs1;

            if (i != 10) {
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, D_EBFBE0_801AE51C[i], (s32) temp);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, D_EBFBE0_801AE51C[i], D_EBFBE0_801AE558);
            }
            gSPDisplayList(gMasterDisp++, D_EBFBE0_801AE48C[i]);
            Matrix_Pop(&gGfxMatrix);
        }
        Matrix_Pop(&gGfxMatrix);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_801903B8.s")
#endif

void func_EBFBE0_801906A0(void) {
    s32 i;

    switch (D_EBFBE0_801B7BD4) {
        case 0:
            func_800B8DD0(&gMasterDisp, 0x55);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, (s32) D_EBFBE0_801B7BDC);
            func_8009C320(&gMasterDisp, D_6014140, D_60147C0, 256, 13, 90.0f, 110.0f, 1.0f, 1.0f);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, (s32) D_EBFBE0_801B7BE0);
            func_8009C320(&gMasterDisp, D_60147E0, D_60148B0, 32, 13, 150.0f, 110.0f, 1.0f, 1.0f);
            break;

        case 1:
            func_800B8DD0(&gMasterDisp, 0x53);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, (s32) D_EBFBE0_801B7BDC);

            for (i = 0; i < 5; i++) {
                func_8009D418(&gMasterDisp, D_6006EA0 + (2048 * i), 128, 16, D_EBFBE0_801B9070,
                              D_EBFBE0_801B9074 + (16 * i * D_EBFBE0_801B907C), D_EBFBE0_801B9078, D_EBFBE0_801B907C);
            }
            func_8009D418(&gMasterDisp, D_600BEA0, 128, 8, D_EBFBE0_801B9070,
                          (80.0f * D_EBFBE0_801B907C) + D_EBFBE0_801B9074, D_EBFBE0_801B9078, D_EBFBE0_801B907C);

        case -1:
            break;
    }
}

void func_EBFBE0_80190950(void) {
    Lights_SetOneLight(&gMasterDisp, D_EBFBE0_801B82E0, D_EBFBE0_801B82E4, D_EBFBE0_801B82E8, 0, 0, 0, D_80178554,
                  D_80178558, D_8017855C);
    func_800B8DD0(&gMasterDisp, 0x17);

    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, D_EBFBE0_801B9048, D_EBFBE0_801B904C, 1);
    Matrix_Scale(gGfxMatrix, 0.4f, 0.4f, 0.4f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_6018D40);

    if (D_EBFBE0_801B7BE4 != 0) {
        func_EBFBE0_80190A98();
    }

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_80190A98(void) {
    Matrix_Translate(gGfxMatrix, 401.0f, -249.0f, -22.0f, 1);
    Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_602A720);
}

void func_EBFBE0_80190B30(s32 arg0) {
    Lights_SetOneLight(&gMasterDisp, D_EBFBE0_801B82E0, D_EBFBE0_801B82E4, D_EBFBE0_801B82E8, D_80178548, D_8017854C,
                  D_80178550, D_80178554, D_80178558, D_8017855C);
    func_800B8DD0(&gMasterDisp, 0x17);

    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, D_EBFBE0_801B84E8[arg0].unk_00.x, -12.8f, D_EBFBE0_801B9044, 1);
    Matrix_Scale(gGfxMatrix, 0.8f, 0.8f, 0.8f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_601C7C0);

    Matrix_Pop(&gGfxMatrix);
}

#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_80190C9C(void) {
    s32 i;
    static f32 D_EBFBE0_801AE55C = 89.0f;
    static f32 D_EBFBE0_801AE560 = 17.0f;
    static f32 D_EBFBE0_801AE564 = 101.0f;
    static f32 D_EBFBE0_801AE568 = 197.0f;

    switch (D_EBFBE0_801B7BF0) {
        case 0:
            break;

        case 1:
            func_800B8DD0(&gMasterDisp, 0x53);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            func_8009D994(&gMasterDisp, D_600E980, 144, 28, D_EBFBE0_801AE55C, D_EBFBE0_801AE560, 1.0f, 1.0f);
            break;

        case 2:
            func_800B8DD0(&gMasterDisp, 0x53);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

            for (i = 0; i < 4; i++) {
                func_8009D994(&gMasterDisp, D_6011890 + (672 * i), 112, 6, D_EBFBE0_801AE564,
                              D_EBFBE0_801AE568 + (6.0f * i), 1.0f, 1.0f);
            }
            func_8009D994(&gMasterDisp, D_6012310, 112, 2, D_EBFBE0_801AE564, D_EBFBE0_801AE568 + (6.0f * 4), 1.0f,
                          1.0f);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_title/func_EBFBE0_80190C9C.s")
#endif

void func_EBFBE0_80190E64(void) {
    if (D_EBFBE0_801B82C4 == 0) {
        func_EBFBE0_80190FD0();
    } else {
        func_EBFBE0_80190EA4();
    }
}

void func_EBFBE0_80190EA4(void) {
    switch (D_EBFBE0_801B8280) {
        case 0:
            if (gCurrentInput[D_80177AF8].button & 0xD00F) { // START, A, B, C-left, C-Down, C-Up, C-Right
                func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801B8284 = 0;
                D_EBFBE0_801B8280 = 1;
                gStopInputTimer = 0x1E;
            }
            break;

        case 1:
            if (D_EBFBE0_801B8284 < 120) {
                D_EBFBE0_801B8284 += 18;
            } else {
                func_8001DC6C(0, 0x17);
                D_80178410 = 0;
                D_8017829C = 0;
                D_EBFBE0_801B82C0 = 0;
                D_80177898 = 0;
                D_EBFBE0_801B82C4 = 0;
                gStopInputTimer = 30;
                D_EBFBE0_801B8284 = 0;
                D_EBFBE0_801B8280 = 0;
            }
            break;
    }
}

void func_EBFBE0_80190FD0(void) {
    if (gStopInputTimer == 0) {
        switch (D_EBFBE0_801B8280) {
            case 0:
                if (((gCurrentInput[D_80177AF8].button & START_BUTTON) || (gCurrentInput[D_80177AF8].button & A_BUTTON)) &&
                    (D_EBFBE0_801B8280 == 0)) {
                    func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_800182F4(0x101E00FF);
                    func_800182F4(0x111E00FF);
                    D_EBFBE0_801B8284 = 0;
                    D_EBFBE0_801B8280 = 1;
                }
                break;

            case 1:
                if (D_EBFBE0_801B8284 < 120) {
                    D_EBFBE0_801B8284 += 18;
                } else {
                    D_80177834 = 3;
                    D_8017783C = 2;
                    D_8017784C = 0;
                    D_80177898 = 0;
                    D_80178410 = 0;
                    D_EBFBE0_801B8280 = 0;
                    D_EBFBE0_801B8284 = 0;
                    gStopInputTimer = 3;
                }
                break;
        }
    }
}

void func_EBFBE0_8019111C(void) {
    f32 x;
    f32 y;

    if ((D_EBFBE0_801B82B0 == 0) && (D_EBFBE0_801B9040 == 0) &&
        ((gCurrentInput[D_80177AF8].stick_x != 0) || (gCurrentInput[D_80177AF8].stick_y != 0))) {
        D_EBFBE0_801B9040 = 1;
        D_EBFBE0_801B86A4 = 0;
    }

    x = gCurrentInput[D_80177AF8].stick_x;
    y = gCurrentInput[D_80177AF8].stick_y;

    if (D_EBFBE0_801B9040 != 0) {
        if (((x * 0.2f) + D_EBFBE0_801B905C > -500.0f) && ((x * 0.2f) + D_EBFBE0_801B905C < 500.0f)) {
            D_EBFBE0_801B905C += x * 0.2f;
        }
        if (((y * 0.2f) + D_EBFBE0_801B9060 > -500.0f) && ((y * 0.2f) + D_EBFBE0_801B9060 < 500.0f)) {
            D_EBFBE0_801B9060 += y * 0.2f;
        }
    }

    if ((D_EBFBE0_801B9040 != 0) && (gCurrentInput[D_80177AF8].stick_x == 0) && (gCurrentInput[D_80177AF8].stick_y == 0)) {
        D_EBFBE0_801B86A4++;
    } else {
        D_EBFBE0_801B86A4 = 0;
    }
}

void func_EBFBE0_801912A0(void) {
    switch (D_EBFBE0_801B869C) {
        case 0:
            D_80178340 -= 4;
            if (D_80178340 < 0) {
                D_80178340 = 0;
                D_EBFBE0_801B869C = 255;
            }
            break;

        case 1:
            D_80178340 += 15;
            if (D_80178340 > 255) {
                D_80178340 = 255;
                D_EBFBE0_801B869C = 255;
            }
            break;
    }
}

void func_EBFBE0_80191320(s32 arg0, f32* arg1, f32* arg2, f32* arg3, f32* arg4, f32* arg5, f32* arg6, f32 arg7,
                          f32 arg8, f32 arg9) {
    Vec3f sp54;
    Vec3f sp48;
    f32* sp44;
    f32* sp40;
    f32* sp3C;
    f32* var_t0;
    f32* var_v0;
    f32* var_v1;

    if (arg0 != 0) {
        var_v0 = arg4;
        var_v1 = arg5;
        var_t0 = arg6;
        sp44 = arg1;
        sp40 = arg2;
        sp3C = arg3;
    } else {
        var_v0 = arg1;
        var_v1 = arg2;
        var_t0 = arg3;
        arg9 = -arg9;
        sp44 = arg4;
        sp40 = arg5;
        sp3C = arg6;
    }

    sp48.x = 0.0f;
    sp48.y = 0.0f;
    sp48.z = arg9;

    Matrix_Translate(gCalcMatrix, *var_v0, *var_v1, *var_t0, 0);
    Matrix_RotateY(gCalcMatrix, M_DTOR * arg8, 1);
    Matrix_RotateX(gCalcMatrix, M_DTOR * arg7, 1);
    Matrix_MultVec3f(gCalcMatrix, &sp48, &sp54);

    *sp44 = sp54.x;
    *sp40 = sp54.y;
    *sp3C = sp54.z;

    sp48.x = 0.0f;
    sp48.y = 1.0f;
    sp48.z = 0.0f;

    Matrix_RotateY(gCalcMatrix, M_DTOR * arg8, 0);
    Matrix_RotateX(gCalcMatrix, M_DTOR * arg7, 1);
    Matrix_MultVec3f(gCalcMatrix, &sp48, &sp54);

    D_EBFBE0_801B829C = sp54.x;
    D_EBFBE0_801B82A0 = sp54.y;
    D_EBFBE0_801B82A4 = sp54.z;
}

void func_EBFBE0_801914AC(f32 arg0, f32 arg1, f32 arg2, f32* arg3, f32* arg4, f32* arg5, f32 arg6, f32* arg7, f32* arg8,
                          f32* arg9, f32 argA, f32 argB, f32 argC) {
    Vec3f sp44;
    Vec3f sp38;

    sp38.x = 0.0f;
    sp38.y = 0.0f;
    sp38.z = argA;

    Matrix_Translate(gCalcMatrix, arg0, arg1, arg2, 0);

    Matrix_RotateY(gCalcMatrix, M_DTOR * argC, 1);
    Matrix_RotateX(gCalcMatrix, M_DTOR * argB, 1);

    Matrix_MultVec3f(gCalcMatrix, &sp38, &sp44);

    *arg7 = sp44.x;
    *arg8 = sp44.y;
    *arg9 = sp44.z;

    sp38.x = 0.0f;
    sp38.y = 0.0f;
    sp38.z = arg6;

    Matrix_Translate(gCalcMatrix, arg0, arg1, arg2, 0);
    Matrix_RotateY(gCalcMatrix, M_DTOR * argC, 1);
    Matrix_RotateX(gCalcMatrix, M_DTOR * argB, 1);
    Matrix_MultVec3f(gCalcMatrix, &sp38, &sp44);

    *arg3 = sp44.x;
    *arg4 = sp44.y;
    *arg5 = sp44.z;

    sp38.x = 0.0f;
    sp38.y = 1.0f;
    sp38.z = 0.0f;

    Matrix_RotateY(gCalcMatrix, M_DTOR * argC, 0);
    Matrix_RotateX(gCalcMatrix, M_DTOR * argB, 1);
    Matrix_MultVec3f(gCalcMatrix, &sp38, &sp44);

    D_EBFBE0_801B829C = sp44.x;
    D_EBFBE0_801B82A0 = sp44.y;
    D_EBFBE0_801B82A4 = sp44.z;
}

void func_EBFBE0_80191674(f32 arg0, f32 arg1, f32 arg2, f32* arg3, f32* arg4, f32* arg5) {
    f32 sp34;
    f32 sp30;
    Vec3f sp24;
    Vec3f sp18;

    sp18.x = 0.0f;
    sp18.y = 0.0f;
    sp18.z = arg2;

    func_EBFBE0_80191798(&sp34, &sp30);

    Matrix_RotateX(gCalcMatrix, M_DTOR * -sp34, 0);
    Matrix_RotateY(gCalcMatrix, M_DTOR * -sp30, 1);
    Matrix_RotateY(gCalcMatrix, M_DTOR * arg1, 1);
    Matrix_RotateX(gCalcMatrix, M_DTOR * arg0, 1);

    Matrix_MultVec3f(gCalcMatrix, &sp18, &sp24);

    *arg3 = sp24.x;
    *arg4 = sp24.y;
    *arg5 = sp24.z;
}

void func_EBFBE0_80191798(f32* arg0, f32* arg1) {
    f32 temp_fv1 = D_80177978 - D_801779A0;
    f32 temp_fv2 = D_80177980 - D_801779B8;
    f32 temp_ft4 = D_80177988 - D_801779C0;

    *arg0 = -Math_Atan2F(temp_fv2, sqrtf(SQ(temp_fv1) + SQ(temp_ft4))) * (180.0f / M_PI);
    *arg1 = Math_Atan2F(temp_fv1, temp_ft4) * (180.0f / M_PI);
}

void func_EBFBE0_80191844(f32 arg0, f32 arg1) {
    Vec3f sp24;
    Vec3f sp18;

    sp18.x = 0.0f;
    sp18.y = 1.0f;
    sp18.z = 0.0f;

    Matrix_RotateY(gCalcMatrix, M_DTOR * arg1, 0);
    Matrix_RotateX(gCalcMatrix, M_DTOR * arg0, 1);

    Matrix_MultVec3f(gCalcMatrix, &sp18, &sp24);

    D_EBFBE0_801B829C = sp24.x;
    D_EBFBE0_801B82A0 = sp24.y;
    D_EBFBE0_801B82A4 = sp24.z;
}

void func_EBFBE0_801918FC(void) {
    Matrix_Push(&gGfxMatrix);
    Matrix_LookAt(gGfxMatrix, D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0, D_EBFBE0_801B829C,
                  D_EBFBE0_801B82A0, D_EBFBE0_801B82A4, 1);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
}

void func_EBFBE0_801919C4(u16** arg0, s32 arg1) {
    D_80178720 = arg0;
    D_80178724 = 0;
    D_80178308 = arg0[D_80178724];
    D_80177D68 = arg1;
    D_8017829C = 100;

    switch (D_80177834) {
        case 2:
            D_8017872C = 176;
            D_80178728 = 85;
            D_80178730 = 80.0f;
            D_80178734 = 174.0f;
            D_80178738 = 4.63f;
            D_8017873C = 32.0f;
            D_80178740 = 174.0f;
            break;

        case 7:
            D_8017872C = 179;
            D_80178728 = 79;
            D_80178730 = 74.0f;
            D_80178734 = 178.0f;
            D_80178738 = 4.53f;
            D_8017873C = 26.0f;
            D_80178740 = 178.0f;
    }

    func_8001ACDC(func_800C2890(D_80178308));
}
