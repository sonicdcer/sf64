#ifndef FOX_END2_DATA
#define FOX_END2_DATA

#include "global.h"
#include "assets/ast_arwing.h"
#include "assets/ast_text.h"
#include "assets/ast_title.h"
#include "assets/ast_ending.h"

typedef struct {
    /* 0x00 */ u8* unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0C */ u16 unk_0C;
    /* 0x0E */ u16 unk_0E;
    /* 0x10 */ u8 unk_10;
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
} Credit; // size = 0x14

typedef struct {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x0C */ Vec3f unk_0C;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ Vec3f unk_24;
    /* 0x30 */ Vec3f unk_30;
    /* 0x3C */ Vec3f unk_3C;
    /* 0x48 */ Vec3f unk_48;
} UnkEnd54; // size = 0x54

typedef struct AssetInfo {
    /* 0x00 */ void* unk_00;
    /* 0x04 */ void* unk_04;
    /* 0x08 */ s16 unk_08;
    /* 0x0C */ u32 unk_0C;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ Vec3f unk_24;
    /* 0x30 */ Vec3f unk_30;
    /* 0x3C */ Vec3f unk_3C;
    /* 0x48 */ Vec3f unk_48;
    /* 0x54 */ Vec3f unk_54;
    /* 0x60 */ Color_RGBA32 fog;
    /* 0x64 */ s16 fogNear;
    /* 0x66 */ s16 fogFar;
    /* 0x68 */ Color_RGBA32 env;
    /* 0x6C */ Color_RGBA32 prim;
    /* 0x70 */ u8 unk_70;
    /* 0x71 */ u8 unk_71;
} AssetInfo; // size = 0x72

void Ending_8018D250(u32 arg0, AssetInfo* asset);
void Ending_8018D28C(s32 arg0, AssetInfo* asset);
void Ending_8018D2C8(u32 arg0, AssetInfo* asset);
void Ending_8018D398(u32 arg0, AssetInfo* asset);
void Ending_8018D4BC(s32 arg0, AssetInfo* asset);
void Ending_8018D638(u32 arg0, AssetInfo* asset);
void Ending_8018D814(u32 arg0, AssetInfo* asset);
void Ending_8018DA0C(u32 arg0, AssetInfo* asset);
bool Ending_8018DCB4(void);
void Ending_8018E1B8(u32 arg0, AssetInfo* asset);
void Ending_8018E7B8(u32 arg0, AssetInfo* asset);
void Ending_Floor_Draw(u32 arg0, AssetInfo* asset);
void Ending_8018F2A8(u32 arg0, AssetInfo* asset);
void Ending_8018F64C(u32 arg0, AssetInfo* asset);
void Ending_8018FC60(u32 arg0, AssetInfo* asset);
void Ending_80190274(u32 arg0, AssetInfo* asset);
void Ending_80190648(s32 arg0, AssetInfo* asset);
void Ending_80190778(u32 arg0, AssetInfo* asset);
void Ending_80190CF0(u32 arg0, AssetInfo* asset);
void Ending_80191234(u32 arg0, AssetInfo* asset);
void Ending_80191294(u32 arg0, AssetInfo* asset);

// clang-format off

u32 D_ending_80192E70 = 0;

Credit D_ending_80192E74[] = {
    "PRODUCER",			        100,	200,    0,  60,    0,	0, 25, 20,
    "SHIGERU MIYAMOTO",		    100,	200,    0,  80,    1,	0, 25, 20,
    
    "DIRECTOR",			        430,	180,    0,  60,    0,	0, 25, 20,
    "TAKAO SHIMIZU",		    430,	180,    0,  80,    1,	0, 25, 20,
    
    "ART DIRECTOR",		        630,	180,    0,  60,    0,	0, 25, 20,
    "TAKAYA IMAMURA",		    630,	180,    0,  80,    1,	0, 25, 20,
    
    "CHIEF PROGRAMMER",		    830,	180,    0,  60,    0,	0, 25, 20,
    "KAZUAKI MORITA",		    830,	180,    0,  80,    1,	0, 25, 20,
    
    "SOUND COMPOSERS",		    1030,	180,    0,  60,    0,	0, 25, 20,
    "KOJI KONDO",		        1030,	180,    0,  80,    1,	0, 25, 20,
    "HAJIME WAKAI",		        1030,	180,    0,  110,   1,	0, 25, 20,
    
    "SOUND EFFECTS PROGRAMMER",	1250,	180,    0,  60,    0,	0, 25, 20,
    "YOJI INAGAKI",		        1250,	180,    0,  80,    1,	0, 25, 20,
    
    "GRAPHIC DESIGNERS",	    1490,	180,    0,  60,    0,	0, 25, 20,
    "YOSHIKI HARUHANA",		    1490,	180,    0,  80,    1,	0, 25, 20,
    "SATORU TAKIZAWA",		    1490,	180,    0,  110,   1,	0, 25, 20,
    "MASANORI SATO",		    1490,	180,    0,  140,   1,	0, 25, 20,
    
    "COURSE DESIGNERS",		    2000,	180,    0,  60,    0,	0, 25, 20,
    "YASUHISA YAMAMURA",	    2000,	180,    0,  80,    1,	0, 25, 20,
    "TAKUJI HOTTA",		        2000,	180,    0,  110,   1,	0, 25, 20,
    "COURSE DESIGNERS",		    2370,	180,    0,  60,    0,	0, 25, 20,
    "DAISUKE TSUJIMURA",	    2370,	180,    0,  80,    1,	0, 25, 20,
    "YASUYUKI OYAGI",		    2370,	180,    0,  110,   1,	0, 25, 20,
    
    "PROGRAMMERS",		        2820,	180,    0,  60,    0,	0, 25, 20,
    "YUICHI YAMAMOTO",		    2820,	180,    0,  80,    1,	0, 25, 20,
    "NOBUO OKAJIMA",		    2820,	180,    0,  110,   1,	0, 25, 20,
    
    "PROGRAMMERS",		        3200,	180,    0,  60,    0,	0, 25, 20,
    "SHIGEKI YOSHIDA",		    3200,	180,    0,  80,    1,	0, 25, 20,
    "TAKAMITSU KUZUHARA",	    3200,	180,    0,  110,   1,	0, 25, 20,
    
    "PROGRAMMERS",		        3500,	180,    0,  60,    0,	0, 25, 20,
    "NOBUHIRO SUMIYOSHI",	    3500,	180,    0,  80,    1,	0, 25, 20,
    "MAKOTO SASAKI",		    3500,	180,    0,  110,   1,	0, 25, 20,
    "MASUMI TARUKADO",		    3500,	180,    0,  140,   1,	0, 25, 20,
    
    "SCRIPT WRITER",		    4100,	180,    0,  60,    0,	0, 25, 20,
    "MITSUHIRO TAKANO",		    4100,	180,    0,  80,    1,	0, 25, 20,
    
    "CHARACTER VOICES",		    4400,	180,    0,  60,    0,	0, 25, 20,
    "MIKE WEST",		        4400,	180,    0,  80,    1,	0, 25, 20,
    "RICK MAY",			        4400,	180,    0,  110,   1,	0, 25, 20,
    "LYSSA BROWNE",		        4400,	180,    0,  140,   1,	0, 25, 20,
    "JOCK BLANEY",		        4400,	180,    0,  170,   1,	0, 25, 20,
    
    "CHARACTER VOICES",		    4700,	180,    0,  60,    0,	0, 25, 20,
    "DAVID WHITE",		        4700,	180,    0,  80,    1,	0, 25, 20,
    "J. GREEN",			        4700,	180,    0,  110,   1,	0, 25, 20,
    "BILL JOHNS",		        4700,	180,    0,  140,   1,	0, 25, 20,
    
    "TECHNICAL SUPPORTERS",	    5050,	120,    0,  60,    0,	0, 16, 13,
    "KENJI MATSUTANI",		    5050,	120,    0,  80,    1,	0, 16, 13,
    "ATSUSHI NISHIWAKI",	    5050,	120,    0,  110,   1,	0, 16, 13,
    "HIDEAKI SHIMIZU",		    5050,	120,    0,  140,   1,	0, 16, 13,
    
    "TECHNICAL SUPPORTERS",	    5280,	120,    0,  60,    0,	0, 16, 13,
    "YASUSHI IDA",		        5280,	120,    0,  80,    1,	0, 16, 13,
    "HIROHITO YOSHIMOTO",	    5280,	120,    0,  110,   1,	0, 16, 13,
    "YOSHINORI TANIMOTO",	    5280,	120,    0,  140,   1,	0, 16, 13,
    
    "TECHNICAL SUPPORTERS",	    5510,	120,    0,  60,    0,	0, 16, 13,
    "TAKAO SAWANO",		        5510,	120,    0,  80,    1,	0, 16, 13,
    "HIRONOBU KAKUI",		    5510,	120,    0,  110,   1,	0, 16, 13,
    "KENJI NISHIZAWA",		    5510,	120,    0,  140,   1,	0, 16, 13,
    
    "TECHNICAL SUPPORTERS",	    5740,	120,    0,  60,    0,	0, 16, 13,
    "TAKUYA KURIBAYASHI",	    5740,	120,    0,  80,    1,	0, 16, 13,
    "TSUYOSHI TAKAHASHI",	    5740,	120,    0,  110,   1,	0, 16, 13,
    "SHIN HASEGAWA",		    5740,	120,    0,  140,   1,	0, 16, 13,
    
    "SUPERVISORS",		        5970,	120,    0,  60,    0,	0, 16, 13,
    "TAKASHI TEZUKA",		    5970,	120,    0,  80,    1,	0, 16, 13,
    "TOSHIHIKO NAKAGO",		    5970,	120,    0,  110,   1,	0, 16, 13,
    "PROGRESS MANAGERS",	    6200,	120,    0,  60,    0,	0, 16, 13,
    "KIMIYOSHI FUKUI",		    6200,	120,    0,  80,    1,	0, 16, 13,
    "KEIZO KATO",		        6200,	120,    0,  110,   1,	0, 16, 13,
    
    "SPECIAL THANKS TO",	    6430,	120,    0,  60,    0,	0, 16, 13,
    "BENIMARU ITOH",		    6430,	120,    0,  80,    1,	0, 16, 13,
    "SUPER MARIO CLUB",		    6430,	120,    0,  110,    1,	0, 16, 13,
    "TRI-FILM",			        6430,	120,    0,  140,   1,	0, 16, 13,
    "EAR FORCE",		        6430,	120,    0,  170,   1,	0, 16, 13,
    
    "ENGLISH VERSION STAFF",	6900,	200,    0,  60,    0,	0, 25, 20,
    "JIM WORNELL",		        6900,	200,    0,  80,    1,	0, 25, 20,
    "KENJI OKUBO",		        6900,	200,    0,  110,   1,	0, 25, 20,
    "GREG RICHARDSON",		    6900,	200,    0,  140,   1,	0, 25, 20,
    "KAYOMI MCDONALD",		    6900,	200,    0,  170,   1,	0, 25, 20,
    "EXECUTIVE PRODUCER",	    7400,	200,    0,  100,   0,	0, 25, 20,
    "HIROSHI YAMAUCHI",		    7400,	200,    0,  120,   1,	0, 25, 20,
    
    "NINTENDO",			        7800,	200,    0,  120,   1,	0, 25, 20,
    aText_THE_END,		            8200,	380,    0,  110,   2,	1, 25, 20,
};

AssetInfo D_ending_801934B4[] = {
    { NULL, Ending_8018D250, 0, 0, 3000, 1000.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 2, 0 },
    { NULL, Ending_8018D4BC, 0, 100, 2800, 0.0f, 59.0f, 58.0f, 13.0f, 100.0f, 60.0f, 50.0f, 40.0f, 40.0f, 40.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D28C, 36, 690, 30, 1.0f, 0.7f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D28C, 36, 800, 119, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D28C, 36, 920, 200, 1.0f, -1.2f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_80190648, 36, 100, 1710, 1.0f, 0.0f, 0.0f, -10000.0f, 0.0f, 0.0f, 0.0f, 40.0f, 40.0f, 40.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018F2A8, 29, 520, 800, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018F64C, 29, 100, 820, 1.0f, -900.0f, 600.0f, -1200.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 4, 0 },
    { NULL, Ending_8018F64C, 29, 920, 960, 1.0f, -900.0f, 600.0f, -1200.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 4, 0 },
    { &aAwWingsClosedAnim, aAwArwingSkel, 29, 100, 1780, 1.0f, -1000.0f, 500.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 3, 0 },
    { aAwFalcoHeadDL, NULL, 29, 920, 150, 1.0f, -1000.0f, 506.8f, -16.0f, 5.0f, -40.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { aAwFalcoHeadDL, NULL, 29, 1070, 19, 1.0f, -1000.0f, 506.8f, -16.0f, 5.0f, -40.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { aAwFalcoHeadDL, NULL, 29, 1089, 1, 1.0f, -1000.0f, 506.8f, -16.0f, 5.0f, -1.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { aAwFalcoHeadDL, NULL, 29, 1090, 30, 1.0f, -1000.0f, 506.8f, -16.0f, 5.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { aAwCockpitGlassDL, NULL, 45, 100, 1020, 1.0f, -1000.0f, 516.9f, -25.9f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {255, 255, 255, 140,}, 7, 0 },
    { NULL, Ending_8018E1B8, 67, 100, 1780, 1.0f, -1000.0f, 500.0f, -64.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.3f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { &aAwWingsClosedAnim, aAwArwingSkel, 29, 100, 1780, 1.0f, -1000.0f, -500.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 5, 0 },
    { NULL, Ending_80190778, 29, 1120, 200, 1.0f, -1000.0f, -493.2f, -16.0f, 0.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { aAwCockpitGlassDL, NULL, 45, 1120, 200, 1.0f, -1000.0f, -483.1f, -25.9f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {255, 255, 255, 140,}, 7, 0 },
    { NULL, Ending_8018E1B8, 67, 100, 1780, 1.0f, -1000.0f, -500.0f, -57.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.3f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { NULL, Ending_8018FC60, 29, 100, 420, 1.0f, 1000.0f, 560.0f, -440.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 4, 0 },
    { NULL, Ending_8018FC60, 29, 520, 130, 1.0f, 1000.0f, 560.0f, -440.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 4.0f, 0.0f, 0.0f, 1.8f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 4, 0 },
    { NULL, Ending_8018FC60, 29, 650, 1230, 1.0f, 800.0f, -300.0f, 350.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 4, 0 },
    { NULL, Ending_80191294, 29, 100, 1780, 1.0f, 1000.0f, 500.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { NULL, Ending_8018E1B8, 67, 100, 1780, 1.0f, 1000.0f, 500.0f, -57.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.3f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { &aAwWingsClosedAnim, aAwArwingSkel, 29, 100, 1780, 1.0f, 1000.0f, -500.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 11, 0 },
    { aAwPeppyHeadDL, NULL, 29, 850, 20, 1.0f, 1000.0f, -493.2f, -16.0f, 5.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 870, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 7.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 871, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 10.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 872, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 14.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 873, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 16.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 874, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 14.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 875, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 11.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 876, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 7.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 877, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 7.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 878, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 10.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 879, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 14.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 880, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 16.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 881, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 14.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 882, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 10.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 883, 1, 1.0f, 1000.0f, -493.2f, -16.0f, 7.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwPeppyHeadDL, NULL, 29, 884, 36, 1.0f, 1000.0f, -493.2f, -16.0f, 5.0f, 0.0f, 0.0f, 0.012f, 0.012f, 0.012f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { aAwCockpitGlassDL, NULL, 45, 850, 70, 1.0f, 999.0f, -483.1f, -25.9f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {255, 255, 255, 140,}, 11, 0 },
    { NULL, Ending_8018E1B8, 67, 100, 1780, 1.0f, 1000.0f, -500.0f, -34.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.3f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 255, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { NULL, Ending_8018F2A8, 29, 100, 420, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018F2A8, 29, 1320, 470, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_80190274, 36, 1810, 1090, 1.0f, -200.0f, 0.0f, -10000.0f, 0.0f, 0.0f, 0.0f, 150.0f, 150.0f, 150.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018F2A8, 29, 1920, 980, 1.0f, 0.0f, 1000.0f, -700.0f, 0.0f, 180.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, -10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 100, 11, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 0, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 1770, 30, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 2780, 30, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 510, 20, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 710, 20, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 910, 20, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 1110, 20, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 1310, 20, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D250, 4, 3000, 2000, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 3, 0 },
    { NULL, Ending_8018D4BC, 0, 3100, 1800, 0.0f, 0.0f, 13.0f, -32.0f, 200.0f, 70.0f, 10.0f, 10.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { aEndBackdrop2DL, NULL, 17, 3100, 1800, 1.0f, 0.0f, -2700.0f, -6900.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018F2A8, 23, 3800, 950, 1.0f, 8000.0f, -5500.0f, -10000.0f, -10.0f, -90.0f, 0.0f, 3.0f, 3.0f, 3.0f, -22.0f, 12.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018E7B8, 67, 3800, 950, 1.0f, 12330.0f, -6500.0f, -9200.0f, 0.0f, 0.0f, -10.0f, 35.0f, 10.0f, 20.0f, -22.0f, 12.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {255, 255, 0, 0,}, {255, 255, 255, 164,}, 0, 0 },
    { NULL, Ending_8018E7B8, 67, 3800, 950, 1.0f, 15600.0f, -6710.0f, -9960.0f, 0.0f, 0.0f, -10.0f, 35.0f, 10.0f, 20.0f, -22.0f, 12.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {240, 176, 64, 0}, 996, 1000, {255, 255, 0, 0,}, {255, 255, 255, 164,}, 0, 0 },
    { NULL, Ending_8018D4BC, 0, 3100, 1800, 0.0f, 0.0f, 32.0f, -32.0f, 200.0f, 70.0f, 10.0f, 10.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_Floor_Draw, 20, 3100, 1800, 1.0f, 0.0f, -470.0f, -3500.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { &aFoxRunningAnim, aFoxSkel, 12, 3100, 1800, 5.0f, -300.0f, -300.0f, -1300.0f, 5.0f, -90.0f, -90.0f, 0.6f, 0.1f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 200,}, 10, 0 },
    { &aFoxRunningAnim, aFoxSkel, 23, 3100, 1800, 5.0f, -300.0f, -300.0f, -1300.0f, 5.0f, -90.0f, 0.0f, 0.6f, 0.6f, 0.6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 10, 0 },
    { &aFalcoRunningAnim, aFalcoSkel, 12, 3100, 1800, 5.0f, -100.0f, -300.0f, -1300.0f, 10.0f, -90.0f, -90.0f, 0.6f, 0.1f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 200,}, 0, 0 },
    { &aFalcoRunningAnim, aFalcoSkel, 23, 3100, 1800, 5.0f, -100.0f, -300.0f, -1300.0f, 10.0f, -90.0f, 0.0f, 0.6f, 0.6f, 0.6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { &aPeppyRunningAnim, aPeppySkel, 12, 3100, 1800, 6.0f, 100.0f, -300.0f, -1300.0f, -10.0f, -90.0f, -90.0f, 0.6f, 0.1f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 200,}, 0, 0 },
    { &aPeppyRunningAnim, aPeppySkel, 23, 3100, 1800, 6.0f, 100.0f, -300.0f, -1300.0f, -10.0f, -90.0f, 0.0f, 0.6f, 0.6f, 0.6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { &aSlippyRunningAnim, aSlippySkel, 12, 3100, 1800, 7.0f, 300.0f, -300.0f, -1300.0f, -15.0f, -90.0f, -90.0f, 0.6f, 0.1f, 6.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 200,}, 0, 0 },
    { &aSlippyRunningAnim, aSlippySkel, 23, 3100, 1800, 7.0f, 300.0f, -300.0f, -1300.0f, -15.0f, -90.0f, 0.0f, 0.6f, 0.6f, 0.6f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D250, 5, 5000, 2000, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 2, 0 },
    { NULL, Ending_8018D4BC, 0, 5100, 1800, 0.0f, 0.0f, 32.0f, -32.0f, 200.0f, 70.0f, 10.0f, 10.0f, 6.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { aEndBackdrop2DL, NULL, 17, 5100, 310, 1.0f, 0.0f, -2800.0f, -6900.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, -4.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { aEndBackdrop2DL, NULL, 17, 5410, 1490, 1.0f, 0.0f, -4040.0f, -6900.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 995, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_80190CF0, 62, 6520, 380, 1.0f, 0.0f, 0.0f, -7000.0f, 0.0f, 0.0f, 0.0f, 12.0f, 12.0f, 12.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 200, 0, {0, 0, 0, 0,}, {255, 255, 255, 0,}, 0, 0 },
    { &aAwWingsHalfOpenAnim, aAwArwingSkel, 29, 5100, 1800, 1.0f, 100.0f, 100.0f, -230.0f, 0.0f, 180.0f, 0.0f, 0.5f, 0.5f, 0.5f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 3, 0 },
    { aEndOrbDL, NULL, 38, 5100, 1800, 1.0f, 100.0f, 95.0f, -200.0f, 0.0f, 0.0f, 0.0f, 0.4f, 0.3f, 0.4f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {255, 0, 0, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { &aAwWingsHalfOpenAnim, aAwArwingSkel, 29, 5100, 1800, 1.0f, 100.0f, -100.0f, -230.0f, 0.0f, 180.0f, 0.0f, 0.5f, 0.5f, 0.5f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 5, 0 },
    { aEndOrbDL, NULL, 38, 5100, 1800, 1.0f, 100.0f, -105.0f, -200.0f, 0.0f, 0.0f, 0.0f, 0.4f, 0.3f, 0.4f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {255, 0, 0, 0,}, {255, 255, 255, 255,}, 5, 0 },
    { &aAwWingsHalfOpenAnim, aAwArwingSkel, 29, 5100, 1800, 1.0f, -100.0f, 100.0f, -230.0f, 0.0f, 180.0f, 0.0f, 0.5f, 0.5f, 0.5f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 7, 0 },
    { aEndOrbDL, NULL, 38, 5100, 1800, 1.0f, -100.0f, 95.0f, -200.0f, 0.0f, 0.0f, 0.0f, 0.4f, 0.3f, 0.4f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {255, 0, 0, 0,}, {255, 255, 255, 255,}, 7, 0 },
    { &aAwWingsHalfOpenAnim, aAwArwingSkel, 29, 5100, 1800, 1.0f, -100.0f, -100.0f, -230.0f, 0.0f, 180.0f, 0.0f, 0.5f, 0.5f, 0.5f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 11, 0 },
    { aEndOrbDL, NULL, 38, 5100, 1800, 1.0f, -100.0f, -105.0f, -200.0f, 0.0f, 0.0f, 0.0f, 0.4f, 0.3f, 0.4f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, {240, 176, 64, 0}, 996, 1000, {255, 0, 0, 0,}, {255, 255, 255, 255,}, 11, 0 },
    { NULL, Ending_8018F2A8, 29, 5100, 1800, 1.0f, 0.0f, 0.0f, -220.0f, 0.0f, 180.0f, 0.0f, 0.1f, 0.1f, 0.1f, 0.0f, 0.0f, -7.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, {240, 176, 64, 0}, 996, 1000, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018DA0C, 76, 6520, 380, 1.0f, 224.0f, 164.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 20, 0, {0, 0, 0, 0,}, {255, 255, 255, 255,}, 0, 0 },
    { NULL, Ending_8018D638, 36, 6900, 300, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 0, 20, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D398, 36, 3000, 370, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 0, 250, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D814, 76, 6122, 200, 1.0f, 128.0f, 100.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 20, 20, {0, 0, 0, 0,}, {255, 255, 255, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 4880, 240, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 10, 10, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 6800, 100, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 100, 0, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_8018D2C8, 36, 7100, 100, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 100, 0, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 },
    { NULL, Ending_80191234, 0, 7200, 100, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, {0, 0, 0, 0}, 0, 0, {0, 0, 0, 0,}, {0, 0, 0, 0,}, 0, 0 }
};

UnkEnd54 D_ending_80195F4C[] = {
    100,      420,     1,        0.0f,     0.0f,   0.0f,  0.0f,  0.0f, 0.0f,    0.0f,    0.0f,     0.0f,     0.0f,   0.0f,      12000.0f, 0.0f,   0.0f,  -40.0f, -0.2f, 0.0f,    0.0f, 520,  200,      0,        1000.0f,  506.8f, -16.0f, 0.0f, 0.0f, 0.0f, 0.0f,   0.0f,
    0.0f,     1022.0f, 503.0f,   300.0f,   0.0f,   0.0f,  -3.0f, 0.0f, 0.0f,    -0.015f, 720,      200,      0,      1000.0f,   -490.0f,  -10.0f, 0.0f,  0.0f,   0.0f,  0.0f,    0.0f, 0.0f, 1015.0f,  -497.0f,  -297.0f,  0.0f,   0.0f,   3.0f, 0.0f, 0.0f, 0.015f, 920,
    200,      0,       -1000.0f, 510.0f,   -10.0f, 0.0f,  0.0f,  0.0f, 0.0f,    0.0f,    0.0f,     -1320.0f, 503.0f, 320.0f,    3.0f,     0.0f,   -3.0f, 0.015f, 0.0f,  -0.015f, 1120, 200,  0,        -1000.0f, -481.0f,  -16.0f, 0.0f,   0.0f, 0.0f, 0.0f, 0.0f,   0.0f,
    -1000.0f, -497.5f, 320.0f,   0.0f,     0.0f,   -3.0f, 0.0f,  0.0f, -0.015f, 1320,    470,      0,        0.0f,   0.0f,      0.0f,     0.0f,   0.0f,  0.0f,   0.0f,  0.0f,    0.0f, 0.0f, -1500.0f, -221.0f,  0.0f,     0.0f,   -22.0f, 0.0f, 0.0f, 0.0f, 1790,   20,
    0,        0.0f,    0.0f,     -5000.0f, 0.0f,   0.0f,  0.0f,  0.0f, 0.0f,    0.0f,    -5050.0f, 0.0f,     0.0f,   0.0f,      0.0f,     0.0f,   0.0f,  0.0f,   0.0f,  1810,    100,  0,    0.0f,     0.0f,     -5000.0f, 0.0f,   0.0f,   0.0f, 0.0f, 0.0f, 0.0f,   -5050.0f,
    0.0f,     0.0f,    100.0f,   0.0f,     0.0f,   1.0f,  0.0f,  0.0f, 0,       10000,   0,        0.0f,     0.0f,   -12800.0f, 0.0f,     0.0f,   0.0f,  0.0f,   0.0f,  0.0f,    0.0f, 0.0f, 0.0f,     0.0f,     0.0f,     0.0f,   0.0f,   0.0f, 0.0f,
};

// clang-format on

#endif
