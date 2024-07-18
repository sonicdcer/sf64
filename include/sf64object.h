#ifndef SF64_OBJECT
#define SF64_OBJECT

#include "libultra/ultra64.h"
#include "sf64math.h"

#define HITBOX_ROTATED 200000.0f
#define HITBOX_SHADOW 300000.0f
#define HITBOX_WHOOSH 400000.0f

typedef struct {
    /* 0x0 */ f32 offset;
    /* 0x4 */ f32 size;
} HitboxDim; // size = 0x8

typedef struct {
    /* 0x00 */ HitboxDim z;
    /* 0x08 */ HitboxDim y;
    /* 0x10 */ HitboxDim x;
} Hitbox; // size = 0x18

typedef struct {
    /* 0x00 */ Triangle tri;
    /* 0x08 */ PlaneI plane;
} CollisionPoly; // size = 0x14

typedef struct {
    /* 0x00 */ Vec3f min;
    /* 0x0C */ Vec3f max;
    /* 0x18 */ s32 polyCount;
    /* 0x1C */ CollisionPoly* polys;
    /* 0x20 */ Vec3s* mesh;
} CollisionHeader; // size = 0x24

typedef struct {
    /* 0x00 */ Vec3f min;
    /* 0x0C */ Vec3f max;
    /* 0x18 */ s32 polyCount;
    /* 0x1C */ Triangle* polys;
    /* 0x20 */ Vec3f* mesh;
} CollisionHeader2; // size = 0x24

typedef enum {
    /*  0 */ COL1_0, // OBJ_ACTOR_ME_MOLAR_ROCK
    /*  1 */ COL1_1, // OBJ_SCENERY_ME_TUNNEL
    /*  2 */ COL1_2,
    /*  3 */ COL1_3, // ACTOR_EVENT_ID
    /*  4 */ COL1_4, // OBJ_BOSS_FO_BASE
    /*  5 */ COL1_5, // OBJ_SCENERY_149
    /*  6 */ COL1_6, // OBJ_SCENERY_150
    /*  7 */ COL1_7, // OBJ_BOSS_BO_BASE
    /*  8 */ COL1_8, // OBJ_BOSS_SZ_GREAT_FOX
    /*  9 */ COL1_9, // OBJ_BOSS_VE2_BASE
} CollisonId_1;

typedef enum {
    /*  0 */ COL2_0,  // default
    /*  1 */ COL2_1,  // OBJ_SCENERY_CO_BUMP_4, OBJ_SCENERY_CO_BUMP_5
    /*  2 */ COL2_2,  // OBJ_SCENERY_CO_BUMP_2
    /*  3 */ COL2_3,  // OBJ_SCENERY_CO_BUMP_3, OBJ_SCENERY_MA_TERRAIN_BUMP
    /*  4 */ COL2_4,  // OBJ_SCENERY_140
    /*  5 */ COL2_5,  // PLAYERSHOT_7 ?
    /*  6 */ COL2_6,  // OBJ_SCENERY_141
    /*  7 */ COL2_7,  // OBJ_SCENERY_ZO_ISLAND
    /*  8 */ COL2_8,  // OBJ_SCENERY_MA_FLOOR_1
    /*  9 */ COL2_9,  // OBJ_SCENERY_MA_FLOOR_3
    /* 10 */ COL2_10, // OBJ_SCENERY_MA_FLOOR_2
    /* 11 */ COL2_11, // OBJ_SCENERY_MA_FLOOR_4
    /* 12 */ COL2_12, // OBJ_SCENERY_MA_WALL_3
    /* 13 */ COL2_13, // OBJ_SCENERY_MA_FLOOR_5
    /* 14 */ COL2_14, // OBJ_SCENERY_117
    /* 15 */ COL2_15, // OBJ_SCENERY_124
    /* 16 */ COL2_16, // OBJ_SCENERY_126
    /* 17 */ COL2_17, // OBJ_SCENERY_143
    /* 18 */ COL2_18, // OBJ_SCENERY_120
} CollisionId_2;

typedef struct {
    /* 0x00 */ f32 zPos1;
    /* 0x04 */ s16 zPos2;
    /* 0x06 */ s16 xPos;
    /* 0x08 */ s16 yPos;
    /* 0x0A */ Vec3s rot;
    /* 0x10 */ s16 id;
} ObjectInit; // size = 0x14

typedef struct {
    /* 0x00 */ u8 status;
    /* 0x02 */ u16 type;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ f32 yRot;
    /* 0x14 */ char pad14[0x14];
} RadarMark; // size = 0x28

typedef struct {
    /* 0x00 */ u8 mode;
    /* 0x02 */ u16 timer;
    /* 0x04 */ Vec3f posAA;
    /* 0x10 */ Vec3f posBB;
    /* 0x1C */ f32 xRot;
    /* 0x20 */ f32 yRot;
    /* 0x24 */ f32 zScale;
    /* 0x28 */ f32 xyScale;
    /* 0x2C */ Color_RGBA32 prim;
} TexturedLine; // size = 0x30

typedef struct {
    /* 0x00 */ u8 hits;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ f32 rise;
    /* 0x14 */ char pad14[0x4];
    /* 0x18 */ u16 timer;
} BonusText; // size = 0x1C

#define BONUS_TEXT_FREE 0
#define BONUS_TEXT_GREAT 100
#define BONUS_TEXT_1UP 101

typedef enum ObjectStatus {
    /* 0 */ OBJ_FREE,
    /* 1 */ OBJ_INIT,
    /* 2 */ OBJ_ACTIVE,
    /* 3 */ OBJ_DYING,
} ObjectStatus;

typedef struct Object {
    /* 0x00 */ u8 status;
    /* 0x02 */ u16 id;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ Vec3f rot;
} Object; // size = 0x1C

typedef void (*ObjectFunc)(Object*);

typedef struct ObjectInfo {
    /* 0x00 */ union {
        ObjectFunc draw;
        Gfx* dList;
    };
    /* 0x00 */ u8 drawType;
    /* 0x08 */ ObjectFunc action; // argument must have object type.
    /* 0x0C */ f32* hitbox;
    /* 0x10 */ f32 cullDistance;  // z coordinate of something
    /* 0x14 */ s16 unk_14;        // can be -1, 0, 1. governs camera-related behavior in effects (billboarding?)
    /* 0x16 */ s16 unk_16;        // can be 0, 1, 2. affects death behavior?
    /* 0x18 */ u8 damage;
    /* 0x19 */ u8 unk_19;         // can be 0, 1, 2. Also camera-related?
    /* 0x1C */ f32 targetOffset;  // target lock y offset. 0.0f can't be targeted
    /* 0x20 */ u8 bonus;          // hits when killed. numbers above 1 indicate the hit+ bonus
} ObjectInfo;                     // size = 0x24

typedef struct Scenery360 {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectInfo info;
    /* 0x40 */ u8 pathIndex;
    /* 0x41 */ char unk_41[7];
    /* 0x48 */ f32 sfxSource[3];
    /* 0x54 */ f32 unk_54;
} Scenery360; // size = 0x58

typedef struct Scenery {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectInfo info;
    /* 0x40 */ s32 index;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 state;
    /* 0x4C */ s32 timer_4C;
    /* 0x50 */ s8 dmgType;
    /* 0x54 */ s32 dmgPart;
    /* 0x58 */ Vec3f effectVel;
    /* 0x64 */ Vec3f vel;
    /* 0x70 */ f32 sfxSource[3];
    /* 0x7C */ char pad7C[4];
} Scenery; // size = 0x80

typedef struct Sprite {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectInfo info;
    /* 0x40 */ s32 index;
    /* 0x44 */ char pad44[1];
    /* 0x45 */ u8 sceneryId;
    /* 0x46 */ s8 destroy;
    /* 0x48 */ s32 toLeft;
} Sprite; // size = 0x4C

typedef struct Item {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectInfo info;
    /* 0x40 */ s32 index;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ u8 state;
    /* 0x48 */ u16 timer_48;
    /* 0x4A */ u16 timer_4A;
    /* 0x4C */ s8 collected;
    /* 0x4E */ s16 playerNum;
    /* 0x50 */ f32 unk_50;
    /* 0x54 */ f32 unk_54;
    /* 0x58 */ f32 unk_58;
    /* 0x5C */ f32 sfxSource[3];
    /* 0x68 */ f32 width;
} Item; // size 0x6C

typedef struct Effect {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectInfo info;
    /* 0x40 */ s32 index;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ s16 unk_46;
    /* 0x48 */ s16 unk_48;
    /* 0x4A */ s16 unk_4A;
    /* 0x4C */ u8 unk_4C;
    /* 0x4E */ s16 state;
    /* 0x50 */ u16 timer_50;
    /* 0x52 */ char pad52[0x2];
    /* 0x54 */ Vec3f vel;
    /* 0x60 */ Vec3f unk_60;
    /* 0x6C */ f32 scale1;
    /* 0x70 */ f32 scale2;
    /* 0x74 */ Gfx* unk_74;
    /* 0x78 */ s16 unk_78;
    /* 0x7A */ s16 unk_7A;
    /* 0x7C */ char pad7C[4];
    /* 0x80 */ f32 sfxSource[3];
} Effect; // size 0x8C

typedef struct Boss {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectInfo info;
    /* 0x040 */ s32 index;
    /* 0x044 */ s16 unk_044;
    /* 0x046 */ s16 unk_046;
    /* 0x048 */ s16 unk_048;
    /* 0x04A */ s16 unk_04A;
    /* 0x04C */ s16 animFrame;
    /* 0x04E */ s16 state;
    /* 0x050 */ s16 timer_050;
    /* 0x052 */ s16 timer_052;
    /* 0x054 */ s16 timer_054;
    /* 0x056 */ s16 timer_056;
    /* 0x058 */ s16 timer_058;
    /* 0x05A */ s16 timer_05A;
    /* 0x05C */ s16 timer_05C;
    /* 0x05E */ u8 drawShadow;
    /* 0x060 */ s16 health;
    /* 0x062 */ s8 dmgType;
    /* 0x064 */ s16 damage;
    /* 0x066 */ s16 dmgPart;
    /* 0x068 */ f32 yOffset;
    /* 0x06C */ Vec3f vel;
    /* 0x078 */ Vec3f rot_078;
    /* 0x084 */ f32 gravity;
    /* 0x088 */ s16 swork[40];
    /* 0x0D8 */ f32 fwork[50];
    /* 0x1A0 */ Vec3f vwork[50];
    /* 0x3F8 */ f32 scale;
    /* 0x3FC */ f32 sfxSource[3];
} Boss; // size = 0x408

#define DMG_COLLISION 3
#define DMG_EXPLOSION 2
#define DMG_BEAM 1
#define DMG_NONE 0
#define DMG_BOMB -1
#define DMG_MISSILE 100

typedef struct Actor {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectInfo info;
    /* 0x040 */ s32 index;
    /* 0x044 */ u8 itemDrop;
    /* 0x046 */ s16 unk_046;
    /* 0x048 */ s16 unk_048;
    /* 0x04A */ s16 unk_04A;
    /* 0x04C */ s16 timer_04C;
    /* 0x04E */ s16 counter_04E;
    /* 0x050 */ s32 iwork[25];
    /* 0x0B4 */ s16 eventType;
    /* 0x0B6 */ s16 animFrame; // used for model type in ActorAllRange and ActorCutscene
    /* 0x0B8 */ s16 state;
    /* 0x0BA */ char pad0BA[0x2];
    /* 0x0BC */ u16 timer_0BC;
    /* 0x0BE */ u16 timer_0BE;
    /* 0x0C0 */ u16 timer_0C0;
    /* 0x0C2 */ u16 timer_0C2;
    /* 0x0C4 */ u16 timer_0C4;
    /* 0x0C6 */ u16 timer_0C6;
    /* 0x0C8 */ u8 unk_0C8; // may have been used for scenery shadowing
    /* 0x0C9 */ u8 drawShadow;
    /* 0x0CA */ u8 lockOnTimers[4];
    /* 0x0CE */ s16 health;
    /* 0x0D0 */ s8 dmgType;
    /* 0x0D2 */ s16 dmgPart;
    /* 0x0D4 */ s16 dmgSource;
    /* 0x0D6 */ u16 damage;
    /* 0x0D8 */ Vec3f hitPos;
    /* 0x0E4 */ s16 aiType;  // Actor index for AllRange, script index for Event
    /* 0x0E6 */ s16 aiIndex; // Target index for AllRange, program counter for Event
    /* 0x0E8 */ Vec3f vel;
    /* 0x0F4 */ Vec3f rot_0F4;
    /* 0x100 */ f32 sfxSource[3];
    /* 0x10C */ f32 gravity;
    /* 0x110 */ f32 scale;
    /* 0x114 */ f32 fwork[30];
    /* 0x18C */ Vec3f vwork[30];
} Actor; // size = 0x2F4

typedef enum ObjectId {
    /*  -1 */ OBJ_INVALID = -1,
    /*   0 */ OBJ_SCENERY_CO_STONE_ARCH,
    /*   1 */ OBJ_SCENERY_CO_BUMP_1, // Terrain bump 1
    /*   2 */ OBJ_SCENERY_CO_BUMP_2, // Terrain bump 2
    /*   3 */ OBJ_SCENERY_CO_BUMP_3, // Terrain bump 3
    /*   4 */ OBJ_SCENERY_CO_BUMP_4, // Terrain bump 4
    /*   5 */ OBJ_SCENERY_CO_BUMP_5, // Terrain bump 5
    /*   6 */ OBJ_SCENERY_CO_HIGHWAY_1,
    /*   7 */ OBJ_SCENERY_CO_HIGHWAY_2,
    /*   8 */ OBJ_SCENERY_CO_HIGHWAY_3,
    /*   9 */ OBJ_SCENERY_CO_HIGHWAY_4,
    /*  10 */ OBJ_SCENERY_CO_BUILDING_1, // Building with "GOOD LUCK!" legend.
    /*  11 */ OBJ_SCENERY_CO_BUILDING_2,
    /*  12 */ OBJ_SCENERY_CO_BUILDING_3,
    /*  13 */ OBJ_SCENERY_CO_BUILDING_4,
    /*  14 */ OBJ_SCENERY_CO_BUILDING_5,
    /*  15 */ OBJ_SCENERY_CO_BUILDING_6,
    /*  16 */ OBJ_SCENERY_CO_BUILDING_7, // Building with Pepper's face on it
    /*  17 */ OBJ_SCENERY_CO_BUILDING_8,
    /*  18 */ OBJ_SCENERY_CO_BUILDING_ON_FIRE,
    /*  19 */ OBJ_SCENERY_CO_TOWER,
    /*  20 */ OBJ_SCENERY_CO_ARCH_1,
    /*  21 */ OBJ_SCENERY_CO_ARCH_2,
    /*  22 */ OBJ_SCENERY_CO_ARCH_3,
    /*  23 */ OBJ_SCENERY_CO_RADAR,
    /*  24 */ OBJ_SCENERY_CO_HIGHWAY_5,
    /*  25 */ OBJ_SCENERY_CO_HIGHWAY_6,
    /*  26 */ OBJ_SCENERY_CO_HIGHWAY_7,
    /*  27 */ OBJ_SCENERY_CO_HIGHWAY_8,
    /*  28 */ OBJ_SCENERY_CO_HIGHWAY_9,
    /*  29 */ OBJ_SCENERY_TI_SKULL,
    /*  30 */ OBJ_SCENERY_TI_RIB_0,
    /*  31 */ OBJ_SCENERY_TI_RIB_1,
    /*  32 */ OBJ_SCENERY_TI_RIB_2,
    /*  33 */ OBJ_SCENERY_TI_RIB_3,
    /*  34 */ OBJ_SCENERY_TI_RIB_4,
    /*  35 */ OBJ_SCENERY_TI_RIB_5,
    /*  36 */ OBJ_SCENERY_TI_RIB_6,
    /*  37 */ OBJ_SCENERY_TI_RIB_7,
    /*  38 */ OBJ_SCENERY_TI_RIB_8,
    /*  39 */ OBJ_SCENERY_ME_TUNNEL,
    /*  40 */ OBJ_SCENERY_CO_BUILDING_9,
    /*  41 */ OBJ_SCENERY_CO_BUILDING_10,
    /*  42 */ OBJ_SCENERY_IBEAM,
    /*  43 */ OBJ_SCENERY_ZO_ROCK_1,
    /*  44 */ OBJ_SCENERY_ZO_OIL_RIG_1,
    /*  45 */ OBJ_SCENERY_ZO_OIL_RIG_2,
    /*  46 */ OBJ_SCENERY_ZO_OIL_RIG_3,
    /*  47 */ OBJ_SCENERY_ZO_ISLAND,
    /*  48 */ OBJ_SCENERY_VE1_WALL_1,
    /*  49 */ OBJ_SCENERY_VE1_WALL_2,
    /*  50 */ OBJ_SCENERY_VE1_WALL_3,
    /*  51 */ OBJ_SCENERY_VE1_HALLWAY_OBSTACLE,
    /*  52 */ OBJ_SCENERY_VE1_GENERATOR,
    /*  53 */ OBJ_SCENERY_VE1_WATCH_POST,
    /*  54 */ OBJ_SCENERY_CO_WATERFALL,
    /*  55 */ OBJ_SCENERY_CO_ROCKWALL,
    /*  56 */ OBJ_SCENERY_CO_DOORS,
    /*  57 */ OBJ_SCENERY_TI_PILLAR,
    /*  58 */ OBJ_SCENERY_TI_BRIDGE,
    /*  59 */ OBJ_SCENERY_MA_BUILDING_1,
    /*  60 */ OBJ_SCENERY_MA_BUILDING_2,
    /*  61 */ OBJ_SCENERY_MA_TOWER,
    /*  62 */ OBJ_SCENERY_MA_WALL_1,
    /*  63 */ OBJ_SCENERY_63,
    /*  64 */ OBJ_SCENERY_MA_GUILLOTINE,
    /*  65 */ OBJ_SCENERY_MA_PROXIMITY_LIGHT,
    /*  66 */ OBJ_SCENERY_MA_WALL_2,
    /*  67 */ OBJ_SCENERY_MA_WALL_3,
    /*  68 */ OBJ_SCENERY_MA_WALL_4,
    /*  69 */ OBJ_SCENERY_MA_TERRAIN_BUMP,
    /*  70 */ OBJ_SCENERY_MA_FLOOR_1,
    /*  71 */ OBJ_SCENERY_MA_FLOOR_2,
    /*  72 */ OBJ_SCENERY_MA_FLOOR_3,
    /*  73 */ OBJ_SCENERY_MA_FLOOR_4,
    /*  74 */ OBJ_SCENERY_MA_FLOOR_5,
    /*  75 */ OBJ_SCENERY_MA_FLOOR_6,
    /*  76 */ OBJ_SCENERY_MA_WEAPONS_FACTORY,
    /*  77 */ OBJ_SCENERY_MA_INDICATOR_SIGN,
    /*  78 */ OBJ_SCENERY_MA_DISTANCE_SIGN_1,
    /*  79 */ OBJ_SCENERY_MA_DISTANCE_SIGN_2,
    /*  80 */ OBJ_SCENERY_MA_DISTANCE_SIGN_3,
    /*  81 */ OBJ_SCENERY_MA_DISTANCE_SIGN_4,
    /*  82 */ OBJ_SCENERY_MA_DISTANCE_SIGN_5,
    /*  83 */ OBJ_SCENERY_MA_TRAIN_STOP_BLOCK,
    /*  84 */ OBJ_SCENERY_MA_RAILROAD_SWITCH_1,
    /*  85 */ OBJ_SCENERY_MA_RAILROAD_SWITCH_2,
    /*  86 */ OBJ_SCENERY_MA_RAILROAD_SWITCH_3,
    /*  87 */ OBJ_SCENERY_MA_RAILROAD_SWITCH_4,
    /*  88 */ OBJ_SCENERY_MA_RAILROAD_SWITCH_5,
    /*  89 */ OBJ_SCENERY_MA_RAILROAD_SWITCH_6,
    /*  90 */ OBJ_SCENERY_MA_RAILROAD_SWITCH_7,
    /*  91 */ OBJ_SCENERY_MA_RAILROAD_SWITCH_8,
    /*  92 */ OBJ_SCENERY_MA_TRAIN_TRACK_1,
    /*  93 */ OBJ_SCENERY_MA_TRAIN_TRACK_2,
    /*  94 */ OBJ_SCENERY_MA_TRAIN_TRACK_3,
    /*  95 */ OBJ_SCENERY_MA_TRAIN_TRACK_4,
    /*  96 */ OBJ_SCENERY_MA_TRAIN_TRACK_5,
    /*  97 */ OBJ_SCENERY_MA_TRAIN_TRACK_6,
    /*  98 */ OBJ_SCENERY_MA_TRAIN_TRACK_7,
    /*  99 */ OBJ_SCENERY_MA_TRAIN_TRACK_8,
    /* 100 */ OBJ_SCENERY_MA_TRAIN_TRACK_9,
    /* 101 */ OBJ_SCENERY_MA_TRAIN_TRACK_10,
    /* 102 */ OBJ_SCENERY_MA_TRAIN_TRACK_11,
    /* 103 */ OBJ_SCENERY_MA_TRAIN_TRACK_12,
    /* 104 */ OBJ_SCENERY_MA_SWITCH_TRACK,
    /* 105 */ OBJ_SCENERY_MA_TRAIN_TRACK_13,
    /* 106 */ OBJ_SCENERY_106,
    /* 107 */ OBJ_SCENERY_107,
    /* 108 */ OBJ_SCENERY_108,
    /* 109 */ OBJ_SCENERY_109,
    /* 110 */ OBJ_SCENERY_110,
    /* 111 */ OBJ_SCENERY_111,
    /* 112 */ OBJ_SCENERY_112,
    /* 113 */ OBJ_SCENERY_113,
    /* 114 */ OBJ_SCENERY_114,
    /* 115 */ OBJ_SCENERY_115,
    /* 116 */ OBJ_SCENERY_116,
    /* 117 */ OBJ_SCENERY_117,
    /* 118 */ OBJ_SCENERY_118,
    /* 119 */ OBJ_SCENERY_119,
    /* 120 */ OBJ_SCENERY_120,
    /* 121 */ OBJ_SCENERY_121,
    /* 122 */ OBJ_SCENERY_122,
    /* 123 */ OBJ_SCENERY_123,
    /* 124 */ OBJ_SCENERY_124,
    /* 125 */ OBJ_SCENERY_125,
    /* 126 */ OBJ_SCENERY_126,
    /* 127 */ OBJ_SCENERY_127,
    /* 128 */ OBJ_SCENERY_128,
    /* 129 */ OBJ_SCENERY_129,
    /* 130 */ OBJ_SCENERY_130,
    /* 131 */ OBJ_SCENERY_131,
    /* 132 */ OBJ_SCENERY_132,
    /* 133 */ OBJ_SCENERY_133,
    /* 134 */ OBJ_SCENERY_134,
    /* 135 */ OBJ_SCENERY_135,
    /* 136 */ OBJ_SCENERY_136,
    /* 137 */ OBJ_SCENERY_137,
    /* 138 */ OBJ_SCENERY_138,
    /* 139 */ OBJ_SCENERY_139,
    /* 140 */ OBJ_SCENERY_140,
    /* 141 */ OBJ_SCENERY_141,
    /* 142 */ OBJ_SCENERY_142,
    /* 143 */ OBJ_SCENERY_143,
    /* 144 */ OBJ_SCENERY_144,
    /* 145 */ OBJ_SCENERY_145,
    /* 146 */ OBJ_SCENERY_146,
    /* 147 */ OBJ_SCENERY_147,
    /* 148 */ OBJ_SCENERY_148,
    /* 149 */ OBJ_SCENERY_149,
    /* 150 */ OBJ_SCENERY_150,
    /* 151 */ OBJ_SCENERY_151,
    /* 152 */ OBJ_SCENERY_152,
    /* 153 */ OBJ_SCENERY_153,
    /* 154 */ OBJ_SCENERY_154,
    /* 155 */ OBJ_SCENERY_155,
    /* 156 */ OBJ_SCENERY_156,
    /* 157 */ OBJ_SCENERY_157,
    /* 158 */ OBJ_SCENERY_158,
    /* 159 */ OBJ_SCENERY_159,
    /* 160 */ OBJ_SCENERY_160,
    /* 161 */ OBJ_SPRITE_CO_POLE,
    /* 162 */ OBJ_SPRITE_CO_TREE,
    /* 163 */ OBJ_SPRITE_FO_POLE,
    /* 164 */ OBJ_SPRITE_FOG_SHADOW,
    /* 165 */ OBJ_SPRITE_CO_RUIN1,
    /* 166 */ OBJ_SPRITE_CO_RUIN2,
    /* 167 */ OBJ_SPRITE_167,
    /* 168 */ OBJ_SPRITE_168,
    /* 169 */ OBJ_SPRITE_TI_CACTUS,
    /* 170 */ OBJ_SPRITE_CO_SMOKE,
    /* 171 */ OBJ_SPRITE_VE1_BOSS_TRIGGER1,
    /* 172 */ OBJ_SPRITE_VE1_BOSS_TRIGGER2,
    /* 173 */ OBJ_SPRITE_VE1_BOSS_TRIGGER3,
    /* 174 */ OBJ_SPRITE_VE1_BOSS_TRIGGER4,
    /* 175 */ OBJ_SPRITE_GFOX_TARGET,
    /* 176 */ OBJ_ACTOR_CO_GARUDA_1, // Robot that pushes buildings.
    /* 177 */ OBJ_ACTOR_CO_GARUDA_2, // Robot that throws I-Beams.
    /* 178 */ OBJ_ACTOR_CO_GARUDA_3, // Robot that spins I-Beams.
    /* 179 */ OBJ_ACTOR_CO_GARUDA_DESTROY,
    /* 180 */ OBJ_ACTOR_ME_MOLAR_ROCK,
    /* 181 */ OBJ_ACTOR_ME_METEOR_1,
    /* 182 */ OBJ_ACTOR_ME_METEOR_2, // Smaller than Meteor 1
    /* 183 */ OBJ_ACTOR_183,
    /* 184 */ OBJ_ACTOR_184,
    /* 185 */ OBJ_ACTOR_185,
    /* 186 */ OBJ_ACTOR_ME_LASER_CANNON_1,
    /* 187 */ OBJ_ACTOR_ME_LASER_CANNON_2,
    /* 188 */ OBJ_ACTOR_AQ_UNK_188, // Unimplemented actor.
    /* 189 */ OBJ_ACTOR_DEBRIS,
    /* 190 */ OBJ_MISSILE_SEEK_TEAM,
    /* 191 */ OBJ_MISSILE_SEEK_PLAYER,
    /* 192 */ OBJ_ACTOR_CO_SKIBOT,
    /* 193 */ OBJ_ACTOR_CO_RADAR,
    /* 194 */ OBJ_ACTOR_ME_MORA,
    /* 195 */ OBJ_ACTOR_CUTSCENE,
    /* 196 */ OBJ_ACTOR_CO_MOLE_MISSILE,
    /* 197 */ OBJ_ACTOR_ALLRANGE,
    /* 198 */ OBJ_ACTOR_TEAM_BOSS,
    /* 199 */ OBJ_ACTOR_199,
    /* 200 */ OBJ_ACTOR_EVENT,
    /* 201 */ OBJ_ACTOR_ME_METEO_BALL,
    /* 202 */ OBJ_ACTOR_ME_HOPBOT,
    /* 203 */ OBJ_ACTOR_SLIPPY_SX,
    /* 204 */ OBJ_ACTOR_SY_ROBOT,
    /* 205 */ OBJ_ACTOR_MA_LOCOMOTIVE,
    /* 206 */ OBJ_ACTOR_MA_TRAIN_CAR_1,
    /* 207 */ OBJ_ACTOR_207,
    /* 208 */ OBJ_ACTOR_MA_TRAIN_CAR_2,
    /* 209 */ OBJ_ACTOR_MA_TRAIN_CAR_3,
    /* 210 */ OBJ_ACTOR_MA_TRAIN_CAR_4,
    /* 211 */ OBJ_ACTOR_MA_TRAIN_CAR_5,
    /* 212 */ OBJ_ACTOR_MA_TRAIN_CAR_6,
    /* 213 */ OBJ_ACTOR_MA_TRAIN_CAR_7,
    /* 214 */ OBJ_ACTOR_MA_RAILROAD_SWITCH,
    /* 215 */ OBJ_ACTOR_MA_BOULDER,
    /* 216 */ OBJ_ACTOR_MA_HORIZONTAL_LOCK_BAR,
    /* 217 */ OBJ_ACTOR_MA_VERTICAL_LOCK_BAR,
    /* 218 */ OBJ_ACTOR_MA_BARRIER,
    /* 219 */ OBJ_ACTOR_219,
    /* 220 */ OBJ_ACTOR_MA_BOMBDROP,
    /* 221 */ OBJ_ACTOR_MA_SPEAR,
    /* 222 */ OBJ_ACTOR_MA_SHOCK_BOX,
    /* 223 */ OBJ_ACTOR_MA_RAILWAY_SIGNAL,
    /* 224 */ OBJ_ACTOR_TI_TERRAIN,
    /* 225 */ OBJ_ACTOR_TI_LANDMINE,
    /* 226 */ OBJ_ACTOR_TI_DESERT_ROVER,
    /* 227 */ OBJ_ACTOR_TI_DELPHOR,      // Tall enemy with laser tracking.
    /* 228 */ OBJ_ACTOR_TI_DELPHOR_HEAD, // Delphor's head.
    /* 229 */ OBJ_ACTOR_TI_DESERT_CRAWLER,
    /* 230 */ OBJ_ACTOR_TI_BOULDER,
    /* 231 */ OBJ_ACTOR_TI_BOMB,   // Ground time-based bomb.
    /* 232 */ OBJ_ACTOR_TI_RASCO,  // Flying enemy that throws rocks.
    /* 233 */ OBJ_ACTOR_TI_FEKUDA, // Small cannon that fires lasers.
    /* 234 */ OBJ_ACTOR_TI_GREAT_FOX,
    /* 235 */ OBJ_ACTOR_ZO_BIRD,
    /* 236 */ OBJ_ACTOR_ZO_DODORA, // Giant flying snake type enemy.
    /* 237 */ OBJ_ACTOR_UNK_237,
    /* 238 */ OBJ_ACTOR_ZO_FISH,
    /* 239 */ OBJ_ACTOR_ZO_DODORA_WP_COUNT, // Dodora waypoint counter.
    /* 240 */ OBJ_ACTOR_ZO_Z_GULL,
    /* 241 */ OBJ_ACTOR_ZO_ENERGY_BALL,     // Energy balls carried by Z-Gulls.
    /* 242 */ OBJ_ACTOR_ZO_TROIKA,
    /* 243 */ OBJ_ACTOR_ZO_SHRIMP,
    /* 244 */ OBJ_ACTOR_ZO_OBNEMA,  // Giant Arachnid type enemy.
    /* 245 */ OBJ_ACTOR_ZO_BALL,    // Balls shoot by Zoness boss.
    /* 246 */ OBJ_ACTOR_ZO_MINE,
    /* 247 */ OBJ_ACTOR_ZO_BARRIER, // Barrier with opening rudders on the sides.
    /* 248 */ OBJ_ACTOR_ZO_CRANE_MAGNET,
    /* 249 */ OBJ_ACTOR_SPIKEBALL,  // Spikeball shoot by Zoness boss.
    /* 250 */ OBJ_ACTOR_ZO_CARGOSHIP,
    /* 251 */ OBJ_ACTOR_ZO_CONTAINER,
    /* 252 */ OBJ_ACTOR_ZO_RADARBUOY, // Zoness searchlight.
    /* 253 */ OBJ_ACTOR_ZO_SUPPLYCRANE,
    /* 254 */ OBJ_ACTOR_ZO_SEARCHLIGHT,
    /* 255 */ OBJ_ACTOR_255,
    /* 256 */ OBJ_ACTOR_256,
    /* 257 */ OBJ_ACTOR_257,
    /* 258 */ OBJ_ACTOR_AQ_PEARL,
    /* 259 */ OBJ_ACTOR_AQ_ANGLERFISH, // Giant fish with search light.
    /* 260 */ OBJ_ACTOR_AQ_GAROA,      // Blue shellded enemy that throws energy balls.
    /* 261 */ OBJ_ACTOR_AQ_SCULPIN,    // Fish-type enemy.
    /* 262 */ OBJ_ACTOR_AQ_SPINDLYFISH,
    /* 263 */ OBJ_ACTOR_AQ_SQUID,
    /* 264 */ OBJ_ACTOR_AQ_SEAWEED,
    /* 265 */ OBJ_ACTOR_AQ_BOULDER,
    /* 266 */ OBJ_ACTOR_AQ_CORAL,
    /* 267 */ OBJ_ACTOR_AQ_JELLYFISH,
    /* 268 */ OBJ_ACTOR_AQ_FISHGROUP, // A school of small fish.
    /* 269 */ OBJ_ACTOR_AQ_STONE_COLUMN,
    /* 270 */ OBJ_ACTOR_AQ_OYSTER,
    /* 271 */ OBJ_ACTOR_BO_SHIELD_REACTOR,
    /* 272 */ OBJ_ACTOR_BO_LASER_CANNON,
    /* 273 */ OBJ_ACTOR_FO_RADAR,
    /* 274 */ OBJ_ACTOR_SZ_SPACE_JUNK,
    /* 275 */ OBJ_ACTOR_SO_ROCK_1, // Surfacing rock type 1.
    /* 276 */ OBJ_ACTOR_SO_ROCK_2, // Surfacing rock type 2.
    /* 277 */ OBJ_ACTOR_SO_ROCK_3, // Surfacing rock type 3.
    /* 278 */ OBJ_ACTOR_SO_WAVE,
    /* 279 */ OBJ_ACTOR_SO_PROMINENCE,
    /* 280 */ OBJ_ACTOR_VE1_PILLAR_1,
    /* 281 */ OBJ_ACTOR_VE1_PILLAR_2,
    /* 282 */ OBJ_ACTOR_VE1_PILLAR_3,
    /* 283 */ OBJ_ACTOR_VE1_PILLAR_4,
    /* 284 */ OBJ_ACTOR_VE1_MONKEY_STATUE,
    /* 285 */ OBJ_ACTOR_AND_LASER_EMITTER,
    /* 286 */ OBJ_ACTOR_AND_BRAIN_WASTE,
    /* 287 */ OBJ_ACTOR_AND_EXPLOSION, // Explosions that follow Fox during the Andross escape.
    /* 288 */ OBJ_ACTOR_AND_RADIO, // Andross radio messages.
    /* 289 */ OBJ_ACTOR_AND_JAMES_TRIGGER,
    /* 290 */ OBJ_ACTOR_AND_BOSS_TIMER_SET,
    /* 291 */ OBJ_ACTOR_SUPPLIES,
    /* 292 */ OBJ_BOSS_CO_GRANGA,
    /* 293 */ OBJ_BOSS_CO_CARRIER,
    /* 294 */ OBJ_BOSS_CO_CARRIER_LEFT,
    /* 295 */ OBJ_BOSS_CO_CARRIER_UPPER,
    /* 296 */ OBJ_BOSS_CO_CARRIER_BOTTOM,
    /* 297 */ OBJ_BOSS_ME_CRUSHER,
    /* 298 */ OBJ_BOSS_ME_CRUSHER_SHIELD,
    /* 299 */ OBJ_BOSS_UNK_299,
    /* 300 */ OBJ_BOSS_UNK_300,
    /* 301 */ OBJ_BOSS_AQ_BACOON_UNK_301,
    /* 302 */ OBJ_BOSS_A6_GORGON,
    /* 303 */ OBJ_BOSS_SX_SPYBORG,
    /* 304 */ OBJ_BOSS_SX_SPYBORG_LEFT_ARM,
    /* 305 */ OBJ_BOSS_SX_SPYBORG_RIGHT_ARM,
    /* 306 */ OBJ_BOSS_TI_GORAS,
    /* 307 */ OBJ_BOSS_ZO_SARUMARINE,
    /* 308 */ OBJ_BOSS_FO_BASE,
    /* 309 */ OBJ_BOSS_BO_BASE,
    /* 310 */ OBJ_BOSS_BO_BASE_SHIELD,
    /* 311 */ OBJ_BOSS_BO_BASE_CORE,
    /* 312 */ OBJ_BOSS_VE2_BASE,
    /* 313 */ OBJ_BOSS_SZ_GREAT_FOX,
    /* 314 */ OBJ_BOSS_SY_SHOGUN,
    /* 315 */ OBJ_BOSS_SO_VULKAIN,
    /* 316 */ OBJ_BOSS_KA,
    /* 317 */ OBJ_BOSS_KA_BASE,
    /* 318 */ OBJ_BOSS_AQ_BACOON,
    /* 319 */ OBJ_BOSS_VE1_GOLEMECH,
    /* 320 */ OBJ_BOSS_AND_ANDROSS,
    /* 321 */ OBJ_BOSS_AND_BRAIN,
    /* 322 */ OBJ_ITEM_LASERS,
    /* 323 */ OBJ_ITEM_CHECKPOINT,
    /* 324 */ OBJ_ITEM_SILVER_RING,
    /* 325 */ OBJ_ITEM_SILVER_STAR,
    /* 326 */ OBJ_ITEM_METEO_WARP,
    /* 327 */ OBJ_ITEM_BOMB,
    /* 328 */ OBJ_ITEM_PATH_SPLIT_X,
    /* 329 */ OBJ_ITEM_PATH_TURN_LEFT,
    /* 330 */ OBJ_ITEM_PATH_TURN_RIGHT,
    /* 331 */ OBJ_ITEM_PATH_SPLIT_Y,
    /* 332 */ OBJ_ITEM_PATH_TURN_UP,
    /* 333 */ OBJ_ITEM_PATH_TURN_DOWN,
    /* 334 */ OBJ_ITEM_RING_CHECK,
    /* 335 */ OBJ_ITEM_1UP,
    /* 336 */ OBJ_ITEM_GOLD_RING,
    /* 337 */ OBJ_ITEM_WING_REPAIR,
    /* 338 */ OBJ_ITEM_TRAINING_RING,
    /* 339 */ OBJ_EFFECT_FIRE_SMOKE,
    /* 340 */ OBJ_EFFECT_340,
    /* 341 */ OBJ_EFFECT_341,
    /* 342 */ OBJ_EFFECT_342,
    /* 343 */ OBJ_EFFECT_343,
    /* 344 */ OBJ_EFFECT_344,
    /* 345 */ OBJ_EFFECT_345,
    /* 346 */ OBJ_EFFECT_346,
    /* 347 */ OBJ_EFFECT_347,
    /* 348 */ OBJ_EFFECT_348,
    /* 349 */ OBJ_EFFECT_349,
    /* 350 */ OBJ_EFFECT_350,
    /* 351 */ OBJ_EFFECT_351,
    /* 352 */ OBJ_EFFECT_CLOUDS,
    /* 353 */ OBJ_EFFECT_ENEMY_LASER_1,
    /* 354 */ OBJ_EFFECT_354,
    /* 355 */ OBJ_EFFECT_355,
    /* 356 */ OBJ_EFFECT_356,
    /* 357 */ OBJ_EFFECT_357,
    /* 358 */ OBJ_EFFECT_358,
    /* 359 */ OBJ_EFFECT_359,
    /* 360 */ OBJ_EFFECT_360,
    /* 361 */ OBJ_EFFECT_361,
    /* 362 */ OBJ_EFFECT_362,
    /* 363 */ OBJ_EFFECT_363,
    /* 364 */ OBJ_EFFECT_364,
    /* 365 */ OBJ_EFFECT_365,
    /* 366 */ OBJ_EFFECT_366,
    /* 367 */ OBJ_EFFECT_367,
    /* 368 */ OBJ_EFFECT_368,
    /* 369 */ OBJ_EFFECT_369,
    /* 370 */ OBJ_EFFECT_370,
    /* 371 */ OBJ_EFFECT_371,
    /* 372 */ OBJ_EFFECT_372,
    /* 373 */ OBJ_EFFECT_TIMED_SFX,
    /* 374 */ OBJ_EFFECT_374,
    /* 375 */ OBJ_EFFECT_375,
    /* 376 */ OBJ_EFFECT_376,
    /* 377 */ OBJ_EFFECT_377,
    /* 378 */ OBJ_EFFECT_378,
    /* 379 */ OBJ_EFFECT_379,
    /* 380 */ OBJ_EFFECT_380,
    /* 381 */ OBJ_EFFECT_381,
    /* 382 */ OBJ_EFFECT_382,
    /* 383 */ OBJ_EFFECT_383,
    /* 384 */ OBJ_EFFECT_384,
    /* 385 */ OBJ_EFFECT_385,
    /* 386 */ OBJ_EFFECT_386,
    /* 387 */ OBJ_EFFECT_387,
    /* 388 */ OBJ_EFFECT_388,
    /* 389 */ OBJ_EFFECT_389,
    /* 390 */ OBJ_EFFECT_390,
    /* 391 */ OBJ_EFFECT_391,
    /* 392 */ OBJ_EFFECT_392,
    /* 393 */ OBJ_EFFECT_393,
    /* 394 */ OBJ_EFFECT_394,
    /* 395 */ OBJ_EFFECT_395,
    /* 396 */ OBJ_EFFECT_396,
    /* 397 */ OBJ_EFFECT_397,
    /* 398 */ OBJ_EFFECT_398,
    /* 399 */ OBJ_EFFECT_399,
    /* 400 */ OBJ_ENV_SMALL_ROCKS_ENABLE,
    /* 401 */ OBJ_ENV_SMALL_ROCKS_DISABLE,
    /* 402 */ OBJ_UNK_402,
    /* 403 */ OBJ_UNK_403,
    /* 404 */ OBJ_UNK_404,
    /* 405 */ OBJ_UNK_405,
    /* 406 */ OBJ_ID_MAX,
} ObjectId;

#define OBJ_SCENERY_START OBJ_SCENERY_CO_STONE_ARCH
#define OBJ_SPRITE_START OBJ_SPRITE_CO_POLE
#define OBJ_ACTOR_START OBJ_ACTOR_CO_GARUDA_1
#define OBJ_BOSS_START OBJ_BOSS_CO_GRANGA
#define OBJ_ITEM_START OBJ_ITEM_LASERS
#define OBJ_EFFECT_START OBJ_EFFECT_FIRE_SMOKE
#define OBJ_ENV_START OBJ_ENV_SMALL_ROCKS_ENABLE

#define OBJ_SCENERY_MAX OBJ_SPRITE_START
#define OBJ_SPRITE_MAX OBJ_ACTOR_START
#define OBJ_ACTOR_MAX OBJ_BOSS_START
#define OBJ_BOSS_MAX OBJ_ITEM_START
#define OBJ_ITEM_MAX OBJ_EFFECT_START
#define OBJ_EFFECT_MAX OBJ_ENV_START

#define ACTOR_EVENT_ID 1000

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

typedef enum AllRangeAi {
    /*   0 */ AI360_FOX,
    /*   1 */ AI360_FALCO,
    /*   2 */ AI360_SLIPPY,
    /*   3 */ AI360_PEPPY,
    /*   4 */ AI360_WOLF,
    /*   5 */ AI360_LEON,
    /*   6 */ AI360_PIGMA,
    /*   7 */ AI360_ANDREW,
    /*   8 */ AI360_KATT,
    /*   9 */ AI360_BILL,
    /*  10 */ AI360_ENEMY,
    /* 100 */ AI360_GREAT_FOX = 100,
    /* 200 */ AI360_MISSILE = 200,
    /* 200 */ AI360_EVENT_HANDLER = 1000,
} AllRangeAi;

Actor* Game_SpawnActor(ObjectId);

// template enums for boss work buffers

typedef enum {
    /*  0 */ LN_SWK_0,
    /*  1 */ LN_SWK_1,
    /*  2 */ LN_SWK_2,
    /*  3 */ LN_SWK_3,
    /*  4 */ LN_SWK_4,
    /*  5 */ LN_SWK_5,
    /*  6 */ LN_SWK_6,
    /*  7 */ LN_SWK_7,
    /*  8 */ LN_SWK_8,
    /*  9 */ LN_SWK_9,
    /* 10 */ LN_SWK_10,
    /* 11 */ LN_SWK_11,
    /* 12 */ LN_SWK_12,
    /* 13 */ LN_SWK_13,
    /* 14 */ LN_SWK_14,
    /* 15 */ LN_SWK_15,
    /* 16 */ LN_SWK_16,
    /* 17 */ LN_SWK_17,
    /* 18 */ LN_SWK_18,
    /* 19 */ LN_SWK_19,
    /* 20 */ LN_SWK_20,
    /* 21 */ LN_SWK_21,
    /* 22 */ LN_SWK_22,
    /* 23 */ LN_SWK_23,
    /* 24 */ LN_SWK_24,
    /* 25 */ LN_SWK_25,
    /* 26 */ LN_SWK_26,
    /* 27 */ LN_SWK_27,
    /* 28 */ LN_SWK_28,
    /* 29 */ LN_SWK_29,
    /* 30 */ LN_SWK_30,
    /* 31 */ LN_SWK_31,
    /* 32 */ LN_SWK_32,
    /* 33 */ LN_SWK_33,
    /* 34 */ LN_SWK_34,
    /* 35 */ LN_SWK_35,
    /* 36 */ LN_SWK_36,
    /* 37 */ LN_SWK_37,
    /* 38 */ LN_SWK_38,
    /* 39 */ LN_SWK_39,
    /* 40 */ LN_SWK_MAX,
} BossLNswork;

typedef enum {
    /*  0 */ LN_FWK_0,
    /*  1 */ LN_FWK_1,
    /*  2 */ LN_FWK_2,
    /*  3 */ LN_FWK_3,
    /*  4 */ LN_FWK_4,
    /*  5 */ LN_FWK_5,
    /*  6 */ LN_FWK_6,
    /*  7 */ LN_FWK_7,
    /*  8 */ LN_FWK_8,
    /*  9 */ LN_FWK_9,
    /* 10 */ LN_FWK_10,
    /* 11 */ LN_FWK_11,
    /* 12 */ LN_FWK_12,
    /* 13 */ LN_FWK_13,
    /* 14 */ LN_FWK_14,
    /* 15 */ LN_FWK_15,
    /* 16 */ LN_FWK_16,
    /* 17 */ LN_FWK_17,
    /* 18 */ LN_FWK_18,
    /* 19 */ LN_FWK_19,
    /* 20 */ LN_FWK_20,
    /* 21 */ LN_FWK_21,
    /* 22 */ LN_FWK_22,
    /* 23 */ LN_FWK_23,
    /* 24 */ LN_FWK_24,
    /* 25 */ LN_FWK_25,
    /* 26 */ LN_FWK_26,
    /* 27 */ LN_FWK_27,
    /* 28 */ LN_FWK_28,
    /* 29 */ LN_FWK_29,
    /* 30 */ LN_FWK_30,
    /* 31 */ LN_FWK_31,
    /* 32 */ LN_FWK_32,
    /* 33 */ LN_FWK_33,
    /* 34 */ LN_FWK_34,
    /* 35 */ LN_FWK_35,
    /* 36 */ LN_FWK_36,
    /* 37 */ LN_FWK_37,
    /* 38 */ LN_FWK_38,
    /* 39 */ LN_FWK_39,
    /* 40 */ LN_FWK_40,
    /* 41 */ LN_FWK_41,
    /* 42 */ LN_FWK_42,
    /* 43 */ LN_FWK_43,
    /* 44 */ LN_FWK_44,
    /* 45 */ LN_FWK_45,
    /* 46 */ LN_FWK_46,
    /* 47 */ LN_FWK_47,
    /* 48 */ LN_FWK_48,
    /* 49 */ LN_FWK_49,
    /* 50 */ LN_FWK_MAX,
} BossLNfwork;

typedef enum {
    /*  0 */ LN_VWK_0,
    /*  1 */ LN_VWK_1,
    /*  2 */ LN_VWK_2,
    /*  3 */ LN_VWK_3,
    /*  4 */ LN_VWK_4,
    /*  5 */ LN_VWK_5,
    /*  6 */ LN_VWK_6,
    /*  7 */ LN_VWK_7,
    /*  8 */ LN_VWK_8,
    /*  9 */ LN_VWK_9,
    /* 10 */ LN_VWK_10,
    /* 11 */ LN_VWK_11,
    /* 12 */ LN_VWK_12,
    /* 13 */ LN_VWK_13,
    /* 14 */ LN_VWK_14,
    /* 15 */ LN_VWK_15,
    /* 16 */ LN_VWK_16,
    /* 17 */ LN_VWK_17,
    /* 18 */ LN_VWK_18,
    /* 19 */ LN_VWK_19,
    /* 20 */ LN_VWK_20,
    /* 21 */ LN_VWK_21,
    /* 22 */ LN_VWK_22,
    /* 23 */ LN_VWK_23,
    /* 24 */ LN_VWK_24,
    /* 25 */ LN_VWK_25,
    /* 26 */ LN_VWK_26,
    /* 27 */ LN_VWK_27,
    /* 28 */ LN_VWK_28,
    /* 29 */ LN_VWK_29,
    /* 30 */ LN_VWK_30,
    /* 31 */ LN_VWK_31,
    /* 32 */ LN_VWK_32,
    /* 33 */ LN_VWK_33,
    /* 34 */ LN_VWK_34,
    /* 35 */ LN_VWK_35,
    /* 36 */ LN_VWK_36,
    /* 37 */ LN_VWK_37,
    /* 38 */ LN_VWK_38,
    /* 39 */ LN_VWK_39,
    /* 40 */ LN_VWK_40,
    /* 41 */ LN_VWK_41,
    /* 42 */ LN_VWK_42,
    /* 43 */ LN_VWK_43,
    /* 44 */ LN_VWK_44,
    /* 45 */ LN_VWK_45,
    /* 46 */ LN_VWK_46,
    /* 47 */ LN_VWK_47,
    /* 48 */ LN_VWK_48,
    /* 49 */ LN_VWK_49,
    /* 50 */ LN_VWK_MAX,
} BossLNvwork;

typedef Scenery Scenery0;
typedef Scenery Scenery1;
typedef Scenery Scenery2;
typedef Scenery Scenery3;
typedef Scenery Scenery4;
typedef Scenery Scenery5;
typedef Scenery Scenery6;
typedef Scenery Scenery7;
typedef Scenery Scenery8;
typedef Scenery Scenery9;
typedef Scenery Scenery10;
typedef Scenery Scenery11;
typedef Scenery Scenery12;
typedef Scenery Scenery13;
typedef Scenery Scenery14;
typedef Scenery Scenery15;
typedef Scenery Scenery16;
typedef Scenery Scenery17;
typedef Scenery CoBuildingOnFire;
typedef Scenery Scenery19;
typedef Scenery Scenery20;
typedef Scenery Scenery21;
typedef Scenery Scenery22;
typedef Scenery Scenery23;
typedef Scenery Scenery24;
typedef Scenery Scenery25;
typedef Scenery Scenery26;
typedef Scenery Scenery27;
typedef Scenery Scenery28;
typedef Scenery Scenery29;
typedef Scenery Scenery30;
typedef Scenery Scenery31;
typedef Scenery Scenery32;
typedef Scenery Scenery33;
typedef Scenery Scenery34;
typedef Scenery Scenery35;
typedef Scenery Scenery36;
typedef Scenery Scenery37;
typedef Scenery Scenery38;
typedef Scenery MeteoTunnel;
typedef Scenery CoBuilding9;
typedef Scenery CoBuilding10;
typedef Scenery CoIBeam;
typedef Scenery Scenery43;
typedef Scenery Scenery44;
typedef Scenery Scenery45;
typedef Scenery Scenery46;
typedef Scenery Scenery47;
typedef Scenery Ve1SceneryWall1;
typedef Scenery Ve1SceneryWall2;
typedef Scenery Scenery50;
typedef Scenery Scenery51;
typedef Scenery Ve1Generator;
typedef Scenery Scenery53;
typedef Scenery CoWaterfall;
typedef Scenery Scenery_55;
typedef Scenery CoDoors;
typedef Scenery TiPillar;
typedef Scenery Scenery58;
typedef Scenery Scenery59;
typedef Scenery Scenery60;
typedef Scenery MaTower;
typedef Scenery Scenery62;
typedef Scenery Scenery63;
typedef Scenery Scenery64;
typedef Scenery MaProximityLight;
typedef Scenery Scenery66;
typedef Scenery Scenery67;
typedef Scenery Scenery68;
typedef Scenery Scenery69;
typedef Scenery Scenery70;
typedef Scenery Scenery71;
typedef Scenery Scenery72;
typedef Scenery Scenery73;
typedef Scenery Scenery74;
typedef Scenery Scenery75;
typedef Scenery Scenery76;
typedef Scenery Scenery77;
typedef Scenery Scenery78;
typedef Scenery Scenery79;
typedef Scenery Scenery80;
typedef Scenery Scenery81;
typedef Scenery Scenery82;
typedef Scenery MaTrainStopBlock;
typedef Scenery Scenery84;
typedef Scenery Scenery85;
typedef Scenery Scenery86;
typedef Scenery Scenery87;
typedef Scenery Scenery88;
typedef Scenery Scenery89;
typedef Scenery Scenery90;
typedef Scenery Scenery91;
typedef Scenery Scenery92;
typedef Scenery Scenery93;
typedef Scenery Scenery94;
typedef Scenery Scenery95;
typedef Scenery Scenery96;
typedef Scenery Scenery97;
typedef Scenery Scenery98;
typedef Scenery Scenery99;
typedef Scenery Scenery100;
typedef Scenery Scenery101;
typedef Scenery Scenery102;
typedef Scenery Scenery103;
typedef Scenery MaSwitchTrack;
typedef Scenery Scenery105;
typedef Scenery Scenery106;
typedef Scenery Scenery107;
typedef Scenery Scenery108;
typedef Scenery Scenery109;
typedef Scenery Scenery110;
typedef Scenery Scenery111;
typedef Scenery Scenery112;
typedef Scenery Scenery113;
typedef Scenery Scenery114;
typedef Scenery Scenery115;
typedef Scenery Scenery116;
typedef Scenery Scenery117;
typedef Scenery Scenery118;
typedef Scenery Scenery119;
typedef Scenery Scenery120;
typedef Scenery Scenery121;
typedef Scenery Scenery122;
typedef Scenery Scenery123;
typedef Scenery Scenery124;
typedef Scenery Scenery125;
typedef Scenery Scenery126;
typedef Scenery Scenery127;
typedef Scenery Scenery128;
typedef Scenery Scenery129;
typedef Scenery Scenery130;
typedef Scenery Scenery131;
typedef Scenery Scenery132;
typedef Scenery Scenery133;
typedef Scenery Scenery134;
typedef Scenery Scenery135;
typedef Scenery Scenery136;
typedef Scenery Scenery137;
typedef Scenery Scenery138;
typedef Scenery Scenery139;
typedef Scenery Scenery140;
typedef Scenery Scenery141;
typedef Scenery Scenery142;
typedef Scenery Scenery143;
typedef Scenery Scenery144;
typedef Scenery Scenery145;
typedef Scenery Scenery146;
typedef Scenery Scenery147;
typedef Scenery Scenery148;
typedef Scenery Scenery149;
typedef Scenery Scenery150;
typedef Scenery Scenery151;
typedef Scenery Scenery152;
typedef Scenery Scenery153;
typedef Scenery Scenery154;
typedef Scenery Scenery155;
typedef Scenery Scenery156;
typedef Scenery Scenery157;
typedef Scenery Scenery158;
typedef Scenery Scenery159;
typedef Scenery Scenery160;
typedef Sprite CoPole;
typedef Sprite CoTree;
typedef Sprite FoPole;
typedef Sprite FogShadow;
typedef Sprite CoRuin1;
typedef Sprite CoRuin2;
typedef Sprite Sprite167;
typedef Sprite Sprite168;
typedef Sprite TiCactus;
typedef Sprite CoSmoke;
typedef Sprite Ve1BossTrigger1;
typedef Sprite Ve1BossTrigger2;
typedef Sprite Ve1BossTrigger3;
typedef Sprite Ve1BossTrigger4;
typedef Sprite GfoxTarget;
typedef Actor CoGaruda1;
typedef Actor CoGaruda2;
typedef Actor CoGaruda3;
typedef Actor CoGarudaDestroy;
typedef Actor MeMolarRock;
typedef Actor MeMeteor1;
typedef Actor MeMeteor2;
typedef Actor Actor183;
typedef Actor Actor184;
typedef Actor Actor185;
typedef Actor MeLaserCannon1;
typedef Actor MeLaserCannon2;
typedef Actor Actor188;
typedef Actor ActorDebris;
typedef Actor Actor190;
typedef Actor Actor191;
typedef Actor ActorSkibot;
typedef Actor ActorRadar;
typedef Actor MeMora;
typedef Actor ActorCutscene;
typedef Actor ActorMoleMissile;
typedef Actor ActorAllRange;
typedef Actor ActorTeamBoss;
typedef Actor Actor199;
typedef Actor ActorEvent;
typedef Actor MeteoBall;
typedef Actor ActorHopBot;
typedef Actor ActorSlippySX;
typedef Actor SyRobot;
typedef Actor Actor205;
typedef Actor TrainCar1;
typedef Actor Actor207;
typedef Actor TrainCar2;
typedef Actor TrainCar3;
typedef Actor TrainCar4;
typedef Actor TrainCar5;
typedef Actor TrainCar6;
typedef Actor TrainCar7;
typedef Actor RailroadSwitch;
typedef Actor MaBoulder;
typedef Actor HorizontalLockBar;
typedef Actor VerticalLockBar;
typedef Actor MaBarrier;
typedef Actor Actor219;
typedef Actor MaBombDrop;
typedef Actor Spear;
typedef Actor ShockBox;
typedef Actor RailwaySignal;
typedef Actor TiTerrain;
typedef Actor TiLandmine;
typedef Actor DesertRover;
typedef Actor TiDelphor;
typedef Actor TiDelphorHead;
typedef Actor TiDesertCrawler;
typedef Actor TiBoulder;
typedef Actor TiBomb;
typedef Actor TiRasco;
typedef Actor Fekuda;
typedef Actor TiGreatFox;
typedef Actor ZoBird;
typedef Actor ZoDodora;
typedef Actor Actor237;
typedef Actor ZoFish;
typedef Actor Actor239;
typedef Actor ZGull;
typedef Actor ZoEnergyBall;
typedef Actor ZoTroika;
typedef Actor ZoShrimp;
typedef Actor ZoObnema;
typedef Actor ZoBall;
typedef Actor ZoMine;
typedef Actor ZoBarrier;
typedef Actor ZoCraneMagnet;
typedef Actor ZoSpikeBall;
typedef Actor ZoCargoShip;
typedef Actor ZoContainer;
typedef Actor ZoRadarBuoy;
typedef Actor ZoSupplyCrane;
typedef Actor ZoSearchLight;
typedef Actor Actor255;
typedef Actor Actor256;
typedef Actor Actor257;
typedef Actor AqPearl;
typedef Actor AqAnglerFish;
typedef Actor AqGaroa;
typedef Actor AqSculpin;
typedef Actor AqSpindlyFish;
typedef Actor AqSquid;
typedef Actor AqSeaweed;
typedef Actor AqBoulder;
typedef Actor AqCoral;
typedef Actor AqJellyfish;
typedef Actor AqFishGroup;
typedef Actor AqStoneColumn;
typedef Actor AqOyster;
typedef Actor BoShieldReactor;
typedef Actor BoLaserCannon;
typedef Actor FoRadar;
typedef Actor ActorSpaceJunk;
typedef Actor SoRock;
typedef Actor SoRock2;
typedef Actor SoRock3;
typedef Actor SoWave;
typedef Actor SoProminence;
typedef Actor Ve1Pillar1;
typedef Actor Ve1Pillar2;
typedef Actor Actor282;
typedef Actor Ve1Pillar4;
typedef Actor Ve1MonkeyStatue;
typedef Actor AndLaserEmitter;
typedef Actor AndBrainWaste;
typedef Actor AndExplosion;
typedef Actor AndRadio;
typedef Actor AndJamesTrigger;
typedef Actor AndBossTimer;
typedef Actor ActorSupplies;
typedef Boss Granga;
typedef Boss Carrier;
typedef Boss CarrierLeft;
typedef Boss CarrierUpper;
typedef Boss CarrierBottom;
typedef Boss MeCrusher;
typedef Boss MeCrusherShield;
typedef Boss Boss299;
typedef Boss Boss300;
typedef Boss Boss301;
typedef Boss BossA6;
typedef Boss Spyborg;
typedef Boss Boss304;
typedef Boss Boss305;
typedef Boss Boss306;
typedef Boss BossZO;
typedef Boss FoBase;
typedef Boss Boss309;
typedef Boss Boss310;
typedef Boss BoBaseCore;
typedef Boss BossVE2;
typedef Boss GreatFoxSZ;
typedef Boss SyShogun;
typedef Boss BossSO;
typedef Boss KaSaucerer;
typedef Boss KaFrontlineBase;
typedef Boss AqBacoon;
typedef Boss Ve1Golemech;
typedef Boss AndAndross;
typedef Boss AndBrain;
typedef Item ItemLasers;
typedef Item ItemCheckpoint;
typedef Item ItemSilverStar;
typedef Item ItemSilverRing;
typedef Item ItemMeteoWarp;
typedef Item ItemBomb;
typedef Item ItemPathSplitX;
typedef Item ItemPathTurnLeft;
typedef Item ItemPathTurnRight;
typedef Item ItemPathSplitY;
typedef Item ItemPathTurnUp;
typedef Item ItemPathTurnDown;
typedef Item ItemRingCheck;
typedef Item Item1UP;
typedef Item ItemGoldRing;
typedef Item ItemWingRepair;
typedef Item ItemTrainingRing;
typedef Effect EffectFireSmoke;
typedef Effect Effect340;
typedef Effect Effect341;
typedef Effect Effect342;
typedef Effect Effect343;
typedef Effect Effect344;
typedef Effect Effect345;
typedef Effect Effect346;
typedef Effect Effect347;
typedef Effect Effect348;
typedef Effect Effect349;
typedef Effect Effect350;
typedef Effect Effect351;
typedef Effect Clouds;
typedef Effect Effect353;
typedef Effect Effect354;
typedef Effect Effect355;
typedef Effect Effect356;
typedef Effect Effect357;
typedef Effect Effect358;
typedef Effect Effect359;
typedef Effect Effect360;
typedef Effect Effect361;
typedef Effect Effect362;
typedef Effect Effect363;
typedef Effect Effect364;
typedef Effect Effect365;
typedef Effect Effect366;
typedef Effect Effect367;
typedef Effect Effect368;
typedef Effect Effect369;
typedef Effect Effect370;
typedef Effect Effect371;
typedef Effect Effect372;
typedef Effect TimedSfx;
typedef Effect Effect374;
typedef Effect Effect375;
typedef Effect Effect376;
typedef Effect Effect377;
typedef Effect Effect378;
typedef Effect Effect379;
typedef Effect Effect380;
typedef Effect Effect381;
typedef Effect Effect382;
typedef Effect Effect383;
typedef Effect Effect384;
typedef Effect Effect385;
typedef Effect Effect386;
typedef Effect Effect387;
typedef Effect Effect388;
typedef Effect Effect389;
typedef Effect Effect390;
typedef Effect Effect391;
typedef Effect Effect392;
typedef Effect Effect393;
typedef Effect Effect394;
typedef Effect Effect395;
typedef Effect Effect396;
typedef Effect Effect397;
typedef Effect Effect398;
typedef Effect Effect399;

#endif
