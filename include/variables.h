#ifndef VARIABLES_H
#define VARIABLES_H

#include "libc/stdbool.h"
#include "sf64math.h"
#include "structs.h"
#include "gfx.h"
#include "sf64level.h"
#include "sf64thread.h"
#include "sf64object.h"
#include "sf64player.h"

extern u64 __rspboot_start[];
extern u64 __rspboot_end[];
extern u64 __aspmain_start[];
extern u64 __aspmain_end[];
extern u64 __f3dex_start[];
extern u64 __f3dex_end[];
extern u8 gF3dexData[SP_UCODE_DATA_SIZE];
extern u8 gAspMainData[];

extern Mtx gIdentityMtx; // 800C4620
extern Matrix gIdentityMatrix; //800C4660

extern Vec3f D_800C5D28;
extern f32 D_800C5D34;
extern s8 D_800C5D3C;
extern s8 D_800C7C50;
extern s8 D_800C7C54;
extern OSMesgQueue* D_800C7C58;
extern OSMesgQueue* D_800C7C5C;
extern OSMesgQueue* D_800C7C60;
extern OSMesgQueue* D_800C7C64;

extern OSContPad gControllerHold[4];
extern OSContPad gControllerPress[4];
extern u8 gControllerPlugged[4];
extern u32 gControllerLock;
extern u8 gControllerRumble[4];
extern OSContPad sNextController[4];    //
extern OSContPad sPrevController[4];    //
extern OSContStatus sControllerStatus[4]; //
extern OSPfs sControllerMotor[4];        //

extern u8 gAudioThreadStack[0x1000];  // 800DDAA0
extern OSThread gGraphicsThread;        // 800DEAA0
extern u8 gGraphicsThreadStack[0x1000]; // 800DEC50
extern OSThread gTimerThread;        // 800DFC50
extern u8 gTimerThreadStack[0x1000]; // 800DFE00
extern OSThread gSerialThread;        // 800E0E00
extern u8 gSerialThreadStack[0x1000]; // 800E0FB0

extern SPTask* gCurrentTask;
extern SPTask* sAudioTasks[1];
extern SPTask* sGfxTasks[2];
extern SPTask* sNewAudioTasks[1];
extern SPTask* sNewGfxTasks[2];
extern u32 gSegments[16]; // 800E1FD0
extern OSMesgQueue gPiMgrCmdQueue; // 800E2010
extern OSMesg sPiMgrCmdBuff[50]; // 800E2028

extern OSMesgQueue gDmaMsgQueue;
extern void *sDmaMsgBuff[1];
extern OSIoMesg gDmaIOMsg;
extern OSMesgQueue gSerialEventQueue;
extern void *sSerialEventBuff[1];
extern OSMesgQueue gMainThreadMsgQueue;
extern void *sMainThreadMsgBuff[32];
extern OSMesgQueue gTaskMsgQueue;
extern void *sTaskMsgBuff[16];
extern OSMesgQueue gAudioVImsgQueue;
extern void *sAudioVImsgBuff[1];
extern OSMesgQueue gAudioTaskMsgQueue;
extern void *sAudioTaskMsgBuff[1];
extern OSMesgQueue gGfxVImsgQueue;
extern void *sGfxVImsgBuff[4];
extern OSMesgQueue gGfxTaskMsgQueue;
extern void *sGfxTaskMsgBuff[2];
extern OSMesgQueue gSerialThreadMsgQueue;
extern void *sSerialThreadMsgBuff[8];
extern OSMesgQueue gControllerMsgQueue;
extern void *sControllerMsgBuff[1];
extern OSMesgQueue gSaveMsgQueue;
extern void *sSaveMsgBuff[1];
extern OSMesgQueue gTimerTaskMsgQueue;
extern void *sTimerTaskMsgBuff[16];
extern OSMesgQueue gTimerWaitMsgQueue;
extern void *sTimerWaitMsgBuff[1];

extern GfxPool gGfxPools[2]; // 800E23B0

extern GfxPool* gGfxPool;
extern SPTask* gGfxTask;
extern Vp* gViewport;
extern Mtx* gGfxMtx;
extern Gfx* gUnkDisp1;
extern Gfx* gMasterDisp;
extern Gfx* gUnkDisp2;
extern Lightsn* gLight;
extern FrameBuffer *gFrameBuffer;
extern u16* gTextureRender;

extern u8 D_80137E78;
extern u32 gSysFrameCount;
extern u8 gStartNMI;
extern u8 gStopTasks;
extern u8 D_80137E84[4];
extern u16 gFillScreenColor;
extern u16 gFillScreen;

extern u8 gUnusedStack[0x1000];
extern OSThread sIdleThread; // 80138E90
extern u8 sIdleThreadStack[0x1000]; // 801390A0
extern OSThread gMainThread; // 8013A040
extern u8 sMainThreadStack[0x1000]; // 8013A1F0
extern OSThread gAudioThread; //8013B1F0

extern Matrix* gGfxMatrix;
extern Matrix sGfxMatrixStack[0x20];
extern Matrix* gCalcMatrix;
extern Matrix sCalcMatrixStack[0x20];

extern SaveFile gSaveIOBuffer;
extern SaveFile sPrevSaveData;
extern FaultMgr gFaultMgr;

extern OSMesg D_80156600[1];
extern OSMesg D_80156608[4];
extern OSMesg D_80156618[1];
extern OSMesg D_8015661C[1];

// fox_360
extern s32 D_800C9B4C;

// fox_bg
extern u16 D_800C9C3C[16];

// fox_43E80
extern Vec3f D_800C9F2C;

// fox_display
extern s32 D_800CA220;
extern f32 D_800CA230;
extern Actor* D_800CA234;
extern s32 D_Timer_800CA238;

// fox_edata
extern f32 D_800CBE70[];
extern f32 D_800CBE8C[];
extern f32 D_800CBEA8[];
extern f32 D_800CBEC4[];
extern f32 D_800CBEE0[];
extern f32 D_800CBEFC[];
extern f32 D_800CBF18[];
extern f32 D_800CBF34[];
extern f32 D_800CBF38[];
extern f32 D_800CBF54[];
extern f32 D_800CBF70[];
extern f32 D_800CBF8C[];
extern f32 D_800CBFA8[];
extern f32 D_800CBFC8[];
extern f32 D_800CBFE4[];
extern f32 D_800CC000[];
extern f32 D_800CC01C[];
extern f32 D_800CC038[];
extern f32 D_800CC054[];
extern f32 D_800CC070[];
extern f32 D_800CC0D4[];
extern f32 D_800CC0F0[];
extern ObjectInfo D_800CC124[];

// fox_edisplay
extern f32 D_800CF9B0[];
extern Gfx* D_800CFA54[];
extern Gfx* D_800CFAC4[];
extern Gfx* D_800CFADC[];
extern Gfx* D_800CFB08[];
extern Gfx* D_800CFB14[];
extern Gfx* D_800CFB28[];
extern Gfx* D_800CFB40[];
extern Gfx* D_800CFB64[];
extern Gfx* D_800CFB88[];
extern Gfx* D_800CFBA8[];
extern Gfx* D_800CFBE4[];
extern Gfx* D_800CFC0C[];
extern Gfx* D_800CFC40[];
extern Gfx* D_800CFC50[];
extern Gfx* D_800CFC64[];
extern Gfx* D_800CFC7C[];
extern f32* D_800CF964[];
extern f32 D_800CFCA0[];
extern f32 D_800CFCCC[];
extern Gfx D_800CFD80[];

// fox_enmy
extern ObjectInit* D_800CFDA0[];
extern s32 D_800CFDF4[];
extern f32 D_800CFE5C[];
extern Vec3f D_800CFEC4[6];
extern Vec3f D_800CFF0C[6];
extern u32 D_800CFF54[9];

// fox_6B3B0
extern s32 D_800CFF80[4];
extern s32 D_800CFF90;
extern s16 D_800CFF94[];
extern u8 D_800CFFB4[];
extern f32 D_800CFFC4[];

// fox_effect

// sf_hud
extern s16 D_800D1970;
extern f32 D_800D19AC[];
extern f32 D_800D19E0[];
extern Gfx D_800D1A40[];
extern s32 D_800D1EB4;
extern s32 D_800D1EB8;
extern s32 D_800D1EBC;
extern s32 D_800D20D8;
extern s32 D_800D2180[];
extern s32 D_800D2190[];
extern f32 D_800D21A0;
extern f32 D_800D21A4;

// fox_game
extern s32 D_800D2860[];
extern s32 D_800D2870;
extern s32 D_800D2874[];
extern s32 D_800D2884[];
extern s32 D_800D2894[];
extern s32 D_800D28A4[];
extern s32 sOverlaySetups[];

// fox_A4290
extern CollisionHeader D_800D2B38[];
extern CollisionHeader2 D_800D2CA0[];

// fox_play
extern u8 D_800D2F68;
extern u8 D_800D3180[30];

// unknown, could be fox_rcp, fox_play, or a data-only file.
extern UNK_TYPE D_800D31A0[4];

// fox_radio
extern s32 gCurrentMsgPri;

// fox_save
extern Save gDefaultSave;

// fox_360
extern s32 D_8015F900;
extern s32 D_8015F904;
extern s16 D_8015F908;
extern s32 D_8015F90C;
extern s32 D_8015F910;
extern f32 D_8015F914;
extern f32 D_8015F918;
extern f32 D_8015F91C;
extern u8 D_8015F920;
extern u8 D_8015F921;
extern s32 D_8015F924;
extern s32 D_8015F928;
extern s32 D_8015F930[3];
extern s32 D_8015F93C;
extern s32 D_8015F940;
extern f32 D_8015F944;

// fox_beam
// extern Vec3f D_8015F950;

// fox_bg
extern f32 D_8015F960;
extern u8 D_8015F964;
extern f32 D_8015F968;
extern f32 D_8015F96C;
extern f32 D_8015F970;
extern s32 D_8015F974;
extern s32 D_8015F978;
extern s32 D_8015F97C;
extern s32 D_8015F980;
extern f32 D_8015F984;
// extern f32 D_80161394;

// fox_43AC0
extern s32 gBossFrameCount;

// fox_display
extern Vec3f D_801613B0[];
extern Vec3f D_801613E0[];
extern s16 D_80161410;
extern Matrix D_80161418[4];
extern Vec3f D_80161518[4];
extern Vec3f D_80161548[4];
extern Vec3f D_80161578[4];
extern f32 D_801615A8[4];
extern f32 D_801615B8[4];

// fox_edisplay
extern Vec3f D_801615D0;

// fox_enmy
extern s32 D_Timer_80161670[4];
extern s32 D_80161680;
extern u8 D_80161684;

// fox_6B3B0
extern s32 D_80161690;

// sf_hud?
extern f32 D_801616A0;
extern f32 D_801616BC;
extern f32 D_801616C0;
extern f32 D_801616C4;
extern f32 D_801616C8;
extern s32 D_80161704;
extern s32 D_80161708;
extern s32 D_8016170C;
extern s32 gTotalHits; // gTotalGameScore
extern f32 D_80161720;
extern f32 D_80161724;
extern f32 D_80161728;
extern s32 D_8016172C;
extern s32 D_80161730;
extern s32 gShowBossHealth;
extern s32 D_80161788;
extern s32 D_8016178C;
extern s32 D_80161790;
extern s32 D_80161794;
extern s32 D_80161798;
extern f32 D_8016179C;
extern f32 D_801617A0;
extern f32 D_801617A4;
extern f32 D_801617A8;
extern f32 D_801617AC;
extern s32 D_801617B0;
extern s32 gMedalStatus;
extern s32 gMedalFlashTimer;
extern s32 D_80161810[];
extern s32 D_80161900[];
extern s32 D_80161910[0x10]; // could be in fox_97F80

// fox_game
extern f32 D_80161A10;
extern f32 D_80161A14;
extern s32 gPlayerInactive[4];
extern s32 D_80161A28;
extern u8 D_80161A2C;
extern u16 D_80161A2E;
extern u16 gNextLevel;
extern u16 gNextGameState;
extern u16 D_80161A34;
extern u16 gBgColor;
extern u8 gBlurAlpha;
extern u8 D_80161A39;
extern f32 D_80161A3C;
extern f32 D_80161A40;
extern f32 D_80161A44;

// fox_play
extern u8 D_80161A50;
extern f32 D_80161A54;
//
extern s32 D_80161A5C;
extern u16 D_Timer_80161A60;
extern u16 D_80161A62;
extern s32 D_80161A64;
extern EnvSettings* sEnvSettings;
//
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
extern UnkEntity1C gUnkEntities1C[10];
// 0x100
extern s32 D_80176550[2];
extern f32 D_80176558[2][100];
extern f32 D_80176878[2][100];
extern f32 D_80176B98[2][100];
extern f32 D_80176EB8[2][100];
extern f32 D_801771D8[2][100];
extern s32 gOverlaySetup;
//
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
extern s32 gBossHealthBar;
extern s32 D_80177844;
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
extern OSContPad *gInputHold;
extern f32 D_80177978;
extern OSContPad* gInputPress;
extern f32 D_80177980;
extern u8 *D_80177984;
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
extern s32 D_80177A80;
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
extern s32 D_80178284;
extern f32* D_80178288;
extern s32 D_8017828C;
extern f32* D_80178290;
extern s32 D_80178294;
extern u32* D_80178298;
extern s32 gRadioState;
//
extern s32 D_801782A4;
extern Object_58 *gObjects58;
extern s32 D_Timer_801782AC;
//
extern s32 D_Timer_801782B4;
extern s32 D_801782B8;
extern s32 D_801782BC;
extern s32 D_801782C0;
extern PosRot *D_801782C4;
extern s32 D_801782C8;
extern f32 *D_801782CC;
extern s32 D_801782D0;
extern f32* D_801782D4;
extern s32 D_801782D8;
extern f32 *D_801782DC;
//
extern f32 *D_801782E4;
extern s32 D_801782E8;
extern f32 *D_801782EC;
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

// fox_rcp?
extern u8 D_80178580[];
extern void *D_80178710;

//fox_radio

extern u16** D_80178720;
extern s32 D_80178724;
extern s32 D_80178728;
extern s32 D_8017872C;
extern f32 D_80178730;
extern f32 D_80178734;
extern f32 D_80178738;
extern f32 D_8017873C;
extern f32 D_80178740;
extern s32 D_80178744;
extern s32 D_80178748;
extern s32 D_8017874C;

// sf_versus
extern s32 D_80178750;
extern s32 D_80178754;
extern s32 D_80178758;
extern s32 sUnlockLandmaster; // sUnlockLandmaster
extern s32 sUnlockOnFoot; // sUnlockOnFoot
extern s32 D_80178768[];
extern s32 D_80178768[];
extern s32 D_80178778;
extern s32 D_80178780[4];
extern s32 D_80178790;
extern s32 D_80178794;
extern s32 D_80178798;
extern s32 D_8017879C;
extern s32 D_801787A0;
extern s32 D_801787A4;
extern s32 D_801787A8;
extern f32 D_801787AC;
extern f32 D_801787B0;
extern s32 D_801787B4;
extern s32 D_801787B8;
extern s32 D_801787BC;
extern f32 D_801787C0;
extern f32 D_801787C4;
extern f32 D_801787C8;
extern f32 D_801787CC;
extern f32 D_801787D0;
extern f32 D_801787D8[4];
extern f32 D_801787E8[4];
extern s32 D_801787F8[4];
extern u16 D_80178808[4];
extern s32 D_80178810[4];
extern s32 D_80178820[4];
extern s32 D_80178830;
extern s32 D_80178838[5];
extern s32 D_80178850[4];
extern OSTime D_80178860;
extern OSTime D_80178868;

// fox_save
extern SaveFile gSaveFile;

// gfx_data
extern u16 D_Unk_800DACB8[][32];
extern u16 D_Tex_800D99F8[];
extern u16 D_Tex_800DBA20[];
extern Gfx D_Gfx_800DBAA0[];
extern Gfx D_Gfx_800DAC20[];
extern Gfx D_Gfx_800D9688[];

// wave_samples
extern s16 gSawtoothWaveSample[];
extern s16 gTriangleWaveSample[];
extern s16 gSineWaveSample[];
extern s16 gSquareWaveSample[];
extern s16 gWhiteNoiseSample[];
extern s16 gUnkSample[];
extern s16* gWaveSamples[];

// note_data
extern f32 gBendPitchOneOctaveFrequencies[];
extern f32 gBendPitchTwoSemitonesFrequencies[];
extern f32 gPitchFrequencies[];
extern u8 gDefaultShortNoteVelocityTable[];
extern u8 gDefaultShortNoteGateTimeTable[];
extern u16 gHaasEffectDelaySizes[64];
// extern EnvelopePoint gDefaultEnvelope[];
// extern NoteUnkStruct gZeroNoteSub;
// extern NoteUnkStruct gDefaultNoteSub;
extern s32 D_800D4A90;
extern s32 D_800D4A94;
extern s32 D_800D4A98; // versus frame counter?
extern s32 D_800D4A9C;
extern s32 D_800D4AA0;
extern s16 D_800DD200[];
extern f32 gHeadsetPanVolume[];
extern f32 gStereoPanVolume[];
extern f32 gDefaultPanVolume[];

// ovl_menu
extern s32 D_menu_801B8220[]; // total hits ranking? see func_menu_80197DE4
extern s32 D_menu_801B8280;
extern s32 D_menu_801B8284;
extern s32 D_menu_801B827C;
extern s32 D_menu_801B8288;

// buffers
extern u64 gDramStack[SP_DRAM_STACK_SIZE64];
extern u8 gOSYieldData[OS_YIELD_DATA_SIZE];
extern FrameBuffer gZBuffer; // z buffer
extern u8 gTaskOutputBuffer[0x30000];
extern u8 gTaskOutputBufferEnd;
extern u8 gAudioDataBuffer[0xB0000];
extern u16 gTextureRenderBuffer[0x3C40];
extern u16 gFillBuffer[3 * SCREEN_WIDTH];
extern FrameBuffer gFrameBuffers[3]; // 8038F800

#endif // VARIABLES_H
