#include "global.h"
#include "fox_option.h"

void func_EBFBE0_80191B20(void) {
    s32 i;
    s32 var_a1_2;
    s32 var_v0_2;

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
        if (!(D_80178870.save[0].save_00.unk_00[i].unk_6 & 1)) {
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
                D_80178870.save[0].save_00.unk_00[14].unk_5 = 1;
                if (var_v0_2 != 0) {
                    D_80178870.save[0].save_00.unk_00[14].unk_4 = 1;
                } else {
                    D_80178870.save[0].save_00.unk_00[14].unk_7 = 1;
                }
                func_800C3084();
            } else if (D_800D3180[9] == 2) {
                D_80177BB0[D_80177B48] = 1;
                D_80178870.save[0].save_00.unk_00[15].unk_5 = 1;
                if (var_v0_2 != 0) {
                    D_80178870.save[0].save_00.unk_00[15].unk_4 = 1;
                    D_80178870.save[0].save_00.unk_00[15].unk_3 = 1;
                } else {
                    D_80178870.save[0].save_00.unk_00[15].unk_7 = 1;
                    D_80178870.save[0].save_00.unk_00[15].unk_6 = 1;
                }
                func_800C3084();
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

    func_80006F20();

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
        Matrix_Pop(&D_8013B3C0);
    }
}

void func_EBFBE0_801924C4(void) {
    D_80161A38 = 0xFF;
    D_EBFBE0_801B912C = 0;

    switch (D_EBFBE0_801B9124) {
        case 0x0:
            D_80177898 = 0;
            break;

        case 0xA:
        case 0x14:
        case 0x1E:
            func_EBFBE0_801992C4();
            break;

        case 0x7D0:
            func_EBFBE0_80199FA8();
            break;

        case 0x3:
            func_EBFBE0_80196E54();
            break;

        case 0x4:
            func_EBFBE0_80194678();
            break;

        case 0x6:
            func_EBFBE0_801958DC();
            break;

        case 0x5:
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
        D_800DD8B4 = 3;
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
        D_800DD8B4 = 3;
        func_8001DC6C(0, 28);
    } else {
        D_80178340 += 0x20;
        if (D_80178340 >= 0x100) {
            D_80178340 = 0xFF;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801929F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80192D58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80193864.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80193B04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80193C4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801944F0.s")

void func_EBFBE0_80194678(void) {
    s32 i;

    D_80178410 = 800;

    D_EBFBE0_801B91B4 = 0;
    D_EBFBE0_801B91B8 = 0;
    D_EBFBE0_801B91BC = 1;
    D_EBFBE0_801B91A0 = 0;

    D_80177C74 = D_80178870.save[0].save_00.unk_14;
    func_800182F4(D_EBFBE0_801AE998[D_80177C74] | 0xE0000000);

    D_80177C80[0] = D_80178870.save[0].save_00.unk_15;
    D_80177C80[1] = D_80178870.save[0].save_00.unk_16;
    D_80177C80[2] = D_80178870.save[0].save_00.unk_17;

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
    for (i = 0; i < 5; i++)  { D_EBFBE0_801B9270[i] = 255.0f; }
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801948A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80194AEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80194BD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80194CE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801952B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801958DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80195944.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80195B74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80196260.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801962A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019669C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80196894.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80196E54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80196EFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80196F9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80196FC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80197074.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019715C.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801973C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019752C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80197914.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80197A3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80197D30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80197DE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80197F74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80198164.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801982B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801984D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80198608.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019882C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019896C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199198.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199284.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_801992C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199424.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019949C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019978C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199820.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199EA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_80199FA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A080.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A0B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A124.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A1A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A214.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019A298.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019B8A0.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C824.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019C8C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019CAE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019CBC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019CD54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019D118.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019D624.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019DB20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019DCE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019DD44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019DE74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019DF64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019E030.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_option/func_EBFBE0_8019E284.s")
