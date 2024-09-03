#ifndef FOX_OPTION_H
#define FOX_OPTION_H

#include "global.h"

typedef struct {
    /* 0x00 */ s32 type;
    /* 0x04 */ s32 unk_04; // Always set to 0 and never used
    /* 0x08 */ void* texture;
    /* 0x0C */ u16* palette;
    /* 0x10 */ s32 width;
    /* 0x14 */ s32 height;
    /* 0x18 */ f32 xPos;
    /* 0x1C */ f32 yPos;
    /* 0x20 */ f32 xScale;
    /* 0x24 */ f32 yScale;
    /* 0x28 */ s32 red;
    /* 0x2C */ s32 green;
    /* 0x30 */ s32 blue;
    /* 0x34 */ s32 alpha;
} OptionCardTexture; // size = 0x38

typedef struct {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ f32 xScale;
    /* 0x10 */ f32 yScale;
} OptionCardFrame; // size = 0x14

typedef struct {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 range;
} ArwingCursorPos; // size = 0xC

typedef struct {
    /* 0x00 */ OptionCardTexture tex;
    /* 0x38 */ OptionCardFrame frame;
    /* 0x4C */ ArwingCursorPos pos;
    /* 0x58 */ bool drawTex;
    /* 0x5C */ bool drawFrame;
} OptionEntry; // size = 0x60

typedef struct {
    /* 0x0 */ PlanetId start;
    /* 0x4 */ PlanetId end;
    /* 0x8 */ s32 color;
} RouteColoredLine; // size = 0xC

typedef struct {
    s32 unk_0;
    s32 unk_4;
} StickInput;

typedef enum OptionId {
    /* 1000 */ OPTION_MAIN_MENU = 1000,
    /* 2000 */ OPTION_VERSUS_STAGE = 2000,
    /*    0 */ OPTION_MAP = 0,
    /*    1 */ OPTION_TRAINING = 1,
    /*    2 */ OPTION_VERSUS = 2,
    /*    3 */ OPTION_RANKING = 3,
    /*    4 */ OPTION_SOUND = 4,
    /*    5 */ OPTION_DATA = 5,
    /*    6 */ OPTION_EXPERT_SOUND = 6,
    /*   10 */ OPTION_POINT_MATCH = 10, // Point Match
    /*   20 */ OPTION_BR_MATCH = 20,    // Battle Royal Match
    /*   30 */ OPTION_TT_MATCH = 30,    // Time Trial Match
    /*  200 */ OPTION_NAME_ENTRY = 200,
    /*  300 */ OPTION_SCORE = 300,
    /*  400 */ OPTION_INVOICE = 400,
    /*  401 */ OPTION_MAX,
} OptionId;

#define OPTION_COUNT ARRAY_COUNT(sOptionCardList)

extern u8* D_menu_801B68B0[];
extern u8* D_menu_801B68D4[];

extern s32 gTotalHitsRanking[];
extern s32 D_menu_801B827C;   // engine
extern bool D_menu_801B8280;
extern s32 D_menu_801B8284;
extern s32 D_menu_801B8288;

// Planet textures
extern u8 D_menu_801B9410[96 * 96];
extern u8 D_menu_801BB810[96 * 96];
extern u8 D_menu_801BDC10[96 * 96];
extern u8 D_menu_801C0010[96 * 96];
extern u8 D_menu_801C2410[96 * 96];
extern u8 D_menu_801C4810[96 * 96];
extern u8 D_menu_801C6C10[96 * 96];
extern u8 D_menu_801C9010[96 * 96];
extern u8 D_menu_801CB410[96 * 96];

void Title_UpdateEntry(void);
s32 Title_80187ABC(void);
void Title_80187B00(void);
void Title_80187E28(void);
void Title_801888E8(void);
void Title_8018994C(void);
void Title_8018A644(void);
void Title_8018ACEC(void);
void Title_8018B5C4(void);
void Title_8018C644(void);
void Title_80187CA8(void);
s32 Title_80188010(void);
void Title_80189208(void);
void Title_8018A2F8(void);
void Title_8018A990(void);
void Title_8018B038(void);
void Title_8018C114(void);
void Title_8018CB90(void);
void Title_StarfoxLogo_Draw(void);
void Title_8018F77C(void);
void Title_8018F85C(void);
void Title_8018F8E4(void);
void Title_8018FC14(void);
void Title_8018FD08(void);
void Title_8018FF74(void);

void Option_Entry_Update(void);
void Option_Map_Update(void);
void Option_MainMenu_Update(void);
void Option_Training_Update(void);
void Option_MainMenu_Draw(void);
void Option_Versus_Update(void);
void Option_Versus_Draw(void);
void Option_Sound_Setup(void);
void Option_Sound_Update(void);
void Option_Sound_SetSoundMode(void);
void Option_Sound_SetVolumeLevels(void);
void Option_Sound_Draw(void);
void Option_Sound_Speaker_Draw(void);
void Option_ExpertSound_Setup(void);
void Option_ExpertSound_Update(void);
void Option_ExpertSound_Draw(void);
void Option_Data_Setup(void);
void Option_Data_Update(void);
void Option_Data_Select(void);
void Option_Data_Draw(void);
void Option_Ranking_Setup(void);
void Option_Ranking_Update(void);
void Option_Ranking_Draw(void);
void Option_Ranking_Select(void);
void Option_Ranking_Cursor(void);
void Option_Ranking2_Cursor(void);
void Option_RankingMenu_Draw(void);
void Option_RankingMenu2_Draw(void);
void Option_80197914(void);
void Option_OrdinalNumbers_Draw(s32, s32, s32);
void Option_RankingName_Draw(s32, s32, s32);
void Option_RankingTotalHits_Draw(s32, s32, s32);
void Option_RankingTeamAlive_Draw(s32, s32, s32);
void Option_RankingRoute_Draw(s32, f32, f32);
void Option_RankingRouteFrame_Draw(s32, s32, f32, f32, s32);
void Option_RankingHitCount_Draw(s32, s32, f32, f32);
void Option_RankingTeamPresence_Draw(s32, s32, f32, f32);
void Option_RankingPlanetName_Draw(s32, s32, f32, f32);
void Option_RankingPlanetRoute_Draw(s32, f32, s32);
void Option_RankingRouteMedal_Draw(f32 xPos, f32 yPos, f32 zPos);
s32 Option_GetRouteLineColor(PlanetId start, PlanetId end);
void Option_VersusMenu_Setup(void);
void Option_VersusMenu_Update(void);
void Option_VersusMenu_Cursor(void);
void Option_VersusMenu_Draw(void);
void Option_VS_CharSelect_Draw(s32);
void Option_VS_N64Console_Draw(void);
void Option_VersusStage_Setup(void);
void Option_8019A080(void);
void Option_VersusStage_Update(void);
void Option_Vs_PointMatch_Update(void);
void Option_Vs_BattleRoyal_Update(void);
void Option_Vs_TimeTrial_Update(void);
void Option_8019A298(void);
void Option_8019A2E0(void);
void Option_8019A4DC(void);
void Option_8019A6DC(void);
void Option_8019A954(void);
void Option_VersusStage_Draw(void);
void Option_8019AB30(void);
void Option_8019AD84(void);
void Option_8019AFFC(void);
void Option_8019B1F8(void);
void Option_8019B3DC(void);
void Option_8019B5AC(void);
void Option_8019B6D8(f32 xPos, f32 yPos, f32 offset, s32 r, s32 g, s32 b);
void Option_8019B7D4(void);
void Option_8019B8A0(OptionId arg0);
void Option_8019B8C8(void);
void Option_DrawMenuLabel(void);
void Option_DrawMenuCard(OptionCardFrame arg0);
void Option_DrawMenuArwing(ArwingCursorPos arwing);
void Option_DrawArwing(f32, f32, f32, f32, f32, f32);
void Option_8019BDF0(void);
void Option_8019BE7C(f32, f32, f32, f32*, f32*, f32*);
void Option_8019BF34(void);
void Option_8019C04C(void);
void Option_DrawCardLabel(OptionCardTexture tex);
bool Option_Input_MoveCursor(s32* arg0, s32 arg1, bool arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 controllerNum,
                     StickInput* stickY);
s32 Option_8019C5A0(s32*);
bool Option_8019C66C(f32* arg0, f32 arg1, f32 arg2, StickInput* arg3);
void Option_8019C824(f32*);
s32 Option_8019C8C4(void);
void Option_NameEntry_Update(void);
void Option_8019CBC0(void);
void Option_8019CD54(void);
void Option_NameEntry_Draw(void);
void Option_8019D624(void);
void Option_8019DB20(s32, f32, f32, f32, f32, f32, f32, f32);
s32 Option_8019DCE8(s32 arg0);
void Option_Score_Update(void);
void Option_8019DE74(void);
void Option_Score_Draw(void);
void Option_Invoice_Update(void);
void Option_InvoiceDraw(void);

void Map_Main(void);
void Map_801A07E8(u8*, u8*, f32*);
void Map_801AD7EC(s32, s32, s32);
void Map_801A9FD4(s32);

#endif
