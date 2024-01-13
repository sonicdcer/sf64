#include "global.h"

// f32 temp[] = {
//     13.0f,
//     { { -163.79999f, 187.2f }, { 1495.0f, 119.6f }, { 0.0f, 153.4f } },
//     { { -397.8f, 130.0f }, { 1284.3999f, 262.59998f }, { 0.0f, 80.6f } },
//     { { -223.599991f, 197.599991f }, { 904.8f, 145.59999f }, { 0.0f, 140.4f } },
//     {
//         HITBOX_UNK_2,
//         { 40.0f, 0.0f, 0.0f },
//         { { -561.6f, 119.6f }, { 600.6f, 319.8f }, { 338.0f, 104.0f } },
//     },
//     {
//         HITBOX_UNK_2,
//         { 40.0f, 0.0f, 0.0f },
//         { { -561.6f, 119.6f }, { 600.6f, 319.8f }, { -338.0f, 104.0f } },
//     },
//     { { -78.0f, 231.4f }, { 577.19995f, 184.599991f }, { 0.0f, 189.799988f } },
//     { { 26.0f, 754.0f }, { 140.4f, 267.8f }, { 0.0f, 215.799988f } },
//     { { -556.39996f, 260.0f }, { 491.4f, 226.2f }, { 0.0f, 179.4f } },
//     { { -213.2f, 200.2f }, { 473.199982f, 231.4f }, { 613.6f, 187.2f } },
//     { { -213.2f, 200.2f }, { 473.199982f, 231.4f }, { -613.6f, 187.2f } },
//     { { -351.0f, 694.199951f }, { 33.8f, 208.0f }, { 572.0f, 306.8f } },
//     { { -351.0f, 694.199951f }, { 33.8f, 208.0f }, { -572.0f, 306.8f } },
//     { { -896.99994f, 244.4f }, { 863.199951f, 171.599991f }, { 0.0f, 93.6f } },
// };

typedef struct {
    f32 id;
    Vec3f tilt;
    Hitbox b;
} TiltHitbox;

#define LIMB_DESTROYED 1000

#define ZO_HITBOX_COUNT ((s32) (bossZO)->info.hitbox[0])
#define ZO_HIT_0(bossZO) ((Hitbox*) ((bossZO)->info.hitbox + 1))
#define ZO_HIT_1(bossZO) ((Hitbox*) (ZO_HIT_0(bossZO) + 1))
#define ZO_HIT_2(bossZO) ((Hitbox*) (ZO_HIT_1(bossZO) + 1))
#define ZO_HIT_3(bossZO) ((TiltHitbox*) (ZO_HIT_2(bossZO) + 1))
#define ZO_HIT_4(bossZO) ((TiltHitbox*) (ZO_HIT_3(bossZO) + 1))
#define ZO_HIT_5(bossZO) ((Hitbox*) (ZO_HIT_4(bossZO) + 1))
#define ZO_HIT_6(bossZO) ((Hitbox*) (ZO_HIT_5(bossZO) + 1))
#define ZO_HIT_7(bossZO) ((Hitbox*) (ZO_HIT_6(bossZO) + 1))
#define ZO_HIT_8(bossZO, index) ((Hitbox*) ((f32*) (ZO_HIT_7(bossZO) + 1) + 6 * (index)))
#define ZO_HIT_10(bossZO, index) ((Hitbox*) ((f32*) (ZO_HIT_8(bossZO, 0) + 2) + 6 * (index)))
#define ZO_HIT_12(bossZO) ((Hitbox*) (ZO_HIT_10(bossZO, 0) + 2))

void func_8007EE68(s32, Vec3f*, Vec3f*, Vec3f*, Vec3f*, f32);
void func_80081BEC(f32, f32, f32, f32, s32);
void func_8008377C(f32, f32, f32, f32, f32);
void func_E16C50_801A7750(void);
void func_E16C50_801986FC(Boss* bossZO, s32 arg1, f32 xOff, f32 yOff, f32 zOff, f32 yRot);
void func_E16C50_801989FC(Boss* bossZO);
void func_E16C50_80198BE8(Boss* bossZO, s32 arg1);
void func_E16C50_80198ECC(Boss* bossZO);
void func_E16C50_80198F3C(Boss* bossZO, s32 arg1, s32 arg2);
void func_E16C50_8019907C(Boss* bossZO);
void func_E16C50_8019914C(Boss* bossZO, s32 arg1);
void func_E16C50_801991D0(Boss* bossZO, s32 arg1);
void func_E16C50_80199394(Boss* bossZO, s32 arg1);
void func_E16C50_80199470(Boss* bossZO, s32 arg1);
void func_E16C50_8019962C(Boss* bossZO, f32 arg1);

extern Gfx D_6002E10[];
extern Gfx D_6004380[];
extern Gfx D_6006360[];
extern Limb* D_600E7D8[];
extern Gfx D_6013330[];
extern Gfx D_6017950[];
extern Gfx D_60181E0[];
extern AnimationHeader D_6018550;
extern Limb* D_601863C[];
extern Gfx D_6018660[];
extern AnimationHeader D_60195EC;
extern Limb* D_6019738[];
extern AnimationHeader D_601996C;
extern Limb* D_6019E18[];
extern Gfx D_6019EB0[];
extern Gfx D_601A340[];
extern AnimationHeader D_601AA48;
extern Limb* D_601AB14[];
extern AnimationHeader D_601AFB8;
extern Limb* D_601B184[];
extern Gfx D_601BCC0[];
extern Gfx D_601C590[];
extern Gfx D_601D680[];
extern AnimationHeader D_601FBC4;
extern Limb* D_601FC90[];
extern AnimationHeader D_6021ABC;
extern Limb* D_6021B88[];
extern Gfx D_6023D50[];
extern Gfx D_6025E60[];
extern f32 D_602C028[];
extern Gfx D_60012A0[];
extern Gfx D_60239E0[];
extern Gfx D_6023730[];

// typedef struct {
//     /* 0 */ char pad0[4];
//     /* 4 */ f32 unk_4;
//     /* 8 */ char pad8[36];
//     /* 44 */ f32 unk_2C;
//     /* 48 */ char pad30[44];
//     /* 92 */ f32 unk_5C;
//     /* 96 */ char pad60[4];
//     /* 100 */ f32 unk_64;
//     /* 104 */ f32 unk_68;
//     /* 108 */ char pad6C[4];
//     /* 112 */ f32 unk_70;
//     /* 116 */ Vec3f unk_74;
//     /* 128 */ Vec3f unk_80;
//     /* 140 */ char pad8C[8];
//     /* 148 */ Vec3f unk_94;
//     /* 160 */ Vec3f unk_A0;
//     /* 172 */ Vec3f unk_AC;
//     /* 184 */ Vec3f unk_B8;
//     /* 196 */ Vec3f unk_C4;
//     /* 208 */ Vec3f unk_D0;
//     /* 220 */ Vec3f unk_DC;
//     /* 232 */ char padE8[8];
//     /* 240 */ Vec3f unk_F0;
//     /* 252 */ char padFC[8];
//     /* 260 */ Vec3f unk_104;
//     /* 272 */ Vec3f unk_110;
//     /* 284 */ Vec3f unk_11C;
//     /* 296 */ char pad128[76];
//     /* 372 */ Vec3f unk_174;
//     /* 384 */ Vec3f unk_180;
//     /* 396 */ Vec3f unk_18C;
//     /* 408 */ Vec3f unk_198;
//     /* 420 */ char pad1A4[4];
//     /* 424 */ Vec3f unk_1A8;
//     /* 436 */ Vec3f unk_1B4;
//     /* 448 */ char pad1C0[152];
// } UnkStruct_1C24E8; /* size = 600 */

typedef enum {
    /*  0 */ ZO_LIMB_0,
    /*  1 */ ZO_LIMB_1,
    /*  2 */ ZO_LIMB_2,
    /*  3 */ ZO_LIMB_3,
    /*  4 */ ZO_LIMB_4,
    /*  5 */ ZO_LIMB_5,
    /*  6 */ ZO_LIMB_6,
    /*  7 */ ZO_LIMB_7,
    /*  8 */ ZO_LIMB_8,
    /*  9 */ ZO_LIMB_9,
    /* 10 */ ZO_LIMB_10,
    /* 11 */ ZO_LIMB_11,
    /* 12 */ ZO_LIMB_12,
    /* 13 */ ZO_LIMB_13,
    /* 14 */ ZO_LIMB_14,
    /* 15 */ ZO_LIMB_15,
    /* 16 */ ZO_LIMB_16,
    /* 17 */ ZO_LIMB_17,
    /* 18 */ ZO_LIMB_18,
    /* 19 */ ZO_LIMB_19,
    /* 20 */ ZO_LIMB_20,
    /* 21 */ ZO_LIMB_21,
    /* 22 */ ZO_LIMB_22,
    /* 23 */ ZO_LIMB_23,
    /* 24 */ ZO_LIMB_24,
    /* 25 */ ZO_LIMB_25,
    /* 26 */ ZO_LIMB_26,
    /* 27 */ ZO_LIMB_27,
    /* 28 */ ZO_LIMB_28,
    /* 29 */ ZO_LIMB_29,
    /* 30 */ ZO_LIMB_30,
    /* 31 */ ZO_LIMB_31,
    /* 32 */ ZO_LIMB_32,
    /* 33 */ ZO_LIMB_33,
    /* 34 */ ZO_LIMB_34,
    /* 35 */ ZO_LIMB_35,
    /* 36 */ ZO_LIMB_36,
    /* 37 */ ZO_LIMB_37,
    /* 38 */ ZO_LIMB_38,
    /* 39 */ ZO_LIMB_39,
    /* 40 */ ZO_LIMB_MAX,
} ZoLimbs;

typedef enum {
    /*   0 */ ZO_BSF_0,
    /*   1 */ ZO_BSF_1,
    /*   2 */ ZO_BSF_2,
    /*   3 */ ZO_BSF_3,
    /*   4 */ ZO_BSF_4,
    /*   5 */ ZO_BSF_5,
    /*   6 */ ZO_BSF_6,
    /*   7 */ ZO_BSF_7,
    /*   8 */ ZO_BSF_8,
    /*   9 */ ZO_BSF_9,
    /*  10 */ ZO_BSF_10,
    /*  11 */ ZO_BSF_11,
    /*  12 */ ZO_BSF_12,
    /*  13 */ ZO_BSF_13,
    /*  14 */ ZO_BSF_14,
    /*  15 */ ZO_BSF_15,
    /*  16 */ ZO_BSF_16,
    /*  17 */ ZO_BSF_17,
    /*  18 */ ZO_BSF_18,
    /*  19 */ ZO_BSF_19,
    /*  20 */ ZO_BSF_20,
    /*  21 */ ZO_BSF_21,
    /*  22 */ ZO_BSF_22,
    /*  23 */ ZO_BSF_23,
    /*  24 */ ZO_BSF_24,
    /*  25 */ ZO_BSF_25,
    /*  26 */ ZO_BSF_26,
    /*  27 */ ZO_BSF_27,
    /*  28 */ ZO_BSF_28,
    /*  29 */ ZO_BSF_29_X,
    /*  30 */ ZO_BSF_29_Y,
    /*  31 */ ZO_BSF_29_Z,
    /*  32 */ ZO_BSF_32_X,
    /*  33 */ ZO_BSF_32_Y,
    /*  34 */ ZO_BSF_32_Z,
    /*  35 */ ZO_BSF_35,
    /*  36 */ ZO_BSF_36,
    /*  37 */ ZO_BSF_37_X,
    /*  38 */ ZO_BSF_37_Y,
    /*  39 */ ZO_BSF_37_Z,
    /*  40 */ ZO_BSF_40_X,
    /*  41 */ ZO_BSF_40_Y,
    /*  42 */ ZO_BSF_40_Z,
    /*  43 */ ZO_BSF_43_X,
    /*  44 */ ZO_BSF_43_Y,
    /*  45 */ ZO_BSF_43_Z,
    /*  46 */ ZO_BSF_46_X,
    /*  47 */ ZO_BSF_46_Y,
    /*  48 */ ZO_BSF_46_Z,
    /*  49 */ ZO_BSF_49_X,
    /*  50 */ ZO_BSF_49_Y,
    /*  51 */ ZO_BSF_49_Z,
    /*  52 */ ZO_BSF_52_X,
    /*  53 */ ZO_BSF_52_Y,
    /*  54 */ ZO_BSF_52_Z,
    /*  55 */ ZO_BSF_55_X,
    /*  56 */ ZO_BSF_55_Y,
    /*  57 */ ZO_BSF_55_Z,
    /*  58 */ ZO_BSF_58,
    /*  59 */ ZO_BSF_59,
    /*  60 */ ZO_BSF_60_X,
    /*  61 */ ZO_BSF_60_Y,
    /*  62 */ ZO_BSF_60_Z,
    /*  63 */ ZO_BSF_63,
    /*  64 */ ZO_BSF_64,
    /*  65 */ ZO_BSF_65_X,
    /*  66 */ ZO_BSF_65_Y,
    /*  67 */ ZO_BSF_65_Z,
    /*  68 */ ZO_BSF_68_X,
    /*  69 */ ZO_BSF_68_Y,
    /*  70 */ ZO_BSF_68_Z,
    /*  71 */ ZO_BSF_71_X,
    /*  72 */ ZO_BSF_71_Y,
    /*  73 */ ZO_BSF_71_Z,
    /*  74 */ ZO_BSF_74,
    /*  75 */ ZO_BSF_75,
    /*  76 */ ZO_BSF_76,
    /*  77 */ ZO_BSF_77,
    /*  78 */ ZO_BSF_78,
    /*  79 */ ZO_BSF_79,
    /*  80 */ ZO_BSF_80,
    /*  81 */ ZO_BSF_81,
    /*  82 */ ZO_BSF_82,
    /*  83 */ ZO_BSF_83,
    /*  84 */ ZO_BSF_84,
    /*  85 */ ZO_BSF_85,
    /*  86 */ ZO_BSF_86,
    /*  87 */ ZO_BSF_87,
    /*  88 */ ZO_BSF_88,
    /*  89 */ ZO_BSF_89,
    /*  90 */ ZO_BSF_90,
    /*  91 */ ZO_BSF_91,
    /*  92 */ ZO_BSF_92,
    /*  93 */ ZO_BSF_93_X,
    /*  94 */ ZO_BSF_93_Y,
    /*  95 */ ZO_BSF_93_Z,
    /*  96 */ ZO_BSF_96_X,
    /*  97 */ ZO_BSF_96_Y,
    /*  98 */ ZO_BSF_96_Z,
    /*  99 */ ZO_BSF_99_X,
    /* 100 */ ZO_BSF_99_Y,
    /* 101 */ ZO_BSF_99_Z,
    /* 102 */ ZO_BSF_102_X,
    /* 103 */ ZO_BSF_102_Y,
    /* 104 */ ZO_BSF_102_Z,
    /* 105 */ ZO_BSF_105,
    /* 106 */ ZO_BSF_106_X,
    /* 107 */ ZO_BSF_106_Y,
    /* 108 */ ZO_BSF_106_Z,
    /* 109 */ ZO_BSF_109_X,
    /* 110 */ ZO_BSF_109_Y,
    /* 111 */ ZO_BSF_109_Z,
    /* 112 */ ZO_BSF_112,
    /* 113 */ ZO_BSF_113,
    /* 114 */ ZO_BSF_114,
    /* 115 */ ZO_BSF_115,
    /* 116 */ ZO_BSF_116,
    /* 117 */ ZO_BSF_117,
    /* 118 */ ZO_BSF_118,
    /* 119 */ ZO_BSF_119,
    /* 120 */ ZO_BSF_120,
    /* 121 */ ZO_BSF_121,
    /* 122 */ ZO_BSF_122,
    /* 123 */ ZO_BSF_123,
    /* 124 */ ZO_BSF_124,
    /* 125 */ ZO_BSF_125,
    /* 126 */ ZO_BSF_126,
    /* 127 */ ZO_BSF_127,
    /* 128 */ ZO_BSF_128,
    /* 129 */ ZO_BSF_129,
    /* 130 */ ZO_BSF_130,
    /* 131 */ ZO_BSF_131,
    /* 132 */ ZO_BSF_132,
    /* 133 */ ZO_BSF_133,
    /* 134 */ ZO_BSF_134,
    /* 135 */ ZO_BSF_135,
    /* 136 */ ZO_BSF_136,
    /* 137 */ ZO_BSF_137,
    /* 138 */ ZO_BSF_138,
    /* 139 */ ZO_BSF_139,
    /* 140 */ ZO_BSF_140,
    /* 141 */ ZO_BSF_141,
    /* 142 */ ZO_BSF_142,
    /* 143 */ ZO_BSF_143,
    /* 144 */ ZO_BSF_144,
    /* 145 */ ZO_BSF_145,
    /* 146 */ ZO_BSF_146,
    /* 147 */ ZO_BSF_147,
    /* 148 */ ZO_BSF_148,
    /* 149 */ ZO_BSF_149,
    /* 150 */ ZO_BSF_MAX,
} BossZObsfwork;

typedef enum {
    /*  0 */ ZO_BSS_0,
    /*  1 */ ZO_BSS_1,
    /*  2 */ ZO_BSS_2,
    /*  3 */ ZO_BSS_3,
    /*  4 */ ZO_BSS_4,
    /*  5 */ ZO_BSS_5,
    /*  6 */ ZO_BSS_6,
    /*  7 */ ZO_BSS_7,
    /*  8 */ ZO_BSS_8,
    /*  9 */ ZO_BSS_9,
    /* 10 */ ZO_BSS_10,
    /* 11 */ ZO_BSS_11,
    /* 12 */ ZO_BSS_12,
    /* 13 */ ZO_BSS_13,
    /* 14 */ ZO_BSS_14,
    /* 15 */ ZO_BSS_15,
    /* 16 */ ZO_BSS_16,
    /* 17 */ ZO_BSS_17,
    /* 18 */ ZO_BSS_18,
    /* 19 */ ZO_BSS_19,
    /* 20 */ ZO_BSS_20,
    /* 21 */ ZO_BSS_21,
    /* 22 */ ZO_BSS_22,
    /* 23 */ ZO_BSS_23,
    /* 24 */ ZO_BSS_24,
    /* 25 */ ZO_BSS_25,
    /* 26 */ ZO_BSS_26,
    /* 27 */ ZO_BSS_27,
    /* 28 */ ZO_BSS_28,
    /* 29 */ ZO_BSS_29,
    /* 30 */ ZO_BSS_30,
    /* 31 */ ZO_BSS_31,
    /* 32 */ ZO_BSS_32,
    /* 33 */ ZO_BSS_33,
    /* 34 */ ZO_BSS_34,
    /* 35 */ ZO_BSS_35,
    /* 36 */ ZO_BSS_36,
    /* 37 */ ZO_BSS_37,
    /* 38 */ ZO_BSS_38,
    /* 39 */ ZO_BSS_39,
    /* 40 */ ZO_BSS_40,
    /* 41 */ ZO_BSS_41,
    /* 42 */ ZO_BSS_42,
    /* 43 */ ZO_BSS_43,
    /* 44 */ ZO_BSS_44,
    /* 45 */ ZO_BSS_45,
    /* 46 */ ZO_BSS_46,
    /* 47 */ ZO_BSS_47,
    /* 48 */ ZO_BSS_48,
    /* 49 */ ZO_BSS_49,
    /* 50 */ ZO_BSS_50,
    /* 51 */ ZO_BSS_51,
    /* 52 */ ZO_BSS_52,
    /* 53 */ ZO_BSS_53,
    /* 54 */ ZO_BSS_54,
    /* 55 */ ZO_BSS_55,
    /* 56 */ ZO_BSS_56,
    /* 57 */ ZO_BSS_57,
    /* 58 */ ZO_BSS_58,
    /* 59 */ ZO_BSS_59,
    /* 60 */ ZO_BSS_60,
    /* 61 */ ZO_BSS_61,
    /* 62 */ ZO_BSS_62,
    /* 63 */ ZO_BSS_63,
    /* 64 */ ZO_BSS_64,
    /* 65 */ ZO_BSS_65,
    /* 66 */ ZO_BSS_66,
    /* 67 */ ZO_BSS_67,
    /* 68 */ ZO_BSS_68,
    /* 69 */ ZO_BSS_69,
    /* 70 */ ZO_BSS_MAX,
} BossZObsswork;

typedef enum {
    /*  0 */ ZO_SWK_0,
    /*  1 */ ZO_SWK_1,
    /*  2 */ ZO_SWK_2,
    /*  3 */ ZO_SWK_3,
    /*  4 */ ZO_SWK_4,
    /*  5 */ ZO_SWK_5,
    /*  6 */ ZO_SWK_6,
    /*  7 */ ZO_SWK_7,
    /*  8 */ ZO_SWK_8,
    /*  9 */ ZO_SWK_9,
    /* 10 */ ZO_SWK_10,
    /* 11 */ ZO_SWK_11,
    /* 12 */ ZO_SWK_12,
    /* 13 */ ZO_SWK_13,
    /* 14 */ ZO_SWK_14,
    /* 15 */ ZO_SWK_15,
    /* 16 */ ZO_SWK_16,
    /* 17 */ ZO_SWK_17,
    /* 18 */ ZO_SWK_18,
    /* 19 */ ZO_SWK_19,
    /* 20 */ ZO_SWK_20,
    /* 21 */ ZO_SWK_21,
    /* 22 */ ZO_SWK_22,
    /* 23 */ ZO_SWK_23,
    /* 24 */ ZO_SWK_24,
    /* 25 */ ZO_SWK_25,
    /* 26 */ ZO_SWK_26,
    /* 27 */ ZO_SWK_27,
    /* 28 */ ZO_SWK_28,
    /* 29 */ ZO_SWK_29,
    /* 30 */ ZO_SWK_30,
    /* 31 */ ZO_SWK_31,
    /* 32 */ ZO_SWK_32,
    /* 33 */ ZO_SWK_33,
    /* 34 */ ZO_SWK_34,
    /* 35 */ ZO_SWK_35,
    /* 36 */ ZO_SWK_36,
    /* 37 */ ZO_SWK_37,
    /* 38 */ ZO_SWK_38,
    /* 39 */ ZO_SWK_39,
    /* 40 */ ZO_SWK_MAX,
} BossZOswork;

typedef enum {
    /*  0 */ ZO_FWK_0,
    /*  1 */ ZO_FWK_1,
    /*  2 */ ZO_FWK_2,
    /*  3 */ ZO_FWK_3,
    /*  4 */ ZO_FWK_4,
    /*  5 */ ZO_FWK_5,
    /*  6 */ ZO_FWK_6,
    /*  7 */ ZO_FWK_7,
    /*  8 */ ZO_FWK_8,
    /*  9 */ ZO_FWK_9,
    /* 10 */ ZO_FWK_10,
    /* 11 */ ZO_FWK_11,
    /* 12 */ ZO_FWK_12,
    /* 13 */ ZO_FWK_13,
    /* 14 */ ZO_FWK_14,
    /* 15 */ ZO_FWK_15,
    /* 16 */ ZO_FWK_16,
    /* 17 */ ZO_FWK_17,
    /* 18 */ ZO_FWK_18,
    /* 19 */ ZO_FWK_19,
    /* 20 */ ZO_FWK_20,
    /* 21 */ ZO_FWK_21,
    /* 22 */ ZO_FWK_22,
    /* 23 */ ZO_FWK_23,
    /* 24 */ ZO_FWK_24,
    /* 25 */ ZO_FWK_25,
    /* 26 */ ZO_FWK_26,
    /* 27 */ ZO_FWK_27,
    /* 28 */ ZO_FWK_28,
    /* 29 */ ZO_FWK_29,
    /* 30 */ ZO_FWK_30,
    /* 31 */ ZO_FWK_31,
    /* 32 */ ZO_FWK_32,
    /* 33 */ ZO_FWK_33,
    /* 34 */ ZO_FWK_34,
    /* 35 */ ZO_FWK_35,
    /* 36 */ ZO_FWK_36,
    /* 37 */ ZO_FWK_37,
    /* 38 */ ZO_FWK_38,
    /* 39 */ ZO_FWK_39,
    /* 40 */ ZO_FWK_40,
    /* 41 */ ZO_FWK_41,
    /* 42 */ ZO_FWK_42,
    /* 43 */ ZO_FWK_43,
    /* 44 */ ZO_FWK_44,
    /* 45 */ ZO_FWK_45,
    /* 46 */ ZO_FWK_46,
    /* 47 */ ZO_FWK_47,
    /* 48 */ ZO_FWK_48,
    /* 49 */ ZO_FWK_49,
    /* 50 */ ZO_FWK_MAX,
} BossZOfwork;

typedef enum {
    /*  0 */ ZO_VWK_0,
    /*  1 */ ZO_VWK_1,
    /*  2 */ ZO_VWK_2,
    /*  3 */ ZO_VWK_3,
    /*  4 */ ZO_VWK_4,
    /*  5 */ ZO_VWK_5,
    /*  6 */ ZO_VWK_6,
    /*  7 */ ZO_VWK_7,
    /*  8 */ ZO_VWK_8,
    /*  9 */ ZO_VWK_9,
    /* 10 */ ZO_VWK_10,
    /* 11 */ ZO_VWK_11,
    /* 12 */ ZO_VWK_12,
    /* 13 */ ZO_VWK_13,
    /* 14 */ ZO_VWK_14,
    /* 15 */ ZO_VWK_15,
    /* 16 */ ZO_VWK_16,
    /* 17 */ ZO_VWK_17,
    /* 18 */ ZO_VWK_18,
    /* 19 */ ZO_VWK_19,
    /* 20 */ ZO_VWK_20,
    /* 21 */ ZO_VWK_21,
    /* 22 */ ZO_VWK_22,
    /* 23 */ ZO_VWK_23,
    /* 24 */ ZO_VWK_24,
    /* 25 */ ZO_VWK_25,
    /* 26 */ ZO_VWK_26,
    /* 27 */ ZO_VWK_27,
    /* 28 */ ZO_VWK_28,
    /* 29 */ ZO_VWK_29,
    /* 30 */ ZO_VWK_30,
    /* 31 */ ZO_VWK_31,
    /* 32 */ ZO_VWK_32,
    /* 33 */ ZO_VWK_33,
    /* 34 */ ZO_VWK_34,
    /* 35 */ ZO_VWK_35,
    /* 36 */ ZO_VWK_36,
    /* 37 */ ZO_VWK_37,
    /* 38 */ ZO_VWK_38,
    /* 39 */ ZO_VWK_39,
    /* 40 */ ZO_VWK_40,
    /* 41 */ ZO_VWK_41,
    /* 42 */ ZO_VWK_42,
    /* 43 */ ZO_VWK_43,
    /* 44 */ ZO_VWK_44,
    /* 45 */ ZO_VWK_45,
    /* 46 */ ZO_VWK_46,
    /* 47 */ ZO_VWK_47,
    /* 48 */ ZO_VWK_48,
    /* 49 */ ZO_VWK_49,
    /* 50 */ ZO_VWK_MAX,
} BossZOvwork;

s32 sZoLimbTimers[ZO_LIMB_MAX];
s32 sZoSwork[ZO_BSS_MAX];
f32 sZoFwork[ZO_BSF_MAX];

void func_E16C50_8018FF50(Object_2F4* obj2F4) {
    f32 temp;
    (void) " Enm->hitNO %d\n"; // Unclear where this goes. hitNO can't be info.bonus. Damage related?
    obj2F4->obj.rot.y =
        Math_Atan2F(gPlayer->camEye.x - obj2F4->obj.pos.x, gPlayer->camEye.z - (obj2F4->obj.pos.z + D_80177D20)) *
        180.0f / M_PI;
    temp = sqrtf(SQ(gPlayer->camEye.x - obj2F4->obj.pos.x) + SQ(gPlayer->camEye.z - (obj2F4->obj.pos.z + D_80177D20)));
    obj2F4->obj.rot.x = -Math_Atan2F(gPlayer->camEye.y - obj2F4->obj.pos.y, temp) * 180.0f / M_PI;
}

void func_E16C50_80190028(Object_2F4* obj2F4, Vec3f* pos, Vec3f* rot, f32 xVel, f32 yVel, f32 zVel, s32 arg6, f32 scale,
                          s32 arg8, s32 arg9) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 2;
    obj2F4->obj.id = OBJ_2F4_189;
    obj2F4->unk_0B8 = arg6;
    obj2F4->scale = scale;
    obj2F4->unk_048 = arg9;
    obj2F4->obj.pos = *pos;
    obj2F4->obj.rot = *rot;
    obj2F4->vel.x = xVel;
    obj2F4->vel.y = yVel;
    obj2F4->vel.z = zVel;
    obj2F4->timer_0BC = arg8;
    obj2F4->gravity = 0.5f;

    Object_SetInfo(&obj2F4->info, obj2F4->obj.id);
}

void func_E16C50_801900FC(Vec3f* pos, Vec3f* rot, f32 xVel, f32 yVel, f32 zVel, s32 arg6, f32 scale, s32 arg8,
                          s32 arg9) {
    s32 i;

    for (i = 59; i > 0; i--) {
        if (gObjects2F4[i].obj.status == 0) {
            func_E16C50_80190028(&gObjects2F4[i], pos, rot, xVel, yVel, zVel, arg6, scale, arg8, arg9);
            break;
        }
    }
}

s32 func_E16C50_8019019C(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    GSGM_BACK();
    if ((limbIndex >= 4) && (limbIndex < 10)) {
        GCGM_BACK();
    }
    return false;
}

void func_E16C50_80190204(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = { 0.0f, 0.0f, 0.0f };
    Object_2F4* this = thisx;

    if (this->unk_0B8 == 1) {
        switch (limbIndex) {
            case 0:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[11]);
                break;
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[12]);
                break;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[13]);
                break;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[14]);
                break;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[15]);
                break;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[16]);
                break;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[6]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[17]);
                break;
            case 7:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[7]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[18]);
                break;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[8]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[19]);
                break;
            case 9:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[9]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[20]);
                break;
            case 10:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[10]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[21]);
                break;
        }
    }
}

void func_E16C50_80190430(Object_2F4* obj2F4) {
    Vec3f sp30[30];

    Matrix_Scale(gCalcMatrix, obj2F4->scale, obj2F4->scale, obj2F4->scale, 1);
    Animation_GetFrameData(&D_600E5EC, obj2F4->unk_0B6, sp30);
    Animation_DrawSkeleton(3, D_600E7D8, sp30, func_E16C50_8019019C, func_E16C50_80190204, obj2F4, gCalcMatrix);
}

void func_E16C50_801904CC(Object_2F4* obj2F4) {
    Vec3f spA4;
    Vec3f sp98;
    s32 i;

    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_0CE = 20;
            Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, obj2F4->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gCalcMatrix, obj2F4->obj.rot.z * M_DTOR, 1);
            spA4.x = spA4.y = 0.0f;
            spA4.z = obj2F4->unk_13C;
            Matrix_MultVec3f(gCalcMatrix, &spA4, &sp98);
            obj2F4->vel.x = sp98.x;
            obj2F4->vel.y = sp98.y;
            obj2F4->vel.z = sp98.z;
            obj2F4->unk_0B8 = 5;
            break;
        case 1:
            for (i = 0; i < 11; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[i + 11], (Rand_ZeroOne() - 0.5f) * 20.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 10.0f, 41, obj2F4->scale, 200, i);
            }
            obj2F4->unk_044 = 0;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 4.0f);
            func_8007A6F0(&obj2F4->obj.pos, 0x29018036);
            break;
    }
    obj2F4->unk_0B6++;
    if (Animation_GetFrameCount(&D_600E5EC) < obj2F4->unk_0B6) {
        obj2F4->unk_0B6 = 0;
    }
    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0D0 = 0;
        if (obj2F4->unk_0B8 > 0) {
            obj2F4->timer_0C6 = 15;
            obj2F4->unk_0CE -= obj2F4->unk_0D6;
            Audio_PlaySfx(0x29033037, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (obj2F4->unk_0CE <= 0) {
                obj2F4->unk_0CE = 0;
                obj2F4->unk_0B8 = 1;
            }
        }
    }
}

void func_E16C50_80190790(Object_2F4* obj2F4) {
    s32 pad[2];
    f32 temp1;
    PosRot* temp2;
    Vec3f sp44;
    Vec3f sp38;
    s32 i;
    Object_2F4* sp30;

    obj2F4->unk_04E++;
    if (obj2F4->unk_04E >= 200) {
        obj2F4->unk_04E = 0;
    }
    obj2F4->unk_114 += 4.0f;
    obj2F4->vel.y = __sinf(obj2F4->unk_114 * M_DTOR) * 20.0f;
    obj2F4->unk_0F4.x = -obj2F4->vel.y * 2.5f;
    obj2F4->unk_118 += 5.0f;
    obj2F4->unk_0F4.z = __sinf(obj2F4->unk_118 * M_DTOR) * 30.0f;
    for (i = 0, sp30 = gObjects2F4; i < 60; i++, sp30++) {
        if ((sp30->obj.status == 2) && (sp30->obj.id == OBJ_2F4_239) && (obj2F4->unk_050 == sp30->unk_050)) {
            temp1 =
                Math_RadToDeg(Math_Atan2F(sp30->obj.pos.x - obj2F4->obj.pos.x, sp30->obj.pos.z - obj2F4->obj.pos.z));
            Math_SmoothStepToAngle(&obj2F4->unk_0F4.y, temp1, 0.2f, 3.0f, 0.0f);
            if ((fabsf(obj2F4->obj.pos.x - sp30->obj.pos.x) < 500.0f) &&
                (fabsf(obj2F4->obj.pos.z - sp30->obj.pos.z) < 500.0f)) {
                sp30->obj.status = 0;
                obj2F4->unk_050++;
            }
            break;
        }
    }
    Matrix_RotateY(gCalcMatrix, obj2F4->unk_0F4.y * M_DTOR, 0);
    sp44.x = 0.f;
    sp44.y = 0.f;
    sp44.z = 20.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
    obj2F4->vel.x = sp38.x;
    obj2F4->vel.z = sp38.z;
    temp2 = &D_801782C4[obj2F4->unk_04E];
    temp2->pos.x = obj2F4->obj.pos.x;
    temp2->pos.y = obj2F4->obj.pos.y;
    temp2->pos.z = obj2F4->obj.pos.z;
    temp2->rot.x = obj2F4->unk_0F4.x;
    temp2->rot.y = obj2F4->unk_0F4.y;
    temp2->rot.z = obj2F4->unk_0F4.z;
}

void func_E16C50_80190A00(Object_2F4* obj2F4) {
    f32 sp2C;
    s32 sp28;

    if ((obj2F4->timer_0C0 == 0) &&
        func_800A73E4(&sp2C, &sp28, obj2F4->obj.pos.x, obj2F4->obj.pos.y - 50.0f, obj2F4->obj.pos.z)) {
        func_8008377C(obj2F4->obj.pos.x, sp2C, obj2F4->obj.pos.z + 150.0f, 0.0f, 1.7f);
        if (obj2F4->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201A, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x19832019, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        obj2F4->timer_0C0 = 30;
    }
    func_E16C50_80190790(obj2F4);
    if (obj2F4->unk_0D0 != 0) {
        obj2F4->unk_0D0 = 0;
        Audio_PlaySfx(0x29121007, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

s16 D_E16C50_801BF56C[20] = {
    0, 190, 180, 170, 160, 150, 140, 130, 120, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10,
};
u8 D_E16C50_801BF594[20] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2,
};
Gfx* D_E16C50_801BF5A8[3] = { D_60012A0, D_60239E0, D_6023730 };

void func_E16C50_80190B4C(f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, u8 arg6, s32 arg7) {
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, xPos, yPos, zPos + D_80177D20, 1);
    Matrix_RotateY(gGfxMatrix, M_DTOR * yRot, 1);
    Matrix_RotateX(gGfxMatrix, M_DTOR * xRot, 1);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * zRot, 1);
    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    if (arg7 != 0) {
        RCP_SetupDL_64();
        GPC(40, 40, 255, 255);
    }
    GDL(D_E16C50_801BF5A8[arg6]);
    Matrix_Pop(&gGfxMatrix);
}

typedef struct {
    f32 count;
    Hitbox boxes[1];
} JntHitbox;

void func_E16C50_80190D0C(Object_2F4* obj2F4) {
    Hitbox* var_s2 = (((JntHitbox*) SEGMENTED_TO_VIRTUAL(D_602BC58))->boxes);
    s32 i;
    s32 k;
    PosRot* temp_s0;

    obj2F4->unk_04A = 0;
    for (i = obj2F4->unk_04A; i < 20; i++, var_s2++) {
        k = (D_E16C50_801BF56C[i] + obj2F4->unk_04E) % 200;
        temp_s0 = &D_801782C4[k];

        var_s2->z.offset = temp_s0->pos.z - obj2F4->obj.pos.z;
        var_s2->y.offset = temp_s0->pos.y - obj2F4->obj.pos.y;
        var_s2->x.offset = temp_s0->pos.x - obj2F4->obj.pos.x;
        func_E16C50_80190B4C(temp_s0->pos.x, temp_s0->pos.y, temp_s0->pos.z, temp_s0->rot.x, temp_s0->rot.y,
                             temp_s0->rot.z, D_E16C50_801BF594[i], obj2F4->timer_0C6 & 1);
        if (D_80177854 != 100) {
            Math_SmoothStepToF(&temp_s0->pos.y, obj2F4->unk_11C, 1.0f, 10.0f, 0.0f);
        }
    }
}

void func_E16C50_80190F08(Object_2F4* obj2F4) {
    func_E16C50_80190D0C(obj2F4);
}

void func_E16C50_80190F28(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp2C = { 0.0f, 0.0f, 0.0f };
    Object_2F4* this = thisx;

    if (this->unk_0B8 == 3) {
        switch (limbIndex) {
            case 0:
                Matrix_MultVec3f(gCalcMatrix, &sp2C, this->unk_18C);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[3]);
                return;
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp2C, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[4]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp2C, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[5]);
                break;
        }
    }
}

void func_E16C50_80191010(Object_2F4* obj2F4) {
    Vec3f sp8C;
    Vec3f sp80;
    f32 sp7C;
    s32 i;
    f32 var_fs0;
    s32 sp70;

    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_120 = obj2F4->obj.rot.x;
            obj2F4->unk_118 = (Rand_ZeroOne() - 0.5f) * 1000.0f;
            obj2F4->unk_0CE = 10;
            obj2F4->timer_0BC = 30;
            obj2F4->scale = 5.0f;
            obj2F4->gravity = 1.0f;
            obj2F4->obj.rot.x = 315.0f;
            obj2F4->unk_0B8++;
            break;
        case 1:
            Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, obj2F4->obj.rot.x * M_DTOR, 1);
            sp8C.x = 0.0f;
            sp8C.y = 0.0f;
            sp8C.z = (obj2F4->unk_120 * 10.0f) + 30.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp8C, &sp80);
            obj2F4->vel.x = sp80.x;
            obj2F4->vel.y = sp80.y;
            obj2F4->vel.z = sp80.z;
            obj2F4->unk_0B8++;
            break;
        case 2:
            if (obj2F4->timer_0BC == 0) {
                obj2F4->obj.rot.z += 30.0f;
                if (obj2F4->unk_0B6 > 0) {
                    obj2F4->unk_0B6--;
                }
            } else {
                if (obj2F4->unk_0B6 < Animation_GetFrameCount(&D_601AA48)) {
                    obj2F4->unk_0B6++;
                }
            }
            var_fs0 = 5.0f;
            if (obj2F4->obj.rot.x < 90.0f) {
                var_fs0 = 1.0f;
            }
            Math_SmoothStepToAngle(&obj2F4->obj.rot.x, 45.0f, 0.1f, var_fs0, 0.01f);
            if (obj2F4->obj.pos.y < -500.0f) {
                obj2F4->obj.rot.x = 0.0f;
                obj2F4->gravity = 0.0f;
                obj2F4->vel.y = 0.0f;
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            if (func_800A73E4(&sp7C, &sp70, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z) &&
                (obj2F4->unk_050 < 2) && (obj2F4->timer_0C0 == 0)) {
                if (var_fs0 == 5.0f) {
                    Audio_PlaySfx(0x1983201A, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    Audio_PlaySfx(0x19832019, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                obj2F4->timer_0C0 = 10;
                obj2F4->unk_050 += 1;
                func_8008377C(obj2F4->obj.pos.x, sp7C, obj2F4->obj.pos.z, 0.0f, 0.7f);
            }
            break;
        case 3:
            for (i = 0; i < 3; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[3 + i], (Rand_ZeroOne() - 0.5f) * 20.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 10.0f, 42, obj2F4->scale, 200, i);
            }
            obj2F4->unk_044 = 4;
            func_80066254(obj2F4);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 3.0f);
            Audio_PlaySfx(0x2903A008, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007A6F0(&obj2F4->obj.pos, 0x29018036);
            break;
    }
    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0D0 = 0;
        obj2F4->timer_0C6 = 15;
        obj2F4->unk_0CE -= obj2F4->unk_0D6;
        if (obj2F4->unk_0CE <= 0) {
            obj2F4->unk_0CE = 0;
            obj2F4->unk_0B8 = 3;
        }
    }
}

void func_E16C50_801914C4(Object_2F4* obj2F4) {
    Vec3f sp38[20];

    Matrix_Scale(gCalcMatrix, obj2F4->scale, obj2F4->scale, obj2F4->scale, 1);
    GCGM_BACK();
    Animation_GetFrameData(&D_601AA48, obj2F4->unk_0B6, sp38);
    Animation_DrawSkeleton(3, D_601AB14, sp38, NULL, func_E16C50_80190F28, obj2F4, gCalcMatrix);
    GSGM_BACK();
}

void func_E16C50_801915A4(Object_2F4* obj2F4) {
    s32 i;
    Object_2F4* var_a2;

    obj2F4->unk_0CE = 50;
    obj2F4->unk_114 = obj2F4->obj.pos.z - 10000.0f;
    for (i = 0, var_a2 = gObjects2F4; i < 60; i++, var_a2++) {
        if (var_a2->obj.status == 0) {
            Object_2F4_Initialize(var_a2);
            var_a2->obj.status = 1;
            var_a2->obj.id = OBJ_2F4_241;
            var_a2->obj.pos.x = obj2F4->obj.pos.x;
            var_a2->obj.pos.y = obj2F4->obj.pos.y;
            var_a2->obj.pos.z = obj2F4->obj.pos.z;
            var_a2->unk_050 = obj2F4->index + 1;
            Object_SetInfo(&var_a2->info, var_a2->obj.id);
            obj2F4->unk_050 = i;
            break;
        }
    }
    if (i >= 60) {
        var_a2->obj.status = 0;
    }
}

void func_E16C50_80191680(Object_2F4* obj2F4) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    Vec3f sp48;
    Vec3f sp3C;
    Object_2F4* sp38;

    if (obj2F4->obj.pos.z < obj2F4->unk_114) {
        obj2F4->unk_0B8 = 1;
    }
    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0D0 = 0;
        obj2F4->timer_0C6 = 15;
        obj2F4->unk_0CE -= obj2F4->unk_0D6;
        Audio_PlaySfx(0x29033037, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        if (obj2F4->unk_0CE <= 0) {
            obj2F4->unk_0CE = obj2F4->unk_044 = 0;
            func_80066254(obj2F4);
            obj2F4->unk_0B8 = 1;
            Audio_PlaySfx(0x29018036, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    obj2F4->unk_0B6++;
    if (obj2F4->unk_0B6 >= Animation_GetFrameCount(&D_40057AC)) {
        obj2F4->unk_0B6 = 0;
    }
    if (obj2F4->timer_0BC == 0) {
        obj2F4->timer_0BC = 30;
        obj2F4->unk_118 = gPlayer->pos.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f);
        obj2F4->unk_11C = gPlayer->pos.y + 50.0f + (Rand_ZeroOne() * 200.0f);
        obj2F4->unk_120 = gPlayer->unk_138 - 1500.0f;
    }
    obj2F4->unk_120 += gPlayer->vel.z;
    sp64 = obj2F4->unk_118 - obj2F4->obj.pos.x;
    sp60 = obj2F4->unk_11C - obj2F4->obj.pos.y;
    sp5C = obj2F4->unk_120 - obj2F4->obj.pos.z;
    sp54 = Math_RadToDeg(Math_Atan2F(sp64, sp5C));
    sp38 = &gObjects2F4[obj2F4->unk_050];
    if ((obj2F4->unk_0B8 != 0) || (sp38->obj.status == 0)) {
        obj2F4->timer_0CA[0] = 0;
        obj2F4->info.unk_1C = 0.0f;
        sp54 += 180.0f;
        if (sp54 > 360.0f) {
            sp54 -= 360.0f;
        }
        if (obj2F4->timer_0C6 == 0) {
            obj2F4->timer_0C6 = 15;
        }
    }
    sp58 = sqrtf(SQ(sp64) + SQ(sp5C));
    sp58 = Math_RadToDeg(-Math_Atan2F(sp60, sp58));
    sp60 = Math_SmoothStepToAngle(&obj2F4->obj.rot.y, sp54, 0.2f, 4.0f, 0.0f);
    Math_SmoothStepToAngle(&obj2F4->obj.rot.x, sp58, 0.2f, 4.0f, 0.0f);
    sp5C = 330.0f;
    if (sp60 < 0.0f) {
        sp5C = 30.0f;
    }
    Math_SmoothStepToAngle(&obj2F4->obj.rot.z, sp5C, 0.2f, 4.0f, 0.0f);
    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, obj2F4->obj.rot.x * M_DTOR, 1);
    sp48.x = sp48.y = 0.0f;
    sp48.z = 30.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp48, &sp3C);
    obj2F4->vel.x = sp3C.x;
    obj2F4->vel.y = sp3C.y;
    obj2F4->vel.z = sp3C.z - 20.0f;
    if (sp38->unk_050 == (obj2F4->index + 1)) {
        if (obj2F4->unk_0B8 == 0) {
            sp38->obj.pos.x = obj2F4->obj.pos.x;
            sp38->obj.pos.y = obj2F4->obj.pos.y - 50.0f;
            sp38->obj.pos.z = obj2F4->obj.pos.z;
            obj2F4->unk_124.x = sp38->obj.pos.x;
            obj2F4->unk_124.y = sp38->obj.pos.y;
            obj2F4->unk_124.z = sp38->obj.pos.z;
            if (!(gFrameCount & 0xF) && (fabsf(gPlayer->pos.x - obj2F4->obj.pos.x) < 100.0f)) {
                func_80081BEC(obj2F4->unk_124.x, obj2F4->unk_124.y, obj2F4->unk_124.z, 1.0f, 0);
            }
        } else {
            sp38->vel.y -= 1.0f;
        }
    }
}

void func_E16C50_80191B4C(Object_2F4* obj2F4) {
    Animation_GetFrameData(&D_40057AC, obj2F4->unk_0B6, obj2F4->unk_18C);
    Animation_DrawSkeleton(1, D_40058B8, obj2F4->unk_18C, NULL, NULL, &obj2F4->index, &gIdentityMatrix);
}

void func_E16C50_80191BB8(Object_2F4* obj2F4) {
}

void func_E16C50_80191BC4(Object_2F4* obj2F4) {
    f32 sp4C;
    s32 sp48;

    if ((obj2F4->vel.y != 0.0f) && (obj2F4->unk_054 == 0)) {
        obj2F4->unk_054 = 1;
        Audio_PlaySfx(0x2900201D, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    if (func_800A73E4(&sp4C, &sp48, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z) &&
        (obj2F4->unk_0B8 == 0)) {
        func_8007B344(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 20.0f, 7);
        func_8007C120(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 0.0f, 0.0f, 0.0f, 0.5f, 50);
        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        obj2F4->unk_050 = 0;
        func_8007A6F0(&obj2F4->obj.pos, 0x1903001D);
    }
    obj2F4->unk_114 += 10.0f;
    func_E16C50_8018FF50(obj2F4);
    if (!(gFrameCount & 1)) {
        func_8007C484(((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.x,
                      ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.y,
                      ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.z, obj2F4->vel.x, obj2F4->vel.y,
                      obj2F4->vel.z, (Rand_ZeroOne() * 0.05f) + 0.05f, 0);
    }
}

void func_E16C50_80191DB0(Object_2F4* obj2F4) {
    RCP_SetupDL_40();
    GDL(D_6019EB0);
    Matrix_RotateY(gGfxMatrix, obj2F4->unk_114 * 0.7f * M_DTOR, 1);
    Matrix_RotateX(gGfxMatrix, obj2F4->unk_114 * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_6023D50);
}

void func_E16C50_80191E94(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = { 0.0f, 0.0f, 0.0f };
    Object_2F4* this = thisx;

    if (this->unk_0B8 == 4) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[6]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[7]);
                return;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[8]);
                return;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[9]);
                return;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[10]);
                return;
            case 9:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[11]);
                break;
        }
    }
}

void func_E16C50_80191FFC(Object_2F4* obj2F4) {
    Vec3f sp30[20];

    Matrix_Scale(gCalcMatrix, obj2F4->scale, obj2F4->scale, obj2F4->scale, 1);
    Animation_GetFrameData(&D_60195EC, obj2F4->unk_0B6, sp30);
    Animation_DrawSkeleton(3, D_6019738, sp30, NULL, func_E16C50_80191E94, obj2F4, gCalcMatrix);
}

void func_E16C50_80192094(Object_2F4* obj2F4) {
    s32 i;
    f32 spB8;
    f32 temp_fs0;
    f32 spB0;
    f32 temp_fs1;
    f32 temp_fs0_2;
    f32 spA4;
    s32 spA0;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp70;

    temp_fs0 = gPlayer->pos.x - obj2F4->obj.pos.x;
    spB0 = gPlayer->pos.y - obj2F4->obj.pos.y;
    temp_fs1 = gPlayer->unk_138 - obj2F4->obj.pos.z;
    spA4 = Math_RadToDeg(Math_Atan2F(temp_fs0, temp_fs1));
    temp_fs0_2 = sqrtf(SQ(temp_fs0) + SQ(temp_fs1));
    temp_fs0_2 = Math_RadToDeg(-Math_Atan2F(spB0, temp_fs0_2));
    Math_SmoothStepToAngle(&obj2F4->obj.rot.x, temp_fs0_2, 0.1f, 10.0f, 0.00001f);
    Math_SmoothStepToAngle(&obj2F4->obj.rot.y, spA4, 0.1f, 10.0f, 0.00001f);
    if ((obj2F4->unk_050 == 0) &&
        (func_800A73E4(&spB8, &spA0, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z) != 0)) {
        func_8008377C(obj2F4->obj.pos.x, spB8, obj2F4->obj.pos.z + 100.0f, 0.0f, 1.5f);
        obj2F4->unk_050 += 1;
        if (obj2F4->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201A, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x19832019, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_0B8++;
            obj2F4->vel.y = 20.0f;
            obj2F4->scale = 2.0f;
            break;
        case 1:
            obj2F4->unk_0B6++;
            if (obj2F4->unk_0B6 >= Animation_GetFrameCount(&D_60195EC)) {
                obj2F4->unk_0B6 = 64;
                Math_SmoothStepToF(&obj2F4->vel.z, 0.0f, 1.0f, 100.0f, 0.00001f);
                if (obj2F4->obj.pos.y < -500.0f) {
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                }
            }
            if (obj2F4->unk_0B6 == 25) {
                obj2F4->unk_11C = 0.0f;
                obj2F4->vel.y = 0.0f;
                obj2F4->unk_054 = 0;
                obj2F4->unk_120 = 150.0f;
                obj2F4->unk_0B8++;
            }
            break;
        case 2:
            if (obj2F4->unk_054 >= 21) {
                obj2F4->unk_050 = 0;
                obj2F4->unk_0B8 = 3;
                obj2F4->vel.y = 50.0f;
                if (obj2F4->unk_0B6 == 51) {
                    obj2F4->unk_0B8 = 1;
                    obj2F4->vel.y = -20.0f;
                }
            } else {
                Math_SmoothStepToF(&obj2F4->vel.z, -40.0f, 0.1f, 1.0f, 0.00001f);
                Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, obj2F4->obj.rot.x * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, obj2F4->unk_11C * M_DTOR, 1);
                sp70.x = 0.0f;
                sp70.y = obj2F4->unk_120;
                sp70.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp94);
                sp94.x += obj2F4->obj.pos.x;
                sp94.y += obj2F4->obj.pos.y;
                sp94.z = obj2F4->obj.pos.z - 200.0f;
                sp70.x = 0.0f;
                sp70.y = 0.0f;
                sp70.z = 100.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp88);
                func_8007EE68(OBJ_8C_355, &sp94, &sp7C, &sp7C, &sp88, 1.0f);
                obj2F4->unk_11C += 40.0f;
                obj2F4->unk_11C = Math_ModF(obj2F4->unk_11C, 360.0f);
                Math_SmoothStepToF(&obj2F4->unk_120, 0.0f, 1.0f, 5.0f, 0.0001f);
                obj2F4->unk_054++;
            }
            break;
        case 3:
            Math_SmoothStepToF(&obj2F4->vel.z, -60.0f, 0.1f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&obj2F4->vel.y, -30.0f, 0.1f, 100.0f, 0.00001f);
            obj2F4->unk_0B6++;
            if (obj2F4->unk_0B6 == 51) {
                obj2F4->unk_11C = 0.0f;
                obj2F4->vel.y = 0.0f;
                obj2F4->unk_054 = 0;
                obj2F4->unk_0B8 = 2;
                obj2F4->unk_120 = 150.0f;
            }
            break;
        case 4:
            for (i = 0; i < 6; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[i + 6], (Rand_ZeroOne() - 0.5f) * 40.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 20.0f, 44, obj2F4->scale, 200, i);
            }
            obj2F4->unk_044 = 5;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 10.0f);
            break;
    }
    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0B8 < 3)) {
        if (obj2F4->unk_0D0 != 1) {
            func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 200.0f, 5);
            gHitCount += 6;
            D_80177850 = 15;
            if (obj2F4->unk_0D0 && obj2F4->unk_0D0) {}
            obj2F4->unk_0B8 = 4;
        }
        obj2F4->unk_0D0 = 0;
    }
}

void func_E16C50_801926F4(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = { 0.0f, 0.0f, 0.0f };
    Object_2F4* this = thisx;

    if (this->unk_0B8 == 2) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, this->unk_18C);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[5]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[6]);
                return;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[7]);
                return;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[8]);
                return;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[9]);
                break;
        }
    }
}

void func_E16C50_80192834(Object_2F4* obj2F4) {
    Vec3f sp84;
    Vec3f sp78;
    f32 sp74;
    s32 sp70;
    s32 i;

    switch (obj2F4->unk_0B8) {
        case 0:
            Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, 5.497787f, 1);
            sp84.y = 0.0f;
            sp84.x = 0.0f;
            sp84.z = (obj2F4->obj.rot.x * 10.0f) + 15.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp84, &sp78);
            obj2F4->vel.x = sp78.x;
            obj2F4->vel.y = sp78.y;
            obj2F4->vel.z = sp78.z;
            obj2F4->unk_0CE = 10;
            obj2F4->unk_0B8++;
            break;
        case 1:
            Math_SmoothStepToF(&obj2F4->vel.y, -30.0f, 0.1f, 1.0f, 0.01f);
            if (obj2F4->obj.pos.y < 0.0f) {
                obj2F4->unk_050 = 0;
            }
            if (obj2F4->obj.pos.y < -50.0f) {
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            if (obj2F4->vel.y > 0.0f) {
                if (obj2F4->unk_0B6 < 17) {
                    obj2F4->unk_0B6++;
                }
            } else {
                if (obj2F4->unk_0B6 < Animation_GetFrameCount(&D_6021ABC)) {
                    obj2F4->unk_0B6++;
                }
            }
            obj2F4->obj.rot.x += 20.0f;
            obj2F4->obj.rot.x = Math_ModF(obj2F4->obj.rot.x, 360.0f);
            if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
                obj2F4->unk_0D0 = 0;
                obj2F4->unk_0CE -= obj2F4->unk_0D6;
                if (obj2F4->unk_0CE <= 0) {
                    obj2F4->unk_0CE = 0;
                    obj2F4->unk_0B8++;
                }
            }
            break;
        case 2:
            for (i = 0; i < 5; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[5 + i], (Rand_ZeroOne() - 0.5f) * 20.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 10.0f, 43, obj2F4->scale, 200, i);
            }
            obj2F4->unk_044 = 0;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 3.0f);
            func_8007A6F0(&obj2F4->obj.pos, 0x29018036);
            break;
    }
    if ((obj2F4->unk_050 == 0) &&
        (func_800A73E4(&sp74, &sp70, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z) != 0)) {
        obj2F4->unk_050++;
        func_8008377C(obj2F4->obj.pos.x, sp74, obj2F4->obj.pos.z, 0.0f, 0.7f);
        if (obj2F4->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201A, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x19832019, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_E16C50_80192C18(Object_2F4* obj2F4) {
    Vec3f sp28[20];

    Animation_GetFrameData(&D_6021ABC, obj2F4->unk_0B6, sp28);
    Animation_DrawSkeleton(3, D_6021B88, sp28, NULL, func_E16C50_801926F4, obj2F4, gCalcMatrix);
}

void func_E16C50_80192C84(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = { 0.0f, 0.0f, 0.0f };
    Object_2F4* this = thisx;

    if (this->unk_0B8 == 3) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[9]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[10]);
                return;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[11]);
                return;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[12]);
                return;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[13]);
                return;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[14]);
                return;
            case 7:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[6]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[15]);
                return;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[7]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[16]);
                return;
            case 13:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[8]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[17]);
                break;
        }
    }
}

void func_E16C50_80192E64(Object_2F4* obj2F4) {
    s32 i;
    Vec3f sp80;
    Vec3f sp74;
    f32 sp70;
    s32 sp6C;

    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->obj.pos.y = 380.0f;
            obj2F4->unk_0B8 = 1;
            break;
        case 1:
            Math_SmoothStepToF(&obj2F4->vel.x, 0.0f, 0.1f, 1.0f, 0.0001);
            Math_SmoothStepToF(&obj2F4->vel.z, 0.0f, 0.1f, 1.0f, 0.0001f);
            if (obj2F4->timer_0BC == 0) {
                obj2F4->unk_0B6++;
                if (obj2F4->unk_0B6 == 5) {
                    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
                    sp80.x = 0.0f;
                    sp80.y = 0.0f;
                    sp80.z = 50.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp80, &sp74);
                    obj2F4->vel.x = sp74.x;
                    obj2F4->vel.z = sp74.z;
                    obj2F4->unk_0B8 = 2;
                }
            }
            break;
        case 2:
            Math_SmoothStepToF(&obj2F4->vel.x, 0.0f, 0.1f, 1.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->vel.z, 0.0f, 0.1f, 1.0f, 0.0001f);
            if (obj2F4->unk_0B6 < Animation_GetFrameCount(&D_601AFB8)) {
                obj2F4->unk_0B6++;
            } else {
                obj2F4->unk_0B6 = 0;
                obj2F4->timer_0BC = 30;
                obj2F4->unk_0B8 = 1;
            }
            break;
        case 3:
            for (i = 0; i < 9; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[9 + i], (Rand_ZeroOne() - 0.5f) * 40.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 20.0f, 59, obj2F4->scale, 200, i);
            }
            obj2F4->unk_044 = 7;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 10.0f);
            break;
    }
    if (obj2F4->unk_0D0 != 0) {
        if (obj2F4->unk_0D0 != 1) {
            if ((obj2F4->unk_0B8 != 0) && (obj2F4->unk_0B8 != 3)) {
                func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 200.0f, 2);
                gHitCount += 3;
                D_80177850 = 15;
                if ((obj2F4->unk_0D0) && (obj2F4->unk_0D0)) {} // fake
                obj2F4->unk_0B8 = 3;
            }
        } else {
            Audio_PlaySfx(0x29121007, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        obj2F4->unk_0D0 = 0;
    }
    if (func_800A73E4(&sp70, &sp6C, obj2F4->obj.pos.x, obj2F4->obj.pos.y - 1000.0f, obj2F4->obj.pos.z)) {
        Math_SmoothStepToF(&obj2F4->obj.pos.y, sp70 + 300.0f, 0.1f, 20.0f, 0);
    }
}

void func_E16C50_80193240(Object_2F4* obj2F4) {
    Vec3f sp28[30];

    Animation_GetFrameData(&D_601AFB8, obj2F4->unk_0B6, sp28);
    Animation_DrawSkeleton(2, D_601B184, sp28, NULL, func_E16C50_80192C84, obj2F4, gCalcMatrix);
}

s32 D_E16C50_801BF5F0[6] = {
    20, 40, 20, 20, 10, 10,
};
f32 D_E16C50_801BF608[6] = {
    -45.0f, 0.0f, -45.0f, 0.0f, -45.0f, 0.0f,
};

void func_E16C50_801932AC(Boss* bossZO) {
    s32 i;

    D_80178284 = 1;
    D_801613A0 = 0;
    bossZO->vel.z = -40.0f;
    for (i = 0; i < ZO_LIMB_MAX; i++) {
        sZoLimbTimers[i] = 0;
    }
    for (i = 0; i < ZO_BSS_MAX; i++) {
        sZoSwork[i] = 0;
    }
    for (i = 0; i < ZO_BSF_MAX; i++) {
        sZoFwork[i] = 0.0f;
    }
    sZoFwork[ZO_BSF_32_X] = sZoFwork[ZO_BSF_99_X] = sZoFwork[ZO_BSF_60_X] = sZoFwork[ZO_BSF_52_X] =
        sZoFwork[ZO_BSF_106_X] = sZoFwork[ZO_BSF_93_X] = sZoFwork[ZO_BSF_96_X] = sZoFwork[ZO_BSF_29_X] =
            sZoFwork[ZO_BSF_109_X] = sZoFwork[ZO_BSF_43_X] = sZoFwork[ZO_BSF_102_X] = sZoFwork[ZO_BSF_37_X] =
                sZoFwork[ZO_BSF_46_X] = sZoFwork[ZO_BSF_68_X] = sZoFwork[ZO_BSF_40_X] = sZoFwork[ZO_BSF_65_X] =
                    sZoFwork[ZO_BSF_55_X] = bossZO->obj.pos.x;
    sZoFwork[ZO_BSF_32_Y] = sZoFwork[ZO_BSF_99_Y] = sZoFwork[ZO_BSF_60_Y] = sZoFwork[ZO_BSF_52_Y] =
        sZoFwork[ZO_BSF_106_Y] = sZoFwork[ZO_BSF_93_Y] = sZoFwork[ZO_BSF_96_Y] = sZoFwork[ZO_BSF_29_Y] =
            sZoFwork[ZO_BSF_109_Y] = sZoFwork[ZO_BSF_43_Y] = sZoFwork[ZO_BSF_102_Y] = sZoFwork[ZO_BSF_37_Y] =
                sZoFwork[ZO_BSF_46_Y] = sZoFwork[ZO_BSF_68_Y] = sZoFwork[ZO_BSF_40_Y] = sZoFwork[ZO_BSF_65_Y] =
                    sZoFwork[ZO_BSF_55_Y] = bossZO->obj.pos.y;
    sZoFwork[ZO_BSF_32_Z] = sZoFwork[ZO_BSF_99_Z] = sZoFwork[ZO_BSF_60_Z] = sZoFwork[ZO_BSF_52_Z] =
        sZoFwork[ZO_BSF_106_Z] = sZoFwork[ZO_BSF_93_Z] = sZoFwork[ZO_BSF_96_Z] = sZoFwork[ZO_BSF_29_Z] =
            sZoFwork[ZO_BSF_109_Z] = sZoFwork[ZO_BSF_43_Z] = sZoFwork[ZO_BSF_102_Z] = sZoFwork[ZO_BSF_37_Z] =
                sZoFwork[ZO_BSF_46_Z] = sZoFwork[ZO_BSF_68_Z] = sZoFwork[ZO_BSF_40_Z] = sZoFwork[ZO_BSF_65_Z] =
                    sZoFwork[ZO_BSF_55_Z] = bossZO->obj.pos.z;

    sZoSwork[ZO_BSS_8] = 40;
    sZoSwork[ZO_BSS_9] = 40;
    sZoSwork[ZO_BSS_10] = 40;
    sZoSwork[ZO_BSS_11] = 20;
    sZoSwork[ZO_BSS_12] = 20;
    sZoSwork[ZO_BSS_13] = 61;
    bossZO->health = 300;
    bossZO->obj.pos.y = -1800.0f;
    bossZO->obj.rot.y = 180.0f;

    sZoFwork[ZO_BSF_28] = -2600.0f;
    sZoFwork[ZO_BSF_1] = -130.0f;
    sZoFwork[ZO_BSF_11] = 130.0f;

    sZoFwork[ZO_BSF_26] = 30.0f;
    sZoFwork[ZO_BSF_23] = 30.0f;

    sZoSwork[ZO_BSS_43] = 255;
    sZoSwork[ZO_BSS_44] = 255;
    sZoFwork[ZO_BSF_25] = 0.0f;
    bossZO->timer_050 = 200;
    bossZO->timer_052 = 280;
    sZoSwork[ZO_BSS_37] = 255;
    for (i = 0; i < 2; i++) {
        Object_2F4_Initialize(&gObjects2F4[i]);
        gObjects2F4[i].obj.status = 1;
        gObjects2F4[i].obj.id = OBJ_2F4_248 + i;
        gObjects2F4[i].obj.pos.x = bossZO->obj.pos.x;
        gObjects2F4[i].obj.pos.y = bossZO->obj.pos.y;
        gObjects2F4[i].obj.pos.z = bossZO->obj.pos.z;
        Object_SetInfo(&gObjects2F4[i].info, gObjects2F4[i].obj.id);
    }
    func_800182F4(0x102800FF);
    func_800182F4(0x112800FF);

    ZO_HIT_3(bossZO)->b.z.offset = ZO_HIT_4(bossZO)->b.z.offset = -561.6f;
    ZO_HIT_8(bossZO, 0)->z.offset = ZO_HIT_8(bossZO, 1)->z.offset = -213.2f;
    ZO_HIT_10(bossZO, 0)->z.offset = ZO_HIT_10(bossZO, 1)->z.offset = -351.0f;
    ZO_HIT_12(bossZO)->z.offset = -883.99994f;
    ZO_HIT_12(bossZO)->z.size = 244.4f;
    ZO_HIT_12(bossZO)->y.offset = 863.19995f;
    ZO_HIT_12(bossZO)->y.size = 171.59999f;
    ZO_HIT_12(bossZO)->x.offset = 0.f;
    ZO_HIT_12(bossZO)->x.size = 93.6f;
}

void func_E16C50_80193628(Object* obj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Vec3f sp54 = { 0.0f, 0.0f, 40.0f };
    Vec3f sp48;

    Matrix_RotateY(gCalcMatrix, obj->rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, obj->rot.x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, obj->rot.z * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, M_DTOR * arg5, 1);
    Matrix_RotateX(gCalcMatrix, M_DTOR * arg4, 1);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    func_8007F04C(OBJ_8C_353, arg1 + sp48.x + arg6, arg2 + sp48.y, arg3 + sp48.z, arg4, arg5, 0.0f, obj->rot.x,
                  obj->rot.y, obj->rot.z, sp48.x + arg6, sp48.y, sp48.z, 1.0f);
}

void func_E16C50_801937D8(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 yRot) {
    Vec3f sp2C;
    Vec3f sp20;

    Object_8C_Initialize(obj8C);
    Matrix_RotateY(gCalcMatrix, M_DTOR * yRot, 0);
    sp2C.x = 0.0f;
    sp2C.y = 0.0f;
    sp2C.z = 10.0f;
    Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);
    obj8C->vel.x = sp20.x;
    obj8C->vel.y = sp20.y;
    obj8C->vel.z = sp20.z;
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_394;
    obj8C->obj.pos.x = xPos;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->unk_44 = 100;
    obj8C->scale2 = 3.0f;
    obj8C->scale1 = (Rand_ZeroOne() - 0.5f) * 20.0f;
    obj8C->unk_78 = 100;
    obj8C->unk_7A = 14;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_E16C50_80193908(f32 xPos, f32 yPos, f32 zPos, f32 yRot) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_E16C50_801937D8(&gObjects8C[i], xPos, yPos, zPos, yRot);
            break;
        }
    }
}

void func_E16C50_80193970(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 yRot, s32 arg5) {
    Vec3f sp2C;
    Vec3f sp20;

    Object_8C_Initialize(obj8C);
    Matrix_RotateY(gCalcMatrix, M_DTOR * yRot, 0);
    sp2C.x = 0.0f;
    sp2C.y = 0.0f;
    sp2C.z = 20.0f;
    Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);
    obj8C->vel.x = sp20.x;
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_394;
    obj8C->obj.pos.x = xPos;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->scale2 = 8.0f;
    obj8C->unk_44 = arg5;
    obj8C->scale1 = (Rand_ZeroOne() - 0.5f) * 200.0f;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    obj8C->unk_4E = 1;
    obj8C->unk_78 = 100;
    obj8C->unk_7A = 13;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_E16C50_80193A98(f32 xPos, f32 yPos, f32 zPos, f32 yRot, s32 arg5) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_E16C50_80193970(&gObjects8C[i], xPos, yPos, zPos, yRot, arg5);
            break;
        }
    }
}

void func_E16C50_80193B08(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 scale) {
    f32 temp_ft2;

    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_394;
    obj8C->obj.pos.x = xPos;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->vel.x = (Rand_ZeroOne() - 0.5f) * 5.0f;
    obj8C->vel.y = (Rand_ZeroOne() - 0.5f) * 3.0f;
    obj8C->unk_48 = 3;
    if (Rand_ZeroOne() < 0.5f) {
        obj8C->unk_48 = -obj8C->unk_48;
    }
    obj8C->unk_4A = 180;
    obj8C->unk_46 = 8;
    obj8C->unk_78 = 101;
    obj8C->unk_7A = 15;
    obj8C->scale2 = scale * 0.25f;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    if (scale == 6.0f) {
        obj8C->vel.z = gPlayer->vel.z * 0.6f;
    }
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_E16C50_80193C5C(f32 xPos, f32 yPos, f32 zPos, f32 scale) {
    s32 i;

    for (i = 80; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_E16C50_80193B08(&gObjects8C[i], xPos, yPos, zPos, scale);
            break;
        }
    }
}

f32 func_E16C50_80193CC8(s32 arg0) {
    f32 var_fv1 = arg0 * 0.5f;

    if (var_fv1 > 8.0f) {
        var_fv1 = 8.0f;
    }
    return var_fv1;
}

s32 func_E16C50_80193D08(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    Boss* this = thisx;
    f32 temp;

    if (sZoLimbTimers[limbIndex] == LIMB_DESTROYED) {
        *dList = NULL;
    }
    GSGM_BACK();
    if (sZoSwork[ZO_BSS_37] != 255) {
        RCP_SetupDL_46();
        GPC(255, 255, sZoSwork[ZO_BSS_37], sZoSwork[ZO_BSS_37]);
    } else if (!(sZoLimbTimers[limbIndex] & 1)) {
        RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    } else {
        RCP_SetupDL_27();
        GPC(255, 0, 0, 255);
    }
    switch (limbIndex) {
        case ZO_LIMB_1:
            if (sZoFwork[ZO_BSF_0] == 0.0f) {
                rot->x += sZoFwork[ZO_BSF_112];
                rot->y += sZoFwork[ZO_BSF_112];
                rot->z += sZoFwork[ZO_BSF_112];
            } else {
                rot->z += sZoFwork[ZO_BSF_0];
            }
            /* fallthrough */
        case ZO_LIMB_12:
            GCGM_BACK();
            break;

        case ZO_LIMB_2:
            rot->x += -sZoFwork[ZO_BSF_114] + sZoFwork[ZO_BSF_1];
            rot->y += -sZoFwork[ZO_BSF_114];
            rot->z += -sZoFwork[ZO_BSF_114] + sZoFwork[ZO_BSF_83];

            pos->x += sZoFwork[ZO_BSF_84];
            pos->y += sZoFwork[ZO_BSF_85];
            break;

        case ZO_LIMB_4:
        case ZO_LIMB_16:
            rot->x += sZoFwork[ZO_BSF_2];
            break;

        case ZO_LIMB_5:
            rot->x += -sZoFwork[ZO_BSF_115];
            rot->y += -sZoFwork[ZO_BSF_115];
            rot->z += -sZoFwork[ZO_BSF_115] + sZoFwork[ZO_BSF_3];
            break;

        case ZO_LIMB_6:
            rot->x += sZoFwork[ZO_BSF_4];
            rot->z += sZoFwork[ZO_BSF_90];

            pos->x += sZoFwork[ZO_BSF_91];
            pos->y += sZoFwork[ZO_BSF_92];
            break;

        case ZO_LIMB_7:
            rot->x -= sZoFwork[ZO_BSF_116];
            rot->y -= sZoFwork[ZO_BSF_116];
            rot->z -= sZoFwork[ZO_BSF_116];

            pos->x += sZoFwork[ZO_BSF_6];
            break;

        case ZO_LIMB_18:
            rot->x += -sZoFwork[ZO_BSF_116];
            rot->y += -sZoFwork[ZO_BSF_116];
            rot->z += -sZoFwork[ZO_BSF_116] + sZoFwork[ZO_BSF_5];
            break;

        case ZO_LIMB_8:
            rot->z += sZoFwork[ZO_BSF_7];
            rot->y += -sZoFwork[ZO_BSF_8];
            break;

        case ZO_LIMB_9:
            rot->z += sZoFwork[ZO_BSF_9];
            rot->y += -sZoFwork[ZO_BSF_10];
            break;

        case ZO_LIMB_10:
            rot->x += sZoFwork[ZO_BSF_11] + sZoFwork[ZO_BSF_113];
            rot->y += -sZoFwork[ZO_BSF_113];
            rot->z += sZoFwork[ZO_BSF_80] + sZoFwork[ZO_BSF_113];

            pos->x += sZoFwork[ZO_BSF_81];
            pos->y += sZoFwork[ZO_BSF_82];
            break;

        case ZO_LIMB_11:
            rot->x += -sZoFwork[ZO_BSF_117];
            rot->y += -sZoFwork[ZO_BSF_117];
            rot->z += -sZoFwork[ZO_BSF_117];

            pos->x += sZoFwork[ZO_BSF_13];
            break;

        case ZO_LIMB_19:
            rot->x += -sZoFwork[ZO_BSF_117];
            rot->y += -sZoFwork[ZO_BSF_117];
            rot->z += -sZoFwork[ZO_BSF_117] + sZoFwork[ZO_BSF_12];
            break;

        case ZO_LIMB_15:
            rot->x += sZoFwork[ZO_BSF_14] - sZoFwork[ZO_BSF_19] - this->obj.rot.y + sZoFwork[ZO_BSF_112];
            rot->y += sZoFwork[ZO_BSF_112];
            rot->z += sZoFwork[ZO_BSF_86] + sZoFwork[ZO_BSF_112];

            pos->x += sZoFwork[ZO_BSF_87];
            pos->y += sZoFwork[ZO_BSF_88];
            break;

        case ZO_LIMB_21:
            rot->x += -sZoFwork[ZO_BSF_116] + sZoFwork[ZO_BSF_15];
            rot->y += -sZoFwork[ZO_BSF_116];
            rot->z += -sZoFwork[ZO_BSF_116];
            break;

        case ZO_LIMB_22:
            pos->x += sZoFwork[ZO_BSF_17] + this->fwork[ZO_FWK_1];
            break;

        case ZO_LIMB_23:
            rot->x += -sZoFwork[ZO_BSF_117] + sZoFwork[ZO_BSF_16];
            rot->y += -sZoFwork[ZO_BSF_117];
            rot->z += -sZoFwork[ZO_BSF_117];
            break;

        case ZO_LIMB_24:
            pos->x += sZoFwork[ZO_BSF_18] + this->fwork[ZO_FWK_2];
            break;

        case ZO_LIMB_25:
            rot->x += sZoFwork[ZO_BSF_19];

            pos->y += sZoFwork[ZO_BSF_105];
            break;
    }
    return false;
}

void func_E16C50_80194394(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f spB4;
    Boss* this = thisx;
    Vec3f spA4 = { 96.0f, 199.0f, -9.0f };
    Vec3f sp98 = { 50.0f, 150.0f, -20.0f };
    Vec3f sp8C = { 50.0f, 150.0f, 20.0f };
    Vec3f sp80 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp74 = { 210.0f, -50.0f, 0.0f };
    Vec3f sp68 = { 50.0f, 70.0f, 0.0f };
    Vec3f sp5C = { 166.0f, -174.0f, -25.0f };
    Vec3f sp50 = { 166.0f, -174.0f, 25.0f };
    Vec3f sp44 = { 50.0f, 0.0f, 0.0f };
    Vec3f sp38 = { 150.0f, 0.0f, 0.0f };
    Vec3f sp2C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp20 = { 0.0f, 0.0f, 0.0f };
    f32 var_fv1;

    switch (limbIndex) {
        case ZO_LIMB_2:
            Matrix_MultVec3f(gCalcMatrix, &spA4, &spB4);
            sZoFwork[ZO_BSF_32_X] = spB4.x;
            sZoFwork[ZO_BSF_32_Y] = spB4.y;
            sZoFwork[ZO_BSF_32_Z] = spB4.z;
            break;
        case ZO_LIMB_4:
            Matrix_MultVec3f(gCalcMatrix, &sp38, &spB4);
            sZoFwork[ZO_BSF_99_X] = spB4.x;
            sZoFwork[ZO_BSF_99_Y] = spB4.y;
            sZoFwork[ZO_BSF_99_Z] = spB4.z;
            break;
        case ZO_LIMB_5:
            var_fv1 = -1.0f;
            if (sZoFwork[ZO_BSF_4] < 0.0f) {
                var_fv1 = 1.0f;
            }
            sp74.z = fabsf(sZoFwork[ZO_BSF_4] / 10.0f) * var_fv1;
            Matrix_MultVec3f(gCalcMatrix, &sp74, &spB4);
            sZoFwork[ZO_BSF_60_X] = spB4.x;
            sZoFwork[ZO_BSF_60_Y] = spB4.y;
            sZoFwork[ZO_BSF_60_Z] = spB4.z;
            break;
        case ZO_LIMB_6:
            Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
            sZoFwork[ZO_BSF_52_X] = spB4.x;
            sZoFwork[ZO_BSF_52_Y] = spB4.y;
            sZoFwork[ZO_BSF_52_Z] = spB4.z;
            break;
        case ZO_LIMB_7:
            Matrix_MultVec3f(gCalcMatrix, &sp2C, &spB4);
            sZoFwork[ZO_BSF_106_X] = spB4.x;
            sZoFwork[ZO_BSF_106_Y] = spB4.y;
            sZoFwork[ZO_BSF_106_Z] = spB4.z;
            break;
        case ZO_LIMB_8:
            Matrix_MultVec3f(gCalcMatrix, &sp44, &spB4);
            sZoFwork[ZO_BSF_93_X] = spB4.x;
            sZoFwork[ZO_BSF_93_Y] = spB4.y;
            sZoFwork[ZO_BSF_93_Z] = spB4.z;
            break;
        case ZO_LIMB_9:
            Matrix_MultVec3f(gCalcMatrix, &sp44, &spB4);
            sZoFwork[ZO_BSF_96_X] = spB4.x;
            sZoFwork[ZO_BSF_96_Y] = spB4.y;
            sZoFwork[ZO_BSF_96_Z] = spB4.z;
            break;
        case ZO_LIMB_10:
            Matrix_MultVec3f(gCalcMatrix, &spA4, &spB4);
            sZoFwork[ZO_BSF_29_X] = spB4.x;
            sZoFwork[ZO_BSF_29_Y] = spB4.y;
            sZoFwork[ZO_BSF_29_Z] = spB4.z;
            break;
        case ZO_LIMB_11:
            Matrix_MultVec3f(gCalcMatrix, &sp20, &spB4);
            sZoFwork[ZO_BSF_109_X] = spB4.x;
            sZoFwork[ZO_BSF_109_Y] = spB4.y;
            sZoFwork[ZO_BSF_109_Z] = spB4.z;
            break;
        case ZO_LIMB_14:
            Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
            sZoFwork[ZO_BSF_43_X] = spB4.x;
            sZoFwork[ZO_BSF_43_Y] = spB4.y;
            sZoFwork[ZO_BSF_43_Z] = spB4.z;
            break;
        case ZO_LIMB_16:
            Matrix_MultVec3f(gCalcMatrix, &sp38, &spB4);
            sZoFwork[ZO_BSF_102_X] = spB4.x;
            sZoFwork[ZO_BSF_102_Y] = spB4.y;
            sZoFwork[ZO_BSF_102_Z] = spB4.z;
            break;
        case ZO_LIMB_22:
            Matrix_MultVec3f(gCalcMatrix, &sp98, &spB4);
            sZoFwork[ZO_BSF_37_X] = spB4.x;
            sZoFwork[ZO_BSF_37_Y] = spB4.y;
            sZoFwork[ZO_BSF_37_Z] = spB4.z;
            Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
            sZoFwork[ZO_BSF_46_X] = spB4.x;
            sZoFwork[ZO_BSF_46_Y] = spB4.y;
            sZoFwork[ZO_BSF_46_Z] = spB4.z;
            Matrix_MultVec3f(gCalcMatrix, &sp5C, &spB4);
            sZoFwork[ZO_BSF_68_X] = spB4.x;
            sZoFwork[ZO_BSF_68_Y] = spB4.y;
            sZoFwork[ZO_BSF_68_Z] = spB4.z;
            break;
        case ZO_LIMB_24:
            Matrix_MultVec3f(gCalcMatrix, &sp8C, &spB4);
            sZoFwork[ZO_BSF_40_X] = spB4.x;
            sZoFwork[ZO_BSF_40_Y] = spB4.y;
            sZoFwork[ZO_BSF_40_Z] = spB4.z;
            Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
            sZoFwork[ZO_BSF_49_X] = spB4.x;
            sZoFwork[ZO_BSF_49_Y] = spB4.y;
            sZoFwork[ZO_BSF_49_Z] = spB4.z;
            Matrix_MultVec3f(gCalcMatrix, &sp50, &spB4);
            sZoFwork[ZO_BSF_71_X] = spB4.x;
            sZoFwork[ZO_BSF_71_Y] = spB4.y;
            sZoFwork[ZO_BSF_71_Z] = spB4.z;
            break;
        case ZO_LIMB_25:
            Matrix_MultVec3f(gCalcMatrix, &sp68, &spB4);
            sZoFwork[ZO_BSF_65_X] = spB4.x;
            sZoFwork[ZO_BSF_65_Y] = spB4.y;
            sZoFwork[ZO_BSF_65_Z] = spB4.z;
            break;
        case ZO_LIMB_36:
            Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
            sZoFwork[ZO_BSF_55_X] = spB4.x;
            sZoFwork[ZO_BSF_55_Y] = spB4.y;
            sZoFwork[ZO_BSF_55_Z] = spB4.z;
            break;
    }
}

void func_E16C50_801949DC(Boss* bossZO) {
    Matrix_Translate(gCalcMatrix, 0.0f, bossZO->fwork[ZO_FWK_3], 0.0f, 1);
    Matrix_Scale(gCalcMatrix, 2.6f, 2.6f, 2.6f, 1);
    Animation_DrawSkeleton(3, D_6019E18, bossZO->vwork, func_E16C50_80193D08, func_E16C50_80194394, bossZO,
                           gCalcMatrix);
}

f32 D_E16C50_801BF6BC[2] = { -600.0f, -3400.0f };
f32 D_E16C50_801BF6C4[2] = { 330.0f, 30.0f };
f32 D_E16C50_801BF6CC[2] = { 250.0f, -250.0f };
f32 D_E16C50_801BF6D4[2] = { 330.0f, 30.0f };

#ifdef NON_MATCHING
void func_E16C50_80194A84(Boss* bossZO) {
    f32 sp134;
    s32 sp130;
    s32 i;
    s16 var_s0;
    s32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    s32 dmgType;
    s32* temp2;
    f32* temp3;
    Vec3f spE4;
    Vec3f spD8;
    Vec3f spCC;
    Vec3f spC0;
    Vec3f spB4;
    Vec3f spA8 = { 615.0f, 532.0f, -80.0f };
    Vec3f sp9C = { -615.0f, 532.0f, -80.0f };
    Vec3f sp90 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp84 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp78;
    Vec3f sp6C;
    Vec3f sp60 = { 0.0f, 0.0f, 40.0f };

    D_801613A0++;
    if ((bossZO->actionState != 0) || ((bossZO->actionState == 0) && (bossZO->timer_050 < 50))) {
        Math_SmoothStepToF(&sZoFwork[ZO_BSF_24], sZoFwork[ZO_BSF_23], 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&bossZO->obj.pos.y, sZoFwork[ZO_BSF_25], 0.1f, sZoFwork[ZO_BSF_24], 0.00001f);
    }
    if (sZoSwork[ZO_BSS_24] == 0) {
        Math_SmoothStepToF(&sZoFwork[ZO_BSF_27], sZoFwork[ZO_BSF_26], 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&bossZO->obj.pos.z, sZoFwork[ZO_BSF_28] + (gPlayer->camEye.z - D_80177D20), 0.1f,
                           sZoFwork[ZO_BSF_27], 0.00001f);
    }
    if (!(gFrameCount & 3)) {
        if ((bossZO->obj.rot.y <= 90.0f) || (bossZO->obj.rot.y >= 270.0f)) {
            sZoSwork[ZO_BSS_43] = bossZO->obj.rot.y;
            if (sZoSwork[ZO_BSS_43] > 270) {
                sZoSwork[ZO_BSS_43] = 360 - sZoSwork[ZO_BSS_43];
            }
            sZoSwork[ZO_BSS_43] *= 2;
            sZoSwork[ZO_BSS_43] = 255 - sZoSwork[ZO_BSS_43];
            if (sZoSwork[ZO_BSS_43] < 0) {
                sZoSwork[ZO_BSS_43] = 0;
            }
            func_E16C50_80193A98(sZoFwork[ZO_BSF_102_X], sZoFwork[ZO_BSF_102_Y], sZoFwork[ZO_BSF_102_Z],
                                 bossZO->obj.rot.y, sZoSwork[ZO_BSS_43]);
            sZoSwork[ZO_BSS_44] = 255;
        } else {
            sZoSwork[ZO_BSS_44] = (s32) bossZO->obj.rot.y - 180.0f;
            if (sZoSwork[ZO_BSS_44] < 0) {
                sZoSwork[ZO_BSS_44] = -sZoSwork[ZO_BSS_44];
            }
            sZoSwork[ZO_BSS_44] *= 20;
            sZoSwork[ZO_BSS_44] = 255 - sZoSwork[ZO_BSS_44];
            if (sZoSwork[ZO_BSS_44] < 0) {
                sZoSwork[ZO_BSS_44] = 0;
            }
            func_E16C50_80193A98(sZoFwork[ZO_BSF_99_X], sZoFwork[ZO_BSF_99_Y], sZoFwork[ZO_BSF_99_Z], bossZO->obj.rot.y,
                                 sZoSwork[ZO_BSS_44]);
            sZoSwork[ZO_BSS_43] = 255;
        }
    }
    if (((bossZO->actionState == 2) || (bossZO->actionState == 3) || (bossZO->actionState == 8)) && (gPlayer[0].timer_220 == 2)) {
        if (bossZO->swork[ZO_SWK_8] == 0) {
            func_800BA808(gMsg_ID_6068, RCID_BOSS_ZONESS);
        }
        bossZO->swork[ZO_SWK_8]++;
        if (bossZO->swork[ZO_SWK_8] >= 5) {
            bossZO->swork[ZO_SWK_8] = 0;
        }
    }
    if ((bossZO->swork[ZO_SWK_9] == 0) && (bossZO->actionState >= 2) && (bossZO->health != 0)) {
        if (bossZO->swork[ZO_SWK_10] == 0) {
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 50.0f, 0.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 46.0f, 19.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 35.0f, 35.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 19.0f, 46.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 0.0f, 50.0f, 5.0f);
        } else {
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -50.0f, 0.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -46.0f, 19.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -35.0f, 35.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -19.0f, 46.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 0.0f, 50.0f, 5.0f);
        }
        bossZO->swork[ZO_SWK_9] = 20;
        bossZO->swork[ZO_SWK_11] += 1;
        bossZO->swork[ZO_SWK_11] &= 1;
        if (bossZO->swork[ZO_SWK_11] == 0) {
            bossZO->swork[ZO_SWK_9] = 100;
            bossZO->swork[ZO_SWK_10] += 1;
            bossZO->swork[ZO_SWK_10] &= 1;
        }
    }
    if (bossZO->swork[ZO_SWK_9] != 0) {
        bossZO->swork[ZO_SWK_9]--;
    }
    switch (bossZO->actionState) { /* switch 1 */
        case 0:                /* switch 1 */
            if ((!(gFrameCount & 7) || (bossZO->timer_050 == 43)) && (bossZO->swork[ZO_SWK_13] == 0) &&
                ((bossZO->swork[ZO_SWK_12] < 7) || (bossZO->timer_050 == 43))) {
                D_801779A8[0] = 20.0f;
                if (func_800A73E4(&sp134, &sp130, sZoFwork[ZO_BSF_43_X], sZoFwork[ZO_BSF_43_Y] - 300.0f,
                                  sZoFwork[ZO_BSF_43_Z])) {
                    sp100 = 1.5f;
                    spFC = 2.0f;
                    if (bossZO->timer_050 == 43) {
                        sp100 = 5.0f;
                        spFC = 3.0f;
                        if (sZoSwork[ZO_BSS_55] == 0) {
                            func_8001D444(0, 0x8016, 0, 255);
                            sZoSwork[ZO_BSS_55] = 1;
                        }
                        func_8008377C(sZoFwork[ZO_BSF_43_X], sp134, sZoFwork[ZO_BSF_43_Z] + 100.0f, 5.0f, 3.0f);
                        func_8008377C(sZoFwork[ZO_BSF_43_X], sp134, sZoFwork[ZO_BSF_43_Z] + 100.0f, 5.0f, 3.0f);
                    }
                    func_8008377C(sZoFwork[ZO_BSF_43_X], sp134, sZoFwork[ZO_BSF_43_Z] + 100.0f, sp100, spFC);
                    if (bossZO->timer_050 == 43) {
                        Audio_PlaySfx(0x1983201A, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else {
                        Audio_PlaySfx(0x19832019, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    bossZO->swork[ZO_SWK_12]++;
                }
            }
            if ((bossZO->timer_050 < 43) && (bossZO->timer_050 >= 31)) {
                D_801779A8[0] = 20.0f;
            }
            Math_SmoothStepToF(&bossZO->fwork[ZO_FWK_4], 1.0f, 0.1f, 10.0f, 0.0f);
            if (bossZO->timer_050 == 0) {
                if (bossZO->swork[ZO_SWK_3] == 0) {
                    func_800BA808(gMsg_ID_6069, RCID_BOSS_ZONESS);
                    bossZO->swork[ZO_SWK_3]++;
                }
                Math_SmoothStepToF(&sZoFwork[ZO_BSF_1], sZoFwork[ZO_BSF_74], 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&sZoFwork[ZO_BSF_11], sZoFwork[ZO_BSF_75], 0.1f, 2.0f, 0.00001f);
                if (bossZO->timer_052 == 0) {
                    bossZO->swork[ZO_SWK_12] = 0;
                    sZoFwork[ZO_BSF_77] = 0.0f;
                    bossZO->swork[ZO_SWK_13] = 1;
                    bossZO->actionState = 1;
                }
            }
            break;
        case 1: /* switch 1 */
            Math_SmoothStepToF(&bossZO->fwork[ZO_FWK_4], 100.0f, 0.1f, 1.0f, 0.0f);
            func_E16C50_8019962C(bossZO, 0.0f);
            Math_SmoothStepToF(&sZoFwork[ZO_BSF_1], sZoFwork[ZO_BSF_74], 0.1f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&sZoFwork[ZO_BSF_11], sZoFwork[ZO_BSF_75], 0.1f, 2.0f, 0.00001f);
            if ((bossZO->timer_050 == 0) && !(gFrameCount & 3)) {
                if (sZoSwork[ZO_BSS_9] != 0) {
                    func_E16C50_80193908(sZoFwork[ZO_BSF_29_X], sZoFwork[ZO_BSF_29_Y], sZoFwork[ZO_BSF_29_Z],
                                         bossZO->obj.rot.y);
                }
                if (sZoSwork[ZO_BSS_10] != 0) {
                    func_E16C50_80193908(sZoFwork[ZO_BSF_32_X], sZoFwork[ZO_BSF_32_Y], sZoFwork[ZO_BSF_32_Z],
                                         bossZO->obj.rot.y);
                }
                sZoSwork[ZO_BSS_6]++;
                if (sZoSwork[ZO_BSS_6] > 10) {
                    sZoSwork[ZO_BSS_6] = 0;
                    sZoSwork[ZO_BSS_7]++;
                    bossZO->timer_050 = 30;
                    if ((sZoSwork[ZO_BSS_7] == 1) && (sZoSwork[ZO_BSS_19] == 0)) {
                        sZoFwork[ZO_BSF_74] = 230.0f;
                        sZoFwork[ZO_BSF_75] = -230.0f;
                        func_800BA808(gMsg_ID_6071, RCID_BOSS_ZONESS);
                    }
                    if ((sZoSwork[ZO_BSS_7] == 1) && (sZoSwork[ZO_BSS_25] != 0) && (sZoSwork[ZO_BSS_29] == 0) &&
                        (sZoSwork[ZO_BSS_19] != 0)) {
                        func_800BA808(gMsg_ID_6081, RCID_PEPPY);
                        sZoSwork[ZO_BSS_34] = 333;
                    }
                    if ((sZoSwork[ZO_BSS_7] == 1) && (sZoSwork[ZO_BSS_25] == 0) && (sZoSwork[ZO_BSS_19] != 0)) {
                        func_800BA808(gMsg_ID_6072, RCID_BOSS_ZONESS);
                        sZoSwork[ZO_BSS_34] = 333;
                        sZoSwork[ZO_BSS_25]++;
                    }
                    if (sZoSwork[ZO_BSS_7] >= 2) {
                        sZoSwork[ZO_BSS_7] = 0;
                        bossZO->timer_050 = 0;
                        sZoFwork[ZO_BSF_77] = 0.0f;
                        bossZO->swork[ZO_SWK_4] = 1000;
                        bossZO->actionState = 3;
                        if (sZoSwork[ZO_BSS_19] == 0) {
                            bossZO->timer_050 = 30;
                            bossZO->swork[ZO_SWK_4] = 0;
                            bossZO->actionState = 2;
                        }
                    }
                }
            }
            break;
        case 2: /* switch 1 */
            if (bossZO->timer_050 == 1) {
                sZoSwork[ZO_BSS_20]++;
                sZoFwork[ZO_BSF_77] = 0.0f;
            }
            if (bossZO->timer_050 == 0) {
                Math_SmoothStepToF(&bossZO->fwork[ZO_FWK_4], 100.0f, 0.1f, 1.0f, 0.0f);
                Math_SmoothStepToF(&sZoFwork[ZO_BSF_1], sZoFwork[ZO_BSF_74], 0.2f, 4.0f, 0.00001f);
                Math_SmoothStepToF(&sZoFwork[ZO_BSF_11], sZoFwork[ZO_BSF_75], 0.2f, 4.0f, 0.00001f);
                if ((sZoSwork[ZO_BSS_20] == 0) && (sZoFwork[ZO_BSF_1] == 0.0f)) {
                    bossZO->swork[ZO_SWK_4] = 1000;
                    bossZO->actionState = 3;
                }
            }
            break;
        case 3: /* switch 1 */
            if (ZO_HIT_12(bossZO)->z.offset != -883.99994f) {
                ZO_HIT_12(bossZO)->z.offset = -883.99994f;
                ZO_HIT_12(bossZO)->z.size = 244.4f;
                ZO_HIT_12(bossZO)->y.offset = 863.19995f;
                ZO_HIT_12(bossZO)->y.size = 171.59999f;
                ZO_HIT_12(bossZO)->x.offset = 0.0f;
                ZO_HIT_12(bossZO)->x.size = 93.6f;
            }
            Math_SmoothStepToF(&bossZO->fwork[ZO_FWK_4], 100.0f, 0.1f, 1.0f, 0.0f);
            if (bossZO->timer_058 != 0) {
                if ((sZoSwork[ZO_BSS_11] != 0) || (sZoSwork[ZO_BSS_12] != 0)) {
                    Math_SmoothStepToF(&sZoFwork[ZO_BSF_21], sZoFwork[ZO_BSF_20], 0.1f, 2.0f, 0.00001f);
                    Math_SmoothStepToF(&bossZO->obj.pos.x, D_E16C50_801BF6CC[sZoSwork[ZO_BSS_21]], 0.1f,
                                       sZoFwork[ZO_BSF_21], 0.00001f);
                }
                if (sZoSwork[ZO_BSS_24] == 0) {
                    Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_79], sZoFwork[ZO_BSF_78], 0.1f, 2.0f, 0.0001f);
                    Math_SmoothStepToAngle(&bossZO->obj.rot.y, D_E16C50_801BF6D4[sZoSwork[ZO_BSS_21]], 0.1f,
                                           sZoFwork[ZO_BSF_79], 0.00001f);
                }
            } else {
                bossZO->timer_058 = 100;
                sZoFwork[ZO_BSF_20] = 5.0f;
                sZoFwork[ZO_BSF_78] = 2.0f;

                sZoFwork[ZO_BSF_21] = sZoFwork[ZO_BSF_79] = 0.0f;
                sZoSwork[ZO_BSS_21]++;
                if (sZoSwork[ZO_BSS_21] >= 2) {
                    sZoSwork[ZO_BSS_21] = 0;
                }
            }
            if ((bossZO->swork[ZO_SWK_4] == 0) && ((sZoSwork[ZO_BSS_9] != 0) || (sZoSwork[ZO_BSS_10] != 0))) {
                func_E16C50_80198ECC(bossZO);
            }
            if ((sZoSwork[ZO_BSS_32] == 0) && (sZoSwork[ZO_BSS_34] == 1) && (sZoSwork[ZO_BSS_24] == 0)) {
                func_800BA808(gMsg_ID_6080, RCID_PEPPY);
                sZoSwork[ZO_BSS_34] = 500;
            }
            if (sZoSwork[ZO_BSS_4] == 0) {
                sZoSwork[ZO_BSS_4] = 100;
                func_E16C50_801989FC(bossZO);
            }
            if (sZoSwork[ZO_BSS_24] != 0) {
                sZoSwork[ZO_BSS_20] = 1;
                if (bossZO->swork[ZO_SWK_7] == 0) {
                    bossZO->swork[ZO_SWK_7]++;
                    bossZO->swork[ZO_SWK_7] &= 1;
                    func_800BA808(gMsg_ID_6078, RCID_BOSS_ZONESS);
                }
                if (bossZO->timer_056 == 0) {
                    bossZO->timer_056 = 100;
                    bossZO->swork[ZO_SWK_1] += 1;
                    bossZO->swork[ZO_SWK_1] &= 1;
                }
                bossZO->fwork[ZO_FWK_5] += 4.0f;
                bossZO->vel.x = __cosf(bossZO->fwork[ZO_FWK_5] * M_DTOR) * 40.0f;
                Math_SmoothStepToAngle(&bossZO->fwork[ZO_FWK_7],
                                       Math_RadToDeg(Math_Atan2F(bossZO->fwork[ZO_FWK_6] - bossZO->obj.pos.x,
                                                                 (D_E16C50_801BF6BC[bossZO->swork[ZO_SWK_1]] +
                                                                  (gPlayer->camEye.z - D_80177D20)) -
                                                                     bossZO->obj.pos.z)),
                                       0.1f, 100.0f, 0.001f);
                Matrix_RotateY(gCalcMatrix, bossZO->fwork[ZO_FWK_7] * M_DTOR, 0);
                spE4.x = spE4.y = 0.0f;
                spE4.z = 20.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spE4, &spCC);
                var_s0 = 0;
                bossZO->vel.z = spCC.z - D_80177D08;
                if (bossZO->vel.x > 0.0f) {
                    var_s0 = 1;
                }
                if (var_s0 != bossZO->swork[ZO_SWK_2]) {
                    bossZO->swork[ZO_SWK_2] = var_s0;
                    bossZO->fwork[ZO_FWK_8] = 0.0f;
                }
                Math_SmoothStepToF(&bossZO->fwork[ZO_FWK_8], 10.0f, 0.01f, 0.1f, 0.0f);
                Math_SmoothStepToAngle(&bossZO->obj.rot.z, D_E16C50_801BF6C4[var_s0], 0.1f, bossZO->fwork[ZO_FWK_8],
                                       0.00001f);
                Math_SmoothStepToAngle(&bossZO->obj.rot.y, D_E16C50_801BF6D4[var_s0], 0.1f, bossZO->fwork[ZO_FWK_8],
                                       0.00001f);
                Matrix_RotateX(gCalcMatrix, -bossZO->obj.rot.x * M_DTOR, 0);
                Matrix_RotateY(gCalcMatrix, -bossZO->obj.rot.y * M_DTOR, 1);
                spE4.x = gPlayer->pos.x - sZoFwork[ZO_BSF_93_X];
                spE4.y = gPlayer->pos.y - sZoFwork[ZO_BSF_93_Y];
                spE4.z = gPlayer->unk_138 - sZoFwork[ZO_BSF_93_Z];
                Matrix_MultVec3f(gCalcMatrix, &spE4, &spC0);
                sp10C = Math_RadToDeg(Math_Atan2F(spC0.x, spC0.z));
                sp110 = Math_RadToDeg(-Math_Atan2F(spC0.y, sqrtf((spC0.x * spC0.x) + (spC0.z * spC0.z))));
                if ((sp10C > 40.0f) && (sp10C < 180.0f)) {
                    sp10C = 40.0f;
                }
                if ((sp10C < 320.0f) && (sp10C > 180.0f)) {
                    sp10C = 320.0f;
                }
                if ((sp110 > 10.0f) && (sp110 < 180.0f)) {
                    sp110 = 10.0f;
                }
                if ((sp10C < 320.0f) && (sp10C > 180.0f)) {
                    sp110 = 320.0f;
                }
                spE4.x = gPlayer->pos.x - sZoFwork[ZO_BSF_96_X];
                spE4.y = gPlayer->pos.y - sZoFwork[ZO_BSF_96_Y];
                spE4.z = gPlayer->unk_138 - sZoFwork[ZO_BSF_96_Z];
                Matrix_MultVec3f(gCalcMatrix, &spE4, &spB4);
                sp104 = Math_RadToDeg(Math_Atan2F(spB4.x, spB4.z));
                sp108 = Math_RadToDeg(-Math_Atan2F(spB4.y, sqrtf(SQ(spB4.x) + SQ(spB4.z))));
                if ((sp104 > 40.0f) && (sp104 < 180.0f)) {
                    sp104 = 40.0f;
                }
                if ((sp104 < 320.0f) && (sp104 > 180.0f)) {
                    sp104 = 320.0f;
                }
                if ((sp108 > 10.0f) && (sp108 < 180.0f)) {
                    sp108 = 10.0f;
                }
                if ((sp104 < 320.0f) && (sp104 > 180.0f)) {
                    sp108 = 320.0f;
                }
                Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_8], sp10C, 0.2f, 2.0f, 0.0f);
                Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_7], sp110, 0.2f, 2.0f, 0.0f);
                Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_10], sp104, 0.2f, 2.0f, 0.0f);
                Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_9], sp108, 0.2f, 2.0f, 0.0f);
                func_E16C50_80198BE8(bossZO, 0);
                func_E16C50_80198BE8(bossZO, 1);
            }
            break;
        case 4: /* switch 1 */
            if (bossZO->swork[ZO_SWK_15] == 0) {
                D_80178340 = 0;
                D_80178354 = 0;
                D_80178350 = 0;
                D_80178348 = 0;
            }
            Math_SmoothStepToAngle(&bossZO->obj.rot.z, bossZO->fwork[ZO_FWK_9], 0.1f, 100.0f, 0.00001f);
            Math_SmoothStepToAngle(&bossZO->fwork[ZO_FWK_9], 0.0f, 0.1f, 100.0f, 0.00001f);
            if ((sZoSwork[ZO_BSS_11] == 0) && (sZoLimbTimers[ZO_LIMB_7] != LIMB_DESTROYED)) {
                func_E16C50_80198F3C(bossZO, 0, 46);
                if (sZoFwork[ZO_BSF_17] > -400.0f) {
                    sZoFwork[ZO_BSF_17] -= 10.0f;
                } else {
                    Audio_KillSfx(&bossZO->sfxPos);
                    if (bossZO->obj.rot.z > 359.0f) {
                        if (sZoSwork[ZO_BSS_13] != 0) {
                            func_E16C50_8019907C(bossZO);
                        } else {
                            func_E16C50_8019914C(bossZO, 0);
                        }
                    }
                }
            }
            if ((sZoSwork[ZO_BSS_12] == 0) && (sZoLimbTimers[ZO_LIMB_11] != LIMB_DESTROYED)) {
                func_E16C50_80198F3C(bossZO, 1, 49);
                if (sZoFwork[ZO_BSF_18] > -400.0f) {
                    sZoFwork[ZO_BSF_18] -= 10.0f;
                } else {
                    Audio_KillSfx(&bossZO->sfxPos);
                    if (bossZO->obj.rot.z < 1.0f) {
                        if (sZoSwork[ZO_BSS_13] != 0) {
                            func_E16C50_8019907C(bossZO);
                        } else {
                            func_E16C50_8019914C(bossZO, 1);
                        }
                    }
                }
            }
            break;
        case 5: /* switch 1 */
            Math_SmoothStepToAngle(&bossZO->obj.rot.z, bossZO->fwork[ZO_FWK_9], 0.1f, 100.0f, 0.00001f);
            Math_SmoothStepToAngle(&bossZO->fwork[ZO_FWK_9], 0.0f, 0.1f, 100.0f, 0.00001f);
            switch (sZoSwork[ZO_BSS_16]) { /* switch 3; irregular */
                case 0:                    /* switch 3 */
                    if (sZoSwork[ZO_BSS_13] != 0) {
                        func_E16C50_8019962C(bossZO, 180.0f);
                        if (bossZO->obj.rot.y == 180.0f) {
                            if ((sZoSwork[ZO_BSS_11] == 0) && (sZoLimbTimers[ZO_LIMB_7] != LIMB_DESTROYED)) {
                                func_E16C50_801991D0(bossZO, 0);
                            } else {
                                func_E16C50_801991D0(bossZO, 1);
                            }
                        }
                    } else {
                        if (sZoSwork[ZO_BSS_36] == 0) {
                            sZoSwork[ZO_BSS_36]++;
                            sZoFwork[ZO_BSF_77] = 0.0f;
                        }
                        func_E16C50_8019962C(bossZO, 0.0f);
                        if (bossZO->obj.rot.y == 0.0f) {
                            if (sZoSwork[ZO_BSS_11] == 0) {
                                func_E16C50_8019914C(bossZO, 0);
                            }
                            if (sZoSwork[ZO_BSS_12] == 0) {
                                func_E16C50_8019914C(bossZO, 1);
                            }
                        }
                    }
                    break;
                case 1: /* switch 3 */
                    func_E16C50_80199470(bossZO, 0);
                    break;
                case 2: /* switch 3 */
                    func_E16C50_80199470(bossZO, 1);
                    break;
                case 3: /* switch 3 */
                    if (sZoSwork[ZO_BSS_13] != 0) {
                        if (bossZO->timer_050 == 0) {
                            Math_SmoothStepToF(&sZoFwork[ZO_BSF_4], 0.0f, 1.0f, 5.0f, 0.001f);
                            Math_SmoothStepToF(&sZoFwork[ZO_BSF_3], 0.0f, 1.0f, 3.0f, 0.001f);
                            if (sZoFwork[ZO_BSF_3] == 0.0f) {
                                func_E16C50_8019962C(bossZO, 0.0f);
                                if (bossZO->obj.rot.y == 0.0f) {
                                    sZoSwork[ZO_BSS_16] = 0;
                                    bossZO->swork[ZO_SWK_4] = 1000;
                                    bossZO->actionState = 3;
                                }
                            }
                        }
                    } else {
                        if (sZoSwork[ZO_BSS_36] == 0) {
                            sZoSwork[ZO_BSS_36]++;
                            sZoFwork[ZO_BSF_77] = 0.0f;
                        }
                        func_E16C50_8019962C(bossZO, 0.0f);
                        if (bossZO->obj.rot.y == 0.0f) {
                            sZoSwork[ZO_BSS_16] = 0;
                            sZoSwork[ZO_BSS_36] = 0;
                            sZoFwork[ZO_BSF_77] = 0.0f;
                            bossZO->swork[ZO_SWK_4] = 1000;
                            bossZO->actionState = 3;
                        }
                    }
                    break;
            }
            break;
        case 6: /* switch 1 */
            D_801779A8[0] = 20.0f;
            if (D_80178480 == 0) {
                D_80178348 = D_80178350 = D_80178354 = 255;
                D_80178340 = D_80178358 = 255;
                D_80178358 = 0;
                D_8017835C = 25;
                D_80178480 = (Rand_ZeroOne() * 20.0f) + 20.0f;
            }
            if (D_80178480 == 29) {
                D_80178348 = D_80178350 = D_80178354 = D_80178340 = 0;
            }
            if (!(gFrameCount & 3)) {
                spE4.x = ((Rand_ZeroOne() - 0.5f) * 300.0f) + bossZO->obj.pos.x;
                spE4.y = ((Rand_ZeroOne() - 0.5f) * 200.0f) + (bossZO->obj.pos.y + 600.0f);
                spE4.z = bossZO->obj.pos.z - 50.0f;
                spD8.x = bossZO->obj.rot.x;
                spD8.y = Math_ModF(((Rand_ZeroOne() - 0.5f) * 60.0f) + 360.0f, 360.0f);
                spD8.z = bossZO->obj.rot.z;
                for (i = 0; i < 5; i++) {
                    func_E16C50_801900FC(&spE4, &spD8, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 20.0f,
                                         (Rand_ZeroOne() - 0.5f) * 30.0f, 4, 1.0f,
                                         (Rand_ZeroOne() * 15.0f) + (bossZO->unk_3F8 * 10.0f), 0);
                }
            }
            bossZO->vel.x = 0.0f;
            Math_SmoothStepToF(&bossZO->obj.pos.x, 0.0f, 0.1f, 5.0f, 0.00001f);
            if (!(gFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
                sZoLimbTimers[ZO_LIMB_36] = 15;
                sZoLimbTimers[ZO_LIMB_25] = 15;
            }
            func_8007C120(sZoFwork[ZO_BSF_55_X], sZoFwork[ZO_BSF_55_Y], sZoFwork[ZO_BSF_55_Z], bossZO->vel.x,
                          bossZO->vel.y, bossZO->vel.z, 0.2f, 10);
            func_8007D0E0(((Rand_ZeroOne() - 0.5f) * 200.0f) + sZoFwork[ZO_BSF_55_X],
                          ((Rand_ZeroOne() - 0.2f) * 800.0f) + sZoFwork[ZO_BSF_55_Y], sZoFwork[ZO_BSF_55_Z], 10.0f);
            if (bossZO->timer_050 == 30) {
                func_800BA808(gMsg_ID_6079, RCID_BOSS_ZONESS);
            }
            if (bossZO->timer_050 == 0) {
                gObjects8C[98].obj.status = gObjects8C[99].obj.status = 0;
                sZoFwork[ZO_BSF_25] = -1000.0f;
                sZoFwork[ZO_BSF_23] = 10.0f;
                D_80161734 = 0;
                func_8007A568(bossZO->obj.pos.x, bossZO->obj.pos.y, bossZO->obj.pos.z, 80.0f);
                if ((gPlayer->state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer->state_1C8 == PLAYERSTATE_1C8_5)) {
                    D_80177A80 = 0;
                    gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
                    gPlayer->unk_1D0 = gPlayer->timer_1F8 = 0;
                    gPlayer->unk_0E8 += gPlayer->unk_114;
                    if (gPlayer->unk_0E8 > 360.0f) {
                        gPlayer->unk_0E8 -= 360.0f;
                    }
                    if (gPlayer->unk_0E8 < 0.0f) {
                        gPlayer->unk_0E8 += 360.0f;
                    }
                    gPlayer->unk_114 = 0.0f;
                    func_8004319C(gPlayer, bossZO->obj.pos.x, 0.0f, bossZO->obj.pos.z);
                }
                bossZO->timer_050 = 70;
                sZoSwork[ZO_BSS_5] = 0;
                D_80178348 = D_80178350 = D_80178354 = D_80178340 = 0;
                func_80042EC0(bossZO);
                bossZO->actionState = 7;
            }
            break;
        case 7: /* switch 1 */
            D_801779A8[0] = 20.0f;
            if (!(gFrameCount & 7) &&
                (func_800A73E4(&sp134, &sp130, bossZO->obj.pos.x, -300.0f, bossZO->obj.pos.z) != 0)) {
                func_8008377C(((Rand_ZeroOne() - 0.5f) * 500.0f) + bossZO->obj.pos.x, sp134 - 300.0f,
                              ((Rand_ZeroOne() - 0.5f) * 3000.0f) + bossZO->obj.pos.z, 5.0f, 2.0f);
            }
            if ((bossZO->timer_050 == 0) || (bossZO->obj.pos.y < -800.0f)) {
                Object_Kill(&bossZO->obj, &bossZO->sfxPos);
            }
            break;
        case 8: /* switch 1 */
            if (sZoSwork[ZO_BSS_18] != 0) {
                if ((sZoSwork[ZO_BSS_27] != 2) && (bossZO->swork[ZO_SWK_5] == 0) && (bossZO->swork[ZO_SWK_6] < 2) &&
                    ((sZoSwork[ZO_BSS_33] == 0) || (sZoSwork[ZO_BSS_33] >= 30))) {
                    sZoSwork[ZO_BSS_18]--;
                }
                func_E16C50_8019962C(bossZO, 0.0f);
                Math_SmoothStepToF(&sZoFwork[ZO_BSF_1], -130.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&sZoFwork[ZO_BSF_11], 130.0f, 0.1f, 2.0f, 0.00001f);
                if (sZoSwork[ZO_BSS_18] < 331) {
                    if (sZoSwork[ZO_BSS_8] != 0) {
                        if ((sZoSwork[ZO_BSS_20] == 0) && (bossZO->swork[ZO_SWK_6] == 1)) {
                            sZoSwork[ZO_BSS_20] = 1;
                            sZoSwork[ZO_BSS_27]++;
                            if (sZoSwork[ZO_BSS_27] >= 3) {
                                sZoSwork[ZO_BSS_27] = 3;
                            }
                        }
                    } else if ((bossZO->swork[ZO_SWK_5] == 0) && (bossZO->swork[ZO_SWK_6] < 2)) {
                        if (sZoSwork[ZO_BSS_33] == 0) {
                            func_800BA808(gMsg_ID_6077, RCID_BOSS_ZONESS);
                            sZoSwork[ZO_BSS_27] = 3;
                        }
                        sZoSwork[ZO_BSS_33]++;
                        if (sZoSwork[ZO_BSS_33] > 30) {
                            sZoSwork[ZO_BSS_33] = 30;
                            if (sZoSwork[ZO_BSS_20] == 0) {
                                sZoSwork[ZO_BSS_20] = 1;
                            }
                        }
                    }
                }
                if ((sZoSwork[ZO_BSS_27] == 0) && (sZoSwork[ZO_BSS_18] == 400) && (sZoSwork[ZO_BSS_8] != 0)) {
                    func_800BA808(gMsg_ID_6074, RCID_BOSS_ZONESS);
                    sZoSwork[ZO_BSS_27] = 1;
                    bossZO->swork[ZO_SWK_6] = 30;
                }
                if ((sZoSwork[ZO_BSS_26] == 0) && (sZoSwork[ZO_BSS_18] == 200) && (sZoSwork[ZO_BSS_27] == 3)) {
                    func_800BA808(gMsg_ID_6075, RCID_BOSS_ZONESS);
                    sZoSwork[ZO_BSS_26]++;
                    bossZO->timer_050 = 100;
                }
                if ((bossZO->timer_050 == 0) && (sZoSwork[ZO_BSS_26] != 0)) {
                    bossZO->timer_050 = 50;
                    sZoFwork[ZO_BSF_37_X] = (Rand_ZeroOne() - 0.3f) * 1100.0f;
                    sZoFwork[ZO_BSF_40_X] = (Rand_ZeroOne() - 0.7f) * 800.0f;
                    func_E16C50_801989FC(bossZO);
                }
            } else {
                if (sZoSwork[ZO_BSS_28] == 0) {
                    func_800BA808(gMsg_ID_6073, RCID_BOSS_ZONESS);
                    sZoSwork[ZO_BSS_28]++;
                }
                sZoFwork[ZO_BSF_25] = 0.0f;
                sZoFwork[ZO_BSF_23] = 3.0f;
                bossZO->timer_054 = 0;
                sZoSwork[ZO_BSS_5] = 0;
                sZoFwork[ZO_BSF_28] = -2600.0f;
                sZoFwork[ZO_BSF_15] = sZoFwork[ZO_BSF_16] = 0.0f;
                sZoSwork[ZO_BSS_18] = 0;

                sZoFwork[ZO_BSF_16];
                for (i = 0; i < 2; i++) {
                    func_E16C50_80199394(bossZO, i);
                }
                bossZO->timer_050 = 100;
                bossZO->actionState = 0;
            }
            break;
    }
    sZoFwork[ZO_BSF_2] += 20.0f;
    spE4.x = gPlayer->pos.x - bossZO->obj.pos.x;
    spE4.z = gPlayer->unk_138 - bossZO->obj.pos.z;
    Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_14], Math_RadToDeg(Math_Atan2F(spE4.x, spE4.z)), 0.5f, 100.0f, 0.001f);
    Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_0], sZoFwork[ZO_BSF_76], 0.2f, 4.0f, 0.0001f);
    if ((!(gFrameCount & 0x3F) || (sZoSwork[ZO_BSS_22] != 0)) &&
        ((Rand_ZeroOne() < 0.5f) || (sZoSwork[ZO_BSS_22] != 0)) && (sZoSwork[ZO_BSS_23] == 0)) {
        sZoSwork[ZO_BSS_23] = D_E16C50_801BF5F0[sZoSwork[ZO_BSS_22]];
        sZoFwork[ZO_BSF_76] = D_E16C50_801BF608[sZoSwork[ZO_BSS_22]];
        if ((sZoSwork[ZO_BSS_22] == 0) && (Rand_ZeroOne() < 0.3f)) {
            sZoSwork[ZO_BSS_23] = 100;
        }
        sZoSwork[ZO_BSS_22]++;
        if (sZoSwork[ZO_BSS_22] >= 6) {
            sZoSwork[ZO_BSS_22] = 0;
        }
    }
    spE4.x = gPlayer->pos.x - sZoFwork[ZO_BSF_65_X];
    spE4.z = gPlayer->unk_138 - sZoFwork[ZO_BSF_65_Z];
    Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_19], Math_RadToDeg(Math_Atan2F(spE4.x, spE4.z)), 0.1f, 5.0f, 0.0f);
    if ((bossZO->actionState >= 3) && (bossZO->actionState < 6)) {
        Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * M_DTOR, 1);
        Matrix_MultVec3f(gCalcMatrix, &spA8, &spD8);
        Matrix_MultVec3f(gCalcMatrix, &sp9C, &spCC);
        sp78 = spD8;
        sp6C = spCC;
        Matrix_RotateX(gCalcMatrix, -bossZO->obj.rot.x * M_DTOR, 0);
        Matrix_RotateY(gCalcMatrix, -bossZO->obj.rot.y * M_DTOR, 1);
        spE4.x = gPlayer->pos.x - (bossZO->obj.pos.x + spD8.x);
        spE4.y = gPlayer->pos.y - (bossZO->obj.pos.y + spD8.y);
        spE4.z = gPlayer->unk_138 - (bossZO->obj.pos.z + spD8.z);
        Matrix_MultVec3f(gCalcMatrix, &spE4, &spD8);
        sp11C = Math_RadToDeg(Math_Atan2F(spD8.x, spD8.z));
        sp120 = Math_RadToDeg(-Math_Atan2F(spD8.y, sqrtf(SQ(spD8.x) + SQ(spD8.z))));
        spE4.x = gPlayer->pos.x - (bossZO->obj.pos.x + spCC.x);
        spE4.y = gPlayer->pos.y - (bossZO->obj.pos.y + spCC.y);
        spE4.z = gPlayer->unk_138 - (bossZO->obj.pos.z + spCC.z);
        Matrix_MultVec3f(gCalcMatrix, &spE4, &spCC);
        sp114 = Math_RadToDeg(Math_Atan2F(spCC.x, spCC.z));
        sp118 = Math_RadToDeg(-Math_Atan2F(spCC.y, sqrtf(SQ(spCC.x) + SQ(spCC.z))));
        Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_15], sp11C, 0.2f, 2.0f, 0.0f);
        Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_5], sp120, 0.2f, 2.0f, 0.0f);
        Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_16], sp114, 0.2f, 2.0f, 0.0f);
        Math_SmoothStepToAngle(&sZoFwork[ZO_BSF_12], sp118, 0.2f, 2.0f, 0.0f);
        if ((bossZO->obj.rot.y >= 330.0f) || (bossZO->obj.rot.y <= 30.0f) ||
            ((bossZO->obj.rot.y <= 200.0f) && (bossZO->obj.rot.y >= 160.0f))) {
            if ((sZoFwork[ZO_BSF_15] > 315.0f) || (sZoFwork[ZO_BSF_15] < 215.0f)) {
                func_E16C50_801986FC(bossZO, 0, sp78.x, sp78.y, sp78.z, sZoFwork[ZO_BSF_5]);
            }
            if ((sZoFwork[ZO_BSF_16] < 45.0f) || (sZoFwork[ZO_BSF_16] > 145.0f)) {
                func_E16C50_801986FC(bossZO, 1, sp6C.x, sp6C.y, sp6C.z, sZoFwork[ZO_BSF_12]);
            }
            Math_SmoothStepToF(&sZoFwork[ZO_BSF_35], 0.0f, 1.0f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&sZoFwork[ZO_BSF_36], 0.0f, 1.0f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&sZoFwork[ZO_BSF_6], sZoFwork[ZO_BSF_35], 0.4f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&sZoFwork[ZO_BSF_13], sZoFwork[ZO_BSF_36], 0.4f, 100.0f, 0.00001f);
        }
    }
    if ((sZoSwork[ZO_BSS_8] == 0) && (sZoLimbTimers[ZO_LIMB_15] != LIMB_DESTROYED)) {
        if ((sZoFwork[ZO_BSF_87] < -570.0f) || (sZoFwork[ZO_BSF_88] > 1600.0f)) {
            sZoLimbTimers[ZO_LIMB_1] = sZoLimbTimers[ZO_LIMB_14] = sZoLimbTimers[ZO_LIMB_15] = LIMB_DESTROYED;
            sZoFwork[ZO_BSF_88] = 100000.0f;
        } else {
            sZoFwork[ZO_BSF_86] += 5.0f;
            sZoFwork[ZO_BSF_87] -= 10.0f;
            sZoFwork[ZO_BSF_88] += 20.0f;
            func_8007D0E0(sZoFwork[ZO_BSF_43_X], sZoFwork[ZO_BSF_43_Y], sZoFwork[ZO_BSF_43_Z], 5.0f);
            if ((func_800A73E4(&sp134, &sp130, sZoFwork[ZO_BSF_43_X], sZoFwork[ZO_BSF_43_Y] - 100.0f,
                               sZoFwork[ZO_BSF_43_Z]) != 0) &&
                (sZoSwork[ZO_BSS_45] == 0)) {
                func_8008377C(sZoFwork[ZO_BSF_43_X], sp134, sZoFwork[ZO_BSF_43_Z] + 30.0f, 0.0f, 2.0f);
                sZoSwork[ZO_BSS_45]++;
            }
        }
    }
    if ((sZoSwork[ZO_BSS_9] == 0) && (sZoLimbTimers[ZO_LIMB_10] != LIMB_DESTROYED)) {
        if ((sZoFwork[ZO_BSF_81] > 700.0f) || (sZoFwork[ZO_BSF_82] < -400.0f)) {
            sZoLimbTimers[ZO_LIMB_10] = LIMB_DESTROYED;
            ZO_HIT_3(bossZO)->b.z.offset = 100000.0f;
        } else {
            sZoFwork[ZO_BSF_80] -= 5.0f;
            sZoFwork[ZO_BSF_81] += 12.0f;
            sZoFwork[ZO_BSF_82] -= 10.0f;
            func_8007D0E0(sZoFwork[ZO_BSF_29_X], sZoFwork[ZO_BSF_29_Y], sZoFwork[ZO_BSF_29_Z], 5.0f);
            if ((func_800A73E4(&sp134, &sp130, sZoFwork[ZO_BSF_29_X], sZoFwork[ZO_BSF_29_Y] - 100.0f,
                               sZoFwork[ZO_BSF_29_Z]) != 0) &&
                (sZoSwork[ZO_BSS_46] == 0)) {
                func_8008377C(sZoFwork[ZO_BSF_29_X], sp134, sZoFwork[ZO_BSF_29_Z] + 30.0f, 0.0f, 2.0f);
                sZoSwork[ZO_BSS_46]++;
            }
        }
    }
    if ((sZoSwork[ZO_BSS_10] == 0) && (sZoLimbTimers[ZO_LIMB_2] != LIMB_DESTROYED)) {
        if ((sZoFwork[ZO_BSF_84] > 700.0f) || (sZoFwork[ZO_BSF_85] < -400.0f)) {
            sZoLimbTimers[ZO_LIMB_2] = LIMB_DESTROYED;
            ZO_HIT_4(bossZO)->b.z.offset = 100000.0f;
        } else {
            sZoFwork[ZO_BSF_83] -= 5.0f;
            sZoFwork[ZO_BSF_84] += 12.0f;
            sZoFwork[ZO_BSF_85] -= 10.0f;
            func_8007D0E0(sZoFwork[ZO_BSF_32_X], sZoFwork[ZO_BSF_32_Y], sZoFwork[ZO_BSF_32_Z], 5.0f);
            if ((func_800A73E4(&sp134, &sp130, sZoFwork[ZO_BSF_32_X], sZoFwork[ZO_BSF_32_Y] - 100.0f,
                               sZoFwork[ZO_BSF_32_Z]) != 0) &&
                (sZoSwork[ZO_BSS_47] == 0)) {
                func_8008377C(sZoFwork[ZO_BSF_32_X], sp134, sZoFwork[ZO_BSF_32_Z] + 30.0f, 0.0f, 2.0f);
                sZoSwork[ZO_BSS_47]++;
            }
        }
    }
    if ((sZoSwork[ZO_BSS_13] < 2) && (sZoLimbTimers[ZO_LIMB_5] != LIMB_DESTROYED)) {
        D_801779A8[0] = 20.0f;
        if (!(gFrameCount & 1)) {
            func_8007D0E0(((Rand_ZeroOne() - 0.5f) * 200.0f) + sZoFwork[ZO_BSF_52_X],
                          ((Rand_ZeroOne() - 0.5f) * 200.0f) + sZoFwork[ZO_BSF_52_Y],
                          ((Rand_ZeroOne() - 0.5f) * 100.0f) + sZoFwork[ZO_BSF_52_Z], 5.0f);
        }
        if (bossZO->swork[ZO_SWK_14] != 0) {
            if (sZoLimbTimers[ZO_LIMB_5] == 0) {
                sZoLimbTimers[ZO_LIMB_5] = sZoLimbTimers[ZO_LIMB_6] = 15;
            }
            if (sZoSwork[ZO_BSS_52] == 0) {
                sZoSwork[ZO_BSS_52] = 30;
            }
        } else {
            sZoSwork[ZO_BSS_13] = 0;
            if ((sZoFwork[ZO_BSF_92] < -700.0f) || (sZoFwork[ZO_BSF_91] < -400.0f)) {
                sZoLimbTimers[ZO_LIMB_5] = sZoLimbTimers[ZO_LIMB_6] = LIMB_DESTROYED;
                sZoFwork[ZO_BSF_52_Z] = 100000.0f;
            } else {
                sZoFwork[ZO_BSF_90] -= 2.0f;
                sZoFwork[ZO_BSF_91] -= 5.0f;
                sZoFwork[ZO_BSF_92] -= 5.0f;
                func_8007D0E0(sZoFwork[ZO_BSF_52_X], sZoFwork[ZO_BSF_52_Y], sZoFwork[ZO_BSF_52_Z], 5.0f);
                if ((func_800A73E4(&sp134, &sp130, sZoFwork[ZO_BSF_52_X], sZoFwork[ZO_BSF_52_Y] - 100.0f,
                                   sZoFwork[ZO_BSF_52_Z]) != 0) &&
                    (sZoSwork[ZO_BSS_48] == 0)) {
                    func_8008377C(sZoFwork[ZO_BSF_52_X], sp134, sZoFwork[ZO_BSF_52_Z] + 100.0f, 0.0f, 2.0f);
                    sZoSwork[ZO_BSS_48]++;
                }
            }
        }
    }
    if (bossZO->dmgType != DMG_NONE) {
        dmgType = bossZO->dmgType;
        bossZO->dmgType = DMG_NONE;
        if (dmgType == DMG_BEAM) {
            Audio_PlaySfx(0x29121007, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        switch (bossZO->dmgPart) { /* switch 2 */
            case 0:                /* switch 2 */
                if ((sZoSwork[ZO_BSS_8] != 0) && (dmgType == DMG_BOMB) && ((bossZO->actionState == 3) || (bossZO->actionState == 8))) {
                    sZoLimbTimers[ZO_LIMB_1] = sZoLimbTimers[ZO_LIMB_14] = sZoLimbTimers[ZO_LIMB_15] = 15;
                    sZoSwork[ZO_BSS_49] = 60;
                    sZoSwork[ZO_BSS_8] -= bossZO->damage;
                    if (sZoSwork[ZO_BSS_8] <= 0) {
                        sZoSwork[ZO_BSS_8] = 0;
                        sZoSwork[ZO_BSS_49] = 0;
                        bossZO->swork[ZO_SWK_5] = 30;
                    }
                }
                break;
            case 3: /* switch 2 */
                if ((sZoSwork[ZO_BSS_9] != 0) && (bossZO->actionState == 3) && (dmgType == DMG_BOMB) &&
                    (sZoSwork[ZO_BSS_50] == 0)) {
                    sZoLimbTimers[ZO_LIMB_10] = 15;
                    sZoSwork[ZO_BSS_50] = 50;
                    sZoSwork[ZO_BSS_9] -= bossZO->damage;
                    if (sZoSwork[ZO_BSS_9] <= 0) {
                        sZoSwork[ZO_BSS_9] = 0;
                        sZoSwork[ZO_BSS_50] = 0;
                        spD8.x = sZoFwork[ZO_BSF_29_X];
                        spD8.y = sZoFwork[ZO_BSF_29_Y];
                        spD8.z = sZoFwork[ZO_BSF_29_Z];
                        func_8007A6F0(&spD8, 0x2903A008);
                    }
                }
                break;
            case 4: /* switch 2 */
                if ((sZoSwork[ZO_BSS_10] != 0) && (bossZO->actionState == 3) && (dmgType == DMG_BOMB) &&
                    (sZoSwork[ZO_BSS_51] == 0)) {
                    sZoLimbTimers[ZO_LIMB_2] = 15;
                    sZoSwork[ZO_BSS_51] = 50;
                    sZoSwork[ZO_BSS_10] -= bossZO->damage;
                    if (sZoSwork[ZO_BSS_10] <= 0) {
                        sZoSwork[ZO_BSS_10] = 0;
                        sZoSwork[ZO_BSS_51] = 0;
                        spD8.x = sZoFwork[ZO_BSF_32_X];
                        spD8.y = sZoFwork[ZO_BSF_32_Y];
                        spD8.z = sZoFwork[ZO_BSF_32_Z];
                        func_8007A6F0(&spD8, 0x2903A008);
                    }
                }
                break;
            case 5: /* switch 2 */
                if ((sZoSwork[ZO_BSS_9] != 0) && (bossZO->actionState == 3) && (dmgType == DMG_BOMB) &&
                    (sZoSwork[ZO_BSS_50] == 0)) {
                    sZoLimbTimers[ZO_LIMB_10] = 15;
                    sZoSwork[ZO_BSS_50] = 50;
                    sZoSwork[ZO_BSS_9] -= bossZO->damage;
                    if (sZoSwork[ZO_BSS_9] <= 0) {
                        sZoSwork[ZO_BSS_9] = 0;
                        sZoSwork[ZO_BSS_50] = 0;
                        spD8.x = sZoFwork[ZO_BSF_29_X];
                        spD8.y = sZoFwork[ZO_BSF_29_Y];
                        spD8.z = sZoFwork[ZO_BSF_29_Z];
                        func_8007A6F0(&spD8, 0x2903A008);
                    }
                }
                if ((sZoSwork[ZO_BSS_10] != 0) && (bossZO->actionState == 3) && (dmgType == DMG_BOMB) &&
                    (sZoSwork[ZO_BSS_51] == 0)) {
                    sZoLimbTimers[ZO_LIMB_2] = 15;
                    sZoSwork[ZO_BSS_51] = 50;
                    sZoSwork[ZO_BSS_10] -= bossZO->damage;
                    if (sZoSwork[ZO_BSS_10] <= 0) {
                        sZoSwork[ZO_BSS_10] = 0;
                        sZoSwork[ZO_BSS_51] = 0;
                        spD8.x = sZoFwork[ZO_BSF_32_X];
                        spD8.y = sZoFwork[ZO_BSF_32_Y];
                        spD8.z = sZoFwork[ZO_BSF_32_Z];
                        func_8007A6F0(&spD8, 0x2903A008);
                    }
                }
                /* fallthrough */
            case 6: /* switch 2 */
                if ((bossZO->health != 0) && (sZoSwork[ZO_BSS_9] == 0) && (sZoSwork[ZO_BSS_10] == 0) &&
                    (sZoSwork[ZO_BSS_11] == 0) && (sZoSwork[ZO_BSS_12] == 0) && (sZoSwork[ZO_BSS_13] == 0) &&
                    (bossZO->actionState == 3)) {
                    sZoLimbTimers[ZO_LIMB_25] = sZoLimbTimers[ZO_LIMB_36] = 15;
                    bossZO->health -= bossZO->damage;
                    if (bossZO->health < 150) {
                        Audio_PlaySfx(0x2943500F, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else {
                        Audio_PlaySfx(0x29034003, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    if (bossZO->health <= 0) {
                        D_8017796C = -1;
                        func_800182F4(0x102800FF);
                        func_800182F4(0x112800FF);
                        Audio_KillSfx(&bossZO->sfxPos);
                        Audio_PlaySfx(0x2940D09A, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        sZoSwork[ZO_BSS_8] = bossZO->health = sZoSwork[ZO_BSS_24] = 0;
                        bossZO->timer_050 = 100;
                        Audio_PlaySfx(0x2940D09A, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        sZoFwork[ZO_BSF_27] = 20.0f;
                        sZoFwork[ZO_BSF_26] = 50.0f;
                        sZoFwork[ZO_BSF_28] = -2600.0f;
                        bossZO->actionState = 6;
                        bossZO->fwork[ZO_FWK_4] = 1.0f;
                    }
                }
                break;
            case 7:  /* switch 2 */
            case 12: /* switch 2 */
                if ((sZoSwork[ZO_BSS_13] >= 2) && (bossZO->actionState == 5) && (dmgType == DMG_BOMB)) {
                    sZoLimbTimers[ZO_LIMB_5] = sZoLimbTimers[ZO_LIMB_6] = 15;
                    sZoSwork[ZO_BSS_52] = 30;
                    sZoSwork[ZO_BSS_13] -= bossZO->damage;
                    if (sZoSwork[ZO_BSS_13] < 2) {
                        bossZO->swork[ZO_SWK_14] = 30;
                        sZoSwork[ZO_BSS_13] = 1;
                        func_800BA808(gMsg_ID_6090, RCID_BOSS_ZONESS);
                        spD8.x = sZoFwork[ZO_BSF_52_X];
                        spD8.y = sZoFwork[ZO_BSF_52_Y];
                        spD8.z = sZoFwork[ZO_BSF_52_Z];
                        func_8007A6F0(&spD8, 0x2940983C);
                    }
                }
                break;
            case 8 + 0:  /* switch 2 */
            case 10 + 0: /* switch 2 */
                if ((sZoSwork[ZO_BSS_11] != 0) && (bossZO->actionState == 3) && (dmgType == DMG_BOMB) &&
                    (sZoSwork[ZO_BSS_53] == 0)) {
                    sZoLimbTimers[ZO_LIMB_7] = sZoLimbTimers[ZO_LIMB_21] = sZoLimbTimers[ZO_LIMB_22] = 15;
                    sZoSwork[ZO_BSS_53] = 50;
                    sZoSwork[ZO_BSS_11] -= bossZO->damage;
                    if (sZoSwork[ZO_BSS_11] <= 0) {
                        sZoSwork[ZO_BSS_11] = 0;
                        D_80178480 = 30;
                        D_80178348 = D_80178350 = D_80178354 = 255;
                        D_80178340 = D_80178358 = 255;
                        D_80178358 = 0;
                        D_8017835C = 25;
                        bossZO->swork[ZO_SWK_15] = 3;
                        spD8.x = sZoFwork[ZO_BSF_106_X];
                        spD8.y = sZoFwork[ZO_BSF_106_Y];
                        spD8.z = sZoFwork[ZO_BSF_106_Z];
                        func_8007A6F0(&spD8, 0x2940983C);
                        sZoSwork[ZO_BSS_16] = 0;
                        ZO_HIT_8(bossZO, 0)->z.offset = ZO_HIT_10(bossZO, 0)->z.offset = 100000.0f;
                        bossZO->actionState = 4;
                        bossZO->fwork[ZO_FWK_9] = 330.0f;
                    }
                }
                break;
            case 8 + 1:  /* switch 2 */
            case 10 + 1: /* switch 2 */
                if ((sZoSwork[ZO_BSS_12] != 0) && (bossZO->actionState == 3) && (dmgType == DMG_BOMB) &&
                    (sZoSwork[ZO_BSS_54] == 0)) {
                    sZoLimbTimers[ZO_LIMB_11] = sZoLimbTimers[ZO_LIMB_23] = sZoLimbTimers[ZO_LIMB_24] = 15;
                    sZoSwork[ZO_BSS_54] = 50;
                    sZoSwork[ZO_BSS_12] -= bossZO->damage;
                    if (sZoSwork[ZO_BSS_12] <= 0) {
                        sZoSwork[ZO_BSS_12] = 0;
                        D_80178480 = 30;
                        D_80178348 = D_80178350 = D_80178354 = 255;
                        D_80178340 = D_80178358 = 255;
                        D_80178358 = 0;
                        D_8017835C = 25;
                        bossZO->swork[ZO_SWK_15] = 3;
                        spCC.x = sZoFwork[ZO_BSF_109_X];
                        spCC.y = sZoFwork[ZO_BSF_109_Y];
                        spCC.z = sZoFwork[ZO_BSF_109_Z];
                        func_8007A6F0(&spCC, 0x2940983C);
                        sZoSwork[ZO_BSS_16] = 0;
                        ZO_HIT_8(bossZO, 1)->z.offset = ZO_HIT_10(bossZO, 1)->z.offset = 100000.0f;
                        bossZO->actionState = 4;
                        bossZO->fwork[ZO_FWK_9] = 30.0f;
                    }
                }
                break;
        }
    }
    if (sZoSwork[ZO_BSS_0] != 0) {
        sZoSwork[ZO_BSS_0]--;
    }
    if (sZoSwork[ZO_BSS_1] != 0) {
        sZoSwork[ZO_BSS_1]--;
    }
    if (sZoSwork[ZO_BSS_2] != 0) {
        sZoSwork[ZO_BSS_2]--;
    }
    if (sZoSwork[ZO_BSS_3] != 0) {
        sZoSwork[ZO_BSS_3]--;
    }
    if (sZoSwork[ZO_BSS_4] != 0) {
        sZoSwork[ZO_BSS_4]--;
    }
    if (sZoSwork[ZO_BSS_23] != 0) {
        sZoSwork[ZO_BSS_23]--;
    }
    if (sZoSwork[ZO_BSS_34] != 0) {
        sZoSwork[ZO_BSS_34]--;
    }
    if (sZoSwork[ZO_BSS_38] != 0) {
        sZoSwork[ZO_BSS_38]--;
    }
    if (sZoSwork[ZO_BSS_39] != 0) {
        sZoSwork[ZO_BSS_39]--;
    }
    if (sZoSwork[ZO_BSS_40] != 0) {
        sZoSwork[ZO_BSS_40]--;
    }
    if (bossZO->swork[ZO_SWK_14] != 0) {
        bossZO->swork[ZO_SWK_14]--;
    }
    if (bossZO->swork[ZO_SWK_4] != 0) {
        bossZO->swork[ZO_SWK_4]--;
    }
    if (bossZO->swork[ZO_SWK_5] != 0) {
        bossZO->swork[ZO_SWK_5]--;
    }
    if (bossZO->swork[ZO_SWK_15] != 0) {
        bossZO->swork[ZO_SWK_15]--;
    }
    if (bossZO->swork[ZO_SWK_6] > 1) {
        bossZO->swork[ZO_SWK_6]--;
    }
    for (sp124 = 0; sp124 < ZO_LIMB_MAX; sp124++) {
        if ((sZoLimbTimers[sp124] > 0) && (sZoLimbTimers[sp124] < 200)) {
            sZoLimbTimers[sp124]--;
        }
    }
    for (sp124 = 0, temp2 = &sZoSwork[ZO_BSS_49]; sp124 < 6; sp124++, temp2++) {
        if (*temp2 != 0) {
            (*temp2)--;
        }
    }
    if (bossZO->actionState < 4) {
        spD8.x = sZoFwork[ZO_BSF_106_X];
        spD8.y = sZoFwork[ZO_BSF_106_Y];
        spD8.z = sZoFwork[ZO_BSF_106_Z];
        spCC.x = sZoFwork[ZO_BSF_109_X];
        spCC.y = sZoFwork[ZO_BSF_109_Y];
        spCC.z = sZoFwork[ZO_BSF_109_Z];
        if ((sZoSwork[ZO_BSS_53] & 1) && (sZoSwork[ZO_BSS_11] != 0)) {
            func_8007A6F0(&spD8, 0x29034003);
        }
        if ((sZoSwork[ZO_BSS_54] & 1) && (sZoSwork[ZO_BSS_12] != 0)) {
            // if (gCalcMatrix) {}
            func_8007A6F0(&spCC, 0x29034003);
        }
    }
    if (sZoSwork[ZO_BSS_50] & 1) {
        spD8.x = sZoFwork[ZO_BSF_29_X];
        spD8.y = sZoFwork[ZO_BSF_29_Y];
        spD8.z = sZoFwork[ZO_BSF_29_Z];
        func_8007A6F0(&spD8, 0x2903300E);
    }
    if (sZoSwork[ZO_BSS_51] & 1) {
        spD8.x = sZoFwork[ZO_BSF_32_X];
        spD8.y = sZoFwork[ZO_BSF_32_Y];
        spD8.z = sZoFwork[ZO_BSF_32_Z];
        func_8007A6F0(&spD8, 0x2903300E);
    }
    if (sZoSwork[ZO_BSS_52] & 1) {
        spD8.x = sZoFwork[ZO_BSF_52_X];
        spD8.y = sZoFwork[ZO_BSF_52_Y];
        spD8.z = sZoFwork[ZO_BSF_52_Z];
        func_8007A6F0(&spD8, 0x29034003);
    }
    if (func_800A73E4(&sp134, &sp130, bossZO->obj.pos.x, bossZO->obj.pos.y - 500.0f, bossZO->obj.pos.z) != 0) {
        Math_SmoothStepToF(&bossZO->obj.pos.y, sp134 - 20.0f, 0.1f, bossZO->fwork[ZO_FWK_4], 0.0f);
        bossZO->fwork[ZO_FWK_1] = __sinf(gFrameCount * 7.0f * M_DTOR) * 12.0f;
        bossZO->fwork[ZO_FWK_2] = __cosf(gFrameCount * 9.0f * M_DTOR) * 12.0f;
        bossZO->fwork[ZO_FWK_3] = __sinf(gFrameCount * 10.0f * M_DTOR) * 30.0f;
        if ((bossZO->timer_054 == 0) && (sZoSwork[ZO_BSS_5] < 2)) {
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 50.0f, 0.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 46.0f, 19.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 35.0f, 35.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 19.0f, 46.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 0.0f, 50.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -50.0f, 0.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -46.0f, 19.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -35.0f, 35.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -19.0f, 46.0f, 5.0f);
            bossZO->timer_054 = 20;
            sZoSwork[ZO_BSS_5]++;
        }
    }
    if (D_801613A0 == 530) {
        func_800BA808(gMsg_ID_2225, RCID_SLIPPY);
    }
    if (D_801613A0 == 686) {
        D_80161734 = 1;
    }
    if (D_801613A0 > 686) {
        D_80177848 = bossZO->health / 300.0f * 64.0f;
        D_80177848 += (s32) ((sZoSwork[ZO_BSS_11] / 20.0f) * 64.0f);
        D_80177848 += (s32) ((sZoSwork[ZO_BSS_12] / 20.0f) * 64.0f);
        D_80177848 += (s32) ((sZoSwork[ZO_BSS_9] / 40.0f) * 16.0f);
        D_80177848 += (s32) ((sZoSwork[ZO_BSS_10] / 40.0f) * 16.0f);
        D_80177848 += (s32) ((sZoSwork[ZO_BSS_13] / 61.0f) * 31.0f);
    }
    ZO_HIT_0(bossZO)->z.offset = sZoFwork[ZO_BSF_43_Z] - bossZO->obj.pos.z;
    ZO_HIT_0(bossZO)->x.offset = sZoFwork[ZO_BSF_43_X] - bossZO->obj.pos.x;
    ZO_HIT_1(bossZO)->z.offset = sZoFwork[ZO_BSF_43_Z] - bossZO->obj.pos.z;
    ZO_HIT_1(bossZO)->x.offset = sZoFwork[ZO_BSF_43_X] - bossZO->obj.pos.x;
    Animation_GetFrameData(&D_601996C, 0, bossZO->vwork);
    if (sZoSwork[ZO_BSS_38] != 0) {
        sZoSwork[ZO_BSS_37] -= 10;
        if (sZoSwork[ZO_BSS_37] < 0) {
            sZoSwork[ZO_BSS_37] = 0;
        }
    } else {
        sZoSwork[ZO_BSS_37] += 10;
        if (sZoSwork[ZO_BSS_37] > 255) {
            sZoSwork[ZO_BSS_37] = 255;
        }
    }

    for (sp124 = 0, temp2 = &sZoSwork[ZO_BSS_49], temp3 = &sZoFwork[ZO_BSF_112]; sp124 < 6; sp124++, temp2++, temp3++) {
        if ((!(&gPlayer->pos)) && (!(&gPlayer->pos))) {}
        *temp3 = __sinf(*temp2 * 50.0f * M_DTOR) * func_E16C50_80193CC8(*temp2);
    }
}
#else
Vec3f D_E16C50_801BF6DC = { 615.0f, 532.0f, -80.0f };
Vec3f D_E16C50_801BF6E8 = { -615.0f, 532.0f, -80.0f };
Vec3f D_E16C50_801BF6F4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF700 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF70C = { 0.0f, 0.0f, 40.0f };
// OBJ_BOSS_ZO action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80194A84.s")
#endif

void func_E16C50_801986FC(Boss* bossZO, s32 arg1, f32 xOff, f32 yOff, f32 zOff, f32 yRot) {
    Object_2F4* sp6C;
    Vec3f sp60 = { 0.0f, 0.0f, 50.0f };
    Vec3f sp54;
    s32 sp50;

    if ((sZoSwork[ZO_BSS_0 + arg1] == 0) && (sZoSwork[ZO_BSS_11 + arg1] != 0)) {
        sZoSwork[ZO_BSS_0 + arg1] = 70;
        sp50 = arg1;
        if (arg1 != 0) {
            sp50 = -1;
        }
        if (sZoSwork[ZO_BSS_12 + sp50] == 0) {
            sZoSwork[ZO_BSS_0 + arg1] = 40;
        }
        for (sp50 = 0, sp6C = gObjects2F4; sp50 < 60; sp50++, sp6C++) {
            if (sp6C->obj.status == 0) {
                D_801779A8[0] = 20.0f;
                Object_2F4_Initialize(sp6C);
                sp6C->obj.status = 1;
                sp6C->obj.id = OBJ_2F4_245;
                sp6C->obj.pos.x = bossZO->obj.pos.x + xOff;
                sp6C->obj.pos.y = bossZO->obj.pos.y + yOff;
                sp6C->obj.pos.z = bossZO->obj.pos.z + zOff;
                sp6C->unk_0CE = 10;

                Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, sZoFwork[ZO_BSF_15 + arg1] * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, M_DTOR * yRot, 1);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp60, &sp54);
                sp6C->vel.x = sp54.x;
                sp6C->vel.y = sp54.y;
                sp6C->vel.z = bossZO->vel.z + sp54.z;
                Object_SetInfo(&sp6C->info, sp6C->obj.id);
                sZoFwork[ZO_BSF_35 + arg1] = 40.0f;
                Audio_PlaySfx(0x2903203B, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                for (sp50 = 0; sp50 < 4; sp50++) {
                    func_E16C50_80193C5C(sp6C->obj.pos.x + (sp54.x * 4.3f), sp6C->obj.pos.y + (sp54.y * 4.3f),
                                         sp6C->obj.pos.z + (sp54.z * 4.3f) + 100.0f, 30.0f);
                }
                break;
            }
        }
    }
    if (sp50 >= 60) {
        sp6C->obj.status = 0;
    }
}

void func_E16C50_801989FC(Boss* bossZO) {
    s32 i;
    Vec3f sp70 = { 0.0f, 0.0f, 20.0f };
    Vec3f sp64;
    Object_2F4* var_s0;
    s32 j;

    for (i = 0; i < 2; i++) {
        if (sZoSwork[ZO_BSS_11 + i] != 0) {
            for (j = 0, var_s0 = gObjects2F4; j < 60; j++, var_s0++) {
                if (var_s0->obj.status == 0) {
                    Object_2F4_Initialize(var_s0);
                    var_s0->obj.status = 1;
                    var_s0->obj.id = OBJ_2F4_246;
                    var_s0->obj.pos.x = sZoFwork[ZO_BSF_37_X + 3 * i];
                    var_s0->obj.pos.y = sZoFwork[ZO_BSF_37_Y + 3 * i];
                    var_s0->obj.pos.z = sZoFwork[ZO_BSF_37_Z + 3 * i];
                    var_s0->obj.rot.y = bossZO->obj.rot.y;
                    var_s0->timer_0BC = 300;
                    var_s0->unk_0CE = 10;

                    Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * M_DTOR, 0);
                    Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * M_DTOR, 1);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);
                    var_s0->vel.x = sp64.x;
                    var_s0->vel.z = bossZO->vel.z + sp64.z;
                    Object_SetInfo(&var_s0->info, var_s0->obj.id);
                    Audio_PlaySfx(0x2903101B, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                }
            }
        }
    }
}

void func_E16C50_80198BE8(Boss* bossZO, s32 arg1) {
    s32 var_s1;
    Object_8C* var_s0;
    Vec3f sp3C = { 0.0f, 0.0f, 100.0f };
    Vec3f sp30;

    if ((sZoSwork[ZO_BSS_2 + arg1] == 0) && (sZoSwork[ZO_BSS_39 + arg1] == 0)) {
        if ((arg1 == 0) && (sZoSwork[ZO_BSS_41] == 0)) {
            Audio_PlaySfx(0x31034025, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        sZoSwork[ZO_BSS_2 + arg1] = 2;
        sZoSwork[ZO_BSS_41 + arg1]++;
        if (sZoSwork[ZO_BSS_41 + arg1] >= 11) {
            sZoSwork[ZO_BSS_41 + arg1] = 0;
            sZoSwork[ZO_BSS_39 + arg1] = 30;
            if (arg1 == 1) {
                func_8001A55C(&bossZO->sfxPos, 0x31034025);
            }
        }
        for (var_s1 = 0, var_s0 = gObjects8C; var_s1 < 100; var_s1++, var_s0++) {
            if (var_s0->obj.status == 0) {
                Object_8C_Initialize(var_s0);
                var_s0->obj.status = 1;
                var_s0->obj.id = OBJ_8C_398;
                var_s0->timer_50 = 100;
                var_s0->unk_4E = 1;
                var_s0->scale2 = 1.0f;
                var_s0->obj.rot.z = 30.0f;
                var_s0->obj.pos.x = sZoFwork[ZO_BSF_93_X + 3 * arg1];
                var_s0->obj.pos.y = sZoFwork[ZO_BSF_93_Y + 3 * arg1];
                var_s0->obj.pos.z = sZoFwork[ZO_BSF_93_Z + 3 * arg1];
                Matrix_RotateY(gCalcMatrix, sZoFwork[ZO_BSF_8 + 2 * arg1] * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, sZoFwork[ZO_BSF_7 + 2 * arg1] * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, bossZO->obj.rot.z * M_DTOR, 1);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp3C, &sp30);
                var_s0->vel.x = sp30.x;
                var_s0->vel.y = sp30.y;
                var_s0->vel.z = sp30.z - D_80177D08;
                Object_SetInfo(&var_s0->info, var_s0->obj.id);
                break;
            }
        }
        if (var_s1 >= 60) {
            var_s0->obj.status = 0;
        }
    }
}

void func_E16C50_80198ECC(Boss* bossZO) {
    sZoSwork[ZO_BSS_18] = 500;
    bossZO->timer_050 = 100;
    bossZO->timer_054 = 0;
    sZoSwork[ZO_BSS_5] = 0;
    sZoFwork[ZO_BSF_25] = -1200.0f;
    sZoFwork[ZO_BSF_23] = 15.0f;
    sZoFwork[ZO_BSF_28] = -3500.0f;
    sZoFwork[ZO_BSF_77] = 0.0f;
    bossZO->actionState = 8;
    bossZO->fwork[ZO_FWK_4] = 1.0f;
}

void func_E16C50_80198F3C(Boss* bossZO, s32 arg1, s32 arg2) {
    if ((!(gFrameCount & 7) && (Rand_ZeroOne() < 0.5f))) {
        sZoLimbTimers[ZO_LIMB_7 + 4 * arg1] = sZoLimbTimers[ZO_LIMB_21 + 2 * arg1] =
            sZoLimbTimers[ZO_LIMB_22 + 2 * arg1] = 15;
    }
    func_8007D0E0(sZoFwork[ZO_BSF_0 + arg2] + ((Rand_ZeroOne() - 0.5f) * 400.0f),
                  sZoFwork[ZO_BSF_1 + arg2] + (Rand_ZeroOne() - 0.2f) * 800.0f, sZoFwork[ZO_BSF_2 + arg2], 7.0f);
    if (!(gFrameCount & 1)) {
        func_8007C120(sZoFwork[ZO_BSF_0 + arg2], sZoFwork[ZO_BSF_1 + arg2], sZoFwork[ZO_BSF_2 + arg2], bossZO->vel.x,
                      bossZO->vel.y, bossZO->vel.z, 0.2f, 10);
    }
}

void func_E16C50_8019907C(Boss* bossZO) {
    if ((sZoSwork[ZO_BSS_9] == 0) && (sZoSwork[ZO_BSS_10] == 0)) {
        if ((sZoSwork[ZO_BSS_31] == 0) && (sZoSwork[ZO_BSS_30] != 0)) {
            func_800BA808(gMsg_ID_6082, RCID_PEPPY);
            sZoSwork[ZO_BSS_34] = 333;
        }
        if (sZoSwork[ZO_BSS_30] == 0) {
            func_800BA808(gMsg_ID_6076, RCID_BOSS_ZONESS);
            sZoSwork[ZO_BSS_34] = 333;
            sZoSwork[ZO_BSS_30]++;
        }
        sZoFwork[ZO_BSF_77] = 0.0f;
        bossZO->actionState = 5;

    } else {
        func_E16C50_80198ECC(bossZO);
    }
}

void func_E16C50_8019914C(Boss* bossZO, s32 arg1) {
    sZoLimbTimers[ZO_LIMB_7 + 4 * arg1] = sZoLimbTimers[ZO_LIMB_21 + arg1 * 2] = sZoLimbTimers[ZO_LIMB_22 + arg1 * 2] =
        LIMB_DESTROYED;
    sZoFwork[ZO_BSF_77] = 0.0f;
    sZoSwork[ZO_BSS_36] = sZoSwork[ZO_BSS_16] = 0;
    bossZO->swork[ZO_SWK_4] = 1000;
    bossZO->actionState = 3;
    if ((sZoSwork[ZO_BSS_11] == 0) && (sZoSwork[ZO_BSS_12] == 0)) {
        bossZO->fwork[ZO_FWK_6] = bossZO->obj.pos.x;
        sZoSwork[ZO_BSS_20] = sZoSwork[ZO_BSS_24] = 1;
    }
}

f32 D_E16C50_801BF73C[2] = { -80.0f, 80.0f };

void func_E16C50_801991D0(Boss* bossZO, s32 arg1) {
    Math_SmoothStepToF(&sZoFwork[ZO_BSF_4], D_E16C50_801BF73C[arg1], 1.0f, 5.0f, 0.001f);
    if (sZoFwork[ZO_BSF_4] == D_E16C50_801BF73C[arg1]) {
        Math_SmoothStepToF(&sZoFwork[ZO_BSF_3], -30.0f, 1.0f, 3.0f, 0.001f);
        if (sZoFwork[ZO_BSF_3] == -30.0f) {
            bossZO->timer_052 = 60;
            sZoSwork[ZO_BSS_36] = 0;
            sZoSwork[ZO_BSS_16] = arg1 + 1;
            sZoFwork[ZO_BSF_77] = 0.0f;
        }
    }

    if (arg1 == 0) {
        ZO_HIT_12(bossZO)->z.offset = -556.39996f;
        ZO_HIT_12(bossZO)->z.size = 130.0f;
        ZO_HIT_12(bossZO)->y.offset = 663.0f;
        ZO_HIT_12(bossZO)->y.size = 171.59999f;
        ZO_HIT_12(bossZO)->x.offset = 395.19998f;
        ZO_HIT_12(bossZO)->x.size = 241.79999f;
    } else {
        ZO_HIT_12(bossZO)->z.offset = -556.39996f;
        ZO_HIT_12(bossZO)->z.size = 130.0f;
        ZO_HIT_12(bossZO)->y.offset = 663.0f;
        ZO_HIT_12(bossZO)->y.size = 171.59999f;
        ZO_HIT_12(bossZO)->x.offset = -395.19998f;
        ZO_HIT_12(bossZO)->x.size = 241.79999f;
    }
}

#define ZO_HIT_8_2(bossZO, index) ((Hitbox*) (ZO_HIT_7(bossZO) + 1) + (index))
#define ZO_HIT_10_2(bossZO, index) ((Hitbox*) (ZO_HIT_8(bossZO, 0) + 2) + (index))

void func_E16C50_80199394(Boss* bossZO, s32 arg1) {
    sZoSwork[ZO_BSS_11 + arg1] = 20;

    ZO_HIT_8(bossZO, arg1)->z.offset = -213.2f;
    ZO_HIT_10(bossZO, arg1)->z.offset = -351.0f;
    bossZO->timer_050 = 20;
    sZoFwork[ZO_BSF_17 + arg1] = sZoFwork[ZO_BSF_77] = 0.0f;
    sZoSwork[ZO_BSS_16] = 3;
    Audio_PlaySfx(0x29433022, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_80199470(Boss* bossZO, s32 arg1) {
    if (sZoSwork[ZO_BSS_13] == 0) {
        if (sZoFwork[ZO_BSF_17 + arg1] > -400.0f) {
            sZoFwork[ZO_BSF_17 + arg1] -= 4.0f;
        } else {
            if (sZoSwork[ZO_BSS_36] == 0) {
                sZoSwork[ZO_BSS_36]++;
                sZoFwork[ZO_BSF_77] = 0.0f;
            }
            func_E16C50_8019962C(bossZO, 0.0f);
            if (bossZO->obj.rot.y == 0.0f) {
                sZoSwork[ZO_BSS_36] = sZoSwork[ZO_BSS_16] = 0;
                sZoFwork[ZO_BSF_77] = 0;
                bossZO->swork[ZO_SWK_4] = 1000;
                bossZO->actionState = 3;
                if ((sZoSwork[ZO_BSS_11] == 0) && (sZoSwork[ZO_BSS_12] == 0)) {
                    sZoSwork[ZO_BSS_20] = sZoSwork[ZO_BSS_24] = 1;
                }
                func_E16C50_8019914C(bossZO, arg1);
            }
        }
    } else if ((sZoSwork[ZO_BSS_13] != 1) && (bossZO->timer_052 == 0)) {
        Math_SmoothStepToF(&sZoFwork[ZO_BSF_17 + arg1], 0.0f, 1.0f, 5.0f, 0.001f);
        Math_SmoothStepToF(&sZoFwork[ZO_BSF_3], -30.0f, 1.0f, 3.0f, 0.001f);
        if (sZoFwork[ZO_BSF_17 + arg1] == 0.0f) {
            func_E16C50_80199394(bossZO, arg1);
        }
    }
}

void func_E16C50_8019962C(Boss* bossZO, f32 arg1) {
    Math_SmoothStepToF(&sZoFwork[ZO_BSF_77], 2.0f, 0.1f, 0.5f, 0.0001f);
    Math_SmoothStepToAngle(&bossZO->obj.rot.y, arg1, 1.0f, sZoFwork[ZO_BSF_77], 0.0001f);
}

void func_E16C50_8019969C(Object_2F4* obj2F4) {
    s32 i;

    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0CE -= obj2F4->unk_0D6;
        if (obj2F4->unk_0CE <= 0) {
            obj2F4->unk_0CE = 0;
            for (i = 0; i < 5; i++) {
                func_80079618(((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.x,
                              ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.y,
                              ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.z, 1.0f);
            }
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 200.0f, 5.0f);
            obj2F4->unk_044 = 5;
            obj2F4->unk_0D4 = 2;
            obj2F4->obj.pos.z -= 100.0f;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
        }
        obj2F4->unk_0D0 = 0;
    }
    obj2F4->unk_114 += 10.0f;
    func_E16C50_8018FF50(obj2F4);
}

void func_E16C50_8019983C(Object_2F4* obj2F4) {
    RCP_SetupDL(&gMasterDisp, 70);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    Matrix_Scale(gGfxMatrix, 2.6f, 2.6f, 2.6f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6017950);
}

void func_E16C50_801998E0(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_374;
    obj8C->unk_4E = 1;
    obj8C->timer_50 = 30;
    obj8C->unk_44 = 192;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->obj.pos.x = xPos;
    obj8C->scale1 = obj8C->scale2 = 2.5f;
    func_8007D0E0(xPos, yPos + 30.0f, zPos, 7.0f);
    func_8007BFFC(obj8C->obj.pos.x, obj8C->obj.pos.y + 30.0f, obj8C->obj.pos.z, 0.0f, 0.0f, 0.0f, 4.0f, 5);
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_E16C50_801999CC(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_E16C50_801998E0(&gObjects8C[i], xPos, yPos, zPos);
            break;
        }
    }
}

void func_E16C50_80199A28(Object_2F4* obj2F4) {
    f32 sp3C;
    f32 sp38;
    s32 sp34;

    obj2F4->obj.rot.x += 5.0f;
    switch (obj2F4->unk_0B8) { /* irregular */
        case 0:
            if (obj2F4->unk_0CE == 0) {
                obj2F4->unk_050++;
                obj2F4->unk_0CE = 10;
                obj2F4->unk_054 = 1;
                obj2F4->unk_0B8 = 2;
                obj2F4->unk_114 = -50.0f;
            } else {
                obj2F4->vel.y = 60.0f;
                obj2F4->gravity = 1.0f;
                if (gBosses->obj.pos.y < 0.0f) {
                    obj2F4->obj.pos.y = -100.0f;
                }
                obj2F4->unk_0B8++;
            }
            break;
        case 1:
            if ((func_800A73E4(&sp3C, &sp34, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z) != 0) &&
                (obj2F4->unk_054 == 0)) {
                func_8008377C(obj2F4->obj.pos.x, sp3C, obj2F4->obj.pos.z, 0.0f, 0.5f);
                obj2F4->unk_054++;
                Audio_PlaySfx(0x19000020, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            Math_SmoothStepToF(&obj2F4->vel.y, -60.0f, 0.5f, 5.0f, 0.00001f);
            if (obj2F4->obj.pos.y < -30.0f) {
                obj2F4->unk_0B8++;
                obj2F4->vel.y = 0.0f;
                obj2F4->gravity = 0.0f;
                obj2F4->unk_114 = 0.0f;
            }
            break;
        case 2:
            obj2F4->gravity = 1.0f;
            if (func_800A73E4(&sp3C, &sp34, obj2F4->obj.pos.x, obj2F4->unk_114 + obj2F4->obj.pos.y,
                              obj2F4->obj.pos.z) != 0) {
                obj2F4->gravity = 0.0f;
                Math_SmoothStepToF(&obj2F4->unk_114, -50.0f, 0.1f, 2.0f, 0.001f);
                sp38 = 10.0f;
                if (Math_SmoothStepToF(&obj2F4->obj.pos.y, sp3C, 0.1f, 5.0f, 0) >= 0.0f) {
                    sp38 = 350.0f;
                }
                Math_SmoothStepToAngle(&obj2F4->obj.rot.z, sp38, 0.1f, 1.0f, 0);
            }
            if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
                obj2F4->unk_0D0 = 0;
                obj2F4->unk_044 = 2;
                func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 100.0f, obj2F4->obj.pos.z, 7.0f);
                obj2F4->unk_0D4 = 2;
                obj2F4->obj.pos.y += 200.0f;
                func_80066254(obj2F4);
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                func_8007A6F0(&obj2F4->obj.pos, 0x1903400F);
            } else {
                if ((fabsf(obj2F4->obj.pos.z - gPlayer->unk_138) < 800.0f) || (obj2F4->unk_0D0 != 0)) {
                    func_E16C50_801999CC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z);
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    func_8007A6F0(&obj2F4->obj.pos, 0x2903B009);
                }
            }
            break;
    }
    if ((obj2F4->timer_0BC == 0) && (obj2F4->unk_050 == 0)) {
        func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 100.0f, obj2F4->obj.pos.z, 7.0f);
        obj2F4->unk_044 = 2;
        obj2F4->unk_0D4 = 2;
        obj2F4->obj.pos.y += 200.0f;
        func_80066254(obj2F4);
        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
    }
}

void func_E16C50_80199E24(Object_2F4* obj2F4) {
    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_6025E60);
}

void func_E16C50_80199E9C(Object_2F4* obj2F4, f32 arg1, f32 arg2) {
    obj2F4->obj.pos.x = sZoFwork[ZO_BSF_60_X];
    Math_SmoothStepToF(&obj2F4->unk_114, arg1, 1.0f, arg2, 0.001f);
    obj2F4->obj.pos.y = sZoFwork[ZO_BSF_60_Y] + obj2F4[0].unk_114;
    obj2F4->obj.pos.z = sZoFwork[ZO_BSF_60_Z];
}

void func_E16C50_80199F10(Object_2F4* obj2F4) {
    if (sZoSwork[ZO_BSS_13] == 0) {
        obj2F4->unk_0B8 = 3;
        obj2F4->vel.y = -50.0f;
        obj2F4->obj.pos.x = sZoFwork[ZO_BSF_60_X];
        Math_SmoothStepToF(&obj2F4->unk_114, -500.0f, 1.0f, 100.0f, 0.00001f);
        obj2F4->obj.pos.z = sZoFwork[ZO_BSF_60_Z];
        if (obj2F4->obj.pos.y < -400.0f) {
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        }
    }
    switch (obj2F4->unk_0B8) { /* irregular */
        case 0:
            obj2F4->obj.rot.y += 2.0f;
            func_E16C50_80199E9C(obj2F4, 0.0f, 20.0f);
            switch (sZoSwork[ZO_BSS_16]) { /* switch 1; irregular */
                case 1:                    /* switch 1 */
                    obj2F4->unk_118 = sZoFwork[ZO_BSF_68_Y] - sZoFwork[ZO_BSF_60_Y];
                    Audio_PlaySfx(0x3100503E, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    obj2F4->unk_0B8++;
                    break;
                case 2: /* switch 1 */
                    obj2F4->unk_118 = sZoFwork[ZO_BSF_71_Y] - sZoFwork[ZO_BSF_60_Y];
                    Audio_PlaySfx(0x3100503E, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    obj2F4->unk_0B8++;
                    break;
            }
            break;
        case 1:
            if (gBosses->timer_052 != 0) {
                obj2F4->obj.rot.y += 2.0f;
                func_E16C50_80199E9C(obj2F4, obj2F4->unk_118, 20.0f);
            } else {
                switch (sZoSwork[ZO_BSS_16]) {
                    case 1: /* switch 2 */
                        obj2F4->unk_118 = sZoFwork[ZO_BSF_68_Y] - sZoFwork[ZO_BSF_60_Y];
                        func_E16C50_80199E9C(obj2F4, obj2F4->unk_118, 20.0f);
                        break;
                    case 2: /* switch 2 */
                        obj2F4->unk_118 = sZoFwork[ZO_BSF_71_Y] - sZoFwork[ZO_BSF_60_Y];
                        func_E16C50_80199E9C(obj2F4, obj2F4->unk_118, 20.0f);
                        break;
                    case 3: /* switch 2 */
                        obj2F4->obj.rot.y += 2.0f;
                        if (gBosses->timer_050 != 0) {
                            func_E16C50_80199E9C(obj2F4, 0.0f, 10.0f);
                        } else {
                            obj2F4->unk_0B8 = 0;
                            Audio_KillSfx(&obj2F4->sfxPos);
                        }
                        break;
                }
            }
            break;
    }
    if (obj2F4->unk_0D0 != 0) {
        if (obj2F4->unk_0D0 == 1) {
            Audio_PlaySfx(0x29121007, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        obj2F4->unk_0D0 = 0;
    }
}

void func_E16C50_8019A1FC(Object_2F4* obj2F4) {
    f32 var_fv0;
    s32 var_s0;
    s32 var_s1;

    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    GDL(D_601C590);
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    GCGM_BACK();
    if (((obj2F4->unk_0B8 == 1) && (gBosses->timer_052 != 0)) || (obj2F4->unk_0B8 == 0)) {
        Matrix_RotateY(gGfxMatrix, gFrameCount * M_DTOR, 1);
    }
    // var_s1 = 1;
    var_fv0 = sZoFwork[ZO_BSF_60_Y] + -1.0f * (*obj2F4).unk_114 - obj2F4->obj.pos.y;

    for (var_s1 = 1; var_fv0 >= 0.0f; var_s1++) {
        var_fv0 -= 117.0f;
    }
    if (var_s1 > 30) {
        var_s1 = 30;
    }
    if ((var_s1 <= 0) || ((*obj2F4).unk_114 == 0)) {
        var_s1 = 1;
    }
    for (var_s0 = 0; var_s0 < var_s1; var_s0++) {
        Matrix_Translate(gGfxMatrix, 0.0f, 30.0f, 0.0f, 1);
        Matrix_RotateY(gGfxMatrix, 1.5707964f, 1);
        Matrix_Push(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, 0.75f, 0.75f, 0.75f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        GDL(D_6018660);
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_E16C50_8019A4E0(Object_2F4* obj2F4, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    f32 sp4C = xPos - obj2F4->obj.pos.x;
    f32 sp48 = yPos - obj2F4->obj.pos.y;
    f32 sp44 = zPos - obj2F4->obj.pos.z;
    f32 sp40;
    f32 sp3C;
    Vec3f sp30;
    Vec3f sp24;

    sp3C = Math_Atan2F(sp4C, sp44);
    sp40 = -Math_Atan2F(sp48, sqrtf(SQ(sp4C) + SQ(sp44)));
    Matrix_RotateY(gCalcMatrix, sp3C, 0);
    Matrix_RotateX(gCalcMatrix, sp40, 1);
    sp30.x = 0.0f;
    sp30.y = 0.0f;
    sp30.z = arg4;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp30, &sp24);
    obj2F4->vel.x = sp24.x;
    obj2F4->vel.y = sp24.y;
    obj2F4->vel.z = sp24.z;
}

void func_E16C50_8019A5D4(Object_2F4* obj2F4) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s32 sp40;
    f32 var_fa0;
    f32 var_fv1;

    if ((gBosses[0].actionState == 6) || (gBosses[0].actionState == 7)) {
        Audio_KillSfx(&obj2F4->sfxPos);
        obj2F4->unk_0B8 = 10;
        obj2F4->vel.z = 40.0f;
    }
    obj2F4->unk_120 += 10.0f;
    obj2F4->unk_118 = 70.0f;
    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->obj.pos.x = sZoFwork[ZO_BSF_65_X];
            obj2F4->obj.pos.y = sZoFwork[ZO_BSF_65_Y];
            obj2F4->obj.pos.z = sZoFwork[ZO_BSF_65_Z];
            if ((sZoSwork[ZO_BSS_20] != 0) && (obj2F4->timer_0BC == 0)) {
                if ((sZoSwork[ZO_BSS_8] == 0) && (gBosses[0].actionState == 8)) {
                    var_fv1 = (Rand_ZeroOne() - 0.5f) * 3000.0f;
                    var_fa0 = 0.0f;
                } else {
                    var_fv1 = 0.0f;
                    var_fa0 = 100.0f;
                }
                func_E16C50_8019A4E0(obj2F4, gPlayer->pos.x + var_fv1, gPlayer->pos.y + var_fa0, gPlayer->pos.z, 80.0f);
                obj2F4->vel.z -= D_80177D08;
                func_E16C50_80193C5C(sZoFwork[ZO_BSF_65_X], sZoFwork[ZO_BSF_65_Y], sZoFwork[ZO_BSF_65_Z], 30.0f);
                func_E16C50_80193C5C(sZoFwork[ZO_BSF_65_X], sZoFwork[ZO_BSF_65_Y], sZoFwork[ZO_BSF_65_Z], 30.0f);
                func_E16C50_80193C5C(sZoFwork[ZO_BSF_65_X], sZoFwork[ZO_BSF_65_Y], sZoFwork[ZO_BSF_65_Z], 30.0f);

                obj2F4->timer_0BC = (s32) ((fabsf(sZoFwork[ZO_BSF_28] - -2600.0f) / 100.0f) + 30.0f);
                obj2F4->timer_0C0 = 3;
                Audio_PlaySfx(0x2900403D, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                obj2F4->unk_0B8++;
            }
            break;
        case 1:
            if (obj2F4->timer_0C0 != 0) {
                D_801779A8[0] = 40.0f;
            }
            obj2F4->unk_050 = 0;
            if (obj2F4->timer_0BC == 0) {
                obj2F4->vel.x = 0.0f;
                obj2F4->vel.z = -D_80177D08;
                obj2F4->gravity = 5.0f;
                obj2F4->unk_124.y = obj2F4->vel.y * -3.0f;
                if (obj2F4->obj.pos.y < -150.0f) {
                    obj2F4->gravity = 0.0f;
                    Audio_PlaySfx(0x19003021, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    obj2F4->unk_0B8++;
                }
            }
            break;
        case 2:
            if ((sZoSwork[ZO_BSS_8] == 0) && (gBosses[0].actionState == 8)) {
                obj2F4->unk_124.y = 0.0f;
                obj2F4->obj.pos.x = sZoFwork[ZO_BSF_65_X];
                obj2F4->obj.pos.y = sZoFwork[ZO_BSF_65_Y];
                obj2F4->obj.pos.z = sZoFwork[ZO_BSF_65_Z];
                sp48 = sp4C = 30.0f;
            } else {
                Math_SmoothStepToF(&obj2F4->unk_124.y, 0.0f, 1.0f, 30.0f, 0.0f);
                sp4C = fabsf(obj2F4->obj.pos.x - sZoFwork[ZO_BSF_65_X]);
                sp48 = fabsf(obj2F4->obj.pos.z - sZoFwork[ZO_BSF_65_Z]);
                var_fa0 = sqrtf(SQ(sp4C) + SQ(sp48)) * 0.5f;
                func_E16C50_8019A4E0(obj2F4, sZoFwork[ZO_BSF_65_X], sZoFwork[ZO_BSF_65_Y] - var_fa0,
                                     sZoFwork[ZO_BSF_65_Z], 30.0f);
                obj2F4->vel.z -= D_80177D08;
            }
            if (func_80062DBC(&obj2F4->obj.pos, gBosses[0].info.hitbox, &gBosses[0].obj, 0.0f, 0.0f, 0.0f) != 0) {
                obj2F4->unk_124.z = 50.0f;
                Audio_PlaySfx(0x19030003, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            obj2F4->vel.z += obj2F4->unk_124.z * 0.8f;
            obj2F4->vel.y += obj2F4->unk_124.z * 1.4f;
            obj2F4->unk_124.z -= 8.0f;
            if (obj2F4->unk_124.z < 0.0f) {
                obj2F4->unk_124.z = 0.0f;
            }
            if ((sp4C <= 30.0f) && (sp48 <= 30.0f)) {
                obj2F4->unk_0B8 = 0;
                Audio_KillSfx(&obj2F4->sfxPos);
                Audio_PlaySfx(0x29433022, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                obj2F4->timer_0BC = 40;
                sZoFwork[ZO_BSF_74] = sZoFwork[ZO_BSF_75] = 0.0f;
                sZoSwork[ZO_BSS_19] = 1;
                sZoSwork[ZO_BSS_20] = obj2F4->unk_050 = sZoSwork[ZO_BSS_20] = 0;
            }
            break;
    }
    func_E16C50_8018FF50(obj2F4);
    if (obj2F4->unk_0D0 != 0) {
        if (obj2F4->unk_0D0 == 1) {
            Audio_PlaySfx(0x29121007, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        obj2F4->unk_0D0 = 0;
    }
    if (!(gFrameCount & 7) && (obj2F4->unk_0B8 != 0) && (obj2F4->unk_050 < 8) &&
        (func_800A73E4(&sp44, &sp40, obj2F4->obj.pos.x, obj2F4->obj.pos.y - 100.0f, obj2F4->obj.pos.z) != 0)) {
        func_8008377C(obj2F4->obj.pos.x, sp44, obj2F4->obj.pos.z, 0.0f, 0.7f);
        obj2F4->unk_050++;
        if (obj2F4->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201A, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x19832019, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_E16C50_8019ACCC(Object_2F4* obj2F4) {
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_fs0_2;
    f32 temp_fs1_2;
    f32 temp_fs0_4;
    f32 var_fs5;
    s32 i;
    f32 sp94;
    s32 var_s4;

    var_fs5 = 90.0f;
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    GSGM_BACK();
    if ((gBosses[0].actionState != 6) && (gBosses[0].actionState != 7)) {
        RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
        GCGM_BACK();
        temp_fa0 = sZoFwork[ZO_BSF_65_X] - obj2F4->obj.pos.x;
        temp_fs0 = sZoFwork[ZO_BSF_65_Y] - obj2F4->obj.pos.y;
        temp_fa1 = sZoFwork[ZO_BSF_65_Z] - obj2F4->obj.pos.z;

        temp_fs3 = sqrtf(SQ(temp_fa0) + SQ(temp_fs0) + SQ(temp_fa1));
        temp_fs4 = Math_Atan2F(temp_fa0, temp_fa1);
        temp_fs0_2 = -Math_Atan2F(temp_fs0, sqrtf(SQ(temp_fa0) + SQ(temp_fa1)));
        var_s4 = temp_fs3 / 70.0f;
        if (var_s4 > 50) {
            var_s4 = 50;
        }
        if (var_s4 < 0) {
            var_s4 = 0;
        }
        Matrix_Translate(gGfxMatrix, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + D_80177D20, 1);
        Matrix_RotateY(gGfxMatrix, temp_fs4, 1);
        Matrix_RotateX(gGfxMatrix, temp_fs0_2, 1);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 0.0f, 1);
        sp94 = (180.0f / var_s4) + 1.0f;
        for (i = 0; i < var_s4; i++) {
            temp_fs1_2 = __sinf(i * sp94 * M_DTOR) * (*obj2F4).unk_124.y;
            temp_fs0_4 = __cosf(i * sp94 * M_DTOR) * (*obj2F4).unk_124.y * -0.25f;
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, obj2F4->unk_118, 1);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, 0.0f, temp_fs1_2, 0.0f, 1);
            Matrix_RotateX(gGfxMatrix, M_DTOR * temp_fs0_4, 1);
            Matrix_Push(&gGfxMatrix);
            Matrix_RotateZ(gGfxMatrix, M_DTOR * var_fs5, 1);
            Matrix_RotateX(gGfxMatrix, 1.5707964f, 1);
            Matrix_Scale(gGfxMatrix, 1.5f, 1.5f, 1.5f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_6018660);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Pop(&gGfxMatrix);
            var_fs5 += 90.0f;
        }
    }
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + D_80177D20, 1);
    Matrix_RotateY(gGfxMatrix, obj2F4->obj.rot.y * M_DTOR, 1);
    Matrix_RotateX(gGfxMatrix, obj2F4->obj.rot.x * M_DTOR, 1);
    Matrix_Scale(gGfxMatrix, 2.6f, 2.6f, 2.6f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL(&gMasterDisp, 70);
    GPC(255, 255, 255, 255);
    GDL(D_6004380);
    Matrix_RotateY(gGfxMatrix, sZoFwork[ZO_BSF_19] * M_DTOR, 1);
    Matrix_RotateX(gGfxMatrix, obj2F4->unk_11C * M_DTOR, 1);
    Matrix_RotateZ(gGfxMatrix, obj2F4->unk_120 * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_55();
    GDL(D_601BCC0);
}

Vec3f D_E16C50_801BF744[3] = {
    { 0.0f, 50.0f, -200.0f },
    { 0.0f, 50.0f, 200.0f },
    { 0.0f, 50.0f, 600.0f },
};
Vec3f D_E16C50_801BF768[3] = {
    { 0.0f, 300.0f, 0.0f },
    { 0.0f, 300.0f, -200.0f },
    { 0.0f, 300.0f, 300.0f },
};
s32 D_E16C50_801BF78C[30] = {
    0, 7, 7, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 4, 7, 0, 0, 0, 0, 327, 324, 0, 322, 327, 0, 324, 324, 0, 336, 0,
};
f32 D_E16C50_801BF804[8] = { 0.0f, 0.0f, 270.0f, 90.0f, 0.0f, 180.0f, 400.0f, 400.0f };

void func_E16C50_8019B1F0(Object_2F4* obj2F4) {
    s32 temp_v1;
    s32 var_s3;
    s32 i;
    s32 var_s6;
    Vec3f sp84;
    Vec3f sp78;
    Vec3f sp6C;

    obj2F4->obj.pos.y = 120.0f;
    obj2F4->scale = -1.0f;
    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
    sp78.x = sp78.y = 0.0f;
    sp78.z = obj2F4->obj.rot.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    obj2F4->vel.x = sp6C.x;
    obj2F4->vel.z = sp6C.z;
    obj2F4->obj.rot.z = 0.0f;

    var_s3 = 1;
    if (obj2F4->obj.rot.x >= 100.0f) {
        obj2F4->unk_0B8 = 1;
        obj2F4->unk_05C = obj2F4->obj.rot.x / 100.0f;
        obj2F4->obj.rot.x = (s32) fabsf(Math_ModF(obj2F4->obj.rot.x, 100.0f));
    }

    for (i = 0, var_s6 = 0; var_s3 < 3 && i < 60; i++) {
        if (gObjects2F4[i].obj.status == 0) {
            if (obj2F4->unk_0B8 == 0) {
                Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF744[var_s3], &sp84);
            } else {
                Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF768[var_s3], &sp84);
            }
            Object_2F4_Initialize(&gObjects2F4[i]);
            gObjects2F4[i].obj.status = 1;
            if (obj2F4->unk_0B8 == 0) {
                gObjects2F4[i].obj.id = OBJ_2F4_251;
                gObjects2F4[i].unk_05C = 777;
            } else {
                gObjects2F4[i].obj.id = OBJ_2F4_253;
            }
            gObjects2F4[i].obj.pos.x = obj2F4->obj.pos.x + sp84.x;
            gObjects2F4[i].obj.pos.y = obj2F4->obj.pos.y + sp84.y;
            gObjects2F4[i].obj.pos.z = obj2F4->obj.pos.z + sp84.z;
            ((s32*) &obj2F4->unk_06C)[var_s3] = (s32) (obj2F4->obj.rot.x * 3.0f) + var_s3;
            gObjects2F4[i].obj.rot.y = obj2F4->obj.rot.y;
            gObjects2F4[i].unk_050 = D_E16C50_801BF78C[((s32*) &obj2F4->unk_06C)[var_s3]];
            gObjects2F4[i].unk_054 = obj2F4->index;
            gObjects2F4[i].unk_058 = var_s3;
            Object_SetInfo(&gObjects2F4[i].info, gObjects2F4[i].obj.id);
            if (obj2F4->unk_0B8 != 0) {
                gObjects2F4[i].unk_0B8 = 3;
                if (D_E16C50_801BF804[obj2F4->unk_05C] >= 361.0f) {
                    gObjects2F4[i].obj.rot.x = obj2F4->obj.rot.y;
                } else {
                    temp_v1 = (obj2F4->unk_05C * 2) + var_s6;
                    gObjects2F4[i].obj.rot.x = D_E16C50_801BF804[temp_v1];
                }
                var_s6++;
            }
            ((s32*) &obj2F4->unk_050)[var_s3] = i;
            var_s3++;
        }
    }
    obj2F4->obj.rot.x = 0.0f;
    Audio_PlaySfx(0x3100203A, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8019B548(Object_2F4* obj2F4) {
    f32 sp6C;
    s32 sp68;
    s32 i;
    Vec3f sp58;
    Object_2F4* temp_s0;

    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
    switch (obj2F4->unk_0B8) {
        case 0:
            for (i = 1; i < 3; i++) {
                temp_s0 = &gObjects2F4[((s32*) &obj2F4->unk_050)[i]];
                if ((temp_s0->obj.status != 0) && (temp_s0->unk_054 == obj2F4->index) &&
                    (temp_s0->obj.id == OBJ_2F4_251)) {
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF744[i], &sp58);
                    temp_s0->obj.pos.x = obj2F4->obj.pos.x + sp58.x;
                    temp_s0->obj.pos.y = obj2F4->obj.pos.y + sp58.y;
                    temp_s0->obj.pos.z = obj2F4->obj.pos.z + sp58.z;
                }
            }
            break;
        case 1:
            for (i = 1; i < 3; i++) {
                temp_s0 = &gObjects2F4[((s32*) &obj2F4->unk_050)[i]];
                if ((temp_s0->obj.status != 0) && (temp_s0->obj.id == OBJ_2F4_253) &&
                    (temp_s0->unk_054 == obj2F4->index)) {
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF768[i], &sp58);
                    temp_s0->obj.pos.x = obj2F4->obj.pos.x + sp58.x;
                    temp_s0->obj.pos.y = obj2F4->obj.pos.y + sp58.y;
                    temp_s0->obj.pos.z = obj2F4->obj.pos.z + sp58.z;
                }
            }
            break;
    }
    if ((fabsf(obj2F4->obj.pos.z - gPlayer->unk_138) < 1000.0f) &&
        func_800A73E4(&sp6C, &sp68, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z)) {
        Math_SmoothStepToF(&obj2F4->obj.pos.y, sp6C, 0.1f, 4.0f, 0.0f);
    }
}

void func_E16C50_8019B7DC(Object_2F4* obj2F4) {
    GDL(D_6006360);
}

void func_E16C50_8019B810(Object_2F4* obj2F4) {
    if (obj2F4->unk_05C == 0) {
        obj2F4->unk_050 = obj2F4->obj.rot.z / 10.0f;
        obj2F4->obj.rot.z = 0.0f;
    }
    obj2F4->unk_0CE = 30;
}

s32 D_E16C50_801BF824[10] = { 1, 5, 9, 14, 15, 16, 17, 0, 13, 1000 };
Vec3f D_E16C50_801BF84C[6] = {
    { 5.0f, -10.0f, 0.0f },  { 10.0f, 0.0f, 0.0f },  { 5.0f, 10.0f, 0.0f },
    { -5.0f, -10.0f, 0.0f }, { -10.0f, 0.0f, 0.0f }, { -5.0f, 10.0f, 0.0f },
};

void func_E16C50_8019B854(Object_2F4* obj2F4) {
    s32 i;
    s32 j;
    Vec3f spB4;
    Vec3f spA8 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp9C;

    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0D0 = 0;
        obj2F4->timer_0C6 = 15;
        obj2F4->unk_0CE -= obj2F4->unk_0D6;
        Audio_PlaySfx(0x2903300E, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    switch (obj2F4->unk_0B8) {
        case 0:
            if (obj2F4->unk_0CE <= 0) {
                obj2F4->unk_0CE = 0;
                obj2F4->unk_0B8++;
            }
            break;
        case 1:
            for (i = 0; i < 6; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[6 + i], (Rand_ZeroOne() - 0.5f) * 50.0f,
                                     (Rand_ZeroOne() * 10.0f) + 20.0f, (Rand_ZeroOne() - 0.5f) * 50.0f, 39,
                                     obj2F4->scale, (Rand_ZeroOne() * 15.0f) + (obj2F4->scale * 10.0f), i);
            }
            for (i = 0; i < 10; i++) {
                func_80079618(((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.x,
                              ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.y,
                              ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.z, 2.0f);
            }
            for (i = 0; i < 3; i++) {
                func_8007D0E0(obj2F4->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 50.0f),
                              obj2F4->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 50.0f) + 20.0f,
                              obj2F4->obj.pos.z + ((Rand_ZeroOne() - 0.5f) * 30.0f), 10.0f + 2 * i);
            }
            obj2F4->obj.pos.y += 100.0f;
            if (D_E16C50_801BF824[obj2F4->unk_050] < 1000) {
                obj2F4->unk_044 = D_E16C50_801BF824[obj2F4->unk_050];
                func_80066254(obj2F4);
            } else {
                if (D_E16C50_801BF824[obj2F4->unk_050] == 1000) {
                    for (i = 0, j = 0; i < 10; i++, j++) {
                        if (j > 5) {
                            j = 0;
                        }
                        spB4.x = D_E16C50_801BF84C[j].x + obj2F4->obj.pos.x;
                        spB4.y = D_E16C50_801BF84C[j].y + obj2F4->obj.pos.y;
                        spB4.z = D_E16C50_801BF84C[j].z + obj2F4->obj.pos.z;
                        sp9C.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
                        sp9C.y = (Rand_ZeroOne() - 0.5f) * 10.0f;
                        sp9C.z = 50.0f;
                        func_8007EE68(353, &spB4, &spA8, &spA8, &sp9C, 1.0f);
                    }
                }
                obj2F4->unk_044 = 0;
                func_80066254(obj2F4);
            }
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007A6F0(&obj2F4->obj.pos, 0x1903901C);
            break;
    }
}

void func_E16C50_8019BC78(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = { 0.0f, 0.0f, 0.0f };
    Object_2F4* this = thisx;

    if (this->unk_0B8 != 0) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[6]);
                break;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[7]);
                break;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[8]);
                break;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[9]);
                break;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[10]);
                break;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[11]);
                break;
        }
    }
}

void func_E16C50_8019BDE0(Object_2F4* obj2F4) {
    Vec3f sp28[20];

    Animation_GetFrameData(&D_6018550, 0, sp28);
    Animation_DrawSkeleton(3, D_601863C, sp28, NULL, func_E16C50_8019BC78, obj2F4, gCalcMatrix);
}

void func_E16C50_8019BE48(Object_2F4* obj2F4) {
    Object_2F4* pad;
    f32 sp40;
    f32 sp3C;
    s32 sp38;
    s32 i;
    Object_2F4* var_s0;

    switch (obj2F4->unk_0B8) { /* irregular */
        case 0:
            for (i = 0, var_s0 = gObjects2F4; i < 60; i++, var_s0++) {
                if (var_s0->obj.status == 0) {
                    Object_2F4_Initialize(var_s0);
                    var_s0->obj.status = 1;
                    var_s0->obj.id = OBJ_2F4_254;
                    var_s0->obj.pos.x = obj2F4->obj.pos.x;
                    var_s0->obj.pos.y = obj2F4->obj.pos.y;
                    var_s0->obj.pos.z = obj2F4->obj.pos.z + 30.0f;
                    var_s0->unk_114 = 230.0f;
                    var_s0->unk_118 = 0.8f;
                    var_s0->unk_11C = 1.0f;
                    var_s0->unk_120 = 1.0f;
                    var_s0->unk_050 = obj2F4->index + 1;
                    Object_SetInfo(&var_s0->info, var_s0->obj.id);
                    obj2F4->unk_050 = i;
                    break;
                }
            }
            if (i >= 60) {
                var_s0->obj.status = 0;
            }
            obj2F4->unk_0CE = 10;
            obj2F4->unk_0B8++;
            break;
        case 1:
            if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
                obj2F4->unk_0D0 = 0;
                obj2F4->timer_0C6 = 15;
                obj2F4->unk_0CE -= obj2F4->unk_0D6;
                if (obj2F4->unk_0CE <= 0) {
                    if (D_80161684 == 0) {
                        func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 200.0f, 2);
                        gHitCount += 2;
                        if (obj2F4->unk_0D0 && obj2F4->unk_0D0) {}
                    }
                    obj2F4->unk_0CE = obj2F4->unk_044 = 0;
                    func_80066254(obj2F4);
                    obj2F4->unk_0B8++;
                }
            }
            break;
        case 2:
            obj2F4->timer_0C2 = 30000;
            var_s0 = &gObjects2F4[obj2F4->unk_050];

            var_s0->unk_050 = 777;
            func_8008377C(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 5.0f, 0.7f);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 50.0f, obj2F4->obj.pos.z, 5.0f);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007A6F0(&obj2F4->obj.pos, 0x29038033);
            break;
    }
    if ((obj2F4->unk_0B8 < 2) &&
        (func_800A73E4(&sp40, &sp38, obj2F4->obj.pos.x, obj2F4->obj.pos.y - 60.0f, obj2F4->obj.pos.z) != 0)) {
        obj2F4->gravity = 0.0f;
        sp3C = 10.0f;
        if (Math_SmoothStepToF(&obj2F4->obj.pos.y, sp40 - 20.0f, 0.1f, 5.0f, 0) >= 0.0f) {
            sp3C = 350.0f;
        }
        Math_SmoothStepToAngle(&obj2F4->obj.rot.z, sp3C, 0.1f, 1.0f, 0);
        var_s0 = &gObjects2F4[(*obj2F4).unk_050];
        Math_SmoothStepToAngle(&var_s0->obj.rot.z, sp3C, 0.1f, 1.0f, 0);
        var_s0->obj.pos.y = obj2F4->obj.pos.y;
    }
}

void func_E16C50_8019C1CC(Object_2F4* obj2F4) {
    GDL(D_6002E10);
}

Vec3f D_E16C50_801BF8AC = { 230.0f, -50.0f, 0.0f };
Vec3f D_E16C50_801BF8B8 = { 230.0f, -250.0f, 0.0f };

void func_E16C50_8019C200(Object_2F4* obj2F4) {
    s32 i;
    s32 sp38;
    Vec3f sp2C;
    Object_2F4* var_a2;

    obj2F4->scale = -1.0f;
    if (obj2F4->unk_0B8 != 3) {
        obj2F4->unk_060 = fabsf(Math_ModF(obj2F4->obj.rot.z, 10.0f));
        sp38 = fabsf(obj2F4->obj.rot.z / 10.0f);
    } else {
        sp38 = obj2F4->unk_050;
        obj2F4->unk_0B8 = 0;
    }
    obj2F4->unk_124.y = obj2F4->obj.rot.x;
    obj2F4->obj.rot.x = 0.0f;
    obj2F4->obj.rot.z = 0.0f;
    if (obj2F4->unk_060 == 2) {
        obj2F4->unk_114 = -20.0f;
        obj2F4->unk_120 = obj2F4->obj.pos.y * 0.5f * -1.0f;
    } else {
        obj2F4->unk_114 = 30.0f;
    }
    Matrix_RotateZ(gCalcMatrix, obj2F4->unk_114 * M_DTOR, 0);
    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8AC, &sp2C);
    obj2F4->unk_118 = sp2C.x;
    obj2F4->unk_11C = obj2F4->unk_120 + sp2C.y;
    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8B8, &sp2C);
    for (i = 0, var_a2 = gObjects2F4; i < 60; i++, var_a2++) {
        if (var_a2->obj.status == 0) {
            Object_2F4_Initialize(var_a2);
            var_a2->obj.status = 1;
            var_a2->obj.id = OBJ_2F4_251;
            var_a2->obj.pos.x = obj2F4->obj.pos.x + sp2C.x;
            var_a2->obj.pos.y = obj2F4->obj.pos.y + sp2C.y + (*obj2F4).unk_11C;
            var_a2->obj.pos.z = obj2F4->obj.pos.z + sp2C.z + (*obj2F4).unk_114;
            var_a2->obj.rot.y = obj2F4->obj.rot.y;
            var_a2->unk_050 = sp38;
            var_a2->unk_05C = 777;
            Object_SetInfo(&var_a2->info, var_a2->obj.id);
            obj2F4->unk_05C = i;
            break;
        }
    }
    if (i >= 60) {
        var_a2->obj.status = 0;
    }
}

void func_E16C50_8019C454(Object_2F4* obj2F4) {
    Vec3f sp34;
    Object_2F4* sp30;

    if ((obj2F4->unk_114 == 30.0f) && (fabsf(obj2F4->obj.pos.z - gPlayer->unk_138) < 2500.0f)) {
        Math_SmoothStepToAngle(&obj2F4->unk_124.z, 10.0f, 0.1f, 1.0f, 0.01f);
        Math_SmoothStepToAngle(&obj2F4->obj.rot.y, obj2F4->unk_124.y, 1.0f, obj2F4->unk_124.z, 0.01f);
        if (obj2F4->unk_124.y != obj2F4->obj.rot.y) {
            Audio_PlaySfx(0x1900001B, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (1) {}
    }
    Matrix_RotateZ(gCalcMatrix, obj2F4->unk_114 * M_DTOR, 0);
    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8AC, &sp34);
    obj2F4->unk_118 = sp34.x;
    obj2F4->unk_11C = obj2F4->unk_120 + sp34.y;
    sp30 = &gObjects2F4[obj2F4->unk_05C];
    switch (obj2F4->unk_0B8) {
        case 0:
            Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * M_DTOR, 0);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8B8, &sp34);
            if ((sp30->obj.status != 0) && (sp30->obj.id == OBJ_2F4_251)) {
                sp30->obj.pos.x = obj2F4->obj.pos.x + sp34.x;
                sp30->obj.pos.y = obj2F4->obj.pos.y + sp34.y + (*obj2F4).unk_11C;
                sp30->obj.pos.z = obj2F4->obj.pos.z + sp34.z;
            } else {
                obj2F4->unk_0B8 = 1;
            }
            switch (obj2F4->unk_060) {
                case 1:
                    if ((obj2F4->unk_124.y == obj2F4->obj.rot.y) &&
                        (fabsf(obj2F4->obj.pos.z - gPlayer->unk_138) < 1000.0f)) {
                        if (sp30->obj.id == OBJ_2F4_251) {
                            sp30->gravity = 1.0f;
                        }
                        obj2F4->unk_0B8 = 1;
                    }
                    break;
                case 2:
                    Math_SmoothStepToF(&obj2F4->unk_120, 0.0f, 1.0f, 5.0f, 0.01f);
                    if (obj2F4->unk_120 == 0.0f) {
                        Math_SmoothStepToF(&obj2F4->unk_114, 30.0f, 1.0f, 5.0f, 0.01f);
                        if (obj2F4->unk_114 == 30.0f) {
                            obj2F4->unk_060 = 0;
                        }
                    }
                    break;
            }
            break;
        case 1:
            obj2F4->unk_124.x += 10.0f;
            obj2F4->unk_124.x = Math_ModF(obj2F4->unk_124.x, 360.0f);
            break;
    }
    if (obj2F4->unk_114 >= 30.0f) {
        obj2F4->unk_114 = 30.0f;
    }
    if (obj2F4->unk_114 <= -20.0f) {
        obj2F4->unk_114 = -20.0f;
    }
    if (obj2F4->unk_120 >= 0) {
        obj2F4->unk_120 = 0.0f;
    }
    if (obj2F4->unk_120 <= -450.0f) {
        obj2F4->unk_120 = -450.0f;
    }
}

void func_E16C50_8019C83C(Object_2F4* obj2F4) {
    f32 var_fv1;
    s32 i;
    s32 var_s1;

    Matrix_Push(&gGfxMatrix);
    Matrix_RotateZ(gGfxMatrix, obj2F4->unk_114 * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_601A340);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, -320.0f, 0.0f, 1);
    Matrix_Scale(gGfxMatrix, 1.0f, 1.3, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_6013330);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_RotateZ(gGfxMatrix, 1.5707964f, 1);
    Matrix_Translate(gGfxMatrix, -110.0f, 0.0f, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_601D680);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, obj2F4->unk_118, obj2F4->unk_11C, 0.0f, 1);
    Matrix_RotateY(gGfxMatrix, obj2F4->unk_124.x * M_DTOR, 1);
    Matrix_Scale(gGfxMatrix, 0.75f, 0.75f, 0.75f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_601C590);
    RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    Matrix_RotateY(gGfxMatrix, gFrameCount * M_DTOR, 1);

    var_fv1 = (fabsf(obj2F4->unk_120) * 1.3f) + 50.0f;
    for (var_s1 = 0; var_fv1 > 0.0f; var_s1++) {
        var_fv1 -= 9.3f;
    }

    if (var_s1 > 50) {
        var_s1 = 50;
    }
    if (var_s1 <= 0) {
        var_s1 = 1;
    }
    for (i = 0; i < var_s1; i++) {
        Matrix_Translate(gGfxMatrix, 0.0f, 9.3f, 0.0f, 1);
        Matrix_RotateY(gGfxMatrix, 1.5707964f, 1);
        Matrix_Push(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        GDL(D_6018660);
        Matrix_Pop(&gGfxMatrix);
    }
}

f32 D_E16C50_801BF8C4[2] = { 46.0f, 314.0f };
f32 D_E16C50_801BF8CC[2] = { 23.0f, 337.0f };

void func_E16C50_8019CBEC(Object_2F4* obj2F4) {
    obj2F4->timer_0C2 = 30000;
    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_124.y = D_E16C50_801BF8CC[gFrameCount & 1];
            if (D_80161684 != 0) {
                obj2F4->unk_124.y = D_E16C50_801BF8C4[gFrameCount & 1];
                obj2F4->unk_054 = 1;
            }
            obj2F4->unk_0B8++;
            break;
        case 1:
            Math_SmoothStepToF(&obj2F4->unk_124.z, 10.0f, 0.1f, 1.0f, 0.001f);
            if (obj2F4->unk_050 == 0) {
                Math_SmoothStepToAngle(&obj2F4->obj.rot.z, obj2F4->unk_124.y, 0.1f, obj2F4->unk_124.z, 0.0001f);
            } else {
                Math_SmoothStepToAngle(&obj2F4->unk_124.x, obj2F4->unk_124.y, 0.1f, obj2F4->unk_124.z, 0.0001f);
            }
            if ((D_80161684 != 0) && (obj2F4->unk_054 == 0)) {
                if (obj2F4->unk_124.y < 300.0f) {
                    obj2F4->unk_124.y = D_E16C50_801BF8C4[0];
                } else {
                    obj2F4->unk_124.y = D_E16C50_801BF8C4[1];
                }
                obj2F4->unk_054 = 1;
            }
            if (obj2F4->timer_0BC == 0) {
                obj2F4->timer_0BC = 45;
                obj2F4->unk_124.y = 360.0f - obj2F4->unk_124.y;
                obj2F4->unk_124.z = 0.0f;
            }
            if (obj2F4->unk_050 == 777) {
                obj2F4->unk_0B8++;
            }
            break;
        case 2:
            Math_SmoothStepToF(&obj2F4->unk_118, 0.0f, 0.2f, 1.0f, 0.01f);
            if (obj2F4->unk_118 < 0.6f) {
                Math_SmoothStepToF(&obj2F4->unk_11C, 0.0f, 0.5f, 5.0f, 0.01f);
                if (obj2F4->unk_11C == 0.0f) {
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                }
            }
            break;
    }
    func_E16C50_8018FF50(obj2F4);
    obj2F4->obj.rot.x = 0.0f;
}

void func_E16C50_8019CE58(Object_2F4* obj2F4) {
    Gfx* temp_v0;
    Gfx* temp_v0_2;
    Gfx* temp_v0_3;
    Gfx* temp_v0_4;
    Gfx* temp_v0_5;
    Gfx* temp_v0_6;
    Gfx* temp_v0_7;
    Gfx* temp_v0_8;
    Gfx* temp_v0_9;

    RCP_SetupDL(&gMasterDisp, 72);
    if (obj2F4->unk_050 != 0) {
        Matrix_Translate(gGfxMatrix, 0.0f, obj2F4->unk_114, 0.0f, 1);
        Matrix_RotateZ(gGfxMatrix, (obj2F4->unk_124.x + obj2F4->obj.rot.z) * M_DTOR, 1);
        Matrix_Scale(gGfxMatrix, obj2F4->unk_118, obj2F4->unk_11C, obj2F4->unk_120, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        if (D_80161684 != 0) {
            GPC(255, 191, 43, 255);
            GEC(255, 0, 0, 255);
        } else {
            GPC(255, 255, 255, 255);
            GEC(255, 255, 127, 255);
        }
    } else if (D_80161684 != 0) {
        GPC(255, 191, 43, 50);
        GEC(255, 0, 0, 255);
    } else {
        GPC(255, 255, 255, 50);
        GEC(255, 255, 127, 255);
    }
    GDL(D_60181E0);
}

#ifdef NON_MATCHING
void func_E16C50_8019D060(Object_2F4* obj2F4) {
    s32 i;
    Object_2F4* sp18;

    for (i = 0, sp18 = gObjects2F4; i < 60; i++, sp18++) {
        if (sp18->obj.status == 0) {
            Object_2F4_Initialize(sp18);
            sp18->obj.status = 2;
            sp18->obj.id = OBJ_2F4_247;
            sp18->obj.pos.x = obj2F4->obj.pos.x;
            sp18->obj.pos.y = obj2F4->obj.pos.y - 60.0f;
            sp18->unk_11C = sp18->obj.pos.y;
            sp18->obj.pos.z = obj2F4->obj.pos.z;

            sp18->unk_0B8 = 1;

            obj2F4->unk_046 = i + 1;
            Object_SetInfo(&sp18->info, sp18->obj.id);
            sp18->info.hitbox = SEGMENTED_TO_VIRTUAL(D_602C028);
            break;
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019D060.s")
#endif

void func_E16C50_8019D15C(Object_2F4* obj2F4) {
    Object_2F4* temp_v0;

    if (obj2F4->unk_0B8 == 0) {
        if (obj2F4->unk_0D0 != 0) {
            obj2F4->unk_0D0 = 0;
            if (obj2F4->unk_0D2 < 2) {
                Audio_PlaySfx(0x1903001E, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                if ((obj2F4->obj.pos.y + 268.0f) < obj2F4->unk_0D8.y) {
                    obj2F4->unk_118 = 20.0f;
                } else {
                    obj2F4->unk_118 = -20.0f;
                }
                Audio_PlaySfx(0x1903001F, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                Audio_PlaySfx(0x29121007, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        if (obj2F4->unk_046 != 0) {
            temp_v0 = &gObjects2F4[obj2F4->unk_046 - 1];
            temp_v0->obj.pos.y += obj2F4->unk_118 * 0.3f;
            if (temp_v0->obj.pos.y > obj2F4->unk_11C + 370.0f) {
                temp_v0->obj.pos.y = obj2F4->unk_11C + 370.0f;
            }
        }
        obj2F4->unk_114 += obj2F4->unk_118;
        Math_SmoothStepToF(&obj2F4->unk_118, 0.0f, 1.0f, 1.0f, 0.0f);
        if (obj2F4->unk_118 == 0.0f) {
            Audio_KillSfx(&obj2F4->sfxPos);
        }
    }
}

s32 func_E16C50_8019D340(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    Object_2F4* this = thisx;

    switch (this->unk_0B8) {
        case 0:
            if (limbIndex == 1) {
                pos->y -= 60.0f;
                rot->z -= this->unk_114;
            }
            if (limbIndex == 3) {
                *dList = NULL;
            }
            break;
        case 1:
            if (limbIndex != 3) {
                *dList = NULL;
            }
            break;
    }
    return false;
}

void func_E16C50_8019D3C4(Object_2F4* obj2F4) {
    Vec3f sp28[10];

    Animation_GetFrameData(&D_601FBC4, 0, sp28);
    Animation_DrawSkeleton(1, D_601FC90, sp28, func_E16C50_8019D340, NULL, obj2F4, &gIdentityMatrix);
}

void func_E16C50_8019D428(Player* player) {
    s32 sp2C;

    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.5f;
    player->unk_0F4 += 3.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR) * 1.5f;
    switch (player->unk_1D0) { /* irregular */
        case 0:
            D_80177A80 = 0;
            player->pos.z += 10000.0f;
            player->camEye.x = D_80177978 = player->pos.x;
            player->camEye.y = D_80177980 = (player->pos.y * player->unk_148) + 50.0f;
            player->camEye.z = D_80177988 = 400.0f;
            player->camAt.x = D_801779A0 = player->pos.x;
            player->camAt.y = D_801779B8 = (player->pos.y * player->unk_148) + 20.0f - 230.0f;
            player->camAt.z = D_801779C0 = 0.0f;
            player->unk_1D0 = 1;
            /* fallthrough */
        case 1:
            Math_SmoothStepToF(&player->pos.z, 0.0f, 0.1f, 48.0f, 0);
            Math_SmoothStepToF(&player->camAt.y, (player->pos.y * player->unk_148) + 20.0f, 0.1f, 1.0f, 0.0f);
            if (D_80177A80 >= 230) {
                Math_SmoothStepToF(&player->camAt.z, player->unk_138, 0.2f, 20000.0f, 0.0f);
            }
            sp2C = gControllerHold[gMainController].button;
            gControllerHold[gMainController].button = gBoostButton[gMainController];
            player->timer_1F8 = 60;
            player->unk_2BC = 1.0f;
            func_800B2574(player);
            if (D_80177A80 > 195) {
                D_801779A8[0] = 50.0f;
            } else {
                D_801779A8[0] = 0.0f;
            }
            gControllerHold[gMainController].button = sp2C;
            if (D_80177A80 >= 270) {
                func_8001D444(0, 0x8006, 0, 255);
                D_80177838 = 80;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_1D0 = 0;
                player->timer_1F8 = 0;
                player->timer_1FC = 0;
                D_80178488 = 1;
            }
            break;
    }
    D_80177CE8 += 40.0f;
}

#ifdef NON_MATCHING
// more use of temps and chain assigns
void func_E16C50_8019D76C(Player* player) {
    f32 pad[4];
    s32 i;
    Vec3f sp58;
    Vec3f sp4C;
    Object_2F4* var_a0;
    f32 temp_fa0;
    f32 temp_ft5;
    f32 pa2[2];

    switch (player->unk_1D0) {
        case 0:
        case 10:
            D_80177A80 = 0;
            player->unk_4D8 = 0.0f;
            player->unk_034 = 0.0f;
            player->unk_0D0 = 40.0f;
            player->unk_110 = 0.0f;
            player->unk_12C = 0.0f;
            player->unk_234 = 1;
            player->wings.unk_04 = 0.0f;
            player->wings.unk_0C = 0.0f;
            player->wings.unk_08 = 0.0f;
            player->wings.unk_10 = 0.0f;
            player->unk_130 = 0.0f;
            D_80177978 = player->camEye.x;
            D_80177980 = player->camEye.y;
            D_80177988 = player->camEye.z;
            D_801779A0 = player->camAt.x;
            D_801779B8 = player->camAt.y;
            D_801779C0 = player->camAt.z;
            for (i = 10; i < 60; i++) {
                if (gObjects2F4[i].unk_0B6 == 0) {
                    Object_Kill(&gObjects2F4[i].obj, &gObjects2F4[i].sfxPos);
                }
            }
            Object_Kill(&gObjects2F4[2].obj, &gObjects2F4[2].sfxPos);
            Object_Kill(&gObjects2F4[3].obj, &gObjects2F4[3].sfxPos);
            Object_Kill(&gObjects2F4[4].obj, &gObjects2F4[4].sfxPos);
            player->unk_1D0 = 1;
            D_80177A48[0] = 0.05f;
            if (Rand_ZeroOne() > 0.5f) {
                D_80177A48[9] = -1.0f;
            } else {
                D_80177A48[9] = 1.0f;
            }
            break;
        case 1:
            D_80177CE8 += 30.0f;
            Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
            Math_SmoothStepToF(&player->pos.y, 200.0f, 0.05f, 10.0f, 0.0f);
            Math_SmoothStepToF(&D_80177980, 250.0f, 1.0f, 20.0f, 0.0f);
            Math_SmoothStepToF(&D_801779B8, 240.0f, 1.0f, 20.0f, 0.0f);
            temp_ft5 = Math_RadToDeg(
                -Math_Atan2F(player->pos.x - gBosses[0].obj.pos.x, (player->pos.z - gBosses[0].obj.pos.z) * 0.05f));
            temp_fa0 = Math_SmoothStepToAngle(&player->unk_0E8, temp_ft5, 0.5f, 2.0f, 0.0001f) * 30.0f;
            if (D_80177A80 >= 14) {
                Math_SmoothStepToAngle(&player->unk_0EC, temp_fa0, 0.1f, 5.0f, 0.0001f);
            } else if (temp_fa0 < 0.0f) {
                player->unk_0EC -= 30.0f;
            } else {
                player->unk_0EC += 30.0f;
            }
            if (D_80177A80 >= 140) {
                D_80178358 = 255;
                D_80178348 = D_80178350 = D_80178354 = 255;
            }
            if (D_80177A80 == 160) {
                player->unk_1D0++;
                func_800A6148();
                func_8001CA24(0);
                Audio_KillSfx(&player->unk_460);
                D_80178340 = 250;
                player->timer_1F8 = 20;
                player->wings.unk_2C = 1;
                player->unk_0D0 = 0.0f;
                player->unk_0E4 = 0.0f;
                player->unk_0E8 = 0.0f;
                player->unk_0EC = 0.0f;
            }
            break;
        case 2: /* switch 1 */
            D_80177CE8 += 60.0f;
            if (player->timer_1F8 == 0) {
                player->pos.x = 0.0f;
                player->pos.y = 200.0f;
                player->pos.z = -(D_80177D20 + 1500.0f);
                player->unk_1D0++;
                func_8001C8B8(0);
                func_8001D444(0, 38, 0, 255);
                D_80177A98 = 1;
                func_800A6148();
                func_E16C50_801A7750();
                D_80177A48[1] = 0.0f;
                D_80177A48[2] = 0.0f;
                if (D_80161684 == 0) {
                    D_80177A48[1] = 330.0f;
                    player->camEye.x = 1350.0f;

                    player->camAt.x = D_801779A0 = 1450.0f;
                    // 1350.0f;
                    D_80177A48[3] = 800.0f;
                    D_80177A48[4] = -0.15f;
                    D_80177A48[5] = -250.0f;
                    player->camEye.z = player->pos.z + D_80177D20 - 1780.0f;
                } else {
                    player->camEye.x = -1500.0f;
                    player->camAt.x = D_801779A0 = -1500.0f;
                    D_80177A48[3] = -800.0f;
                    D_80177A48[4] = 0.2f;
                    D_80177A48[5] = 250.0f;
                    player->camEye.z = player->pos.z + D_80177D20 - 2000.0f;
                }
                player->camEye.y = 200.0f;
                player->camAt.y = D_801779B8 = player->pos.y;
                player->camAt.z = D_801779C0 = player->pos.z + D_80177D20;
                D_80177A48[0] = 0.0f;
            }
            break;
        case 3: /* switch 1 */
            D_80177CE8 += 60.0f;
            D_80178358 = 0;
            D_8017835C = 4;
            D_80177A48[1] += D_80177A48[2];
            Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 0);
            sp58.x = 0.0f;
            sp58.y = 0.0f;
            sp58.z = D_80177A48[3];
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp58, &sp4C);
            if (D_80177A80 < 1180) {
                D_80177978 = sp4C.x;
                D_80177980 = 200.0f + sp4C.y;
                D_80177988 = player->pos.z + D_80177D20 + sp4C.z;
                D_801779A0 = 0.0f;
                D_801779B8 = player->pos.y;
                D_801779C0 = D_80177A48[5] + (player->pos.z + D_80177D20);
                Math_SmoothStepToF(&D_80177A48[5], 250.0f, 1.0f, 1.0f, 0.0f);
            } else {
                D_801779A0 = 0.0f;
                D_801779B8 = player->pos.y;
                D_801779C0 = player->pos.z + D_80177D20;
            }
            if (D_80177A80 >= 1181) {
                player->unk_0D0 += 2.0f;
                player->unk_0E4 += 0.1f;
                Math_SmoothStepToF(&D_80177A48[2], 0.0f, 1.0f, 0.001f, 0);
                player->unk_190 = 2.0f;
                if (D_80161684 == 0) {
                    Math_SmoothStepToF(&D_80177A48[0], 1.0f, 1.0f, 0.025f, 0.0f);
                }
            } else {
                Math_SmoothStepToF(&D_80177A48[2], D_80177A48[4], 1.0f, 0.001f, 0.0f);
                Math_SmoothStepToF(&D_80177A48[0], 0.05f, 1.0f, 0.00005f, 0.0f);
            }
            if (D_80177A80 == 1300) {
                func_800A6148();
            }
            if (D_80177A80 >= 1271) {
                D_80178358 = 255;
                D_80178354 = 0;
                D_80178350 = 0;
                D_80178348 = 0;
                D_8017835C = 8;
                if (D_80178340 == 255) {
                    func_8001CA24(0);
                    func_8001DBD0(10);
                    player->state_1C8 = PLAYERSTATE_1C8_6;
                    player->timer_1F8 = 0;
                    D_8017837C = 4;
                    D_800D3180[8] = Play_CheckMedalStatus(250) + 1;
                }
            }
            break;
    }
    (void) "Demo_Time %d\n";
    switch (D_80177A80) {
        case 320:
            if (D_80161684 == 0) {
                D_80177930 = 1;
            }
            D_80177840 = 100;
            break;
        case 380:
            func_800BA808(gMsg_ID_20010, RCID_FOX);
            break;
        case 468:
            switch (gTeamShields[2]) {
                case 0:
                    func_800BA808(gMsg_ID_20345, RCID_ROB64);
                    break;
                case -1:
                    func_800BA808(gMsg_ID_20339, RCID_ROB64);
                    break;
                default:
                    func_80048AC0(2);
                    break;
            }
            break;
        case 603:
            switch (gTeamShields[3]) {
                case 0:
                    func_800BA808(gMsg_ID_20344, RCID_ROB64);
                    break;
                case -1:
                    func_800BA808(gMsg_ID_20338, RCID_ROB64);
                    break;
                default:
                    if (D_80161684 == 0) {
                        func_80048AC0(3);
                    } else {
                        func_800BA808(gMsg_ID_6100, RCID_PEPPY);
                    }
                    break;
            }
            break;
        case 738:
            switch (gTeamShields[1]) {
                case 0:
                    func_800BA808(gMsg_ID_20343, RCID_ROB64);
                    break;
                case -1:
                    func_800BA808(gMsg_ID_20337, RCID_ROB64);
                    break;
                default:
                    func_800BA808(gMsg_ID_6101, RCID_FALCO);
                    break;
            }
            break;
        case 906: /* switch 2 */
            D_80177830 = 1;
            break;
        case 1106: /* switch 2 */
            D_80177830 = 0;
            break;
        case 1180: /* switch 2 */
            Audio_PlaySfx(0x09000002, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            player->unk_190 = player->unk_194 = 5.0f;
            break;
        case 1240: /* switch 2 */
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
            break;
        case 1120: /* switch 2 */
            if (gTeamShields[3] > 0) {
                gObjects2F4[0].unk_0B8 = 2;
            }
            break;
        case 1140: /* switch 2 */
            if (gTeamShields[2] > 0) {
                gObjects2F4[1].unk_0B8 = 2;
            }
            break;
        case 1160: /* switch 2 */
            if (gTeamShields[1] > 0) {
                gObjects2F4[2].unk_0B8 = 2;
            }
            break;
    }
    if (D_80177A80 >= 1180) {
        player->unk_25C += 0.02f;
        if (player->unk_25C > 0.6f) {
            player->unk_25C = 0.6f;
        }
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4) * M_DTOR), 1);
    sp58.x = 0.0f;
    sp58.y = 0.0f;
    sp58.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp58, &sp4C);
    player->vel.x = sp4C.x;
    player->vel.z = sp4C.z;
    player->vel.y = sp4C.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->unk_138 = player->pos.z += player->vel.z;
    player->unk_0F8 = player->unk_0EC;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0.0f);
    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}
#else
// zoness outro
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019D76C.s")
#endif

void func_E16C50_8019E5F0(Object_2F4* obj2F4) {
    Vec3f sp34;
    Vec3f sp28;

    (void) "Demo_Time %d\n"; // goes in above function, probably
    switch (obj2F4->unk_0B8) {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            break;
        case 1:
            if ((obj2F4->unk_0B6 != 0) && ((((obj2F4->index & 7) * 10) + 1030) < D_80177A80)) {
                obj2F4->unk_0B8 = 4;
            }
            break;
        case 2:
            obj2F4->unk_0B8 = 3;
            Audio_PlaySfx(0x09000002, &obj2F4->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            obj2F4->unk_188 = 5.0f;
            /* fallthrough */
        case 3:
            obj2F4->unk_07C = 2;
            obj2F4->unk_114 += 2.0f;
            obj2F4->unk_0F4.x += 0.1f;
            obj2F4->unk_168 += 0.2f;
            if (obj2F4->unk_168 > 0.6f) {
                obj2F4->unk_168 = 0.6f;
            }
            break;
    }
    Matrix_RotateY(gCalcMatrix, (obj2F4->unk_0F4.y + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(obj2F4->unk_0F4.x * M_DTOR), 1);
    sp34.x = 0.0f;
    sp34.y = 0.0f;
    sp34.z = obj2F4->unk_114;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp34, &sp28);
    obj2F4->vel.x = sp28.x;
    obj2F4->vel.y = sp28.y;
    obj2F4->vel.z = sp28.z;

    obj2F4->obj.rot.x = -obj2F4->unk_0F4.x;
    obj2F4->obj.rot.y = obj2F4->unk_0F4.y + 180.0f;
    obj2F4->obj.rot.z = -obj2F4->unk_0F4.z;
}
