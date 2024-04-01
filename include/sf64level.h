#ifndef SF64_LEVEL
#define SF64_LEVEL

#include "structs.h"

#define SAVE_SLOT_SOLAR 13
#define SAVE_SLOT_VENOM_1 14
#define SAVE_SLOT_VENOM_2 15

typedef enum {
    /* 0 */ LEVELTYPE_PLANET,
    /* 1 */ LEVELTYPE_SPACE,
    /* 2 */ LEVELTYPE_UNK2,
    /* 3 */ LEVELTYPE_UNK3,
} LevelType;

typedef struct {
    /* 0x00 */ s32 type;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u16 bgColor;
    /* 0x0A */ u16 seqId;
    /* 0x0C */ s32 fogR;
    /* 0x10 */ s32 fogG;
    /* 0x14 */ s32 fogB;
    /* 0x18 */ s32 fogN;
    /* 0x1C */ s32 fogF;
    /* 0x20 */ Vec3f unk_20;
    /* 0x2C */ s32 lightR;
    /* 0x30 */ s32 lightG;
    /* 0x34 */ s32 lightB;
    /* 0x38 */ s32 ambR;
    /* 0x3C */ s32 ambG;
    /* 0x40 */ s32 ambB;
} EnvSettings; // size = 0x44

typedef enum {
    /*  0 */ OVL_SETUP_TITLE,
    /*  1 */ OVL_SETUP_MENU,
    /*  2 */ OVL_SETUP_MAP,
    /*  3 */ OVL_SETUP_GAME_OVER,
    /*  4 */ OVL_SETUP_CREDITS,
    /*  5 */ OVL_SETUP_CORNERIA,
    /*  6 */ OVL_SETUP_METEO,
    /*  7 */ OVL_SETUP_TITANIA,
    /*  8 */ OVL_SETUP_SECTOR_X,
    /*  9 */ OVL_SETUP_AQUAS,
    /* 10 */ OVL_SETUP_AREA_6,
    /* 11 */ OVL_SETUP_FORTUNA,
    /* 12 */ OVL_SETUP_UNK_4,
    /* 13 */ OVL_SETUP_SECTOR_Y,
    /* 14 */ OVL_SETUP_SOLAR,
    /* 15 */ OVL_SETUP_ZONESS,
    /* 16 */ OVL_SETUP_VENOM_ANDROSS,
    /* 17 */ OVL_SETUP_TRAINING,
    /* 18 */ OVL_SETUP_VENOM_1,
    /* 19 */ OVL_SETUP_KATINA,
    /* 10 */ OVL_SETUP_20,
    /* 11 */ OVL_SETUP_MACBETH,
    /* 12 */ OVL_SETUP_BOLSE,
    /* 13 */ OVL_SETUP_SECTOR_Z,
    /* 14 */ OVL_SETUP_VENOM_2,
    /* 50 */ OVL_SETUP_VERSUS = 50,
    /* 99 */ OVL_SETUP_LOGO = 99,
} OverlaySetups;

typedef enum LevelId {
    /* -1 */ LEVEL_UNK_M1 = -1,
    /*  0 */ LEVEL_CORNERIA,
    /*  1 */ LEVEL_METEO,
    /*  2 */ LEVEL_SECTOR_X,
    /*  3 */ LEVEL_AREA_6,
    /*  4 */ LEVEL_UNK_4,
    /*  5 */ LEVEL_SECTOR_Y,
    /*  6 */ LEVEL_VENOM_1,
    /*  7 */ LEVEL_SOLAR,
    /*  8 */ LEVEL_ZONESS,
    /*  9 */ LEVEL_VENOM_ANDROSS,
    /* 10 */ LEVEL_TRAINING,
    /* 11 */ LEVEL_MACBETH,
    /* 12 */ LEVEL_TITANIA,
    /* 13 */ LEVEL_AQUAS,
    /* 14 */ LEVEL_FORTUNA,
    /* 15 */ LEVEL_UNK_15,
    /* 16 */ LEVEL_KATINA,
    /* 17 */ LEVEL_BOLSE,
    /* 18 */ LEVEL_SECTOR_Z,
    /* 19 */ LEVEL_VENOM_2,
    /* 20 */ LEVEL_VERSUS,
    /* 77 */ LEVEL_WARP_ZONE = 77,
} LevelId;

typedef enum PlanetId {
    /* -1 */ PLANET_NONE=-1,
    /*  0 */ PLANET_METEO,
    /*  1 */ PLANET_AREA_6,
    /*  2 */ PLANET_BOLSE,
    /*  3 */ PLANET_SECTOR_Z,
    /*  4 */ PLANET_SECTOR_X,
    /*  5 */ PLANET_SECTOR_Y,
    /*  6 */ PLANET_KATINA,
    /*  7 */ PLANET_MACBETH,
    /*  8 */ PLANET_ZONESS,
    /*  9 */ PLANET_CORNERIA,
    /* 10 */ PLANET_TITANIA,
    /* 11 */ PLANET_AQUAS,
    /* 12 */ PLANET_FORTUNA,
    /* 13 */ PLANET_VENOM,
    /* 14 */ PLANET_SOLAR,
    /* 15 */ PLANET_MAX,
} PlanetId;

typedef enum VsStage {
    /* 0 */ VS_STAGE_CORNERIA,
    /* 1 */ VS_STAGE_KATINA,
    /* 2 */ VS_STAGE_SECTOR_Z,
} VsStage;

#define EVENT_CMD(opcode, arg1, arg2) ((((opcode) & 0x7F) << 9) | ((arg1) & 0x1FF)), (arg2)
#define EVENT_PLAY_MSG(rcid, msg) EVENT_CMD(EVOP_PLAY_MSG, rcid, msg)
#define EVENT_STOP_SCRIPT() EVENT_CMD(EVOP_STOP_SCRIPT, 0, 0)
#define EVENT_MAKE_TEXLINE(color) EVENT_CMD(EVOP_MAKE_TEXLINE, 0, color)
#define EVENT_STOP_TEXLINE() EVENT_CMD(EVOP_STOP_TEXLINE, 0, 0)
#define EVENT_INIT_ACTOR(health, info) EVENT_CMD(EVOP_INIT_ACTOR, health, info)
#define EVENT_SET_SPEED(speed, time, flag1, flag2) EVENT_CMD(EVOP_SET_SPEED, (((flag1) & 1) << 8) | (((flag2) & 1) << 7) | ((speed) & 0x7F), time)
#define EVENT_SET_ACCEL(speedTarget, time, flag1, flag2) EVENT_CMD(EVOP_SET_ACCEL, (((flag1) & 1) << 8) | (((flag2) & 1) << 7) | ((speedTarget) & 0x7F), time)
#define EVENT_SET_ROTATE() EVENT_CMD(EVOP_SET_ROTATE, 0, 0)
#define EVENT_STOP_ROTATE() EVENT_CMD(EVOP_STOP_ROTATE, 0, 0)
#define EVENT_BRANCH(cond, cmd) EVENT_CMD(EVOP_BRANCH, cmd, cond)
#define EVENT_LOOP(cmd, count) EVENT_CMD(EVOP_LOOP, cmd, count)

typedef enum EventOpcode {
    /*   0 */ EVOP_SET_SPEED,
    /*   1 */ EVOP_SET_ACCEL,
    /*   2 */ EVOP_2,
    /*   3 */ EVOP_3,
    /*   4 */ EVOP_4,
    /*   8 */ EVOP_8 = 8,
    /*   9 */ EVOP_9,
    /*  10 */ EVOP_10,
    /*  11 */ EVOP_11,
    /*  12 */ EVOP_12,
    /*  16 */ EVOP_16 = 16,
    /*  17 */ EVOP_17,
    /*  18 */ EVOP_18,
    /*  19 */ EVOP_19,
    /*  20 */ EVOP_20,
    /*  21 */ EVOP_21,
    /*  24 */ EVOP_SET_ROTATE = 24,
    /*  25 */ EVOP_STOP_ROTATE,
    /*  40 */ EVOP_40 = 40,
    /*  41 */ EVOP_41,
    /*  42 */ EVOP_42,
    /*  43 */ EVOP_43,
    /*  44 */ EVOP_44,
    /*  45 */ EVOP_45,
    /*  46 */ EVOP_46,
    /*  47 */ EVOP_47,
    /*  48 */ EVOP_48,
    /*  56 */ EVOP_56 = 56,
    /*  57 */ EVOP_57,
    /*  58 */ EVOP_58,
    /*  59 */ EVOP_59,
    /*  96 */ EVOP_BRANCH = 96,
    /* 104 */ EVOP_INIT_ACTOR = 104,
    /* 105 */ EVOP_105,
    /* 112 */ EVOP_112 = 112,
    /* 113 */ EVOP_113,
    /* 116 */ EVOP_116 = 116,
    /* 118 */ EVOP_118 = 118,
    /* 119 */ EVOP_119,
    /* 120 */ EVOP_PLAY_MSG, // play message. arg1 is portrait, arg2 is message ID
    /* 121 */ EVOP_121,
    /* 122 */ EVOP_122,
    /* 124 */ EVOP_MAKE_TEXLINE = 124,
    /* 125 */ EVOP_STOP_TEXLINE,
    /* 126 */ EVOP_LOOP,
    /* 127 */ EVOP_STOP_SCRIPT, // stop script
} EventOpcode;

typedef enum EventCondition {
    /*  0 */ EVC_0,
    /*  1 */ EVC_1,
    /*  2 */ EVC_2,
    /*  3 */ EVC_3,
    /*  4 */ EVC_4,
    /*  5 */ EVC_5,
    /*  6 */ EVC_6,
    /*  7 */ EVC_7,
    /*  8 */ EVC_8,
    /*  9 */ EVC_9,
    /* 10 */ EVC_10,
    /* 11 */ EVC_11,
    /* 12 */ EVC_12,
    /* 13 */ EVC_13,
    /* 14 */ EVC_14,
    /* 15 */ EVC_15,
    /* 16 */ EVC_16,
    /* 17 */ EVC_17,
    /* 18 */ EVC_18,
    /* 19 */ EVC_19,
    /* 20 */ EVC_20,
    /* 21 */ EVC_21,
    /* 22 */ EVC_22,
    /* 23 */ EVC_23,
    /* 24 */ EVC_24,
    /* 25 */ EVC_25,
    /* 26 */ EVC_26,
    /* 27 */ EVC_27,
    /* 28 */ EVC_28,
    /* 29 */ EVC_29,
    /* 30 */ EVC_30,
    /* 31 */ EVC_31,
    /* 32 */ EVC_32,
    /* 33 */ EVC_33,
    /* 34 */ EVC_34,
    /* 35 */ EVC_35,
    /* 36 */ EVC_36,
    /* 37 */ EVC_37,
    /* 38 */ EVC_38,
    /* 39 */ EVC_39,
    /* 40 */ EVC_40,
    /* 41 */ EVC_41,
    /* 42 */ EVC_42,
    /* 43 */ EVC_43,
    /* 44 */ EVC_44,
    /* 45 */ EVC_45,
    /* 46 */ EVC_46,
    /* 47 */ EVC_47,
    /* 48 */ EVC_48,
    /* 49 */ EVC_49,
    /* 50 */ EVC_50,
    /* 51 */ EVC_51,
    /* 52 */ EVC_52,
    /* 53 */ EVC_53,
    /* 54 */ EVC_54,
    /* 55 */ EVC_55,
    /* 56 */ EVC_56,
    /* 57 */ EVC_57,
    /* 58 */ EVC_58,
    /* 59 */ EVC_59,
    /* 60 */ EVC_60,
    /* 61 */ EVC_61,
    /* 62 */ EVC_62,
    /* 63 */ EVC_63,
    /* 64 */ EVC_64,
    /* 65 */ EVC_65,
    /* 66 */ EVC_66,
    /* 67 */ EVC_67,
    /* 68 */ EVC_68,
    /* 69 */ EVC_69,
    /* 100 */ EVC_100=100,
} EventCondition;

typedef enum TexLineColor {
    /* 0 */ TXLC_WHITE,
    /* 1 */ TXLC_LIGHT_BLUE,
    /* 2 */ TXLC_BLUE,
    /* 3 */ TXLC_GREEN,
    /* 4 */ TXLC_RED,
    /* 5 */ TXLC_YELLOW,
} TexLineColor;

#endif
