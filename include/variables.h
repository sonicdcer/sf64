#ifndef VARIABLES_H
#define VARIABLES_H

#include "sys.h"
#include "structs.h"
#include "sf64level.h"
#include "sf64object.h"
#include "sf64player.h"

extern f32 gDefaultSfxPos[];
extern f32 gDefaultMod;
extern s8 gDefaultReverb;
extern s8 gThreadCmdWritePos;
extern s8 gThreadCmdReadPos;
extern OSMesgQueue* gAudioTaskStartQueue;
extern OSMesgQueue* gThreadCmdProcQueue;
extern OSMesgQueue* gAudioUnkQueue;
extern OSMesgQueue* gAudioResetQueue;

extern OSMesg sAudioTaskStartMsg[1];
extern OSMesg sThreadCmdProcMsg[4];
extern OSMesg sAudioUnkMsg[1];
extern OSMesg sAudioResetMsg[1];

// fox_360
extern s32 D_800C9B4C;

// fox_bg
extern u16 D_800C9C3C[16];

// fox_tank
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

// fox_hud
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

// fox_A4290
extern CollisionHeader D_800D2B38[];
extern CollisionHeader2 D_800D2CA0[];

// fox_play
extern u8 D_800D2F68;
extern u8 D_800D3180[30];

// fox_radio
extern s32 gCurrentMsgPri;

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

// fox_boss
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

// fox_enmy2
extern s32 D_80161690;

// fox_hud
extern s32 D_80161704;
extern s32 D_80161708;
extern s32 D_8016170C;
extern s32 gTotalHits; // 0x80161714 gTotalGameScore
extern f32 D_80161720[3];
extern s32 D_8016172C;
extern s32 D_80161730;
extern s32 gShowBossHealth; // 0x80161734

// fox_play
extern u8 D_80161A50;
extern f32 D_80161A54;
extern s32 D_80161A58;
extern s32 D_80161A5C;
extern u16 D_Timer_80161A60;
extern u16 D_80161A62;
extern s32 D_80161A64;
extern EnvSettings* sEnvSettings;

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

// fox_versus
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

#endif // VARIABLES_H
