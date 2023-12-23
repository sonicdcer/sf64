#include "global.h"

typedef struct {
    /* 0x00 */ char pad00[0x4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ char pad0C[0x8];
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
} UnkStruct_D_EBFBE0_801AFD18; // size = 0x1C

typedef struct {
    /* 0x00 */ s32 id;
    /* 0x04 */ char pad0[0x8];
    /* 0x0C */ f32 zAngle;
    /* 0x10 */ f32 posX;
    /* 0x14 */ f32 posY;
    /* 0x18 */ f32 posZ;
    /* 0x1C */ char pad1C[0x8];
    /* 0x24 */ s32 alpha;
    /* 0x28 */ s32 unk_28;
    /* 0x2C */ char pad2C[0x0C];
} Planet; // size = 0x38

extern Planet planet[15];
extern UnkStruct_D_EBFBE0_801AFD18 D_EBFBE0_801AFD18[24];
extern s32 D_EBFBE0_801B0004[47];
extern s32 D_EBFBE0_801B00C0[47][96];
extern Gfx D_EBFBE0_801B4A40[];
extern void* D_EBFBE0_801B68D4[];
extern Gfx* D_EBFBE0_801B68F8[];
extern f32 D_EBFBE0_801CD818[];
extern s32 D_EBFBE0_801CD83C;
extern s32 D_EBFBE0_801CD8A0[15]; // bss
extern f32 D_EBFBE0_801CD9F4;     // x
extern f32 D_EBFBE0_801CD9F8;     // y
extern f32 D_EBFBE0_801CD9FC;     // z
extern s32 D_EBFBE0_801CD900[15];
extern s32 D_EBFBE0_801CD940; // bss
extern s32 D_EBFBE0_801CD944; // mapState // bss
extern s32 D_EBFBE0_801CD948;
extern s32 D_EBFBE0_801CD954;
extern s32 D_EBFBE0_801CD958;
extern s32 D_EBFBE0_801CD960;
extern s32 D_EBFBE0_801CD964; // bss
extern s32 D_EBFBE0_801CD968; // bss
extern s32 D_EBFBE0_801CD96C; // bss
extern s32 D_EBFBE0_801CD970;
extern s32 D_EBFBE0_801CD974;
extern s32 D_EBFBE0_801CD978;
extern s32 D_EBFBE0_801CD980;
extern s32 D_EBFBE0_801CD984;
extern s32 D_EBFBE0_801CD9B8;
extern s32 D_EBFBE0_801CD9BC;
extern s32 D_EBFBE0_801CD9C0;
extern s32 D_EBFBE0_801CD9D4;
extern f32 D_EBFBE0_801CDA00; // x
extern f32 D_EBFBE0_801CDA04; // y
extern f32 D_EBFBE0_801CDA08; // z
extern f32 D_EBFBE0_801CDA0C;
extern f32 D_EBFBE0_801CDA10;
extern f32 D_EBFBE0_801CDA14;
extern f32 D_EBFBE0_801CDA18;
extern f32 D_EBFBE0_801CDA1C;
extern f32 D_EBFBE0_801CDA20;
extern f32 D_EBFBE0_801CDA24;
extern f32 D_EBFBE0_801CDA28;
extern f32 D_EBFBE0_801CDA2C;
extern f32 D_EBFBE0_801CDA30;
extern f32 D_EBFBE0_801CDA40;
extern f32 D_EBFBE0_801CDA44;
extern f32 D_EBFBE0_801CDA48;
extern Matrix D_EBFBE0_801CDA60[];
extern Matrix D_EBFBE0_801CDE20[15]; // bss // planet related
extern Matrix D_EBFBE0_801CE1E0[15];
extern Matrix D_EBFBE0_801CE5A0[];
extern f32 D_EBFBE0_801CEA54;
extern f32 D_EBFBE0_801CEAA8;
extern f32 D_EBFBE0_801CEAAC;
extern f32 D_EBFBE0_801CEAB0;
extern f32 D_EBFBE0_801CEA18[];
extern f32 D_EBFBE0_801CEA58;
extern f32 D_EBFBE0_801CEA5C;
extern f32 D_EBFBE0_801CEA60;
extern f32 D_EBFBE0_801CEAB8[];
extern f32 D_EBFBE0_801CEAF8[];
extern s32 D_EBFBE0_801CEB48[3];
extern s32 D_EBFBE0_801CEEC4;
extern s32 D_EBFBE0_801CEEC8;
extern s32 D_EBFBE0_801CEED8;
extern f32 D_EBFBE0_801CEEDC;
extern Vec3f D_EBFBE0_801CEEE8[9];
extern Vec3f D_EBFBE0_801CEF58[9];
extern s32 D_EBFBE0_801CEFC4; // bss
extern s32 D_EBFBE0_801CEFC8;
extern s32 D_EBFBE0_801CEFD4;
extern s32 D_EBFBE0_801CF00C;
extern s32 D_EBFBE0_801CF018; // bss
extern s32 D_EBFBE0_801AF420[2];
extern u16* D_EBFBE0_801AF428[15][2];
extern f32 D_EBFBE0_801AFFB8[];

extern Gfx D_601D1F0[];
extern Gfx D_6047E70[];
extern u8 D_6047F80[];
extern u8 D_6048F80[];
extern Gfx D_604C540[];
extern Gfx D_604CDE0[];
extern Gfx D_604D680[];

void func_EBFBE0_801A0954(void);
void func_EBFBE0_801A1528(void);
void func_EBFBE0_801A1C14(void);
void func_EBFBE0_801A2B8C(void);
void func_EBFBE0_801A3550(Vec3f*, Vec3f*, Vec3f*, f32);
void func_EBFBE0_801A36A8(void);
void func_EBFBE0_801A4AE8(void);
void func_EBFBE0_801A5E80(void);
void func_EBFBE0_801A6694(void);
void func_EBFBE0_801A68E4(void);
void func_EBFBE0_801A6A24(void);
void func_EBFBE0_801A9EE4(void);
void func_EBFBE0_801AD11C(void);
void func_EBFBE0_801AD718(f32, f32, f32, f32*, f32*, f32*, f32, f32, f32);
void func_EBFBE0_8019E800(void);
void func_EBFBE0_8019E99C(void);
void func_EBFBE0_8019FF48(void);
void func_EBFBE0_801A0D14(void);
void func_EBFBE0_801A19A8(void);
f32 func_EBFBE0_801A25C8(s32);
void func_EBFBE0_801A4650(void);
void func_EBFBE0_801A4F8C(void);
void func_EBFBE0_801A4FC4(void);
void func_EBFBE0_801A53C8(void);
void func_EBFBE0_801A5834(void);
void func_EBFBE0_801A5C90(void);
void func_EBFBE0_801A6A98(s32);
void func_EBFBE0_801A8738(void);
void func_EBFBE0_801A8F40(void);
void func_EBFBE0_801A9224(void);
void func_EBFBE0_801A9448(void);
void func_EBFBE0_801A9814(void);
void func_EBFBE0_801A9910(void);
void func_EBFBE0_801A9A8C(void);
void func_EBFBE0_801A9DE8(void);
void func_EBFBE0_801AB300(void);
void func_EBFBE0_801ABF1C(void);
void func_EBFBE0_801AC200(s32);
void func_EBFBE0_801AC9A0(s32);

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

void func_EBFBE0_8019F83C(void) {
    s32 i;

    D_EBFBE0_801CD970 = 0;

    for (i = 0; i < 24; i++) {
        if ((D_80177BD8[i] == 4) || (D_80177BD8[i] == 5) || (D_80177BD8[i] == 1) || (D_80177BD8[i] == 11)) {
            D_80177BD8[i] = 0;
        }

        if (D_80177BD8[i] == 6) {
            D_EBFBE0_801AFD18[i].unk_14 = 5;
        }

        D_EBFBE0_801AFD18[i].unk_18 = 0;
        gUnkEntities30[i].unk_24 = 0.0f;
    }
}

void func_EBFBE0_8019F910(void) {
    s32 i;
    s32 mask = 0x00FF0000;

    for (i = 0; i < 3; i++) {
        if (gTeamShields[3 - i] <= 0) {
            D_80177B50[D_80177B48] ^= mask;
        } else {
            D_80177B50[D_80177B48] |= mask;
        }
        mask >>= 8;
    }
}

void func_EBFBE0_8019F97C(void) {
    D_EBFBE0_801CEA54 = func_EBFBE0_801A25C8(D_EBFBE0_801CD954);

    D_EBFBE0_801CD9F4 = D_EBFBE0_801CDA00 = planet[D_EBFBE0_801CD954].posX;
    D_EBFBE0_801CD9F8 = D_EBFBE0_801CDA04 = planet[D_EBFBE0_801CD954].posY;
    D_EBFBE0_801CDA08 = planet[D_EBFBE0_801CD954].posZ;
    D_EBFBE0_801CD9FC = planet[D_EBFBE0_801CD954].posZ + D_EBFBE0_801CEA54;
}

void func_EBFBE0_8019FA1C(void) {
    s32 i;

    for (i = 0; i < 15; i++) {
        if (i == D_EBFBE0_801CD954) {
            if ((i == 3) || (i == 4) || (i == 5)) {
                planet[i].alpha = 144;
            } else {
                planet[i].alpha = 255;
            }
        } else {
            planet[i].alpha = 0;
        }
    }
}

void func_EBFBE0_8019FC04(void) {
    s32 i;

    if (D_80177B48 != 0) {
        D_EBFBE0_801CEB48[1] = 1;
        D_EBFBE0_801CEB48[2] = 1;
    }

    for (i = 0; i < 7; i++) {
        if (D_80177B90[i] == 6) {
            D_EBFBE0_801CEB48[1] = 0;
        }
        if (D_80177B90[i] == 5) {
            D_EBFBE0_801CEB48[2] = 0;
        }
    }
}

bool func_EBFBE0_8019FD1C(u32 arg0, s32 arg1) {
    s32 ret;
    s32 var_v0;

    switch (arg0) {
        case 1:
            var_v0 = 0;
            break;

        case 3:
            var_v0 = 1;
            break;

        case 17:
            var_v0 = 2;
            break;

        case 18:
            var_v0 = 3;
            break;

        case 2:
            var_v0 = 4;
            break;

        case 5:
            var_v0 = 5;
            break;

        case 16:
            var_v0 = 6;
            break;

        case 11:
            var_v0 = 7;
            break;

        case 8:
            var_v0 = 8;
            break;

        case 0:
            var_v0 = 9;
            break;

        case 12:
            var_v0 = 10;
            break;

        case 13:
            var_v0 = 11;
            break;

        case 14:
            var_v0 = 12;
            break;

        case 7:
            var_v0 = 13;
            break;

        case 6:
            var_v0 = 14;
            break;

        case 19:
            var_v0 = 15;
            break;

        case 9:
            if (D_8017827C == 0) {
                var_v0 = 14;
            } else {
                var_v0 = 15;
            }
            break;
    }

    ret = false;

    switch (arg1) {
        case 0:
            if (!(gSaveFile.save.data.planet[var_v0].unk_5 & 1)) {
                gSaveFile.save.data.planet[var_v0].unk_5 = 1;
                ret = true;
            }
            break;

        case 1:
            if (gExpertMode) {
                if (!(gSaveFile.save.data.planet[var_v0].unk_3 & 1)) {
                    gSaveFile.save.data.planet[var_v0].unk_3 = 1;
                    ret = true;
                }
            } else {
                if (!(gSaveFile.save.data.planet[var_v0].unk_6 & 1)) {
                    gSaveFile.save.data.planet[var_v0].unk_6 = 1;
                    ret = true;
                }
            }
            break;

        case 2:
            if (gExpertMode) {
                if (!(gSaveFile.save.data.planet[var_v0].unk_4 & 1)) {
                    gSaveFile.save.data.planet[var_v0].unk_4 = 1;
                    ret = true;
                }
            } else {
                if (!(gSaveFile.save.data.planet[var_v0].unk_7 & 1)) {
                    gSaveFile.save.data.planet[var_v0].unk_7 = 1;
                    ret = true;
                }
            }
            break;
    }

    return ret;
}

void func_EBFBE0_8019FF48(void) {
    func_EBFBE0_801A6694();
    func_EBFBE0_801A68E4();
    func_EBFBE0_801A6A24();

    switch (D_EBFBE0_801CD944) {
        case 0:
            func_EBFBE0_801A0954();
            D_8017842C += 0.09f;
            break;

        case 1:
            func_EBFBE0_801A1528();
            D_EBFBE0_801CDA1C += 0.03f;
            break;

        case 3:
            func_EBFBE0_801AD11C();
            D_EBFBE0_801CDA1C += 0.03f;
            break;

        case 2:
            func_EBFBE0_801A1C14();
            break;

        case 4:
            func_EBFBE0_801A5E80();
            break;

        case 5:
            func_EBFBE0_801A2B8C();
            break;

        case 6:
            func_EBFBE0_801A4AE8();
            break;

        case 7:
            func_EBFBE0_801A36A8();
            break;

        default:
            break;
    }

    if ((D_EBFBE0_801CD944 == 0) || (D_EBFBE0_801CD944 == 1) || (D_EBFBE0_801CD944 == 7) || (D_EBFBE0_801CD944 == 3)) {
        func_EBFBE0_801AD718(D_EBFBE0_801CDA00, D_EBFBE0_801CDA04, D_EBFBE0_801CDA08, &D_EBFBE0_801CD9F4,
                             &D_EBFBE0_801CD9F8, &D_EBFBE0_801CD9FC, D_EBFBE0_801CDA14,
                             D_EBFBE0_801CDA0C + D_EBFBE0_801CDA18, D_EBFBE0_801CDA10 + D_EBFBE0_801CDA1C);
        func_800B6F50(D_EBFBE0_801CD9F4, D_EBFBE0_801CD9F8, D_EBFBE0_801CD9FC, D_EBFBE0_801CDA00, D_EBFBE0_801CDA04,
                      D_EBFBE0_801CDA08);
    }
    gFrameCount++;
}

void func_EBFBE0_801A01A8(void) {
    s32 i;
    s32* ptr;

    Matrix_Push(&gGfxMatrix);
    Matrix_LookAt(gGfxMatrix, D_EBFBE0_801CD9F4, D_EBFBE0_801CD9F8, D_EBFBE0_801CD9FC, D_EBFBE0_801CDA00,
                  D_EBFBE0_801CDA04, D_EBFBE0_801CDA08, D_EBFBE0_801CDA20, D_EBFBE0_801CDA24, D_EBFBE0_801CDA28, 1);
    Matrix_Translate(gGfxMatrix, D_EBFBE0_801CEA58, D_EBFBE0_801CEA5C, D_EBFBE0_801CEA60, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    if (D_EBFBE0_801CD974 && D_EBFBE0_801CD944 != 0) {
        for (i = 0; i < 24; i++) {
            if (D_80177BD8[i] == 0) {
                continue;
            }
            if (D_EBFBE0_801AFD18[i].unk_18 == 0) {
                continue;
            }

            func_EBFBE0_801AC9A0(i);

            if (D_EBFBE0_801AFD18[i].unk_14) {
                func_EBFBE0_801AC200(i);
            }

            func_80060D94(i);
        }
    }

    func_EBFBE0_801A8F40();

    func_EBFBE0_801A9224();

    func_EBFBE0_801A9448();

    for (ptr = D_EBFBE0_801CD8A0, i = 0; i < 15; i++, ptr++) {
        func_EBFBE0_801A6A98(*ptr);
    }

    func_EBFBE0_801A8738();

    Matrix_Pop(&gGfxMatrix);

    if (D_EBFBE0_801CD96C) {
        func_EBFBE0_801ABF1C();
    }

    func_EBFBE0_801AB300();

    if (D_EBFBE0_801CEFC4) {
        func_EBFBE0_801A5834();
    }

    if (D_EBFBE0_801CD964) {
        func_EBFBE0_801A9910();
    }

    func_EBFBE0_801A9814();

    if (D_EBFBE0_801CD968) {
        func_EBFBE0_801A9A8C();
    }

    func_EBFBE0_801A9DE8();

    func_EBFBE0_801A5C90();

    if ((D_EBFBE0_801CD944 == 7) && (D_EBFBE0_801CD948 == 1)) {
        func_EBFBE0_801A4650();
    }
    if (D_EBFBE0_801CD944 == 0) {
        func_EBFBE0_801A0D14();
    }
    if (D_EBFBE0_801CD944 == 1) {
        func_EBFBE0_801A19A8();
    }

    if (D_EBFBE0_801CEEC8 == 0) {
        func_EBFBE0_801A07E8((u8*) D_EBFBE0_801B68B0[8], (u8*) SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[8]),
                             &(D_EBFBE0_801CD818[8]));
        D_EBFBE0_801CEEC8 = 5;
    } else {
        D_EBFBE0_801CEEC8--;
    }

    func_EBFBE0_801A07E8((u8*) D_EBFBE0_801B68B0[D_EBFBE0_801CEEC4 * 2],
                         (u8*) SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[D_EBFBE0_801CEEC4 * 2]),
                         &(D_EBFBE0_801CD818[D_EBFBE0_801CEEC4 * 2]));
    func_EBFBE0_801A07E8((u8*) D_EBFBE0_801B68B0[(D_EBFBE0_801CEEC4 * 2) + 1],
                         (u8*) SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[(D_EBFBE0_801CEEC4 * 2) + 1]),
                         &(D_EBFBE0_801CD818[(D_EBFBE0_801CEEC4 * 2) + 1]));
    D_EBFBE0_801CEEC4++;
    if (D_EBFBE0_801CEEC4 > 3) {
        D_EBFBE0_801CEEC4 = 0;
    }

    Texture_Mottle((u16*) D_6047F80, (u16*) D_6048F80, 5);
}

s32 func_EBFBE0_801A05B4(void) {
    s32 i;
    s32 j;
    s32 sp30[10];
    s32 ret;
    s32 var_a3;
    s32 temp_a0;

    for (i = 0; i < 10; i++) {
        sp30[i] = 0;
    }

    for (i = 0; i < 10; i++) {
        temp_a0 = gSaveFile.save.data.unk_36[i];
        for (j = 0; j < temp_a0; j++) {
            var_a3 = gSaveFile.save.data.unk_5E[i][j].unk_0;
            if (gSaveFile.save.data.unk_5E[i][j].unk_C != 0) {
                var_a3 += 256;
            }
            sp30[i] += var_a3;
        }
    }

    ret = sp30[0];

    for (i = 1; i < 10; i++) {
        if (ret < sp30[i]) {
            ret = sp30[i];
        }
    }

    return ret;
}

void func_EBFBE0_801A0788(void) {
    D_80178410 = 800;

    Memory_FreeAll();
    func_800A5D6C();

    D_80178420 = 320.0f;
    D_80178424 = 240.0f;
    D_8017842C = 0.0f;
    D_80178430 = 0.0f;
}

void func_EBFBE0_801A07E8(u8* arg0, u8* arg1, f32* arg2) {
    s32* var_v0 = D_EBFBE0_801B0004;
    s32 temp;
    s32 i;
    s32 j;
    s32 k;

    for (i = 1; i < 48; i++, var_v0++) {
        for (k = 0, j = *var_v0; j < (95 - *var_v0); j++, k++) {
            temp = D_EBFBE0_801B00C0[i - 1][k] + (s32) *arg2;

            if (temp > 95) {
                temp -= 95;
            }
            if (temp < 0) {
                temp += 95;
            }

            *(arg0 + ((i * 96) + j)) = *(arg1 + ((i * 96) + temp));
            *(arg0 + ((95 - i) * 96) + j) = *(arg1 + ((95 - i) * 96) + temp);
        }
    }

    *arg2 -= 1.0f;

    if (*arg2 <= 0.0f) {
        *arg2 = 95.0f;
    }

    if (*arg2 > 95.0f) {
        *arg2 = 0.0f;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A0954.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A0D14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A116C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A1528.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A19A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A1AE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A1C14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A2304.s")

f32 func_EBFBE0_801A25C8(s32 arg0) {
    f32 sp4;

    switch (arg0) {
        case 1:
            sp4 = 900.0f;
            break;

        case 2:
            sp4 = 800.0f;
            break;

        case 0:
            sp4 = 650.0f;
            break;

        case 6:
        case 7:
        case 8:
        case 10:
        case 11:
        case 12:
            sp4 = 550.0f;
            break;

        case 9:
            sp4 = 1100.0f;
            break;

        case 13:
            sp4 = 2100.0f;
            break;

        case 14:
            sp4 = 850.0f;
            break;

        case 3:
        case 4:
        case 5:
            sp4 = 650.0f;
            break;

        default:
            break;
    }

    return sp4;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A2674.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A281C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A2B8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A2EB8.s")

void func_EBFBE0_801A3440(f32 arg0) {
    Vec3f vec[2];

    if (D_EBFBE0_801CEED8 != -1) {
        func_EBFBE0_801A3550(vec, &D_EBFBE0_801CEEE8[D_EBFBE0_801CEED8], &D_EBFBE0_801CEF58[D_EBFBE0_801CEED8],
                             D_EBFBE0_801CEEDC);
        D_EBFBE0_801CD9F4 = vec[0].x;
        D_EBFBE0_801CD9F8 = vec[0].y;
        D_EBFBE0_801CD9FC = vec[0].z;
        D_EBFBE0_801CDA00 = vec[1].x;
        D_EBFBE0_801CDA04 = vec[1].y;
        D_EBFBE0_801CDA08 = vec[1].z;
        D_EBFBE0_801CEEDC += arg0;

        if (D_EBFBE0_801CEEDC > 1.0f) {
            D_EBFBE0_801CEED8++;
            D_EBFBE0_801CEEDC = 0.0f;
            if (D_EBFBE0_801CEED8 >= 6) {
                D_EBFBE0_801CEED8 = -1;
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A3550.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A36A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A3A00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A4394.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A4650.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A48C0.s")

void func_EBFBE0_801A4A38(f32 arg0) {
    Math_SmoothStepToF(&D_EBFBE0_801CDA2C, D_EBFBE0_801CDA40, arg0, 100.0f, 0.1f);
    Math_SmoothStepToF(&D_EBFBE0_801CDA30, D_EBFBE0_801CDA44, arg0, 100.0f, 0.1f);
    Math_SmoothStepToF(&D_EBFBE0_801CDA08, D_EBFBE0_801CDA48, arg0, 100.0f, 0.1f);
    D_EBFBE0_801CDA00 = D_EBFBE0_801CDA2C;
    D_EBFBE0_801CDA04 = D_EBFBE0_801CDA30;
}

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

s32 func_EBFBE0_801A5770(void) {
    bool ret = false;
    s8 y = gControllerPress[D_80177AF8].stick_y;

    if ((y > -40) && (y < 40)) {
        y = 0;
    }

    if (y != 0) {
        if (D_EBFBE0_801CEFD4 == 0) {
            ret = true;
        }
        D_EBFBE0_801CEFD4 = y;
    } else {
        D_EBFBE0_801CEFD4 = 0;
    }

    if (ret) {
        func_80019218(0x49000002U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A5834.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A5C90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A5E80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A61B4.s")

bool func_EBFBE0_801A62FC(u32 level) {
    u32 i;
    s32 ret = true;

    switch (level) {
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
            i = level;
            break;

        case 14:
            i = 13;
            break;
    }

    if (gSaveFile.save.data.planet[i].unk_5 & 1) {
        ret = false;
    }

    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A6368.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A6480.s")

s32 func_EBFBE0_801A655C(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 24; i++) {
        if ((D_EBFBE0_801AFD18[i].unk_04 == arg0) && (D_EBFBE0_801AFD18[i].unk_08 == arg1)) {
            break;
        }
    }

    return i;
}

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

s32 func_EBFBE0_801A6DAC(s32 planet) {
    s32 ret;
    s32 planet_;
    s32 var_v0;
    s32 var_a0;

    if (planet == 13) {
        if (gExpertMode) {
            var_v0 = gSaveFile.save.data.planet[15].unk_3 & 1;
            var_a0 = gSaveFile.save.data.planet[14].unk_4 & 1 | gSaveFile.save.data.planet[15].unk_4 & 1;
        } else {
            var_v0 = gSaveFile.save.data.planet[15].unk_6 & 1;
            var_a0 = gSaveFile.save.data.planet[14].unk_7 & 1 | gSaveFile.save.data.planet[15].unk_7 & 1;
        }
    } else {
        planet_ = planet;

        if (planet == 14) {
            planet_ = 13;
        }

        if (gExpertMode) {
            var_v0 = gSaveFile.save.data.planet[planet_].unk_3 & 1;
            var_a0 = gSaveFile.save.data.planet[planet_].unk_4 & 1;
        } else {
            var_v0 = gSaveFile.save.data.planet[planet_].unk_6 & 1;
            var_a0 = gSaveFile.save.data.planet[planet_].unk_7 & 1;
        }
    }

    ret = 0;

    if (var_v0) {
        ret = 2;
    } else if (var_a0) {
        ret = 1;
    }

    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A6EC0.s")

void func_EBFBE0_801A7230(s32 planetId) {
    switch (planet[planetId].unk_28) {
        case 0:
            if ((D_EBFBE0_801CD944 == 3 || planetId == D_EBFBE0_801CD954 || planetId == D_EBFBE0_801CD958) &&
                D_EBFBE0_801CD944 != 1 && D_EBFBE0_801CD944 != 7) {
                RCP_SetupDL(&gMasterDisp, 0x35);
            } else {
                RCP_SetupDL(&gMasterDisp, 0x29);
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, planet[planetId].alpha);
            }
            break;

        case 2:
            if ((D_EBFBE0_801CD944 == 3 || planetId == D_EBFBE0_801CD954 || planetId == D_EBFBE0_801CD958) &&
                D_EBFBE0_801CD944 != 1 && D_EBFBE0_801CD944 != 7) {
                RCP_SetupDL(&gMasterDisp, 0x17);
            } else {
                RCP_SetupDL(&gMasterDisp, 0x2E);
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, planet[planetId].alpha);
            }
            break;

        case 1:
        case 4:
            RCP_SetupDL(&gMasterDisp, 0x40);

            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, planet[planetId].alpha);
            break;

        case 3:
            RCP_SetupDL(&gMasterDisp, 0x43);

            gDPSetPrimColor(gMasterDisp++, 0, 0, 240, 0, 0, planet[planetId].alpha);
            gDPSetEnvColor(gMasterDisp++, 31, 0, 0, 0);

            planet[planetId].zAngle += 0.1f;
            break;
    }

    Matrix_Push(&gGfxMatrix);

    Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CDE20[planetId]);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[planet[planetId].id]);

    Matrix_Pop(&gGfxMatrix);
}

#ifdef IMPORT_DATA
void func_EBFBE0_801A74F4(s32 planetId) {
    static float D_EBFBE0_801B6A74 = 0.0f;
    s32 alpha = planet[13].alpha;

    if (planet[planetId].alpha > 128)
        alpha = 128;

    RCP_SetupDL(&gMasterDisp, 0x43);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
    gDPSetEnvColor(gMasterDisp++, 0x1f, 0, 0, 0);

    Matrix_Push(&gGfxMatrix);

    Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CDE20[planetId]);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * D_EBFBE0_801B6A74, 1);
    Matrix_Scale(gGfxMatrix, 0.8f, 0.8f, 0.8f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[planet[planetId].id]);

    Matrix_Pop(&gGfxMatrix);

    D_EBFBE0_801B6A74 -= 0.2f;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A74F4.s")
#endif

void func_EBFBE0_801A7684(s32 planetId) {
    s32 r;
    s32 g;
    s32 b;

    r = g = b = 255;

    if (planetId == 7) {
        r = g = b = 64;
    }

    RCP_SetupDL(&gMasterDisp, 0x40);

    gDPSetPrimColor(gMasterDisp++, 0, 0, r, g, b, planet[planetId].alpha);

    Matrix_Push(&gGfxMatrix);
    Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CDE20[planetId]);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_EBFBE0_801B4A40);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_801A77B0(s32 planetId) {
    RCP_SetupDL(&gMasterDisp, 0x40);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, planet[planetId].alpha);

    Matrix_Push(&gGfxMatrix);

    Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CDE20[planetId]);

    if ((planetId == 10) || (planetId == 7) || (planetId == 8)) {
        Matrix_RotateY(gGfxMatrix, M_DTOR * 180.0f, 1);
    }

    Matrix_RotateZ(gGfxMatrix, M_DTOR * planet[planetId].zAngle, 1);
    Matrix_Scale(gGfxMatrix, 1.6f, 1.6f, 1.6f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_605C230);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_801A791C(s32 planetId) {
    RCP_SetupDL(&gMasterDisp, 0x43);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 175, 175, planet[planetId].alpha);
    gDPSetEnvColor(gMasterDisp++, 73, 31, 15, 0);

    Matrix_Push(&gGfxMatrix);

    Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CDE20[planetId]);

    Matrix_RotateZ(gGfxMatrix, M_DTOR * -planet[planetId].zAngle, 1);
    Matrix_RotateX(gGfxMatrix, M_DTOR * 20.0f, 1);

    Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 3.0f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_604C540);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_801A7A84(s32 planetId) {
    RCP_SetupDL(&gMasterDisp, 0x43);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 0xff, 0xaf, 0xaf, planet[planetId].alpha);
    gDPSetEnvColor(gMasterDisp++, 0x49, 0x1f, 0x0f, 0);

    Matrix_Push(&gGfxMatrix);

    Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CDE20[planetId]);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * -planet[planetId].zAngle, 1);
    Matrix_RotateX(gGfxMatrix, M_DTOR * 20.0f, 1);
    Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 3.0f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_604CDE0);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_801A7BEC(f32* zAngle, f32 next, f32 scale) {
    s32 alpha = planet[13].alpha;

    if (planet[13].alpha > 128) {
        alpha = 128;
    }

    RCP_SetupDL(&gMasterDisp, 0x43);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 63, 95, 30, alpha);
    gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);

    Matrix_Push(&gGfxMatrix);

    Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CDE20[13]);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * (*zAngle), 1);
    Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_6047E70);

    Matrix_Pop(&gGfxMatrix);

    *zAngle += next;
}

void func_EBFBE0_801A7D3C(s32 i) {
    Vec3f src;
    Vec3f dest;
    f32 scale;

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 0.0f;

    scale = 7.0f + (Rand_ZeroOne() * 8.0f);

    Matrix_Push(&gGfxMatrix);

    Matrix_Mult(gGfxMatrix, &D_EBFBE0_801CDA60[i], 1);
    Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801CEAF8[i], 1);
    Matrix_Translate(gGfxMatrix, D_EBFBE0_801AFFB8[i], 0.0f, 0.0f, 1);
    Matrix_RotateY(gGfxMatrix, M_DTOR * -D_EBFBE0_801CEAF8[i], 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    Matrix_Copy(&D_EBFBE0_801CE5A0[i], gGfxMatrix);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * D_EBFBE0_801CEAB8[i], 1);
    Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);
    Matrix_MultVec3f(gGfxMatrix, &src, &dest);

    D_EBFBE0_801CEA18[i] = dest.z;

    Matrix_SetGfxMtx(&gMasterDisp);

    Matrix_Copy(&D_EBFBE0_801CE1E0[i], gGfxMatrix);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_801A7F1C(s32 arg0) {
    s32 alpha;

    if (D_EBFBE0_801CD980 != 1) {
        alpha = D_EBFBE0_801CD900[arg0];
    } else {
        alpha = D_EBFBE0_801CD984;
        D_EBFBE0_801CD900[arg0] = 255;
    }

    if (alpha != 0) {
        RCP_SetupDL(&gMasterDisp, 0x43);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
        gDPSetEnvColor(gMasterDisp++, 80, 80, 0, 0);

        Matrix_Push(&gGfxMatrix);

        Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CE1E0[arg0]);
        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_604D680);

        Matrix_Pop(&gGfxMatrix);

        D_EBFBE0_801CEAB8[arg0] += 45.0f;
        if (D_EBFBE0_801CD980 == 0) {
            D_EBFBE0_801CEAF8[arg0] += 5.0f;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A809C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A8738.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A89BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A8F40.s")

void func_EBFBE0_801A914C(void) {
    D_EBFBE0_801CEAA8 = 140.0f;

    if (D_EBFBE0_801CD954 == 9) {
        D_EBFBE0_801CEAA8 = 230.0f;
    }

    if (D_EBFBE0_801CD954 == 1) {
        D_EBFBE0_801CEAA8 = 210.0f;
    }

    if (D_EBFBE0_801CD954 == 0xE) {
        D_EBFBE0_801CEAA8 = 250.0f;
    }

    if (D_EBFBE0_801CD954 == 4) {
        D_EBFBE0_801CEAA8 = 150.0f;
    }

    if (D_EBFBE0_801CD954 == 5) {
        D_EBFBE0_801CEAA8 = 150.0f;
    }

    if (D_EBFBE0_801CD954 == 3) {
        D_EBFBE0_801CEAA8 = 150.0f;
    }

    if (D_EBFBE0_801CD954 == 0xD) {
        D_EBFBE0_801CEAA8 = 300.0f;
    }

    D_EBFBE0_801CEAAC = D_EBFBE0_801CEAA8;
    D_EBFBE0_801CEAB0 = D_EBFBE0_801CEAA8;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9224.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9448.s")

void func_EBFBE0_801A9814(void) {
    if (D_EBFBE0_801B8280 != 0) {
        Matrix_Push(&gGfxMatrix);
        Matrix_LookAt(gGfxMatrix, D_EBFBE0_801CD9F4, D_EBFBE0_801CD9F8, D_EBFBE0_801CD9FC, D_EBFBE0_801CDA00,
                      D_EBFBE0_801CDA04, D_EBFBE0_801CDA08, D_EBFBE0_801CDA20, D_EBFBE0_801CDA24, D_EBFBE0_801CDA28, 1);
        Matrix_Translate(gGfxMatrix, D_EBFBE0_801CEA58, D_EBFBE0_801CEA5C, D_EBFBE0_801CEA60, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        func_80084688(2, D_EBFBE0_801B8284);
        Matrix_Pop(&gGfxMatrix);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9910.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9A8C.s")

void func_EBFBE0_801A9DE8(void) {
    s32 mask;

    if (!((D_EBFBE0_801CD978 != 0) || (D_EBFBE0_801CD944 == 3) || (D_EBFBE0_801CD944 == 6) ||
          ((D_EBFBE0_801CD944 == 7) && (D_EBFBE0_801CD948 == 2)))) {
        return;
    }

    mask = 0xFFFFFFFF;
    if (D_EBFBE0_801CF00C != 0) {
        mask = 1;
        D_EBFBE0_801CF00C--;
    }

    if (gFrameCount & mask) {
        func_EBFBE0_801AD7EC(254, 16, gLifeCount[D_801778A0]);
    }

    if ((D_80161A34 == 7) || (D_80161A34 == 5)) {
        if (D_EBFBE0_801CD83C < D_80161714) {
            D_EBFBE0_801CD83C = D_80161714;
        }
        func_EBFBE0_801A9EE4();
        func_EBFBE0_801A9FD4(0);
    }
}

#ifndef IMPORT_DATA

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

#endif

void func_EBFBE0_801A9EE4(void) {
    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    Graphics_DisplaySmallText(24, 14, 1.0f, 1.0f, "TOTAL HITS");
    Graphics_DisplaySmallNumber(71 - (func_8008BCBC(D_80161714) * 8), 24, D_80161714);
    Graphics_DisplaySmallText(143, 14, 1.0f, 1.0f, "TOP");
    Graphics_DisplaySmallNumber(167 - (func_8008BCBC(D_EBFBE0_801CD83C) * 8), 24, D_EBFBE0_801CD83C);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A9FD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AA1CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AA434.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AA778.s")

#ifndef DATA_IMPORT_PENDING
extern f32 D_EBFBE0_801B6B00; // likely in-function static
extern f32 D_EBFBE0_801B6B04; // likely in-function static
extern f32 D_EBFBE0_801B6B08; // likely in-function static
#endif

void func_EBFBE0_801AB17C(f32 x, f32 y, f32 z) {
#ifdef DATA_IMPORT_PENDING
    static f32 D_EBFBE0_801B6B00 = 0.23f; // scale
    static f32 D_EBFBE0_801B6B04 = 4.4f;  // posX
    static f32 D_EBFBE0_801B6B08 = 1.0f;  // posY
#endif

    RCP_SetupDL(&gMasterDisp, 0x35);
    gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, x - D_EBFBE0_801B6B04, y + D_EBFBE0_801B6B08, z, 1);
    Matrix_Scale(gGfxMatrix, D_EBFBE0_801B6B00, D_EBFBE0_801B6B00, D_EBFBE0_801B6B00, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_601D1F0);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_801AB284(void) {
    D_EBFBE0_801CD940 = 0;
    D_80178308 = D_EBFBE0_801AF428[D_EBFBE0_801CD954][D_EBFBE0_801CD940];
    D_80177D68 = D_EBFBE0_801AF420[D_EBFBE0_801CD940];
    D_EBFBE0_801CF018 = 100;
    D_80178728 = 78;
    D_8017872C = 166;
}

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

void func_EBFBE0_801AD048(void) {
    f32 sp1C = Math_Atan2F(D_EBFBE0_801CD9F8 - D_EBFBE0_801CDA04, sqrtf(SQ(D_EBFBE0_801CD9F4 - D_EBFBE0_801CDA00) +
                                                                        SQ(D_EBFBE0_801CD9FC - D_EBFBE0_801CDA08)));
    f32 temp = -Math_Atan2F(D_EBFBE0_801CD9F4 - D_EBFBE0_801CDA00, D_EBFBE0_801CD9FC - D_EBFBE0_801CDA08);

    Matrix_RotateY(gGfxMatrix, -temp, 1);
    Matrix_RotateX(gGfxMatrix, -sp1C, 1);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AD11C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AD718.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AD7EC.s")
