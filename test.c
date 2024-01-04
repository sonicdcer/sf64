typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectInfo info;
    /* 0x040 */ s32 index;
    /* 0x044 */ u8 unk_044;
    /* 0x045 */ char pad45[1];
    /* 0x046 */ s16 unk_046;
    /* 0x048 */ s16 unk_048;
    /* 0x04A */ s16 unk_04A;
    /* 0x04C */ s16 timer_04C;
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ s32 unk_050;
    /* 0x054 */ s32 unk_054;
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
    /* 0x0A0 */ s32 unkA0;                          /* inferred */
    /* 0x0A4 */ char padA4[8];                      /* maybe part of unkA0[3]? */
    /* 0x0AC */ s32 unkAC;                          /* inferred */
    /* 0x0B0 */ s32 unk_0B0;
    /* 0x0B4 */ s16 unk_0B4;
    /* 0x0B6 */ s16 unk_0B6;
    /* 0x0B8 */ s16 unk_0B8;
    /* 0x0BA */ char padBA[2];
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
    /* 0x0D1 */ char padD1[1];
    /* 0x0D2 */ s16 unk_0D2;
    /* 0x0D4 */ s16 unk_0D4;
    /* 0x0D6 */ u16 unk_0D6;
    /* 0x0D8 */ Vec3f unk_0D8;
    /* 0x0E4 */ s16 unk_0E4;
    /* 0x0E6 */ s16 unk_0E6;
    /* 0x0E8 */ Vec3f unk_0E8;
    /* 0x0F4 */ Vec3f unk_0F4;
    /* 0x100 */ Vec3f sfxPos;
    /* 0x10C */ f32 unk_10C;
    /* 0x110 */ f32 scale;
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
    /* 0x18C */ Vec3f unk_18C[0x1C];
    /* 0x2DC */ Vec3f unk_2DC;
    /* 0x2E8 */ Vec3f unk_2E8;
} Object_2F4;                                       /* size = 0x2F4 */

typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectInfo info;
    /* 0x040 */ s32 index;
    /* 0x044 */ char pad44[0xA];                    /* maybe part of index[3]? */
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ s16 timer_050;
    /* 0x052 */ s16 timer_052;
    /* 0x054 */ s16 timer_054;
    /* 0x056 */ s16 timer_056;
    /* 0x058 */ s16 timer_058;
    /* 0x05A */ s16 timer_05A;
    /* 0x05C */ s16 timer_05C;
    /* 0x05E */ u8 unk_05E;
    /* 0x05F */ char pad5F[1];
    /* 0x060 */ s16 unk_060;
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
    /* 0x08C */ char pad8C[6];                      /* maybe part of unk_08A[4]? */
    /* 0x092 */ u16 unk_092;
    /* 0x094 */ char pad94[4];                      /* maybe part of unk_092[3]? */
    /* 0x098 */ s16 unk98;                          /* inferred */
    /* 0x09A */ s16 unk9A;                          /* inferred */
    /* 0x09C */ char pad9C[4];                      /* maybe part of unk9A[3]? */
    /* 0x0A0 */ s16 unkA0;                          /* inferred */
    /* 0x0A2 */ char padA2[2];
    /* 0x0A4 */ s16 unkA4;                          /* inferred */
    /* 0x0A6 */ s16 unk_0A6;
    /* 0x0A8 */ s16 unkA8;                          /* inferred */
    /* 0x0AA */ s16 unkAA;                          /* inferred */
    /* 0x0AC */ char padAC[2];
    /* 0x0AE */ s16 unk_0AE;
    /* 0x0B0 */ char padB0[0x16];                   /* maybe part of unk_0AE[0xC]? */
    /* 0x0C6 */ u16 unk_0C6;
    /* 0x0C8 */ char padC8[8];                      /* maybe part of unk_0C6[5]? */
    /* 0x0D0 */ s16 unk_0D0;
    /* 0x0D2 */ char padD2[4];                      /* maybe part of unk_0D0[3]? */
    /* 0x0D6 */ s16 unk_0D6;
    /* 0x0D8 */ char padD8[4];                      /* maybe part of unk_0D6[3]? */
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
    /* 0x118 */ char pad118[0x7C];                  /* maybe part of unk_114[0x20]? */
    /* 0x194 */ f32 unk_194;
    /* 0x198 */ f32 unk_198;
    /* 0x19C */ f32 unk_19C;
    /* 0x1A0 */ char pad1A0[0x168];                 /* maybe part of unk_19C[0x5B]? */
    /* 0x308 */ Vec3f unk_308;
    /* 0x314 */ char pad314[0xE4];                  /* maybe part of unk_308[0x14]? */
    /* 0x3F8 */ f32 unk_3F8;
    /* 0x3FC */ Vec3f sfxPos;
} Object_408;                                       /* size = 0x408 */

typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectInfo info;
    /* 0x040 */ s32 index;
    /* 0x044 */ char pad44[0xA];                    /* maybe part of index[3]? */
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ s16 timer_050;
    /* 0x052 */ s16 timer_052;
    /* 0x054 */ s16 timer_054;
    /* 0x056 */ s16 timer_056;
    /* 0x058 */ s16 timer_058;
    /* 0x05A */ s16 timer_05A;
    /* 0x05C */ s16 timer_05C;
    /* 0x05E */ u8 unk_05E;
    /* 0x05F */ char pad5F[1];
    /* 0x060 */ s16 unk_060;
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
    /* 0x08C */ s16 unk8C;                          /* inferred */
    /* 0x08E */ s16 unk8E;                          /* inferred */
    /* 0x090 */ s16 unk90;                          /* inferred */
    /* 0x092 */ u16 unk_092;
    /* 0x094 */ s16 unk94;                          /* inferred */
    /* 0x096 */ s16 unk96;                          /* inferred */
    /* 0x098 */ s16 unk98;                          /* inferred */
    /* 0x09A */ s16 unk9A;                          /* inferred */
    /* 0x09C */ s16 unk9C;                          /* inferred */
    /* 0x09E */ s16 unk9E;                          /* inferred */
    /* 0x0A0 */ s16 unkA0;                          /* inferred */
    /* 0x0A2 */ s16 unkA2;                          /* inferred */
    /* 0x0A4 */ s16 unkA4;                          /* inferred */
    /* 0x0A6 */ s16 unk_0A6;
    /* 0x0A8 */ s16 unkA8;                          /* inferred */
    /* 0x0AA */ s16 unkAA;                          /* inferred */
    /* 0x0AC */ s16 unkAC;                          /* inferred */
    /* 0x0AE */ s16 unk_0AE;
    /* 0x0B0 */ s16 unkB0;                          /* inferred */
    /* 0x0B2 */ s16 unkB2;                          /* inferred */
    /* 0x0B4 */ s16 unkB4;                          /* inferred */
    /* 0x0B6 */ char padB6[4];                      /* maybe part of unkB4[3]? */
    /* 0x0BA */ s16 unkBA;                          /* inferred */
    /* 0x0BC */ s16 unkBC;                          /* inferred */
    /* 0x0BE */ char padBE[8];                      /* maybe part of unkBC[5]? */
    /* 0x0C6 */ u16 unk_0C6;
    /* 0x0C8 */ char padC8[8];                      /* maybe part of unk_0C6[5]? */
    /* 0x0D0 */ s16 unk_0D0;
    /* 0x0D2 */ char padD2[4];                      /* maybe part of unk_0D0[3]? */
    /* 0x0D6 */ s16 unk_0D6;
    /* 0x0D8 */ char padD8[4];                      /* maybe part of unk_0D6[3]? */
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
    /* 0x118 */ char pad118[0x7C];                  /* maybe part of unk_114[0x20]? */
    /* 0x194 */ f32 unk_194;
    /* 0x198 */ f32 unk_198;
    /* 0x19C */ f32 unk_19C;
    /* 0x1A0 */ Vec3f unk1A0;                       /* inferred */
    /* 0x1AC */ char pad1AC[0x15C];                 /* maybe part of unk1A0[0x1E]? */
    /* 0x308 */ Vec3f unk_308;
    /* 0x314 */ char pad314[0xE4];                  /* maybe part of unk_308[0x14]? */
    /* 0x3F8 */ f32 unk_3F8;
    /* 0x3FC */ Vec3f sfxPos;
} Object_408_318;                                   /* size = 0x408 */

struct _struct_D_E16C50_801BFBE0_0x10 {
    /* 0x00 */ f32 unk0;                            /* inferred */
    /* 0x04 */ f32 unk4;                            /* inferred */
    /* 0x08 */ f32 unk8;                            /* inferred */
    /* 0x0C */ char padC[4];
};                                                  /* size = 0x10 */

struct _struct_D_E16C50_801BFC10_0x10 {
    /* 0x00 */ f32 unk0;                            /* inferred */
    /* 0x04 */ f32 unk4;                            /* inferred */
    /* 0x08 */ f32 unk8;                            /* inferred */
    /* 0x0C */ char padC[4];
};                                                  /* size = 0x10 */

struct _struct_D_E16C50_801BFC40_0x10 {
    /* 0x00 */ f32 unk0;                            /* inferred */
    /* 0x04 */ f32 unk4;                            /* inferred */
    /* 0x08 */ f32 unk8;                            /* inferred */
    /* 0x0C */ char padC[4];
};                                                  /* size = 0x10 */

struct _struct_D_E16C50_801BFC94_0xC {
    /* 0x0 */ f32 unk0;                             /* inferred */
    /* 0x4 */ f32 unk4;                             /* inferred */
    /* 0x8 */ f32 unk8;                             /* inferred */
};                                                  /* size = 0xC */

struct _struct_D_E16C50_801BFE18_0xC {
    /* 0x0 */ f32 unk0;                             /* inferred */
    /* 0x4 */ f32 unk4;                             /* inferred */
    /* 0x8 */ f32 unk8;                             /* inferred */
};                                                  /* size = 0xC */

struct _struct_D_E16C50_801BFF38_0xC {
    /* 0x0 */ f32 unk0;                             /* inferred */
    /* 0x4 */ f32 unk4;                             /* inferred */
    /* 0x8 */ f32 unk8;                             /* inferred */
};                                                  /* size = 0xC */

struct _struct_D_E16C50_801C0098_0xC {
    /* 0x0 */ f32 unk0;                             /* inferred */
    /* 0x4 */ f32 unk4;                             /* inferred */
    /* 0x8 */ f32 unk8;                             /* inferred */
};                                                  /* size = 0xC */

struct _struct_D_E16C50_801C0150_0x10 {
    /* 0x00 */ f32 unk0;                            /* inferred */
    /* 0x04 */ f32 unk4;                            /* inferred */
    /* 0x08 */ f32 unk8;                            /* inferred */
    /* 0x0C */ char padC[4];
};                                                  /* size = 0x10 */

? func_80035DEC(f32, f32, f32);                     /* extern */
? func_80036318(PlayerShot *);                      /* extern */
? func_80038140(PlayerShot *);                      /* extern */
? func_8004D440(void *);                            /* extern */
s32 func_80062DBC(Vec3f *, f32 *, Object_80 *, f32, f32, f32); /* extern */
? func_8007CF30(f32, f32, f32, ?);                  /* extern */
? func_800815DC(s16, s32, u16, s16);                /* extern */
? func_80081A8C(f32, f32, f32, f32, s32);           /* extern */
s32 func_80081B24(f32, f32, Vec3f *, f32, f32);     /* extern */
? func_800AC290(PlayerShot *, ?, ?, s32, f32);      /* extern */
extern ? D_3000130;
extern ? D_3000470;
extern ? D_3000AF0;
extern ? D_3000C70;
extern ? D_3006AF0;
extern ? D_3006C70;
extern ? D_3006DE0;
extern AnimationHeader D_6000AE4;
extern Limb *D_6000DB0;
extern AnimationHeader D_6002628;
extern Limb *D_6002874;
extern ? D_6002C10;
extern AnimationHeader D_6005954;
extern Limb *D_6005A80;
extern ? D_6008EC8;
extern ? D_6008FC8;
extern ? D_6011A78;
extern AnimationHeader D_60135E0;
extern Limb *D_60136CC;
extern Limb *D_60137CC;
extern ? D_60137F0;
extern ? D_6014030;
extern AnimationHeader D_6014438;
extern Limb *D_6014504;
extern ? D_6014520;
extern ? D_6014FD0;
extern ? D_6018878;
extern ? D_6018C78;
extern ? D_6019078;
extern ? D_6019238;
extern ? D_6019338;
extern ? D_60194D0;
extern ? D_6019880;
extern ? D_6019E80;
extern AnimationHeader D_601DE50;
extern AnimationHeader D_601EC68;
extern Limb *D_601EDB4;
extern AnimationHeader D_6020A40;
extern Limb *D_6020C6C;
extern AnimationHeader D_6023780;
extern Limb *D_602390C;
extern ? D_6024A50;
extern AnimationHeader D_6024F80;
extern Limb *D_602512C;
extern AnimationHeader D_60260EC;
extern Limb *D_60263F8;
extern AnimationHeader D_602AC28;
extern Limb *D_602BD60;
extern ? D_6030D3C;
extern ? D_6030D58;
extern ? D_60314AC;
extern ? D_60314E4;
extern ? D_603151C;
extern ? D_6031D90;
extern f32 *D_E16C50_801C27C0;
extern ? D_E16C50_801C27C8;
extern ? D_E16C50_801C3A88;
extern ? D_E16C50_801C4190;
extern s32 D_E16C50_801C419C;
extern s32 D_E16C50_801C41A0;
extern s32 D_E16C50_801C41A4;
extern s32 D_E16C50_801C41A8;
extern s32 D_E16C50_801C41AC;
extern ? D_E16C50_801C41B8;
extern f32 D_E16C50_801C41BC;
extern f32 D_E16C50_801C41C0;
extern f32 D_E16C50_801C41C4;
extern f32 D_E16C50_801C41C8;
extern f32 D_E16C50_801C41CC;
extern f32 D_E16C50_801C41DC;
extern f32 D_E16C50_801C41E0;
extern f32 D_E16C50_801C4218;
extern f32 D_E16C50_801C421C;
extern f32 D_E16C50_801C4220;
extern f32 D_E16C50_801C4224;
extern f32 D_E16C50_801C4228;
extern s32 D_E16C50_801C4230;
extern s32 D_E16C50_801C424C;
extern s32 D_E16C50_801C4250;
extern s32 D_E16C50_801C4254;
extern s32 D_E16C50_801C42A0;
extern s32 D_E16C50_801C42A4;
extern s32 D_E16C50_801C42A8;
extern s32 D_E16C50_801C42AC;
extern s32 D_E16C50_801C42B0;
extern s32 D_E16C50_801C42B4;
extern s32 D_E16C50_801C42B8;
extern s32 D_E16C50_801C42BC;
extern s32 D_E16C50_801C42C4;
extern s32 D_E16C50_801C42C8;
extern s32 D_E16C50_801C42CC;
extern s32 D_E16C50_801C42E0;
extern s32 D_E16C50_801C42E4;
extern s32 D_E16C50_801C42F8;
extern s32 D_E16C50_801C42FC;
extern ? D_E16C50_801C4304;
extern f32 D_E16C50_801C4308;
extern ? D_E16C50_801C4310;
extern f32 D_E16C50_801C4330;
extern f32 D_E16C50_801C4334;
extern f32 D_E16C50_801C4338;
extern f32 D_E16C50_801C433C;
extern f32 D_E16C50_801C4340;
extern f32 D_E16C50_801C4344;
extern f32 D_E16C50_801C4348;
extern f32 D_E16C50_801C434C;
extern f32 D_E16C50_801C4350;
extern f32 D_E16C50_801C4354;
extern f32 D_E16C50_801C43D8;
extern f32 D_E16C50_801C43E0;
extern f32 D_E16C50_801C43F0;
extern f32 D_E16C50_801C43FC;
extern f32 D_E16C50_801C442C;
extern f32 D_E16C50_801C4430;
extern f32 D_E16C50_801C4438;
extern f32 D_E16C50_801C4440;
extern f32 D_E16C50_801C4444;
extern f32 D_E16C50_801C4448;
extern s32 D_E16C50_801C4450;
extern s32 D_E16C50_801C4454;
extern f32 D_E16C50_801C4458;
extern f32 D_E16C50_801C445C;
static f32 D_E16C50_801BFB60 = 0.0f;
static s32 D_E16C50_801BFB64[0xB] = { 0, 0x1E, 0x1B, 0x18, 0x15, 0x12, 0xF, 0xC, 9, 6, 3 };
static ? D_E16C50_801BFB90;                         /* unable to generate initializer: unknown type */
static u32 D_E16C50_801BFB9C[3] = { 0x06015FF0, 0x06022110, 0x06015DD0 };
static f32 D_E16C50_801BFBA8[2] = { 40.0f, -40.0f };
static f32 D_E16C50_801BFBB0[3] = { 20.0f, 10.0f, 15.0f };
static f32 D_E16C50_801BFBBC[3] = { 8.0f, 27.0f, 42.0f };
static f32 D_E16C50_801BFBC8[3] = { 15.0f, 6.0f, 7.0f };
static f32 D_E16C50_801BFBD4[3] = { 358.0f, 12.0f, 352.0f };
static struct _struct_D_E16C50_801BFBE0_0x10 D_E16C50_801BFBE0[3]; /* unable to generate initializer: non-zero padding */
static struct _struct_D_E16C50_801BFC10_0x10 D_E16C50_801BFC10[3]; /* unable to generate initializer: non-zero padding */
static struct _struct_D_E16C50_801BFC40_0x10 D_E16C50_801BFC40[3]; /* unable to generate initializer: non-zero padding */
static s32 D_E16C50_801BFC70[3] = { 0x12, 0x16, 0x2D };
static f32 D_E16C50_801BFC7C[3] = { 20.0f, 10.0f, 0.0f };
static f32 D_E16C50_801BFC88[3] = { 10.0f, 320.0f, 30.0f };
static struct _struct_D_E16C50_801BFC94_0xC D_E16C50_801BFC94[0x18] = {
    { 1.0f, 1.0f, 1.0f },
    { 0.9f, 0.9f, 0.9f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 0.9f, 0.9f, 0.9f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 0.9f, 0.9f, 0.9f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 0.9f, 1.0f, 0.9f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 0.9f, 1.0f, 0.9f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 0.8f, 0.9f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
};
static s32 D_E16C50_801BFDB4[0x19] = {
    1,
    5,
    0xF,
    0x186A0,
    1,
    5,
    0xF,
    0x186A0,
    1,
    5,
    0xF,
    0x186A0,
    1,
    0xA,
    0x14,
    0x186A0,
    1,
    0xA,
    0x14,
    0x186A0,
    1,
    0xA,
    0x14,
    0x186A0,
    0,
};
static struct _struct_D_E16C50_801BFE18_0xC D_E16C50_801BFE18[0x18] = {
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.4f, 0.4f, 0.4f },
    { 0.2f, 0.2f, 0.2f },
    { 0.3f, 0.3f, 0.3f },
    { 0.2f, 0.2f, 0.2f },
    { 0.2f, 0.2f, 0.2f },
    { 0.2f, 0.2f, 0.2f },
    { 0.2f, 0.2f, 0.2f },
    { 0.2f, 0.2f, 0.2f },
    { 0.2f, 0.2f, 0.2f },
    { 0.2f, 0.2f, 0.2f },
    { 0.2f, 0.2f, 0.2f },
    { 0.2f, 0.2f, 0.2f },
    { 0.2f, 0.2f, 0.2f },
};
static struct _struct_D_E16C50_801BFF38_0xC D_E16C50_801BFF38[0x18] = {
    { 1.0f, 1.0f, 1.0f },
    { 5.0f, 5.0f, 5.0f },
    { 10.0f, 10.0f, 10.0f },
    { 5.0f, 5.0f, 5.0f },
    { 1.0f, 1.0f, 1.0f },
    { 5.0f, 5.0f, 5.0f },
    { 10.0f, 10.0f, 10.0f },
    { 5.0f, 5.0f, 5.0f },
    { 1.0f, 1.0f, 1.0f },
    { 3.0f, 3.0f, 3.0f },
    { 2.0f, 2.0f, 2.0f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 3.0f, 1.0f, 3.0f },
    { 2.0f, 1.0f, 2.0f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 3.0f, 1.0f, 3.0f },
    { 2.0f, 1.0f, 2.0f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f },
    { 1.0f, 4.0f, 3.0f },
    { 1.0f, 3.0f, 2.0f },
    { 1.0f, 1.0f, 1.0f },
};
static f32 D_E16C50_801C0058 = 191.0f;
static f32 D_E16C50_801C005C = 63.0f;
static f32 D_E16C50_801C0060[0xC] = {
    50.000248f,
    6.086971e-39f,
    8.0159f,
    5.831554e-39f,
    6.026704e-39f,
    5.877472e-39f,
    6.026704e-39f,
    5.877472e-39f,
    6.026704e-39f,
    5.877472e-39f,
    6.086971e-39f,
    5.877472e-39f,
};
static struct _struct_D_E16C50_801C0098_0xC D_E16C50_801C0098[2] = { { 370.0f, -53.0f, 1085.0f }, { -370.0f, -53.0f, 1085.0f } };
static f32 D_E16C50_801C00B0[0xC] = { 1.0f, 1.2f, 0.8f, 1.0f, 1.0f, 1.2f, 0.9f, 1.0f, 1.0f, 0.7f, 1.4f, 1.0f };
static s32 D_E16C50_801C00E0[4] = { 1, 5, 8, 0x28 };
static f32 D_E16C50_801C00F0[0xC] = { 0.3f, 0.3f, 0.3f, 0.3f, 0.3f, 0.3f, 0.3f, 0.3f, 0.5f, 0.5f, 0.5f, 0.5f };
static f32 D_E16C50_801C0120[4] = { 1.0f, 1.0f, 1.0f, 1.0f };
static struct _struct_D_E16C50_801C0150_0x10 D_E16C50_801C0150[4] = {
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, -25.5f, 0.0f },
    { -25.5f, 25.5f, -25.5f },
    { 25.5f, 0.0f, 25.5f },
};
static f32 D_E16C50_801C0190[5] = { 0.0f, -30.0f, 30.0f, -30.0f, 30.0f };
static ? D_E16C50_801C01A4;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C01B0;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C01BC;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C01C8;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C01D4;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C01E0;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C01EC;                         /* unable to generate initializer: unknown type */
static f32 D_E16C50_801C01F8[0xB] = {
    400.0f,
    430.0f,
    460.0f,
    490.0f,
    520.0f,
    550.0f,
    580.0f,
    610.0f,
    640.0f,
    670.0f,
    700.0f,
};
static f32 D_E16C50_801C0224[0xB] = { 6.0f, 6.0f, 8.0f, 8.0f, 8.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f };
static ? D_E16C50_801C0250;                         /* unable to generate initializer: unknown type */
static f32 D_E16C50_801C025C[0x15] = {
    120.0f,
    0.0f,
    0.0f,
    0.0f,
    4e-45f,
    6e-45f,
    0.0f,
    7e-45f,
    8e-45f,
    1e-44f,
    1e-45f,
    3e-45f,
    0.0f,
    0.0f,
    0.0f,
    0.0f,
    0.0f,
    0.0f,
    1.1e-44f,
    1.3e-44f,
    0.0f,
};
static ? D_E16C50_801C02B0;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C02BC;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C02D8;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C02E4;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C02F0;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C02FC;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C0308;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C0314;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C0320;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C032C;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C0338;                         /* unable to generate initializer: unknown type */
static ? D_E16C50_801C0344;                         /* unable to generate initializer: unknown type */
static f32 D_E16C50_801C0374[0x33] = {
    1.0f,
    1.0f,
    1.0f,
    1.3f,
    0.8f,
    1.3f,
    1.0f,
    1.2f,
    1.0f,
    1.3f,
    0.8f,
    1.3f,
    1.0f,
    1.0f,
    1.0f,
    1.3f,
    1.0f,
    1.3f,
    1.0f,
    1.0f,
    1.0f,
    1.3f,
    1.0f,
    1.3f,
    1.0f,
    1.0f,
    1.0f,
    0.85f,
    0.95f,
    0.85f,
    0.85f,
    0.95f,
    0.85f,
    0.85f,
    0.95f,
    0.85f,
    1.0f,
    1.05f,
    1.0f,
    0.85f,
    0.95f,
    0.85f,
    0.85f,
    0.95f,
    0.85f,
    0.85f,
    0.95f,
    0.85f,
    0.85f,
    0.95f,
    0.85f,
};
static s32 D_E16C50_801C0440[0x18] = {
    0,
    0x1E,
    0x3C,
    0x5A,
    0,
    0,
    0,
    0,
    0,
    0xF,
    0x1E,
    0x2D,
    0,
    0,
    0,
    0,
    0,
    0xF,
    0x1E,
    0x2D,
    0x3C,
    0x4B,
    0x5A,
    0x69,
};
static s32 D_E16C50_801C04A0[6] = { 0xF, 0xFFFFFFF1, 0xA, 0xFFFFFFF6, 7, 0xFFFFFFF9 };
static ? D_E16C50_801C04B8;                         /* unable to generate initializer: unknown type */
static s32 D_E16C50_801C04C4[9] = { 1, 5, 9, 0xE, 0xF, 0x10, 0x11, 0, 0xD };
static ? D_E16C50_801C04E8;                         /* unable to generate initializer: unknown type */
static f32 D_E16C50_801C04F4[4] = { 700.0f, 300.0f, 600.0f, 400.0f };
static ? D_E16C50_801C0504;                         /* unable to generate initializer: unknown type */
static f32 D_E16C50_801C075C[0x33] = {
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    320.0f,
    320.0f,
    320.0f,
    320.0f,
    40.0f,
    40.0f,
    40.0f,
    40.0f,
    40.0f,
    40.0f,
    40.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    28.0f,
    10.0f,
    28.0f,
    28.0f,
};
static f32 D_E16C50_801C0828[0x33] = {
    210.0f,
    250.0f,
    170.0f,
    200.0f,
    225.0f,
    240.0f,
    220.0f,
    180.0f,
    210.0f,
    230.0f,
    355.0f,
    349.0f,
    357.0f,
    12.0f,
    357.0f,
    65.0f,
    256.0f,
    250.0f,
    88.0f,
    0.0f,
    0.0f,
    0.0f,
    9.0f,
    14.0f,
    35.0f,
    40.0f,
    5.0f,
    92.0f,
    56.0f,
    71.0f,
    355.0f,
    326.0f,
    30.0f,
    5.0f,
    30.0f,
    30.0f,
    60.0f,
    69.0f,
    1.0f,
    346.0f,
    30.0f,
    97.0f,
    30.0f,
    30.0f,
    30.0f,
    30.0f,
    162.0f,
    98.0f,
    10.0f,
    213.0f,
    30.0f,
};
static ? D_E16C50_801C08F4;                         /* unable to generate initializer: unknown type */

void func_E16C50_801A8E30(void) {
    ? spA4;
    void *sp5C;
    void *sp58;
    f32 *temp_t6;
    f32 *var_s0;
    f32 *var_s1;
    f32 temp_ft2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_lo_6;
    s32 var_t1;
    void *var_a0;
    void *var_v0;

    sp5C = gSegments[(u32) ((s32) &D_6031D90 * 0x10) >> 0x1C] + ((s32) &D_6031D90 & 0xFFFFFF) + 0x80000000;
    sp58 = gSegments[(u32) ((s32) &D_6011A78 * 0x10) >> 0x1C] + ((s32) &D_6011A78 & 0xFFFFFF) + 0x80000000;
    var_s1 = &spA8[0];
    var_s0 = &sp64[0];
    do {
        if ((var_s0 == &sp64[0]) || (var_s0 == &spA4)) {
            *var_s1 = 0.0f;
            *var_s0 = 0.0f;
        } else {
            *var_s1 = (Rand_ZeroOne() - 0.5f) * 70.0f;
            *var_s0 = (Rand_ZeroOne() - 0.5f) * 70.0f;
        }
        var_s0 += 4;
        var_s1 += 4;
    } while ((u32) var_s0 < (u32) &spA8[0]);
    temp_lo = (s32) (sp5C->unk4 + 0xC8) / 25;
    var_t1 = 2;
    sp58->unk0 = (s16) (s32) ((&spA8[0])[temp_lo] + (f32) sp5C->unk0);
    sp58->unk2 = (s16) (s32) ((&sp64[0])[temp_lo] + (f32) sp5C->unk2);
    temp_lo_2 = (s32) (sp5C->unk14 + 0xC8) / 25;
    sp58->unk10 = (s16) (s32) ((&spA8[0])[temp_lo_2] + (f32) sp5C->unk10);
    sp58->unk12 = (s16) (s32) ((&sp64[0])[temp_lo_2] + (f32) sp5C->unk12);
    var_a0 = sp58 + 0x20;
    var_v0 = sp5C + 0x20;
    do {
        var_t1 += 4;
        temp_lo_3 = (s32) (var_v0->unk4 + 0xC8) / 25;
        temp_ft2 = (&spA8[0])[temp_lo_3] + (f32) var_v0->unk0;
        temp_t6 = &(&sp64[0])[temp_lo_3];
        var_v0 += 0x40;
        var_a0 += 0x40;
        var_a0->unk-40 = (s16) (s32) temp_ft2;
        var_a0->unk-3E = (s16) (s32) (*temp_t6 + (f32) var_v0->unk-3E);
        temp_lo_4 = (s32) (var_v0->unk-2C + 0xC8) / 25;
        var_a0->unk-30 = (s16) (s32) ((&spA8[0])[temp_lo_4] + (f32) var_v0->unk-30);
        var_a0->unk-2E = (s16) (s32) ((&sp64[0])[temp_lo_4] + (f32) var_v0->unk-2E);
        temp_lo_5 = (s32) (var_v0->unk-1C + 0xC8) / 25;
        var_a0->unk-20 = (s16) (s32) ((&spA8[0])[temp_lo_5] + (f32) var_v0->unk-20);
        var_a0->unk-1E = (s16) (s32) ((&sp64[0])[temp_lo_5] + (f32) var_v0->unk-1E);
        temp_lo_6 = (s32) (var_v0->unk-C + 0xC8) / 25;
        var_a0->unk-10 = (s16) (s32) ((&spA8[0])[temp_lo_6] + (f32) var_v0->unk-10);
        var_a0->unk-E = (s16) (s32) ((&sp64[0])[temp_lo_6] + (f32) var_v0->unk-E);
    } while (var_t1 != 0x22);
}

void func_E16C50_801A92EC(Object_2F4 *arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5) {
    UnkEntity30 *temp_v0;

    temp_v0 = &gUnkEntities30[arg4];
    temp_v0->mode = (u8) arg5;
    temp_v0->unk_28 = 10.0f;
    temp_v0->unk_04.x = arg0->obj.pos.x;
    temp_v0->unk_04.y = arg0->obj.pos.y;
    temp_v0->unk_10.x = arg1;
    temp_v0->unk_10.y = arg2;
    temp_v0->unk_2C = 0xFF;
    temp_v0->unk_2D = 0xFF;
    temp_v0->unk_2E = 0xFF;
    temp_v0->unk_2F = 0xFF;
    temp_v0->timer = 3;
    temp_v0->unk_10.z = arg3;
    temp_v0->unk_04.z = arg0->obj.pos.z;
}

void func_E16C50_801A9374(Object_2F4 *arg0, void *arg1, Object_2F4 *arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6, f32 arg7, s32 arg8, f32 arg9) {
    Object_2F4_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0xBD;
    arg0->unk_0B8 = (s16) arg6;
    arg0->scale = arg7;
    arg0->unk_048 = (bitwise s16) arg9;
    arg0->obj.pos.x = arg1->unk0;
    arg0->obj.pos.y = arg1->unk4;
    arg0->obj.pos.z = arg1->unk8;
    arg0->obj.rot.x = arg2->unk0;
    arg0->obj.rot.y = arg2->obj.pos.x;
    arg0->obj.rot.z = arg2->obj.pos.y;
    arg0->vel.x = arg3;
    arg0->vel.y = arg4;
    arg0->vel.z = arg5;
    arg0->unk_10C = 0.5f;
    arg0->timer_0BC = (u16) arg8;
    Object_SetInfo(&arg0->info, 0xBDU & 0xFFFF);
}

void func_E16C50_801A9448(Vec3f *arg0, f32 arg1, Object_2F4 *arg2, void *arg3, f32 arg4, s32 arg5, f32 arg6, s32 arg7, s32 arg8) {
    Object_2F4 *var_s0;

    var_s0 = gObjects2F4 + 0xAE3C;
loop_1:
    if (var_s0->obj.status == 0) {
        func_E16C50_801A9374(arg2, arg3, var_s0, (bitwise f32) arg0, arg1, (bitwise f32) arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        return;
    }
    var_s0 -= 0x2F4;
    if ((u32) var_s0 < (u32) gObjects2F4) {
        return;
    }
    goto loop_1;
}

void func_E16C50_801A94EC(f32 *arg0, s32 arg1) {
    Item *sp18;
    Item *var_a2;
    s32 var_v0;

    var_a2 = gItems;
    var_v0 = 0;
loop_1:
    var_v0 += 1;
    if (var_a2->obj.status == 0) {
        sp18 = var_a2;
        Item_Initialize(var_a2);
        var_a2->obj.status = 1;
        var_a2->obj.id = (u16) arg1;
        var_a2->obj.pos.x = arg0->unk0;
        var_a2->obj.pos.y = arg0->unk4;
        var_a2->timer_4A = 2;
        var_a2->obj.pos.z = arg0->unk8;
        Object_SetInfo(&var_a2->info, arg1 & 0xFFFF);
        return;
    }
    var_a2 += 0x6C;
    if (var_v0 == 0x14) {
        return;
    }
    goto loop_1;
}

f32 func_E16C50_801A958C(u16 arg0, f32 arg1) {
    f32 var_fv1;

    var_fv1 = (f32) arg0 * 0.5f;
    if (arg1 < var_fv1) {
        var_fv1 = arg1;
    }
    return var_fv1;
}

void func_E16C50_801A95C8(void) {
    Math_SmoothStepToF(&gPlayer->camEye.x, D_80177978, 0.1f, 50.0f, 0.0001f);
    Math_SmoothStepToF(&gPlayer->camEye.y, D_80177980, 0.1f, 50.0f, 0.0001f);
    Math_SmoothStepToF(&gPlayer->camEye.z, D_80177988, 0.1f, 50.0f, 0.0001f);
    Math_SmoothStepToF(&gPlayer->camAt.x, D_801779A0, 0.1f, 50.0f, 0.0001f);
    Math_SmoothStepToF(&gPlayer->camAt.y, D_801779B8, 0.1f, 50.0f, 0.0001f);
    Math_SmoothStepToF(&gPlayer->camAt.z, D_801779C0, 0.1f, 50.0f, 0.0001f);
}

void func_E16C50_801A96DC(Object_2F4 *arg0) {
    arg0->obj.rot.y = (-gPlayer->unk_058 * 180.0f) / 3.1415927f;
    arg0->obj.rot.x = (gPlayer->unk_05C * 180.0f) / 3.1415927f;
}

void func_E16C50_801A9728(Object_2F4 *arg0, f32 arg1, f32 arg2, s32 arg3) {
    f32 temp_fs0;
    f32 temp_fs1;
    s32 var_s0;

    var_s0 = 0;
    do {
        temp_fs0 = (f32) var_s0 * 10.0f * 0.017453292f;
        temp_fs1 = __sinf(temp_fs0) * arg1;
        func_8007B8F8(arg0->obj.pos.x + temp_fs1, D_80177940 + 30.0f, arg0->obj.pos.z + (__cosf(temp_fs0) * arg1), arg2);
        var_s0 += arg3;
    } while (var_s0 < 0x24);
}

void func_E16C50_801A9824(void) {
    ? *var_a0;
    ? *var_v0;
    ? *var_v0_4;
    s32 *var_v0_2;
    s32 *var_v0_3;

    gTeamShields->unkC = 0xFF;
    gTeamShields->unk8 = 0xFF;
    gTeamShields->unk4 = 0xFF;
    var_a0 = &D_E16C50_801C4190;
    do {
        var_a0 += 4;
        var_a0->unk-4 = 0;
    } while ((u32) var_a0 < (u32) &D_E16C50_801C41B8);
    var_v0 = &D_E16C50_801C41B8;
    do {
        var_v0 += 4;
        var_v0->unk-4 = 0.0f;
    } while ((u32) var_v0 < (u32) &D_E16C50_801C4230);
    var_v0_2 = &D_E16C50_801C4230;
    do {
        var_v0_2 += 4;
        var_v0_2->unk-4 = 0;
    } while ((u32) var_v0_2 < (u32) &D_E16C50_801C42A0);
    var_v0_3 = &D_E16C50_801C42A0;
    do {
        var_v0_3 += 4;
        var_v0_3->unk-4 = 0;
    } while ((u32) var_v0_3 < (u32) &D_E16C50_801C4304);
    var_v0_4 = &D_E16C50_801C4310;
    D_E16C50_801C4308 = 0.0f;
    D_E16C50_801C4308 = 0.0f;
    do {
        var_v0_4 += 0x10;
        var_v0_4->unk-C = 0.0f;
        var_v0_4->unk-8 = 0.0f;
        var_v0_4->unk-4 = 0.0f;
        var_v0_4->unk-10 = 0.0f;
    } while (var_v0_4 != &D_E16C50_801C4450);
    D_E16C50_801C445C = 0.0f;
    D_E16C50_801C4458 = D_E16C50_801C445C;
    D_E16C50_801C4454 = 0;
    D_E16C50_801C4450 = 0;
    D_E16C50_801C41B8.unk30 = 40.0f;
    D_E16C50_801C41B8.unk34 = 100.0f;
    D_E16C50_801C41B8.unk38 = 120.0f;
    D_E16C50_801C41B8.unk3C = 20.0f;
    D_E16C50_801C41B8.unk40 = 30.0f;
    D_E16C50_801C41B8.unk44 = 50.0f;
    if (D_80177CA0 != 0) {
        D_E16C50_801C41B8.unk30 = 0.0f;
        D_E16C50_801C41B8.unk3C = 0.0f;
        D_E16C50_801C41B8.unk40 = 0.0f;
        D_E16C50_801C41B8.unk44 = 0.0f;
        D_E16C50_801C41B8.unk34 = 3.0f;
        D_E16C50_801C41B8.unk38 = 5.0f;
    }
    D_E16C50_801C41A4 = 0;
    D_E16C50_801C41B8.unk64 = (f32) D_8015F970;
    D_E16C50_801C41B8.unk68 = 128.0f;
}

void func_E16C50_801A99D4(Player *arg0) {
    s32 sp24;

    sp24 = (s32) fabsf(arg0->unk_138 / 1000.0f);
    Math_SmoothStepToF(&D_8015F970, D_E16C50_801C41B8.unk64, 1.0f, 10.0f, 0.00001f);
    Math_SmoothStepToF(&D_E16C50_801C3A88 + 0x700, D_E16C50_801C41B8.unk68, 0.1f, 10.0f, 0.00001f);
    if ((D_E16C50_801C4190.unk20 < sp24) && (D_E16C50_801C41B8.unk64 < 4600.0f)) {
        D_E16C50_801C4190.unk20 = sp24;
        D_E16C50_801C41B8.unk64 = (f32) (D_E16C50_801C41B8.unk64 + 150.0f);
        D_E16C50_801C41B8.unk68 = (f32) (*(&D_E16C50_801C3A88 + 0x700) - 6.0f);
        if (D_E16C50_801C41B8.unk68 < 0.0f) {
            D_E16C50_801C41B8.unk68 = 0.0f;
        }
        if (D_E16C50_801C41B8.unk64 > 4600.0f) {
            D_E16C50_801C41B8.unk64 = 4600.0f;
        }
        D_E16C50_801C41B8.unk30 = (f32) (D_E16C50_801C41B8.unk30 - 2.0f);
        if (D_E16C50_801C41B8.unk30 < 0.0f) {
            D_E16C50_801C41B8.unk30 = 0.0f;
        }
        D_E16C50_801C41B8.unk34 = (f32) (D_E16C50_801C41B8.unk34 - 6.0f);
        if (D_E16C50_801C41B8.unk34 < 3.0f) {
            D_E16C50_801C41B8.unk34 = 3.0f;
        }
        D_E16C50_801C41B8.unk38 = (f32) (D_E16C50_801C41B8.unk38 - 6.0f);
        if (D_E16C50_801C41B8.unk38 < 5.0f) {
            D_E16C50_801C41B8.unk38 = 5.0f;
        }
        D_E16C50_801C41B8.unk3C = (f32) (D_E16C50_801C41B8.unk3C - 1.0f);
        if (D_E16C50_801C41B8.unk3C < 0.0f) {
            D_E16C50_801C41B8.unk3C = 0.0f;
        }
        D_E16C50_801C41B8.unk40 = (f32) (D_E16C50_801C41B8.unk40 - 1.5f);
        if (D_E16C50_801C41B8.unk40 < 0.0f) {
            D_E16C50_801C41B8.unk40 = 0.0f;
        }
        D_E16C50_801C41B8.unk44 = (f32) (D_E16C50_801C41B8.unk44 - 2.5f);
        if (D_E16C50_801C41B8.unk44 < 0.0f) {
            D_E16C50_801C41B8.unk44 = 0.0f;
        }
        gLight1R = (s32) D_E16C50_801C41B8.unk30;
        gLight1G = (s32) D_E16C50_801C41B8.unk34;
        gLight1B = (s32) D_E16C50_801C41B8.unk38;
        gAmbientR = (s32) D_E16C50_801C41B8.unk3C;
        gAmbientG = (s32) D_E16C50_801C41B8.unk40;
        gAmbientB = (s32) D_E16C50_801C41B8.unk44;
    }
}

void func_E16C50_801A9C98(Player *arg0) {
    Object_2F4 *temp_a0;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 temp_fv0;
    f32 temp_fv1;
    s32 var_v0;

    if ((D_E16C50_801C4190.unk0 != 0x309) && (D_E16C50_801C4190.unk0 > 0)) {
        temp_a0 = &gObjects2F4[D_E16C50_801C4190.unk0 - 1];
        if ((temp_a0->obj.status != 2) || (temp_fv0 = arg0->unk_138, temp_fv1 = temp_a0->obj.pos.z, ((temp_fv0 - 300.0f) <= temp_fv1)) || (temp_fv1 <= (temp_fv0 - 7000.0f)) || (temp_a0->obj.id != D_E16C50_801C4190.unk4) || (temp_a0->unk_0CE == 0)) {
            D_E16C50_801C4190.unk4 = 0;
            D_E16C50_801C4190.unk14 = 0;
            D_E16C50_801C4190.unkC = 0;
            D_E16C50_801C4190.unk0 = 0;
            return;
        }
        temp_a1 = temp_a0->info.hitbox;
        var_v0 = 1;
        if (temp_a1->unk4 == 200000.0f) {
            var_v0 = 5;
        }
        temp_a2 = &temp_a1[var_v0];
        D_E16C50_801C41C0 = temp_a2->unk4 + (temp_fv1 + temp_a2->unk0);
        D_E16C50_801C41BC = temp_a0->info.hitbox[var_v0].unk8 + temp_a0->obj.pos.y;
        D_E16C50_801C41BC = temp_a0->info.hitbox[var_v0].unk10 + temp_a0->obj.pos.x;
    }
}

void func_E16C50_801A9DE4(Player *arg0) {
    f32 *temp_a0;

    if (D_E16C50_801C4190.unk0 == 0x309) {
        if ((gObjects408->obj.status != 2) || (gObjects408->unk_060 == 0) || (fabsf(D_E16C50_801C4330) <= 6.0f) || ((D_E16C50_801C4190.unk10 == 0x79) && (gObjects408->unkA0 == 0))) {
            D_E16C50_801C4190.unk4 = 0;
            D_E16C50_801C4190.unk14 = 0;
            D_E16C50_801C4190.unkC = 0;
            D_E16C50_801C4190.unk10 = 0;
            D_E16C50_801C4190.unk0 = 0;
            return;
        }
        temp_a0 = &gObjects408->info.hitbox[D_E16C50_801C4190.unk10 - 2];
        D_E16C50_801C41B8.unk8 = (f32) (temp_a0->unk4 + (gObjects408->obj.pos.z + temp_a0->unk0));
        D_E16C50_801C41B8.unk4 = (f32) (temp_a0->unk8 + gObjects408->obj.pos.y);
        D_E16C50_801C41B8.unk0 = (f32) (temp_a0->unk10 + gObjects408->obj.pos.x);
    }
}

void func_E16C50_801A9ED0(Player *arg0) {
    s32 sp8C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    Vec3f sp64;
    f32 *temp_v0;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s32 temp_cond;
    s32 var_a3;
    s32 var_v1;

    Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + arg0->unk_0E8) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, arg0->unk_0E4 * 0.017453292f, 1U);
    sp70 = 0.0f;
    sp74 = 0.0f;
    sp78 = -1200.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp70, &sp64);
    if (D_E16C50_801C4190.unkC == 0) {
        temp_cond = fabsf(D_E16C50_801C4330) >= 6.0f;
        sp8C = D_E16C50_801C4190.unk10;
        if (temp_cond && (gObjects408->unk_04E >= 0xA) && (gObjects408->obj.status == 2)) {
            var_v1 = 0x77;
            var_a3 = 0x79;
            if (gObjects408->unk_060 != 0) {
                do {
                    if ((var_v1 == 0x77) || (var_v1 == 0x81) || (var_v1 == 0x8B) || (var_v1 == 0xA9)) {
                        temp_v0 = &gObjects408->info.hitbox[var_a3];
                        temp_fv0 = temp_v0->unk4;
                        temp_fa0 = temp_v0->unkC;
                        temp_fv1 = gObjects408->obj.pos.y + temp_v0->unk0;
                        temp_fa1 = gObjects408->obj.pos.x + temp_v0->unk8;
                        if (gObjects408->unk_04E >= 0xA) {
                            temp_fv0_2 = arg0->pos.y + sp64.y;
                            if ((temp_fv0_2 <= (temp_fv0 + temp_fv1 + 200.0f)) && (((temp_fv1 - temp_fv0) - 200.0f) <= temp_fv0_2)) {
                                temp_fv0_3 = arg0->pos.x + (bitwise f32) sp64;
                                if ((temp_fv0_3 <= (temp_fa0 + temp_fa1 + 200.0f)) && (((temp_fa1 - temp_fa0) - 200.0f) <= temp_fv0_3)) {
                                    temp_fv1_2 = fabsf((arg0->unk_138 - gObjects408->obj.pos.z) - gObjects408->info.hitbox[var_v1]);
                                    if (temp_fv1_2 <= D_E16C50_801C41B8.unk2C) {
                                        D_E16C50_801C41B8.unk2C = temp_fv1_2;
                                        D_E16C50_801C4190.unk0 = 0x309;
                                        D_E16C50_801C4190.unk10 = var_a3;
                                        D_E16C50_801C4190.unk4 = 0x13E;
                                    }
                                    if (((var_v1 == 0x81) && (gObjects408->unk98 == 0)) || ((var_v1 == 0x8B) && (gObjects408->unk9A == 0)) || ((var_v1 == 0x77) && (gObjects408->unkA0 == 0))) {
                                        D_E16C50_801C4190.unk4 = 0;
                                        D_E16C50_801C4190.unk14 = 0;
                                        D_E16C50_801C4190.unkC = 0;
                                        D_E16C50_801C4190.unk10 = 0;
                                        D_E16C50_801C4190.unk0 = 0;
                                    }
                                }
                            }
                        }
                    }
                    var_v1 += 0xA;
                    var_a3 += 0xA;
                } while (var_v1 != 0xC7);
                if ((sp8C != D_E16C50_801C41A0) && (D_E16C50_801C41B8.unk14 == 3.0f)) {
                    Audio_PlaySfx(0x4900001BU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_E16C50_801C41B8.unk14 = 20.0f;
                }
            }
        }
    }
    func_E16C50_801A9DE4(arg0);
}

void func_E16C50_801AA20C(void) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    f32 var_fs1;
    f32 var_fs2;
    s32 var_s0;

    if (gPlayer->unk_234 != 0) {
        Matrix_Push(&gGfxMatrix);
        Math_SmoothStepToF(&D_E16C50_801C41CC, 3.0f, 1.0f, 4.0f, 0.0001f);
        RCP_SetupDL(&gMasterDisp, 0x3D);
        if (D_E16C50_801C4190.unkC == 0) {
            temp_v1 = gMasterDisp;
            gMasterDisp = temp_v1 + 8;
            temp_v1->words.w1 = -1U;
            temp_v1->words.w0 = 0xFA000000;
            var_fs1 = -10.0f;
            var_fs2 = 10.0f;
            if (D_E16C50_801C4190.unk0 != 0) {
                var_fs1 = 0.0f;
                var_fs2 = 0.0f;
            }
            Matrix_Translate(gGfxMatrix, D_E16C50_801C41B8.unk0 + var_fs1, D_E16C50_801C41B8.unk4 + var_fs2, gPlayer->unk_144 + D_E16C50_801C41B8.unk8, (u8) 1);
            Matrix_Scale(gGfxMatrix, D_E16C50_801C41B8.unk14, D_E16C50_801C41B8.unk14, D_E16C50_801C41B8.unk14, (u8) 1);
            var_s0 = 0;
            do {
                Matrix_RotateZ(gGfxMatrix, 1.5707964f, 1U);
                Matrix_Translate(gGfxMatrix, var_fs1, var_fs2, 0.0f, (u8) 1);
                Matrix_Push(&gGfxMatrix);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v1_2 = gMasterDisp;
                gMasterDisp = temp_v1_2 + 8;
                temp_v1_2->words.w1 = (u32) &D_3000470;
                temp_v1_2->words.w0 = 0x06000000;
                Matrix_Pop(&gGfxMatrix);
                var_s0 += 1;
            } while (var_s0 != 4);
        } else {
            temp_v1_3 = gMasterDisp;
            gMasterDisp = temp_v1_3 + 8;
            temp_v1_3->words.w1 = 0xFF0000FF;
            temp_v1_3->words.w0 = 0xFA000000;
            Matrix_Translate(gGfxMatrix, D_E16C50_801C41B8.unk0, D_E16C50_801C41B8.unk4, gPlayer->unk_144 + D_E16C50_801C41B8.unk8, (u8) 1);
            Matrix_Scale(gGfxMatrix, D_E16C50_801C41B8.unk14, D_E16C50_801C41B8.unk14, D_E16C50_801C41B8.unk14, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v1_4 = gMasterDisp;
            gMasterDisp = temp_v1_4 + 8;
            temp_v1_4->words.w1 = (u32) &D_3000130;
            temp_v1_4->words.w0 = 0x06000000;
        }
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_E16C50_801AA4BC(Player *arg0) {
    f32 sp3C;
    f32 sp38;
    f32 *sp34;
    f32 *sp30;
    f32 *sp2C;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 var_v0_3;
    u16 var_v0;
    u16 var_v0_2;

    if (arg0->unk_230 == 0) {
        sp3C = 0.0f;
        sp38 = 0.1f;
        var_v0 = gInputHold->button;
        if ((var_v0 & 0x2000) && !(var_v0 & 0x10)) {
            sp3C = 90.0f;
            sp38 = 0.2f;
            if (arg0->unk_12C < 70.0f) {
                Math_SmoothStepToF(arg0 + 0x4A0, -70.0f, 0.3f, 100.0f, 0.0f);
                Math_SmoothStepToF(arg0 + 0x4A4, -70.0f, 0.3f, 100.0f, 0.0f);
                Math_SmoothStepToF(arg0 + 0x4A8, 70.0f, 0.3f, 100.0f, 0.0f);
                Math_SmoothStepToF(arg0 + 0x4AC, 70.0f, 0.3f, 100.0f, 0.0f);
                var_v0 = gInputHold->button;
            }
        }
        if ((var_v0 & 0x10) && !(var_v0 & 0x2000)) {
            sp3C = -90.0f;
            sp38 = 0.2f;
            if (arg0->unk_12C > -70.0f) {
                sp2C = arg0 + 0x4AC;
                sp30 = arg0 + 0x4A8;
                sp34 = arg0 + 0x4A4;
                Math_SmoothStepToF(arg0 + 0x4A0, 70.0f, 0.3f, 100.0f, 0.0f);
                Math_SmoothStepToF(sp34, 70.0f, 0.3f, 100.0f, 0.0f);
                Math_SmoothStepToF(sp30, -70.0f, 0.3f, 100.0f, 0.0f);
                Math_SmoothStepToF(sp2C, -70.0f, 0.3f, 100.0f, 0.0f);
            }
        }
        Math_SmoothStepToF(arg0 + 0x12C, sp3C, sp38, 10.0f, 0.0f);
    }
    var_v0_2 = gInputPress->button;
    if ((var_v0_2 & 0x2000) && (arg0->unk_230 == 0)) {
        arg0->unk_48C = 1;
        if (arg0->timer_1E0 != 0) {
            arg0->unk_1DC = 1;
            arg0->timer_1E8 = 0xA;
            arg0->unk_1F0 = 0x1E;
            arg0->unk_1EC = 0x1E;
            arg0->unk_494 = 1;
            var_v0_2 = gInputPress->button;
        } else {
            arg0->timer_1E0 = 0xA;
            var_v0_2 = gInputPress->button;
        }
    }
    if ((var_v0_2 & 0x10) && (arg0->unk_230 == 0)) {
        arg0->unk_48C = 1;
        if (arg0->timer_1E4 != 0) {
            arg0->unk_1DC = 1;
            arg0->timer_1E8 = 0xA;
            arg0->unk_1F0 = -0x1E;
            arg0->unk_1EC = -0x1E;
            arg0->unk_494 = 1;
        } else {
            arg0->timer_1E4 = 0xA;
        }
    }
    Math_SmoothStepToF(arg0 + 0x150, 1.0f, 0.05f, 10.0f, 0.0001f);
    temp_v0 = arg0->unk_280;
    arg0->unk_130 = Math_ModF(arg0->unk_130, 360.0f);
    temp_t7 = temp_v0 - 0x1E;
    if (temp_v0 > 0) {
        arg0->unk_280 = temp_t7;
        if (temp_t7 <= 0) {
            arg0->unk_280 = 0;
        }
    }
    if (arg0->unk_1DC == 0) {
        Math_SmoothStepToF(arg0 + 0x130, 0.0f, 0.1f, 10.0f, 0.00001f);
    }
    temp_v0_2 = arg0->timer_1E0;
    if (temp_v0_2 != 0) {
        arg0->timer_1E0 = temp_v0_2 - 1;
    }
    temp_v0_3 = arg0->timer_1E4;
    if (temp_v0_3 != 0) {
        arg0->timer_1E4 = temp_v0_3 - 1;
    }
    temp_v0_4 = arg0->timer_214;
    if (temp_v0_4 != 0) {
        arg0->timer_214 = temp_v0_4 - 1;
    }
    temp_v0_5 = arg0->timer_218;
    if (temp_v0_5 != 0) {
        arg0->timer_218 = temp_v0_5 - 1;
    }
    temp_v0_6 = arg0->timer_1E8;
    if (temp_v0_6 != 0) {
        arg0->timer_1E8 = temp_v0_6 - 1;
    }
    if (arg0->unk_1DC != 0) {
        var_v0_3 = arg0->unk_1EC;
        arg0->timer_1E4 = 0;
        arg0->timer_1E0 = 0;
        arg0->unk_150 = 1.5f;
        arg0->unk_130 += (f32) var_v0_3;
        if (arg0->timer_1E8 == 0) {
            temp_t7_2 = var_v0_3 - 5;
            if (var_v0_3 > 0) {
                arg0->unk_1EC = temp_t7_2;
                var_v0_3 = temp_t7_2;
            }
            temp_t8 = var_v0_3 + 5;
            if (var_v0_3 < 0) {
                arg0->unk_1EC = temp_t8;
                var_v0_3 = temp_t8;
            }
            if (var_v0_3 == 0) {
                arg0->unk_1DC = 0;
            }
        } else {
            temp_v0_7 = arg0->unk_280;
            temp_t9 = temp_v0_7 + 0x3C;
            if (temp_v0_7 < 0xB4) {
                arg0->unk_280 = temp_t9;
                if (temp_t9 >= 0xB5) {
                    arg0->unk_280 = 0xB4;
                }
            }
        }
    }
}

void func_E16C50_801AA8E8(Player *arg0) {
    f32 sp30;
    f32 var_fv0;
    f32 var_fv1;

    var_fv1 = (f32) -gInputPress->stick_y;
    var_fv0 = (f32) gInputPress->stick_x;
    if (arg0->state_1C8 != PLAYERSTATE_1C8_3) {
        var_fv1 = 0.0f;
        var_fv0 = 0.0f;
    }
    sp30 = var_fv1;
    Math_SmoothStepToF(&arg0->unk_030, var_fv0, 0.05f, 1.0f, 0.05f);
    if (arg0->pos.y < (D_80177940 + 50.0f)) {
        Math_SmoothStepToF(&arg0->unk_02C, var_fv1 * 0.3f, 0.05f, 1.0f, 0.05f);
    } else {
        Math_SmoothStepToF(&arg0->unk_02C, var_fv1, 0.05f, 2.0f, 0.05f);
    }
    D_80177978 = (arg0->pos.x - arg0->unk_0AC) * (600.0f / arg0->unk_09C);
    D_80177978 -= arg0->unk_030 * 1.5f;
    D_80177978 += arg0->unk_0AC + D_E16C50_801C41B8.unk24;
    D_80177980 = arg0->pos.y * (740.0f / arg0->unk_0A0);
    D_80177980 -= arg0->unk_02C - 50.0f;
    D_80177980 += arg0->unk_0B0;
    D_801779A0 = ((arg0->pos.x - arg0->unk_0AC) - D_E16C50_801C41B8.unk24) * (600.0f / arg0->unk_09C);
    D_801779A0 += arg0->unk_084 * -2.0f;
    D_801779A0 -= arg0->unk_030 * 0.5f;
    D_801779A0 += arg0->unk_0AC;
    D_801779B8 = (arg0->pos.y - arg0->unk_0B0) * (750.0f / arg0->unk_0A0);
    D_801779B8 += arg0->unk_060 * 10.0f;
    D_801779B8 -= arg0->unk_02C * -0.55f;
    D_801779B8 += arg0->unk_0B0 + D_E16C50_801C41B8.unk28;
    if (D_801779B8 < 20.0f) {
        D_801779B8 = 20.0f;
    }
    D_80177988 = 240.0f;
    D_801779C0 = arg0->unk_138 + (D_80177D20 - 1.0f);
    Math_SmoothStepToF(&arg0->camEye.x, D_80177978, arg0->unk_014, 1000.0f, 0.0f);
    Math_SmoothStepToF(&arg0->camEye.y, D_80177980, arg0->unk_014, 1000.0f, 0.0f);
    Math_SmoothStepToF(&arg0->camEye.z, D_80177988, 0.2f, 30.0f, 0.0f);
    Math_SmoothStepToF(&arg0->camAt.x, D_801779A0, arg0->unk_014, 1000.0f, 0.0f);
    Math_SmoothStepToF(&arg0->camAt.y, D_801779B8, arg0->unk_014, 1000.0f, 0.0f);
    Math_SmoothStepToF(&arg0->camAt.z, D_801779C0, arg0->unk_014, 1000.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_014, 1.0f, 1.0f, 0.05f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_034, -arg0->unk_0EC * 0.3f, 0.1f, 1.5f, 0.0f);
}

void func_E16C50_801AACF8(Player *arg0) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp40;
    f32 sp3C;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_ft4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 var_fa1;
    f32 var_ft4;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fv1_2;

    func_E16C50_801AA4BC(arg0);
    func_E16C50_801A99D4(arg0);
    func_E16C50_801A8E30();
    D_80177970 = 0.68f;
    temp_fv0 = (f32) -gInputPress->stick_x;
    sp64 = temp_fv0;
    sp5C = (f32) gInputPress->stick_y;
    Math_SmoothStepToF(&arg0->unk_180, temp_fv0 * D_80177970, 1.0f, 10.0f, 0.0001f);
    temp_fv1 = arg0->unk_180;
    var_fa0 = fabsf(temp_fv1 * 0.5f);
    if (var_fa0 > 2.0f) {
        var_fa0 = 2.0f;
    }
    if (temp_fv1 < 0.0f) {
        if (temp_fv1 < D_E16C50_801C41C4) {
            D_E16C50_801C41C4 -= var_fa0;
        }
    } else if (D_E16C50_801C41C4 < temp_fv1) {
        D_E16C50_801C41C4 += var_fa0;
    }
    Math_SmoothStepToF(&D_E16C50_801C41C4, arg0->unk_180, 0.1f, 2.0f, 0.00001f);
    var_ft4 = D_E16C50_801C41C4;
    D_80177968 = 7.0f;
    if ((arg0->pos.x < ((arg0->unk_0AC - arg0->unk_09C) + 10.0f)) && (var_ft4 >= 20.0f)) {
        D_80177968 = 2.0f;
        sp60 = var_ft4;
        Math_SmoothStepToF(&D_E16C50_801C41DC, 30.0f, 0.1f, 10.0f, 0.0001f);
    }
    if ((((arg0->unk_09C + arg0->unk_0AC) - 10.0f) < arg0->pos.x) && (var_ft4 <= -20.0f)) {
        D_80177968 = 2.0f;
        sp60 = var_ft4;
        Math_SmoothStepToF(&D_E16C50_801C41DC, -30.0f, 0.1f, 10.0f, 0.0001f);
    }
    Math_SmoothStepToF(&arg0->unk_0E8, var_ft4, 0.3f, D_80177968, 0.00001f);
    if (D_80177968 != 2.0f) {
        Math_SmoothStepToF(&D_E16C50_801C41DC, 0.0f, 0.1f, 20.0f, 0.0001f);
    }
    Math_SmoothStepToF(&arg0->unk_17C, sp5C * D_80177970, 1.0f, 7.0f, 0.0001f);
    temp_fv1_2 = arg0->unk_17C;
    var_fa1 = fabsf(temp_fv1_2 * 0.05f);
    if (var_fa1 > 2.0f) {
        var_fa1 = 2.0f;
    }
    var_fa0_2 = temp_fv1_2 * -1.0f;
    if (var_fa0_2 < 0.0f) {
        if (temp_fv1_2 < D_E16C50_801C41C8) {
            D_E16C50_801C41C8 -= var_fa1;
            var_fa0_2 = arg0->unk_17C * -1.0f;
        }
    } else if (D_E16C50_801C41C8 < temp_fv1_2) {
        D_E16C50_801C41C8 += var_fa1;
        var_fa0_2 = arg0->unk_17C * -1.0f;
    }
    Math_SmoothStepToF(&D_E16C50_801C41C8, var_fa0_2, 0.1f, 3.0f, 0.00001f);
    var_fv1 = D_E16C50_801C41C8 * 0.8f;
    D_80177968 = 10.0f;
    if (arg0->pos.y < (D_80177940 + 50.0f)) {
        if (var_fv1 <= 0.0f) {
            var_fv1 = 0.0f;
            D_80177968 = 2.0f;
            if (D_E16C50_801C41AC == 0) {
                sp58 = 0.0f;
                Audio_PlaySfx(0x09404028U, &arg0->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                var_fv1 = 0.0f;
                D_E16C50_801C41AC = 1;
            }
        }
    } else {
        D_E16C50_801C41AC = 0;
    }
    if ((arg0->unk_0A0 - 50.0f) <= arg0->pos.y) {
        if (var_fv1 >= 0.0f) {
            sp58 = var_fv1;
            Math_SmoothStepToF(&D_E16C50_801C41E0, 30.0f, 1.0f, 1.0f, 0.00001f);
            goto block_33;
        }
    } else {
        sp58 = var_fv1;
        Math_SmoothStepToF(&D_E16C50_801C41E0, 0.0f, 0.1f, 1.0f, 0.00001f);
block_33:
        var_fv1 = sp58;
    }
    Math_SmoothStepToF(&arg0->unk_0E4, var_fv1, 1.0f, D_80177968, 0.00001f);
    var_fv1_2 = 2.0f;
    if (sp64 == 0.0f) {
        var_fv1_2 = 1.0f;
    }
    Math_SmoothStepToF(&arg0->unk_0EC, arg0->unk_180 * 0.7f, 0.08f, var_fv1_2, 0.0001f);
    arg0->unk_0F8 = arg0->unk_0EC + arg0->unk_12C + arg0->unk_130;
    Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + arg0->unk_0E8 + 180.0f) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, -((arg0->unk_120 + arg0->unk_0E4 + arg0->unk_4D8) * 0.017453292f), 1U);
    sp90 = 0.0f;
    sp8C = 0.0f;
    sp94 = arg0->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp8C, &sp68);
    sp68 = (bitwise f32) sp68 * 1.4f;
    sp68.y *= 1.4f;
    Matrix_RotateY(gCalcMatrix, arg0->unk_114 * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, arg0->unk_120 * 0.017453292f, 1U);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp68, &sp80);
    sp90 = 0.0f;
    sp8C = 0.0f;
    sp94 = -arg0->unk_110;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp8C, &sp74);
    temp_fv0_2 = arg0->unk_150;
    temp_fa1 = arg0->unk_09C;
    temp_fa0 = arg0->unk_0AC;
    temp_ft4 = temp_fa1 + temp_fa0;
    arg0->vel.x = ((bitwise f32) sp80 + (bitwise f32) sp74) * temp_fv0_2;
    temp_fv0_3 = temp_fa0 - temp_fa1;
    arg0->vel.y = (sp80.y + sp74.y) * temp_fv0_2;
    arg0->vel.z = sp80.z + sp74.z;
    arg0->pos.x += arg0->vel.x;
    if (temp_ft4 < arg0->pos.x) {
        arg0->pos.x = temp_ft4;
        arg0->vel.x = 0.0f;
    }
    if (arg0->pos.x < temp_fv0_3) {
        arg0->pos.x = temp_fv0_3;
        arg0->vel.x = 0.0f;
    }
    temp_fv1_3 = arg0->unk_0A0;
    arg0->pos.y += arg0->vel.y;
    if (temp_fv1_3 < arg0->pos.y) {
        arg0->pos.y = temp_fv1_3;
        arg0->vel.y = 0.0f;
    }
    temp_fv1_4 = arg0->unk_0A4;
    if (arg0->pos.y < temp_fv1_4) {
        arg0->pos.y = temp_fv1_4;
        arg0->vel.y = 0.0f;
    }
    var_fv0 = arg0->unk_09C - 100.0f;
    if ((arg0->unk_0AC + var_fv0) < arg0->pos.x) {
        arg0->unk_228 = 1;
        var_fv0 = arg0->unk_09C - 100.0f;
    }
    if (arg0->pos.x < (arg0->unk_0AC - var_fv0)) {
        arg0->unk_228 = 2;
    }
    if ((arg0->unk_0B0 + (arg0->unk_0A0 - 100.0f)) < arg0->pos.y) {
        arg0->unk_228 = 8;
    }
    if (arg0->pos.y <= (D_80177940 + 100.0f)) {
        arg0->unk_228 = 4;
    }
    if (D_E16C50_801C41A8 != 0) {
        arg0->unk_0D0 = 20.0f;
        Math_SmoothStepToF(&D_E16C50_801BFB60, -40.0f, 0.01f, 0.1f, 0.0f);
        arg0->vel.z += D_E16C50_801BFB60;
        if (arg0->vel.z <= 0.0f) {
            arg0->vel.z = 0.0f;
        }
    }
    arg0->pos.z += arg0->vel.z;
    arg0->unk_138 = arg0->pos.z;
    arg0->unk_060 = __sinf(arg0->unk_0F4 * 0.7f * 0.017453292f) * 0.5f;
    arg0->unk_088 += 10.0f;
    arg0->unk_0F4 += 8.0f + D_E16C50_801C4218;
    arg0->unk_080 = -__sinf(arg0->unk_088 * 0.017453292f) * 0.5f;
    arg0->unk_0F0 = __sinf(arg0->unk_0F4 * 0.017453292f) * 1.5f;
    if (arg0->pos.y < (D_80177CC0 + 50.0f)) {
        Matrix_RotateY(gCalcMatrix, (arg0->unk_0E8 + arg0->unk_114) * 0.017453292f, 0U);
        Matrix_RotateX(gCalcMatrix, arg0->unk_0E4 * 0.017453292f, 1U);
        sp90 = 0.0f;
        sp8C = 0.0f;
        sp94 = 70.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp8C, &sp80);
        if (arg0->unk_110 > 1.0f) {
            arg0->unk_178 -= 30.0f;
            sp3C = Rand_ZeroOne();
            sp40 = Rand_ZeroOne();
            func_E16C50_801AC8A8(((sp3C - 0.5f) * 10.0f) + arg0->pos.x + (bitwise f32) sp80, ((sp40 - 0.5f) * 10.0f) + arg0->pos.y + sp80.y, ((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_138 + (sp80.z * -1.0f), 0.4f, 1);
            return;
        }
        arg0->unk_178 -= 10.0f;
        if (!(gFrameCount & 7)) {
            sp3C = Rand_ZeroOne();
            sp40 = Rand_ZeroOne();
            func_E16C50_801AC8A8(((sp3C - 0.5f) * 10.0f) + arg0->pos.x + (bitwise f32) sp80, ((sp40 - 0.5f) * 10.0f) + arg0->pos.y + sp80.y, ((Rand_ZeroOne() - 0.5f) * 20.0f) + arg0->unk_138 + sp80.z, 0.4f, 0);
        }
    }
}

void func_E16C50_801AB9B0(void *arg0) {
    func_8007D0E0(arg0->unk74, arg0->unk78, arg0->unk138, 6.0f);
    func_8007B344(arg0->unk74, arg0->unk78, arg0->unk138, 3.0f, 5);
    func_8007BFFC(arg0->unk74, arg0->unk78, arg0->unk138, 0.0f, 0.0f, 0.0f, 3.0f, 0x50);
    func_8004D440(arg0);
}

void func_E16C50_801ABA40(PlayerShot *arg0) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    Vec3f sp54;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fa1_2;
    s32 temp_ft3;
    s32 temp_v0;
    s32 temp_v0_2;

    D_E16C50_801C41B8.unk54 = (f32) arg0->obj.pos.x;
    D_E16C50_801C41B8.unk58 = (f32) arg0->obj.pos.y;
    D_E16C50_801C41B8.unk5C = (f32) arg0->obj.pos.z;
    if ((fabsf(arg0->obj.pos.z - (gPlayer->camEye.z - D_80177D20)) > 10000.0f) || (fabsf(arg0->obj.pos.y - gPlayer->camEye.y) > 1500.0f) || ((fabsf(arg0->obj.pos.x - gPlayer->camEye.x) > 4000.0f) && (arg0->unk_5C != 0))) {
        arg0->unk_64 = 0;
    }
    if (arg0->obj.pos.y < D_80177940) {
        arg0->obj.pos.y = D_80177940 + 2.0f;
        func_800365E4(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0.0f, 0.0f, 0.0f, 0.0f, 90.0f, 2.0f, 0, 0);
        func_8007CF30(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0x3F99999A);
        D_E16C50_801C4190.unkC = 0;
        D_E16C50_801C4190.unk14 = 0;
        func_80036318(arg0);
        return;
    }
    if (((arg0->unk_64 == 0) || (D_E16C50_801C4454 == 0)) && (arg0->unk_5C != 0)) {
        func_8007CF30(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0x3F99999A);
        D_E16C50_801C41B8.unk5C = 0.0f;
        D_E16C50_801C4190.unkC = 0;
        D_E16C50_801C4190.unk14 = 0;
        D_E16C50_801C41B8.unk58 = (f32) D_E16C50_801C41B8.unk5C;
        D_E16C50_801C41B8.unk54 = (f32) D_E16C50_801C41B8.unk5C;
        func_80036318(arg0);
        return;
    }
    Math_SmoothStepToF(&arg0->unk_48, 50.0f, 0.2f, 10.0f, 0.00001f);
    arg0->obj.rot.z += arg0->unk_48;
    if (!(gFrameCount & 1)) {
        func_80035DEC(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z);
    }
    func_80038140(arg0);
    temp_fa1 = arg0->obj.pos.y;
    arg0->unk_2C = (temp_fa1 * 0.01f) + 1.2f;
    arg0->unk_30 = (temp_fa1 * 0.003f) + 0.6f;
    arg0->unk_34 = (temp_fa1 * 0.001f) + 0.6f;
    temp_ft3 = (s32) ((temp_fa1 * -0.24f) + 150.0f);
    arg0->unk_58 = temp_ft3;
    if (temp_ft3 < 0x1E) {
        arg0->unk_58 = 0x1E;
    }
    temp_v0 = arg0->unk_5C;
    switch (temp_v0) {                              /* irregular */
    case 0:
        arg0->unk_64 = 0x32;
        arg0->obj.rot.y = gPlayer->unk_0E8;
        arg0->unk_5C = temp_v0 + 1;
        arg0->obj.rot.x = gPlayer->unk_0E4;
        break;
    case 1:
        if (D_E16C50_801C419C != 0) {
            temp_fa0 = arg0->obj.pos.x - D_E16C50_801C41B8.unk0;
            sp78 = arg0->obj.pos.y - D_E16C50_801C41B8.unk4;
            sp7C = temp_fa0;
            temp_fa1_2 = arg0->obj.pos.z - D_E16C50_801C41B8.unk8;
            sp74 = temp_fa1_2;
            sp6C = Math_RadToDeg(Math_Atan2F(temp_fa0, temp_fa1_2));
            sp70 = Math_RadToDeg(-Math_Atan2F(sp78, sqrtf((sp7C * sp7C) + (sp74 * sp74))));
            Math_SmoothStepToAngle(&arg0->obj.rot.y, sp6C, 1.0f, 100.0f, 0.00001f);
            Math_SmoothStepToAngle(&arg0->obj.rot.x, sp70, 1.0f, 100.0f, 0.00001f);
            if (arg0->unk_64 < 2) {
                if (D_E16C50_801C4458 < -30.0f) {
                    D_E16C50_801C4458 += 20.0f;
                }
                if (D_E16C50_801C445C < 1.0f) {
                    D_E16C50_801C445C += 0.25f;
                }
                arg0->unk_64 = 0xA;
            }
        }
        if (arg0->unk_54 == 0.0f) {
            arg0->unk_54 = -30.0f;
        }
        if (!(gFrameCount & 3)) {
            Math_SmoothStepToF(&arg0->unk_54, D_E16C50_801C4458, 0.1f, 50.0f, 0.0001f);
        }
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0U);
        Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1U);
        sp64 = 0.0f;
        sp60 = 0.0f;
        sp68 = arg0->unk_54;
        Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp60, &sp54);
        arg0->vel.x = (bitwise f32) sp54;
        arg0->vel.y = sp54.y;
        arg0->vel.z = sp54.z;
        if ((arg0->obj.pos.y < (D_80177940 + 30.0f)) && (arg0->vel.y < 0.0f) && (D_E16C50_801C419C != 0)) {
            arg0->vel.y = 0.0f;
        }
        break;
    }
    temp_v0_2 = D_E16C50_801C4454;
    if (temp_v0_2 < 0x129) {
        D_80178370 = arg0->obj.pos.x;
        D_80178374 = arg0->obj.pos.y;
        D_80178378 = arg0->obj.pos.z;
        D_80178360 = 0xFF;
        D_80178364 = 0xC8;
        D_80178368 = 0x96;
        Math_SmoothStepToF(&D_8017836C, 0.8f, 1.0f, 0.08f, 0.001f);
    }
    if (temp_v0_2 != 0) {
        D_E16C50_801C4454 = temp_v0_2 - 1;
    }
}

void func_E16C50_801AC09C(void) {
    s32 sp2C;
    PlayerShot *var_s0;
    s32 var_v0;

    var_s0 = gPlayerShots + 0x690;
    var_v0 = 0xF;
loop_1:
    if (var_s0->obj.status == 0) {
        sp2C = var_v0;
        func_800AC290(var_s0, 0, 0, 8, 50.0f);
        Audio_PlaySfx(0x01000025U, &var_s0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_E16C50_801C41A4 = var_v0 + 1;
        D_E16C50_801C4454 = 0x12C;
        D_E16C50_801C4458 = -100.0f;
        D_E16C50_801C445C = 0.1f;
        D_8017836C = 1.0f;
        return;
    }
    var_v0 += 1;
    var_s0 += 0x70;
    if (var_v0 == 0x10) {
        return;
    }
    goto loop_1;
}

void func_E16C50_801AC18C(void) {
    PlayerShot *var_s0;

    var_s0 = gPlayerShots;
loop_1:
    if (var_s0->obj.status == 0) {
        func_800AC290(var_s0, 0, 0xC1200000, 0, 120.0f);
        if (gLaserStrength[gPlayerNum] == LASERS_SINGLE) {
            Audio_PlaySfx(0x09400021U, &var_s0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            return;
        }
        Audio_PlaySfx(0x09400027U, &var_s0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        return;
    }
    var_s0 += 0x70;
    if (var_s0 == (gPlayerShots + 0x150)) {
        return;
    }
    goto loop_1;
}

void func_E16C50_801AC274(Player *arg0) {
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    Vec3f sp5C;
    ? *var_t1;
    Object_2F4 *var_v0;
    f32 *temp_a0;
    f32 *temp_a1;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa1;
    f32 temp_fa1_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s32 temp_t8;
    s32 temp_v1;
    s32 var_a2;
    s32 var_v1;
    u16 var_v0_2;

    if ((*(gItems + 0x800 + (D_E16C50_801C4190.unk14 * 0x70)) == 0) && (D_E16C50_801C4190.unk14 != 0)) {
        D_E16C50_801C41B8.unk5C = 0.0f;
        D_E16C50_801C4190.unkC = 0;
        D_E16C50_801C4190.unk14 = 0;
        D_E16C50_801C41B8.unk58 = (f32) D_E16C50_801C41B8.unk5C;
        D_E16C50_801C41B8.unk54 = (f32) D_E16C50_801C41B8.unk5C;
    }
    Matrix_RotateY(gCalcMatrix, (arg0->unk_0E8 + arg0->unk_114) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, arg0->unk_0E4 * 0.017453292f, 1U);
    sp68 = 0.0f;
    sp6C = 0.0f;
    sp70 = -1200.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp68, &sp5C);
    var_t1 = &D_E16C50_801C4190;
    D_E16C50_801C41B8.unk18 = (f32) (arg0->pos.x + (bitwise f32) sp5C);
    var_v0 = gObjects2F4;
    var_a2 = 0;
    D_E16C50_801C41B8.unk1C = (f32) (arg0->pos.y + sp5C.y);
    D_E16C50_801C41B8.unk20 = (f32) (arg0->unk_138 + sp5C.z);
    if (D_E16C50_801C4190.unkC == 0) {
        if (D_E16C50_801C4190.unk0 == 0) {
            D_E16C50_801C41B8.unk0 = (f32) (arg0->pos.x + (bitwise f32) sp5C);
            D_E16C50_801C41B8.unk4 = (f32) (arg0->pos.y + sp5C.y);
            D_E16C50_801C41B8.unk14 = 3.0f;
            D_E16C50_801C41B8.unk8 = (f32) (arg0->unk_138 + sp5C.z);
        }
        D_E16C50_801C41B8.unk2C = 10000.0f;
        do {
            var_a2 += 1;
            if ((var_v0->obj.status == 2) && (var_v0->obj.id != 0xBD)) {
                temp_a0 = var_v0->info.hitbox;
                var_v1 = 1;
                if (temp_a0->unk4 == 200000.0f) {
                    var_v1 = 5;
                }
                temp_a1 = &temp_a0[var_v1];
                temp_fv0 = temp_a1->unkC;
                temp_fa0 = temp_a1->unk14;
                temp_fv1 = var_v0->obj.pos.y + temp_a1->unk8;
                temp_fa1 = var_v0->obj.pos.x + temp_a1->unk10;
                if ((var_v0->unk_0CE > 0) && ((s32) var_v0->timer_0C2 < 5)) {
                    temp_fa0_2 = arg0->unk_138;
                    temp_fa1_2 = var_v0->obj.pos.z;
                    if ((temp_fa1_2 <= (temp_fa0_2 - 300.0f)) && ((temp_fa0_2 - 7000.0f) <= temp_fa1_2)) {
                        temp_fv0_2 = arg0->pos.y + sp5C.y;
                        if ((temp_fv0_2 <= (temp_fv0 + temp_fv1 + 200.0f)) && (((temp_fv1 - temp_fv0) - 200.0f) <= temp_fv0_2)) {
                            temp_fv0_3 = arg0->pos.x + (bitwise f32) sp5C;
                            if ((temp_fv0_3 <= (temp_fa0 + temp_fa1 + 200.0f)) && (((temp_fa1 - temp_fa0) - 200.0f) <= temp_fv0_3)) {
                                temp_fv1_2 = fabsf((temp_fa0_2 - temp_fa1_2) - temp_a1->unk0);
                                if (temp_fv1_2 < D_E16C50_801C41B8.unk2C) {
                                    D_E16C50_801C41B8.unk2C = temp_fv1_2;
                                    D_E16C50_801C4190.unk0 = (s32) (var_v0->index + 1);
                                    D_E16C50_801C4190.unk4 = (s32) var_v0->obj.id;
                                }
                            }
                        }
                    }
                }
            }
            var_v0 += 0x2F4;
        } while (var_a2 != 0x3C);
        temp_v1 = D_E16C50_801C4190.unk0;
        if ((D_E16C50_801C4190.unk0 != temp_v1) && (D_E16C50_801C41B8.unk14 == 3.0f)) {
            Audio_PlaySfx(0x4900001BU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            var_t1 = &D_E16C50_801C4190;
            D_E16C50_801C41B8.unk14 = 20.0f;
        }
        if (temp_v1 != 0) {
            func_E16C50_801A9C98(arg0);
            var_t1 = &D_E16C50_801C4190;
        }
        if (gObjects408->unk_060 != 0) {
            func_E16C50_801A9ED0(arg0);
            goto block_30;
        }
    } else {
        func_E16C50_801A9C98(arg0);
        func_E16C50_801A9DE4(arg0);
block_30:
        var_t1 = &D_E16C50_801C4190;
    }
    var_v0_2 = gInputPress->button;
    if (var_v0_2 & 0x8000) {
        func_E16C50_801AC18C(arg0);
        var_t1 = &D_E16C50_801C4190;
        var_v0_2 = gInputPress->button;
    }
    if (var_v0_2 & 0x4000) {
        func_E16C50_801AC09C(arg0);
        var_t1 = &D_E16C50_801C4190;
        if (D_E16C50_801C4190.unk0 != 0) {
            D_E16C50_801C4190.unkC = 1;
        }
    }
    if (var_t1->unk14 == 0) {
        D_80178370 = arg0->pos.x;
        D_80178374 = arg0->pos.y - 5.0f;
        D_80178378 = arg0->unk_138 - 60.0f;
        temp_t8 = D_80178360 + 4;
        D_80178360 = temp_t8;
        D_80178364 += 3;
        D_80178368 += 2;
        if (temp_t8 >= 0xFF) {
            D_80178360 = 0xFF;
        }
        if (D_80178364 >= 0xC9) {
            D_80178364 = 0xC8;
        }
        if (D_80178368 >= 0x97) {
            D_80178368 = 0x96;
        }
        Math_SmoothStepToF(&D_8017836C, 0.2f, 1.0f, 0.04f, 0.001f);
    }
}

void func_E16C50_801AC7C8(Object_8C *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 0x16E;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->scale1 = Rand_ZeroOne() * 360.0f;
    arg0->unk_4A = 0x28;
    arg0->unk_4E = (s16) arg5;
    arg0->unk_46 = 0x32;
    arg0->scale2 = arg4 * 0.2f;
    arg0->unk_60.y = gPlayer->unk_114 + gPlayer->unk_0E8;
    if (arg0->unk_4E == 2) {
        arg0->unk_46 = 0x64;
    }
    Object_SetInfo(&arg0->info, (u32) arg0->obj.id);
}

void func_E16C50_801AC8A8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    Object_8C *var_a0;

    var_a0 = gObjects8C;
loop_1:
    if (var_a0->obj.status == 0) {
        func_E16C50_801AC7C8(var_a0, arg0, arg1, arg2, arg3, arg4);
        return;
    }
    var_a0 += 0x8C;
    if (var_a0 == (gObjects8C + 0x33F4)) {
        return;
    }
    goto loop_1;
}

void func_E16C50_801AC918(Object_8C *arg0) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unk_46;
    if (temp_v0 != 0) {
        arg0->unk_46 = temp_v0 - 1;
    }
    temp_v0_2 = arg0->unk_4E;
    switch (temp_v0_2) {                            /* irregular */
    case 0:
        temp_fv0 = arg0->unk_54.y;
        if (temp_fv0 < 5.0f) {
            arg0->unk_54.y = temp_fv0 + 0.1f;
        }
        if (arg0->unk_46 == 0) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
        arg0->scale1 += 33.0f;
        temp_fs0 = __cosf(arg0->scale1 * 0.017453292f) * 1.5f;
        arg0->unk_54.x = __cosf(gPlayer->unk_058) * temp_fs0;
        arg0->unk_54.z = __sinf(gPlayer->unk_058) * temp_fs0;
        return;
    case 1:
        if (arg0->unk_46 == 0) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
        arg0->scale1 += 33.0f;
        arg0->unk_60.x += 0.07f;
        arg0->unk_54.y = (__sinf(arg0->scale1 * 0.017453292f) * 3.0f) + arg0->unk_60.x;
        temp_fs0_2 = __cosf(arg0->scale1 * 0.017453292f) * 3.0f;
        arg0->unk_54.x = __cosf(arg0->unk_60.y * 0.017453292f) * temp_fs0_2;
        arg0->unk_54.z = -__sinf(arg0->unk_60.y * 0.017453292f) * temp_fs0_2;
        return;
    case 2:
        temp_fv0_2 = arg0->unk_54.y;
        if (temp_fv0_2 < 10.0f) {
            arg0->unk_54.y = temp_fv0_2 + 0.2f;
        }
        if (arg0->unk_46 == 0) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
        arg0->scale1 += 55.0f;
        temp_fs0_3 = __cosf(arg0->scale1 * 0.017453292f) * 2.5f;
        arg0->unk_54.x = __cosf(gPlayer->unk_058) * temp_fs0_3;
        arg0->unk_54.z = __sinf(gPlayer->unk_058) * temp_fs0_3;
        return;
    }
}

void func_E16C50_801ACBB4(void *arg0) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;

    arg0 = M2C_ERROR(/* Read from unset register $a0 */);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -40.0f, (u8) 1);
    Matrix_RotateY(gGfxMatrix, 3.1415927f, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v0 = gMasterDisp;
    gMasterDisp = temp_v0 + 8;
    temp_v0->words.w0 = 0x06000000;
    temp_v0->words.w1 = (u32) &D_3000C70;
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, -4.5f, 1.2f, (u8) 1);
    Matrix_RotateZ(gGfxMatrix, arg0->unk178 * 0.017453292f, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v0_2 = gMasterDisp;
    gMasterDisp = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0x06000000;
    temp_v0_2->words.w1 = (u32) &D_3006DE0;
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, 2.0f, 40.0f, (u8) 1);
    Matrix_RotateY(gGfxMatrix, -arg0->unk180 * 0.017453292f, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v0_3 = gMasterDisp;
    gMasterDisp = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0x06000000;
    temp_v0_3->words.w1 = (u32) &D_3006C70;
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, -19.0f, -3.6f, 1.2f, (u8) 1);
    Matrix_RotateX(gGfxMatrix, arg0->unk17C * 0.017453292f, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v0_4 = gMasterDisp;
    gMasterDisp = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0x06000000;
    temp_v0_4->words.w1 = (u32) &D_3000AF0;
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 19.0f, -3.6f, 1.2f, (u8) 1);
    Matrix_RotateX(gGfxMatrix, arg0->unk17C * 0.017453292f, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v0_5 = gMasterDisp;
    gMasterDisp = temp_v0_5 + 8;
    temp_v0_5->words.w0 = 0x06000000;
    temp_v0_5->words.w1 = (u32) &D_3006AF0;
    Matrix_Pop(&gGfxMatrix);
}

void func_E16C50_801ACE50(Player *arg0) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    Vec3f sp48;
    f32 sp40;
    f32 sp3C;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v1;
    u8 temp_t1;

    temp_v0 = arg0->timer_27C;
    arg0->unk_484 = 0;
    if (temp_v0 != 0) {
        arg0->timer_27C = temp_v0 - 1;
        arg0->unk_110 += 0.3f;
        Matrix_RotateY(gCalcMatrix, (arg0->unk_0E8 + arg0->unk_114) * 0.017453292f, 0U);
        Matrix_RotateX(gCalcMatrix, arg0->unk_0E4 * 0.017453292f, 1U);
        sp58 = 0.0f;
        sp54 = 0.0f;
        sp5C = 70.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp54, &sp48);
        sp3C = Rand_ZeroOne();
        sp40 = Rand_ZeroOne();
        func_E16C50_801AC8A8(((sp3C - 0.5f) * 10.0f) + arg0->pos.x + (bitwise f32) sp48, ((sp40 - 0.5f) * 10.0f) + arg0->pos.y + sp48.y, ((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->unk_138 + (sp48.z * -1.0f), 0.4f, 1);
        Math_SmoothStepToF(&arg0->unk_08C, -130.0f, 0.1f, 10.0f, 0.00001f);
        temp_fv1 = arg0->unk_258;
        arg0->unk_130 -= temp_fv1;
        arg0->unk_258 = temp_fv1 + 0.2f;
        if (arg0->unk_258 > 50.0f) {
            arg0->unk_258 = 50.0f;
        }
        if (!(gFrameCount & 1) && ((s32) gBlurAlpha >= 0x41)) {
            gBlurAlpha -= 1;
        }
    } else {
        arg0->unk_258 = 0.0f;
        temp_t1 = gBlurAlpha + 4;
        if ((s32) gBlurAlpha < 0xFF) {
            gBlurAlpha = temp_t1;
            if ((temp_t1 & 0xFF) >= 0xFC) {
                gBlurAlpha = 0xFF;
            }
        }
        temp_v0_2 = arg0->num;
        temp_v1 = gInputHold->button;
        if (!(gBrakeButton[temp_v0_2] & temp_v1) && !(gBoostButton[temp_v0_2] & temp_v1)) {
            arg0->unk_2B4 = 1;
            if (arg0->unk_2BC == 0.0f) {
                arg0->unk_2B4 = 0;
            }
        }
        if ((gBoostButton[arg0->num] & gInputHold->button) && (arg0->unk_230 == 0) && (arg0->state_1C8 != PLAYERSTATE_1C8_5) && (arg0->unk_2B4 == 0)) {
            if (arg0->unk_2BC == 0.0f) {
                Audio_PlaySfx(0x09004030U, &arg0->unk_460, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            arg0->unk_2BC += 3.0f;
            if (arg0->unk_2BC > 90.0f) {
                arg0->unk_2BC = 90.0f;
                arg0->unk_2B4 = 1;
            }
            arg0->unk_110 += 2.0f;
            if (arg0->unk_110 > 10.0f) {
                arg0->unk_110 = 10.0f;
            }
            Math_SmoothStepToF(&D_E16C50_801C4224, 10.0f, 0.1f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&arg0->unk_08C, -200.0f, 0.1f, D_E16C50_801C4224, 0.00001f);
            arg0->unk_484 = 1;
            Math_SmoothStepToF(D_801779A8, 50.0f, 1.0f, 10.0f, 0.0f);
        } else {
            D_E16C50_801C4224 = 0.0f;
            temp_fv0 = arg0->unk_2BC;
            if (temp_fv0 > 0.0f) {
                arg0->unk_2BC = temp_fv0 - 0.5f;
                if (arg0->unk_2BC <= 0.0f) {
                    arg0->unk_2BC = 0.0f;
                    arg0->unk_2B4 = 0;
                }
            }
            temp_fv0_2 = arg0->unk_110;
            if (temp_fv0_2 > 0.0f) {
                arg0->unk_110 = temp_fv0_2 - 1.0f;
                if (arg0->unk_110 < 0.0f) {
                    arg0->unk_110 = 0.0f;
                }
            }
        }
    }
    Math_SmoothStepToF(&arg0->unk_08C, 0.0f, 0.1f, 2.0f, 0.0f);
}

void func_E16C50_801AD328(Player *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;

    arg0->unk_485 = 0;
    if ((gBrakeButton[arg0->num] & gInputHold->button) && (arg0->unk_230 == 0) && (arg0->state_1C8 != PLAYERSTATE_1C8_5) && (arg0->unk_2B4 == 0)) {
        if (arg0->unk_2BC == 0.0f) {
            Audio_PlaySfx(0x09004031U, &arg0->unk_460, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        arg0->unk_2BC += 3.0f;
        if (arg0->unk_2BC > 90.0f) {
            arg0->unk_2BC = 90.0f;
            arg0->unk_2B4 = 1;
        }
        arg0->unk_110 -= 1.0f;
        if (arg0->unk_110 < -20.0f) {
            arg0->unk_110 = -20.0f;
        }
        Math_SmoothStepToF(&D_E16C50_801C4228, 10.0f, 1.0f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&arg0->unk_08C, 180.0f, 0.1f, D_E16C50_801C4228, 0.0f);
        arg0->unk_485 = 1;
        Math_SmoothStepToF(D_801779A8, 25.0f, 1.0f, 5.0f, 0.0f);
    } else {
        temp_fv0 = arg0->unk_2BC;
        if (temp_fv0 > 0.0f) {
            arg0->unk_2BC = temp_fv0 - 0.5f;
            if (arg0->unk_2BC <= 0.0f) {
                arg0->unk_2BC = 0.0f;
                arg0->unk_2B4 = 0;
                D_E16C50_801C4228 = 0.0f;
            }
            Math_SmoothStepToF(&D_E16C50_801C4228, 0.0f, 1.0f, 1.0f, 0.0001f);
            temp_fv0_2 = arg0->unk_110;
            if (temp_fv0_2 < 0.0f) {
                arg0->unk_110 = temp_fv0_2 + 0.5f;
                if (arg0->unk_110 > 0.0f) {
                    arg0->unk_110 = 0.0f;
                }
            }
        }
    }
    Math_SmoothStepToF(&arg0->unk_08C, 0.0f, 0.1f, 2.0f, 0.0f);
}

void func_E16C50_801AD598(void *arg0) {
    s32 var_v1;

    D_E16C50_801C27C0 = (arg0->unk50 * 0x96 * 8) + &D_E16C50_801C27C8;
    var_v1 = arg0->unk50 * 0x32;
    if (var_v1 < (var_v1 + 0x32)) {
        do {
            var_v1 += 1;
            D_E16C50_801C27C0->unk0 = arg0->unk4;
            D_E16C50_801C27C0->unk4 = (f32) arg0->unk8;
            D_E16C50_801C27C0->unk8 = (f32) arg0->unkC;
            D_E16C50_801C27C0->unkC = (f32) arg0->unk10;
            D_E16C50_801C27C0->unk10 = (f32) arg0->unk14;
            D_E16C50_801C27C0->unk14 = (f32) arg0->unk18;
            D_E16C50_801C27C0->unkC = (f32) arg0->unkF4;
            D_E16C50_801C27C0->unk10 = (f32) arg0->unkF8;
            D_E16C50_801C27C0->unk14 = (f32) arg0->unkFC;
            D_E16C50_801C27C0 += 0x18;
        } while (var_v1 < ((arg0->unk50 * 0x32) + 0x32));
    }
}

void func_E16C50_801AD688(Object_2F4 *arg0) {
    func_E16C50_801AD598();
    arg0->unk_054 = 0xA;
    arg0->scale = 1.0f;
}

void func_E16C50_801AD6C0(Object_2F4 *arg0) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f *sp34;
    Vec3f *temp_a1;
    f32 *temp_t4;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fa1_2;
    f32 temp_fa1_3;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv1;
    f32 var_fv1;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 var_v0;

    if ((D_E16C50_801C42FC == 0) || (*(&gObjects2F4->unk_0B8 + ((arg0->unk_058 - 1) * 0x2F4)) >= 4)) {
        arg0->timer_0C2 = 0x7530;
        arg0->unk_0B8 = 2;
        arg0->vel.y = 0.0f;
        arg0->vel.x = 0.0f;
        arg0->vel.z = 0.0f;
    }
    if ((gPlayer->unk_138 + 500.0f) <= arg0->obj.pos.z) {
        Object_Kill(&arg0->obj, &arg0->sfxPos);
    }
    arg0->unk_04E += 1;
    if (arg0->unk_04E >= 0x32) {
        arg0->unk_04E = 0;
    }
    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        if (arg0->timer_0BC != 0) {
            arg0->unk_0F4.x += D_E16C50_801C4330;
            arg0->unk_0F4.z += 10.0f;
            arg0->unk_0F4.z = Math_ModF(arg0->unk_0F4.z, 360.0f);
        } else {
            arg0->unk_0CE = 0x1E;
            Audio_PlaySfx(0x31000047U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->unk_0B8 += 1;
        }
        break;
    case 1:
        if (arg0->unk_0D0 != 0) {
            temp_v0_2 = arg0->unk_0CE;
            if (temp_v0_2 > 0) {
                arg0->unk_0D0 = 0;
                arg0->timer_0C6 = 0xF;
                arg0->unk_0CE = temp_v0_2 - arg0->unk_0D6;
                temp_a1 = &arg0->sfxPos;
                sp34 = temp_a1;
                Audio_PlaySfx(0x29034045U, temp_a1, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                if (arg0->unk_0CE <= 0) {
                    arg0->timer_0C2 = 0x7530;
                    arg0->unk_0B8 = 2;
                    arg0->vel.y = 0.0f;
                    arg0->vel.x = 0.0f;
                    arg0->vel.z = 0.0f;
                    Audio_PlaySfx(0x2902A046U, sp34, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
        }
        if (arg0->obj.pos.z <= (gPlayer->unk_138 - 200.0f)) {
            temp_fa0 = (((Rand_ZeroOne() - 0.5f) * 100.0f) + gPlayer->pos.x) - arg0->obj.pos.x;
            arg0->unk_130 = temp_fa0;
            temp_ft5 = (gPlayer->pos.y - 30.0f) - arg0->obj.pos.y;
            sp7C = temp_ft5;
            arg0->unk_134 = temp_ft5;
            temp_fa1 = gPlayer->unk_138 - arg0->obj.pos.z;
            arg0->unk_138 = temp_fa1;
            sp78 = temp_fa1;
            sp80 = temp_fa0;
        } else {
            sp80 = arg0->unk_130;
            sp7C = arg0->unk_134;
            sp78 = arg0->unk_138 + 600.0f;
        }
        Math_RadToDeg(Math_Atan2F(sp80, sp78));
        temp_fa1_2 = sqrtf((sp80 * sp80) + (sp78 * sp78));
        sp70 = temp_fa1_2;
        Math_RadToDeg(-Math_Atan2F(sp7C, temp_fa1_2));
        temp_fv1 = (f32) (arg0->unk_050 + 1);
        temp_fa1_3 = temp_fv1 * 5.0f;
        arg0->unk_114 += temp_fa1_3;
        arg0->unk_118 += 10.0f + temp_fa1_3;
        temp_ft4 = temp_fv1 * 0.2f;
        arg0->unk_124.y = temp_ft4;
        arg0->unk_124.z = temp_ft4;
        sp7C = arg0->unk_124.y * (__sinf(arg0->unk_114 * 0.017453292f) * sp70);
        sp74 = arg0->unk_124.z * (__cosf(arg0->unk_118 * 0.017453292f) * sp70);
        sp80 = __cosf(arg0->unk_0F4.y * 0.017453292f) * sp74;
        sp78 = -__sinf(arg0->unk_0F4.y * 0.017453292f) * sp74;
        if (sp7C < 20.0f) {
            sp7C = 20.0f;
        }
        if (((f64) Rand_ZeroOne() < 0.7) && (arg0->obj.rot.z == 0.0f)) {
            arg0->unk_11C = 360.0f;
        }
        Math_SmoothStepToF(&arg0->unk_0F4.z, arg0->unk_11C, 0.1f, 10.0f, 0.001f);
        if (arg0->unk_0F4.z >= 360.0f) {
            arg0->unk_0F4.z = 0.0f;
            arg0->unk_11C = 0.0f;
        }
        sp68 = Math_RadToDeg(Math_Atan2F((((Rand_ZeroOne() - 0.5f) * 200.0f) + (gPlayer->pos.x + sp80)) - arg0->obj.pos.x, (gPlayer->unk_138 + sp78) - arg0->obj.pos.z));
        var_fv1 = Math_RadToDeg(-Math_Atan2F(((gPlayer->pos.y - 30.0f) + sp7C) - arg0->obj.pos.y, sp70));
        if (gPlayer->unk_138 <= arg0->obj.pos.z) {
            sp68 = arg0->unk_0F4.y;
            var_fv1 = arg0->unk_0F4.x;
        }
        sp6C = var_fv1;
        Math_SmoothStepToAngle(&arg0->unk_0F4.y, sp68, 1.0f, 5.0f, 0.001f);
        Math_SmoothStepToAngle(&arg0->unk_0F4.x, var_fv1, 1.0f, 5.0f, 0.001f);
        Matrix_RotateY(gCalcMatrix, arg0->unk_0F4.y * 0.017453292f, 0U);
        Matrix_RotateX(gCalcMatrix, arg0->unk_0F4.x * 0.017453292f, 1U);
        sp5C = 0.0f;
        sp60 = 0.0f;
        sp64 = 40.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp5C, &sp50);
        sp64 = (Rand_ZeroOne() * 10.0f * (f32) (arg0->unk_050 + 1)) + 10.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp5C, &sp44);
        arg0->vel.x = (bitwise f32) sp50;
        arg0->vel.y = sp50.y;
        arg0->vel.z = sp44.z;
        break;
    case 2:
        if (arg0->timer_0C6 == 0) {
            arg0->timer_0C6 = 0xF;
        }
        temp_a0 = arg0->unk_04E;
        if (arg0->timer_0BC == 0) {
            sp34 = &arg0->sfxPos;
            temp_t2 = arg0->unk_050 * 0x32;
            var_v0 = (temp_t2 + temp_a0) - D_E16C50_801BFB64[arg0->unk_054];
            if (var_v0 < temp_t2) {
                if (var_v0 > 0) {
                    var_v0 -= temp_t2;
                }
                var_v0 = temp_t2 + var_v0 + 0x32;
            }
            D_E16C50_801C27C0 = (var_v0 * 0x18) + &D_E16C50_801C27C8;
            func_800815DC(temp_a0);
            temp_t2_2 = arg0->unk_054 - 1;
            arg0->unk_054 = temp_t2_2;
            if (temp_t2_2 <= 0) {
                arg0->unk_044 = 0;
                arg0->unk_0D4 = 2;
                func_80066254(arg0);
                Object_Kill(&arg0->obj, sp34);
            }
            arg0->timer_0BC = 4;
            func_8007D0E0(D_E16C50_801C27C0->unk0, D_E16C50_801C27C0->unk4, D_E16C50_801C27C0->unk8, 3.0f);
            Audio_PlaySfx(0x29018049U, sp34, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        break;
    }
    temp_t4 = (arg0->unk_050 * 0x96 * 8) + (arg0->unk_04E * 0x18) + &D_E16C50_801C27C8;
    D_E16C50_801C27C0 = temp_t4;
    *temp_t4 = arg0->obj.pos.x;
    D_E16C50_801C27C0->unk4 = (f32) arg0->obj.pos.y;
    D_E16C50_801C27C0->unk8 = (f32) arg0->obj.pos.z;
    D_E16C50_801C27C0->unkC = (f32) arg0->unk_0F4.x;
    D_E16C50_801C27C0->unk10 = (f32) arg0->unk_0F4.y;
    D_E16C50_801C27C0->unk14 = (f32) arg0->unk_0F4.z;
}

void func_E16C50_801ADF7C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, s32 arg7, f32 arg8, s32 arg9) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;

    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, arg0, arg1, arg2 + D_80177D20, (u8) 1);
    Matrix_RotateY(gGfxMatrix, 0.017453292f * arg4, 1U);
    Matrix_RotateX(gGfxMatrix, 0.017453292f * arg3, 1U);
    Matrix_RotateZ(gGfxMatrix, 0.017453292f * arg5, 1U);
    Graphics_SetScaleMtx(arg8);
    if (arg9 < 2) {
        if (arg7 == 0) {
            RCP_SetupDL(&gMasterDisp, 0x39);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x3D);
            temp_v0 = gMasterDisp;
            gMasterDisp = temp_v0 + 8;
            temp_v0->words.w0 = 0xFA000000;
            temp_v0->words.w1 = 0xFF0000FF;
        }
    } else if (arg7 == 0) {
        RCP_SetupDL(&gMasterDisp, 0x39);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x3D);
        temp_v0_2 = gMasterDisp;
        gMasterDisp = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v0_2->words.w1 = 0xFF0000FF;
    }
    temp_v0_3 = gMasterDisp;
    gMasterDisp = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0x06000000;
    temp_v0_3->words.w1 = D_E16C50_801BFB9C[arg6];
    Matrix_Pop(&gGfxMatrix);
}

void func_E16C50_801AE168(Object_2F4 *arg0) {
    f32 *temp_t4;
    f32 *var_s0;
    f32 temp_ft4;
    f32 temp_fv1;
    f32 var_fs0;
    f32 var_fv1;
    s32 temp_t6;
    s32 var_s2;
    s32 var_v0;

    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    var_s2 = 0;
    if (arg0->unk_054 >= 0) {
        do {
            if ((arg0->unk_054 != 0xA) && (var_s2 == 0)) {
                var_s2 = 1;
            }
            temp_t6 = arg0->unk_050 * 0x32;
            var_v0 = (temp_t6 + arg0->unk_04E) - D_E16C50_801BFB64[var_s2];
            if (var_v0 < temp_t6) {
                if (var_v0 > 0) {
                    var_v0 -= temp_t6;
                }
                var_v0 = temp_t6 + var_v0 + 0x32;
            }
            temp_t4 = (var_v0 * 0x18) + &D_E16C50_801C27C8;
            D_E16C50_801C27C0 = temp_t4;
            var_fv1 = temp_t4->unkC;
            var_s0 = temp_t4;
            var_fs0 = temp_t4->unk10;
            if (var_s2 >= 2) {
                var_fs0 = (Math_Atan2F(gPlayer->camEye.x - temp_t4->unk0, gPlayer->camEye.z - (temp_t4->unk8 + D_80177D20)) * 180.0f) / 3.1415927f;
                temp_fv1 = gPlayer->camEye.x - D_E16C50_801C27C0->unk0;
                temp_ft4 = gPlayer->camEye.z - (D_E16C50_801C27C0->unk8 + D_80177D20);
                var_s0 = D_E16C50_801C27C0;
                var_fv1 = (-Math_Atan2F(gPlayer->camEye.y - D_E16C50_801C27C0->unk4, sqrtf((temp_fv1 * temp_fv1) + (temp_ft4 * temp_ft4))) * 180.0f) / 3.1415927f;
            }
            func_E16C50_801ADF7C(var_s0->unk0, var_s0->unk4, var_s0->unk8, var_fv1, var_fs0, var_s0->unk14, (u8) (s32) *(var_s2 + &D_E16C50_801BFB90), arg0->timer_0C6 & 1, arg0->scale, var_s2);
            var_s2 += 1;
        } while (arg0->unk_054 >= var_s2);
    }
}

void func_E16C50_801AE3AC(Object_2F4 *arg0) {
    arg0->unk_118 = 1.0f;
    arg0->obj.rot.x = 336.0f;
    arg0->scale = 0.5f;
}

void func_E16C50_801AE3D8(Object_2F4 *arg0) {
    f32 sp48;
    f32 sp44;
    Vec3f *sp40;
    Object_2F4 *var_v0;
    Vec3f *temp_a1;
    f32 *temp_v0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s16 temp_v0;
    s16 var_s0_2;
    s32 temp_t3;
    s32 temp_t9;
    s32 var_s0;
    u16 temp_v0_3;

    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        temp_fv1 = fabsf(D_E16C50_801C4330 * 15.0f) + 347.0f;
        arg0->obj.pos.y = temp_fv1;
        if (temp_fv1 >= 757.0f) {
            arg0->obj.pos.y = 757.0f;
        }
        if (arg0->obj.pos.y <= 347.0f) {
            arg0->obj.pos.y = 347.0f;
        }
        temp_fv1_2 = fabsf(D_E16C50_801C4330 / -28.0f) + 0.5f;
        arg0->scale = temp_fv1_2;
        if (temp_fv1_2 > 1.3f) {
            arg0->scale = 1.3f;
        }
        if (arg0->scale <= 0.5f) {
            arg0->scale = 0.5f;
        }
        if (gObjects408->timer_052 == 0) {
            temp_v0_2 = arg0->info.hitbox;
            arg0->unk_0CE = 0;
            if (temp_v0_2->unk28 != 116.0f) {
                temp_v0_2->unk28 = 116.0f;
            }
        }
        if ((arg0->unk_0D0 != 0) && (arg0->unk_0D0 = 0, (fabsf(D_E16C50_801C4330) >= 6.0f)) && (gObjects408->unk_04E >= 0xA) && (gObjects408->unk_088 < 2)) {
            arg0->timer_0C6 = 0x1E;
            arg0->unk_054 = 0;
            temp_a1 = &arg0->sfxPos;
            D_E16C50_801C4444 -= 5.0f;
            sp40 = temp_a1;
            Audio_PlaySfx(0x29036050U, temp_a1, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (D_E16C50_801C4444 <= -28.0f) {
                D_E16C50_801C4444 = -28.0f;
            }
            if (D_E16C50_801C4330 <= -23.0f) {
                if (gObjects408->timer_052 == 0) {
                    gObjects408->timer_052 = 0x48;
                    arg0->unk_0CE = 0xA;
                    var_v0 = gObjects2F4;
                    do {
                        if ((var_v0->obj.id == 0x100) && (arg0->index != var_v0->index)) {
                            var_v0->unk_0CE = 0xA;
                        }
                        if ((var_v0->unk2F6 == 0x100) && (arg0->index != var_v0->unk334)) {
                            var_v0->unk3C2 = 0xA;
                        }
                        if ((var_v0->unk5EA == 0x100) && (arg0->index != var_v0->unk628)) {
                            var_v0->unk6B6 = 0xA;
                        }
                        if ((var_v0->unk8DE == 0x100) && (arg0->index != var_v0->unk91C)) {
                            var_v0->unk9AA = 0xA;
                        }
                        var_v0 += 0xBD0;
                    } while (var_v0 != gObjects408);
                } else {
                    arg0->unk_054 = 0;
                    arg0->timer_0C6 = 0;
                }
                if (gObjects408->unk_088 == 0) {
                    gObjects408->unk_088 = 1;
                    arg0->info.hitbox->unk28 = 300.0f;
                    if (arg0->unkAC == 0) {
                        func_800BA808(gMsg_ID_15120, 0x14);
                    }
                    temp_t9 = arg0->unkAC + 1;
                    arg0->unkAC = temp_t9;
                    arg0->unkAC = temp_t9 & 1;
                    return;
                }
                temp_v0_3 = arg0->unk_0D6;
                if (temp_v0_3 == 0x1F) {
                    arg0->unk_0CE -= temp_v0_3;
                    func_800BA808(gMsg_ID_15130, 0xA);
                    if (arg0->unk_0CE <= 0) {
                        gObjects408->unk_088 = 2;
                        arg0->unk_0CE = 0;
                        arg0->timer_0C6 = 0x12C;
                        arg0->unk_11C = arg0->scale;
                        Audio_PlaySfx(0x19000033U, sp40, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        arg0->unk_0B8 += 1;
                        return;
                    }
                }
            }
        } else {
            return;
        }
        break;
    case 1:
        if (!(gFrameCount & 1)) {
            func_8007C120(arg0->obj.pos.x, arg0->unk_114 + arg0->obj.pos.y, arg0->obj.pos.z, arg0->vel.x, arg0->vel.y, arg0->vel.z, 0.1f, 0xA);
            func_8007C120(arg0->obj.pos.x, (arg0->unk_114 * -1.0f) + arg0->obj.pos.y, arg0->obj.pos.z + 200.0f, arg0->vel.x, arg0->vel.y, arg0->vel.z, 0.1f, 0xA);
            arg0->unk_114 += 40.0f;
        }
        if ((arg0->unk_11C * 400.0f) <= arg0->unk_114) {
            arg0->timer_0BC = 0x14;
            arg0->unk_0B8 += 1;
            return;
        }
        break;
    case 2:
        if (arg0->timer_0BC == 0) {
            var_s0 = 0;
            do {
                func_8007B8F8(arg0->obj.pos.x, arg0->obj.pos.y + 450.0f, arg0->obj.pos.z + 50.0f, 50.0f);
                func_8007B8F8(arg0->obj.pos.x, arg0->obj.pos.y - 420.0f, arg0->obj.pos.z + 300.0f, 50.0f);
                var_s0 += 1;
            } while (var_s0 != 6);
            arg0->timer_0BC = 0xA;
            arg0->unk_0B8 += 1;
            arg0->unk_120 = 0.7f;
            return;
        }
        break;
    case 3:
        if (arg0->timer_0BC == 0) {
            Math_SmoothStepToF(&arg0->unk_120, 0.0f, 0.1f, 2.0f, 0.0f);
            Math_SmoothStepToF(&arg0->scale, 0.0f, arg0->unk_120, 10.0f, 0.0f);
            if (arg0->scale <= 0.2f) {
                func_8007BC7C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 50.0f);
                func_8007BC7C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 50.0f);
                func_8007BC7C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 50.0f);
                Object_Kill(&arg0->obj, &arg0->sfxPos);
                temp_t3 = D_E16C50_801C42A0.unk5C - 1;
                D_E16C50_801C42A0.unk5C = temp_t3;
                gObjects408->unk_088 = 3;
                gObjects408->unk_0AE = 0x1E;
                D_E16C50_801C4308.unk13C = 0.0f;
                if (temp_t3 == 0) {
                    var_s0_2 = 0;
                    D_E16C50_801C4308.unk13C = -180.0f;
                    do {
                        sp44 = Rand_ZeroOne();
                        sp48 = Rand_ZeroOne();
                        func_E16C50_801AC8A8(((sp44 - 0.5f) * 1800.0f) + gObjects408->obj.pos.x, ((sp48 - 0.5f) * 1000.0f) + (gObjects408->obj.pos.y + 400.0f), ((Rand_ZeroOne() - 0.5f) * 1000.0f) + (gObjects408->obj.pos.z + 700.0f), 7.0f, 2);
                        var_s0_2 += 1;
                    } while (var_s0_2 != 0x3C);
                    gObjects408->timer_052 = 0;
                    gObjects408->timer_056 = 0x3C;
                    gObjects408->unk_04E = 0xE;
                }
                D_E16C50_801C4308.unk140 = (f32) (D_E16C50_801C4308.unk140 + D_E16C50_801BFBA8[arg0->unk_050]);
            }
        }
        break;
    }
}

void func_E16C50_801AEB44(Object_2F4 *arg0) {
    Gfx *spEC;
    Gfx *spC4;
    Gfx *sp7C;
    Gfx *sp54;
    Gfx *sp2C;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_2;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_33;
    Gfx *temp_v0_34;
    Gfx *temp_v0_35;
    Gfx *temp_v0_36;
    Gfx *temp_v0_37;
    Gfx *temp_v0_38;
    Gfx *temp_v0_39;
    Gfx *temp_v0_3;
    Gfx *temp_v0_40;
    Gfx *temp_v0_41;
    Gfx *temp_v0_42;
    Gfx *temp_v0_43;
    Gfx *temp_v0_44;
    Gfx *temp_v0_45;
    Gfx *temp_v0_46;
    Gfx *temp_v0_47;
    Gfx *temp_v0_48;
    Gfx *temp_v0_49;
    Gfx *temp_v0_4;
    Gfx *temp_v0_50;
    Gfx *temp_v0_51;
    Gfx *temp_v0_52;
    Gfx *temp_v0_53;
    Gfx *temp_v0_54;
    Gfx *temp_v0_55;
    Gfx *temp_v0_56;
    Gfx *temp_v0_57;
    Gfx *temp_v0_58;
    Gfx *temp_v0_59;
    Gfx *temp_v0_5;
    Gfx *temp_v0_60;
    Gfx *temp_v0_61;
    Gfx *temp_v0_62;
    Gfx *temp_v0_63;
    Gfx *temp_v0_64;
    Gfx *temp_v0_65;
    Gfx *temp_v0_66;
    Gfx *temp_v0_67;
    Gfx *temp_v0_68;
    Gfx *temp_v0_69;
    Gfx *temp_v0_6;
    Gfx *temp_v0_70;
    Gfx *temp_v0_71;
    Gfx *temp_v0_72;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fv0;
    s16 *temp_a1;
    s16 *temp_v1_2;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_t0;
    s32 temp_lo;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t5;
    s8 temp_a2_3;
    s8 temp_a3_3;
    s8 temp_t0_2;

    if ((arg0->timer_0C6 != 0) && (arg0->unk_0B8 == 0) && (D_80177854 != 0x64)) {
        temp_t9 = arg0->unk_054 + 1;
        arg0->unk_054 = temp_t9;
        arg0->unk_054 = temp_t9 % 8;
    }
    temp_v1 = arg0->unk_054;
    if (temp_v1 < 4) {
        var_t5 = gSegments[(u32) ((s32) &D_6018C78 * 0x10) >> 0x1C] + ((s32) &D_6018C78 & 0xFFFFFF) + 0x80000000;
    } else {
        var_t5 = gSegments[(u32) ((s32) &D_6018878 * 0x10) >> 0x1C] + ((s32) &D_6018878 & 0xFFFFFF) + 0x80000000;
    }
    temp_t9_2 = (temp_v1 % 4) & 0xFF;
    var_t1 = temp_t9_2;
    if (temp_t9_2 >= 3) {
        var_t1 = (4 - temp_t9_2) & 0xFF;
    }
    var_t2 = 0;
    var_fv0 = (f32) (u32) arg0->timer_0C6 / 60.0f;
    var_t3 = 0;
    if (var_fv0 < 0.1f) {
        var_fv0 = 0.1f;
    }
    temp_t8 = gFrameCounter & 1;
    do {
        temp_v0 = var_t2 * 0x10;
        temp_a1 = var_t5 + temp_v0;
        temp_v1_2 = gSegments[(u32) ((s32) &D_6019078 * 0x10) >> 0x1C] + ((s32) &D_6019078 & 0xFFFFFF) + 0x80000000 + temp_v0;
        temp_a2 = temp_v1_2->unk0;
        var_t3 = (var_t3 + 1) & 0xFF;
        temp_lo = (temp_a1->unk0 - temp_a2) * var_t1;
        var_t2 = var_t3;
        *(&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + (temp_t8 * 0x1C0) + temp_v0) = (s32) ((f32) (temp_lo / 2) * var_fv0) + temp_a2;
        temp_a3 = temp_v1_2->unk2;
        (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + (temp_t8 * 0x1C0) + temp_v0)->unk2 = (s16) (((s32) ((temp_a1->unk2 - temp_a3) * var_t1) / 2) + temp_a3);
        temp_t0 = temp_v1_2->unk4;
        (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + (temp_t8 * 0x1C0) + temp_v0)->unk4 = (s16) (((s32) ((temp_a1->unk4 - temp_t0) * var_t1) / 2) + temp_t0);
        (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + (temp_t8 * 0x1C0) + temp_v0)->unk6 = (u16) temp_v1_2->unk6;
        temp_a2_2 = temp_v1_2->unk8;
        (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + (temp_t8 * 0x1C0) + temp_v0)->unk8 = (s16) (((s32) ((temp_a1->unk8 - temp_a2_2) * var_t1) / 2) + temp_a2_2);
        temp_a3_2 = temp_v1_2->unkA;
        (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + (temp_t8 * 0x1C0) + temp_v0)->unkA = (s16) (((s32) ((temp_a1->unkA - temp_a3_2) * var_t1) / 2) + temp_a3_2);
        temp_a2_3 = temp_v1_2->unkC;
        (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + (temp_t8 * 0x1C0) + temp_v0)->unkC = (s8) (((s32) ((temp_a1->unkC - temp_a2_3) * var_t1) / 2) + temp_a2_3);
        temp_a3_3 = temp_v1_2->unkD;
        (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + (temp_t8 * 0x1C0) + temp_v0)->unkD = (s8) (((s32) ((temp_a1->unkD - temp_a3_3) * var_t1) / 2) + temp_a3_3);
        temp_t0_2 = temp_v1_2->unkE;
        (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + (temp_t8 * 0x1C0) + temp_v0)->unkE = (s8) (((s32) ((temp_a1->unkE - temp_t0_2) * var_t1) / 2) + temp_t0_2);
        (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + (temp_t8 * 0x1C0) + temp_v0)->unkF = (u8) temp_v1_2->unkF;
    } while (var_t3 < 0x1C);
    temp_fv1 = arg0->scale;
    temp_fv0 = arg0->unk_118;
    Matrix_Scale(gGfxMatrix, (temp_fv0 - 0.25f) + ((1.5f - temp_fv1) * 0.5f), temp_fv1, temp_fv0, (u8) 1);
    if (arg0->unk_0B8 != 0) {
        RCP_SetupDL(&gMasterDisp, 0x20);
    } else if (gObjects408->unk_088 == 1) {
        RCP_SetupDL(&gMasterDisp, 4);
    } else if (!(arg0->timer_0C6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x1D);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x16);
        temp_v0_2 = gMasterDisp;
        gMasterDisp = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v0_2->words.w1 = 0xFF0000FF;
    }
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v0_3 = gMasterDisp;
    gMasterDisp = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0x8000;
    temp_v0_3->words.w0 = 0xBA000E02;
    temp_v0_4 = gMasterDisp;
    gMasterDisp = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xFD100000;
    temp_v0_4->words.w1 = (u32) &D_6008FC8;
    temp_v0_5 = gMasterDisp;
    gMasterDisp = temp_v0_5 + 8;
    temp_v0_5->words.w1 = 0;
    temp_v0_5->words.w0 = 0xE8000000;
    temp_v0_6 = gMasterDisp;
    gMasterDisp = temp_v0_6 + 8;
    temp_v0_6->words.w1 = 0x07000000;
    temp_v0_6->words.w0 = 0xF5000100;
    temp_v0_7 = gMasterDisp;
    gMasterDisp = temp_v0_7 + 8;
    temp_v0_7->words.w1 = 0;
    temp_v0_7->words.w0 = 0xE6000000;
    temp_v0_8 = gMasterDisp;
    gMasterDisp = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0x073FC000;
    temp_v0_8->words.w0 = 0xF0000000;
    temp_v0_9 = gMasterDisp;
    gMasterDisp = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xE7000000;
    temp_v0_10 = gMasterDisp;
    gMasterDisp = temp_v0_10 + 8;
    temp_v0_10->words.w1 = (u32) &D_6008EC8;
    temp_v0_10->words.w0 = 0xFD500000;
    temp_v0_11 = gMasterDisp;
    gMasterDisp = temp_v0_11 + 8;
    temp_v0_11->words.w0 = 0xF5500000;
    temp_v0_11->words.w1 = 0x07010040;
    temp_v0_12 = gMasterDisp;
    gMasterDisp = temp_v0_12 + 8;
    temp_v0_12->words.w1 = 0;
    temp_v0_12->words.w0 = 0xE6000000;
    temp_v0_13 = gMasterDisp;
    gMasterDisp = temp_v0_13 + 8;
    temp_v0_13->words.w0 = 0xF3000000;
    temp_v0_13->words.w1 = 0x0707F400;
    temp_v0_14 = gMasterDisp;
    gMasterDisp = temp_v0_14 + 8;
    temp_v0_14->words.w1 = 0;
    temp_v0_14->words.w0 = 0xE7000000;
    temp_v0_15 = gMasterDisp;
    gMasterDisp = temp_v0_15 + 8;
    temp_v0_15->words.w0 = 0xF5480400;
    temp_v0_15->words.w1 = 0x10040;
    temp_v0_16 = gMasterDisp;
    gMasterDisp = temp_v0_16 + 8;
    temp_v0_16->words.w0 = 0xF2000000;
    temp_v0_16->words.w1 = 0x3C03C;
    temp_v0_17 = gMasterDisp;
    gMasterDisp = temp_v0_17 + 8;
    temp_v0_17->words.w0 = 0x040038DF;
    temp_v0_17->words.w1 = (u32) (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + ((gFrameCounter & 1) * 0x1C0));
    temp_v0_18 = gMasterDisp;
    gMasterDisp = temp_v0_18 + 8;
    temp_v0_18->words.w1 = 0x204;
    temp_v0_18->words.w0 = 0xBF000000;
    temp_v0_19 = gMasterDisp;
    gMasterDisp = temp_v0_19 + 8;
    temp_v0_19->words.w1 = 0x60200;
    temp_v0_19->words.w0 = 0xBF000000;
    temp_v0_20 = gMasterDisp;
    gMasterDisp = temp_v0_20 + 8;
    temp_v0_20->words.w1 = 0x80A00;
    temp_v0_20->words.w0 = 0xBF000000;
    temp_v0_21 = gMasterDisp;
    gMasterDisp = temp_v0_21 + 8;
    temp_v0_21->words.w1 = 0xC0E;
    temp_v0_21->words.w0 = 0xBF000000;
    temp_v0_22 = gMasterDisp;
    gMasterDisp = temp_v0_22 + 8;
    spEC = temp_v0_22;
    temp_v0_22->words.w1 = 0x40C00;
    temp_v0_22->words.w0 = 0xBF000000;
    temp_v0_23 = gMasterDisp;
    gMasterDisp = temp_v0_23 + 8;
    temp_v0_23->words.w1 = 0xA06;
    temp_v0_23->words.w0 = 0xBF000000;
    temp_v0_24 = gMasterDisp;
    gMasterDisp = temp_v0_24 + 8;
    temp_v0_24->words.w1 = 0x1008;
    temp_v0_24->words.w0 = 0xBF000000;
    temp_v0_25 = gMasterDisp;
    gMasterDisp = temp_v0_25 + 8;
    temp_v0_25->words.w1 = 0xE1000;
    temp_v0_25->words.w0 = 0xBF000000;
    temp_v0_26 = gMasterDisp;
    gMasterDisp = temp_v0_26 + 8;
    temp_v0_26->words.w1 = 0x120810;
    temp_v0_26->words.w0 = 0xBF000000;
    temp_v0_27 = gMasterDisp;
    gMasterDisp = temp_v0_27 + 8;
    temp_v0_27->words.w1 = 0x100E14;
    temp_v0_27->words.w0 = 0xBF000000;
    temp_v0_28 = gMasterDisp;
    gMasterDisp = temp_v0_28 + 8;
    temp_v0_28->words.w1 = 0x101612;
    temp_v0_28->words.w0 = 0xBF000000;
    temp_v0_29 = gMasterDisp;
    gMasterDisp = temp_v0_29 + 8;
    temp_v0_29->words.w1 = 0x141610;
    temp_v0_29->words.w0 = 0xBF000000;
    temp_v0_30 = gMasterDisp;
    gMasterDisp = temp_v0_30 + 8;
    temp_v0_30->words.w1 = 0x180812;
    temp_v0_30->words.w0 = 0xBF000000;
    temp_v0_31 = gMasterDisp;
    gMasterDisp = temp_v0_31 + 8;
    temp_v0_31->words.w1 = 0x1A0A08;
    temp_v0_31->words.w0 = 0xBF000000;
    temp_v0_32 = gMasterDisp;
    gMasterDisp = temp_v0_32 + 8;
    spC4 = temp_v0_32;
    temp_v0_32->words.w1 = 0x8181A;
    temp_v0_32->words.w0 = 0xBF000000;
    temp_v0_33 = gMasterDisp;
    gMasterDisp = temp_v0_33 + 8;
    temp_v0_33->words.w1 = 0x60A1A;
    temp_v0_33->words.w0 = 0xBF000000;
    temp_v0_34 = gMasterDisp;
    gMasterDisp = temp_v0_34 + 8;
    temp_v0_34->words.w1 = 0x1A0C04;
    temp_v0_34->words.w0 = 0xBF000000;
    temp_v0_35 = gMasterDisp;
    gMasterDisp = temp_v0_35 + 8;
    temp_v0_35->words.w1 = 0xE0C1A;
    temp_v0_35->words.w0 = 0xBF000000;
    temp_v0_36 = gMasterDisp;
    gMasterDisp = temp_v0_36 + 8;
    temp_v0_36->words.w1 = 0x1A180E;
    temp_v0_36->words.w0 = 0xBF000000;
    temp_v0_37 = gMasterDisp;
    gMasterDisp = temp_v0_37 + 8;
    temp_v0_37->words.w1 = 0x140E18;
    temp_v0_37->words.w0 = 0xBF000000;
    temp_v0_38 = gMasterDisp;
    gMasterDisp = temp_v0_38 + 8;
    temp_v0_38->words.w0 = 0x04000C2F;
    temp_v0_38->words.w1 = (u32) (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + ((gFrameCounter & 1) * 0x1C0) + 0x10);
    temp_v0_39 = gMasterDisp;
    gMasterDisp = temp_v0_39 + 8;
    temp_v0_39->words.w0 = 0x0406081F;
    temp_v0_39->words.w1 = (u32) (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + ((gFrameCounter & 1) * 0x1C0) + 0x90);
    temp_v0_40 = gMasterDisp;
    gMasterDisp = temp_v0_40 + 8;
    temp_v0_40->words.w0 = 0x040A207F;
    temp_v0_40->words.w1 = (u32) (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + ((gFrameCounter & 1) * 0x1C0) + 0xC0);
    temp_v0_41 = gMasterDisp;
    gMasterDisp = temp_v0_41 + 8;
    temp_v0_41->words.w1 = 0x40E;
    temp_v0_41->words.w0 = 0xBF000000;
    temp_v0_42 = gMasterDisp;
    gMasterDisp = temp_v0_42 + 8;
    temp_v0_42->words.w1 = 0xE0410;
    temp_v0_42->words.w0 = 0xBF000000;
    temp_v0_43 = gMasterDisp;
    gMasterDisp = temp_v0_43 + 8;
    temp_v0_43->words.w1 = 0xC1004;
    temp_v0_43->words.w0 = 0xBF000000;
    temp_v0_44 = gMasterDisp;
    gMasterDisp = temp_v0_44 + 8;
    temp_v0_44->words.w1 = 0x100212;
    temp_v0_44->words.w0 = 0xBF000000;
    temp_v0_45 = gMasterDisp;
    gMasterDisp = temp_v0_45 + 8;
    temp_v0_45->words.w1 = 0x2100C;
    temp_v0_45->words.w0 = 0xBF000000;
    temp_v0_46 = gMasterDisp;
    gMasterDisp = temp_v0_46 + 8;
    temp_v0_46->words.w1 = 0xA1408;
    temp_v0_46->words.w0 = 0xBF000000;
    temp_v0_47 = gMasterDisp;
    gMasterDisp = temp_v0_47 + 8;
    temp_v0_47->words.w1 = 0x6140A;
    temp_v0_47->words.w0 = 0xBF000000;
    temp_v0_48 = gMasterDisp;
    gMasterDisp = temp_v0_48 + 8;
    temp_v0_48->words.w1 = 0x10180E;
    temp_v0_48->words.w0 = 0xBF000000;
    temp_v0_49 = gMasterDisp;
    gMasterDisp = temp_v0_49 + 8;
    temp_v0_49->words.w1 = 0xE1600;
    temp_v0_49->words.w0 = 0xBF000000;
    temp_v0_50 = gMasterDisp;
    gMasterDisp = temp_v0_50 + 8;
    sp7C = temp_v0_50;
    temp_v0_50->words.w1 = 0x1612;
    temp_v0_50->words.w0 = 0xBF000000;
    temp_v0_51 = gMasterDisp;
    gMasterDisp = temp_v0_51 + 8;
    temp_v0_51->words.w1 = 0x120200;
    temp_v0_51->words.w0 = 0xBF000000;
    temp_v0_52 = gMasterDisp;
    gMasterDisp = temp_v0_52 + 8;
    temp_v0_52->words.w1 = 0x121810;
    temp_v0_52->words.w0 = 0xBF000000;
    temp_v0_53 = gMasterDisp;
    gMasterDisp = temp_v0_53 + 8;
    temp_v0_53->words.w0 = 0xFD100000;
    temp_v0_53->words.w1 = (u32) &D_6019338;
    temp_v0_54 = gMasterDisp;
    gMasterDisp = temp_v0_54 + 8;
    temp_v0_54->words.w1 = 0;
    temp_v0_54->words.w0 = 0xE8000000;
    temp_v0_55 = gMasterDisp;
    gMasterDisp = temp_v0_55 + 8;
    temp_v0_55->words.w1 = 0x07000000;
    temp_v0_55->words.w0 = 0xF5000100;
    temp_v0_56 = gMasterDisp;
    gMasterDisp = temp_v0_56 + 8;
    temp_v0_56->words.w1 = 0;
    temp_v0_56->words.w0 = 0xE6000000;
    temp_v0_57 = gMasterDisp;
    gMasterDisp = temp_v0_57 + 8;
    temp_v0_57->words.w1 = 0x073FC000;
    temp_v0_57->words.w0 = 0xF0000000;
    temp_v0_58 = gMasterDisp;
    gMasterDisp = temp_v0_58 + 8;
    temp_v0_58->words.w1 = 0;
    temp_v0_58->words.w0 = 0xE7000000;
    temp_v0_59 = gMasterDisp;
    gMasterDisp = temp_v0_59 + 8;
    temp_v0_59->words.w1 = (u32) &D_6019238;
    temp_v0_59->words.w0 = 0xFD500000;
    temp_v0_60 = gMasterDisp;
    gMasterDisp = temp_v0_60 + 8;
    sp54 = temp_v0_60;
    temp_v0_60->words.w0 = 0xF5500000;
    temp_v0_60->words.w1 = 0x07010040;
    temp_v0_61 = gMasterDisp;
    gMasterDisp = temp_v0_61 + 8;
    temp_v0_61->words.w1 = 0;
    temp_v0_61->words.w0 = 0xE6000000;
    temp_v0_62 = gMasterDisp;
    gMasterDisp = temp_v0_62 + 8;
    temp_v0_62->words.w1 = 0x0707F400;
    temp_v0_62->words.w0 = 0xF3000000;
    temp_v0_63 = gMasterDisp;
    gMasterDisp = temp_v0_63 + 8;
    temp_v0_63->words.w1 = 0;
    temp_v0_63->words.w0 = 0xE7000000;
    temp_v0_64 = gMasterDisp;
    gMasterDisp = temp_v0_64 + 8;
    temp_v0_64->words.w0 = 0xF5480400;
    temp_v0_64->words.w1 = 0x10040;
    temp_v0_65 = gMasterDisp;
    gMasterDisp = temp_v0_65 + 8;
    temp_v0_65->words.w0 = 0xF2000000;
    temp_v0_65->words.w1 = 0x3C03C;
    temp_v0_66 = gMasterDisp;
    gMasterDisp = temp_v0_66 + 8;
    temp_v0_66->words.w0 = 0x0400207F;
    temp_v0_66->words.w1 = (u32) (&D_E16C50_801C3A88 + (arg0->unk_050 * 0x380) + ((gFrameCounter & 1) * 0x1C0) + 0x140);
    temp_v0_67 = gMasterDisp;
    gMasterDisp = temp_v0_67 + 8;
    temp_v0_67->words.w1 = 0x204;
    temp_v0_67->words.w0 = 0xBF000000;
    temp_v0_68 = gMasterDisp;
    gMasterDisp = temp_v0_68 + 8;
    temp_v0_68->words.w1 = 0x40600;
    temp_v0_68->words.w0 = 0xBF000000;
    temp_v0_69 = gMasterDisp;
    gMasterDisp = temp_v0_69 + 8;
    temp_v0_69->words.w1 = 0x80A0C;
    temp_v0_69->words.w0 = 0xBF000000;
    temp_v0_70 = gMasterDisp;
    gMasterDisp = temp_v0_70 + 8;
    sp2C = temp_v0_70;
    temp_v0_70->words.w1 = 0xC0E08;
    temp_v0_70->words.w0 = 0xBF000000;
    temp_v0_71 = gMasterDisp;
    gMasterDisp = temp_v0_71 + 8;
    temp_v0_71->words.w1 = 0;
    temp_v0_71->words.w0 = 0xE7000000;
    temp_v0_72 = gMasterDisp;
    gMasterDisp = temp_v0_72 + 8;
    temp_v0_72->words.w1 = 0;
    temp_v0_72->words.w0 = 0xBA000E02;
}

void func_E16C50_801AF9FC(Object_2F4 *arg0) {
    f32 *temp_a1;
    s32 temp_v0;

    temp_v0 = arg0->unk_050;
    arg0->unk_11C = 1.0f;
    arg0->unk_118 = 1.0f;
    arg0->unk_114 = 1.0f;
    temp_a1 = &(&D_E16C50_801C4308)[temp_v0];
    arg0->obj.pos.x = temp_a1->unk4;
    arg0->obj.pos.y = temp_a1->unk10;
    arg0->obj.pos.z = temp_a1->unk1C;
    arg0->obj.rot.x = D_E16C50_801C4308.unk28 + D_E16C50_801BFBBC[temp_v0];
}

void func_E16C50_801AFA5C(Object_2F4 *arg0) {
    f32 sp70;
    f32 sp6C;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    Vec3f sp4C;
    Object_2F4 *sp48;
    f32 sp44;
    f32 sp40;
    s32 sp3C;                                       /* compiler-managed */
    Vec3f *sp38;
    Object_2F4 *temp_v0_3;
    Object_2F4 *temp_v0_7;
    Object_2F4 *var_a3;
    f32 *temp_v0;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 var_ft0;
    f32 var_ft0_2;
    f32 var_ft0_3;
    s16 temp_v0_2;
    s16 temp_v0_9;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_v0_8;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    struct _struct_D_E16C50_801BFBE0_0x10 *temp_v0_4;
    struct _struct_D_E16C50_801BFC10_0x10 *temp_v0_5;
    struct _struct_D_E16C50_801BFC40_0x10 *temp_v0_6;
    u16 temp_t3;
    u16 temp_t6;
    u16 temp_t7;
    u16 temp_v0_10;
    u16 temp_v1;

    if (arg0->unk_0B8 < 4) {
        temp_s0 = arg0->unk_050;
        temp_v0 = &(&D_E16C50_801C4308)[temp_s0];
        arg0->obj.pos.x = temp_v0->unk4;
        arg0->obj.pos.y = temp_v0->unk10;
        arg0->obj.pos.z = temp_v0->unk1C;
        arg0->obj.rot.x = D_E16C50_801C4330 + D_E16C50_801BFBBC[temp_s0];
        temp_fv0 = arg0->obj.rot.x;
        if (temp_fv0 < 0.0f) {
            arg0->obj.rot.x = temp_fv0 + 359.0f;
        }
        if (arg0->obj.rot.x >= 360.0f) {
            arg0->obj.rot.x -= 360.0f;
        }
        arg0->obj.rot.y = D_E16C50_801BFBC8[temp_s0];
        arg0->obj.rot.z = D_E16C50_801BFBD4[temp_s0];
    }
    if (arg0->unk_0D0 != 0) {
        arg0->unk_0D0 = 0;
        if (gObjects408->unk_04E >= 0xA) {
            temp_v0_2 = arg0->unk_0CE;
            if (temp_v0_2 != 0) {
                temp_v1 = arg0->unk_0D6;
                if (temp_v1 == 0x1F) {
                    arg0->timer_0BE = 0x46;
                    arg0->unk_0CE = temp_v0_2 - temp_v1;
                    Audio_PlaySfx(0x2903604CU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    if (arg0->timer_0C6 == 0) {
                        arg0->timer_0C6 = 0x46;
                    }
                    if (arg0->unk_0CE <= 0) {
                        arg0->timer_0BE = 0;
                        arg0->unk_0CE = 0;
                        func_80077240(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 200.0f, 3);
                        gHitCount += 4;
                        D_80177850 = 0xF;
                        arg0->info.bonus = 0;
                        arg0->unk_0B8 = 4;
                    }
                }
            }
        }
    }
    if (D_E16C50_801C42FC == 0) {
        Object_Kill(&arg0->obj, &arg0->sfxPos);
    }
    if (arg0->timer_0C6 & 1) {
        func_8007C120(arg0->obj.pos.x, arg0->obj.pos.y + 100.0f, (Rand_ZeroOne() * 500.0f) + arg0->obj.pos.z, arg0->vel.x, arg0->vel.y, arg0->vel.z, arg0->scale * 0.2f, 0xA);
    }
    temp_t3 = (u16) arg0->unk_0B8;
    switch (temp_t3) {
    case 0:
        if (gObjects408->unk_04E >= 0xA) {
            arg0->timer_0BC = (u16) (u32) ((Rand_ZeroOne() * 20.0f) + D_E16C50_801BFBB0[arg0->unk_050]);
            arg0->unk_0CE = 0x5A;
            arg0->unk_0B8 += 1;
        }
        break;
    case 1:
        if ((arg0->timer_0BC == 0) && (fabsf(D_E16C50_801C4330) < 5.0f) && (arg0->timer_0C6 == 0)) {
            temp_s0_2 = arg0->unk_05C - 1;
            if (temp_s0_2 >= 0) {
                temp_v0_3 = &gObjects2F4[temp_s0_2];
                if ((temp_v0_3->obj.status != (u8) 2) || (temp_v0_3->obj.id != 0xFF) || (temp_v0_3->unk_050 != arg0->unk_050)) {
                    arg0->unk_05C = 0;
                    arg0->unk_0B8 = 2;
                }
            } else {
                arg0->unk_05C = 0;
                arg0->unk_0B8 = 2;
            }
        }
        break;
    case 2:
        Math_SmoothStepToF(&arg0->unk_114, 1.0f, 0.2f, 0.5f, 0.01f);
        temp_fa1 = arg0->unk_114;
        arg0->unk_118 = temp_fa1;
        arg0->unk_11C = temp_fa1;
        if (temp_fa1 == 1.0f) {
            arg0->unk_0B8 = 3;
        }
        break;
    case 3:
        temp_t1 = arg0->unk_058;
        temp_v0_4 = &D_E16C50_801BFBE0[temp_t1];
        sp3C = temp_t1 * 0x10;
        Math_SmoothStepToF(&arg0->unk_114, temp_v0_4->unk0, temp_v0_4->unk4, temp_v0_4->unk8, 0.00001f);
        temp_v0_5 = &D_E16C50_801BFC10[temp_t1];
        Math_SmoothStepToF(&arg0->unk_118, temp_v0_5->unk0, temp_v0_5->unk4, temp_v0_5->unk8, 0.00001f);
        temp_v0_6 = &D_E16C50_801BFC40[temp_t1];
        Math_SmoothStepToF(&arg0->unk_11C, temp_v0_6->unk0, temp_v0_6->unk4, temp_v0_6->unk8, 0.00001f);
        var_s0 = arg0->unk_05C - 1;
        arg0->unk_054 += 1;
        if ((var_s0 >= 0) && ((temp_v0_7 = &gObjects2F4[var_s0], (temp_v0_7->obj.status != 2)) || (temp_v0_7->obj.id != 0xFF) || (temp_v0_7->unk_050 != arg0->unk_050))) {
            arg0->unk_05C = 0;
            var_s0 = -1;
        }
        if ((arg0->unk_054 == 0xD) && (var_s0 < 0)) {
            Audio_PlaySfx(0x29022048U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            var_a3 = gObjects2F4;
            var_s0_2 = 0;
loop_41:
            if (var_a3->obj.status == 0) {
                sp48 = var_a3;
                Object_2F4_Initialize(var_a3);
                var_a3->obj.status = 1;
                var_a3->obj.id = 0xFF;
                var_a3->obj.pos.x = arg0->obj.pos.x;
                var_a3->obj.pos.y = arg0->obj.pos.y;
                var_a3->obj.pos.z = arg0->obj.pos.z;
                temp_fv0_2 = Math_ModF(D_E16C50_801BFC7C[arg0->unk_050] + (arg0->obj.rot.x + 270.0f), 360.0f);
                var_a3->unk_0F4.x = temp_fv0_2;
                var_a3->obj.rot.x = temp_fv0_2;
                temp_fv0_3 = Math_ModF(D_E16C50_801BFC88[arg0->unk_050] + arg0->obj.rot.y, 360.0f);
                var_a3->unk_0F4.y = temp_fv0_3;
                var_a3->obj.rot.y = temp_fv0_3;
                var_a3->unk_0F4.z = arg0->obj.rot.z;
                var_a3->timer_0BC = 0xA;
                var_a3->obj.rot.z = arg0->obj.rot.z;
                Object_SetInfo(&var_a3->info, (u32) var_a3->obj.id);
                arg0->unk_05C = var_s0_2 + 1;
                var_a3->unk_050 = arg0->unk_050;
                var_a3->unk_058 = arg0->index + 1;
                Matrix_RotateY(gCalcMatrix, var_a3->obj.rot.y * 0.017453292f, 0U);
                Matrix_RotateX(gCalcMatrix, var_a3->obj.rot.x * 0.017453292f, 1U);
                Matrix_RotateZ(gCalcMatrix, var_a3->obj.rot.z * 0.017453292f, 1U);
                sp5C = 0.0f;
                sp58 = 0.0f;
                sp60 = 60.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp58, &sp4C);
                var_a3 = sp48;
                var_a3->vel.x = (bitwise f32) sp4C;
                var_a3->vel.y = sp4C.y;
                var_a3->vel.z = sp4C.z;
            } else {
                var_s0_2 += 1;
                var_a3 += 0x2F4;
                if (var_s0_2 != 0x3C) {
                    goto loop_41;
                }
            }
            if (var_s0_2 >= 0x3C) {
                arg0->unk_05C = 0;
                var_a3->obj.status = 0;
            }
        }
        temp_v0_8 = arg0->unk_058;
        temp_t1_2 = temp_v0_8 + 1;
        if (arg0->unk_054 == D_E16C50_801BFC70[temp_v0_8]) {
            arg0->unk_058 = temp_t1_2;
            if (temp_t1_2 >= 3) {
                arg0->unk_058 = 0;
                arg0->unk_054 = 0;
                arg0->unk_0B8 = 1;
                arg0->unk_11C = 1.0f;
                arg0->unk_118 = 1.0f;
                arg0->unk_114 = 1.0f;
                arg0->timer_0BC = (u16) (u32) ((D_E16C50_801BFBB0[arg0->unk_050] + 70.0f) - ((Rand_ZeroOne() - 0.5f) * 30.0f));
            }
        }
        break;
    case 4:
        arg0->unk_0B8 = 5;
        arg0->vel.y = 10.0f;
        arg0->vel.z = 5.0f;
        Audio_PlaySfx(0x1902102FU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        break;
    case 5:
        if ((D_80177940 + 70.0f) < arg0->obj.pos.y) {
            Math_SmoothStepToF(&arg0->unk_114, 1.0f, 0.1f, 0.2f, 0.0001f);
            Math_SmoothStepToF(&arg0->unk_118, 1.0f, 0.1f, 0.2f, 0.0001f);
            Math_SmoothStepToF(&arg0->unk_11C, 1.0f, 0.1f, 0.2f, 0.0001f);
            Math_SmoothStepToF(&arg0->vel.y, -10.0f, 0.1f, 1.0f, 0.001f);
            Math_SmoothStepToAngle(&arg0->obj.rot.x, 80.0f, 0.1f, 1.0f, 0.001f);
            if (!(gFrameCount & 1)) {
                sp40 = Rand_ZeroOne();
                func_E16C50_801AC8A8(((sp40 - 0.5f) * 300.0f) + arg0->obj.pos.x, ((Rand_ZeroOne() - 0.5f) * 200.0f) + arg0->obj.pos.y, arg0->obj.pos.z, 4.0f, 2);
            }
            if (arg0->timer_0C6 == 0) {
                arg0->timer_0C6 = 0x46;
            }
            arg0->unk_124.z = 10.0f;
            arg0->timer_0C0 = 0x14;
        } else {
            Math_SmoothStepToF(&arg0->unk_124.z, 30.0f, 0.1f, 12.0f, 0.1f);
            var_s0_3 = 0;
            temp_fv1 = Rand_ZeroOne() * 30.0f;
            if (!(gFrameCount & 3)) {
                sp70 = temp_fv1;
                do {
                    temp_fa0 = ((f32) var_s0_3 * 10.0f * 0.017453292f) + sp70;
                    sp3C = temp_fa0;
                    sp6C = arg0->unk_124.z * __sinf(temp_fa0) * 10.0f;
                    func_8007B8F8(arg0->obj.pos.x + sp6C, D_80177940 + 30.0f, arg0->obj.pos.z + (arg0->unk_124.z * __cosf(temp_fa0) * 10.0f), 20.0f);
                    var_s0_3 += 2;
                } while (var_s0_3 != 0x24);
            }
            if (arg0->vel.z != 0.0f) {
                arg0->vel.z = 0.0f;
                arg0->vel.y = 0.0f;
                Audio_PlaySfx(0x19402031U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_0C0 == 1) {
                Audio_PlaySfx(0x19003030U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_0C0 == 0) {
                if (arg0->timer_0BE == 0) {
                    arg0->timer_0BE = 0xA;
                }
                Math_SmoothStepToF(&arg0->unk_114, 0.0f, 0.05f, 0.1f, 0.001f);
                Math_SmoothStepToF(&arg0->unk_118, 0.0f, 0.05f, 0.1f, 0.001f);
                Math_SmoothStepToF(&arg0->unk_11C, 0.0f, 0.05f, 0.1f, 0.001f);
                Math_SmoothStepToF(&arg0->obj.pos.y, -300.0f, 0.1f, 1.0f, 0.001f);
                var_s0_4 = 0;
                if (arg0->unk_114 <= 0.2f) {
                    sp38 = &arg0->sfxPos;
                    do {
                        func_8007BC7C(arg0->obj.pos.x, D_80177940 + 50.0f, arg0->obj.pos.z, 20.0f);
                        func_E16C50_801AC8A8(((Rand_ZeroOne() - 0.5f) * 300.0f) + arg0->obj.pos.x, ((f32) var_s0_4 * 20.0f) + D_80177940, arg0->obj.pos.z, 5.0f, 2);
                        var_s0_4 += 1;
                    } while (var_s0_4 != 5);
                    temp_v0_9 = gObjects408->unk_04E;
                    if (temp_v0_9 < 0xD) {
                        gObjects408->unk_04E = temp_v0_9 + 1;
                        if (gObjects408->unk_04E == 0xD) {
                            gObjects408->unk_0AE = 0x1E;
                        }
                    }
                    Object_Kill(&arg0->obj, sp38);
                }
            }
        }
        break;
    }
    temp_v0_10 = arg0->timer_0BE;
    if (temp_v0_10 != 0) {
        var_ft0 = (f32) temp_v0_10;
        if ((s32) temp_v0_10 < 0) {
            var_ft0 += 4294967296.0f;
        }
        sp44 = __sinf(var_ft0 * 20.0f * 0.017453292f);
        temp_t6 = arg0->timer_0BE;
        var_ft0_2 = (f32) temp_t6;
        arg0->unk_120 = func_E16C50_801A958C(arg0->timer_0BE, 20.0f) * sp44;
        if ((s32) temp_t6 < 0) {
            var_ft0_2 += 4294967296.0f;
        }
        sp44 = __sinf(var_ft0_2 * 20.0f * 0.017453292f);
        temp_t7 = arg0->timer_0BE;
        var_ft0_3 = (f32) temp_t7;
        arg0->unk_124.x = func_E16C50_801A958C(arg0->timer_0BE, 20.0f) * sp44;
        if ((s32) temp_t7 < 0) {
            var_ft0_3 += 4294967296.0f;
        }
        sp44 = __sinf(var_ft0_3 * 20.0f * 0.017453292f);
        arg0->unk_124.y = func_E16C50_801A958C(arg0->timer_0BE, 20.0f) * sp44;
    }
}

void func_E16C50_801B099C(Object_2F4 *arg0) {
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    s32 temp_v0_2;

    Matrix_RotateY(gGfxMatrix, (arg0->unk_120 + arg0->obj.rot.x) * 0.017453292f, 1U);
    Matrix_RotateX(gGfxMatrix, (arg0->unk_124.x + arg0->obj.rot.y) * 0.017453292f, 1U);
    Matrix_RotateZ(gGfxMatrix, (arg0->unk_124.y + arg0->obj.rot.z) * 0.017453292f, 1U);
    Matrix_Scale(gGfxMatrix, arg0->unk_114, arg0->unk_118, arg0->unk_11C, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    if (!(arg0->timer_0C6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x39);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x3D);
        temp_v0 = gMasterDisp;
        gMasterDisp = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = 0xFF0000FF;
    }
    temp_v0_2 = arg0->unk_050;
    switch (temp_v0_2) {                            /* irregular */
    case 0:
        temp_v0_3 = gMasterDisp;
        gMasterDisp = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_6019E80;
        temp_v0_3->words.w0 = 0x06000000;
        return;
    case 1:
        temp_v0_4 = gMasterDisp;
        gMasterDisp = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_60194D0;
        temp_v0_4->words.w0 = 0x06000000;
        return;
    case 2:
        temp_v0_5 = gMasterDisp;
        gMasterDisp = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) &D_6019880;
        temp_v0_5->words.w0 = 0x06000000;
        return;
    }
}

void func_E16C50_801B0B60(Object_2F4 *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    Vec3f sp38;
    f32 sp2C;
    f32 sp28;
    s16 temp_v0;
    s32 temp_t9;

    if ((arg0->unk_0D0 != 0) || (gObjects408->unk_04E >= 0x10)) {
        arg0->unk_0B8 = 3;
    }
    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        if (arg0->timer_0BC == 0) {
            Matrix_RotateY(gCalcMatrix, arg0->unk_11C * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, arg0->unk_118 * 0.017453292f, 1U);
            sp48 = 0.0f;
            sp44 = 0.0f;
            sp4C = 50.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp44, &sp38);
            arg0->vel.x = (bitwise f32) sp38;
            arg0->vel.y = sp38.y;
            arg0->timer_0BE = 5;
            arg0->unk_054 = 0xFF;
            arg0->unk_058 = 0xFF;
            arg0->unk_05C = 0xFF;
            arg0->unk_0B8 += 1;
            arg0->vel.z = sp38.z;
        }
        break;
    case 1:
        if (arg0->timer_0BE == 0) {
            Matrix_RotateY(gCalcMatrix, arg0->unk_124.x * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, arg0->unk_120 * 0.017453292f, 1U);
            sp48 = 0.0f;
            sp44 = 0.0f;
            sp4C = 30.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp44, &sp38);
            arg0->vel.x = (bitwise f32) sp38;
            arg0->vel.y = sp38.y;
            arg0->timer_0C0 = 0xA;
            arg0->unk_0B8 += 1;
            arg0->vel.z = sp38.z;
        }
        break;
    case 2:
        if (arg0->timer_0C0 == 0) {
            temp_t9 = arg0->unk_054 - 0x14;
            arg0->unk_054 = temp_t9;
            arg0->unk_058 -= 0x14;
            arg0->unk_05C -= 0x14;
            if (temp_t9 < 5) {
                arg0->unk_05C = 5;
                arg0->unk_058 = 5;
                arg0->unk_054 = 5;
            }
        }
        break;
    case 3:
        if ((f64) Rand_ZeroOne() < 0.1) {
            arg0->unk_044 = 0x16;
            arg0->unk_0D4 = 2;
            func_80066254(arg0);
        }
        Object_Kill(&arg0->obj, &arg0->sfxPos);
        func_800815DC();
        func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 50.0f, 5.0f);
        func_8007A6F0(&arg0->obj.pos, 0x29018049);
        break;
    }
    if (!(gFrameCount & 0xF)) {
        sp28 = Rand_ZeroOne();
        sp2C = Rand_ZeroOne();
        func_E16C50_801AC8A8(((sp28 - 0.5f) * 10.0f) + arg0->obj.pos.x, ((sp2C - 0.5f) * 10.0f) + arg0->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->obj.pos.z, 2.0f, 1);
    }
    func_E16C50_801A96DC(arg0);
}

void func_E16C50_801B0EC0(Object_2F4 *arg0) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    if (arg0->timer_0BC == 0) {
        Graphics_SetScaleMtx(0.8f);
        RCP_SetupDL(&gMasterDisp, 0x3D);
        temp_v1 = gMasterDisp;
        gMasterDisp = temp_v1 + 8;
        temp_v1->words.w0 = 0xFA000000;
        temp_v1->words.w1 = ((arg0->unk_05C & 0xFF) << 8) | (arg0->unk_054 << 0x18) | ((arg0->unk_058 & 0xFF) << 0x10) | 0xFF;
        Matrix_SetGfxMtx(&gMasterDisp);
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0x06000000;
        temp_v1_2->words.w1 = (u32) &D_6024A50;
    }
}

void func_E16C50_801B0F88(Object_408_318 *arg0) {
    if ((D_E16C50_801C42FC != 0) && (arg0->unk_088 < 2)) {
        arg0->unk_0AE = 0x1E;
        D_E16C50_801C4444 = 0.0f;
        arg0->unk_088 = 3;
    }
}

void func_E16C50_801B0FCC(Object_408_318 *arg0) {
    D_E16C50_801C4308.unk110 = 0.1f;
    D_E16C50_801C4308.unkF4 = (f32) D_E16C50_801C4308.unk110;
    D_E16C50_801C4308.unkD8 = (f32) D_E16C50_801C4308.unk110;
    arg0->unk_0AE = 0x1F4;
    D_E16C50_801C4308.unk13C = -28.0f;
}

void func_E16C50_801B1008(Object_408_318 *arg0, s16 arg1) {
    s16 var_v0;

    if ((arg0->unk_0AE == 0) && (fabsf(D_E16C50_801C4330) <= 1.0f) && (arg0->unk_088 == 0)) {
        D_E16C50_801C4444 = -28.0f;
        var_v0 = arg0->unkB4;
        arg0->unk_0AE = arg1;
        arg0->unk_088 = 0;
        if (var_v0 == 0) {
            func_800BA808(gMsg_ID_15110, 0x1E);
            var_v0 = arg0->unkB4;
        }
        arg0->unkB4 = var_v0 + 1;
        arg0->unkB4 &= 3;
    }
    if ((fabsf(D_E16C50_801C4330) >= 15.0f) && (arg0->timer_056 == 0)) {
        arg0->unk8E = 1;
        arg0->timer_056 = 0x3C;
        arg0->unk8C = arg0->unk8E;
    }
}

void func_E16C50_801B10F8(Object_408 *arg0) {
    Object_2F4 *var_s0;
    s16 temp_a2;
    s32 *var_v0;
    s32 var_s2;
    struct _struct_D_E16C50_801C0098_0xC *temp_s1;

    D_80178284 = 1;
    D_801613A0 = 0;
    arg0->unk_060 = 0x96;
    var_s0 = gObjects2F4;
    var_s2 = 0;
    do {
        if (var_s0->obj.status == 0) {
            temp_s1 = &D_E16C50_801C0098[var_s2];
            Object_2F4_Initialize(var_s0);
            var_s0->obj.status = 1;
            var_s0->obj.id = 0x100;
            var_s0->obj.pos.x = temp_s1->unk0 + arg0->obj.pos.x;
            var_s0->obj.pos.y = temp_s1->unk4 + arg0->obj.pos.y;
            var_s0->unk_050 = var_s2;
            var_s2 += 1;
            var_s0->obj.pos.z = temp_s1->unk8 + arg0->obj.pos.z;
            Object_SetInfo(&var_s0->info, 0x100U & 0xFFFF);
        }
        var_s0 += 0x2F4;
    } while (var_s2 < 2);
    D_E16C50_801C42A0.unk5C = 2;
    D_E16C50_801C42A0.unk0 = 0xFF;
    D_E16C50_801C42A0.unk2C = 9;
    D_E16C50_801C42A0.unk28 = 0xA;
    D_E16C50_801C42A0.unk34 = 6;
    D_E16C50_801C42A0.unk38 = 0xB;
    D_E16C50_801C42A0.unk24 = (s32) D_E16C50_801C0058;
    arg0->unk_0DC = 10.0f;
    D_E16C50_801C4308.unk2C = 0.0f;
    D_E16C50_801C4308.unk120 = 1.0f;
    D_E16C50_801C4308.unk140 = (f32) D_E16C50_801C4308.unk2C;
    D_E16C50_801C4308.unk28 = (f32) D_E16C50_801C4308.unk2C;
    D_E16C50_801C4308.unk13C = (f32) D_E16C50_801C4308.unk2C;
    D_E16C50_801C4308.unk104 = (f32) D_E16C50_801C4308.unk120;
    D_E16C50_801C4308.unkE8 = (f32) D_E16C50_801C4308.unk120;
    arg0->unkA8 = (s16) 0xFF;
    temp_a2 = arg0->unkA8;
    arg0->unkAA = (s16) 0xA;
    arg0->unk_0F8 = 1.0f;
    arg0->unk_0FC = 1.0f;
    arg0->unk_100.x = 1.0f;
    arg0->unk_0A6 = temp_a2;
    arg0->unkA4 = temp_a2;
    D_E16C50_801C42A0.unk4 = 0;
    D_E16C50_801C42A0.unk8 = 0;
    D_E16C50_801C42A0.unk10 = 0;
    D_E16C50_801C42A0.unk14 = 0;
    D_E16C50_801C42A0.unk18 = 0;
    D_E16C50_801C42A0.unk1C = 0;
    var_v0 = &D_E16C50_801C4230;
    do {
        var_v0 += 0x10;
        var_v0->unk-C = 0;
        var_v0->unk-8 = 0;
        var_v0->unk-4 = 0;
        var_v0->unk-10 = 0;
    } while (var_v0 != &D_E16C50_801C42A0);
    arg0->obj.pos.y += 400.0f;
    arg0->info.hitbox->unk1DC = 1028.0f;
    arg0->info.hitbox->unk2A4 = 800.0f;
    arg0->unk9A = (s16) 2;
    arg0->unk98 = arg0->unk9A;
    Audio_PlaySfx(0x3140904DU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_801B134C(Object_408_318 *boss318) {
    f32 sp110;
    f32 spF4;
    f32 spF0;
    f32 spE8;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    s32 spA4;
    f32 *sp8C;
    s32 *sp88;                                      /* compiler-managed */
    s32 *sp84;
    ObjectInfo *temp_s3_2;
    Object_2F4 *var_s0;
    Object_2F4 *var_s0_2;
    Object_2F4 *var_s0_4;
    Object_408_318 *var_fp;
    Object_408_318 *var_s4;
    Vec3f *temp_s4;
    Vec3f *temp_s4_2;
    enum PlayerState1C8 temp_v1;
    f32 *temp_fp;
    f32 *temp_s1_2;
    f32 *temp_s1_3;
    f32 *temp_s1_4;
    f32 *temp_s2_3;
    f32 *temp_s3;
    f32 *temp_s4_4;
    f32 *temp_s5_2;
    f32 *temp_s6;
    f32 *temp_t6_2;
    f32 *var_s1;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs0_10;
    f32 temp_fs0_11;
    f32 temp_fs0_12;
    f32 temp_fs0_13;
    f32 temp_fs0_14;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs0_6;
    f32 temp_fs0_7;
    f32 temp_fs0_8;
    f32 temp_fs0_9;
    f32 temp_fs1;
    f32 temp_fs1_10;
    f32 temp_fs1_11;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fs1_5;
    f32 temp_fs1_6;
    f32 temp_fs1_7;
    f32 temp_fs1_8;
    f32 temp_fs1_9;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_fs2_3;
    f32 temp_fs3;
    f32 temp_ft3;
    f32 temp_ft4;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fs0;
    f32 var_fs0_2;
    f32 var_fs1;
    f32 var_fs3;
    f32 var_fs3_2;
    f32 var_fs3_3;
    f32 var_fv0;
    s16 temp_s2_2;
    s16 temp_t5;
    s16 temp_t7;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_14;
    s16 temp_v0_15;
    s16 temp_v0_3;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_9;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v0_6;
    s16 var_v0_7;
    s16 var_v0_9;
    s32 *var_s0_3;
    s32 *var_s0_5;
    s32 *var_v0_4;
    s32 *var_v0_5;
    s32 *var_v0_8;
    s32 temp_s7;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t4;
    s32 temp_t5_2;
    s32 temp_t6_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_8;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_s3_6;
    s32 var_s3_7;
    s32 var_s3_8;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_s7_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    struct _struct_D_E16C50_801BFC94_0xC *temp_s2;
    struct _struct_D_E16C50_801BFE18_0xC *temp_s4_3;
    struct _struct_D_E16C50_801BFF38_0xC *temp_s5;
    struct _struct_D_E16C50_801C0150_0x10 *temp_v0_2;
    u16 temp_t6;
    u16 temp_t9;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s4_5;

    D_801613A0 += 1;
    temp_t9 = (u16) boss318->unk_04E;
    switch (temp_t9) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        if (boss318->unkB2 == 0) {
            var_s0 = gObjects2F4;
            var_s2 = 0;
            do {
                if (var_s0->obj.status == 0) {
                    Object_2F4_Initialize(var_s0);
                    var_s0->obj.status = 1;
                    var_s0->obj.id = 0x101;
                    var_s0->unk_050 = var_s2;
                    Object_SetInfo(&var_s0->info, 0x101U & 0xFFFF);
                    var_s2 += 1;
                }
                var_s0 += 0x2F4;
            } while (var_s2 < 3);
            boss318->unkB2 = 1;
            func_800182F4(0x102800FF);
            func_800182F4(0x112800FF);
            func_800BA808(gMsg_ID_15100, 0);
        }
        if (fabsf(boss318->obj.pos.z - gPlayer->unk_138) <= 3000.0f) {
            D_E16C50_801C4190.unk18 = 1;
            boss318->timer_056 = 0x14;
            func_8001D444(0U, 0x801EU, 0U, 1U);
            boss318->unk_04E = 1;
        }
        break;
    case 1:                                         /* switch 1 */
        if (boss318->timer_056 == 0) {
            D_E16C50_801C4340 = 80.0f;
            D_E16C50_801C433C = 0.0f;
            D_E16C50_801C433C = 0.0f;
            boss318->timer_056 = 0x14;
            boss318->unk_04E = 2;
            Audio_PlaySfx(0x1900002EU, &boss318->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        break;
    case 2:                                         /* switch 1 */
        func_E16C50_801B0FCC(boss318);
        var_v0 = boss318->timer_056;
        if (!(var_v0 & 1)) {
            var_s3 = 0;
            do {
                temp_fs1 = Rand_ZeroOne();
                temp_fs0 = Rand_ZeroOne();
                func_E16C50_801AC8A8(((temp_fs1 - 0.5f) * 1800.0f) + gObjects408->obj.pos.x, ((temp_fs0 - 0.5f) * 500.0f) + gObjects408->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 1000.0f) + (gObjects408->obj.pos.z + 700.0f), 7.0f, 2);
                var_s3 += 1;
            } while (var_s3 != 0x1E);
            var_v0 = boss318->timer_056;
        }
        if (var_v0 == 0) {
            boss318->timer_056 = 0x28;
            boss318->unk_04E = 3;
        }
        break;
    case 3:                                         /* switch 1 */
        func_E16C50_801B0FCC(boss318);
        Math_SmoothStepToF(&D_E16C50_801C4338, -45.0f, 0.5f, 1.0f, 0.01f);
        Math_SmoothStepToF(&D_E16C50_801C433C, 30.0f, 0.5f, 1.0f, 0.01f);
        Math_SmoothStepToAngle(&D_E16C50_801C4340, 0.0f, 1.0f, 2.0f, 0.0f);
        Math_SmoothStepToAngle(&D_E16C50_801C4344, D_E16C50_801C0190[boss318->unkB0], 1.0f, 10.0f, 0.0f);
        if (boss318->timer_056 == 0) {
            boss318->timer_056 = 0xA;
            temp_t5 = boss318->unkB0 + 1;
            boss318->unkB0 = temp_t5;
            if (temp_t5 >= 5) {
                boss318->unk_04E = 4;
            }
        }
        break;
    case 4:                                         /* switch 1 */
        func_E16C50_801B0FCC(boss318);
        Math_SmoothStepToF(&D_E16C50_801C43F0, 0.25f, 0.3f, 1.0f, 0.0f);
        if (boss318->timer_056 == 0) {
            boss318->timer_056 = 0x14;
            boss318->unk_04E = 5;
        }
        break;
    case 5:                                         /* switch 1 */
        func_E16C50_801B0FCC(boss318);
        Math_SmoothStepToF(&D_E16C50_801C43F0, 0.25f, 0.3f, 1.0f, 0.0f);
        if (boss318->timer_056 == 0) {
            boss318->timer_056 = 0x1E;
            boss318->unk_04E = 6;
        }
        break;
    case 6:                                         /* switch 1 */
        func_E16C50_801B0FCC(boss318);
        if (boss318->timer_056 == 0) {
            boss318->unk_04E = 7;
        }
        break;
    case 7:                                         /* switch 1 */
        boss318->unk_0AE = 0x1F4;
        D_E16C50_801C4444 = -28.0f;
        Math_SmoothStepToF(&D_E16C50_801C43E0, 1.0f, 0.001f, 0.01f, 0.0f);
        Math_SmoothStepToF(&D_E16C50_801C43FC, 1.0f, 0.001f, 0.01f, 0.0f);
        if (D_E16C50_801C43E0 >= 0.9f) {
            boss318->timer_056 = 0x14;
            D_E16C50_801C4444 = 0.0f;
            boss318->unk_088 = 3;
            boss318->unk_04E = 8;
        }
        break;
    case 8:                                         /* switch 1 */
        if (boss318->timer_056 == 0) {
            boss318->timer_056 = 0x14;
            boss318->unkA0 = 0xA;
            D_E16C50_801C42AC = 0;
            func_800BA808(gMsg_ID_2225, 0x14);
            boss318->unkBC = D_801613A0 + 0x9C;
            boss318->unk_04E = 9;
        }
        break;
    case 9:                                         /* switch 1 */
        if (boss318->timer_056 == 0) {
            boss318->unk_04E = 0xA;
        }
        break;
    case 10:                                        /* switch 1 */
    case 11:                                        /* switch 1 */
    case 12:                                        /* switch 1 */
        func_E16C50_801B1008(boss318, 0x1F4);
        break;
    case 13:                                        /* switch 1 */
        func_E16C50_801B1008(boss318, 0x3C);
        break;
    case 14:                                        /* switch 1 */
        var_v0_2 = boss318->timer_056;
        if (var_v0_2 == 0x3A) {
            Audio_PlaySfx(0x29408055U, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            var_v0_2 = boss318->timer_056;
        }
        if ((var_v0_2 == 0) && (D_E16C50_801C4338 <= -44.0f)) {
            boss318->unk8C = 0x14;
            boss318->unk8E = 0x14;
            boss318->unk_04E = 0xF;
            var_v0_2 = boss318->timer_056;
        }
        if (var_v0_2 == 0x28) {
            func_800BA808(gMsg_ID_15140, 0x1E);
        }
        break;
    case 15:                                        /* switch 1 */
        if (boss318->unk8C == 0) {
            boss318->unk8C = (s32) (Rand_ZeroOne() * 50.0f) + 0x64;
        }
        if (boss318->unk8E == 0) {
            boss318->unk8E = (s32) (Rand_ZeroOne() * 50.0f) + 0x64;
        }
        break;
    case 16:                                        /* switch 1 */
        *D_801779A8 = 20.0f;
        var_v0_3 = D_80178480;
        if (var_v0_3 == 0) {
            D_80178358 = 0xFF;
            D_80178354 = 0xFF;
            D_80178350 = 0xFF;
            D_80178348 = 0xFF;
            D_80178340 = 0xFF;
            D_80178358 = 0;
            D_8017835C = 0x19;
            var_v0_3 = (s32) ((Rand_ZeroOne() * 20.0f) + 20.0f);
            D_80178480 = var_v0_3;
        }
        if (var_v0_3 == 0x1D) {
            D_80178340 = 0;
            D_80178354 = 0;
            D_80178350 = 0;
            D_80178348 = 0;
        }
        Math_SmoothStepToF(&D_E16C50_801C421C, D_8015F970, 1.0f, 100.0f, 0.0f);
        Math_SmoothStepToF(&D_E16C50_801C4220, 128.0f, 1.0f, 100.0f, 0.0f);
        var_v0_4 = &D_E16C50_801C4230;
        do {
            if (*var_v0_4 == 0) {
                *var_v0_4 = 0x64;
            }
            var_v0_4 += 4;
        } while ((u32) var_v0_4 < (u32) &D_E16C50_801C42A0);
        if (D_E16C50_801C42BC == 0) {
            D_E16C50_801C42B8 = 0x32;
            D_E16C50_801C42B8 = 0x32;
            D_E16C50_801C42B4 = 0x32;
            D_E16C50_801C42B4 = 0x32;
            D_E16C50_801C42A8 = 0x32;
            D_E16C50_801C42A4 = 0x32;
        }
        if (!(gFrameCount & 1)) {
            temp_fs1_2 = Rand_ZeroOne();
            temp_fs0_2 = Rand_ZeroOne();
            func_8007C120(((temp_fs1_2 - 0.5f) * 1200.0f) + boss318->obj.pos.x, ((temp_fs0_2 - 0.5f) * 400.0f) + (boss318->obj.pos.y + 400.0f), ((Rand_ZeroOne() - 0.5f) * 800.0f) + (boss318->obj.pos.z + 1000.0f), boss318->unk_06C.x, boss318->unk_06C.y, boss318->unk_06C.z, 0.5f, 0xA);
            temp_fs1_3 = Rand_ZeroOne();
            temp_fs0_3 = Rand_ZeroOne();
            func_8007D0E0(((temp_fs1_3 - 0.5f) * 1200.0f) + boss318->obj.pos.x, ((temp_fs0_3 - 0.5f) * 400.0f) + (boss318->obj.pos.y + 200.0f), ((Rand_ZeroOne() - 0.5f) * 800.0f) + (boss318->obj.pos.z + 1000.0f), 10.0f);
        }
        var_s3_2 = 0;
        do {
            temp_fs2 = Rand_ZeroOne();
            temp_fs1_4 = Rand_ZeroOne();
            temp_fs0_4 = Rand_ZeroOne();
            func_80081A8C(((temp_fs2 - 0.5f) * 1200.0f) + boss318->obj.pos.x, ((temp_fs1_4 - 0.5f) * 200.0f) + (boss318->obj.pos.y + 200.0f), ((temp_fs0_4 - 0.5f) * 800.0f) + (boss318->obj.pos.z + 1000.0f), (Rand_ZeroOne() * 3.0f) + 3.0f, 5);
            var_s3_2 += 1;
        } while (var_s3_2 < 3);
        if (boss318->timer_056 == 0) {
            gObjects8C->unk3598 = 0;
            gObjects8C->unk3624 = 0;
            func_8007A568(boss318->obj.pos.x, boss318->obj.pos.y, boss318->obj.pos.z + 600.0f, 40.0f);
            var_v0_5 = &D_E16C50_801C4230;
            boss318->timer_056 = 0x32;
            do {
                var_v0_5 += 0x10;
                var_v0_5->unk-C = 0x64;
                var_v0_5->unk-8 = 0x64;
                var_v0_5->unk-4 = 0x64;
                var_v0_5->unk-10 = 0x64;
            } while (var_v0_5 != &D_E16C50_801C42A0);
            D_80178340 = 0;
            D_80178354 = 0;
            D_80178350 = 0;
            D_80178348 = 0;
            boss318->unk_04E = 0x11;
        }
        break;
    case 17:                                        /* switch 1 */
        if (boss318->timer_056 == 0x14) {
            gObjects8C->unk3480 = 0;
            gObjects8C->unk350C = 0;
            func_8007A568(boss318->obj.pos.x, boss318->obj.pos.y, boss318->obj.pos.z + 600.0f, 80.0f);
        }
        temp_t2 = D_E16C50_801C42A0 - 4;
        D_E16C50_801C42A0 = temp_t2;
        if (temp_t2 < 0) {
            D_E16C50_801C42A0 = 0;
        }
        var_s1 = &D_E16C50_801C43D8;
        do {
            Math_SmoothStepToF(var_s1, 0.1f, 0.1f, 1.0f, 0.0f);
            var_s1 += 4;
        } while ((u32) var_s1 < (u32) &D_E16C50_801C442C);
        Math_SmoothStepToF(&boss318->unk_0F8, 0.1f, 0.1f, 1.0f, 0.0f);
        Math_SmoothStepToF(&boss318->unk_0FC, 0.1f, 0.1f, 1.0f, 0.0f);
        Math_SmoothStepToF(&boss318->unk_100.x, 0.1f, 0.1f, 1.0f, 0.0f);
        if (!(gFrameCount & 1)) {
            temp_fs1_5 = Rand_ZeroOne();
            temp_fs0_5 = Rand_ZeroOne();
            func_8007C120(((temp_fs1_5 - 0.5f) * 1200.0f) + boss318->obj.pos.x, ((temp_fs0_5 - 0.5f) * 400.0f) + (boss318->obj.pos.y + 400.0f), ((Rand_ZeroOne() - 0.5f) * 800.0f) + (boss318->obj.pos.z + 1000.0f), boss318->unk_06C.x, boss318->unk_06C.y, boss318->unk_06C.z, 0.7f, 0xF);
        }
        var_v0_6 = boss318->timer_056;
        if (var_v0_6 == 1) {
            var_s3_3 = 0;
            do {
                if (var_s3_3 != 0x1B) {
                    (&D_E16C50_801C4230)[var_s3_3].unk0 = 0x3E8;
                }
                if (var_s3_3 != 0x1A) {
                    (&D_E16C50_801C4230)[var_s3_3].unk4 = 0x3E8;
                }
                if (var_s3_3 != 0x19) {
                    (&D_E16C50_801C4230)[var_s3_3].unk8 = 0x3E8;
                }
                if (var_s3_3 != 0x18) {
                    (&D_E16C50_801C4230)[var_s3_3].unkC = 0x3E8;
                }
                var_s3_3 += 4;
            } while (var_s3_3 != 0x1C);
            var_v0_6 = boss318->timer_056;
        }
        if (var_v0_6 == 0) {
            boss318->timer_056 = 0x12C;
            boss318->unk_04E = 0x12;
        }
        break;
    case 18:                                        /* switch 1 */
        if (boss318->timer_056 != 0) {
            var_s3_4 = 0;
            do {
                temp_fs1_6 = Rand_ZeroOne();
                temp_fs0_6 = Rand_ZeroOne();
                func_E16C50_801AC8A8(((temp_fs1_6 - 0.5f) * 1800.0f) + gObjects408->obj.pos.x, ((temp_fs0_6 - 0.5f) * 500.0f) + gObjects408->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 1000.0f) + (gObjects408->obj.pos.z + 700.0f), 7.0f, 2);
                var_s3_4 += 1;
            } while (var_s3_4 != 0x1E);
        }
        break;
    }
    temp_t6 = (u16) boss318->unk_088;
    switch (temp_t6) {                              /* switch 2 */
    case 2:                                         /* switch 2 */
        break;
    case 0:                                         /* switch 2 */
        if (D_E16C50_801C42FC == 0) {
            D_E16C50_801C4444 = -180.0f;
        } else {
            Math_SmoothStepToF(&D_E16C50_801C4444, 0.0f, 0.05f, 0.2f, 0.0f);
        }
        Math_SmoothStepToF(&D_E16C50_801C4330, D_E16C50_801C4444, 0.05f, 0.3f, 0.0f);
        break;
    case 1:                                         /* switch 2 */
        Math_SmoothStepToF(&D_E16C50_801C4330, -28.0f, 0.05f, 0.3f, 0.0f);
        if (boss318->timer_052 < 3) {
            func_E16C50_801B0F88(boss318);
        }
        break;
    case 3:                                         /* switch 2 */
        Math_SmoothStepToF(&D_E16C50_801C4330, D_E16C50_801C4444, 0.5f, 10.0f, 0.0f);
        if (fabsf(D_E16C50_801C4330) <= 5.0f) {
            boss318->unk_088 = 0;
            boss318->timer_052 = 0;
            boss318->unk_0AE = 0x1F4;
            temp_s4 = &boss318->sfxPos;
            D_E16C50_801C4444 = 0.0f;
            Audio_PlaySfx(0x29408054U, temp_s4, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (boss318->unk_04E < 0xE) {
                var_s0_2 = gObjects2F4;
                var_s3_5 = 0;
                do {
                    if ((var_s0_2->obj.id == 0x104) && (var_s0_2->obj.status == 2)) {
                        var_s0_2->unk_050 = 1;
                    }
                    var_s3_5 += 1;
                    var_s0_2 += 0x2F4;
                } while (var_s3_5 != 0x3C);
                boss318->timer_058 = 0x1E;
                boss318->unk_088 = 4;
                D_80178480 = 0x32;
                Audio_PlaySfx(0x1900002DU, temp_s4, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_80062B60(boss318->obj.pos.x, boss318->obj.pos.z + 800.0f, 0, 100.0f);
                var_fs3 = 80.0f;
                var_s5 = 0;
                do {
                    var_s3_6 = 0x1B;
loop_108:
                    temp_fs0_7 = (f32) var_s3_6 * (10.0f + (f32) var_s5) * 0.017453292f;
                    temp_fs1_7 = __sinf(temp_fs0_7) * var_fs3 * 10.0f;
                    func_8007B8F8(boss318->obj.pos.x + temp_fs1_7, D_80177940 + 30.0f, boss318->obj.pos.z + 1000.0f + (__cosf(temp_fs0_7) * var_fs3 * 10.0f), 20.0f);
                    var_s3_6 += 2;
                    if (var_s3_6 != 0x2D) {
                        goto loop_108;
                    }
                    var_s5 += 3;
                    var_fs3 += 10.0f;
                } while (var_s5 != 9);
            }
        }
        break;
    case 4:                                         /* switch 2 */
        boss318->unk_0AE = 0x32;
        Math_SmoothStepToF(&D_E16C50_801C4330, D_E16C50_801C4444, 0.5f, 5.0f, 0.0f);
        var_v0_7 = boss318->timer_058;
        if (var_v0_7 >= 0xB) {
            Math_SmoothStepToF(D_801779A8, 20.0f, 1.0f, 5.0f, 0.0f);
            var_v0_7 = boss318->timer_058;
        }
        if (var_v0_7 != 0) {
            gPlayer->unk_2B4 = 1;
            Math_SmoothStepToF(&D_E16C50_801C4218, 20.0f, 0.1f, 1.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer->unk_08C, 180.0f, 0.4f, 20.0f, 0.0f);
        } else {
            Math_SmoothStepToF(&D_E16C50_801C4218, 0.0f, 0.01f, 0.1f, 0.0f);
            Math_SmoothStepToF(&gPlayer->unk_08C, 0.0f, 0.1f, 2.0f, 0.0f);
            if (gPlayer->unk_08C < 0.1f) {
                gPlayer->unk_2B4 = 0;
                D_E16C50_801C41B8.unk60 = 0.0f;
                gPlayer->unk_08C = D_E16C50_801C41B8.unk60;
                boss318->unk_088 = 0;
            }
        }
        break;
    }
    Math_SmoothStepToF(&D_E16C50_801C4448, 0.0f, 1.0f, 2.0f, 0.0f);
    Math_SmoothStepToF(&D_E16C50_801C4334, D_E16C50_801C4448, 0.1f, 2.0f, 0.0f);
    if (boss318->unk_062 != 0) {
        boss318->unk_062 = 0;
        if (fabsf(D_E16C50_801C4330) >= 5.0f) {
            temp_t7 = boss318->unk_066;
            switch (temp_t7) {                      /* switch 3 */
            case 13:                                /* switch 3 */
                if ((boss318->unkA0 != 0) && (boss318->unk_04E >= 0xF)) {
                    if (D_E16C50_801C42FC == 0) {
                        D_E16C50_801C42AC = 0x32;
                        D_E16C50_801C4254 = 0x32;
                        D_E16C50_801C42F8 = 0;
                        boss318->unkA0 -= 1;
                        boss318->unkA2 = 0x46;
                        Audio_PlaySfx(0x2940604CU, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                } else if (boss318->unk_04E >= 0xA) {
                    Audio_PlaySfx(0x29121007U, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                break;
            case 14:                                /* switch 3 */
                if (boss318->unk_064 == 0x1F) {
                    if (D_E16C50_801C42FC != 0) {
                        Audio_PlaySfx(0x29121007U, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else if ((boss318->unk_04E >= 0xF) && (boss318->unk98 != 0)) {
                        D_E16C50_801C42A4 = 0x32;
                        D_E16C50_801C424C = 0x32;
                        boss318->unk98 -= 1;
                        Audio_PlaySfx(0x2903604CU, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        if (boss318->unk98 == 0) {
                            spD4 = D_E16C50_801C442C;
                            spD8 = D_E16C50_801C4430;
                            spDC = D_E16C50_801C4430;
                            func_8007A6F0((Vec3f *) &spD4, 0x19000033);
                            boss318->unk9C = (s16) (s32) ((Rand_ZeroOne() * 50.0f) + 250.0f);
                        }
                    }
                }
                break;
            case 15:                                /* switch 3 */
                if (boss318->unk_064 == 0x1F) {
                    if (D_E16C50_801C42FC != 0) {
                        Audio_PlaySfx(0x29121007U, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else if ((boss318->unk_04E >= 0xF) && (boss318->unk9A != 0)) {
                        D_E16C50_801C42A8 = 0x32;
                        D_E16C50_801C4250 = 0x32;
                        boss318->unk9A -= 1;
                        Audio_PlaySfx(0x2903604CU, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        if (boss318->unk9A == 0) {
                            spD4 = D_E16C50_801C4438;
                            spD8 = D_E16C50_801C4438;
                            spDC = D_E16C50_801C4440;
                            func_8007A6F0((Vec3f *) &spD4, 0x19000033);
                            boss318->unk9E = (s16) (s32) ((Rand_ZeroOne() * 50.0f) + 250.0f);
                        }
                    }
                }
                break;
            case 16:                                /* switch 3 */
                if (boss318->unk_064 == 0x1F) {
                    if (D_E16C50_801C42FC != 0) {
                        Audio_PlaySfx(0x29121007U, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else if (boss318->unk_04E >= 0xF) {
                        D_E16C50_801C42B0 = 0x4B;
                    }
                }
                break;
            case 17:                                /* switch 3 */
                if (boss318->unk_064 == 0x1F) {
                    if (D_E16C50_801C42FC != 0) {
                        Audio_PlaySfx(0x29121007U, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else if (boss318->unk_04E >= 0xF) {
                        D_E16C50_801C42B4 = 0x4B;
                    }
                }
                break;
            case 18:                                /* switch 3 */
                if ((boss318->unk_064 == 0x1F) && (boss318->unk_08A != 2) && (boss318->unkA0 == 0) && (boss318->unk_04E == 0xF) && (boss318->unk_060 != 0)) {
                    temp_s4_2 = &boss318->sfxPos;
                    if (D_E16C50_801C42FC != 0) {
                        Audio_PlaySfx(0x29121007U, temp_s4_2, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else {
                        var_v0_8 = &D_E16C50_801C4230;
                        do {
                            var_v0_8 += 0x10;
                            var_v0_8->unk-4 = 0x32;
                            var_v0_8->unk-8 = 0x32;
                            var_v0_8->unk-C = 0x32;
                            var_v0_8->unk-10 = 0x32;
                        } while (var_v0_8 != &D_E16C50_801C42A0);
                        D_E16C50_801C42B8 = 0x32;
                        D_E16C50_801C42B8 = 0x32;
                        D_E16C50_801C42B4 = 0x32;
                        D_E16C50_801C42B4 = 0x32;
                        D_E16C50_801C42A8 = 0x32;
                        D_E16C50_801C42A4 = 0x32;
                        boss318->unkA2 = 0x28;
                        boss318->unk_08A = 2;
                        Audio_PlaySfx(0x2940804EU, temp_s4_2, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        var_v0_9 = boss318->unkBA;
                        boss318->unk_060 -= boss318->unk_064;
                        if ((var_v0_9 == 0) || (var_v0_9 == 2)) {
                            func_800BA808(gMsg_ID_7086, 0x14);
                            var_v0_9 = boss318->unkBA;
                        }
                        boss318->unkBA = var_v0_9 + 1;
                        if (boss318->unk_060 <= 0) {
                            func_800182F4(0x102800FF);
                            func_800182F4(0x112800FF);
                            func_80042EC0((Object_408 *) boss318);
                            func_800BA808(gMsg_ID_15252, 0x14);
                            D_8017796C = -1;
                            temp_v1 = gPlayer->state_1C8;
                            if ((temp_v1 == PLAYERSTATE_1C8_3) || (temp_v1 == PLAYERSTATE_1C8_5)) {
                                gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
                                gPlayer->unk_1D0 = 0;
                            }
                            D_E16C50_801C4190.unk4 = 0;
                            D_E16C50_801C4190.unk14 = 0;
                            D_E16C50_801C4190.unkC = 0;
                            D_E16C50_801C4190.unk10 = 0;
                            D_E16C50_801C4190.unk0 = 0;
                            boss318->unk_060 = 0;
                            boss318->unkA2 = 0x28;
                            boss318->unk_08A = 2;
                            boss318->timer_056 = 0x32;
                            Audio_PlaySfx(0x2940A04FU, temp_s4_2, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            D_80161734 = 0;
                            boss318->unk_04E = 0x10;
                        }
                    }
                }
                break;
            case 19:                                /* switch 3 */
            case 20:                                /* switch 3 */
                if (boss318->unk_064 == 0x1F) {
                    if (D_E16C50_801C42FC != 0) {
                        Audio_PlaySfx(0x29121007U, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else if (boss318->unk_04E >= 0xF) {
                        D_E16C50_801C42B8 = 0x32;
                    }
                }
                break;
            default:                                /* switch 3 */
                Audio_PlaySfx(0x29121007U, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                break;
            }
        }
    }
    if (boss318->unk_04E >= 0xF) {
        temp_v0 = boss318->unk_08A;
        switch (temp_v0) {                          /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            Math_SmoothStepToF(&D_E16C50_801C4338, -45.0f, 1.0f, boss318->unk_0DC, 0.01f);
            Math_SmoothStepToF(&D_E16C50_801C433C, 30.0f, 1.0f, boss318->unk_0DC, 0.01f);
            if ((boss318->timer_050 == 0) && (D_E16C50_801C4338 == -45.0f)) {
                boss318->timer_050 = 7;
                boss318->unk_08A += 1;
            }
            break;
        case 1:                                     /* switch 4 */
            temp_fs0_8 = 2.0f * boss318->unk_0DC;
            Math_SmoothStepToF(&D_E16C50_801C4338, 0.0f, 1.0f, temp_fs0_8, 0.0001f);
            Math_SmoothStepToF(&D_E16C50_801C433C, 0.0f, 1.0f, temp_fs0_8, 0.0001f);
            if (boss318->timer_050 == 0) {
                boss318->unk_08A = 0;
                boss318->timer_050 = (s16) (s32) (40.0f - ((f32) (boss318->unk_060 - 0x96) / 5.0f));
            }
            break;
        case 2:                                     /* switch 4 */
            if (D_E16C50_801C42BC != 0) {
                Math_SmoothStepToF(&D_E16C50_801C4338, -80.0f, 1.0f, 10.0f, 0.0001f);
                Math_SmoothStepToF(&D_E16C50_801C433C, 30.0f, 1.0f, 10.0f, 0.0001f);
            } else {
                boss318->timer_050 = 0x32;
                boss318->unk_08A = 0;
            }
            break;
        }
    }
    temp_v0_2 = &D_E16C50_801C0150[boss318->unkAC];
    boss318->unkA4 = (s16) (s32) ((f32) boss318->unkA4 + temp_v0_2->unk0);
    boss318->unk_0A6 = (s16) (s32) ((f32) boss318->unk_0A6 + temp_v0_2->unk4);
    boss318->unkA8 = (s16) (s32) ((f32) boss318->unkA8 + temp_v0_2->unk8);
    if (boss318->unkA4 < 0) {
        boss318->unkA4 = 0;
    }
    if (boss318->unk_0A6 < 0) {
        boss318->unk_0A6 = 0;
    }
    if (boss318->unkA8 < 0) {
        boss318->unkA8 = 0;
    }
    if (boss318->unkAA == 0) {
        boss318->unkAA = 0xA;
        boss318->unkAC += 1;
        boss318->unkAC &= 3;
    }
    temp_v0_3 = boss318->unk_04E;
    if ((temp_v0_3 >= 4) && (temp_v0_3 < 0x10)) {
        temp_fs1_8 = gPlayer->pos.x - boss318->obj.pos.x;
        temp_fs2_2 = gPlayer->unk_138 - boss318->obj.pos.z;
        temp_fs0_9 = gPlayer->pos.y - boss318->obj.pos.y;
        spE8 = Math_RadToDeg(Math_Atan2F(temp_fs1_8, temp_fs2_2));
        temp_fs0_10 = Math_RadToDeg(-Math_Atan2F(temp_fs0_9, sqrtf((temp_fs1_8 * temp_fs1_8) + (temp_fs2_2 * temp_fs2_2))));
        if ((spE8 <= 40.0f) || (spE8 >= 320.0f)) {
            Math_SmoothStepToAngle(&D_E16C50_801C4344, spE8, 1.0f, 5.0f, 0.001f);
        }
        if ((temp_fs0_10 <= 30.0f) || (temp_fs0_10 >= 330.0f)) {
            Math_SmoothStepToAngle(&D_E16C50_801C4340, temp_fs0_10, 1.0f, 5.0f, 0.001f);
        }
    }
    var_s0_3 = &D_E16C50_801C42A0;
    var_s3_7 = 0;
    var_v1 = 0;
    do {
        if ((var_s0_3->unk4 == 0) && (boss318->unk_04E < 0x11)) {
            temp_v0_4 = var_s3_7 + 1;
            if ((temp_v0_4 != boss318->unk94) && (temp_v0_4 != boss318->unk96)) {
                temp_s7 = var_s0_3->unk40;
                temp_v0_5 = var_v1 + temp_s7;
                temp_s1 = var_v1 + &D_E16C50_801C4308;
                temp_s2 = &D_E16C50_801BFC94[temp_v0_5];
                temp_s4_3 = &D_E16C50_801BFE18[temp_v0_5];
                temp_s5 = &D_E16C50_801BFF38[temp_v0_5];
                sp8C = temp_s1 + 0x108;
                sp88 = &D_E16C50_801BFDB4[var_v1];
                spA4 = var_v1;
                Math_SmoothStepToF(temp_s1 + 0xD0, temp_s2->unk0, temp_s4_3->unk0, temp_s5->unk0, 0.00001f);
                Math_SmoothStepToF(temp_s1 + 0xEC, temp_s2->unk4, temp_s4_3->unk4, temp_s5->unk4, 0.00001f);
                Math_SmoothStepToF(sp8C, temp_s2->unk8, temp_s4_3->unk8, temp_s5->unk8, 0.00001f);
                temp_t1 = var_s0_3->unk28 + 1;
                var_s0_3->unk28 = temp_t1;
                if ((temp_t1 >= sp88[temp_s7]) && ((temp_t4 = var_s0_3->unk40 + 1, var_s0_3->unk40 = temp_t4, ((temp_t4 < 4) == 0)) || (*(D_E16C50_801BFDB4 + ((temp_t4 * 4) + (var_v1 * 4))) == 0x186A0))) {
                    var_s0_3->unk28 = 0;
                    var_s0_3->unk40 = 0;
                }
            }
        }
        var_s3_7 += 1;
        var_v1 += 4;
        var_s0_3 += 4;
    } while (var_s3_7 != 6);
    temp_ft4 = gPlayer->pos.y;
    temp_fv1 = gPlayer->pos.x;
    temp_fs1_9 = temp_fv1 - D_E16C50_801C4308.unk124;
    spF4 = temp_ft4 - D_E16C50_801C4308.unk134;
    temp_fv0 = gPlayer->unk_138;
    temp_fs3 = temp_fv1 - D_E16C50_801C4308.unk130;
    temp_fs0_11 = temp_ft4 - D_E16C50_801C4308.unk128;
    temp_fs2_3 = temp_fv0 - D_E16C50_801C4308.unk12C;
    spF0 = temp_fv0 - D_E16C50_801C4308.unk138;
    spE8 = Math_RadToDeg(Math_Atan2F(temp_fs1_9, temp_fs2_3));
    spE0 = Math_RadToDeg(Math_Atan2F(temp_fs3, spF0));
    temp_fa1 = sqrtf((temp_fs1_9 * temp_fs1_9) + (temp_fs2_3 * temp_fs2_3));
    spF0 = sqrtf((temp_fs3 * temp_fs3) + (spF0 * spF0));
    temp_fs0_12 = Math_RadToDeg(-Math_Atan2F(temp_fs0_11, temp_fa1));
    temp_fs1_10 = Math_RadToDeg(-Math_Atan2F(spF4, spF0));
    if ((spE8 <= 15.0f) || (spE8 >= 310.0f)) {
        Math_SmoothStepToAngle(&D_E16C50_801C4350, spE8, 1.0f, 5.0f, 0.001f);
    }
    if ((temp_fs0_12 <= 12.0f) || (temp_fs0_12 >= 330.0f)) {
        Math_SmoothStepToAngle(&D_E16C50_801C4348, temp_fs0_12, 1.0f, 5.0f, 0.001f);
    }
    if ((spE0 <= 20.0f) || (spE0 >= 315.0f)) {
        Math_SmoothStepToAngle(&D_E16C50_801C4354, spE0, 1.0f, 5.0f, 0.001f);
    }
    if ((temp_fs1_10 <= 12.0f) || (temp_fs1_10 >= 330.0f)) {
        Math_SmoothStepToAngle(&D_E16C50_801C434C, temp_fs1_10, 1.0f, 5.0f, 0.001f);
    }
    if ((boss318->unk8C == 1) && (boss318->unk98 != 0) && (boss318->unk_060 != 0) && (boss318->unk94 == 0)) {
        D_E16C50_801C42E0 = 0;
        D_E16C50_801C42C8 = 0;
        boss318->unk94 = 1;
    }
    if ((boss318->unk8E == 1) && (boss318->unk9A != 0) && (boss318->unk_060 != 0) && (boss318->unk96 == 0)) {
        D_E16C50_801C42E4 = 0;
        D_E16C50_801C42CC = 0;
        boss318->unk96 = 2;
    }
    if (boss318->unk_060 != 0) {
        var_s7 = 0;
        var_fp = boss318;
        do {
            if (var_fp->unk94 != 0) {
                temp_s2_2 = var_fp->unk90;
                temp_s1_2 = &(&D_E16C50_801C4308)[var_s7];
                temp_s3 = &D_E16C50_801C00B0[temp_s2_2];
                temp_s4_4 = &D_E16C50_801C00F0[temp_s2_2];
                temp_s5_2 = &D_E16C50_801C0120[temp_s2_2];
                sp84 = &(&D_E16C50_801C42A0)[var_s7];
                sp88 = temp_s1_2 + 0x108;
                Math_SmoothStepToF(temp_s1_2 + 0xD0, temp_s3->unk0, temp_s4_4->unk0, temp_s5_2->unk0, 0.00001f);
                Math_SmoothStepToF(temp_s1_2 + 0xEC, temp_s3->unk10, temp_s4_4->unk10, temp_s5_2->unk10, 0.00001f);
                Math_SmoothStepToF(sp88, temp_s3->unk20, temp_s4_4->unk20, temp_s5_2->unk20, 0.00001f);
                temp_t5_2 = sp84->unk28 + 1;
                sp84->unk28 = temp_t5_2;
                if (temp_t5_2 >= D_E16C50_801C00E0[temp_s2_2]) {
                    var_fp->unk90 += 1;
                    if (var_fp->unk90 == 2) {
                        var_s6 = 4;
                        temp_s4_5 = (var_s7 * 0xC) + &D_E16C50_801C4308;
                        if (D_E16C50_801C42FC == 0) {
                            temp_v0_6 = boss318->unk_060;
                            var_s6 = ((s32) (0xA0 - temp_v0_6) / 10) + 0xA;
                            if (temp_v0_6 < 0x1F) {
                                var_s6 += 0xA;
                            }
                            if (var_s6 >= 0x29) {
                                var_s6 = 0x28;
                            }
                        }
                        spD4 = temp_s4_5->unk124;
                        spD8 = temp_s4_5->unk128;
                        spDC = temp_s4_5->unk12C;
                        func_8007A6F0((Vec3f *) &spD4, 0x2903404B);
                        var_s2_2 = 0;
                        if (var_s6 >= 0) {
                            var_s0_4 = (0 * 0xBC * 4) + gObjects2F4;
loop_253:
                            if ((var_s0_4->obj.status == 0) && ((u32) var_s0_4 < (u32) gObjects408)) {
                                temp_s3_2 = var_s0_4 + 0x1C;
                                Object_2F4_Initialize(var_s0_4);
                                var_s0_4->obj.pos.x = temp_s4_5->unk124;
                                var_s0_4->obj.status = 1;
                                var_s0_4->obj.id = 0x102;
                                var_s0_4->obj.pos.y = temp_s4_5->unk128 + 30.0f;
                                var_s0_4->obj.pos.z = temp_s4_5->unk12C + 150.0f;
                                if (Rand_ZeroOne() < 0.5f) {
                                    var_fs1 = Math_ModF(((Rand_ZeroOne() - 0.5f) * 60.0f) + temp_s1_2->unk40, 360.0f);
                                    var_fs0 = Math_ModF(((Rand_ZeroOne() - 0.5f) * 60.0f) + temp_s1_2->unk48, 360.0f);
                                    if (boss318->unk_060 < 0x3D) {
                                        if (var_s7 == 0) {
                                            var_fs1 = Math_ModF(((Rand_ZeroOne() - 0.5f) * 30.0f) + temp_s1_2->unk40, 360.0f);
                                            var_fv0 = Math_ModF(((Rand_ZeroOne() - 0.5f) * 20.0f) + (temp_s1_2->unk48 - 30.0f), 360.0f);
                                        } else {
                                            var_fs1 = Math_ModF(((Rand_ZeroOne() - 0.5f) * 30.0f) + temp_s1_2->unk40, 360.0f);
                                            var_fv0 = Math_ModF(((Rand_ZeroOne() - 0.5f) * 20.0f) + (temp_s1_2->unk48 + 30.0f), 360.0f);
                                        }
                                        goto block_261;
                                    }
                                } else {
                                    var_fs1 = Math_ModF(((Rand_ZeroOne() - 0.5f) * 30.0f) + temp_s1_2->unk40, 360.0f);
                                    var_fv0 = Math_ModF(((Rand_ZeroOne() - 0.5f) * 30.0f) + temp_s1_2->unk48, 360.0f);
block_261:
                                    var_fs0 = var_fv0;
                                }
                                var_s0_4->unk_120 = var_fs1;
                                var_s0_4->unk_124.x = var_fs0;
                                var_s0_4->timer_0BC = var_s2_2 * 3;
                                var_s0_4->unk_118 = temp_s1_2->unk40;
                                var_s0_4->unk_11C = temp_s1_2->unk48;
                                Object_SetInfo(temp_s3_2, (u32) var_s0_4->obj.id);
                                if ((u32) temp_s3_2 >= (u32) &gObjects408->info) {
                                    var_s0_4->obj.status = 0;
                                }
                                var_s2_2 += 1;
                            }
                            var_s0_4 += 0x2F4;
                            if ((var_s6 >= var_s2_2) && (var_s0_4 != gObjects408)) {
                                goto loop_253;
                            }
                        }
                    }
                    if (var_fp->unk90 >= 4) {
                        var_fp->unk90 = 0;
                        temp_v0_7 = var_fp->unk90;
                        var_fp->unk94 = temp_v0_7;
                        sp84->unk28 = (s32) temp_v0_7;
                    }
                }
            }
            var_s7 += 1;
            var_fp += 2;
        } while (var_s7 != 2);
    }
    var_v1_2 = 0x68;
    do {
        var_fs0_2 = D_E16C50_801C4330 - 10.0f;
        if (fabsf(D_E16C50_801C4330) <= 5.0f) {
            var_fs0_2 = 0.0f;
        }
        temp_t6_2 = boss318->info.hitbox + var_v1_2;
        var_v1_2 += 0x28;
        *temp_t6_2 = var_fs0_2;
    } while (var_v1_2 < 0x1AC);
    if (boss318->unk_04E >= 0xA) {
        sp110 = (f32) D_E16C50_801C42C4;
        if (D_E16C50_801C4254 != 0) {
            Math_SmoothStepToF(&sp110, 255.0f, 1.0f, 10.0f, 0.0001f);
        } else if (!(gFrameCount & 0x1F & 0x10)) {
            Math_SmoothStepToF(&sp110, D_E16C50_801C005C, 1.0f, 10.0f, 0.0001f);
        } else {
            Math_SmoothStepToF(&sp110, D_E16C50_801C0058, 1.0f, 10.0f, 0.0001f);
        }
        D_E16C50_801C42C4 = (s32) sp110;
    }
    if (D_E16C50_801C42BC != 0) {
        Math_SmoothStepToF(D_801779A8, 20.0f, 1.0f, 5.0f, 0.0f);
    }
    var_s0_5 = &D_E16C50_801C42A4;
    var_s2_3 = 0x2D;
    var_s7_2 = 0;
    do {
        temp_v0_8 = *var_s0_5;
        if (temp_v0_8 != 0) {
            temp_s1_3 = &"BH\0A\0BH\0A\0A \0?\x80\0\0A\xa0\0\0@\0\0\0A\xa0\0\0@\0\0\0A\xa0\0\0@\0\0\0BH\0\0@"[var_s7_2];
            temp_fs0_13 = __sinf(temp_s1_3->unk0 * (f32) temp_v0_8 * 0.017453292f);
            temp_ft3 = func_E16C50_801A958C((u16) *var_s0_5, temp_s1_3->unk4) * temp_fs0_13;
            *var_s0_5 -= 1;
            (&D_E16C50_801C4308)[var_s2_3] = temp_ft3;
        }
        var_s7_2 += 2;
        var_s0_5 += 4;
        var_s2_3 += 1;
    } while (var_s7_2 != 0xE);
    if (boss318->unkA0 != 0) {
        if (D_E16C50_801C42AC != 0) {
            var_fs3_2 = 1.0f;
            if (D_E16C50_801C42F8 < 4) {
                var_fs3_2 = 1.2f;
            }
            Math_SmoothStepToF(&D_E16C50_801C43E0, var_fs3_2, 0.3f, 1.0f, 0.0f);
            Math_SmoothStepToF(&D_E16C50_801C43FC, var_fs3_2, 0.3f, 1.0f, 0.0f);
            temp_t6_3 = D_E16C50_801C42F8 + 1;
            D_E16C50_801C42F8 = temp_t6_3;
            if (temp_t6_3 >= 9) {
                D_E16C50_801C42F8 = 0;
            }
        }
    } else {
        D_E16C50_801C42AC = 0xA;
        if (boss318->unkA2 != 0) {
            Math_SmoothStepToF(&D_E16C50_801C43E0, 0.0f, 0.3f, 0.5f, 0.0f);
            Math_SmoothStepToF(&D_E16C50_801C43FC, 0.0f, 0.3f, 0.5f, 0.0f);
            boss318->info.hitbox->unk1DC = -10000.0f;
            if (boss318->unkA2 == 1) {
                Audio_PlaySfx(0x29409051U, &boss318->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        } else if ((boss318->unk_060 != 0) || (boss318->unk_04E < 0x10)) {
            Math_SmoothStepToF(&D_E16C50_801C43E0, 1.0f, 0.3f, 0.5f, 0.0f);
            Math_SmoothStepToF(&D_E16C50_801C43FC, 1.0f, 0.3f, 0.5f, 0.0f);
            if (D_E16C50_801C43FC >= 0.9f) {
                boss318->unkA0 = 0xA;
                boss318->info.hitbox->unk1DC = 1028.0f;
            }
        } else {
            Math_SmoothStepToF(&D_E16C50_801C43E0, 0.0f, 0.1f, 10.0f, 0.0f);
            Math_SmoothStepToF(&D_E16C50_801C43FC, 0.0f, 0.1f, 10.0f, 0.0f);
            temp_t2_2 = D_E16C50_801C42C4 - 5;
            D_E16C50_801C42C4 = temp_t2_2;
            if (temp_t2_2 < 0) {
                D_E16C50_801C42C4 = 0;
            }
        }
    }
    if ((D_E16C50_801C42BC != 0) || (boss318->unk_04E >= 0x10)) {
        var_fs3_3 = 0.25f;
    } else {
        var_fs3_3 = 1.0f;
    }
    Math_SmoothStepToF(&D_E16C50_801C43F0, var_fs3_3, 0.3f, 1.0f, 0.0f);
    var_s3_8 = 0;
    var_s4 = boss318;
    do {
        if (var_s4->unk98 == 0) {
            var_v1_3 = var_s3_8 * 4;
            temp_s1_4 = &(&D_E16C50_801C4308)[var_s3_8];
            temp_s2_3 = temp_s1_4 + 0xD0;
            temp_s6 = temp_s1_4 + 0xEC;
            temp_fp = temp_s1_4 + 0x108;
            if (var_s4->unk9C == 1) {
                temp_s0 = (var_s3_8 * 0xC) + &D_E16C50_801C4308;
                spA4 = var_v1_3;
                spD4 = temp_s0->unk124;
                spD8 = temp_s0->unk128;
                spDC = temp_s0->unk12C;
                func_8007A6F0((Vec3f *) &spD4, 0x29400052);
                var_v1_3 = spA4;
            }
            if ((fabsf(D_E16C50_801C4330) <= 3.0f) || (var_s4->unk9C == 0)) {
                Math_SmoothStepToF(temp_s2_3, 1.0f, 0.1f, 0.5f, 0.0f);
                Math_SmoothStepToF(temp_s6, 1.0f, 0.1f, 0.5f, 0.0f);
                Math_SmoothStepToF(temp_fp, 1.0f, 0.1f, 0.5f, 0.0f);
                if (temp_s1_4->unk108 >= 0.9f) {
                    temp_s0_2 = (var_s3_8 * 0xC) + &D_E16C50_801C4308;
                    var_s2_4 = 0;
                    do {
                        temp_fs0_14 = (f32) var_s2_4;
                        temp_fs1_11 = temp_fs0_14 * 200.0f;
                        spD4 = (Rand_ZeroOne() * temp_fs1_11) + temp_s0_2->unk124;
                        spD8 = (Rand_ZeroOne() * temp_fs1_11) + temp_s0_2->unk128;
                        spDC = (Rand_ZeroOne() * (temp_fs0_14 * 400.0f)) + temp_s0_2->unk12C;
                        func_E16C50_801A94EC(&spD4, 0x144);
                        var_s2_4 += 1;
                    } while (var_s2_4 != 3);
                    var_s4->unk98 = 2;
                }
            } else {
                Math_SmoothStepToF(temp_s2_3, 0.0f, 0.1f, 0.5f, 0.0f);
                Math_SmoothStepToF(temp_s6, 0.0f, 0.1f, 0.5f, 0.0f);
                Math_SmoothStepToF(temp_fp, 0.0f, 0.1f, 0.5f, 0.0f);
                (var_v1_3 + &D_E16C50_801C42A0)->unk4 = 0x32;
            }
        }
        var_s3_8 += 1;
        var_s4 += 2;
    } while (var_s3_8 != 2);
    temp_v0_9 = boss318->unk8C;
    if (temp_v0_9 != 0) {
        boss318->unk8C = temp_v0_9 - 1;
    }
    temp_v0_10 = boss318->unk8E;
    if (temp_v0_10 != 0) {
        boss318->unk8E = temp_v0_10 - 1;
    }
    temp_v0_11 = boss318->unk9C;
    if (temp_v0_11 != 0) {
        boss318->unk9C = temp_v0_11 - 1;
    }
    temp_v0_12 = boss318->unk9E;
    if (temp_v0_12 != 0) {
        boss318->unk9E = temp_v0_12 - 1;
    }
    temp_v0_13 = boss318->unkA2;
    if (temp_v0_13 != 0) {
        boss318->unkA2 = temp_v0_13 - 1;
    }
    temp_v0_14 = boss318->unkAA;
    if (temp_v0_14 != 0) {
        boss318->unkAA = temp_v0_14 - 1;
    }
    temp_v0_15 = boss318->unk_0AE;
    if (temp_v0_15 != 0) {
        boss318->unk_0AE = temp_v0_15 - 1;
    }
    if (D_801613A0 == boss318->unkBC) {
        D_80161734 = 1;
    }
    if (boss318->unkBC < D_801613A0) {
        D_80177848 = (s32) (((f32) boss318->unk_060 / 150.0f) * 255.0f);
    }
}

s32 func_E16C50_801B42AC(s32 arg0, u32 *arg1, Vec3f *arg2, Vec3f *arg3, void *arg4) {
    Vec3f sp6C;
    Vec3f sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s32 sp50;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    f32 var_fa0;
    f32 var_fv0;
    f32 var_fv1;
    s32 *temp_t0;
    s32 temp_v0;

    sp6C.x = D_E16C50_801C01A4.unk0;
    sp6C.y = D_E16C50_801C01A4.unk4;
    sp6C.z = D_E16C50_801C01A4.unk8;
    temp_t0 = &(&D_E16C50_801C4230)[arg0];
    temp_v0 = *temp_t0;
    sp50 = 0;
    if (temp_v0 >= 0x3E8) {
        *arg1 = 0;
    } else if ((temp_v0 != 0) && (D_80177854 != 0x64)) {
        *temp_t0 = temp_v0 - 1;
    }
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = 0x2000;
    temp_v1->words.w0 = 0xB7000000;
    if ((D_E16C50_801C42A0 != 0xFF) && (arg0 != 0x1B)) {
        sp5C = 0.0f;
        sp58 = 0.0f;
        sp54 = 0.0f;
        RCP_SetupDL(&gMasterDisp, 0x3A);
        var_fv0 = 0.0f;
        var_fv1 = 0.0f;
        var_fa0 = 0.0f;
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFA000000;
        temp_v1_2->words.w1 = (D_E16C50_801C42A0 & 0xFF) | ~0xFF;
    } else if (!(*temp_t0 & 1)) {
        sp5C = 0.0f;
        sp58 = 0.0f;
        sp54 = 0.0f;
        RCP_SetupDL(&gMasterDisp, 0x39);
        var_fv0 = 0.0f;
        var_fv1 = 0.0f;
        var_fa0 = 0.0f;
    } else {
        sp50 = 1;
        sp5C = 0.0f;
        sp58 = 0.0f;
        sp54 = 0.0f;
        RCP_SetupDL(&gMasterDisp, 0x3D);
        var_fv0 = 0.0f;
        var_fv1 = 0.0f;
        var_fa0 = 0.0f;
        temp_v1_3 = gMasterDisp;
        gMasterDisp = temp_v1_3 + 8;
        temp_v1_3->words.w1 = 0xFF0000FF;
        temp_v1_3->words.w0 = 0xFA000000;
    }
    switch (arg0) {
    case 4:
        arg3->x = D_E16C50_801C4308.unk34;
        var_fv0 = arg4->unkF8;
        var_fv1 = arg4->unkFC;
        var_fa0 = arg4->unk100;
        break;
    case 5:
        RCP_SetupDL(&gMasterDisp, 0x3D);
        temp_v1_4 = gMasterDisp;
        gMasterDisp = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xFA000000;
        temp_v1_4->words.w1 = ((gObjects408->unkA8 & 0xFF) << 8) | (gObjects408->unkA4 << 0x18) | ((gObjects408->unk_0A6 & 0xFF) << 0x10) | 0xFF;
        arg3->x = D_E16C50_801C4308.unk38;
        arg3->y = D_E16C50_801C4308.unk3C;
        arg2->z = 40.0f;
        var_fv0 = D_E16C50_801C4308.unkE8;
        var_fv1 = D_E16C50_801C4308.unk104;
        var_fa0 = D_E16C50_801C4308.unk120;
        break;
    case 6:
        arg3->x = D_E16C50_801C4308.unk30;
        var_fv0 = arg4->unkF8;
        var_fv1 = arg4->unkFC;
        var_fa0 = arg4->unk100;
        break;
    case 7:
        arg3->x = D_E16C50_801C4308.unk40;
        arg3->y = D_E16C50_801C4308.unk48;
        arg3->x += D_E16C50_801C4308.unkB4;
        arg3->y += D_E16C50_801C4308.unkB4;
        arg3->z += D_E16C50_801C4308.unkB4;
        var_fv0 = D_E16C50_801C4308.unkD0;
        var_fv1 = D_E16C50_801C4308.unkEC;
        var_fa0 = D_E16C50_801C4308.unk108;
        break;
    case 8:
        arg3->x = D_E16C50_801C4308.unk44;
        arg3->y = D_E16C50_801C4308.unk4C;
        arg3->x += D_E16C50_801C4308.unkB8;
        arg3->y += D_E16C50_801C4308.unkB8;
        arg3->z += D_E16C50_801C4308.unkB8;
        var_fv0 = D_E16C50_801C4308.unkD4;
        var_fv1 = D_E16C50_801C4308.unkF0;
        var_fa0 = D_E16C50_801C4308.unk10C;
        break;
    case 9:
        arg3->x += D_E16C50_801C4308.unkBC;
        arg3->y += D_E16C50_801C4308.unkBC;
        arg3->z += D_E16C50_801C4308.unkBC;
        var_fv0 = D_E16C50_801C4308.unkD8;
        var_fv1 = D_E16C50_801C4308.unkF4;
        var_fa0 = D_E16C50_801C4308.unk110;
        if (sp50 != 0) {
            sp5C = var_fv0;
            sp58 = var_fv1;
            sp54 = var_fa0;
            RCP_SetupDL(&gMasterDisp, 0x3D);
            if (gObjects408->unk_060 != 0) {
                temp_v1_5 = gMasterDisp;
                gMasterDisp = temp_v1_5 + 8;
                temp_v1_5->words.w1 = 0xFF0000FF;
                temp_v1_5->words.w0 = 0xFA000000;
            } else {
                temp_v1_6 = gMasterDisp;
                gMasterDisp = temp_v1_6 + 8;
                temp_v1_6->words.w1 = 0xFF0000FF;
                temp_v1_6->words.w0 = 0xFA000000;
            }
        }
        break;
    case 10:
        arg3->x += D_E16C50_801C4308.unkC0;
        arg3->y += D_E16C50_801C4308.unkC0;
        arg3->z += D_E16C50_801C4308.unkC0;
        var_fv0 = D_E16C50_801C4308.unkDC;
        var_fv1 = D_E16C50_801C4308.unkF8;
        var_fa0 = D_E16C50_801C4308.unk114;
        break;
    case 12:
        arg3->x = D_E16C50_801C4308.unk38;
        arg3->y = D_E16C50_801C4308.unk3C;
        var_fv0 = arg4->unkF8;
        var_fv1 = arg4->unkFC;
        var_fa0 = arg4->unk100;
        break;
    case 15:
        arg3->x += D_E16C50_801C4308.unkC4;
        arg3->y += D_E16C50_801C4308.unkC4;
        arg3->z += D_E16C50_801C4308.unkC4;
        var_fv0 = D_E16C50_801C4308.unkE0;
        var_fv1 = D_E16C50_801C4308.unkFC;
        var_fa0 = D_E16C50_801C4308.unk118;
        break;
    case 18:
        arg3->y += D_E16C50_801C4308.unkC8;
        arg3->z += D_E16C50_801C4308.unkC8;
        var_fv0 = D_E16C50_801C4308.unkE4;
        var_fv1 = D_E16C50_801C4308.unk100;
        var_fa0 = D_E16C50_801C4308.unk11C;
        break;
    case 22:
        arg3->x += D_E16C50_801C4308.unkCC;
        arg3->y += D_E16C50_801C4308.unkCC;
        arg3->z += D_E16C50_801C4308.unkCC;
        var_fv0 = arg4->unkF8;
        var_fv1 = arg4->unkFC;
        var_fa0 = arg4->unk100;
        break;
    case 24:
        arg3->x = D_E16C50_801C4308.unk28;
        arg3->z = D_E16C50_801C4308.unk2C;
        break;
    }
    if (var_fv0 > 0.0f) {
        sp54 = var_fa0;
        sp58 = var_fv1;
        sp5C = var_fv0;
        Matrix_Translate(gCalcMatrix, arg2->x, arg2->y, arg2->z, (u8) 1);
        Matrix_RotateZ(gCalcMatrix, arg3->z * 0.017453292f, 1U);
        Matrix_RotateY(gCalcMatrix, arg3->y * 0.017453292f, 1U);
        Matrix_RotateX(gCalcMatrix, arg3->x * 0.017453292f, 1U);
        if (*arg1 != 0) {
            sp5C = var_fv0;
            sp58 = var_fv1;
            sp54 = var_fa0;
            Matrix_MultVec3f(gCalcMatrix, &sp6C, &sp60);
            func_8005F670(&sp60);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1U);
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, sp5C, sp58, sp54, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v1_7 = gMasterDisp;
            gMasterDisp = temp_v1_7 + 8;
            temp_v1_7->words.w0 = 0x06000000;
            temp_v1_7->words.w1 = *arg1;
            Matrix_Pop(&gGfxMatrix);
        }
        return 1;
    }
    return 0;
}

void func_E16C50_801B49DC(s32 arg0, Vec3f *arg1, void *arg2) {
    Vec3f sp6C;
    Vec3f sp60;
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;
    Vec3f sp30;
    Vec3f sp24;

    sp60.x = D_E16C50_801C01B0.unk0;
    sp60.y = D_E16C50_801C01B0.unk4;
    sp60.z = D_E16C50_801C01B0.unk8;
    sp54.x = D_E16C50_801C01BC.unk0;
    sp54.y = D_E16C50_801C01BC.unk4;
    sp54.z = D_E16C50_801C01BC.unk8;
    sp48.x = D_E16C50_801C01C8.unk0;
    sp48.y = D_E16C50_801C01C8.unk4;
    sp48.z = D_E16C50_801C01C8.unk8;
    sp3C.x = D_E16C50_801C01D4.unk0;
    sp3C.y = D_E16C50_801C01D4.unk4;
    sp3C.z = D_E16C50_801C01D4.unk8;
    sp30.x = D_E16C50_801C01E0.unk0;
    sp30.y = D_E16C50_801C01E0.unk4;
    sp30.z = D_E16C50_801C01E0.unk8;
    sp24.x = D_E16C50_801C01EC.unk0;
    sp24.y = D_E16C50_801C01EC.unk4;
    sp24.z = D_E16C50_801C01EC.unk8;
    switch (arg0) {
    case 5:
        Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
        D_E16C50_801C4308.unk54 = (f32) sp6C;
        D_E16C50_801C4308.unk58 = sp6C.y;
        D_E16C50_801C4308.unk5C = sp6C.z;
        return;
    case 7:
        Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
        D_E16C50_801C4308.unk60 = (f32) sp6C;
        D_E16C50_801C4308.unk64 = sp6C.y;
        D_E16C50_801C4308.unk68 = sp6C.z;
        Matrix_MultVec3f(gCalcMatrix, &sp30, &sp6C);
        D_E16C50_801C4308.unk124 = (f32) sp6C;
        D_E16C50_801C4308.unk128 = sp6C.y;
        D_E16C50_801C4308.unk12C = sp6C.z;
        return;
    case 8:
        Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
        D_E16C50_801C4308.unk6C = (f32) sp6C;
        D_E16C50_801C4308.unk70 = sp6C.y;
        D_E16C50_801C4308.unk74 = sp6C.z;
        Matrix_MultVec3f(gCalcMatrix, &sp24, &sp6C);
        D_E16C50_801C4308.unk130 = (f32) sp6C;
        D_E16C50_801C4308.unk134 = sp6C.y;
        D_E16C50_801C4308.unk138 = sp6C.z;
        return;
    case 9:
        Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
        D_E16C50_801C4308.unk78 = (f32) sp6C;
        D_E16C50_801C4308.unk7C = sp6C.y;
        D_E16C50_801C4308.unk80 = sp6C.z;
        return;
    case 10:
        Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
        D_E16C50_801C4308.unk84 = (f32) sp6C;
        D_E16C50_801C4308.unk88 = sp6C.y;
        D_E16C50_801C4308.unk8C = sp6C.z;
        return;
    case 15:
        Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
        D_E16C50_801C4308.unk90 = (f32) sp6C;
        D_E16C50_801C4308.unk94 = sp6C.y;
        D_E16C50_801C4308.unk98 = sp6C.z;
        return;
    case 18:
        Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
        D_E16C50_801C4308.unk9C = (f32) sp6C;
        D_E16C50_801C4308.unkA0 = sp6C.y;
        D_E16C50_801C4308.unkA4 = sp6C.z;
        return;
    case 22:
        Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
        D_E16C50_801C4308.unkA8 = (f32) sp6C;
        D_E16C50_801C4308.unkAC = sp6C.y;
        D_E16C50_801C4308.unkB0 = sp6C.z;
        return;
    case 24:
        Matrix_MultVec3f(gCalcMatrix, &sp54, &sp6C);
        D_E16C50_801C4308.unk4 = (f32) sp6C;
        D_E16C50_801C4308.unk10 = sp6C.y;
        D_E16C50_801C4308.unk1C = sp6C.z;
        Matrix_MultVec3f(gCalcMatrix, &sp48, &sp6C);
        D_E16C50_801C4308.unk8 = (f32) sp6C;
        D_E16C50_801C4308.unk14 = sp6C.y;
        D_E16C50_801C4308.unk20 = sp6C.z;
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp6C);
        D_E16C50_801C4308.unkC = (f32) sp6C;
        D_E16C50_801C4308.unk18 = sp6C.y;
        D_E16C50_801C4308.unk24 = sp6C.z;
        /* fallthrough */
    default:
        return;
    }
}

void func_E16C50_801B4D84(Object_408_318 *boss318) {
    Animation_DrawSkeleton(3, &D_602BD60, &boss318->unk1A0, (s32 (*)(s32, Gfx **, Vec3f *, Vec3f *, void *)) func_E16C50_801B42AC, func_E16C50_801B49DC, boss318, gCalcMatrix);
}

s32 func_E16C50_801B4DDC(s32 arg0, Gfx **arg1, Vec3f *arg2, Vec3f *arg3, void *arg4) {
    Gfx *temp_v1;

    if (!(arg4->unkC6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x39);
        if ((arg0 > 0) && (arg0 < 5)) {
            RCP_SetupDL(&gMasterDisp, 0x3C);
        }
    } else {
        RCP_SetupDL(&gMasterDisp, 0x3D);
        temp_v1 = gMasterDisp;
        gMasterDisp = temp_v1 + 8;
        temp_v1->words.w0 = 0xFA000000;
        temp_v1->words.w1 = 0xFF0000FF;
    }
    return 0;
}

void func_E16C50_801B4E94(s32 arg0, Vec3f *arg1, void *arg2) {
    Vec3f sp24;

    sp24.x = D_E16C50_801C0250.unk0;
    sp24.y = D_E16C50_801C0250.unk4;
    sp24.z = D_E16C50_801C0250.unk8;
    if (arg2->unkCE == 0) {
        switch (arg0) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x18C);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1EC);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x198);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1F8);
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1A4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x204);
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1B0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x210);
            return;
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1BC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x21C);
            return;
        case 6:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1C8);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x228);
            return;
        case 7:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1D4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x234);
            return;
        case 8:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1E0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x240);
            break;
        }
    } else {
    default:
    }
}

void func_E16C50_801B504C(Object_2F4 *arg0) {
    Vec3f sp30;
    f32 temp_fv0;

    temp_fv0 = arg0->scale;
    Matrix_Scale(gCalcMatrix, temp_fv0, temp_fv0, temp_fv0, (u8) 1);
    Animation_GetFrameData(&D_6005954, (s32) arg0->unk_0B6, &sp30);
    Animation_DrawSkeleton(3, &D_6005A80, &sp30, func_E16C50_801B4DDC, func_E16C50_801B4E94, arg0, gCalcMatrix);
}

void func_E16C50_801B50E8(Object_2F4 *arg0) {
    f32 sp8C;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    Vec3f sp70;
    f32 sp5C;
    Vec3f *sp54;
    Vec3f *sp50;
    Object_2F4 *temp_v0_3;
    Object_2F4 *var_s0;
    Object_2F4 *var_s0_2;
    Object_2F4 *var_v0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fs1_5;
    f32 temp_ft5;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_4;
    s32 temp_ft2;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    u16 temp_v1;

    if (arg0->unk_0CE == 0) {
        var_s1 = 0;
        if (arg0->unk_0B8 != 0) {
            do {
                sp5C = Rand_ZeroOne();
                temp_fs1 = Rand_ZeroOne();
                temp_fs0 = Rand_ZeroOne();
                temp_fv1 = (f32) var_s1;
                func_80081A8C((sp5C * (temp_fv1 * 15.0f)) + arg0->obj.pos.x, (temp_fs1 * (temp_fv1 * 3.0f)) + arg0->obj.pos.y, (temp_fs0 * (temp_fv1 * 5.0f)) + arg0->obj.pos.z, (Rand_ZeroOne() * 0.4f) + 0.4f, 7);
                var_s1 += 1;
            } while (var_s1 != 5);
            arg0->unk_0CE = 0;
            arg0->unk_0B8 = 7;
            func_8007A6F0(&arg0->obj.pos, 0x29038090);
        }
    }
    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {
    case 0:
        var_s1_2 = 0;
        var_s0 = arg0;
        do {
            var_s1_2 += 4;
            var_s0 += 0x30;
            var_s0->unk_15C = arg0->obj.pos.x;
            var_s0->unk_160 = arg0->obj.pos.y;
            var_s0->unk_164 = arg0->obj.pos.z;
            var_s0->unk_18C[4].x = arg0->obj.rot.x;
            var_s0->unk_18C[4].y = arg0->obj.rot.y;
            var_s0->unk_18C[4].z = arg0->obj.rot.z;
            var_s0->unk_168 = arg0->obj.pos.x;
            var_s0->unk_16C = arg0->obj.pos.y;
            var_s0->unk_170 = arg0->obj.pos.z;
            var_s0->unk_18C[5].x = arg0->obj.rot.x;
            var_s0->unk_18C[5].y = arg0->obj.rot.y;
            var_s0->unk_18C[5].z = arg0->obj.rot.z;
            var_s0->unk_174 = arg0->obj.pos.x;
            var_s0->unk_178 = arg0->obj.pos.y;
            var_s0->unk_17C = arg0->obj.pos.z;
            var_s0->unk_18C[6].x = arg0->obj.rot.x;
            var_s0->unk_18C[6].y = arg0->obj.rot.y;
            var_s0->unk_18C[6].z = arg0->obj.rot.z;
            var_s0->unk_180 = arg0->obj.pos.x;
            var_s0->unk_184 = arg0->obj.pos.y;
            var_s0->unk_188 = arg0->obj.pos.z;
            var_s0->unk_18C[7].x = arg0->obj.rot.x;
            var_s0->unk_18C[7].y = arg0->obj.rot.y;
            var_s0->unk_18C[7].z = arg0->obj.rot.z;
        } while (var_s1_2 != 8);
        arg0->info.bonus = 0;
        arg0->unk_0CE = 0xA;
        temp_ft5 = (Rand_ZeroOne() - 0.5f) * 400.0f;
        arg0->unk_0B8 += 1;
        arg0->unk_124.x = temp_ft5 + 1000.0f;
        break;
    case 2:
        Math_SmoothStepToF(&arg0->obj.pos.z, gPlayer->unk_138, 1.0f, 10.0f, 0.0f);
        temp_fv1_2 = arg0->obj.pos.z;
        if (fabsf(temp_fv1_2 - gPlayer->unk_138) < arg0->unk_124.x) {
            func_E16C50_801A9728(arg0, 50.0f, 10.0f, 8);
            arg0->unk_0B8 = 3;
            arg0->vel.y = 30.0f;
        } else if (!(gFrameCount & 0xF)) {
            func_8007B8F8(arg0->obj.pos.x, D_80177940 + 30.0f, temp_fv1_2, 10.0f);
        }
        break;
    case 3:
        Math_SmoothStepToAngle(&arg0->obj.rot.x, 270.0f, 1.0f, 100.0f, 0.0001f);
        if (arg0->obj.rot.x == 270.0f) {
            temp_ft2 = (s32) (Rand_ZeroOne() * 10.0f);
            arg0->unk_054 = temp_ft2;
            arg0->unk_0B8 = 4;
            arg0->unk_114 = D_E16C50_801C01F8[temp_ft2];
        }
        break;
    case 4:
        Math_SmoothStepToF(&arg0->vel.y, 0.0f, 1.0f, 4.0f, 0.0001f);
        arg0->vel.z = gPlayer->vel.z;
        Math_SmoothStepToF(&arg0->obj.pos.z, gPlayer->unk_138 - arg0->unk_124.x, 0.1f, 100.0f, 0.0f);
        Math_SmoothStepToF(&arg0->obj.pos.y, arg0->unk_114, 1.0f, D_E16C50_801C0224[arg0->unk_054], 0.0f);
        arg0->unk_118 += 10.0f;
        arg0->vel.x = (f32) arg0->unk_054 * __cosf(arg0->unk_118 * 0.017453292f) * 0.1f;
        if ((arg0->unk_114 - 1.0f) <= arg0->obj.pos.y) {
            arg0->unk_0B8 = 5;
        }
        if (!(gFrameCount & 7)) {
            temp_fs1_2 = Rand_ZeroOne();
            temp_fs0_2 = Rand_ZeroOne();
            func_E16C50_801AC8A8(((temp_fs1_2 - 0.5f) * 100.0f) + arg0->obj.pos.x, ((temp_fs0_2 - 0.5f) * 100.0f) + arg0->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 100.0f) + arg0->obj.pos.z, 1.0f, 1);
        }
        break;
    case 5:
        arg0->vel.z = gPlayer->vel.z;
        Math_SmoothStepToF(&arg0->obj.pos.z, gPlayer->unk_138 - 1000.0f, 0.1f, 100.0f, 0.0f);
        Math_SmoothStepToF(&arg0->vel.x, 0.0f, 1.0f, 2.0f, 0.001f);
        Math_SmoothStepToAngle(&arg0->obj.rot.x, D_E16C50_801C025C[arg0->unk_050], 1.0f, 20.0f, 0.0f);
        temp_v0_2 = arg0->unk_050;
        temp_t7 = temp_v0_2 + 1;
        if (arg0->obj.rot.x == D_E16C50_801C025C[temp_v0_2]) {
            arg0->unk_050 = temp_t7;
            if (temp_t7 >= 2) {
                temp_fs0_3 = gPlayer->pos.x - arg0->obj.pos.x;
                sp8C = gPlayer->pos.y - arg0->obj.pos.y;
                temp_fs1_3 = gPlayer->unk_138 - arg0->obj.pos.z;
                arg0->unk_11C = Math_RadToDeg(Math_Atan2F(temp_fs0_3, temp_fs1_3));
                arg0->unk_120 = Math_RadToDeg(-Math_Atan2F(sp8C, sqrtf((temp_fs0_3 * temp_fs0_3) + (temp_fs1_3 * temp_fs1_3))));
                Matrix_RotateY(gCalcMatrix, arg0->unk_11C * 0.017453292f, 0U);
                Matrix_RotateX(gCalcMatrix, arg0->unk_120 * 0.017453292f, 1U);
                sp80 = 0.0f;
                sp7C = 0.0f;
                sp84 = 40.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp7C, &sp70);
                arg0->vel.x = (bitwise f32) sp70;
                arg0->vel.y = sp70.y;
                arg0->unk_0B8 = 6;
                arg0->vel.z = sp70.z;
            }
        }
        break;
    case 6:
        Math_SmoothStepToAngle(&arg0->obj.rot.x, arg0->unk_120, 1.0f, 5.0f, 0.0f);
        Math_SmoothStepToAngle(&arg0->obj.rot.y, arg0->unk_11C, 1.0f, 5.0f, 0.0f);
        if (!(gFrameCount & 3)) {
            temp_fs1_4 = Rand_ZeroOne();
            temp_fs0_4 = Rand_ZeroOne();
            func_E16C50_801AC8A8(((temp_fs1_4 - 0.5f) * 100.0f) + arg0->obj.pos.x, ((temp_fs0_4 - 0.5f) * 100.0f) + arg0->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 100.0f) + arg0->obj.pos.z, 1.0f, 1);
        }
        break;
    case 7:
        sp50 = &arg0->unk_18C[8];
        sp54 = arg0->unk_18C;
        var_s1_3 = 0;
        var_s0_2 = arg0;
        do {
            temp_fs1_5 = Rand_ZeroOne();
            temp_fs0_5 = Rand_ZeroOne();
            func_E16C50_801A9448(sp54, (bitwise f32) sp50, (bitwise Object_2F4 *) ((temp_fs1_5 - 0.5f) * 20.0f), (bitwise void *) (temp_fs0_5 * 5.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, 0x31, arg0->scale, 0xC8, var_s1_3);
            func_8007BC7C(var_s0_2->unk_18C[0].x, var_s0_2->unk_18C[0].y, var_s0_2->unk_18C[0].z + 100.0f, 6.0f);
            var_s1_3 += 1;
            sp50 += 0xC;
            sp54 += 0xC;
            var_s0_2 += 0xC;
        } while (var_s1_3 != 8);
        arg0->unk_044 = 0;
        func_80066254(arg0);
        func_800815DC();
        Object_Kill(&arg0->obj, &arg0->sfxPos);
        func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 6.0f);
        break;
    }
    if (arg0->unk_0B8 >= 2) {
        if (arg0->unk_0B8 < 3) {
            arg0->unk_0B6 += 1;
        } else {
            arg0->unk_0B6 += 3;
        }
        if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_6005954)) {
            arg0->unk_0B6 = 0;
        }
    }
    if ((arg0->unk_0D0 != 0) && (temp_a0 = arg0->unk_0CE, arg0->unk_0D0 = 0, (temp_a0 != 0))) {
        temp_v1 = arg0->unk_0D6;
        if (temp_v1 == 0x1F) {
            arg0->unk_0CE = temp_a0 - temp_v1;
            arg0->info.bonus = 1;
            if (arg0->unk_0CE <= 0) {
                goto block_65;
            }
        } else {
            var_s1_4 = 0;
            if (temp_v1 == 0x1E) {
                var_v0 = gObjects2F4;
                do {
                    if ((var_v0->obj.status == (u8) 2) && (var_v0->obj.id == 0x105) && (var_v0->unk_0B8 == 1) && (var_s1_4 != arg0->index) && (fabsf(var_v0->obj.pos.x - arg0->obj.pos.x) <= 300.0f) && (fabsf(var_v0->obj.pos.z - arg0->obj.pos.z) <= 300.0f)) {
                        var_v0->unk_0B8 = 2;
                    }
                    temp_v0_3 = var_v0 + 0x2F4;
                    if ((var_v0->unk2F4 == (u8) 2) && (temp_v0_3->obj.id == 0x105) && (temp_v0_3->unk_0B8 == 1) && ((var_s1_4 + 1) != arg0->index) && (fabsf(temp_v0_3->obj.pos.x - arg0->obj.pos.x) <= 300.0f) && (fabsf(temp_v0_3->obj.pos.z - arg0->obj.pos.z) <= 300.0f)) {
                        temp_v0_3->unk_0B8 = 2;
                    }
                    var_s1_4 += 2;
                    var_v0 = temp_v0_3 + 0x2F4;
                } while (var_s1_4 != 0x3C);
                return;
            }
            temp_v0_4 = arg0->unk_0B8;
            if ((temp_v0_4 >= 3) && (temp_v0_4 < 5)) {
                arg0->unk_0CE = temp_a0 - temp_v1;
                arg0->info.bonus = 1;
                arg0->timer_0C6 = 0xF;
                if (arg0->unk_0CE <= 0) {
block_65:
                    arg0->unk_0CE = 0;
                }
            }
        }
    }
}

s32 func_E16C50_801B5C18(s32 arg0, u32 *arg1, Vec3f *arg2, Vec3f *arg3, void *arg4) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    Vec3f sp58;
    Vec3f sp4C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    s32 var_v0;

    sp6C = 1.0f;
    sp68 = 1.0f;
    sp64 = 1.0f;
    sp4C.x = D_E16C50_801C02B0.unk0;
    sp4C.y = D_E16C50_801C02B0.unk4;
    sp4C.z = D_E16C50_801C02B0.unk8;
    if (!(arg4->unkC6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x39);
    } else if (arg0 >= 7) {
        if (arg0 >= 9) {
            goto block_6;
        }
    } else {
block_6:
        RCP_SetupDL(&gMasterDisp, 0x3D);
        temp_v0 = gMasterDisp;
        gMasterDisp = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = 0xFF0000FF;
    }
    switch (arg0) {                                 /* irregular */
    case 7:
        RCP_SetupDL(&gMasterDisp, 0x40);
        temp_v0_2 = gMasterDisp;
        gMasterDisp = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_v0_2->words.w1 = ((s32) arg4->unk124 & 0xFF) | ~0xFF;
        temp_v0_3 = gMasterDisp;
        gMasterDisp = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0x2000;
        temp_v0_3->words.w0 = 0xB6000000;
        sp6C = arg4->unk118;
        sp68 = arg4->unk11C;
        sp64 = arg4->unk120;
        break;
    case 8:
        RCP_SetupDL(&gMasterDisp, 0x3D);
        temp_v0_4 = gMasterDisp;
        gMasterDisp = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFA000000;
        temp_v0_4->words.w1 = ((s32) arg4->unk124 & 0xFF) | ~0xFF;
        break;
    }
    var_v0 = 0;
    if (sp6C != 1.0f) {
        Matrix_Translate(gCalcMatrix, arg2->x, arg2->y, arg2->z, (u8) 1);
        Matrix_RotateZ(gCalcMatrix, arg3->z * 0.017453292f, 1U);
        Matrix_RotateY(gCalcMatrix, arg3->y * 0.017453292f, 1U);
        Matrix_RotateX(gCalcMatrix, arg3->x * 0.017453292f, 1U);
        if (*arg1 != 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp58);
            func_8005F670(&sp58);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1U);
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, sp6C, sp68, sp64, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v0_5 = gMasterDisp;
            gMasterDisp = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0x06000000;
            temp_v0_5->words.w1 = *arg1;
            Matrix_Pop(&gGfxMatrix);
        }
        var_v0 = 1;
    }
    return var_v0;
}

void func_E16C50_801B5F68(s32 arg0, Vec3f *arg1, void *arg2) {
    Vec3f sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    Vec3f sp24;

    sp3C.x = D_E16C50_801C02BC.unk0;
    sp3C.y = D_E16C50_801C02BC.unk4;
    sp3C.z = D_E16C50_801C02BC.unk8;
    if ((arg2->unkCE == 0) || (arg0 == 7)) {
        switch (arg0) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp3C, arg2 + 0x18C);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1F8);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp3C, arg2 + 0x198);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x204);
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp3C, arg2 + 0x1A4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x210);
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp3C, arg2 + 0x1B0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x21C);
            return;
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp3C, arg2 + 0x1BC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x228);
            return;
        case 6:
            Matrix_MultVec3f(gCalcMatrix, &sp3C, arg2 + 0x1C8);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x234);
            return;
        case 7:
            sp30 = arg2->unk140;
            sp34 = 0.0f;
            sp38 = 0.0f;
            Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp30, &sp24);
            arg2->unk134 = (f32) sp24;
            arg2->unk138 = (f32) D_80177940;
            arg2->unk13C = sp24.z;
            return;
        case 8:
            Matrix_MultVec3f(gCalcMatrix, &sp3C, arg2 + 0x1D4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x240);
            return;
        case 9:
            Matrix_MultVec3f(gCalcMatrix, &sp3C, arg2 + 0x1E0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x24C);
            return;
        case 16:
            Matrix_MultVec3f(gCalcMatrix, &sp3C, arg2 + 0x1EC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x258);
            break;
        }
    } else {
    default:
    }
}

void func_E16C50_801B619C(Object_2F4 *arg0) {
    Vec3f sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    f32 temp_fv0;

    Matrix_Push(&gCalcMatrix);
    Matrix_Push(&gGfxMatrix);
    temp_fv0 = arg0->scale;
    Matrix_Scale(gCalcMatrix, temp_fv0, temp_fv0, temp_fv0, (u8) 1);
    Animation_GetFrameData(&D_6002628, (s32) arg0->unk_0B6, &sp40);
    Animation_DrawSkeleton(3, &D_6002874, &sp40, (s32 (*)(s32, Gfx **, Vec3f *, Vec3f *, void *)) func_E16C50_801B5C18, func_E16C50_801B5F68, arg0, gCalcMatrix);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Pop(&gCalcMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, arg0->unk_134, arg0->unk_138, arg0->unk_13C, (u8) 1);
    Matrix_Scale(gGfxMatrix, arg0->unk_124.y, arg0->unk_124.z, arg0->unk_130, (u8) 1);
    RCP_SetupDL(&gMasterDisp, 0x31);
    temp_v0 = gMasterDisp;
    gMasterDisp = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA000000;
    temp_v0->words.w1 = (arg0->unk_080 & 0xFF) | ~0xFF;
    temp_v0_2 = gMasterDisp;
    gMasterDisp = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFB000000;
    temp_v0_2->words.w1 = (arg0->unk_080 & 0xFF) | 0x7F7F0000;
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v0_3 = gMasterDisp;
    gMasterDisp = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0x06000000;
    temp_v0_3->words.w1 = (u32) D_1024AC0;
    Matrix_Pop(&gGfxMatrix);
}

void func_E16C50_801B6344(Object_2F4 *arg0) {
    s32 temp_ft3;

    temp_ft3 = (s32) arg0->obj.rot.z;
    arg0->unk_0CE = 0xC8;
    arg0->unk_124.x = 255.0f;
    arg0->unk_144 = arg0->obj.rot.y;
    arg0->unk_084 = (s32) 255.0f;
    arg0->unk_090 = temp_ft3;
    arg0->unk_088 = temp_ft3;
}

void func_E16C50_801B638C(Object_2F4 *arg0) {
    f32 spB4;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    Vec3f sp80;
    f32 sp6C;
    Object_2F4 *temp_v0_2;
    Object_2F4 *var_s0;
    Object_2F4 *var_v0;
    Vec3f *temp_s0;
    Vec3f *var_s3;
    Vec3f *var_s4;
    f32 *var_s0_2;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 var_fs0;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_ft0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;

    var_s2 = 0;
    var_s0 = arg0;
    var_s3 = arg0->unk_18C;
    if (arg0->unk_0CE == 0) {
        var_s4 = &arg0->unk_18C[9];
        do {
            temp_fs1 = Rand_ZeroOne();
            temp_fs0 = Rand_ZeroOne();
            func_E16C50_801A9448(var_s3, (bitwise f32) var_s4, (bitwise Object_2F4 *) ((temp_fs1 - 0.5f) * 20.0f), (bitwise void *) (temp_fs0 * 5.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, 0x30, arg0->scale, 0xC8, var_s2);
            func_8007BC7C(var_s0->unk_18C[0].x, var_s0->unk_18C[0].y, var_s0->unk_18C[0].z, 10.0f);
            var_s2 += 1;
            var_s0 += 0xC;
            var_s3 += 0xC;
            var_s4 += 0xC;
        } while (var_s2 < 9);
        func_800815DC();
        func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 150.0f, 10.0f);
        func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 150.0f, 10.0f);
        func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 150.0f, 10.0f);
        var_s2_2 = 0;
        do {
            sp6C = Rand_ZeroOne();
            temp_fs1_2 = Rand_ZeroOne();
            temp_fs0_2 = Rand_ZeroOne();
            temp_fv1 = (f32) var_s2_2;
            func_80081A8C((sp6C * (temp_fv1 * 15.0f)) + arg0->obj.pos.x, (temp_fs1_2 * (temp_fv1 * 3.0f)) + arg0->obj.pos.y, (temp_fs0_2 * (temp_fv1 * 5.0f)) + arg0->obj.pos.z, Rand_ZeroOne() + 1.0f, 7);
            var_s2_2 += 1;
        } while (var_s2_2 != 5);
        arg0->unk_044 = 2;
        if (arg0->unk_090 != 0) {
            arg0->unk_044 = 0xE;
        }
        func_80066254(arg0);
        temp_s0 = &arg0->sfxPos;
        Object_Kill(&arg0->obj, temp_s0);
        Audio_PlaySfx(0x1903001DU, temp_s0, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        func_8007A6F0(&arg0->obj.pos, 0x29038090);
    }
    temp_fv0 = arg0->obj.pos.y;
    arg0->unk_124.y = (temp_fv0 * 0.01f) + 2.5f;
    arg0->unk_124.z = (temp_fv0 * 0.003f) + 0.8f;
    arg0->unk_130 = (temp_fv0 * 0.001f) + 0.8f;
    temp_ft0 = (s32) ((temp_fv0 * -0.24f) + 150.0f);
    arg0->unk_080 = temp_ft0;
    if ((f32) temp_ft0 < 30.0f) {
        arg0->unk_080 = 0x1E;
    }
    temp_fv1_2 = arg0->obj.pos.y * 0.0032f;
    temp_fa0 = arg0->obj.pos.y + 300.0f;
    arg0->unk_140 = temp_fa0;
    arg0->unk_118 = temp_fv1_2 + 1.0f;
    arg0->unk_11C = temp_fv1_2 + 1.5f;
    arg0->unk_120 = temp_fv1_2 + 2.0f;
    if (temp_fa0 > 1200.0f) {
        arg0->unk_140 = 1200.0f;
    }
    arg0->unk_0B6 += 1;
    var_s2_3 = 1;
    var_s0_2 = &arg0->obj.pos.z;
    if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_6002628)) {
        arg0->unk_0B6 = 0;
    }
    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        arg0->unk_18C[0].x = arg0->obj.pos.x;
        arg0->unk_18C[0].y = arg0->obj.pos.y;
        arg0->unk_18C[0].z = arg0->obj.pos.z;
        arg0->unk_18C[9].z = arg0->obj.rot.z;
        arg0->unk_18C[9].x = arg0->obj.rot.x;
        arg0->unk_18C[9].y = arg0->obj.rot.y;
        do {
            var_s2_3 += 4;
            var_s0_2 += 0x30;
            var_s0_2->unk15C = (f32) arg0->obj.pos.x;
            var_s0_2->unk160 = (f32) arg0->obj.pos.y;
            var_s0_2->unk164 = (f32) arg0->obj.pos.z;
            var_s0_2->unk1C8 = (f32) arg0->obj.rot.x;
            var_s0_2->unk1CC = (f32) arg0->obj.rot.y;
            var_s0_2->unk1D0 = (f32) arg0->obj.rot.z;
            var_s0_2->unk168 = (f32) arg0->obj.pos.x;
            var_s0_2->unk16C = (f32) arg0->obj.pos.y;
            var_s0_2->unk170 = (f32) arg0->obj.pos.z;
            var_s0_2->unk1D4 = (f32) arg0->obj.rot.x;
            var_s0_2->unk1D8 = (f32) arg0->obj.rot.y;
            var_s0_2->unk1DC = (f32) arg0->obj.rot.z;
            var_s0_2->unk174 = (f32) arg0->obj.pos.x;
            var_s0_2->unk178 = (f32) arg0->obj.pos.y;
            var_s0_2->unk17C = (f32) arg0->obj.pos.z;
            var_s0_2->unk1E0 = (f32) arg0->obj.rot.x;
            var_s0_2->unk1E4 = (f32) arg0->obj.rot.y;
            var_s0_2->unk1E8 = (f32) arg0->obj.rot.z;
            var_s0_2->unk180 = (f32) arg0->obj.pos.x;
            var_s0_2->unk184 = (f32) arg0->obj.pos.y;
            var_s0_2->unk188 = (f32) arg0->obj.pos.z;
            var_s0_2->unk1EC = (f32) arg0->obj.rot.x;
            var_s0_2->unk1F0 = (f32) arg0->obj.rot.y;
            var_s0_2->unk1F4 = (f32) arg0->obj.rot.z;
        } while (var_s2_3 != 9);
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0U);
        sp90 = 0.0f;
        sp8C = 0.0f;
        sp94 = -1400.0f;
        if (arg0->unk_088 != 0) {
            sp94 = -5000.0f;
        }
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp8C, &sp80);
        arg0->unk_150 = arg0->obj.pos.x + (bitwise f32) sp80;
        arg0->unk_0B8 = 1;
        arg0->unk_154 = arg0->obj.pos.z + sp80.z;
        break;
    case 1:
        if (arg0->timer_0BC == (u16) 1) {
            arg0->unk_08C = 1;
        }
        if (arg0->unk_08C != 0) {
            if ((gPlayer->unk_138 + 300.0f) < arg0->obj.pos.z) {
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
        } else {
            if (!(gFrameCount & 1)) {
                var_v0 = gObjects2F4;
                var_s2_4 = 0;
                do {
                    var_s2_4 += 2;
                    if ((var_v0->obj.status == (u8) 2) && (var_v0->obj.id == 0x105) && (var_v0->unk_0B8 == (s16) 1) && (fabsf(var_v0->obj.pos.x - arg0->unk_134) <= (arg0->unk_124.y * 48.0f)) && (var_v0->obj.pos.y <= (arg0->obj.pos.y + 50.0f)) && (fabsf(var_v0->obj.pos.z - arg0->unk_13C) <= (arg0->unk_130 * 125.0f))) {
                        var_v0->unk_0B8 = 2;
                    }
                    temp_v0_2 = var_v0 + 0x2F4;
                    if ((var_v0->unk2F4 == (u8) 2) && (temp_v0_2->obj.id == 0x105) && (temp_v0_2->unk_0B8 == (s16) 1) && (fabsf(temp_v0_2->obj.pos.x - arg0->unk_134) <= (arg0->unk_124.y * 48.0f)) && (temp_v0_2->obj.pos.y <= (arg0->obj.pos.y + 50.0f)) && (fabsf(temp_v0_2->obj.pos.z - arg0->unk_13C) <= (arg0->unk_130 * 125.0f))) {
                        temp_v0_2->unk_0B8 = 2;
                    }
                    var_v0 = temp_v0_2 + 0x2F4;
                } while (var_s2_4 != 0x3C);
            }
            temp_fv1_3 = arg0->obj.pos.x - arg0->unk_150;
            temp_fa1 = arg0->obj.pos.z - arg0->unk_154;
            sp98 = sqrtf((temp_fv1_3 * temp_fv1_3) + (temp_fa1 * temp_fa1));
            arg0->unk_148 -= 20.0f;
            arg0->unk_14C += 5.0f;
            spB4 = __sinf(arg0->unk_148 * 0.017453292f) * sp98 * 0.1f;
            temp_fs1_3 = __cosf(arg0->unk_14C * 0.017453292f) * sp98 * 0.8f;
            temp_fs0_3 = __cosf(arg0->obj.rot.y * 0.017453292f) * temp_fs1_3;
            temp_fs0_4 = Math_Atan2F((arg0->obj.pos.x - arg0->unk_150) + temp_fs0_3, (arg0->obj.pos.z - arg0->unk_154) + (-__sinf(arg0->obj.rot.y * 0.017453292f) * temp_fs1_3));
            temp_fs1_4 = -Math_Atan2F(arg0->obj.pos.y - spB4, sp98);
            Math_SmoothStepToAngle(&arg0->obj.rot.y, Math_RadToDeg(temp_fs0_4), 0.1f, 100.0f, 0.001f);
            var_fs0 = Math_RadToDeg(temp_fs1_4);
            if (arg0->obj.pos.y >= 1000.0f) {
                var_fs0 = 0.0f;
            }
            Math_SmoothStepToAngle(&arg0->obj.rot.x, var_fs0, 0.1f, 100.0f, 0.001f);
            Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1U);
            sp90 = 0.0f;
            sp8C = 0.0f;
            sp94 = 10.0f;
            if (arg0->unk_088 != 0) {
                sp94 = 30.0f;
            }
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp8C, &sp80);
            arg0->vel.x = (bitwise f32) sp80;
            arg0->vel.y = sp80.y;
            arg0->vel.z = sp80.z;
            if (arg0->unk_08C != 0) {
                arg0->vel.z = 0.0f;
                arg0->vel.y = 0.0f;
                arg0->vel.x = 0.0f;
            }
            if ((arg0->unk_088 != 0) && (arg0->obj.pos.z < (gPlayer->unk_138 - 2000.0f))) {
                arg0->unk_088 = 0;
                arg0->timer_0BC = 0x1F4;
            }
        }
        break;
    }
    if (arg0->unk_0D0 != 0) {
        temp_v0_3 = arg0->unk_0CE;
        arg0->unk_0D0 = 0;
        if ((temp_v0_3 != 0) && (arg0->unk_0D2 == 0)) {
            arg0->timer_0C6 = 0x1E;
            arg0->unk_0CE = temp_v0_3 - arg0->unk_0D6;
            Audio_PlaySfx(0x2903408FU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (arg0->unk_0CE <= 0) {
                arg0->unk_0CE = 0;
                func_80077240(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 200.0f, 3);
                gHitCount += 4;
                D_80177850 = 0xF;
            }
        }
    }
}

void func_E16C50_801B6E54(Object_2F4 *arg0) {
    s32 var_v0;
    void (**var_v1)(Object *);

    arg0->unk_18C[0].x = arg0->obj.pos.x;
    arg0->unk_18C[0].y = arg0->obj.pos.y;
    arg0->unk_18C[0].z = arg0->obj.pos.z;
    arg0->unk_18C[0xF].x = arg0->obj.rot.x;
    arg0->unk_18C[0xF].y = arg0->obj.rot.y;
    arg0->unk_18C[0xF].z = arg0->obj.rot.z;
    arg0->unk_18C[0x10].z = arg0->obj.rot.z;
    arg0->unk_18C[0x10].y = arg0->obj.rot.y;
    arg0->unk_18C[0x10].x = arg0->obj.rot.x;
    arg0->unk_18C[1].z = arg0->obj.pos.z;
    arg0->unk_18C[1].y = arg0->obj.pos.y;
    arg0->unk_18C[1].x = arg0->obj.pos.x;
    var_v0 = 3;
    var_v1 = &arg0->info.action;
    arg0->unk_18C[2].x = arg0->obj.pos.x;
    arg0->unk_18C[2].y = arg0->obj.pos.y;
    arg0->unk_18C[2].z = arg0->obj.pos.z;
    arg0->unk_18C[0x11].x = arg0->obj.rot.x;
    arg0->unk_18C[0x11].y = arg0->obj.rot.y;
    arg0->unk_18C[0x11].z = arg0->obj.rot.z;
    do {
        var_v0 += 4;
        var_v1 += 0x30;
        var_v1->unk15C = (f32) arg0->obj.pos.x;
        var_v1->unk160 = (f32) arg0->obj.pos.y;
        var_v1->unk164 = (f32) arg0->obj.pos.z;
        var_v1->unk210 = (f32) arg0->obj.rot.x;
        var_v1->unk214 = (f32) arg0->obj.rot.y;
        var_v1->unk218 = (f32) arg0->obj.rot.z;
        var_v1->unk168 = (f32) arg0->obj.pos.x;
        var_v1->unk16C = (f32) arg0->obj.pos.y;
        var_v1->unk170 = (f32) arg0->obj.pos.z;
        var_v1->unk21C = (f32) arg0->obj.rot.x;
        var_v1->unk220 = (f32) arg0->obj.rot.y;
        var_v1->unk224 = (f32) arg0->obj.rot.z;
        var_v1->unk174 = (f32) arg0->obj.pos.x;
        var_v1->unk178 = (f32) arg0->obj.pos.y;
        var_v1->unk17C = (f32) arg0->obj.pos.z;
        var_v1->unk228 = (f32) arg0->obj.rot.x;
        var_v1->unk22C = (f32) arg0->obj.rot.y;
        var_v1->unk230 = (f32) arg0->obj.rot.z;
        var_v1->unk180 = (f32) arg0->obj.pos.x;
        var_v1->unk184 = (f32) arg0->obj.pos.y;
        var_v1->unk188 = (f32) arg0->obj.pos.z;
        var_v1->unk234 = (f32) arg0->obj.rot.x;
        var_v1->unk238 = (f32) arg0->obj.rot.y;
        var_v1->unk23C = (f32) arg0->obj.rot.z;
    } while (var_v0 != 0xF);
    arg0->unk_0CE = 0;
    if (arg0->obj.rot.z != 0.0f) {
        arg0->unk_0B8 = 1;
        arg0->obj.rot.z = 0.0f;
    }
    arg0->unk_124.x = arg0->obj.pos.z;
}

void func_E16C50_801B6FF8(Object_2F4 *arg0) {
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    Vec3f sp90;
    Object_2F4 *var_s0;
    Vec3f *var_s2;
    Vec3f *var_s3;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 var_fs0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;

    if (arg0->unk_0CE == -0x64) {
        arg0->unk_044 = 2;
        func_80066254(arg0);
        var_s1 = 0;
        var_s0 = arg0;
        var_s2 = arg0->unk_18C;
        var_s3 = &arg0->unk_18C[0xF];
        do {
            temp_fs0 = Rand_ZeroOne();
            temp_fs1 = Rand_ZeroOne();
            func_E16C50_801A9448(var_s2, (bitwise f32) var_s3, (bitwise Object_2F4 *) ((temp_fs0 - 0.5f) * 20.0f), (bitwise void *) (temp_fs1 * 5.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, 0x33, arg0->scale, 0xC8, var_s1);
            func_800815DC();
            func_8007D0E0(var_s0->unk_18C[0].x, var_s0->unk_18C[0].y, var_s0->unk_18C[0].z + 100.0f, 6.0f);
            var_s1 += 1;
            var_s0 += 0xC;
            var_s2 += 0xC;
            var_s3 += 0xC;
        } while (var_s1 != 0xF);
        Object_Kill(&arg0->obj, &arg0->sfxPos);
        func_8007A6F0(&arg0->obj.pos, 0x29038090);
    }
    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        if (arg0->timer_0BC == 0) {
            arg0->timer_0BC = 0xC8;
            arg0->unk_118 = ((Rand_ZeroOne() - 0.5f) * 800.0f) + gPlayer->pos.x;
            arg0->unk_11C = (Rand_ZeroOne() * 100.0f) + (gPlayer->pos.y + 50.0f);
            arg0->unk_120 = gPlayer->unk_138 - 1500.0f;
            if (arg0->unk_118 > 700.0f) {
                arg0->unk_118 = 700.0f;
            }
            if (arg0->unk_118 < -700.0f) {
                arg0->unk_118 = -700.0f;
            }
            if (Rand_ZeroOne() < 0.2f) {
                arg0->unk_120 = gPlayer->unk_138 - 800.0f;
                arg0->unk_118 = gPlayer->pos.x;
                arg0->unk_11C = gPlayer->pos.y + 50.0f;
            }
            if (fabsf(arg0->unk_124.x - arg0->obj.pos.z) >= 20000.0f) {
                arg0->unk_120 = -10000.0f;
            }
        }
        temp_fs1_2 = arg0->unk_118 - arg0->obj.pos.x;
        arg0->unk_120 += gPlayer->vel.z;
        temp_fs2 = arg0->unk_11C - arg0->obj.pos.y;
        temp_fs0_2 = arg0->unk_120 - arg0->obj.pos.z;
        spA8 = Math_RadToDeg(Math_Atan2F(temp_fs1_2, temp_fs0_2));
        temp_fs0_3 = Math_RadToDeg(-Math_Atan2F(temp_fs2, sqrtf((temp_fs1_2 * temp_fs1_2) + (temp_fs0_2 * temp_fs0_2))));
        temp_fs2_2 = Math_SmoothStepToAngle(&arg0->obj.rot.y, spA8, 0.1f, 1.0f, 0.0f);
        Math_SmoothStepToAngle(&arg0->obj.rot.x, temp_fs0_3, 0.1f, 1.0f, 0.0f);
        var_fs0 = 340.0f;
        if (temp_fs2_2 < 0.0f) {
            var_fs0 = 20.0f;
        }
        Math_SmoothStepToAngle(&arg0->obj.rot.z, var_fs0, 0.1f, 1.0f, 0.0f);
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0U);
        Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1U);
        spA0 = 0.0f;
        sp9C = 0.0f;
        spA4 = 10.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp9C, &sp90);
        arg0->vel.x = (bitwise f32) sp90;
        arg0->vel.y = sp90.y;
        arg0->vel.z = sp90.z - 20.0f;
        break;
    case 1:
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0U);
        Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1U);
        sp9C = 0.0f;
        spA0 = 0.0f;
        spA4 = 19.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp9C, &sp90);
        arg0->vel.x = (bitwise f32) sp90;
        arg0->vel.y = sp90.y;
        arg0->vel.z = sp90.z;
        break;
    }
    var_s1_2 = 0;
    if (!(gFrameCount & 3)) {
        do {
            temp_fs0_4 = Rand_ZeroOne();
            temp_fs1_3 = Rand_ZeroOne();
            func_80081A8C(((temp_fs0_4 - 0.5f) * 70.0f) + arg0->obj.pos.x, ((temp_fs1_3 - 0.5f) * 70.0f) + arg0->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 70.0f) + arg0->obj.pos.z, 1.0f, 1);
            var_s1_2 += 1;
        } while (var_s1_2 != 3);
    }
    arg0->unk_0B6 += 1;
    if (Animation_GetFrameCount(&D_60260EC) < arg0->unk_0B6) {
        arg0->unk_0B6 = 0;
    }
    if (arg0->unk_0D0 != 0) {
        temp_v0_2 = arg0->unk_0CE;
        arg0->unk_0D0 = 0;
        var_s1_3 = 0;
        if (temp_v0_2 >= -0x63) {
            arg0->timer_0C6 = 0xF;
            arg0->unk_0CE = temp_v0_2 - arg0->unk_0D6;
            do {
                temp_fs0_5 = Rand_ZeroOne();
                temp_fs1_4 = Rand_ZeroOne();
                func_80081A8C(((temp_fs0_5 - 0.5f) * 70.0f) + arg0->unk_0D8.x, ((temp_fs1_4 - 0.5f) * 70.0f) + arg0->unk_0D8.y, ((Rand_ZeroOne() - 0.5f) * 70.0f) + arg0->unk_0D8.z, 1.0f, 1);
                var_s1_3 += 1;
            } while (var_s1_3 != 0xA);
            Audio_PlaySfx(0x2903408FU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (arg0->unk_0CE < -0x63) {
                arg0->unk_0CE = -0x64;
                func_80077240(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 200.0f, 3);
                gHitCount += 4;
                D_80177850 = 0xF;
            }
        }
    }
}

s32 func_E16C50_801B76EC(s32 arg0, Gfx **arg1, Vec3f *arg2, Vec3f *arg3, void *arg4) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = 0x2000;
    temp_v1->words.w0 = 0xB7000000;
    if ((arg0 >= 4) && (arg0 < 0xE)) {
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w1 = 0x2000;
        temp_v1_2->words.w0 = 0xB6000000;
    }
    return 0;
}

void func_E16C50_801B7754(s32 arg0, Vec3f *arg1, void *arg2) {
    Vec3f sp24;

    sp24.x = D_E16C50_801C02D8.unk0;
    sp24.y = D_E16C50_801C02D8.unk4;
    sp24.z = D_E16C50_801C02D8.unk8;
    if (arg2->unkCE == -0x64) {
        switch (arg0) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x18C);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x240);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x198);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x24C);
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1A4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x258);
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1B0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x264);
            return;
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1BC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x270);
            return;
        case 6:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1C8);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x27C);
            return;
        case 7:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1D4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x288);
            return;
        case 8:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1E0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x294);
            return;
        case 9:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1EC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2A0);
            return;
        case 10:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1F8);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2AC);
            return;
        case 11:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x204);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2B8);
            return;
        case 12:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x210);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2C4);
            return;
        case 13:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x21C);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2D0);
            return;
        case 22:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x228);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2DC);
            return;
        case 23:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x234);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2E8);
            break;
        }
    } else {
    default:
    }
}

void func_E16C50_801B7A24(Object_2F4 *arg0) {
    Vec3f sp30;
    Gfx *temp_v1;

    RCP_SetupDL(&gMasterDisp, 0x39);
    if (arg0->timer_0C6 & 1) {
        RCP_SetupDL(&gMasterDisp, 0x3D);
        temp_v1 = gMasterDisp;
        gMasterDisp = temp_v1 + 8;
        temp_v1->words.w0 = 0xFA000000;
        temp_v1->words.w1 = 0xFF0000FF;
    }
    Animation_GetFrameData(&D_60260EC, (s32) arg0->unk_0B6, &sp30);
    Animation_DrawSkeleton(3, &D_60263F8, &sp30, func_E16C50_801B76EC, func_E16C50_801B7754, arg0, gCalcMatrix);
}

void func_E16C50_801B7AF0(Object_2F4 *arg0) {
    f32 *var_v1;
    s32 var_v0;

    arg0->unk_124.x = 10.0f;
    arg0->unk_120 = -1000.0f;
    arg0->obj.pos.y = 150.0f;
    arg0->unk_11C = 30.0f;
    arg0->unk_18C[0xA].y = arg0->obj.rot.y;
    arg0->unk_18C[0].y = arg0->obj.pos.y;
    arg0->unk_18C[0xA].z = arg0->obj.rot.z;
    arg0->unk_18C[0xA].x = arg0->obj.rot.x;
    arg0->unk_18C[0].z = arg0->obj.pos.z;
    arg0->unk_18C[0].x = arg0->obj.pos.x;
    arg0->unk_124.y = 20.0f;
    arg0->unk_124.z = 20.0f;
    arg0->unk_0CE = 0x3C;
    var_v0 = 2;
    var_v1 = &arg0->obj.rot.z;
    arg0->unk_18C[1].x = arg0->obj.pos.x;
    arg0->unk_18C[1].z = arg0->obj.pos.z;
    arg0->unk_18C[0xB].x = arg0->obj.rot.x;
    arg0->unk_18C[0xB].z = arg0->obj.rot.z;
    arg0->unk_18C[1].y = arg0->obj.pos.y;
    arg0->unk_18C[0xB].y = arg0->obj.rot.y;
    do {
        var_v0 += 4;
        var_v1 += 0x30;
        var_v1->unk15C = (f32) arg0->obj.pos.x;
        var_v1->unk160 = (f32) arg0->obj.pos.y;
        var_v1->unk164 = (f32) arg0->obj.pos.z;
        var_v1->unk1D4 = (f32) arg0->obj.rot.x;
        var_v1->unk1D8 = (f32) arg0->obj.rot.y;
        var_v1->unk1DC = (f32) arg0->obj.rot.z;
        var_v1->unk168 = (f32) arg0->obj.pos.x;
        var_v1->unk16C = (f32) arg0->obj.pos.y;
        var_v1->unk170 = (f32) arg0->obj.pos.z;
        var_v1->unk1E0 = (f32) arg0->obj.rot.x;
        var_v1->unk1E4 = (f32) arg0->obj.rot.y;
        var_v1->unk1E8 = (f32) arg0->obj.rot.z;
        var_v1->unk174 = (f32) arg0->obj.pos.x;
        var_v1->unk178 = (f32) arg0->obj.pos.y;
        var_v1->unk17C = (f32) arg0->obj.pos.z;
        var_v1->unk1EC = (f32) arg0->obj.rot.x;
        var_v1->unk1F0 = (f32) arg0->obj.rot.y;
        var_v1->unk1F4 = (f32) arg0->obj.rot.z;
        var_v1->unk180 = (f32) arg0->obj.pos.x;
        var_v1->unk184 = (f32) arg0->obj.pos.y;
        var_v1->unk188 = (f32) arg0->obj.pos.z;
        var_v1->unk1F8 = (f32) arg0->obj.rot.x;
        var_v1->unk1FC = (f32) arg0->obj.rot.y;
        var_v1->unk200 = (f32) arg0->obj.rot.z;
    } while (var_v0 != 0xA);
}

void func_E16C50_801B7C78(Object_2F4 *arg0) {
    f32 spAC;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    Vec3f sp84;
    f32 sp70;
    Vec3f *sp6C;
    Vec3f *sp64;                                    /* compiler-managed */
    Vec3f *sp5C;
    Object_2F4 *var_s0;
    Object_2F4 *var_s0_2;
    Object_2F4 *var_v1;
    Object_2F4 *var_v1_2;
    Object_8C *temp_s0;
    Object_8C *temp_s0_3;
    Object_8C *temp_s0_4;
    Object_8C *temp_s0_5;
    Object_8C *temp_s0_6;
    Vec3f *temp_a0;
    Vec3f *var_a0_2;
    f32 *temp_s0_2;
    f32 *temp_s1;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fs0;
    f32 temp_fs0_10;
    f32 temp_fs0_11;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs0_6;
    f32 temp_fs0_7;
    f32 temp_fs0_8;
    f32 temp_fs0_9;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fs1_5;
    f32 temp_fs1_6;
    f32 temp_fs1_7;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_ft1;
    f32 temp_ft4;
    f32 temp_fv1;
    s16 temp_v0_2;
    s16 var_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_t4;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    u16 temp_v1_3;

    if (arg0->unk_0CE == 0) {
        var_s1 = 0;
        do {
            sp70 = Rand_ZeroOne();
            temp_fs1 = Rand_ZeroOne();
            temp_fs0 = Rand_ZeroOne();
            temp_fv1 = (f32) var_s1;
            func_80081A8C((sp70 * (temp_fv1 * 15.0f)) + arg0->obj.pos.x, (temp_fs1 * (temp_fv1 * 3.0f)) + arg0->obj.pos.y, (temp_fs0 * (temp_fv1 * 5.0f)) + arg0->obj.pos.z, (Rand_ZeroOne() * 0.5f) + 1.0f, 7);
            var_s1 += 1;
        } while (var_s1 < 0xA);
        sp64 = &arg0->unk_18C[0xA];
        sp6C = arg0->unk_18C;
        var_s1_2 = 0;
        var_s0 = arg0;
        do {
            temp_fs1_2 = Rand_ZeroOne();
            temp_fs0_2 = Rand_ZeroOne();
            func_E16C50_801A9448(sp6C, (bitwise f32) sp64, (bitwise Object_2F4 *) ((temp_fs1_2 - 0.5f) * 20.0f), (bitwise void *) (temp_fs0_2 * 5.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, 0x34, arg0->scale, 0xC8, var_s1_2);
            func_8007BC7C(var_s0->unk_18C[0].x, var_s0->unk_18C[0].y, var_s0->unk_18C[0].z + 100.0f, 6.0f);
            var_s1_2 += 1;
            sp64 += 0xC;
            sp6C += 0xC;
            var_s0 += 0xC;
        } while (var_s1_2 < 0xA);
        var_a0 = 0;
        var_v1 = arg0;
        do {
            temp_v0 = var_v1->unk_058;
            var_a0 += 4;
            temp_a1 = temp_v0 - 1;
            if (temp_v0 != 0) {
                temp_s0 = &gObjects8C[temp_a1];
                if ((temp_s0->obj.id == 0x18B) && (temp_s0->unk_4E == 2) && (temp_s0->timer_50 != 0)) {
                    temp_s0->unk_44 = 3;
                    var_v1->unk_058 = 0;
                }
            }
            var_v1 += 4;
        } while (var_a0 != 8);
        func_800815DC(var_a0, temp_a1, 0x18BU, 8);
        func_8007D0E0(arg0->unk_18C[7].x, arg0->unk_18C[7].y, arg0->unk_18C[7].z, 5.0f);
        arg0->unk_044 = 4;
        func_80066254(arg0);
        Object_Kill(&arg0->obj, &arg0->sfxPos);
        func_8007A6F0(&arg0->obj.pos, 0x29038090);
    }
    if (arg0->unk_0B8 != 6) {
        temp_fa0 = gPlayer->pos.x - arg0->obj.pos.x;
        spAC = temp_fa0;
        Math_SmoothStepToAngle(&arg0->obj.rot.y, Math_RadToDeg(Math_Atan2F(temp_fa0, gPlayer->unk_138 - arg0->obj.pos.z)), 1.0f, 5.0f, 0.001f);
    }
    if (((arg0->unk_0B8 >= 2) && (arg0->unk_0B8 < 4)) || (arg0->unk_0B8 >= 5)) {
        Math_SmoothStepToF(&arg0->unk_124.x, 10.0f, 0.2f, 20.0f, 0.0f);
        Math_SmoothStepToF(&arg0->unk_124.y, 20.0f, 0.2f, 20.0f, 0.0f);
        Math_SmoothStepToF(&arg0->unk_124.z, 20.0f, 0.2f, 20.0f, 0.0f);
    }
    if ((arg0->unk_0B8 >= 4) && (arg0->unk_0B8 < 5)) {
        Math_SmoothStepToF(&arg0->unk_124.x, 159.0f, 0.1f, 10.0f, 0.0f);
        Math_SmoothStepToF(&arg0->unk_124.y, 159.0f, 0.1f, 10.0f, 0.0f);
        Math_SmoothStepToF(&arg0->unk_124.z, 255.0f, 0.1f, 10.0f, 0.0f);
    }
    if (((arg0->unk_0B8 < 5) || (arg0->unk_0B8 == 7)) && (arg0->unk_0CE != 0) && !(gFrameCount & 0xF)) {
        func_8007B8F8(arg0->unk_18C[0x16].x, D_80177940, arg0->unk_18C[0x16].z, 5.0f);
    }
    Math_SmoothStepToF(&arg0->unk_118, arg0->unk_11C, 0.1f, 2.0f, 0.00001f);
    Math_SmoothStepToF(&arg0->obj.pos.z, arg0->unk_120 + (gPlayer->camEye.z - D_80177D20), 0.1f, arg0->unk_118, 0.00001f);
    if ((arg0->unk_0B8 == 1) && (fabsf(arg0->unk_130 - arg0->obj.pos.z) >= 10000.0f)) {
        arg0->unk_0B8 = 5;
        arg0->timer_0C0 = 0x14;
    }
    switch ((u32) arg0->unk_0B8) {
    case 0:
        temp_ft4 = Rand_ZeroOne() * 150.0f;
        arg0->unk_0B8 = 1;
        arg0->unk_130 = arg0->obj.pos.z;
        arg0->timer_0BE = (u16) (s32) (temp_ft4 + 100.0f);
        break;
    case 1:
        temp_a0 = &arg0->unk_124;
        temp_s0_2 = &arg0->unk_124.y;
        temp_s1 = &arg0->unk_124.z;
        if (arg0->timer_0BC != 0) {
            Math_SmoothStepToF(&temp_a0->x, 255.0f, 0.1f, 50.0f, 0.0f);
            Math_SmoothStepToF(temp_s0_2, 255.0f, 0.1f, 50.0f, 0.0f);
            Math_SmoothStepToF(temp_s1, 0.0f, 0.1f, 50.0f, 0.0f);
        } else {
            Math_SmoothStepToF(&temp_a0->x, 10.0f, 0.2f, 20.0f, 0.0f);
            Math_SmoothStepToF(temp_s0_2, 20.0f, 0.2f, 20.0f, 0.0f);
            Math_SmoothStepToF(temp_s1, 20.0f, 0.2f, 20.0f, 0.0f);
            if (arg0->timer_0BE == 0) {
                arg0->unk_054 = 1;
                arg0->unk_0B8 = 2;
            }
        }
        if (!(gFrameCount & 3)) {
            temp_fs1_3 = Rand_ZeroOne();
            temp_fs0_3 = Rand_ZeroOne();
            func_E16C50_801AC8A8(((temp_fs1_3 - 0.5f) * 120.0f) + arg0->unk_18C[7].x, ((temp_fs0_3 - 0.5f) * 50.0f) + arg0->unk_18C[7].y, ((Rand_ZeroOne() - 0.5f) * 100.0f) + (arg0->unk_18C[7].z + 100.0f), 1.0f, 0);
        }
        break;
    case 2:
        arg0->unk_0B6 += arg0->unk_054;
        var_s1_3 = 0;
        if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_6024F80)) {
            arg0->unk_0B6 = 0;
            arg0->timer_0BE = 0;
            if (arg0->unk_054 >= 2) {
                arg0->timer_0BE = 0x1E;
            }
            do {
                temp_fs1_4 = Rand_ZeroOne();
                temp_fs0_4 = Rand_ZeroOne();
                func_E16C50_801AC8A8(((temp_fs1_4 - 0.5f) * 120.0f) + arg0->unk_18C[7].x, ((temp_fs0_4 - 0.5f) * 50.0f) + arg0->unk_18C[7].y, ((Rand_ZeroOne() - 0.5f) * 100.0f) + (arg0->unk_18C[7].z + 100.0f), 2.0f, 0);
                var_s1_3 += 1;
            } while (var_s1_3 != 0xA);
            arg0->unk_0B8 = 3;
        }
        break;
    case 3:
        var_a0_2 = NULL;
        var_s0_2 = arg0;
        var_v1_2 = arg0;
        if (arg0->timer_0BE == 0) {
            sp5C = &arg0->sfxPos;
            do {
                sp6C = var_a0_2;
                sp64 = var_v1_2;
                temp_t4 = func_80081B24(var_s0_2->unk_18C[0x14].x, var_s0_2->unk_18C[0x14].y, var_a0_2, var_s0_2->unk_18C[0x14].z, 0.1f) + 1;
                var_a0_2 += 0xC;
                var_s0_2 += 0xC;
                var_v1_2 = (Object_2F4 *) &var_v1_2->obj.pos;
                var_v1_2->unk_054 = temp_t4;
            } while (var_a0_2 != (Vec3f *)0x18);
            arg0->timer_0C0 = 0xA;
            Audio_PlaySfx(0x2900208DU, sp5C, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->unk_0B8 = 4;
        }
        break;
    case 4:
        arg0->unk_064 += 1;
        if (arg0->timer_0C0 == 0) {
            Audio_KillSfx(&arg0->sfxPos);
            arg0->unk_0B6 += 1;
            if (Animation_GetFrameCount(&D_602AC28) < arg0->unk_0B6) {
                arg0->unk_0B6 = Animation_GetFrameCount(&D_6024F80) - 1;
                arg0->unk_0B8 = 7;
            }
        }
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0U);
        temp_v0_2 = arg0->unk_0B6;
        if ((temp_v0_2 < 0x15) && (arg0->unk_0B8 == 4)) {
            temp_v1 = arg0->unk_05C;
            if (temp_v1 != 0) {
                temp_a1_2 = temp_v1 - 1;
                if (temp_v0_2 == 0x14) {
                    temp_s0_3 = &gObjects8C[temp_a1_2];
                    temp_fa0_2 = gPlayer->pos.x - temp_s0_3->obj.pos.x;
                    sp5C = &arg0->sfxPos;
                    temp_fs0_5 = (gPlayer->unk_138 - 50.0f) - temp_s0_3->obj.pos.z;
                    spAC = temp_fa0_2;
                    temp_fs1_5 = gPlayer->pos.y - temp_s0_3->obj.pos.y;
                    temp_fs2 = Math_RadToDeg(Math_Atan2F(temp_fa0_2, temp_fs0_5));
                    temp_fs0_6 = Math_RadToDeg(-Math_Atan2F(temp_fs1_5, sqrtf((spAC * spAC) + (temp_fs0_5 * temp_fs0_5))));
                    Matrix_RotateY(gCalcMatrix, 0.017453292f * temp_fs2, 0U);
                    Matrix_RotateX(gCalcMatrix, 0.017453292f * temp_fs0_6, 1U);
                    sp94 = 0.0f;
                    sp90 = 0.0f;
                    sp98 = 30.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp90, &sp84);
                    temp_s0_3->unk_54.x = (bitwise f32) sp84;
                    temp_s0_3->unk_54.y = sp84.y;
                    temp_s0_3->unk_44 = 2;
                    temp_s0_3->timer_50 = 0x64;
                    temp_s0_3->unk_54.z = sp84.z;
                    arg0->unk_05C = 0;
                    Audio_PlaySfx(0x2900308CU, sp5C, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    temp_s0_4 = &gObjects8C[temp_a1_2];
                    temp_s0_4->obj.pos.x = arg0->unk_18C[0x15].x;
                    temp_s0_4->obj.pos.y = arg0->unk_18C[0x15].y;
                    temp_s0_4->obj.pos.z = arg0->unk_18C[0x15].z;
                }
            }
        }
        if ((arg0->unk_0B6 < 0x3A) && (arg0->unk_0B8 == 4)) {
            temp_v1_2 = arg0->unk_058;
            if (temp_v1_2 != 0) {
                temp_a1_3 = temp_v1_2 - 1;
                if (arg0->unk_0B6 == 0x39) {
                    temp_s0_5 = &gObjects8C[temp_a1_3];
                    temp_fa0_3 = gPlayer->pos.x - temp_s0_5->obj.pos.x;
                    spAC = temp_fa0_3;
                    temp_fs0_7 = (gPlayer->unk_138 - 50.0f) - temp_s0_5->obj.pos.z;
                    temp_fs1_6 = gPlayer->pos.y - temp_s0_5->obj.pos.y;
                    temp_fs2_2 = Math_RadToDeg(Math_Atan2F(temp_fa0_3, temp_fs0_7));
                    temp_fs0_8 = Math_RadToDeg(-Math_Atan2F(temp_fs1_6, sqrtf((spAC * spAC) + (temp_fs0_7 * temp_fs0_7))));
                    Matrix_RotateY(gCalcMatrix, 0.017453292f * temp_fs2_2, 0U);
                    Matrix_RotateX(gCalcMatrix, 0.017453292f * temp_fs0_8, 1U);
                    sp94 = 0.0f;
                    sp90 = 0.0f;
                    sp98 = 50.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp90, &sp84);
                    temp_s0_5->unk_54.x = (bitwise f32) sp84;
                    temp_s0_5->unk_54.y = sp84.y;
                    temp_s0_5->unk_44 = 2;
                    temp_s0_5->timer_50 = 0x64;
                    temp_s0_5->unk_54.z = sp84.z;
                    arg0->unk_058 = 0;
                } else {
                    temp_s0_6 = &gObjects8C[temp_a1_3];
                    temp_s0_6->obj.pos.x = arg0->unk_18C[0x14].x;
                    temp_s0_6->obj.pos.y = arg0->unk_18C[0x14].y;
                    temp_s0_6->obj.pos.z = arg0->unk_18C[0x14].z;
                }
            }
        }
        break;
    case 5:
        Math_SmoothStepToAngle(&arg0->obj.rot.x, 40.0f, 0.1f, 10.0f, 0.0f);
        arg0->unk_0B6 += 1;
        if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_6024F80)) {
            arg0->unk_0B6 = Animation_GetFrameCount(&D_6024F80) - 1;
        }
        if (arg0->timer_0C0 == 0) {
            temp_fs0_9 = gPlayer->unk_138 - arg0->obj.pos.z;
            temp_fs0_10 = Math_RadToDeg(-Math_Atan2F((gPlayer->pos.y - 50.0f) - arg0->obj.pos.y, sqrtf((spAC * spAC) + (temp_fs0_9 * temp_fs0_9))));
            Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, 0.017453292f * temp_fs0_10, 1U);
            sp98 = 40.0f;
            sp94 = 0.0f;
            sp90 = 0.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp90, &sp84);
            arg0->vel.x = (bitwise f32) sp84;
            arg0->vel.y = sp84.y;
            arg0->unk_0B8 = 6;
            arg0->vel.z = sp84.z;
        }
        break;
    case 6:
        arg0->unk_0B6 += 1;
        if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_6024F80)) {
            arg0->unk_0B6 = Animation_GetFrameCount(&D_6024F80) - 1;
        }
        Math_SmoothStepToAngle(&arg0->obj.rot.x, 30.0f, 0.1f, 10.0f, 0.0f);
        if (!(gFrameCount & 1)) {
            temp_fs1_7 = Rand_ZeroOne();
            temp_fs0_11 = Rand_ZeroOne();
            func_E16C50_801AC8A8(((temp_fs1_7 - 0.5f) * 120.0f) + arg0->unk_18C[7].x, ((temp_fs0_11 - 0.5f) * 50.0f) + arg0->unk_18C[7].y, ((Rand_ZeroOne() - 0.5f) * 100.0f) + arg0->unk_18C[7].z, 2.0f, 0);
        }
        break;
    case 7:
        arg0->unk_0B6 -= 1;
        if (arg0->unk_0B6 <= 0) {
            arg0->unk_0B6 = 0;
            temp_ft1 = Rand_ZeroOne() * 150.0f;
            arg0->unk_0B8 = 1;
            arg0->timer_0BE = (u16) (s32) (temp_ft1 + 100.0f);
        }
        break;
    }
    if (arg0->unk_050 != 0) {
        arg0->unk_0CE = 0;
    }
    if (arg0->unk_0D0 != 0) {
        arg0->unk_0D0 = 0;
        if (arg0->unk_0CE != 0) {
            temp_v1_3 = arg0->unk_0D6;
            arg0->info.bonus = 0;
            if (temp_v1_3 == 0x1F) {
                if (arg0->unk_0B8 >= 2) {
                    arg0->info.bonus = 1;
                    arg0->timer_0C6 = 0x1E;
                    arg0->unk_0CE -= temp_v1_3;
                }
                if (arg0->unk_0B8 == 1) {
                    arg0->info.bonus = 1;
                    arg0->unk_054 = 7;
                    arg0->unk_0B8 = 2;
                }
            } else if (arg0->unk_0B8 >= 2) {
                arg0->info.bonus = 1;
                arg0->timer_0C6 = 0x1E;
                arg0->unk_0CE -= temp_v1_3;
                Audio_PlaySfx(0x2903408FU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                arg0->timer_0BC = 0x32;
            }
            if (arg0->unk_0CE <= 0) {
                arg0->unk_0CE = 0;
            }
        }
    }
}

s32 func_E16C50_801B8C50(s32 arg0, Gfx **arg1, Vec3f *arg2, Vec3f *arg3, void *arg4) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    u16 var_a0;

    RCP_SetupDL(&gMasterDisp, 0x3A);
    var_a0 = arg4->unkC6;
    if (var_a0 & 1) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        temp_v1 = gMasterDisp;
        gMasterDisp = temp_v1 + 8;
        temp_v1->words.w0 = 0xFA000000;
        temp_v1->words.w1 = 0xFF0000FF;
        var_a0 = arg4->unkC6;
    }
    if ((var_a0 == 0) && ((arg4->unk12C <= 254.0f) || (arg4->unkB8 >= 4))) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFA000000;
        temp_v1_2->words.w1 = (((s32) arg4->unk12C & 0xFF) << 8) | ((s32) arg4->unk124 << 0x18) | (((s32) arg4->unk128 & 0xFF) << 0x10) | 0xFF;
    }
    return 0;
}

void func_E16C50_801B8D7C(s32 arg0, Vec3f *arg1, void *arg2) {
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f sp34;
    Vec3f sp28;

    sp4C.x = D_E16C50_801C02E4.unk0;
    sp4C.y = D_E16C50_801C02E4.unk4;
    sp4C.z = D_E16C50_801C02E4.unk8;
    sp40.x = D_E16C50_801C02F0.unk0;
    sp40.y = D_E16C50_801C02F0.unk4;
    sp40.z = D_E16C50_801C02F0.unk8;
    sp34.x = D_E16C50_801C02FC.unk0;
    sp34.y = D_E16C50_801C02FC.unk4;
    sp34.z = D_E16C50_801C02FC.unk8;
    sp28.x = D_E16C50_801C0308.unk0;
    sp28.y = D_E16C50_801C0308.unk4;
    sp28.z = D_E16C50_801C0308.unk8;
    switch (arg0) {
    case 1:
        if (arg2->unkCE == 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, arg2 + 0x18C);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x204);
            return;
        }
        Matrix_MultVec3f(gCalcMatrix, &sp40, arg2 + 0x27C);
        Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2A0);
        return;
    case 2:
        if (arg2->unkCE == 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, arg2 + 0x198);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x210);
            return;
        }
    default:
        return;
    case 3:
        if (arg2->unkCE == 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, arg2 + 0x1A4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x21C);
            return;
        }
        break;
    case 4:
        if (arg2->unkCE == 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, arg2 + 0x1B0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x228);
            return;
        }
        Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x288);
        Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2AC);
        return;
    case 5:
        if (arg2->unkCE == 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, arg2 + 0x1BC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x234);
            return;
        }
        break;
    case 6:
        if (arg2->unkCE == 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, arg2 + 0x1C8);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x240);
            return;
        }
        break;
    case 9:
        if (arg2->unkCE == 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, arg2 + 0x1D4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x24C);
            return;
        }
        break;
    case 10:
        if (arg2->unkCE == 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, arg2 + 0x1E0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x258);
            return;
        }
        break;
    case 11:
        if (arg2->unkCE == 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, arg2 + 0x1EC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x264);
            return;
        }
        break;
    case 12:
        if (arg2->unkCE == 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, arg2 + 0x1F8);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x270);
            return;
        }
        Matrix_MultVec3f(gCalcMatrix, &sp28, arg2 + 0x294);
        Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2B8);
        break;
    }
}

void func_E16C50_801B90DC(Object_2F4 *arg0) {
    Vec3f sp30;
    s16 temp_v0;

    temp_v0 = arg0->unk_0B8;
    if ((temp_v0 >= 3) && (temp_v0 < 5)) {
        Animation_GetFrameData(&D_602AC28, (s32) arg0->unk_0B6, &sp30);
    } else {
        Animation_GetFrameData(&D_6024F80, (s32) arg0->unk_0B6, &sp30);
    }
    Matrix_Translate(gCalcMatrix, 0.0f, -150.0f, 100.0f, (u8) 1);
    Animation_DrawSkeleton(3, &D_602512C, &sp30, func_E16C50_801B8C50, func_E16C50_801B8D7C, arg0, gCalcMatrix);
}

void func_E16C50_801B91A4(Object_2F4 *arg0) {
    Vec3f spDC;
    Vec3f spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    Vec3f spB8;
    Vec3f spAC;
    f32 spA0;
    f32 sp94;
    f32 sp84;
    Vec3f *var_s3;
    f32 *var_s0_2;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs0_6;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fs1_5;
    f32 temp_fs1_6;
    f32 temp_fv0;
    f32 temp_fv1;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_ft1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    void *var_s0;
    void *var_s4;

    spDC.x = D_E16C50_801C0314.unk0;
    spDC.y = D_E16C50_801C0314.unk4;
    spDC.z = D_E16C50_801C0314.unk8;
    Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1U);
    if ((arg0->unk_0CE == 0) && (arg0->unk_0B8 > 0)) {
        arg0->unk_044 = 0;
        func_80066254(arg0);
        var_s1 = 0;
        do {
            sp84 = Rand_ZeroOne();
            temp_fs1 = Rand_ZeroOne();
            temp_fs0 = Rand_ZeroOne();
            temp_fv1 = (f32) var_s1;
            func_80081A8C((sp84 * (temp_fv1 * 15.0f)) + arg0->obj.pos.x, (temp_fs1 * (temp_fv1 * 3.0f)) + arg0->obj.pos.y, (temp_fs0 * (temp_fv1 * 5.0f)) + arg0->obj.pos.z, (Rand_ZeroOne() * 0.3f) + 0.5f, 7);
            var_s1 += 1;
        } while (var_s1 < 5);
        temp_ft1 = (s32) (Rand_ZeroOne() * 10.0f);
        var_s1_2 = temp_ft1;
        if (temp_ft1 < 0xD) {
            var_s0 = arg0 + (temp_ft1 * 0xC);
            var_s3 = &arg0->unk_18C[temp_ft1];
            var_s4 = var_s0 + 0x228;
            do {
                temp_fs1_2 = Rand_ZeroOne();
                temp_fs0_2 = Rand_ZeroOne();
                func_E16C50_801A9448(var_s3, (bitwise f32) var_s4, (bitwise Object_2F4 *) ((temp_fs1_2 - 0.5f) * 20.0f), (bitwise void *) (temp_fs0_2 * 5.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, 0x35, arg0->scale, 0xC8, var_s1_2);
                func_8007BC7C(var_s0->unk18C, var_s0->unk190, var_s0->unk194 + 100.0f, 6.0f);
                var_s1_2 += 1;
                var_s0 += 0xC;
                var_s3 += 0xC;
                var_s4 += 0xC;
            } while (var_s1_2 != 0xD);
        }
        Object_Kill(&arg0->obj, &arg0->sfxPos);
        func_800815DC();
        func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 5.0f);
        func_8007A6F0(&arg0->obj.pos, 0x29038090);
    }
    temp_v0 = arg0->unk_0B8;
    var_s1_3 = 1;
    switch (temp_v0) {                              /* irregular */
    case 0:
        var_s0_2 = &arg0->obj.pos.z;
        arg0->unk_18C[0].x = arg0->obj.pos.x;
        arg0->unk_18C[0].y = arg0->obj.pos.y;
        arg0->unk_18C[0].z = arg0->obj.pos.z;
        arg0->unk_18C[0xD].x = arg0->obj.rot.x;
        arg0->unk_18C[0xD].y = arg0->obj.rot.y;
        arg0->unk_18C[0xD].z = arg0->obj.rot.z;
        do {
            var_s1_3 += 4;
            var_s0_2->unk18C = (f32) arg0->obj.pos.x;
            var_s0_2 += 0x30;
            var_s0_2->unk160 = (f32) arg0->obj.pos.y;
            var_s0_2->unk164 = (f32) arg0->obj.pos.z;
            var_s0_2->unk1F8 = (f32) arg0->obj.rot.x;
            var_s0_2->unk1FC = (f32) arg0->obj.rot.y;
            var_s0_2->unk200 = (f32) arg0->obj.rot.z;
            var_s0_2->unk168 = (f32) arg0->obj.pos.x;
            var_s0_2->unk16C = (f32) arg0->obj.pos.y;
            var_s0_2->unk170 = (f32) arg0->obj.pos.z;
            var_s0_2->unk204 = (f32) arg0->obj.rot.x;
            var_s0_2->unk208 = (f32) arg0->obj.rot.y;
            var_s0_2->unk20C = (f32) arg0->obj.rot.z;
            var_s0_2->unk174 = (f32) arg0->obj.pos.x;
            var_s0_2->unk178 = (f32) arg0->obj.pos.y;
            var_s0_2->unk17C = (f32) arg0->obj.pos.z;
            var_s0_2->unk210 = (f32) arg0->obj.rot.x;
            var_s0_2->unk214 = (f32) arg0->obj.rot.y;
            var_s0_2->unk218 = (f32) arg0->obj.rot.z;
            var_s0_2->unk180 = (f32) arg0->obj.pos.x;
            var_s0_2->unk184 = (f32) arg0->obj.pos.y;
            var_s0_2->unk188 = (f32) arg0->obj.pos.z;
            var_s0_2->unk21C = (f32) arg0->obj.rot.x;
            var_s0_2->unk220 = (f32) arg0->obj.rot.y;
            var_s0_2->unk224 = (f32) arg0->obj.rot.z;
        } while (var_s1_3 != 0xD);
        temp_fv0 = arg0->obj.rot.z;
        arg0->unk_0CE = 0x1E;
        arg0->unk_0B6 = 0x13;
        arg0->unk_118 = arg0->obj.pos.z;
        if (temp_fv0 >= 4.0f) {
            arg0->info.hitbox = gSegments[(u32) ((s32) &D_60314AC * 0x10) >> 0x1C] + ((s32) &D_60314AC & 0xFFFFFF) + 0x80000000;
            arg0->unk_0CE = 0xC8;
            arg0->info.bonus = 1;
            arg0->unk_0B8 = 2;
            arg0->obj.rot.z = 0.0f;
            arg0->obj.rot.y = 0.0f;
            arg0->obj.rot.x = 0.0f;
            arg0->unk_130 = arg0->obj.pos.y;
            arg0->scale = 2.0f;
        } else {
            if (temp_fv0 >= 2.0f) {
                arg0->unk_054 = 1;
            }
            spC8 = 0.0f;
            spC4 = 0.0f;
            spCC = 40.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &spC4, &spB8);
            arg0->unk_124.x = (bitwise f32) spB8;
            arg0->unk_124.y = spB8.y;
            arg0->unk_0B8 = 1;
            arg0->obj.rot.z = 0.0f;
            arg0->unk_124.z = spB8.z;
        }
        break;
    case 1:
        arg0->unk_0B6 += 1;
        if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_6000AE4)) {
            arg0->unk_0B6 = 0;
        }
        if (arg0->unk_0B6 == 0x24) {
            arg0->vel.x = arg0->unk_124.x;
            arg0->vel.y = arg0->unk_124.y;
            arg0->vel.z = arg0->unk_124.z;
        }
        Math_SmoothStepToF(&arg0->vel.x, 0.0f, 0.1f, 1.0f, 0.00001f);
        Math_SmoothStepToF(&arg0->vel.y, 0.0f, 0.1f, 1.0f, 0.00001f);
        Math_SmoothStepToF(&arg0->vel.z, 0.0f, 0.1f, 1.0f, 0.00001f);
        var_s1_4 = 0;
        if (arg0->unk_054 != 0) {
            if (!(arg0->unk_0B6 & 7)) {
                goto block_27;
            }
        } else if (!(arg0->unk_0B6 & 1)) {
block_27:
            var_s1_4 = 1;
        }
        if ((arg0->unk_0B6 >= 0x25) && (var_s1_4 != 0) && (fabsf(gPlayer->unk_138 - arg0->obj.pos.z) > 1000.0f)) {
            temp_fs0_3 = (gPlayer->pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) - arg0->unk_18C[0x1A].x;
            spA0 = (gPlayer->pos.y + ((Rand_ZeroOne() - 0.5f) * 200.0f)) - arg0->unk_18C[0x1A].y;
            temp_fs1_3 = (gPlayer->unk_138 + ((Rand_ZeroOne() - 0.5f) * 200.0f)) - arg0->unk_18C[0x1A].z;
            sp94 = Math_RadToDeg(Math_Atan2F(temp_fs0_3, temp_fs1_3));
            temp_fs1_4 = Math_RadToDeg(-Math_Atan2F(spA0, sqrtf((temp_fs0_3 * temp_fs0_3) + (temp_fs1_3 * temp_fs1_3))));
            Matrix_RotateY(gCalcMatrix, 0.017453292f * sp94, 0U);
            Matrix_RotateX(gCalcMatrix, 0.017453292f * temp_fs1_4, 1U);
            spC8 = 0.0f;
            spC4 = 0.0f;
            spCC = 70.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &spC4, &spAC);
            temp_fs0_4 = Rand_ZeroOne();
            func_8007F04C(0x161, ((temp_fs0_4 - 0.5f) * 200.0f) + arg0->unk_18C[0x1A].x, ((Rand_ZeroOne() - 0.5f) * 200.0f) + arg0->unk_18C[0x1A].y, arg0->unk_18C[0x1A].z, temp_fs1_4, sp94, 0.0f, 0.0f, 0.0f, 0.0f, (bitwise f32) spAC, spAC.y, spAC.z, 1.0f);
        }
        break;
    case 2:
        arg0->unk_0B6 += 1;
        if ((arg0->unk_0B6 >= Animation_GetFrameCount(&D_6000AE4)) && (arg0->unk_134 < 1.0f)) {
            arg0->unk_0B6 = 0;
        }
        if (arg0->unk_0B6 == 0x28) {
            arg0->unk_134 = 700.0f;
            func_E16C50_801A9728(arg0, 50.0f, 10.0f, 8);
        }
        Math_SmoothStepToF(&arg0->obj.pos.y, arg0->unk_134 + arg0->unk_130, 0.1f, 10.0f, 0.00001f);
        Math_SmoothStepToF(&arg0->unk_134, 0.0f, 0.1f, 10.0f, 0.0001f);
        if (arg0->unk_0B6 >= 0x28) {
            temp_fs1_5 = Rand_ZeroOne();
            temp_fs0_5 = Rand_ZeroOne();
            func_E16C50_801AC8A8(((temp_fs1_5 - 0.5f) * 70.0f) + arg0->obj.pos.x, ((temp_fs0_5 - 0.5f) * 50.0f) + (arg0->obj.pos.y - 50.0f), ((Rand_ZeroOne() - 0.5f) * 100.0f) + arg0->obj.pos.z, 1.0f, 0);
        }
        if (arg0->unk_0B6 >= 0x25) {
            arg0->obj.rot.y += 20.0f;
            arg0->unk_11C += 20.0f;
            if (!(gFrameCount & 3)) {
                Matrix_RotateY(gCalcMatrix, arg0->unk_11C * 0.017453292f, 0U);
                Matrix_RotateX(gCalcMatrix, arg0->unk_18C[0x1B].x * 0.017453292f, 1U);
                Matrix_RotateZ(gCalcMatrix, arg0->unk_18C[0x1B].z * 0.017453292f, 1U);
                temp_fs1_6 = Rand_ZeroOne();
                temp_fs0_6 = Rand_ZeroOne();
                func_E16C50_801AC8A8(((temp_fs1_6 - 0.5f) * 120.0f) + arg0->unk_18C[0xB].x, ((temp_fs0_6 - 0.5f) * 50.0f) + arg0->unk_18C[0xB].y, ((Rand_ZeroOne() - 0.5f) * 100.0f) + arg0->unk_18C[0xB].z, 2.0f, 0);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spDC, &spD0);
                func_8007F04C(0x161, arg0->unk_18C[0x1A].x + (bitwise f32) spD0, arg0->unk_18C[0x1A].y + spD0.y, arg0->unk_18C[0x1A].z + spD0.z, arg0->unk_18C[0x1B].x, arg0->unk_11C, arg0->unk_18C[0x1B].z, 0.0f, 0.0f, 0.0f, (bitwise f32) spD0, spD0.y, spD0.z, 1.0f);
            }
        }
        break;
    }
    if (arg0->unk_0D0 != 0) {
        temp_v0_2 = arg0->unk_0CE;
        arg0->unk_0D0 = 0;
        if ((temp_v0_2 != 0) && (arg0->unk_0B8 != 0)) {
            arg0->timer_0C6 = 0xF;
            arg0->unk_0CE = temp_v0_2 - arg0->unk_0D6;
            Audio_PlaySfx(0x2903408FU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (arg0->unk_0CE <= 0) {
                arg0->unk_0CE = 0;
                if (arg0->scale > 1.0f) {
                    func_80077240(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 200.0f, 2);
                    gHitCount += 2;
                    D_80177850 = 0xF;
                }
            }
        }
    }
}

void func_E16C50_801B9DB0(s32 arg0, Vec3f *arg1, void *arg2) {
    Vec3f sp34;
    Vec3f sp28;
    s32 temp_t7;

    sp34.x = D_E16C50_801C0320.unk0;
    sp34.y = D_E16C50_801C0320.unk4;
    sp34.z = D_E16C50_801C0320.unk8;
    sp28.x = D_E16C50_801C032C.unk0;
    sp28.y = D_E16C50_801C032C.unk4;
    sp28.z = D_E16C50_801C032C.unk8;
    if ((arg2->unkCE == 0) || (arg0 == 0xC)) {
        switch (arg0) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x18C);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x228);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x198);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x234);
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x1A4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x240);
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x1B0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x24C);
            return;
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x1BC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x258);
            return;
        case 6:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x1C8);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x264);
            return;
        case 7:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x1D4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x270);
            return;
        case 8:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x1E0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x27C);
            return;
        case 9:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x1EC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x288);
            return;
        case 10:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x1F8);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x294);
            return;
        case 11:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x204);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2A0);
            return;
        case 12:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x210);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2AC);
            Matrix_Push(&gCalcMatrix);
            temp_t7 = gFrameCount & 3;
            switch (temp_t7) {                      /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                break;
            case 1:                                 /* switch 1 */
                Matrix_RotateX(gCalcMatrix, 1.5707964f, 1U);
                break;
            case 2:                                 /* switch 1 */
                Matrix_RotateX(gCalcMatrix, 3.1415927f, 1U);
                break;
            case 3:                                 /* switch 1 */
                Matrix_RotateX(gCalcMatrix, 4.712389f, 1U);
                break;
            }
            Matrix_MultVec3f(gCalcMatrix, &sp28, arg2 + 0x2C4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2D0);
            Matrix_Pop(&gCalcMatrix);
            return;
        case 21:
            Matrix_MultVec3f(gCalcMatrix, &sp34, arg2 + 0x21C);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x2B8);
            break;
        }
    } else {
    default:
    }
}

void func_E16C50_801BA108(Object_2F4 *arg0) {
    Vec3f sp40;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    f32 temp_fv0;

    RCP_SetupDL(&gMasterDisp, 0x1D);
    if (arg0->timer_0C6 & 1) {
        RCP_SetupDL(&gMasterDisp, 0x1E);
        temp_v1 = gMasterDisp;
        gMasterDisp = temp_v1 + 8;
        temp_v1->words.w0 = 0xFA000000;
        temp_v1->words.w1 = 0xFF0000FF;
    } else if (arg0->unk_0B8 == 2) {
        RCP_SetupDL(&gMasterDisp, 0x1E);
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFA000000;
        temp_v1_2->words.w1 = 0xFF5F1FFF;
    }
    temp_fv0 = arg0->scale;
    Matrix_Scale(gCalcMatrix, temp_fv0, temp_fv0, temp_fv0, (u8) 1);
    if (arg0->unk_0B8 == 1) {
        Matrix_RotateX(gCalcMatrix, (arg0->obj.rot.x + 90.0f) * 0.017453292f, 1U);
    }
    Animation_GetFrameData(&D_6000AE4, (s32) arg0->unk_0B6, &sp40);
    Animation_DrawSkeleton(3, &D_6000DB0, &sp40, NULL, func_E16C50_801B9DB0, arg0, gCalcMatrix);
}

void func_E16C50_801BA26C(Object_2F4 *arg0) {
    Vec3f sp40;
    s16 sp3E;
    f32 temp_ft1;
    s16 temp_v0;

    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        temp_ft1 = Rand_ZeroOne() * 50.0f;
        arg0->unk_0B8 += 1;
        arg0->unk_0B6 = (s16) (s32) temp_ft1;
        /* fallthrough */
    case 1:
        arg0->unk_0B6 += 2;
        if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_6020A40)) {
            arg0->unk_0B6 = 0;
        }
        sp3E = Animation_GetFrameData(&D_6020A40, (s32) arg0->unk_0B6, &sp40);
        if ((fabsf(arg0->obj.pos.x - gPlayer->pos.x) < 150.0f) && (fabsf(arg0->obj.pos.y - gPlayer->pos.y) < 500.0f) && (fabsf(arg0->obj.pos.z - gPlayer->unk_138) < 700.0f)) {
            arg0->unk_0B8 = 2;
            arg0->unk_114 = 0.0f;
        }
        break;
    case 2:
        arg0->unk_0B6 += 2;
        if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_601DE50)) {
            arg0->unk_0B6 = 0;
        }
        sp3E = Animation_GetFrameData(&D_601DE50, (s32) arg0->unk_0B6, &sp40);
        if ((fabsf(arg0->obj.pos.x - gPlayer->pos.x) > 150.0f) || (fabsf(arg0->obj.pos.y - gPlayer->pos.y) > 500.0f) || (fabsf(arg0->obj.pos.z - gPlayer->unk_138) > 700.0f)) {
            arg0->unk_0B8 = 1;
            arg0->unk_114 = 0.0f;
        }
        break;
    }
    Math_SmoothStepToVec3fArray(&sp40, arg0->unk_18C, 1, (s32) (u16) sp3E, arg0->unk_114, 100.0f, 0.0f);
    Math_SmoothStepToF(&arg0->unk_114, 0.5f, 1.0f, 0.008f, 0.0f);
}

void func_E16C50_801BA4E4(Object_2F4 *arg0) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = 0x2000;
    temp_v1->words.w0 = 0xB6000000;
    Animation_DrawSkeleton(1, &D_6020C6C, arg0->unk_18C, NULL, NULL, &arg0->index, &gIdentityMatrix);
    temp_v1_2 = gMasterDisp;
    gMasterDisp = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0x2000;
    temp_v1_2->words.w0 = 0xB7000000;
}

void func_E16C50_801BA57C(Object_2F4 *arg0) {
    if (arg0->unk_0B8 == 0) {
        arg0->scale = 1.0f;
        arg0->unk_0CE = 0xA;
        arg0->unk_10C = 0.3f;
        arg0->unk_11C = (Rand_ZeroOne() - 0.5f) * ((f32) (arg0->index & 7) + 3.0f);
    } else {
        arg0->info.bonus = 0;
        arg0->scale = 0.5f;
        arg0->unk_10C = 0.1f;
        arg0->info.hitbox = gSegments[(u32) ((s32) &D_603151C * 0x10) >> 0x1C] + ((s32) &D_603151C & 0xFFFFFF) + 0x80000000;
        arg0->unk_11C = (Rand_ZeroOne() - 0.5f) * ((f32) (arg0->index & 3) + 1.0f);
    }
    arg0->unk_118 = Rand_ZeroOne() * 50.0f;
}

void func_E16C50_801BA6A4(Object_2F4 *arg0) {
    Vec3f *sp68;
    Vec3f *sp64;
    Object_2F4 *var_s0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_ft0;
    s16 temp_v0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;

    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        if (arg0->unk_054 == 0) {
            arg0->obj.rot.z += arg0->unk_11C;
            if (!(gFrameCount & 1)) {
                temp_fs0 = Rand_ZeroOne();
                temp_fs1 = Rand_ZeroOne();
                func_E16C50_801AC8A8(((temp_fs0 - 0.5f) * 120.0f) + arg0->obj.pos.x, ((temp_fs1 - 0.5f) * 50.0f) + arg0->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 100.0f) + arg0->obj.pos.z, 2.0f, 0);
            }
            arg0->unk_118 += 10.0f;
            arg0->vel.x = __sinf(arg0->unk_118 * 0.017453292f) * 10.0f;
            if (arg0->obj.pos.y < (D_80177940 + 30.0f)) {
                Audio_PlaySfx(0x19400007U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                arg0->unk_054 = 1;
                arg0->vel.z = 0.0f;
                arg0->vel.y = 0.0f;
                arg0->vel.x = 0.0f;
                arg0->unk_10C = 0.0f;
                func_8007B8F8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 100.0f, arg0->scale * 30.0f);
                func_8007B8F8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 100.0f, arg0->scale * 30.0f);
            }
        }
        break;
    case 1:
        if (arg0->unk_054 == 0) {
            arg0->obj.rot.z += arg0->unk_11C;
            if (!(gFrameCount & 3)) {
                temp_fs0_2 = Rand_ZeroOne();
                temp_fs1_2 = Rand_ZeroOne();
                func_E16C50_801AC8A8(((temp_fs0_2 - 0.5f) * 70.0f) + arg0->obj.pos.x, ((temp_fs1_2 - 0.5f) * 50.0f) + arg0->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 50.0f) + arg0->obj.pos.z, 1.0f, 0);
            }
            Math_SmoothStepToF(&arg0->vel.y, -7.0f, 0.1f, 1.0f, 0.0001f);
            if (arg0->obj.pos.y < (D_80177940 + 20.0f)) {
                arg0->unk_10C = 0.0f;
                if (arg0->vel.y < 0.0f) {
                    arg0->vel.y = 0.0f;
                }
                arg0->unk_054 = 1;
                Audio_PlaySfx(0x19400007U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_8007B8F8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 100.0f, arg0->scale * 30.0f);
            }
        } else {
            Math_SmoothStepToF(&arg0->vel.y, 0.0f, 0.1f, 1.0f, 0.0001f);
        }
        Math_SmoothStepToF(&arg0->vel.x, 0.0f, 0.1f, 1.0f, 0.0001f);
        Math_SmoothStepToF(&arg0->vel.z, 0.0f, 0.1f, 1.0f, 0.0001f);
        break;
    }
    if (arg0->unk_0D0 != 0) {
        arg0->unk_0D0 = 0;
        arg0->unk_0CE -= arg0->unk_0D6;
        if (arg0->unk_0CE <= 0) {
            arg0->unk_044 = 0;
            arg0->unk_0CE = 0 & 0xFF;
            sp68 = &arg0->sfxPos;
            func_80066254(arg0);
            var_s1 = 0;
            if (arg0->unk_0B8 == 0) {
                var_s0 = gObjects2F4;
                var_s1_2 = 0;
                var_s2 = 0;
loop_23:
                if (var_s0->obj.status == 0) {
                    Object_2F4_Initialize(var_s0);
                    var_s0->obj.status = 1;
                    var_s0->obj.id = 0x109;
                    var_s0->obj.pos.x = arg0->obj.pos.x;
                    var_s0->obj.pos.y = arg0->obj.pos.y + 20.0f;
                    var_s0->obj.pos.z = arg0->obj.pos.z;
                    var_s0->vel.x = (Rand_ZeroOne() - 0.5f) * 50.0f;
                    var_s0->vel.y = Rand_ZeroOne() * 5.0f;
                    temp_ft0 = Rand_ZeroOne() - 0.5f;
                    var_s0->unk_0B8 = 1;
                    var_s0->vel.z = temp_ft0 * 50.0f;
                    Object_SetInfo(&var_s0->info, (u32) var_s0->obj.id);
                    var_s2 += 1;
                }
                var_s1_2 += 1;
                var_s0 += 0x2F4;
                if ((var_s1_2 < 0x3C) && (var_s2 < 4)) {
                    goto loop_23;
                }
                if (var_s1_2 >= 0x3C) {
                    var_s0->obj.status = 0;
                }
                sp64 = &arg0->obj.pos;
            } else {
                sp64 = &arg0->obj.pos;
                do {
                    temp_fs0_3 = Rand_ZeroOne();
                    temp_fs1_3 = Rand_ZeroOne();
                    func_E16C50_801A9448(sp64, (bitwise f32) &arg0->obj.rot, (bitwise Object_2F4 *) ((temp_fs0_3 - 0.5f) * 30.0f), (bitwise void *) (temp_fs1_3 * 5.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, 0x36, 0.1f, 0xC8, var_s1);
                    var_s1 += 1;
                } while (var_s1 != 4);
            }
            func_8007BC7C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 130.0f, arg0->scale * 30.0f);
            func_8007BC7C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 130.0f, arg0->scale * 30.0f);
            func_8007BC7C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 130.0f, arg0->scale * 30.0f);
            Object_Kill(&arg0->obj, sp68);
            func_8007A6F0(sp64, 0x2903A008);
        }
    }
}

void func_E16C50_801BAD7C(Object_2F4 *arg0) {
    Gfx *temp_v1;
    f32 temp_fv0;

    temp_fv0 = arg0->scale;
    Matrix_Scale(gGfxMatrix, temp_fv0, temp_fv0, temp_fv0, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w0 = 0x06000000;
    temp_v1->words.w1 = (u32) &D_6014FD0;
}

void func_E16C50_801BADF8(Object_2F4 *arg0) {
    Object_2F4 *var_s0;
    Vec3f *var_s3;
    Vec3f *var_s4;
    f32 temp_fs0;
    f32 temp_fs1;
    s16 temp_v0;
    s32 var_s2;
    void *temp_s0;

    temp_v0 = arg0->unk_0B8;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            var_s2 = 0;
            if (temp_v0 != 2) {
                return;
            }
            var_s0 = arg0;
            var_s3 = arg0->unk_18C;
            var_s4 = &arg0->unk_18C[5];
            do {
                temp_fs0 = Rand_ZeroOne();
                temp_fs1 = Rand_ZeroOne();
                func_E16C50_801A9448(var_s3, (bitwise f32) var_s4, (bitwise Object_2F4 *) ((temp_fs0 - 0.5f) * 20.0f), (bitwise void *) (temp_fs1 * 5.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, 0x37, arg0->scale, 0xC8, var_s2);
                func_8007BC7C(var_s0->unk_18C[0].x, var_s0->unk_18C[0].y, var_s0->unk_18C[0].z + 100.0f, 6.0f);
                var_s2 += 1;
                var_s0 += 0xC;
                var_s3 += 0xC;
                var_s4 += 0xC;
            } while (var_s2 != 5);
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        } else if (arg0->unk_0D0 != 0) {
            arg0->unk_0D0 = 0;
            if (arg0->unk_0D6 == 0) {
                gPlayer->unk_1F4 = 6;
                gPlayer->unk_21C = 0;
            }
            arg0->unk_0B8 += 1;
        }
    } else {
        arg0->unk_18C[0].x = arg0->obj.pos.x;
        temp_s0 = arg0 + (1 * 0xC);
        arg0->unk_18C[0].y = arg0->obj.pos.y;
        arg0->unk_18C[0].z = arg0->obj.pos.z;
        arg0->unk_18C[5].x = arg0->obj.rot.x;
        arg0->unk_18C[5].y = arg0->obj.rot.y;
        arg0->unk_18C[5].z = arg0->obj.rot.z;
        arg0->unk_18C[1].x = arg0->obj.pos.x;
        arg0->unk_18C[1].y = arg0->obj.pos.y;
        arg0->unk_18C[1].z = arg0->obj.pos.z;
        temp_s0->unk1C8 = (f32) arg0->obj.rot.x;
        temp_s0->unk1CC = (f32) arg0->obj.rot.y;
        temp_s0->unk1D0 = (f32) arg0->obj.rot.z;
        temp_s0->unk198 = (f32) arg0->obj.pos.x;
        temp_s0->unk19C = (f32) arg0->obj.pos.y;
        temp_s0->unk1A0 = (f32) arg0->obj.pos.z;
        temp_s0->unk1D4 = (f32) arg0->obj.rot.x;
        temp_s0->unk1D8 = (f32) arg0->obj.rot.y;
        temp_s0->unk1DC = (f32) arg0->obj.rot.z;
        temp_s0->unk1A4 = (f32) arg0->obj.pos.x;
        temp_s0->unk1A8 = (f32) arg0->obj.pos.y;
        temp_s0->unk1AC = (f32) arg0->obj.pos.z;
        temp_s0->unk1E0 = (f32) arg0->obj.rot.x;
        temp_s0->unk1E4 = (f32) arg0->obj.rot.y;
        temp_s0->unk1E8 = (f32) arg0->obj.rot.z;
        temp_s0->unk1B0 = (f32) arg0->obj.pos.x;
        temp_s0->unk1B4 = (f32) arg0->obj.pos.y;
        temp_s0->unk1B8 = (f32) arg0->obj.pos.z;
        temp_s0->unk1EC = (f32) arg0->obj.rot.x;
        temp_s0->unk1F0 = (f32) arg0->obj.rot.y;
        temp_s0->unk1F4 = (f32) arg0->obj.rot.z;
        arg0->unk_0B8 += 1;
    }
}

void func_E16C50_801BB0C4(s32 arg0, Vec3f *arg1, void *arg2) {
    Vec3f sp24;

    sp24.x = D_E16C50_801C0338.unk0;
    sp24.y = D_E16C50_801C0338.unk4;
    sp24.z = D_E16C50_801C0338.unk8;
    if (arg2->unkB8 != 0) {
        switch (arg0) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x18C);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1C8);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x198);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1D4);
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1A4);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1E0);
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1B0);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1EC);
            return;
        case 9:
            Matrix_MultVec3f(gCalcMatrix, &sp24, arg2 + 0x1BC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1F8);
            break;
        }
    } else {
    default:
    }
}

void func_E16C50_801BB204(Object_2F4 *arg0) {
    Vec3f sp28;

    Animation_GetFrameData(&D_601EC68, 0, &sp28);
    Animation_DrawSkeleton(3, &D_601EDB4, &sp28, NULL, func_E16C50_801BB0C4, arg0, gCalcMatrix);
}

void func_E16C50_801BB26C(Object_2F4 *arg0) {
    s32 sp64;
    s32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    Vec3f sp48;
    Object_2F4 *sp44;
    Object_2F4 *sp40;
    f32 sp3C;
    Object_2F4 *var_a2;
    Object_2F4 *var_a3;
    f32 temp_ft1;
    f32 temp_ft1_2;
    s32 temp_ft3;
    s32 temp_t5;
    s32 temp_t7;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    arg0->unk_118 = Rand_ZeroOne() * 100.0f;
    arg0->timer_0BC = (u16) (s32) (Rand_ZeroOne() * 50.0f);
    temp_ft1 = Rand_ZeroOne() * 10.0f;
    arg0->unk_160 = 1.0f;
    arg0->unk_154 = 1.0f;
    arg0->unk_148 = 1.0f;
    arg0->unk_15C = 1.0f;
    arg0->unk_150 = 1.0f;
    arg0->unk_144 = 1.0f;
    arg0->unk_05C = (s32) temp_ft1 & 1;
    arg0->unk_158 = 1.0f;
    arg0->unk_14C = 1.0f;
    arg0->unk_140 = 1.0f;
    arg0->unk_124.x = 255.0f;
    arg0->unk_134 = 255.0f;
    arg0->unk_130 = 255.0f;
    arg0->unk_124.z = 197.0f;
    arg0->unk_124.y = 197.0f;
    arg0->unk_13C = 231.0f;
    arg0->unk_138 = 231.0f;
    arg0->unk_11C = 213.0f;
    arg0->unk_120 = 160.0f;
    arg0->unk_16C = arg0->obj.pos.x;
    arg0->unk_170 = arg0->obj.pos.y;
    arg0->unk_174 = arg0->obj.pos.z;
    arg0->unk_060 = (s32) (Rand_ZeroOne() * 60.0f);
    arg0->unk_064 = (s32) (Rand_ZeroOne() * 45.0f) + 0xF;
    arg0->unk_068 = (s32) (Rand_ZeroOne() * 15.0f) + 0x2D;
    arg0->unk_06C = (s32) (Rand_ZeroOne() * 120.0f);
    arg0->unk_070 = (s32) (Rand_ZeroOne() * 120.0f);
    arg0->unk_074 = (s32) (Rand_ZeroOne() * 120.0f);
    sp3C = Rand_ZeroOne();
    arg0->unk_0B6 = (s16) (s32) ((f32) Animation_GetFrameCount(&D_6023780) * sp3C);
    if (arg0->unk_058 == 0) {
        temp_ft3 = (s32) fabsf(arg0->obj.rot.y / 10.0f);
        arg0->unk_098 = temp_ft3;
        if ((temp_ft3 == 0) || (temp_ft3 == 2)) {
            arg0->unk_09C = 1;
        }
        arg0->unk_084 = D_E16C50_801C4450 * 3;
        Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * 0.017453292f, 0U);
        sp54 = 0.0f;
        sp5C = 0.0f;
        sp58 = arg0->obj.rot.x * 10.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp54, &sp48);
        var_a3 = gObjects2F4;
        var_v0 = 0;
loop_5:
        if (var_a3->obj.status == 0) {
            sp64 = var_v0;
            sp44 = var_a3;
            Object_2F4_Initialize(var_a3);
            var_a3->obj.status = 1;
            var_a3->obj.id = 0x10B;
            var_a3->obj.pos.x = arg0->obj.pos.x + (bitwise f32) sp48;
            var_a3->obj.pos.y = arg0->obj.pos.y + sp48.y;
            var_a3->obj.pos.z = arg0->obj.pos.z;
            var_a3->unk_058 = 1;
            var_a3->unk_050 = arg0->index + 1;
            var_a3->unk_084 = arg0->unk_084;
            var_a3->unk_098 = arg0->unk_098;
            var_a3->unk_09C = arg0->unk_09C;
            arg0->unk_050 = var_v0 + 1;
            sp44 = var_a3;
            Object_SetInfo(&var_a3->info, (u32) var_a3->obj.id);
        } else {
            var_v0 += 1;
            var_a3 += 0x2F4;
            if (var_v0 != 0x3C) {
                goto loop_5;
            }
        }
        sp44 = var_a3;
        Matrix_RotateZ(gCalcMatrix, (arg0->obj.rot.z + 90.0f) * 0.017453292f, 0U);
        sp54 = 0.0f;
        sp5C = 0.0f;
        sp58 = arg0->obj.rot.x * 10.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp54, &sp48);
        var_a2 = gObjects2F4;
        var_v0_2 = 0;
loop_9:
        if (var_a2->obj.status == 0) {
            sp60 = var_v0_2;
            sp40 = var_a2;
            Object_2F4_Initialize(var_a2);
            var_a2->obj.status = 1;
            var_a2->obj.id = 0x10B;
            temp_v1 = var_v0_2 + 1;
            var_a2->obj.pos.x = arg0->obj.pos.x + (bitwise f32) sp48;
            var_a2->obj.pos.y = arg0->obj.pos.y + sp48.y;
            var_a2->obj.pos.z = arg0->obj.pos.z;
            var_a2->unk_050 = arg0->index + 1;
            var_a2->unk_058 = 2;
            var_a2->unk_054 = sp44->index + 1;
            var_a2->unk_084 = arg0->unk_084;
            var_a2->unk_098 = arg0->unk_098;
            var_a2->unk_09C = arg0->unk_09C;
            sp44->unk_054 = temp_v1;
            arg0->unk_054 = temp_v1;
            Object_SetInfo(&var_a2->info, (u32) var_a2->obj.id);
        } else {
            var_v0_2 += 1;
            var_a2 += 0x2F4;
            if (var_v0_2 != 0x3C) {
                goto loop_9;
            }
        }
        arg0->unk_168 = arg0->obj.rot.x * 10.0f;
        temp_ft1_2 = arg0->obj.rot.z;
        temp_t5 = (s32) fabsf(Math_ModF(arg0->obj.rot.y, 10.0f));
        arg0->obj.rot.z = 0.0f;
        arg0->obj.rot.y = 0.0f;
        arg0->obj.rot.x = 0.0f;
        arg0->unk_164 = temp_ft1_2;
        arg0->unk_094 = temp_t5;
        temp_t7 = D_E16C50_801C4450 + 1;
        D_E16C50_801C4450 = temp_t7;
        if (temp_t7 >= 0x15) {
            D_E16C50_801C4450 = 0;
        }
    }
}

void func_E16C50_801BB79C(Object_2F4 *arg0) {
    s32 sp94;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    Vec3f sp74;
    Object_2F4 *sp70;
    Object_2F4 *sp6C;
    Object_80 *sp68;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 *sp50;
    Object_2F4 *sp4C;
    s32 sp48;
    f32 *sp44;
    f32 *sp40;
    f32 *sp3C;
    s32 sp38;
    Object_2F4 *temp_t0;
    Object_2F4 *temp_v1;
    Object_2F4 *temp_v1_2;
    Object_2F4 *temp_v1_3;
    Object_2F4 *var_t0;
    Object_2F4 *var_v0;
    Object_2F4 *var_v0_2;
    Object_80 *var_a2;
    Object_80 *var_a2_2;
    f32 *temp_t1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_7;
    s32 var_a0_4;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t1_3;
    s32 var_t1_4;
    s32 var_t1_5;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 var_a0;
    u16 var_a0_2;
    u16 var_a0_3;

    if (arg0->timer_0C0 == 0) {
        temp_v0 = arg0->unk_098;
        switch (temp_v0) {                          /* irregular */
        case 1:
        case 2:
            temp_a0 = arg0->unk_09C;
            arg0->vel.x = (f32) D_E16C50_801C04A0[(arg0->unk_058 * 2) + temp_a0];
            if (!(gFrameCount & 3)) {
                var_a2 = gObjects80;
                var_t1 = 0;
                if (fabsf(arg0->unk_16C - arg0->obj.pos.x) >= 100.0f) {
                    temp_t6 = temp_a0 + 1;
                    if (arg0->unkA0 == 0) {
                        arg0->unk_09C = temp_t6;
                        arg0->unk_09C = temp_t6 & 1;
                        arg0->unkA0 = 0x32;
                    }
                } else {
                    do {
                        if ((var_a2->obj.status == 2) && (var_a2->obj.id == 0x7A)) {
                            sp94 = var_t1;
                            sp68 = var_a2;
                            temp_v0_2 = func_80062DBC(&arg0->obj.pos, var_a2->info.hitbox, var_a2, 0.0f, 0.0f, 0.0f);
                            if ((temp_v0_2 != 0) && (arg0->unkA0 == 0)) {
                                arg0->unkA0 = 0x32;
                                temp_t6_2 = arg0->unk_09C + 1;
                                arg0->unk_09C = temp_t6_2;
                                arg0->unk_09C = temp_t6_2 & 1;
                            }
                        }
                        var_t1 += 1;
                        var_a2 += 0x80;
                    } while (var_t1 != 0x32);
                }
            }
            break;
        case 3:
        case 4:
            temp_a0_2 = arg0->unk_09C;
            arg0->vel.y = (f32) D_E16C50_801C04A0[(arg0->unk_058 * 2) + temp_a0_2];
            if (!(gFrameCount & 3)) {
                var_a2_2 = gObjects80;
                var_t1_2 = 0;
                if (fabsf(arg0->unk_170 - arg0->obj.pos.y) >= 100.0f) {
                    temp_t8 = temp_a0_2 + 1;
                    if (arg0->unkA0 == 0) {
                        arg0->unk_09C = temp_t8;
                        arg0->unk_09C = temp_t8 & 1;
                        arg0->unkA0 = 0x32;
                    }
                } else {
                    do {
                        if ((var_a2_2->obj.status == 2) && (var_a2_2->obj.id == 0x7A) && ((sp94 = var_t1_2, sp68 = var_a2_2, temp_v0_3 = func_80062DBC(&arg0->obj.pos, var_a2_2->info.hitbox, var_a2_2, 0.0f, 0.0f, 0.0f), (temp_v0_3 != 0)) || (arg0->obj.pos.y < (D_80177940 + 30.0f))) && (arg0->unkA0 == 0)) {
                            arg0->unkA0 = 0x32;
                            temp_t8_2 = arg0->unk_09C + 1;
                            arg0->unk_09C = temp_t8_2;
                            arg0->unk_09C = temp_t8_2 & 1;
                        }
                        var_t1_2 += 1;
                        var_a2_2 += 0x80;
                    } while (var_t1_2 != 0x32);
                }
            }
            break;
        }
    } else {
        arg0->vel.y = 0.0f;
        arg0->vel.x = 0.0f;
    }
    if (arg0->unk_058 == 0) {
        temp_v1 = &gObjects2F4[arg0->unk_050] - 0x2F4;
        sp70 = temp_v1;
        temp_t0 = &gObjects2F4[arg0->unk_054] - 0x2F4;
        sp6C = temp_t0;
        Math_SmoothStepToF(&arg0->unk_168, 200.0f, 0.1f, 2.0f, 0.0001f);
        var_t0 = temp_t0;
        if ((arg0->unk_084 == temp_v1->unk_084) && (arg0->unk_088 == 0)) {
            var_t1_3 = 1;
            if ((temp_v1->obj.id != 0x10B) || (temp_v1->obj.status != 2)) {
                arg0->unk_088 = 1;
                var_t1_3 = 0;
            }
            if (var_t1_3 != 0) {
                var_a0 = arg0->timer_0C0;
                if (var_a0 == 0) {
                    temp_v0_4 = temp_v1->timer_0C0;
                    if ((s32) temp_v0_4 >= 2) {
                        arg0->timer_0C0 = temp_v0_4;
                        var_a0 = temp_v0_4 & 0xFFFF;
                        arg0->timer_0C6 = temp_v1->timer_0C6;
                    }
                }
                if ((var_a0 != 0) && ((temp_v1->timer_0C0 == 0) >= 2)) {
                    temp_v1->timer_0C0 = var_a0;
                    temp_v1->timer_0C6 = arg0->timer_0C6;
                }
            }
            if (!(gFrameCount & 7)) {
                sp70 = temp_v1;
                sp6C = var_t0;
                sp94 = var_t1_3;
                func_8007A6F0(&temp_v1->obj.pos, 0x3100208E);
            }
            sp6C = var_t0;
            sp70 = temp_v1;
            func_E16C50_801A92EC(arg0, temp_v1->obj.pos.x, temp_v1->obj.pos.y, temp_v1->obj.pos.z, arg0->unk_084, var_t1_3);
            if ((arg0->unk_168 > 200.0f) && (arg0->unk_094 != 0)) {
                sp6C = var_t0;
                sp70 = temp_v1;
                Matrix_RotateZ(gCalcMatrix, arg0->unk_164 * 0.017453292f, 0U);
                sp80 = 0.0f;
                sp88 = 0.0f;
                sp84 = arg0->unk_168;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp80, &sp74);
                var_t0 = sp6C;
                sp70->obj.pos.x = arg0->obj.pos.x + (bitwise f32) sp74;
                sp70->obj.pos.y = arg0->obj.pos.y + sp74.y;
                sp70->obj.pos.z = arg0->obj.pos.z;
            }
        }
        if ((arg0->unk_084 == var_t0->unk_084) && (arg0->unk_08C == 0)) {
            var_t1_4 = 1;
            if ((var_t0->obj.id != 0x10B) || (var_t0->obj.status != 2)) {
                arg0->unk_08C = 1;
                var_t1_4 = 0;
            }
            if (var_t1_4 != 0) {
                var_a0_2 = arg0->timer_0C0;
                if (var_a0_2 == 0) {
                    temp_v0_5 = var_t0->timer_0C0;
                    if ((s32) temp_v0_5 >= 2) {
                        arg0->timer_0C0 = temp_v0_5;
                        var_a0_2 = temp_v0_5 & 0xFFFF;
                        arg0->timer_0C6 = var_t0->timer_0C6;
                    }
                }
                if ((var_a0_2 != 0) && ((var_t0->timer_0C0 == 0) >= 2)) {
                    var_t0->timer_0C0 = var_a0_2;
                    var_t0->timer_0C6 = arg0->timer_0C6;
                }
            }
            if (!(gFrameCount & 3)) {
                sp6C = var_t0;
                sp94 = var_t1_4;
                func_8007A6F0(&var_t0->obj.pos, 0x3100208E);
            }
            sp6C = var_t0;
            func_E16C50_801A92EC(arg0, var_t0->obj.pos.x, var_t0->obj.pos.y, var_t0->obj.pos.z, arg0->unk_084 + 1, var_t1_4);
            if ((arg0->unk_168 > 200.0f) && (arg0->unk_094 != 0)) {
                sp6C = var_t0;
                Matrix_RotateZ(gCalcMatrix, (arg0->unk_164 + 90.0f) * 0.017453292f, 0U);
                sp80 = 0.0f;
                sp88 = 0.0f;
                sp84 = arg0->unk_168;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp80, &sp74);
                sp6C->obj.pos.x = arg0->obj.pos.x + (bitwise f32) sp74;
                sp6C->obj.pos.y = arg0->obj.pos.y + sp74.y;
                sp6C->obj.pos.z = arg0->obj.pos.z;
            }
        }
    } else if (arg0->unk_058 == 1) {
        temp_v1_2 = &gObjects2F4[arg0->unk_054];
        temp_v1_3 = temp_v1_2 - 0x2F4;
        if ((arg0->unk_084 == temp_v1_2->unk-270) && (arg0->unk_090 == 0)) {
            var_t1_5 = 1;
            if ((temp_v1_3->obj.id != 0x10B) || (temp_v1_3->obj.status != 2)) {
                arg0->unk_090 = 1;
                var_t1_5 = 0;
            }
            if (var_t1_5 != 0) {
                var_a0_3 = arg0->timer_0C0;
                if (var_a0_3 == 0) {
                    temp_v0_6 = temp_v1_3->timer_0C0;
                    if ((s32) temp_v0_6 >= 2) {
                        arg0->timer_0C0 = temp_v0_6;
                        var_a0_3 = temp_v0_6 & 0xFFFF;
                        arg0->timer_0C6 = temp_v1_3->timer_0C6;
                    }
                }
                if ((var_a0_3 != 0) && ((temp_v1_3->timer_0C0 == 0) >= 2)) {
                    temp_v1_3->timer_0C0 = var_a0_3;
                    temp_v1_3->timer_0C6 = arg0->timer_0C6;
                }
            }
            if (!(gFrameCount & 0xF)) {
                sp70 = temp_v1_3;
                sp94 = var_t1_5;
                func_8007A6F0(&temp_v1_3->obj.pos, 0x3100208E);
            }
            func_E16C50_801A92EC(arg0, temp_v1_3->obj.pos.x, temp_v1_3->obj.pos.y, temp_v1_3->obj.pos.z, arg0->unk_084 + 2, var_t1_5);
        }
    }
    if (!(gFrameCount & 3)) {
        sp54 = Rand_ZeroOne();
        sp58 = Rand_ZeroOne();
        sp5C = Rand_ZeroOne();
        func_8007C120(((sp54 - 0.5f) * 100.0f) + arg0->obj.pos.x, ((sp58 - 0.5f) * 100.0f) + arg0->obj.pos.y, ((sp5C - 0.5f) * 50.0f) + arg0->obj.pos.z, arg0->vel.x, arg0->vel.y, arg0->vel.z, (Rand_ZeroOne() * 0.03f) + 0.05f, 0xA);
    }
    if (arg0->timer_0BE == 0) {
        D_E16C50_801C41B8.unk48 = 255.0f;
        D_E16C50_801C41B8.unk4C = 255.0f;
        D_E16C50_801C41B8.unk50 = 255.0f;
        arg0->timer_0BE = 0xA;
    }
    if (arg0->unk_05C == 0) {
        Math_SmoothStepToF(&arg0->unk_118, 30.0f, 0.1f, 1.0f, 0.00001f);
    } else {
        Math_SmoothStepToF(&arg0->unk_118, 100.0f, 0.1f, 1.0f, 0.00001f);
    }
    if (arg0->timer_0BC == 0) {
        arg0->timer_0BC = 0x64;
        temp_t3 = arg0->unk_05C + 1;
        arg0->unk_05C = temp_t3;
        arg0->unk_05C = temp_t3 & 1;
    }
    arg0->unk_0B6 += 2;
    var_a0_4 = 0;
    if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_6023780)) {
        arg0->unk_0B6 = 0;
    }
    var_t0_2 = 0;
    if (arg0->unk_060 < 0x1E) {
        arg0->unk_11C += D_E16C50_801C0344.unk0;
        arg0->unk_120 += D_E16C50_801C0344.unk4;
        arg0->unk_124.x += D_E16C50_801C0344.unk8;
        if (arg0->unk_11C < 0.0f) {
            arg0->unk_124.x = 0.0f;
            arg0->unk_120 = 0.0f;
            arg0->unk_11C = 0.0f;
        }
    } else {
        arg0->unk_11C += D_E16C50_801C0344.unkC;
        arg0->unk_120 += D_E16C50_801C0344.unk10;
        arg0->unk_124.x += D_E16C50_801C0344.unk14;
        if (arg0->unk_120 >= 160.0f) {
            arg0->unk_120 = 160.0f;
            arg0->unk_124.x = 255.0f;
            arg0->unk_11C = 213.0f;
        }
    }
    var_v0 = arg0;
    do {
        var_a0_4 += 4;
        if (var_v0->unk_064 < 0x1E) {
            var_v0->unk_124.y += D_E16C50_801C0344.unk18;
            var_v0->unk_130 += D_E16C50_801C0344.unk1C;
            var_v0->unk_138 += D_E16C50_801C0344.unk20;
            if (var_v0->unk_130 < 0.0f) {
                var_v0->unk_138 = 0.0f;
                var_v0->unk_130 = 0.0f;
                var_v0->unk_124.y = 0.0f;
            }
        } else {
            var_v0->unk_124.y += D_E16C50_801C0344.unk24;
            var_v0->unk_130 += D_E16C50_801C0344.unk28;
            var_v0->unk_138 += D_E16C50_801C0344.unk2C;
            if (var_v0->unk_130 >= 255.0f) {
                var_v0->unk_124.y = 197.0f;
                var_v0->unk_130 = 255.0f;
                var_v0->unk_138 = 231.0f;
            }
        }
        var_v0 += 4;
    } while (var_a0_4 < 8);
    sp44 = &arg0->unk_140;
    var_v0_2 = arg0;
    sp40 = &arg0->unk_14C;
    sp3C = &arg0->unk_158;
    sp48 = 0;
    do {
        temp_t1 = &D_E16C50_801C0374[(var_v0_2->unk_078 * 3) + sp48];
        sp50 = temp_t1;
        sp38 = var_t0_2;
        sp4C = var_v0_2;
        Math_SmoothStepToF(sp44, *temp_t1, 0.1f, 5.0f, 0.000001f);
        Math_SmoothStepToF(sp40, sp50->unk4, 0.1f, 5.0f, 0.000001f);
        Math_SmoothStepToF(sp3C, sp50->unk8, 0.1f, 5.0f, 0.000001f);
        temp_a0_3 = var_v0_2->unk_078;
        temp_t7 = D_E16C50_801C0440[temp_a0_3 + var_t0_2];
        var_t0_2 += 8;
        if (var_v0_2->unk_06C == temp_t7) {
            var_v0_2->unk_078 = temp_a0_3 + 1;
        }
        sp3C += 4;
        sp40 += 4;
        sp44 += 4;
        sp48 += 0xC;
        var_v0_2 = (Object_2F4 *) &var_v0_2->obj.pos;
    } while (var_t0_2 != 0x18);
    temp_t4 = arg0->unk_060 + 1;
    arg0->unk_060 = temp_t4;
    if (temp_t4 >= 0x3C) {
        arg0->unk_060 = 0;
    }
    temp_t7_2 = arg0->unk_064 + 1;
    arg0->unk_064 = temp_t7_2;
    if (temp_t7_2 >= 0x3C) {
        arg0->unk_064 = 0;
    }
    temp_t3_2 = arg0->unk_068 + 1;
    arg0->unk_068 = temp_t3_2;
    if (temp_t3_2 >= 0x3C) {
        arg0->unk_068 = 0;
    }
    temp_t5 = arg0->unk_06C + 1;
    arg0->unk_06C = temp_t5;
    if (temp_t5 >= 0x78) {
        arg0->unk_078 = 0;
        arg0->unk_06C = 0;
    }
    temp_t9 = arg0->unk_070 + 1;
    arg0->unk_070 = temp_t9;
    if (temp_t9 >= 0x3C) {
        arg0->unk_07C = 0;
        arg0->unk_070 = 0;
    }
    temp_t6_3 = arg0->unk_074 + 1;
    arg0->unk_074 = temp_t6_3;
    if (temp_t6_3 >= 0x78) {
        arg0->unk_080 = 0;
        arg0->unk_074 = 0;
    }
    if (arg0->unk_0D0 != 0) {
        arg0->unk_0D0 = 0;
        Audio_PlaySfx(0x2903408FU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        if (arg0->unk_0D6 != 0x1F) {
            arg0->timer_0C6 = 0x28;
            arg0->timer_0C0 = 0x28;
        } else {
            arg0->timer_0C6 = 0x50;
            arg0->timer_0C0 = 0x50;
        }
    }
    temp_v0_7 = arg0->unkA0;
    if (temp_v0_7 != 0) {
        arg0->unkA0 = temp_v0_7 - 1;
    }
    func_E16C50_801A96DC(arg0);
}

s32 func_E16C50_801BC530(s32 arg0, u32 *arg1, Vec3f *arg2, Vec3f *arg3, void *arg4) {
    Vec3f sp64;
    Vec3f sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    f32 var_ft4;
    s32 var_v0;

    sp64.x = D_E16C50_801C04B8.unk0;
    sp64.y = D_E16C50_801C04B8.unk4;
    sp64.z = D_E16C50_801C04B8.unk8;
    sp54 = 0.0f;
    sp50 = 0.0f;
    sp4C = 0.0f;
    RCP_SetupDL(&gMasterDisp, 0x29);
    if (!(arg4->unkC6 & 1)) {
        temp_v0 = gMasterDisp;
        gMasterDisp = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = ((s32) arg4->unk118 & 0xFF) | 0xBFFFDF00;
    } else {
        temp_v0_2 = gMasterDisp;
        gMasterDisp = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0xFF;
        temp_v0_2->words.w0 = 0xFA000000;
    }
    switch (arg0) {
    case 1:
        sp54 = arg4->unk144;
        sp50 = arg4->unk150;
        var_ft4 = arg4->unk15C;
block_11:
        sp4C = var_ft4;
        break;
    case 2:
        sp54 = arg4->unk148;
        sp50 = arg4->unk154;
        sp4C = arg4->unk160;
        break;
    case 3:
        temp_v0_3 = gMasterDisp;
        gMasterDisp = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = (((s32) arg4->unk138 & 0xFF) << 8) | ((s32) arg4->unk128 << 0x18) | (((s32) arg4->unk130 & 0xFF) << 0x10) | 0xFF;
        break;
    case 4:
        temp_v0_4 = gMasterDisp;
        gMasterDisp = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xFA000000;
        temp_v0_4->words.w1 = (((s32) arg4->unk124 & 0xFF) << 8) | ((s32) arg4->unk11C << 0x18) | (((s32) arg4->unk120 & 0xFF) << 0x10) | 0xFF;
        break;
    case 5:
        temp_v0_5 = gMasterDisp;
        gMasterDisp = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xFA000000;
        temp_v0_5->words.w1 = (((s32) arg4->unk13C & 0xFF) << 8) | ((s32) arg4->unk12C << 0x18) | (((s32) arg4->unk134 & 0xFF) << 0x10) | 0xFF;
        break;
    case 11:
        sp54 = arg4->unk140;
        sp50 = arg4->unk14C;
        var_ft4 = arg4->unk158;
        goto block_11;
    }
    var_v0 = 0;
    if (sp54 > 0.0f) {
        Matrix_Translate(gCalcMatrix, arg2->x, arg2->y, arg2->z, (u8) 1);
        Matrix_RotateZ(gCalcMatrix, arg3->z * 0.017453292f, 1U);
        Matrix_RotateY(gCalcMatrix, arg3->y * 0.017453292f, 1U);
        Matrix_RotateX(gCalcMatrix, arg3->x * 0.017453292f, 1U);
        if (*arg1 != 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);
            func_8005F670(&sp58);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1U);
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, sp54, sp50, sp4C, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v0_6 = gMasterDisp;
            gMasterDisp = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0x06000000;
            temp_v0_6->words.w1 = *arg1;
            Matrix_Pop(&gGfxMatrix);
        }
        var_v0 = 1;
    }
    return var_v0;
}

void func_E16C50_801BC91C(s32 arg0, Vec3f *arg1, void *arg2) {

}

void func_E16C50_801BC930(Object_2F4 *arg0) {
    Vec3f sp28;

    Animation_GetFrameData(&D_6023780, (s32) arg0->unk_0B6, &sp28);
    Animation_DrawSkeleton(3, &D_602390C, &sp28, (s32 (*)(s32, Gfx **, Vec3f *, Vec3f *, void *)) func_E16C50_801BC530, func_E16C50_801BC91C, arg0, gCalcMatrix);
}

void func_E16C50_801BC9A0(Object_2F4 *arg0) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    Vec3f sp98;
    f32 sp84;
    void *sp7C;
    s32 sp74;
    Object_2F4 *var_a0;
    Object_2F4 *var_s0;
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s16 temp_v0;
    s32 temp_ft1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    u16 temp_t6;
    u16 temp_v1;

    temp_t6 = (u16) arg0->unk_0B8;
    switch (temp_t6) {
    case 0:
        temp_fv0 = arg0->obj.pos.x;
        temp_fv1 = arg0->obj.pos.y;
        temp_ft1 = (s32) arg0->obj.rot.z;
        temp_fa0 = arg0->obj.pos.z;
        arg0->unk_18C[0].x = temp_fv0;
        arg0->unk_18C[1].x = temp_fv0;
        arg0->unk_18C[4].x = temp_fv0;
        arg0->unk_18C[0].y = temp_fv1;
        arg0->unk_18C[1].y = temp_fv1;
        arg0->unk_18C[4].y = temp_fv1;
        arg0->unk_18C[0].z = temp_fa0;
        arg0->unk_18C[1].z = temp_fa0;
        arg0->unk_18C[4].z = temp_fa0;
        arg0->unk_054 = temp_ft1;
        if (temp_ft1 >= 9) {
            arg0->unk_054 = 7;
        }
        if (arg0->obj.rot.y != 0.0f) {
            arg0->unk_0CE = 0x1DE2;
            arg0->unk_05C = 1;
            arg0->unk_0B8 = 2;
        } else {
            arg0->unk_0CE = 0xA;
            arg0->info.drawType = 2;
            arg0->info.bonus = 1;
            arg0->unk_0B8 += 1;
        }
        arg0->obj.rot.z = 0.0f;
        arg0->obj.rot.y = 0.0f;
        return;
    case 1:
        if (arg0->unk_0D0 != 0) {
            temp_v0 = arg0->unk_0CE;
            arg0->unk_0D0 = 0;
            if ((temp_v0 != 0) && (arg0->unk_05C == 0)) {
                temp_v1 = arg0->unk_0D6;
                if (temp_v1 == 0x1F) {
                    arg0->unk_0CE = temp_v0 - temp_v1;
                    Audio_PlaySfx(0x2903B009U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    if (arg0->unk_0CE <= 0) {
                        arg0->unk_0CE = 0;
                        arg0->unk_0B8 = 3;
                        return;
                    }
                }
            }
        }
    default:
        return;
    case 3:
        var_s2 = 0;
        var_s1 = 0;
        do {
            var_a0 = gObjects2F4;
loop_16:
            var_s1 += 1;
            if ((var_a0->obj.status == (u8) 2) && (var_a0->obj.id == 0xBD) && (var_a0->unk_0B8 == 0x3A)) {
                var_s1 = 0;
                Object_Kill(&var_a0->obj, &var_a0->sfxPos);
            } else {
                var_a0 += 0x2F4;
                if (var_s1 == 0x3C) {
                    var_s1 = 0;
                } else {
                    goto loop_16;
                }
            }
            var_s2 += 1;
        } while (var_s2 < 2);
        var_s2_2 = 0;
        do {
            var_s0 = gObjects2F4;
loop_25:
            var_s1 += 1;
            if (var_s0->obj.status == 0) {
                sp7C = arg0 + (var_s2_2 * 0xC);
                var_s1 = 0;
                Object_2F4_Initialize(var_s0);
                var_s0->obj.status = 1;
                var_s0->obj.id = 0x10D;
                var_s4 = var_s2_2 + 1;
                var_s0->obj.pos.x = arg0->unk_18C[var_s2_2].x;
                var_s0->obj.pos.y = arg0->unk_18C[var_s2_2].y;
                var_s0->unk_050 = var_s4;
                var_s0->obj.pos.z = arg0->unk_18C[var_s2_2].z;
                Object_SetInfo(&var_s0->info, 0x10DU & 0xFFFF);
                if (var_s2_2 == 0) {
                    sp74 = (s32) &D_6030D3C & 0xFFFFFF;
                    temp_fv1_2 = Rand_ZeroOne() * 360.0f;
                    var_s0->unk_114 = temp_fv1_2;
                    Matrix_RotateY(gCalcMatrix, temp_fv1_2 * 0.017453292f, 0U);
                    spAC = 5.0f;
                    spA8 = 5.0f;
                    spA4 = 5.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &spA4, &sp98);
                    var_s0->vel.x = (bitwise f32) sp98;
                    var_s0->unk_10C = 0.4f;
                    var_s0->unk_0B8 = 5;
                    var_s0->vel.z = sp98.z;
                    var_s0->info.hitbox = gSegments[(u32) ((s32) &D_6030D3C * 0x10) >> 0x1C] + sp74 + 0x80000000;
                } else {
                    var_s0->unk_0B8 = 2;
                    var_s0->info.hitbox = gSegments[(u32) ((s32) &D_6030D58 * 0x10) >> 0x1C] + ((s32) &D_6030D58 & 0xFFFFFF) + 0x80000000;
                }
            } else {
                var_s0 += 0x2F4;
                if (var_s1 >= 0x3C) {
                    var_s1 = 0;
                    var_s4 = var_s2_2 + 1;
                } else {
                    goto loop_25;
                }
            }
            var_s2_2 = var_s4;
        } while (var_s4 < 2);
        do {
            sp84 = Rand_ZeroOne();
            temp_fs1 = Rand_ZeroOne();
            temp_fs0 = Rand_ZeroOne();
            func_E16C50_801A9448(&arg0->unk_18C[4], (bitwise f32) &arg0->unk_18C[5], (bitwise Object_2F4 *) ((sp84 - 0.5f) * 20.0f), (bitwise void *) (temp_fs1 * 5.0f), (temp_fs0 - 0.5f) * 10.0f, 0x3A, Rand_ZeroOne() + 0.2f, 0xC8, 0);
            func_8007BC7C(arg0->unk_18C[4].x, arg0->unk_18C[4].y, arg0->unk_18C[4].z + 50.0f, 6.0f);
            var_s1 += 1;
        } while (var_s1 < 0xA);
        func_800815DC();
        func_8007D0E0(arg0->unk_18C[4].x, arg0->unk_18C[4].y, arg0->unk_18C[4].z, 10.0f);
        var_s1_2 = 0;
        do {
            temp_fs1_2 = Rand_ZeroOne();
            temp_fs0_2 = Rand_ZeroOne();
            func_E16C50_801AC8A8(((temp_fs1_2 - 0.5f) * 100.0f) + arg0->unk_18C[4].x, ((temp_fs0_2 - 0.5f) * 200.0f) + arg0->unk_18C[4].y, ((Rand_ZeroOne() - 0.5f) * 200.0f) + (arg0->unk_18C[4].z + 100.0f), 6.0f, 2);
            var_s1_2 += 1;
        } while (var_s1_2 != 0x14);
        func_800815DC();
        func_8007D0E0(arg0->unk_18C[4].x, arg0->unk_18C[4].y, arg0->unk_18C[4].z + 150.0f, 10.0f);
        arg0->timer_0BC = 4;
        arg0->unk_0B8 = 4;
        return;
    case 4:
        if (arg0->timer_0BC == 0) {
            arg0->obj.pos.x = arg0->unk_18C[4].x;
            arg0->obj.pos.y = arg0->unk_18C[4].y;
            arg0->obj.pos.z = arg0->unk_18C[4].z;
            arg0->unk_044 = (u8) D_E16C50_801C04C4[arg0->unk_054];
            func_80066254(arg0);
            Object_Kill(&arg0->obj, &arg0->sfxPos);
            func_8007A6F0(&arg0->obj.pos, 0x19021078);
            return;
        }
        break;
    case 5:
        Math_SmoothStepToAngle(&arg0->obj.rot.y, arg0->unk_114, 0.1f, 10.0f, 0.0001f);
        Math_SmoothStepToAngle(&arg0->obj.rot.x, 90.0f, 0.1f, 1.0f, 0.0001f);
        if (!(gFrameCount & 1) && (arg0->unk_058 == 0)) {
            temp_fs1_3 = Rand_ZeroOne();
            temp_fs0_3 = Rand_ZeroOne();
            func_E16C50_801AC8A8(((temp_fs1_3 - 0.5f) * 200.0f) + arg0->obj.pos.x, ((temp_fs0_3 - 0.3f) * 150.0f) + arg0->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 200.0f) + arg0->obj.pos.z, 6.0f, 2);
        }
        if ((arg0->obj.pos.y < (D_80177940 + 30.0f)) && (arg0->unk_058 == 0)) {
            arg0->unk_058 = 1;
            arg0->unk_10C = 0.0f;
            arg0->vel.z = 0.0f;
            arg0->vel.y = 0.0f;
            arg0->vel.x = 0.0f;
            func_8007A6F0(&arg0->obj.pos, 0x19400007);
            var_s1_3 = 0;
            do {
                temp_fs1_4 = Rand_ZeroOne();
                temp_fs0_4 = Rand_ZeroOne();
                func_8007B8F8(((temp_fs1_4 - 0.5f) * 100.0f) + arg0->obj.pos.x, ((temp_fs0_4 - 0.3f) * 30.0f) + arg0->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 200.0f) + arg0->obj.pos.z, 20.0f);
                var_s1_3 += 1;
            } while (var_s1_3 != 6);
        }
        break;
    }
}

void func_E16C50_801BD17C(s32 arg0, Vec3f *arg1, void *arg2) {
    Vec3f sp2C;

    sp2C.x = D_E16C50_801C04E8.unk0;
    sp2C.y = D_E16C50_801C04E8.unk4;
    sp2C.z = D_E16C50_801C04E8.unk8;
    if (arg2->unkB8 == 3) {
        switch (arg0) {                             /* irregular */
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp2C, arg2 + 0x1BC);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1C8);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp2C, arg2 + 0x18C);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1A4);
            return;
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp2C, arg2 + 0x198);
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x1B0);
            break;
        }
    }
}

void func_E16C50_801BD264(Object_2F4 *arg0) {
    Vec3f sp40;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    s32 temp_v0;

    if (arg0->unk_0B8 != 0) {
        RCP_SetupDL(&gMasterDisp, 0x37);
        temp_v0 = arg0->unk_050;
        switch (temp_v0) {                          /* irregular */
        case 0:
            if (arg0->unk_0B8 != 0) {
                if ((arg0->unk_05C == 0) && (arg0->info.drawType == 2)) {
                    Animation_GetFrameData(&D_6014438, 0, &sp40);
                    Animation_DrawSkeleton(3, &D_6014504, &sp40, NULL, func_E16C50_801BD17C, arg0, gCalcMatrix);
                    return;
                }
                temp_v0_2 = gMasterDisp;
                gMasterDisp = temp_v0_2 + 8;
                temp_v0_2->words.w1 = (u32) &D_6014520;
                temp_v0_2->words.w0 = 0x06000000;
                return;
            }
            break;
        case 1:
            temp_v0_3 = gMasterDisp;
            gMasterDisp = temp_v0_3 + 8;
            temp_v0_3->words.w1 = (u32) &D_60137F0;
            temp_v0_3->words.w0 = 0x06000000;
            return;
        case 2:
            temp_v0_4 = gMasterDisp;
            gMasterDisp = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) &D_6014030;
            temp_v0_4->words.w0 = 0x06000000;
            break;
        }
    }
}

void func_E16C50_801BD3B0(Object_2F4 *arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    Vec3f sp2C;

    Math_SmoothStepToAngle(arg0 + 0x14, arg0->unk_124.z, 0.1f, 100.0f, 0.00001f);
    Math_SmoothStepToAngle(arg0 + 0x10, arg0->unk_130, 0.1f, 100.0f, 0.00001f);
    if (!(gFrameCount & 3)) {
        arg0->unk_124.z = Math_RadToDeg(Math_Atan2F(arg1, arg3));
        arg0->unk_130 = Math_RadToDeg(-Math_Atan2F(arg2, sqrtf((arg1 * arg1) + (arg3 * arg3))));
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0U);
        Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1U);
        Math_SmoothStepToF(arg0 + 0x124, 5.0f, 0.1f, 10.0f, 0.0f);
        sp40 = arg0->unk_124.x;
        if (arg0->unk_058 != 0) {
            sp40 = 50.0f;
        }
        sp3C = 0.0f;
        sp38 = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp38, &sp2C);
        arg0->vel.x = (bitwise f32) sp2C;
        arg0->vel.y = sp2C.y;
        arg0->vel.z = sp2C.z;
    }
}

void func_E16C50_801BD54C(Object_2F4 *arg0) {
    s32 sp6C;
    s32 sp64;
    f32 sp5C;
    f32 sp58;
    f32 sp44;
    Object_2F4 *temp_s0;
    Object_2F4 *var_s0;
    f32 temp_fa0;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft5;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 var_fs0;
    f32 var_fs0_2;
    f32 var_fs0_3;
    f32 var_ft4;
    f32 var_ft5;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;

    if (arg0->unk_0B8 == 2) {
        if (arg0->unk_05C != 0) {
            var_fs0 = 2800.0f;
        } else {
            var_fs0 = 9000.0f;
        }
        if (var_fs0 <= fabsf(arg0->unk_124.y - arg0->obj.pos.z)) {
            arg0->unk_0B8 = 3;
            if (arg0->unk_050 == 0) {
                Audio_PlaySfx(0x19400077U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
    }
    switch (arg0->unk_0B8) {                        /* irregular */
    case 0:
        if (arg0->obj.rot.z != 0.0f) {
            arg0->unk_05C = 1;
            arg0->obj.rot.z = 0.0f;
        }
        arg0->unk_0B8 = 1;
        arg0->unk_124.y = arg0->obj.pos.z;
        break;
    case 1:
        var_s2 = 0;
        sp64 = arg0->index;
        do {
            var_s0 = gObjects2F4;
            var_v0 = 0;
loop_18:
            if (var_s0->obj.status == 0) {
                var_fs0_2 = 100.0f;
                sp6C = var_v0;
                Object_2F4_Initialize(var_s0);
                var_s0->obj.status = 1;
                var_s0->obj.id = 0x10C;
                var_s3 = var_s2 + 1;
                var_s0->unk_050 = var_s3;
                var_s0->unk_060 = sp64;
                var_s0->unk_05C = arg0->unk_05C;
                sp64 = var_v0;
                if (Rand_ZeroOne() < 0.5f) {
                    var_fs0_2 = -100.0f;
                }
                temp_fv1 = (f32) (var_s2 & 7);
                var_s0->obj.pos.x = (Rand_ZeroOne() * 50.0f) + (arg0->obj.pos.x + (temp_fv1 * var_fs0_2));
                sp44 = temp_fv1;
                var_s0->obj.pos.y = (Rand_ZeroOne() * 30.0f) + (arg0->obj.pos.y + (temp_fv1 * (var_fs0_2 * 0.5f)));
                var_s0->obj.pos.z = (Rand_ZeroOne() * -18.0f) + (arg0->obj.pos.z + ((f32) var_s2 * 20.0f));
                var_s0->unk_0B6 = (s16) (s32) (Rand_ZeroOne() * 20.0f);
                var_s0->unk_0B8 = 2;
                var_s0->unk_124.y = arg0->unk_124.y;
                Object_SetInfo(&var_s0->info, (u32) var_s0->obj.id);
            } else {
                var_v0 += 1;
                var_s0 += 0x2F4;
                if (var_v0 == 0x3C) {
                    var_s3 = var_s2 + 1;
                } else {
                    goto loop_18;
                }
            }
            var_s2 = var_s3;
        } while (var_s3 != 0xF);
        arg0->unk_0B8 = 2;
        break;
    case 2:
        temp_fv1_2 = D_80177940 + 30.0f;
        if (arg0->obj.pos.y < temp_fv1_2) {
            arg0->obj.pos.y = temp_fv1_2;
        }
        if ((arg0->unk_058 != 0) || (arg0->timer_0BE != 0)) {
            arg0->timer_0BC = 0;
        } else {
            Math_SmoothStepToF(&arg0->unk_120, D_E16C50_801C04F4[arg0->unk_054], 0.1f, 30.0f, 0.0001f);
            Math_SmoothStepToF(&arg0->obj.pos.z, (gPlayer->camEye.z - D_80177D20) - arg0->unk_120, 0.1f, 30.0f, 0.00001f);
        }
        if ((arg0->timer_0BC == 0) && (arg0->unk_058 == 0) && (arg0->timer_0BE == 0)) {
            arg0->timer_0BC = 0x3C;
            arg0->unk_118 = (Rand_ZeroOne() - 0.5f) * 300.0f;
            temp_fa0 = ((Rand_ZeroOne() - 0.5f) * 100.0f) + 50.0f;
            arg0->unk_11C = temp_fa0;
            temp_fv1_3 = D_80177940 + 30.0f;
            if (temp_fa0 < temp_fv1_3) {
                arg0->unk_11C = temp_fv1_3;
            }
            temp_t1 = arg0->unk_054 + 1;
            arg0->unk_054 = temp_t1;
            arg0->unk_054 = temp_t1 & 3;
        }
        var_ft5 = gPlayer->pos.x - arg0->obj.pos.x;
        sp58 = gPlayer->pos.y - arg0->obj.pos.y;
        var_ft4 = gPlayer->unk_138 - arg0->obj.pos.z;
        if (arg0->timer_0BE == 0) {
            temp_v0 = arg0->unk_050;
            arg0->unk_058 = 0;
            if (temp_v0 == 0) {
                if (D_E16C50_801C41A4 == 0) {
                    var_ft5 = (arg0->unk_118 + gPlayer->pos.x) - arg0->obj.pos.x;
                    sp58 = (arg0->unk_11C + (gPlayer->pos.y - 100.0f)) - arg0->obj.pos.y;
                    var_ft4 = (gPlayer->unk_138 - arg0->unk_120) - arg0->obj.pos.z;
                } else if ((D_E16C50_801C41B8.unk54 != 0.0f) && (D_E16C50_801C41B8.unk58 != 0.0f) && (D_E16C50_801C41B8.unk5C != 0.0f)) {
                    var_ft5 = D_E16C50_801C41B8.unk54 - arg0->obj.pos.x;
                    sp58 = D_E16C50_801C41B8.unk58 - arg0->obj.pos.y;
                    arg0->unk_058 = 1;
                    var_ft4 = D_E16C50_801C41B8.unk5C - arg0->obj.pos.z;
                }
            } else if (D_E16C50_801C41A4 == 0) {
                temp_s0 = &gObjects2F4[arg0->unk_060];
                temp_v1 = temp_v0 - 1;
                if ((temp_v1 == temp_s0->unk_050) && (temp_s0->obj.status != 0) && (temp_s0->obj.id == 0x10C)) {
                    var_ft5 = ((arg0->unk_118 * 0.5f) + temp_s0->obj.pos.x) - arg0->obj.pos.x;
                    sp58 = ((arg0->unk_11C * 0.5f) + temp_s0->obj.pos.y) - arg0->obj.pos.y;
                    var_ft4 = temp_s0->obj.pos.z - arg0->obj.pos.z;
                } else {
                    arg0->unk_050 = temp_v1;
                    var_ft5 = (arg0->unk_118 + gPlayer->pos.x) - arg0->obj.pos.x;
                    sp58 = (arg0->unk_11C + gPlayer->pos.y) - arg0->obj.pos.y;
                    var_ft4 = (gPlayer->unk_138 - arg0->unk_120) - arg0->obj.pos.z;
                    if (arg0->unk_050 < 0) {
                        arg0->unk_050 = 0;
                    }
                }
            } else if ((D_E16C50_801C41B8.unk54 != 0.0f) && (D_E16C50_801C41B8.unk58 != 0.0f) && (D_E16C50_801C41B8.unk5C != 0.0f)) {
                var_fs0_3 = 50.0f;
                if (Rand_ZeroOne() < 0.5f) {
                    var_fs0_3 = -50.0f;
                }
                temp_fv1_4 = (f32) (temp_v0 & 7);
                temp_ft0 = Rand_ZeroOne() * 50.0f;
                sp44 = temp_fv1_4;
                temp_ft5 = (temp_ft0 + (D_E16C50_801C41B8.unk54 + (temp_fv1_4 * var_fs0_3))) - arg0->obj.pos.x;
                sp5C = temp_ft5;
                sp58 = ((Rand_ZeroOne() * 50.0f) + (D_E16C50_801C41B8.unk58 + (temp_fv1_4 * (var_fs0_3 * 0.5f)))) - arg0->obj.pos.y;
                var_ft5 = temp_ft5;
                temp_ft1 = Rand_ZeroOne() * 50.0f;
                arg0->unk_058 = 1;
                var_ft4 = (temp_ft1 + D_E16C50_801C41B8.unk5C) - arg0->obj.pos.z;
            }
        }
        if ((arg0->unk_058 != 0) && (D_E16C50_801C41A4 == 0)) {
            arg0->unk_058 = 0;
            arg0->timer_0BE = 0x14;
            arg0->unk_124.x = 40.0f;
        }
        func_E16C50_801BD3B0(arg0, var_ft5, sp58, var_ft4);
        break;
    case 3:
        arg0->unk_058 = 1;
        func_E16C50_801BD3B0(arg0, (arg0->unk_118 + gPlayer->pos.x) - arg0->obj.pos.x, (arg0->unk_11C + gPlayer->pos.y) - arg0->obj.pos.y, ((gPlayer->unk_138 + 10000.0f) - arg0->unk_120) - arg0->obj.pos.z);
        if ((gPlayer->unk_138 + 1000.0f) < arg0->obj.pos.z) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
        break;
    }
    arg0->unk_0B6 += 1;
    if (Animation_GetFrameCount(&D_60135E0) < arg0->unk_0B6) {
        arg0->unk_0B6 = 0;
    }
}

s32 func_E16C50_801BDDFC(s32 arg0, Gfx **arg1, Vec3f *arg2, Vec3f *arg3, void *arg4) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = 0x2000;
    temp_v1->words.w0 = 0xB7000000;
    if ((arg0 == 1) || (arg0 == 2) || (arg0 == 5)) {
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w1 = 0x2000;
        temp_v1_2->words.w0 = 0xB6000000;
    }
    return 0;
}

void func_E16C50_801BDE6C(Object_2F4 *arg0) {
    Vec3f *sp34;
    Vec3f *temp_a2;

    temp_a2 = arg0->unk_18C;
    sp34 = temp_a2;
    Animation_GetFrameData(&D_60135E0, (s32) arg0->unk_0B6, temp_a2);
    if (arg0->unk_05C == 0) {
        Animation_DrawSkeleton(1, &D_60136CC, temp_a2, func_E16C50_801BDDFC, NULL, arg0, &gIdentityMatrix);
        return;
    }
    Animation_DrawSkeleton(1, &D_60137CC, temp_a2, func_E16C50_801BDDFC, NULL, arg0, &gIdentityMatrix);
}

void func_E16C50_801BDF14(void) {
    ? *var_s1;
    Object_2F4 *var_s0;
    f32 *var_s3;
    f32 temp_ft4;
    s32 var_s2;

    var_s0 = gObjects2F4 + 0x2F4;
    var_s3 = D_E16C50_801C075C;
    var_s1 = &D_E16C50_801C0504;
    var_s2 = 0;
    do {
        Object_2F4_Initialize(var_s0);
        var_s0->obj.status = 1;
        var_s0->obj.id = 0xC3;
        var_s0->obj.pos.x = var_s1->unk0;
        var_s0->obj.pos.y = var_s1->unk4;
        var_s0->obj.pos.z = var_s1->unk8;
        var_s0->unk_0B6 = 0x29;
        var_s0->unk_0F4.y = *var_s3;
        temp_ft4 = Rand_ZeroOne() * 20.0f;
        var_s0->unk_058 = var_s2;
        var_s0->timer_0BC = 0xE7;
        var_s0->unk_114 = 4.5f;
        var_s0->unk_050 = (s32) temp_ft4;
        Object_SetInfo(&var_s0->info, (u32) var_s0->obj.id);
        var_s2 += 1;
        var_s1 += 0xC;
        var_s3 += 4;
        var_s0 += 0x2F4;
    } while (var_s2 != 0x32);
}

void func_E16C50_801BE034(Object *arg0) {
    if (arg0->unkBC == 0) {
        arg0->unk114 = 10.0f;
        Math_SmoothStepToAngle(arg0 + 0xF8, D_E16C50_801C0828[arg0->unk58], 1.0f, 100.0f, 0.00001f);
    }
    arg0->unk50 = (s32) (arg0->unk50 + 1);
    if (arg0->unk50 >= Animation_GetFrameCount(&D_60135E0)) {
        arg0->unk50 = 0;
    }
    if (gPlayer->unk_1D0 >= 5) {
        Object_Kill(arg0, arg0 + 0x100);
    }
}

void func_E16C50_801BE0F0(void *arg0) {
    Vec3f *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Vec3f *temp_a2;

    RCP_SetupDL(&gMasterDisp, 0x3D);
    Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, (u8) 1);
    temp_v0 = gMasterDisp;
    gMasterDisp = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA000000;
    temp_v0->words.w1 = 0xFFFFFF;
    temp_v0_2 = gMasterDisp;
    gMasterDisp = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0x2000;
    temp_v0_2->words.w0 = 0xB6000000;
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_a2 = arg0 + 0x18C;
    sp30 = temp_a2;
    Animation_GetFrameData(&D_60135E0, arg0->unk50, temp_a2);
    Animation_DrawSkeleton(1, &D_60136CC, temp_a2, NULL, NULL, arg0, &gIdentityMatrix);
    temp_v0_3 = gMasterDisp;
    gMasterDisp = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0x2000;
    temp_v0_3->words.w0 = 0xB7000000;
}

void func_E16C50_801BE1FC(Object_80 *arg0) {
    Gfx *temp_v1;

    Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w0 = 0x06000000;
    temp_v1->words.w1 = (u32) D_600EEF0;
}

void func_E16C50_801BE274(Object_2F4 *arg0, f32 arg1, f32 arg2) {
    Vec3f sp64;
    Vec3f sp58;
    ? sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;

    sp4C.unk0 = (s32) D_E16C50_801C08F4.unk0;
    sp4C.unk4 = (s32) D_E16C50_801C08F4.unk4;
    sp4C.unk8 = (s32) D_E16C50_801C08F4.unk8;
    Matrix_RotateY(gCalcMatrix, 0.017453292f * arg1, 0U);
    Matrix_RotateX(gCalcMatrix, 0.017453292f * arg2, 1U);
    sp44 = 0.0f;
    sp40 = 0.0f;
    sp48 = 50.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp40, &sp64);
    sp64 = (bitwise f32) sp64 + arg0->obj.pos.x;
    sp64.y += arg0->obj.pos.y + 8.0f;
    sp40 = 0.0f;
    sp44 = 0.0f;
    sp48 = 80.0f;
    sp64.z = arg0->obj.pos.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp40, &sp58);
    func_8007F04C(0x163, (bitwise f32) sp64, sp64.y, sp64.z, arg2, arg1, 0.0f, 0.0f, 0.0f, 0.0f, (bitwise f32) sp58, sp58.y, sp58.z, 1.0f);
}

void func_E16C50_801BE3F8(Object_2F4 *arg0) {
    f32 sp64;
    f32 sp58;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs2;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    u16 temp_v0;

    temp_v1 = arg0->unk_0B8;
    switch (temp_v1) {                              /* irregular */
    case 0:
        arg0->unk_0CE = 0x1E;
        arg0->unk_114 = 1.0f;
        arg0->unk_118 = 0.9f;
        arg0->unk_0B8 = temp_v1 + 1;
        arg0->unk_11C = 0.8f;
        break;
    case 1:
        if (fabsf(gPlayer->pos.z - arg0->obj.pos.z) <= 3000.0f) {
            arg0->info.hitbox = gSegments[(u32) ((s32) &D_60314E4 * 0x10) >> 0x1C] + ((s32) &D_60314E4 & 0xFFFFFF) + 0x80000000;
            arg0->info.damage = 0;
            arg0->info.bonus = 1;
            arg0->timer_0BC = (u16) (u32) ((Rand_ZeroOne() * 30.0f) + 40.0f);
            arg0->unk_0B8 += 1;
        }
        break;
    case 2:
        arg0->unk_0B6 += 1;
        if (arg0->unk_0B6 == 0xA) {
            var_s0 = 0;
            do {
                temp_fs0 = Rand_ZeroOne();
                func_E16C50_801AC8A8(((temp_fs0 - 0.5f) * 200.0f) + arg0->obj.pos.x, ((Rand_ZeroOne() - 0.5f) * 70.0f) + (arg0->obj.pos.y + 50.0f), arg0->obj.pos.z + 100.0f, 3.0f, 2);
                var_s0 += 1;
            } while (var_s0 != 0xA);
        }
        if ((arg0->unk_0B6 == 0x12) && (arg0->unk_0CE != 0)) {
            arg0->unk_0B6 = 0x11;
            if (fabsf(arg0->obj.pos.z - gPlayer->unk_138) > 1000.0f) {
                temp_v0 = arg0->timer_0BC;
                if (((s32) temp_v0 < 0x14) && !(temp_v0 & 3)) {
                    temp_fs0_2 = (((Rand_ZeroOne() - 0.5f) * 200.0f) + gPlayer->pos.x) - arg0->obj.pos.x;
                    sp64 = (((Rand_ZeroOne() - 0.5f) * 200.0f) + gPlayer->pos.y) - arg0->obj.pos.y;
                    temp_fs1 = gPlayer->unk_138 - arg0->obj.pos.z;
                    sp58 = Math_RadToDeg(Math_Atan2F(temp_fs0_2, temp_fs1));
                    func_E16C50_801BE274(arg0, sp58, Math_RadToDeg(-Math_Atan2F(sp64, sqrtf((temp_fs0_2 * temp_fs0_2) + (temp_fs1 * temp_fs1)))));
                    if (arg0->timer_0BC == 0) {
                        arg0->timer_0BC = (u16) (u32) ((Rand_ZeroOne() * 30.0f) + 40.0f);
                    }
                }
            }
        }
        if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_602201C)) {
            arg0->info.bonus = 0;
            arg0->unk_0B6 = Animation_GetFrameCount(&D_602201C) - 1;
            arg0->unk_0B8 += 1;
        }
        break;
    case 3:
        break;
    }
    if (arg0->unk_0D0 != 0) {
        temp_v0_2 = arg0->unk_0CE;
        arg0->unk_0D0 = 0;
        if (temp_v0_2 != 0) {
            if (arg0->unk_0B8 == 2) {
                arg0->unk_0CE = temp_v0_2 - arg0->unk_0D6;
                if (arg0->unk_0CE <= 0) {
                    arg0->unk_044 = 0;
                    arg0->unk_0CE = 0 & 0xFF;
                    func_80066254(arg0);
                    var_s0_2 = 0;
                    do {
                        temp_fs0_3 = Rand_ZeroOne();
                        func_E16C50_801AC8A8(((temp_fs0_3 - 0.5f) * 200.0f) + arg0->obj.pos.x, ((Rand_ZeroOne() - 0.5f) * 70.0f) + (arg0->obj.pos.y + 50.0f), arg0->obj.pos.z + 100.0f, 3.0f, 2);
                        var_s0_2 += 1;
                    } while (var_s0_2 < 0xA);
                    var_s0_3 = 0;
                    do {
                        temp_fs1_2 = Rand_ZeroOne();
                        temp_fs2 = Rand_ZeroOne();
                        temp_fs0_4 = Rand_ZeroOne();
                        func_80081A8C((temp_fs1_2 * 15.0f) + arg0->obj.pos.x, (temp_fs2 * 3.0f) + arg0->obj.pos.y, (temp_fs0_4 * 5.0f) + arg0->obj.pos.z, (Rand_ZeroOne() * 0.5f) + 1.0f, 7);
                        var_s0_3 += 1;
                    } while (var_s0_3 != 3);
                    func_800815DC();
                    func_8007CF30(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 51.0f, 0x41200000);
                }
            }
            if (arg0->unk_0B8 == 1) {
                arg0->info.hitbox = gSegments[(u32) ((s32) &D_60314E4 * 0x10) >> 0x1C] + ((s32) &D_60314E4 & 0xFFFFFF) + 0x80000000;
                arg0->info.damage = 0;
                arg0->info.bonus = 1;
                arg0->unk_0B8 = 2;
            }
        }
    }
}

void func_E16C50_801BEB1C(Object_2F4 *arg0) {
    Vec3f *sp34;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Vec3f *temp_a2;

    Graphics_SetScaleMtx(3.0f);
    RCP_SetupDL(&gMasterDisp, 0x38);
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w0 = 0xFA000000;
    temp_v1->words.w1 = 0xFF8F8FFF;
    temp_a2 = arg0->unk_18C;
    sp34 = temp_a2;
    Animation_GetFrameData(&D_602201C, (s32) arg0->unk_0B6, temp_a2);
    Animation_DrawSkeleton(1, D_60220E8, temp_a2, NULL, NULL, &arg0->index, &gIdentityMatrix);
    if (arg0->unk_0CE != 0) {
        RCP_SetupDL(&gMasterDisp, 0x37);
        Matrix_Scale(gGfxMatrix, arg0->unk_114, arg0->unk_118, arg0->unk_11C, (u8) 1);
        Matrix_Translate(gGfxMatrix, 0.0f, -8.0f, 51.0f, (u8) 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0x06000000;
        temp_v1_2->words.w1 = (u32) &D_6002C10;
    }
}

void func_E16C50_801BEC68(Object_2F4 *arg0) {

}

void func_E16C50_801BEC74(Object_2F4 *arg0) {

}

void func_E16C50_801BEC80(Player *arg0) {

}

void func_E16C50_801BEC8C(s32 arg0) {

}
