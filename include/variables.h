#ifndef VARIABLES_H
#define VARIABLES_H

#include "sys.h"
#include "structs.h"
#include "sf64level.h"
#include "sf64object.h"
#include "sf64player.h"

// fox_360
extern s32 D_360_800C9B4C;

// fox_bg
extern u16 D_bg_800C9C3C[16];

// fox_boss
extern s32 D_boss_800C9E90[];

// fox_tank
extern Vec3f D_tank_800C9F2C;

// fox_display
extern s32 D_display_800CA220;
extern f32 D_display_800CA230;
extern Actor* D_display_800CA234;
extern s32 D_display_Timer_800CA238;

// fox_edata
extern f32 D_edata_800CBE70[];
extern f32 D_edata_800CBE8C[];
extern f32 D_edata_800CBEA8[];
extern f32 D_edata_800CBEC4[];
extern f32 D_edata_800CBEE0[];
extern f32 D_edata_800CBEFC[];
extern f32 D_edata_800CBF18[];
extern f32 D_edata_800CBF34[];
extern f32 D_edata_800CBF38[];
extern f32 D_edata_800CBF54[];
extern f32 D_edata_800CBF70[];
extern f32 D_edata_800CBF8C[];
extern f32 D_edata_800CBFA8[];
extern f32 D_edata_800CBFC8[];
extern f32 D_edata_800CBFE4[];
extern f32 D_edata_800CC000[];
extern f32 D_edata_800CC01C[];
extern f32 D_edata_800CC038[];
extern f32 D_edata_800CC054[];
extern f32 D_edata_800CC070[];
extern f32 D_edata_800CC0D4[];
extern f32 D_edata_800CC0F0[];
extern ObjectInfo D_edata_800CC124[];
extern f32* D_edata_800CF964[];

// fox_edisplay
extern f32 D_edisplay_800CF9B0[];
extern Gfx* D_edisplay_800CFA54[];
extern Gfx* D_edisplay_800CFAC4[];
extern Gfx* D_edisplay_800CFADC[];
extern Gfx* D_edisplay_800CFB08[];
extern Gfx* D_edisplay_800CFB14[];
extern Gfx* D_edisplay_800CFB28[];
extern Gfx* D_edisplay_800CFB40[];
extern Gfx* D_edisplay_800CFB64[];
extern Gfx* D_edisplay_800CFB88[];
extern Gfx* D_edisplay_800CFBA8[];
extern Gfx* D_edisplay_800CFBE4[];
extern Gfx* D_edisplay_800CFC0C[];
extern Gfx* D_edisplay_800CFC40[];
extern Gfx* D_edisplay_800CFC50[];
extern Gfx* D_edisplay_800CFC64[];
extern Gfx* D_edisplay_800CFC7C[];
extern f32 D_edisplay_800CFCA0[];
extern f32 D_edisplay_800CFCCC[];
extern Gfx D_edisplay_800CFD80[];

// fox_enmy
extern ObjectInit* D_enmy_800CFDA0[];
extern u32 D_enmy_800CFF54[9];

// fox_enmy2
extern s32 D_enmy2_800CFF80[4];
extern s32 D_enmy2_800CFF90;

// fox_hud
extern s16 D_hud_800D1970;

// fox_A4290
extern CollisionHeader D_800D2B38[];
extern CollisionHeader2 D_800D2CA0[];

// fox_play
extern u8 D_play_800D2F68;
extern u8 D_play_800D3180[30];

// fox_radio
extern s32 gCurrentMsgPri;

// fox_360
extern s32 D_360_8015F900;
extern s32 D_360_8015F904;
extern s16 D_360_8015F908;
extern s32 D_360_8015F90C;
extern s32 D_360_8015F910;
extern f32 D_360_8015F914;
extern f32 D_360_8015F918;
extern f32 D_360_8015F91C;
extern u8 D_360_8015F920;
extern u8 D_360_8015F921;
extern s32 D_360_8015F924;
extern s32 D_360_8015F928;
extern s32 D_360_8015F930[3];
extern s32 D_360_8015F93C;
extern s32 D_360_8015F940;
extern f32 D_360_8015F944;

// fox_bg
extern f32 D_bg_800C9C30;
extern u16 D_bg_800C9C34;
extern f32 D_bg_8015F960;
extern u8 D_bg_8015F964;
extern f32 D_bg_8015F968;
extern f32 D_bg_8015F96C;
extern f32 D_bg_8015F970;
extern s32 D_bg_8015F974;
extern s32 D_bg_8015F978;
extern s32 D_bg_8015F97C;
extern s32 D_bg_8015F980;
extern f32 D_bg_8015F984;

// fox_boss
extern s32 gBossFrameCount;

// fox_display
extern Vec3f D_display_801613B0[]; // static, here for reordering
extern Vec3f D_display_801613E0[]; // static, here for reordering
extern s16 D_display_80161410;
extern Matrix D_display_80161418[]; // static, here for reordering
extern Vec3f D_display_80161518[]; // static, here for reordering
extern Vec3f D_display_80161548[]; // static, here for reordering
extern Vec3f D_display_80161578[];
extern f32 D_display_801615A8[];
extern f32 D_display_801615B8[];

// fox_edisplay
extern Vec3f D_edisplay_801615D0;

// fox_enmy
extern s32 D_enmy_Timer_80161670[4];
extern s32 D_enmy_80161680;
extern u8 D_enmy_80161684;

// fox_enmy2
extern s32 D_enmy2_80161690;

// fox_hud
extern s32 D_hud_80161704;
extern s32 D_hud_80161708;
extern s32 D_hud_8016170C;
extern s32 D_hud_80161710;
extern s32 gTotalHits; // 0x80161714 gTotalGameScore
extern f32 D_hud_80161720[3];
extern s32 D_hud_8016172C;
extern s32 D_hud_80161730;
extern s32 gShowBossHealth; // 0x80161734

// fox_play
extern u8 D_play_80161A50;
extern f32 D_play_80161A54;
extern s32 D_play_80161A58;
extern s32 D_play_80161A5C;
extern u16 D_play_Timer_80161A60;
extern u16 D_play_80161A62;

//fox_radio
extern u16** D_radio_80178720;
extern s32 D_radio_80178724;
extern s32 D_radio_80178728;
extern s32 D_radio_8017872C;
extern f32 D_radio_80178730;
extern f32 D_radio_80178734;
extern f32 D_radio_80178738;
extern f32 D_radio_8017873C;
extern f32 D_radio_80178740;

// fox_versus
extern s32 D_versus_80178750;
extern s32 D_versus_80178754;
extern s32 D_versus_80178758;
extern s32 sUnlockLandmaster; // sUnlockLandmaster
extern s32 sUnlockOnFoot; // sUnlockOnFoot
extern s32 D_versus_80178768[];

// gfx_data
extern u16 D_Unk_800DACB8[][32];
extern u16 D_Tex_800D99F8[];
extern u16 D_Tex_800DBA20[];
extern Gfx D_Gfx_800DBAA0[];
extern Gfx D_Gfx_800DAC20[];
extern Gfx D_Gfx_800D9688[];
extern u8 D_Unk_800DB4B8[];
extern Gfx D_Gfx_800D94D0[];


#endif // VARIABLES_H
