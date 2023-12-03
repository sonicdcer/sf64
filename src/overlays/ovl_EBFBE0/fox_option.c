#include "global.h"
#include "fox_option.h"

#ifdef IMPORT_DATA_PENDING
static f32 D_EBFBE0_801AE9A0[4] = { 62.0f, 222.0f, 75.0f, 235.0f };

static f32 D_EBFBE0_801AE9B0[4] = { 43.0f, 43.0f, 46.0f, 46.0f };

static MenuContext_00 D_EBFBE0_801AE9C0[4] = {
    { 2, 0, (void*) 0x080143B0, 0x080147B0, 32, 32, 56.0f, 175.0f, 1.0f, 1.0f, 255, 255, 255, 255 },
    { 2, 0, (void*) 0x080143B0, 0x080147B0, 32, 32, 216.0f, 175.0f, 1.0f, 1.0f, 255, 255, 255, 255 },
    { 1, 0, (void*) 0x080039D0, 0x08003A50, 16, 16, 69.0f, 178.0f, 1.0f, 1.0f, 255, 255, 255, 255 },
    { 1, 0, (void*) 0x080039D0, 0x08003A50, 16, 16, 229.0f, 178.0f, 1.0f, 1.0f, 255, 255, 255, 255 },
};

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

static MenuContext_00 D_EBFBE0_801AEAA0[3] = {
    { 3, 0, (void*) 0x08013990, 0, 104, 10, 151.0f, 135.0f, 1.05f, 1.0f, 255, 255, 255, 255 },
    { 3, 0, (void*) 0x08013990, 0, 104, 10, 151.0f, 161.0f, 1.05f, 1.0f, 255, 255, 255, 255 },
    { 3, 0, (void*) 0x08013990, 0, 104, 10, 151.0f, 188.0f, 1.05f, 1.0f, 255, 255, 255, 255 },
};

static MenuContext_00 D_EBFBE0_801AEB48[3] = {
    { 3, 0, (void*) 0x080141B0, 0, 16, 16, 245.0f, 132.0f, 1.0f, 1.0f, 255, 255, 255, 255 },
    { 3, 0, (void*) 0x080141B0, 0, 16, 16, 245.0f, 158.0f, 1.0f, 1.0f, 255, 255, 255, 255 },
    { 3, 0, (void*) 0x080141B0, 0, 16, 16, 245.0f, 185.0f, 1.0f, 1.0f, 255, 255, 255, 255 },
};
static u8* D_EBFBE0_801AECF8[10] = {
    (u8*) 0x05009F60, (u8*) 0x0500A050, (u8*) 0x0500A140, (u8*) 0x0500A230, (u8*) 0x0500A320,
    (u8*) 0x0500A410, (u8*) 0x0500A500, (u8*) 0x0500A5F0, (u8*) 0x0500A6E0, (u8*) 0x0500A7D0,
};
static s32 D_EBFBE0_801AED3C[4] = { 0, 0, 0, 0 };
static f32 D_EBFBE0_801AF148[4] = { 30.0f, 214.0f, 30.0f, 215.0f };
static f32 D_EBFBE0_801AF158[4] = { 18.0f, 18.0f, 151.0f, 151.0f };
static f32 D_EBFBE0_801AF188[4] = { 12.0f, 16.0f, 12.0f, 18.0f };
static f32 D_EBFBE0_801AF198 = -1.0f;
static f32 D_EBFBE0_801AF19C[4] = { 46.0f, 41.0f, 41.0f, 41.0f };
static f32 D_EBFBE0_801AF1AC = 24.0f;
static f32 D_EBFBE0_801AF1B0 = 1.4f;
static f32 D_EBFBE0_801AF1B4 = 5.0f;
static f32 D_EBFBE0_801AF1B8 = 11.0f;
static f32 D_EBFBE0_801AF1BC = 8.0f;
static f32 D_EBFBE0_801AF1C0 = 45.0f;
static f32 D_EBFBE0_801AF1C4 = 20.0f;
static f32 D_EBFBE0_801AF1C8 = 55.0f;
static f32 D_EBFBE0_801AF1CC = 37.0f;
static f32 D_EBFBE0_801AF1D0 = 11.0f;
static f32 D_EBFBE0_801AF1D4 = 7.0f;
static f32 D_EBFBE0_801AF1D8 = 59.0f;
static f32 D_EBFBE0_801AF1DC = 58.0f;
static s32 D_EBFBE0_801AF168[4] = { 56, 48, 56, 48 };
static s32 D_EBFBE0_801AF178[4] = { 8, 10, 10, 8 };
#else
extern MenuContext_00 D_EBFBE0_801AE9C0[4];
extern MenuContext_00 D_EBFBE0_801AEB48[];
extern f32 D_EBFBE0_801AE9A0[4];
extern f32 D_EBFBE0_801AE9B0[4];
extern f32 D_EBFBE0_801AE570[];
extern f32 D_EBFBE0_801AE5B8[];
extern f32 D_EBFBE0_801AE5D0[];
extern MenuContext D_EBFBE0_801AE638[];
extern s32 D_EBFBE0_801AED3C[4];
extern f32 D_EBFBE0_801AF148[4];
extern f32 D_EBFBE0_801AF158[4];
extern f32 D_EBFBE0_801AF188[4];
extern f32 D_EBFBE0_801AF198;
extern f32 D_EBFBE0_801AF19C[4];
extern f32 D_EBFBE0_801AF1AC;
extern f32 D_EBFBE0_801AF1B0;
extern f32 D_EBFBE0_801AF1B4;
extern f32 D_EBFBE0_801AF1B8;
extern f32 D_EBFBE0_801AF1BC;
extern f32 D_EBFBE0_801AF1C0;
extern f32 D_EBFBE0_801AF1C4;
extern f32 D_EBFBE0_801AF1C8;
extern f32 D_EBFBE0_801AF1CC;
extern f32 D_EBFBE0_801AF1D0;
extern f32 D_EBFBE0_801AF1D4;
extern f32 D_EBFBE0_801AF1D8;
extern f32 D_EBFBE0_801AF1DC;
extern s32 D_EBFBE0_801AF168[4];
extern s32 D_EBFBE0_801AF178[4];
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
            D_80177B90[D_80177B48] = 13;
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

void func_EBFBE0_80192D58(void) {
    s32 i;
    f32 var_fs0;
    f32 var_fs1;
    s32 temp1;
    s32 temp2;

    switch (D_EBFBE0_801B912C) {
        case 0:
            func_EBFBE0_801929F0();
            if (D_EBFBE0_801B9244 == 0) {
                D_EBFBE0_801B912C++;
            } else {
                D_EBFBE0_801AE5B8[0] = D_EBFBE0_801AE5E8[D_EBFBE0_801B91B0];
                D_EBFBE0_801AE5D0[0] = D_EBFBE0_801AE5F0[D_EBFBE0_801B91B0];
                D_EBFBE0_801AE5B8[4] = D_EBFBE0_801AE5F8[D_EBFBE0_801B91AC];
                D_EBFBE0_801AE5D0[4] = D_EBFBE0_801AE600[D_EBFBE0_801B91AC];
                D_EBFBE0_801B912C = 1000;
            }
            break;

        case 1000:
            for (i = 0; i < 6; i++) {
                if (D_EBFBE0_801AE638[i].unk_38.unk_0C < 0.4f) {
                    D_EBFBE0_801AE638[i].unk_38.unk_0C += 0.04f;
                    if (D_EBFBE0_801AE638[i].unk_38.unk_0C > 0.4f) {
                        D_EBFBE0_801AE638[i].unk_38.unk_0C = 0.4f;
                    }
                }
                if (D_EBFBE0_801AE638[i].unk_00.unk_20 < 1.0f) {
                    D_EBFBE0_801AE638[i].unk_00.unk_20 += 0.1f;
                    if (D_EBFBE0_801AE638[i].unk_00.unk_20 > 1.0f) {
                        D_EBFBE0_801AE638[i].unk_00.unk_20 = 1.0f;
                    }
                }

                Math_SmoothStepToF(&D_EBFBE0_801AE638[i].unk_00.unk_1C, D_EBFBE0_801AE5D0[i], 0.15f, 100.0f, 0.1f);
                Math_SmoothStepToF(&D_EBFBE0_801AE638[i].unk_38.unk_04, D_EBFBE0_801AE570[i], 0.15f, 100.0f, 0.1f);
                Math_SmoothStepToF(&D_EBFBE0_801AE638[i].unk_00.unk_18, D_EBFBE0_801AE5B8[i], 0.2f,
                                   D_EBFBE0_801AE620[i], 0.1f);
            }

            D_80161A38 += 4;

            if (D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38.unk_04 == D_EBFBE0_801AE570[D_EBFBE0_801B91A4]) {
                for (i = 0; i < 6; i++) {
                    D_EBFBE0_801AE638[i].unk_00.unk_20 = 1.0f;
                    D_EBFBE0_801AE638[i].unk_00.unk_18 = D_EBFBE0_801AE5B8[i];
                    D_EBFBE0_801AE638[i].unk_00.unk_1C = D_EBFBE0_801AE5D0[i];
                }
                D_EBFBE0_801B91BC = 1;
                D_80161A38 = 0xFF;
                D_EBFBE0_801B912C = 1;
            }
            break;

        case 1:
            temp1 = func_EBFBE0_8019C418(&D_EBFBE0_801B91A4, 5, 1, 0, 20, 5, 4, D_80177AF8, &D_EBFBE0_801B9180);
            // clang-format off
            if (temp1 != 0) { func_80019218(0x49000022, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C); }
            // clang-format on

            if ((D_EBFBE0_801B91A4 == 0) && (D_EBFBE0_801B91C8 != 0)) {
                temp2 = func_EBFBE0_8019C418(&D_EBFBE0_801B91B0, 1, 0, 0, 20, 5, 4, D_80177AF8, &D_EBFBE0_801B9190);
                if (temp2 != 0) {
                    func_80019218(0x49000022, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    if (D_EBFBE0_801B91B0) {
                        D_EBFBE0_801AE638[0].unk_00.unk_08 = D_8004C50;
                        D_EBFBE0_801AE638[0].unk_00.unk_10 = 80;
                        D_EBFBE0_801AE638[0].unk_00.unk_14 = 12;
                        D_EBFBE0_801AE638[0].unk_00.unk_18 = 125.0f;
                        D_EBFBE0_801AE638[0].unk_00.unk_1C = 55.0f;
                    } else {
                        D_EBFBE0_801AE638[0].unk_00.unk_08 = D_8003B50;
                        D_EBFBE0_801AE638[0].unk_00.unk_10 = 72;
                        D_EBFBE0_801AE638[0].unk_00.unk_14 = 12;
                        D_EBFBE0_801AE638[0].unk_00.unk_18 = 124.0f;
                        D_EBFBE0_801AE638[0].unk_00.unk_1C = 54.0f;
                    }
                    D_801779F8 = D_EBFBE0_801B91B0;
                }
            }
            if ((D_EBFBE0_801B91A4 == 4) && (D_EBFBE0_801B91C8 != 0)) {
                temp2 = func_EBFBE0_8019C418(&D_EBFBE0_801B91AC, 1, 0, 0, 20, 5, 4, D_80177AF8, &D_EBFBE0_801B9198);
                if (temp2 != 0) {
                    func_80019218(0x49000022, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    if (D_EBFBE0_801B91AC) {
                        D_EBFBE0_801AE638[4].unk_00.unk_08 = D_8004C50;
                        D_EBFBE0_801AE638[4].unk_00.unk_10 = 80;
                        D_EBFBE0_801AE638[4].unk_00.unk_14 = 12;
                        D_EBFBE0_801AE638[4].unk_00.unk_18 = 125.0f;
                        D_EBFBE0_801AE638[4].unk_00.unk_1C = 151.0f;
                    } else {
                        D_EBFBE0_801AE638[4].unk_00.unk_08 = D_80046B0;
                        D_EBFBE0_801AE638[4].unk_00.unk_10 = 64;
                        D_EBFBE0_801AE638[4].unk_00.unk_14 = 10;
                        D_EBFBE0_801AE638[4].unk_00.unk_18 = 133.0f;
                        D_EBFBE0_801AE638[4].unk_00.unk_1C = 151.0f;
                    }
                }
            }

            if (gChangedInput[D_80177AF8].button & (A_BUTTON | START_BUTTON)) {
                func_80019218(0x49000020, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801B9208 = D_EBFBE0_801AE570[D_EBFBE0_801B91A4];
                D_EBFBE0_801B91BC = 0;
                D_EBFBE0_801B912C = 11;
            }
            if (gChangedInput[D_80177AF8].button & B_BUTTON) {
                func_80019218(0x49000021, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801B8284 = 0;
                D_EBFBE0_801B8280 = 1;
                D_EBFBE0_801B912C = 100;
            }
            break;

        case 11:
            D_80161A38 = 0x10;
            D_EBFBE0_801B9178 = 3;
            D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38.unk_0C -= 0.01f;
            D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38.unk_10 -= 0.01f;
            D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_20 -= 0.1f;
            D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_24 -= 0.1f;
            D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_18 += 4.0f;
            D_EBFBE0_801B917C = 3;
            D_EBFBE0_801B912C++;
            break;

        case 12:
            if (D_EBFBE0_801B9178 == 1) {
                D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38.unk_0C += 0.01f;
                D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38.unk_10 += 0.01f;
                D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_20 += 0.1f;
                D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_24 += 0.1f;
                D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_18 -= 4.0f;
                D_EBFBE0_801B9214 = 1;
            }

            for (i = 0; i < 6; i++) {
                if (i == D_EBFBE0_801B91A4) {
                    continue;
                }

                if (D_EBFBE0_801AE638[i].unk_38.unk_0C > 0.01f) {
                    D_EBFBE0_801AE638[i].unk_38.unk_0C -= 0.05f;
                    D_EBFBE0_801AE638[i].unk_00.unk_20 -= 0.19f;
                    Math_SmoothStepToF(&D_EBFBE0_801AE638[i].unk_00.unk_18, 158.0f, 0.2f, D_EBFBE0_801AE608[i], 0.1f);
                } else {
                    D_EBFBE0_801AE638[i].unk_5C = 0;
                    D_EBFBE0_801AE638[i].unk_58 = 0;
                }
            }

            if (D_EBFBE0_801B917C != 0) {
                break;
            }

            var_fs0 = 25.0f;
            var_fs1 = 90.0f;

            if ((D_EBFBE0_801B91A4 == 0) || (D_EBFBE0_801B91A4 == 1)) {
                var_fs0 = 0.0f;
                var_fs1 = 120.0f;
            }

            Math_SmoothStepToF(&D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_1C, var_fs0, 0.25f, 100.0f, 0.1f);
            Math_SmoothStepToF(&D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38.unk_04, var_fs1, 0.25f, 100.0f, 0.1f);

            D_80161A38 += 4;

            if ((D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_1C == var_fs0) &&
                (D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38.unk_04 == var_fs1)) {
                D_80161A38 += 255;
                D_EBFBE0_801B9124 = D_EBFBE0_801B91A4;

                if (D_EBFBE0_801B91A4 == 4 && D_EBFBE0_801B91AC) {
                    D_EBFBE0_801B9124 = 6;
                }

                func_EBFBE0_801924C4();
            }
            break;

        case 100:
            if (D_EBFBE0_801B8284 < 120) {
                D_EBFBE0_801B8284 += 18;
            } else {
                D_80178410 = 0;
                D_80177834 = 2;
                D_8017783C = 2;
                D_80177AE0 = 0;
                D_EBFBE0_801B827C = 1;
                D_80177898 = 0;
                D_EBFBE0_801B8280 = 0;
                D_EBFBE0_801B8284 = 0;
                gStopInputTimer = 3;
            }
            break;
    }
}

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

void func_EBFBE0_80193C4C(void) {
    f32 var_fs0;
    s32 i;

    switch (D_EBFBE0_801B912C) {
        case 0:
            func_EBFBE0_80193B04();
            if (D_EBFBE0_801B9248 == 0) {
                D_EBFBE0_801B912C++;
            } else {
                D_EBFBE0_801B912C = 1000;
            }
            break;

        case 1000:
            for (i = 0; i < 3; i++) {
                if (D_EBFBE0_801AE878[i].unk_38.unk_0C < 0.4f) {
                    D_EBFBE0_801AE878[i].unk_38.unk_0C += 0.04f;
                    if (D_EBFBE0_801AE878[i].unk_38.unk_0C > 0.4f) {
                        D_EBFBE0_801AE878[i].unk_38.unk_0C = 0.4f;
                    }
                }

                if (D_EBFBE0_801AE878[i].unk_00.unk_20 < 1.0f) {
                    D_EBFBE0_801AE878[i].unk_00.unk_20 += 0.15f;
                    if (D_EBFBE0_801AE878[i].unk_00.unk_20 > 1.0f) {
                        D_EBFBE0_801AE878[i].unk_00.unk_20 = 1.0f;
                    }
                }

                Math_SmoothStepToF(&D_EBFBE0_801AE878[i].unk_38.unk_04, D_EBFBE0_801AEF84[i], 0.15f, 100.0f, 0.1f);
                Math_SmoothStepToF(&D_EBFBE0_801AE878[i].unk_00.unk_18, D_EBFBE0_801AEF90[i], 0.2f, 3.1f, 0.1f);
                Math_SmoothStepToF(&D_EBFBE0_801AE878[i].unk_00.unk_1C, D_EBFBE0_801AEF9C[i], 0.15f, 100.0f, 0.1f);
            }

            Math_SmoothStepToF(&D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_1C, 25.0f, 0.25f, 100.0f, 0.1f);
            Math_SmoothStepToF(&D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38.unk_04, 90.0f, 0.25f, 100.0f, 0.1f);

            D_80161A38 += 4;

            if (D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_38.unk_04 == D_EBFBE0_801AEF84[D_EBFBE0_801B91A8]) {
                for (i = 0; i < 3; i++) {
                    D_EBFBE0_801AE878[i].unk_00.unk_20 = 1.0f;
                    D_EBFBE0_801AE878[i].unk_00.unk_1C = D_EBFBE0_801AEF9C[i];
                    D_EBFBE0_801AE878[i].unk_00.unk_18 = D_EBFBE0_801AEF90[i];
                }

                D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_1C = 25.0f;
                D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38.unk_04 = 90.0f;
                D_EBFBE0_801B91BC = 1;
                D_80161A38 = 0xFF;
                D_EBFBE0_801B912C = 1;
            }
            break;

        case 1:
            // clang-format off
            if (func_EBFBE0_8019C418(&D_EBFBE0_801B91A8, 2, 1, 0, 20, 5, 4, D_80177AF8, &D_EBFBE0_801B9188) != 0) { func_80019218(0x49000022, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C); }
            // clang-format on

            if (gChangedInput[D_80177AF8].button & (A_BUTTON | START_BUTTON)) {
                func_80019218(0x49000020, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801B9208 = D_EBFBE0_801AEF84[D_EBFBE0_801B91A8];
                D_EBFBE0_801B91BC = 0;
                D_EBFBE0_801B912C = 11;
            }

            if (gChangedInput[D_80177AF8].button & B_BUTTON) {
                func_80019218(0x49000021, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801B912C = 0;
                D_EBFBE0_801B9124 = 1000;
                D_80177898 = 0;
                D_EBFBE0_801B9244 = 1;
            }
            break;

        case 11:
            D_80161A38 = 0x10;
            D_EBFBE0_801B9178 = 5;
            D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_38.unk_0C -= 0.01f;
            D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_38.unk_10 -= 0.01f;
            D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_00.unk_20 -= 0.1f;
            D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_00.unk_24 -= 0.1f;
            D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_00.unk_18 += 4.0f;
            D_EBFBE0_801B917C = 5;
            D_EBFBE0_801B912C++;
            break;

        case 12:
            if (D_EBFBE0_801B9178 == 1) {
                D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_38.unk_0C += 0.01f;
                D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_38.unk_10 += 0.01f;
                D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_00.unk_20 += 0.1f;
                D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_00.unk_24 += 0.1f;
                D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_00.unk_18 -= 4.0f;
                D_EBFBE0_801B9214 = 1;
            }

            for (i = 0; i < 3; i++) {
                if (i == D_EBFBE0_801B91A8) {
                    continue;
                }

                if (D_EBFBE0_801AE878[i].unk_38.unk_0C > 0.01f) {
                    D_EBFBE0_801AE878[i].unk_38.unk_0C -= 0.05f;
                    D_EBFBE0_801AE878[i].unk_00.unk_20 -= 0.19f;
                    Math_SmoothStepToF(&D_EBFBE0_801AE878[i].unk_00.unk_18, 158.0f, 0.2f, D_EBFBE0_801AE608[i + 1],
                                       0.1f);
                } else {
                    D_EBFBE0_801AE878[i].unk_5C = 0;
                    D_EBFBE0_801AE878[i].unk_58 = 0;
                }
            }

            if (D_EBFBE0_801B917C == 0) {
                if (D_EBFBE0_801B91A8 == 0) {
                    var_fs0 = 129.0f;
                } else {
                    var_fs0 = 131.0f;
                }

                Math_SmoothStepToF(&D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_00.unk_1C, var_fs0, 0.25f, 100.0f, 0.1f);
                Math_SmoothStepToF(&D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_38.unk_04, -15.5f, 0.25f, 100.0f, 0.1f);
                Math_SmoothStepToF(&D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00.unk_1C, -10.0f, 0.35f, 100.0f, 0.1f);
                Math_SmoothStepToF(&D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38.unk_04, 150.0f, 0.35f, 100.0f, 0.1f);

                D_80161A38 += 4;

                if ((var_fs0 == D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_00.unk_1C) &&
                    (D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_38.unk_04 == -15.5f)) {
                    D_80161A38 += 0xFF;
                    D_EBFBE0_801B9124 = (D_EBFBE0_801B91A8 + 1) * 10;
                    D_801778AC = D_EBFBE0_801B91A8;
                    D_EBFBE0_801B91C4 = 1;
                    func_EBFBE0_801924C4();
                }
            }
            break;
    }
}

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

#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_80194CE4(void) {
    s32 i;
    s32 colorGB;

    static f32 D_EBFBE0_801AEFA8[11] = { 48.0f,  103.0f, 77.0f,  55.0f,  71.0f, 87.0f,
                                         143.0f, 244.0f, 169.0f, 170.0f, 157.0f };
    static f32 D_EBFBE0_801AEFD4[11] = { 79.0f,  52.0f,  99.0f, 131.0f, 157.0f, 186.0f,
                                         102.0f, 102.0f, 98.0f, 99.0f,  98.0f };
    static f32 D_EBFBE0_801AF000 = 27.5f;

    func_EBFBE0_8019B9C0();

    func_EBFBE0_801952B4();

    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    TextureRect_16bRGBA(&gMasterDisp, D_60447A0, 8, 8, D_EBFBE0_801AEFA8[0], D_EBFBE0_801AEFD4[0], D_EBFBE0_801AF000,
                        0.2f);

    RCP_SetupDL(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    TextureRect_8bIA(&gMasterDisp, D_8005CD0, 112, 13, D_EBFBE0_801AEFA8[1], D_EBFBE0_801AEFD4[1], 1.0f, 1.0f);

    for (i = 0; i < 4; i++) {
        if (D_EBFBE0_801B9288 == i) {
            func_EBFBE0_8019C824(&D_EBFBE0_801B9270[i]);
        } else {
            D_EBFBE0_801B9270[i] = 255.0f;
        }
    }

    colorGB = D_EBFBE0_801B9270[0];
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);
    TextureRect_8bIA(&gMasterDisp, D_8006280, 48, 13, D_EBFBE0_801AEFA8[2], D_EBFBE0_801AEFD4[2], 1.0f, 1.0f);

    colorGB = D_EBFBE0_801B9270[1];
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);
    TextureRect_8bIA(&gMasterDisp, D_80064F0, 88, 14, D_EBFBE0_801AEFA8[3], D_EBFBE0_801AEFD4[3], 1.0f, 1.0f);

    colorGB = D_EBFBE0_801B9270[2];
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);
    TextureRect_8bIA(&gMasterDisp, D_80069C0, 56, 15, D_EBFBE0_801AEFA8[4], D_EBFBE0_801AEFD4[4], 1.0f, 1.0f);

    colorGB = D_EBFBE0_801B9270[3];
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);
    TextureRect_8bIA(&gMasterDisp, D_8006D10, 24, 13, D_EBFBE0_801AEFA8[5], D_EBFBE0_801AEFD4[5], 1.0f, 1.0f);

    if (D_EBFBE0_801B9288 == 0) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        TextureRect_8bIA_MirX(&gMasterDisp, D_800E130, 8, 8, D_EBFBE0_801AEFA8[6], D_EBFBE0_801AEFD4[6], 1.0f, 1.0f);
        TextureRect_8bIA(&gMasterDisp, D_800E130, 8, 8, D_EBFBE0_801AEFA8[7], D_EBFBE0_801AEFD4[7], 1.0f, 1.0f);
    }

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    switch (D_80177C74) {
        case 0:
            TextureRect_8bIA(&gMasterDisp, D_800CD90, 56, 13, D_EBFBE0_801AEFA8[8], D_EBFBE0_801AEFD4[8], 1.0f, 1.0f);
            break;

        case 1:
            TextureRect_8bIA(&gMasterDisp, D_80076E0, 56, 14, D_EBFBE0_801AEFA8[9], D_EBFBE0_801AEFD4[9], 1.0f, 1.0f);
            break;

        case 2:
            TextureRect_8bIA(&gMasterDisp, D_8007210, 88, 14, D_EBFBE0_801AEFA8[10], D_EBFBE0_801AEFD4[10], 1.0f, 1.0f);
            break;
    }

    TextureRect_8bIA(&gMasterDisp, D_8006E50, 96, 10, 166.0f, 213.0f, 1.0f, 1.0f);

    for (i = 0; i < 3; i++) {
        func_EBFBE0_8019C120(D_EBFBE0_801AEAA0[i]);
        func_EBFBE0_8019C120(D_EBFBE0_801AEB48[i]);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80194CE4.s")
#endif

// needs data declared as static
#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_801952B4(void) {
    s32 i;

    if (D_EBFBE0_801B9284 == 1) {
        switch (D_EBFBE0_801B914C) {
            case 0:
                D_EBFBE0_801B914C++;
                break;

            case 1:
                if (D_EBFBE0_801B9178) {
                    break;
                }

                for (i = 2; i < 4; i++) {
                    D_EBFBE0_801AE9C0[i].unk_20 += 0.02f;
                    D_EBFBE0_801AE9C0[i].unk_24 += 0.02f;
                    D_EBFBE0_801AE9C0[i].unk_18 -= 0.1f;
                }

                D_EBFBE0_801B9178 = 2;
                D_EBFBE0_801B914C++;
                break;

            case 2:
                if (D_EBFBE0_801B9178) {
                    break;
                }

                for (i = 2; i < 4; i++) {
                    D_EBFBE0_801AE9C0[i].unk_20 -= 0.02f;
                    D_EBFBE0_801AE9C0[i].unk_24 -= 0.02f;
                    D_EBFBE0_801AE9C0[i].unk_18 += 0.1f;
                }

                D_EBFBE0_801B914C++;
                break;

            case 3:
                D_EBFBE0_801B9178 = Rand_ZeroOne() * 15.0f;
                D_EBFBE0_801B914C = 1;
                break;
        }

        switch (D_EBFBE0_801B9158) {
            case 0:
                if (D_EBFBE0_801B917C) {
                    break;
                }

                for (i = 0; i < 4; i++) {
                    D_EBFBE0_801AE9C0[i].unk_20 += 0.08f;
                    D_EBFBE0_801AE9C0[i].unk_24 += 0.08f;
                    D_EBFBE0_801AE9C0[i].unk_18 -= 0.4f;
                    D_EBFBE0_801AE9C0[i].unk_1C -= 0.4f;
                }

                D_EBFBE0_801B917C = 2;
                D_EBFBE0_801B9158++;
                break;

            case 1:
                if (D_EBFBE0_801B917C) {
                    break;
                }

                for (i = 0; i < 4; i++) {
                    D_EBFBE0_801AE9C0[i].unk_20 -= 0.08f;
                    D_EBFBE0_801AE9C0[i].unk_24 -= 0.08f;
                    D_EBFBE0_801AE9C0[i].unk_18 += 0.4f;
                    D_EBFBE0_801AE9C0[i].unk_1C += 0.4f;
                }

                D_EBFBE0_801B917C = 2;
                D_EBFBE0_801B9158++;
                break;

            case 2:
                if (D_EBFBE0_801B917C) {
                    break;
                }

                D_EBFBE0_801B917C = Rand_ZeroOne() * 30.0f;
                D_EBFBE0_801B9158 = 0;
                break;
        }

    } else {
        for (i = 0; i < 4; i++) {
            D_EBFBE0_801AE9C0[i].unk_20 = 1.0f;
            D_EBFBE0_801AE9C0[i].unk_24 = 1.0f;
            D_EBFBE0_801AE9C0[i].unk_18 = D_EBFBE0_801AE9A0[i];
            D_EBFBE0_801AE9C0[i].unk_1C = D_EBFBE0_801AE9B0[i];
        }
    }

    for (i = 0; i < 2; i++) {
        func_EBFBE0_8019C120(D_EBFBE0_801AE9C0[i]);
    }

    for (i = 2; i < 4; i++) {
        if (D_EBFBE0_801B914C != 3) {
            func_EBFBE0_8019C120(D_EBFBE0_801AE9C0[i]);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801952B4.s")
#endif

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

#ifdef IMPORT_DATA_PENDING
u8* D_EBFBE0_801AECF8[10] = {
    D_5009F60, D_500A050, D_500A140, D_500A230, D_500A320, D_500A410, D_500A500, 0x0500A5F0, 0x0500A6E0, 0x0500A7D0,
};

void func_EBFBE0_80195B74(void) {
    u8* temp_v0_4;
    f32 var_fs0;
    f32 var_fv1;
    s32 i;
    f32 r;
    f32 g;
    f32 b;
    static f32 D_EBFBE0_801AF004 = -125.0f;
    static f32 D_EBFBE0_801AF008 = 0.0f;
    static f32 D_EBFBE0_801AF00C = 2.0f;
    static f32 D_EBFBE0_801AF010 = 8.0f;
    static f32 D_EBFBE0_801AF014[4] = { 30.0f, 30.0f, 28.0f, 288.0f };
    static f32 D_EBFBE0_801AF024[4] = { 125.0f, 197.0f, 125.0f, 125.0f };
    static f32 D_EBFBE0_801AF034[4] = { 32.3f, 32.3f, 0.2f, 0.2f };
    static f32 D_EBFBE0_801AF044[4] = { 0.2f, 0.2f, 9.2f, 9.2f };
    static f32 D_EBFBE0_801AF054 = 255.0f;
    static f32 D_EBFBE0_801AF058 = 100.0f;
    static f32 D_EBFBE0_801AF05C = 255.0f;
    static f32 D_EBFBE0_801AF060 = 100.0f;
    static f32 D_EBFBE0_801AF064 = 255.0f;
    static f32 D_EBFBE0_801AF068 = 100.0f;
    static Gfx* D_EBFBE0_801AF06C[] = {
        D_EBFBE0_801AEC30,
        D_EBFBE0_801AEC88,
        D_EBFBE0_801AECE0,
    };
    static f32 D_EBFBE0_801AF078[] = { -73.0f, -13.0f, -43.0f };

    func_EBFBE0_8019B9C0();

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    TextureRect_8bIA(&gMasterDisp, D_80079F0, 128, 14, 49.0f, 81.0f, 1.0f, 1.0f);

    TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AECF8[D_EBFBE0_801B931C / 10], 16, 15, 230.0f, 82.0f, 1.0f, 1.0f);

    TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AECF8[D_EBFBE0_801B931C % 10], 16, 15, 244.0f, 82.0f, 1.0f, 1.0f);

    func_EBFBE0_8019B7D4();

    RCP_SetupDL(&gMasterDisp, 0x4C);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 50, 50, 200, 255);

    for (i = 0; i < 4; i++) {
        TextureRect_16bRGBA(&gMasterDisp, D_60447A0, 8, 8, D_EBFBE0_801AF014[i], D_EBFBE0_801AF024[i],
                            D_EBFBE0_801AF034[i], D_EBFBE0_801AF044[i]);
    }

    if (D_EBFBE0_801B9320 != 0) {
        temp_v0_4 = func_8001C3EC();
        var_fv1 = 60.0f;

        if (spectrumAnalizerMode == 2) {
            var_fv1 = 30.0f;
        }

        for (i = 0; i < 32; i++) {
            if (spectrumAnalizerMode == 0 || spectrumAnalizerMode == 2)
                D_EBFBE0_801B9298[i] = (var_fv1 / 255.0f) * temp_v0_4[i];
            else
                D_EBFBE0_801B9298[i] = var_fv1 - ((var_fv1 / 255.0f) * temp_v0_4[i]);
        }
    } else {
        for (i = 0; i < 32; i++)
            Math_SmoothStepToF(&D_EBFBE0_801B9298[i], 0.0f, 0.2f, 100.0f, 0.1f);
    }

    Lib_Ortho(&gMasterDisp);

    RCP_SetupDL(&gMasterDisp, 5);

    Matrix_Push(&gGfxMatrix);
    Matrix_LookAt(gGfxMatrix, 0.0f, 0.0f, 100.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    for (var_fs0 = D_EBFBE0_801AF004, i = 0; i < 32; i++, var_fs0 += D_EBFBE0_801AF010) {
        r = D_EBFBE0_801AF054 + ((D_EBFBE0_801AF060 - D_EBFBE0_801AF054) / 31.0f) * i;
        g = D_EBFBE0_801AF058 + ((D_EBFBE0_801AF064 - D_EBFBE0_801AF058) / 31.0f) * i;
        b = D_EBFBE0_801AF05C + ((D_EBFBE0_801AF068 - D_EBFBE0_801AF05C) / 31.0f) * i;

        gDPSetPrimColor(gMasterDisp++, 0, 0, (s32) r, (s32) g, (s32) b, 255);

        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, var_fs0, D_EBFBE0_801AF078[spectrumAnalizerMode], D_EBFBE0_801AF008, 1);
        Matrix_Scale(gGfxMatrix, D_EBFBE0_801AF00C, D_EBFBE0_801B9298[i], 1.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_EBFBE0_801AF06C[spectrumAnalizerMode]);

        Matrix_Pop(&gGfxMatrix);
    }

    Matrix_Pop(&gGfxMatrix);
    Lib_Perspective(&gMasterDisp);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80195B74.s")
#endif

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
                    temp_fv0 = Math_SmoothStepToF(&D_801779A8[D_80177AF8], 100.0f, 0.05f, 100.0f, 0.1f);

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

    if (gChangedInput[D_80177AF8].button & A_BUTTON) {
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
    } else if (gChangedInput[D_80177AF8].button & B_BUTTON) {
        if (D_EBFBE0_801B91CC == 1) {
            func_80019218(0x4900101D, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_EBFBE0_801B912C = 2;
        } else {
            func_80019218(0x49000021, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_EBFBE0_801B912C = 3;
        }
    }
}

#ifdef IMPORT_DATA_PENDING
static f32 D_EBFBE0_801AED20[2] = { 255.0f, 255.0f };

void func_EBFBE0_80196894(void) {
    s32 i;
    s32 sp7C[2];
    s32 sp74[2];
    static f32 D_EBFBE0_801AF084[2] = { 172.0f, 76.0f };
    static f32 D_EBFBE0_801AF08C[2] = { 228.0f, 121.0f };

    static f32 D_EBFBE0_801AF094[6] = { 72.0f, 88.0f, 185.0f, 80.0f, 84.0f, 88.0f };
    static f32 D_EBFBE0_801AF0AC[6] = { 53.0f, 137.0f, 137.0f, 90.0f, 80.0f, 97.0f };

    func_EBFBE0_8019B9C0();

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    for (i = 0; i < 2; i++) {
        TextureRect_8bIA(&gMasterDisp, D_80084B0 + (i * 176 * 4), 176, 4, D_EBFBE0_801AF094[0],
                         D_EBFBE0_801AF0AC[0] + (4.0f * i), 1.0f, 1.0f);
    }
    TextureRect_8bIA(&gMasterDisp, D_80084B0 + 1408, 176, 5, D_EBFBE0_801AF094[0], D_EBFBE0_801AF0AC[0] + 8.0f, 1.0f,
                     1.0f);

    if (D_EBFBE0_801B91CC < 2) {
        TextureRect_8bIA_MirX(&gMasterDisp, D_800E130, 8, 8, D_EBFBE0_801AF084[D_EBFBE0_801B91C0], 140.0f, 1.0f, 1.0f);
        TextureRect_8bIA(&gMasterDisp, D_800E130, 8, 8, D_EBFBE0_801AF08C[D_EBFBE0_801B91C0], 140.0f, 1.0f, 1.0f);

        func_EBFBE0_8019C824(&D_EBFBE0_801AED20[D_EBFBE0_801B91C0]);
        D_EBFBE0_801AED20[!D_EBFBE0_801B91C0] = 255.0f;

        sp74[0] = sp74[1] = 0xFFFFFFFF;

        for (i = 0; i < 2; i++) {
            if (D_EBFBE0_801B9330[i]) {
                sp74[i] = 1;
                sp7C[i] = 255;
                D_EBFBE0_801B9330[i]--;
            }
        }

        if (D_80177DB0 & sp74[1]) {
            sp7C[1] = D_EBFBE0_801AED20[1];
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, sp7C[1], sp7C[1], 255);
            TextureRect_8bIA(&gMasterDisp, D_8009980, 32, 12, D_EBFBE0_801AF094[1], D_EBFBE0_801AF0AC[1], 1.0f, 1.0f);
        }

        if (D_80177DB0 & sp74[0]) {
            sp7C[0] = D_EBFBE0_801AED20[0];
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, sp7C[0], sp7C[0], 255);
            TextureRect_8bIA(&gMasterDisp, D_8009B00, 40, 12, D_EBFBE0_801AF094[2], D_EBFBE0_801AF0AC[2], 1.0f, 1.0f);
        }
    }

    switch (D_EBFBE0_801B91CC) {
        case 0:
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

            for (i = 0; i < 9; i++) {
                TextureRect_8bIA(&gMasterDisp, D_8008DA0 + (160 * 2 * i), 160, 2, D_EBFBE0_801AF094[3],
                                 D_EBFBE0_801AF0AC[3] + (2.0f * i), 1.0f, 1.0f);
            }
            TextureRect_8bIA(&gMasterDisp, D_8008DA0 + 2880, 160, 1, D_EBFBE0_801AF094[3], D_EBFBE0_801AF0AC[3] + 18.0f,
                             1.0f, 1.0f);
            break;

        case 1:
        case 2:
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

            for (i = 0; i < 20; i++) {
                TextureRect_8bIA(&gMasterDisp, D_8009CE0 + (160 * 2 * i), 160, 2, D_EBFBE0_801AF094[4],
                                 D_EBFBE0_801AF0AC[4] + (2.0f * i), 1.0f, 1.0f);
            }
            TextureRect_8bIA(&gMasterDisp, D_8009CE0 + 6400, 160, 1, D_EBFBE0_801AF094[4], D_EBFBE0_801AF0AC[4] + 40.0f,
                             1.0f, 1.0f);
            break;

        case 3:
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 32, 32, 255);

            TextureRect_8bIA(&gMasterDisp, D_800B680, 144, 28, D_EBFBE0_801AF094[5], D_EBFBE0_801AF0AC[5], 1.0f, 1.0f);
            TextureRect_8bIA(&gMasterDisp, D_800B680 + 4032, 144, 13, D_EBFBE0_801AF094[5],
                             D_EBFBE0_801AF0AC[5] + 28.0f, 1.0f, 1.0f);
            break;
    }

    func_EBFBE0_8019B7D4();
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80196894.s")
#endif

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
        sp30 = Math_SmoothStepToF(&D_EBFBE0_801B91D8, D_EBFBE0_801B91E0, 0.5f, 100.0f, 1.0f);
        temp_fv0_2 = Math_SmoothStepToF(&D_EBFBE0_801B91D4, D_EBFBE0_801B91DC, 0.5f, 100.0f, 1.0f);
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
        RCP_SetupDL(&gMasterDisp, 0x53);
        func_EBFBE0_8019C824(&D_EBFBE0_801B93F0);
        temp_t0 = D_EBFBE0_801B93F0;
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, temp_t0, temp_t0, 255);
        TextureRect_8bIA(&gMasterDisp, D_7004010, 8, 8, 70.0f, (D_EBFBE0_801B93E4 * 17.0f) + 55.0f, 1.0f, 1.0f);
    }
    RCP_SetupDL(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
    Graphics_DisplaySmallText(242, 215, 1.0f, 1.0f, "PUSH A");
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
    RCP_SetupDL(&gMasterDisp, 0x4C);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    TextureRect_8bIA(&gMasterDisp, D_800D170, 8, 16, 0.0f, D_EBFBE0_801AF0F8[0], 40.0f, 1.5f);
    TextureRect_8bIA_MirY(&gMasterDisp, D_800D170, 8, 16, 0.0f, D_EBFBE0_801AF0F8[1], 40.0f, 1.5f);

    func_8003DE68(0, 70);
    func_8003DE68(170, 239);
    RCP_SetupDL(&gMasterDisp, 0x53);

    if (D_EBFBE0_801B91D4 >= 114.0f) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 32, 32, 32, 255);
    } else {
        func_EBFBE0_8019C824(&D_EBFBE0_801B93F4);
        temp_a0 = D_EBFBE0_801B93F4;
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, temp_a0, temp_a0, 255);
    }

    TextureRect_8bIA(&gMasterDisp, D_800D070, 16, 16, 150.0f, 44.0f, 1.0f, 1.0f);

    if (D_EBFBE0_801B91D4 <= -1055.0f) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 32, 32, 32, 255);
    } else {
        func_EBFBE0_8019C824(&D_EBFBE0_801B93F8);
        temp_a0 = D_EBFBE0_801B93F8;
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, temp_a0, temp_a0, 255);
    }

    TextureRect_8bIA_MirY(&gMasterDisp, D_800D070, 0x10, 0x10, 150.0f, 200.0f, 1.0f, 1.0f);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019752C.s")
#endif

void func_EBFBE0_80197914(void) {
    Vec3f* vec1;
    Vec3f* vec2;
    s32 i;

    RCP_SetupDL(&gMasterDisp, 0);

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
    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    if (arg0 != 9) {
        TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AECF8[arg0 + 1], 16, 15, arg1, arg2 - 25.0f, 1.0f, 1.0f);
    } else {
        TextureRect_8bIA(&gMasterDisp, D_500A050, 16, 15, arg1 - 14.0f, arg2 - 25.0f, 1.0f, 1.0f);
        TextureRect_8bIA(&gMasterDisp, D_5009F60, 16, 15, arg1, arg2 - 25.0f, 1.0f, 1.0f);
    }

    RCP_SetupDL(&gMasterDisp, 0x55);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    switch (arg0) {
        case 0:
            TextureRect_4bCI(&gMasterDisp, D_8003A70, D_8003AB8, 16, 9, arg1 + 17.0f, arg2 - 19.0f, 1.0f, 1.0f);
            break;

        case 1:
            TextureRect_4bCI(&gMasterDisp, D_80038E0, D_8003930, 16, 10, arg1 + 17.0f, arg2 - 19.0f, 1.0f, 1.0f);
            break;

        case 2:
            TextureRect_4bCI(&gMasterDisp, D_8003950, D_80039A8, 16, 11, arg1 + 17.0f, arg2 - 20.0f, 1.0f, 1.0f);
            break;

        default:
            TextureRect_4bCI(&gMasterDisp, D_8003AE0, D_8003B28, 16, 9, arg1 + 17.0f, arg2 - 19.0f, 1.0f, 1.0f);
            break;
    }
}

void func_EBFBE0_80197D30(s32 arg0, s32 arg1, s32 arg2) {
    char temp[4];

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    temp[0] = gSaveFile.save.data.unk_18[arg0][0] & 0xFF;
    temp[1] = gSaveFile.save.data.unk_18[arg0][1] & 0xFF;
    temp[2] = gSaveFile.save.data.unk_18[arg0][2] & 0xFF;
    temp[3] = '\0';

    Graphics_DisplayLargeText(arg1, arg2, 1.0f, 1.0f, temp);
}

void func_EBFBE0_80197DE4(s32 arg0, s32 arg1, s32 arg2) {
    RCP_SetupDL(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 60, 60, 255, 170);
    TextureRect_8bIA(&gMasterDisp, D_601B4B0, 24, 17, arg1, arg2, 3.17f, 1.05f);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
    Graphics_DisplaySmallText(arg1, arg2, 1.0f, 1.0f, "TOTAL HITS");
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    Graphics_DisplaySmallNumber((arg1 + 40.0f) - ((func_8008BCBC(D_EBFBE0_801B8220[arg0]) * 8) - 8), (arg2 + 9.0f),
                                D_EBFBE0_801B8220[arg0]);
}

void func_EBFBE0_80197F74(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_fs1;
    s32 i;

    RCP_SetupDL(&gMasterDisp, 0x53);

    for (temp_fs1 = 0.0f, i = 0; i < 3; i++, temp_fs1 += 12.0f) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, D_EBFBE0_801AF0D0[i], D_EBFBE0_801AF0DC[i], D_EBFBE0_801AF0E8[i], 255);
        Graphics_DisplaySmallText(temp_fs1 + arg1, arg2, 1.0f, 1.0f, D_EBFBE0_801AF0C4[i]);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        Graphics_DisplaySmallNumber(arg1 + temp_fs1 - ((func_8008BCBC(D_EBFBE0_801B81A8[arg0][i]) - 1) * 8),
                                    arg2 + 9.0f, D_EBFBE0_801B81A8[arg0][i]);
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
        RCP_SetupDL(&gMasterDisp, 0x4C);
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
            TextureRect_16bRGBA(&gMasterDisp, D_60447A0, 8, 8, arg2 + 24.0f, arg3 + 11.0f, 2.0f, 0.2f);
        }
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        TextureRect_16bRGBA(&gMasterDisp, D_6047550, 24, 24, arg2, arg3, 1.0f, 1.0f);
    }
}

void func_EBFBE0_801984D0(s32 arg0, s32 arg1, f32 arg2, f32 arg3) {
    s32 sp1C;

    if ((arg3 > 22.0f) && (arg3 < 162.0f)) {
        RCP_SetupDL(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
        sp1C = (gSaveFile.save.data.unk_5E[arg0][arg1].unk_C & 1) << 8;
        sp1C |= gSaveFile.save.data.unk_5E[arg0][arg1].unk_0;
        Graphics_DisplaySmallNumber(arg2 + 15.0f - (func_8008BCBC(sp1C) - 1) * 8, arg3 + 24.0f + 1.0f, sp1C);
    }
}

void func_EBFBE0_80198608(s32 arg0, s32 arg1, f32 arg2, f32 arg3) {
    f32 var_fs1;
    s32 sp90[3];
    s32 i;

    if ((arg3 > 12.0f) && (arg3 < 154.0f)) {
        RCP_SetupDL(&gMasterDisp, 0x53);

        sp90[0] = gSaveFile.save.data.unk_5E[arg0][arg1].unk_D & 1;
        sp90[1] = gSaveFile.save.data.unk_5E[arg0][arg1].unk_F & 1;
        sp90[2] = gSaveFile.save.data.unk_5E[arg0][arg1].unk_E & 1;

        for (var_fs1 = 0.0f, i = 0; i < 3; i++, var_fs1 += 9.0f) {
            if (sp90[i] == 0) {
                continue;
            }
            gDPSetPrimColor(gMasterDisp++, 0, 0, D_EBFBE0_801AF0D0[i], D_EBFBE0_801AF0DC[i], D_EBFBE0_801AF0E8[i], 255);
            Graphics_DisplaySmallText(arg2 + var_fs1 - 1.0f, arg3 + 24.0f + 8.0f + 1.0f, 1.0f, 1.0f,
                                      D_EBFBE0_801AF0C4[i]);
        }
    }
}

void func_EBFBE0_8019882C(s32 arg0, s32 arg1, f32 arg2, f32 arg3) {
    s32 temp;
    s8* sp20;
    f32 temp2;

    if ((arg3 > 58.0f) && (arg3 < 197.0f)) {
        temp = gSaveFile.save.data.unk_5E[arg0][arg1].unk_8 & 0xF;
        sp20 = D_EBFBE0_801AEEAC[temp];
        RCP_SetupDL(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
        temp2 = Graphics_GetSmallTextWidth(sp20) / 2.0f;
        Graphics_DisplaySmallText(arg2 + 12.0f - temp2, arg3 - 8.0f, 1.0f, 1.0f, sp20);
    }
}

#ifdef IMPORT_DATA_PENDING
extern Gfx D_EBFBE0_801B4A40[];
extern Gfx D_EBFBE0_801B5E78[];
extern Gfx D_EBFBE0_801B61E0[];
extern Gfx D_EBFBE0_801B6548[];
extern Gfx D_EBFBE0_801B4D70[];
extern Gfx D_EBFBE0_801B5B10[];
extern Gfx D_EBFBE0_801B5440[];
extern Gfx D_EBFBE0_801B50D8[];
extern Gfx D_EBFBE0_801B5E78[];
extern Gfx D_EBFBE0_801B57A8[];

static Gfx* D_EBFBE0_801AEE6C[16] = {
    (Gfx*) 0x06060610, (Gfx*) 0x0601DE80, (Gfx*) 0x0604B750, (Gfx*) 0x0601F6B0, (Gfx*) 0x0601C0D0, (Gfx*) 0x0601C960,
    D_EBFBE0_801B5E78, D_EBFBE0_801B61E0, D_EBFBE0_801B6548, D_EBFBE0_801B4D70, D_EBFBE0_801B5B10, D_EBFBE0_801B5440,
    D_EBFBE0_801B50D8, (Gfx*) 0x0604DB10, D_EBFBE0_801B57A8, D_EBFBE0_801B57A8,
};

void func_EBFBE0_8019896C(s32 arg0, f32 y, s32 arg2) {
    static f32 D_EBFBE0_801AF130 = 0.0f;
    static f32 D_EBFBE0_801AF134 = -121.0f;
    static f32 D_EBFBE0_801AF138 = 40.1f;
    s32 i;
    s32 data;
    s32 spFC;
    s32 spF4;
    f32 x;
    s32 pad[2];

    Matrix_Push(&gGfxMatrix);
    Matrix_LookAt(gGfxMatrix, 0.0f, 0.0f, 100.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    Lib_Ortho(&gMasterDisp);

    spFC = gSaveFile.save.data.unk_4A[arg0];
    for (x = D_EBFBE0_801AF134, i = 0; i < arg2; i++, x += D_EBFBE0_801AF138) {
        data = gSaveFile.save.data.unk_5E[arg0][i].unk_8 & 15;

        switch (data) {
            case 13:
                RCP_SetupDL(&gMasterDisp, 0x43);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 240, 0, 0, 255);
                gDPSetEnvColor(gMasterDisp++, 31, 0, 0, 0);

                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, x, y, 0.0f, 1);
                Matrix_RotateZ(gGfxMatrix, M_DTOR * D_EBFBE0_801AF130, 1);
                Matrix_Scale(gGfxMatrix, 0.3f, 0.3f, 0.3f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801AEE6C[data]);
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 128);
                gDPSetEnvColor(gMasterDisp++, 31, 0, 0, 0);
                Matrix_Scale(gGfxMatrix, 0.8f, 0.8f, 0.8f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_EBFBE0_801AEE6C[data]);
                Matrix_Pop(&gGfxMatrix);
                break;

            case 0:
                RCP_SetupDL(&gMasterDisp, 0x3E);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, x - 1.0f, y + 4.0f, 0.0f, 1);
                Matrix_Scale(gGfxMatrix, 0.3f, 0.3f, 0.3f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801AEE6C[data]);

                Matrix_Translate(gGfxMatrix, 18.0f, -20.0f, 0.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801AEE6C[data]);

                Matrix_Pop(&gGfxMatrix);
                break;

            case 4:
            case 5:
            case 3:
                RCP_SetupDL(&gMasterDisp, 0x3E);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 144);

                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, x, y, 0.0f, 1);
                Matrix_Scale(gGfxMatrix, 0.3f, 0.3f, 0.3f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801AEE6C[data]);

                Matrix_Pop(&gGfxMatrix);
                break;

            case 2:
                RCP_SetupDL(&gMasterDisp, 0x17);
                Lights_SetOneLight(&gMasterDisp, 0, 0, 100, 100, 100, 70, 100, 100, 100);

                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, x, y, 0.0f, 1);
                Matrix_RotateX(gGfxMatrix, M_DTOR * 20.0f, 1);
                Matrix_Scale(gGfxMatrix, 0.01f, 0.01f, 0.01f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801AEE6C[data]);

                Matrix_Pop(&gGfxMatrix);
                break;

            case 1:
                RCP_SetupDL(&gMasterDisp, 0x17);
                Lights_SetOneLight(&gMasterDisp, 0, 0, 100, 100, 100, 70, 100, 100, 100);

                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, x, y, 0.0f, 1);
                Matrix_RotateX(gGfxMatrix, M_DTOR * 20.0f, 1);
                Matrix_Scale(gGfxMatrix, 0.01f, 0.01f, 0.01f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801AEE6C[data]);

                Matrix_Pop(&gGfxMatrix);
                break;

            default:
                RCP_SetupDL(&gMasterDisp, 0x3E);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, x, y, 0.0f, 1);
                Matrix_Scale(gGfxMatrix, 0.3f, 0.3f, 0.3f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801AEE6C[data]);

                if ((data != 14) && (data != 15) && (data != 11)) {
                    if (data == 7) {
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 64, 64, 64, 255);
                    } else {
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
                    }
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_EBFBE0_801B4A40);
                }
                Matrix_Scale(gGfxMatrix, 1.6f, 1.6f, 1.6f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_605C230);

                Matrix_Pop(&gGfxMatrix);
                break;
        }

        spF4 = (spFC >> i) & 1;
        if (spF4 != 0) {
            func_EBFBE0_80199198(x, y, 0.0f);
        }
    }

    Matrix_Pop(&gGfxMatrix);

    func_EBFBE0_80192738();

    D_EBFBE0_801AF130 += 0.1f;

    Lib_Perspective(&gMasterDisp);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019896C.s")
#endif

void func_EBFBE0_80199198(f32 arg0, f32 arg1, f32 arg2) {
    RCP_SetupDL(&gMasterDisp, 0x35);
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

void func_EBFBE0_801992C4(void) {
    s32 i;

    if (D_EBFBE0_801B91C4) {
        func_8001D444(0, 56, 0, 255);
    }

    D_EBFBE0_801B93D0 = D_EBFBE0_801B9124;

    if (D_800D2870) {
        D_EBFBE0_801AE638[1].unk_00.unk_1C = 129.0f;
        D_EBFBE0_801AE638[1].unk_38.unk_04 = -7.5f;
    }

    D_801778A4 = 3;

    D_EBFBE0_801B9340 = 2;

    D_80161A28 = 0;
    D_80178410 = 0;

    D_EBFBE0_801B93C4 = 0;

    for (i = 0; i < 4; i++) {
        D_80161A18[i] = 0;
        if (gControllerStatus[i] == 0) {
            D_80161A18[i] = 1;
            D_EBFBE0_801B93C4 |= 1 << i;
        }
        D_EBFBE0_801B9358[i] = 255.0f;
        D_EBFBE0_801B93A0[i].unk_0 = 0;
        D_EBFBE0_801B93A0[i].unk_4 = 0;
    }

    D_EBFBE0_801B91E8 = 255.0f;
}

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

void func_EBFBE0_8019949C(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (!(D_EBFBE0_801B93C4 & (1 << i))) {
            func_EBFBE0_8019C824(&D_EBFBE0_801B9358[i]);
            if (func_EBFBE0_8019C418(&D_EBFBE0_801AED3C[i], 2, 0, 0, 20, 2, 4, i, &D_EBFBE0_801B93A0[i])) {
                func_80019218(0x49000002, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }

        if (gChangedInput[i].button & A_BUTTON) {
            if (D_EBFBE0_801B93C4 == 15) {
                func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801B91EC = 10;
                D_EBFBE0_801B912C++;
                break;
            } else {
                if (!(D_EBFBE0_801B93C4 & (1 << i))) {
                    func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_80177888[i] = D_EBFBE0_801AED3C[i];
                    D_EBFBE0_801B9358[i] = 255.0f;
                    D_EBFBE0_801B9348[i] = 10;
                    D_EBFBE0_801B93C4 = D_EBFBE0_801B93C4 | (1 << i);
                }
            }
        }

        if (gChangedInput[i].button & B_BUTTON) {
            if (D_EBFBE0_801B93C4 & (1 << i)) {
                func_80019218(0x4900101D, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801B93C4 &= (1 << i) ^ 15;
            } else {
                func_8001D444(0, 36, 0, 255);
                func_80019218(0x49000021, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_EBFBE0_8019B8A0(2);
                D_EBFBE0_801B9248 = 1;
                break;
            }
        }
    }
}

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

#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_80199820(s32 arg0) {
    s32 var_v0;
    s32 var_a2;
    s32 colorGB;
    s32 i;
    static u8* D_EBFBE0_801AF1E0[3] = {
        (u8*) 0x070030B0,
        (u8*) 0x07003290,
        (u8*) 0x07003470,
    };
    static u8* D_EBFBE0_801AF1EC[4] = {
        (u8*) 0x070049C0,
        (u8*) 0x07004BB0,
        (u8*) 0x07004DC0,
        (u8*) 0x07005020,
    };
    static u16* D_EBFBE0_801AF1FC[4] = {
        (u16*) 0x07004B80,
        (u16*) 0x07004D90,
        (u16*) 0x07004FF0,
        (u16*) 0x070051A0,
    };
    static u16* D_EBFBE0_801AF20C[4] = {
        (u16*) 0x07008EE0,
        (u16*) 0x0700AD20,
        (u16*) 0x0700CB60,
        (u16*) 0x070070A0,
    };
    static u8* D_EBFBE0_801AF21C[4] = {
        (u8*) 0x07000000,
        (u8*) 0x070000D0,
        (u8*) 0x07000210,
        (u8*) 0x07000350,
    };
    static s32 D_EBFBE0_801AF22C[4] = { 177, 255, 0, 30 };
    static s32 D_EBFBE0_801AF23C[4] = { 242, 30, 255, 30 };
    static s32 D_EBFBE0_801AF24C[4] = { 12, 0, 67, 255 };

    RCP_SetupDL(&gMasterDisp, 0x55);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    for (i = 0; i < 4; i++) {
        TextureRect_4bCI(&gMasterDisp, D_70118E0 + (80 * 16 * i) / 2, D_70123F8, 80, 16, D_EBFBE0_801AF148[arg0],
                         D_EBFBE0_801AF158[arg0] + (16.0f * i), 1.0f, 1.0f);
    }

    TextureRect_4bCI(&gMasterDisp, D_70118E0 + (80 * 16 * 4) / 2, D_70123F8, 80, 7, D_EBFBE0_801AF148[arg0],
                     D_EBFBE0_801AF158[arg0] + (16.0f * 4), 1.0f, 1.0f);

    gDPSetPrimColor(gMasterDisp++, 0, 0, D_EBFBE0_801AF22C[arg0], D_EBFBE0_801AF23C[arg0], D_EBFBE0_801AF24C[arg0],
                    255);

    TextureRect_8bCI(&gMasterDisp, D_EBFBE0_801AF1EC[arg0], D_EBFBE0_801AF1FC[arg0], D_EBFBE0_801AF168[arg0],
                     D_EBFBE0_801AF178[arg0], D_EBFBE0_801AF148[arg0] + D_EBFBE0_801AF188[arg0],
                     D_EBFBE0_801AF158[arg0] + D_EBFBE0_801AF198, 1.0f, 1.0f);

    RCP_SetupDL(&gMasterDisp, 0x53);

    var_v0 = 0xFFFFFFFF;
    if (D_EBFBE0_801B9348[arg0] != 0) {
        var_v0 = 1;
        D_EBFBE0_801B9348[arg0]--;
    }

    if (D_80177DB0 & var_v0) {
        colorGB = D_EBFBE0_801B9358[arg0];

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);

        TextureRect_8bIA(&gMasterDisp, D_7001030, 64, 9, D_EBFBE0_801AF148[arg0] + D_EBFBE0_801AF1BC,
                         D_EBFBE0_801AF158[arg0] + D_EBFBE0_801AF1C0, 1.0f, 1.0f);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);

        TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AF1E0[D_EBFBE0_801AED3C[arg0]], 40, 12,
                         D_EBFBE0_801AF148[arg0] + D_EBFBE0_801AF1C4, D_EBFBE0_801AF158[arg0] + D_EBFBE0_801AF1C8, 1.0f,
                         1.0f);
    }

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    TextureRect_8bIA_MirX(&gMasterDisp, D_800E130, 8, 8, D_EBFBE0_801AF148[arg0] + D_EBFBE0_801AF1D4,
                          D_EBFBE0_801AF158[arg0] + D_EBFBE0_801AF1DC, 1.0f, 1.0f);

    TextureRect_8bIA(&gMasterDisp, D_800E130, 8, 8, D_EBFBE0_801AF148[arg0] + D_EBFBE0_801AF1D8,
                     D_EBFBE0_801AF158[arg0] + D_EBFBE0_801AF1DC, 1.0f, 1.0f);

    TextureRect_8bIA(&gMasterDisp, D_7000F10, 40, 7, D_EBFBE0_801AF148[arg0] + D_EBFBE0_801AF1CC,
                     D_EBFBE0_801AF158[arg0] + D_EBFBE0_801AF1D0, 1.0f, 1.0f);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    for (i = 0; i < 2; i++) {
        TextureRect_16bRGBA(&gMasterDisp, D_EBFBE0_801AF20C[arg0] + (44 * i * 20), 44, 20,
                            D_EBFBE0_801AF148[arg0] + D_EBFBE0_801AF1B4,
                            D_EBFBE0_801AF158[arg0] + D_EBFBE0_801AF1B8 + (i * 20.0f * 0.7f), 0.7f, 0.7f);
    }

    TextureRect_16bRGBA(&gMasterDisp, D_EBFBE0_801AF20C[arg0] + 1760, 44, 4,
                        D_EBFBE0_801AF148[arg0] + D_EBFBE0_801AF1B4,
                        D_EBFBE0_801AF158[arg0] + D_EBFBE0_801AF1B8 + 28.0f, 0.7f, 0.7f);

    var_a2 = 24;
    if (arg0 == 0) {
        var_a2 = 16;
    }

    gDPSetPrimColor(gMasterDisp++, 0, 0, D_EBFBE0_801AF22C[arg0], D_EBFBE0_801AF23C[arg0], D_EBFBE0_801AF24C[arg0],
                    255);

    TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AF21C[arg0], var_a2, 13,
                     D_EBFBE0_801AF148[arg0] + D_EBFBE0_801AF19C[arg0], D_EBFBE0_801AF158[arg0] + D_EBFBE0_801AF1AC,
                     D_EBFBE0_801AF1B0, D_EBFBE0_801AF1B0);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199820.s")
#endif

void func_EBFBE0_80199EA8(void) {
    s32 i;

    func_800BA490();

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    for (i = 0; i < 3; i++) {
        TextureRect_16bRGBA(&gMasterDisp, D_700E9A0 + (144 * 14 * i), 144, 14, 87.0f, 84 + (i * 14.0f), 1.0f, 1.0f);
    }
}

// D_EBFBE0_801B9358 needs to be static but belongs to bss section?
#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_80199FA8(void) {
    s32 i;

    D_80178410 = 0;
    D_EBFBE0_801B933C = 0;
    D_EBFBE0_801B91E8 = 255.0f;
    D_EBFBE0_801B93D4 = D_801778A4 - 1;
    D_EBFBE0_801B93D8 = D_80161A28;
    D_EBFBE0_801B93DC = D_EBFBE0_801B9340;
    D_801778C8 = D_EBFBE0_801B93DC;

    for (i = 0; i < 4; i++) {
        D_EBFBE0_801B9358[i] = 0;
    }

    D_EBFBE0_801B936C = 0;
    D_EBFBE0_801B9374 = 0;
    D_EBFBE0_801B937C = 0;
    D_EBFBE0_801B91EC = 0;
    D_EBFBE0_801B91F0 = 0;
    D_EBFBE0_801B9368 = 255.0f;
    D_EBFBE0_801B9370 = 255.0f;
    D_EBFBE0_801B9378 = 255.0f;
    func_EBFBE0_8019A080();
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199FA8.s")
#endif

// D_EBFBE0_801B9380 needs to be static but belongs to bss section?
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

void func_EBFBE0_8019A0B8(void) {
    switch (D_EBFBE0_801B93D0) {
        case 10:
            func_EBFBE0_8019A124();
            break;

        case 20:
            func_EBFBE0_8019A1A8();
            break;

        case 30:
            func_EBFBE0_8019A214();
            break;
    }
}

void func_EBFBE0_8019A124(void) {
    switch (D_EBFBE0_801B912C) {
        case 0:
            func_EBFBE0_8019A2E0();
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

void func_EBFBE0_8019A1A8(void) {
    switch (D_EBFBE0_801B912C) {
        case 0:
            func_EBFBE0_8019A6DC();
            break;

        case 1:
            func_EBFBE0_8019A954();
            break;

        case 2:
            func_EBFBE0_8019A298();
            break;
    }
}

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

void func_EBFBE0_8019A2E0(void) {
    s32 i;

    if (D_EBFBE0_801B936C != 0) {
        return;
    }

    if (D_EBFBE0_801B91F0) {
        D_EBFBE0_801B912C++;
        D_EBFBE0_801B91F0 = 0;
        return;
    }

    for (i = 0; i < 4; i++) {
        if (gControllerStatus[i] == 0) {
            continue;
        }

        if (func_EBFBE0_8019C418(&D_EBFBE0_801B93D4, 4, 0, 0, 20, 2, 4, i, &D_EBFBE0_801B9380[i])) {
            func_80019218(0x49000002U, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_801778A4 = D_EBFBE0_801B93D4 + 1;
        }

        if (gChangedInput[i].button & A_BUTTON) {
            func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_EBFBE0_8019A080();
            D_EBFBE0_801B936C = 10;
            break;
        }

        if (gChangedInput[i].button & B_BUTTON) {
            func_80019218(0x4900101D, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_EBFBE0_801B9124 = D_EBFBE0_801B93D0;
            D_EBFBE0_801B91C4 = 0;
            func_EBFBE0_801924C4();
            break;
        }
    }
}

void func_EBFBE0_8019A4DC(void) {
    s32 i;

    if (D_EBFBE0_801B937C) {
        return;
    }

    if (D_EBFBE0_801B91F0) {
        D_EBFBE0_801B912C++;
        D_EBFBE0_801B91F0 = 0;
        return;
    }

    for (i = 0; i < 4; i++) {
        if (gControllerStatus[i] == 0) {
            continue;
        }

        if (func_EBFBE0_8019C418(&D_EBFBE0_801B93DC, 4, 0, 0, 20, 2, 4, i, &D_EBFBE0_801B9380[i])) {
            func_80019218(0x49000002, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_EBFBE0_801B9340 = D_EBFBE0_801B93DC;
            D_801778C8 = D_EBFBE0_801B93DC;
        }

        if (gChangedInput[i].button & A_BUTTON) {
            func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_EBFBE0_8019A080();
            D_EBFBE0_801B937C = 10;
            break;
        }

        if (gChangedInput[i].button & B_BUTTON) {
            func_80019218(0x4900101D, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_EBFBE0_801B9124 = D_EBFBE0_801B93D0;
            D_EBFBE0_801B91C4 = 0;
            func_EBFBE0_801924C4();
            break;
        }
    }
}

void func_EBFBE0_8019A6DC(void) {
    s32 i;

    if (D_EBFBE0_801B9374) {
        return;
    }

    if (D_EBFBE0_801B91F0) {
        D_EBFBE0_801B933C = 1;
        D_EBFBE0_801B91F0 = 0;
        D_EBFBE0_801B912C++;
        return;
    }

    for (i = 0; i < 4; i++) {
        if (gControllerStatus[i] == 0) {
            continue;
        }
        if (func_EBFBE0_8019C418(&D_EBFBE0_801B93D8, 1, 0, 1, 20, 2, 4, i, &D_EBFBE0_801B9380[i])) {
            func_80019218(0x49000002, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_80161A28 = D_EBFBE0_801B93D8;
        }

        if (gChangedInput[i].button & A_BUTTON) {
            func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (D_80161A28 == 0) {
                D_8017789C = 0;
                if (D_EBFBE0_801B93D0 == 30) {
                    D_8017789C = 1;
                }
            } else {
                D_8017789C = 2;
            }

            D_EBFBE0_801B9374 = 10;
            func_EBFBE0_8019A080();
            break;
        }

        if (gChangedInput[i].button & B_BUTTON) {
            func_80019218(0x4900101D, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (D_EBFBE0_801B93D0 == 20) {
                D_EBFBE0_801B9124 = D_EBFBE0_801B93D0;
                D_EBFBE0_801B91C4 = 0;
                func_EBFBE0_801924C4();
            } else {
                func_EBFBE0_8019A080();
                D_EBFBE0_801B91F0 = 0;
                D_EBFBE0_801B912C--;
            }
            break;
        }
    }
}

void func_EBFBE0_8019A954(void) {
    s32 i;

    if (D_EBFBE0_801B91EC) {
        return;
    }

    if (D_EBFBE0_801B91F0) {

        D_EBFBE0_801B91F0 = 0;
        D_EBFBE0_801B912C++;
        return;
    }

    for (i = 0; i < 4; i++) {
        if (gControllerStatus[i] == 0) {
            continue;
        }

        if (gChangedInput[i].button & A_BUTTON) {
            func_80019218(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_EBFBE0_801B91EC = 10;
            break;
        }

        if (gChangedInput[i].button & B_BUTTON) {
            func_80019218(0x4900101D, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_EBFBE0_8019A080();
            D_EBFBE0_801B933C = 0;
            D_EBFBE0_801B91F0 = 0;
            D_EBFBE0_801B912C--;
            break;
        }
    }
}

void func_EBFBE0_8019AAB4(void) {
    switch (D_EBFBE0_801B93D0) {
        case 20:
            break;

        case 10:
            func_EBFBE0_8019AB30();
            break;

        case 30:
            func_EBFBE0_8019AD84();
            break;
    }

    func_EBFBE0_8019AFFC();

    if (D_EBFBE0_801B933C != 0) {
        func_EBFBE0_8019B5AC();
    }
}

void func_EBFBE0_8019AB30(void) {
    s32 pad[5];
    s32 colorGB;
    s32 sp44 = D_801778A4;
    s32 var_v0;

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 60, 60, 255, 190);

    TextureRect_8bIA(&gMasterDisp, D_601B4B0, 24, 17, 94.0f, 43.0f, 5.0f, 1.1f);

    if (D_EBFBE0_801B912C == 0) {
        func_EBFBE0_8019B6D8(97.0f, 50.0f, 107.0f, 255, 255, 255);
        func_EBFBE0_8019C824(&D_EBFBE0_801B9368);
    } else {
        D_EBFBE0_801B9368 = 255.0f;
    }

    colorGB = D_EBFBE0_801B9368;

    var_v0 = 0xFFFFFFFFF;

    if (D_EBFBE0_801B936C != 0) {
        colorGB = 255;
        var_v0 = 1;
        D_EBFBE0_801B936C--;
        if (D_EBFBE0_801B936C == 0) {
            D_EBFBE0_801B91F0 = 1;
        }
    }

    if (D_80177DB0 & var_v0) {
        RCP_SetupDL(&gMasterDisp, 0x53);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);

        TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AECF8[sp44], 16, 15, 109.0f, 45.0f, 1.0f, 1.0f);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);

        TextureRect_8bIA(&gMasterDisp, D_7001DF0, 80, 10, 122.0f, 49.0f, 1.0f, 1.0f);
    }
}

// needs in function static
#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_8019AD84(void) {
    static f32 D_EBFBE0_801B9324, D_EBFBE0_801B9328, D_EBFBE0_801B9338;
    s32 pad[2];
    s32 colorGB;
    s32 var_v0;
    static f32 D_EBFBE0_801AF25C[6] = { 156.0f, 112.0f, 112.0f, 112.0f, 112.0f, 112.0f };
    static f32 D_EBFBE0_801AF274[6] = { 46.0f, 43.0f, 43.0f, 43.0f, 43.0f, 43.0f };
    static u8* D_EBFBE0_801AF28C[] = {
        (u8*) 0x070024D0, (u8*) 0x07002730, (u8*) 0x07002990, (u8*) 0x07002BF0, (u8*) 0x07002E50,
    };

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 60, 60, 255, 190);

    TextureRect_8bIA(&gMasterDisp, D_601B4B0, 24, 17, 93.0f, 42.0f, 5.1f, 1.1f);

    if (D_EBFBE0_801B912C == 0) {
        D_EBFBE0_801B9324 = 97.0f;
        D_EBFBE0_801B9328 = 49.0f;
        D_EBFBE0_801B9338 = 107.0f;
        func_EBFBE0_8019B6D8(D_EBFBE0_801B9324, D_EBFBE0_801B9328, D_EBFBE0_801B9338, 255, 255, 255);
        func_EBFBE0_8019C824(&D_EBFBE0_801B9378);
    } else {
        D_EBFBE0_801B9378 = 255.0f;
    }

    colorGB = D_EBFBE0_801B9378;

    var_v0 = 0xFFFFFFFF;

    if (D_EBFBE0_801B937C != 0) {
        colorGB = 255;
        var_v0 = 1;
        D_EBFBE0_801B937C--;
        if (!D_EBFBE0_801B937C) {
            D_EBFBE0_801B91F0 = 1;
        }
    }

    if (D_80177DB0 & var_v0) {
        RCP_SetupDL(&gMasterDisp, 0x53);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);

        TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AF28C[D_EBFBE0_801B9340], 40, 15,
                         D_EBFBE0_801AF25C[D_EBFBE0_801B9340 + 1], D_EBFBE0_801AF274[D_EBFBE0_801B9340 + 1], 1.0f,
                         1.0f);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);

        TextureRect_8bIA(&gMasterDisp, D_7002110, 80, 12, D_EBFBE0_801AF25C[0], D_EBFBE0_801AF274[0], 1.0f, 1.0f);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019AD84.s")
#endif

// needs in-function static
#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_8019AFFC(void) {
    static f32 D_EBFBE0_801AF2A0 = 101.0f;
    static f32 D_EBFBE0_801AF2A4 = 86.0f;
    static f32 D_EBFBE0_801B93C0;
    static f32 D_EBFBE0_801B93C8;
    static f32 D_EBFBE0_801B93CC;
    s32 var_v0;
    s32 colorGB;

    if ((D_EBFBE0_801B912C == 0 && D_EBFBE0_801B93D0 == 20) || (D_EBFBE0_801B912C == 1 && D_EBFBE0_801B93D0 != 20)) {
        D_EBFBE0_801B93C0 = 94.0f;
        D_EBFBE0_801B93C8 = 88.0f;
        D_EBFBE0_801B93CC = 114.0f;

        RCP_SetupDL(&gMasterDisp, 0x53);

        func_EBFBE0_8019B6D8(D_EBFBE0_801B93C0, D_EBFBE0_801B93C8, D_EBFBE0_801B93CC, 255, 255, 255);
        func_EBFBE0_8019C824(&D_EBFBE0_801B9370);
    } else {
        D_EBFBE0_801B9370 = 255.0f;
    }

    colorGB = D_EBFBE0_801B9370;

    var_v0 = 0xFFFFFFFF;
    if (D_EBFBE0_801B9374 != 0) {
        var_v0 = 1;
        colorGB = 255;
        D_EBFBE0_801B9374--;
        if (!D_EBFBE0_801B9374)
            D_EBFBE0_801B91F0 = 1;
    }

    if (D_80177DB0 & var_v0) {
        RCP_SetupDL(&gMasterDisp, 0x53);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);

        TextureRect_8bIA(&gMasterDisp, D_7001270, 112, 12, D_EBFBE0_801AF2A0, D_EBFBE0_801AF2A4, 1.0f, 1.0f);
    }

    if (D_EBFBE0_801B93D0 == 30) {
        func_EBFBE0_8019B1F8();
    } else {
        func_EBFBE0_8019B3DC();
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019AFFC.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_8019B1F8(void) {
    static f32 D_EBFBE0_801AF2A8 = 69.0f;
    static f32 D_EBFBE0_801AF2AC = 110.0f;
    static f32 D_EBFBE0_801AF2B0 = 123.0f;
    static f32 D_EBFBE0_801AF2B4[] = { 72.0f, 189.0f };
    f32 xPos;
    s32 i;
    s32 width;
    s32 sp8C[2];
    static u8* D_EBFBE0_801AF2BC[] = { (u8*) 0x07001C10, (u8*) 0x070019E0 };
    static u8* D_EBFBE0_801AF2C4[] = { (u8*) 0x07006780, (u8*) 0x07005F10 };
    static u16* D_EBFBE0_801AF2CC[] = { (u16*) 0x07006EA0, (u16*) 0x07006630 };

    for (xPos = D_EBFBE0_801AF2A8, i = 0; i < 2; i++, xPos += D_EBFBE0_801AF2B0) {
        if (i == D_80161A28) {
            sp8C[i] = 255;
        } else {
            sp8C[i] = 32;
        }

        RCP_SetupDL(&gMasterDisp, 0x55);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, sp8C[i]);

        TextureRect_8bCI(&gMasterDisp, D_EBFBE0_801AF2C4[i], D_EBFBE0_801AF2CC[i], 48, 38, xPos, D_EBFBE0_801AF2AC,
                         1.0f, 1.0f);

        width = 48;
        if (i == 1) {
            width = 56;
        }
        RCP_SetupDL(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 0xff, 0xff, 0xff, sp8C[i]);
        TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AF2BC[i], width, 10, D_EBFBE0_801AF2B4[i], D_EBFBE0_801AF2AC + 40.0f,
                         1.0f, 1.0f);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019B1F8.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_EBFBE0_8019B3DC(void) {
    static f32 D_EBFBE0_801AF2D4 = 69.0f;
    static f32 D_EBFBE0_801AF2D8 = 110.0f;
    static f32 D_EBFBE0_801AF2DC = 123.0f;
    static f32 D_EBFBE0_801AF2E0[] = { 66.0f, 189.0f };
    f32 xPos;
    s32 i;
    s32 sp8C[3];
    static u8* D_EBFBE0_801AF2E8[] = {
        (u8*) 0x070017B0,
        (u8*) 0x070019E0,
    };
    static u8* D_EBFBE0_801AF2F0[] = {
        (u8*) 0x07005600,
        (u8*) 0x07005F10,
    };
    static u16* D_EBFBE0_801AF2F8[] = {
        (u16*) 0x07005D20,
        (u16*) 0x07006630,
    };

    for (xPos = D_EBFBE0_801AF2D4, i = 0; i < 2; i++, xPos += D_EBFBE0_801AF2DC) {
        if (i == D_80161A28) {
            sp8C[i] = 255;
        } else {
            sp8C[i] = 32;
        }

        RCP_SetupDL(&gMasterDisp, 0x55);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, sp8C[i]);

        TextureRect_8bCI(&gMasterDisp, D_EBFBE0_801AF2F0[i], D_EBFBE0_801AF2F8[i], 48, 38, xPos, D_EBFBE0_801AF2D8,
                         1.0f, 1.0f);

        RCP_SetupDL(&gMasterDisp, 0x53);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, sp8C[i]);

        TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AF2E8[i], 56, 10, D_EBFBE0_801AF2E0[i], D_EBFBE0_801AF2D8 + 40.0f,
                         1.0f, 1.0f);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019B3DC.s")
#endif

void func_EBFBE0_8019B5AC(void) {
    s32 pad[2];
    s32 colorGB;
    s32 var_v0;

    func_EBFBE0_8019C824(&D_EBFBE0_801B91E8);

    colorGB = D_EBFBE0_801B91E8;
    var_v0 = 0xFFFFFFFF;

    if (D_EBFBE0_801B91EC) {
        colorGB = 255;
        var_v0 = 1;
        D_EBFBE0_801B91EC--;
        if (D_EBFBE0_801B91EC == 0) {
            D_EBFBE0_801B91F0 = 1;
        }
    }

    if (D_80177DB0 & var_v0) {
        RCP_SetupDL(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);
        TextureRect_8bIA(&gMasterDisp, D_7003650, 40, 12, 143.0f, 210.0f, 1.0f, 1.0f);
    }
}

void func_EBFBE0_8019B6D8(f32 xPos, f32 yPos, f32 offset, s32 r, s32 g, s32 b) {
    RCP_SetupDL(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, r, g, b, 255);
    TextureRect_8bIA_MirX(&gMasterDisp, D_7004010, 8, 8, xPos, yPos, 1.0f, 1.0f);
    TextureRect_8bIA(&gMasterDisp, D_7004010, 8, 8, xPos + offset, yPos, 1.0f, 1.0f);
}

void func_EBFBE0_8019B7D4(void) {
    RCP_SetupDL(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    TextureRect_8bIA(&gMasterDisp, &D_80080F0, 96, 10, 62.0f, 213.0f, 1.0f, 1.0f);
    TextureRect_8bIA(&gMasterDisp, D_8006E50, 96, 10, 166.0f, 213.0f, 1.0f, 1.0f);
}

void func_EBFBE0_8019B8A0(s32 arg0) {
    D_EBFBE0_801B9124 = arg0;
    D_80177898 = 0;
    D_EBFBE0_801B912C = 0;
    D_EBFBE0_801B91B4 = 0;
}

void func_EBFBE0_8019B8C8(void) {
    func_EBFBE0_8019BDF0();
    func_EBFBE0_8019BAB8(D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_38);
    Matrix_Pop(&gGfxMatrix);
    func_EBFBE0_8019C120(D_EBFBE0_801AE878[D_EBFBE0_801B91A8].unk_00);
}

void func_EBFBE0_8019B9C0(void) {
    func_EBFBE0_8019BDF0();
    func_EBFBE0_8019BAB8(D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_38);
    Matrix_Pop(&gGfxMatrix);
    func_EBFBE0_8019C120(D_EBFBE0_801AE638[D_EBFBE0_801B91A4].unk_00);
}

void func_EBFBE0_8019BAB8(MenuContext_38 arg0) {
    RCP_SetupDL(&gMasterDisp, 0x11);

    Lib_Ortho(&gMasterDisp);

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, arg0.unk_00, arg0.unk_04, arg0.unk_08, 1);
    Matrix_Scale(gGfxMatrix, arg0.unk_0C, arg0.unk_10, 1.0f, 1);
    Matrix_RotateX(gGfxMatrix, M_DTOR * 90.0f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_8015550);

    Matrix_Pop(&gGfxMatrix);

    Lib_Perspective(&gMasterDisp);
}

void func_EBFBE0_8019BBA4(MenuContext_4C arg0) {
    if (D_EBFBE0_801B91BC != 0) {
        func_EBFBE0_8019BC44(arg0.unk_0, arg0.unk_4, D_EBFBE0_801B91F4, D_EBFBE0_801B9200, 90.0f, D_EBFBE0_801B91F8);
        func_EBFBE0_8019BC44(arg0.unk_0 + arg0.unk_8, arg0.unk_4, D_EBFBE0_801B91F4, D_EBFBE0_801B91FC, -90.0f,
                             D_EBFBE0_801B91F8);
    }
}

void func_EBFBE0_8019BC44(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;

    func_EBFBE0_8019BE7C(D_EBFBE0_801B9224, D_EBFBE0_801B9228, 100.0f, &sp44, &sp40, &sp3C);

    Lights_SetOneLight(&gMasterDisp, sp44, sp40, sp3C, D_EBFBE0_801B922C, D_EBFBE0_801B9230, D_EBFBE0_801B9234,
                       D_EBFBE0_801B9238, D_EBFBE0_801B923C, D_EBFBE0_801B9240);

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, arg0, arg1, arg2, 1);

    Matrix_Scale(gGfxMatrix, arg5, arg5, arg5, 1);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * arg4, 1);
    Matrix_RotateY(gGfxMatrix, M_DTOR * arg3, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    func_800B9E80();

    gSPDisplayList(gMasterDisp++, D_604A9F0);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_8019BDF0(void) {
    Matrix_Push(&gGfxMatrix);
    Matrix_LookAt(gGfxMatrix, D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0, 0.0f, 1.0f, 0.0f,
                  1);
}

void func_EBFBE0_8019BE7C(f32 arg0, f32 arg1, f32 arg2, f32* arg3, f32* arg4, f32* arg5) {
    Vec3f sp24;
    Vec3f sp18;

    sp18.x = 0.0f;
    sp18.y = 0.0f;
    sp18.z = arg2;

    Matrix_RotateY(gCalcMatrix, M_DTOR * arg1, 0);
    Matrix_RotateX(gCalcMatrix, M_DTOR * arg0, 1);
    Matrix_MultVec3f(gCalcMatrix, &sp18, &sp24);

    *arg3 = sp24.x;
    *arg4 = sp24.y;
    *arg5 = sp24.z;
}

void func_EBFBE0_8019BF34(void) {
    s32 i;
    f32 sp40;

    if (D_EBFBE0_801B9214 != 0) {
        sp40 = D_EBFBE0_801B9204;
        func_EBFBE0_8019BDF0();

        for (i = 0; i < 3; i++) {
            D_EBFBE0_801B920C = Rand_ZeroOne() * 0.5f;
            D_EBFBE0_801B9210 = 0.5f;
            func_EBFBE0_8019C04C();
            D_EBFBE0_801B9204 += 6.0f;
        }

        Matrix_Pop(&gGfxMatrix);
        D_EBFBE0_801B9204 = sp40;

        if (D_EBFBE0_801B9204 < 23.0f) {
            D_EBFBE0_801B9204 += 18.0f;
        } else {
            D_EBFBE0_801B9204 = 23.0f;
            D_EBFBE0_801B9214 = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C04C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C120.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C418.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C5A0.s")

s32 func_EBFBE0_8019C66C(f32* arg0, f32 arg1, f32 arg2, UnkStruct_D_EBFBE0_801B9250* arg3) {
    s32 x;
    s32 y;
    s32 var_a2;
    f32 var_fv1;
    f32 temp;
    f32 temp2;

    var_a2 = 0;
    temp = *arg0;

    x = gChangedInput[D_80177AF8].stick_x;
    y = -gChangedInput[D_80177AF8].stick_y;

    if ((y > 10) || (y < -10)) {
        return 0;
    }

    if ((x < 10) && (x > -10)) {
        x = 0;
    } else if (x < 0) {
        x += 10;
    } else {
        x -= 10;
    }

    if (arg3->unk_4 == 0) {
        if (x != 0) {
            var_fv1 = (f32) x / 20.0f;
            arg3->unk_4 = arg3->unk_0;

            if (arg3->unk_0 != 0) {
                arg3->unk_0 -= 7;
            }

            if (arg3->unk_4 != 0) {
                if (x > 0) {
                    var_fv1 = 1.0f;
                } else {
                    var_fv1 = -1.0f;
                }
            }

            *arg0 += var_fv1;

            if (arg2 < *arg0) {
                *arg0 = arg2;
            }
            if (*arg0 < arg1) {
                *arg0 = arg1;
            }
        } else {
            arg3->unk_4 = 0;
            arg3->unk_0 = 7;
        }
    }

    if (arg3->unk_4 > 0) {
        arg3->unk_4--;
    }

    temp2 = *arg0;

    if ((s32) temp2 != (s32) temp) {
        func_80019218(0x49004007, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        var_a2 = 1;
    }

    return var_a2;
}

void func_EBFBE0_8019C824(f32* arg0) {
    if ((s32) Math_SmoothStepToF(arg0, D_EBFBE0_801B91E4, 0.5f, 100.0f, 1.0f) == 0.0f) {
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
