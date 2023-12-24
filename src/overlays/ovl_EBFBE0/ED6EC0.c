#include "global.h"
#include "fox_map.h"
#include "sf64level.h"

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
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 zAngle;
    /* 0x10 */ f32 posX;
    /* 0x14 */ f32 posY;
    /* 0x18 */ f32 posZ;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 scale;
    /* 0x24 */ s32 alpha;
    /* 0x28 */ s32 unk_28;
    /* 0x2C */ char pad2C[0x0C];
} Planet; // size = 0x38

extern Planet planet[15];
extern s32 D_EBFBE0_801AF420[2];
extern u16* D_EBFBE0_801AF428[15][2];
extern Gfx* D_EBFBE0_801AFA30[];
extern UnkStruct_D_EBFBE0_801AFD18 D_EBFBE0_801AFD18[24];
extern f32 D_EBFBE0_801AFFB8[];
extern f32 D_EBFBE0_801AFFF4; // yRot of something
extern f32 D_EBFBE0_801AFFF8; // xRot of something
extern f32 D_EBFBE0_801AFFFC; // yRot of something
extern f32 D_EBFBE0_801B0000; // xRot of something
extern s32 D_EBFBE0_801B0004[47];
extern s32 D_EBFBE0_801B00C0[47][96];
extern Gfx D_EBFBE0_801B4A40[];
extern void* D_EBFBE0_801B68D4[];
extern Gfx* D_EBFBE0_801B68F8[];
extern s32 D_EBFBE0_801B6B24[]; // data
extern f32 D_EBFBE0_801B6B30;
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
extern Vec3f D_EBFBE0_801CE960[]; // pos of something
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
extern s32 D_EBFBE0_801CEEAC;
extern Vec3f D_EBFBE0_801CEEB0; // bss
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

extern u8 D_600D590[];
extern Gfx D_601D1F0[];
extern u8 D_601DC10[];
extern u16 D_601DC90[];
extern u8 D_601DCA0[];
extern u16 D_601DCD8[];
extern Gfx D_6047E70[];
extern u8 D_6047F80[];
extern u8 D_6048F80[];
extern Gfx D_604C350[];
extern Gfx D_604C540[];
extern Gfx D_604CDE0[];
extern Gfx D_604D680[];
extern Gfx D_605A120[];

extern s32 D_EBFBE0_801CD810;
extern f32 D_EBFBE0_801CEA78;
extern f32 D_EBFBE0_801CEA7C;
extern f32 D_EBFBE0_801CEA80;
extern f32 D_EBFBE0_801CEA84;
extern f32 D_EBFBE0_801CEA88;
extern f32 D_EBFBE0_801CEA8C;
extern f32 D_EBFBE0_801CEA90;
extern f32 D_EBFBE0_801CEA94;
extern s32 D_EBFBE0_801CEA98;
extern f32 D_EBFBE0_801CEA9C;

void func_EBFBE0_8019E800(void);
void func_EBFBE0_8019E99C(void);
void func_EBFBE0_8019FF48(void);
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
void func_EBFBE0_801AD048(void);

void func_EBFBE0_8019E800(void) {
    Memory_FreeAll();
    func_800A5D6C();
    D_80178410 = 0;
    gNextGameState = 4;
    D_80161A34 = 5;
    D_80177868 = 2;
    gDrawMode = DRAWMODE_0;
}

void func_EBFBE0_8019E85C(void) {
    switch (D_80177868) {
        case 0:
            if (D_Timer_8017783C == 0) {
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
            if (D_Timer_8017783C == 0) {
                D_80177B40 = 1;
            }
            break;

        case 1:
            gDrawMode = DRAWMODE_0;
            func_EBFBE0_8019E99C();
            break;

        case 2:
            gDrawMode = DRAWMODE_3;
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

bool func_EBFBE0_8019FD1C(LevelId levelId, s32 arg1) {
    s32 ret;
    s32 planetSaveSlot;

    switch (levelId) {
        case LEVEL_METEO:
            planetSaveSlot = PLANET_METEO;
            break;

        case LEVEL_AREA_6:
            planetSaveSlot = PLANET_AREA_6;
            break;

        case LEVEL_BOLSE:
            planetSaveSlot = PLANET_BOLSE;
            break;

        case LEVEL_SECTOR_Z:
            planetSaveSlot = PLANET_SECTOR_Z;
            break;

        case LEVEL_SECTOR_X:
            planetSaveSlot = PLANET_SECTOR_X;
            break;

        case LEVEL_SECTOR_Y:
            planetSaveSlot = PLANET_SECTOR_Y;
            break;

        case LEVEL_KATINA:
            planetSaveSlot = PLANET_KATINA;
            break;

        case LEVEL_MACBETH:
            planetSaveSlot = PLANET_MACBETH;
            break;

        case LEVEL_ZONESS:
            planetSaveSlot = PLANET_ZONESS;
            break;

        case LEVEL_CORNERIA:
            planetSaveSlot = PLANET_CORNERIA;
            break;

        case LEVEL_TITANIA:
            planetSaveSlot = PLANET_TITANIA;
            break;

        case LEVEL_AQUAS:
            planetSaveSlot = PLANET_AQUAS;
            break;

        case LEVEL_FORTUNA:
            planetSaveSlot = PLANET_FORTUNA;
            break;

        case LEVEL_SOLAR:
            planetSaveSlot = SAVE_SLOT_SOLAR;
            break;

        case LEVEL_VENOM_1:
            planetSaveSlot = SAVE_SLOT_VENOM_1;
            break;

        case LEVEL_VENOM_2:
            planetSaveSlot = SAVE_SLOT_VENOM_2;
            break;

        case LEVEL_VENOM_ANDROSS:
            if (D_8017827C == 0) {
                planetSaveSlot = SAVE_SLOT_VENOM_1;
            } else {
                planetSaveSlot = SAVE_SLOT_VENOM_2;
            }
            break;
    }

    ret = false;

    switch (arg1) {
        case 0:
            if (!(gSaveFile.save.data.planet[planetSaveSlot].played & 1)) {
                gSaveFile.save.data.planet[planetSaveSlot].played = 1;
                ret = true;
            }
            break;

        case 1:
            if (gExpertMode) {
                if (!(gSaveFile.save.data.planet[planetSaveSlot].expertMedal & 1)) {
                    gSaveFile.save.data.planet[planetSaveSlot].expertMedal = 1;
                    ret = true;
                }
            } else {
                if (!(gSaveFile.save.data.planet[planetSaveSlot].normalMedal & 1)) {
                    gSaveFile.save.data.planet[planetSaveSlot].normalMedal = 1;
                    ret = true;
                }
            }
            break;

        case 2:
            if (gExpertMode) {
                if (!(gSaveFile.save.data.planet[planetSaveSlot].expertClear & 1)) {
                    gSaveFile.save.data.planet[planetSaveSlot].expertClear = 1;
                    ret = true;
                }
            } else {
                if (!(gSaveFile.save.data.planet[planetSaveSlot].normalClear & 1)) {
                    gSaveFile.save.data.planet[planetSaveSlot].normalClear = 1;
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

void func_EBFBE0_801A19A8(void) {
    s32 i;

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, (s32) D_EBFBE0_801CEA9C);

    for (i = 0; i < 4; i++) {
        TextureRect_8bIA(&gMasterDisp, D_600D590 + (i * 168 * 4), 168, 4, 72.0f, 104.0f + (4.0f * i), 1.0f, 1.0f);
    }
    TextureRect_8bIA(&gMasterDisp, D_600D590 + (168 * 16), 168, 3, 72.0f, 104.0f + 16.0f, 1.0f, 1.0f);
}

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
    D_Timer_8017783C = 2;
    gDrawMode = DRAWMODE_0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A4FC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A53C8.s")

s32 func_EBFBE0_801A5770(void) {
    bool ret = false;
    s8 y = gControllerPress[gMainController].stick_y;

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
        Audio_PlaySfx(0x49000002, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A5834.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A5C90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801A5E80.s")

void func_EBFBE0_801A61B4(LevelId level) {
    switch (level) {
        case LEVEL_CORNERIA:
            func_8001DC6C(0, 0);
            break;

        case LEVEL_METEO:
            func_8001DC6C(0, 1);
            break;

        case LEVEL_TITANIA:
            func_8001DC6C(0, 2);
            break;

        case LEVEL_AQUAS:
            func_8001DC6C(0, 12);
            break;

        case LEVEL_BOLSE:
            func_8001DC6C(0, 10);
            break;

        case LEVEL_KATINA:
            func_8001DC6C(0, 11);
            break;

        case LEVEL_AREA_6:
            func_8001DC6C(0, 5);
            break;

        case LEVEL_SECTOR_Z:
            func_8001DC6C(0, 13);
            break;

        case LEVEL_FORTUNA:
            func_8001DC6C(0, 8);
            break;

        case LEVEL_SECTOR_X:
            func_8001DC6C(0, 3);
            break;

        case LEVEL_MACBETH:
            func_8001DC6C(0, 14);
            break;

        case LEVEL_ZONESS:
            func_8001DC6C(0, 4);
            break;

        case LEVEL_SECTOR_Y:
            func_8001DC6C(0, 7);
            break;

        case LEVEL_SOLAR:
            func_8001DC6C(0, 521);

        default:
            break;
    }
}

bool func_EBFBE0_801A62FC(PlanetId planet) {
    u32 planetSaveSlot;
    s32 ret = true;

    switch (planet) {
        case PLANET_METEO:
        case PLANET_AREA_6:
        case PLANET_BOLSE:
        case PLANET_SECTOR_Z:
        case PLANET_SECTOR_X:
        case PLANET_SECTOR_Y:
        case PLANET_KATINA:
        case PLANET_MACBETH:
        case PLANET_ZONESS:
        case PLANET_CORNERIA:
        case PLANET_TITANIA:
        case PLANET_AQUAS:
        case PLANET_FORTUNA:
            planetSaveSlot = planet;
            break;

        case PLANET_SOLAR:
            planetSaveSlot = SAVE_SLOT_SOLAR;
            break;
    }

    if (gSaveFile.save.data.planet[planetSaveSlot].played & 1) {
        ret = false;
    }

    return ret;
}

void func_EBFBE0_801A6368(void) {
    switch (D_EBFBE0_801CD954) {
        case PLANET_CORNERIA:
            gCurrentLevel = LEVEL_CORNERIA;
            break;

        case PLANET_METEO:
            gCurrentLevel = LEVEL_METEO;
            break;

        case PLANET_TITANIA:
            gCurrentLevel = LEVEL_TITANIA;
            break;

        case PLANET_AQUAS:
            gCurrentLevel = LEVEL_AQUAS;
            break;

        case PLANET_BOLSE:
            gCurrentLevel = LEVEL_BOLSE;
            break;

        case PLANET_KATINA:
            gCurrentLevel = LEVEL_KATINA;
            break;

        case PLANET_AREA_6:
            gCurrentLevel = LEVEL_AREA_6;
            break;

        case PLANET_SECTOR_Z:
            gCurrentLevel = LEVEL_SECTOR_Z;
            break;

        case PLANET_FORTUNA:
            gCurrentLevel = LEVEL_FORTUNA;
            break;

        case PLANET_SECTOR_X:
            gCurrentLevel = LEVEL_SECTOR_X;
            break;

        case PLANET_MACBETH:
            gCurrentLevel = LEVEL_MACBETH;
            break;

        case PLANET_ZONESS:
            gCurrentLevel = LEVEL_ZONESS;
            break;

        case PLANET_SECTOR_Y:
            gCurrentLevel = LEVEL_SECTOR_Y;
            break;

        case PLANET_VENOM:
            gCurrentLevel = LEVEL_VENOM_1;
            break;

        case PLANET_SOLAR:
            gCurrentLevel = LEVEL_SOLAR;

        default:
            break;
    }
}

PlanetId func_EBFBE0_801A6480(LevelId level) {
    PlanetId planet;

    switch (level) {
        case LEVEL_CORNERIA:
            planet = PLANET_CORNERIA;
            break;

        case LEVEL_METEO:
            planet = PLANET_METEO;
            break;

        case LEVEL_TITANIA:
            planet = PLANET_TITANIA;
            break;

        case LEVEL_AQUAS:
            planet = PLANET_AQUAS;
            break;

        case LEVEL_BOLSE:
            planet = PLANET_BOLSE;
            break;

        case LEVEL_KATINA:
            planet = PLANET_KATINA;
            break;

        case LEVEL_AREA_6:
            planet = PLANET_AREA_6;
            break;

        case LEVEL_SECTOR_Z:
            planet = PLANET_SECTOR_Z;
            break;

        case LEVEL_FORTUNA:
            planet = PLANET_FORTUNA;
            break;

        case LEVEL_SECTOR_X:
            planet = PLANET_SECTOR_X;
            break;

        case LEVEL_MACBETH:
            planet = PLANET_MACBETH;
            break;

        case LEVEL_ZONESS:
            planet = PLANET_ZONESS;
            break;

        case LEVEL_SECTOR_Y:
            planet = PLANET_SECTOR_Y;
            break;

        case LEVEL_VENOM_1:
        case LEVEL_VENOM_ANDROSS:
        case LEVEL_VENOM_2:
            planet = PLANET_VENOM;
            break;

        case LEVEL_SOLAR:
            planet = PLANET_SOLAR;
    }

    return planet;
}

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
    func_8001A838(0x1100004C);
    func_8001A838(0x1100204C);

    if (D_EBFBE0_801CD954 != 9) {
        Audio_PlaySfx(0x49000003, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    D_EBFBE0_801CEFC8 = 0;
    D_EBFBE0_801CD944 = 2;
    D_EBFBE0_801CD948 = 0;
}

void func_EBFBE0_801A6628(void) {
    gGameState = 7;
    D_Timer_8017783C = 2;
    D_80177854 = 0;
    gDrawMode = DRAWMODE_0;
    gHitCount = 0;

    func_800A5844();

    D_80177CA0 = 0;
    D_80177CB0 = 0.0f;
    D_8017782C = 1;
}

void func_EBFBE0_801A6694(void) {
    s32 i;
    Vec3f dest;
    Vec3f src;

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 0.0f;

    for (i = 0; i < 15; i++) {
        Matrix_Push(&gGfxMatrix);

        Matrix_RotateY(gGfxMatrix, M_DTOR * planet[i].unk_1C, 1);
        Matrix_Translate(gGfxMatrix, planet[i].unk_04, planet[i].unk_08, 0.0f, 1);

        Matrix_RotateY(gGfxMatrix, M_DTOR * -planet[i].unk_1C, 1);

        func_EBFBE0_801AD048();

        Matrix_SetGfxMtx(&gMasterDisp);

        Matrix_Copy(&D_EBFBE0_801CDA60[i], gGfxMatrix);

        Matrix_MultVec3f(gGfxMatrix, &src, &dest);

        planet[i].posX = dest.x;
        planet[i].posY = dest.y;
        planet[i].posZ = dest.z;

        Matrix_Pop(&gGfxMatrix);

        Matrix_Push(&gGfxMatrix);

        Matrix_LookAt(gGfxMatrix, D_EBFBE0_801CD9F4, D_EBFBE0_801CD9F8, D_EBFBE0_801CD9FC, D_EBFBE0_801CDA00,
                      D_EBFBE0_801CDA04, D_EBFBE0_801CDA08, D_EBFBE0_801CDA20, D_EBFBE0_801CDA24, D_EBFBE0_801CDA28, 1);
        Matrix_Translate(gGfxMatrix, D_EBFBE0_801CEA58, D_EBFBE0_801CEA5C, D_EBFBE0_801CEA60, 1);
        Matrix_Mult(gGfxMatrix, &D_EBFBE0_801CDA60[i], 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        Matrix_MultVec3f(gGfxMatrix, &src, &D_EBFBE0_801CE960[i]);

        Matrix_Pop(&gGfxMatrix);
    }
}

void func_EBFBE0_801A68E4(void) {
    s32 i;
    s32 j;
    s32 var_a0;

    for (i = 0; i < 14; i++) {
        for (j = i; j < 15; j++) {
            if (D_EBFBE0_801CE960[D_EBFBE0_801CD8A0[i]].z > D_EBFBE0_801CE960[D_EBFBE0_801CD8A0[j]].z) {
                var_a0 = D_EBFBE0_801CD8A0[i];
                D_EBFBE0_801CD8A0[i] = D_EBFBE0_801CD8A0[j];
                D_EBFBE0_801CD8A0[j] = var_a0;
            }
        }
    }
}

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

s32 func_EBFBE0_801A6DAC(PlanetId planetId) {
    s32 ret;
    s32 planetSaveSlot;
    s32 var_v0;
    s32 var_a0;

    if (planetId == PLANET_VENOM) {
        if (gExpertMode) {
            var_v0 = gSaveFile.save.data.planet[SAVE_SLOT_VENOM_2].expertMedal & 1;
            var_a0 = gSaveFile.save.data.planet[SAVE_SLOT_VENOM_1].expertClear & 1 |
                     gSaveFile.save.data.planet[SAVE_SLOT_VENOM_2].expertClear & 1;
        } else {
            var_v0 = gSaveFile.save.data.planet[SAVE_SLOT_VENOM_2].normalMedal & 1;
            var_a0 = gSaveFile.save.data.planet[SAVE_SLOT_VENOM_1].normalClear & 1 |
                     gSaveFile.save.data.planet[SAVE_SLOT_VENOM_2].normalClear & 1;
        }
    } else {
        planetSaveSlot = planetId;

        if (planetId == PLANET_SOLAR) {
            planetSaveSlot = SAVE_SLOT_SOLAR;
        }

        if (gExpertMode) {
            var_v0 = gSaveFile.save.data.planet[planetSaveSlot].expertMedal & 1;
            var_a0 = gSaveFile.save.data.planet[planetSaveSlot].expertClear & 1;
        } else {
            var_v0 = gSaveFile.save.data.planet[planetSaveSlot].normalMedal & 1;
            var_a0 = gSaveFile.save.data.planet[planetSaveSlot].normalClear & 1;
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

void func_EBFBE0_801A6EC0(s32 planetId) {
    f32 dirX;
    f32 dirY;
    f32 dirZ;
    Vec3f dst;
    Vec3f src;
    f32 x1;
    f32 y1;
    f32 x2;
    f32 y2;
    f32 z2;

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 0.0f;

    Matrix_Push(&gGfxMatrix);

    Matrix_Mult(gGfxMatrix, &D_EBFBE0_801CDA60[planetId], 1);

    if (planet[planetId].unk_28 == 2) {
        if (planetId == 2) {
            Matrix_RotateX(gGfxMatrix, M_DTOR * D_EBFBE0_801AFFF8, 1);
            Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801AFFF4, 1);
        } else {
            Matrix_RotateX(gGfxMatrix, M_DTOR * D_EBFBE0_801B0000, 1);
            Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801AFFFC, 1);
        }
    }

    Matrix_RotateZ(gGfxMatrix, M_DTOR * (planet[planetId].zAngle), 1);

    Matrix_Scale(gGfxMatrix, planet[planetId].scale, planet[planetId].scale, planet[planetId].scale, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    if (planet[planetId].unk_28 == 2) {
        x2 = D_EBFBE0_801CE960[14].x - D_EBFBE0_801CE960[planetId].x;
        y2 = D_EBFBE0_801CE960[14].y - D_EBFBE0_801CE960[planetId].y;
        z2 = D_EBFBE0_801CE960[14].z - D_EBFBE0_801CE960[planetId].z;

        x1 = Math_Atan2F(y2, sqrtf(SQ(x2) + SQ(z2)));
        y1 = -Math_Atan2F(x2, z2);

        src.x = 0.0f;
        src.y = 0.0f;
        src.z = 100.0f;

        Matrix_RotateY(gCalcMatrix, M_DTOR * (-D_EBFBE0_801CDA10 - y1), 0);
        Matrix_RotateX(gCalcMatrix, M_DTOR * (-D_EBFBE0_801CDA0C - x1), 1);

        Matrix_MultVec3f(gCalcMatrix, &src, &dst);

        dirX = dst.x;
        dirY = dst.y;
        dirZ = dst.z;
        Lights_SetOneLight(&gMasterDisp, dirX, dirY, dirZ, 80, 80, 60, 10, 10, 8);
    }

    Matrix_Copy(&D_EBFBE0_801CDE20[planetId], gGfxMatrix);

    Matrix_Pop(&gGfxMatrix);

    D_EBFBE0_801AFFF4 += 0.1f;
    D_EBFBE0_801AFFFC -= 0.09f;
}

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
    static f32 D_EBFBE0_801B6A74 = 0.0f;
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
        func_EBFBE0_801AD7EC(254, 16, gLifeCount[gPlayerNum]);
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

#ifndef IMPORT_DATA
extern f32 D_EBFBE0_801B6B00; // likely in-function static
extern f32 D_EBFBE0_801B6B04; // likely in-function static
extern f32 D_EBFBE0_801B6B08; // likely in-function static
#endif

void func_EBFBE0_801AB17C(f32 x, f32 y, f32 z) {
#ifdef IMPORT_DATA
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

#ifndef IMPORT_DATA

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B750C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B7510.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/D_EBFBE0_801B7514.s")

#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AB978.s")

void func_EBFBE0_801ABCDC(s32 arg0, s32 alpha) {
#ifdef IMPORT_DATA
    static s32 D_EBFBE0_801B6B24[] = { 81.0f, 125.0f, 170.0f };
#endif

    Matrix_Push(&gGfxMatrix);

    Matrix_LookAt(gGfxMatrix, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -400.0f, 0.0f, 1.0f, 0.0f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    RCP_SetupDL(&gMasterDisp, 0x29);

    gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, D_EBFBE0_801B6B24[arg0], -35.0f, -400.0f, 1);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * -40.0f, 1);
    Matrix_Scale(gGfxMatrix, 0.3f, 0.3f, 1.0f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_500B600);

    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, D_EBFBE0_801B6B24[arg0], -35.0f, -400.0f, 1);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * 40.0f, 1);
    Matrix_Scale(gGfxMatrix, 0.3f, 0.3f, 1.0f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_500B600);

    Matrix_Pop(&gGfxMatrix);
    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_801ABF1C(void) {
    Matrix_Push(&gGfxMatrix);
    {
        Matrix_LookAt(gGfxMatrix, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -400.0f, 0.0f, 1.0f, 0.0f, 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        RCP_SetupDL(&gMasterDisp, 0x15);

        Matrix_Push(&gGfxMatrix);
        {
            Matrix_Translate(gGfxMatrix, D_EBFBE0_801CEA88, D_EBFBE0_801CEA8C, D_EBFBE0_801CEA90, 1);
            Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801CEA94, 1);

            func_EBFBE0_801AD048();

            Matrix_Scale(gGfxMatrix, D_EBFBE0_801CEA78, D_EBFBE0_801CEA7C, 1.0f, 1);

            Matrix_SetGfxMtx(&gMasterDisp);

            gSPDisplayList(gMasterDisp++, D_EBFBE0_801AFA30[D_EBFBE0_801CD810]);

            Matrix_SetGfxMtx(&gMasterDisp);

            gSPDisplayList(gMasterDisp++, D_605A120);
        }
        Matrix_Pop(&gGfxMatrix);

        RCP_SetupDL(&gMasterDisp, 0x43);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 32, 32, 255, D_EBFBE0_801CEA98);
        gDPSetEnvColor(gMasterDisp++, 207, 207, 255, 0);

        Matrix_Push(&gGfxMatrix);
        {
            Matrix_Translate(gGfxMatrix, D_EBFBE0_801CEA88, D_EBFBE0_801CEA8C - 1.5f, D_EBFBE0_801CEA90, 1);
            Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801CEA94, 1);

            func_EBFBE0_801AD048();

            Matrix_Scale(gGfxMatrix, D_EBFBE0_801CEA80, D_EBFBE0_801CEA84, 3.3f, 1);

            Matrix_SetGfxMtx(&gMasterDisp);

            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            gSPDisplayList(gMasterDisp++, D_604C350);
            gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
        }
        Matrix_Pop(&gGfxMatrix);
    }
    Matrix_Pop(&gGfxMatrix);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AC200.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AC530.s")

// needs in-function static
#ifdef IMPORT_DATA
void func_EBFBE0_801AC80C(s32 arg0) {
    static f32 D_EBFBE0_801B6B30 = 0.0f;
    s32 r;
    s32 g;
    s32 b;

    if (arg0 == 3) {
        r = 240;
        g = 160;
        b = 0;
    } else {
        r = 128;
        g = 0;
        b = 0;
    }

    RCP_SetupDL(&gMasterDisp, 0x43);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 80, D_EBFBE0_801CEEAC);
    gDPSetEnvColor(gMasterDisp++, r, g, b, 0);

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, D_EBFBE0_801CEEB0.x, D_EBFBE0_801CEEB0.y, D_EBFBE0_801CEEB0.z, 1);

    func_EBFBE0_801AD048();

    Matrix_RotateZ(gGfxMatrix, M_DTOR * D_EBFBE0_801B6B30, 1);
    Matrix_Scale(gGfxMatrix, 10.0f, 10.0f, 10.0f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_604D680);

    Matrix_Pop(&gGfxMatrix);

    D_EBFBE0_801B6B30 -= 45.0f;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/ED6EC0/func_EBFBE0_801AC80C.s")
#endif

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

void func_EBFBE0_801AD718(f32 arg0, f32 arg1, f32 arg2, f32* arg3, f32* arg4, f32* arg5, f32 arg6, f32 arg7, f32 arg8) {
    Vec3f sp2C;
    Vec3f sp20;

    sp20.x = 0.0f;
    sp20.y = 0.0f;
    sp20.z = arg6;

    Matrix_Translate(gCalcMatrix, arg0, arg1, arg2, 0);
    Matrix_RotateY(gCalcMatrix, M_DTOR * arg8, 1);
    Matrix_RotateX(gCalcMatrix, M_DTOR * arg7, 1);
    Matrix_MultVec3f(gCalcMatrix, &sp20, &sp2C);

    *arg3 = sp2C.x;
    *arg4 = sp2C.y;
    *arg5 = sp2C.z;
}

void func_EBFBE0_801AD7EC(s32 xPos, s32 yPos, s32 number) {
    RCP_SetupDL(&gMasterDisp, 0x55);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    TextureRect_4bCI(&gMasterDisp, D_601DC10, D_601DC90, 16, 16, xPos, yPos, 1.0f, 1.0f);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    TextureRect_4bCI(&gMasterDisp, D_601DCA0, D_601DCD8, 16, 7, xPos + 18.0f, yPos + 9.0f, 1.0f, 1.0f);

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    if (number >= 10) {
        Graphics_DisplaySmallNumber(xPos + 33.0f - ((func_8008BCBC(number) - 1) * 8) + 3, yPos + 8.0f, number);
    } else {
        Graphics_DisplaySmallNumber(xPos + 33.0f, yPos + 8.0f, number);
    }
}
