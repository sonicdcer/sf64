#include "global.h"
#include "fox_map.h"
#include "sf64level.h"

//! TODO: IMPORT BSS

typedef struct {
    /* 0x0 */ f32 angle;
    /* 0x4 */ f32 x;
    /* 0x8 */ f32 y;
    /* 0xC */ f32 scale;
} ObjPosition;

typedef struct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ char pad10[0x4];
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
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
} Planet; // size = 0x38

typedef struct {
    /* 0x0 */ u8* addr;
    /* 0x4 */ s32 width;
    /* 0x8 */ s32 height;
    /* 0xC */ f32 posX;
} Texture; // size = 0x10

s32 D_EBFBE0_801AF420[2] = { 10, 20 };

u16* D_EBFBE0_801AF428[15][2] = {
    gMsg_ID_1220, gMsg_ID_1230, gMsg_ID_1320, gMsg_ID_1330, gMsg_ID_1300, gMsg_ID_1310, gMsg_ID_1420, gMsg_ID_1430,
    gMsg_ID_1260, gMsg_ID_1270, gMsg_ID_1440, gMsg_ID_1450, gMsg_ID_1360, gMsg_ID_1370, gMsg_ID_1340, gMsg_ID_1350,
    gMsg_ID_1400, gMsg_ID_1410, gMsg_ID_1200, gMsg_ID_1210, gMsg_ID_1240, gMsg_ID_1250, gMsg_ID_1380, gMsg_ID_1390,
    gMsg_ID_1280, gMsg_ID_1290, NULL,         NULL,         gMsg_ID_1460, gMsg_ID_1470,
};

Planet planet[PLANET_MAX] = {
    /* PLANET_METEO */
    { 0, 1150.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -130.0f, 1.0f, 0, 0, PLANET_FORTUNA, -1, PLANET_KATINA },
    /* PLANET_AREA_6 */
    { 1, 1400.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -315.0f, 0.15f, 0, 2, -1, -1, -1 },
    /* PLANET_BOLSE */
    { 2, 1400.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -345.0f, 0.15f, 0, 2, -1, -1, -1 },
    /* PLANET_SECTOR_Z */
    { 3, 1125.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -285.0f, 2.5f * 2.0f, 0, 1, PLANET_BOLSE, PLANET_AREA_6, -1 },
    /* PLANET_SECTOR_X */
    { 4, 750.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -60.0f, 2.5f * 2.0f, 0, 1, PLANET_TITANIA, PLANET_MACBETH,
      PLANET_SECTOR_Z },
    /* PLANET_SECTOR_Y */
    { 5, 1125.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -190.0f, 2.5f * 2.0f, 0, 1, PLANET_KATINA, PLANET_AQUAS, -1 },
    /* PLANET_KATINA */
    { 6, 750.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -150.0f, 2.5f, 0, 4, PLANET_SECTOR_X, PLANET_SOLAR, -1 },
    /* PLANET_MACBETH */
    { 7, 825.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -330.0f, 2.5f, 0, 4, PLANET_BOLSE, PLANET_AREA_6, -1 },
    /* PLANET_ZONESS */
    { 8, 900.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -260.0f, 2.5f, 0, 4, PLANET_MACBETH, PLANET_SECTOR_Z, -1 },
    /* PLANET_CORNERIA */
    { 9, 1500.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f, -150.0f, 5.0f, 0, 4, PLANET_METEO, PLANET_SECTOR_Y, -1 },
    /* PLANET_TITANIA */
    { 10, 975.0f, 0.0f, -10.0f, 0.0f, 0.0f, 0.0f, -375.0f, 2.5f, 0, 4, PLANET_BOLSE, -1, -1 },
    /* PLANET_AQUAS */
    { 11, 900.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -220.0f, 2.5f, 0, 4, PLANET_ZONESS, -1, -1 },
    /* PLANET_FORTUNA */
    { 12, 975.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -105.0f, 2.5f, 0, 4, PLANET_SECTOR_X, PLANET_SOLAR, -1 },
    /* PLANET_VENOM */
    { 13, 1800.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -330.0f, 9.0f, 0, 4, -1, -1, -1 },
    /* PLANET_SOLAR */
    { 14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 10.0f, 0, 3, PLANET_MACBETH, -1, -1 },
};

// unused
PlanetId D_EBFBE0_801AF7E8[] = {
    PLANET_CORNERIA, PLANET_METEO,  PLANET_TITANIA, PLANET_SECTOR_X, PLANET_AQUAS,
    PLANET_BOLSE,    PLANET_VENOM,  PLANET_FORTUNA, PLANET_AREA_6,   PLANET_MACBETH,
    PLANET_SECTOR_Z, PLANET_ZONESS, PLANET_KATINA,  PLANET_SECTOR_Y, PLANET_SOLAR,
};

Gfx* D_EBFBE0_801AF824[4] = { D_604A710, D_604A400, D_604A190, D_6049F80 };

Texture D_EBFBE0_801AF834[14] = {
    { D_6007B90, 128, 28, 95.0f }, { D_60030D0, 96, 28, 110.0f },  { D_60131A0, 176, 12, 73.0f },
    { D_6009AD0, 168, 28, 77.0f }, { D_600B9B0, 168, 28, 74.0f },  { D_6001C80, 96, 13, 106.0f },
    { D_6011660, 176, 12, 75.0f }, { D_6010010, 112, 13, 109.0f }, { D_6017640, 112, 28, 101.0f },
    { D_6015CE0, 96, 28, 108.0f }, { D_600E210, 160, 28, 78.0f },  { D_6014360, 176, 12, 73.0f },
    { D_6004AC0, 168, 19, 72.0f }, { D_6006320, 104, 28, 105.0f },
};

Texture D_EBFBE0_801AF914[] = {
    { D_6008990, 232, 19, 46.0f }, { D_6003B50, 208, 19, 56.0f }, { D_60139E0, 128, 19, 98.0f },
    { D_600AD30, 168, 19, 77.0f }, { D_600CC10, 128, 19, 95.0f }, { D_6002160, 208, 19, 57.0f },
    { D_6011EA0, 256, 19, 40.0f }, { D_60105C0, 224, 19, 49.0f }, { D_6018280, 184, 19, 70.0f },
    { D_6016760, 200, 18, 61.0f }, { D_600F390, 168, 19, 75.0f }, { D_6014BA0, 232, 19, 43.0f },
    { D_6005740, 160, 19, 81.0f }, { D_6006E80, 176, 19, 70.0f },
};

char* sPlanetNames[] = {
    "ME", "A6", "BO", "SZ", "SX", "SY", "KA", "MA", "ZO", "CO", "TI", "AQ", "FO", "VE", "SO",
};

Gfx* D_EBFBE0_801AFA30[2] = {
    D_6055F20,
    D_6051D20,
};

ObjPosition D_EBFBE0_801AFA38[] = {
    { -491.0f, 1170.0f, 20.0f, 0.71f },  { -488.0f, 1135.0f, 15.0f, 0.6f },   { -496.0f, 1090.0f, 0.0f, 0.50f },
    { -489.0f, 1200.0f, 0.0f, 0.6f },    { -489.0f, 1150.0f, -15.0f, 0.80f }, { -487.0f, 1143.0f, -15.0f, 0.8f },
    { -493.0f, 1182.0f, -20.0f, 0.90f }, { -491.0f, 1080.0f, -25.0f, 0.8f },  { -497.0f, 1114.0f, -25.0f, 0.70f },
    { -497.0f, 1164.0f, -20.0f, 0.9f },  { -485.0f, 1206.0f, 15.0f, 1.10f },  { -488.0f, 1213.0f, -20.0f, 1.1f },
    { -485.0f, 1257.0f, 0.0f, 1.10f },   { -491.0f, 1213.0f, -20.0f, 0.9f },  { -484.0f, 1295.0f, 0.0f, 0.80f },
    { -487.0f, 1277.0f, 20.0f, 0.8f },   { -485.0f, 1310.0f, 25.0f, 0.70f },  { -485.0f, 1331.0f, 0.0f, 0.8f },
    { -493.0f, 1118.0f, 15.0f, 0.80f },  { -494.0f, 1068.0f, 30.0f, 0.6f },   { -504.0f, 1018.0f, -30.0f, 0.50f },
    { -492.0f, 1071.0f, -10.0f, 0.6f },  { -494.0f, 1164.0f, -10.0f, 0.50f }, { -498.0f, 1091.0f, 0.0f, 0.5f },
    { -493.0f, 1082.0f, 0.0f, 0.60f },   { -498.0f, 1141.0f, 15.0f, 0.7f },   { -498.0f, 1034.0f, 15.0f, 0.70f },
    { -504.0f, 1041.0f, 20.0f, 0.8f },   { -507.0f, 1076.0f, 25.0f, 0.70f },  { -504.0f, 1092.0f, 0.0f, 0.8f },
    { -499.0f, 1076.0f, 20.0f, 1.00f },  { -519.0f, 1084.0f, -15.0f, 1.0f },  { -506.0f, 1133.0f, 20.0f, 1.10f },
    { -502.0f, 1144.0f, 0.0f, 1.0f },    { -514.0f, 1109.0f, -10.0f, 0.90f }, { -521.0f, 1136.0f, -20.0f, 0.8f },
    { -511.0f, 1052.0f, 20.0f, 0.80f },  { -515.0f, 1142.0f, -25.0f, 0.6f },  { -518.0f, 1138.0f, -20.0f, 0.80f },
    { -512.0f, 1099.0f, -15.0f, 0.5f },  { -523.0f, 1179.0f, -30.0f, 0.70f }, { -519.0f, 1176.0f, -30.0f, 0.5f },
};

ObjPosition D_EBFBE0_801AFCD8[4] = {
    { 50.0f, 1410.0f, 40.0f, 0.10f },
    { 35.0f, 1235.0f, 40.0f, 0.03f },
    { 42.0f, 1270.0f, 60.0f, 0.05f },
    { 35.0f, 1280.0f, 20.0f, 0.05f },
};

UnkStruct_D_EBFBE0_801AFD18 D_EBFBE0_801AFD18[24] = {
    { 0, PLANET_CORNERIA, PLANET_METEO, 5, 0, 0, 0 },   { 0, PLANET_METEO, PLANET_FORTUNA, 5, 0, 0, 0 },
    { 0, PLANET_FORTUNA, PLANET_SECTOR_X, 5, 0, 0, 0 }, { 0, PLANET_SECTOR_X, PLANET_TITANIA, 5, 0, 0, 0 },
    { 0, PLANET_TITANIA, PLANET_BOLSE, 5, 0, 0, 0 },    { 0, PLANET_KATINA, PLANET_SECTOR_X, 5, 0, 0, 0 },
    { 0, PLANET_MACBETH, PLANET_BOLSE, 5, 0, 0, 0 },    { 0, PLANET_SECTOR_Z, PLANET_BOLSE, 5, 0, 0, 0 },
    { 0, PLANET_BOLSE, PLANET_VENOM, 5, 0, 0, 0 },      { 1, PLANET_SECTOR_Y, PLANET_KATINA, 5, 0, 0, 0 },
    { 1, PLANET_KATINA, PLANET_SOLAR, 5, 0, 0, 0 },     { 1, PLANET_SOLAR, PLANET_MACBETH, 5, 0, 0, 0 },
    { 1, PLANET_SECTOR_X, PLANET_MACBETH, 5, 0, 0, 0 }, { 1, PLANET_FORTUNA, PLANET_SOLAR, 5, 0, 0, 0 },
    { 1, PLANET_ZONESS, PLANET_MACBETH, 5, 0, 0, 0 },   { 2, PLANET_CORNERIA, PLANET_SECTOR_Y, 5, 0, 0, 0 },
    { 2, PLANET_SECTOR_Y, PLANET_AQUAS, 5, 0, 0, 0 },   { 2, PLANET_AQUAS, PLANET_ZONESS, 5, 0, 0, 0 },
    { 2, PLANET_ZONESS, PLANET_SECTOR_Z, 5, 0, 0, 0 },  { 2, PLANET_SECTOR_Z, PLANET_AREA_6, 5, 0, 0, 0 },
    { 2, PLANET_MACBETH, PLANET_AREA_6, 5, 0, 0, 0 },   { 2, PLANET_AREA_6, PLANET_VENOM, 5, 0, 0, 0 },
    { 3, PLANET_METEO, PLANET_KATINA, 5, 0, 0, 0 },     { 4, PLANET_SECTOR_X, PLANET_SECTOR_Z, 10, 0, 0, 0 },
};

f32 D_EBFBE0_801AFFB8[] = {
    90.0f, 170.0f, 130.0f, 100.0f, 100.0f, 100.0f, 80.0f, 80.0f, 80.0f, 150.0f, 80.0f, 80.0f, 80.0f, 270.0f, 250.0f,
};

f32 D_EBFBE0_801AFFF4 = 0.0f; // yRot of something
f32 D_EBFBE0_801AFFF8 = 0.0f; // xRot of something
f32 D_EBFBE0_801AFFFC = 0.0f; // yRot of something
f32 D_EBFBE0_801B0000 = 0.0f; // xRot of something

s32 D_EBFBE0_801B0004[47] = {
    39, 35, 32, 30, 27, 26, 24, 22, 21, 20, 18, 17, 16, 15, 14, 13, 12, 12, 11, 10, 9, 9, 8, 8,
    7,  6,  6,  6,  5,  5,  4,  4,  4,  3,  3,  3,  3,  2,  2,  2,  2,  2,  2,  2,  2, 2, 1,
};

// Looks like a quarter of a circle
s32
    D_EBFBE0_801B00C0[47][96] = {
        { 0, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 11 },
        { 0, 2, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 15, 16, 17 },
        { 0,  2,  3,  4,  5,  6,  6,  7,  8,  8,  9,  9,  10, 10, 11, 11,
          12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 19, 20, 21 },
        { 0,  2,  4,  5,  5,  6,  7,  7,  8,  9,  9,  10, 10, 11, 11, 12, 12, 13,
          13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 21, 22, 23, 24 },
        { 0,  3,  4,  5,  6,  7,  7,  8,  9,  9,  10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15,
          15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 23, 23, 24, 25, 26, 27, 28 },
        { 0,  3,  4,  5,  6,  7,  7,  8,  9,  9,  10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16,
          16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 25, 25, 26, 27, 28, 29 },
        { 0,  3,  4,  5,  6,  7,  8,  9,  9,  10, 10, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17,
          18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 27, 27, 28, 29, 30, 31, 32 },
        { 0,  3,  4,  6,  7,  7,  8,  9,  10, 10, 11, 11, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19,
          19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 29, 29, 30, 31, 32, 33, 34, 35 },
        { 0,  3,  5,  6,  7,  8,  8,  9,  10, 10, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19,
          20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 29, 29, 30, 31, 31, 32, 33, 34, 35, 37 },
        { 0,  3,  5,  6,  7,  8,  8,  9,  10, 11, 11, 12, 12, 13, 14, 14, 15, 15, 16,
          16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25,
          26, 26, 27, 27, 28, 28, 29, 29, 30, 31, 31, 32, 33, 34, 34, 35, 37, 38 },
        { 0,  3,  5,  6,  7,  8,  9,  10, 10, 11, 12, 12, 13, 13, 14, 15, 15, 16, 16, 17,
          17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27,
          27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 33, 33, 34, 35, 35, 36, 37, 38, 39, 41 },
        { 0,  3,  5,  6,  7,  8,  9,  10, 10, 11, 12, 12, 13, 14, 14, 15, 15, 16, 16, 17, 17,
          18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28,
          28, 29, 29, 30, 30, 31, 32, 32, 33, 33, 34, 35, 35, 36, 37, 38, 39, 40, 41, 42 },
        { 0,  3,  5,  6,  7,  8,  9,  10, 11, 11, 12, 13, 13, 14, 14, 15, 16, 16, 17, 17, 18, 18,
          19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29,
          30, 30, 31, 31, 32, 32, 33, 33, 34, 35, 35, 36, 37, 37, 38, 39, 40, 41, 42, 44 },
        { 0,  3,  5,  6,  7,  8,  9,  10, 11, 11, 12, 13, 13, 14, 15, 15, 16, 16, 17, 17, 18, 18,
          19, 20, 20, 21, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29,
          30, 30, 31, 31, 32, 32, 33, 34, 34, 35, 35, 36, 37, 37, 38, 39, 40, 40, 41, 42, 44, 45 },
        { 0,  3,  5,  6,  7,  8,  9,  10, 11, 12, 12, 13, 14, 14, 15, 15, 16, 17, 17, 18, 18, 19, 19,
          20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31,
          31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 37, 37, 38, 39, 39, 40, 41, 42, 43, 44, 45, 47 },
        { 0,  4,  5,  7,  8,  9,  9,  10, 11, 12, 13, 13, 14, 14, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20,
          21, 21, 22, 22, 23, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32,
          32, 33, 33, 34, 34, 35, 36, 36, 37, 37, 38, 39, 39, 40, 41, 41, 42, 43, 44, 45, 47, 48 },
        { 0,  4,  5,  7,  8,  9,  10, 10, 11, 12, 13, 13, 14, 15, 15, 16, 16, 17, 18, 18, 19, 19, 20, 20,
          21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32,
          33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 39, 39, 40, 41, 41, 42, 43, 44, 45, 46, 47, 48, 50 },
        { 0,  4,  5,  7,  8,  9,  10, 10, 11, 12, 13, 13, 14, 15, 15, 16, 16, 17, 18, 18, 19, 19, 20, 20,
          21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32,
          33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 39, 39, 40, 41, 41, 42, 43, 44, 45, 46, 47, 48, 50 },
        { 0,  4,  5,  7,  8,  9,  10, 11, 11, 12, 13, 14, 14, 15, 15, 16, 17, 17, 18, 18, 19, 19, 20, 21, 21,
          22, 22, 23, 23, 24, 24, 25, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33,
          34, 34, 35, 35, 36, 36, 37, 38, 38, 39, 39, 40, 41, 41, 42, 43, 43, 44, 45, 46, 47, 48, 49, 51 },
        { 0,  4,  5,  7,  8,  9,  10, 11, 12, 12, 13, 14, 14, 15, 16, 16, 17, 17, 18, 19, 19, 20, 20, 21, 21, 22,
          22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34, 34, 35,
          35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 41, 41, 42, 43, 43, 44, 45, 46, 46, 47, 48, 50, 51, 53 },
        { 0,  4,  6,  7,  8,  9,  10, 11, 12, 12, 13, 14, 15, 15, 16, 16, 17, 18, 18, 19, 19, 20, 20, 21, 22, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34, 34, 35,
          35, 36, 36, 37, 37, 38, 38, 39, 40, 40, 41, 41, 42, 43, 43, 44, 45, 45, 46, 47, 48, 49, 50, 51, 52, 54 },
        { 0,  4,  6,  7,  8,  9,  10, 11, 12, 12, 13, 14, 15, 15, 16, 16, 17, 18, 18, 19, 19, 20, 20, 21, 22, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34, 34, 35,
          35, 36, 36, 37, 37, 38, 38, 39, 40, 40, 41, 41, 42, 43, 43, 44, 45, 45, 46, 47, 48, 49, 50, 51, 52, 54 },
        { 0,  4,  6,  7,  8,  9,  10, 11, 12, 13, 13, 14, 15, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22, 22, 23,
          23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36,
          37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 43, 43, 44, 45, 45, 46, 47, 47, 48, 49, 50, 51, 52, 54, 56 },
        { 0,  4,  6,  7,  8,  9,  10, 11, 12, 13, 13, 14, 15, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22, 22, 23,
          23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36,
          37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 43, 43, 44, 45, 45, 46, 47, 47, 48, 49, 50, 51, 52, 54, 56 },
        { 0,  4,  6,  7,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 16, 17, 18, 18, 19, 19, 20,
          20, 21, 21, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 28, 29, 29, 30, 30,
          31, 31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41,
          42, 42, 43, 43, 44, 45, 45, 46, 47, 47, 48, 49, 50, 51, 52, 53, 54, 55, 57 },
        { 0,  4,  6,  7,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 16, 17, 18, 18, 19, 19, 20,
          21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31,
          31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41,
          42, 42, 43, 43, 44, 45, 45, 46, 47, 47, 48, 49, 49, 50, 51, 52, 53, 54, 55, 57, 58 },
        { 0,  4,  6,  7,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 16, 17, 18, 18, 19, 19, 20,
          21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31,
          31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41,
          42, 42, 43, 43, 44, 45, 45, 46, 47, 47, 48, 49, 49, 50, 51, 52, 53, 54, 55, 57, 58 },
        { 0,  4,  6,  7,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 16, 17, 18, 18, 19, 19, 20,
          21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31,
          31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41,
          42, 42, 43, 43, 44, 45, 45, 46, 47, 47, 48, 49, 49, 50, 51, 52, 53, 54, 55, 57, 58 },
        { 0,  4,  6,  7,  8,  10, 11, 11, 12, 13, 14, 15, 15, 16, 17, 17, 18, 19, 19, 20, 20, 21,
          21, 22, 22, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 30, 31, 31, 32,
          32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43,
          44, 44, 45, 45, 46, 47, 47, 48, 49, 49, 50, 51, 52, 52, 53, 54, 55, 57, 58, 60 },
        { 0,  4,  6,  7,  8,  10, 11, 11, 12, 13, 14, 15, 15, 16, 17, 17, 18, 19, 19, 20, 20, 21,
          21, 22, 22, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 30, 31, 31, 32,
          32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43,
          44, 44, 45, 45, 46, 47, 47, 48, 49, 49, 50, 51, 52, 52, 53, 54, 55, 57, 58, 60 },
        { 0,  4,  6,  7,  9,  10, 11, 12, 12, 13, 14, 15, 15, 16, 17, 17, 18, 19, 19, 20, 20, 21,
          22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32,
          33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43,
          44, 44, 45, 45, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 54, 55, 56, 57, 58, 59, 61 },
        { 0,  4,  6,  7,  9,  10, 11, 12, 12, 13, 14, 15, 15, 16, 17, 17, 18, 19, 19, 20, 20, 21,
          22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32,
          33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43,
          44, 44, 45, 45, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 54, 55, 56, 57, 58, 59, 61 },
        { 0,  4,  6,  7,  9,  10, 11, 12, 12, 13, 14, 15, 15, 16, 17, 17, 18, 19, 19, 20, 20, 21,
          22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32,
          33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43,
          44, 44, 45, 45, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 54, 55, 56, 57, 58, 59, 61 },
        { 0,  4,  6,  7,  9,  10, 11, 12, 13, 13, 14, 15, 16, 16, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          22, 23, 23, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 32, 33, 33,
          34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 58, 59, 61, 63 },
        { 0,  4,  6,  7,  9,  10, 11, 12, 13, 13, 14, 15, 16, 16, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          22, 23, 23, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 32, 33, 33,
          34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 58, 59, 61, 63 },
        { 0,  4,  6,  7,  9,  10, 11, 12, 13, 13, 14, 15, 16, 16, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          22, 23, 23, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 32, 33, 33,
          34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 58, 59, 61, 63 },
        { 0,  4,  6,  7,  9,  10, 11, 12, 13, 13, 14, 15, 16, 16, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          22, 23, 23, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 32, 33, 33,
          34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 58, 59, 61, 63 },
        { 0,  4,  6,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34,
          34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 57, 58, 60, 61, 62, 64 },
        { 0,  4,  6,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34,
          34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 57, 58, 60, 61, 62, 64 },
        { 0,  4,  6,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34,
          34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 57, 58, 60, 61, 62, 64 },
        { 0,  4,  6,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34,
          34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 57, 58, 60, 61, 62, 64 },
        { 0,  4,  6,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34,
          34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 57, 58, 60, 61, 62, 64 },
        { 0,  4,  6,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34,
          34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 57, 58, 60, 61, 62, 64 },
        { 0,  4,  6,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34,
          34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 57, 58, 60, 61, 62, 64 },
        { 0,  4,  6,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34,
          34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 57, 58, 60, 61, 62, 64 },
        { 0,  4,  6,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22,
          23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34,
          34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45,
          46, 46, 47, 47, 48, 49, 49, 50, 51, 51, 52, 53, 53, 54, 55, 56, 57, 57, 58, 60, 61, 62, 64 },
        { 0,  4,  6,  8,  9,  10, 11, 12, 13, 14, 14, 15, 16, 17, 17, 18, 19, 19, 20, 21, 21, 22, 22, 23,
          23, 24, 24, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 33, 34, 34, 35,
          35, 36, 36, 37, 37, 38, 38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45, 46, 46, 47,
          48, 48, 49, 49, 50, 51, 51, 52, 52, 53, 54, 55, 55, 56, 57, 58, 59, 60, 61, 62, 64, 66 },
    };

Vtx D_EBFBE0_801B4740[] = {
    { 0x001E, 0x001E, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x001E, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x0019, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x0019, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x0019, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x0019, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x0014, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x0014, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x0014, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x0014, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x000F, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x000F, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x000F, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x000F, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x000A, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x000A, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x000A, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x000A, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x0005, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x0005, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x0005, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x0005, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x0000, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0x0000, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFFB, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFFB, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFFB, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFFB, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFF6, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFF6, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFF6, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFF6, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFF1, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFF1, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFF1, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFF1, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFEC, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFEC, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFEC, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFEC, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFE7, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFE7, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFE7, 0x0000, 0x0000, 0x0C00, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFE7, 0x0000, 0x0000, 0x0000, 0x0000, 255, 255, 255, 255 },
    { 0xFFE2, 0xFFE2, 0x0000, 0x0000, 0x0000, 0x0100, 255, 255, 255, 255 },
    { 0x001E, 0xFFE2, 0x0000, 0x0000, 0x0C00, 0x0100, 255, 255, 255, 255 },
};

Gfx D_EBFBE0_801B4A40[] = {
    gsSPVertex(D_EBFBE0_801B4740, 16, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801B9410, G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 1], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 2], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 3], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[16], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 4], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 5], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 6], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 7], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[32], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 8], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 9], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 10], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801B9410[96 * 8 * 11], G_IM_FMT_IA, G_IM_SIZ_8b, 96, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

Gfx D_EBFBE0_801B4D70[] = {
    gsDPLoadTLUT_pal256(D_6026C90),
    gsSPVertex(D_EBFBE0_801B4740, 16, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801BB810, G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 1], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 2], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 3], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[16], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 4], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 5], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 6], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 7], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[32], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 8], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 9], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 10], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BB810[96 * 8 * 11], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

Gfx D_EBFBE0_801B50D8[] = {
    gsDPLoadTLUT_pal256(D_6029170),
    gsSPVertex(D_EBFBE0_801B4740, 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10, G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 1], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 2], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 3], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[16], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 4], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 5], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 6], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 7], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[32], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 8], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 9], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 10], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801BDC10[96 * 8 * 11], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

Gfx D_EBFBE0_801B5440[] = {
    gsDPLoadTLUT_pal256(D_6022340),
    gsSPVertex(D_EBFBE0_801B4740, 16, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801C0010, G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 1], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 2], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 3], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[16], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 4], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 5], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 6], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 7], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[32], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 8], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 9], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 10], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C0010[96 * 8 * 11], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

Gfx D_EBFBE0_801B57A8[] = {
    gsDPLoadTLUT_pal256(D_60247E0),
    gsSPVertex(D_EBFBE0_801B4740, 16, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801C2410, G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 1], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 2], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 3], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[16], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 4], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 5], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 6], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 7], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[32], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 8], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 9], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 10], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C2410[96 * 8 * 11], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

Gfx D_EBFBE0_801B5B10[] = {
    gsDPLoadTLUT_pal256(D_602FF60),
    gsSPVertex(D_EBFBE0_801B4740, 16, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801C4810, G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 1], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 2], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 3], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[16], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 4], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 5], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 6], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 7], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[32], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 8], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 9], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 10], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C4810[96 * 8 * 11], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

Gfx D_EBFBE0_801B5E78[] = {
    gsDPLoadTLUT_pal256(D_602B620),
    gsSPVertex(D_EBFBE0_801B4740, 16, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801C6C10, G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 1], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 2], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 3], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[16], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 4], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 5], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 6], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 7], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[32], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 8], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 9], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 10], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C6C10[96 * 8 * 11], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

Gfx D_EBFBE0_801B61E0[] = {
    gsDPLoadTLUT_pal256(D_602DAD0),
    gsSPVertex(D_EBFBE0_801B4740, 16, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801C9010, G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 1], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 2], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 3], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[16], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 4], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 5], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 6], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 7], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[32], 16, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 8], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 9], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 10], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(&D_EBFBE0_801C9010[96 * 8 * 11], G_IM_FMT_CI, G_IM_SIZ_8b, 96, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

Gfx D_EBFBE0_801B6548[] = {
    gsDPLoadTLUT_pal256(D_60323D0),
    gsSPVertex(D_EBFBE0_801B4740, 16, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410, G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 1), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 2), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 3), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[16], 16, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 4), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 5), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 6), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 7), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsSPVertex(&D_EBFBE0_801B4740[32], 16, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 8), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 9), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(5, 6, 7, 4, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 10), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 9, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(9, 10, 11, 8, 0),
    gsDPLoadTextureBlock(D_EBFBE0_801CB410 + (96 * 8 * 11), G_IM_FMT_CI, G_IM_SIZ_8b, 96, 8, 0,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                         G_TX_NOLOD),
    gsSP1Quadrangle(13, 14, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPEndDisplayList(),
};

void* D_EBFBE0_801B68B0[] = {
    D_EBFBE0_801C6C10, D_EBFBE0_801C9010, D_EBFBE0_801CB410, D_EBFBE0_801BB810, D_EBFBE0_801C4810,
    D_EBFBE0_801C0010, D_EBFBE0_801BDC10, D_EBFBE0_801C2410, D_EBFBE0_801B9410,
};

u8* D_EBFBE0_801B68D4[] = {
    D_6029220, D_602B6D0, D_602FFD0, D_6024890, D_602DB60, D_601FF40, D_6026D70, D_60223E0, D_60190B0,
};

Gfx* D_EBFBE0_801B68F8[] = {
    D_6060610,         D_601DE80,         D_604B750,         D_601F6B0,         D_601C0D0,
    D_601C960,         D_EBFBE0_801B5E78, D_EBFBE0_801B61E0, D_EBFBE0_801B6548, D_EBFBE0_801B4D70,
    D_EBFBE0_801B5B10, D_EBFBE0_801B5440, D_EBFBE0_801B50D8, D_EBFBE0_801B57A8, D_604DB10,
};

// BSS STARTS HERE

// #define IMPORT_BSS

/**
 * Problem: fox_option uses bss symbols from this file? i can't even compile this...
 */

#ifdef IMPORT_BSS
s8 D_EBFBE0_801B9410[96 * 96];
s8 D_EBFBE0_801BB810[96 * 96];
s8 D_EBFBE0_801BDC10[96 * 96];
s8 D_EBFBE0_801C0010[96 * 96];
s8 D_EBFBE0_801C2410[96 * 96];
s8 D_EBFBE0_801C4810[96 * 96];
s8 D_EBFBE0_801C6C10[96 * 96];
s8 D_EBFBE0_801C9010[96 * 96];
s8 D_EBFBE0_801CB410[96 * 96];
s32 D_EBFBE0_801CD810;
f32 D_EBFBE0_801CD818[];
s32 D_EBFBE0_801CD83C;
s32 D_EBFBE0_801CD840[24];
s32 D_EBFBE0_801CD8A0[15];
s32 D_EBFBE0_801CD8E0[7];
f32 D_EBFBE0_801CD9F4; // x
f32 D_EBFBE0_801CD9F8; // y
f32 D_EBFBE0_801CD9FC; // z
s32 D_EBFBE0_801CD900[15];
s32 D_EBFBE0_801CD93C;
s32 D_EBFBE0_801CD940;
s32 D_EBFBE0_801CD944; // mapState
s32 D_EBFBE0_801CD948;
s32 D_EBFBE0_801CD94C;
s32 D_EBFBE0_801CD950;
s32 D_EBFBE0_801CD954; // sCurrentPlanetId
s32 D_EBFBE0_801CD958;
s32 D_EBFBE0_801CD95C;
s32 D_EBFBE0_801CD960;
s32 D_EBFBE0_801CD964;
s32 D_EBFBE0_801CD968;
s32 D_EBFBE0_801CD96C;
s32 D_EBFBE0_801CD970;
s32 D_EBFBE0_801CD974;
s32 D_EBFBE0_801CD978;
s32 D_EBFBE0_801CD97C;
s32 D_EBFBE0_801CD980;
s32 D_EBFBE0_801CD984;
s32 D_EBFBE0_801CD988;
s32 D_EBFBE0_801CD98C;
s32 D_EBFBE0_801CD990;
s32 D_EBFBE0_801CD994;
s32 D_EBFBE0_801CD998;
f32 D_EBFBE0_801CD99C;
s32 D_EBFBE0_801CD9A0;
s32 D_EBFBE0_801CD9A4;
s32 D_EBFBE0_801CD9A8;
s32 D_EBFBE0_801CD9AC;
f32 D_EBFBE0_801CD9B0;
f32 D_EBFBE0_801CD9B4;
s32 D_EBFBE0_801CD9B8;
s32 D_EBFBE0_801CD9BC;
s32 D_EBFBE0_801CD9C0;
s32 D_EBFBE0_801CD9C4;
s32 D_EBFBE0_801CD9C8;
s32 D_EBFBE0_801CD9CC;
s32 D_EBFBE0_801CD9D0;
s32 D_EBFBE0_801CD9D4;
s32 D_EBFBE0_801CD9D8;
f32 D_EBFBE0_801CD9DC;
f32 D_EBFBE0_801CD9E0;
f32 D_EBFBE0_801CD9E4;
f32 D_EBFBE0_801CD9E8;
f32 D_EBFBE0_801CD9EC;
s32 D_EBFBE0_801CD9F0;
f32 D_EBFBE0_801CDA00; // x
f32 D_EBFBE0_801CDA04; // y
f32 D_EBFBE0_801CDA08; // z
f32 D_EBFBE0_801CDA0C; // camera x
f32 D_EBFBE0_801CDA10; // camera y
f32 D_EBFBE0_801CDA14;
f32 D_EBFBE0_801CDA18;
f32 D_EBFBE0_801CDA1C;
f32 D_EBFBE0_801CDA20;
f32 D_EBFBE0_801CDA24;
f32 D_EBFBE0_801CDA28;
f32 D_EBFBE0_801CDA2C;
f32 D_EBFBE0_801CDA30;
f32 D_EBFBE0_801CDA34;
f32 D_EBFBE0_801CDA38;
Vec3f D_EBFBE0_801CDA40;
Vec3f D_EBFBE0_801CDA50;
Matrix D_EBFBE0_801CDA60[];
Matrix D_EBFBE0_801CDE20[15]; // planet related
Matrix D_EBFBE0_801CE060;
Matrix D_EBFBE0_801CE1E0[15];
Matrix D_EBFBE0_801CE5A0[];
Vec3f D_EBFBE0_801CE960[]; // sPlanetsPositions
f32 D_EBFBE0_801CEA54;
f32 D_EBFBE0_801CEA64;
f32 D_EBFBE0_801CEA68;
f32 D_EBFBE0_801CEAA0;
f32 D_EBFBE0_801CEAA4;
f32 D_EBFBE0_801CEAA8;
f32 D_EBFBE0_801CEAAC;
f32 D_EBFBE0_801CEAB0;
s32 D_EBFBE0_801CEAB4;
f32 D_EBFBE0_801CEA18[];
f32 D_EBFBE0_801CEA58;
f32 D_EBFBE0_801CEA5C;
f32 D_EBFBE0_801CEA60;
f32 D_EBFBE0_801CEA6C;
f32 D_EBFBE0_801CEA70;
s32 D_EBFBE0_801CEA74;
f32 D_EBFBE0_801CEA78;
f32 D_EBFBE0_801CEA7C;
f32 D_EBFBE0_801CEA80;
f32 D_EBFBE0_801CEA84;
f32 D_EBFBE0_801CEA88;
f32 D_EBFBE0_801CEA8C;
f32 D_EBFBE0_801CEA90;
f32 D_EBFBE0_801CEA94;
s32 D_EBFBE0_801CEA98;
f32 D_EBFBE0_801CEA9C;
f32 D_EBFBE0_801CEAB8[];
f32 D_EBFBE0_801CEAF8[];
s32 D_EBFBE0_801CEB34;
s32 D_EBFBE0_801CEB38;
f32 D_EBFBE0_801CEB3C;
f32 D_EBFBE0_801CEB40;
s32 D_EBFBE0_801CEB48[3];
s32 D_EBFBE0_801CEB58[3][10];
s32 D_EBFBE0_801CEBD0[3][10];
f32 D_EBFBE0_801CEC48[3][10];
f32 D_EBFBE0_801CECC0[3][10];
f32 D_EBFBE0_801CED38[3][10];
f32 D_EBFBE0_801CEDB0[3][10];
f32 D_EBFBE0_801CEE28[3][10];
s32 D_EBFBE0_801CEEA0;
s32 D_EBFBE0_801CEEA4;
s32 D_EBFBE0_801CEEA8;
s32 D_EBFBE0_801CEEAC;
Vec3f D_EBFBE0_801CEEB0;
f32 D_EBFBE0_801CEEBC;
f32 D_EBFBE0_801CEEC0;
s32 D_EBFBE0_801CEEC4;
s32 D_EBFBE0_801CEEC8;
s32 D_EBFBE0_801CEECC;
s32 D_EBFBE0_801CEED0;
s32 D_EBFBE0_801CEED4;
s32 D_EBFBE0_801CEED8;
f32 D_EBFBE0_801CEEDC;
f32 D_EBFBE0_801CEEE0;
Vec3f D_EBFBE0_801CEEE8[9];
f32 D_EBFBE0_801CEF00;
f32 D_EBFBE0_801CEF04;
f32 D_EBFBE0_801CEF08;
f32 D_EBFBE0_801CEF30;
f32 D_EBFBE0_801CEF34;
f32 D_EBFBE0_801CEF38;
Vec3f D_EBFBE0_801CEF58[9];
s32 D_EBFBE0_801CEFC4;
s32 D_EBFBE0_801CEFC8;
s32 D_EBFBE0_801CEFCC;
s32 D_EBFBE0_801CEFD0;
s32 D_EBFBE0_801CEFD4;
bool D_EBFBE0_801CEFD8;
s32 D_EBFBE0_801CEFDC;
f32 D_EBFBE0_801CEFE0;
f32 D_EBFBE0_801CEFE8[3];
f32 D_EBFBE0_801CEFF4;
f32 D_EBFBE0_801CEFF8;
s32 D_EBFBE0_801CF000[];
s32 D_EBFBE0_801CF00C;
s32 D_EBFBE0_801CF010;
s32 D_EBFBE0_801CF014;
s32 D_EBFBE0_801CF018;
f32 D_EBFBE0_801CF020[8];
f32 D_EBFBE0_801CF040[8];
f32 D_EBFBE0_801CF060[8];
f32 D_EBFBE0_801CF080;
f32 D_EBFBE0_801CF088[8];
f32 D_EBFBE0_801CF0A8[8];
f32* D_EBFBE0_801CF0C8;
f32* D_EBFBE0_801CF0CC;
f32* D_EBFBE0_801CF0D0;
s32 D_EBFBE0_801CF0D8[8];
s32 D_EBFBE0_801CF0F8[8];
s32 D_EBFBE0_801CF118;
s32 D_EBFBE0_801CF11C;
s32 D_EBFBE0_801CF120;
f32 D_EBFBE0_801CF124;
#else
extern s32 D_EBFBE0_801CD810;
extern f32 D_EBFBE0_801CD818[];
extern s32 D_EBFBE0_801CD83C;
extern s32 D_EBFBE0_801CD840[24];
extern s32 D_EBFBE0_801CD8A0[15];
extern s32 D_EBFBE0_801CD8E0[7];
extern f32 D_EBFBE0_801CD9F4; // x
extern f32 D_EBFBE0_801CD9F8; // y
extern f32 D_EBFBE0_801CD9FC; // z
extern s32 D_EBFBE0_801CD900[15];
extern s32 D_EBFBE0_801CD93C;
extern s32 D_EBFBE0_801CD940;
extern s32 D_EBFBE0_801CD944; // mapState
extern s32 D_EBFBE0_801CD948;
extern s32 D_EBFBE0_801CD94C;
extern s32 D_EBFBE0_801CD950;
extern s32 D_EBFBE0_801CD954; // sCurrentPlanetId
extern s32 D_EBFBE0_801CD958;
extern s32 D_EBFBE0_801CD95C;
extern s32 D_EBFBE0_801CD960;
extern s32 D_EBFBE0_801CD964;
extern s32 D_EBFBE0_801CD968;
extern s32 D_EBFBE0_801CD96C;
extern s32 D_EBFBE0_801CD970;
extern s32 D_EBFBE0_801CD974;
extern s32 D_EBFBE0_801CD978;
extern s32 D_EBFBE0_801CD97C;
extern s32 D_EBFBE0_801CD980;
extern s32 D_EBFBE0_801CD984;
extern s32 D_EBFBE0_801CD988;
extern s32 D_EBFBE0_801CD98C;
extern s32 D_EBFBE0_801CD990;
extern s32 D_EBFBE0_801CD994;
extern s32 D_EBFBE0_801CD998;
extern f32 D_EBFBE0_801CD99C;
extern s32 D_EBFBE0_801CD9A0;
extern s32 D_EBFBE0_801CD9A4;
extern s32 D_EBFBE0_801CD9A8;
extern s32 D_EBFBE0_801CD9AC;
extern f32 D_EBFBE0_801CD9B0;
extern f32 D_EBFBE0_801CD9B4;
extern s32 D_EBFBE0_801CD9B8;
extern s32 D_EBFBE0_801CD9BC;
extern s32 D_EBFBE0_801CD9C0;
extern s32 D_EBFBE0_801CD9C4;
extern s32 D_EBFBE0_801CD9C8;
extern s32 D_EBFBE0_801CD9CC;
extern s32 D_EBFBE0_801CD9D0;
extern s32 D_EBFBE0_801CD9D4;
extern s32 D_EBFBE0_801CD9D8;
extern f32 D_EBFBE0_801CD9DC;
extern f32 D_EBFBE0_801CD9E0;
extern f32 D_EBFBE0_801CD9E4;
extern f32 D_EBFBE0_801CD9E8;
extern f32 D_EBFBE0_801CD9EC;
extern s32 D_EBFBE0_801CD9F0;
extern f32 D_EBFBE0_801CDA00; // x
extern f32 D_EBFBE0_801CDA04; // y
extern f32 D_EBFBE0_801CDA08; // z
extern f32 D_EBFBE0_801CDA0C; // camera x
extern f32 D_EBFBE0_801CDA10; // camera y
extern f32 D_EBFBE0_801CDA14;
extern f32 D_EBFBE0_801CDA18;
extern f32 D_EBFBE0_801CDA1C;
extern f32 D_EBFBE0_801CDA20;
extern f32 D_EBFBE0_801CDA24;
extern f32 D_EBFBE0_801CDA28;
extern f32 D_EBFBE0_801CDA2C;
extern f32 D_EBFBE0_801CDA30;
extern f32 D_EBFBE0_801CDA34;
extern f32 D_EBFBE0_801CDA38;
extern Vec3f D_EBFBE0_801CDA40;
extern Vec3f D_EBFBE0_801CDA50;
extern Matrix D_EBFBE0_801CDA60[];
extern Matrix D_EBFBE0_801CDE20[15]; // planet related
extern Matrix D_EBFBE0_801CE060;
extern Matrix D_EBFBE0_801CE1E0[15];
extern Matrix D_EBFBE0_801CE5A0[];
extern Vec3f D_EBFBE0_801CE960[]; // sPlanetsPositions
extern f32 D_EBFBE0_801CEA54;
extern f32 D_EBFBE0_801CEA64;
extern f32 D_EBFBE0_801CEA68;
extern f32 D_EBFBE0_801CEAA0;
extern f32 D_EBFBE0_801CEAA4;
extern f32 D_EBFBE0_801CEAA8;
extern f32 D_EBFBE0_801CEAAC;
extern f32 D_EBFBE0_801CEAB0;
extern s32 D_EBFBE0_801CEAB4;
extern f32 D_EBFBE0_801CEA18[];
extern f32 D_EBFBE0_801CEA58;
extern f32 D_EBFBE0_801CEA5C;
extern f32 D_EBFBE0_801CEA60;
extern f32 D_EBFBE0_801CEA6C;
extern f32 D_EBFBE0_801CEA70;
extern s32 D_EBFBE0_801CEA74;
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
extern f32 D_EBFBE0_801CEAB8[];
extern f32 D_EBFBE0_801CEAF8[];
extern s32 D_EBFBE0_801CEB34;
extern s32 D_EBFBE0_801CEB38;
extern f32 D_EBFBE0_801CEB3C;
extern f32 D_EBFBE0_801CEB40;
extern s32 D_EBFBE0_801CEB48[3];
extern s32 D_EBFBE0_801CEB58[3][10];
extern s32 D_EBFBE0_801CEBD0[3][10];
extern f32 D_EBFBE0_801CEC48[3][10];
extern f32 D_EBFBE0_801CECC0[3][10];
extern f32 D_EBFBE0_801CED38[3][10];
extern f32 D_EBFBE0_801CEDB0[3][10];
extern f32 D_EBFBE0_801CEE28[3][10];
extern s32 D_EBFBE0_801CEEA0;
extern s32 D_EBFBE0_801CEEA4;
extern s32 D_EBFBE0_801CEEA8;
extern s32 D_EBFBE0_801CEEAC;
extern Vec3f D_EBFBE0_801CEEB0;
extern f32 D_EBFBE0_801CEEBC;
extern f32 D_EBFBE0_801CEEC0;
extern s32 D_EBFBE0_801CEEC4;
extern s32 D_EBFBE0_801CEEC8;
extern s32 D_EBFBE0_801CEECC;
extern s32 D_EBFBE0_801CEED0;
extern s32 D_EBFBE0_801CEED4;
extern s32 D_EBFBE0_801CEED8;
extern f32 D_EBFBE0_801CEEDC;
extern f32 D_EBFBE0_801CEEE0;
extern Vec3f D_EBFBE0_801CEEE8[9];
extern f32 D_EBFBE0_801CEF00;
extern f32 D_EBFBE0_801CEF04;
extern f32 D_EBFBE0_801CEF08;
extern f32 D_EBFBE0_801CEF30;
extern f32 D_EBFBE0_801CEF34;
extern f32 D_EBFBE0_801CEF38;
extern Vec3f D_EBFBE0_801CEF58[9];
extern s32 D_EBFBE0_801CEFC4;
extern s32 D_EBFBE0_801CEFC8;
extern s32 D_EBFBE0_801CEFCC;
extern s32 D_EBFBE0_801CEFD0;
extern s32 D_EBFBE0_801CEFD4;
extern bool D_EBFBE0_801CEFD8;
extern s32 D_EBFBE0_801CEFDC;
extern f32 D_EBFBE0_801CEFE0;
extern f32 D_EBFBE0_801CEFE8[3];
extern f32 D_EBFBE0_801CEFF4;
extern f32 D_EBFBE0_801CEFF8;
extern s32 D_EBFBE0_801CF000[];
extern s32 D_EBFBE0_801CF00C;
extern s32 D_EBFBE0_801CF010;
extern s32 D_EBFBE0_801CF014;
extern s32 D_EBFBE0_801CF018;
extern f32 D_EBFBE0_801CF020[8];
extern f32 D_EBFBE0_801CF040[8];
extern f32 D_EBFBE0_801CF060[8];
extern f32 D_EBFBE0_801CF080;
extern f32 D_EBFBE0_801CF088[8];
extern f32 D_EBFBE0_801CF0A8[8];
extern f32* D_EBFBE0_801CF0C8;
extern f32* D_EBFBE0_801CF0CC;
extern f32* D_EBFBE0_801CF0D0;
extern s32 D_EBFBE0_801CF0D8[8];
extern s32 D_EBFBE0_801CF0F8[8];
extern s32 D_EBFBE0_801CF118;
extern s32 D_EBFBE0_801CF11C;
extern s32 D_EBFBE0_801CF120;
extern f32 D_EBFBE0_801CF124;

#endif

extern u8 D_5000500[];

extern u8 D_6000840[];
extern u8 D_6001080[];
extern u8 D_60018C0[];
extern u8 D_600D590[];
extern u8 D_6019030[];
extern Gfx D_601D1F0[];
extern u8 D_601DC10[];
extern u16 D_601DC90[];
extern Gfx D_601DCF0[];
extern u8 D_601DCA0[];
extern u16 D_601DCD8[];
extern Gfx D_601E9A0[];
extern u16 D_6044820[];
extern u16 D_6046AA0[];
extern u16 D_6046CD0[];
extern Gfx D_60479D0[];
extern Gfx D_6047E70[];
extern u8 D_6047F80[];
extern u8 D_6048F80[];
extern Gfx D_604C350[];
extern Gfx D_604C540[];
extern Gfx D_604CDE0[];
extern Gfx D_604D680[];
extern Gfx D_605A120[];

void func_EBFBE0_8019E800(void);
void func_EBFBE0_8019E99C(void);
void func_EBFBE0_8019F164(void);
void func_EBFBE0_8019F42C(void);
void func_EBFBE0_8019F600(void);
void func_EBFBE0_8019F910(void);
void func_EBFBE0_8019F97C(void);
void func_EBFBE0_8019F83C(void);
void func_EBFBE0_8019FA1C(void);
void func_EBFBE0_8019FC04(void);
s32 func_EBFBE0_8019FD1C(LevelId levelId, s32 arg1);
void func_EBFBE0_8019FF48(void);
s32 func_EBFBE0_801A05B4(void);
void func_EBFBE0_801A0788(void);
void func_EBFBE0_801A0954(void);
void func_EBFBE0_801A0D14(void);
void func_EBFBE0_801A1528(void);
void func_EBFBE0_801A116C(void);
void func_EBFBE0_801A19A8(void);
void func_EBFBE0_801A1C14(void);
bool func_EBFBE0_801A2304(void);
f32 func_EBFBE0_801A25C8(PlanetId);
void func_EBFBE0_801A2674(void);
void func_EBFBE0_801A281C(void);
void func_EBFBE0_801A2B8C(void);
void func_EBFBE0_801A2EB8(void);
void func_EBFBE0_801A3440(f32);
void func_EBFBE0_801A3550(Vec3f*, Vec3f*, Vec3f*, f32);
void func_EBFBE0_801A36A8(void);
void func_EBFBE0_801A3A00(void);
void func_EBFBE0_801A4394(void);
void func_EBFBE0_801A4650(void);
void func_EBFBE0_801A48C0(f32 speed);
void func_EBFBE0_801A4A38(f32 arg0);
void func_EBFBE0_801A4AE8(void);
void func_EBFBE0_801A4D0C(u32);
void func_EBFBE0_801A4D7C(void);
void func_EBFBE0_801A4F8C(void);
void func_EBFBE0_801A4FC4(void);
void func_EBFBE0_801A53C8(void);
void func_EBFBE0_801A5834(void);
void func_EBFBE0_801A5C90(void);
s32 func_EBFBE0_801A5770(void);
void func_EBFBE0_801A5E80(void);
void func_EBFBE0_801A6368(void);
void func_EBFBE0_801A61B4(LevelId level);
bool func_EBFBE0_801A62FC(PlanetId planet);
s32 func_EBFBE0_801A655C(s32 arg0, s32 arg1);
void func_EBFBE0_801A6628(void);
void func_EBFBE0_801A6694(void);
void func_EBFBE0_801A68E4(void);
void func_EBFBE0_801A6A24(void);
void func_EBFBE0_801A6A98(PlanetId);
s32 func_EBFBE0_801A6DAC(PlanetId planetId);
void func_EBFBE0_801A6EC0(PlanetId planetId);
void func_EBFBE0_801A7230(PlanetId planetId);
void func_EBFBE0_801A74F4(PlanetId);
void func_EBFBE0_801A7684(PlanetId planetId);
void func_EBFBE0_801A77B0(PlanetId planetId);
void func_EBFBE0_801A791C(PlanetId planetId);
void func_EBFBE0_801A7A84(PlanetId planetId);
void func_EBFBE0_801A7BEC(f32* zAngle, f32 next, f32 scale);
void func_EBFBE0_801A7D3C(PlanetId planetId);
void func_EBFBE0_801A7F1C(PlanetId planetId);
void func_EBFBE0_801A914C(void);
void func_EBFBE0_801A9EE4(void);
void func_EBFBE0_801AD11C(void);
void func_EBFBE0_801AD718(f32, f32, f32, f32*, f32*, f32*, f32, f32, f32);
PlanetId GetPlanetId(LevelId level);
void func_EBFBE0_801A809C(PlanetId planetId);
void func_EBFBE0_801A8738(void);
void func_EBFBE0_801A89BC(PlanetId, s32);
void func_EBFBE0_801A8F40(void);
void func_EBFBE0_801A9224(void);
void func_EBFBE0_801A9448(void);
void func_EBFBE0_801A9814(void);
void func_EBFBE0_801A9910(void);
void func_EBFBE0_801A9A8C(void);
void func_EBFBE0_801A9DE8(void);
void func_EBFBE0_801AA1CC(s32);
void func_EBFBE0_801AA434(s32, f32, f32, s32);
void func_EBFBE0_801AA778(s32, f32, f32, PlanetId);
void func_EBFBE0_801AB17C(f32 x, f32 y, f32 z);
void func_EBFBE0_801AB284(void);
void func_EBFBE0_801AB300(void);
void func_EBFBE0_801AB978(s32);
void func_EBFBE0_801ABCDC(s32 arg0, s32 alpha);
void func_EBFBE0_801ABF1C(void);
void func_EBFBE0_801AC200(s32);
void func_EBFBE0_801AC530(s32 index);
void func_EBFBE0_801AC80C(s32);
void func_EBFBE0_801AC9A0(s32);
void func_EBFBE0_801ACD90(s32 index, Vec3f* src, Vec3f* dest);
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
            gDrawMode = DRAW_MAP;
            func_EBFBE0_8019FF48();
            break;
    }
}

void func_EBFBE0_8019E99C(void) {
    s32 i;
    s32 j;

    func_8001DC6C(0, 0x118);

    D_80137E78 = 2;
    gFrameCount = 0;

    func_EBFBE0_80188010();

    D_EBFBE0_801CD83C = func_EBFBE0_801A05B4();

    D_EBFBE0_801CD980 = 0;
    D_EBFBE0_801CD984 = 0;
    D_EBFBE0_801CD98C = 0;
    D_EBFBE0_801CD990 = 0;
    D_EBFBE0_801CD994 = 0;
    D_EBFBE0_801CD9CC = 0;

    D_EBFBE0_801CEB48[0] = 0;
    D_EBFBE0_801CEB48[1] = 0;
    D_EBFBE0_801CEB48[2] = 0;

    for (i = 0; i < 10; i++) {
        D_EBFBE0_801CEB58[1][i] = 0;
        D_EBFBE0_801CEB58[2][i] = 0;
        D_EBFBE0_801CEBD0[1][i] = 0xFF;
        D_EBFBE0_801CEBD0[2][i] = 0xFF;
        D_EBFBE0_801CEC48[1][i] = 0.0f;
        D_EBFBE0_801CEC48[2][i] = 0.0f;
        D_EBFBE0_801CECC0[1][i] = 0.5f + (Rand_ZeroOne() * 0.3f);
        D_EBFBE0_801CECC0[2][i] = 0.5f + (Rand_ZeroOne() * 0.3f);
        D_EBFBE0_801CEE28[1][i] = 1 + (s32) (Rand_ZeroOne() * 5.0f);
        D_EBFBE0_801CEE28[2][i] = 1 + (s32) (Rand_ZeroOne() * 5.0f);
        D_EBFBE0_801CED38[1][i] = 50.0f + (s32) (Rand_ZeroOne() * 30.0f);
        D_EBFBE0_801CED38[2][i] = 110.0f + (s32) (Rand_ZeroOne() * 30.0f);
        D_EBFBE0_801CEDB0[1][i] = -10.0f + (Rand_ZeroOne() * -60.0f);
        D_EBFBE0_801CEDB0[2][i] = -10.0f + (Rand_ZeroOne() * -60.0f);
    }

    D_EBFBE0_801CD978 = 0;
    D_EBFBE0_801CD97C = 0;
    D_EBFBE0_801CF010 = 0;
    D_EBFBE0_801CF014 = 0;

    for (j = 0; j < 15; j++) {
        D_EBFBE0_801CD900[j] = 0;
        D_EBFBE0_801CEAB8[j] = 0.0f;
        D_EBFBE0_801CEAF8[j] = -90.0f;
    }

    D_EBFBE0_801CDA20 = 0.0f;
    D_EBFBE0_801CDA24 = 1.0f;
    D_EBFBE0_801CDA28 = 0.0f;
    D_EBFBE0_801CDA00 = -150.552155f;
    D_EBFBE0_801CDA04 = -489.679993f;
    D_EBFBE0_801CDA08 = 0.0f;
    D_EBFBE0_801CDA0C = -42.750008f;
    D_EBFBE0_801CDA10 = -9.849999f;
    D_EBFBE0_801CDA14 = 3375.000000f;
    D_EBFBE0_801CDA18 = 0.0f;
    D_EBFBE0_801CDA1C = 0.0f;

    func_EBFBE0_801AD718(D_EBFBE0_801CDA00, D_EBFBE0_801CDA04, D_EBFBE0_801CDA08, &D_EBFBE0_801CD9F4,
                         &D_EBFBE0_801CD9F8, &D_EBFBE0_801CD9FC, D_EBFBE0_801CDA14,
                         D_EBFBE0_801CDA0C + D_EBFBE0_801CDA18, D_EBFBE0_801CDA10 + D_EBFBE0_801CDA1C);

    for (i = 0; i < 15; i++) {
        D_EBFBE0_801CD8A0[i] = i;
    }

    D_EBFBE0_801CD960 = 0;

    D_80178340 = 0xFF;
    D_80178348 = 0;
    D_80178350 = 0;
    D_80178354 = 0;
    D_80177D20 = 0.0f;

    D_EBFBE0_801CF018 = 0;

    gBgColor = 0;

    D_EBFBE0_801CEA58 = 0.0f;
    D_EBFBE0_801CEA5C = 0.0f;
    D_EBFBE0_801CEA60 = 0.0f;

    func_EBFBE0_801A0788();

    D_EBFBE0_801B8280 = 0;
    D_EBFBE0_801B8284 = 0;
    D_EBFBE0_801CD9B8 = 0;
    D_EBFBE0_801CD9BC = 0;
    D_EBFBE0_801CD9C0 = 0;
    D_EBFBE0_801CD964 = 0;
    D_EBFBE0_801CD968 = 0;
    D_EBFBE0_801CD96C = 0;
    D_EBFBE0_801CEA6C = 0.0f;
    D_EBFBE0_801CEA70 = 0.002f;

    func_8001D444(0, 0x3C, 0, 0xFF);

    D_EBFBE0_801CEFC4 = 0;
    D_EBFBE0_801CEFC8 = 0;
    D_EBFBE0_801CEFD0 = 0;
    D_EBFBE0_801CD974 = 0;

    for (i = 0; i < 24; i++) {
        D_EBFBE0_801CD840[i] = i;
        D_EBFBE0_801AFD18[i].unk_14 = 0;
    }

    func_EBFBE0_801A6694();

    switch (D_80161A34) {
        default:
        case 0:
            func_EBFBE0_8019F600();
            break;

        case 7:
            func_EBFBE0_8019F164();
            break;

        case 5:
            func_EBFBE0_8019F42C();
            break;
    }

    func_EBFBE0_801A914C();

    for (i = 0; i < 96 * 96; i++) {
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

    D_EBFBE0_801CD810 = 0;

    D_80177B40 = 2;

    D_EBFBE0_801CD948 = 0;
    D_EBFBE0_801CEEC4 = 0;
    D_EBFBE0_801CEEC8 = 5;
    D_EBFBE0_801CEFF4 = 255.0f;
    D_EBFBE0_801CEFF8 = 255.0f;
    D_EBFBE0_801CEEBC = 0.0f;
    D_EBFBE0_801CEEC0 = 0.0f;
    D_EBFBE0_801CEEA0 = 0;
    D_EBFBE0_801CEEA4 = 0;
    D_EBFBE0_801CEEA8 = 0xFF;
    D_EBFBE0_801CEEAC = 0xFF;
    D_EBFBE0_801CEB34 = -1;
}

void func_EBFBE0_8019F164(void) {
    s32 i;

    D_EBFBE0_801CD974 = 1;

    if (gLifeCount[gPlayerNum] > 99) {
        gLifeCount[gPlayerNum] = 99;
    }

    for (i = 0; i < 6; i++) {
        D_80177C38[i] = gTeamShields[i];
        D_801778F0[i] = gSavedTeamShields[i];
        gSavedTeamShields[i] = gTeamShields[i];
    }

    for (i = 1; i < 4; i++) {
        if (D_80177C38[i] == 0) {
            D_80177C38[i] = 255;
        }
    }

    D_EBFBE0_801CD93C = D_80177930;

    D_EBFBE0_801CD954 = GetPlanetId(gCurrentLevel);

    D_EBFBE0_801CD950 = D_EBFBE0_801CD954;

    D_EBFBE0_801CD980 = func_EBFBE0_8019FD1C(gCurrentLevel, 0);

    func_EBFBE0_8019FD1C(gCurrentLevel, 2);

    if (D_800D3180[gCurrentLevel] == 2) {
        D_EBFBE0_801CD98C = 1;
        D_80177BB0[D_80177B48] = 1;
        func_EBFBE0_8019FD1C(gCurrentLevel, 1);
    }

    Save_Write();

    func_EBFBE0_8019F97C();

    func_EBFBE0_8019F83C();

    func_EBFBE0_8019FA1C();

    switch (D_EBFBE0_801CD93C) {
        case 0:
            D_EBFBE0_801CD958 = planet[D_EBFBE0_801CD954].unk_2C;
            break;

        case 1:
            D_EBFBE0_801CD958 = planet[D_EBFBE0_801CD954].unk_30;
            break;

        case 2:
            D_EBFBE0_801CD958 = planet[D_EBFBE0_801CD954].unk_34;
            break;
    }

    D_80177B48++;

    func_EBFBE0_8019FC04();

    D_EBFBE0_801CEFC4 = 0;
    D_EBFBE0_801CEFD0 = 0;
    D_EBFBE0_801CEFE0 = 32.0f;

    D_EBFBE0_801CEFE8[0] = 255.0f;
    D_EBFBE0_801CEFE8[1] = 255.0f;
    D_EBFBE0_801CEFE8[2] = 255.0f;

    D_EBFBE0_801CEFD8 = 0;

    if (D_EBFBE0_801CD93C) {
        D_EBFBE0_801CEFD8 = 1;
    }

    gHitCount = 0;

    D_EBFBE0_801CD94C = 0;
    D_EBFBE0_801CD944 = 5;
}

void func_EBFBE0_8019F42C(void) {
    s32 i;

    gTotalHits += gHitCount;
    gLifeCount[gPlayerNum] = 0;

    D_EBFBE0_801CD974 = 1;
    D_EBFBE0_801CD954 = GetPlanetId(gCurrentLevel);

    D_80177B70[D_80177B48] = gHitCount;

    func_EBFBE0_8019F910();
    func_EBFBE0_8019FD1C(gCurrentLevel, 0);
    Save_Write();
    func_EBFBE0_8019F83C();

    for (i = 0; i < 7; i++) {
        D_EBFBE0_801CD8E0[i] = 0;
    }

    if (D_80177B48 != 0) {
        for (i = 0; i < D_80177B48; i++) {
            D_EBFBE0_801CD8E0[i] = func_EBFBE0_801A655C(D_80177B90[i], D_80177B90[i + 1]);
        }
    }

    for (i = 0; i < 24; i++) {
        D_80177BD8[i] = 0;
    }

    for (i = 0; i < 15; i++) {
        planet[i].alpha = 0;
    }

    func_EBFBE0_8019FC04();

    D_EBFBE0_801CD9AC = 0;

    func_8001DC6C(0, 0x19);

    D_EBFBE0_801CD948 = 0;
    D_EBFBE0_801CD94C = 0;
    D_EBFBE0_801CD944 = 7;
}

void func_EBFBE0_8019F600(void) {
    s32 i;
    s32 sp18;
    s32 temp_t4;

    gTotalHits = 0;
    gHitCount = 0;

    gTeamShields[1] = 255;
    gTeamShields[2] = 255;
    gTeamShields[3] = 255;
    gSavedTeamShields[1] = 255;
    gSavedTeamShields[2] = 255;
    gSavedTeamShields[3] = 255;
    D_80177C38[1] = 255;
    D_80177C38[2] = 255;
    D_80177C38[3] = 255;
    D_80177C58[1] = 255;
    D_80177C58[2] = 255;
    D_80177C58[3] = 255;

    D_EBFBE0_801CD950 = -1;

    for (i = 0; i < 15; i++) {
        planet[i].alpha = 0;
    }

    D_EBFBE0_801CD970 = 0;
    for (i = 0; i < 24; i++) {
        D_80177BD8[i] = 0;
        gUnkEntities30[i].unk_24 = 0.0f;
    }

    for (i = 0; i < 7; i++) {
        D_80177BB0[i] = 0;
        D_80177B70[i] = 0;
        D_80177B50[i] = 0x00FFFFFF;
    }
    D_80177B90[0] = 9;
    D_80177B90[1] = -1;
    D_80177B90[2] = -1;
    D_80177B90[3] = -1;
    D_80177B90[4] = -1;
    D_80177B90[5] = -1;
    D_80177B90[6] = 13;

    for (i = 0; i < 24; i++) {
        D_EBFBE0_801AFD18[i].unk_18 = 255;
    }

    D_80177B48 = 0;
    gCurrentLevel = 0;

    D_EBFBE0_801CD954 = 9;
    D_EBFBE0_801CEA9C = 0.0f;
    D_EBFBE0_801CD9B0 = 0.002f;
    D_EBFBE0_801CD9B4 = 0.01f;
    D_EBFBE0_801CD944 = 0;

    sp18 = func_EBFBE0_801A655C(D_EBFBE0_801CD954, planet[D_EBFBE0_801CD954].unk_2C);
    temp_t4 = func_EBFBE0_801A655C(D_EBFBE0_801CD954, planet[D_EBFBE0_801CD954].unk_30);
    D_80177BD8[sp18] = 1;
    D_80177BD8[temp_t4] = 1;
}

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
    PlanetId planetId;

    for (planetId = 0; planetId < PLANET_MAX; planetId++) {
        if (planetId == D_EBFBE0_801CD954) {
            if ((planetId == PLANET_SECTOR_Z) || (planetId == PLANET_SECTOR_X) || (planetId == PLANET_SECTOR_Y)) {
                planet[planetId].alpha = 144;
            } else {
                planet[planetId].alpha = 255;
            }
        } else {
            planet[planetId].alpha = 0;
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

void func_EBFBE0_801A0954(void) {
    PlanetId planetId;
    static f32 D_EBFBE0_801B6934[] = {
        99.0f, 24, -90.0f, -150.0f, -208.0f, -276.0f,
    };

    switch (D_EBFBE0_801CD948) {
        case 100:
            break;

        case 0:
            D_EBFBE0_801CD9F0 = 0;
            D_EBFBE0_801CD9DC = 30.0f;
            D_EBFBE0_801CD9E0 = 230.0f;
            D_EBFBE0_801CD9E8 = 0;
            D_EBFBE0_801CD9E4 = 0;
            D_EBFBE0_801CD9EC = 0.29f;
            D_80178410 = 800;
            D_EBFBE0_801CD9C0 = 5;
            D_EBFBE0_801CD948++;
            break;

        case 1:
            if (D_EBFBE0_801CD9C0 != 0) {
                break;
            }

            if (D_80178340 != 0) {
                break;
            }

            if ((s32) D_EBFBE0_801CD9E0 == 205) {
                func_8001AD00(1000);
            }

            if (D_EBFBE0_801CD9E0 > -355.0f) {
                D_EBFBE0_801CD9E0 -= D_EBFBE0_801CD9EC;
            }

            if ((D_EBFBE0_801CD9E0 < 200.0f) && (D_EBFBE0_801CD9E8 != 255)) {
                D_EBFBE0_801CD9E8 += 8;
                if (D_EBFBE0_801CD9E8 > 255) {
                    D_EBFBE0_801CD9E8 = 255;
                }
            }

            if (D_EBFBE0_801CD9E0 < D_EBFBE0_801B6934[D_EBFBE0_801CD9F0]) {
                D_EBFBE0_801CD9E4 += 8;
                if (D_EBFBE0_801CD9E4 > 255) {
                    D_EBFBE0_801CD9E4 = 255;
                }
            }

            if (D_EBFBE0_801CD9E0 <= -355.0f) {
                D_EBFBE0_801CD948++;
            }
            break;

        case 2:
            D_EBFBE0_801CD9E8 -= 16;
            if (D_EBFBE0_801CD9E8 < 0) {
                D_EBFBE0_801CD9E8 = 0;
                D_EBFBE0_801CD948++;
                D_EBFBE0_801CD9C0 = 20;
            }
            break;

        case 3:
            if (D_EBFBE0_801CD9C0 != 0) {
                break;
            }
            D_EBFBE0_801CD948 = 0;
            D_EBFBE0_801CD944 = 1;
            break;
    }

    if (gControllerPress[gMainController].button & START_BUTTON) {
        func_8001D444(0, 0x3C, 0, 0xFF);

        Audio_PlaySfx(0x4900001FU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

        for (planetId = 0; planetId < PLANET_MAX; planetId++) {
            if ((planetId == PLANET_SECTOR_Z) || (planetId == PLANET_SECTOR_X) || (planetId == PLANET_SECTOR_Y)) {
                planet[planetId].alpha = 144;
            } else {
                planet[planetId].alpha = 255;
            }
            D_EBFBE0_801CD900[planetId] = 255;
        }

        D_EBFBE0_801CD970 = 255;

        func_8001AE58();

        D_EBFBE0_801CD974 = 1;
        D_EBFBE0_801CD97C = 1;
        D_EBFBE0_801CD948 = 0;
        D_EBFBE0_801CD944 = 3;
    }
}

void func_EBFBE0_801A0D14(void) {
    s32 i;
    static f32 D_EBFBE0_801B694C = 71.0f;
    static f32 D_EBFBE0_801B6950 = 205.0f;
    static u16* D_EBFBE0_801B6954[] = {
        D_6041A80, D_6035780, D_6033080, D_603A580, D_603F380, D_6037E80, D_603CC80,
    };

    func_EBFBE0_801A116C();

    RCP_SetupDL(&gMasterDisp, 0x51);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 180, 180, 180, 255);

    Message_DisplayScrollingText(&gMasterDisp, gMsg_ID_1, D_EBFBE0_801CD9DC, D_EBFBE0_801CD9E0, 218, 70,
                                 Message_GetCharCount(gMsg_ID_1));

    RCP_SetupDL(&gMasterDisp, 0x4C);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    TextureRect_8bIA(&gMasterDisp, D_6019030, 8, 16, 0.0f, D_EBFBE0_801B694C, 40.0f, 1.66f);
    TextureRect_8bIA_MirY(&gMasterDisp, D_6019030, 8, 16, 0.0f, D_EBFBE0_801B6950, 40.0f, 1.68f);

    func_8003DE68(0x47, 0x76);
    func_8003DE68(0xCD, 0xEF);

    RCP_SetupDL(&gMasterDisp, 0x4C);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_EBFBE0_801CD9E8);

    for (i = 0; i < 13; i++) {
        TextureRect_16bRGBA(&gMasterDisp, D_EBFBE0_801B6954[D_EBFBE0_801CD9F0] + (96 * 4 * i), 96, 4, 109.0f,
                            24.0f + (4.0f * i), 1.0f, 1.0f);
    }

    if ((D_EBFBE0_801CD9E4 != 0) && (D_EBFBE0_801CD9F0 + 1 < 7)) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_EBFBE0_801CD9E4);

        for (i = 0; i < 13; i++) {
            TextureRect_16bRGBA(&gMasterDisp, D_EBFBE0_801B6954[D_EBFBE0_801CD9F0 + 1] + (i * 96 * 4), 96, 4, 109.0f,
                                24.0f + (i * 4.0f), 1.0f, 1.0f);
        }

        if (D_EBFBE0_801CD9E4 == 255) {
            D_EBFBE0_801CD9E4 = 0;
            D_EBFBE0_801CD9F0++;
        }
    }
}

void func_EBFBE0_801A116C(void) {
    static f32 D_EBFBE0_801B6970 = 35.0f;
    WingInfo wings;
    Vec3f dest;
    Vec3f src;
    s32 colR = 30, colG = 9, colB = 5;
    s32 pad[5];

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 100.0f;

    Matrix_RotateY(gCalcMatrix, M_DTOR * 22.0f, 0);
    Matrix_RotateX(gCalcMatrix, M_DTOR * -70.0f, 1);
    Matrix_MultVec3f(gCalcMatrix, &src, &dest);

    if (D_EBFBE0_801CD948 >= 2) {
        colR -= 10;
        if (colR < 0) {
            colR = 0;
        }

        colG -= 3;
        if (colG < 0) {
            colG = 0;
        }

        colB -= 2;
        if (colB < 0) {
            colB = 0;
        }

        RCP_SetupDL(&gMasterDisp, 0x2E);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_EBFBE0_801CD9E8);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x17);
    }

    if ((D_EBFBE0_801CD948 < 2) || (D_EBFBE0_801CD9E8 != 0)) {
        Matrix_Push(&gGfxMatrix);
        Matrix_LookAt(gGfxMatrix, 0.0f, 0.0f, 430.0f, 0.0f, 180.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);

        Lights_SetOneLight(&gMasterDisp, dest.x, dest.y, dest.z, colR, colG, colB, 0, 0, 0);

        Matrix_Push(&gGfxMatrix);

        Matrix_Translate(gGfxMatrix, -60.0f, 293.0f, -360.0f, 1);
        Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 3.0f, 1);

        Matrix_RotateZ(gGfxMatrix, M_DTOR * -15.0f, 1);
        Matrix_RotateX(gGfxMatrix, M_DTOR * D_EBFBE0_801B6970, 1);
        Matrix_RotateY(gGfxMatrix, M_DTOR * -90.0f, 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        wings.rightState = wings.leftState = 2;
        // clang-format off
        wings.unk_18 = wings.unk_1C = wings.unk_20 = wings.unk_24 = wings.unk_04 = 
        wings.unk_08 = wings.unk_0C = wings.unk_10 = wings.unk_28 = 0.0f;
        // clang-format on

        wings.unk_14 = 0.0f;
        wings.unk_2C = 1;
        wings.unk_30 = 0.0f;
        wings.unk_34 = 0.0f;
        wings.unk_38 = 0.0f;

        func_80053658(&wings);

        Matrix_Pop(&gGfxMatrix);
        Matrix_Pop(&gGfxMatrix);
    }
    D_EBFBE0_801B6970 += 0.6f;
}

static f32 D_EBFBE0_801B6974[8] = { -248.0f, -76.0f, 84.0f, 248.0f, -242.0f, -79.0f, 82.0f, 245.0f };
static f32 D_EBFBE0_801B6994[8] = { 80.0f, 80.0f, 80.0f, 80.0f, -30.0f, -30.0f, -30.0f, -30.0f };
static f32 D_EBFBE0_801B69B4[8] = { -455.0f, -455.0f, -455.0f, -455.0f, -455.0f, -455.0f, -455.0f, -455.0f };

static f32 D_EBFBE0_801B69D4[8] = { -248.0f, -76.0f, 84.0f, 248.0f, -242.0f, -79.0f, 82.0f, 245.0f };
static f32 D_EBFBE0_801B69F4[8] = { 80.0f, 80.0f, 80.0f, 80.0f, -30.0f, -30.0f, -30.0f, -30.0f };
static f32 D_EBFBE0_801B6A14[8] = { 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f };

static f32* D_EBFBE0_801B6A34[2] = { D_EBFBE0_801B69D4, D_EBFBE0_801B6974 };
static f32* D_EBFBE0_801B6A3C[2] = { D_EBFBE0_801B69F4, D_EBFBE0_801B6994 };
static f32* D_EBFBE0_801B6A44[2] = { D_EBFBE0_801B6A14, D_EBFBE0_801B69B4 };

void func_EBFBE0_801A1528(void) {
    PlanetId planetId;
    f32 temp;

    switch (D_EBFBE0_801CD948) {
        case 0:
            temp = Math_SmoothStepToF(&D_EBFBE0_801CEA9C, 255.0f, D_EBFBE0_801CD9B0, 10.0f, 1.0f);

            D_EBFBE0_801CD9B0 *= 1.06f;

            if (temp == 0.0f) {
                D_EBFBE0_801CEAA0 = 0.0f;
                D_EBFBE0_801CEAA4 = 0.0f;
                D_EBFBE0_801CD9B0 = 0.002f;
                D_EBFBE0_801CD9B8 = 10;
                D_EBFBE0_801CD9BC = 45;
                D_EBFBE0_801CD948++;
            }
            break;

        case 1:
            if (D_EBFBE0_801CD9B8 != 0) {
                break;
            }

            Math_SmoothStepToF(&D_EBFBE0_801CEA9C, 0.0f, D_EBFBE0_801CD9B4, 50.0f, 0.1f);
            D_EBFBE0_801CD9B4 *= 1.06f;

            if (D_EBFBE0_801CD9BC != 0) {
                break;
            }

            Math_SmoothStepToF(&D_EBFBE0_801CEAA0, 144.0f, D_EBFBE0_801CD9B0, 50.0f, 0.1f);
            temp = Math_SmoothStepToF(&D_EBFBE0_801CEAA4, 255.0f, D_EBFBE0_801CD9B0, 50.0f, 0.1f);
            D_EBFBE0_801CD9B0 *= 1.09f;

            for (planetId = 0; planetId < PLANET_MAX; planetId++) {
                if ((planetId == PLANET_SECTOR_Z) || (planetId == PLANET_SECTOR_X) || (planetId == PLANET_SECTOR_Y)) {
                    planet[planetId].alpha = D_EBFBE0_801CEAA0;
                } else {
                    planet[planetId].alpha = D_EBFBE0_801CEAA4;
                    D_EBFBE0_801CD970 = D_EBFBE0_801CEAA4;
                }
                D_EBFBE0_801CD900[planetId] = D_EBFBE0_801CEAA4;
            }

            if (D_EBFBE0_801CEAA0 > 32) {
                D_EBFBE0_801CD974 = 1;
            }

            if (temp == 0.0f) {
                Audio_PlaySfx(0x4900001FU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801CD948 = 0;
                D_EBFBE0_801CD97C = 1;
                D_EBFBE0_801CD944 = 3;
            }
            break;
    }

    if (gControllerPress[gMainController].button & START_BUTTON) {
        Audio_PlaySfx(0x4900001FU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

        for (planetId = 0; planetId < PLANET_MAX; planetId++) {
            if ((planetId == PLANET_SECTOR_Z) || (planetId == PLANET_SECTOR_X) || (planetId == PLANET_SECTOR_Y)) {
                planet[planetId].alpha = 144;
            } else {
                planet[planetId].alpha = 255;
            }
            D_EBFBE0_801CD900[planetId] = 255;
        }
        D_EBFBE0_801CD970 = 255;
        D_EBFBE0_801CD944 = 3;
        D_EBFBE0_801CD97C = 1;
    }
}

void func_EBFBE0_801A19A8(void) {
    s32 i;

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, (s32) D_EBFBE0_801CEA9C);

    for (i = 0; i < 4; i++) {
        TextureRect_8bIA(&gMasterDisp, D_600D590 + (i * 168 * 4), 168, 4, 72.0f, 104.0f + (4.0f * i), 1.0f, 1.0f);
    }
    TextureRect_8bIA(&gMasterDisp, D_600D590 + (168 * 16), 168, 3, 72.0f, 104.0f + 16.0f, 1.0f, 1.0f);
}

void func_EBFBE0_801A1AE8(void) {
    f32 x;
    f32 y;
    f32 z;

    D_EBFBE0_801CEA64 = 0.04f;

    D_EBFBE0_801CEA54 = func_EBFBE0_801A25C8(D_EBFBE0_801CD954);

    D_EBFBE0_801CDA40.x = planet[D_EBFBE0_801CD954].posX;
    D_EBFBE0_801CDA40.y = planet[D_EBFBE0_801CD954].posY;
    D_EBFBE0_801CDA40.z = planet[D_EBFBE0_801CD954].posZ;

    D_EBFBE0_801CDA50.x = planet[D_EBFBE0_801CD954].posX;
    D_EBFBE0_801CDA50.y = planet[D_EBFBE0_801CD954].posY;
    D_EBFBE0_801CDA50.z = D_EBFBE0_801CDA40.z + D_EBFBE0_801CEA54;

    D_EBFBE0_801CDA2C = D_EBFBE0_801CDA00;
    D_EBFBE0_801CDA30 = D_EBFBE0_801CDA04;

    D_EBFBE0_801CDA34 = D_EBFBE0_801CD9F4;
    D_EBFBE0_801CDA38 = D_EBFBE0_801CD9F8;

    x = D_EBFBE0_801CDA50.x - D_EBFBE0_801CD9F4;
    y = D_EBFBE0_801CDA50.y - D_EBFBE0_801CD9F8;
    z = D_EBFBE0_801CDA50.z - D_EBFBE0_801CD9FC;

    D_EBFBE0_801CEA68 = sqrtf(SQ(x) + SQ(y) + SQ(z));
}

// needs D_EBFBE0_801CD900 to be static
#if defined(IMPORT_BSS) || defined(NON_MATCHING)
void func_EBFBE0_801A1C14(void) {
    s32 i;

    switch (D_EBFBE0_801CD948) {
        case 0:
            func_EBFBE0_801A1AE8();

            D_EBFBE0_801CD94C = 0;
            D_EBFBE0_801CD9C4 = 0;
            D_EBFBE0_801CEA88 = 0.0f;
            D_EBFBE0_801CEA8C = 0.0f;
            D_EBFBE0_801CEA90 = -400.0f;

            D_EBFBE0_801CEA78 = 0.05f;
            D_EBFBE0_801CEA7C = 0.05f;
            D_EBFBE0_801CEA80 = 0.05f;
            D_EBFBE0_801CEA84 = 0.05f;
            D_EBFBE0_801CEA94 = 0.0f;
            D_EBFBE0_801CEA98 = 0;
            D_EBFBE0_801CD95C = 10;
            D_EBFBE0_801CD97C = 0;

            if (D_EBFBE0_801CD954 == PLANET_CORNERIA) {
                D_EBFBE0_801CD95C = 5;
            }

            D_EBFBE0_801CD9D8 = 0;

            for (i = 0; i < 24; i++) {
                D_EBFBE0_801AFD18[i].unk_18 = 0;
            }
            D_80178410 = 0;

            D_80178348 = 255;
            D_80178350 = 255;
            D_80178354 = 255;
            D_80178340 = 0;

            D_EBFBE0_801CEB3C = 0.0f;
            D_EBFBE0_801CEB38 = 255;

            D_EBFBE0_801CD948++;
            break;

        case 1:
            if (D_EBFBE0_801CD95C == 0) {
                if (D_EBFBE0_801CD954 == PLANET_CORNERIA) {
                    D_80178340 = 0;
                    D_EBFBE0_801CD948 = 10;
                    Audio_PlaySfx(0x0940A00BU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    Audio_PlaySfx(0x19003012U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_EBFBE0_801CD948++;
                }
            } else {
                if (D_EBFBE0_801CD954 == PLANET_CORNERIA) {
                    D_80178340 ^= 0xFF;
                    if (D_EBFBE0_801CD95C == 2) {
                        D_EBFBE0_801CEB34 = 0;
                    }
                }
                D_EBFBE0_801CD95C--;
            }
            break;

        case 10:
            if (D_EBFBE0_801CEB34 == 4) {
                Audio_PlaySfx(0x19003012U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801CD948 = 2;
            }
            break;

        case 2:
            func_EBFBE0_801A2674();
            if ((D_EBFBE0_801CD9FC == D_EBFBE0_801CDA50.z) && (D_EBFBE0_801CD9D8 == 0)) {
                Audio_PlaySfx(0x19004013U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801CD9D8 = 1;
                if (D_EBFBE0_801CD954 == PLANET_CORNERIA) {
                    D_EBFBE0_801CEB48[0] = 1;
                    for (i = 0; i < 10; i++) {
                        D_EBFBE0_801CEB58[0][i] = Rand_ZeroOne() * 3.0f;
                        D_EBFBE0_801CEBD0[0][i] = 255;
                        D_EBFBE0_801CEC48[0][i] = 0.0f;
                        D_EBFBE0_801CECC0[0][i] = 0.5f + (Rand_ZeroOne() * 0.3f);
                        D_EBFBE0_801CEE28[0][i] = 1 + (s32) (Rand_ZeroOne() * 4.0f);
                        D_EBFBE0_801CED38[0][i] = 110.0f + (s32) (Rand_ZeroOne() * 30.0f);
                        D_EBFBE0_801CEDB0[0][i] = -10.0f + (Rand_ZeroOne() * -60.0f);
                    }
                }
            }
            if ((D_EBFBE0_801CDA34 == D_EBFBE0_801CDA50.x) && (D_EBFBE0_801CDA38 == D_EBFBE0_801CDA50.y) &&
                (D_EBFBE0_801CD9FC == D_EBFBE0_801CDA50.z) && (D_EBFBE0_801CDA08 == D_EBFBE0_801CDA40.z)) {

                D_EBFBE0_801CD964 = 1;
                D_EBFBE0_801CD96C = 1;

                for (i = 0; i < 15; i++) {
                    D_EBFBE0_801CD900[i] = 0;
                }
                D_EBFBE0_801CD970 = 0;

                if (func_EBFBE0_801A2304()) {
                    D_EBFBE0_801CD948 = 3;
                }
            }
            break;

        case 20:
            if (gControllerPress[gMainController].button & START_BUTTON) {
                D_EBFBE0_801CD948 = 21;
            }

            if (gControllerHold[gMainController].button & R_TRIG) {
                D_EBFBE0_801CD9FC += 10.0f;
            }

            if (gControllerHold[gMainController].button & Z_TRIG) {
                if (D_EBFBE0_801CD9FC - 10.0f > D_EBFBE0_801CDA08) {
                    D_EBFBE0_801CD9FC -= 10.0f;
                }
            }
            break;

        case 21:
            D_EBFBE0_801CD964 = 1;
            D_EBFBE0_801CD96C = 1;

            for (i = 0; i < 15; i++) {
                D_EBFBE0_801CD900[i] = 0;
            }
            D_EBFBE0_801CD970 = 0;

            if (func_EBFBE0_801A2304()) {
                D_EBFBE0_801CD948 = 3;
            }
            break;

        case 3:
            D_EBFBE0_801CD948 = 0;
            D_EBFBE0_801CD944 = 4;
            break;
    }
    D_EBFBE0_801CD9C4++;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_menu/fox_map/func_EBFBE0_801A1C14.s")
#endif

bool func_EBFBE0_801A2304(void) {
    s32 ret = false;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 temp_fv0;

    switch (D_EBFBE0_801CD94C) {
        case 0:
            func_8001ACDC(3);
            D_EBFBE0_801CEA78 += 2.9f;
            D_EBFBE0_801CEA80 += 2.9f;
            if (D_EBFBE0_801CEA78 > 5.5f) {
                D_EBFBE0_801CEA78 = 5.5f;
                D_EBFBE0_801CEA80 = 4.6f;
                D_EBFBE0_801CD94C += 1;
                D_EBFBE0_801CD9B8 = 0xD;
            }
            break;

        case 1:
            D_EBFBE0_801CEA78 -= 2.5f;
            D_EBFBE0_801CEA98 += 0xA;
            D_EBFBE0_801CEA80 -= 2.5f;

            if (D_EBFBE0_801CEA78 < 5.0f) {
                D_EBFBE0_801CEA78 = 5.0f;
            }

            if (D_EBFBE0_801CEA80 < 3.9f) {
                D_EBFBE0_801CEA80 = 3.9f;
            }

            D_EBFBE0_801CEA7C += 2.5f;
            D_EBFBE0_801CEA84 += 2.5f;

            if (D_EBFBE0_801CEA7C > 5.0f) {
                D_EBFBE0_801CEA7C = 5.0f;
            }

            if (D_EBFBE0_801CEA84 > 3.9f) {
                D_EBFBE0_801CEA84 = 3.9f;
            }

            if (D_EBFBE0_801CD9B8 == 0) {
                D_EBFBE0_801CEA98 = 0xFF;
                D_EBFBE0_801CD94C = 0x64;
            }
            break;

        case 100:
            sp28 = Math_SmoothStepToF(&D_EBFBE0_801CEA88, -206.0f, 0.4f, 100.0f, 1.0f);
            sp24 = Math_SmoothStepToF(&D_EBFBE0_801CEA8C, 51.0f, 0.4f, 100.0f, 1.0f);
            sp20 = Math_SmoothStepToF(&D_EBFBE0_801CEA90, -627.0f, 0.4f, 100.0f, 1.0f);
            temp_fv0 = Math_SmoothStepToF(&D_EBFBE0_801CEA94, 42.8f, 0.4f, 100.0f, 1.0f);
            if ((sp28 == 0.0f) && (sp24 == 0.0f) && (sp20 == 0.0f) && (temp_fv0 == 0.0f)) {
                ret = true;
            }
            break;
    }

    return ret;
}

f32 func_EBFBE0_801A25C8(PlanetId planetId) {
    f32 sp4;

    switch (planetId) {
        case PLANET_AREA_6:
            sp4 = 900.0f;
            break;

        case PLANET_BOLSE:
            sp4 = 800.0f;
            break;

        case PLANET_METEO:
            sp4 = 650.0f;
            break;

        case PLANET_KATINA:
        case PLANET_MACBETH:
        case PLANET_ZONESS:
        case PLANET_TITANIA:
        case PLANET_AQUAS:
        case PLANET_FORTUNA:
            sp4 = 550.0f;
            break;

        case PLANET_CORNERIA:
            sp4 = 1100.0f;
            break;

        case PLANET_VENOM:
            sp4 = 2100.0f;
            break;

        case PLANET_SOLAR:
            sp4 = 850.0f;
            break;

        case PLANET_SECTOR_Z:
        case PLANET_SECTOR_X:
        case PLANET_SECTOR_Y:
            sp4 = 650.0f;
            break;

        default:
            break;
    }

    return sp4;
}

void func_EBFBE0_801A2674(void) {
    s32 i;

    func_EBFBE0_801A48C0(D_EBFBE0_801CEA64);

    func_EBFBE0_801A4A38(D_EBFBE0_801CEA64);

    D_EBFBE0_801CEA64 *= 1.03f;

    for (i = 0; i < 15; i++) {
        D_EBFBE0_801CD900[i] -= 16;

        if (D_EBFBE0_801CD900[i] < 0) {
            D_EBFBE0_801CD900[i] = 0;
        }

        if (i == D_EBFBE0_801CD954) {
            continue;
        }

        planet[i].alpha -= 16;

        if (planet[i].alpha < 0) {
            planet[i].alpha = 0;
        }
    }

    for (i = 0; i < 24; i++) {
        if (D_80177BD8[i] == 0) {
            continue;
        }

        D_EBFBE0_801AFD18[i].unk_18 -= 16;

        if (D_EBFBE0_801AFD18[i].unk_18 < 0) {
            D_EBFBE0_801AFD18[i].unk_18 = 0;
        }
    }

    if (D_EBFBE0_801CD954 == 2) {
        Math_SmoothStepToF(&D_EBFBE0_801AFFF8, 20.0f, 0.05f, 100.0f, 0.1f);
    }

    if (D_EBFBE0_801CD954 == 1) {
        Math_SmoothStepToF(&D_EBFBE0_801B0000, 15.0f, 0.05f, 100.0f, 0.1f);
    }

    D_EBFBE0_801CD970 -= 16;
    if (D_EBFBE0_801CD970 < 0) {
        D_EBFBE0_801CD970 = 0;
    }

    func_800182F4(0x102D00FF);
    func_800182F4(0x112D00FF);
}

void func_EBFBE0_801A281C(void) {
    D_80178348 = 0;
    D_80178350 = 0;
    D_80178354 = 0;
    D_80178340 = 255;

    D_EBFBE0_801CD988 = 5;
    D_EBFBE0_801CEED8 = 0;
    D_EBFBE0_801CEEDC = 0.0f;
    D_EBFBE0_801CEEE0 = 0.04f;

    D_EBFBE0_801CEEE8[0].x = D_EBFBE0_801CEEE8[1].x = D_EBFBE0_801CD9F4;
    D_EBFBE0_801CEEE8[0].y = D_EBFBE0_801CEEE8[1].y = D_EBFBE0_801CD9F8;
    D_EBFBE0_801CEEE8[0].z = D_EBFBE0_801CEEE8[1].z = D_EBFBE0_801CD9FC;

    D_EBFBE0_801CEF58[0].x = D_EBFBE0_801CEF58[1].x = D_EBFBE0_801CDA00;
    D_EBFBE0_801CEF58[0].y = D_EBFBE0_801CEF58[1].y = D_EBFBE0_801CDA04;
    D_EBFBE0_801CEF58[0].z = D_EBFBE0_801CEF58[1].z = D_EBFBE0_801CDA08;

    D_EBFBE0_801CEF58[5].x = D_EBFBE0_801CEF58[4].x = D_EBFBE0_801CEF58[3].x = D_EBFBE0_801CEF58[2].x =
        planet[D_EBFBE0_801CD958].posX;
    D_EBFBE0_801CEF58[5].y = D_EBFBE0_801CEF58[4].y = D_EBFBE0_801CEF58[3].y = D_EBFBE0_801CEF58[2].y =
        planet[D_EBFBE0_801CD958].posY;
    D_EBFBE0_801CEF58[5].z = D_EBFBE0_801CEF58[4].z = D_EBFBE0_801CEF58[3].z = D_EBFBE0_801CEF58[2].z =
        planet[D_EBFBE0_801CD958].posZ;

    D_EBFBE0_801CDA0C = -46.5f;
    D_EBFBE0_801CDA10 = 0.0f;
    D_EBFBE0_801CDA14 = 500.0f;

    func_EBFBE0_801AD718(D_EBFBE0_801CEF58[2].x, D_EBFBE0_801CEF58[2].y, D_EBFBE0_801CEF58[2].z,
                         &D_EBFBE0_801CEEE8[2].x, &D_EBFBE0_801CEEE8[2].y, &D_EBFBE0_801CEEE8[2].z, D_EBFBE0_801CDA14,
                         D_EBFBE0_801CDA0C, D_EBFBE0_801CDA10);

    D_EBFBE0_801CEEE8[5].x = D_EBFBE0_801CEEE8[4].x = D_EBFBE0_801CEEE8[3].x = D_EBFBE0_801CEEE8[2].x;
    D_EBFBE0_801CEEE8[5].y = D_EBFBE0_801CEEE8[4].y = D_EBFBE0_801CEEE8[3].y = D_EBFBE0_801CEEE8[2].y;
    D_EBFBE0_801CEEE8[5].z = D_EBFBE0_801CEEE8[4].z = D_EBFBE0_801CEEE8[3].z = D_EBFBE0_801CEEE8[2].z;

    D_EBFBE0_801CEF58[7].x = D_EBFBE0_801CEF58[6].x = -150.552155f;
    D_EBFBE0_801CEF58[7].y = D_EBFBE0_801CEF58[6].y = -489.679993f;
    D_EBFBE0_801CEF58[7].z = D_EBFBE0_801CEF58[6].z = 0.0f;

    D_EBFBE0_801CDA0C = -42.750008f;
    D_EBFBE0_801CDA10 = -9.849999f;
    D_EBFBE0_801CDA14 = 3375.000000f;

    func_EBFBE0_801AD718(D_EBFBE0_801CEF58[6].x, D_EBFBE0_801CEF58[6].y, D_EBFBE0_801CEF58[6].z,
                         &D_EBFBE0_801CEEE8[6].x, &D_EBFBE0_801CEEE8[6].y, &D_EBFBE0_801CEEE8[6].z, D_EBFBE0_801CDA14,
                         D_EBFBE0_801CDA0C, D_EBFBE0_801CDA10);

    D_EBFBE0_801CEEE8[7].x = D_EBFBE0_801CEEE8[6].x;
    D_EBFBE0_801CEEE8[7].y = D_EBFBE0_801CEEE8[6].y;
    D_EBFBE0_801CEEE8[7].z = D_EBFBE0_801CEEE8[6].z;

    D_EBFBE0_801CEECC = func_EBFBE0_801A655C(D_EBFBE0_801CD954, D_EBFBE0_801CD958);

    if (D_EBFBE0_801CD93C == 2) {
        D_80177BD8[D_EBFBE0_801CEECC] = 5;
        D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_14 = 5;
    } else {
        D_80177BD8[D_EBFBE0_801CEECC] = 2;
        D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_14 = 1;
    }
}

// needs D_EBFBE0_801CD900 to be static bss
#if defined(IMPORT_BSS) || defined(NON_MATCHING)
void func_EBFBE0_801A2B8C(void) {
    s32 i;

    switch (D_EBFBE0_801CD94C) {
        case 0:
            func_EBFBE0_801A281C();
            D_EBFBE0_801CD94C = 100;
            break;

        case 100:
            if (D_80178340 != 0) {
                D_80178340 -= 64;
                if (D_80178340 < 0) {
                    D_80178340 = 0;
                }
            } else {
                D_EBFBE0_801CD9C0 = 30;

                if ((D_EBFBE0_801CD98C == 1) || (D_EBFBE0_801CD980 == 1)) {
                    D_80178348 = 255;
                    D_80178350 = 255;
                    D_80178354 = 255;
                    D_80178340 = 0;
                    D_EBFBE0_801CD984 = 0;
                    D_EBFBE0_801CD94C = 10;
                    break;
                }
                D_EBFBE0_801CD9C4 = 0;
                D_EBFBE0_801CD94C = 1;
            }
            break;

        case 10:
            if (D_EBFBE0_801CD9C0 != 0) {
                break;
            }

            if ((D_EBFBE0_801CD984 == 255) && (D_80178340 == 0)) {
                D_EBFBE0_801CD980 = 0;
                D_EBFBE0_801CD9C0 = 30;
                D_EBFBE0_801CD94C = 20;
            } else if (D_EBFBE0_801CD988 != 0) {
                D_80178340 ^= 255;
                D_EBFBE0_801CD988--;
            } else {
                D_EBFBE0_801CD988 = 0;

                if (D_80178340 != 0) {
                    D_80178340 -= 21;
                    if (D_80178340 < 0) {
                        D_80178340 = 0;
                    }
                }

                D_EBFBE0_801CD984 += 8;

                if (D_EBFBE0_801CD984 > 255) {
                    D_80178340 = 0;
                    D_EBFBE0_801CD984 = 255;
                }
            }

            break;

        case 20:
            if (D_EBFBE0_801CD9C0 != 0) {
                break;
            }
            if ((D_EBFBE0_801CD98C == 1) || (D_EBFBE0_801CD980 == 1)) {
                break;
            }
            D_EBFBE0_801CD9C4 = 0;
            D_EBFBE0_801CD9C0 = 30;
            D_EBFBE0_801CD94C = 1;
            break;

        case 1:
            if (D_EBFBE0_801CD9C0 != 0) {
                break;
            }
            func_EBFBE0_801A2EB8();
            break;

        case 2:
            if (D_EBFBE0_801CD9C0 != 0) {
                break;
            }

            for (i = 0; i < 15; i++) {
                D_EBFBE0_801CD900[i] = 255;
            }
            D_EBFBE0_801CD9C0 = 0;
            D_EBFBE0_801CD94C++;
            break;

        case 3:
            if (D_EBFBE0_801CD9C0 != 0) {
                break;
            }
            D_EBFBE0_801CEFC8 = 1;
            D_EBFBE0_801CD97C = 1;
            D_EBFBE0_801CD94C = 0;
            D_EBFBE0_801CD944 = 3;
            break;
    }

    func_800B6F50(D_EBFBE0_801CD9F4, D_EBFBE0_801CD9F8, D_EBFBE0_801CD9FC, D_EBFBE0_801CDA00, D_EBFBE0_801CDA04,
                  D_EBFBE0_801CDA08);

    D_EBFBE0_801CD9C4++;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_menu/fox_map/func_EBFBE0_801A2B8C.s")
#endif

void func_EBFBE0_801A2EB8(void) {
    s32 i;
    s32 temp1;
    s32 temp2;

    if (D_EBFBE0_801CD9C4 == 30) {
        if (D_EBFBE0_801CD93C == 2) {
            Audio_PlaySfx(0x0900802AU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x09000032U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }

    func_EBFBE0_801A3440(D_EBFBE0_801CEEE0);

    if (D_EBFBE0_801CD9C4 == 80) {
        D_EBFBE0_801CD954 = D_EBFBE0_801CD958;
        D_80177B90[D_80177B48] = D_EBFBE0_801CD954;
        func_EBFBE0_801A6368();
    }

    if (D_EBFBE0_801CD9C4 < 80) {
        D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_18 += 16;
        if (D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_18 > 255) {
            D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_18 = 255;
        }

        planet[D_EBFBE0_801CD958].alpha += 16;
        if ((D_EBFBE0_801CD958 == PLANET_SECTOR_Z) || (D_EBFBE0_801CD958 == PLANET_SECTOR_X) ||
            (D_EBFBE0_801CD958 == PLANET_SECTOR_Y)) {
            if (planet[D_EBFBE0_801CD958].alpha > 144) {
                planet[D_EBFBE0_801CD958].alpha = 144;
            }
        } else if (planet[D_EBFBE0_801CD958].alpha > 255) {
            planet[D_EBFBE0_801CD958].alpha = 255;
        }

    } else {
        D_EBFBE0_801CD970 += 16;
        if (D_EBFBE0_801CD970 > 255) {
            D_EBFBE0_801CD970 = 255;
        }

        for (i = 0; i < 24; i++) {
            if (D_80177BD8[i] == 0) {
                continue;
            }
            D_EBFBE0_801AFD18[i].unk_18 += 16;
            if (D_EBFBE0_801AFD18[i].unk_18 > 255) {
                D_EBFBE0_801AFD18[i].unk_18 = 255;
            }
        }

#define PLANET_ID i

        for (PLANET_ID = 0; PLANET_ID < PLANET_MAX; PLANET_ID++) {
            if ((PLANET_ID == D_EBFBE0_801CD954) || (PLANET_ID == D_EBFBE0_801CD958)) {
                continue;
            }

            planet[PLANET_ID].alpha += 16;

            if ((PLANET_ID == PLANET_SECTOR_Z) || (PLANET_ID == PLANET_SECTOR_X) || (PLANET_ID == PLANET_SECTOR_Y)) {
                if (planet[PLANET_ID].alpha > 144) {
                    planet[PLANET_ID].alpha = 144;
                }
            } else {
                if (planet[PLANET_ID].alpha > 255) {
                    planet[PLANET_ID].alpha = 255;
                }
            }
        }

#undef PLANET_ID
    }

    if ((D_EBFBE0_801CEED8 == 4) && (D_EBFBE0_801CEEDC == 0.0f)) {
        Audio_PlaySfx(0x19000026U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    if ((D_EBFBE0_801CEED8 == 5) && (D_EBFBE0_801CEEDC == 0.0f)) {
        if (D_EBFBE0_801CD93C != 2) {
            D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_14 = 2;
            D_EBFBE0_801CEEA0 = 0;
            D_EBFBE0_801CEEA4 = 100;
            D_EBFBE0_801CEEA8 = 255;
            D_EBFBE0_801CEEAC = 255;
        }
    }

    if (D_EBFBE0_801CEED8 == -1) {

        D_EBFBE0_801CEED4 = -1;
        if (planet[D_EBFBE0_801CD958].unk_2C != -1) {
            temp1 = func_EBFBE0_801A655C(D_EBFBE0_801CD958, planet[D_EBFBE0_801CD958].unk_2C);
            D_80177BD8[temp1] = 1;
            D_EBFBE0_801AFD18[temp1].unk_18 = 255;
            D_EBFBE0_801CEED4 = temp1;
        }

        D_EBFBE0_801CEED0 = -1;
        if (planet[D_EBFBE0_801CD958].unk_30 != -1) {
            temp2 = func_EBFBE0_801A655C(D_EBFBE0_801CD958, planet[D_EBFBE0_801CD958].unk_30);
            D_80177BD8[temp2] = 1;
            D_EBFBE0_801AFD18[temp2].unk_18 = 255;
            D_EBFBE0_801CEED0 = temp2;
        }
        D_EBFBE0_801CD9C0 = 50;
        D_EBFBE0_801CD94C++;
    }
}

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

void func_EBFBE0_801A3550(Vec3f* arg0, Vec3f* arg1, Vec3f* arg2, f32 arg3) {
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_ft5;

    temp_fa1 = 0.5f * ((1.0f - arg3) * (1.0f - arg3));
    temp_fs0 = (-arg3 + 1.0f) * arg3 + 0.5f;
    temp_ft5 = SQ(arg3) * 0.5f;

    arg0->x = (temp_fa1 * arg1->x) + (temp_fs0 * (arg1 + 1)->x) + (temp_ft5 * (arg1 + 2)->x);
    arg0->y = (temp_fa1 * arg1->y) + (temp_fs0 * (arg1 + 1)->y) + (temp_ft5 * (arg1 + 2)->y);
    arg0->z = (temp_fa1 * arg1->z) + (temp_fs0 * (arg1 + 1)->z) + (temp_ft5 * (arg1 + 2)->z);

    (arg0 + 1)->x = (temp_fa1 * arg2->x) + (temp_fs0 * (arg2 + 1)->x) + (temp_ft5 * (arg2 + 2)->x);
    (arg0 + 1)->y = (temp_fa1 * arg2->y) + (temp_fs0 * (arg2 + 1)->y) + (temp_ft5 * (arg2 + 2)->y);
    (arg0 + 1)->z = (temp_fa1 * arg2->z) + (temp_fs0 * (arg2 + 1)->z) + (temp_ft5 * (arg2 + 2)->z);
}

void func_EBFBE0_801A36A8(void) {
    s32 i;
    f32 temp;

    switch (D_EBFBE0_801CD948) {
        case 0:
            D_80178348 = 0;
            D_80178350 = 0;
            D_80178354 = 0;
            D_80178340 = 0xFF;

            for (i = 0; i < 8; i++) {
                D_EBFBE0_801CF020[i] = D_EBFBE0_801B69D4[i];
                D_EBFBE0_801CF040[i] = D_EBFBE0_801B69F4[i];
                D_EBFBE0_801CF060[i] = D_EBFBE0_801B6A14[i];
            }

            D_EBFBE0_801CF0C8 = D_EBFBE0_801B6A34[1];
            D_EBFBE0_801CF0CC = D_EBFBE0_801B6A3C[1];
            D_EBFBE0_801CF0D0 = D_EBFBE0_801B6A44[1];

            D_EBFBE0_801CF120 = 0;
            D_EBFBE0_801CEA9C = 255.0f;
            D_EBFBE0_801CF080 = 1.0f;
            D_EBFBE0_801CD948 = 10;

            func_8001D444(0, 0x28, 0, 0xFF);
            break;

        case 10:
            temp = Math_SmoothStepToF(&D_EBFBE0_801CEA9C, 0.0f, 1.0f, 100.0f, 1.0f);

            D_80178340 = D_EBFBE0_801CEA9C;

            if (temp == 0.0f) {
                D_80178340 = 0;
                D_EBFBE0_801CD9C0 = 0;
                D_EBFBE0_801CD948 = 20;
            }
            break;

        case 20:
            if (D_EBFBE0_801CD9C0 != 0) {
                break;
            }
            D_EBFBE0_801CD94C = 0;
            D_EBFBE0_801CD9C0 = 0;
            D_EBFBE0_801CD948 = 1;
            break;

        case 1:
            if (D_EBFBE0_801CF120) {
                D_EBFBE0_801CDA1C += 0.03f;
            }
            if (D_EBFBE0_801CD9C0) {
                break;
            }
            func_EBFBE0_801A3A00();
            break;

        case 2:
            func_EBFBE0_801A4394();
            break;

        case 3:
            D_80178340 += 32;
            if (D_80178340 > 255) {
                D_80178340 = 255;
                D_EBFBE0_801CD948++;
            }
            break;

        case 4:
            gGameState = 3;
            D_Timer_8017783C = 2;
            D_8017784C = 0;
            gDrawMode = 0;
            D_80178410 = 0;
            break;
    }

    if (gControllerPress[gMainController].button & (A_BUTTON | START_BUTTON)) {
        Audio_PlaySfx(0x49000003U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_EBFBE0_801CD948 = 3;
    }
}

void func_EBFBE0_801A3A00(void) {
    s32 i;
    bool boolTemp;
    f32 temp1[8];
    f32 temp2[8];
    f32 temp3[8];

    switch (D_EBFBE0_801CD94C) {
        case 0:
            for (i = 0; i < 8; i++) {
                if (!D_EBFBE0_801CF120) {
                    D_EBFBE0_801CF0D8[i] = i * 4;
                } else {
                    D_EBFBE0_801CF0D8[i] = i * 3;
                }
                D_EBFBE0_801CF088[i] = 0.0f;
                D_EBFBE0_801CF0A8[i] = 0.0f;
                D_EBFBE0_801CF0F8[i] = 0;
            }
            D_EBFBE0_801CD94C++;
            break;

        case 1:
            for (i = 0; i < 8; i++) {
                if (D_EBFBE0_801CF0D8[i] != 0) {
                    D_EBFBE0_801CF0D8[i]--;
                    continue;
                }

                temp1[i] = Math_SmoothStepToF(&D_EBFBE0_801CF020[i], *(D_EBFBE0_801CF0C8 + i), 0.05f, 100.0f, 10.0f);
                temp2[i] = Math_SmoothStepToF(&D_EBFBE0_801CF040[i], *(D_EBFBE0_801CF0CC + i), 0.05f, 100.0f, 10.0f);
                temp3[i] = Math_SmoothStepToF(&D_EBFBE0_801CF060[i], *(D_EBFBE0_801CF0D0 + i), 0.1f, 100.0f, 0.1f);

                if (temp1[i] == 0.0f && temp2[i] == 0.0f && temp3[i] == 0.0f) {
                    D_EBFBE0_801CF088[i] = 0.0f;
                    if (temp3[i] == 0.0f) {
                        D_EBFBE0_801CF0F8[i] = 1;
                    }
                } else {
                    D_EBFBE0_801CF088[i] += 10.0f;
                }
            }

            boolTemp = true;
            for (i = 0; i < 8; i++) {
                if (D_EBFBE0_801CF0F8[i] == 0) {
                    boolTemp = false;
                    break;
                }
            }

            if (boolTemp == true) {
                D_EBFBE0_801CF118 = 0;
                for (i = 0; i < 8; i++) {
                    D_EBFBE0_801CF088[i] = 0.0f;
                    D_EBFBE0_801CF0D8[i] = i * 10;
                    D_EBFBE0_801CF0F8[i] = 0;
                }
                D_EBFBE0_801CD9C0 = 60;
                D_EBFBE0_801CD9BC = 85;
                D_EBFBE0_801CD94C = 11;
            }
            break;

        case 11:
            if (D_EBFBE0_801CD9C0) {
                break;
            }

            if (D_EBFBE0_801CD9BC) {
                for (i = 0; i < 8; i++) {
                    Math_SmoothStepToF(&D_EBFBE0_801CF088[i], 360.0f, 0.3f, 100.0f, 1.0f);
                    Math_SmoothStepToF(&D_EBFBE0_801CF0A8[i], 360.0f, 0.3f, 100.0f, 1.0f);
                }
            } else {
                D_EBFBE0_801CD94C = 10;
            }
            break;

        case 10:
            if (!D_EBFBE0_801CD9B8) {
                if (!D_EBFBE0_801CF120) {
                    D_EBFBE0_801CEAA0 = 0.0f;
                    D_EBFBE0_801CD9B8 = 25;
                    D_EBFBE0_801CD94C = 3;
                } else {
                    for (i = 0; i < 8; i++) {
                        D_EBFBE0_801CF088[i] = 0.0f;
                        D_EBFBE0_801CF0A8[i] = 0.0f;
                        D_EBFBE0_801CF0F8[i] = 0;
                    }
                    D_EBFBE0_801CEFCC = 0;
                    D_EBFBE0_801CF0D8[0] = 4;
                    D_EBFBE0_801CD94C = 2;
                }
            }
            break;

        case 2:
            if (D_EBFBE0_801CF0D8[0]) {
                D_EBFBE0_801CF0D8[0]--;
            } else {
                D_EBFBE0_801CEFCC++;
                if (D_EBFBE0_801CEFCC > 8) {
                    D_EBFBE0_801CEFCC = 8;
                    boolTemp = true;

                    for (i = 0; i < 8; i++) {
                        if (D_EBFBE0_801CF0F8[i] == 0) {
                            boolTemp = false;
                            break;
                        }
                    }

                    if (boolTemp) {
                        D_EBFBE0_801CEFCC = 0;
                        D_EBFBE0_801CF11C ^= 1;
                        D_EBFBE0_801CF0C8 = D_EBFBE0_801B6A34[D_EBFBE0_801CF11C];
                        D_EBFBE0_801CF0CC = D_EBFBE0_801B6A3C[D_EBFBE0_801CF11C];
                        D_EBFBE0_801CF0D0 = D_EBFBE0_801B6A44[D_EBFBE0_801CF11C];

                        D_EBFBE0_801CD9C0 = 15;
                        if (D_EBFBE0_801CF11C) {
                            D_EBFBE0_801CD9C0 = 240;
                        }
                        D_EBFBE0_801CD94C = 0;
                    }
                } else {
                    D_EBFBE0_801CF0D8[0] = 4;
                }
            }

            for (i = 0; i < D_EBFBE0_801CEFCC; i++) {
                if (D_EBFBE0_801CF0F8[i] == 1) {
                    continue;
                }

                if (D_EBFBE0_801CF0A8[i] > 360.0f) {
                    D_EBFBE0_801CF0A8[i] = 0.0f;
                    D_EBFBE0_801CF0F8[i] = 1;
                } else {
                    D_EBFBE0_801CF0A8[i] += 10.0f;
                }
            }
            break;

        case 3:
            if (D_EBFBE0_801CD9B8 != 0) {
                break;
            }

            for (i = 0; i < 8; i++) {
                D_EBFBE0_801CF088[i] += 30.0f;
                D_EBFBE0_801CF060[i] += -300.0f;
                if (D_EBFBE0_801CF060[i] <= -120000.0f) {
                    D_EBFBE0_801CF060[i] = -12000.0f;
                }
            }

            if (D_EBFBE0_801CF060[0] <= -11000.0f) {
                D_EBFBE0_801CEAA0 += 32.0f;

                if (D_EBFBE0_801CEAA0 > 255.0f) {
                    D_EBFBE0_801CEAA0 = 255.0f;
                }

#define PLANET_ID i
                for (PLANET_ID = 0; PLANET_ID < PLANET_MAX; PLANET_ID++) {
                    planet[PLANET_ID].alpha = D_EBFBE0_801CEAA0;
                    D_EBFBE0_801CD970 = D_EBFBE0_801CEAA0;
                    if ((PLANET_ID == PLANET_SECTOR_Z) || (PLANET_ID == PLANET_SECTOR_X) ||
                        (PLANET_ID == PLANET_SECTOR_Y)) {
                        if (planet[PLANET_ID].alpha > 144) {
                            planet[PLANET_ID].alpha = 144;
                        }
                    }
                }
#undef PLANET_ID
            }

            if (D_EBFBE0_801CEAA0 == 255.0f) {
                D_EBFBE0_801CF080 = 0.0f;
                D_EBFBE0_801CD948 = 2;
                D_EBFBE0_801CD94C = 0;
            }
            break;
    }
}

void func_EBFBE0_801A4394(void) {
    s32 i;

    switch (D_EBFBE0_801CD94C) {
        case 0:
            if (D_80177B48 == 0) {
                D_EBFBE0_801CD9C0 = 45;
                D_EBFBE0_801CD94C = 3;
            } else {
                D_EBFBE0_801CD94C++;
            }
            break;

        case 1:
            if (D_80177B48 == D_EBFBE0_801CD9AC) {
                D_EBFBE0_801CD94C = 3;
                D_EBFBE0_801CD9C0 = 45;
                break;
            }

            if ((D_EBFBE0_801AFD18[D_EBFBE0_801CD8E0[D_EBFBE0_801CD9AC]].unk_00 == 3) ||
                (D_EBFBE0_801AFD18[D_EBFBE0_801CD8E0[D_EBFBE0_801CD9AC]].unk_00 == 4)) {
                D_80177BD8[D_EBFBE0_801CD8E0[D_EBFBE0_801CD9AC]] = 5;
                D_EBFBE0_801AFD18[D_EBFBE0_801CD8E0[D_EBFBE0_801CD9AC]].unk_14 = 5;
            } else {
                D_80177BD8[D_EBFBE0_801CD8E0[D_EBFBE0_801CD9AC]] = 2;
                D_EBFBE0_801AFD18[D_EBFBE0_801CD8E0[D_EBFBE0_801CD9AC]].unk_14 = 0;
            }

            D_EBFBE0_801AFD18[D_EBFBE0_801CD8E0[D_EBFBE0_801CD9AC]].unk_18 = 255;
            D_EBFBE0_801CEEAC = 255;
            D_EBFBE0_801CEEA8 = 255;
            D_EBFBE0_801CD94C++;
            break;

        case 2:
            if ((D_80177BD8[D_EBFBE0_801CD8E0[D_EBFBE0_801CD9AC]] == 3) ||
                (D_80177BD8[D_EBFBE0_801CD8E0[D_EBFBE0_801CD9AC]] == 6)) {
                D_EBFBE0_801CD9AC++;
                D_EBFBE0_801CD94C = 1;
            }
            break;

        case 3:
            if (D_EBFBE0_801CD9C0 != 0) {
                break;
            }

            for (i = 0; i < 8; i++) {
                D_EBFBE0_801CF020[i] = D_EBFBE0_801B69D4[i];
                D_EBFBE0_801CF040[i] = D_EBFBE0_801B69F4[i];
                D_EBFBE0_801CF060[i] = D_EBFBE0_801B6A14[i];
            }

            D_EBFBE0_801CD978 = 1;
            D_EBFBE0_801CF120 = 1;
            D_EBFBE0_801CF11C = 1;

            D_EBFBE0_801CF0C8 = D_EBFBE0_801B6A34[1];
            D_EBFBE0_801CF0CC = D_EBFBE0_801B6A3C[1];
            D_EBFBE0_801CF0D0 = D_EBFBE0_801B6A44[1];

            D_EBFBE0_801CF080 = 1.0f;
            D_EBFBE0_801CD9C0 = 450;
            D_EBFBE0_801CD94C = 0;
            D_EBFBE0_801CD948 = 1;
            break;
    }
}

void func_EBFBE0_801A4650(void) {
    s32 i;
    static Gfx* D_EBFBE0_801B6A4C[] = {
        (Gfx*) 0x09006AE0, (Gfx*) 0x090086F0, (Gfx*) 0x09005380, (Gfx*) 0x090075A0,
        (Gfx*) 0x09000570, (Gfx*) 0x09002EA0, (Gfx*) 0x090075A0, (Gfx*) 0x09004230,
    };

    Lights_SetOneLight(&gMasterDisp, 0, 0, 127, 28, 58, 105, 65, 70, 48);

    RCP_SetupDL(&gMasterDisp, 0x17);

    gSPTexture(gMasterDisp++, 2500, 200, 0, G_TX_RENDERTILE, G_ON);
    gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN);

    Matrix_Push(&gGfxMatrix);

    Matrix_LookAt(gGfxMatrix, 0.0f, 0.0f, 500.0f, 0.0f, 0.0f, -500.0f, 0.0f, 1.0f, 0.0f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    for (i = 0; i < 8; i++) {
        Matrix_Push(&gGfxMatrix);

        Matrix_Translate(gGfxMatrix, D_EBFBE0_801CF020[i], D_EBFBE0_801CF040[i], D_EBFBE0_801CF060[i], 1);
        Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801CF0A8[i], 1);
        Matrix_RotateX(gGfxMatrix, M_DTOR * D_EBFBE0_801CF088[i], 1);
        Matrix_Scale(gGfxMatrix, D_EBFBE0_801CF080, D_EBFBE0_801CF080, D_EBFBE0_801CF080, 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_EBFBE0_801B6A4C[i]);

        Matrix_Pop(&gGfxMatrix);
    }

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_801A48C0(f32 speed) {
    f32 x;
    f32 y;
    f32 z;
    f32 temp;
    f32 angle;

    Math_SmoothStepToF(&D_EBFBE0_801CDA34, D_EBFBE0_801CDA50.x, speed, 100.0f, 0.1f);
    Math_SmoothStepToF(&D_EBFBE0_801CDA38, D_EBFBE0_801CDA50.y, speed, 100.0f, 0.1f);
    Math_SmoothStepToF(&D_EBFBE0_801CD9FC, D_EBFBE0_801CDA50.z, speed, 100.0f, 0.1f);

    x = D_EBFBE0_801CDA50.x - D_EBFBE0_801CDA34;
    y = D_EBFBE0_801CDA50.y - D_EBFBE0_801CDA38;
    z = D_EBFBE0_801CDA50.z - D_EBFBE0_801CD9FC;

    temp = sqrtf(SQ(x) + SQ(y) + SQ(z));

    angle = M_DTOR * ((1 - (temp / D_EBFBE0_801CEA68)) * 180.0f);

    D_EBFBE0_801CD9F4 = D_EBFBE0_801CDA34 * (1 + __sinf(angle) * 1.1f);
    D_EBFBE0_801CD9F8 = D_EBFBE0_801CDA38 * (1 + __sinf(angle) * 1.3f);
}

void func_EBFBE0_801A4A38(f32 arg0) {
    Math_SmoothStepToF(&D_EBFBE0_801CDA2C, D_EBFBE0_801CDA40.x, arg0, 100.0f, 0.1f);
    Math_SmoothStepToF(&D_EBFBE0_801CDA30, D_EBFBE0_801CDA40.y, arg0, 100.0f, 0.1f);
    Math_SmoothStepToF(&D_EBFBE0_801CDA08, D_EBFBE0_801CDA40.z, arg0, 100.0f, 0.1f);
    D_EBFBE0_801CDA00 = D_EBFBE0_801CDA2C;
    D_EBFBE0_801CDA04 = D_EBFBE0_801CDA30;
}

void func_EBFBE0_801A4AE8(void) {
    s32 var_a0;
    s32 i;

    switch (D_EBFBE0_801CD94C) {
        case 0:
            func_EBFBE0_801A4D7C();
            break;

        case 1:
            if (D_EBFBE0_801CF000[D_EBFBE0_801CEFDC] == 0) {
                if (D_EBFBE0_801CEFD0 != 0) {
                    if (gLifeCount[gPlayerNum] != 0) {
                        func_8001D520();
                        D_EBFBE0_801CD9CC = 1;
                        D_EBFBE0_801CD9D0 = 0;
                        D_EBFBE0_801CD9B8 = 120;
                    } else {
                        D_EBFBE0_801CD9D4 = 1;
                        D_EBFBE0_801CD9B8 = 0;
                    }
                } else {

                    D_EBFBE0_801CD9B8 = 0;
                }
                D_EBFBE0_801CEFC4 = 0;
                D_EBFBE0_801CD94C = 2;
            }
            break;

        case 2:
            if ((D_EBFBE0_801CD9CC != 0) && (D_EBFBE0_801CD9B8 == 110)) {
                gLifeCount[gPlayerNum]--;
            }

            if (D_EBFBE0_801CD9B8 == 0) {
                D_EBFBE0_801CD9CC = 0;

                var_a0 = D_EBFBE0_801CEFDC;
                if (D_EBFBE0_801CD93C != 0) {
                    var_a0 += 2;
                }

                func_EBFBE0_801A4D0C(var_a0);

                if (D_EBFBE0_801CEFDC == 0) {
                    for (i = 0; i < 6; i++) {
                        D_80177C58[i] = gTeamShields[i];
                    }
                    D_EBFBE0_801CEFC8 = 0;
                    D_EBFBE0_801CD948 = 0;
                    D_EBFBE0_801CD944 = 2;
                } else {
                    D_EBFBE0_801CD944 = 3;
                }
                D_EBFBE0_801CD94C = 0;
            }
            break;
    }
}

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

void func_EBFBE0_801A4D7C(void) {
    f32 temp;

    if (func_EBFBE0_801A5770() != 0) {
        D_EBFBE0_801CEFE8[D_EBFBE0_801CEFDC] = 255.0f;
        if (D_EBFBE0_801CD93C != 0) {
            if (D_EBFBE0_801CEFD4 < 0) {
                D_EBFBE0_801CEFDC++;
                if (D_EBFBE0_801CEFDC >= 3) {
                    D_EBFBE0_801CEFDC = 0;
                }
            } else {
                D_EBFBE0_801CEFDC--;
                if (D_EBFBE0_801CEFDC < 0) {
                    D_EBFBE0_801CEFDC = 2;
                }
            }
        } else {
            D_EBFBE0_801CEFDC ^= 1;
        }
    }

    temp = Math_SmoothStepToF(&D_EBFBE0_801CEFE8[D_EBFBE0_801CEFDC], D_EBFBE0_801CEFE0, 0.5f, 100.0f, 1.0f);

    if (temp == 0.0f) {
        if (D_EBFBE0_801CEFE0 == 32.0f) {
            D_EBFBE0_801CEFE0 = 255.0f;
        } else {
            D_EBFBE0_801CEFE0 = 32.0f;
        }
    }

    if (gControllerPress[gMainController].button & (B_BUTTON | START_BUTTON)) {
        func_8001D6DC(0);
        D_EBFBE0_801CEFC4 = 0;
        D_EBFBE0_801CD944 = 3;
        return;
    }

    if (gControllerPress[gMainController].button & A_BUTTON) {
        func_8001D6DC(0);
        Audio_PlaySfx(0x49000003U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_EBFBE0_801CF000[D_EBFBE0_801CEFDC] = 10;

        if (((D_EBFBE0_801CD93C != 0) && (D_EBFBE0_801CEFDC == 2)) ||
            ((D_EBFBE0_801CD93C == 0) && (D_EBFBE0_801CEFDC == 1))) {
            D_EBFBE0_801CEFD0 = 1;
            D_EBFBE0_801CF00C = 10;
        }
        D_EBFBE0_801CD94C = 1;
    }
}

void func_EBFBE0_801A4F8C(void) {
    D_80178410 = 0;
    gGameState = 5;
    D_80177868 = 0;
    D_Timer_8017783C = 2;
    gDrawMode = DRAWMODE_0;
}

void func_EBFBE0_801A4FC4(void) {
    s32 i;
    s32 temp;
    s32 temp2;

    gPlayerNum = 0;

    for (i = 0; i < 6; i++) {
        gSavedTeamShields[i] = D_80177C58[i];
        gTeamShields[i] = D_80177C58[i];
        D_80177C38[i] = D_80177C58[i];
    }

    for (i = 1; i < 4; i++) {
        if (D_80177C38[i] == 0) {
            D_80177C38[i] = 255;
        }
    }

    gLaserStrength[gPlayerNum] = 0;
    gBombCount[gPlayerNum] = 3;

    if (planet[D_EBFBE0_801CD954].unk_2C != -1) {
        temp2 = func_EBFBE0_801A655C(D_EBFBE0_801CD954, planet[D_EBFBE0_801CD954].unk_2C);
        D_80177BD8[temp2] = 0;
        D_EBFBE0_801AFD18[temp2].unk_18 = 0;
    }

    if (planet[D_EBFBE0_801CD954].unk_30 != -1) {
        temp = func_EBFBE0_801A655C(D_EBFBE0_801CD954, planet[D_EBFBE0_801CD954].unk_30);
        D_80177BD8[temp] = 0;
        D_EBFBE0_801AFD18[temp].unk_18 = 0;
    }

    if (planet[D_EBFBE0_801CD954].unk_34 != -1) {
        temp = func_EBFBE0_801A655C(D_EBFBE0_801CD954, planet[D_EBFBE0_801CD954].unk_34);
        D_80177BD8[temp] = 0;
        D_EBFBE0_801AFD18[temp].unk_18 = 0;
    }

    D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_14 = 0;
    D_EBFBE0_801CEEA0 = 0;
    D_EBFBE0_801CEEA4 = 0;
    D_EBFBE0_801CEEA8 = 255;
    D_EBFBE0_801CEEAC = 255;

    gTotalHits -= D_80177B70[D_80177B48 - 1];
    D_80177B90[D_80177B48] = -1;
    D_80177B70[D_80177B48 - 1] = 0;
    D_80177BB0[D_80177B48 - 1] = 0;
    D_80177B50[D_80177B48 - 1] = 0x00FFFFFF;
    gHitCount = 0;
    D_80177B48--;

    D_EBFBE0_801CD83C = func_EBFBE0_801A05B4();

    D_EBFBE0_801CD954 = D_EBFBE0_801CD950;

    if (planet[D_EBFBE0_801CD954].unk_2C != -1) {
        temp2 = func_EBFBE0_801A655C(D_EBFBE0_801CD954, planet[D_EBFBE0_801CD954].unk_2C);
        D_80177BD8[temp2] = 1;
        D_EBFBE0_801AFD18[temp2].unk_18 = 255;
    }

    if (planet[D_EBFBE0_801CD954].unk_30 != -1) {
        temp = func_EBFBE0_801A655C(D_EBFBE0_801CD954, planet[D_EBFBE0_801CD954].unk_30);
        D_80177BD8[temp] = 1;
        D_EBFBE0_801AFD18[temp].unk_18 = 255;
    }

    if (planet[D_EBFBE0_801CD954].unk_34 != -1) {
        temp = func_EBFBE0_801A655C(D_EBFBE0_801CD954, planet[D_EBFBE0_801CD954].unk_34);
        D_80177BD8[temp] = 0;
        D_EBFBE0_801AFD18[temp].unk_18 = 0;
    }

    func_EBFBE0_801A6368();
}

void func_EBFBE0_801A53C8(void) {
    s32 temp;
    s32 temp2;

    D_EBFBE0_801CEFD8 ^= 1;

    if (planet[D_EBFBE0_801CD954].unk_2C != -1) {
        temp2 = func_EBFBE0_801A655C(D_EBFBE0_801CD954, planet[D_EBFBE0_801CD954].unk_2C);
        D_80177BD8[temp2] = 0;
        D_EBFBE0_801AFD18[temp2].unk_18 = 0;
    }

    if (planet[D_EBFBE0_801CD954].unk_30 != -1) {
        temp = func_EBFBE0_801A655C(D_EBFBE0_801CD954, planet[D_EBFBE0_801CD954].unk_30);
        D_80177BD8[temp] = 0;
        D_EBFBE0_801AFD18[temp].unk_18 = 0;
    }

    D_80177BD8[D_EBFBE0_801CEECC] = 0;

    D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_18 = 0;
    D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_14 = 0;

    D_EBFBE0_801CD954 = D_EBFBE0_801CD950;

    if (!D_EBFBE0_801CEFD8) {
        D_EBFBE0_801CD958 = planet[D_EBFBE0_801CD954].unk_2C;
    } else if (D_EBFBE0_801CD93C != 2) {
        if (planet[D_EBFBE0_801CD954].unk_30 != -1) {
            D_EBFBE0_801CD958 = planet[D_EBFBE0_801CD954].unk_30;
        } else {
            D_EBFBE0_801CD958 = planet[D_EBFBE0_801CD954].unk_2C;
        }
    } else if (planet[D_EBFBE0_801CD954].unk_34 != -1) {
        D_EBFBE0_801CD958 = planet[D_EBFBE0_801CD954].unk_34;
    } else {
        D_EBFBE0_801CD958 = planet[D_EBFBE0_801CD954].unk_2C;
    }

    D_EBFBE0_801CEECC = func_EBFBE0_801A655C(D_EBFBE0_801CD954, D_EBFBE0_801CD958);

    D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_18 = 255;

    D_80177BD8[D_EBFBE0_801CEECC] = 3;

    D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_14 = 2;

    if ((D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_00 == 3) || (D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_00 == 4)) {
        D_80177BD8[D_EBFBE0_801CEECC] = 5;
        D_EBFBE0_801AFD18[D_EBFBE0_801CEECC].unk_14 = 5;
    }

    D_EBFBE0_801CEEA0 = 0;
    D_EBFBE0_801CEEA4 = 100;
    D_EBFBE0_801CEEA8 = 255;
    D_EBFBE0_801CEEAC = 255;

    D_EBFBE0_801CD954 = D_EBFBE0_801CD958;
    D_80177B90[D_80177B48] = D_EBFBE0_801CD954;

    func_EBFBE0_801A6368();

    if (planet[D_EBFBE0_801CD958].unk_2C != -1) {
        temp2 = func_EBFBE0_801A655C(D_EBFBE0_801CD958, planet[D_EBFBE0_801CD958].unk_2C);
        D_80177BD8[temp2] = 1;
        D_EBFBE0_801AFD18[temp2].unk_18 = 255;
    }

    if (planet[D_EBFBE0_801CD958].unk_30 != -1) {
        temp = func_EBFBE0_801A655C(D_EBFBE0_801CD958, planet[D_EBFBE0_801CD958].unk_30);
        D_80177BD8[temp] = 1;
        D_EBFBE0_801AFD18[temp].unk_18 = 255;
    }
}

bool func_EBFBE0_801A5770(void) {
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

void func_EBFBE0_801A5834(void) {
    s32 i;
    f32 x;
    f32 y;
    f32 z;
    u8* texture;
    s32 colorIndex;
    s32 var_t0;
    s32 mask;
    s32 r[3];
    s32 g[3];
    s32 b[3];
    static f32 D_EBFBE0_801B6A6C[] = { 3.05f, 4.15f };

    x = 101.0f;
    y = 92.0f;
    z = 0.0f;

    colorIndex = 0;

    for (i = 0; i < 3; i++) {
        r[i] = 64;
        g[i] = 64;
        b[i] = 64;
        if (i == D_EBFBE0_801CEFDC) {
            r[i] = 255;
            g[i] = D_EBFBE0_801CEFE8[i];
            b[i] = D_EBFBE0_801CEFE8[i];
        }
    }

    var_t0 = 1;
    if (!D_EBFBE0_801CD93C) {
        var_t0 = 0;
    }

    if (gLifeCount[gPlayerNum]) {
        texture = D_6001080;
    } else {
        texture = (u8*) D_6000000;
    }

    RCP_SetupDL(&gMasterDisp, 0x4C);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 60, 60, 255, 170);

    TextureRect_8bIA(&gMasterDisp, D_601B4B0, 24, 17, x, y, 4.6f, D_EBFBE0_801B6A6C[var_t0]);

    mask = 0xFFFFFFFF;
    if (D_EBFBE0_801CF000[colorIndex] != 0) {
        mask = 0x00000001;
        D_EBFBE0_801CF000[colorIndex]--;
    }

    if (gFrameCount & mask) {
        RCP_SetupDL(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, r[colorIndex], g[colorIndex], b[colorIndex], 255);
        TextureRect_8bIA(&gMasterDisp, D_6000840, 96, 22, x + 11.0f, y + 3.0f, 1.0f, 1.0f);
    }
    z = 24.0f;
    colorIndex++;

    if (D_EBFBE0_801CD93C != 0) {
        mask = 0xFFFFFFFF;
        if (D_EBFBE0_801CF000[colorIndex] != 0) {
            mask = 0x00000001;
            D_EBFBE0_801CF000[colorIndex]--;
        }

        if (gFrameCount & mask) {
            gDPSetPrimColor(gMasterDisp++, 0, 0, r[colorIndex], g[colorIndex], b[colorIndex], 255);
            TextureRect_8bIA(&gMasterDisp, D_60018C0, 96, 10, x + 10.0f, y + z + 8.0f, 1.0f, 1.0f);
        }
        z += 18.0f;
        colorIndex++;
    }

    mask = 0xFFFFFFFF;
    if (D_EBFBE0_801CF000[colorIndex] != 0) {
        mask = 0x00000001;
        D_EBFBE0_801CF000[colorIndex]--;
    }

    if (gFrameCount & mask) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, r[colorIndex], g[colorIndex], b[colorIndex], 255);
        TextureRect_8bIA(&gMasterDisp, texture, 96, 22, x + 9.0f, y + z + 5.0f, 1.0f, 1.0f);
    }
}

void func_EBFBE0_801A5C90(void) {
    s32 pad[3];
    f32 scale;

    if (D_EBFBE0_801CD9CC != 0) {
        if (gLifeCount[gPlayerNum] < 10) {
            scale = 0.13f;
        } else {
            scale = 0.18f;
        }

        switch (D_EBFBE0_801CD9CC) {
            case 1:
                D_EBFBE0_801CD9C0 = 2;
                D_EBFBE0_801CD9CC = 2;
                break;

            case 2:
                if (D_EBFBE0_801CD9C0 != 0) {
                    break;
                }

                if ((D_EBFBE0_801CD9D0 + 1) > 3) {
                    D_EBFBE0_801CD9D0 = 0;
                    D_EBFBE0_801CD9CC = 0;
                } else {
                    D_EBFBE0_801CD9D0++;
                    D_EBFBE0_801CD9CC = 1;
                }
                break;
        }

        Matrix_Push(&gGfxMatrix);

        Matrix_LookAt(gGfxMatrix, 0.0f, 0.0f, 100.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        RCP_SetupDL(&gMasterDisp, 0x35);

        Matrix_Push(&gGfxMatrix);

        Matrix_Translate(gGfxMatrix, 45.0f, 32.0f, 0.01f, 1);
        Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_EBFBE0_801AF824[D_EBFBE0_801CD9D0]);

        Matrix_Pop(&gGfxMatrix);
    }
}

void func_EBFBE0_801A5E80(void) {
    switch (D_EBFBE0_801B8280) {
        case 0:
            D_EBFBE0_801B8284 = 0;
            D_EBFBE0_801CD9A0 = 1;
            func_EBFBE0_801A6368();
            D_EBFBE0_801CD9A8 = func_EBFBE0_801A62FC(D_EBFBE0_801CD954);
            func_EBFBE0_801AB284();
            D_EBFBE0_801B8280++;
            break;

        case 1:
            if ((gControllerPress[gMainController].button & START_BUTTON) && !(D_EBFBE0_801CD9A8)) {
                func_8001A838(0x4100001EU);
                func_8001AE58();
                D_EBFBE0_801CF018 = 0;
                D_EBFBE0_801B8280 = 2;
                D_EBFBE0_801CD9B8 = 0;
            }

            if ((gControllerPress[gMainController].button & A_BUTTON) && (D_EBFBE0_801CD9A0 == 0) &&
                !(D_EBFBE0_801CD9A8)) {
                func_8001AE58();
                D_Timer_801782AC = 0;
            }

            if ((gControllerPress[gMainController].button & A_BUTTON) && (D_EBFBE0_801CD9A0 == 1) &&
                !(D_EBFBE0_801CD9A8)) {
                D_EBFBE0_801CD9A0 = 0;
            }

            if (D_EBFBE0_801CF018 == 7) {
                D_EBFBE0_801CD9B8 = 5;
                D_EBFBE0_801B8280++;
            }
            break;

        case 2:
            if (D_EBFBE0_801CD9B8 != 0) {
                break;
            }

            if (D_EBFBE0_801B8284 < 120) {
                D_EBFBE0_801B8284 += 15;
                if (D_EBFBE0_801CD954 == PLANET_CORNERIA) {
                    *D_EBFBE0_801CEB48 = 0;
                }
            } else {
                D_EBFBE0_801CD9B8 = 5;
                D_EBFBE0_801CF018 = 0;
                D_EBFBE0_801B8280++;
            }
            break;

        case 3:
            if (D_EBFBE0_801CD9B8 == 0) {
                D_EBFBE0_801CD9B8 = 5;
                D_EBFBE0_801CD968 = 1;
                D_EBFBE0_801B8280++;
            }
            break;

        case 4:
            if (D_EBFBE0_801CD9B8 == 0) {
                Audio_PlaySfx(0x49002016U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_EBFBE0_801CD9B8 = 75;
                D_EBFBE0_801B8280++;
            }
            break;

        case 5:
            if (D_EBFBE0_801CD9B8 == 0) {
                func_EBFBE0_801A61B4(gCurrentLevel);
                D_EBFBE0_801B8280 = 0;
                D_EBFBE0_801CD968 = 0;
                func_EBFBE0_801A6628();
            }
            break;
    }
}

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

PlanetId GetPlanetId(LevelId level) {
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
    PlanetId planetId;
    Vec3f dest;
    Vec3f src;

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 0.0f;

    for (planetId = 0; planetId < PLANET_MAX; planetId++) {
        Matrix_Push(&gGfxMatrix);

        Matrix_RotateY(gGfxMatrix, M_DTOR * planet[planetId].unk_1C, 1);
        Matrix_Translate(gGfxMatrix, planet[planetId].unk_04, planet[planetId].unk_08, 0.0f, 1);

        Matrix_RotateY(gGfxMatrix, M_DTOR * -planet[planetId].unk_1C, 1);

        func_EBFBE0_801AD048();

        Matrix_SetGfxMtx(&gMasterDisp);

        Matrix_Copy(&D_EBFBE0_801CDA60[planetId], gGfxMatrix);

        Matrix_MultVec3f(gGfxMatrix, &src, &dest);

        planet[planetId].posX = dest.x;
        planet[planetId].posY = dest.y;
        planet[planetId].posZ = dest.z;

        Matrix_Pop(&gGfxMatrix);

        Matrix_Push(&gGfxMatrix);

        Matrix_LookAt(gGfxMatrix, D_EBFBE0_801CD9F4, D_EBFBE0_801CD9F8, D_EBFBE0_801CD9FC, D_EBFBE0_801CDA00,
                      D_EBFBE0_801CDA04, D_EBFBE0_801CDA08, D_EBFBE0_801CDA20, D_EBFBE0_801CDA24, D_EBFBE0_801CDA28, 1);
        Matrix_Translate(gGfxMatrix, D_EBFBE0_801CEA58, D_EBFBE0_801CEA5C, D_EBFBE0_801CEA60, 1);
        Matrix_Mult(gGfxMatrix, &D_EBFBE0_801CDA60[planetId], 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        Matrix_MultVec3f(gGfxMatrix, &src, &D_EBFBE0_801CE960[planetId]);

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

void func_EBFBE0_801A6A98(PlanetId planetId) {
    s32 mask;
    s32 temp;

    if ((planet[planetId].alpha == 0) && (planetId != D_EBFBE0_801CD954)) {
        return;
    }

    if ((planetId == D_EBFBE0_801CD954) && (D_EBFBE0_801CD944 == 2) && (D_EBFBE0_801CD95C != 0)) {
        mask = 0x00000001;
    } else {
        mask = 0xFFFFFFFF;
    }

    temp = func_EBFBE0_801A6DAC(planetId);

    func_EBFBE0_801A6EC0(planetId);
    func_EBFBE0_801A7D3C(planetId);
    Matrix_Push(&gGfxMatrix);

    if (gFrameCount & mask) {
        if (planetId == PLANET_TITANIA) {
            func_EBFBE0_801A791C(planetId);
        }

        if ((temp == 1) && (D_EBFBE0_801CE960[planetId].z > D_EBFBE0_801CEA18[planetId]) &&
            (planetId != PLANET_AREA_6) && (planetId != PLANET_BOLSE)) {

            func_EBFBE0_801A7F1C(planetId);
        }

        func_EBFBE0_801A7230(planetId);

        if (planetId == PLANET_SOLAR) {
            func_EBFBE0_801A74F4(planetId);
        }

        if (planet[planetId].unk_28 == 4) {
            if (planetId != PLANET_VENOM) {

                if ((planetId != PLANET_AQUAS) && (planetId != PLANET_TITANIA)) {
                    func_EBFBE0_801A7684(planetId);
                }

                func_EBFBE0_801A77B0(planetId);
            }
            if (planetId == PLANET_VENOM) {
                func_EBFBE0_801A7BEC(&D_EBFBE0_801CEEBC, 0.1f, 3.1f);
                func_EBFBE0_801A7BEC(&D_EBFBE0_801CEEC0, -0.1f, 2.9f);
            }
        }

        if (planetId == PLANET_TITANIA) {
            func_EBFBE0_801A7A84(planetId);
        }

        if ((planetId == PLANET_CORNERIA) && D_EBFBE0_801CEB48[0]) {
            func_EBFBE0_801A89BC(PLANET_CORNERIA, 0);
        }

        if ((planetId == PLANET_KATINA) && D_EBFBE0_801CEB48[1]) {
            func_EBFBE0_801A89BC(PLANET_KATINA, 1);
        }

        if ((planetId == PLANET_SECTOR_Y) && D_EBFBE0_801CEB48[2]) {
            func_EBFBE0_801A89BC(PLANET_SECTOR_Y, 2);
        }

        if ((temp == 1) && (D_EBFBE0_801CE960[planetId].z <= D_EBFBE0_801CEA18[planetId]) &&
            (planetId != PLANET_AREA_6) && (planetId != PLANET_BOLSE)) {

            func_EBFBE0_801A7F1C(planetId);
        }

        if ((temp == 1) && ((planetId == PLANET_AREA_6) || (planetId == PLANET_BOLSE))) {

            func_EBFBE0_801A7F1C(planetId);
        }

        if (temp == 2) {
            func_EBFBE0_801A809C(planetId);
        }
    }
    Matrix_Pop(&gGfxMatrix);
}

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

void func_EBFBE0_801A6EC0(PlanetId planetId) {
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

void func_EBFBE0_801A7230(PlanetId planetId) {
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

void func_EBFBE0_801A74F4(PlanetId planetId) {
    static f32 D_EBFBE0_801B6A74 = 0.0f;
    s32 alpha = planet[13].alpha;

    if (planet[planetId].alpha > 128) {
        alpha = 128;
    }

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

void func_EBFBE0_801A7684(PlanetId planetId) {
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

void func_EBFBE0_801A77B0(PlanetId planetId) {
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

void func_EBFBE0_801A791C(PlanetId planetId) {
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

void func_EBFBE0_801A7A84(PlanetId planetId) {
    RCP_SetupDL(&gMasterDisp, 0x43);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 175, 175, planet[planetId].alpha);
    gDPSetEnvColor(gMasterDisp++, 73, 31, 15, 0);

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

void func_EBFBE0_801A7D3C(PlanetId planetId) {
    Vec3f src;
    Vec3f dest;
    f32 scale;

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 0.0f;

    scale = 7.0f + (Rand_ZeroOne() * 8.0f);

    Matrix_Push(&gGfxMatrix);

    Matrix_Mult(gGfxMatrix, &D_EBFBE0_801CDA60[planetId], 1);
    Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801CEAF8[planetId], 1);
    Matrix_Translate(gGfxMatrix, D_EBFBE0_801AFFB8[planetId], 0.0f, 0.0f, 1);
    Matrix_RotateY(gGfxMatrix, M_DTOR * -D_EBFBE0_801CEAF8[planetId], 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    Matrix_Copy(&D_EBFBE0_801CE5A0[planetId], gGfxMatrix);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * D_EBFBE0_801CEAB8[planetId], 1);
    Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);
    Matrix_MultVec3f(gGfxMatrix, &src, &dest);

    D_EBFBE0_801CEA18[planetId] = dest.z;

    Matrix_SetGfxMtx(&gMasterDisp);

    Matrix_Copy(&D_EBFBE0_801CE1E0[planetId], gGfxMatrix);

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_801A7F1C(PlanetId planetId) {
    s32 alpha;

    if (D_EBFBE0_801CD980 != 1) {
        alpha = D_EBFBE0_801CD900[planetId];
    } else {
        alpha = D_EBFBE0_801CD984;
        D_EBFBE0_801CD900[planetId] = 255;
    }

    if (alpha != 0) {
        RCP_SetupDL(&gMasterDisp, 0x43);

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
        gDPSetEnvColor(gMasterDisp++, 80, 80, 0, 0);

        Matrix_Push(&gGfxMatrix);

        Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CE1E0[planetId]);
        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_604D680);

        Matrix_Pop(&gGfxMatrix);

        D_EBFBE0_801CEAB8[planetId] += 45.0f;
        if (D_EBFBE0_801CD980 == 0) {
            D_EBFBE0_801CEAF8[planetId] += 5.0f;
        }
    }
}

void func_EBFBE0_801A809C(PlanetId planetId) {
    static f32 D_EBFBE0_801B6A78 = 0.0f;
    s32 i;
    s32 alpha;
    f32 scale;

    if (D_EBFBE0_801CD98C != 1) {
        alpha = D_EBFBE0_801CD900[planetId];
    } else {
        alpha = D_EBFBE0_801CD984;
        D_EBFBE0_801CD900[planetId] = 255;
    }

    if (alpha == 0) {
        return;
    }

    if (D_EBFBE0_801CD98C == 1) {
        switch (D_EBFBE0_801CD990) {
            case 0:
                RCP_SetupDL(&gMasterDisp, 0x43);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
                gDPSetEnvColor(gMasterDisp++, 80, 80, 0, 0);

                Matrix_Push(&gGfxMatrix);

                Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CE1E0[planetId]);
                Matrix_Translate(gGfxMatrix, 0.0f, -30.0f, 0.0f, 1);

                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_604D680);

                Matrix_Pop(&gGfxMatrix);

                D_EBFBE0_801CEAB8[planetId] += 45.0f;
                if (alpha == 255) {
                    D_EBFBE0_801CD9C8 = 15;
                    D_EBFBE0_801CD998 = 0;
                    D_EBFBE0_801CD994 = 255;
                    D_EBFBE0_801CD99C = 0.0f;
                    D_EBFBE0_801CD990++;
                }
                break;

            case 1:
                scale = 5.0f + (Rand_ZeroOne() * 4.0f);

                Math_SmoothStepToF(&D_EBFBE0_801CD99C, 150.0f, 0.09f, 100.0f, 0.1f);

                RCP_SetupDL(&gMasterDisp, 0x43);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_EBFBE0_801CD994);
                gDPSetEnvColor(gMasterDisp++, 80, 80, 0, 0);

                for (i = 0; i < 8; i++) {
                    Matrix_Push(&gGfxMatrix);

                    Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CE5A0[planetId]);
                    Matrix_Translate(gGfxMatrix, 0.0f, -30.0f, 0.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, M_DTOR * (i * -45.0f), 1);
                    Matrix_Translate(gGfxMatrix, 0.0f, D_EBFBE0_801CD99C, 0.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, M_DTOR * (D_EBFBE0_801B6A78), 1);
                    Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);

                    Matrix_SetGfxMtx(&gMasterDisp);

                    gSPDisplayList(gMasterDisp++, D_604D680);

                    Matrix_Pop(&gGfxMatrix);
                }

                D_EBFBE0_801B6A78 += 45.0f;
                D_EBFBE0_801CD994 -= 16;

                if (D_EBFBE0_801CD994 <= 0) {
                    D_EBFBE0_801CD994 = 0;
                }

                RCP_SetupDL(&gMasterDisp, 0x40);

                gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_EBFBE0_801CD998);

                Matrix_Push(&gGfxMatrix);

                Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CE5A0[planetId]);
                Matrix_Translate(gGfxMatrix, 0.0f, -30.0f, 0.0f, 1);
                Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 3.0f, 1);

                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_601D1F0);

                Matrix_Pop(&gGfxMatrix);

                D_EBFBE0_801CEAF8[planetId] = -90.0f;

                D_EBFBE0_801CD998 += 8;

                if (D_EBFBE0_801CD998 == 8) {
                    Audio_PlaySfx(0x49008030U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }

                if (D_EBFBE0_801CD998 >= 255) {
                    D_EBFBE0_801CD998 = 255;
                }
                if (D_EBFBE0_801CD998 == 255) {
                    if (!D_EBFBE0_801CD9C8) {
                        D_EBFBE0_801CD98C = 0;
                    } else {
                        D_EBFBE0_801CD9C8--;
                    }
                }
                break;
        }
    } else {
        RCP_SetupDL(&gMasterDisp, 0x40);

        gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);

        Matrix_Push(&gGfxMatrix);

        Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CE5A0[planetId]);
        Matrix_Translate(gGfxMatrix, 0.0f, -30.0f, 0.0f, 1);
        Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 3.0f, 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_601D1F0);

        Matrix_Pop(&gGfxMatrix);

        D_EBFBE0_801CEAF8[planetId] = -90.0f;
    }
}

void func_EBFBE0_801A8738(void) {
    if (D_EBFBE0_801CEB34 >= 0) {
        RCP_SetupDL(&gMasterDisp, 0x43);

        gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 0);

        switch (D_EBFBE0_801CEB34) {
            case 0:
                D_EBFBE0_801CEB3C += 0.15f;
                if (D_EBFBE0_801CEB3C >= 0.7f) {
                    D_EBFBE0_801CEB3C = 0.8f;
                    D_EBFBE0_801CEB34 = 2;
                    D_EBFBE0_801CEB40 = 2.0f;
                }
                break;

            case 2:
                D_EBFBE0_801CEB40--;
                if (D_EBFBE0_801CEB40 <= 0.0f) {
                    D_EBFBE0_801CEB34 = 3;
                    D_EBFBE0_801CEB3C = 0.7f;
                }
                break;

            case 3:
                D_EBFBE0_801CEB38 -= 8;
                D_EBFBE0_801CEB3C -= 0.001f;

                if (D_EBFBE0_801CEB38 < 0) {
                    D_EBFBE0_801CEB38 = 0;
                }

                if (D_EBFBE0_801CEB38 == 0) {
                    D_EBFBE0_801CEB34 = 4;
                }
                break;
        }

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 200, 200, D_EBFBE0_801CEB38);

        Matrix_Push(&gGfxMatrix);

        Matrix_Copy(gGfxMatrix, &D_EBFBE0_801CE060);
        Matrix_RotateZ(gGfxMatrix, M_DTOR * -50.0f, 1);
        Matrix_Translate(gGfxMatrix, 0.0f, 25.0f, 0.0f, 1);
        Matrix_Scale(gGfxMatrix, D_EBFBE0_801CEB3C, D_EBFBE0_801CEB3C, D_EBFBE0_801CEB3C, 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_60479D0);

        Matrix_Pop(&gGfxMatrix);
    }
}

void func_EBFBE0_801A89BC(PlanetId planetId, s32 arg1) {
    s32 i;
    s32 temp2;
    f32 temp;

    if (planet[planetId].alpha == 0) {
        return;
    }

    if (D_EBFBE0_801CEB48[arg1] == 0) {
        return;
    }

    temp2 = 10;
    if (planetId != PLANET_CORNERIA) {
        temp2 = 5;
    }

    RCP_SetupDL(&gMasterDisp, 0x43);

    gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 0);

    for (i = 0; i < temp2; i++) {
        switch (D_EBFBE0_801CEB58[arg1][i]) {
            case 0:
                D_EBFBE0_801CEC48[arg1][i] += 0.1f;
                if (D_EBFBE0_801CEC48[arg1][i] >= D_EBFBE0_801CECC0[arg1][i]) {
                    D_EBFBE0_801CEC48[arg1][i] = D_EBFBE0_801CECC0[arg1][i];
                    D_EBFBE0_801CEB58[arg1][i] = 1;
                }
                break;

            case 1:
                D_EBFBE0_801CEE28[arg1][i]--;
                if (D_EBFBE0_801CEE28[arg1][i] <= 0) {
                    D_EBFBE0_801CEB58[arg1][i] = 2;
                }
                break;

            case 2:
                D_EBFBE0_801CEBD0[arg1][i] -= 48;
                if (D_EBFBE0_801CEBD0[arg1][i] < 0) {
                    D_EBFBE0_801CEBD0[arg1][i] = 0;
                    D_EBFBE0_801CEB58[arg1][i] = 3;
                }
                break;

            case 3:
                D_EBFBE0_801CEB58[arg1][i] = Rand_ZeroOne() * 3.0f;
                D_EBFBE0_801CEBD0[arg1][i] = 255;
                D_EBFBE0_801CEC48[arg1][i] = 0.0f;
                D_EBFBE0_801CECC0[arg1][i] = 0.5f + (Rand_ZeroOne() * 0.3f);
                D_EBFBE0_801CEE28[arg1][i] = 1 + (s32) (Rand_ZeroOne() * 4.0f);

                temp = 110.0f;
                if (arg1 == 1) {
                    temp = 50.0f;
                }

                D_EBFBE0_801CED38[arg1][i] = temp + (s32) (Rand_ZeroOne() * 30.0f);
                D_EBFBE0_801CEDB0[arg1][i] = -10.0f + (Rand_ZeroOne() * -60.0f);
                break;
        }

        if ((D_EBFBE0_801CECC0[arg1][i] == 0.0f) || (D_EBFBE0_801CEBD0[arg1][i] == 0)) {
            continue;
        }

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 200, 200, D_EBFBE0_801CEBD0[arg1][i]);

        Matrix_Push(&gGfxMatrix);

        Matrix_Mult(gGfxMatrix, &D_EBFBE0_801CDA60[planetId], 1);
        Matrix_RotateZ(gGfxMatrix, M_DTOR * D_EBFBE0_801CEDB0[arg1][i], 1);
        Matrix_Translate(gGfxMatrix, 0.0f, D_EBFBE0_801CED38[arg1][i], 0.0f, 1);
        Matrix_Scale(gGfxMatrix, D_EBFBE0_801CEC48[arg1][i], D_EBFBE0_801CEC48[arg1][i], D_EBFBE0_801CEC48[arg1][i], 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_60479D0);

        Matrix_Pop(&gGfxMatrix);
    }
}

void func_EBFBE0_801A8F40(void) {
    static f32 D_EBFBE0_801B6A7C = 0.0f;
    s32 temp;

    if (D_EBFBE0_801CD97C != 0) {
        Lights_SetOneLight(&gMasterDisp, 0, 0, 127, 80, 80, 60, 50, 50, 50);

        RCP_SetupDL(&gMasterDisp, 0x17);

        temp = Math_SmoothStepToF(&D_EBFBE0_801CEAA8, D_EBFBE0_801CEAB0, 0.1f, 100.0f, 1.0f);

        if (temp == 0.0f) {
            if (D_EBFBE0_801CEAB0 == D_EBFBE0_801CEAAC) {
                D_EBFBE0_801CEAA8 = D_EBFBE0_801CEAAC + 50.0f;
            }
        }

        Matrix_Push(&gGfxMatrix);

        Matrix_Mult(gGfxMatrix, &D_EBFBE0_801CDA60[D_EBFBE0_801CD954], 1);
        Matrix_Translate(gGfxMatrix, 0.0f, D_EBFBE0_801CEAA8, 0.0f, 1);
        Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801B6A7C, 1);
        Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 3.0f, 1);

        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_601DCF0);

        Matrix_Pop(&gGfxMatrix);

        D_EBFBE0_801B6A7C += 6.0f;
    }
}

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

void func_EBFBE0_801A9224(void) {
    s32 i;
    s32 mask;

    if ((planet[PLANET_METEO].alpha != 0) || (D_EBFBE0_801CD954 == 0)) {
        if ((D_EBFBE0_801CD954 == 0) && (D_EBFBE0_801CD944 == 2) && (D_EBFBE0_801CD95C != 0)) {
            mask = 0x00000001;
        } else {
            mask = 0xFFFFFFFF;
        }

        if ((D_EBFBE0_801CD944 == 3) || ((D_EBFBE0_801CD954 == 0) && (D_EBFBE0_801CD944 != 7))) {
            RCP_SetupDL(&gMasterDisp, 0x35);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x40);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, planet[PLANET_METEO].alpha);
        }

        if (gFrameCount & mask) {
            for (i = 0; i < 42; i++) {
                Matrix_Push(&gGfxMatrix);

                Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801AFA38[i].angle, 1);
                Matrix_Translate(gGfxMatrix, D_EBFBE0_801AFA38[i].x, D_EBFBE0_801AFA38[i].y, 0.0f, 1);
                Matrix_RotateY(gGfxMatrix, M_DTOR * -D_EBFBE0_801AFA38[i].angle, 1);

                func_EBFBE0_801AD048();

                Matrix_Scale(gGfxMatrix, D_EBFBE0_801AFA38[i].scale, D_EBFBE0_801AFA38[i].scale,
                             D_EBFBE0_801AFA38[i].scale, 1);

                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[0]);

                Matrix_Pop(&gGfxMatrix);
            }
        }
    }
}

void func_EBFBE0_801A9448(void) {
    Vec3f src;
    Vec3f dest;
    f32 x1;
    f32 y1;
    f32 x;
    f32 y;
    f32 z;
    s32 i;
    s32 mask;
    static f32 D_EBFBE0_801B6A80 = -22.0f;

    if ((planet[PLANET_AREA_6].alpha == 0) && (D_EBFBE0_801CD954 != PLANET_AREA_6)) {
        return;
    }

    if ((D_EBFBE0_801CD954 == PLANET_AREA_6) && (D_EBFBE0_801CD944 == 2) && (D_EBFBE0_801CD95C != 0)) {
        mask = 0x00000001;
    } else {
        mask = 0xFFFFFFFF;
    }

    if ((D_EBFBE0_801CD944 == 3) || (D_EBFBE0_801CD954 == PLANET_AREA_6)) {
        RCP_SetupDL(&gMasterDisp, 0x17);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x2E);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, planet[PLANET_AREA_6].alpha);
    }

    dest.x = 0.0f;
    dest.y = 0.0f;
    dest.z = 0.0f;

    if (gFrameCount & mask) {
        for (i = 0; i < 4; i++) {
            Matrix_Push(&gGfxMatrix);

            Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801AFCD8[i].angle, 1);
            Matrix_Translate(gGfxMatrix, D_EBFBE0_801AFCD8[i].x, D_EBFBE0_801AFCD8[i].y, 0.0f, 1);
            Matrix_RotateY(gGfxMatrix, M_DTOR * -(D_EBFBE0_801AFCD8[i].angle), 1);

            func_EBFBE0_801AD048();

            Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801B6A80, 1);
            Matrix_Scale(gGfxMatrix, D_EBFBE0_801AFCD8[i].scale, D_EBFBE0_801AFCD8[i].scale, D_EBFBE0_801AFCD8[i].scale,
                         1);

            Matrix_SetGfxMtx(&gMasterDisp);

            Matrix_MultVec3f(gGfxMatrix, &dest, &src);

            x = D_EBFBE0_801CE960[PLANET_SOLAR].x - src.x;
            y = D_EBFBE0_801CE960[PLANET_SOLAR].y - src.y;
            z = D_EBFBE0_801CE960[PLANET_SOLAR].z - src.z;

            x1 = Math_Atan2F(y, sqrtf(SQ(x) + SQ(z)));
            y1 = -Math_Atan2F(x, z);

            dest.x = 0.0f;
            dest.y = 0.0f;
            dest.z = 100.0f;

            Matrix_RotateY(gCalcMatrix, M_DTOR * (-D_EBFBE0_801CDA10 - y1), 0);
            Matrix_RotateX(gCalcMatrix, M_DTOR * (-D_EBFBE0_801CDA0C - x1), 1);

            Matrix_MultVec3f(gCalcMatrix, &dest, &src);
            Lights_SetOneLight(&gMasterDisp, src.x, src.y, src.z, 80, 80, 60, 0, 0, 0);

            gSPDisplayList(gMasterDisp++, D_601E9A0);

            Matrix_Pop(&gGfxMatrix);
        }
    }
}

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

void func_EBFBE0_801A9910(void) {
    static s32 D_EBFBE0_801B6A84[] = { 1, 13, 12, 11, 6, 2, 4, 10, 8, 0, 9, 5, 3, 7, 7 };
    s32 i;
    s32 var_s0 = D_EBFBE0_801B6A84[D_EBFBE0_801CD954];

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, (s32) D_EBFBE0_801CEA6C);

    for (i = 0; i < D_EBFBE0_801AF834[var_s0].height; i++) {
        TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AF834[var_s0].addr + (D_EBFBE0_801AF834[var_s0].width * i),
                         D_EBFBE0_801AF834[var_s0].width, 1, D_EBFBE0_801AF834[var_s0].posX, 20.0f + (1.0f * i), 1.0f,
                         1.0f);
    }

    Math_SmoothStepToF(&D_EBFBE0_801CEA6C, 255.0f, D_EBFBE0_801CEA70, 10.0f, 1.0f);

    D_EBFBE0_801CEA70 *= 1.08;
}

void func_EBFBE0_801A9A8C(void) {
    s32 i;
    s32 sp58;
    u8* sp54;
    static f32 D_EBFBE0_801B6AC0[2] = { 91.0f, 207.0f };
    static f32 D_EBFBE0_801B6AC8[2] = { 61.0f, 61.0f };

    switch (gCurrentLevel) {
        case LEVEL_CORNERIA:
            sp54 = D_500A050;
            sp58 = 0;
            break;

        case LEVEL_METEO:
            sp54 = D_500A140;
            sp58 = 1;
            break;

        case LEVEL_SECTOR_Y:
            sp54 = D_500A140;
            sp58 = 2;
            break;

        case LEVEL_FORTUNA:
            sp54 = D_500A230;
            sp58 = 3;
            break;

        case LEVEL_KATINA:
            sp54 = D_500A230;
            sp58 = 4;
            break;

        case LEVEL_AQUAS:
            sp54 = D_500A230;
            sp58 = 5;
            break;

        case LEVEL_SECTOR_X:
            sp54 = D_500A320;
            sp58 = 6;
            break;

        case LEVEL_SOLAR:
            sp54 = D_500A320;
            sp58 = 7;
            break;

        case LEVEL_ZONESS:
            sp54 = D_500A320;
            sp58 = 8;
            break;

        case LEVEL_TITANIA:
            sp54 = D_500A410;
            sp58 = 9;
            break;

        case LEVEL_MACBETH:
            sp54 = D_500A410;
            sp58 = 10;
            break;

        case LEVEL_SECTOR_Z:
            sp54 = D_500A410;
            sp58 = 11;
            break;

        case LEVEL_BOLSE:
            sp54 = D_500A500;
            sp58 = 12;
            break;

        case LEVEL_AREA_6:
            sp54 = D_500A500;
            sp58 = 13;
            break;
    }

    RCP_SetupDL(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    TextureRect_8bIA(&gMasterDisp, &D_5000500, 112, 19, D_EBFBE0_801B6AC0[0], D_EBFBE0_801B6AC8[0], 1.0f, 1.0f);
    TextureRect_8bIA(&gMasterDisp, sp54, 16, 15, D_EBFBE0_801B6AC0[1], D_EBFBE0_801B6AC8[1], 1.0f, 1.0f);

    for (i = 0; i < D_EBFBE0_801AF834[sp58].height; i++) {
        TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AF834[sp58].addr + (D_EBFBE0_801AF834[sp58].width * i),
                         D_EBFBE0_801AF834[sp58].width, 1, D_EBFBE0_801AF834[sp58].posX, 94.0f + (1.0f * i), 1.0f,
                         1.0f);
    }

    for (i = 0; i < D_EBFBE0_801AF914[sp58].height; i++) {
        TextureRect_8bIA(&gMasterDisp, D_EBFBE0_801AF914[sp58].addr + (D_EBFBE0_801AF914[sp58].width * i),
                         D_EBFBE0_801AF914[sp58].width, 1, D_EBFBE0_801AF914[sp58].posX, 140.0f + (1.0f * i), 1.0f,
                         1.0f);
    }
}

void func_EBFBE0_801A9DE8(void) {
    s32 mask;

    if (!((D_EBFBE0_801CD978 != 0) || (D_EBFBE0_801CD944 == 3) || (D_EBFBE0_801CD944 == 6) ||
          ((D_EBFBE0_801CD944 == 7) && (D_EBFBE0_801CD948 == 2)))) {
        return;
    }

    mask = 0xFFFFFFFF;
    if (D_EBFBE0_801CF00C != 0) {
        mask = 0x00000001;
        D_EBFBE0_801CF00C--;
    }

    if (gFrameCount & mask) {
        func_EBFBE0_801AD7EC(254, 16, gLifeCount[gPlayerNum]);
    }

    if ((D_80161A34 == 7) || (D_80161A34 == 5)) {
        if (D_EBFBE0_801CD83C < gTotalHits) {
            D_EBFBE0_801CD83C = gTotalHits;
        }
        func_EBFBE0_801A9EE4();
        func_EBFBE0_801A9FD4(0);
    }
}

void func_EBFBE0_801A9EE4(void) {
    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    Graphics_DisplaySmallText(24, 14, 1.0f, 1.0f, "TOTAL HITS");
    Graphics_DisplaySmallNumber(71 - (func_8008BCBC(gTotalHits) * 8), 24, gTotalHits);
    Graphics_DisplaySmallText(143, 14, 1.0f, 1.0f, "TOP");
    Graphics_DisplaySmallNumber(167 - (func_8008BCBC(D_EBFBE0_801CD83C) * 8), 24, D_EBFBE0_801CD83C);
}

void func_EBFBE0_801A9FD4(s32 arg0) {
    s32 i;
    s32 var_s3;
    f32 var_fs0, var_fs1;
    s32 pad[2];
    f32 temp = 16.0f;

    if (arg0) {
        var_s3 = D_80177B48;
    } else {
        if ((D_80161A34 == 7) || (D_80161A34 == 8)) {
            var_s3 = D_80177B48;
        }
        if (D_80161A34 == 5) {
            var_s3 = D_EBFBE0_801CD9AC;
        }
    }

    func_EBFBE0_801AA1CC(var_s3);

    if ((D_80161A34 == 7) || (D_80161A34 == 8)) {
        var_s3 = 7;
    }

    if (D_80161A34 == 5) {
        var_s3++;
    }

    Matrix_Push(&gGfxMatrix);

    Matrix_LookAt(gGfxMatrix, 0.0f, 0.0f, 100.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    for (var_fs0 = 0.0f, var_fs1 = -41.5f, i = 0; i < var_s3; i++, var_fs0 += 24.0f + temp, var_fs1 += 13.8f) {
        if (D_80177B90[i] != -1) {
            func_EBFBE0_801AA434(i, 28.0f + var_fs0, 182.0f, D_80177B90[i]);
            func_EBFBE0_801AA778(i, var_fs1, -25.4f, D_80177B90[i]);
        }
    }

    Matrix_Pop(&gGfxMatrix);
}

void func_EBFBE0_801AA1CC(s32 arg0) {
    s32 i;
    f32 x;
    s32 r;
    s32 g;
    s32 b;
    s32 temp;
    f32 y = 182.0f;
    f32 x2 = 16.0f;
    s32* ptr = &D_80177B90[0];

    for (x = 0.0f, i = 0; i < 7; i++, x += 24.0f + x2, ptr++) {
        RCP_SetupDL(&gMasterDisp, 0x53);

        if (i < 6) {
            r = g = b = 255;
            if (i < arg0) {
                temp = func_EBFBE0_801A655C(*ptr, *(ptr + 1));
                switch (D_EBFBE0_801AFD18[temp].unk_00) {
                    case 0:
                        r = 16;
                        g = 64;
                        b = 255;
                        break;

                    case 1:
                    case 3:
                        r = 255;
                        g = 175;
                        b = 0;
                        break;

                    case 2:
                    case 4:
                        g = b = 0;
                        break;
                }
                gDPSetPrimColor(gMasterDisp++, 0, 0, r, g, b, 255);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            }
            TextureRect_16bRGBA(&gMasterDisp, D_60447A0, 8, 8, 28.0f + x + 24.0f, y + 11.0f, 2.0f, 0.2f);
        }
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        TextureRect_16bRGBA(&gMasterDisp, D_6047550, 24, 24, 28.0f + x, y, 1.0f, 1.0f);
    }
}

void func_EBFBE0_801AA434(s32 arg0, f32 x, f32 y, s32 idx) {
    s32 i;
    f32 x2;
    s32 pad;
    s32 mask;
    s32 temp;
    static char* D_EBFBE0_801B6AD0[] = { "P", "S", "F" };
    static s32 D_EBFBE0_801B6ADC[] = { 255, 0, 30 };
    static s32 D_EBFBE0_801B6AE8[] = { 30, 179, 30 };
    static s32 D_EBFBE0_801B6AF4[] = { 0, 67, 255 };

    RCP_SetupDL(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    Graphics_DisplaySmallText(x + 12.0f - Graphics_GetSmallTextWidth(sPlanetNames[idx]) * 0.5f, y - 8.0f, 1.0f, 1.0f,
                              sPlanetNames[idx]);

    Graphics_DisplaySmallNumber(x + 15.0f - ((func_8008BCBC(D_80177B70[arg0]) - 1) * 8), y + 24.0f + 1.0f,
                                D_80177B70[arg0]);

    if (D_80161A34 == 7) {
        temp = D_80177B48;
    }
    if ((D_80161A34 == 5) || (D_80161A34 == 8)) {
        temp = D_80177B48 + 1;
    }

    if (arg0 < temp) {
        mask = 0x00FF0000;
        x2 = 0.0f;
        for (i = 0; i < 3; i++, x2 += 9.0f) {
            if ((D_80177B50[arg0] & mask)) {
                RCP_SetupDL(&gMasterDisp, 0x53);
                gDPSetPrimColor(gMasterDisp++, 0, 0, D_EBFBE0_801B6ADC[i], D_EBFBE0_801B6AE8[i], D_EBFBE0_801B6AF4[i],
                                255);
                Graphics_DisplaySmallText((s32) x + x2 - 1.0f, (s32) y + 24.0f + 8.0f + 2.0f, 1.0f, 1.0f,
                                          D_EBFBE0_801B6AD0[i]);
            }
            mask >>= 8;
        }
    }
}

void func_EBFBE0_801AA778(s32 arg0, f32 x, f32 y, PlanetId planetId) {
    s32 mask = 0xFFFFFFFF;

    if (gGameState == GSTATE_MAP) {
        if (planetId == D_EBFBE0_801CD954) {
            mask = 0x00000010;
        }
    }

    switch (planetId) {
        case PLANET_SOLAR:
            if (gFrameCount & mask) {
                RCP_SetupDL(&gMasterDisp, 0x43);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 240, 0, 0, 255);
                gDPSetEnvColor(gMasterDisp++, 31, 0, 0, 0);

                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, x, y, 0.0f, 1);
                Matrix_RotateZ(gGfxMatrix, M_DTOR * (planet[planetId].zAngle), 1);
                Matrix_Scale(gGfxMatrix, 0.11f, 0.11f, 0.11f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[planet[planetId].id]);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 128);
                gDPSetEnvColor(gMasterDisp++, 31, 0, 0, 0);

                Matrix_Scale(gGfxMatrix, 0.8f, 0.8f, 0.8f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[planet[planetId].id]);

                Matrix_Pop(&gGfxMatrix);
            }
            break;

        case PLANET_METEO:
            if (gFrameCount & mask) {
                RCP_SetupDL(&gMasterDisp, 0x3E);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

                Matrix_Push(&gGfxMatrix);

                Matrix_Translate(gGfxMatrix, x - 0.4f, y + 0.9f, 0.0f, 1);
                Matrix_RotateZ(gGfxMatrix, M_DTOR * planet[planetId].zAngle, 1);
                Matrix_Scale(gGfxMatrix, 0.1f, 0.1f, 0.1f, 1);

                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[planet[planetId].id]);

                Matrix_Translate(gGfxMatrix, 18.0f, -20.0f, 0.0f, 1);

                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[planet[planetId].id]);
                Matrix_Pop(&gGfxMatrix);
            }
            break;

        case PLANET_SECTOR_X:
        case PLANET_SECTOR_Y:
        case PLANET_SECTOR_Z:
            if (gFrameCount & mask) {
                RCP_SetupDL(&gMasterDisp, 0x3E);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 144);

                Matrix_Push(&gGfxMatrix);

                Matrix_Translate(gGfxMatrix, x, y, 0.0f, 1);
                Matrix_RotateZ(gGfxMatrix, M_DTOR * planet[planetId].zAngle, 1);
                Matrix_Scale(gGfxMatrix, 0.09f, 0.09f, 0.09f, 1);

                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[planet[planetId].id]);

                Matrix_Pop(&gGfxMatrix);
            }
            break;

        case PLANET_BOLSE:
            if (gFrameCount & mask) {
                RCP_SetupDL(&gMasterDisp, 0x17);

                Lights_SetOneLight(&gMasterDisp, 0, 0, 100, 50, 50, 40, 100, 100, 100);

                Matrix_Push(&gGfxMatrix);

                Matrix_Translate(gGfxMatrix, x, y, 0.0f, 1);
                Matrix_RotateX(gGfxMatrix, M_DTOR * 20.0f, 1);
                Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801AFFF4, 1);
                Matrix_RotateZ(gGfxMatrix, M_DTOR * planet[planetId].zAngle, 1);
                Matrix_Scale(gGfxMatrix, 0.004f, 0.004f, 0.004f, 1);

                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[planet[planetId].id]);

                Matrix_Pop(&gGfxMatrix);
            }
            break;

        case PLANET_AREA_6:
            if (gFrameCount & mask) {
                RCP_SetupDL(&gMasterDisp, 0x17);

                Lights_SetOneLight(&gMasterDisp, 0, 0, 100, 50, 50, 40, 100, 100, 100);

                Matrix_Push(&gGfxMatrix);

                Matrix_Translate(gGfxMatrix, x, y, 0.0f, 1);
                Matrix_RotateX(gGfxMatrix, M_DTOR * 20.0f, 1);
                Matrix_RotateY(gGfxMatrix, M_DTOR * D_EBFBE0_801AFFFC, 1);
                Matrix_RotateZ(gGfxMatrix, M_DTOR * planet[planetId].zAngle, 1);
                Matrix_Scale(gGfxMatrix, 0.003f, 0.003f, 0.003f, 1);

                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[planet[planetId].id]);

                Matrix_Pop(&gGfxMatrix);
            }
            break;

        default:
            if (gFrameCount & mask) {
                RCP_SetupDL(&gMasterDisp, 0x3E);

                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

                Matrix_Push(&gGfxMatrix);

                Matrix_Translate(gGfxMatrix, x, y, 0.0f, 1);
                Matrix_RotateZ(gGfxMatrix, M_DTOR * planet[planetId].zAngle, 1);
                Matrix_Scale(gGfxMatrix, 0.1f, 0.1f, 0.1f, 1);

                Matrix_SetGfxMtx(&gMasterDisp);

                gSPDisplayList(gMasterDisp++, D_EBFBE0_801B68F8[planet[planetId].id]);

                if (planet[planetId].unk_28 == 4) {
                    if (planetId != PLANET_VENOM && planetId != PLANET_AQUAS) {
                        Matrix_SetGfxMtx(&gMasterDisp);
                        if (planetId == PLANET_MACBETH) {
                            gDPSetPrimColor(gMasterDisp++, 0, 0, 64, 64, 64, 255);
                        } else {
                            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
                        }
                        gSPDisplayList(gMasterDisp++, D_EBFBE0_801B4A40);
                    }
                    Matrix_Scale(gGfxMatrix, 1.6f, 1.6f, 1.6f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_605C230);
                }
                Matrix_Pop(&gGfxMatrix);
            }
            break;
    }

    if (D_80177BB0[arg0] != 0) {
        func_EBFBE0_801AB17C(x, y, 0.0f);
    }
}

void func_EBFBE0_801AB17C(f32 x, f32 y, f32 z) {
    static f32 scale = 0.23f;
    static f32 posX = 4.4f;
    static f32 posY = 1.0f;

    RCP_SetupDL(&gMasterDisp, 0x35);
    gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, x - posX, y + posY, z, 1);
    Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);
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

void func_EBFBE0_801AB300(void) {
    if (D_Timer_801782AC > 0) {
        D_Timer_801782AC--;
    }
    if (D_Timer_801782B4 > 0) {
        D_Timer_801782B4--;
    }

    switch (D_EBFBE0_801CF018) {
        case 0:
            break;

        case 100:
            D_EBFBE0_801CEA74 = 0;
            D_801782A4 = 0 + D_80177D68;
            D_EBFBE0_801CF018 = 1;
            D_80177D50 = 0.0f;
            D_801782D8 = 0;
            D_EBFBE0_801CF124 = 0.0f;
            D_EBFBE0_801CEAB4 = 0;
            break;

        case 200:
            D_EBFBE0_801CF018 = 210;
            D_Timer_801782AC = 30;
            break;

        case 210:
            if (D_Timer_801782AC) {
                break;
            }

            D_EBFBE0_801CD940 = 1;
            D_80178308 = D_EBFBE0_801AF428[D_EBFBE0_801CD954][D_EBFBE0_801CD940];

            func_8001ACDC(Message_IdFromPtr(D_80178308));

            D_80177D68 = D_EBFBE0_801AF420[D_EBFBE0_801CD940];
            D_Timer_801782AC = Message_GetCharCount(D_80178308) * 2;
            D_801782A4 = D_80177D68;
            D_EBFBE0_801CF018 = 4;
            D_EBFBE0_801CD9A0 = 1;
            break;

        case 1:
            D_EBFBE0_801CEA74 += 8;
            if (D_EBFBE0_801CEA74 > 255) {
                D_EBFBE0_801CEA74 = 255;
                D_80177D50 = 1.3f;

                Audio_PlaySfx(0x4100001EU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_8001ACDC(Message_IdFromPtr(D_80178308));

                D_Timer_801782AC = Message_GetCharCount(D_80178308) * 2;
                D_EBFBE0_801CD9A4 = 0;
                D_EBFBE0_801CF018 = 4;
            }
            break;

        case 4:
            if (!D_Timer_801782AC && !func_8001AE78()) {
                D_801782A4 = D_80177D68;
                func_8001AE58();
                if (D_EBFBE0_801CD940 == 0) {
                    D_801782D8 = 0;
                    D_Timer_801782AC = 30;
                } else {
                    D_Timer_801782AC = 20;
                }
                D_EBFBE0_801CF018 = 41;
                break;
            }

            D_801782A4 = D_80177D68;

            if (D_Timer_801782B4 > 0) {
                D_801782A4 = 1 + D_80177D68;
            }

            if (D_801782D8 >= Message_GetCharCount(D_80178308)) {
                D_EBFBE0_801CD9A4 = 1;
            }

            if (D_EBFBE0_801CD9A0 == 1) {
                D_EBFBE0_801CF124 += 0.7f;
                D_801782D8 = D_EBFBE0_801CF124;
            } else {
                D_801782D8 += 2;
            }

            if (D_EBFBE0_801CEAB4) {
                if (func_8001AED4() == 1) {
                    D_Timer_801782B4 = 2;
                } else {
                    D_Timer_801782B4 = 0;
                }
            }

            D_EBFBE0_801CEAB4 ^= 1;
            break;

        case 41:
            if (D_Timer_801782AC) {
                break;
            }

            if (D_EBFBE0_801CD940 == 1) {
                D_EBFBE0_801CF018 = 5;
                break;
            } else {
                D_EBFBE0_801CD940 = 1;
                D_80178308 = D_EBFBE0_801AF428[D_EBFBE0_801CD954][D_EBFBE0_801CD940];
                func_8001ACDC(Message_IdFromPtr(D_80178308));
                D_80177D68 = D_EBFBE0_801AF420[D_EBFBE0_801CD940];
                D_801782A4 = D_80177D68;
                D_801782D8 = 0;
                D_EBFBE0_801CF124 = 0.0f;
                D_Timer_801782AC = Message_GetCharCount(D_80178308) * 2;
                D_EBFBE0_801CD9A0 = 1;
                D_EBFBE0_801CD9A4 = 0;
                D_EBFBE0_801CF018 = 4;
            }
            break;

        case 5:
            D_Timer_801782AC = 5;
            D_801782A4 = D_80177D68;
            D_EBFBE0_801CF018++;
            break;

        case 6:
            if (D_Timer_801782AC == 0) {
                func_8001A838(0x4100001EU);
                func_8001ACDC(0);
                D_80177D50 = 0.0f;
                D_EBFBE0_801CF018++;
                D_EBFBE0_801CF018 = 7;
            }
            break;

        case 7:
            break;

        case 8:
            D_801782A4 = D_80177D68;
            D_80177D50 = 1.3f;
            D_EBFBE0_801CEA74 = 255;
            break;
    }

    if ((D_EBFBE0_801CF018 > 0) && (D_EBFBE0_801CF018 != 100)) {
        func_EBFBE0_801AB978(D_801782A4);
        func_EBFBE0_801AB978(D_EBFBE0_801AF420[!D_EBFBE0_801CD940]);
        func_800BB388();
    }
}

void func_EBFBE0_801AB978(s32 arg0) {
    s32 i;
    f32 xPos;
    f32 yPos;
    s32 sp90[3];
    static f32 D_EBFBE0_801B6B0C[3] = { 205.0f, 237.0f, 269.0f };
    static u16* D_EBFBE0_801B6B18[3] = {
        (u16*) 0x06032A60,
        (u16*) 0x06044180,
        (u16*) 0x06032440,
    };

    switch (arg0) {
        case 10:
        case 11:
            D_EBFBE0_801CD810 = arg0 - 10;
            break;

        case 20:
        case 21:
            if (D_EBFBE0_801CEA74 != 0) {
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_EBFBE0_801CEA74);
                xPos = 205.0f;
                yPos = 77.0f;

                for (i = 0; i < 12; i++) {
                    TextureRect_16bRGBA(&gMasterDisp, D_6044820 + (i * 92 * 4), 92, 4, xPos, yPos + (i * 4.0f), 1.0f,
                                        1.0f);
                }
                TextureRect_16bRGBA(&gMasterDisp, D_6044820 + (92 * 12 * 4), 92, 3, xPos, yPos + 48.0f, 1.0f, 1.0f);

                if (arg0 == 21) {
                    TextureRect_16bRGBA(&gMasterDisp, D_6046CD0, 32, 34, xPos + 47.0, yPos, 1.0f, 1.0f);
                }

                for (i = 0; i < 3; i++) {
                    switch (gSavedTeamShields[3 - i]) {
                        case -1:
                        case -2:
                            if (D_EBFBE0_801CEA74 > 0x20) {
                                sp90[i] = 32;
                            } else {
                                sp90[i] = D_EBFBE0_801CEA74;
                            }
                            break;

                        case 0:
                            RCP_SetupDL(&gMasterDisp, 0x53);
                            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
                            if (gFrameCount & 0x10) {
                                Graphics_DisplaySmallText(D_EBFBE0_801B6B0C[i], 131 + 28, 1.0f, 1.0f, "OK !");
                            }
                            sp90[i] = D_EBFBE0_801CEA74;
                            break;

                        default:
                            sp90[i] = D_EBFBE0_801CEA74;
                            break;
                    }

                    RCP_SetupDL(&gMasterDisp, 0x4C);
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, sp90[i]);
                    TextureRect_16bRGBA(&gMasterDisp, D_EBFBE0_801B6B18[i], 28, 28, D_EBFBE0_801B6B0C[i], 131.0f, 1.0f,
                                        1.0f);

                    if ((gSavedTeamShields[3 - i] < 0) && (gSavedTeamShields[3 - i] != -2)) {
                        func_EBFBE0_801ABCDC(i, D_EBFBE0_801CEA74);
                    }
                }
            }
    }
}

void func_EBFBE0_801ABCDC(s32 arg0, s32 alpha) {
    static s32 D_EBFBE0_801B6B24[] = { 81.0f, 125.0f, 170.0f };

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

void func_EBFBE0_801AC200(s32 index) {
    f32 x;
    f32 y;
    f32 z;
    f32 r;
    f32 r2;
    Vec3f vec;

    x = gUnkEntities30[index].unk_10.x - gUnkEntities30[index].unk_04.x;
    y = gUnkEntities30[index].unk_10.y - gUnkEntities30[index].unk_04.y;
    z = gUnkEntities30[index].unk_10.z - gUnkEntities30[index].unk_04.z;

    r = sqrtf(SQ(x) + SQ(y) + SQ(z));

    if (r == 0.0f) {
        r = 1.0f;
    }

    if (D_EBFBE0_801AFD18[index].unk_14 == 2) {
        vec.x = (x / r) * (r / (D_EBFBE0_801AFD18[index].unk_0C - 1));
        vec.y = (y / r) * (r / (D_EBFBE0_801AFD18[index].unk_0C - 1));
        vec.z = (z / r) * (r / (D_EBFBE0_801AFD18[index].unk_0C - 1));

        D_EBFBE0_801CEEB0.x = gUnkEntities30[index].unk_04.x + (vec.x * D_EBFBE0_801CEEA0);
        D_EBFBE0_801CEEB0.y = gUnkEntities30[index].unk_04.y + (vec.y * D_EBFBE0_801CEEA0);
        D_EBFBE0_801CEEB0.z = gUnkEntities30[index].unk_04.z + (vec.z * D_EBFBE0_801CEEA0);

        switch (D_EBFBE0_801CEEA4) {
            case 0:
                break;

            case 100:
                D_EBFBE0_801CD9BC = 5;
                D_EBFBE0_801CEEA4 = 10;
                break;

            case 10:
                if (D_EBFBE0_801CD9BC) {
                    break;
                }
                D_EBFBE0_801CD9BC = 5;
                D_EBFBE0_801CEEA4 = 20;
                break;

            case 20:
                if (D_EBFBE0_801CD9BC) {
                    break;
                }

                D_EBFBE0_801CEEA0++;
                if (D_EBFBE0_801CEEA0 > D_EBFBE0_801AFD18[index].unk_0C - 1) {
                    D_EBFBE0_801CEEA0 = 0;
                }

                D_EBFBE0_801CEEA4 = 100;
                break;
        }

        if (D_EBFBE0_801CEEA4 != 10) {
            return;
        }
    } else {
        vec.x = (x / r) * gUnkEntities30[index].unk_24;
        vec.y = (y / r) * gUnkEntities30[index].unk_24;
        vec.z = (z / r) * gUnkEntities30[index].unk_24;

        D_EBFBE0_801CEEB0.x = gUnkEntities30[index].unk_04.x + vec.x;
        D_EBFBE0_801CEEB0.y = gUnkEntities30[index].unk_04.y + vec.y;
        D_EBFBE0_801CEEB0.z = gUnkEntities30[index].unk_04.z + vec.z;

        x = D_EBFBE0_801CEEB0.x - gUnkEntities30[index].unk_04.x;
        y = D_EBFBE0_801CEEB0.y - gUnkEntities30[index].unk_04.y;
        z = D_EBFBE0_801CEEB0.z - gUnkEntities30[index].unk_04.z;
        r2 = sqrtf(SQ(x) + SQ(y) + SQ(z));

        if (((r / 9.0f) * 8.0f) < r2) {
            D_EBFBE0_801CEEAC -= 16;
            if (D_EBFBE0_801CEEAC < 0) {
                D_EBFBE0_801CEEAC = 0;
            }
        }
    }

    if (D_EBFBE0_801AFD18[index].unk_14 == 5) {
        func_EBFBE0_801AC80C(D_EBFBE0_801AFD18[index].unk_00);
    } else {
        func_EBFBE0_801AC530(index);
    }
}

void func_EBFBE0_801AC530(s32 index) {
    f32 dirX;
    f32 dirY;
    f32 dirZ;
    Vec3f dest;
    Vec3f src;
    f32 x1;
    f32 y1;
    f32 x;
    f32 y;
    f32 z;

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 0.0f;

    if (D_EBFBE0_801CEEA8 == 255) {
        RCP_SetupDL(&gMasterDisp, 0x17);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x2E);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_EBFBE0_801CEEA8);
    }

    Matrix_Push(&gGfxMatrix);

    Matrix_Translate(gGfxMatrix, D_EBFBE0_801CEEB0.x, D_EBFBE0_801CEEB0.y, D_EBFBE0_801CEEB0.z, 1);

    Matrix_RotateY(gGfxMatrix, gUnkEntities30[index].unk_20, 1);
    Matrix_RotateX(gGfxMatrix, M_DTOR * -90.0f, 1);
    Matrix_RotateX(gGfxMatrix, gUnkEntities30[index].unk_1C, 1);

    Matrix_Scale(gGfxMatrix, 0.8f, 0.8f, 0.8f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    Matrix_MultVec3f(gGfxMatrix, &src, &dest);

    x = D_EBFBE0_801CE960[14].x - dest.x;
    y = D_EBFBE0_801CE960[14].y - dest.y;
    z = D_EBFBE0_801CE960[14].z - dest.z;

    x1 = Math_Atan2F(y, sqrtf(SQ(x) + SQ(z)));
    y1 = -Math_Atan2F(x, z);

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 10.0f;

    Matrix_RotateY(gCalcMatrix, M_DTOR * (-D_EBFBE0_801CDA10 - y1), 0);
    Matrix_RotateX(gCalcMatrix, M_DTOR * (-D_EBFBE0_801CDA0C - x1), 1);
    Matrix_MultVec3f(gCalcMatrix, &src, &dest);

    dirX = dest.x;
    dirY = dest.y;
    dirZ = dest.z;

    Lights_SetOneLight(&gMasterDisp, dirX, dirY, dirZ, 50, 50, 40, 0, 0, 0);

    gSPDisplayList(gMasterDisp++, D_604A9F0);

    Matrix_Pop(&gGfxMatrix);
}

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

static u32 padding_801B6B34[3] = { 0, 0, 0 };

UnkStruct_D_EBFBE0_801B8294 D_EBFBE0_801B6B40[] = {
    {
        0.0,
        260.4722595214844,
        1477.2115478515625,
        0.0,
        -17.364818572998047,
        -98.48077392578125,
    },
    {
        0.0,
        20.159666061401367,
        759.7326049804688,
        0.0,
        -2.652587890625,
        -99.96481323242188,
    },
    {
        -45.79036331176758,
        0.7120879888534546,
        336.9016418457031,
        13.467754364013672,
        -0.2094379961490631,
        -99.0887222290039,
    },
    {
        -59.033607482910156,
        -7.9528679847717285,
        104.17190551757812,
        49.194671630859375,
        6.627389907836914,
        -86.80992126464844,
    },
    {
        -39.37468719482422,
        50.698238372802734,
        40.26434326171875,
        65.62447357177734,
        -4.497063159942627,
        -67.10723876953125,
    },
    {
        -57.282569885253906,
        48.52915573120117,
        -34.80637741088867,
        95.47095489501953,
        7.118072986602783,
        -11.322705268859863,
    },
    {
        -64.80924987792969,
        53.131526947021484,
        -77.35162353515625,
        81.01156616210938,
        3.335592031478882,
        15.689521789550781,
    },
    {
        -32.061317443847656,
        30.244365692138672,
        -127.72071075439453,
        32.061317443847656,
        29.755634307861328,
        61.72071075439453,
    },
    {
        -62.320308685302734,
        25.741756439208984,
        -222.99485778808594,
        31.160154342651367,
        32.129119873046875,
        61.99742889404297,
    },
    {
        -105.85608673095703,
        14.339532852172852,
        -355.72161865234375,
        31.134143829345703,
        34.60601806640625,
        61.918128967285156,
    },
    {
        -136.990234375,
        9.733512878417969,
        -450.6397399902344,
        31.134143829345703,
        34.60601806640625,
        61.918128967285156,
    },
    {
        -189.91827392578125,
        1.9032800197601318,
        -612.0005493164062,
        31.134143829345703,
        34.60601806640625,
        61.918128967285156,
    },
};

UnkStruct_D_EBFBE0_801B8294 D_EBFBE0_801B6C60[] = {
    {
        230.0,
        -20.0,
        -3.999999989900971e-06,
        90.0,
        -20.0,
        1.9999999949504854e-06,
    },
    {
        217.92657470703125,
        45.027198791503906,
        -0.0069610001519322395,
        96.70745849609375,
        -25.01511001586914,
        0.0038670001085847616,
    },
    {
        161.75991821289062,
        66.46260070800781,
        50.40374755859375,
        73.11239624023438,
        -6.1025848388671875,
        -28.31671142578125,
    },
    {
        117.36236572265625,
        2.6198840141296387,
        27.208602905273438,
        84.39605712890625,
        -4.366471767425537,
        -45.34767150878906,
    },
    {
        19.168537139892578,
        2.4452030658721924,
        27.57978057861328,
        7.556180953979492,
        -4.366434097290039,
        -49.24960708618164,
    },
    {
        -116.45977783203125,
        1.2701389789581299,
        27.862812042236328,
        -109.60753631591797,
        -2.268105983734131,
        -49.75502014160156,
    },
    {
        -117.43788146972656,
        1.2725709676742554,
        27.8646240234375,
        -110.64664459228516,
        -2.272449016571045,
        -49.75825500488281,
    },
    {
        -118.43771362304688,
        1.3140660524368286,
        27.862712860107422,
        -111.64693450927734,
        -2.346545934677124,
        -49.754844665527344,
    },
    {
        -118.44500732421875,
        1.3140660524368286,
        27.86207389831543,
        -111.6339111328125,
        -2.346545934677124,
        -49.75370407104492,
    },
    {
        -118.46446228027344,
        1.3140660524368286,
        27.860361099243164,
        -111.59918212890625,
        -2.346545934677124,
        -49.75064468383789,
    },
};

void func_EBFBE0_801AC9A0(s32 index) {
    Vec3f srcPos;
    Vec3f destPos;
    f32 x;
    f32 y;
    f32 z;
    f32 target;
    f32 temp;

    func_EBFBE0_801ACD90(index, &srcPos, &destPos);

    x = srcPos.x - destPos.x;
    y = srcPos.y - destPos.y;
    z = srcPos.z - destPos.z;

    target = sqrtf(SQ(x) + SQ(y) + SQ(z));

    gUnkEntities30[index].mode = 4;

    gUnkEntities30[index].unk_04.x = srcPos.x;
    gUnkEntities30[index].unk_04.y = srcPos.y;
    gUnkEntities30[index].unk_04.z = srcPos.z;

    gUnkEntities30[index].unk_10.x = destPos.x;
    gUnkEntities30[index].unk_10.y = destPos.y;
    gUnkEntities30[index].unk_10.z = destPos.z;

    gUnkEntities30[index].unk_20 = Math_Atan2F(x, z);
    gUnkEntities30[index].unk_1C = -Math_Atan2F(y, sqrtf(SQ(x) + SQ(z)));

    switch (D_80177BD8[index]) {
        case 1:
            Audio_PlaySfx(0x1900404DU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_80177BD8[index] = 11;
            break;

        case 11:
            Math_SmoothStepToF(&gUnkEntities30[index].unk_24, target, 0.1f, 100.0f, 4.0f);
            gUnkEntities30[index].unk_2F = 255;
            if (gUnkEntities30[index].unk_24 == target) {
                func_8001A838(0x1900404DU);
                D_80177BD8[index] = 4;
            }
            break;

        case 5:
        case 6:
            Math_SmoothStepToF(&gUnkEntities30[index].unk_24, target, 0.1f, 100.0f, 1.0f);
            if (gUnkEntities30[index].unk_24 == target) {
                gUnkEntities30[index].unk_24 = 0.0f;
                D_80177BD8[index] = 6;
                D_EBFBE0_801CEEAC = 255;
            }
            break;

        case 2:
            temp = 0.04f;
            if (D_EBFBE0_801CD944 == 7) {
                temp = 0.25f;
            }
            Math_SmoothStepToF(&gUnkEntities30[index].unk_24, target, temp, 100.0f, 4.0f);
            gUnkEntities30[index].unk_2F = 255;
            if (gUnkEntities30[index].unk_24 == target) {
                D_80177BD8[index] = 3;
            }
            break;

        case 3:
        case 4:
            gUnkEntities30[index].unk_24 = target;
            gUnkEntities30[index].unk_2F = D_EBFBE0_801AFD18[index].unk_18;
            break;
    }

    if ((D_80177BD8[index] == 1) || (D_80177BD8[index] == 11) || (D_80177BD8[index] == 4)) {
        gUnkEntities30[index].unk_2C = 32;
        gUnkEntities30[index].unk_2D = 32;
        gUnkEntities30[index].unk_2E = 32;
        gUnkEntities30[index].unk_28 = 4.0f;
    } else {
        switch (D_EBFBE0_801AFD18[index].unk_00) {
            case 0:
                gUnkEntities30[index].unk_2C = 16;
                gUnkEntities30[index].unk_2D = 64;
                gUnkEntities30[index].unk_2E = 255;
                gUnkEntities30[index].unk_28 = 8.0f;
                break;

            case 1:
                gUnkEntities30[index].unk_2C = 255;
                gUnkEntities30[index].unk_2D = 175;
                gUnkEntities30[index].unk_2E = 0;
                gUnkEntities30[index].unk_28 = 8.0f;
                break;

            case 2:
                gUnkEntities30[index].unk_2C = 255;
                gUnkEntities30[index].unk_2D = 0;
                gUnkEntities30[index].unk_2E = 0;
                gUnkEntities30[index].unk_28 = 8.0f;
                break;

            case 3:
            case 4:
                gUnkEntities30[index].unk_2C = 0;
                gUnkEntities30[index].unk_2D = 0;
                gUnkEntities30[index].unk_2E = 0;
                gUnkEntities30[index].unk_2F = 0;
                gUnkEntities30[index].unk_28 = 0.1f;
                break;
        }
    }
}

void func_EBFBE0_801ACD90(s32 index, Vec3f* src, Vec3f* dest) {
    f32 x1;
    f32 y1;
    f32 z1;
    f32 x2;
    f32 y2;
    f32 z2;
    f32 x;
    f32 y;
    f32 z;
    f32 r;
    f32 temp1;
    f32 temp2;

    temp1 = 40.0f;

    if (D_EBFBE0_801AFD18[index].unk_04 == 12) {
        temp1 = 50.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_04 == 10) {
        temp1 = 60.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_04 == 14) {
        temp1 = 20.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_04 == 0) {
        temp1 = 60.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_04 == 4) {
        temp1 = 20.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_04 == 5) {
        temp1 = 20.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_04 == 3) {
        temp1 = 20.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_04 == 1) {
        temp1 = 1200.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_04 == 2) {
        temp1 = 1200.0f;
    }

    temp2 = 40.0f;

    if (D_EBFBE0_801AFD18[index].unk_08 == 10) {
        temp2 = 60.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_08 == 12) {
        temp2 = 50.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_08 == 14) {
        temp2 = 20.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_08 == 0) {
        temp2 = 60.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_08 == 4) {
        temp2 = 20.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_08 == 5) {
        temp2 = 20.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_08 == 3) {
        temp2 = 20.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_08 == 1) {
        temp2 = 1200.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_08 == 2) {
        temp2 = 1200.0f;
    }
    if (D_EBFBE0_801AFD18[index].unk_08 == 13) {
        temp2 = 30.0f;
    }

    x = planet[D_EBFBE0_801AFD18[index].unk_08].posX - planet[D_EBFBE0_801AFD18[index].unk_04].posX;
    y = planet[D_EBFBE0_801AFD18[index].unk_08].posY - planet[D_EBFBE0_801AFD18[index].unk_04].posY;
    z = planet[D_EBFBE0_801AFD18[index].unk_08].posZ - planet[D_EBFBE0_801AFD18[index].unk_04].posZ;

    r = sqrtf(SQ(x) + SQ(y) + SQ(z));

    x1 = planet[D_EBFBE0_801AFD18[index].unk_04].posX +
         (temp1 * planet[D_EBFBE0_801AFD18[index].unk_04].scale * (x / r));
    y1 = planet[D_EBFBE0_801AFD18[index].unk_04].posY +
         (temp1 * planet[D_EBFBE0_801AFD18[index].unk_04].scale * (y / r));
    z1 = planet[D_EBFBE0_801AFD18[index].unk_04].posZ +
         (temp1 * planet[D_EBFBE0_801AFD18[index].unk_04].scale * (z / r));

    x2 = planet[D_EBFBE0_801AFD18[index].unk_08].posX +
         (temp2 * planet[D_EBFBE0_801AFD18[index].unk_08].scale * (-x / r));
    y2 = planet[D_EBFBE0_801AFD18[index].unk_08].posY +
         (temp2 * planet[D_EBFBE0_801AFD18[index].unk_08].scale * (-y / r));
    z2 = planet[D_EBFBE0_801AFD18[index].unk_08].posZ +
         (temp2 * planet[D_EBFBE0_801AFD18[index].unk_08].scale * (-z / r));

    src->x = x1;
    src->y = y1;
    src->z = z1;

    dest->x = x2;
    dest->y = y2;
    dest->z = z2;
}

void func_EBFBE0_801AD048(void) {
    f32 sp1C = Math_Atan2F(D_EBFBE0_801CD9F8 - D_EBFBE0_801CDA04, sqrtf(SQ(D_EBFBE0_801CD9F4 - D_EBFBE0_801CDA00) +
                                                                        SQ(D_EBFBE0_801CD9FC - D_EBFBE0_801CDA08)));
    f32 temp = -Math_Atan2F(D_EBFBE0_801CD9F4 - D_EBFBE0_801CDA00, D_EBFBE0_801CD9FC - D_EBFBE0_801CDA08);

    Matrix_RotateY(gGfxMatrix, -temp, 1);
    Matrix_RotateX(gGfxMatrix, -sp1C, 1);
}

void func_EBFBE0_801AD11C(void) {
    s32 i;
    s32 var_t0;
    s32 var_a3;
    u8 var_a1 = 0;
    u8 var_a2 = 0;
    u8 var_a0;
    f32 x;
    f32 y;

    var_a3 = 0;
    var_t0 = 0;

    if (gControllerPress[gMainController].button & A_BUTTON) {
        if ((D_80161A34 == 7) && (D_EBFBE0_801CD93C != 0) && (!D_EBFBE0_801CEFD0)) {
            func_8001D6DC(1);
            D_EBFBE0_801CEFC4 = 1;
            D_EBFBE0_801CEFD4 = 0;
            D_EBFBE0_801CEFDC = 0;
            D_EBFBE0_801CD944 = 6;
            D_EBFBE0_801CD94C = 0;
        } else {
            for (i = 0; i < 6; i++) {
                D_80177C58[i] = gTeamShields[i];
            }
            func_EBFBE0_801A659C();
        }
        return;
    }

    if (gControllerPress[gMainController].button & START_BUTTON) {
        if (D_EBFBE0_801CD944 == 3 && D_80161A34 == 7) {
            if (D_EBFBE0_801CEFD0) {
                Audio_PlaySfx(0x4900100AU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                func_8001D6DC(1);
                D_EBFBE0_801CEFC4 = 1;
                D_EBFBE0_801CEFD4 = 0;
                D_EBFBE0_801CEFDC = 0;
                D_EBFBE0_801CD944 = 6;
                D_EBFBE0_801CD94C = 0;
            }
            return;
        }
    }

    x = gControllerPress[gMainController].stick_x;
    y = gControllerPress[gMainController].stick_y;

    if (y != 0.0f) {
        if (D_EBFBE0_801CDA0C - (y * 0.05f) < -80.0f) {
            D_EBFBE0_801CDA0C = -80.0f;
            y = 0.0f;
        } else if (D_EBFBE0_801CDA0C - (y * 0.05f) > 80.0f) {
            D_EBFBE0_801CDA0C = 80.0f;
            y = 0.0f;
        } else {
            D_EBFBE0_801CDA0C -= y * 0.05f;
            var_a3 = 1;
            var_a1 = (s32) fabsf(((y * 0.05f) / 0.27f));
        }
    }

    if (x != 0.0f) {
        D_EBFBE0_801CDA10 += x * 0.05f;
        var_a2 = (s32) fabsf((x * 0.05f) / 0.27f);
        var_a3 = 1;
    }

    if (D_EBFBE0_801CF014 == 1) {
        var_a0 = var_a1;
        if (var_a1 < var_a2) {
            var_a0 = var_a2;
        }
        func_8001D15C(var_a0);
    }

    if (D_EBFBE0_801CF014 == 0 && var_a3 == 1) {
        func_8001D10C(&D_800C5D28, 0x1100204C);
        D_EBFBE0_801CF014 = 1;
    }

    if ((D_EBFBE0_801CF014 == 1) && (var_a3 == 0) && (y == 0.0f) && (x == 0.0f)) {
        var_a1 = 0;
        var_a2 = 0;
        func_8001A838(0x1100204CU);
        D_EBFBE0_801CF014 = 0;
    }

    if (gControllerHold[gMainController].button & R_TRIG) {
        if (D_EBFBE0_801CDA14 - 20.0f > 2475.0f) {
            D_EBFBE0_801CDA14 -= 20.0f;
            var_t0 = 1;
        }
    }

    if (gControllerHold[gMainController].button & Z_TRIG) {
        if (D_EBFBE0_801CDA14 + 20.0f < 7695.0f) {
            D_EBFBE0_801CDA14 += 20.0f;
            var_t0 = 1;
        }
    }

    if (gControllerHold[gMainController].button & U_CBUTTONS) {
        if (D_EBFBE0_801CDA04 - 10.0f >= -1200.0f) {
            D_EBFBE0_801CDA04 -= 10.0f;
            var_t0 = 1;
        }
    }

    if (gControllerHold[gMainController].button & D_CBUTTONS) {
        if (D_EBFBE0_801CDA04 + 10.0f <= 1200.0f) {
            D_EBFBE0_801CDA04 += 10.0f;
            var_t0 = 1;
        }
    }

    if (gControllerHold[gMainController].button & L_CBUTTONS) {
        if (D_EBFBE0_801CDA00 + 10.0f <= 1200.0f) {
            D_EBFBE0_801CDA00 += 10.0f;
            var_t0 = 1;
        }
    }

    if (gControllerHold[gMainController].button & R_CBUTTONS) {
        if (D_EBFBE0_801CDA00 - 10.0f >= -1200.0f) {
            D_EBFBE0_801CDA00 -= 10.0f;
            var_t0 = 1;
        }
    }

    if (D_EBFBE0_801CF010 == 0 && var_t0 == 1) {
        Audio_PlaySfx(0x1100004CU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_EBFBE0_801CF010 = 1;
    }

    if (D_EBFBE0_801CF010 == 1 && var_t0 == 0) {
        func_8001A838(0x1100004CU);
        D_EBFBE0_801CF010 = 0;
    }
}

void func_dummy_() {
}

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
