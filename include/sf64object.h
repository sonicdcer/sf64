#ifndef SF64_OBJECT
#define SF64_OBJECT

#include "libultra/ultra64.h"
#include "sf64math.h"

#define HITBOX_UNK_2 200000.0f
#define HITBOX_UNK_3 300000.0f
#define HITBOX_UNK_4 400000.0f

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
   /* 0x00 */ s16 vtx[3];
   /* 0x06 */ s16 unk_06;
   /* 0x08 */ Vec3s normal;
   /* 0x10 */ s32 dist;
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
    /*  0 */ COL1_0, // OBJ_2F4_180
    /*  1 */ COL1_1, // OBJ_80_39
    /*  2 */ COL1_2,
    /*  3 */ COL1_3, // OBJ_UNK_1000
    /*  4 */ COL1_4, // OBJ_BOSS_308
    /*  5 */ COL1_5, // OBJ_80_149
    /*  6 */ COL1_6, // OBJ_80_150
    /*  7 */ COL1_7, // OBJ_BOSS_309
    /*  8 */ COL1_8, // OBJ_BOSS_313
    /*  9 */ COL1_9, // OBJ_BOSS_312
} CollisonId_1;

typedef enum {
    /*  0 */  COL2_0, // default
    /*  1 */  COL2_1, // OBJ_80_4, OBJ_80_5
    /*  2 */  COL2_2, // OBJ_80_2
    /*  3 */  COL2_3, // OBJ_80_3, OBJ_80_69
    /*  4 */  COL2_4, // OBJ_80_140
    /*  5 */  COL2_5, // PLAYERSHOT_7 ?
    /*  6 */  COL2_6, // OBJ_80_141
    /*  7 */  COL2_7, // OBJ_80_47
    /*  8 */  COL2_8, // OBJ_80_70
    /*  9 */  COL2_9, // OBJ_80_72
    /* 10 */ COL2_10, // OBJ_80_71
    /* 11 */ COL2_11, // OBJ_80_73
    /* 12 */ COL2_12, // OBJ_80_67
    /* 13 */ COL2_13, // OBJ_80_74
    /* 14 */ COL2_14, // OBJ_80_117
    /* 15 */ COL2_15, // OBJ_80_124
    /* 16 */ COL2_16, // OBJ_80_126
    /* 17 */ COL2_17, // OBJ_80_143
    /* 18 */ COL2_18, // OBJ_80_120
} CollisionId_2;

typedef struct {
    /* 0x00 */ f32 zPos1;
    /* 0x04 */ s16 zPos2;
    /* 0x06 */ s16 xPos;
    /* 0x08 */ s16 yPos;
    /* 0x0A */ s16 unk_A;
    /* 0x0C */ s16 unk_C;
    /* 0x0E */ s16 unk_E;
    /* 0x10 */ s16 id;
} ObjectInit; // size = 0x14

typedef struct {
    /* 0x00 */ Gfx* unk_00;
    /* 0x04 */ f32* unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ u8 unk_1C;
} UnkStruct_D003C; // size = 0x20

typedef struct {
    /* 0x00 */ u8 status;
    /* 0x02 */ u16 id;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ Vec3f rot;
} Object; // size = 0x1C

typedef void (*ObjectFunc)(Object*);

typedef struct {
    /* 0x00 */ union {
        ObjectFunc draw;
        Gfx* dList;
    };
    /* 0x00 */ u8 drawType;
    /* 0x08 */ ObjectFunc action; // argument must have object type.
    /* 0x0C */ f32* hitbox;
    /* 0x10 */ f32 unk_10; // z coordinate of something
    /* 0x14 */ s16 unk_14; // can be -1, 0, 1
    /* 0x16 */ s16 unk_16; // can be 0, 1, 2
    /* 0x18 */ u8 damage;
    /* 0x19 */ u8 unk_19; // can be 0, 1, 2
    /* 0x1C */ f32 unk_1C; // y offset of something
    /* 0x20 */ u8 bonus;
} ObjectInfo; // size = 0x24

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectInfo info;
    /* 0x40 */ char unk40[0x8];
    /* 0x48 */ Vec3f sfxPos;
    /* 0x54 */ f32 unk_54;
} Object_58; // size = 0x58

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectInfo info;
    /* 0x40 */ s32 index;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4C */ s32 timer_4C;
    /* 0x50 */ s8 unk_50;
    /* 0x51 */ char pad51[3];
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ char pad58[8];
    /* 0x60 */ f32 unk_60;
    /* 0x64 */ Vec3f vel;
    /* 0x70 */ Vec3f sfxPos;
    /* 0x7C */ char pad7C[4];
} Object_80; // size = 0x80

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectInfo info;
    /* 0x40 */ s32 index;
    /* 0x44 */ char pad44[1];
    /* 0x45 */ u8 unk_45;
    /* 0x46 */ s8 unk_46;
    /* 0x48 */ s32 unk_48;
} Object_4C; // size = 0x4C

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectInfo info;
    /* 0x40 */ s32 index;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ u8 unk_46;
    /* 0x48 */ u16 timer_48;
    /* 0x4A */ u16 timer_4A;
    /* 0x4C */ s8 unk_4C;
    /* 0x4E */ s16 unk_4E;
    /* 0x50 */ f32 unk_50;
    /* 0x54 */ f32 unk_54;
    /* 0x58 */ f32 unk_58;
    /* 0x5C */ Vec3f sfxPos;
    /* 0x68 */ f32 scale;
} Item; // size 0x6C

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectInfo info;
    /* 0x40 */ s32 index;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ s16 unk_46;
    /* 0x48 */ s16 unk_48;
    /* 0x4A */ s16 unk_4A;
    /* 0x4C */ u8 unk_4C;
    /* 0x4E */ s16 unk_4E;
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
    /* 0x80 */ Vec3f sfxPos;
} Object_8C; // size 0x8C

typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectInfo info;
    /* 0x040 */ s32 index;
    /* 0x044 */ s16 unk_044;
    /* 0x046 */ char unk_46[0x8];
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ s16 timer_050;
    /* 0x052 */ s16 timer_052;
    /* 0x054 */ s16 timer_054;
    /* 0x056 */ s16 timer_056;
    /* 0x058 */ s16 timer_058;
    /* 0x05A */ s16 timer_05A;
    /* 0x05C */ s16 timer_05C;
    /* 0x05E */ u8 unk_05E;
    /* 0x060 */ s16 unk_060;
    /* 0x062 */ s8 unk_062;
    /* 0x064 */ s16 unk_064;
    /* 0x066 */ s16 unk_066;
    /* 0x068 */ f32 unk_068;
    /* 0x06C */ Vec3f vel;
    /* 0x078 */ f32 unk_078;
    /* 0x07C */ f32 unk_07C;
    /* 0x080 */ char pad80[4];
    /* 0x084 */ f32 gravity;       
    /* 0x088 */ s16 swork[40];
    /* 0x0D8 */ f32 fwork[50];
    /* 0x1A0 */ Vec3f vwork[50];
    /* 0x3F8 */ f32 unk_3F8;
    /* 0x3FC */ Vec3f sfxPos;
} Boss; // size = 0x408

typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectInfo info;
    /* 0x040 */ s32 index;
    /* 0x044 */ u8 unk_044;
    /* 0x046 */ s16 unk_046;
    /* 0x048 */ s16 unk_048;
    /* 0x04A */ s16 unk_04A;
    /* 0x04C */ s16 timer_04C;
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ s32 iwork[25];
    /* 0x0B4 */ s16 unk_0B4;
    /* 0x0B6 */ s16 unk_0B6;
    /* 0x0B8 */ s16 unk_0B8;
    /* 0x0BA */ char pad0BA[0x2];
    /* 0x0BC */ u16 timer_0BC;
    /* 0x0BE */ u16 timer_0BE;
    /* 0x0C0 */ u16 timer_0C0;
    /* 0x0C2 */ u16 timer_0C2;
    /* 0x0C4 */ u16 timer_0C4;
    /* 0x0C6 */ u16 timer_0C6;
    /* 0x0C8 */ u8 unk_0C8;
    /* 0x0C9 */ u8 unk_0C9;
    /* 0x0CA */ u8 timer_0CA[4];
    /* 0x0CE */ s16 unk_0CE;
    /* 0x0D0 */ s8 unk_0D0;
    /* 0x0D1 */ char pad0D1[0x1];
    /* 0x0D2 */ s16 unk_0D2;
    /* 0x0D4 */ s16 unk_0D4;
    /* 0x0D6 */ u16 unk_0D6;
    /* 0x0D8 */ Vec3f unk_0D8;
    /* 0x0E4 */ s16 unk_0E4;
    /* 0x0E6 */ s16 unk_0E6;
    /* 0x0E8 */ Vec3f vel;
    /* 0x0F4 */ Vec3f unk_0F4;
    /* 0x100 */ Vec3f sfxPos;
    /* 0x10C */ f32 gravity;
    /* 0x110 */ f32 scale;
    /* 0x114 */ f32 fwork[30];
    /* 0x18C */ Vec3f vwork[30];
} Object_2F4; // size = 0x2F4

typedef enum{
  /*  -1 */  OBJ_INVALID=-1,
  /*   0 */  OBJ_80_0,  
  /*   1 */  OBJ_80_1,  
  /*   2 */  OBJ_80_2,  
  /*   3 */  OBJ_80_3,  
  /*   4 */  OBJ_80_4,  
  /*   5 */  OBJ_80_5,  
  /*   6 */  OBJ_80_6,  
  /*   7 */  OBJ_80_7,  
  /*   8 */  OBJ_80_8,  
  /*   9 */  OBJ_80_9,  
  /*  10 */  OBJ_80_10, 
  /*  11 */  OBJ_80_11, 
  /*  12 */  OBJ_80_12, 
  /*  13 */  OBJ_80_13, 
  /*  14 */  OBJ_80_14, 
  /*  15 */  OBJ_80_15, 
  /*  16 */  OBJ_80_16, 
  /*  17 */  OBJ_80_17, 
  /*  18 */  OBJ_80_18, 
  /*  19 */  OBJ_80_19, 
  /*  20 */  OBJ_80_20, 
  /*  21 */  OBJ_80_21, 
  /*  22 */  OBJ_80_22, 
  /*  23 */  OBJ_80_23, 
  /*  24 */  OBJ_80_24, 
  /*  25 */  OBJ_80_25, 
  /*  26 */  OBJ_80_26, 
  /*  27 */  OBJ_80_27, 
  /*  28 */  OBJ_80_28, 
  /*  29 */  OBJ_80_29, 
  /*  30 */  OBJ_80_30, 
  /*  31 */  OBJ_80_31, 
  /*  32 */  OBJ_80_32, 
  /*  33 */  OBJ_80_33, 
  /*  34 */  OBJ_80_34, 
  /*  35 */  OBJ_80_35, 
  /*  36 */  OBJ_80_36, 
  /*  37 */  OBJ_80_37, 
  /*  38 */  OBJ_80_38, 
  /*  39 */  OBJ_80_39, 
  /*  40 */  OBJ_80_40, 
  /*  41 */  OBJ_80_41, 
  /*  42 */  OBJ_80_42, 
  /*  43 */  OBJ_80_43, 
  /*  44 */  OBJ_80_44, 
  /*  45 */  OBJ_80_45, 
  /*  46 */  OBJ_80_46, 
  /*  47 */  OBJ_80_47, 
  /*  48 */  OBJ_80_48, 
  /*  49 */  OBJ_80_49, 
  /*  50 */  OBJ_80_50, 
  /*  51 */  OBJ_80_51, 
  /*  52 */  OBJ_80_52, 
  /*  53 */  OBJ_80_53, 
  /*  54 */  OBJ_80_54, 
  /*  55 */  OBJ_80_55, 
  /*  56 */  OBJ_80_56, 
  /*  57 */  OBJ_80_57, 
  /*  58 */  OBJ_80_58, 
  /*  59 */  OBJ_80_59, 
  /*  60 */  OBJ_80_60, 
  /*  61 */  OBJ_80_61, 
  /*  62 */  OBJ_80_62, 
  /*  63 */  OBJ_80_63, 
  /*  64 */  OBJ_80_64, 
  /*  65 */  OBJ_80_65, 
  /*  66 */  OBJ_80_66, 
  /*  67 */  OBJ_80_67, 
  /*  68 */  OBJ_80_68, 
  /*  69 */  OBJ_80_69, 
  /*  70 */  OBJ_80_70, 
  /*  71 */  OBJ_80_71, 
  /*  72 */  OBJ_80_72, 
  /*  73 */  OBJ_80_73, 
  /*  74 */  OBJ_80_74, 
  /*  75 */  OBJ_80_75, 
  /*  76 */  OBJ_80_76, 
  /*  77 */  OBJ_80_77, 
  /*  78 */  OBJ_80_78, 
  /*  79 */  OBJ_80_79, 
  /*  80 */  OBJ_80_80, 
  /*  81 */  OBJ_80_81, 
  /*  82 */  OBJ_80_82, 
  /*  83 */  OBJ_80_83, 
  /*  84 */  OBJ_80_84, 
  /*  85 */  OBJ_80_85, 
  /*  86 */  OBJ_80_86, 
  /*  87 */  OBJ_80_87, 
  /*  88 */  OBJ_80_88, 
  /*  89 */  OBJ_80_89, 
  /*  90 */  OBJ_80_90, 
  /*  91 */  OBJ_80_91, 
  /*  92 */  OBJ_80_92, 
  /*  93 */  OBJ_80_93, 
  /*  94 */  OBJ_80_94, 
  /*  95 */  OBJ_80_95, 
  /*  96 */  OBJ_80_96, 
  /*  97 */  OBJ_80_97, 
  /*  98 */  OBJ_80_98, 
  /*  99 */  OBJ_80_99, 
  /* 100 */  OBJ_80_100,
  /* 101 */  OBJ_80_101,
  /* 102 */  OBJ_80_102,
  /* 103 */  OBJ_80_103,
  /* 104 */  OBJ_80_104,
  /* 105 */  OBJ_80_105,
  /* 106 */  OBJ_80_106,
  /* 107 */  OBJ_80_107,
  /* 108 */  OBJ_80_108,
  /* 109 */  OBJ_80_109,
  /* 110 */  OBJ_80_110,
  /* 111 */  OBJ_80_111,
  /* 112 */  OBJ_80_112,
  /* 113 */  OBJ_80_113,
  /* 114 */  OBJ_80_114,
  /* 115 */  OBJ_80_115,
  /* 116 */  OBJ_80_116,
  /* 117 */  OBJ_80_117,
  /* 118 */  OBJ_80_118,
  /* 119 */  OBJ_80_119,
  /* 120 */  OBJ_80_120,
  /* 121 */  OBJ_80_121,
  /* 122 */  OBJ_80_122,
  /* 123 */  OBJ_80_123,
  /* 124 */  OBJ_80_124,
  /* 125 */  OBJ_80_125,
  /* 126 */  OBJ_80_126,
  /* 127 */  OBJ_80_127,
  /* 128 */  OBJ_80_128,
  /* 129 */  OBJ_80_129,
  /* 130 */  OBJ_80_130,
  /* 131 */  OBJ_80_131,
  /* 132 */  OBJ_80_132,
  /* 133 */  OBJ_80_133,
  /* 134 */  OBJ_80_134,
  /* 135 */  OBJ_80_135,
  /* 136 */  OBJ_80_136,
  /* 137 */  OBJ_80_137,
  /* 138 */  OBJ_80_138,
  /* 139 */  OBJ_80_139,
  /* 140 */  OBJ_80_140,
  /* 141 */  OBJ_80_141,
  /* 142 */  OBJ_80_142,
  /* 143 */  OBJ_80_143,
  /* 144 */  OBJ_80_144,
  /* 145 */  OBJ_80_145,
  /* 146 */  OBJ_80_146,
  /* 147 */  OBJ_80_147,
  /* 148 */  OBJ_80_148,
  /* 149 */  OBJ_80_149,
  /* 150 */  OBJ_80_150,
  /* 151 */  OBJ_80_151,
  /* 152 */  OBJ_80_152,
  /* 153 */  OBJ_80_153,
  /* 154 */  OBJ_80_154,
  /* 155 */  OBJ_80_155,
  /* 156 */  OBJ_80_156,
  /* 157 */  OBJ_80_157,
  /* 158 */  OBJ_80_158,
  /* 159 */  OBJ_80_159,
  /* 160 */  OBJ_80_160,
  /* 161 */  OBJ_4C_161,
  /* 162 */  OBJ_4C_162,
  /* 163 */  OBJ_4C_163,
  /* 164 */  OBJ_4C_164,
  /* 165 */  OBJ_4C_165,
  /* 166 */  OBJ_4C_166,
  /* 167 */  OBJ_4C_167,
  /* 168 */  OBJ_4C_168,
  /* 169 */  OBJ_4C_169,
  /* 170 */  OBJ_4C_170,
  /* 171 */  OBJ_4C_171,
  /* 172 */  OBJ_4C_172,
  /* 173 */  OBJ_4C_173,
  /* 174 */  OBJ_4C_174,
  /* 175 */  OBJ_4C_175,
  /* 176 */  OBJ_2F4_176,
  /* 177 */  OBJ_2F4_177,
  /* 178 */  OBJ_2F4_178,
  /* 179 */  OBJ_2F4_179,
  /* 180 */  OBJ_2F4_180,
  /* 181 */  OBJ_2F4_181,
  /* 182 */  OBJ_2F4_182,
  /* 183 */  OBJ_2F4_183,
  /* 184 */  OBJ_2F4_184,
  /* 185 */  OBJ_2F4_185,
  /* 186 */  OBJ_2F4_186,
  /* 187 */  OBJ_2F4_187,
  /* 188 */  OBJ_2F4_188,
  /* 189 */  OBJ_2F4_189,
  /* 190 */  OBJ_2F4_190,
  /* 191 */  OBJ_2F4_191,
  /* 192 */  OBJ_2F4_192,
  /* 193 */  OBJ_2F4_193,
  /* 194 */  OBJ_2F4_194,
  /* 195 */  OBJ_2F4_195,
  /* 196 */  OBJ_2F4_196,
  /* 197 */  OBJ_2F4_197,
  /* 198 */  OBJ_2F4_198,
  /* 199 */  OBJ_2F4_199,
  /* 200 */  OBJ_2F4_200,
  /* 201 */  OBJ_2F4_201,
  /* 202 */  OBJ_2F4_202,
  /* 203 */  OBJ_2F4_203,
  /* 204 */  OBJ_2F4_204,
  /* 205 */  OBJ_2F4_205,
  /* 206 */  OBJ_2F4_206,
  /* 207 */  OBJ_2F4_207,
  /* 208 */  OBJ_2F4_208,
  /* 209 */  OBJ_2F4_209,
  /* 210 */  OBJ_2F4_210,
  /* 211 */  OBJ_2F4_211,
  /* 212 */  OBJ_2F4_212,
  /* 213 */  OBJ_2F4_213,
  /* 214 */  OBJ_2F4_214,
  /* 215 */  OBJ_2F4_215,
  /* 216 */  OBJ_2F4_216,
  /* 217 */  OBJ_2F4_217,
  /* 218 */  OBJ_2F4_218,
  /* 219 */  OBJ_2F4_219,
  /* 220 */  OBJ_2F4_220,
  /* 221 */  OBJ_2F4_221,
  /* 222 */  OBJ_2F4_222,
  /* 223 */  OBJ_2F4_223,
  /* 224 */  OBJ_2F4_224,
  /* 225 */  OBJ_2F4_225,
  /* 226 */  OBJ_2F4_226,
  /* 227 */  OBJ_2F4_227,
  /* 228 */  OBJ_2F4_228,
  /* 229 */  OBJ_2F4_229,
  /* 230 */  OBJ_2F4_230,
  /* 231 */  OBJ_2F4_231,
  /* 232 */  OBJ_2F4_232,
  /* 233 */  OBJ_2F4_233,
  /* 234 */  OBJ_2F4_234,
  /* 235 */  OBJ_2F4_235,
  /* 236 */  OBJ_2F4_236,
  /* 237 */  OBJ_2F4_237,
  /* 238 */  OBJ_2F4_238,
  /* 239 */  OBJ_2F4_239,
  /* 240 */  OBJ_2F4_240,
  /* 241 */  OBJ_2F4_241,
  /* 242 */  OBJ_2F4_242,
  /* 243 */  OBJ_2F4_243,
  /* 244 */  OBJ_2F4_244,
  /* 245 */  OBJ_2F4_245,
  /* 246 */  OBJ_2F4_246,
  /* 247 */  OBJ_2F4_247,
  /* 248 */  OBJ_2F4_248,
  /* 249 */  OBJ_2F4_249,
  /* 250 */  OBJ_2F4_250,
  /* 251 */  OBJ_2F4_251,
  /* 252 */  OBJ_2F4_252,
  /* 253 */  OBJ_2F4_253,
  /* 254 */  OBJ_2F4_254,
  /* 255 */  OBJ_2F4_255,
  /* 256 */  OBJ_2F4_256,
  /* 257 */  OBJ_2F4_257,
  /* 258 */  OBJ_2F4_258,
  /* 259 */  OBJ_2F4_259,
  /* 260 */  OBJ_2F4_260,
  /* 261 */  OBJ_2F4_261,
  /* 262 */  OBJ_2F4_262,
  /* 263 */  OBJ_2F4_263,
  /* 264 */  OBJ_2F4_264,
  /* 265 */  OBJ_2F4_265,
  /* 266 */  OBJ_2F4_266,
  /* 267 */  OBJ_2F4_267,
  /* 268 */  OBJ_2F4_268,
  /* 269 */  OBJ_2F4_269,
  /* 270 */  OBJ_2F4_270,
  /* 271 */  OBJ_2F4_271,
  /* 272 */  OBJ_2F4_272,
  /* 273 */  OBJ_2F4_273,
  /* 274 */  OBJ_2F4_274,
  /* 275 */  OBJ_2F4_275,
  /* 276 */  OBJ_2F4_276,
  /* 277 */  OBJ_2F4_277,
  /* 278 */  OBJ_2F4_278,
  /* 279 */  OBJ_2F4_279,
  /* 280 */  OBJ_2F4_280,
  /* 281 */  OBJ_2F4_281,
  /* 282 */  OBJ_2F4_282,
  /* 283 */  OBJ_2F4_283,
  /* 284 */  OBJ_2F4_284,
  /* 285 */  OBJ_2F4_285,
  /* 286 */  OBJ_2F4_286,
  /* 287 */  OBJ_2F4_287,
  /* 288 */  OBJ_2F4_288,
  /* 289 */  OBJ_2F4_289,
  /* 290 */  OBJ_2F4_290,
  /* 291 */  OBJ_2F4_291,
  /* 292 */  OBJ_BOSS_292,
  /* 293 */  OBJ_BOSS_293,
  /* 294 */  OBJ_BOSS_294,
  /* 295 */  OBJ_BOSS_295,
  /* 296 */  OBJ_BOSS_296,
  /* 297 */  OBJ_BOSS_297,
  /* 298 */  OBJ_BOSS_298,
  /* 299 */  OBJ_BOSS_299,
  /* 300 */  OBJ_BOSS_300,
  /* 301 */  OBJ_BOSS_301,
  /* 302 */  OBJ_BOSS_A6,
  /* 303 */  OBJ_BOSS_303,
  /* 304 */  OBJ_BOSS_304,
  /* 305 */  OBJ_BOSS_305,
  /* 306 */  OBJ_BOSS_306,
  /* 307 */  OBJ_BOSS_ZO,
  /* 308 */  OBJ_BOSS_308,
  /* 309 */  OBJ_BOSS_309,
  /* 310 */  OBJ_BOSS_310,
  /* 311 */  OBJ_BOSS_311,
  /* 312 */  OBJ_BOSS_312,
  /* 313 */  OBJ_BOSS_313,
  /* 314 */  OBJ_BOSS_314,
  /* 315 */  OBJ_BOSS_SO,
  /* 316 */  OBJ_BOSS_316,
  /* 317 */  OBJ_BOSS_317,
  /* 318 */  OBJ_BOSS_AQ,
  /* 319 */  OBJ_BOSS_319,
  /* 320 */  OBJ_BOSS_320,
  /* 321 */  OBJ_BOSS_321,
  /* 322 */  OBJ_ITEM_LASERS,
  /* 323 */  OBJ_ITEM_CHECKPOINT,
  /* 324 */  OBJ_ITEM_SILVER_RING,
  /* 325 */  OBJ_ITEM_SILVER_STAR,
  /* 326 */  OBJ_ITEM_METEO_WARP,
  /* 327 */  OBJ_ITEM_BOMB,
  /* 328 */  OBJ_ITEM_328,
  /* 329 */  OBJ_ITEM_329,
  /* 330 */  OBJ_ITEM_330,
  /* 331 */  OBJ_ITEM_331,
  /* 332 */  OBJ_ITEM_332,
  /* 333 */  OBJ_ITEM_333,
  /* 334 */  OBJ_ITEM_334,
  /* 335 */  OBJ_ITEM_1UP,
  /* 336 */  OBJ_ITEM_GOLD_RING,
  /* 337 */  OBJ_ITEM_WING_REPAIR,
  /* 338 */  OBJ_ITEM_TRAINING_RING,
  /* 339 */  OBJ_8C_339,
  /* 340 */  OBJ_8C_340,
  /* 341 */  OBJ_8C_341,
  /* 342 */  OBJ_8C_342,
  /* 343 */  OBJ_8C_343,
  /* 344 */  OBJ_8C_344,
  /* 345 */  OBJ_8C_345,
  /* 346 */  OBJ_8C_346,
  /* 347 */  OBJ_8C_347,
  /* 348 */  OBJ_8C_348,
  /* 349 */  OBJ_8C_349,
  /* 350 */  OBJ_8C_350,
  /* 351 */  OBJ_8C_351,
  /* 352 */  OBJ_8C_352,
  /* 353 */  OBJ_8C_353,
  /* 354 */  OBJ_8C_354,
  /* 355 */  OBJ_8C_355,
  /* 356 */  OBJ_8C_356,
  /* 357 */  OBJ_8C_357,
  /* 358 */  OBJ_8C_358,
  /* 359 */  OBJ_8C_359,
  /* 360 */  OBJ_8C_360,
  /* 361 */  OBJ_8C_361,
  /* 362 */  OBJ_8C_362,
  /* 363 */  OBJ_8C_363,
  /* 364 */  OBJ_8C_364,
  /* 365 */  OBJ_8C_365,
  /* 366 */  OBJ_8C_366,
  /* 367 */  OBJ_8C_367,
  /* 368 */  OBJ_8C_368,
  /* 369 */  OBJ_8C_369,
  /* 370 */  OBJ_8C_370,
  /* 371 */  OBJ_8C_371,
  /* 372 */  OBJ_8C_372,
  /* 373 */  OBJ_8C_373,
  /* 374 */  OBJ_8C_374,
  /* 375 */  OBJ_8C_375,
  /* 376 */  OBJ_8C_376,
  /* 377 */  OBJ_8C_377,
  /* 378 */  OBJ_8C_378,
  /* 379 */  OBJ_8C_379,
  /* 380 */  OBJ_8C_380,
  /* 381 */  OBJ_8C_381,
  /* 382 */  OBJ_8C_382,
  /* 383 */  OBJ_8C_383,
  /* 384 */  OBJ_8C_384,
  /* 385 */  OBJ_8C_385,
  /* 386 */  OBJ_8C_386,
  /* 387 */  OBJ_8C_387,
  /* 388 */  OBJ_8C_388,
  /* 389 */  OBJ_8C_389,
  /* 390 */  OBJ_8C_390,
  /* 391 */  OBJ_8C_391,
  /* 392 */  OBJ_8C_392,
  /* 393 */  OBJ_8C_393,
  /* 394 */  OBJ_8C_394,
  /* 395 */  OBJ_8C_395,
  /* 396 */  OBJ_8C_396,
  /* 397 */  OBJ_8C_397,
  /* 398 */  OBJ_8C_398,
  /* 399 */  OBJ_8C_399,
  /* 400 */  OBJ_ID_MAX,
} ObjectId;

#define OBJ_UNK_400 400
#define OBJ_UNK_401 401
#define OBJ_UNK_402 402
#define OBJ_UNK_403 403
#define OBJ_UNK_404 404
#define OBJ_UNK_405 405
#define OBJ_UNK_406 406

#define OBJ_UNK_1000 1000

#endif
