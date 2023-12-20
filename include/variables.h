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
extern u8 gF3dexData[SP_UCODE_DATA_SIZE];

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

// some sort of struct?
extern u8 D_80137E78;
extern u32 gFrameCounter;
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

extern s32 D_800C9B4C;
extern u16 D_800C9C3C[16];
extern Vec3f D_800C9F2C; // could be f32[4]?
extern s32 D_800CA220;
extern f32 D_800CA230;
extern Object_2F4* D_800CA234;
extern s32 D_800CA238;
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
extern Vec3f D_800CFCC0; // initializer in sf_5A240
extern f32 D_800CFCCC[];
extern Vec3f D_800CFCEC;
extern Vec3f D_800CFCF8;
extern Vec3f D_800CFD04;
extern Vec3f D_800CFD10;
extern Vec3f D_800CFD1C;
extern Vec3f D_800CFD28;
extern Vec3f D_800CFD34;
extern Gfx D_800CFD80[];
extern ObjectInit* D_800CFDA0[];
extern s32 D_800CFDF4[];
extern f32 D_800CFE5C[];
extern Vec3f D_800CFEC4[6];
extern Vec3f D_800CFF0C[6];
extern u32 D_800CFF54[9];
extern s32 D_800CFF80[4];
extern s32 D_800CFF90;
extern s16 D_800CFF94[];
extern u8 D_800CFFB4[];
extern f32 D_800CFFC4[];
extern Gfx* D_800D14E0[][2];
extern Gfx* D_800D14FC[];
extern Vec3f D_800D1528;
extern f32 D_800D1534[10][10];
extern s32 D_800D173C[];
extern Gfx* D_800D178C[6];
extern s32 D_800D18F0[]; //[6][4]?
extern s32 D_800D1950[];
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
extern s32 D_800D2860[];
extern s32 D_800D2870;
extern s32 D_800D2874[];
extern s32 D_800D2884[];
extern s32 D_800D2894[];
extern s32 D_800D28A4[];
extern s32 sOverlaySetups[];
extern CollisionHeader D_800D2B38[];
extern CollisionHeader2 D_800D2CA0[];
extern u8 D_800D2F68;
extern u8 D_800D3180[30];
extern s32 D_800D31A0[4]; // could belong to fox_rcp or fox_play
extern s32 sCurrentMsgPri;
extern Save gDefaultSave;

// sf_2EFE0
extern s32 D_8015F900;
extern s32 D_8015F904;
extern s32 D_8015F90C;
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

// sf_36930
extern s16 D_8015F908;
extern s32 D_8015F910;
extern Vec3f D_8015F950;
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
extern f32 D_80161394;

// fox_43AC0
extern s32 D_801613A0;

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
extern s32 D_80161670[4];
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
extern s32 D_80161714;
extern f32 D_80161720;
extern f32 D_80161724;
extern f32 D_80161728;
extern s32 D_8016172C;
extern s32 D_80161730;
extern s32 D_80161734;
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
extern s32 D_80161A18[4];
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
extern u16 D_80161A60;
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
extern u8 D_80161A94;
extern s32 gHitCount;
extern s32 gSavedHitCount;
extern s16 gLifeCount[4];
extern s32 gLaserStrength[4];
//
extern s32 D_80161AB8;
// 0x44
extern Object_80 gObjects80[50];
extern Object_4C gObjects4C[40];
extern Object_2F4 gObjects2F4[60];
extern Object_408 gObjects408[4];
extern Object_8C gObjects8C[100];
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
extern s32 gGameState;
extern s32 D_80177838;
extern s32 D_8017783C;
extern s32 D_80177840;
extern s32 D_80177848;
extern s32 D_80177844;
extern s32 D_8017784C;
extern s32 D_80177850;
extern s32 D_80177854;
extern s32 D_80177858[4];
extern s32 D_80177868;
//
extern s32 D_80177870[4];
extern s32 gAllRangeMode;
//
extern s32 D_80177888[4];
extern s32 D_80177898;
extern s32 gVersusStage;
extern s32 D_801778A0;
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
extern u16 D_80177908[4];
extern s32 D_80177910[6];
extern u16 D_80177928[4];
extern u8 D_80177930;
//
extern u16 D_80177938[4];
extern f32 D_80177940;
//
extern u16 D_80177948[4];
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
extern s32 D_801779C8[4];
extern Vec3f D_801779D8;
extern f32 D_801779E4;
extern Vec3f D_801779E8;
extern f32 D_801779F4;
extern bool gExpertMode;
//
extern UNK_TYPE D_80177A00[4];
extern s32 D_80177A10[10];
extern UNK_TYPE D_80177A38[4];
extern f32 D_80177A48[10];
extern s32 D_80177A70[4];
extern s32 D_80177A80;
//
extern s32 D_80177A88[4];
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
extern s32 D_80177AF8;
//
extern s32 D_80177B00[4][4];
extern s32 D_80177B40;
extern u8 D_80177B44;
extern s32 D_80177B48;
extern u8 D_80177B4C;
extern s32 D_80177B50[7];
extern u8 D_80177B6C;
extern s32 D_80177B70[7];
extern u8  D_80177B8C;
extern s32 D_80177B90[7];
extern s8 D_80177BAC;
extern s32 D_80177BB0[7];
//
extern s16 D_80177BD0[4]; // up to [48]
// 0x58
extern u16 D_80177C30[4];
extern UNK_TYPE D_80177C38[6];
extern s32 D_80177C50;
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
extern s32 gFrameCount;
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
extern s32 gCurrentLevel;
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
extern s32 D_8017829C;
//
extern s32 D_801782A4;
extern Object_58 *gObjects58;
extern s32 D_801782AC;
//
extern s32 D_801782B4;
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
extern f32 D_80178370;
extern f32 D_80178374;
extern f32 D_80178378;
extern s32 D_8017837C;
extern s32 D_80178380[4]; // player alphas
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
extern s32 D_80178488;
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
extern s32 D_80178768[];

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
extern s16 D_800DD200[];
extern f32 gHeadsetPanVolume[];
extern f32 gStereoPanVolume[];
extern f32 gDefaultPanVolume[];

// ovl_DF4260
extern Gfx* D_DF4260_8019A008[];
extern f32 D_DF4260_8019A9B8[];

// ovl_E16C50
extern f32 D_E16C50_801C4188;

// ovl_E51970
extern Matrix D_E51970_8019EE80;
extern s32 D_E51970_801A03DC;

// ovl_E6A810
extern Gfx* D_E6A810_801B7584[];
extern Gfx* D_E6A810_801B7608[];
extern Gfx* D_E6A810_801B769C[];
extern f32 D_E6A810_801B83A8[];
extern s8 D_E6A810_801BA1E8;

// ovl_E9F1D0
extern f32 D_E9F1D0_801A7F58;
extern f32 D_E9F1D0_801A7F60;
extern f32 D_E9F1D0_801A7F68;
extern f32 D_E9F1D0_801A7F70;
extern f32 D_E9F1D0_801A7F78;

// ovl_EBFBE0
extern s32 D_EBFBE0_801B8220[]; // total hits ranking? see func_EBFBE0_80197DE4
extern s32 D_EBFBE0_801B8280;
extern s32 D_EBFBE0_801B8284;
extern s32 D_EBFBE0_801B827C;
extern s32 D_EBFBE0_801B8288;

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

// ast_873CB0
extern u16 D_1002040[];
extern u16 D_10032A0[];
extern u16 D_10041C0[];
extern u16 D_10050E0[];
extern u16 D_1006000[];
extern u16 D_1006F20[];
extern u16 D_1007E40[];
extern u16 D_1008D60[];
extern u16 D_1009C80[];
extern u16 D_100ABA0[];
extern u16 D_100BAC0[];
extern u16 D_100C9E0[];
extern u16 D_100D900[];
extern u16 D_100E820[];
extern u8 D_1011A40[];
extern u16 D_1011AB0[];
extern u8 D_1011E80[];
extern u16 D_1011EC0[];
extern s32 D_1011ED0[];
extern s32 D_1011F08[];
extern Gfx D_1011F20[];
extern u8 D_10127D0[];
extern u16 D_1012898[];
extern u8 D_10128C0[];
extern u16 D_1012988[];
extern u8 D_10129C0[];
extern u16 D_1013090[];
extern u8 D_1013170[];
extern u16 D_1013570[];
extern Gfx D_1015510[];
extern Gfx D_1015980[];
extern Gfx D_1016580[];
extern Gfx D_1016870[];
extern Gfx D_10177C0[];
extern Gfx D_10182C0[];
extern u16 D_10190C0[]; // A texture of some sort.
extern Gfx D_10194C0[];
extern Gfx D_1019820[];
extern Gfx D_1019CA0[];
extern Gfx D_101A570[];
extern Gfx D_101A8E0[];
extern Gfx D_101ABD0[];
extern Gfx D_101C2E0[];
extern Gfx D_101C2E0[];
extern Gfx D_101CAE0[];
extern Gfx D_101CD70[];
extern u16 D_101D070[];
extern Gfx D_101DC10[];
extern Gfx D_1021E20[];
extern Gfx D_1022120[];
extern Gfx D_1022E80[];
extern Gfx D_10231A0[];
extern Gfx D_1023700[];
extern Gfx D_1023750[];
extern Gfx D_1023C80[];
extern Gfx D_1024230[];
extern Gfx D_1024290[];
extern Gfx D_1024410[];
extern Gfx D_1024570[];
extern Gfx D_10246D0[];
extern Gfx D_1024830[];
extern u8 D_1024A58[];
extern Gfx D_1024AC0[];
extern Gfx D_1024F60[];
extern Gfx D_1028230[];
extern Gfx D_1029780[];
extern Gfx D_102A010[];
extern Gfx D_102A8A0[];
extern Gfx D_102ED50[];
extern Gfx D_102F5E0[];
extern Gfx D_102FE80[];
extern u16 D_102FF08[];
extern Gfx D_1032780[];


// ast_8A68C0, ast_8AE0A0
extern Gfx D_2000000[];
extern Gfx D_2000890[];
extern Gfx D_2001090[];
extern Gfx D_2001120[];
extern Gfx D_20019B0[];
extern Gfx D_2002120[];
extern Gfx D_2002240[];
extern Gfx D_2002AD0[];
extern Gfx D_2003360[];
extern Gfx D_2003BF0[];
extern Gfx D_2004240[];
extern Gfx D_2004480[];
extern Gfx D_2004D10[];
extern Gfx D_20052D0[];
extern Gfx D_20055A0[];
extern Gfx D_2005E30[];
extern Gfx D_2006360[];
extern Gfx D_20066C0[];
extern Gfx D_2006F50[];
extern Gfx D_20073F0[];
extern Gfx D_2008480[];
extern Gfx D_2009510[];
extern Gfx D_200A5A0[];
extern Gfx D_200B630[];
extern Gfx D_200C6C0[];
extern Gfx D_200D750[];
extern Gfx D_200E7F0[];
extern Gfx D_200F080[];
extern Gfx D_200F910[];
extern Gfx D_20101A0[];
extern Gfx D_20112C0[];

// ast_8BFC00, ast_8D99F0, ast_8E1F80, ast_8E92D0
extern u8 D_3000000[];
extern u16 D_3000080[];
extern Gfx D_3000090[];
extern Gfx D_3000660[];
extern u16 D_3000BC0[];
extern Gfx D_3001C90[];
extern Gfx D_3003CE0[];
extern Gfx D_3004680[];
extern Gfx D_3005980[];
extern Gfx D_3005AB0[];
extern Gfx D_30066B0[];
extern Gfx D_3007650[];
extern Gfx D_3008100[];
extern u8 D_300D350[];
extern u16 D_300D398[];
extern u8 D_300D3C0[];
extern u16 D_300D408[];
extern u8 D_300D440[];
extern u16 D_300D500[];
extern Gfx D_300D550[];
extern Gfx D_300EE80[];
extern Gfx D_300FB80[];
extern Gfx D_3010A90[];
extern Gfx D_3011470[];
extern Gfx D_3011720[];
extern Gfx D_3012ED0[];
extern Gfx D_30131F0[];
extern Gfx D_3013580[];
extern Gfx D_3013780[];
extern Gfx D_3014BF0[];
extern Gfx D_3015120[];
extern Gfx D_30155E0[];
extern AnimationHeader D_3015AF4;
extern AnimationHeader D_3015C28;
extern Gfx D_3015D80[];
extern Limb* D_3016610[];
extern Gfx D_3016660[];
extern Gfx D_3016B00[];
extern Gfx D_3016B30[];
extern Gfx D_3016CC0[];
extern Gfx D_30173C0[];
extern Gfx D_30174E0[];
extern Gfx D_3017600[];
extern Gfx D_3017600[];
extern Gfx D_30183D0[];
extern Gfx D_30194E0[];
extern Gfx D_301B080[];
extern Gfx D_301B6E0[];
extern Limb* D_301C614[];
extern Limb* D_301D258[];
extern Limb* D_301DB94[];
extern Limb* D_301E3E8[];
extern Gfx D_301E570[];
extern Gfx D_301F140[];
extern Gfx D_301FD20[];
extern Gfx D_302D240[];
extern EnvSettings D_302DD70[];
extern EnvSettings D_302DDB4[];
extern EnvSettings D_302DDF8[];
extern ObjectInit D_302DE3C[];
extern ObjectInit D_302E0E4[];
extern ObjectInit D_302E170[];
extern ObjectInit D_302E378[];
extern f32 D_302ED4C[];
extern f32 D_302ED98[];
extern f32 D_302EDB4[];
extern f32 D_302EE00[];
extern f32 D_302EE64[];
extern f32 D_302EE80[];
extern f32 D_302EE9C[];
extern AnimationHeader D_30163C4;
extern AnimationHeader D_301C3A8;
extern AnimationHeader D_301CFEC;
extern AnimationHeader D_301D888;
extern AnimationHeader D_301E19C;
extern Vec3f D_302E56C[];
extern Vec3f D_302E65C[];
extern Vec3f D_302E74C[];
extern Vec3f D_302E830[];
extern Vec3f D_302E95C[];
extern Vec3f D_302EA4C[];
extern Vec3f D_302EB3C[];
extern Vec3f D_302EC20[];

// ast_918430, ast_922730
extern AnimationHeader D_4000080;
extern Limb* D_400014C[];
extern AnimationHeader D_40001A4;
extern Limb* D_4000270[];
extern Gfx D_40018A0[];
extern Gfx D_4003BD0[];
extern AnimationHeader D_40057AC;
extern Limb* D_40058B8[];
extern Gfx D_4007870[];
extern Gfx D_4007AF0[];
extern AnimationHeader D_400A30C;
extern Limb* D_400A398[];
extern Gfx D_400B390[];

// ast_CD2410
extern u8 D_5000000[];
extern u8 D_5000080[];
extern u8 D_5000100[];
extern u8 D_5000180[];
extern u16 D_5000200[];
extern u8 D_5000280[];
extern u16 D_5000300[];
extern u8 D_5000380[];
extern u8 D_5000400[];
extern u8 D_5000480[];
extern u8 D_50021F0[];
extern u16 D_50077B0[];
extern u8 D_5009F60[];
extern u8 D_500A050[];
extern u8 D_500A140[];
extern u8 D_500A230[];
extern u8 D_500A320[];
extern u8 D_500A410[];
extern u8 D_500A500[];
extern u8 D_500A5F0[];
extern u8 D_500A6E0[];
extern u8 D_500A7D0[];
extern Gfx D_500B600[];

/* ast_961CE0, ast_9A1460, ast_9D2FD0, ast_A1D0F0, ast_A4FBB0,
 * ast_A58F60, ast_A8B470, ast_AB4000, ast_ACF960, ast_AE60A0,
 * ast_B0AA00, ast_B1CA50, ast_B2CA50, ast_B612E0, ast_B84560,
 * ast_BB11D0, ast_BC23D0, ast_BFC510, ast_C48F40, ast_DDC010
 */

extern u16 D_6005710[];
extern u16 D_600CBD8[];
extern u16 D_600D990[];
extern u16 D_6010198[];
extern u16 D_601E1E8[];
extern u16 D_6020F60[];
extern u16 D_60229A4[];
extern u16 D_6028A60[];
extern u16 D_602ACC0[];
extern u16 D_602C2CC[];
extern u16 D_603158C[];
extern u16 D_603EB38[];
extern u16 D_6000000[];
extern u16 D_6000900[];
extern Gfx D_6000A80[];
extern u16 D_6000B60[];
extern Gfx D_6000E00[];
extern Gfx D_6000E10[];
extern Gfx D_6001360[];
extern u16 D_6001820[];
extern Gfx D_6001950[];
extern Gfx D_6001A60[];
extern u16 D_6001A80[];
extern u8 D_6001B80[];
extern Vtx D_6001C50[];
extern Gfx D_6001DA0[];
extern u8 D_60020D0[];
extern Gfx D_60023B0[];
extern Gfx D_6002990[];
extern u16 D_60029A0[];
extern Gfx D_6003000[];
extern Gfx D_60030F0[];
extern Gfx D_60034D0[];
extern Gfx D_6003610[];
extern Gfx D_60036A0[];
extern u16 D_60038C0[];
extern u16 D_60038F8[];
extern Gfx D_6004170[];
extern Gfx D_6004330[];
extern Vtx D_6004500[];
extern Gfx D_6004570[];
extern u16 D_60047E0[];
extern Gfx D_6005360[];
extern u16 D_6005700[];
extern Gfx D_6005780[];
extern Gfx D_6006140[];
extern Gfx D_6006310[];
extern u16* D_600631C[];
extern AnimationHeader D_600636C;
extern f32 D_60064AC[];
extern f32 D_60064C8[];
extern f32 D_60064FC[];
extern f32 D_6006518[];
extern Limb* D_6006558[];
extern f32 D_6006564[];
extern f32 D_60065B0[];
extern f32 D_60065FC[];
extern f32 D_6006648[];
extern f32 D_6006694[];
extern f32 D_60066E0_f32[];
extern Gfx D_60066E0_Gfx[];
extern Gfx D_60066F0[];
extern f32 D_600672C[];
extern f32 D_6006778[];
extern f32 D_60067C4[];
extern f32 D_6006808[];
extern f32 D_600683C[];
extern f32 D_6006858[];
extern f32 D_6006890_f32[];
extern Gfx D_6006890_Gfx[];
extern f32 D_60068BC[];
extern f32 D_60068F0[];
extern f32 D_6006940[];
extern f32 D_600695C[];
extern f32 D_6006978[];
extern f32 D_6006994[];
extern f32 D_60069B0[];
extern f32 D_60069CC[];
extern f32 D_60069E8[];
extern f32 D_6006A04[];
extern f32 D_6006A20[];
extern f32 D_6006A3C[];
extern Gfx D_6006A80[];
extern f32 D_6006BF0[];
extern f32 D_6006C44[];
extern u16 D_6006EA0[];
extern Gfx D_6006F50[];
extern Gfx D_6007410[];
extern Gfx D_60075D0[];
extern Gfx D_6007650[];
extern Gfx D_60079B0[];
extern Gfx D_6007CF0[];
extern Gfx D_6007D80[];
extern Gfx D_6007D90[];
extern Gfx D_6008370[];
extern Gfx D_6008970[];
extern Gfx D_6008AA0[];
extern f32 D_600924C[];
extern f32 D_60092E8[];
extern f32 D_6009388[];
extern Gfx D_60097E0[];
extern u16* D_6009B34[];
extern f32 D_6009CC4[];
extern f32 D_6009CFC[];
extern Gfx D_6009E30[];
extern Vtx D_6009ED0[];
extern Gfx D_6009F90[];
extern Gfx D_600A220[];
extern Gfx D_600A420[];
extern Gfx D_600AF40[];
extern Gfx D_600B8B0[];
extern Gfx D_600BAF0[];
extern u16 D_600BEA0[];
extern Gfx D_600BF80[];
extern Gfx D_600C130[];
extern u16 D_600C6A0[];
extern Gfx D_600C740[];
extern Vtx D_600C780[];
extern Gfx D_600CAA0[];
extern u16 D_600D5C0[];
extern Gfx D_600D730[];
extern Gfx D_600DA10[];
extern Gfx D_600DBC0[];
extern u8 D_600DDC0[];
extern Gfx D_600E0C0[];
extern u8 D_600E360[];
extern AnimationHeader D_600E5EC;
extern Gfx D_600E820[];
extern u8 D_600E980[];
extern Gfx D_600EC90[];
extern Gfx D_600EE10[];
extern Gfx D_600EEF0[];
extern Gfx D_600F160[];
extern Gfx D_600F2F0[];
extern Gfx D_600F3D0[];
extern Gfx D_600F4C0[];
extern Gfx D_600F560[];
extern Gfx D_600F6C0[];
extern Gfx D_600F6C0[];
extern Gfx D_600F8A0[];
extern u8 D_600F940[];
extern Gfx D_600F9B0[];
extern f32 D_600FE9C[];
extern f32 D_600FEB8[];
extern f32 D_600FF30[];
extern f32 D_600FF80[];
extern f32 D_600FFA0[];
extern f32 D_600FFC0[];
extern f32 D_600FFE0[];
extern ObjectInit* D_6010088[];
extern u8 D_6010090[];
extern Gfx D_60102C0[];
extern u8 D_60106B0[];
extern Gfx D_6010960[];
extern Gfx D_6010A50[];
extern u16 D_6010C20[];
extern Gfx D_6010E00[];
extern u8 D_6010FA0[];
extern f32 D_6011058[];
extern f32 D_601115C[];
extern u8 D_6011890[];
extern Gfx D_60119A0[];
extern f32 D_6011B24[];
extern u16 D_6011B40[];
extern f32 D_6011BF4[];
extern f32 D_6011C10[];
extern f32 D_6011C48[];
extern f32 D_6011C80[];
extern Gfx D_6011EE0[];
extern Gfx D_60120F0[];
extern u8 D_6012310[];
extern u8 D_60123F0[];
extern Gfx D_6012C00[];
extern Gfx D_60132B0[];
extern u8 D_6013470[];
extern Gfx D_60137B0[];
extern AnimationHeader D_6013820;
extern Limb* D_601390C[];
extern Gfx D_6013960[];
extern Gfx D_6013B50[];
extern u8 D_6014140[];
extern Gfx D_60143E0[];
extern Gfx D_6014500[];
extern u16 D_6014510[];
extern AnimationHeader D_6014658;
extern Gfx D_6014670[];
extern u16 D_60147C0[];
extern u8 D_60147E0[];
extern Gfx D_60148B0[];
extern Gfx D_60148D0[];
extern Gfx D_6014A20[];
extern Gfx D_6014B50[];
extern Gfx D_60153B0[];
extern u16 D_6015430[];
extern Gfx D_6015730[];
extern Gfx D_6015F00[];
extern Gfx D_6016270[];
extern Gfx D_60164F0[];
extern Gfx D_6016580[];
extern f32 D_601668C[];
extern f32 D_60166F4[];
extern f32 D_6016714[];
extern Gfx D_6018450[];
extern Gfx D_60188D0[];
extern Gfx D_6018BF0[];
extern Gfx D_6018C00[]; // possible collision
extern Gfx D_6018D40[];
extern Gfx D_6018E80[];
extern u16 D_6018F30[];
extern Gfx D_6019730[];
extern u16 D_6019E50[];
extern Gfx D_601A120[];
extern Gfx D_601A7A0[];
extern Gfx D_601A7D0[];
extern Gfx D_601AD70[];
extern Gfx D_601AE40[];
extern Gfx D_601B0D0[];
extern u16* D_601B1E4[];
extern u16 D_601B4B0[];
extern f32 D_601B4C4[];
extern f32 D_601B4E0[];
extern f32 D_601B4FC[];
extern f32 D_601B518[];
extern Gfx D_601B560[];
extern f32 D_601B584[];
extern f32 D_601B5F4[];
extern Gfx D_601B610[];
extern f32 D_601B644[];
extern f32 D_601B678[];
extern f32 D_601B6C4[];
extern f32 D_601B710[];
extern f32 D_601B75C[];
extern Gfx D_601B7C0[];
extern f32 D_601B7F8[];
extern f32 D_601B830[];
extern f32 D_601B868[];
extern f32 D_601B8A0[];
extern f32 D_601B8D8[];
extern Gfx D_601BEC0[];
extern Gfx D_601C6A0[];
extern Gfx D_601C7C0[];
extern u16 D_601C8E0[];
extern Gfx D_601C9B0[];
extern Gfx D_601D1F0[];
extern Gfx D_601D730[];
extern u8 D_601D750[];
extern u16 D_601D800[];
extern u16 D_601DB50[];
extern Gfx D_601DE60[];
extern AnimationHeader D_601E8C4;
extern Limb* D_601E9D0[];
extern Gfx D_601F1D0[];
extern Gfx D_601F500[];
extern Gfx D_601F5A0[];
extern AnimationHeader D_601F874;
extern Limb* D_601F920[];
extern Gfx D_601FCB0[];
extern Gfx D_601FF80[];
extern Gfx D_60200E0[];
extern Gfx D_6020760[];
extern Gfx D_6020A30[];
extern Gfx D_6020B40[];
extern u16* D_6020DD0[];
extern Gfx D_6020E60[];
extern u16 D_6020FB0[];
extern u16 D_6021ED0[];
extern AnimationHeader D_602201C;
extern Limb* D_60220E8[];
extern Gfx D_60223C0[];
extern Gfx D_6022450[];
extern Gfx D_6022530[];
extern u16 D_6022760[];
extern Gfx D_6022920[];
extern Gfx D_60231C0[];
extern Gfx D_60238F0[];
extern Gfx D_6023AC0[];
extern Gfx D_6024010[];
extern Gfx D_6024220[];
extern Gfx D_60244A0[];
extern u16 D_60245E0[];
extern Gfx D_6024AC0[];
extern Gfx D_6024B60[];
extern u16 D_6025500[];
extern Gfx D_6025B50[];
extern u16 D_6026420[];
extern Gfx D_60270E0[];
extern Gfx D_6027180[];
extern AnimationHeader D_6027320;
extern u16 D_6027340[];
extern Limb* D_602742C[];
extern Gfx D_6027900[];
extern u16* D_6027F50[];
extern f32 D_6028454[];
extern u16* D_60289FC[];
extern AnimationHeader D_6029528;
extern Limb* D_6029674[];
extern Gfx D_602A720[];
extern u16* D_602AAC0[];
extern u16 D_602AC50[];
extern ObjectInit* D_602B148[];
extern Gfx D_602B4C0[];
extern f32 D_602B9EC[];
extern f32 D_602BA20[];
extern f32 D_602BAE4[];
extern f32 D_602BBD8[];
extern f32 D_602BC54[];
extern f32 D_602BC58[];
extern f32 D_602BE3C[];
extern f32 D_602BE58[];
extern f32 D_602BFC4[];
extern f32 D_602C044[];
extern f32 D_602C1D4[];
extern f32 D_602C218[];
extern f32 D_602C234[];
extern f32 D_602C250[];
extern f32 D_602C294[];
extern f32 D_602C2B0[];
extern Gfx D_602D5F0[];
extern Gfx D_602DA20[];
extern Gfx D_602DAE0[];
extern Gfx D_602DB80[];
extern Gfx D_602DC20[];
extern Gfx D_602DCA0[];
extern Gfx D_602E080[];
extern Gfx D_602E380[];
extern Gfx D_602E570[];
extern EnvSettings D_602E584[];
extern Gfx D_602E7A0[];
extern Gfx D_602E9E0[];
extern ObjectInit* D_602F18C[];
extern u16* D_602F3AC[];
extern f32 D_602F638[];
extern f32 D_602F684[];
extern f32 D_602F6A0[];
extern f32 D_602F6EC[];
extern f32 D_602F708[];
extern f32 D_602F724[];
extern f32 D_602F740[];
extern f32 D_602F75C[];
extern Gfx D_602F7C0[];
extern f32 D_602FA50[];
extern Gfx D_6030500[];
extern Gfx D_6030630[];
extern u16* D_60308B8[];
extern f32 D_6030B10[];
extern ObjectInit D_6030B14[];
extern f32 D_6030B14_f32[];
extern f32 D_6030BE0[];
extern f32 D_6030BFC[];
extern f32 D_6030C18[];
extern f32 D_6030C44[];
extern f32 D_6030C60[];
extern f32 D_6030C7C[];
extern f32 D_6030D20[];
extern f32 D_6030D74[];
extern f32 D_6030DF8[];
extern f32 D_6030E14[];
extern f32 D_6030E30[];
extern f32 D_6030E4C[];
extern f32 D_6030E68[];
extern f32 D_6030F74[];
extern f32 D_6031398[];
extern f32 D_60313CC[];
extern f32 D_6031400[];
extern f32 D_603144C[];
extern f32 D_6031480[];
extern f32 D_60314C8[];
extern f32 D_6031500[];
extern f32 D_6031538[];
extern f32 D_6031554[];
extern f32 D_6031570[];
extern u16* D_60320D0[];
extern Gfx D_60320E0[];
extern f32 D_6032328[];
extern f32 D_6032408[];
extern f32 D_6032488[];
extern f32 D_60324EC[];
extern f32 D_6032550[];
extern Gfx D_6032580[];
extern Gfx D_6032BC0[];
extern u16* D_6032E18[];
extern Gfx D_6033000[];
extern f32 D_603405C[];
extern f32 D_6034368[];
extern f32 D_6034478[];
extern f32 D_603450C[];
extern f32 D_6034588[];
extern f32 D_6034664[];
extern f32 D_6034770[];
extern f32 D_60347D4[];
extern f32 D_60347F0[];
extern f32 D_603486C[];
extern Gfx D_6034B90[];
extern f32 D_60359C8[];
extern f32 D_6035A14[];
extern f32 D_6035A48[];
extern f32 D_6035AE0[];
extern f32 D_6035D9C[];
extern Gfx D_6035DA0[];
extern f32 D_6035E04[];
extern Gfx D_6035F10[];
extern f32 D_60360C0[];
extern f32 D_6036154[];
extern Gfx D_60361F0[]; // possible collision
extern f32 D_6036204[];
extern f32 D_603626C[];
extern f32 D_6036288[];
extern f32 D_60362A4[];
extern f32 D_60362D8[];
extern f32 D_60362F4[];
extern f32 D_6036328[];
extern f32 D_6036344[];
extern f32 D_6036370[];
extern f32 D_603638C[];
extern Gfx D_60363B0[];
extern f32 D_60363B8[];
extern f32 D_60363E4[];
extern f32 D_6036410[];
extern f32 D_603643C[];
extern f32 D_6036458[];
extern f32 D_60364C0[];
extern f32 D_60364DC[];
extern f32 D_6036594[];
extern f32 D_60366EC[];
extern f32 D_6036708[];
extern f32 D_6036724[];
extern f32 D_6036728[];
extern f32 D_6036744[];
extern f32 D_6036760[];
extern f32 D_603677C[];
extern Gfx D_6036840[];
extern f32 D_6036894[];
extern f32 D_60368E0[];
extern f32 D_6036930[];
extern f32 D_603694C[];
extern f32 D_6036968[];
extern Gfx D_6036CD0[];
extern Gfx D_6037CF0[];
extern u16* D_60381D8[];
extern ObjectInit D_603B074[];
extern u16* D_603D9E8[];
extern f32 D_603DCA4[];
extern f32 D_603DD40[];
extern f32 D_603DDF0[];
extern f32 D_603DE8C[];
extern f32 D_603DEF4[];
extern f32 D_603DF8C[];
extern f32 D_603DFDC[];
extern f32 D_603E014[];
extern f32 D_603E030[];
extern f32 D_603E09C[];
extern f32 D_603E0EC[];
extern f32 D_603E118[];
extern f32 D_603E14C[];
extern f32 D_603E1B4[];
extern f32 D_603E21C[];
extern f32 D_603E3E0[];
extern f32 D_603E468[];
extern f32 D_603E484[];
extern f32 D_603E4A0[];
extern f32 D_603E4A4[];
extern f32 D_603E4DC[];
extern f32 D_603E514[];
extern f32 D_603E54C[];
extern f32 D_603E598[];
extern f32 D_603E5B4[];
extern f32 D_603E5D0[];
extern f32 D_603E604[];
extern f32 D_603E620[];
extern f32 D_603E714[];
extern f32 D_603E748[];
extern f32 D_603E7C4[];
extern f32 D_603E840[];
extern f32 D_603E88C[];
extern f32 D_603E8A8[];
extern f32 D_603E98C[];
extern f32 D_603E9EC[];
extern f32 D_603EA08[];
extern f32 D_603EA74[];
extern f32 D_603EAE0[];
extern f32 D_603EB0C[];
extern Gfx D_6041070[];
extern u16 D_60447A0[];
extern u16 D_6047550[];
extern Gfx D_604A9F0[];
extern Gfx D_605C230[];

// ast_9DD390, ast_A0E340, ast_BFA740, ast_CBFE70, ast_D27600
extern Gfx D_7000000[];
extern u8 D_7000F10[];
extern u8 D_7001030[];
extern u8 D_7001270[];
extern u8 D_7001DF0[];
extern u8 D_7002110[];
extern u8 D_7003650[];
extern u8 D_7004010[];
extern Gfx D_7007350[];
extern Gfx D_700AB70[];
extern Gfx D_700BB10[];
extern Gfx D_700BE00[];
extern AnimationHeader D_700CAF4;
extern Limb* D_700CB60[];
extern u16 D_700E9A0[];
extern u8 D_70118E0[];
extern u16 D_70123F8[];

// ast_9EB5E0, ast_CA9DE0, ast_D43400, ast_D68480, ast_D91F10
extern u8 D_8000000[];
extern u16 D_8000680[];
extern u8 D_80006A0[];
extern u16 D_80017A0[];
extern u8 D_80017C0[];
extern u16 D_80038C0[];
extern u8 D_80038E0[];
extern u8 D_8003930[];
extern u8 D_8003950[];
extern u8 D_80039A8[];
extern u8 D_8003A70[];
extern u8 D_8003AB8[];
extern u8 D_8003AE0[];
extern u8 D_8003B28[];
extern u8 D_8003B50[];
extern u8 D_80046B0[];
extern u8 D_8004C50[];
extern u8 D_8005CD0[];
extern u8 D_8006280[];
extern u8 D_80064F0[];
extern u8 D_80069C0[];
extern u8 D_8006D10[];
extern u8 D_8006E50[];
extern u8 D_8007210[];
extern u8 D_80076E0[];
extern u8 D_80079F0[];
extern u8 D_80080F0[];
extern u8 D_80084B0[];
extern u8 D_8008A30[];
extern u8 D_8008DA0[];
extern u8 D_80098E0[];
extern u8 D_8009980[];
extern u8 D_8009B00[];
extern u8 D_8009CE0[];
extern u8 D_800B5E0[];
extern u8 D_800B680[];
extern u8 D_800C640[];
extern u8 D_800CD90[];
extern u8 D_800D070[];
extern u8 D_800D170[];
extern u8 D_800D1F0[];
extern u8 D_800E130[];
extern u16 D_800E170[];
extern Gfx D_8015550[];
extern Gfx D_8015DF0[];

// ast_9F4880, ast_AE60A0, ast_CDDCA0
extern Gfx D_9002CF0[];
extern Gfx D_9003330[];
extern Gfx D_9003890[];
extern Gfx D_9003DF0[];
extern Gfx D_9003F50[];
extern Gfx D_9005C80[];
extern Gfx D_900D180[];
extern Gfx D_900DD20[];
extern Gfx D_900F060[];
extern Gfx D_900F1D0[];
extern Gfx D_9010FD0[];
extern Gfx D_9011200[];
extern Gfx D_901DA50[];
extern Gfx D_9023290[];
extern Gfx D_90234D0[];
extern Gfx D_9023AD0[];

// ast_A049A0
extern Gfx D_A000000[];

// segment B is unused

// ast_CE9E70
extern Gfx D_C017440[];
extern ObjectInit* D_C0356A4[];
extern u16* D_C037E3C[];
extern f32 D_C038A48[];
extern f32 D_C038B40[];
extern f32 D_C038B40[];
extern f32 D_C038BA4[];
extern f32 D_C038BD8[];
extern f32 D_C038DC0[];
extern f32 D_C038F24[];

// ast_955270
extern Gfx D_D000000[];
extern u16 D_D000170[];
extern u16 D_D001090[];
extern u16 D_D001FB0[];
extern u16 D_D002ED0[];
extern u16 D_D003DF0[];
extern u16 D_D004D10[];
extern u16 D_D005C30[];
extern u16 D_D006B50[];
extern u16 D_D007A70[];
extern u16 D_D008990[];
extern Gfx D_D0098B0[];
extern Gfx D_D009A40[];
extern Gfx D_D00B5C0[];
extern Gfx D_D00B720[];
extern Gfx D_D00B880[];

// ast_92EC40
extern u16 D_E00E100[];
extern u16 D_E00F020[];
extern u16 D_E00FF40[];
extern u16 D_E010E60[];

// ast_D25100
extern u16 D_F000000[];
extern u16 D_F000800[];
extern u16 D_F001000[];
extern u16 D_F001800[];
extern u16 D_F002000[];

// ast_940AD0
extern u16 D_F000000[];
extern u16 D_F000F20[];
extern u16 D_F001E40[];
extern u16 D_F002D60[];
extern u16 D_F003C80[];
extern u16 D_F004BA0[];
extern u16 D_F005AC0[];
extern u16 D_F0069E0[];
extern u16 D_F007900[];
extern u16 D_F008820[];
extern u16 D_F009740[];
extern u16 D_F00A660[];
extern u16 D_F00B580[];
extern u16 D_F00C4A0[];
extern u16 D_F00D3C0[];
extern u16 D_F00E2E0[];
extern Gfx D_F014180[];
extern Gfx D_F014310[];

#endif // VARIABLES_H

