#ifndef VARIABLES_H
#define VARIABLES_H

extern s32 D_800D2870;
extern s32 D_800DD8B4;

extern OSThread D_800DEAA0;
extern OSThread D_800DFC50; // no gap
extern OSThread D_800E0E00; // 0x1000 gap
extern s32 D_800E1FB0; // 0x1000 gap, probably OSScTask
extern OSMesgQueue D_800E2010;
extern OSMesg D_800E2028;
extern OSMesgQueue D_800E2148;
extern OSMesgQueue D_800E2238;
extern OSMesgQueue D_800E2278;

extern u8 D_800DD8B0[];
extern u8 D_800DD8B8[];
extern OSContStatus D_800DD8F0;
extern OSMesgQueue D_800E2128;
extern OSMesgQueue D_800E2318;
extern u8 D_80137E80;
extern s32 D_80144F60;

extern s8 D_800C7C50;
extern s8 D_800C7C54;
extern OSMesgQueue* D_800C7C58;
extern OSMesgQueue* D_800C7C5C;
extern OSMesgQueue* D_800C7C60;
extern OSMesgQueue* D_800C7C64;
extern OSMesg D_80156600;
extern OSMesg D_80156608;
extern OSMesg D_80156618;
extern OSMesg D_8015661C;

extern OSThread D_80138E90; 
extern OSThread D_8013A040; // 0x1000 gap
extern OSThread D_8013B1F0; // 0x1000 gap
#endif // VARIABLES_H

