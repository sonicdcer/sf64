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
#define EVENT_SET_GROUND(type) EVENT_CMD(EVOP_SET_GROUND, 0, type)
#define EVENT_DROP_ITEM(item) EVENT_CMD(EVOP_DROP_ITEM, 0, item)
#define EVENT_ADD_TO_GROUP(num, flags) EVENT_CMD(EVOP_ADD_TO_GROUP, flags, num)
#define EVENT_SET_REVERB(reverb) EVENT_CMD(EVOP_SET_REVERB, 0, reverb)
#define EVENT_STOP_BGM() EVENT_CMD(EVOP_STOP_BGM, 0, 0)

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
    /* 113 */ EVOP_ADD_TO_GROUP,
    /* 116 */ EVOP_DROP_ITEM = 116,
    /* 118 */ EVOP_SET_REVERB = 118,
    /* 119 */ EVOP_SET_GROUND,
    /* 120 */ EVOP_PLAY_MSG,
    /* 121 */ EVOP_DAMAGE_TEAM,
    /* 122 */ EVOP_STOP_BGM,
    /* 124 */ EVOP_MAKE_TEXLINE = 124,
    /* 125 */ EVOP_STOP_TEXLINE,
    /* 126 */ EVOP_LOOP,
    /* 127 */ EVOP_STOP_SCRIPT,
} EventOpcode;

typedef enum EventCondition {
    /*  0 */ EVC_0,
    /*  1 */ EVC_1,
    /*  2 */ EVC_TEAM_COUNT_3,
    /*  3 */ EVC_TEAM_COUNT_2,
    /*  4 */ EVC_TEAM_COUNT_1,
    /*  5 */ EVC_TEAM_COUNT_0,
    /*  6 */ EVC_FALCO_ACTIVE,
    /*  7 */ EVC_PEPPY_ACTIVE,
    /*  8 */ EVC_SLIPPY_ACTIVE,
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
    /* 25 */ EVC_HEALTH_100p,
    /* 26 */ EVC_HEALTH_75p,
    /* 27 */ EVC_HEALTH_50p,
    /* 28 */ EVC_HEALTH_25p,
    /* 29 */ EVC_HEALTH_0p,
    /* 30 */ EVC_30,
    /* 31 */ EVC_31,
    /* 32 */ EVC_32,
    /* 33 */ EVC_33,
    /* 34 */ EVC_34,
    /* 35 */ EVC_SINGLE_LASER,
    /* 36 */ EVC_TWIN_LASER,
    /* 37 */ EVC_HYPER_LASER,
    /* 38 */ EVC_UNK3_LASER,
    /* 39 */ EVC_39,
    /* 40 */ EVC_40,
    /* 41 */ EVC_41,
    /* 42 */ EVC_42,
    /* 43 */ EVC_43,
    /* 44 */ EVC_44,
    /* 45 */ EVC_45,
    /* 46 */ EVC_46,
    /* 47 */ EVC_PRESS_CRIGHT,
    /* 48 */ EVC_WING_BROKEN,
    /* 49 */ EVC_ME_CLEAR,
    /* 50 */ EVC_FO_CLEAR,
    /* 51 */ EVC_SX_CLEAR,
    /* 52 */ EVC_TI_CLEAR,
    /* 53 */ EVC_BO_CLEAR,
    /* 54 */ EVC_SY_CLEAR,
    /* 55 */ EVC_KA_CLEAR,
    /* 56 */ EVC_SO_CLEAR,
    /* 57 */ EVC_MA_CLEAR,
    /* 58 */ EVC_AQ_CLEAR,
    /* 59 */ EVC_ZO_CLEAR,
    /* 60 */ EVC_SZ_CLEAR,
    /* 61 */ EVC_A6_CLEAR,
    /* 62 */ EVC_62,
    /* 63 */ EVC_63,
    /* 64 */ EVC_64,
    /* 65 */ EVC_30_HITS,
    /* 66 */ EVC_80_HITS,
    /* 67 */ EVC_EXPERT_MODE,
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

typedef enum GroundType {
    /* 0 */ GROUNDTYPE_GRASS,
    /* 1 */ GROUNDTYPE_ROCK,
    /* 2 */ GROUNDTYPE_WATER,
} GroundType;

typedef enum ItemDrop {
    /*  0 */ DROP_NONE,
    /*  1 */ DROP_SILVER_RING,
    /*  2 */ DROP_SILVER_RING_50p,
    /*  3 */ DROP_SILVER_RING_33p,
    /*  4 */ DROP_SILVER_RING_25p,
    /*  5 */ DROP_BOMB,
    /*  6 */ DROP_BOMB_50p,
    /*  7 */ DROP_BOMB_33p,
    /*  8 */ DROP_BOMB_25p,
    /*  9 */ DROP_LASERS,
    /* 10 */ DROP_LASERS_50p,
    /* 11 */ DROP_LASERS_33p,
    /* 12 */ DROP_LASERS_25p,
    /* 13 */ DROP_1UP,
    /* 14 */ DROP_GOLD_RING_1,
    /* 15 */ DROP_GOLD_RING_2,
    /* 16 */ DROP_GOLD_RING_3,
    /* 17 */ DROP_GOLD_RING_4,
    /* 18 */ DROP_GOLD_RING_GROUP,
    /* 19 */ DROP_LASERS_GROUP,
    /* 20 */ DROP_BOMB_GROUP,
    /* 21 */ DROP_SILVER_RING_GROUP,
    /* 22 */ DROP_SILVER_RING_10p,
    /* 23 */ DROP_WING_REPAIR,
    /* 24 */ DROP_TEAM_MESG,
    /* 25 */ DROP_SILVER_STAR,
    /* 26 */ DROP_MAX,
} ItemDrop;

#endif
