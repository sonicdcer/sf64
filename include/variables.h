#ifndef VARIABLES_H
#define VARIABLES_H

#include "structs.h"

extern u64 __rspboot_start[];
extern u64 __rspboot_end[];
extern u64 __f3dex_start[];
extern u8 gF3dexData;

extern u8 D_8003B50[];
extern u8 D_80046B0[];
extern s32 D_800C45D0;
extern f32 D_800C45E0[];

extern Mtx gIdentityMtx; // 800C4620
extern Matrix gIdentityMatrix; //800C4660

extern u8 sFaultCharIndex[];
extern s32 sFaultCharPixelFlags[];
extern const char* D_800C4870[];
extern const char* D_800C48B8[];

extern Vec3f D_800C5D28;
extern f32 D_800C5D34;
extern s8 D_800C5D3C;
extern s8 D_800C7C50;
extern s8 D_800C7C54;
extern OSMesgQueue* D_800C7C58;
extern OSMesgQueue* D_800C7C5C;
extern OSMesgQueue* D_800C7C60;
extern OSMesgQueue* D_800C7C64;

extern char D_800C7C80[];

extern OSContPad D_800DD880[4];
extern OSContPad D_800DD898[4];
extern u8 D_800DD8B0[4];
extern s32 D_800DD8B4;
extern u8 D_800DD8B8[4];
extern u8 D_800DD8BC[4]; // Fake symbol. Only exists as loop terminator for D_800DD8B8
// extern OSContPad D_800DD8C0[4];
// extern OSContPad D_800DD8D8[4];
// extern OSContStatus D_800DD8F0[4];
// extern OSPfs D_800DD900[4];

extern u8 gAudioThreadStack[0x1000];  // 800DDAA0
extern OSThread gGraphicsThread;        // 800DEAA0
extern u8 gGraphicsThreadStack[0x1000]; // 800DEC50
extern OSThread gUnkThread3;        // 800DFC50
extern u8 gUnkThread3Stack[0x1000]; // 800DFE00
extern OSThread gSerialThread;        // 800E0E00
extern u8 gSerialThreadStack[0x1000]; // 800E0FB0
extern u8 gUnusedStack[0x1000];

extern SPTask* gCurrentTask;
extern SPTask* D_800E1FB4[1];
extern SPTask* D_800E1FB8[2];
extern SPTask* D_800E1FC0[2];
extern SPTask* D_800E1FC8[2];
extern u32 gSegments[16]; // 800E1FD0
extern OSMesgQueue gPiMgrCmdQueue; // 800E2010
extern OSMesg sPiMgrCmdBuff[50]; // 800E2028

extern OSMesgQueue D_800E20F0;
extern void *D_800E2108[1];
extern OSIoMesg D_800E2110;
extern OSMesgQueue gSerialEventQueue;
extern void *D_800E2140[1];
extern OSMesgQueue gMainThreadMsgQueue;
extern void *D_800E2160[32];
extern OSMesgQueue gTaskMsgQueue;
extern void *D_800E21F8[16];
extern OSMesgQueue D_800E2238;
extern void *D_800E2250[1];
extern OSMesgQueue D_800E2258;
extern void *D_800E2270[1];
extern OSMesgQueue D_800E2278;
extern void *D_800E2290[4];
extern OSMesgQueue D_800E22A0;
extern void *D_800E22B8[2];
extern OSMesgQueue gSerialThreadMsgQueue;
extern void *D_800E22D8[8];
extern OSMesgQueue D_800E22F8;
extern void *D_800E2310[1];
extern OSMesgQueue D_800E2318;
extern void *D_800E2330[1];
extern OSMesgQueue gThread7msgQueue;
extern void *D_800E2350[16];
extern OSMesgQueue D_800E2390;
extern void *D_800E23A8[1];

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
extern s32* D_80137E74;

// some sort of struct?
extern u8 D_80137E78;
extern u32 D_80137E7C;
extern u8 D_80137E80;
extern u8 D_80137E81;
extern u8 D_80137E84[4];
extern u16 D_80137E88;
extern u16 D_80137E8A;

extern OSThread sIdleThread; // 80138E90
extern u8 sIdleThreadStack[0x1000]; // 801390A0
extern OSThread gMainThread; // 8013A040
extern u8 sMainThreadStack[0x1000]; // 8013A1F0
extern OSThread gAudioThread; //8013B1F0

extern Matrix* D_8013B3C0;
extern Matrix D_8013B3C8[0x20];
extern Matrix* D_8013BBC8;
extern Matrix D_8013BBD0[0x20];

extern SaveFile D_80144F60;
extern SaveFile D_80145160;
extern FaultMgr gFaultMgr;

extern OSMesg D_80156600[1];
extern OSMesg D_80156608[4];
extern OSMesg D_80156618[1];
extern OSMesg D_8015661C[1];

extern u8 D_800CA3B0;
extern OverlayInit D_800CA3B4[1]; // sets segment 15 with no overlay
extern OverlayInit D_800CA44C[6]; // overlay EF0260
extern OverlayInit D_800CA7DC[1]; // EBFBE0
extern OverlayInit D_800CA874[1]; // EBFBE0
extern OverlayInit D_800CA90C[1]; // EBFBE0
extern OverlayInit D_800CA9A4[1]; // EBFBE0
extern OverlayInit D_800CAA3C[1]; // DF4260
extern OverlayInit D_800CAAD4[2]; // E08400
extern OverlayInit D_800CAC04[6]; // E6A810
extern OverlayInit D_800CAF94[2]; // E08400
extern OverlayInit D_800CB0C4[1]; // E51970
extern OverlayInit D_800CB15C[1]; // E16C50
extern OverlayInit D_800CB1F4[1]; // E16C50
extern OverlayInit D_800CB28C[2]; // E51970
extern OverlayInit D_800CB3BC[1]; // E16C50
extern OverlayInit D_800CB454[1]; // E9F1D0
extern OverlayInit D_800CB4EC[1]; // E16C50
extern OverlayInit D_800CB584[1]; // E16C50
extern OverlayInit D_800CB61C[1]; // DF4260
extern OverlayInit D_800CB6B4[1]; // E9F1D0
extern OverlayInit D_800CB74C[2]; // E9F1D0
extern OverlayInit D_800CB87C[1]; // E08400
extern OverlayInit D_800CB914[1]; // E51970
extern OverlayInit D_800CB9AC[1]; // E51970
extern OverlayInit D_800CBA44[2]; // E6A810
extern OverlayInit D_800CBB74[1]; // DF4260
extern OverlayInit D_800CBC0C[1]; // E08400
extern OverlayInit D_800CBD3C[1]; // EFFA40
extern f32 D_800CBF18[];
extern ObjectStruct_1C D_800CC124[400];
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
extern f32 D_800CFC98[];
extern Vec3f D_800CFCC0; // initializer in sf_5A240
extern f32 D_800CFCCC[];
extern Vec3f D_800CFCEC;
extern Vec3f D_800CFCF8;
extern Vec3f D_800CFD04;
extern Vec3f D_800CFD10;
extern Vec3f D_800CFD1C;
extern Vec3f D_800CFD28;
extern Vec3f D_800CFD34;
extern ObjectInit* D_800CFDA0[];
extern Gfx D_800CFD80[];
extern s32 D_800CFDF4[];
extern f32 D_800CFE5C[];
extern Vec3f D_800CFEC4[6];
extern Vec3f D_800CFF0C[6];
extern u32 D_800CFF54[9];
extern s32 D_800CFF90;
extern s16 D_800CFF94[];
extern u8 D_800CFFB4[];
extern f32 D_800CFFC4[];
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
extern Vec3f D_800D25D0; // initializer in sf_9A580
extern s32 D_800D2860[];
extern s32 D_800D2870;
extern s32 D_800D2874[];
extern s32 D_800D2884[];
extern s32 D_800D2894[];
extern s32 D_800D28A4[];
extern s32 D_800D28B4[];
extern u8 D_800D2908;
extern u8 D_800D290C;
extern u8 D_800D2910;
extern u8 D_800D2914;
extern u8 D_800D3180[0x1E];
extern s32 D_800D4A70;
extern Save D_800D4D10;

extern s32 D_8015F924;
extern s32 D_8015F928;
extern s32 D_8015F930[3];
extern s32 D_8015F93C;
extern s32 D_8015F940;
extern f32 D_8015F944;
extern s16 D_80161410;
extern Vec3f D_80161578[];
extern Vec3f D_801615D0;
extern Vec3f D_801615E0;
extern s32 D_801615EC;
extern Matrix D_801615F0;
extern UnkStruct_D_80161630 D_80161630;
extern s32 D_80161670[4];
extern s32 D_80161680;
extern u8 D_80161684;
extern s32 D_80161690;
extern f32 D_801616BC;
extern f32 D_801616C0;
extern f32 D_801616C4;
extern f32 D_801616C8;
extern s32 D_80161708;
extern s32 D_8016170C;
extern s32 D_80161714;
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
extern s32 D_801617B4;
extern s32 D_801617B8;
extern s32 D_80161810[];
extern s8 D_801619A0[100];
extern f32 D_80161A10;
extern f32 D_80161A14;
extern u8 D_80161A2C;
extern u16 D_80161A2E;
extern u16 D_80161A30;
extern u16 D_80161A32;
extern u16 D_80161A34;
extern u16 D_80161A36;
extern u8 D_80161A38;
extern u8 D_80161A39;
extern f32 D_80161A3C;
extern f32 D_80161A40;
extern f32 D_80161A44;
extern u8 D_80161A50;
extern f32 D_80161A54;
extern s32 D_80161A5C;
extern u16 D_80161A62;
extern s32 D_80161A88;
extern s32 D_80161A8C;
extern u8 D_80161A90[];
extern s32 D_80161A98;
extern s32 D_80161A9C;
extern s16 D_80161AA0[];
extern s32 D_80161AA8[];
extern s32 D_80161AB8;
extern Object_80 D_80161B00[50];
extern Object_4C D_80163400[40];
extern Object_2F4 D_80163FE0[60];
extern Object_408 D_8016F110[4];
extern Object_8C D_80170130[100];
extern Object_6C D_801737E0[20];
// extern size_70 D_80174050[16]
extern UnkStruct_D_80174750 D_80174750[100];
extern UnkStruct_D_80175A10 D_80175A10[64];
extern UnkStruct_D_80175A10 D_80176410;
// extern size_1C D_80176438[10]
extern s32 D_80176550[2];
extern f32 D_80176558[2][100];
extern f32 D_80176878[2][100];
extern f32 D_80176B98[2][100];
extern f32 D_801771D8[2][100];
extern f32 D_80176EB8[2][100];
extern s32 D_801774F8;
extern f32 D_80177500[2][100];
extern s32 D_80177820;
extern s32 D_80177824;
extern s32 D_8017782C;
extern u8 D_80177830;
extern s32 D_80177834;
extern s32 D_80177838;
extern s32 D_8017783C;
extern s32 D_80177840;
extern s32 D_80177848;
extern s32 D_8017784C;
extern s32 D_80177850;
extern s32 D_80177854;
extern s32 D_80177858[];
extern s32 D_80177868;
extern s32 D_80177870[];
extern s32 D_80177880;
extern s32 D_80177898;
extern s32 D_8017789C;
extern s32 D_801778A0;
extern s32 D_801778A4;
extern s32 D_801778A8;
extern u8 D_801778AB;
extern s32 D_801778AC;
extern s32 D_801778B0[];
extern s32 D_801778D0[];
extern s32 D_801778E8;
extern u16 D_80177908[];
extern u16 D_80177928[];
extern s8 D_80177930;
extern u16 D_80177938[];
extern f32 D_80177940;
extern u16 D_80177948[];
extern f32 D_80177950;
extern f32 D_80177958[];
extern f32 D_80177978;
extern UnkStruct_D_8017797C* D_8017797C;
extern f32 D_80177980;
extern f32 D_80177988;
extern s32 D_80177990[];
extern f32 D_801779A0;
extern f32 D_801779A8[];
extern f32 D_801779B8;
extern f32 D_801779C0;
extern s32 D_801779C8[];
extern Vec3f D_801779D8;
extern s32 D_801779F8;
extern s32 D_80177A80;
extern s8 D_80177A98;
extern u8 D_80177AB0;
extern s32 D_80177AE0;
extern s32 D_80177AF8;
extern s32 D_80177B40;
extern s32 D_80177B48;
extern s32 D_80177B8C[];
extern s32 D_80177BB0[];
extern u16 D_80177C30[];
extern s32 D_80177C50;
extern u8 D_80177C74;
extern s32 D_80177C80[];
extern s32 D_80177C94;
extern u8 D_80177C98;
extern s32 D_80177C9C;
extern s32 D_80177CA0;
extern s32 D_80177CA4;
extern s32 D_80177CAC;
extern f32 D_80177CB0;
extern s32 D_80177CB4;
extern s32 D_80177CBC;
extern s32 D_80177CC4;
extern f32 D_80177D08;
extern s32 D_80177D10[];
extern f32 D_80177D20;
extern s32 D_80177D28[];
extern s32 D_80177D40[];
extern f32 D_80177D50;
extern s32 D_80177D58[];
extern f32 D_80177D68;
extern s32 D_80177DA0[];
extern s32 D_80177DB0;
extern s32 D_80177DC8;
extern s32 D_80177E70;
extern s32 D_80177E78;
extern s32 D_80177E80;
extern Vec3f D_80177E88;
extern Vec3f D_80177E98[];
extern Vec3f D_80177F10;
extern s32 D_8017812C;
extern s32 D_80178234;
extern s32 D_8017827C;
extern UnkStruct_D_80178280* D_80178280;
extern s32 D_80178284;
extern s32 D_8017829C;
extern s32 D_801782A4;
extern Object_58 *D_801782A8;
extern s32 D_801782B8;
extern f32 *D_801782C4;
extern s32 D_801782D8;
extern s32 D_801782E8;
extern s32 D_801782F8;
extern u16* D_80178308;
extern ObjectInit* D_80178310;
extern s32 D_80178320;
extern s32 D_80178328;
extern s32 D_80178330;
extern s32 D_80178338;
extern s32 D_80178340;
extern s32 D_80178348;
extern s32 D_80178350;
extern s32 D_80178354;
extern s32 D_80178360;
extern s32 D_80178364;
extern s32 D_80178368;
extern f32 D_8017836C;
extern f32 D_80178370;
extern f32 D_80178374;
extern f32 D_80178378;
extern s32 D_80178380[];
extern s32 D_80178390[];
extern s32 D_801783A0[];
extern s32 D_801783B0[];
extern s32 D_801783D8;
extern s32 D_801783DC;
extern s32 D_80178410;
extern f32 D_80178420;
extern f32 D_80178424;
extern f32 D_80178428;
extern f32 D_8017842C;
extern f32 D_8017847C;
extern s32 D_80178480;
extern s32 D_80178488;
extern s32 D_801784A4;
extern s32 D_801784AC;
extern s32 D_801784DC;
extern s32 D_801784E0;
extern s32 D_801784E4;
extern s32 D_80178548;
extern s32 D_8017854C;
extern s32 D_80178550;
extern s32 D_80178554;
extern s32 D_80178558;
extern s32 D_8017855C;
extern s32 D_80178580;
extern s32 *D_80178710;
extern s32 D_80178728;
extern s32 D_8017872C;
extern f32 D_80178730;
extern f32 D_80178734;
extern f32 D_80178738;
extern f32 D_8017873C;
extern f32 D_80178740;
extern s32 D_80178754;
extern s32 D_80178758;
extern s32 D_80178768[];
extern SaveFile D_80178870;

extern u16 D_Tex_800D99F8[];
extern u16 D_Tex_800DBA20[];
extern Gfx D_Gfx_800DBAA0[];
extern Gfx D_Gfx_800DAC20[];
extern Gfx D_Gfx_800D9688[];

extern DmaEntry gDmaTable[]; // 178A70
extern u8 D_80179010[][16 * 13 / 2];
extern u16 D_80182544[];
extern u16 D_80183CA8[];
extern u16 D_80183CF0[];
extern u16 D_80183D3C[];
extern u16 D_80183630[];
extern u16 D_8018366C[];
extern u16 D_80183690[];
extern u16 D_801836B0[];
extern u16 D_801836F8[];
extern u16 D_80183724[];
extern u16 D_80183900[];
extern u16 D_80183950[];
extern u16 D_8018398C[];
extern u16 D_801839B8[];
extern u16 D_80183A08[];
extern u16 D_80183A64[];
extern UnkStruct_D_80185CBC D_80185CBC[];

extern Gfx* D_DF4260_8019A008[];
extern Matrix D_E51970_8019EE80;
extern Gfx* D_E6A810_801B769C[];
extern Gfx* D_E6A810_801B7584[];
extern Gfx* D_E6A810_801B7608[];
extern f32 D_E9F1D0_801A7F60;
extern f32 D_E9F1D0_801A7F78;
extern f32 D_EBFBE0_801B7BC8;
extern f32 D_EBFBE0_801B7BCC;
extern s32 D_EBFBE0_801B8220[]; // total hits ranking? see func_EBFBE0_80197DE4
extern u8 D_EBFBE0_801B8248[][4];
extern s32 D_EBFBE0_801B827C;
extern s32 D_EBFBE0_801B8280;
extern s32 D_EBFBE0_801B8284;
extern s32 D_EBFBE0_801B8288;
extern s32 D_EBFBE0_801B82A8;
extern s32 D_EBFBE0_801B82AC;
extern s32 D_EBFBE0_801B82BC;
extern s32 D_EBFBE0_801B82C0;
extern s32 D_EBFBE0_801B82C4;
extern f32 D_EBFBE0_801B82E0;
extern f32 D_EBFBE0_801B82E4;
extern f32 D_EBFBE0_801B82E8;
extern s32 D_EBFBE0_801B82F8;
extern s32 D_EBFBE0_801B82FC;
extern s32 D_EBFBE0_801B8300;
extern f32 D_EBFBE0_801B8304;
extern f32 D_EBFBE0_801B8308;
extern f32 D_EBFBE0_801B830C;
extern s32 D_EBFBE0_801B8310;
extern s32 D_EBFBE0_801B8314;
extern s32 D_EBFBE0_801B8318;
extern s32 D_EBFBE0_801B831C;
extern s32 D_EBFBE0_801B8320;
extern s32 D_EBFBE0_801B8324;
extern f32 D_EBFBE0_801B833C;
extern s32 D_EBFBE0_801B8344;
extern s32 D_EBFBE0_801B8348;
extern s32 D_EBFBE0_801B86A4;
extern f32 D_EBFBE0_801B86C8;
extern f32 D_EBFBE0_801B86CC;
extern f32 D_EBFBE0_801B86D0;
extern f32 D_EBFBE0_801B86D4;
extern f32 D_EBFBE0_801B86D8;
extern f32 D_EBFBE0_801B86DC;
extern s32 D_EBFBE0_801B9040;
extern f32 D_EBFBE0_801B905C;
extern f32 D_EBFBE0_801B9060;
extern f32 D_EBFBE0_801B9064;
extern s8 D_E6A810_801BA1E8;



extern char D_EBFBE0_801ADA44[];
extern s32 D_EBFBE0_801ADA84[];
extern s32 D_EBFEB0_801ADA94;

extern u8 D_80281000[0x400];
extern u8 D_80281400[0xC00];
extern FrameBuffer D_80282000; // z buffer
extern u8 D_802A7800;
extern u8 D_802D7800;
extern s32 D_80387800;
extern u16 D_8038F080[];
extern u16 D_8038F300[];
extern FrameBuffer gFrameBuffers[3]; // 8038F800

extern u16 D_1002040[];
extern u16 D_10050E0[];
extern u16 D_100BAC0[];
extern u16 D_100D900[];
extern u16 D_10032A0[];
extern Gfx D_10194C0[];
extern Gfx D_1024290[];
extern u8 D_1011A40[];
extern u16 D_1011AB0[];
extern u8 D_1011E80[];
extern u16 D_1011EC0[];
extern s32 D_1011ED0[];
extern s32 D_1011F08[];
extern u8 D_10127D0[];
extern u16 D_1012898[];
extern u8 D_10128C0[];
extern u16 D_1012988[];
extern u8 D_10129C0[];
extern u16 D_1013090[];
extern Gfx D_1015510[];
extern Gfx D_10177C0[];
extern Gfx D_1023750[];
extern Gfx D_1024230[];
extern Gfx D_1024830[];
extern u8 D_1024A58[];
extern Gfx D_102A8A0[];
extern Gfx D_1024AC0[];
extern Gfx D_1028230[];
extern Gfx D_101CAE0[];
extern Gfx D_1023C80[];
extern Gfx D_101A570[];
extern Gfx D_1019CA0[];
extern Gfx D_1016870[];
extern Gfx D_1022E80[];
extern Gfx D_102A010[];
extern Gfx D_1032780[];
extern Gfx D_1019820[];
extern Gfx D_101A8E0[];
extern Gfx D_102FE80[];
extern Gfx D_10231A0[];

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
extern Gfx D_20073F0[];
extern Gfx D_2008480[];
extern Gfx D_2009510[];
extern Gfx D_200A5A0[];
extern Gfx D_200B630[];
extern Gfx D_200C6C0[];
extern Gfx D_200E7F0[];
extern Gfx D_200F080[];
extern Gfx D_200F910[];
extern Gfx D_20101A0[];

extern u8 D_3000000[];
extern u16 D_3000080[];
extern u16 D_3000BC0[];
extern u8 D_300D350[];
extern u16 D_300D398[];
extern u8 D_300D3C0[];
extern u16 D_300D408[];
extern u8 D_300D440[];
extern u16 D_300D500[];
extern Gfx D_30155E0[];
extern Gfx D_3015D80[];
extern Gfx D_3016660[];
extern Gfx D_3011720[];
extern Gfx D_3005980[];

extern Gfx D_40018A0[];
extern Gfx D_4003BD0[];
extern Gfx D_4007870[];
extern Gfx D_4007AF0[];
extern Gfx D_400B390[];

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

extern f32 D_6006940[];
extern f32 D_600695C[];
extern f32 D_6006978[];
extern f32 D_6006994[];
extern f32 D_60069B0[];
extern f32 D_60069CC[];
extern f32 D_60069E8[];
extern f32 D_6006A04[];
extern f32 D_6006A20[];
extern Gfx D_6007650[];
extern Gfx D_60148B0[];
extern Gfx D_601AE40[];
extern Gfx D_6023AC0[];
extern s16 D_6029528[];
extern Gfx D_602DA20[];
extern Gfx D_6032BC0[];
extern Gfx D_6034B90[];
extern Gfx D_6035DA0[];
extern Gfx D_60361F0[];
extern Gfx D_60119A0[];
extern Gfx D_6012C00[];
extern Gfx D_6009F90[];
extern Gfx D_600D730[];
extern Gfx D_600DBC0[];
extern Gfx D_60363B0[];
extern Gfx D_6036840[];
extern Gfx D_6036CD0[];
extern Gfx D_6022920[];
extern Gfx D_6020B40[];
extern UNK_TYPE D_6029674;
extern ObjectInit* D_6010088[];
extern u16 D_601B4B0[];
extern Gfx D_601D1F0[];
extern s16 D_6029528[];
extern ObjectInit* D_602B148[];
extern ObjectInit* D_602F18C[];
extern UNK_TYPE D_601E8C4;
extern UNK_TYPE D_601E9D0;
extern Gfx D_6018C00[];
extern Gfx D_6024B60[];
extern Gfx D_6025B50[];
extern Gfx D_6007CF0[];
extern Gfx D_6007D90[];
extern u16 D_60447A0[];
extern u16 D_6047550[];
extern Gfx D_6004570[];
extern u8 D_6001B80[];
extern u8 D_60020D0[];

extern Gfx D_7007350[];
extern Gfx D_700BB10[];
extern u8 D_7004010[];

extern u8 D_80038E0[];
extern u8 D_8003930[];
extern u8 D_8003950[];
extern u8 D_80039A8[];
extern u8 D_8003A70[];
extern u8 D_8003AB8[];
extern u8 D_8003AE0[];
extern u8 D_8003B28[];
extern u8 D_800D070[];
extern u8 D_800D170[];

extern Gfx D_900D180[];
extern Gfx D_9010FD0[];
extern Gfx D_9023290[];
extern Gfx D_90234D0[];

extern ObjectInit* D_C0356A4[];
extern Gfx D_C017440[];

extern Gfx D_D0098B0[];

extern Gfx D_F014310[];
extern Gfx D_F014180[];
extern u16 D_F000000[];
extern u16 D_F000800[];
extern u16 D_F001000[];
extern u16 D_F001800[];
extern u16 D_F002000[];

extern ObjectInit* D_C0356A4[];

#endif // VARIABLES_H

