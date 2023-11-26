#include "global.h"
#include "fox_option.h"

#ifdef IMPORT_DATA_PENDING
static UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9380[4];
static f32 D_EBFBE0_801AE5B8[] = { 60.0f, 36.0f, 12.0f, -12.0f, -36.0f, -60.0f };
static f32 D_EBFBE0_801AE5D0[] = { 126.0f, 117.0f, 139.0f, 124.0f, 130.0f, 117.0f };
static f32 D_EBFBE0_801AE570[] = { 54.0f, 78.0f, 103.0f, 126.0f, 152.0f, 176.0f };

static MenuContext D_EBFBE0_801AE638[6] = {
    {
        { 0, 0, (void*) 0x08003B50, 0, 72, 12, 126.0f, 46.0f, 1.0f, 1.0f, 20, 0, 75, 255 },
        { 0.0f, 30.0f, -130.0f, 0.2f, 0.11f },
        { -40.0f, 27.0f, 80.0f },
        1,
        1,
    },
    {
        { 0, 0, (void*) 0x08003EB0, 0, 80, 12, 126.0f, 184.0f, 1.0f, 1.0f, 20, 0, 75, 255 },
        { 0.0f, 18.0f, -130.0f, 0.2f, 0.11f },
        { -40.0f, 16.0f, 80.0f },
        1,
        1,
    },
    {
        { 0, 0, (void*) 0x08004270, 0, 32, 10, 126.0f, 184.0f, 1.0f, 1.0f, 20, 0, 75, 255 },
        { 0.0f, 6.0f, -130.0f, 0.2f, 0.11f },
        { -40.0f, 6.0f, 80.0f },
        1,
        1,
    },
    {
        { 0, 0, (void*) 0x080043B0, 0, 64, 12, 110.0f, 91.0f, 1.0f, 1.0f, 20, 0, 75, 255 },
        { 0.0f, -6.0f, -130.0f, 0.2f, 0.11f },
        { -40.0f, -5.0f, 80.0f },
        1,
        1,
    },
    {
        { 0, 0, (void*) 0x080046B0, 0, 64, 10, 110.0f, 116.0f, 1.0f, 1.0f, 20, 0, 75, 255 },
        { 0.0f, -18.0f, -130.0f, 0.2f, 0.11f },
        { -40.0f, -16.0f, 80.0f },
        1,
        1,
    },
    {
        { 0, 0, (void*) 0x08004930, 0, 80, 10, 126.0f, 184.0f, 1.0f, 1.0f, 20, 0, 75, 255 },
        { 0.0f, -30.0f, -130.0f, 0.2f, 0.11f },
        { -40.0f, -27.0f, 80.0f },
        1,
        1,
    },
};
#else
extern f32 D_EBFBE0_801AE570[];
extern f32 D_EBFBE0_801AE5B8[];
extern f32 D_EBFBE0_801AE5D0[];
extern MenuContext D_EBFBE0_801AE638[];
#endif

void func_EBFBE0_80191B20(void) {
    s32 var_a1_2;
    s32 var_v0_2;
    s32 i;

    D_80137E78 = 2;

    D_EBFBE0_801AE638[0].unk_00.unk_08 = D_8003B50;
    D_EBFBE0_801AE638[0].unk_00.unk_10 = 72;
    D_EBFBE0_801AE638[0].unk_00.unk_14 = 12;
    D_EBFBE0_801AE638[4].unk_00.unk_08 = D_80046B0;
    D_EBFBE0_801AE638[4].unk_00.unk_10 = 64;
    D_EBFBE0_801AE638[4].unk_00.unk_14 = 10;

    for (i = 0; i < 6; i++) {
        D_EBFBE0_801AE5B8[i] = D_EBFBE0_801AE588[i];
        D_EBFBE0_801AE5D0[i] = D_EBFBE0_801AE5A0[i];
    }

    var_a1_2 = 1;
    for (i = 0; i < 16; i++) {
        if (i == 14) {
            continue;
        }
        if (!(gSaveFile.save.data.unk_00[i].unk_6 & 1)) {
            var_a1_2 = 0;
            break;
        }
    }

    D_EBFBE0_801B91C8 = var_a1_2;
    D_80178348 = 0;
    D_80178350 = 0;
    D_80178354 = 0;
    D_80178340 = 0;

    D_80161A38 = 0xFF;

    D_80161A36 = 0;

    D_EBFBE0_801B91A4 = 0;
    if ((D_80161A34 == 7) && (D_80178234 == 10)) {
        D_80161A34 = 0;
        D_EBFBE0_801B91A4 = 1;
    }

    D_EBFBE0_801B91A8 = 0;
    D_EBFBE0_801B91AC = 0;
    D_EBFBE0_801B91B0 = 0;
    var_v0_2 = D_801779F8;
    D_801779F8 = 0;

    D_80177DB0 = 0;
    D_EBFBE0_801B8284 = 0;
    D_EBFBE0_801B9178 = 0;
    D_EBFBE0_801B917C = 0;

    D_EBFBE0_801B9124 = 1000;

    if ((D_80161A34 == 5) || (D_80161A34 == 8)) {
        if (D_80161A34 == 8) {
            D_80177B8C[D_80177B48 + 1] = 13;
            if (D_800D3180[9] == 1) {
                gSaveFile.save.data.unk_00[14].unk_5 = 1;
                if (var_v0_2 != 0) {
                    gSaveFile.save.data.unk_00[14].unk_4 = 1;
                } else {
                    gSaveFile.save.data.unk_00[14].unk_7 = 1;
                }
                Save_Write();
            } else if (D_800D3180[9] == 2) {
                D_80177BB0[D_80177B48] = 1;
                gSaveFile.save.data.unk_00[15].unk_5 = 1;
                if (var_v0_2 != 0) {
                    gSaveFile.save.data.unk_00[15].unk_4 = 1;
                    gSaveFile.save.data.unk_00[15].unk_3 = 1;
                } else {
                    gSaveFile.save.data.unk_00[15].unk_7 = 1;
                    gSaveFile.save.data.unk_00[15].unk_6 = 1;
                }
                Save_Write();
            }
        }

        func_EBFBE0_80188010();
        D_EBFBE0_801B9094 = func_EBFBE0_8019C8C4();

        if (D_EBFBE0_801B9094 != -1) {
            D_EBFBE0_801B9124 = 200;
        } else {
            D_EBFBE0_801B9124 = 300;
        }
    } else {
        if (D_800D2870 != 0) {
            D_EBFBE0_801B91A4 = 2;
            D_EBFBE0_801B91A8 = D_801778AC;
            for (i = 0; i < 6; i++) {
                if (i == 2) {
                    continue;
                }
                D_EBFBE0_801AE638[i].unk_38.unk_0C = 0.01f;
                D_EBFBE0_801AE638[i].unk_38.unk_10 = 0.21f;
                D_EBFBE0_801AE638[i].unk_38.unk_04 = D_EBFBE0_801AE570[i];
                D_EBFBE0_801AE638[i].unk_38.unk_00 = 0.0f;
                D_EBFBE0_801AE638[i].unk_38.unk_08 = 0.0f;
                D_EBFBE0_801AE638[i].unk_5C = 0;

                D_EBFBE0_801AE638[i].unk_00.unk_20 = 0.01f;
                D_EBFBE0_801AE638[i].unk_00.unk_24 = 1.0f;
                D_EBFBE0_801AE638[i].unk_00.unk_18 = 158.0f;
                D_EBFBE0_801AE638[i].unk_00.unk_1C = D_EBFBE0_801AE5D0[i];
                D_EBFBE0_801AE638[i].unk_58 = 0;
            }
            D_EBFBE0_801AE638[2].unk_38.unk_00 = 0.0f;
            D_EBFBE0_801AE638[2].unk_38.unk_08 = 0.0f;
            D_EBFBE0_801AE638[2].unk_38.unk_04 = 90.0f;
            D_EBFBE0_801AE638[2].unk_38.unk_0C = 0.4f;
            D_EBFBE0_801AE638[2].unk_38.unk_10 = 0.21f;
            D_EBFBE0_801AE638[2].unk_5C = 1;
            D_EBFBE0_801AE638[2].unk_00.unk_20 = 1.0f;
            D_EBFBE0_801AE638[2].unk_00.unk_24 = 1.0f;
            D_EBFBE0_801AE638[2].unk_00.unk_18 = 145.0f;
            D_EBFBE0_801AE638[2].unk_00.unk_1C = 25.0f;
            D_EBFBE0_801AE638[2].unk_58 = 1;

            D_EBFBE0_801B9124 = 2;
        } else {
            D_EBFBE0_801B9124 = 1000;
        }
    }

    D_EBFBE0_801B912C = 0;
    D_EBFBE0_801B9134 = 0;
    D_EBFBE0_801B913C = 0;

    D_8017784C = 2;

    Memory_FreeAll();

    D_80178420 = 320.0f;
    D_80178424 = 240.0f;

    func_800A5D6C();

    D_80177978 = 0.0f;
    D_80177980 = 0.0f;
    D_80177988 = 10.0f;
    D_801779A0 = 0.0f;
    D_801779B8 = 0.0f;
    D_801779C0 = 0.0f;

    D_EBFBE0_801B9224 = -80.0f;
    D_EBFBE0_801B9228 = 0.0f;

    D_EBFBE0_801B922C = 225;
    D_EBFBE0_801B9230 = 225;
    D_EBFBE0_801B9234 = 225;
    D_EBFBE0_801B9238 = 30;
    D_EBFBE0_801B923C = 30;
    D_EBFBE0_801B9240 = 30;

    D_EBFBE0_801B91F8 = 0.1f;
    D_EBFBE0_801B91F4 = -130.0f;
    D_EBFBE0_801B91FC = 0.0f;
    D_EBFBE0_801B9200 = 0.0f;

    D_EBFBE0_801B91EC = 0;
    D_EBFBE0_801B9244 = 0;
    D_EBFBE0_801B9248 = 0;
    func_8001D444(0, 0x24, 0, 0xFF);
}

void func_EBFBE0_801920C4(void) {
    if (D_EBFBE0_801B9178 > 0) {
        D_EBFBE0_801B9178--;
    }
    if (D_EBFBE0_801B917C > 0) {
        D_EBFBE0_801B917C--;
    }

    switch (D_8017784C) {
        case 0:
            if (D_8017783C == 0) {
                D_8017784C = 1;
                func_8001DC6C(0, 23);
            }
            break;

        case 1:
            D_80177898 = 0;
            func_EBFBE0_80191B20();
            break;

        case 2:
            D_80177898 = 2;
            func_EBFBE0_80192190();
            break;
    }
    D_80177DB0++;
}

void func_EBFBE0_80192190(void) {
    switch (D_EBFBE0_801B9124) {
        case 1000:
            func_EBFBE0_80192D58();
            break;

        case 0:
            func_EBFBE0_801928BC();
            break;

        case 1:
            func_EBFBE0_80192938();
            break;

        case 2:
            func_EBFBE0_80193C4C();
            break;

        case 3:
            func_EBFBE0_80196EFC();
            break;

        case 4:
            func_EBFBE0_801948A8();
            break;

        case 5:
            func_EBFBE0_801962A4();
            break;

        case 6:
            // Expert Sound Options
            func_EBFBE0_80195944();
            break;

        case 2000:
            func_EBFBE0_8019A0B8();
            break;

        case 10:
        case 20:
        case 30:
            func_EBFBE0_80199424();
            break;

        case 200:
            func_EBFBE0_8019CAE0();
            break;

        case 300:
            func_EBFBE0_8019DD44();
            break;

        case 400:
            func_EBFBE0_8019E030();
            break;
    }

    if (D_EBFBE0_801B91BC != 0) {
        D_EBFBE0_801B91FC += 3.8f;
        D_EBFBE0_801B9200 += 4.2f;
    }
}

void func_EBFBE0_80192340(void) {
    switch (D_EBFBE0_801B9124) {
        case 1000:
            func_EBFBE0_80193864();
            break;

        case 2:
            func_EBFBE0_801944F0();
            break;

        case 3:
            func_EBFBE0_80196F9C();
            break;

        case 4:
            func_EBFBE0_80194CE4();
            break;

        case 6:
            // Expert Sound Options
            func_EBFBE0_80195B74();
            break;

        case 5:
            func_EBFBE0_80196894();
            break;

        case 2000:
            func_EBFBE0_8019AAB4();
            break;

        case 10:
        case 20:
        case 30:
            func_EBFBE0_8019978C();
            break;

        case 200:
            func_EBFBE0_8019D118();
            break;

        case 300:
            func_EBFBE0_8019DF64();
            break;

        case 400:
            func_EBFBE0_8019E284();
            break;
    }

    if (D_EBFBE0_801B8280 != 0) {
        func_EBFBE0_8019BDF0();
        func_80084688(2, D_EBFBE0_801B8284);
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_EBFBE0_801924C4(void) {
    D_80161A38 = 0xFF;
    D_EBFBE0_801B912C = 0;

    switch (D_EBFBE0_801B9124) {
        case 0:
            D_80177898 = 0;
            break;

        case 10:
        case 20:
        case 30:
            func_EBFBE0_801992C4();
            break;

        case 2000:
            func_EBFBE0_80199FA8();
            break;

        case 3:
            func_EBFBE0_80196E54();
            break;

        case 4:
            func_EBFBE0_80194678();
            break;

        case 6:
            func_EBFBE0_801958DC();
            break;

        case 5:
            func_EBFBE0_80196260();
            break;
    }
}

void func_EBFBE0_80192598(void) {
    s32 i;

    D_EBFBE0_801B93E8 = 0;
    D_EBFBE0_801B93EC = 0;

    for (i = 0; i < (96 * 96); i++) {
        // Planet Textures
        D_EBFBE0_801BB810[i] = 106;
        D_EBFBE0_801BDC10[i] = 84;
        D_EBFBE0_801C0010[i] = 75;
        D_EBFBE0_801C2410[i] = 81;
        D_EBFBE0_801C4810[i] = 55;
        D_EBFBE0_801C6C10[i] = 82;
        D_EBFBE0_801C9010[i] = 68;
        D_EBFBE0_801CB410[i] = 52;
        D_EBFBE0_801B9410[i] = 0;
    }

    for (i = 0; i < 9; i++) {
        D_EBFBE0_801CD818[i] = 0.0f;
        func_EBFBE0_801A07E8(D_EBFBE0_801B68B0[i], SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[i]), &D_EBFBE0_801CD818[i]);
    }
}

void func_EBFBE0_80192738(void) {
    if (D_EBFBE0_801B93E8 == 5) {
        func_EBFBE0_801A07E8(D_EBFBE0_801B68B0[8], SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[8]), &D_EBFBE0_801CD818[8]);
        D_EBFBE0_801B93E8 = 0;
    } else {
        D_EBFBE0_801B93E8++;
    }

    func_EBFBE0_801A07E8(D_EBFBE0_801B68B0[D_EBFBE0_801B93EC * 2],
                         SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[D_EBFBE0_801B93EC * 2]),
                         &D_EBFBE0_801CD818[D_EBFBE0_801B93EC * 2]);

    func_EBFBE0_801A07E8(D_EBFBE0_801B68B0[(D_EBFBE0_801B93EC * 2) + 1],
                         SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[(D_EBFBE0_801B93EC * 2) + 1]),
                         &D_EBFBE0_801CD818[(D_EBFBE0_801B93EC * 2) + 1]);

    D_EBFBE0_801B93EC++;
    if (D_EBFBE0_801B93EC >= 4) {
        D_EBFBE0_801B93EC = 0;
    }
}

void func_EBFBE0_801928BC(void) {
    if (D_80178340 == 0xFF) {
        D_80178410 = 0;
        D_EBFBE0_801B9124 = 100;
        D_80177834 = 4;
        D_8017783C = 2;
        D_80177B40 = 0;
        D_80177898 = 0;
        gStopInputTimer = 3;
    } else {
        D_80178340 += 0x20;
        if (D_80178340 > 0xFF) {
            D_80178340 = 0xFF;
        }
    }
}

void func_EBFBE0_80192938(void) {
    if (D_80178340 == 0xFF) {
        D_80178234 = 0xA;
        D_80177834 = 7;
        D_8017783C = 2;
        D_80177854 = 0;
        D_80177898 = 0;
        func_800A5844();
        D_80177CA0 = 0;
        D_80177CB0 = 0.0f;
        D_8017782C = 1;
        gStopInputTimer = 3;
        func_8001DC6C(0, 28);
    } else {
        D_80178340 += 0x20;
        if (D_80178340 >= 0x100) {
            D_80178340 = 0xFF;
        }
    }
}

// https://decomp.me/scratch/qI7sN
// Matches but requires data migration
#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_801929F0(void) {
    s32 i;

    D_800D2870 = 0;
    D_80161A38 = 0xFF;
    gStopInputTimer = 0;
    D_80178410 = 800;
    D_EBFBE0_801B9248 = 0;

    if (D_EBFBE0_801B9244 == 0) {
        D_EBFBE0_801B91BC = 1;
        for (i = 0; i < 6; i++) {
            D_EBFBE0_801AE638[i].unk_00.unk_18 = D_EBFBE0_801AE5B8[i];
            D_EBFBE0_801AE638[i].unk_00.unk_1C = D_EBFBE0_801AE5D0[i];
            D_EBFBE0_801AE638[i].unk_00.unk_20 = 1.0f;
            D_EBFBE0_801AE638[i].unk_00.unk_24 = 1.0f;
            D_EBFBE0_801AE638[i].unk_58 = 1;

            D_EBFBE0_801AE638[i].unk_38.unk_0C = 0.4f;
            D_EBFBE0_801AE638[i].unk_38.unk_10 = 0.21f;
            D_EBFBE0_801AE638[i].unk_38.unk_04 = D_EBFBE0_801AE570[i];
            D_EBFBE0_801AE638[i].unk_38.unk_08 = 0.0f;
            D_EBFBE0_801AE638[i].unk_5C = 1;
        }
    } else {
        D_EBFBE0_801B91BC = 0;
        for (i = 0; i < 6; i++) {
            D_EBFBE0_801AE638[i].unk_00.unk_24 = 1.0f;
            D_EBFBE0_801AE638[i].unk_38.unk_10 = 0.21f;
            D_EBFBE0_801AE638[i].unk_38.unk_08 = 0.0f;
            D_EBFBE0_801AE638[i].unk_5C = 1;
            D_EBFBE0_801AE638[i].unk_58 = 1;
        }
    }

    D_EBFBE0_801B9204 = -45.0f;
    D_EBFBE0_801B9214 = 0;

    D_EBFBE0_801B9180.unk_0 = 0;
    D_EBFBE0_801B9180.unk_4 = 0;
    D_EBFBE0_801B9190.unk_0 = 0;
    D_EBFBE0_801B9190.unk_4 = 0;
    D_EBFBE0_801B9198.unk_0 = 0;
    D_EBFBE0_801B9198.unk_4 = 0;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801929F0.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80192D58.s")

void func_EBFBE0_80193864(void) {
    s32 i;

    func_EBFBE0_8019BDF0();

    for (i = 0; i < 6; i++) {
        if (D_EBFBE0_801AE638[i].unk_5C) {
            func_EBFBE0_8019BAB8(D_EBFBE0_801AE638[i].unk_38);
        }
    }

    func_EBFBE0_8019BBA4(D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_4C);
    Matrix_Pop(&gGfxMatrix);

    for (i = 0; i < 6; i++) {
        if (!(D_EBFBE0_801AE638[i].unk_58) || (D_EBFBE0_801AE638[i].unk_00.unk_20) <= 0.0f) {
            continue;
        }
        if ((i == 0) && (D_EBFBE0_801B91C8 != 0) && ((D_EBFBE0_801B912C == 0) || (D_EBFBE0_801B912C == 1))) {
            func_EBFBE0_8019B6D8(106.0f, 56.0f, 98.0f, 20, 0, 75);
        }
        if ((i == 4) && (D_EBFBE0_801B91C8 != 0) && ((D_EBFBE0_801B912C == 0) || (D_EBFBE0_801B912C == 1))) {
            func_EBFBE0_8019B6D8(106.0f, 152.0f, 98.0f, 20, 0, 75);
        }
        func_EBFBE0_8019C120(D_EBFBE0_801AE638[i].unk_00);
    }

    func_EBFBE0_8019BF34();
}

void func_EBFBE0_80193B04(void) {
    s32 i;

    D_80161A38 = 0xFF;
    gStopInputTimer = 0;
    D_80178410 = 800;

    if (D_EBFBE0_801B9248 == 0) {
        D_EBFBE0_801B91BC = 1;

        for (i = 0; i < 3; i++) {
            D_EBFBE0_801AE878[i].unk_00.unk_18 = D_EBFBE0_801AEF90[i];
            D_EBFBE0_801AE878[i].unk_00.unk_1C = D_EBFBE0_801AEF9C[i];
            D_EBFBE0_801AE878[i].unk_00.unk_20 = 1.0f;
            D_EBFBE0_801AE878[i].unk_00.unk_24 = 1.0f;
            D_EBFBE0_801AE878[i].unk_58 = 1;
            D_EBFBE0_801AE878[i].unk_38.unk_0C = 0.4f;
            D_EBFBE0_801AE878[i].unk_38.unk_10 = 0.21f;
            D_EBFBE0_801AE878[i].unk_38.unk_04 = D_EBFBE0_801AEF84[i];
            D_EBFBE0_801AE878[i].unk_38.unk_08 = 0.0f;
            D_EBFBE0_801AE878[i].unk_5C = 1;
        }
    } else {
        D_EBFBE0_801B91BC = 0;

        for (i = 0; i < 3; i++) {
            D_EBFBE0_801AE878[i].unk_00.unk_24 = 1.0f;
            D_EBFBE0_801AE878[i].unk_38.unk_10 = 0.21f;
            D_EBFBE0_801AE878[i].unk_38.unk_08 = 0.0f;
            D_EBFBE0_801AE878[i].unk_58 = 1;
            D_EBFBE0_801AE878[i].unk_5C = 1;
        }
    }

    D_EBFBE0_801B9204 = -45.0f;
    D_EBFBE0_801B9214 = 0;
    D_EBFBE0_801B9188.unk_0 = 0;
    D_EBFBE0_801B9188.unk_4 = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80193C4C.s")

void func_EBFBE0_801944F0(void) {
    s32 i;

    func_EBFBE0_8019B9C0();
    func_EBFBE0_8019BDF0();

    for (i = 0; i < 3; i++) {
        if (D_EBFBE0_801AE878[i].unk_5C != 0) {
            func_EBFBE0_8019BAB8(D_EBFBE0_801AE878[i].unk_38);
        }
    }

    func_EBFBE0_8019BBA4(D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_4C);
    Matrix_Pop(&gGfxMatrix);

    for (i = 0; i < 3; i++) {
        if ((D_EBFBE0_801AE878[i].unk_58 != 0) && !(D_EBFBE0_801AE878[i].unk_00.unk_20 <= 0.0f)) {
            func_EBFBE0_8019C120(D_EBFBE0_801AE878[i].unk_00);
        }
    }

    func_EBFBE0_8019BF34();
}

void func_EBFBE0_80194678(void) {
    s32 i;

    D_80178410 = 800;

    D_EBFBE0_801B91B4 = 0;
    D_EBFBE0_801B91B8 = 0;
    D_EBFBE0_801B91BC = 1;
    D_EBFBE0_801B91A0 = 0;

    D_80177C74 = gSaveFile.save.data.unk_14;
    func_800182F4(D_EBFBE0_801AE998[D_80177C74] | 0xE0000000);

    D_80177C80[0] = gSaveFile.save.data.unk_15;
    D_80177C80[1] = gSaveFile.save.data.unk_16;
    D_80177C80[2] = gSaveFile.save.data.unk_17;

    if (D_80177C80[0] > 99) {
        D_80177C80[0] = 99;
    }
    if (D_80177C80[1] > 99) {
        D_80177C80[1] = 99;
    }
    if (D_80177C80[2] > 99) {
        D_80177C80[2] = 99;
    }

    func_8001D8A8(0, D_80177C80[0]);
    func_8001D8A8(1, D_80177C80[1]);
    func_8001D8A8(2, D_80177C80[2]);

    D_EBFBE0_801AEB48[0].unk_18 = D_80177C80[0] + 146.0f;
    D_EBFBE0_801AEB48[1].unk_18 = D_80177C80[1] + 146.0f;
    D_EBFBE0_801AEB48[2].unk_18 = D_80177C80[2] + 146.0f;

    D_EBFBE0_801B9288 = 0;
    D_EBFBE0_801B9284 = 0;
    D_EBFBE0_801B914C = 0;
    D_EBFBE0_801B9158 = 0;
    D_EBFBE0_801B9178 = 0;
    D_EBFBE0_801B917C = 0;

    // clang-format off
    for (i = 0; i < 5; i++) { D_EBFBE0_801B9270[i] = 255.0f; }
    // clang-format on
    D_EBFBE0_801B91E4 = 255.0f;

    D_EBFBE0_801B9218 = 56.0f;
    D_EBFBE0_801B921C = -43.0f;
    D_EBFBE0_801B9220 = 0.0f;

    D_EBFBE0_801B9250.unk_0 = 0;
    D_EBFBE0_801B9250.unk_4 = 0;

    D_EBFBE0_801B9258.unk_0 = 0;
    D_EBFBE0_801B9258.unk_4 = 0;

    D_EBFBE0_801B9260.unk_0 = 0;
    D_EBFBE0_801B9260.unk_4 = 0;

    D_EBFBE0_801B9268.unk_0 = 0;
    D_EBFBE0_801B9268.unk_4 = 0;
}

void func_EBFBE0_801948A8(void) {
    s32 sp34;
    s32 temp;

    sp34 = D_EBFBE0_801B9288;
    temp = func_EBFBE0_8019C418(&D_EBFBE0_801B9288, 3, 1, 0, 20, 5, 4, D_80177AF8, &D_EBFBE0_801B9250);
    if (temp != 0) {
        D_EBFBE0_801B9270[sp34] = 255.0f;
        func_80019218(0x49000002U, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    if (D_EBFBE0_801B9288 == 0) {
        func_EBFBE0_80194AEC();
    } else {
        func_EBFBE0_80194BD0();
    }

    // Test sound
    if (gChangedInput[D_80177AF8].button & R_TRIG) {
        D_EBFBE0_801B9284 ^= 1;
        func_8001D8F4(D_EBFBE0_801B9284);
    }

    if (gChangedInput[D_80177AF8].button & A_BUTTON) {
        func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_EBFBE0_801B9288 = (D_EBFBE0_801B9288 + 1) & 3;
    }

    if (gChangedInput[D_80177AF8].button & B_BUTTON) {
        func_80019218(0x49000021, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        if (D_EBFBE0_801B9284 == 1) {
            D_EBFBE0_801B9284 = 0;
            func_8001D8F4(D_EBFBE0_801B9284);
        }
        Save_Write();
        D_80177898 = 0;
        D_EBFBE0_801B9124 = 1000;
        D_EBFBE0_801B912C = 0;
        D_EBFBE0_801B9244 = 1;
    }
}

void func_EBFBE0_80194AEC(void) {
    s32 sp3C = D_80177C74;
    s32 pad;

    if (func_EBFBE0_8019C418(&sp3C, 2, 0, 0, 20, 5, 4, D_80177AF8, &D_EBFBE0_801B9260) != 0) {
        func_80019218(0x49000002, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_80177C74 = sp3C;
        if (D_80177C74 >= 3) {
            D_80177C74 = 0;
        }
        gSaveFile.save.data.unk_14 = D_80177C74;
        func_800182F4(D_EBFBE0_801AE998[D_80177C74] | 0xE0000000);
    }
}

void func_EBFBE0_80194BD0(void) {
    s32 var_v1;

    D_EBFBE0_801B924C = D_EBFBE0_801AE99C[D_EBFBE0_801B9288 - 1];

    if (func_EBFBE0_8019C66C(&(D_EBFBE0_801AEB48[D_EBFBE0_801B9288 - 1].unk_18), 146.0f, 245.0f, &D_EBFBE0_801B9268)) {
        var_v1 = D_EBFBE0_801AEB48[D_EBFBE0_801B9288 - 1].unk_18 - 146.0f;

        D_80177C80[D_EBFBE0_801B9288 - 1] = var_v1;

        if (var_v1 > 99) {
            var_v1 = 99;
        }

        switch (D_EBFBE0_801B9288 - 1) {
            case 0:
                gSaveFile.save.data.unk_15 = var_v1;
                break;

            case 1:
                gSaveFile.save.data.unk_16 = var_v1;
                break;

            case 2:
                gSaveFile.save.data.unk_17 = var_v1;
                break;
        }
        func_8001D8A8(D_EBFBE0_801B924C, var_v1);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80194CE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801952B4.s")

void func_EBFBE0_801958DC(void) {
    s32 i;

    D_80178410 = 800;
    D_EBFBE0_801B931C = 0;

    D_EBFBE0_801B9290.unk_0 = 0;
    D_EBFBE0_801B9290.unk_4 = 0;

    spectrumAnalizerMode = 0;
    D_EBFBE0_801B9320 = 0;

    // clang-format off
    for (i = 0; i < 32; i++) { D_EBFBE0_801B9298[i] = 0.0f; }
    // clang-format on
}

// Expert Sound Options
void func_EBFBE0_80195944(void) {
    s32 pad;
    f32 sp28 = D_EBFBE0_801B931C;

    if (func_EBFBE0_8019C66C(&sp28, 0.0f, 49.0f, &D_EBFBE0_801B9290) != 0) {
        func_80019218(0x49000002, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_EBFBE0_801B931C = sp28;
    }

    if (gChangedInput[D_80177AF8].button & A_BUTTON) {
        func_8001DA90(D_EBFBE0_801B931F);
        D_EBFBE0_801B9320 = true;
    }

    if (gChangedInput[D_80177AF8].button & B_BUTTON) {
        if (!D_EBFBE0_801B9320) {
            func_80019218(0x49000021, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_8001D444(0, 0x24, 0, 0xFF);
            D_80177898 = 0;
            D_EBFBE0_801B9124 = 1000;
            D_EBFBE0_801B912C = 0;
            D_EBFBE0_801B9244 = 1;
        } else {
            func_80019218(0x4900101D, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_800182F4(0x100100FF);
            func_800182F4(0x110100FF);
            D_EBFBE0_801B9320 = false;
        }
    }

    // Spectrum Analizer mode selector
    if (gChangedInput[D_80177AF8].button & R_CBUTTONS) {
        spectrumAnalizerMode++;
        if (spectrumAnalizerMode > 2) {
            spectrumAnalizerMode = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80195B74.s")

void func_EBFBE0_80196260(void) {
    D_80178410 = 800;
    D_EBFBE0_801B91E4 = 255.0f;
    D_EBFBE0_801B9330[0] = 0;
    D_EBFBE0_801B9330[1] = 0;
    D_EBFBE0_801B91C0 = 0;
    D_EBFBE0_801B91CC = 0;
}

void func_EBFBE0_801962A4(void) {
    f32 temp_fv0;
    s32 i;

    switch (D_EBFBE0_801B912C) {
        case 0:
            func_EBFBE0_8019669C();
            break;

        case 2:
            if (D_EBFBE0_801B9330[D_EBFBE0_801B91C0] != 0) {
                break;
            }
            D_EBFBE0_801B91CC = 0;
            D_EBFBE0_801B91C0 = 0;
            D_EBFBE0_801B912C = 0;
            break;

        case 3:
            if (D_EBFBE0_801B9330[D_EBFBE0_801B91C0]) {
                break;
            }
            D_80177898 = 0;
            D_EBFBE0_801B9124 = 0x3E8;
            D_EBFBE0_801B912C = 0;
            D_EBFBE0_801B9244 = 1;
            break;

        case 4:
            if (D_EBFBE0_801B9330[D_EBFBE0_801B91C0]) {
                break;
            }

            switch (D_EBFBE0_801B91CC) {
                case 0:
                    D_EBFBE0_801B91CC = 1;
                    D_EBFBE0_801B91C0 = 0;
                    D_EBFBE0_801B912C = 0;
                    break;

                case 1:
                    D_EBFBE0_801B91CC = 2;
                    func_80019218(0x0940A00B, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_801779A8[D_80177AF8] = 50.0f;
                    D_80177990[D_80177AF8] = 0;
                    break;

                case 2:
                    D_80177990[D_80177AF8] += (s32) D_801779A8[D_80177AF8];
                    temp_fv0 = func_8009BC2C(&D_801779A8[D_80177AF8], 100.0f, 0.05f, 100.0f, 0.1f);

                    if (D_80177990[D_80177AF8] >= 100) {
                        D_80177990[D_80177AF8] -= 100;
                        D_80137E84[D_80177AF8] = 1;
                    }

                    if (temp_fv0 == 0.0f) {
                        D_EBFBE0_801B91CC = 3;

                        gSaveFile = *(SaveFile*) &gDefaultSave;

                        Save_Write();

                        D_EBFBE0_801B91AC = 0;
                        D_EBFBE0_801B91B0 = 0;
                        D_EBFBE0_801B91C8 = 0;

                        D_801779F8 = 0;

                        D_EBFBE0_801AE638[0].unk_00.unk_08 = D_8003B50;
                        D_EBFBE0_801AE638[0].unk_00.unk_10 = 72;
                        D_EBFBE0_801AE638[0].unk_00.unk_14 = 12;
                        D_EBFBE0_801AE638[4].unk_00.unk_08 = D_80046B0;
                        D_EBFBE0_801AE638[4].unk_00.unk_10 = 64;
                        D_EBFBE0_801AE638[4].unk_00.unk_14 = 10;

                        for (i = 0; i < 6; i++) {
                            D_EBFBE0_801AE5B8[i] = D_EBFBE0_801AE588[i];
                            D_EBFBE0_801AE5D0[i] = D_EBFBE0_801AE5A0[i];
                        }
                        func_EBFBE0_80188010();
                    }
                    break;

                case 3:
                    D_EBFBE0_801B912C = 0;
                    break;
            }
            break;
    }
}

void func_EBFBE0_8019669C(void) {
    if ((D_EBFBE0_801B91CC == 0) || (D_EBFBE0_801B91CC == 1)) {
        if (func_EBFBE0_8019C5A0(&D_EBFBE0_801B91C0) != 0) {
            func_80019218(0x49000002, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (1) {}
    }

    if (gChangedInput[D_80177AF8].button & 0x8000) {
        if (D_EBFBE0_801B91CC == 3) {
            func_80019218(0x49000021, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_EBFBE0_801B912C = 3;
        } else {
            D_EBFBE0_801B9330[D_EBFBE0_801B91C0] = 10;
            if (D_EBFBE0_801B91C0 == 0) {
                if (D_EBFBE0_801B91CC == 1) {
                    func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_EBFBE0_801B912C = 2;
                } else {
                    func_80019218(0x49000021, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_EBFBE0_801B912C = 3;
                }
            } else {
                func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801B912C = 4;
            }
        }
    } else if (gChangedInput[D_80177AF8].button & 0x4000) {
        if (D_EBFBE0_801B91CC == 1) {
            func_80019218(0x4900101D, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_EBFBE0_801B912C = 2;
        } else {
            func_80019218(0x49000021, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_EBFBE0_801B912C = 3;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80196894.s")

void func_EBFBE0_80196E54(void) {
    func_EBFBE0_80188010();

    D_80178410 = 800;

    D_EBFBE0_801B91D0 = 1;
    D_EBFBE0_801B93E4 = 0;

    D_EBFBE0_801B91D4 = 114.0f;
    D_EBFBE0_801B91DC = 114.0f;

    D_EBFBE0_801B91D8 = -6.0f;
    D_EBFBE0_801B91E0 = -6.0f;

    D_EBFBE0_801B93E0 = 0;
    D_EBFBE0_801B8288 = 10;

    D_EBFBE0_801B9400.unk_0 = 0;
    D_EBFBE0_801B9400.unk_4 = 0;
    D_EBFBE0_801B9408.unk_0 = 0;
    D_EBFBE0_801B9408.unk_4 = 0;

    func_EBFBE0_80192598();
}

void func_EBFBE0_80196EFC(void) {
    func_EBFBE0_80196FC4();

    if (gChangedInput[D_80177AF8].button & B_BUTTON) {
        func_80019218(0x49000021, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_80177898 = 0;
        D_EBFBE0_801B9124 = 1000;
        D_EBFBE0_801B912C = 0;
        D_EBFBE0_801B9244 = 1;
    }
}

void func_EBFBE0_80196F9C(void) {
    func_EBFBE0_801973C0();
    func_EBFBE0_8019B9C0();
}

void func_EBFBE0_80196FC4(void) {
    if (gChangedInput[D_80177AF8].button & A_BUTTON) {
        func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_EBFBE0_801B93E0 ^= 1;
    }

    if (D_EBFBE0_801B93E0 != 0) {
        func_EBFBE0_8019715C();
        return;
    }

    func_EBFBE0_80197074();
}

void func_EBFBE0_80197074(void) {
    if (func_EBFBE0_8019C418(&D_EBFBE0_801B93E4, 9, 1, 0, 20, 5, 4, D_80177AF8, &D_EBFBE0_801B9400) != 0) {
        func_80019218(0x49000002, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_EBFBE0_801B91D4 = 114.0f - D_EBFBE0_801B93E4 * 130.0f;
        D_EBFBE0_801B91DC = 114.0f - D_EBFBE0_801B93E4 * 130.0f;
        D_EBFBE0_801B91D8 = -6.0f + D_EBFBE0_801B93E4 * 130.0f;
        D_EBFBE0_801B91E0 = -6.0f + D_EBFBE0_801B93E4 * 130.0f;
    }
}

void func_EBFBE0_8019715C(void) {
    s32 pad;
    f32 sp30;
    f32 temp_fv0_2;
    s32 temp;
    s32 temp2;

    if (D_EBFBE0_801B91D0 != 0) {
        if (func_EBFBE0_8019C418(&D_EBFBE0_801B93E4, 9, 1, 1, 20, 2, 9, D_80177AF8, &D_EBFBE0_801B9408) != 0.00f) {
            func_80019218(0x49000002, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_EBFBE0_801B91DC = 114.0f - D_EBFBE0_801B93E4 * 130.0f;
            D_EBFBE0_801B91E0 = -6.0f + D_EBFBE0_801B93E4 * 130.0f;
            D_EBFBE0_801B91D0 = 0;
        }
    } else {
        sp30 = func_8009BC2C(&D_EBFBE0_801B91D8, D_EBFBE0_801B91E0, 0.5f, 100.0f, 1.0f);
        temp_fv0_2 = func_8009BC2C(&D_EBFBE0_801B91D4, D_EBFBE0_801B91DC, 0.5f, 100.0f, 1.0f);
        if ((sp30 == 0.0f) && (temp_fv0_2 == 0.0f)) {
            D_EBFBE0_801B91D0 = 1;
        }
    }

    temp = D_EBFBE0_801B91D4;
    temp2 = D_EBFBE0_801B91D8;

    D_EBFBE0_801B91D4 = temp;
    D_EBFBE0_801B91D8 = temp2;

    if (D_EBFBE0_801B91D4 >= 114.0f) {
        D_EBFBE0_801B91D4 = 114.0f;
    }
    if (D_EBFBE0_801B91D4 <= -1056.0f) {
        D_EBFBE0_801B91D4 = -1056.0f;
    }
    if (D_EBFBE0_801B91D8 <= -6.0f) {
        D_EBFBE0_801B91D8 = -6.0f;
    }
    if (D_EBFBE0_801B91D8 >= 1164.0f) {
        D_EBFBE0_801B91D8 = 1164.0f;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7110.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7114.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7118.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B711C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7120.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7124.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7128.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B712C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7130.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7134.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7138.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B713C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7140.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7144.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7148.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B714C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7150.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7154.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/D_EBFBE0_801B7158.s")

void func_EBFBE0_801973C0(void) {
    s32 temp_t0;

    if (D_EBFBE0_801B93E0 != 0) {
        func_EBFBE0_8019752C();
    } else {
        func_EBFBE0_80187E28();
        func_800B8DD0(&gMasterDisp, 0x53);
        func_EBFBE0_8019C824(&D_EBFBE0_801B93F0);
        temp_t0 = D_EBFBE0_801B93F0;
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, temp_t0, temp_t0, 255);
        func_8009D994(&gMasterDisp, D_7004010, 8, 8, 70.0f, (D_EBFBE0_801B93E4 * 17.0f) + 55.0f, 1.0f, 1.0f);
    }
    func_800B8DD0(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
    func_800A1200(242, 215, 1.0f, 1.0f, "PUSH A");
}

#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_8019752C(void) {
    f32 var_fs0;
    f32 var_fs1;
    s32 temp_a0;
    s32 i;
    static f32 D_EBFBE0_801AF0F4 = 130.0f;
    static f32 D_EBFBE0_801AF0F8[] = { 48.0f, 175.0f };

    var_fs0 = D_EBFBE0_801B91D4;
    var_fs1 = D_EBFBE0_801B91D8;

    for (i = 0; i < 10; i++) {
        if ((var_fs0 > 69.0f) && (var_fs0 < 230.0f)) {
            func_EBFBE0_80197A3C(i, 41, var_fs0);
            func_EBFBE0_80197D30(i, 75, var_fs0 - 25.0f);
            func_EBFBE0_80197DE4(i, 130, (var_fs0 - 26.0f));
            func_EBFBE0_801AD7EC(210, (var_fs0 - 24.0f), gSaveFile.save.data.unk_40[i]);
            func_EBFBE0_80197F74(i, 258, var_fs0 - 25.0f);
        }
        func_EBFBE0_80198164(i, var_fs0, var_fs1);
        var_fs0 += D_EBFBE0_801AF0F4;
        var_fs1 -= D_EBFBE0_801AF0F4;
    }

    func_EBFBE0_8019BDF0();
    func_EBFBE0_80197914();

    Matrix_Pop(&gGfxMatrix);
    func_800B8DD0(&gMasterDisp, 0x4C);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    func_8009D994(&gMasterDisp, D_800D170, 8, 16, 0.0f, D_EBFBE0_801AF0F8[0], 40.0f, 1.5f);
    func_8009E4B0(&gMasterDisp, D_800D170, 8, 16, 0.0f, D_EBFBE0_801AF0F8[1], 40.0f, 1.5f);

    func_8003DE68(0, 70);
    func_8003DE68(170, 239);
    func_800B8DD0(&gMasterDisp, 0x53);

    if (D_EBFBE0_801B91D4 >= 114.0f) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 32, 32, 32, 255);
    } else {
        func_EBFBE0_8019C824(&D_EBFBE0_801B93F4);
        temp_a0 = D_EBFBE0_801B93F4;
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, temp_a0, temp_a0, 255);
    }

    func_8009D994(&gMasterDisp, D_800D070, 16, 16, 150.0f, 44.0f, 1.0f, 1.0f);

    if (D_EBFBE0_801B91D4 <= -1055.0f) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 32, 32, 32, 255);
    } else {
        func_EBFBE0_8019C824(&D_EBFBE0_801B93F8);
        temp_a0 = D_EBFBE0_801B93F8;
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, temp_a0, temp_a0, 255);
    }

    func_8009E4B0(&gMasterDisp, D_800D070, 0x10, 0x10, 150.0f, 200.0f, 1.0f, 1.0f);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019752C.s")
#endif

void func_EBFBE0_80197914(void) {
    Vec3f* vec1;
    Vec3f* vec2;
    s32 i;

    func_800B8DD0(&gMasterDisp, 0);

    for (i = 0, vec1 = D_EBFBE0_801AF100, vec2 = D_EBFBE0_801AF118; i < 2; i++, vec1++, vec2++) {
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, vec1->x, vec1->y, -500.0f, 1);
        Matrix_Scale(gGfxMatrix, vec2->x, vec2->y, 1.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_EBFBE0_801AEF30);
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_EBFBE0_80197A3C(s32 arg0, s32 arg1, s32 arg2) {
    func_800B8DD0(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    if (arg0 != 9) {
        func_8009D994(&gMasterDisp, D_EBFBE0_801AECF8[arg0 + 1], 16, 15, arg1, arg2 - 25.0f, 1.0f, 1.0f);
    } else {
        func_8009D994(&gMasterDisp, D_500A050, 16, 15, arg1 - 14.0f, arg2 - 25.0f, 1.0f, 1.0f);
        func_8009D994(&gMasterDisp, D_5009F60, 16, 15, arg1, arg2 - 25.0f, 1.0f, 1.0f);
    }

    func_800B8DD0(&gMasterDisp, 0x55);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    switch (arg0) {
        case 0:
            func_8009C320(&gMasterDisp, D_8003A70, D_8003AB8, 16, 9, arg1 + 17.0f, arg2 - 19.0f, 1.0f, 1.0f);
            break;

        case 1:
            func_8009C320(&gMasterDisp, D_80038E0, D_8003930, 16, 10, arg1 + 17.0f, arg2 - 19.0f, 1.0f, 1.0f);
            break;

        case 2:
            func_8009C320(&gMasterDisp, D_8003950, D_80039A8, 16, 11, arg1 + 17.0f, arg2 - 20.0f, 1.0f, 1.0f);
            break;

        default:
            func_8009C320(&gMasterDisp, D_8003AE0, D_8003B28, 16, 9, arg1 + 17.0f, arg2 - 19.0f, 1.0f, 1.0f);
            break;
    }
}

void func_EBFBE0_80197D30(s32 arg0, s32 arg1, s32 arg2) {
    char temp[4];

    func_800B8DD0(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    temp[0] = gSaveFile.save.data.unk_18[arg0][0] & 0xFF;
    temp[1] = gSaveFile.save.data.unk_18[arg0][1] & 0xFF;
    temp[2] = gSaveFile.save.data.unk_18[arg0][2] & 0xFF;
    temp[3] = '\0';

    func_800A0094(arg1, arg2, 1.0f, 1.0f, temp);
}

void func_EBFBE0_80197DE4(s32 arg0, s32 arg1, s32 arg2) {
    func_800B8DD0(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 60, 60, 255, 170);
    func_8009D994(&gMasterDisp, D_601B4B0, 24, 17, arg1, arg2, 3.17f, 1.05f);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
    func_800A1200(arg1, arg2, 1.0f, 1.0f, "TOTAL HITS");
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_8009FEA0((arg1 + 40.0f) - ((func_8008BCBC(D_EBFBE0_801B8220[arg0]) * 8) - 8), (arg2 + 9.0f),
                  D_EBFBE0_801B8220[arg0]);
}

void func_EBFBE0_80197F74(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_fs1;
    s32 i;

    func_800B8DD0(&gMasterDisp, 0x53);

    for (temp_fs1 = 0.0f, i = 0; i < 3; i++, temp_fs1 += 12.0f) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, D_EBFBE0_801AF0D0[i], D_EBFBE0_801AF0DC[i], D_EBFBE0_801AF0E8[i], 255);
        func_800A1200(temp_fs1 + arg1, arg2, 1.0f, 1.0f, D_EBFBE0_801AF0C4[i]);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        func_8009FEA0(arg1 + temp_fs1 - ((func_8008BCBC(D_EBFBE0_801B81A8[arg0][i]) - 1) * 8), arg2 + 9.0f,
                      D_EBFBE0_801B81A8[arg0][i]);
    }
}

void func_EBFBE0_80198164(s32 arg0, f32 arg1, f32 arg2) {
    f32 temp = 16.0f;
    s32 temp_s2 = gSaveFile.save.data.unk_36[arg0];
    f32 var_fs2;
    s32 i;

    for (var_fs2 = 0.0f, i = 0; i < 7; i++, var_fs2 += 24.0f + temp) {
        func_EBFBE0_801982B0(arg0, i, 28.0f + var_fs2, arg1, temp_s2);
        if (i < temp_s2) {
            func_EBFBE0_8019882C(arg0, i, 28.0f + var_fs2, arg1);
            func_EBFBE0_801984D0(arg0, i, 28.0f + var_fs2, arg1);
            func_EBFBE0_80198608(arg0, i, 28.0f + var_fs2, arg1);
        }
    }

    if ((arg2 < 75.0f) && (arg2 > -80.0f)) {
        func_EBFBE0_8019896C(arg0, arg2, temp_s2);
    }
}

void func_EBFBE0_801982B0(s32 arg0, s32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    s32 r;
    s32 g;
    s32 b;
    s32 temp_v0;
    s32 temp1;
    s32 temp2;

    if ((arg3 > 30.0f) && (arg3 < 200.0f)) {
        func_800B8DD0(&gMasterDisp, 0x4C);
        if (arg1 < 6) {
            b = 255;
            g = 255;
            r = 255;
            if (arg1 < (arg4 - 1)) {
                temp1 = gSaveFile.save.data.unk_5E[arg0][arg1].unk_8 & 15;
                temp2 = gSaveFile.save.data.unk_5E[arg0][arg1 + 1].unk_8 & 15;

                temp_v0 = func_EBFBE0_80199284(temp1, temp2);

                g = 255;
                b = 255;
                r = 255;

                switch (temp_v0) {
                    case 0:
                        r = 16;
                        g = 64;
                        break;

                    case 1:
                    case 3:
                        g = 175;
                        b = 0;
                        break;

                    case 2:
                    case 4:
                        b = 0;
                        g = 0;
                        break;
                }
            }
            gDPSetPrimColor(gMasterDisp++, 0, 0, r, g, b, 255);
            func_8009D418(&gMasterDisp, D_60447A0, 8, 8, arg2 + 24.0f, arg3 + 11.0f, 2.0f, 0.2f);
        }
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        func_8009D418(&gMasterDisp, D_6047550, 24, 24, arg2, arg3, 1.0f, 1.0f);
    }
}

void func_EBFBE0_801984D0(s32 arg0, s32 arg1, f32 arg2, f32 arg3) {
    s32 sp1C;

    if ((arg3 > 22.0f) && (arg3 < 162.0f)) {
        func_800B8DD0(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
        sp1C = (gSaveFile.save.data.unk_5E[arg0][arg1].unk_C & 1) << 8;
        sp1C |= gSaveFile.save.data.unk_5E[arg0][arg1].unk_0;
        func_8009FEA0(arg2 + 15.0f - (func_8008BCBC(sp1C) - 1) * 8, arg3 + 24.0f + 1.0f, sp1C);
    }
}

void func_EBFBE0_80198608(s32 arg0, s32 arg1, f32 arg2, f32 arg3) {
    f32 var_fs1;
    s32 sp90[3];
    s32 i;

    if ((arg3 > 12.0f) && (arg3 < 154.0f)) {
        func_800B8DD0(&gMasterDisp, 0x53);

        sp90[0] = gSaveFile.save.data.unk_5E[arg0][arg1].unk_D & 1;
        sp90[1] = gSaveFile.save.data.unk_5E[arg0][arg1].unk_F & 1;
        sp90[2] = gSaveFile.save.data.unk_5E[arg0][arg1].unk_E & 1;

        for (var_fs1 = 0.0f, i = 0; i < 3; i++, var_fs1 += 9.0f) {
            if (sp90[i] == 0) {
                continue;
            }
            gDPSetPrimColor(gMasterDisp++, 0, 0, D_EBFBE0_801AF0D0[i], D_EBFBE0_801AF0DC[i], D_EBFBE0_801AF0E8[i], 255);
            func_800A1200(arg2 + var_fs1 - 1.0f, arg3 + 24.0f + 8.0f + 1.0f, 1.0f, 1.0f, D_EBFBE0_801AF0C4[i]);
        }
    }
}

void func_EBFBE0_8019882C(s32 arg0, s32 arg1, f32 arg2, f32 arg3) {
    s32 temp;
    s8* sp20;
    f32 temp2;

    if (arg3 > 58.0f && arg3 < 197.0f) {
        temp = gSaveFile.save.data.unk_5E[arg0][arg1].unk_8 & 0x0f;
        sp20 = D_EBFBE0_801AEEAC[temp];
        func_800B8DD0(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
        temp2 = func_800A13EC(sp20) / 2.0f;
        func_800A1200(arg2 + 12.0f - temp2, arg3 - 8.0f, 1.0f, 1.0f, sp20);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019896C.s")

void func_EBFBE0_80199198(f32 arg0, f32 arg1, f32 arg2) {
    func_800B8DD0(&gMasterDisp, 0x35);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, arg0 - D_EBFBE0_801AF140, arg1 + D_EBFBE0_801AF144, arg2, 1);
    Matrix_Scale(gGfxMatrix, D_EBFBE0_801AF13C, D_EBFBE0_801AF13C, D_EBFBE0_801AF13C, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_601D1F0);
    Matrix_Pop(&gGfxMatrix);
}

s32 func_EBFBE0_80199284(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 24; i++) {
        if ((D_EBFBE0_801AED4C[i].unk_0 == arg0) && (D_EBFBE0_801AED4C[i].unk_4 == arg1)) {
            break;
        }
    }

    return D_EBFBE0_801AED4C[i].unk_8;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801992C4.s")

void func_EBFBE0_80199424(void) {
    switch (D_EBFBE0_801B912C) {
        case 0:
            func_EBFBE0_8019949C();
            break;

        case 1:
            if (D_EBFBE0_801B91EC == 0.0f) {
                D_EBFBE0_801B9124 = 2000;
                func_EBFBE0_801924C4();
            }
            break;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019949C.s")

void func_EBFBE0_8019978C(void) {
    s32 i;

    func_EBFBE0_8019B8C8();
    func_EBFBE0_80199EA8();

    for (i = 0; i < 4; i++) {
        if (gControllerStatus[i] == 1) {
            func_EBFBE0_80199820(i);
        }
    }

    if (D_EBFBE0_801B93C4 == 15) {
        func_EBFBE0_8019B5AC();
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199820.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199EA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199FA8.s")

// Needs static data type
#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_8019A080(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_EBFBE0_801B9380[i].unk_0 = 0;
        D_EBFBE0_801B9380[i].unk_4 = 0;
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A080.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A0B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A124.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A1A8.s")

void func_EBFBE0_8019A214(void) {
    switch (D_EBFBE0_801B912C) {
        case 0:
            func_EBFBE0_8019A4DC();
            break;
        case 1:
            func_EBFBE0_8019A6DC();
            break;
        case 2:
            func_EBFBE0_8019A954();
            break;
        case 3:
            func_EBFBE0_8019A298();
            break;
    }
}

void func_EBFBE0_8019A298(void) {
    if (D_EBFBE0_801B91EC == 0.0f) {
        D_80177834 = 6;
        D_8017783C = 2;
        D_8017784C = 0;
        D_80177898 = 0;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A2E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A4DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A6DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A954.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019AAB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019AB30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019AD84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019AFFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019B1F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019B3DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019B5AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019B6D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019B7D4.s")

void func_EBFBE0_8019B8A0(s32 arg0) {
    D_EBFBE0_801B9124 = arg0;
    D_80177898 = 0;
    D_EBFBE0_801B912C = 0;
    D_EBFBE0_801B91B4 = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019B8C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019B9C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019BAB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019BBA4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019BC44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019BDF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019BE7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019BF34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C04C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C120.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C418.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C5A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C66C.s")

void func_EBFBE0_8019C824(f32* arg0) {
    if ((s32) func_8009BC2C(arg0, D_EBFBE0_801B91E4, 0.5f, 100.0f, 1.0f) == 0.0f) {
        if (*arg0 == 32.0f) {
            D_EBFBE0_801B91E4 = 255.0f;
        } else {
            D_EBFBE0_801B91E4 = 32.0f;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C8C4.s")

void func_EBFBE0_8019CAE0(void) {
    switch (D_EBFBE0_801B912C) {
        case 0:
            func_EBFBE0_8019CBC0();
            D_EBFBE0_801B912C++;
            break;

        case 1:
            func_EBFBE0_8019CD54();
            break;

        case 2:
            func_EBFBE0_8019D624();
            func_EBFBE0_80188010();
            D_EBFBE0_801B917C = 15;
            D_EBFBE0_801B912C++;
            break;

        case 3:
            if (D_EBFBE0_801B917C == 0) {
                D_80161A38 = 255;
                D_80177898 = 0;
                D_EBFBE0_801B912C = 0;
                D_EBFBE0_801B9124 = 300;
            }
            break;
    }
}

void func_EBFBE0_8019CBC0(void) {
    s32 temp;
    s32 i;

    func_8001D444(0, 36, 0, 255);

    D_80161A38 = 0xD0;
    D_80178410 = 800;

    D_EBFBE0_801B9130 = 1;
    D_EBFBE0_801B9128 = 0;
    D_EBFBE0_801B911C = 0.0f;
    D_EBFBE0_801B9120 = 70.0f;

    temp = gSaveFile.save.data.unk_EA & 0xFF;

    if (temp < 10) {
        D_EBFBE0_801B9098 = 3;
        D_EBFBE0_801B9138 = 1;

        D_EBFBE0_801B9150[0][0] = gSaveFile.save.data.unk_18[temp][0] & 0xFF;
        D_EBFBE0_801B9150[1][0] = gSaveFile.save.data.unk_18[temp][1] & 0xFF;
        D_EBFBE0_801B9150[2][0] = gSaveFile.save.data.unk_18[temp][2] & 0xFF;

        for (i = 0; i < 3; i++) {
            D_EBFBE0_801B90A0[i] = func_EBFBE0_8019DCE8(D_EBFBE0_801B9150[i][0]);
            D_EBFBE0_801B90B0[i] = 1;
            D_EBFBE0_801B9150[i][1] = 0;
        }
    } else {
        D_EBFBE0_801B9098 = 0;
        D_EBFBE0_801B9138 = 0;

        for (i = 0; i < 3; i++) {
            D_EBFBE0_801B90B0[i] = 0;
            D_EBFBE0_801B90A0[i] = 0;
            D_EBFBE0_801B9150[i][0] = 0x41;
            D_EBFBE0_801B9150[i][1] = 0;
        }
    }
    func_EBFBE0_80192598();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019CD54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019D118.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019D624.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019DB20.s")

s32 func_EBFBE0_8019DCE8(s32 arg0) {
    s32 i = 0;

    // 'for()' causes instruction reorder
    while (D_EBFBE0_801AEF5C[i] != 0) {
        if (D_EBFBE0_801AEF5C[i] == arg0) {
            break;
        }
        i++;
    }

    if (D_EBFBE0_801AEF5C[i] == 0) {
        i = 0;
    }

    return i;
}

void func_EBFBE0_8019DD44(void) {
    switch (D_EBFBE0_801B912C) {
        case 0:
            func_EBFBE0_80196E54();

            D_EBFBE0_801B93E4 = D_EBFBE0_801B9094;

            if ((D_EBFBE0_801B9094 < 0) || (D_EBFBE0_801B9094 >= 10)) {
                D_EBFBE0_801B93E4 = 0;
            }

            D_EBFBE0_801B91D4 = 114.0f - D_EBFBE0_801B93E4 * 130.0f;
            D_EBFBE0_801B91D8 = -6.0f + D_EBFBE0_801B93E4 * 130.0f;
            D_EBFBE0_801AE638[3].unk_00.unk_18 = D_EBFBE0_801AE5C4;
            D_EBFBE0_801AE638[3].unk_00.unk_1C = 23.0f;
            D_EBFBE0_801AE638[3].unk_00.unk_20 = 1.0f;
            D_EBFBE0_801AE638[3].unk_00.unk_24 = 1.0f;
            D_EBFBE0_801AE638[3].unk_58 = 1;
            D_EBFBE0_801AE638[3].unk_38.unk_04 = 90.0f;
            D_EBFBE0_801AE638[3].unk_38.unk_0C = 0.4f;
            D_EBFBE0_801AE638[3].unk_38.unk_10 = 0.21f;
            D_EBFBE0_801AE638[3].unk_5C = 1;
            D_EBFBE0_801B912C++;
            break;

        case 1:
            func_EBFBE0_8019DE74();
            break;
    }
}

void func_EBFBE0_8019DE74(void) {
    func_EBFBE0_8019715C();

    if (gChangedInput[D_80177AF8].button & 0xD00E) { // START, A, B, C-UP, C-LEFT, C-DOWN
        func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

        D_80177898 = 0;
        D_EBFBE0_801B912C = 0;

        if (D_80161A34 == 5) {
            D_80178410 = 0;
            D_80177834 = 1;
            D_80161AA0[0] = 2;
            D_80161714 = 0;
        } else if (D_80161A34 == 8) {
            func_800182F4(0x100100FF);
            func_800182F4(0x110100FF);
            D_EBFBE0_801B9124 = 400;
        }
    }
}

void func_EBFBE0_8019DF64(void) {
    func_EBFBE0_8019752C();
    func_EBFBE0_8019BDF0();
    func_EBFBE0_8019BAB8(D_EBFBE0_801AE638[3].unk_38);
    Matrix_Pop(&gGfxMatrix);
    func_EBFBE0_8019C120(D_EBFBE0_801AE638[3].unk_00);
}

void func_EBFBE0_8019E030(void) {
    switch (D_EBFBE0_801B912C) {
        case 0:
            D_80178410 = 0;
            D_80161A36 = 0;
            D_80178348 = 0;
            D_80178350 = 0;
            D_80178354 = 0;
            D_80178340 = 0;
            D_EBFBE0_801B9090 = 0;
            D_EBFBE0_801B9178 = 30;
            D_EBFBE0_801B912C++;
            break;

        case 1:
            if (D_EBFBE0_801B9178 == 0) {
                if (((D_80161714 * 64) >= 50000) && ((D_80161714 * 64) < 70000)) {
                    func_80019218(0x49000032, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if ((D_80161714 * 64) >= 70000) {
                    func_80019218(0x49000033, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                D_EBFBE0_801B9178 = 20;
                D_EBFBE0_801B912C++;
            }
            break;

        case 2:
            if ((D_EBFBE0_801B9178 == 0) && (gChangedInput[D_80177AF8].button & 0xD00E)) {
                func_80019218(0x19031083, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801B9090 = 1;
                D_EBFBE0_801B9178 = 60;
                D_EBFBE0_801B912C++;
            }
            break;

        case 3:
            if (D_EBFBE0_801B9178 == 0) {
                D_80178410 = 0;
                D_80177834 = 1;
                D_80177898 = 0;
                *D_80161AA0 = 2;
                D_80161714 = 0;
            }
            break;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019E284.s")
