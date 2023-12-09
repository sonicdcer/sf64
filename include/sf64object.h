#ifndef SF64_OBJECT
#define SF64_OBJECT

#include "libultra/ultra64.h"
#include "sf64math.h"

typedef struct {
    /* 0x00 */ f32 unk_0;
    /* 0x04 */ s16 unk_4;
    /* 0x06 */ s16 unk_6;
    /* 0x08 */ s16 unk_8;
    /* 0x0A */ s16 unk_A;
    /* 0x0C */ s16 unk_C;
    /* 0x0E */ s16 unk_E;
    /* 0x10 */ s16 unk_10;
} ObjectInit; // size = 0x14

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
    /* 0x0C */ f32* unk_0C; // some sort of script?
    /* 0x10 */ f32 unk_10; // z coordinate of something
    /* 0x14 */ s16 unk_14; // can be -1, 0, 1
    /* 0x16 */ s16 unk_16; // can be 0, 1, 2
    /* 0x18 */ u8 unk_18; // damage?
    /* 0x19 */ u8 unk_19; // can be 0, 1, 2
    /* 0x1C */ f32 unk_1C; // y offset of something
    /* 0x20 */ u8 unk_20; // increment for something
} ObjectStruct_1C; // size = 0x24

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ s32 pad1C;
    /* 0x20 */ Vec3f unk_20;
    /* 0x2C */ char pad2C[0xC];
    /* 0x38 */ Vec3f unk_38;
    /* 0x44 */ char pad44[0x14];
    /* 0x58 */ s32 unk_58;
    /* 0x5C */ char pad5C[4];
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6C */ char pad6C[4];
} Object_70; // size = 0x70

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ char unk40[0x8];
    /* 0x48 */ Vec3f unk_48;
    /* 0x54 */ f32 unk_54;
} Object_58; // size = 0x58

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4C */ s32 unk_4C;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ char pad51[3];
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ char pad58[8];
    /* 0x60 */ f32 unk_60;
    /* 0x64 */ Vec3f unk_64;
    /* 0x70 */ Vec3f unk_70;
    /* 0x7C */ char pad7C[4];
} Object_80; // size = 0x80

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ char pad44[1];
    /* 0x45 */ u8 unk_45; // could be short loaded as u8
    /* 0x46 */ s8 unk_46;
    /* 0x48 */ s32 unk_48;
} Object_4C; // size = 0x4C

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ u8 unk_46;
    /* 0x48 */ u16 unk_48;
    /* 0x4A */ u16 unk_4A;
    /* 0x4C */ s8 unk_4C;
    /* 0x4E */ s16 unk_4E;
    /* 0x50 */ f32 unk_50;
    /* 0x54 */ f32 unk_54;
    /* 0x58 */ f32 unk_58;
    /* 0x5C */ Vec3f unk_5C;
    /* 0x68 */ f32 unk_68;
} Object_6C; // size 0x6C

typedef struct {
    /* 0x00 */ Object obj;
    /* 0x1C */ ObjectStruct_1C unk_1C;
    /* 0x40 */ s32 unk_40;
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
    /* 0x80 */ Vec3f unk_80;
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
    /* 0x06C */ f32 unk_06C;
    /* 0x070 */ f32 unk_070;       
    /* 0x074 */ f32 unk_074;       
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
    /* 0x3FC */ Vec3f unk_3FC;
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
    /* 0x100 */ Vec3f unk_100;
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
  /*   0 */  OBJECT_80_0,  
  /*   1 */  OBJECT_80_1,  
  /*   2 */  OBJECT_80_2,  
  /*   3 */  OBJECT_80_3,  
  /*   4 */  OBJECT_80_4,  
  /*   5 */  OBJECT_80_5,  
  /*   6 */  OBJECT_80_6,  
  /*   7 */  OBJECT_80_7,  
  /*   8 */  OBJECT_80_8,  
  /*   9 */  OBJECT_80_9,  
  /*  10 */  OBJECT_80_10, 
  /*  11 */  OBJECT_80_11, 
  /*  12 */  OBJECT_80_12, 
  /*  13 */  OBJECT_80_13, 
  /*  14 */  OBJECT_80_14, 
  /*  15 */  OBJECT_80_15, 
  /*  16 */  OBJECT_80_16, 
  /*  17 */  OBJECT_80_17, 
  /*  18 */  OBJECT_80_18, 
  /*  19 */  OBJECT_80_19, 
  /*  20 */  OBJECT_80_20, 
  /*  21 */  OBJECT_80_21, 
  /*  22 */  OBJECT_80_22, 
  /*  23 */  OBJECT_80_23, 
  /*  24 */  OBJECT_80_24, 
  /*  25 */  OBJECT_80_25, 
  /*  26 */  OBJECT_80_26, 
  /*  27 */  OBJECT_80_27, 
  /*  28 */  OBJECT_80_28, 
  /*  29 */  OBJECT_80_29, 
  /*  30 */  OBJECT_80_30, 
  /*  31 */  OBJECT_80_31, 
  /*  32 */  OBJECT_80_32, 
  /*  33 */  OBJECT_80_33, 
  /*  34 */  OBJECT_80_34, 
  /*  35 */  OBJECT_80_35, 
  /*  36 */  OBJECT_80_36, 
  /*  37 */  OBJECT_80_37, 
  /*  38 */  OBJECT_80_38, 
  /*  39 */  OBJECT_80_39, 
  /*  40 */  OBJECT_80_40, 
  /*  41 */  OBJECT_80_41, 
  /*  42 */  OBJECT_80_42, 
  /*  43 */  OBJECT_80_43, 
  /*  44 */  OBJECT_80_44, 
  /*  45 */  OBJECT_80_45, 
  /*  46 */  OBJECT_80_46, 
  /*  47 */  OBJECT_80_47, 
  /*  48 */  OBJECT_80_48, 
  /*  49 */  OBJECT_80_49, 
  /*  50 */  OBJECT_80_50, 
  /*  51 */  OBJECT_80_51, 
  /*  52 */  OBJECT_80_52, 
  /*  53 */  OBJECT_80_53, 
  /*  54 */  OBJECT_80_54, 
  /*  55 */  OBJECT_80_55, 
  /*  56 */  OBJECT_80_56, 
  /*  57 */  OBJECT_80_57, 
  /*  58 */  OBJECT_80_58, 
  /*  59 */  OBJECT_80_59, 
  /*  60 */  OBJECT_80_60, 
  /*  61 */  OBJECT_80_61, 
  /*  62 */  OBJECT_80_62, 
  /*  63 */  OBJECT_80_63, 
  /*  64 */  OBJECT_80_64, 
  /*  65 */  OBJECT_80_65, 
  /*  66 */  OBJECT_80_66, 
  /*  67 */  OBJECT_80_67, 
  /*  68 */  OBJECT_80_68, 
  /*  69 */  OBJECT_80_69, 
  /*  70 */  OBJECT_80_70, 
  /*  71 */  OBJECT_80_71, 
  /*  72 */  OBJECT_80_72, 
  /*  73 */  OBJECT_80_73, 
  /*  74 */  OBJECT_80_74, 
  /*  75 */  OBJECT_80_75, 
  /*  76 */  OBJECT_80_76, 
  /*  77 */  OBJECT_80_77, 
  /*  78 */  OBJECT_80_78, 
  /*  79 */  OBJECT_80_79, 
  /*  80 */  OBJECT_80_80, 
  /*  81 */  OBJECT_80_81, 
  /*  82 */  OBJECT_80_82, 
  /*  83 */  OBJECT_80_83, 
  /*  84 */  OBJECT_80_84, 
  /*  85 */  OBJECT_80_85, 
  /*  86 */  OBJECT_80_86, 
  /*  87 */  OBJECT_80_87, 
  /*  88 */  OBJECT_80_88, 
  /*  89 */  OBJECT_80_89, 
  /*  90 */  OBJECT_80_90, 
  /*  91 */  OBJECT_80_91, 
  /*  92 */  OBJECT_80_92, 
  /*  93 */  OBJECT_80_93, 
  /*  94 */  OBJECT_80_94, 
  /*  95 */  OBJECT_80_95, 
  /*  96 */  OBJECT_80_96, 
  /*  97 */  OBJECT_80_97, 
  /*  98 */  OBJECT_80_98, 
  /*  99 */  OBJECT_80_99, 
  /* 100 */  OBJECT_80_100,
  /* 101 */  OBJECT_80_101,
  /* 102 */  OBJECT_80_102,
  /* 103 */  OBJECT_80_103,
  /* 104 */  OBJECT_80_104,
  /* 105 */  OBJECT_80_105,
  /* 106 */  OBJECT_80_106,
  /* 107 */  OBJECT_80_107,
  /* 108 */  OBJECT_80_108,
  /* 109 */  OBJECT_80_109,
  /* 110 */  OBJECT_80_110,
  /* 111 */  OBJECT_80_111,
  /* 112 */  OBJECT_80_112,
  /* 113 */  OBJECT_80_113,
  /* 114 */  OBJECT_80_114,
  /* 115 */  OBJECT_80_115,
  /* 116 */  OBJECT_80_116,
  /* 117 */  OBJECT_80_117,
  /* 118 */  OBJECT_80_118,
  /* 119 */  OBJECT_80_119,
  /* 120 */  OBJECT_80_120,
  /* 121 */  OBJECT_80_121,
  /* 122 */  OBJECT_80_122,
  /* 123 */  OBJECT_80_123,
  /* 124 */  OBJECT_80_124,
  /* 125 */  OBJECT_80_125,
  /* 126 */  OBJECT_80_126,
  /* 127 */  OBJECT_80_127,
  /* 128 */  OBJECT_80_128,
  /* 129 */  OBJECT_80_129,
  /* 130 */  OBJECT_80_130,
  /* 131 */  OBJECT_80_131,
  /* 132 */  OBJECT_80_132,
  /* 133 */  OBJECT_80_133,
  /* 134 */  OBJECT_80_134,
  /* 135 */  OBJECT_80_135,
  /* 136 */  OBJECT_80_136,
  /* 137 */  OBJECT_80_137,
  /* 138 */  OBJECT_80_138,
  /* 139 */  OBJECT_80_139,
  /* 140 */  OBJECT_80_140,
  /* 141 */  OBJECT_80_141,
  /* 142 */  OBJECT_80_142,
  /* 143 */  OBJECT_80_143,
  /* 144 */  OBJECT_80_144,
  /* 145 */  OBJECT_80_145,
  /* 146 */  OBJECT_80_146,
  /* 147 */  OBJECT_80_147,
  /* 148 */  OBJECT_80_148,
  /* 149 */  OBJECT_80_149,
  /* 150 */  OBJECT_80_150,
  /* 151 */  OBJECT_80_151,
  /* 152 */  OBJECT_80_152,
  /* 153 */  OBJECT_80_153,
  /* 154 */  OBJECT_80_154,
  /* 155 */  OBJECT_80_155,
  /* 156 */  OBJECT_80_156,
  /* 157 */  OBJECT_80_157,
  /* 158 */  OBJECT_80_158,
  /* 159 */  OBJECT_80_159,
  /* 160 */  OBJECT_80_160,
  /* 161 */  OBJECT_4C_161,
  /* 162 */  OBJECT_4C_162,
  /* 163 */  OBJECT_4C_163,
  /* 164 */  OBJECT_4C_164,
  /* 165 */  OBJECT_4C_165,
  /* 166 */  OBJECT_4C_166,
  /* 167 */  OBJECT_4C_167,
  /* 168 */  OBJECT_4C_168,
  /* 169 */  OBJECT_4C_169,
  /* 170 */  OBJECT_4C_170,
  /* 171 */  OBJECT_4C_171,
  /* 172 */  OBJECT_4C_172,
  /* 173 */  OBJECT_4C_173,
  /* 174 */  OBJECT_4C_174,
  /* 175 */  OBJECT_4C_175,
  /* 176 */  OBJECT_2F4_176,
  /* 177 */  OBJECT_2F4_177,
  /* 178 */  OBJECT_2F4_178,
  /* 179 */  OBJECT_2F4_179,
  /* 180 */  OBJECT_2F4_180,
  /* 181 */  OBJECT_2F4_181,
  /* 182 */  OBJECT_2F4_182,
  /* 183 */  OBJECT_2F4_183,
  /* 184 */  OBJECT_2F4_184,
  /* 185 */  OBJECT_2F4_185,
  /* 186 */  OBJECT_2F4_186,
  /* 187 */  OBJECT_2F4_187,
  /* 188 */  OBJECT_2F4_188,
  /* 189 */  OBJECT_2F4_189,
  /* 190 */  OBJECT_2F4_190,
  /* 191 */  OBJECT_2F4_191,
  /* 192 */  OBJECT_2F4_192,
  /* 193 */  OBJECT_2F4_193,
  /* 194 */  OBJECT_2F4_194,
  /* 195 */  OBJECT_2F4_195,
  /* 196 */  OBJECT_2F4_196,
  /* 197 */  OBJECT_2F4_197,
  /* 198 */  OBJECT_2F4_198,
  /* 199 */  OBJECT_2F4_199,
  /* 200 */  OBJECT_2F4_200,
  /* 201 */  OBJECT_2F4_201,
  /* 202 */  OBJECT_2F4_202,
  /* 203 */  OBJECT_2F4_203,
  /* 204 */  OBJECT_2F4_204,
  /* 205 */  OBJECT_2F4_205,
  /* 206 */  OBJECT_2F4_206,
  /* 207 */  OBJECT_2F4_207,
  /* 208 */  OBJECT_2F4_208,
  /* 209 */  OBJECT_2F4_209,
  /* 210 */  OBJECT_2F4_210,
  /* 211 */  OBJECT_2F4_211,
  /* 212 */  OBJECT_2F4_212,
  /* 213 */  OBJECT_2F4_213,
  /* 214 */  OBJECT_2F4_214,
  /* 215 */  OBJECT_2F4_215,
  /* 216 */  OBJECT_2F4_216,
  /* 217 */  OBJECT_2F4_217,
  /* 218 */  OBJECT_2F4_218,
  /* 219 */  OBJECT_2F4_219,
  /* 220 */  OBJECT_2F4_220,
  /* 221 */  OBJECT_2F4_221,
  /* 222 */  OBJECT_2F4_222,
  /* 223 */  OBJECT_2F4_223,
  /* 224 */  OBJECT_2F4_224,
  /* 225 */  OBJECT_2F4_225,
  /* 226 */  OBJECT_2F4_226,
  /* 227 */  OBJECT_2F4_227,
  /* 228 */  OBJECT_2F4_228,
  /* 229 */  OBJECT_2F4_229,
  /* 230 */  OBJECT_2F4_230,
  /* 231 */  OBJECT_2F4_231,
  /* 232 */  OBJECT_2F4_232,
  /* 233 */  OBJECT_2F4_233,
  /* 234 */  OBJECT_2F4_234,
  /* 235 */  OBJECT_2F4_235,
  /* 236 */  OBJECT_2F4_236,
  /* 237 */  OBJECT_2F4_237,
  /* 238 */  OBJECT_2F4_238,
  /* 239 */  OBJECT_2F4_239,
  /* 240 */  OBJECT_2F4_240,
  /* 241 */  OBJECT_2F4_241,
  /* 242 */  OBJECT_2F4_242,
  /* 243 */  OBJECT_2F4_243,
  /* 244 */  OBJECT_2F4_244,
  /* 245 */  OBJECT_2F4_245,
  /* 246 */  OBJECT_2F4_246,
  /* 247 */  OBJECT_2F4_247,
  /* 248 */  OBJECT_2F4_248,
  /* 249 */  OBJECT_2F4_249,
  /* 250 */  OBJECT_2F4_250,
  /* 251 */  OBJECT_2F4_251,
  /* 252 */  OBJECT_2F4_252,
  /* 253 */  OBJECT_2F4_253,
  /* 254 */  OBJECT_2F4_254,
  /* 255 */  OBJECT_2F4_255,
  /* 256 */  OBJECT_2F4_256,
  /* 257 */  OBJECT_2F4_257,
  /* 258 */  OBJECT_2F4_258,
  /* 259 */  OBJECT_2F4_259,
  /* 260 */  OBJECT_2F4_260,
  /* 261 */  OBJECT_2F4_261,
  /* 262 */  OBJECT_2F4_262,
  /* 263 */  OBJECT_2F4_263,
  /* 264 */  OBJECT_2F4_264,
  /* 265 */  OBJECT_2F4_265,
  /* 266 */  OBJECT_2F4_266,
  /* 267 */  OBJECT_2F4_267,
  /* 268 */  OBJECT_2F4_268,
  /* 269 */  OBJECT_2F4_269,
  /* 270 */  OBJECT_2F4_270,
  /* 271 */  OBJECT_2F4_271,
  /* 272 */  OBJECT_2F4_272,
  /* 273 */  OBJECT_2F4_273,
  /* 274 */  OBJECT_2F4_274,
  /* 275 */  OBJECT_2F4_275,
  /* 276 */  OBJECT_2F4_276,
  /* 277 */  OBJECT_2F4_277,
  /* 278 */  OBJECT_2F4_278,
  /* 279 */  OBJECT_2F4_279,
  /* 280 */  OBJECT_2F4_280,
  /* 281 */  OBJECT_2F4_281,
  /* 282 */  OBJECT_2F4_282,
  /* 283 */  OBJECT_2F4_283,
  /* 284 */  OBJECT_2F4_284,
  /* 285 */  OBJECT_2F4_285,
  /* 286 */  OBJECT_2F4_286,
  /* 287 */  OBJECT_2F4_287,
  /* 288 */  OBJECT_2F4_288,
  /* 289 */  OBJECT_2F4_289,
  /* 290 */  OBJECT_2F4_290,
  /* 291 */  OBJECT_2F4_291,
  /* 292 */  OBJECT_408_292,
  /* 293 */  OBJECT_408_293,
  /* 294 */  OBJECT_408_294,
  /* 295 */  OBJECT_408_295,
  /* 296 */  OBJECT_408_296,
  /* 297 */  OBJECT_408_297,
  /* 298 */  OBJECT_408_298,
  /* 299 */  OBJECT_408_299,
  /* 300 */  OBJECT_408_300,
  /* 301 */  OBJECT_408_301,
  /* 302 */  OBJECT_408_302,
  /* 303 */  OBJECT_408_303,
  /* 304 */  OBJECT_408_304,
  /* 305 */  OBJECT_408_305,
  /* 306 */  OBJECT_408_306,
  /* 307 */  OBJECT_408_307,
  /* 308 */  OBJECT_408_308,
  /* 309 */  OBJECT_408_309,
  /* 310 */  OBJECT_408_310,
  /* 311 */  OBJECT_408_311,
  /* 312 */  OBJECT_408_312,
  /* 313 */  OBJECT_408_313,
  /* 314 */  OBJECT_408_314,
  /* 315 */  OBJECT_408_315,
  /* 316 */  OBJECT_408_316,
  /* 317 */  OBJECT_408_317,
  /* 318 */  OBJECT_408_318,
  /* 319 */  OBJECT_408_319,
  /* 320 */  OBJECT_408_320,
  /* 321 */  OBJECT_408_321,
  /* 322 */  OBJECT_6C_322,
  /* 323 */  OBJECT_6C_323,
  /* 324 */  OBJECT_6C_324,
  /* 325 */  OBJECT_6C_325,
  /* 326 */  OBJECT_6C_326,
  /* 327 */  OBJECT_6C_327,
  /* 328 */  OBJECT_6C_328,
  /* 329 */  OBJECT_6C_329,
  /* 330 */  OBJECT_6C_330,
  /* 331 */  OBJECT_6C_331,
  /* 332 */  OBJECT_6C_332,
  /* 333 */  OBJECT_6C_333,
  /* 334 */  OBJECT_6C_334,
  /* 335 */  OBJECT_6C_335,
  /* 336 */  OBJECT_6C_336,
  /* 337 */  OBJECT_6C_337,
  /* 338 */  OBJECT_6C_338,
  /* 339 */  OBJECT_8C_339,
  /* 340 */  OBJECT_8C_340,
  /* 341 */  OBJECT_8C_341,
  /* 342 */  OBJECT_8C_342,
  /* 343 */  OBJECT_8C_343,
  /* 344 */  OBJECT_8C_344,
  /* 345 */  OBJECT_8C_345,
  /* 346 */  OBJECT_8C_346,
  /* 347 */  OBJECT_8C_347,
  /* 348 */  OBJECT_8C_348,
  /* 349 */  OBJECT_8C_349,
  /* 350 */  OBJECT_8C_350,
  /* 351 */  OBJECT_8C_351,
  /* 352 */  OBJECT_8C_352,
  /* 353 */  OBJECT_8C_353,
  /* 354 */  OBJECT_8C_354,
  /* 355 */  OBJECT_8C_355,
  /* 356 */  OBJECT_8C_356,
  /* 357 */  OBJECT_8C_357,
  /* 358 */  OBJECT_8C_358,
  /* 359 */  OBJECT_8C_359,
  /* 360 */  OBJECT_8C_360,
  /* 361 */  OBJECT_8C_361,
  /* 362 */  OBJECT_8C_362,
  /* 363 */  OBJECT_8C_363,
  /* 364 */  OBJECT_8C_364,
  /* 365 */  OBJECT_8C_365,
  /* 366 */  OBJECT_8C_366,
  /* 367 */  OBJECT_8C_367,
  /* 368 */  OBJECT_8C_368,
  /* 369 */  OBJECT_8C_369,
  /* 370 */  OBJECT_8C_370,
  /* 371 */  OBJECT_8C_371,
  /* 372 */  OBJECT_8C_372,
  /* 373 */  OBJECT_8C_373,
  /* 374 */  OBJECT_8C_374,
  /* 375 */  OBJECT_8C_375,
  /* 376 */  OBJECT_8C_376,
  /* 377 */  OBJECT_8C_377,
  /* 378 */  OBJECT_8C_378,
  /* 379 */  OBJECT_8C_379,
  /* 380 */  OBJECT_8C_380,
  /* 381 */  OBJECT_8C_381,
  /* 382 */  OBJECT_8C_382,
  /* 383 */  OBJECT_8C_383,
  /* 384 */  OBJECT_8C_384,
  /* 385 */  OBJECT_8C_385,
  /* 386 */  OBJECT_8C_386,
  /* 387 */  OBJECT_8C_387,
  /* 388 */  OBJECT_8C_388,
  /* 389 */  OBJECT_8C_389,
  /* 390 */  OBJECT_8C_390,
  /* 391 */  OBJECT_8C_391,
  /* 392 */  OBJECT_8C_392,
  /* 393 */  OBJECT_8C_393,
  /* 394 */  OBJECT_8C_394,
  /* 395 */  OBJECT_8C_395,
  /* 396 */  OBJECT_8C_396,
  /* 397 */  OBJECT_8C_397,
  /* 398 */  OBJECT_8C_398,
  /* 399 */  OBJECT_8C_399,
  /* 400 */  OBJECT_ID_MAX,
} ObjectId;

#endif
