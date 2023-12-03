#ifndef FOX_OPTION_H
#define FOX_OPTION_H

#include "global.h"

typedef struct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ void* unk_08;
    /* 0x0C */ u16 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
} MenuContext_00; // size = 0x38

typedef struct {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
} MenuContext_38; // size = 0x14

typedef struct {
    /* 0x0 */ s32 unk_0;
    /* 0x4 */ s32 unk_4; /* inferred */
    /* 0x8 */ s32 unk_8; /* inferred */
} MenuContext_4C; // size = 0xC

typedef struct {
    /* 0x00 */ MenuContext_00 unk_00;
    /* 0x38 */ MenuContext_38 unk_38;
    /* 0x4C */ MenuContext_4C unk_4C;
    /* 0x58 */ s32 unk_58;
    /* 0x5C */ s32 unk_5C;
} MenuContext; // size = 0x60

typedef struct {
    s32 unk_0;
    s32 unk_4;
} UnkStruct_D_EBFBE0_801B9250;

typedef struct {
    /* 0x0 */ s32 unk_0;
    /* 0x4 */ s32 unk_4;
    /* 0x8 */ s32 unk_8;
} UnkStruct_D_EBFBE0_801AED4C; // size = 0xC


extern f32 D_EBFBE0_801AE588[];
extern f32 D_EBFBE0_801AE5A0[];
extern f32 D_EBFBE0_801AE5C4;
extern f32 D_EBFBE0_801AE5E8[2];
extern f32 D_EBFBE0_801AE5F0[2];
extern f32 D_EBFBE0_801AE5F8[2];
extern f32 D_EBFBE0_801AE600[2];
extern f32 D_EBFBE0_801AE608[];
extern f32 D_EBFBE0_801AE620[];

extern MenuContext D_EBFBE0_801AE878[];

extern u8 D_EBFBE0_801AE998[];
extern u8 D_EBFBE0_801AE99C[];

extern Gfx D_EBFBE0_801AEC30[];
extern Gfx D_EBFBE0_801AEC88[];
extern Gfx D_EBFBE0_801AECE0[];

extern u8* D_EBFBE0_801AECF8[];

extern UnkStruct_D_EBFBE0_801AED4C D_EBFBE0_801AED4C[24];

extern s8* D_EBFBE0_801AEEAC[];

extern Gfx D_EBFBE0_801AEF30[];

extern u8 D_EBFBE0_801AEF5C[];
extern f32 D_EBFBE0_801AEF84[];
extern f32 D_EBFBE0_801AEF90[];
extern f32 D_EBFBE0_801AEF9C[];

extern s8* D_EBFBE0_801AF0C4[];
extern s32 D_EBFBE0_801AF0D0[];
extern s32 D_EBFBE0_801AF0DC[];
extern s32 D_EBFBE0_801AF0E8[];

extern Vec3f D_EBFBE0_801AF100[];
extern Vec3f D_EBFBE0_801AF118[];
extern f32 D_EBFBE0_801AF13C;
extern f32 D_EBFBE0_801AF140;
extern f32 D_EBFBE0_801AF144;

extern void* D_EBFBE0_801B68B0[];
extern void* D_EBFBE0_801B68D4[];

extern s32 D_EBFBE0_801B68F8;

extern s32 D_EBFBE0_801B81A8[][3];

extern s32 D_EBFBE0_801B914C;
extern s32 D_EBFBE0_801B9158;
extern s32 D_EBFBE0_801B91A0;
extern s32 D_EBFBE0_801B91B4;
extern s32 D_EBFBE0_801B91B8;
extern s32 D_EBFBE0_801B91D0;
extern f32 D_EBFBE0_801B91D4;
extern f32 D_EBFBE0_801B91D8;
extern f32 D_EBFBE0_801B91DC;
extern f32 D_EBFBE0_801B91E0;
extern f32 D_EBFBE0_801B91E4;
extern f32 D_EBFBE0_801B91E8;
extern s32 D_EBFBE0_801B9124;
extern s32 D_EBFBE0_801B912C;
extern s32 D_EBFBE0_801B9178;
extern s32 D_EBFBE0_801B917C;
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9180;
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9188;
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9190;
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9198;
extern s32 D_EBFBE0_801B91BC;
extern f32 D_EBFBE0_801B91FC;
extern f32 D_EBFBE0_801B9200;
extern f32 D_EBFBE0_801B9204;
extern f32 D_EBFBE0_801B9208;
extern s32 D_EBFBE0_801B9214;
extern f32 D_EBFBE0_801B9218;
extern f32 D_EBFBE0_801B921C;
extern f32 D_EBFBE0_801B9220;
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9250;
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9258;
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9260;
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9268;
extern f32 D_EBFBE0_801B9270[];
extern s32 D_EBFBE0_801B9284;
extern s32 D_EBFBE0_801B9288;
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9290;
extern f32 D_EBFBE0_801B9298[];
extern s32 spectrumAnalizerMode;
extern s32 D_EBFBE0_801B931C;
extern u8 D_EBFBE0_801B931F;
extern bool D_EBFBE0_801B9320; // MusicPlaying status in the expert sound options
extern s32 D_EBFBE0_801B9340;
extern s32 D_EBFBE0_801B9348[4];
extern f32 D_EBFBE0_801B9358[4];
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B93A0[4];
extern u8 D_EBFBE0_801B93C4;
extern s32 D_EBFBE0_801B93D0;
extern s32 D_EBFBE0_801B93E8;
extern s32 D_EBFBE0_801B93E0;
extern s32 D_EBFBE0_801B93E4;
extern s32 D_EBFBE0_801B93EC;
extern f32 D_EBFBE0_801B93F0;
extern f32 D_EBFBE0_801B93F4;
extern f32 D_EBFBE0_801B93F8;

// Planet textures
extern s8 D_EBFBE0_801BB810[96 * 96];
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9400;
extern UnkStruct_D_EBFBE0_801B9250 D_EBFBE0_801B9408;
extern s8 D_EBFBE0_801B9410[96 * 96];
extern s8 D_EBFBE0_801BDC10[96 * 96];
extern s8 D_EBFBE0_801C0010[96 * 96];
extern s8 D_EBFBE0_801C2410[96 * 96];
extern s8 D_EBFBE0_801C4810[96 * 96];
extern s8 D_EBFBE0_801C6C10[96 * 96];
extern s8 D_EBFBE0_801C9010[96 * 96];
extern s8 D_EBFBE0_801CB410[96 * 96];

extern f32 D_EBFBE0_801CD818[];

extern s32 D_EBFBE0_801B9090;
extern s32 D_EBFBE0_801B9094;
extern s32 D_EBFBE0_801B9098;
extern s32 D_EBFBE0_801B90A0[];
extern s32 D_EBFBE0_801B90B0[];
extern f32 D_EBFBE0_801B911C;
extern f32 D_EBFBE0_801B9120;
extern s32 D_EBFBE0_801B9128;
extern s32 D_EBFBE0_801B9130;
extern s32 D_EBFBE0_801B9134;
extern s32 D_EBFBE0_801B9138;
extern s32 D_EBFBE0_801B913C;
extern u8 D_EBFBE0_801B9150[][2];
extern s32 D_EBFBE0_801B91A4;
extern s32 D_EBFBE0_801B91A8;
extern s32 D_EBFBE0_801B91AC;
extern s32 D_EBFBE0_801B91B0;
extern s32 D_EBFBE0_801B91C0;
extern s32 D_EBFBE0_801B91C4;
extern s32 D_EBFBE0_801B91C8;
extern s32 D_EBFBE0_801B91CC;
extern f32 D_EBFBE0_801B91EC;
extern s32 D_EBFBE0_801B91F0;
extern f32 D_EBFBE0_801B91F4;
extern f32 D_EBFBE0_801B91F8;
extern f32 D_EBFBE0_801B9224;
extern f32 D_EBFBE0_801B9228;
extern s32 D_EBFBE0_801B922C;
extern s32 D_EBFBE0_801B9230;
extern s32 D_EBFBE0_801B9234;
extern s32 D_EBFBE0_801B9238;
extern s32 D_EBFBE0_801B923C;
extern s32 D_EBFBE0_801B9240;
extern s32 D_EBFBE0_801B9244;
extern s32 D_EBFBE0_801B9248;
extern u8 D_EBFBE0_801B924C;
extern s32 D_EBFBE0_801B9330[];
extern s32 D_EBFBE0_801B933C;
extern f32 D_EBFBE0_801B9368;
extern s32 D_EBFBE0_801B936C;
extern f32 D_EBFBE0_801B9370;
extern s32 D_EBFBE0_801B9374;
extern f32 D_EBFBE0_801B9378;
extern s32 D_EBFBE0_801B937C;
extern s32 D_EBFBE0_801B93D4;
extern s32 D_EBFBE0_801B93D8;
extern s32 D_EBFBE0_801B93DC;

void func_EBFBE0_801877F0(void);
 s32 func_EBFBE0_80187ABC(void);
void func_EBFBE0_80187B00(void);
void func_EBFBE0_80187E28(void);
void func_EBFBE0_801888E8(void);
void func_EBFBE0_8018994C(void);
void func_EBFBE0_8018A644(void);
void func_EBFBE0_8018ACEC(void);
void func_EBFBE0_8018B5C4(void);
void func_EBFBE0_8018C644(void);
void func_EBFBE0_80187CA8(void);
s32 func_EBFBE0_80188010(void);
void func_EBFBE0_80189208(void);
void func_EBFBE0_8018A2F8(void);
void func_EBFBE0_8018A990(void);
void func_EBFBE0_8018B038(void);
void func_EBFBE0_8018C114(void);
void func_EBFBE0_8018CB90(void);
void func_EBFBE0_8018F680(void);
void func_EBFBE0_8018F77C(void);
void func_EBFBE0_8018F85C(void);
void func_EBFBE0_8018F8E4(void);
void func_EBFBE0_8018FC14(void);
void func_EBFBE0_8018FD08(void);
void func_EBFBE0_8018FF74(void);
void func_EBFBE0_8018D2B8(s32);
void func_EBFBE0_8018EA78(s32);

void func_EBFBE0_80191B20(void);
void func_EBFBE0_80192190(void);
void func_EBFBE0_801928BC(void);
void func_EBFBE0_80192D58(void);
void func_EBFBE0_80192938(void);
void func_EBFBE0_801929F0(void);
void func_EBFBE0_80193864(void);
void func_EBFBE0_80193C4C(void);
void func_EBFBE0_801944F0(void);
void func_EBFBE0_80194678(void);
void func_EBFBE0_801948A8(void);
void func_EBFBE0_80194AEC(void);
void func_EBFBE0_80194BD0(void);
void func_EBFBE0_80194CE4(void);
void func_EBFBE0_801952B4(void);
void func_EBFBE0_801958DC(void);
void func_EBFBE0_80195944(void);
void func_EBFBE0_80195B74(void);
void func_EBFBE0_80196260(void);
void func_EBFBE0_801962A4(void);
void func_EBFBE0_8019669C(void);
void func_EBFBE0_80196894(void);
void func_EBFBE0_80196E54(void);
void func_EBFBE0_80196EFC(void);
void func_EBFBE0_80196F9C(void);
void func_EBFBE0_80196FC4(void);
void func_EBFBE0_80197074(void);  
void func_EBFBE0_8019715C(void);      
void func_EBFBE0_801973C0(void); 
void func_EBFBE0_8019752C(void);
void func_EBFBE0_80197914(void);
void func_EBFBE0_80197A3C(s32, s32, s32);
void func_EBFBE0_80197D30(s32, s32, s32);
void func_EBFBE0_80197DE4(s32, s32, s32);
void func_EBFBE0_80197F74(s32, s32, s32);
void func_EBFBE0_80198164(s32, f32, f32);
void func_EBFBE0_801982B0(s32, s32, f32, f32, s32);
void func_EBFBE0_801984D0(s32, s32, f32, f32);
void func_EBFBE0_80198608(s32, s32, f32, f32);
void func_EBFBE0_8019882C(s32, s32, f32, f32);
void func_EBFBE0_8019896C(s32, f32, s32);
void func_EBFBE0_80199198(f32 arg0, f32 arg1, f32 arg2);
s32 func_EBFBE0_80199284(s32 arg0, s32 arg1);
void func_EBFBE0_801992C4(void);
void func_EBFBE0_80199424(void);
void func_EBFBE0_8019949C(void);
void func_EBFBE0_8019978C(void);
void func_EBFBE0_80199820(s32);
void func_EBFBE0_80199EA8(void);
void func_EBFBE0_80199FA8(void);
void func_EBFBE0_8019A080(void);
void func_EBFBE0_8019A0B8(void);
void func_EBFBE0_8019A124(void);
void func_EBFBE0_8019A1A8(void);
void func_EBFBE0_8019A214(void);
void func_EBFBE0_8019A298(void);
void func_EBFBE0_8019A4DC(void);
void func_EBFBE0_8019A6DC(void);
void func_EBFBE0_8019A954(void);
void func_EBFBE0_8019AAB4(void);
void func_EBFBE0_8019B5AC(void);
void func_EBFBE0_8019B7D4(void);
void func_EBFBE0_8019B8A0(s32 arg0);
void func_EBFBE0_8019B8C8(void);
void func_EBFBE0_8019B9C0(void); 
void func_EBFBE0_8019BDF0(void);
void func_EBFBE0_8019BAB8(MenuContext_38 arg0);
void func_EBFBE0_8019BBA4(MenuContext_4C arg0);
void func_EBFBE0_8019BF34(void);
void func_EBFBE0_8019B6D8(f32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_EBFBE0_8019C120(MenuContext_00 arg0);
s32 func_EBFBE0_8019C418(s32* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, UnkStruct_D_EBFBE0_801B9250* arg8);
void func_EBFBE0_8019C824(f32* );
s32 func_EBFBE0_8019C8C4(void);
void func_EBFBE0_8019CAE0(void);
void func_EBFBE0_8019CBC0(void);
void func_EBFBE0_8019CD54(void);
void func_EBFBE0_8019D118(void);
void func_EBFBE0_8019D624(void);
s32 func_EBFBE0_8019DCE8(s32 arg0);
void func_EBFBE0_8019DD44(void);
void func_EBFBE0_8019DE74(void);
void func_EBFBE0_8019DF64(void);
void func_EBFBE0_8019E030(void);
void func_EBFBE0_8019E284(void);
void func_EBFBE0_801906A0(void);
void func_EBFBE0_80190C9C(void);
void func_EBFBE0_80190E64(void);
void func_EBFBE0_801918FC(void);
void func_EBFBE0_8019111C(void);
void func_EBFBE0_80191674(f32, f32, f32, f32*, f32*, f32*);
s32 func_EBFBE0_8019C5A0(s32*);
s32 func_EBFBE0_8019C66C(f32* arg0, f32 arg1, f32 arg2, UnkStruct_D_EBFBE0_801B9250* arg3);
void func_EBFBE0_8019E8D0(void);
void func_EBFBE0_801A07E8(u8*, u8*, f32*);
void func_EBFBE0_801AD7EC(s32, s32, u8);

#endif
