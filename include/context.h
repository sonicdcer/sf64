#ifndef CONTEXT_H
#define CONTEXT_H

#include "libc/stdbool.h"
#include "sf64math.h"
#include "structs.h"
#include "gfx.h"
#include "sf64level.h"
#include "sf64thread.h"
#include "sf64object.h"
#include "sf64player.h"

extern s32 D_80161A70; // Color32?
extern s32 D_80161A74;
extern s32 D_80161A78;
extern s32 D_80161A7C;
extern s32 D_80161A80;
extern s32 D_80161A84;
extern s32 D_80161A88;
extern s32 D_80161A8C;
extern u8 gGoldRingCount[4];
extern u8 D_80161A94[4];
extern s32 gHitCount;
extern s32 gSavedHitCount;
extern s16 gLifeCount[4];
extern LaserStrength gLaserStrength[4];
//
extern s32 D_80161AB8;
// 0x44
extern Object_80 gObjects80[50];
extern Object_4C gObjects4C[40];
extern Actor gActors[60];
extern Boss gBosses[4];
extern Effect gEffects[100];
extern Item gItems[20];
extern PlayerShot gPlayerShots[16];
extern UnkEntity30 gUnkEntities30[100];
extern UnkEntity28 gUnkEntities28[65];
extern BonusText gBonusText[10];
// 0x100
extern s32 D_80176550[2];
extern f32 D_80176558[2][100];
extern f32 D_80176878[2][100];
extern f32 D_80176B98[2][100];
extern f32 D_80176EB8[2][100];
extern f32 D_801771D8[2][100];
extern s32 gOverlaySetup;
extern f32 D_80177500[2][100];
extern s32 gOverlayStage;
extern s32 D_80177824;
extern u16 D_80177828;
extern s32 D_8017782C;
extern u8 D_80177830;
extern GameState gGameState;
extern s32 D_80177838;
extern s32 D_Timer_8017783C;
extern s32 D_80177840; // Stage clear time
extern s32 D_80177844;
extern s32 gBossHealthBar;
extern OptionState gOptionMenuStatus;
extern s32 D_80177850;
extern s32 D_80177854;
extern s32 D_80177858[4];
extern s32 D_80177868;
//
extern s32 D_80177870[4];
extern LevelMode gLevelMode;
//
extern s32 gHandicap[4];
extern DrawMode gDrawMode;
extern VsStage gVersusStage;
extern s32 gPlayerNum;
extern s32 D_801778A4;
extern s32 gCamCount;
extern s32 D_801778AC;
extern s32 gTeamShields[6];
extern s32 D_801778C8;
//
extern s32 gSavedTeamShields[6];
extern bool gVersusMode;
//
extern UNK_TYPE D_801778F0[6];
extern u16 gBoostButton[4];
extern s32 gTeamDamage[6];
extern u16 gBrakeButton[4];
extern u8 D_80177930;
//
extern u16 gShootButton[4];
extern f32 gGroundLevel;
//
extern u16 gBombButton[4];
extern f32 D_80177950;
//
extern f32 D_80177958[4];
extern f32 D_80177968;
extern s32 D_8017796C;
extern f32 D_80177970;
extern OSContPad* gInputHold;
extern f32 D_80177978;
extern OSContPad* gInputPress;
extern f32 D_80177980;
extern u8* D_80177984;
extern f32 D_80177988;
//
extern s32 D_80177990[4];
extern f32 D_801779A0;
//
extern f32 D_801779A8[4];
extern f32 D_801779B8;
extern u8 D_801779BC;
extern f32 D_801779C0;
//
extern s32 gChargeTimers[4];
extern Vec3f D_801779D8;
extern f32 D_801779E4;
extern Vec3f D_801779E8;
extern f32 D_801779F4;
extern bool gExpertMode;
//
extern s32 D_Timer_80177A00[4];
extern s32 D_80177A10[10];
extern s32 D_Timer_80177A38[4];
extern f32 D_80177A48[10];
extern s32 D_Timer_80177A70[4];
extern s32 gCsFrameCount;
//
extern s32 D_Timer_80177A88[4];
extern u8 D_80177A98;
//
extern f32 D_80177AA0[4];
extern u8 D_80177AB0;
//
extern f32 D_80177AB8[4];
extern u8 D_80177AC8;
//
extern s32 D_80177AD0[4];
extern s32 D_80177AE0;
//
extern s32 D_80177AE8[4];
extern s32 gMainController;
//
extern s32 D_80177B00[4][4];
extern s32 D_80177B40;
extern u8 D_Timer_80177B44;
extern s32 gCurrentPlanet; // D_80177B48 // Arrow pointer?
extern u8 D_80177B4C;
extern s32 D_80177B50[7];
extern u8 D_80177B6C;
extern s32 D_80177B70[7];
extern u8  D_80177B8C;
extern s32 D_80177B90[7];
extern u8 D_80177BAC;
extern s32 D_80177BB0[7];
//
extern u16 D_Timer_80177BD0[4];
extern s32 D_80177BD8[22]; // overruns D_80177C30?
// -0x8??
extern u16 D_80177C30[4];
extern s32 D_80177C38[6];
extern s32 D_80177C50;
extern s32 D_80177C58[6];
// 0x1C
extern s32 D_80177C70;
extern u8  gSoundMode;
extern s32 D_80177C78;
//
extern s32 gVolumeSettings[3];
extern s32 D_80177C8C;
extern u16 D_80177C90;
extern s32 D_80177C94;
extern u8  gLevelType;
extern s32 D_80177C9C;
extern s32 D_80177CA0;
extern s32 D_80177CA4;
//
extern s32 D_80177CAC;
extern f32 D_80177CB0;
extern s32 D_80177CB4;
//
extern s32 D_80177CBC;
extern f32 D_80177CC0;
extern s32 D_80177CC4;
extern f32 D_80177CC8;
//
extern s32 D_80177CD0[6];
extern f32 D_80177CE8;
//
extern s32 D_80177CF0[6];
extern f32 D_80177D08;
//
extern s32 gRightWingHealth[4];
extern f32 D_80177D20;
//
extern s32 gLeftWingHealth[4];
extern f32 D_80177D38;
//
extern s32 D_80177D40[4];
extern f32 D_80177D50;
//
extern s32 D_80177D58[4];
extern f32 D_80177D68;
//
extern s32 D_80177D70[4];
// 0x8
extern s32 D_80177D88[4];
// 0x8
extern s32 gBombCount[4];
extern s32 gGameFrameCount;
//
extern s32 D_80177DB8[4];
extern s32 D_80177DC8;
//
extern s32 D_80177DD0[4][10];
extern s32 D_80177E70;
extern s32 D_80177E74;
extern s32 D_80177E78;
extern s32 D_80177E7C;
extern s32 D_80177E80;
extern s32 D_80177E84;
extern Vec3f D_80177E88;
//
extern Vec3f D_80177E98[10];
extern Vec3f D_80177F10;
// 0xC
extern f32 D_80177F24[60];
// 0x18
extern f32 D_8017802C[60];
// 0x10
extern s32 D_8017812C;
//
extern f32 D_80178134[60];
// 0x10
extern LevelId gCurrentLevel;
extern u8 D_80178238[60];
// 0x8
extern s32 D_8017827C;
extern Player* gPlayer;
extern s32 gBossActive;
extern f32* D_80178288;
extern s32 D_8017828C;
extern f32* D_80178290;
extern s32 D_80178294;
extern u32* D_80178298;
extern s32 gRadioState;
//
extern s32 D_801782A4;
extern Object_58* gObjects58;
extern s32 D_Timer_801782AC;
//
extern s32 D_Timer_801782B4;
extern s32 D_801782B8;
extern s32 D_801782BC;
extern s32 D_801782C0;
extern PosRot* D_801782C4;
extern s32 D_801782C8;
extern f32* D_801782CC;
extern s32 D_801782D0;
extern f32* D_801782D4;
extern s32 D_801782D8;
extern f32* D_801782DC;
//
extern f32* D_801782E4;
extern s32 D_801782E8;
extern f32* D_801782EC;
// 0x8
extern s32 D_801782F8;
extern s32 D_801782FC;
extern s32 D_80178300;
//
extern u16* D_80178308;
//
extern ObjectInit* D_80178310;
// 0xC
extern s32 gFogRed;
//
extern s32 gFogGreen;
//
extern s32 gFogBlue;
//
extern s32 gFogAlpha;
//
extern s32 D_80178340; // alpha something
//
extern s32 D_80178348; // red something
//
extern s32 D_80178350; // green something
extern s32 D_80178354; // blue something
extern s32 D_80178358; // alpha target
extern s32 D_8017835C; // alpha step
extern s32 D_80178360; // 2 lights second color
extern s32 D_80178364;
extern s32 D_80178368;
extern f32 D_8017836C; // 2 lights second color brightness
extern f32 D_80178370; // Vec3f?
extern f32 D_80178374;
extern f32 D_80178378;
extern s32 D_8017837C;
extern u32 D_80178380[4]; // player alphas
extern s32 D_80178390[4]; // player reds
extern s32 D_801783A0[4]; // player greens
extern s32 D_801783B0[4]; // player alphas
extern UNK_TYPE D_801783C0[4];
extern f32 D_801783D0; // something x translate
extern f32 D_801783D4; // something y translate
extern s32 gFogNear; //near
extern s32 gFogFar; //far
// 0x30
extern s32 D_80178410;
extern f32 D_80178414;
extern f32 D_80178418;
//
extern f32 D_80178420;
extern f32 D_80178424;
extern f32 D_80178428;
extern f32 D_8017842C;
extern f32 D_80178430;
// 0xC
extern f32 D_80178440;
extern f32 D_80178444;
extern f32 D_80178448;
//
extern f32 D_80178450[3];
//
extern f32 D_80178460[3];
//
extern f32 D_80178470[3];
extern f32 D_8017847C;
extern s32 D_80178480;
extern s32 D_80178484;
extern bool D_80178488;
// 0x8
extern s32 D_80178494;
extern f32 D_80178498;
extern f32 D_8017849C;
extern f32 D_801784A0;
extern s32 D_801784A4;
//
extern s32 D_801784AC;
// 0x8
extern f32 D_801784B8; // effective Vec3f
extern f32 D_801784BC;
extern f32 D_801784C0;
extern f32 D_801784C4; // effective Vec3f
extern f32 D_801784C8;
extern f32 D_801784CC;
extern f32 D_801784D0; // effective Vec3f
extern f32 D_801784D4;
extern f32 D_801784D8;
extern s32 gLight1x; // Vec3i light direction
extern s32 gLight1y;
extern s32 gLight1z;
extern f32 D_801784E8;
extern f32 D_801784EC; // effective Vec3f?
extern f32 D_801784F0;
extern f32 D_801784F4;
extern f32 D_801784F8; // effective Vec3f
extern f32 D_801784FC;
extern f32 D_80178500;
extern s32 gLight2x; // Vec3i light direction alternate
extern s32 gLight2y;
extern s32 gLight2z;
extern f32 D_80178510;
// 0xC
extern f32 D_80178520; // effective Vec3f
extern f32 D_80178524;
extern f32 D_80178528;
// 0xC
extern f32 D_80178538;
extern f32 D_8017853C;
extern s32 D_80178540;
extern s32 D_80178544;
extern s32 gLight1R; // Color32 light color 1
extern s32 gLight1G;
extern s32 gLight1B;
extern s32 gAmbientR; // Color32 ambient color
extern s32 gAmbientG;
extern s32 gAmbientB;
//
extern s32 gLight2R; // Color32 light color 2
extern s32 gLight2G;
extern s32 gLight2B;
extern s32 D_80178570; // Color32 light color 2 modifier?
extern s32 D_80178574;
extern s32 D_80178578;

#endif
