#ifndef SF64_OBJECT
#define SF64_OBJECT

#include "libultra/ultra64.h"
#include "sf64math.h"

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
    /* 0x0C */ f32* hitbox; // some sort of script? hitboxes?
    /* 0x10 */ f32 unk_10; // z coordinate of something
    /* 0x14 */ s16 unk_14; // can be -1, 0, 1
    /* 0x16 */ s16 unk_16; // can be 0, 1, 2
    /* 0x18 */ u8 damage; // damage?
    /* 0x19 */ u8 unk_19; // can be 0, 1, 2
    /* 0x1C */ f32 unk_1C; // y offset of something
    /* 0x20 */ u8 bonus; // increment for something
} ObjectStruct_1C; // size = 0x24

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ s32 index;
    /* 0x20 */ Vec3f unk_20;
    /* 0x2C */ f32 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ f32 unk_34; 
    /* 0x38 */ Vec3f sfxPos;
    /* 0x44 */ f32 unk_44;
    /* 0x44 */ f32 unk_48;
    /* 0x44 */ f32 unk_4C;
    /* 0x44 */ f32 unk_50;
    /* 0x44 */ f32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5C */ s32 unk_5C;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6C */ char pad6C[4];
} Object_70; // size = 0x70

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ char unk40[0x8];
    /* 0x48 */ Vec3f sfxPos;
    /* 0x54 */ f32 unk_54;
} Object_58; // size = 0x58

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 index;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4C */ s32 unk_4C;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ char pad51[3];
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ char pad58[8];
    /* 0x60 */ f32 unk_60;
    /* 0x64 */ Vec3f unk_64;
    /* 0x70 */ Vec3f sfxPos;
    /* 0x7C */ char pad7C[4];
} Object_80; // size = 0x80

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 index;
    /* 0x44 */ char pad44[1];
    /* 0x45 */ u8 unk_45; // could be short loaded as u8
    /* 0x46 */ s8 unk_46;
    /* 0x48 */ s32 unk_48;
} Object_4C; // size = 0x4C

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 index;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ u8 unk_46;
    /* 0x48 */ u16 unk_48;
    /* 0x4A */ u16 unk_4A;
    /* 0x4C */ s8 unk_4C;
    /* 0x4E */ s16 unk_4E;
    /* 0x50 */ f32 unk_50;
    /* 0x54 */ f32 unk_54;
    /* 0x58 */ f32 unk_58;
    /* 0x5C */ Vec3f sfxPos;
    /* 0x68 */ f32 unk_68;
} Object_6C; // size 0x6C

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 index;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ s16 unk_46;
    /* 0x48 */ s16 unk_48;
    /* 0x4A */ s16 unk_4A;
    /* 0x4C */ u8 unk_4C;
    /* 0x4E */ s16 unk_4E;
    /* 0x50 */ u16 unk_50;
    /* 0x52 */ char pad52[0x2];
    /* 0x54 */ Vec3f unk_54;
    /* 0x60 */ Vec3f unk_60;
    /* 0x6C */ f32 unk_6C;
    /* 0x70 */ f32 unk_70;
    /* 0x74 */ Gfx* unk_74;
    /* 0x78 */ s16 unk_78;
    /* 0x7A */ s16 unk_7A;
    /* 0x7C */ char pad7C[4];
    /* 0x80 */ Vec3f sfxPos;
} Object_8C; // size 0x8C

typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectStruct_1C unk_01C;
    /* 0x040 */ s32 unk_040;
    /* 0x044 */ char unk_44[0xA];
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ s16 unk_050;
    /* 0x052 */ s16 unk_052;
    /* 0x054 */ s16 unk_054;
    /* 0x056 */ s16 unk_056;
    /* 0x058 */ s16 unk_058;
    /* 0x05A */ s16 unk_05A;
    /* 0x05C */ s16 unk_05C;
    /* 0x05E */ u8 unk_05E;
    /* 0x05F */ char pad5F[3];
    /* 0x062 */ s8 unk_062;
    /* 0x063 */ char pad63[1];
    /* 0x064 */ s16 unk_064;
    /* 0x066 */ s16 unk_066;
    /* 0x068 */ f32 unk_068;
    /* 0x06C */ Vec3f unk_06C;     
    /* 0x078 */ char pad78[0xC]; 
    /* 0x084 */ f32 unk_084;       
    /* 0x088 */ s16 unk_088;
    /* 0x08A */ s16 unk_08A;
    /* 0x08C */ char pad8C[6];
    /* 0x092 */ u16 unk_092;
    /* 0x094 */ char pad94[0x12];
    /* 0x0A6 */ s16 unk_0A6;
    /* 0x0A8 */ char padA8[6];
    /* 0x0AE */ s16 unk_0AE;
    /* 0x0B0 */ char padB0[0x16];
    /* 0x0C6 */ u16 unk_0C6;
    /* 0x0C8 */ char padC8[1];
    /* 0x0C9 */ u8 unk_0C9;
    /* 0x0CA */ char padCA[6];
    /* 0x0D0 */ s16 unk_0D0;
    /* 0x0D2 */ char padD2[4];
    /* 0x0D6 */ s16 unk_0D6;
    /* 0x0D8 */ char padD8[4];
    /* 0x0DC */ f32 unk_0DC;
    /* 0x0E0 */ f32 unk_0E0;
    /* 0x0E4 */ f32 unk_0E4;
    /* 0x0E8 */ f32 unk_0E8;
    /* 0x0EC */ f32 unk_0EC;
    /* 0x0F0 */ f32 unk_0F0;
    /* 0x0F4 */ f32 unk_0F4;
    /* 0x0F8 */ f32 unk_0F8;
    /* 0x0FC */ f32 unk_0FC;
    /* 0x100 */ Vec3f unk_100;
    /* 0x10C */ char pad10C[4];
    /* 0x110 */ f32 unk_110;
    /* 0x114 */ f32 unk_114;
    /* 0x118 */ char pad118[0x7C];
    /* 0x194 */ f32 unk_194;
    /* 0x198 */ f32 unk_198;
    /* 0x19C */ f32 unk_19C;
    /* 0x1A0 */ char pad1A0[0x168];
    /* 0x308 */ Vec3f unk_308;
    /* 0x314 */ char pad314[0xE4];
    /* 0x3F8 */ f32 unk_3F8;
    /* 0x3FC */ Vec3f sfxPos;
} Object_408; // size = 0x408

typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectStruct_1C unk_01C;
    /* 0x040 */ s32 unk_040;
    /* 0x044 */ u8 unk_044;
    /* 0x046 */ s16 unk_046;
    /* 0x048 */ s16 unk_048;
    /* 0x04A */ s16 unk_04A;
    /* 0x04C */ s16 unk_04C;
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ bool unk_050;
    /* 0x054 */ bool unk_054;
    /* 0x058 */ s32 unk_058;
    /* 0x05C */ s32 unk_05C;
    /* 0x060 */ s32 unk_060;
    /* 0x064 */ s32 unk_064;
    /* 0x068 */ s32 unk_068;
    /* 0x06C */ s32 unk_06C;
    /* 0x070 */ s32 unk_070;
    /* 0x074 */ s32 unk_074;
    /* 0x078 */ s32 unk_078;
    /* 0x07C */ s32 unk_07C;
    /* 0x080 */ s32 unk_080;
    /* 0x084 */ s32 unk_084;
    /* 0x088 */ s32 unk_088;
    /* 0x08C */ s32 unk_08C;
    /* 0x090 */ s32 unk_090;
    /* 0x094 */ s32 unk_094;
    /* 0x098 */ s32 unk_098;
    /* 0x09C */ s32 unk_09C;
    /* 0x0A0 */ char padA0[0x10];
    /* 0x0B0 */ s32 unk_0B0;
    /* 0x0B4 */ s16 unk_0B4;
    /* 0x0B6 */ s16 unk_0B6;
    /* 0x0B8 */ s16 unk_0B8;
    /* 0x0BA */ char pad0BA[0x2];
    /* 0x0BC */ u16 unk_0BC;
    /* 0x0BC */ u16 unk_0BE;
    /* 0x0C0 */ u16 unk_0C0;
    /* 0x0C2 */ u16 unk_0C2;
    /* 0x0C4 */ u16 unk_0C4;
    /* 0x0C6 */ u16 unk_0C6;
    /* 0x0C8 */ u8 unk_0C8;
    /* 0x0C9 */ u8 unk_0C9;
    /* 0x0C9 */ u8 unk_0CA[4];
    /* 0x0CE */ s16 unk_0CE;
    /* 0x0D0 */ s8 unk_0D0;
    /* 0x0D1 */ s16 unk_0D2;
    /* 0x0D4 */ s16 unk_0D4;
    /* 0x0D6 */ u16 unk_0D6;
    /* 0x0D8 */ Vec3f unk_0D8;
    /* 0x0E4 */ s16 unk_0E4;
    /* 0x0E6 */ s16 unk_0E6;
    /* 0x0E8 */ Vec3f unk_0E8;
    /* 0x0F4 */ Vec3f unk_0F4;
    /* 0x100 */ Vec3f sfxPos;
    /* 0x10C */ f32 unk_10C;
    /* 0x110 */ f32 unk_110;
    /* 0x114 */ f32 unk_114;
    /* 0x118 */ f32 unk_118;
    /* 0x11C */ f32 unk_11C;
    /* 0x120 */ f32 unk_120;
    /* 0x124 */ Vec3f unk_124;
    /* 0x130 */ f32 unk_130;
    /* 0x134 */ f32 unk_134;
    /* 0x138 */ f32 unk_138;
    /* 0x13C */ f32 unk_13C;
    /* 0x140 */ f32 unk_140;
    /* 0x144 */ f32 unk_144;
    /* 0x148 */ f32 unk_148;
    /* 0x14C */ f32 unk_14C;
    /* 0x150 */ f32 unk_150;
    /* 0x154 */ f32 unk_154;
    /* 0x158 */ f32 unk_158;
    /* 0x15C */ f32 unk_15C;
    /* 0x160 */ f32 unk_160;
    /* 0x164 */ f32 unk_164;
    /* 0x168 */ f32 unk_168;
    /* 0x16C */ f32 unk_16C;
    /* 0x170 */ f32 unk_170;
    /* 0x174 */ f32 unk_174;
    /* 0x178 */ f32 unk_178;
    /* 0x17C */ f32 unk_17C;
    /* 0x180 */ f32 unk_180;
    /* 0x184 */ f32 unk_184;
    /* 0x188 */ f32 unk_188;
    /* 0x18C */ Vec3f unk_18C[28]; // could be joint table
    /* 0x2DC */ Vec3f unk_2DC;
    /* 0x2E8 */ Vec3f unk_2E8;
} Object_2F4; // size = 0x2F4

typedef enum{
/* -1*/ OBJECT_INVALID=-1,
  /*   0 */  OBJECT_0,  
  /*   1 */  OBJECT_1,  
  /*   2 */  OBJECT_2,  
  /*   3 */  OBJECT_3,  
  /*   4 */  OBJECT_4,  
  /*   5 */  OBJECT_5,  
  /*   6 */  OBJECT_6,  
  /*   7 */  OBJECT_7,  
  /*   8 */  OBJECT_8,  
  /*   9 */  OBJECT_9,  
  /*  10 */  OBJECT_10, 
  /*  11 */  OBJECT_11, 
  /*  12 */  OBJECT_12, 
  /*  13 */  OBJECT_13, 
  /*  14 */  OBJECT_14, 
  /*  15 */  OBJECT_15, 
  /*  16 */  OBJECT_16, 
  /*  17 */  OBJECT_17, 
  /*  18 */  OBJECT_18, 
  /*  19 */  OBJECT_19, 
  /*  20 */  OBJECT_20, 
  /*  21 */  OBJECT_21, 
  /*  22 */  OBJECT_22, 
  /*  23 */  OBJECT_23, 
  /*  24 */  OBJECT_24, 
  /*  25 */  OBJECT_25, 
  /*  26 */  OBJECT_26, 
  /*  27 */  OBJECT_27, 
  /*  28 */  OBJECT_28, 
  /*  29 */  OBJECT_29, 
  /*  30 */  OBJECT_30, 
  /*  31 */  OBJECT_31, 
  /*  32 */  OBJECT_32, 
  /*  33 */  OBJECT_33, 
  /*  34 */  OBJECT_34, 
  /*  35 */  OBJECT_35, 
  /*  36 */  OBJECT_36, 
  /*  37 */  OBJECT_37, 
  /*  38 */  OBJECT_38, 
  /*  39 */  OBJECT_39, 
  /*  40 */  OBJECT_40, 
  /*  41 */  OBJECT_41, 
  /*  42 */  OBJECT_42, 
  /*  43 */  OBJECT_43, 
  /*  44 */  OBJECT_44, 
  /*  45 */  OBJECT_45, 
  /*  46 */  OBJECT_46, 
  /*  47 */  OBJECT_47, 
  /*  48 */  OBJECT_48, 
  /*  49 */  OBJECT_49, 
  /*  50 */  OBJECT_50, 
  /*  51 */  OBJECT_51, 
  /*  52 */  OBJECT_52, 
  /*  53 */  OBJECT_53, 
  /*  54 */  OBJECT_54, 
  /*  55 */  OBJECT_55, 
  /*  56 */  OBJECT_56, 
  /*  57 */  OBJECT_57, 
  /*  58 */  OBJECT_58, 
  /*  59 */  OBJECT_59, 
  /*  60 */  OBJECT_60, 
  /*  61 */  OBJECT_61, 
  /*  62 */  OBJECT_62, 
  /*  63 */  OBJECT_63, 
  /*  64 */  OBJECT_64, 
  /*  65 */  OBJECT_65, 
  /*  66 */  OBJECT_66, 
  /*  67 */  OBJECT_67, 
  /*  68 */  OBJECT_68, 
  /*  69 */  OBJECT_69, 
  /*  70 */  OBJECT_70, 
  /*  71 */  OBJECT_71, 
  /*  72 */  OBJECT_72, 
  /*  73 */  OBJECT_73, 
  /*  74 */  OBJECT_74, 
  /*  75 */  OBJECT_75, 
  /*  76 */  OBJECT_76, 
  /*  77 */  OBJECT_77, 
  /*  78 */  OBJECT_78, 
  /*  79 */  OBJECT_79, 
  /*  80 */  OBJECT_80, 
  /*  81 */  OBJECT_81, 
  /*  82 */  OBJECT_82, 
  /*  83 */  OBJECT_83, 
  /*  84 */  OBJECT_84, 
  /*  85 */  OBJECT_85, 
  /*  86 */  OBJECT_86, 
  /*  87 */  OBJECT_87, 
  /*  88 */  OBJECT_88, 
  /*  89 */  OBJECT_89, 
  /*  90 */  OBJECT_90, 
  /*  91 */  OBJECT_91, 
  /*  92 */  OBJECT_92, 
  /*  93 */  OBJECT_93, 
  /*  94 */  OBJECT_94, 
  /*  95 */  OBJECT_95, 
  /*  96 */  OBJECT_96, 
  /*  97 */  OBJECT_97, 
  /*  98 */  OBJECT_98, 
  /*  99 */  OBJECT_99, 
  /* 100 */  OBJECT_100,
  /* 101 */  OBJECT_101,
  /* 102 */  OBJECT_102,
  /* 103 */  OBJECT_103,
  /* 104 */  OBJECT_104,
  /* 105 */  OBJECT_105,
  /* 106 */  OBJECT_106,
  /* 107 */  OBJECT_107,
  /* 108 */  OBJECT_108,
  /* 109 */  OBJECT_109,
  /* 110 */  OBJECT_110,
  /* 111 */  OBJECT_111,
  /* 112 */  OBJECT_112,
  /* 113 */  OBJECT_113,
  /* 114 */  OBJECT_114,
  /* 115 */  OBJECT_115,
  /* 116 */  OBJECT_116,
  /* 117 */  OBJECT_117,
  /* 118 */  OBJECT_118,
  /* 119 */  OBJECT_119,
  /* 120 */  OBJECT_120,
  /* 121 */  OBJECT_121,
  /* 122 */  OBJECT_122,
  /* 123 */  OBJECT_123,
  /* 124 */  OBJECT_124,
  /* 125 */  OBJECT_125,
  /* 126 */  OBJECT_126,
  /* 127 */  OBJECT_127,
  /* 128 */  OBJECT_128,
  /* 129 */  OBJECT_129,
  /* 130 */  OBJECT_130,
  /* 131 */  OBJECT_131,
  /* 132 */  OBJECT_132,
  /* 133 */  OBJECT_133,
  /* 134 */  OBJECT_134,
  /* 135 */  OBJECT_135,
  /* 136 */  OBJECT_136,
  /* 137 */  OBJECT_137,
  /* 138 */  OBJECT_138,
  /* 139 */  OBJECT_139,
  /* 140 */  OBJECT_140,
  /* 141 */  OBJECT_141,
  /* 142 */  OBJECT_142,
  /* 143 */  OBJECT_143,
  /* 144 */  OBJECT_144,
  /* 145 */  OBJECT_145,
  /* 146 */  OBJECT_146,
  /* 147 */  OBJECT_147,
  /* 148 */  OBJECT_148,
  /* 149 */  OBJECT_149,
  /* 150 */  OBJECT_150,
  /* 151 */  OBJECT_151,
  /* 152 */  OBJECT_152,
  /* 153 */  OBJECT_153,
  /* 154 */  OBJECT_154,
  /* 155 */  OBJECT_155,
  /* 156 */  OBJECT_156,
  /* 157 */  OBJECT_157,
  /* 158 */  OBJECT_158,
  /* 159 */  OBJECT_159,
  /* 160 */  OBJECT_160,
  /* 161 */  OBJECT_161, // start of 4C
  /* 162 */  OBJECT_162,
  /* 163 */  OBJECT_163,
  /* 164 */  OBJECT_164,
  /* 165 */  OBJECT_165,
  /* 166 */  OBJECT_166,
  /* 167 */  OBJECT_167,
  /* 168 */  OBJECT_168,
  /* 169 */  OBJECT_169,
  /* 170 */  OBJECT_170,
  /* 171 */  OBJECT_171,
  /* 172 */  OBJECT_172,
  /* 173 */  OBJECT_173,
  /* 174 */  OBJECT_174,
  /* 175 */  OBJECT_175,
  /* 176 */  OBJECT_176, // start of 2F4
  /* 177 */  OBJECT_177,
  /* 178 */  OBJECT_178,
  /* 179 */  OBJECT_179,
  /* 180 */  OBJECT_180,
  /* 181 */  OBJECT_181,
  /* 182 */  OBJECT_182,
  /* 183 */  OBJECT_183,
  /* 184 */  OBJECT_184,
  /* 185 */  OBJECT_185,
  /* 186 */  OBJECT_186,
  /* 187 */  OBJECT_187,
  /* 188 */  OBJECT_188,
  /* 189 */  OBJECT_189,
  /* 190 */  OBJECT_190,
  /* 191 */  OBJECT_191,
  /* 192 */  OBJECT_192,
  /* 193 */  OBJECT_193,
  /* 194 */  OBJECT_194,
  /* 195 */  OBJECT_195,
  /* 196 */  OBJECT_196,
  /* 197 */  OBJECT_197,
  /* 198 */  OBJECT_198,
  /* 199 */  OBJECT_199,
  /* 200 */  OBJECT_200,
  /* 201 */  OBJECT_201,
  /* 202 */  OBJECT_202,
  /* 203 */  OBJECT_203,
  /* 204 */  OBJECT_204,
  /* 205 */  OBJECT_205,
  /* 206 */  OBJECT_206,
  /* 207 */  OBJECT_207,
  /* 208 */  OBJECT_208,
  /* 209 */  OBJECT_209,
  /* 210 */  OBJECT_210,
  /* 211 */  OBJECT_211,
  /* 212 */  OBJECT_212,
  /* 213 */  OBJECT_213,
  /* 214 */  OBJECT_214,
  /* 215 */  OBJECT_215,
  /* 216 */  OBJECT_216,
  /* 217 */  OBJECT_217,
  /* 218 */  OBJECT_218,
  /* 219 */  OBJECT_219,
  /* 220 */  OBJECT_220,
  /* 221 */  OBJECT_221,
  /* 222 */  OBJECT_222,
  /* 223 */  OBJECT_223,
  /* 224 */  OBJECT_224,
  /* 225 */  OBJECT_225,
  /* 226 */  OBJECT_226,
  /* 227 */  OBJECT_227,
  /* 228 */  OBJECT_228,
  /* 229 */  OBJECT_229,
  /* 230 */  OBJECT_230,
  /* 231 */  OBJECT_231,
  /* 232 */  OBJECT_232,
  /* 233 */  OBJECT_233,
  /* 234 */  OBJECT_234,
  /* 235 */  OBJECT_235,
  /* 236 */  OBJECT_236,
  /* 237 */  OBJECT_237,
  /* 238 */  OBJECT_238,
  /* 239 */  OBJECT_239,
  /* 240 */  OBJECT_240,
  /* 241 */  OBJECT_241,
  /* 242 */  OBJECT_242,
  /* 243 */  OBJECT_243,
  /* 244 */  OBJECT_244,
  /* 245 */  OBJECT_245,
  /* 246 */  OBJECT_246,
  /* 247 */  OBJECT_247,
  /* 248 */  OBJECT_248,
  /* 249 */  OBJECT_249,
  /* 250 */  OBJECT_250,
  /* 251 */  OBJECT_251,
  /* 252 */  OBJECT_252,
  /* 253 */  OBJECT_253,
  /* 254 */  OBJECT_254,
  /* 255 */  OBJECT_255,
  /* 256 */  OBJECT_256,
  /* 257 */  OBJECT_257,
  /* 258 */  OBJECT_258,
  /* 259 */  OBJECT_259,
  /* 260 */  OBJECT_260,
  /* 261 */  OBJECT_261,
  /* 262 */  OBJECT_262,
  /* 263 */  OBJECT_263,
  /* 264 */  OBJECT_264,
  /* 265 */  OBJECT_265,
  /* 266 */  OBJECT_266,
  /* 267 */  OBJECT_267,
  /* 268 */  OBJECT_268,
  /* 269 */  OBJECT_269,
  /* 270 */  OBJECT_270,
  /* 271 */  OBJECT_271,
  /* 272 */  OBJECT_272,
  /* 273 */  OBJECT_273,
  /* 274 */  OBJECT_274,
  /* 275 */  OBJECT_275,
  /* 276 */  OBJECT_276,
  /* 277 */  OBJECT_277,
  /* 278 */  OBJECT_278,
  /* 279 */  OBJECT_279,
  /* 280 */  OBJECT_280,
  /* 281 */  OBJECT_281,
  /* 282 */  OBJECT_282,
  /* 283 */  OBJECT_283,
  /* 284 */  OBJECT_284,
  /* 285 */  OBJECT_285,
  /* 286 */  OBJECT_286,
  /* 287 */  OBJECT_287,
  /* 288 */  OBJECT_288,
  /* 289 */  OBJECT_289,
  /* 290 */  OBJECT_290,
  /* 291 */  OBJECT_291,
  /* 292 */  OBJECT_292, // start of 408
  /* 293 */  OBJECT_293,
  /* 294 */  OBJECT_294,
  /* 295 */  OBJECT_295,
  /* 296 */  OBJECT_296,
  /* 297 */  OBJECT_297,
  /* 298 */  OBJECT_298,
  /* 299 */  OBJECT_299,
  /* 300 */  OBJECT_300,
  /* 301 */  OBJECT_301,
  /* 302 */  OBJECT_302,
  /* 303 */  OBJECT_303,
  /* 304 */  OBJECT_304,
  /* 305 */  OBJECT_305,
  /* 306 */  OBJECT_306,
  /* 307 */  OBJECT_307,
  /* 308 */  OBJECT_308,
  /* 309 */  OBJECT_309,
  /* 310 */  OBJECT_310,
  /* 311 */  OBJECT_311,
  /* 312 */  OBJECT_312,
  /* 313 */  OBJECT_313,
  /* 314 */  OBJECT_314,
  /* 315 */  OBJECT_315,
  /* 316 */  OBJECT_316,
  /* 317 */  OBJECT_317,
  /* 318 */  OBJECT_318,
  /* 319 */  OBJECT_319,
  /* 320 */  OBJECT_320,
  /* 321 */  OBJECT_321,
  /* 322 */  OBJECT_6C_LASERS, // start of 6C
  /* 323 */  OBJECT_6C_CHECKPOINT,
  /* 324 */  OBJECT_6C_SILVER_RING,
  /* 325 */  OBJECT_6C_STAR_RING,
  /* 326 */  OBJECT_6C_METEO_WARP,
  /* 327 */  OBJECT_6C_BOMB,
  /* 328 */  OBJECT_328,
  /* 329 */  OBJECT_329,
  /* 330 */  OBJECT_330,
  /* 331 */  OBJECT_331,
  /* 332 */  OBJECT_332,
  /* 333 */  OBJECT_333,
  /* 334 */  OBJECT_6C_CORN_ARCH,
  /* 335 */  OBJECT_6C_1UP,
  /* 336 */  OBJECT_6C_GOLD_RING,
  /* 337 */  OBJECT_6C_WING_REPAIR,
  /* 338 */  OBJECT_6C_TRAINING_RING,
  /* 339 */  OBJECT_339, // start of 8C
  /* 340 */  OBJECT_340,
  /* 341 */  OBJECT_341,
  /* 342 */  OBJECT_342,
  /* 343 */  OBJECT_343,
  /* 344 */  OBJECT_344,
  /* 345 */  OBJECT_345,
  /* 346 */  OBJECT_346,
  /* 347 */  OBJECT_347,
  /* 348 */  OBJECT_348,
  /* 349 */  OBJECT_349,
  /* 350 */  OBJECT_350,
  /* 351 */  OBJECT_351,
  /* 352 */  OBJECT_352,
  /* 353 */  OBJECT_353,
  /* 354 */  OBJECT_354,
  /* 355 */  OBJECT_355,
  /* 356 */  OBJECT_356,
  /* 357 */  OBJECT_357,
  /* 358 */  OBJECT_358,
  /* 359 */  OBJECT_359,
  /* 360 */  OBJECT_360,
  /* 361 */  OBJECT_361,
  /* 362 */  OBJECT_362,
  /* 363 */  OBJECT_363,
  /* 364 */  OBJECT_364,
  /* 365 */  OBJECT_365,
  /* 366 */  OBJECT_366,
  /* 367 */  OBJECT_367,
  /* 368 */  OBJECT_368,
  /* 369 */  OBJECT_369,
  /* 370 */  OBJECT_370,
  /* 371 */  OBJECT_371,
  /* 372 */  OBJECT_372,
  /* 373 */  OBJECT_373,
  /* 374 */  OBJECT_374,
  /* 375 */  OBJECT_375,
  /* 376 */  OBJECT_376,
  /* 377 */  OBJECT_377,
  /* 378 */  OBJECT_378,
  /* 379 */  OBJECT_379,
  /* 380 */  OBJECT_380,
  /* 381 */  OBJECT_381,
  /* 382 */  OBJECT_382,
  /* 383 */  OBJECT_383,
  /* 384 */  OBJECT_384,
  /* 385 */  OBJECT_385,
  /* 386 */  OBJECT_386,
  /* 387 */  OBJECT_387,
  /* 388 */  OBJECT_388,
  /* 389 */  OBJECT_389,
  /* 390 */  OBJECT_390,
  /* 391 */  OBJECT_391,
  /* 392 */  OBJECT_392,
  /* 393 */  OBJECT_393,
  /* 394 */  OBJECT_394,
  /* 395 */  OBJECT_395,
  /* 396 */  OBJECT_396,
  /* 397 */  OBJECT_397,
  /* 398 */  OBJECT_398,
  /* 399 */  OBJECT_399,
  /* 400 */  OBJECT_ID_MAX,
} ObjectId;

#define OBJECT_UNK_400 400
#define OBJECT_UNK_401 401
#define OBJECT_UNK_402 402
#define OBJECT_UNK_403 403
#define OBJECT_UNK_404 404
#define OBJECT_UNK_405 405
#define OBJECT_UNK_406 406

#define OBJECT_UNK_1000 1000

#endif
