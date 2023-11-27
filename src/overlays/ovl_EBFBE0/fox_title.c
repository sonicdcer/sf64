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

            if (D_EBFBE0_801B8288 == 10) {
                D_EBFBE0_801B82BC--;
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

s32 func_EBFBE0_80188010(void) {
    s32 temp1;
    s32 temp2;
    s32 temp3;
    s32 i;
    s32 j;

    for (i = 0; i < 10; i++) {
        D_EBFBE0_801B8220[i] = 0;
        for (j = 0; j < 3; j++) {
            D_EBFBE0_801B81A8[i][j] = 0;
        }
    }

    for (i = 0; i < 10; i++) {
        D_EBFBE0_801B8248[i][0] = gSaveFile.save.data.unk_18[i][0] & 0xFF;
        D_EBFBE0_801B8248[i][1] = gSaveFile.save.data.unk_18[i][1] & 0xFF;
        D_EBFBE0_801B8248[i][2] = gSaveFile.save.data.unk_18[i][2] & 0xFF;
        D_EBFBE0_801B8248[i][3] = 0;

        temp3 = gSaveFile.save.data.unk_36[i];

        for (j = 0; j < temp3; j++) {
            temp2 = gSaveFile.save.data.unk_5E[i][j].unk_0;
            temp2 |= (gSaveFile.save.data.unk_5E[i][j].unk_C & 1) * 256;

            D_EBFBE0_801B8220[i] += temp2;

            D_EBFBE0_801B81A8[i][0] += gSaveFile.save.data.unk_5E[i][j].unk_D & 1;
            D_EBFBE0_801B81A8[i][1] += gSaveFile.save.data.unk_5E[i][j].unk_F & 1;
            D_EBFBE0_801B81A8[i][2] += gSaveFile.save.data.unk_5E[i][j].unk_E & 1;
        }
    }

    temp1 = D_EBFBE0_801B8220[0];

    for (i = 1; i < 10; i++) {
        if (temp1 < D_EBFBE0_801B8220[i]) {
            temp1 = D_EBFBE0_801B8220[i];
        }
    }

    return temp1;
}

void func_EBFBE0_801881FC(void) {
    bool var_a1 = true;
    s32 i;

    for (i = 0; i < 16; i++) {
        if ((i != 14) && (!(gSaveFile.save.data.unk_00[i].unk_3 & 1))) {
            var_a1 = false;
            break;
        }
    }

    D_EBFBE0_801B82BC = 900;

    D_8017829C = 0;

    D_EBFBE0_801B869C = 255;

    D_80178410 = 800;

    D_EBFBE0_801B9040 = 0;
    D_EBFBE0_801B86C8 = 0.0f;
    D_EBFBE0_801B86CC = -180.0f;
    D_EBFBE0_801B82F8 = 124;
    D_EBFBE0_801B82FC = 108;
    D_EBFBE0_801B8300 = 75;
    D_EBFBE0_801B8304 = 0.0f;
    D_EBFBE0_801B8308 = 0.0f;
    D_EBFBE0_801B830C = 0.0f;
    D_EBFBE0_801B86D0 = -70.0f;
    D_EBFBE0_801B86D4 = 22.0f;
    D_EBFBE0_801B8310 = 30;
    D_EBFBE0_801B8314 = 29;
    D_EBFBE0_801B8318 = 40;
    D_EBFBE0_801B831C = 6;
    D_EBFBE0_801B8320 = 1;
    D_EBFBE0_801B8324 = 11;
    D_EBFBE0_801B9054 = 26.0f;
    D_EBFBE0_801B9058 = 37.0f;
    D_EBFBE0_801B9068 = 1.5f;
    D_EBFBE0_801B906C = 3.0f;
    D_EBFBE0_801B905C = 124.0f;
    D_EBFBE0_801B9060 = 242.0f;
    D_EBFBE0_801B9064 = 100.0f;

    D_80178340 = 0;
    D_80178348 = 0;
    D_80178350 = 0;
    D_80178354 = 0;

    D_EBFBE0_801B86A8 = 0.0f;
    D_EBFBE0_801B86AC = 0.0f;
    D_EBFBE0_801B86B0 = 430.0f;

    D_801779A0 = 0.0f;
    D_801779B8 = 180.0f;
    D_801779C0 = 0.0f;

    D_EBFBE0_801B829C = 0.0f;
    D_EBFBE0_801B82A0 = 1.0f;
    D_EBFBE0_801B82A4 = 0.0f;

    D_EBFBE0_801B84D4 = 0.5f;

    D_EBFBE0_801B84E8[0].unk_00.x = -80.0f;
    D_EBFBE0_801B84E8[0].unk_00.y = 220.0f;
    D_EBFBE0_801B84E8[0].unk_00.z = -360.0f;
    D_EBFBE0_801B84E8[0].unk_0C = 4.0f;
    D_EBFBE0_801B84E8[0].unk_18 = 35.0f;
    D_EBFBE0_801B84E8[0].unk_1C = -90.0f;
    D_EBFBE0_801B84E8[0].unk_20 = -15.0f;
    D_EBFBE0_801B84E8[0].unk_24 = 0.0f;
    D_EBFBE0_801B84E8[0].unk_28 = 0.0f;
    D_EBFBE0_801B84E8[0].unk_2C = 0.0f;
    D_EBFBE0_801B84E8[0].unk_30 = 0.0f;
    D_EBFBE0_801B84E8[0].unk_34 = 1;
    D_EBFBE0_801B84E8[0].unk_3C = 0;
    D_EBFBE0_801B84E8[0].unk_40 = 0;
    D_EBFBE0_801B84E8[0].unk_48 = 0;

    if (var_a1) {
        D_EBFBE0_801B8350[0].unk_00.x = -299.0f;
        D_EBFBE0_801B8350[0].unk_00.y = -32.0f;
        D_EBFBE0_801B8350[0].unk_00.z = 90.0f;
        D_EBFBE0_801B8350[0].unk_48 = -9.660022f;
        D_EBFBE0_801B8350[0].unk_4C = 60.330208f;
        D_EBFBE0_801B8350[0].unk_50 = 0.00f;
    } else {
        D_EBFBE0_801B8350[0].unk_00.x = 33.00f;
        D_EBFBE0_801B8350[0].unk_00.y = 23.00f;
        D_EBFBE0_801B8350[0].unk_00.z = 4.00f;
        D_EBFBE0_801B8350[0].unk_48 = -7.800007f;
        D_EBFBE0_801B8350[0].unk_4C = 0.589999f;
        D_EBFBE0_801B8350[0].unk_50 = 0.00f;
    }
    D_EBFBE0_801B8350[0].unk_30 = 0.0f;
    D_EBFBE0_801B8350[0].unk_34 = 0.0f;
    D_EBFBE0_801B8350[0].unk_28 = 0.0f;
    D_EBFBE0_801B8350[0].unk_2C = 0.0f;
    D_EBFBE0_801B8350[0].unk_14 = 150.0f;
    D_EBFBE0_801B8350[0].unk_18 = 0.0f;
    D_EBFBE0_801B8350[0].unk_1C = 1.0f;
    D_EBFBE0_801B8350[0].unk_20 = 0.0f;
    D_EBFBE0_801B8350[0].unk_24 = 0.0f;
    D_EBFBE0_801B8350[0].unk_54 = 0;
    D_EBFBE0_801B8350[0].unk_38 = 0.0f;
    D_EBFBE0_801B8350[0].unk_3C = 0.0f;
    D_EBFBE0_801B8350[0].unk_40 = 0.0f;
    D_EBFBE0_801B8350[0].unk_44 = 0.0f;
    D_EBFBE0_801B8350[0].unk_58 = 0;
    D_EBFBE0_801B8350[0].unk_5C = 0;

    if (var_a1) {
        D_EBFBE0_801B8350[1].unk_00.x = -42.0f;
        D_EBFBE0_801B8350[1].unk_00.y = -7.0f;
        D_EBFBE0_801B8350[1].unk_00.z = -12.0f;
        D_EBFBE0_801B8350[1].unk_48 = -2.009996f;
        D_EBFBE0_801B8350[1].unk_4C = 56.909969f;
        D_EBFBE0_801B8350[1].unk_50 = 0.00f;
    } else {
        D_EBFBE0_801B8350[1].unk_00.x = 147.0f;
        D_EBFBE0_801B8350[1].unk_00.y = 18.0f;
        D_EBFBE0_801B8350[1].unk_00.z = -32.0f;
        D_EBFBE0_801B8350[1].unk_48 = -6.009995f;
        D_EBFBE0_801B8350[1].unk_4C = 22.620012f;
        D_EBFBE0_801B8350[1].unk_50 = 0.00f;
    }
    D_EBFBE0_801B8350[1].unk_30 = 0.0f;
    D_EBFBE0_801B8350[1].unk_34 = 0.0f;
    D_EBFBE0_801B8350[1].unk_28 = 0.0f;
    D_EBFBE0_801B8350[1].unk_2C = 0.0f;
    D_EBFBE0_801B8350[1].unk_14 = 180.0f;
    D_EBFBE0_801B8350[1].unk_18 = 0.0f;
    D_EBFBE0_801B8350[1].unk_1C = 1.0f;
    D_EBFBE0_801B8350[1].unk_20 = 0.0f;
    D_EBFBE0_801B8350[1].unk_24 = -4.0f;
    D_EBFBE0_801B8350[1].unk_54 = 0;
    D_EBFBE0_801B8350[1].unk_38 = 0.0f;
    D_EBFBE0_801B8350[1].unk_3C = 0.0f;
    D_EBFBE0_801B8350[1].unk_40 = 0.0f;
    D_EBFBE0_801B8350[1].unk_44 = 0.0f;
    D_EBFBE0_801B8350[1].unk_58 = 0;
    D_EBFBE0_801B8350[1].unk_5C = 0;

    if (var_a1) {
        D_EBFBE0_801B8350[2].unk_00.x = 90.0f;
        D_EBFBE0_801B8350[2].unk_00.y = 1.00f;
        D_EBFBE0_801B8350[2].unk_00.z = -143.0f;
        D_EBFBE0_801B8350[2].unk_48 = -0.500016f;
        D_EBFBE0_801B8350[2].unk_4C = -33.319988f;
        D_EBFBE0_801B8350[2].unk_50 = 0.00f;
    } else {
        D_EBFBE0_801B8350[2].unk_00.x = -143.0f;
        D_EBFBE0_801B8350[2].unk_00.y = 22.00f;
        D_EBFBE0_801B8350[2].unk_00.z = -57.0f;
        D_EBFBE0_801B8350[2].unk_48 = -5.950006f;
        D_EBFBE0_801B8350[2].unk_4C = -7.689997f;
        D_EBFBE0_801B8350[2].unk_50 = 0.00f;
    }
    D_EBFBE0_801B8350[2].unk_30 = 0.0f;
    D_EBFBE0_801B8350[2].unk_34 = 0.0f;
    D_EBFBE0_801B8350[2].unk_28 = 0.0f;
    D_EBFBE0_801B8350[2].unk_2C = 0.0f;
    D_EBFBE0_801B8350[2].unk_14 = 130.0f;
    D_EBFBE0_801B8350[2].unk_18 = 0.0f;
    D_EBFBE0_801B8350[2].unk_1C = 1.0f;
    D_EBFBE0_801B8350[2].unk_20 = 0.0f;
    D_EBFBE0_801B8350[2].unk_24 = 0.0f;
    D_EBFBE0_801B8350[2].unk_54 = 0;
    D_EBFBE0_801B8350[2].unk_38 = 0.0f;
    D_EBFBE0_801B8350[2].unk_3C = 0.0f;
    D_EBFBE0_801B8350[2].unk_40 = 0.0f;
    D_EBFBE0_801B8350[2].unk_44 = 0.0f;
    D_EBFBE0_801B8350[2].unk_58 = 0;
    D_EBFBE0_801B8350[2].unk_5C = 0;

    if (var_a1) {
        D_EBFBE0_801B8350[3].unk_00.x = 58.0f;
        D_EBFBE0_801B8350[3].unk_00.y = -5.0f;
        D_EBFBE0_801B8350[3].unk_00.z = 22.00f;
        D_EBFBE0_801B8350[3].unk_48 = -17.899979;
        D_EBFBE0_801B8350[3].unk_4C = -8.890011f;
        D_EBFBE0_801B8350[3].unk_50 = 0.00f;
    } else {
        D_EBFBE0_801B8350[3].unk_00.x = -50.0f;
        D_EBFBE0_801B8350[3].unk_00.y = 25.0f;
        D_EBFBE0_801B8350[3].unk_00.z = 15.0f;
        D_EBFBE0_801B8350[3].unk_48 = -15.870002f;
        D_EBFBE0_801B8350[3].unk_4C = -17.549995f;
        D_EBFBE0_801B8350[3].unk_50 = 0.00f;
    }
    D_EBFBE0_801B8350[3].unk_30 = 0.0f;
    D_EBFBE0_801B8350[3].unk_34 = 0.0f;
    D_EBFBE0_801B8350[3].unk_28 = 0.0f;
    D_EBFBE0_801B8350[3].unk_2C = 0.0f;
    D_EBFBE0_801B8350[3].unk_14 = 140.0f;
    D_EBFBE0_801B8350[3].unk_18 = 0.0f;
    D_EBFBE0_801B8350[3].unk_1C = 1.0f;
    D_EBFBE0_801B8350[3].unk_20 = 0.0f;
    D_EBFBE0_801B8350[3].unk_24 = 0.0f;
    D_EBFBE0_801B8350[3].unk_54 = 0;
    D_EBFBE0_801B8350[3].unk_38 = 0.0f;
    D_EBFBE0_801B8350[3].unk_3C = 0.0f;
    D_EBFBE0_801B8350[3].unk_40 = 0.0f;
    D_EBFBE0_801B8350[3].unk_44 = 0.0f;
    D_EBFBE0_801B8350[3].unk_58 = 254;
    D_EBFBE0_801B8350[3].unk_5C = 0;

    for (i = 0; i < 4; i++) {
        func_8009AA20(D_EBFBE0_801ADA00[i].unk_4,
                      D_EBFBE0_801B8350[i].unk_58 % func_8009ACDC(D_EBFBE0_801ADA00[i].unk_4), D_EBFBE0_801B86E0[i]);
    }

    D_EBFBE0_801B86A4 = 0;
    D_EBFBE0_801B82B0 = 100;

    func_8001D444(0, 34, 0, 255);
}

void func_EBFBE0_801888E8(void) {
    f32 temp_fv1;
    s32 i;

    switch (D_EBFBE0_801B82C0) {
        case 0:
            func_EBFBE0_801881FC();
            D_EBFBE0_801B82CC = 0.04f;
            D_EBFBE0_801B82D0 = 0.1f;
            D_EBFBE0_801B8340 = 0;
            D_EBFBE0_801B82C0++;
            break;

        case 1:
            func_8009BC2C(&D_EBFBE0_801B86C8, -10.0f, D_EBFBE0_801B82CC, 100.0f, 0.0001f);
            func_8009BC2C(&D_EBFBE0_801B86CC, 57.0f, D_EBFBE0_801B82CC, 100.0f, 0.0001f);
            func_8009BC2C(&D_EBFBE0_801B8304, 13.0f, D_EBFBE0_801B82CC, 100.0f, 0.0001f);
            func_8009BC2C(&D_EBFBE0_801B8308, 2.0f, D_EBFBE0_801B82CC, 100.0f, 0.0001f);
            func_8009BC2C(&D_EBFBE0_801B830C, 15.0f, D_EBFBE0_801B82CC, 100.0f, 0.0001f);
            D_EBFBE0_801B82CC *= 1.04f;

            if (D_EBFBE0_801B86CC == 57.0f) {
                D_EBFBE0_801B82C0++;
            }
            break;

        case 2:
            if (D_EBFBE0_801B82B0 == 0) {
                D_EBFBE0_801B82C0++;
            }
            break;

        case 3:
            D_EBFBE0_801B82A8 = (s32) ((Rand_ZeroOne() * 5.0f) + 1.0f) * 10;
            temp_fv1 = D_EBFBE0_801B8340;
            D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_5C = 0;
            D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_18 = 0.0f;

            if (D_EBFBE0_801B8340 == 2) {
                D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_58 = 0;
            }

            while (temp_fv1 == D_EBFBE0_801B8340) {
                D_EBFBE0_801B8340 = (s32) (Rand_ZeroOne() * 4.0f);
            }

            D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_5C = (s32) (Rand_ZeroOne() * 6.0f) + 5;
            D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_54 = 1;

            D_EBFBE0_801B82CC = 0.07f;
            D_EBFBE0_801B82C0++;
            break;

        case 4:
            if (D_EBFBE0_801B82A8 == 0) {
                D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_54 = 0;
                func_8009BC2C(&D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_18, 0.0f, D_EBFBE0_801B82CC, 100.0f, 0.001f);
                D_EBFBE0_801B82CC *= 1.07f;

                if (D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_18 == 0.0f) {
                    D_EBFBE0_801B82C0 = 3;
                }
            }
            break;
    }

    if (D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_54 != 0) {
        if ((D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_18 + D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_1C) < 0.0f) {
            D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_1C = D_EBFBE0_801ADA74[D_EBFBE0_801B8340];
        }

        if ((D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_18 + D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_1C) >
            D_EBFBE0_801ADA64[D_EBFBE0_801B8340]) {
            D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_1C = -D_EBFBE0_801ADA74[D_EBFBE0_801B8340];
        }

        D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_18 += D_EBFBE0_801B8350[D_EBFBE0_801B8340].unk_1C;
    }

    if (D_EBFBE0_801B82B0 == 0) {
        if (D_80177DB0 & 0x80) {
            if (D_EBFBE0_801B8350[1].unk_20 + D_EBFBE0_801B8350[1].unk_24 < -20.0f) {
                D_EBFBE0_801B8350[1].unk_24 = 4.0f;
            }
            if (D_EBFBE0_801B8350[1].unk_20 + D_EBFBE0_801B8350[1].unk_24 > 0.0f) {
                D_EBFBE0_801B8350[1].unk_24 = -4.0f;
            }
            D_EBFBE0_801B8350[1].unk_20 += D_EBFBE0_801B8350[1].unk_24;
        } else {
            func_8009BC2C(&D_EBFBE0_801B8350[1].unk_20, 0.0f, 0.3f, 100.0f, 0.1f);
        }
    }

    if ((D_EBFBE0_801B86A4 >= 3) && (D_EBFBE0_801B9040 != 0)) {
        func_8009BC2C(&D_EBFBE0_801B86C8, -10.0f, D_EBFBE0_801B82D0, 100.0f, 0.0001f);
        func_8009BC2C(&D_EBFBE0_801B86CC, 57.0f, D_EBFBE0_801B82D0, 100.0f, 0.0001f);
        func_8009BC2C(&D_EBFBE0_801B905C, 124.0f, D_EBFBE0_801B82D0, 100.0f, 0.0001f);
        func_8009BC2C(&D_EBFBE0_801B9060, 242.0f, D_EBFBE0_801B82D0, 100.0f, 0.0001f);

        for (i = 0; i < 4; i++) {
            func_8009BC2C(&D_EBFBE0_801B8350[i].unk_28, 0.0f, D_EBFBE0_801B82D0, 100.0f, 0.01f);
            func_8009BC2C(&D_EBFBE0_801B8350[i].unk_2C, 0.0f, D_EBFBE0_801B82D0, 100.0f, 0.01f);
            func_8009BC2C(&D_EBFBE0_801B8350[i].unk_30, 0.0f, D_EBFBE0_801B82D0, 100.0f, 0.01f);
            func_8009BC2C(&D_EBFBE0_801B8350[i].unk_34, 0.0f, D_EBFBE0_801B82D0, 100.0f, 0.01f);
            func_8009BC2C(&D_EBFBE0_801B8350[i].unk_38, 0.0f, D_EBFBE0_801B82D0, 100.0f, 0.01f);
            func_8009BC2C(&D_EBFBE0_801B8350[i].unk_3C, 0.0f, D_EBFBE0_801B82D0, 100.0f, 0.01f);
            func_8009BC2C(&D_EBFBE0_801B8350[i].unk_40, 0.0f, D_EBFBE0_801B82D0, 100.0f, 0.01f);
            func_8009BC2C(&D_EBFBE0_801B8350[i].unk_44, 0.0f, D_EBFBE0_801B82D0, 100.0f, 0.01f);
        }

        D_EBFBE0_801B82D0 *= 1.1f;

        if ((D_EBFBE0_801B905C == 124.0f) && (D_EBFBE0_801B9060 == 242.0f)) {
            D_EBFBE0_801B9040 = 0;
            D_EBFBE0_801B82D0 = 0.08f;
            D_EBFBE0_801B86A4 = 0;
        }

        if ((gChangedInput[D_80177AF8].stick_x != 0) || (gChangedInput[D_80177AF8].stick_y != 0)) {
            D_EBFBE0_801B82D0 = 0.08f;
        }
    }

    D_EBFBE0_801B84E8->unk_18 += 0.6f;

    func_EBFBE0_80191320(1, &D_80177978, &D_80177980, &D_80177988, &D_801779A0, &D_801779B8, &D_801779C0,
                         D_EBFBE0_801B86A8, D_EBFBE0_801B86AC, D_EBFBE0_801B86B0);
    func_800B6F50(D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0);

    D_8017842C -= 0.5f;

    if (D_EBFBE0_801B82B0 > 0) {
        D_EBFBE0_801B82B0 -= 1;
    }

    if (D_EBFBE0_801B9040 == 1) {
        D_EBFBE0_801B82BC = 450;
    }

    if (D_EBFBE0_801B82BC != 0) {
        D_EBFBE0_801B82BC -= 1;
        return;
    }

    D_80178410 = 0;

    D_EBFBE0_801B82C0 = 0;

    D_80177898 = 0;

    D_EBFBE0_801B82C4 = 7;
}

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

void func_EBFBE0_801894E8(void) {
    s32 i;

    D_80178410 = 800;
    D_EBFBE0_801B7C98 = 10;

    for (i = 0; i < 10; i++) {
        D_EBFBE0_801B7BF8[i] = 10.0f + (Rand_ZeroOne() * 10.0f);
        D_EBFBE0_801B7C20[i] = -10.0f + (Rand_ZeroOne() * -60.0f);
        D_EBFBE0_801B7C48[i] = 0.0f;
        D_EBFBE0_801B7C70[i] = 0.1f + (Rand_ZeroOne() * 0.3f);
        D_EBFBE0_801B7D18[i] = 5 + (s32) (Rand_ZeroOne() * 5.0f);
        D_EBFBE0_801B7CC8[i] = 255;
        D_EBFBE0_801B7CF0[i] = 128;
        D_EBFBE0_801B7CA0[i] = 0;
    }

    D_EBFBE0_801B869C = 255;
    D_80178340 = 255;
    D_80178348 = 0;
    D_80178350 = 0;
    D_80178354 = 0;

    D_EBFBE0_801B9070 = 110.0f;
    D_EBFBE0_801B9074 = 70.0f;
    D_EBFBE0_801B9078 = 1.0f;
    D_EBFBE0_801B907C = 1.0f;
    D_EBFBE0_801B7BDC = 0.0f;
    D_EBFBE0_801B7BE0 = 0.0f;
    D_EBFBE0_801B7BD4 = 0;
    D_EBFBE0_801B7BD8 = 0;
    D_EBFBE0_801B9080 = 0.0f;
    D_EBFBE0_801B9084 = 60.0f;
    D_EBFBE0_801B7BB0 = 1.0f;
    D_EBFBE0_801B7BB4 = 1.0f;
    D_EBFBE0_801B7BD0 = 0;
    D_EBFBE0_801B7BB8 = -900.0f;
    D_EBFBE0_801B7BBC = 205.0f;
    D_EBFBE0_801B7BC0 = 10.0f;
    D_EBFBE0_801B7BC4 = 10.0f;
    D_EBFBE0_801B86C8 = 0.0f;
    D_EBFBE0_801B86CC = 162.0f;

    D_80178548 = 101;
    D_8017854C = 106;
    D_80178550 = 92;
    D_80178554 = 3;
    D_80178558 = 4;
    D_8017855C = 10;

    D_EBFBE0_801B8688.pos.y = 0.0f;
    D_EBFBE0_801B8688.unk_0C = 0;
    D_EBFBE0_801B8688.pos.x = -80.0f;
    D_EBFBE0_801B8688.pos.z = 500.0f;
    D_EBFBE0_801B8688.scale = 5.0f;

    D_EBFBE0_801B8348 = 0;

    D_EBFBE0_801B8658.pos.x = 20.0f;
    D_EBFBE0_801B8658.pos.y = 0.0f;
    D_EBFBE0_801B8658.pos.z = 30.0f;
    D_EBFBE0_801B8658.angleX = 0.0f;
    D_EBFBE0_801B8658.angleY = 0.0f;
    D_EBFBE0_801B8658.angleZ = 0.0f;
    D_EBFBE0_801B8658.scale = 0.1f;

    D_EBFBE0_801B86BC = 0.0f;
    D_EBFBE0_801B86C0 = 0.0f;
    D_EBFBE0_801B86C4 = 0.0f;
    D_EBFBE0_801B86A8 = -10.0f;
    D_EBFBE0_801B86AC = 0.0f;

    D_EBFBE0_801B86B4 = 1500.0f;
    D_EBFBE0_801B86B8 = -100.0f;
    D_EBFBE0_801B829C = 0.0f;
    D_EBFBE0_801B82A0 = 1.0f;
    D_EBFBE0_801B82A4 = 0.0f;

    func_EBFBE0_801914AC(D_EBFBE0_801B86BC, D_EBFBE0_801B86C0, D_EBFBE0_801B86C4, &D_80177978, &D_80177980, &D_80177988,
                         D_EBFBE0_801B86B4, &D_801779A0, &D_801779B8, &D_801779C0, D_EBFBE0_801B86B8, D_EBFBE0_801B86A8,
                         D_EBFBE0_801B86AC);

    D_EBFBE0_801B7BF0 = 0;

    func_8001D444(0, 35, 0, 255);
}

void func_EBFBE0_8018994C(void) {
    f32 temp;
    f32 temp2;

    switch (D_EBFBE0_801B82C0) {
        case 0:
            func_EBFBE0_801894E8();
            D_EBFBE0_801B8294 = D_EBFBE0_801B6B40;
            D_EBFBE0_801B7BE8 = 1.0f;
            D_EBFBE0_801B82CC = 0.002f;
            D_EBFBE0_801B82C0 = 100;
            D_EBFBE0_801B82B8 = 0;

            D_8017829C = 0;
            D_80178300 = 0;
            D_800D4A70 = 0;
            break;

        case 100:
            if (D_80178340 != 0) {
                D_80178340 -= 5;
            } else {
                D_EBFBE0_801B82A8 = 19;
                D_EBFBE0_801B82C0 = 1;
            }
            break;

        case 1:
            if (D_EBFBE0_801B82A8 == 0) {
                temp2 = func_8009BC2C(&D_EBFBE0_801B7BDC, 255.0f, D_EBFBE0_801B82CC, 100.0f, 1.0f);
                D_EBFBE0_801B82CC *= 1.08f;
                if (temp2 == 0.0f) {
                    D_EBFBE0_801B82A8 = 50;
                    D_EBFBE0_801B82AC = 85;
                    D_EBFBE0_801B82D0 = 0.01f;
                    D_EBFBE0_801B82CC = 0.002f;
                    D_EBFBE0_801B82C0++;
                }
            }
            break;

        case 2:
            if (D_EBFBE0_801B82A8 == 0) {
                func_8009BC2C(&D_EBFBE0_801B7BDC, 0.0f, D_EBFBE0_801B82D0, 100.0f, 0.1f);
                D_EBFBE0_801B82D0 *= 1.06f;
                if (D_EBFBE0_801B82AC == 0) {
                    temp2 = func_8009BC2C(&D_EBFBE0_801B7BE0, 255.0f, D_EBFBE0_801B82CC, 100.0f, 1.0f);
                    D_EBFBE0_801B82CC *= 1.08f;
                    if (temp2 == 0.0f) {
                        D_EBFBE0_801B82A8 = 30;
                        D_EBFBE0_801B82D0 = 0.02f;
                        D_EBFBE0_801B82C0++;
                        D_EBFBE0_801B7BD8 = 1;
                        D_80178340 = 0;
                    }
                }
            }
            break;

        case 3:
            if (D_EBFBE0_801B82A8 == 0) {
                func_8009BC2C(&D_EBFBE0_801B7BE0, 0.0f, D_EBFBE0_801B82D0, 100.0f, 0.1f);
                D_EBFBE0_801B82D0 *= 1.07f;
                if (D_EBFBE0_801B7BB8 < 1200.0f) {
                    D_EBFBE0_801B7BB8 += 10.0f;
                    if (D_EBFBE0_801B7BB8 > 50.0f) {
                        D_EBFBE0_801B7BD4 = 1;
                        D_EBFBE0_801B7BDC += 1.8f;
                    }
                } else {
                    D_EBFBE0_801B7BD8 = 0;
                    D_EBFBE0_801B82C0++;
                }
            }
            break;

        case 4:
            if (D_EBFBE0_801B7BDC < 255.0f) {
                D_EBFBE0_801B7BDC += 1.0f;
            } else {
                D_EBFBE0_801B7BDC = 255.0f;
                D_EBFBE0_801B82A8 = 70;
                D_EBFBE0_801B82B4 = 0;
                D_EBFBE0_801B82D4 = 0.02f;
                D_EBFBE0_801B82D8 = 0.00005f;
                D_EBFBE0_801B82DC = 0.02f;
                D_EBFBE0_801B8298 = 0;
                D_EBFBE0_801B828C = 0.0f;
                D_EBFBE0_801B8290 = 0.011f;

                D_80177978 = D_EBFBE0_801B6B40[0].unk_00;
                D_80177980 = D_EBFBE0_801B6B40[0].unk_04;
                D_80177988 = D_EBFBE0_801B6B40[0].unk_08;
                D_801779A0 = D_EBFBE0_801B6B40[0].unk_0C;
                D_801779B8 = D_EBFBE0_801B6B40[0].unk_10;
                D_801779C0 = D_EBFBE0_801B6B40[0].unk_14;

                D_EBFBE0_801B82C0 = 10;
            }
            break;

        case 10:
            if (D_EBFBE0_801B82B4 == 45) {
                D_EBFBE0_801B7BF0 = 1;
            }

            if (D_EBFBE0_801B82B4 == 145) {
                D_EBFBE0_801B7BF0 = 0;
            }

            if (D_EBFBE0_801B82B8 == 638) {
                func_80019218(0x11030010, &D_EBFBE0_801B867C, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_80019218(0x31024059, &D_EBFBE0_801B867C, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_800BA808(&D_8017A0F4, 300);
            }

            if (D_EBFBE0_801B82B8 == 838) {
                func_EBFBE0_801919C4(&D_EBFBE0_801ADA30, 310);
            }

            if (D_EBFBE0_801B82A8 == 1) {
                D_EBFBE0_801B8348 = 1;
            }

            if (D_EBFBE0_801B82A8 != 0) {
                break;
            }

            if (D_EBFBE0_801B9078 < 1.39f) {
                D_EBFBE0_801B9078 += 0.01f;
                D_EBFBE0_801B907C += 0.01f;
                D_EBFBE0_801B9070 -= 0.5f;
                D_EBFBE0_801B9074 -= 0.5f;
            }

            temp = func_8009BC2C(&D_EBFBE0_801B7BDC, 0.0f, D_EBFBE0_801B82DC, 100.0f, 0.1f);

            D_EBFBE0_801B82DC *= 1.06f;

            if (temp == 0.0f) {
                D_EBFBE0_801B7BD4 = -1;
            }

            func_EBFBE0_8018CC30(D_EBFBE0_801B8294, 12, D_EBFBE0_801B8290);

            func_EBFBE0_80191798(&D_EBFBE0_801B86A8, &D_EBFBE0_801B86AC);
            func_EBFBE0_80191844(D_EBFBE0_801B86A8, D_EBFBE0_801B86AC);

            if ((D_EBFBE0_801B82B8 > 960) && (D_EBFBE0_801B7BE8 > 0.0f)) {
                D_EBFBE0_801B7BE8 -= 0.0022f;
                if (D_EBFBE0_801B7BE8 < 0.0f) {
                    D_EBFBE0_801B7BE8 = 0.0f;
                }
            }

            if (D_EBFBE0_801B86AC > -100.0f) {
                func_8009BC2C(&D_EBFBE0_801B86C8, 15.0f, D_EBFBE0_801B82D4, 100.0f, 0.0001f);
                func_8009BC2C(&D_EBFBE0_801B86CC, -35.0f, D_EBFBE0_801B82D4, 100.0f, 0.0001f);
                D_EBFBE0_801B82D4 -= 0.000005f;
            } else {
                func_8009BC2C(&D_EBFBE0_801B86C8, -20.0f, D_EBFBE0_801B82D8, 100.0f, 0.0001f);
                func_8009BC2C(&D_EBFBE0_801B86CC, -25.0f, D_EBFBE0_801B82D8, 100.0f, 0.0001f);

                if (D_EBFBE0_801B82B4 > 550) {
                    D_EBFBE0_801B82D8 += 0.0001f;
                } else {
                    D_EBFBE0_801B82D8 += 0.000001f;
                }
            }

            if (D_EBFBE0_801B82B4 == 260) {
                D_EBFBE0_801B8694 = 1;
            }

            if (D_EBFBE0_801B82B4 == 750) {
                D_80178340 = 0;
                D_80178348 = 0;
                D_80178350 = 0;
                D_80178354 = 0;
                D_EBFBE0_801B869C = 1;
            }

            if (D_80178340 == 255) {
                func_8001A55C((f32*) &D_EBFBE0_801B867C, 0x11030010);
                func_8001A55C((f32*) &D_EBFBE0_801B867C, 0x31024059);

                D_EBFBE0_801B82C0 = 0;

                D_80177898 = 0;

                D_EBFBE0_801B82C4 = 2;
            }
            D_EBFBE0_801B82B4++;
            break;
    }

    func_EBFBE0_801912A0();
    func_EBFBE0_80191674(D_EBFBE0_801B86C8, D_EBFBE0_801B86CC, 100.0f, &D_EBFBE0_801B82E0, &D_EBFBE0_801B82E4,
                         &D_EBFBE0_801B82E8);

    if (D_EBFBE0_801B7BE8 != 0) {
        func_800B6F50(D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0);
    }

    D_8017842C -= D_EBFBE0_801B7BE8;
    D_EBFBE0_801B82B8++;
}

void func_EBFBE0_8018A2F8(void) {
    if (D_EBFBE0_801B8694 != 0) {
        func_EBFBE0_8018DF0C(-700.0f);
    }
    func_EBFBE0_8018E058();
}

void func_EBFBE0_8018A338(void) {
    D_80178410 = 0;

    D_EBFBE0_801B869C = 255;

    D_80178340 = 255;
    D_80178348 = 0;
    D_80178350 = 0;
    D_80178354 = 0;

    D_EBFBE0_801B8344 = 0;
    D_EBFBE0_801B8334 = 0;
    D_EBFBE0_801B8338 = 1;

    D_EBFBE0_801B8328 = D_EBFBE0_801B832C = D_EBFBE0_801B8330 = 155.0f;

    D_EBFBE0_801B8328 = 77.0f;
    D_EBFBE0_801B832C = 77.0f;
    D_EBFBE0_801B8330 = 77.0f;

    D_EBFBE0_801B86C8 = 0.0f;
    D_EBFBE0_801B86CC = -90.0f;
    D_EBFBE0_801B82F8 = 76;
    D_EBFBE0_801B82FC = 45;
    D_EBFBE0_801B8300 = 66;
    D_EBFBE0_801B8304 = 11.0f;
    D_EBFBE0_801B8308 = 1.0f;
    D_EBFBE0_801B830C = 1.0f;
    D_EBFBE0_801B84D4 = 0.5f;

    D_EBFBE0_801B8350[0].unk_00.x = -20.0f;
    D_EBFBE0_801B8350[0].unk_00.y = 0.0f;
    D_EBFBE0_801B8350[0].unk_00.z = -600.0f;
    D_EBFBE0_801B8350[0].unk_0C = 0.0f;
    D_EBFBE0_801B8350[0].unk_10 = 3.0f;
    D_EBFBE0_801B8350[0].unk_58 = 14;
    D_EBFBE0_801B8350[0].unk_5C = 5;

    D_EBFBE0_801B8350[1].unk_00.x = -209.0f;
    D_EBFBE0_801B8350[1].unk_00.y = 0.0f;
    D_EBFBE0_801B8350[1].unk_00.z = -820.0f;
    D_EBFBE0_801B8350[1].unk_0C = 0.0f;
    D_EBFBE0_801B8350[1].unk_10 = 3.0f;
    D_EBFBE0_801B8350[1].unk_58 = 0;
    D_EBFBE0_801B8350[1].unk_5C = 5;

    D_EBFBE0_801B8350[2].unk_00.x = 62.0f;
    D_EBFBE0_801B8350[2].unk_00.y = 0.0f;
    D_EBFBE0_801B8350[2].unk_00.z = -813.0f;
    D_EBFBE0_801B8350[2].unk_0C = 0.0f;
    D_EBFBE0_801B8350[2].unk_10 = 3.0f;
    D_EBFBE0_801B8350[2].unk_58 = 29;
    D_EBFBE0_801B8350[2].unk_5C = 6;

    D_EBFBE0_801B8350[3].unk_00.x = 183.0f;
    D_EBFBE0_801B8350[3].unk_00.y = 0.0f;
    D_EBFBE0_801B8350[3].unk_00.z = -990.0f;
    D_EBFBE0_801B8350[3].unk_0C = 0.0f;
    D_EBFBE0_801B8350[3].unk_10 = 3.0f;
    D_EBFBE0_801B8350[3].unk_58 = 41;
    D_EBFBE0_801B8350[3].unk_5C = 7;

    D_EBFBE0_801B84D0 = -6000.0f;
    D_EBFBE0_801B86BC = 22.0f;
    D_EBFBE0_801B86C0 = 116.0f;
    D_EBFBE0_801B86C4 = -543.0f;
    D_EBFBE0_801B86A8 = 3.0f;
    D_EBFBE0_801B86AC = 7.0f;
    D_EBFBE0_801B86B4 = 400.0f;
    D_EBFBE0_801B86B8 = -100.0f;
    D_EBFBE0_801B829C = 0.0f;
    D_EBFBE0_801B82A0 = 1.0f;
    D_EBFBE0_801B82A4 = 0.0f;

    func_EBFBE0_801914AC(D_EBFBE0_801B86BC, D_EBFBE0_801B86C0, D_EBFBE0_801B86C4, &D_80177978, &D_80177980, &D_80177988,
                         D_EBFBE0_801B86B4, &D_801779A0, &D_801779B8, &D_801779C0, D_EBFBE0_801B86B8, D_EBFBE0_801B86A8,
                         D_EBFBE0_801B86AC);
}

void func_EBFBE0_8018A644(void) {
    switch (D_EBFBE0_801B82C0) {
        case 0:
            func_EBFBE0_8018A338();
            func_80019218(0x49000014, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_80019218(0x0140001C, (Vec3f*) &D_EBFBE0_801B84D8, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

            D_EBFBE0_801B82B4 = 0;
            D_EBFBE0_801B82C8 = 0.0f;
            D_EBFBE0_801B7BEC = 0;
            D_EBFBE0_801B82C0++;
            break;

        case 1:
            if (D_EBFBE0_801B82B4 == 20) {
                D_EBFBE0_801B869C = 0;
            }

            if (D_EBFBE0_801B84D0 != 0.0f) {
                func_8009BC2C(&D_EBFBE0_801B84D0, 0.0f, 0.09f, 70.0f, 1.0f);
            }

            if (D_EBFBE0_801B84D0 == 0.0f) {
                D_EBFBE0_801B82B4 = 0;
                D_EBFBE0_801B8340 = 0;
                D_EBFBE0_801B8294 = D_EBFBE0_801ADA94;
                D_EBFBE0_801B8298 = 0;
                D_EBFBE0_801B828C = 0.0f;
                D_EBFBE0_801B8290 = 0.06f;
                D_EBFBE0_801B82C0++;
            }
            D_EBFBE0_801B82B4++;
            break;

        case 2:
            func_EBFBE0_80191798(&D_EBFBE0_801B86A8, &D_EBFBE0_801B86AC);
            func_EBFBE0_80191844(D_EBFBE0_801B86A8, D_EBFBE0_801B86AC);
            func_EBFBE0_8018CC30(D_EBFBE0_801B8294, 34, D_EBFBE0_801B8290);

            if (D_EBFBE0_801B82B4 == D_EBFBE0_801ADF44[D_EBFBE0_801B8340]) {
                D_EBFBE0_801B8344 = 1;
                D_EBFBE0_801B82A8 = 40;
                D_EBFBE0_801B82C0 = 3;
            }

            if (D_EBFBE0_801B82B4 == 475) {
                D_EBFBE0_801B869C = 1;
            }

            if (D_EBFBE0_801B7BEC == 795) {
                func_8001A838(0x49000014);
                func_8001A55C(&D_EBFBE0_801B84D8, 0x0140001C);

                D_EBFBE0_801B82C0 = 0;

                D_80177898 = 0;

                D_EBFBE0_801B82C4 = 3;
            }
            D_EBFBE0_801B82B4++;
            break;

        case 3:
            if (D_EBFBE0_801B82A8 == 0) {
                D_EBFBE0_801B8344 = 0;
                D_EBFBE0_801B82C0 = 2;
                D_EBFBE0_801B8340++;
            }
            break;
    }

    func_EBFBE0_801912A0();
    func_EBFBE0_80191674(D_EBFBE0_801B86C8, D_EBFBE0_801B86CC, 100.0f, &D_EBFBE0_801B82E0, &D_EBFBE0_801B82E4,
                         &D_EBFBE0_801B82E8);

    D_EBFBE0_801B7BEC++;
}

void func_EBFBE0_8018A990(void) {
    s32 i;

    if ((D_80177DB0 & 7) == 7) {
        if (D_EBFBE0_801B8338 != 0) {
            D_EBFBE0_801B8334 = (D_EBFBE0_801B8334 + 1) & 3;
            D_EBFBE0_801B8328 = D_EBFBE0_801ADF54[D_EBFBE0_801B8334].unk_0;
            D_EBFBE0_801B832C = D_EBFBE0_801ADF54[D_EBFBE0_801B8334].unk_4;
            D_EBFBE0_801B8330 = D_EBFBE0_801ADF54[D_EBFBE0_801B8334].unk_8;
        } else {
            D_EBFBE0_801B8328 = 155.0f;
            D_EBFBE0_801B832C = 155.0f;
            D_EBFBE0_801B8330 = 155.0f;
        }
        D_EBFBE0_801B8338 ^= 1;
    }

    if (D_80177DB0 & 1) {
        D_EBFBE0_801B86CC += 30.0f;
        if (D_EBFBE0_801B86CC > 90.0f) {
            D_EBFBE0_801B86CC = -90.0f;
        }
    }

    D_80178554 = D_EBFBE0_801B8328;
    D_80178558 = D_EBFBE0_801B832C;
    D_8017855C = D_EBFBE0_801B8330;

    func_EBFBE0_8018F438();

    D_80178548 = D_EBFBE0_801B82F8;
    D_8017854C = D_EBFBE0_801B82FC;
    D_80178550 = D_EBFBE0_801B8300;
    D_80178554 = D_EBFBE0_801B8304;
    D_80178558 = D_EBFBE0_801B8308;
    D_8017855C = D_EBFBE0_801B830C;

    for (i = 0; i < 4; i++) {
        func_EBFBE0_8018E67C(i);
        D_EBFBE0_801B8350[i].unk_58 += D_EBFBE0_801B8350[i].unk_5C;
    }
}

void func_EBFBE0_8018ABC0(void) {
    D_80178410 = 800;

    D_EBFBE0_801B869C = 255;

    D_80178340 = 0;
    D_80178348 = 0;
    D_80178350 = 0;
    D_80178354 = 0;
    D_80178548 = 101;
    D_8017854C = 106;
    D_80178550 = 92;
    D_80178554 = 3;
    D_80178558 = 4;
    D_8017855C = 10;

    D_EBFBE0_801B86A8 = 10.0f;
    D_EBFBE0_801B86AC = -30.0f;
    D_EBFBE0_801B86B0 = 450.0f;
    D_EBFBE0_801B86C8 = 0.0f;
    D_EBFBE0_801B86CC = 0.0f;

    D_801779A0 = -10.0f;
    D_801779B8 = 0.0f;
    D_801779C0 = 0.0f;

    D_EBFBE0_801B829C = 0.0f;
    D_EBFBE0_801B82A0 = 1.0f;
    D_EBFBE0_801B82A4 = 0.0f;

    D_EBFBE0_801B8658.pos.x = 0.0f;
    D_EBFBE0_801B8658.pos.y = 0.0f;
    D_EBFBE0_801B8658.pos.z = 0.0f;
    D_EBFBE0_801B8658.angleX = 0.0f;
    D_EBFBE0_801B8658.angleY = 0.0f;
    D_EBFBE0_801B8658.angleZ = 0.0f;
}

void func_EBFBE0_8018ACEC(void) {
    switch (D_EBFBE0_801B82C0) {
        case 0:
            func_EBFBE0_8018ABC0();
            func_80019218(0x11030010, &D_EBFBE0_801B867C, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_80019218(0x31024059, &D_EBFBE0_801B867C, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

            D_EBFBE0_801B82CC = 0.01f;
            D_EBFBE0_801B82B4 = 0;
            D_EBFBE0_801B82C0++;
            break;

        case 1:
            func_8009BC2C(&D_EBFBE0_801B86A8, 30.0f, D_EBFBE0_801B82CC, 100.0f, 0.0001f);
            func_8009BC2C(&D_EBFBE0_801B86AC, -15.0f, D_EBFBE0_801B82CC, 100.0f, 0.0001f);
            func_8009BC2C(&D_801779A0, 0.0f, 0.05f, 100.0f, 0.0001f);
            func_8009BC2C(&D_801779B8, -40.0f, D_EBFBE0_801B82CC, 100.0f, 0.0001f);
            func_8009BC2C(&D_EBFBE0_801B86B0, 100.0f, D_EBFBE0_801B82CC, 100.0f, 0.0001f);

            D_EBFBE0_801B82CC *= 1.04f;
            if (D_EBFBE0_801B82B4 == 50) {
                D_EBFBE0_801B869C = 1;
            }

            if (D_80178340 == 255) {
                func_8001A55C(&D_EBFBE0_801B867C.x, 0x11030010);
                func_8001A55C(&D_EBFBE0_801B867C.x, 0x31024059);

                D_80177898 = 0;

                D_EBFBE0_801B82C0 = 0;
                D_EBFBE0_801B82C4 = 4;
            }
            func_EBFBE0_801912A0();
            D_EBFBE0_801B82B4++;
            break;
    }

    func_EBFBE0_80191320(1, &D_80177978, &D_80177980, &D_80177988, &D_801779A0, &D_801779B8, &D_801779C0,
                         D_EBFBE0_801B86A8, D_EBFBE0_801B86AC, D_EBFBE0_801B86B0);
    func_EBFBE0_80191674(D_EBFBE0_801B86C8, D_EBFBE0_801B86CC, 100.0f, &D_EBFBE0_801B82E0, &D_EBFBE0_801B82E4,
                         &D_EBFBE0_801B82E8);
    func_800B6F50(D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0);

    D_8017842C += 2.0f;
    D_80178430 += 2.0f;
}

void func_EBFBE0_8018B038(void) {
    func_EBFBE0_8018E058();
}

void func_EBFBE0_8018B058(void) {
    f32 var_fv0;
    s32 i;

    D_EBFBE0_801B7C98 = 10;

    for (i = 0; i < 10; i++) {
        D_EBFBE0_801B7BF8[i] = (Rand_ZeroOne() * 10.0f) + 10.0f;
        D_EBFBE0_801B7C20[i] = -10.0f + (Rand_ZeroOne() * -60.0f);
        D_EBFBE0_801B7C48[i] = 0.0f;
        D_EBFBE0_801B7C70[i] = 0.1f + (Rand_ZeroOne() * 0.3f);
        D_EBFBE0_801B7D18[i] = 5 + (s32) (Rand_ZeroOne() * 5.0f);
        D_EBFBE0_801B7CC8[i] = 255;
        D_EBFBE0_801B7CF0[i] = 128;
        D_EBFBE0_801B7CA0[i] = 0;
    }

    D_EBFBE0_801B8100 = 20;

    for (i = 0; i < D_EBFBE0_801B8100; i++) {
        D_EBFBE0_801B7D40[i] = -(Rand_ZeroOne() * 22.0f) + 13.0f;
        D_EBFBE0_801B7DE0[i] = 5.0f - (Rand_ZeroOne() * 10.0f);
        D_EBFBE0_801B7E80[i] = -25.0f - (Rand_ZeroOne() * 15.0f);
        D_EBFBE0_801B7FC0[i] = 0.0f;
        D_EBFBE0_801B8060[i] = Rand_ZeroOne() * 0.04f;
        D_EBFBE0_801B7F20[i] = 0.02f + (Rand_ZeroOne() * 0.08f);
        D_EBFBE0_801B8108[i] = 0;
    }

    D_EBFBE0_801B869C = 0xFF;

    D_80178340 = 0;
    D_80178348 = 0xFF;
    D_80178350 = 0xFF;
    D_80178354 = 0xFF;
    D_80178410 = 0;

    D_EBFBE0_801B8334 = 0;
    D_EBFBE0_801B8338 = 1;
    D_EBFBE0_801B86C8 = -360.0f;
    D_EBFBE0_801B86CC = 131.0f;

    D_80178548 = 90;
    D_8017854C = 75;
    D_80178550 = 90;
    D_80178554 = 45;
    D_80178558 = 34;
    D_8017855C = 56;

    D_EBFBE0_801B8688.pos.x = 0.0f;
    D_EBFBE0_801B8688.pos.y = 0.0f;
    D_EBFBE0_801B8688.pos.z = 1000.0f;
    D_EBFBE0_801B8688.scale = 2.0f;
    D_EBFBE0_801B8688.unk_0C = 0;

    D_EBFBE0_801B7BE4 = 1;

    var_fv0 = -120.0f;

    for (i = 0; i < 4; i++, var_fv0 += 75.0f) {
        D_EBFBE0_801B84E8[i].unk_00.x = var_fv0;
        D_EBFBE0_801B84E8[i].unk_00.y = 0.0f;
        D_EBFBE0_801B84E8[i].unk_00.z = 0.0f;
        D_EBFBE0_801B84E8[i].unk_0C = 0.5f;
        D_EBFBE0_801B84E8[i].unk_18 = 0.0f;
        D_EBFBE0_801B84E8[i].unk_1C = 0.0f;
        D_EBFBE0_801B84E8[i].unk_20 = 0.0f;
        D_EBFBE0_801B84E8[i].unk_24 = -60.0f;
        D_EBFBE0_801B84E8[i].unk_28 = -10.0f;
        D_EBFBE0_801B84E8[i].unk_2C = 0.0f;
        D_EBFBE0_801B84E8[i].unk_30 = 0.0f;
        D_EBFBE0_801B84E8[i].unk_34 = 4 - i;

        D_EBFBE0_801B84E8[i].unk_3C = 0;
        D_EBFBE0_801B84E8[i].unk_40 = 0;
        D_EBFBE0_801B84E8[i].unk_44 = 0.0f;
        D_EBFBE0_801B84E8[i].unk_10 = 0.05f;

        D_EBFBE0_801B84E8[i].unk_48 = 1;
        D_EBFBE0_801B84E8[i].unk_4C = 1;
    }

    D_EBFBE0_801B86BC = 140.0f;
    D_EBFBE0_801B86C0 = -20.0f;
    D_EBFBE0_801B86C4 = 0.0f;
    D_EBFBE0_801B86A8 = 0.0f;
    D_EBFBE0_801B86AC = 90.0f;
    D_EBFBE0_801B86B4 = 90.0f;
    D_EBFBE0_801B86B8 = -50.0f;
    D_EBFBE0_801B829C = 0.0f;
    D_EBFBE0_801B82A0 = 1.0f;
    D_EBFBE0_801B82A4 = 0.0f;

    func_EBFBE0_801914AC(D_EBFBE0_801B86BC, D_EBFBE0_801B86C0, D_EBFBE0_801B86C4, &D_80177978, &D_80177980, &D_80177988,
                         D_EBFBE0_801B86B4, &D_801779A0, &D_801779B8, &D_801779C0, D_EBFBE0_801B86B8, D_EBFBE0_801B86A8,
                         D_EBFBE0_801B86AC);

    D_EBFBE0_801B9044 = 25.0f;
    D_EBFBE0_801B9048 = 84.0f;
    D_EBFBE0_801B904C = -20.0f;
    D_EBFBE0_801B9050 = -33.0f;
}

void func_EBFBE0_8018B5C4(void) {
    s32 i;
    f32 temp[4];

    switch (D_EBFBE0_801B82C0) {
        case 0:
            D_EBFBE0_801B7BEC = 0;

            func_EBFBE0_8018B058();
            func_8001D400(0x68);

            D_EBFBE0_801B82A8 = 30;

            D_EBFBE0_801B84E8[3].unk_38 = 70;
            D_EBFBE0_801B84E8[2].unk_38 = 102;
            D_EBFBE0_801B84E8[1].unk_38 = 132;
            D_EBFBE0_801B84E8[0].unk_38 = 171;

            D_EBFBE0_801B8294 = D_EBFBE0_801B6C60;
            D_EBFBE0_801B8298 = 0;
            D_EBFBE0_801B828C = 0.0f;
            D_EBFBE0_801B8290 = 0.024f;
            D_EBFBE0_801B82C0 = 10;
            break;

        case 10:
            if (D_EBFBE0_801B82A8 == 0) {
                func_80019218(0x0100001D, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801B82B4 = 0;
                D_EBFBE0_801B82C0 = 1;
            }
            break;

        case 1:
            func_EBFBE0_80191798(&D_EBFBE0_801B86A8, &D_EBFBE0_801B86AC);
            func_EBFBE0_80191844(D_EBFBE0_801B86A8, D_EBFBE0_801B86AC);
            func_EBFBE0_8018CC30(D_EBFBE0_801B8294, 10, D_EBFBE0_801B8290);

            if (D_EBFBE0_801B9048 > 0.0f) {
                D_EBFBE0_801B9048 -= 0.41f;
                if (D_EBFBE0_801B9048 < 0.0f) {
                    D_EBFBE0_801B9048 = 0.0f;
                    func_80019218(0x09002013, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }

            if (D_EBFBE0_801B82B4 == 60) {
                D_EBFBE0_801B7BF0 = 2;
            }

            for (i = 3; i >= 0; i--) {
                if (D_EBFBE0_801B84E8[i].unk_38 > 0) {
                    D_EBFBE0_801B84E8[i].unk_38--;
                }

                if (D_EBFBE0_801B84E8[i].unk_38 == 1) {
                    func_80019218(0x1950107A, &D_EBFBE0_801B84E8[i].unk_50, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                };

                if (D_EBFBE0_801B84E8[i].unk_38 == 0) {
                    func_8009BC2C(&D_EBFBE0_801B84E8[i].unk_28, 0.0f, D_EBFBE0_801B84E8[i].unk_10, 100.0f, 0.01f);
                    temp[i] =
                        func_8009BC2C(&(D_EBFBE0_801B84E8[i].unk_24), 0.0f, D_EBFBE0_801B84E8[i].unk_10, 100.0f, 0.01f);
                    D_EBFBE0_801B84E8[i].unk_10 *= 1.04f;
                    if (temp[i] == 0.0f) {
                        func_8001A55C((f32*) &D_EBFBE0_801B84E8[i].unk_50, 0x1950107A);
                    }
                }
            }

            if (D_EBFBE0_801B82B4 == 70) {
                D_EBFBE0_801B7BE4 = 0;
                D_EBFBE0_801B84E8[0].unk_4C = 0;
            }

            if (D_EBFBE0_801B82B4 == 80) {
                D_EBFBE0_801B84E8[1].unk_4C = 0;

                for (i = 0; i < 4; i++) {
                    D_EBFBE0_801B84E8[i].unk_48 = 0;
                }
            }

            if (D_EBFBE0_801B82B4 == 115) {
                D_EBFBE0_801B84E8[0].unk_4C = 1;
                D_EBFBE0_801B84E8[1].unk_4C = 1;
            }

            if (D_EBFBE0_801B82B4 == 226) {
                D_EBFBE0_801B7BF0 = 0;

                func_80019218(0x0100001E, &D_EBFBE0_801B84E8[3].unk_50, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

                D_EBFBE0_801B86BC = 105.0f;
                D_EBFBE0_801B86C0 = 0.0f;
                D_EBFBE0_801B86C4 = -12.0f;
                D_EBFBE0_801B86A8 = 9.4f;
                D_EBFBE0_801B86AC = 110.0f;
                D_EBFBE0_801B86B4 = 36.0f;
                D_EBFBE0_801B86B8 = -70.0f;

                func_EBFBE0_801914AC(D_EBFBE0_801B86BC, D_EBFBE0_801B86C0, D_EBFBE0_801B86C4, &D_80177978, &D_80177980,
                                     &D_80177988, D_EBFBE0_801B86B4, &D_801779A0, &D_801779B8, &D_801779C0,
                                     D_EBFBE0_801B86B8, D_EBFBE0_801B86A8, D_EBFBE0_801B86AC);

                D_EBFBE0_801B82B4 = 0;

                D_EBFBE0_801B84E8[3].unk_44 = 0.0f;

                D_EBFBE0_801B86C8 = 60.0f;
                D_EBFBE0_801B86CC = 0.0f;
                D_EBFBE0_801B82EC = 60.0f;
                D_EBFBE0_801B82F0 = 45.0f;
                D_EBFBE0_801B82F4 = 60.0f;

                D_80178548 = D_EBFBE0_801B82EC;
                D_8017854C = D_EBFBE0_801B82F0;
                D_80178550 = D_EBFBE0_801B82F4;

                D_80178554 = 35;
                D_80178558 = 24;
                D_8017855C = 46;

                D_EBFBE0_801B82C0++;
            }
            D_EBFBE0_801B82B4++;
            break;

        case 2:
            if (D_EBFBE0_801B82B4 == 30) {
                D_EBFBE0_801B84E8[3].unk_40 = 1;
            }

            if (D_EBFBE0_801B82B4 == 40) {
                D_EBFBE0_801B84E8[3].unk_3C = 1;
            }

            if (D_EBFBE0_801B82B4 > 40) {
                D_EBFBE0_801B84E8[3].unk_44 += 0.002f;

                if (D_EBFBE0_801B84E8[3].unk_44 > 0.2f) {
                    D_EBFBE0_801B84E8[3].unk_44 = 0.2f;
                }

                func_8009BC2C(&D_EBFBE0_801B82EC, 240.0f, 0.06f, 2.0f, 0.01f);
                func_8009BC2C(&D_EBFBE0_801B82F0, 240.0f, 0.06f, 2.0f, 0.01f);
                func_8009BC2C(&D_EBFBE0_801B82F4, 255.0f, 0.06f, 2.0f, 0.01f);

                D_80178548 = D_EBFBE0_801B82EC;
                D_8017854C = D_EBFBE0_801B82F0;
                D_80178550 = D_EBFBE0_801B82F4;
            }

            if ((D_EBFBE0_801B82B4 > 60) && (D_80178340 < 255)) {
                D_80178340++;
            }

            if (D_80178340 == 0x80) {
                D_EBFBE0_801B82A8 = 7;
                D_EBFBE0_801B84E8[3].unk_3C = 0;
                D_EBFBE0_801B84E8[3].unk_40 = 0;
                D_80178340 = 0xFF;
                D_EBFBE0_801B82C0++;
            }

            if (D_EBFBE0_801B82B4 == 50) {
                D_EBFBE0_801B84E8[0].unk_4C = 0;
            }

            if (D_EBFBE0_801B82B4 == 60) {
                D_EBFBE0_801B84E8[1].unk_4C = 0;
            }

            func_8009BC2C(&D_EBFBE0_801B86B4, 16.0f, 0.01f, 100.0f, 0.01f);
            func_8009BC2C(&D_EBFBE0_801B86AC, 138.0f, 0.01f, 100.0f, 0.01f);

            func_EBFBE0_801914AC(D_EBFBE0_801B86BC, D_EBFBE0_801B86C0, D_EBFBE0_801B86C4, &D_80177978, &D_80177980,
                                 &D_80177988, D_EBFBE0_801B86B4, &D_801779A0, &D_801779B8, &D_801779C0,
                                 D_EBFBE0_801B86B8, D_EBFBE0_801B86A8, D_EBFBE0_801B86AC);
            D_EBFBE0_801B82B4++;
            break;

        case 3:
            if (D_EBFBE0_801B82A8 == 0) {
                func_8001A55C((f32*) &D_EBFBE0_801B84E8[3].unk_50, 0x0100001E);
                func_80019218(0x09000002, &D_EBFBE0_801B84E8[3].unk_50, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

                D_EBFBE0_801B82A8 = 4;

                D_80178340 = 0;

                for (i = 0; i < 4; i++) {
                    D_EBFBE0_801B84E8[i].unk_3C = 1;
                    D_EBFBE0_801B84E8[i].unk_44 = 0.9f;
                }

                D_EBFBE0_801B82B4 = 0;

                D_80178410 = 800;

                D_EBFBE0_801B82C0++;
            }
            break;

        case 4:
            if (D_EBFBE0_801B82A8 == 0) {
                D_EBFBE0_801B84E8[3].unk_44 = 1.2f;

                func_8009BC2C(&D_EBFBE0_801B84E8[3].unk_00.z, 900.0f, 0.06f, 100.0f, 0.0001f);
                func_8009BC2C(&D_EBFBE0_801B86AC, 154.0f, 0.2f, 100.0f, 0.01f);
                func_8009BC2C(&D_EBFBE0_801B86A8, -5.0f, 0.2f, 100.0f, 0.01f);
                func_8009BC2C(&D_EBFBE0_801B86BC, 100.0f, 0.2f, 100.0f, 0.01f);
                func_8009BC2C(&D_EBFBE0_801B86B4, 40.0f, 0.2f, 100.0f, 0.01f);

                func_EBFBE0_801914AC(D_EBFBE0_801B86BC, D_EBFBE0_801B86C0, D_EBFBE0_801B86C4, &D_80177978, &D_80177980,
                                     &D_80177988, D_EBFBE0_801B86B4, &D_801779A0, &D_801779B8, &D_801779C0,
                                     D_EBFBE0_801B86B8, D_EBFBE0_801B86A8, D_EBFBE0_801B86AC);

                if (D_EBFBE0_801B82B4 > 8) {
                    func_8001D400(0);
                    D_EBFBE0_801B82C0 = 0;
                    D_EBFBE0_801B82C4 = 5;
                }
                D_EBFBE0_801B82B4++;
            }
            break;
    }
    func_EBFBE0_80191674(D_EBFBE0_801B86C8, D_EBFBE0_801B86CC, 100.0f, &D_EBFBE0_801B82E0, &D_EBFBE0_801B82E4,
                         &D_EBFBE0_801B82E8);
    D_EBFBE0_801B7BEC++;
}

void func_EBFBE0_8018C114(void) {
    s32 i;

    if (D_EBFBE0_801B8688.unk_0C != 0) {
        func_EBFBE0_8018DF0C(0.0f);
    }

    func_EBFBE0_80190950();

    for (i = 3; i >= 0; i--) {
        if (D_EBFBE0_801B84E8[i].unk_4C) {
            func_EBFBE0_80190B30(i);
        }
    }

    for (i = 0; i < 4; i++) {
        if (D_EBFBE0_801B84E8[i].unk_4C) {
            func_EBFBE0_8018D2B8(i);
        }
    }
}

void func_EBFBE0_8018C1C0(void) {
    s32 i;

    D_80178410 = 1;
    D_EBFBE0_801B7C98 = 10;

    for (i = 0; i < 10; i++) {
        D_EBFBE0_801B7BF8[i] = (Rand_ZeroOne() * 10.0f) + 10.0f;
        D_EBFBE0_801B7C20[i] = -10.0f + (Rand_ZeroOne() * -60.0f);
        D_EBFBE0_801B7C48[i] = 0.0f;
        D_EBFBE0_801B7C70[i] = (Rand_ZeroOne() * 0.3f) + 0.1f;
        D_EBFBE0_801B7D18[i] = 5 + (s32) (Rand_ZeroOne() * 5.0f);
        D_EBFBE0_801B7CC8[i] = 255;
        D_EBFBE0_801B7CF0[i] = 128;
        D_EBFBE0_801B7CA0[i] = 0;
    }

    D_EBFBE0_801B86A0 = 1;
    D_EBFBE0_801B86BC = 0.0f;
    D_EBFBE0_801B86C0 = -38.0f;
    D_EBFBE0_801B86C4 = 35.0f;

    D_EBFBE0_801B86A8 = -35.0f;
    D_EBFBE0_801B86AC = -50.0f;
    D_EBFBE0_801B86B4 = 105.0f;
    D_EBFBE0_801B86B8 = 50.0f;

    D_EBFBE0_801B869C = 255;

    D_80178340 = 0;
    D_80178348 = 0;
    D_80178350 = 0;
    D_80178354 = 0;

    D_EBFBE0_801B8688.pos.x = 130.0f;
    D_EBFBE0_801B8688.pos.y = -30.0f;
    D_EBFBE0_801B8688.pos.z = 2000.0f;
    D_EBFBE0_801B8688.scale = 8.0f;
    D_EBFBE0_801B8688.unk_0C = 0;

    D_EBFBE0_801B8658.pos.x = 0.0f;
    D_EBFBE0_801B8658.pos.y = 0.0f;
    D_EBFBE0_801B8658.pos.z = 0.0f;
    D_EBFBE0_801B8658.angleX = 0.0f;
    D_EBFBE0_801B8658.angleY = 0.0f;
    D_EBFBE0_801B8658.angleZ = 0.0f;
    D_EBFBE0_801B8658.scale = 0.1f;

    D_EBFBE0_801B86C8 = 0.0f;
    D_EBFBE0_801B86CC = 0.0f;

    D_80178548 = 101;
    D_8017854C = 106;
    D_80178550 = 92;
    D_80178554 = 3;
    D_80178558 = 4;
    D_8017855C = 10;

    for (i = 0; i < 4; i++) {
        D_EBFBE0_801B84E8[i].unk_00.x = 0.0f;
        D_EBFBE0_801B84E8[i].unk_00.y = -40.0f;
        D_EBFBE0_801B84E8[i].unk_00.z = -30.0f;
        D_EBFBE0_801B84E8[i].unk_0C = 0.1f;
        D_EBFBE0_801B84E8[i].unk_18 = 0.0f;
        D_EBFBE0_801B84E8[i].unk_1C = 0.0f;
        D_EBFBE0_801B84E8[i].unk_20 = 0.0f;
        D_EBFBE0_801B84E8[i].unk_10 = 0.05f;
        D_EBFBE0_801B84E8[i].unk_24 = 0.0f;
        D_EBFBE0_801B84E8[i].unk_28 = 0.0f;
        D_EBFBE0_801B84E8[i].unk_2C = 0.0f;
        D_EBFBE0_801B84E8[i].unk_30 = 0.0f;
        D_EBFBE0_801B84E8[i].unk_34 = i + 1;
        D_EBFBE0_801B84E8[i].unk_3C = 1;
        D_EBFBE0_801B84E8[i].unk_40 = 0;
        D_EBFBE0_801B84E8[i].unk_44 = 1.2f;
        D_EBFBE0_801B84E8[i].unk_48 = 0;
        D_EBFBE0_801B84E8[i].unk_4C = 0;
    }

    D_EBFBE0_801B86BC = -8.0f;
    D_EBFBE0_801B86C0 = -37.0f;
    D_EBFBE0_801B86C4 = 64.0f;

    D_EBFBE0_801B86A8 = 5.899999f;
    D_EBFBE0_801B86AC = -112.74477f;
    D_EBFBE0_801B86B4 = 235.0f;
    D_EBFBE0_801B86B8 = 50.00f;

    D_EBFBE0_801B829C = 0.0f;
    D_EBFBE0_801B82A0 = 1.0f;
    D_EBFBE0_801B82A4 = 0.0f;

    func_EBFBE0_801914AC(D_EBFBE0_801B86BC, D_EBFBE0_801B86C0, D_EBFBE0_801B86C4, &D_80177978, &D_80177980, &D_80177988,
                         D_EBFBE0_801B86B4, &D_801779A0, &D_801779B8, &D_801779C0, D_EBFBE0_801B86B8, D_EBFBE0_801B86A8,
                         D_EBFBE0_801B86AC);
}

void func_EBFBE0_8018C644(void) {
    f32 x;
    f32 y;
    f32 z;
    s32 i;

    switch (D_EBFBE0_801B82C0) {
        case 0:
            func_80019218(0x11030010, &D_EBFBE0_801B867C, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_80019218(0x31024059, &D_EBFBE0_801B867C, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

            func_EBFBE0_8018C1C0();

            D_EBFBE0_801B82B4 = 0;
            D_EBFBE0_801B7BEC = 0;
            D_EBFBE0_801B8694 = 1;

            D_EBFBE0_801B84E8[0].unk_38 = 3;
            D_EBFBE0_801B84E8[1].unk_38 = 23;
            D_EBFBE0_801B84E8[2].unk_38 = 43;
            D_EBFBE0_801B84E8[3].unk_38 = 63;

            D_EBFBE0_801B8294 = D_EBFBE0_801ADF84;
            D_EBFBE0_801B8298 = 0;
            D_EBFBE0_801B828C = 0.0f;
            D_EBFBE0_801B8290 = 0.042f;

            D_EBFBE0_801B82C0++;
            break;

        case 1:
            for (i = 0; i < 4; i++) {
                if (D_EBFBE0_801B84E8[i].unk_38 > 0) {
                    D_EBFBE0_801B84E8[i].unk_38--;
                } else {
                    if (D_EBFBE0_801B84E8[i].unk_38 == 0) {
                        func_80019218(0x19000001, &D_EBFBE0_801B84E8[i].unk_50, 0, &D_800C5D34, &D_800C5D34,
                                      &D_800C5D3C);
                        D_EBFBE0_801B84E8[i].unk_38 = -1;
                        D_EBFBE0_801B84E8[i].unk_4C = 1;
                    }

                    func_8009BC2C(&D_EBFBE0_801B84E8[i].unk_00.y, D_EBFBE0_801AE444[i], D_EBFBE0_801B84E8[i].unk_10,
                                  100.0f, 0.001f);
                    func_8009BC2C(&D_EBFBE0_801B84E8[i].unk_00.x, D_EBFBE0_801AE434[i], D_EBFBE0_801B84E8[i].unk_10,
                                  100.0f, 0.001f);
                    func_8009BC2C(&D_EBFBE0_801B84E8[i].unk_00.z, D_EBFBE0_801AE454[i], D_EBFBE0_801B84E8[i].unk_10,
                                  100.0f, 0.001f);

                    D_EBFBE0_801B84E8[i].unk_10 *= 1.05f;

                    if (D_EBFBE0_801B84E8[i].unk_00.z == D_EBFBE0_801AE454[i]) {
                        D_EBFBE0_801B84E8[i].unk_0C -= 0.002f;
                        if (D_EBFBE0_801B84E8[i].unk_0C < 0.0f) {
                            D_EBFBE0_801B84E8[i].unk_0C = 0.0f;
                            D_EBFBE0_801B84E8[i].unk_4C = 0;
                        }
                    }

                    x = D_EBFBE0_801AE434[i] - D_EBFBE0_801B84E8[i].unk_00.x;
                    y = D_EBFBE0_801AE444[i] - D_EBFBE0_801B84E8[i].unk_00.y;
                    z = D_EBFBE0_801AE454[i] + 10.0f - D_EBFBE0_801B84E8[i].unk_00.z;

                    // M_RTOD doesn't seem to work here for some reason
                    D_EBFBE0_801B84E8[i].unk_18 = -Math_Atan2F(y, sqrtf(SQ(x) + SQ(z))) * 180.0f / M_PI;
                    D_EBFBE0_801B84E8[i].unk_1C = Math_Atan2F(x, z) * 180.0f / M_PI;
                }
            }

            if (D_EBFBE0_801B82B4 == 125) {
                D_EBFBE0_801B869C = 1;
            }

            if (D_80178340 == 0xFF) {
                func_8001A55C(&D_EBFBE0_801B867C.x, 0x11030010);
                func_8001A55C(&D_EBFBE0_801B867C.x, 0x31024059);
                D_EBFBE0_801B82C0++;
            }
            func_EBFBE0_801912A0();
            D_EBFBE0_801B82B4++;
            break;

        case 2:
            D_80178340 = 0;
            D_80178410 = 0;
            D_EBFBE0_801B86A0 = 0;
            D_EBFBE0_801B82A8 = 20;
            D_EBFBE0_801B82C0++;
            break;

        case 3:
            if (D_EBFBE0_801B82A8 != 0) {
                break;
            }
            D_EBFBE0_801B82C0 = 0;
            D_80177898 = 0;
            D_EBFBE0_801B82C4 = 0;
            func_8001DC6C(0, 23);
            break;
    }

    func_EBFBE0_80191798(&D_EBFBE0_801B86A8, &D_EBFBE0_801B86AC);
    func_EBFBE0_80191844(D_EBFBE0_801B86A8, D_EBFBE0_801B86AC);
    func_EBFBE0_8018CC30(D_EBFBE0_801B8294, 9, D_EBFBE0_801B8290);
    func_EBFBE0_80191674(D_EBFBE0_801B86C8, D_EBFBE0_801B86CC, 100.0f, &D_EBFBE0_801B82E0, &D_EBFBE0_801B82E4,
                         &D_EBFBE0_801B82E8);
    func_800B6F50(D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0);

    D_EBFBE0_801B7BEC++;
}

void func_EBFBE0_8018CB90(void) {
    s32 i;

    if (D_EBFBE0_801B86A0 != 0) {
        if (D_EBFBE0_801B8694 != 0) {
            func_EBFBE0_8018DF0C(-1000.0f);
        }

        func_EBFBE0_8018E058();

        for (i = 0; i < 4; i++) {
            if ((D_EBFBE0_801B84E8[i].unk_38 <= 0) && (D_EBFBE0_801B84E8[i].unk_4C != 0)) {
                func_EBFBE0_8018D2B8(i);
            }
        }
    }
}

void func_EBFBE0_8018CC30(UnkStruct_D_EBFBE0_801B8294* arg0, s32 arg1, f32 arg2) {
    s32 var_a3;
    Vec3f pos[2];

    if (D_EBFBE0_801B8298 != -1) {
        if (D_EBFBE0_801B8298 == 0) {
            var_a3 = 0;
        } else if (D_EBFBE0_801B8298 == 1) {
            var_a3 = 1;
            if (arg1 == 5) {
                var_a3 = 4;
            }
        } else if (arg1 == (D_EBFBE0_801B8298 + 5)) {
            var_a3 = 3;
        } else if (arg1 == (D_EBFBE0_801B8298 + 4)) {
            { var_a3 = 4; }
        } else {
            var_a3 = 2;
        }

        func_EBFBE0_8018CD9C(&pos, &arg0[D_EBFBE0_801B8298], D_EBFBE0_801B828C, var_a3);
        D_80177978 = pos[0].x;
        D_80177980 = pos[0].y;
        D_80177988 = pos[0].z;
        D_801779A0 = pos[1].x;
        D_801779B8 = pos[1].y;
        D_801779C0 = pos[1].z;

        D_EBFBE0_801B828C += arg2;

        if (D_EBFBE0_801B828C > 1.0f) {
            D_EBFBE0_801B8298++;
            D_EBFBE0_801B828C = 0.0f;
            if ((arg1 - 4) < D_EBFBE0_801B8298) {
                D_EBFBE0_801B8298 = -1;
            }
        }
    }
}

void func_EBFBE0_8018CD9C(Vec3f* pos, UnkStruct_D_EBFBE0_801B8294* arg1, f32 arg2, s32 arg3) {
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;

    switch (arg3) {
        case 0:
            temp1 = (1.0f - arg2) * (1.0f - arg2) * (1.0f - arg2);
            temp2 = 21.0f * (arg2 * arg2 * arg2) / 12.0f - 9.0f * (arg2 * arg2) / 2.0f + 3.0f * arg2;
            temp3 = -11.0f * (arg2 * arg2 * arg2) / 12.0f + 3.0f * (arg2 * arg2) / 2.0f;
            temp4 = (arg2 * arg2 * arg2) / 6.0f;
            break;

        case 1:
            temp1 = ((1.0f - arg2) * (1.0f - arg2) * (1.0f - arg2)) / 4.0f;
            temp2 = 7.0f * (arg2 * arg2 * arg2) / 12.0f - 5.0f * (arg2 * arg2) / 4.0f + arg2 / 4.0f + 7.0f / 12.0f;
            temp3 = -(arg2 * arg2 * arg2) / 2.0f + (arg2 * arg2) / 2.0f + arg2 / 2.0f + 1.0f / 6.0f;
            temp4 = (arg2 * arg2 * arg2) / 6.0f;
            break;

        case 2:
            temp1 = (1.0f - arg2) * (1.0f - arg2) * (1.0f - arg2) / 6.0f;
            temp2 = (0.5f * arg2 - 1.0f) * (arg2 * arg2) + 2.0f / 3.0f;
            temp3 = ((-arg2 + 1.0f) * arg2 + 1.0f) * 0.5f * arg2 + 1.0f / 6.0f;
            temp4 = (arg2 * arg2 * arg2) / 6.0f;
            break;

        case 3:
            temp1 = ((1.0f - arg2) * (1.0f - arg2) * (1.0f - arg2)) / 6.0f;
            temp2 = -((1.0f - arg2) * (1.0f - arg2) * (1.0f - arg2)) / 2.0f + ((1.0f - arg2) * (1.0f - arg2)) / 2.0f +
                    (1.0f - arg2) / 2.0f + 1.0f / 6.0f;
            temp3 = 7.0f * ((1.0f - arg2) * (1.0f - arg2) * (1.0f - arg2)) / 12.0f -
                    5.0f * ((1.0f - arg2) * (1.0f - arg2)) / 4.0f + (1.0f - arg2) / 4.0f + 7.0f / 12.0f;
            temp4 = (arg2 * arg2 * arg2) / 4.0f;
            break;

        case 4:
            temp1 = ((1.0f - arg2) * (1.0f - arg2) * (1.0f - arg2)) / 6.0f;
            temp2 = -11.0f * ((1.0f - arg2) * (1.0f - arg2) * (1.0f - arg2)) / 12.0f +
                    3.0f * ((1.0f - arg2) * (1.0f - arg2)) / 2.0f;
            temp3 = 21.0f * ((1.0f - arg2) * (1.0f - arg2) * (1.0f - arg2)) / 12.0f -
                    9.0f * ((1.0f - arg2) * (1.0f - arg2)) / 2.0f + 3.0f * (1.0f - arg2);
            temp4 = arg2 * arg2 * arg2;
            break;
    }

    pos[0].x = (temp1 * (arg1 + 0)->unk_00) + (temp2 * (arg1 + 1)->unk_00) + (temp3 * (arg1 + 2)->unk_00) +
               (temp4 * (arg1 + 3)->unk_00);
    pos[0].y = (temp1 * (arg1 + 0)->unk_04) + (temp2 * (arg1 + 1)->unk_04) + (temp3 * (arg1 + 2)->unk_04) +
               (temp4 * (arg1 + 3)->unk_04);
    pos[0].z = (temp1 * (arg1 + 0)->unk_08) + (temp2 * (arg1 + 1)->unk_08) + (temp3 * (arg1 + 2)->unk_08) +
               (temp4 * (arg1 + 3)->unk_08);

    pos[1].x = (temp1 * (arg1 + 0)->unk_0C) + (temp2 * (arg1 + 1)->unk_0C) + (temp3 * (arg1 + 2)->unk_0C) +
               (temp4 * (arg1 + 3)->unk_0C);
    pos[1].y = (temp1 * (arg1 + 0)->unk_10) + (temp2 * (arg1 + 1)->unk_10) + (temp3 * (arg1 + 2)->unk_10) +
               (temp4 * (arg1 + 3)->unk_10);
    pos[1].z = (temp1 * (arg1 + 0)->unk_14) + (temp2 * (arg1 + 1)->unk_14) + (temp3 * (arg1 + 2)->unk_14) +
               (temp4 * (arg1 + 3)->unk_14);
}

void func_EBFBE0_8018D2B8(s32 arg0) {
    UnkStruct_D_80161630 temp;

    Lights_SetOneLight(&gMasterDisp, D_EBFBE0_801B82E0, D_EBFBE0_801B82E4, D_EBFBE0_801B82E8, D_80178548, D_8017854C,
                       D_80178550, D_80178554, D_80178558, D_8017855C);

    func_800B8DD0(&gMasterDisp, 0x17);

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, D_EBFBE0_801B84E8[arg0].unk_00.x, D_EBFBE0_801B84E8[arg0].unk_00.y,
                     D_EBFBE0_801B84E8[arg0].unk_00.z, 1);

    Matrix_Scale(gGfxMatrix, D_EBFBE0_801B84E8[arg0].unk_0C, D_EBFBE0_801B84E8[arg0].unk_0C,
                 D_EBFBE0_801B84E8[arg0].unk_0C, 1);

    Matrix_RotateZ(gGfxMatrix, D_EBFBE0_801B84E8[arg0].unk_20 * M_DTOR, 1);
    Matrix_RotateX(gGfxMatrix, D_EBFBE0_801B84E8[arg0].unk_18 * M_DTOR, 1);
    Matrix_RotateY(gGfxMatrix, D_EBFBE0_801B84E8[arg0].unk_1C * M_DTOR, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    temp.unk_00 = temp.unk_01 = 2;
    temp.unk_18 = temp.unk_1C = temp.unk_20 = temp.unk_24 = temp.unk_04 = temp.unk_08 = temp.unk_0C = temp.unk_10 =
        temp.unk_28 = 0.0f;

    temp.unk_14 = D_EBFBE0_801B84E8[arg0].unk_28;
    temp.unk_2C = D_EBFBE0_801B84E8[arg0].unk_34;
    temp.unk_30 = D_EBFBE0_801B84E8[arg0].unk_2C;
    temp.unk_34 = D_EBFBE0_801B84E8[arg0].unk_30;
    temp.unk_38 = D_EBFBE0_801B84E8[arg0].unk_24;

    func_80053658(&temp);

    func_8005F1EC(&D_EBFBE0_801B84E8[arg0].unk_50);

    if (D_EBFBE0_801B84E8[arg0].unk_40 != 0) {
        func_EBFBE0_8018D80C(arg0);
    }

    if (D_EBFBE0_801B84E8[arg0].unk_3C != 0) {
        func_EBFBE0_8018D510(arg0);
    }

    if (D_EBFBE0_801B84E8[arg0].unk_48 != 0) {
        func_EBFBE0_8018DDB8(arg0);
    }

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_8018D510(s32 arg0) {
    f32 var_fv0;
    f32 sp40;
    f32 sp3C;
    f32 var_fv1;
    f32 var_fa0;
    f32 temp;

    func_800B8DD0(&gMasterDisp, 0x43);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    if (D_EBFBE0_801B84E8[arg0].unk_40 == 1) {
        var_fa0 = -30.0f;
        var_fv1 = 0.02f;
        gDPSetEnvColor(gMasterDisp++, 128, 128, 255, 255);
    } else {
        var_fa0 = -65.0f;
        var_fv1 = 0.2f;
        gDPSetEnvColor(gMasterDisp++, 0, 0, 255, 255);
    }

    var_fv0 = D_EBFBE0_801B84E8[arg0].unk_44;

    if (D_80177DB0 & 1) {
        var_fv0 += var_fv1;
    }

    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, var_fa0, 1);
    Matrix_Scale(gGfxMatrix, var_fv0, var_fv0 * 0.7f, var_fv0, 1);

    Matrix_RotateZ(gGfxMatrix, -D_EBFBE0_801B84E8[arg0].unk_20 * 0.017453292f, 1);
    Matrix_RotateX(gGfxMatrix, -D_EBFBE0_801B84E8[arg0].unk_18 * 0.017453292f, 1);
    Matrix_RotateY(gGfxMatrix, -D_EBFBE0_801B84E8[arg0].unk_1C * 0.017453292f, 1);

    sp3C = -Math_Atan2F(D_80177978 - D_EBFBE0_801B84E8[arg0].unk_00.x, D_80177988 - D_EBFBE0_801B84E8[arg0].unk_00.z);
    temp = sqrtf(SQ(D_80177988 - D_EBFBE0_801B84E8[arg0].unk_00.z) + SQ(D_80177978 - D_EBFBE0_801B84E8[arg0].unk_00.x));
    sp40 = Math_Atan2F(D_80177980 - D_EBFBE0_801B84E8[arg0].unk_00.y, temp);

    Matrix_RotateY(gGfxMatrix, -sp3C, 1);
    Matrix_RotateX(gGfxMatrix, -sp40, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    gSPDisplayList(gMasterDisp++, D_60320E0);
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_8018D80C(s32 arg0) {
    s32 i;
    f32 sp70;
    f32 sp6C;
    f32 temp;

    for (i = 0; i < D_EBFBE0_801B8100; i++) {
        switch (D_EBFBE0_801B8108[i]) {
            case 0:
                func_8009BC2C(&D_EBFBE0_801B7FC0[i], D_EBFBE0_801B8060[i], 0.05f, 100.0f, 0.01f);

                if (D_EBFBE0_801B7FC0[i] >= D_EBFBE0_801B8060[i]) {
                    D_EBFBE0_801B7FC0[i] = D_EBFBE0_801B8060[i];
                    D_EBFBE0_801B8108[i] = 1;
                }
                break;

            case 1:
                func_8009BC2C(&D_EBFBE0_801B7D40[i], 0.0f, D_EBFBE0_801B7F20[i], 100.0f, 0.01f);
                func_8009BC2C(&D_EBFBE0_801B7DE0[i], 0.0f, D_EBFBE0_801B7F20[i], 100.0f, 0.01f);
                func_8009BC2C(&D_EBFBE0_801B7E80[i], -25.0f, D_EBFBE0_801B7F20[i], 100.0f, 0.01f);

                D_EBFBE0_801B7FC0[i] -= 0.002f;
                if (D_EBFBE0_801B7FC0[i] < 0.0f) {
                    D_EBFBE0_801B7FC0[i] = 0.0f;
                    D_EBFBE0_801B8108[i] = 255;
                }
                break;

            case 255:
                D_EBFBE0_801B7D40[i] = 10.0f - (Rand_ZeroOne() * 20.0f);
                D_EBFBE0_801B7DE0[i] = 3.0f - (Rand_ZeroOne() * 7.0f);
                D_EBFBE0_801B7E80[i] = -30.0f - (Rand_ZeroOne() * 15.0f);
                D_EBFBE0_801B7FC0[i] = 0.0f;
                D_EBFBE0_801B8060[i] = Rand_ZeroOne() * 0.02f;
                D_EBFBE0_801B7F20[i] = 0.02f + (Rand_ZeroOne() * 0.08f);
                D_EBFBE0_801B8108[i] = 0;
                break;
        }
    }

    sp6C = -Math_Atan2F(D_80177978 - D_EBFBE0_801B84E8[arg0].unk_00.x, D_80177988 - D_EBFBE0_801B84E8[arg0].unk_00.z);
    temp = sqrtf(SQ(D_80177988 - D_EBFBE0_801B84E8[arg0].unk_00.z) + SQ(D_80177978 - D_EBFBE0_801B84E8[arg0].unk_00.x));
    sp70 = Math_Atan2F(D_80177980 - D_EBFBE0_801B84E8[arg0].unk_00.y, temp);

    func_800B8DD0(&gMasterDisp, 0x31);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 253, 253, 255, 255);
    gDPSetEnvColor(gMasterDisp++, 251, 251, 255, 255);

    for (i = 0; i < D_EBFBE0_801B8100; i++) {
        if (D_EBFBE0_801B7FC0[i] == 0.0f) {
            continue;
        }

        Matrix_Push(&gGfxMatrix);

        Matrix_Translate(gGfxMatrix, D_EBFBE0_801B7D40[i], D_EBFBE0_801B7DE0[i], D_EBFBE0_801B7E80[i], 1);
        Matrix_Scale(gGfxMatrix, D_EBFBE0_801B7FC0[i], D_EBFBE0_801B7FC0[i], D_EBFBE0_801B7FC0[i], 1);

        Matrix_RotateZ(gGfxMatrix, -D_EBFBE0_801B84E8[arg0].unk_20 * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, -D_EBFBE0_801B84E8[arg0].unk_18 * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, -D_EBFBE0_801B84E8[arg0].unk_1C * M_DTOR, 1);

        Matrix_RotateY(gGfxMatrix, -sp6C, 1);
        Matrix_RotateX(gGfxMatrix, -sp70, 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_60320E0);

        Matrix_Pop(&gGfxMatrix);
    }
}

void func_EBFBE0_8018DDB8(s32 arg0) {
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(
        gGfxMatrix, 0.0f,
        (D_EBFBE0_801B9050 - D_EBFBE0_801B84E8[arg0].unk_00.y * 2.05f) + (D_EBFBE0_801B9048 - 84.0f) * 1.99f, 0.0f, 1);
    Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 1.0f, 1);
    Matrix_RotateY(gGfxMatrix, 3.1415927f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    func_800BA140();

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 240);
    gSPDisplayList(gMasterDisp++, D_6032580);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_8018DF0C(f32 arg0) {
    f32 sp34;
    f32 sp30;

    func_EBFBE0_80191798(&sp34, &sp30);
    func_800B8DD0(&gMasterDisp, 0x35);

    if (arg0 != 0.0f) {
        D_EBFBE0_801B8688.pos.z = D_80177988 - arg0;
    }

    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, D_EBFBE0_801B8688.pos.x, D_EBFBE0_801B8688.pos.y, D_EBFBE0_801B8688.pos.z, 1);
    Matrix_RotateY(gGfxMatrix, M_DTOR * sp30, 1);
    Matrix_RotateX(gGfxMatrix, M_DTOR * sp34, 1);
    Matrix_Scale(gGfxMatrix, D_EBFBE0_801B8688.scale, D_EBFBE0_801B8688.scale, D_EBFBE0_801B8688.scale, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_6037CF0);
    func_EBFBE0_8018E200();
    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_8018E058(void) {
    Lights_SetOneLight(&gMasterDisp, D_EBFBE0_801B82E0, D_EBFBE0_801B82E4, D_EBFBE0_801B82E8, D_80178548, D_8017854C,
                       D_80178550, D_80178554, D_80178558, D_8017855C);

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, D_EBFBE0_801B8658.pos.x, D_EBFBE0_801B8658.pos.y, D_EBFBE0_801B8658.pos.z, 1);

    Matrix_RotateZ(gGfxMatrix, M_DTOR * D_EBFBE0_801B8658.angleZ, 1);
    Matrix_RotateX(gGfxMatrix, M_DTOR * D_EBFBE0_801B8658.angleX, 1);
    Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801B8658.angleY, 1);

    Matrix_Scale(gGfxMatrix, D_EBFBE0_801B8658.scale, D_EBFBE0_801B8658.scale, D_EBFBE0_801B8658.scale, 1);

    Matrix_SetGfxMtx(&gMasterDisp);
    func_800B8DD0(&gMasterDisp, 0x17);

    D_80177B8C = 1;

    func_800515C4();
    func_8005F1EC(&D_EBFBE0_801B8658.unk_24);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_8018E200(void) {
    f32 scale;
    s32 i;

    for (i = 0; i < D_EBFBE0_801B7C98; i++) {
        switch (D_EBFBE0_801B7CA0[i]) {
            case 0:
                D_EBFBE0_801B7C48[i] += 0.15f;
                if (D_EBFBE0_801B7C48[i] >= D_EBFBE0_801B7C70[i]) {
                    D_EBFBE0_801B7C48[i] = D_EBFBE0_801B7C70[i];
                    D_EBFBE0_801B7CA0[i] = 10;
                }
                break;

            case 10:
                D_EBFBE0_801B7D18[i]--;
                if (D_EBFBE0_801B7D18[i] <= 0) {
                    D_EBFBE0_801B7CA0[i] = 1;
                }
                break;

            case 1:
                D_EBFBE0_801B7CC8[i] -= 0x10;
                if (D_EBFBE0_801B7CC8[i] < 0) {
                    D_EBFBE0_801B7CC8[i] = 0;
                }
                D_EBFBE0_801B7CF0[i] -= 0x10;
                if (D_EBFBE0_801B7CF0[i] < 0) {
                    D_EBFBE0_801B7CF0[i] = 0;
                }
                if (D_EBFBE0_801B7CC8[i] == 0 && D_EBFBE0_801B7CF0[i] == 0) {
                    D_EBFBE0_801B7CA0[i] = 255;
                }
                break;

            case 255:
                D_EBFBE0_801B7BF8[i] = 10.0f + (Rand_ZeroOne() * 10.0f);
                D_EBFBE0_801B7C20[i] = -10.0f + (Rand_ZeroOne() * -60.0f);
                D_EBFBE0_801B7C48[i] = 0.0f;
                D_EBFBE0_801B7C70[i] = 0.1f + (Rand_ZeroOne() * 0.3f);
                D_EBFBE0_801B7D18[i] = 5 + (s32) (Rand_ZeroOne() * 5.0f);
                D_EBFBE0_801B7CC8[i] = 255;
                D_EBFBE0_801B7CF0[i] = 128;
                D_EBFBE0_801B7CA0[i] = 0;
                break;
        }
    }

    func_800B8DD0(&gMasterDisp, 0x31);

    for (i = 0; i < D_EBFBE0_801B7C98; i++) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 200, 200, D_EBFBE0_801B7CC8[i]);
        gDPSetEnvColor(gMasterDisp++, 255, 0, 0, D_EBFBE0_801B7CF0[i]);

        scale = D_EBFBE0_801B7C48[i] / D_EBFBE0_801B8688.scale;

        Matrix_Push(&gGfxMatrix);

        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 5.0f, 1);
        Matrix_RotateZ(gGfxMatrix, D_EBFBE0_801B7C20[i] * M_DTOR, 1);
        Matrix_Translate(gGfxMatrix, 0.0f, D_EBFBE0_801B7BF8[i], 0.0f, 1);
        Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_60320E0);

        Matrix_Pop(&gGfxMatrix);
    }
}

void func_EBFBE0_8018E67C(s32 arg0) {
    Vec3f sp60[50];
    s32 sp5C;
    f32 temp_fv1;

    Lights_SetOneLight(&gMasterDisp, D_EBFBE0_801B82E0, D_EBFBE0_801B82E4, D_EBFBE0_801B82E8, D_80178548, D_8017854C,
                       D_80178550, D_80178554, D_80178558, D_8017855C);

    sp5C = D_EBFBE0_801B8350[arg0].unk_58 % func_8009ACDC(D_EBFBE0_801ADA00[arg0].unk_0);

    func_800BA1D0(D_80178320, D_80178328, D_80178330, 255, 995, 1000);

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, D_EBFBE0_801B8350[arg0].unk_00.x, D_EBFBE0_801B8350[arg0].unk_00.y,
                     D_EBFBE0_801B8350[arg0].unk_00.z + D_EBFBE0_801B84D0, 1);
    Matrix_Scale(gGfxMatrix, D_EBFBE0_801B84D4, D_EBFBE0_801B84D4, D_EBFBE0_801B84D4, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    if (arg0 == 2) {
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    }

    func_8009AA20(D_EBFBE0_801ADA00[arg0].unk_0, sp5C, &sp60);
    func_8009A72C(0, D_EBFBE0_801ADA00[arg0].skelanime, &sp60, NULL, NULL, NULL, &gIdentityMatrix);

    if (arg0 == 2) {
        gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
    }

    if (arg0 == 0) {
        func_8005F1EC(&D_EBFBE0_801B84D8);
    }

    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, D_EBFBE0_801B8350[arg0].unk_00.x - 5.0f, 5.0f,
                     D_EBFBE0_801B8350[arg0].unk_00.z + 10.0f + D_EBFBE0_801B84D0, 1);

    Matrix_Scale(gGfxMatrix, D_EBFBE0_801B8350[arg0].unk_10, D_EBFBE0_801B8350[arg0].unk_10,
                 D_EBFBE0_801B8350[arg0].unk_10, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    func_800BA140();

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 128);
    gSPDisplayList(gMasterDisp++, D_6041070);

    Matrix_Pop(&gGfxMatrix);

    temp_fv1 = __sinf((f32) sp5C * 12.0f * 0.017453292f) * 15.0f;

    if (temp_fv1 >= 0) {
        D_EBFBE0_801B8350[arg0].unk_0C = temp_fv1;
    } else if (temp_fv1 > -2.0f) {
        D_EBFBE0_801B8350[arg0].unk_0C = -temp_fv1;
    } else {
        D_EBFBE0_801B8350[arg0].unk_0C = 0.0f;
    }
    D_EBFBE0_801B8350[arg0].unk_10 = 3.0f - (D_EBFBE0_801B8350[arg0].unk_0C / 100.0f);
}

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

// needs in-function static
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

#ifndef IMPORT_DATA_PENDING
extern f32 D_EBFBE0_801AE47C[];
#endif
void func_EBFBE0_8018FD08(void) {
    s32 i;
    Gfx* temp_v1;
    f32 temp_fs2;
    s32 var_s0;
    s32 var_s0_2;
    f32 temp;
#ifdef IMPORT_DATA_PENDING
    static f32 D_EBFBE0_801AE47C[] = { 90.0f, 100.0f, 75.0f, 75.0f };
#endif

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

#ifndef IMPORT_DATA_PENDING
extern s32 D_EBFBE0_801AE558;
#endif
void func_EBFBE0_801903B8(void) {
#ifdef IMPORT_DATA_PENDING
    static s32 D_EBFBE0_801AE558 = 12;
#endif
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

// needs in-function static
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
            if (gChangedInput[D_80177AF8].button & 0xD00F) { // START, A, B, C-left, C-Down, C-Up, C-Right
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
                if (((gChangedInput[D_80177AF8].button & START_BUTTON) ||
                     (gChangedInput[D_80177AF8].button & A_BUTTON)) &&
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
        ((gChangedInput[D_80177AF8].stick_x != 0) || (gChangedInput[D_80177AF8].stick_y != 0))) {
        D_EBFBE0_801B9040 = 1;
        D_EBFBE0_801B86A4 = 0;
    }

    x = gChangedInput[D_80177AF8].stick_x;
    y = gChangedInput[D_80177AF8].stick_y;

    if (D_EBFBE0_801B9040 != 0) {
        if (((x * 0.2f) + D_EBFBE0_801B905C > -500.0f) && ((x * 0.2f) + D_EBFBE0_801B905C < 500.0f)) {
            D_EBFBE0_801B905C += x * 0.2f;
        }
        if (((y * 0.2f) + D_EBFBE0_801B9060 > -500.0f) && ((y * 0.2f) + D_EBFBE0_801B9060 < 500.0f)) {
            D_EBFBE0_801B9060 += y * 0.2f;
        }
    }

    if ((D_EBFBE0_801B9040 != 0) && (gChangedInput[D_80177AF8].stick_x == 0) &&
        (gChangedInput[D_80177AF8].stick_y == 0)) {
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
    D_80178720 = (s32) arg0;
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
