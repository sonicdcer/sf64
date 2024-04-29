#include "prevent_context_reordering.h"
#include "sys.h"
#include "sf64level.h"
#include "sf64object.h"
#include "sf64player.h"

s32 gSceneId;
s32 gSceneSetup;
s32 D_ctx_80177824; // some sort of flag
s32 D_ctx_8017782C; // some sort of flag. all range related?
GameState gGameState;
s32 gNextGameStateTimer; // next game state timer?
s32 gVsItemSpawnTimer;   // timer for vs item spawn
OptionState gOptionMenuStatus;
s32 gPlayState;     // pause-related state
s32 D_ctx_80177868; // some sort of state. pause-related?
LevelMode gLevelMode;
DrawMode gDrawMode;
s32 gPlayerNum;
s32 gCamCount;
s32 gTeamShields[6];
s32 gSavedTeamShields[6];
s32 gPrevPlanetSavedTeamShields[6];
s32 gTeamDamage[6];
u8 gMissionStatus; // next planet path
f32 gGroundHeight;
f32 D_ctx_80177950;
f32 D_ctx_80177968;
f32 D_ctx_80177970;
f32 gCsCamEyeX;
f32 gCsCamEyeY;
f32 gCsCamEyeZ;
f32 gCsCamAtX;
f32 gCsCamAtY;
f32 gCsCamAtZ;
Vec3f gPlayerCamEye;
Vec3f gPlayerCamAt;
bool gExpertMode;
s32 D_ctx_80177A10[10];
f32 D_ctx_80177A48[10];
s32 gCsFrameCount;
u8 D_ctx_80177A98;
u8 D_ctx_80177AB0;
u8 gAqDrawMode;
s32 gTitleState;
s32 gMainController;
s32 gMapState;
s32 gMissionNumber;
s32 gMissionTeamStatus[7];
s32 gMissionHitCount[7];
PlanetId gMissionPlanet[7];
s32 gMissionMedal[7];
#ifdef AVOID_UB
s32 gPlanetPathStatus[24];
#else
s32 gPlanetPathStatus[22]; // overruns gPrevPlanetTeamShields?
#endif
s32 gPrevPlanetTeamShields[6];
s32 D_ctx_80177C58[6];
u8 gOptionSoundMode;
s32 gVolumeSettings[3];
u16 gBgmSeqId;
u8 gLevelType;
s32 gSavedObjectLoadIndex;
UNK_TYPE F_80177CA8;
f32 D_ctx_80177CB0;
UNK_TYPE F_80177CB8;
f32 gWaterLevel;
f32 D_ctx_80177CC8;
f32 D_ctx_80177CE8;
f32 D_ctx_80177D08;
f32 D_ctx_80177D20;
f32 gRadioPortraitScaleY;
f32 gRadioTextBoxScaleY;
f32 gRadioMsgRadioId;
UNK_TYPE F_80177D80;
UNK_TYPE F_80177DE8;
s32 gGameFrameCount;
s32 gObjectLoadIndex;
s32 gPrevEventActorIndex;
s32 D_ctx_80177E78;
s32 gRingPassCount;
Vec3f D_ctx_80177E88;
Vec3f D_ctx_80177F10;
UNK_TYPE F_80178020;
s32 D_ctx_8017812C;
LevelId gCurrentLevel;
s32 gLevelPhase;
s32 gBossActive;
s32 D_ctx_8017828C;
s32 D_ctx_80178294;
s32 gRadioState;
s32 gCurrentRadioPortrait;
s32 gRadioStateTimer;
s32 gRadioMouthTimer;
u8 gLeveLClearStatus[30] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};
s32 D_ctx_801782C0;
s32 D_ctx_801782C8;
s32 D_ctx_801782D0;
s32 gRadioMsgCharIndex;
UNK_TYPE F_801782E0;
s32 gRadioMsgId;
UNK_TYPE F_801782F0;
bool gMsgCharIsPrinting;
bool gHideRadio;
u16* gRadioMsg;
ObjectInit* gLevelObjects;
UNK_TYPE F_80178318;
s32 gFogRed;
s32 gFogGreen;
s32 gFogBlue;
s32 gFogAlpha;
s32 gFillScreenAlpha;
s32 gFillScreenRed;
s32 gFillScreenGreen;
s32 gFillScreenBlue;
s32 gFillScreenAlphaTarget;
s32 gFillScreenAlphaStep;
s32 gLight3R; // 2 lights second color
s32 gLight3G;
s32 gLight3B;
f32 gLight3Brightness; // 2 lights second color brightness
f32 gLight3x;          // Vec3f?
f32 gLight3y;
f32 gLight3z;
s32 gFadeoutType;
u32 gPlayerGlareAlphas[4];
s32 gPlayerGlareReds[4];
s32 gPlayerGlareGreens[4];
s32 gPlayerGlareBlues[4];
UNK_TYPE D_ctx_801783C0[4]; // unused. player alpha targets?
f32 gSunViewX;              // something x translate
f32 gSunViewY;              // something y translate
s32 gFogNear;               // near
s32 gFogFar;                // far
UNK_TYPE F_801783E0;
UNK_TYPE F_801783E4;
UNK_TYPE F_801783E8;
UNK_TYPE F_801783EC;
UNK_TYPE F_801783F0;
UNK_TYPE F_801783F4;
UNK_TYPE F_801783F8;
UNK_TYPE F_801783FC;
UNK_TYPE F_80178400;
UNK_TYPE F_80178404;
UNK_TYPE F_80178408;
UNK_TYPE F_8017840C;
UNK_TYPE P_800D31A0 = 0;
s32 gStarCount;
f32 gStarWarpDistortion;
f32 D_ctx_80178418;
UNK_TYPE F_8017841C;
f32 gStarfieldX;
f32 gStarfieldY;
f32 gStarfieldRoll;
f32 D_ctx_8017842C;
f32 D_ctx_80178430;
UNK_TYPE F_80178434;
UNK_TYPE F_80178438;
UNK_TYPE F_8017843C;
f32 D_ctx_80178440;
f32 D_ctx_80178444;
f32 D_ctx_80178448;
f32 D_ctx_80178450[3]; // x positions of certain actors (teammates?)
f32 D_ctx_80178460[3]; // y positions of certain actors (teammates?)
f32 D_ctx_80178470[3]; // z positions of certain actors (teammates?)
f32 gCameraShakeY;
s32 gCameraShake;
s32 D_ctx_80178484; // set to 10000 but not used
bool gLoadLevelObjects;
UNK_TYPE F_8017848C;
UNK_TYPE F_80178490;
s32 D_ctx_80178494;
f32 D_ctx_80178498;
f32 D_ctx_8017849C;
f32 D_ctx_801784A0;
s32 D_ctx_801784A4;
UNK_TYPE F_801784A8;
GroundType gGroundType;
UNK_TYPE F_801784B0;
UNK_TYPE F_801784B4;

// light source 1
f32 gLight1xRot; // effective Vec3f
f32 gLight1yRot;
f32 gLight1zRot;
f32 gLight1xRotTarget; // effective Vec3f
f32 gLight1yRotTarget;
f32 gLight1zRotTarget;
f32 gEnvLightxRot; // effective Vec3f
f32 gEnvLightyRot;
f32 gEnvLightzRot;
s32 gLight1x; // Vec3i?
s32 gLight1y;
s32 gLight1z;
f32 gLight1rotStep;

// light source 2
f32 gLight2xRot; // effective Vec3f
f32 gLight2yRot;
f32 gLight2zRot;
f32 gLight2xRotTarget; // effective Vec3f
f32 gLight2yRotTarget;
f32 gLight2zRotTarget;
s32 gLight2x; // Vec3i?
s32 gLight2y;
s32 gLight2z;
f32 gLight2rotStep;

// this section looks like a third light source
UNK_TYPE F_801784514;
UNK_TYPE F_801784518;
UNK_TYPE F_80178451C;
f32 D_ctx_80178520; // effective Vec3f, set to env light rotation but unused
f32 D_ctx_80178524;
f32 D_ctx_80178528;
UNK_TYPE F_80178452C;
UNK_TYPE F_801784530;
UNK_TYPE F_801784534;
f32 D_ctx_80178538;

f32 D_ctx_8017853C;   // hitbox size modifier. always 0.0f. seems out of place
s32 gLight2colorStep; // light 2 color step
s32 D_ctx_80178544;   // light 3 color step?
s32 gLight1R;         // Color32 light color 1
s32 gLight1G;
s32 gLight1B;
s32 gAmbientR; // Color32 ambient color
s32 gAmbientG;
s32 gAmbientB;
UNK_TYPE F_80178560;
s32 gLight2R; // Color32 light color 2
s32 gLight2G;
s32 gLight2B;
s32 gLight2RTarget; // Color32 light color 2 modifier?
s32 gLight2GTarget;
s32 gLight2BTarget;

s32 D_ctx_80161A70; // Color32 set but not used, start of bss
s32 D_ctx_80161A74;
s32 D_ctx_80161A78;
s32 D_ctx_80161A7C; // Color32? set but not used
s32 D_ctx_80161A80;
s32 D_ctx_80161A84;
GroundSurface gGroundSurface;
GroundSurface gSavedGroundSurface;
u8 gGoldRingCount[4];
u8 D_ctx_80161A94[4];
s32 gHitCount;
s32 gSavedHitCount;
s16 gLifeCount[4];
LaserStrength gLaserStrength[4];
s32 D_ctx_80161AB8;
UNK_TYPE F_80161AC0[4];
UNK_TYPE F_80161AD0[4];
UNK_TYPE F_80161AE0[4];
UNK_TYPE F_80161AF0[4];
UNK_TYPE P_800D31A4 = 0;
Scenery gScenery[50];
Sprite gSprites[40];
Actor gActors[60];
Boss gBosses[4];
Effect gEffects[100];
Item gItems[20];
PlayerShot gPlayerShots[16];
TexturedLine gTexturedLines[100];
RadarMark gRadarMarks[65];
BonusText gBonusText[10];
s32 gActor194Status[2];
f32 gActor194xPos[2][100];
f32 gActor194yPos[2][100];
f32 gActor194zPos[2][100];
f32 gActor194xRot[2][100];
f32 gActor194yRot[2][100];
f32 gActor194zRot[2][100];
UNK_TYPE P_800D31A8 = 0;
u16 gEnemyShotSpeed; // enemy shot speed?
u8 gShowLevelClearStatusScreen;
s32 gLevelStartStatusScreenTimer;
s32 gLevelClearScreenTimer; // timer for mission accomplished scrren
s32 gBossHealthBar;
s32 D_ctx_80177850;    // bonus text related. set to 15 but never read
s32 D_ctx_80177858[4]; // set to 3 but never used
PlayerForm gPlayerForms[4];
s32 gHandicap[4];
VsStage gVersusStage;
s32 gVsPointsToWin;
s32 gVsMatchType;
s32 gVsTimeTrialLimit;
bool gVersusMode;
u16 gBoostButton[4];
u16 gBrakeButton[4];
u16 gShootButton[4];
u16 gBombButton[4];
f32 D_ctx_80177958[4]; // set to 1.0f but never used
s32 gTeamLowHealthMsgTimer;
OSContPad* gInputHold;
OSContPad* gInputPress;
u8* gControllerRumble;
s32 D_ctx_80177990[4]; // these two are also rumble related
f32 D_ctx_801779A8[4];
u8 gPauseEnabled;
s32 gChargeTimers[4];
f32 gPathVelX;
f32 gPathVelY;
s32 D_Timer_80177A00[4];
s32 D_Timer_80177A38[4];
s32 D_Timer_80177A70[4];
s32 D_Timer_80177A88[4];
f32 D_ctx_80177AA0[4];
f32 gShieldAlpha[4];
s32 gHasShield[4];
s32 gShieldTimer[4];
s32 gVsLockOnTimers[4][4];
u8 gStartAndrossFightTimer;
u8 gSoShieldsEmpty;
u8 gCoUturnCount;
u8 gGreatFoxIntact;
u8 gTiStartLandmaster;
u16 gControllerRumbleTimers[4];
u16 D_ctx_80177C30[4];
s32 D_ctx_80177C50;
s32 D_ctx_80177C70;
s32 D_ctx_80177C78;
s32 D_ctx_80177C8C;
s32 D_ctx_80177C94;
s32 D_ctx_80177C9C;
s32 D_ctx_80177CA4;
s32 D_ctx_80177CAC;
s32 D_ctx_80177CB4;
s32 D_ctx_80177CBC;
s32 D_ctx_80177CC4;
s32 gStarWolfTeamAlive[6];
s32 gSavedStarWolfTeamAlive[6];
s32 gRightWingHealth[4];
s32 gLeftWingHealth[4];
s32 gRightWingFlashTimer[4];
s32 gLeftWingFlashTimer[4];
s32 gRightWingDebrisTimer[4];
s32 gLeftWingDebrisTimer[4];
s32 gBombCount[4];
s32 D_ctx_80177DB8[4];
s32 D_ctx_80177DD0[4][10];
s32 D_ctx_80177E74;
s32 D_ctx_80177E7C;
bool gChangeTo360;
Vec3f gTeamArrowsViewPos[10];
f32 D_ctx_80177F20[65]; // Seem to be an early implementation of RadarMark
f32 D_ctx_80178028[65];
f32 D_ctx_80178130[65];
u8 D_ctx_80178238[65];
Player* gPlayer;
f32* gStarOffsetsX;
f32* gStarOffsetsY;
u32* gStarFillColors;
UNK_TYPE F_801782A0;
Scenery360* gScenery360;
UNK_TYPE F_801782B0;
s32 D_ctx_801782B8;
s32 D_ctx_801782BC;
PosRot* D_ctx_801782C4;
f32* D_ctx_801782CC;
f32* D_ctx_801782D4;
f32* D_ctx_801782DC;
f32* D_ctx_801782E4;
f32* D_ctx_801782EC;
UNK_TYPE F_801782F4;
s32 D_ctx_801782FC;
UNK_TYPE F_80178304;
UNK_TYPE F_8017830C;
UNK_TYPE F_80178314;
UNK_TYPE F_8017831C;
UNK_TYPE F_80178324;
UNK_TYPE F_8017832C;
UNK_TYPE F_80178334;
UNK_TYPE F_8017833C;
UNK_TYPE F_80178344;
UNK_TYPE F_8017834C;
