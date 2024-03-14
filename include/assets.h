
#ifndef ASSETS_H
#define ASSETS_H

#include "sys.h"
#include "sf64level.h"
#include "sf64object.h"
#include "sf64player.h"

// ast_common
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
extern u8 D_1011ED0[];
extern u16 D_1011F08[];
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
extern Gfx D_101AD20[];
extern Gfx D_101AED0[];
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
extern Gfx D_1025800[];
extern Gfx D_1026090[];
extern Gfx D_1028230[];
extern Gfx D_1029780[];
extern Gfx D_102A010[];
extern Gfx D_102A8A0[];
extern Gfx D_102ED50[];
extern Gfx D_102F5E0[];
extern Gfx D_102FE80[];
extern u16 D_102FF08[];
extern Gfx D_1031630[];
extern Gfx D_1031EC0[];
extern Gfx D_1032780[];

// ast_arwing, ast_landmaster, ast_blue_marine, ast_vs_player
extern u8  D_3000000[];
extern u16 D_3000080[];
extern u8  D_30001E0[];
extern u16 D_3000380[];
extern u8  D_30003A0[];
extern u16 D_30004E0[];
extern u8  D_3000510[];
extern Gfx D_3000660[];
extern u8  D_30006D0[];
extern u16 D_30006A0[];
extern u16 D_3000810[];
extern u8  D_30013E0[];
extern u8  D_3001420[];
extern u16 D_3000BC0[];
extern Gfx D_3006940[];
extern u8  D_3004010[];
extern u16 D_3003E20[];
extern u16 D_3004D58[];
extern Gfx D_301AD60[];
extern Gfx D_301AEF0[];
extern Gfx D_302D120[];
extern u16 D_3007500[];
extern u8  D_3006C60[];
extern u16 D_300B218[];
extern u8  D_300A470[];



extern Gfx D_3001C90[];
extern Gfx D_3003CE0[];
extern Gfx D_3005980[];
extern Gfx D_3005AB0[];
extern u16 D_3005EA8[];
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
extern Gfx D_3011E40[];
extern Gfx D_3012ED0[];
extern Gfx D_30131F0[];
extern Gfx D_3013580[];
extern Gfx D_3013780[];
extern Gfx D_30146B0[];
extern Gfx D_3014BF0[];
extern Gfx D_3015120[];
extern Gfx D_30155E0[];
extern Gfx D_3015740[];
extern Animation D_3015AF4;
extern Animation D_3015C28;
extern Gfx D_3015D80[];
extern Animation D_30163C4;
extern Limb* D_3016610[];
extern Gfx D_3016660[];
extern Gfx D_30160A0[];
extern Gfx D_3016B00[];
extern Gfx D_3016B30[];
extern Gfx D_3016CC0[];
extern Gfx D_30173C0[];
extern Gfx D_30174E0[];
extern Gfx D_3017600[];
extern Gfx D_3017600[];
extern Gfx D_30183D0[];
extern Gfx D_3018800[];
extern Gfx D_30194E0[];
extern Gfx D_301B080[];
extern Gfx D_301B6E0[];
extern Animation D_301C3A8;
extern Limb* D_301C614[];
extern Animation D_301CFEC;
extern Limb* D_301D258[];
extern Animation D_301D888;
extern Limb* D_301DB94[];
extern Animation D_301E19C;
extern Limb* D_301E3E8[];
extern Gfx D_301E570[];
extern Gfx D_301F140[];
extern Gfx D_301FD20[];
extern Gfx D_302D240[];
extern Gfx D_302D4D0[];
extern EnvSettings D_302DD70;
extern EnvSettings D_302DDB4;
extern EnvSettings D_302DDF8;
extern ObjectInit D_302DE3C[];
extern ObjectInit D_302E0E4[];
extern ObjectInit D_302E170[];
extern ObjectInit D_302E378[];
extern Vec3f D_302E56C[];
extern Vec3f D_302E65C[];
extern Vec3f D_302E74C[];
extern Vec3f D_302E830[];
extern Vec3f D_302E95C[];
extern Vec3f D_302EA4C[];
extern Vec3f D_302EB3C[];
extern Vec3f D_302EC20[];
extern f32 D_302ED4C[];
extern f32 D_302ED98[];
extern f32 D_302EDB4[];
extern f32 D_302EE00[];
extern f32 D_302EE64[];
extern f32 D_302EE80[];
extern f32 D_302EE9C[];
extern Triangle D_302EEE8[];
extern Vec3f D_302EF00[];
extern Triangle D_302EF6C[];
extern Vec3f D_302EF84[];
extern Triangle D_302EFF0[];
extern Vec3f D_302F008[];
extern Triangle D_302F044[];
extern Vec3f D_302F098[];

// ast_enmy_planet, ast_enmy_space
extern Animation D_4000080;
extern Limb* D_400014C[];
extern Animation D_40001A4;
extern Limb* D_4000270[];
extern Gfx D_40018A0[];
extern Gfx D_4003BD0[];
extern Animation D_40057AC;
extern Limb* D_40058B8[];
extern Gfx D_40068F0[];
extern Gfx D_4007870[];
extern Gfx D_4007AF0[];
extern Animation D_400A30C;
extern Limb* D_400A398[];
extern Gfx D_400B390[];

// ast_font
extern u8 D_50021F0[]; // fox_option
extern u8 D_50022F0[]; // fox_hud
extern u8 D_5002DC0[]; // fox_hud
extern u8 D_5003A00[]; // fox_hud
extern u16 D_50077B0[]; // fox_title
extern u8 D_5007F60[]; // fox_std_lib, fox_versus
extern u8 D_5009F60[]; // fox_std_lib, fox_versus, fox_option
extern u8 D_500A050[]; // fox_std_lib, fox_versus, fox_option, fox_map
extern u8 D_500A140[]; // fox_std_lib, fox_versus, fox_option, fox_map, fox_hud
extern u8 D_500A230[]; // fox_std_lib, fox_versus, fox_option, fox_map, fox_hud
extern u8 D_500A320[]; // fox_std_lib, fox_versus, fox_option, fox_map, fox_hud
extern u8 D_500A410[]; // fox_std_lib, fox_versus, fox_option, fox_map, fox_hud
extern u8 D_500A500[]; // fox_std_lib, fox_versus, fox_option, fox_map, fox_hud
extern u8 D_500A5F0[]; // fox_std_lib, fox_versus, fox_option, fox_hud
extern u8 D_500A6E0[]; // fox_std_lib, fox_versus, fox_option, fox_hud
extern u8 D_500A7D0[]; // fox_std_lib, fox_versus, fox_option, fox_hud

/* ast_corneria, ast_meteo, ast_titania, ast_sector_x, ast_sector_z,
 * ast_aquas, ast_area_6, ast_venom_1, ast_venom_2, ast_ve1_boss*,
 * ast_bolse, ast_fortuna, ast_sector_y, ast_solar, ast_zoness,
 * ast_katina, ast_macbeth, ast_title, ast_menu, ast_training
 */
extern Gfx D_60005B0[]; // fox_bg
extern u16 D_6000900[]; // fox_radio
extern Gfx D_6000A80[]; // fox_bg, fox_effect
extern u16 D_6000B60[]; // fox_radio
extern Gfx D_6000E00[]; // fox_edata_1C
extern Gfx D_6000E10[]; // fox_enmy2
extern Gfx D_6001360[]; // fox_bg, fox_demo, fox_edata_1C
extern Gfx D_6001530[]; // fox_360, fox_demo, fox_ka
extern u16 D_6001820[]; // fox_radio
extern Gfx D_6001840[]; // fox_bg
extern Gfx D_6001950[]; // fox_enmy2
extern Gfx D_6001A60[]; // fox_effect
extern u16 D_6001A80[]; // fox_radio
extern u8 D_6001B80[]; // fox_hud
extern Vtx D_6001C50[]; // fox_play
extern u8 D_6001C80[]; // fox_map
extern Gfx D_6001DA0[]; // fox_demo, fox_edata_1C
extern u8 D_60020D0[]; // fox_hud
extern u8 D_6002160[]; // fox_map
extern Gfx D_60023B0[]; // fox_edata_1C
extern Gfx D_6002990[]; // fox_edata_1C
extern u16 D_60029A0[]; // fox_radio
extern Gfx D_6002E60[]; // fox_bg
extern Gfx D_6002F80[]; // fox_bg
extern Gfx D_6003000[]; // fox_edata_1C
extern u8 D_60030D0[]; // fox_map
extern Gfx D_60030F0[]; // fox_edata_1C
extern Gfx D_60034D0[]; // fox_edata_1C, fox_enmy2
extern Gfx D_6003610[]; // fox_edata_1C
extern Gfx D_60036A0[]; // fox_edata_1C, fox_enmy2
extern Gfx D_6003760[];
extern u16 D_60038C0[];
extern Gfx D_60038E0[];
extern u16 D_60038F8[];
extern u8 D_6003B50[];
extern Gfx D_6004170[];
extern Gfx D_6004330[];
extern Vtx D_6004500[];
extern Gfx D_6004570[];
extern Gfx D_60046F0[];
extern u16 D_60047E0[];
extern Gfx D_6004900[];
extern u8 D_6004AC0[];
extern Gfx D_6004FE0[];
extern EnvSettings D_6005000;
extern Gfx D_6005360[];
extern u16 D_6005700[];
extern u16 D_6005710[];
extern u8 D_6005740[];
extern Gfx D_6005780[];
extern Gfx D_6005880[];
extern Gfx D_60059F0[];
extern Gfx D_6006140[];
extern Gfx D_6006310[];
extern u16* D_600631C[];
extern u8 D_6006320[];
extern Animation D_600636C;
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
extern Gfx D_60066D0[];
extern f32 D_60066E0_f32[];
extern Gfx D_60066E0_Gfx[];
extern Gfx D_60066F0[];
extern f32 D_600672C[];
extern u16 D_6006750[];
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
extern EnvSettings D_6006A60;
extern Gfx D_6006A80[];
extern Gfx D_6006BE0[];
extern f32 D_6006BF0[];
extern f32 D_6006C44[];
extern Animation D_6006D64;
extern Limb* D_6006E50[];
extern EnvSettings D_6006E70;
extern u8 D_6006E80[];
extern u16 D_6006EA0[];
extern Gfx D_6006F50[];
extern Gfx D_6007410[];
extern CollisionPoly D_6007558[];
extern Gfx D_60075D0[];
extern Gfx D_6007650[];
extern Gfx D_60079B0[];
extern u8 D_6007B90[];
extern Gfx D_6007CF0[];
extern Gfx D_6007D80[];
extern Gfx D_6007D90[];
extern EnvSettings D_6007E30;
extern Gfx D_6008370[];
extern Gfx D_6008770[];
extern Gfx D_6008830[];
extern Gfx D_6008970[];
extern u8 D_6008990[];
extern Gfx D_6008AA0[];
extern Vec3s D_6008E08[];
extern f32 D_600924C[];
extern Gfx D_6009250[];
extern f32 D_60092E8[];
extern f32 D_6009388[];
extern Gfx D_60097E0[];
extern u8 D_6009AD0[];
extern u16* D_6009B34[];
extern u16 D_6009BB8[];
extern f32 D_6009CC4[];
extern f32 D_6009CFC[];
extern Animation D_6009D30;
extern Gfx D_6009E30[];
extern Vtx D_6009ED0[];
extern Gfx D_6009F90[];
extern Gfx D_600A220[];
extern Gfx D_600A420[];
extern Gfx D_600A810[];
extern Gfx D_600AB10[];
extern u16 D_600AB68[];
extern u8 D_600AD30[];
extern Gfx D_600AF40[];
extern Gfx D_600B0E0[];
extern Animation D_600B1B4;
extern Gfx D_600B4B0[];
extern Gfx D_600B8B0[];
extern u8 D_600B9B0[];
extern Gfx D_600BAF0[];
extern u16 D_600BEA0[];
extern Gfx D_600BF80[];
extern Gfx D_600C130[];
extern Animation D_600C15C;
extern Animation D_600C200;
extern Limb* D_600C2AC[];
extern u16 D_600C6A0[];
extern Gfx D_600C740[];
extern Vtx D_600C780[];
extern Gfx D_600CAA0[];
extern u16 D_600CBD8[];
extern u8 D_600CC10[];
extern Gfx D_600D190[];
extern Animation D_600D3DC;
extern u16 D_600D5C0[];
extern Gfx D_600D730[];
extern u16 D_600D990[];
extern Gfx D_600D9F0[];
extern Gfx D_600DA10[];
extern Gfx D_600DB80[];
extern Gfx D_600DBC0[];
extern u8 D_600DDC0[];
extern Gfx D_600DDF0[];
extern Gfx D_600E050[];
extern Gfx D_600E0C0[];
extern u8 D_600E210[];
extern Animation D_600E2C4;
extern u8 D_600E360[];
extern Limb* D_600E470[];
extern Animation D_600E5EC;
extern Gfx D_600E820[];
extern u8 D_600E980[];
extern EnvSettings D_600EA90;
extern Gfx D_600EC90[];
extern Gfx D_600EE10[];
extern Gfx D_600EEF0[];
extern Gfx D_600EFF0[];
extern Gfx D_600F160[];
extern Gfx D_600F1D0[];
extern CollisionPoly D_600F1DC[];
extern Gfx D_600F1F0[];
extern Gfx D_600F2F0[];
extern u8 D_600F390[];
extern Vec3s D_600F394[];
extern Gfx D_600F3D0[];
extern CollisionPoly D_600F3F4[];
extern Gfx D_600F4C0[];
extern Gfx D_600F560[];
extern Vec3s D_600F5AC[];
extern CollisionPoly D_600F60C[];
extern Gfx D_600F670[];
extern Gfx D_600F6C0[];
extern Gfx D_600F6C0[];
extern Animation D_600F744;
extern Gfx D_600F8A0[];
extern u8 D_600F940[];
extern Gfx D_600F9B0[];
extern Vec3s D_600FD50[];
extern f32 D_600FE9C[];
extern f32 D_600FEB8[];
extern f32 D_600FF30_Hitbox[];
extern EnvSettings D_600FF30_Env;
extern f32 D_600FF80[];
extern f32 D_600FFA0[];
extern f32 D_600FFC0[];
extern f32 D_600FFE0[];
extern u8 D_6010010[];
extern ObjectInit* D_6010088[];
extern u8 D_6010090[];
extern u16 D_6010198[];
extern CollisionPoly D_6010294[];
extern Gfx D_60102C0[];
extern u8 D_60105C0[];
extern u8 D_60106B0[];
extern Gfx D_6010700[];
extern Gfx D_6010960[];
extern Gfx D_6010A50[];
extern u16 D_6010C20[];
extern Gfx D_6010E00[];
extern u8 D_6010FA0[];
extern EnvSettings D_6011000;
extern f32 D_6011058[];
extern f32 D_601115C[];
extern u8 D_TEX_6011660[];
extern Vec3s D_601170C[];
extern u8 D_6011890[];
extern Gfx D_6011910[];
extern Gfx D_60119A0[];
extern f32 D_6011B24[];
extern u16 D_6011B40[];
extern f32 D_6011BF4[];
extern f32 D_6011C10[];
extern f32 D_6011C48[];
extern f32 D_6011C80[];
extern u8 D_6011EA0[];
extern Gfx D_6011EE0[];
extern Gfx D_60120F0[];
extern u8 D_6012310[];
extern u8 D_60123F0[];
extern Gfx D_6012C00_Gfx[];
extern Animation D_6012C00_Anim;
extern u8 D_60131A0[];
extern Gfx D_60132B0[];
extern u8 D_6013470[];
extern Gfx D_6013480[];
extern Gfx D_60137B0[];
extern Animation D_6013820;
extern Animation D_601388C;
extern Limb* D_601390C[];
extern Gfx D_6013960[];
extern u8 D_60139E0[];
extern Gfx D_6013B50[];
extern u8 D_6014140[];
extern u8 D_6014360[];
extern Gfx D_60143E0[];
extern Gfx D_6014500[];
extern u16 D_6014510[];
extern Animation D_6014658;
extern Gfx D_6014670[];
extern u16 D_60147C0[];
extern u8 D_60147E0[];
extern Gfx D_60148B0[];
extern Gfx D_60148D0[];
extern Gfx D_6014A20[];
extern Gfx D_6014B50[];
extern u8 D_6014BA0[];
extern EnvSettings D_6014D50;
extern CollisionPoly D_6014FEC[];
extern Gfx D_60153B0[];
extern u16 D_6015430[];
extern Gfx D_6015730[];
extern u8 D_6015CE0[];
extern Gfx D_6015DD0[];
extern Gfx D_6015EE0[];
extern Gfx D_6015F00[];
extern Gfx D_6015FF0[];
extern Gfx D_6016270[];
extern Vec3s D_6016374[];
extern Gfx D_60164F0[];
extern Gfx D_6016580[];
extern f32 D_601668C[];
extern f32 D_60166F4[];
extern f32 D_6016714[];
extern u8 D_6016760[];
extern Gfx D_6016CF0[];
extern Gfx D_6017090[];
extern Gfx D_6017370[];
extern u8 D_6017640[];
extern u8 D_6018280[];
extern Gfx D_6018450[];
extern Gfx D_60188D0[];
extern Animation D_6018994;
extern Limb* D_6018BA0[];
extern Gfx D_6018BF0[];
extern Gfx D_6018C00[]; // possible collision
extern Gfx D_6018D40[];
extern Gfx D_6018E80[];
extern u16 D_6018F30[];
extern u8 D_60190B0[];
extern Gfx D_6019220[];
extern Gfx D_6019730[];
extern u16 D_6019E50[];
extern Gfx D_601A120[];
extern Gfx D_601A7A0[];
extern Gfx D_601A7D0[];
extern Gfx D_601AD70[];
extern Gfx D_601AE40[];
extern Gfx D_601AFF0[];
extern Gfx D_601B0D0[];
extern u16* D_601B1E4[];
extern Gfx D_601B2B0[];
extern u16 D_601B4B0[];
extern f32 D_601B4C4[];
extern f32 D_601B4E0[];
extern f32 D_601B4FC[];
extern f32 D_601B518[];
extern Gfx D_601B560[];
extern f32 D_601B584[];
extern f32 D_601B5F4[];
extern Gfx D_601B610[];
extern Gfx D_601B640[];
extern f32 D_601B644[];
extern f32 D_601B678[];
extern u16 D_601B6C0[];
extern f32 D_601B6C4[];
extern f32 D_F32_601B710[];
extern f32 D_601B75C[];
extern Gfx D_601B7C0[];
extern f32 D_601B7F8[];
extern f32 D_601B830[];
extern f32 D_601B868[];
extern f32 D_601B8A0[];
extern f32 D_601B8D8[];
extern Gfx D_601BB40[];
extern Gfx D_601BEC0[];
extern Gfx D_601C080[];
extern Gfx D_601C0D0[];
extern Gfx D_601C6A0[];
extern Gfx D_601C7C0[];
extern Gfx D_601C820[];
extern u16 D_601C8E0[];
extern Gfx D_601C960[];
extern Gfx D_601C9B0[];
extern Gfx D_601D1F0[];
extern Gfx D_601D730[];
extern u8 D_601D750[];
extern u16 D_601D800[];
extern u16 D_601DB50[];
extern Gfx D_601DE60[];
extern Gfx D_601DE80[];
extern Gfx D_601E150[];
extern u16 D_601E1E8[];
extern Animation D_601E8C4;
extern Limb* D_601E9D0[];
extern Gfx D_601EAA0[];
extern Gfx D_601F1D0[];
extern EnvSettings D_601F1F0;
extern Gfx D_601F500[];
extern Gfx D_601F5A0[];
extern Gfx D_601F6B0[];
extern Animation D_601F874;
extern Limb* D_601F920[];
extern Gfx D_601FCB0[];
extern u8 D_601FF40[];
extern Gfx D_601FF80[];
extern Gfx D_60200E0[];
extern Gfx D_6020760[];
extern Gfx D_6020A30[];
extern Gfx D_6020B40[];
extern u16* D_6020DD0[];
extern Gfx D_6020E60[];
extern u16 D_6020F60[];
extern u16 D_6020FB0[];
extern u16 D_6021ED0[];
extern Animation D_602201C;
extern Limb* D_60220E8[];
extern Gfx D_6022110[];
extern u16 D_6022340[];
extern Gfx D_60223C0[];
extern u8 D_60223E0[];
extern Gfx D_6022450[];
extern Gfx D_6022530[];
extern u16 D_6022760[];
extern Gfx D_6022920[];
extern u16 D_60229A4[];
extern f32 D_60231A4[];
extern Gfx D_60231C0[];
extern Gfx D_60238F0[];
extern Gfx D_6023AC0[];
extern EnvSettings D_6023F20;
extern Gfx D_6024010[];
extern Gfx D_6024220[];
extern Gfx D_60244A0[];
extern u16 D_60245E0[];
extern u16 D_60247E0[];
extern u8 D_6024890[];
extern Gfx D_6024AC0[];
extern Gfx D_6024B60[];
extern u16 D_6025500[];
extern Gfx D_6025B50[];
extern u16 D_6026420[];
extern EnvSettings D_60266D0;
extern EnvSettings D_ENV_6026C80;
extern u16 D_6026C90[];
extern u8 D_6026D70[];
extern Gfx D_60270E0[];
extern Gfx D_6027180[];
extern Animation D_6027320;
extern u16 D_6027340[];
extern Limb* D_602742C[];
extern Gfx D_6027900[];
extern u16* D_6027F50[];
extern u16 D_6028260[];
extern f32 D_6028454[];
extern f32 D_6028578[];
extern EnvSettings D_6028760;
extern u16* D_60289FC[];
extern u16 D_6028A60[];
extern u16 D_6029170[];
extern u8 D_6029220[];
extern Animation D_6029528;
extern Limb* D_6029674[];
extern Gfx D_6029890[];
extern EnvSettings D_602A120;
extern Gfx D_602A720[];
extern u16* D_602AAC0[];
extern Gfx D_602AC40[];
extern u16 D_602AC50[];
extern u16 D_602ACC0[];
extern ObjectInit* D_602B148[];
extern Gfx D_602B4C0[];
extern u16 D_602B620[];
extern u8 D_602B6D0[];
extern f32 D_602B9EC[];
extern f32 D_602BA20[];
extern f32 D_602BAE4[];
extern f32 D_602BBD8[];
extern f32 D_602BC54[];
extern f32 D_602BC58[];
extern f32 D_602BE3C[];
extern f32 D_602BE58[];
extern f32 D_602BFC4[];
extern Gfx D_602C030[];
extern f32 D_602C044[];
extern Gfx D_602C088[];
extern f32 D_602C1D4[];
extern f32 D_602C218[];
extern f32 D_602C234[];
extern f32 D_602C250[];
extern f32 D_602C294[];
extern f32 D_602C2B0[];
extern u16 D_602C2CC[];
extern Triangle D_602CACC[];
extern Vec3f D_602CB80[];
extern Gfx D_602D5F0[];
extern Gfx D_602DA20[];
extern u16 D_602DAD0[];
extern Gfx D_602DAE0[];
extern u8 D_602DB60[];
extern Gfx D_602DB80[];
extern Gfx D_602DC20[];
extern Gfx D_602DCA0[];
extern u16 D_602DCB8[];
extern Gfx D_602E080[];
extern Gfx D_602E380[];
extern EnvSettings D_602E4B0;
extern EnvSettings D_602E540;
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
extern CollisionPoly D_602FA9C[];
extern u16 D_602FF60[];
extern u8 D_602FFD0[];
extern Vec3s D_60300C8[];
extern CollisionPoly D_6030208[];
extern Gfx D_6030500[];
extern Vec3s D_6030550[];
extern CollisionPoly D_60305DC[];
extern Gfx D_6030630[];
extern Gfx D_60306D0[];
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
extern f32 D_6030E30_Hitbox[];
extern EnvSettings D_6030E30_Env;
extern f32 D_6030E4C[];
extern f32 D_6030E68[];
extern Triangle D_6030E74[];
extern Vec3f D_6030E80[];
extern Triangle D_6030EB0[];
extern Vec3f D_6030EBC[];
extern Triangle D_6030EEC[];
extern Vec3f D_6030EF8[];
extern Triangle D_6030F28[];
extern Vec3f D_6030F34[];
extern Triangle D_6030F64[];
extern f32 D_6030F74[];
extern Vec3f D_6030F7C[];
extern Triangle D_6030FC4[];

extern f32 D_6031400[];
extern f32 D_603144C[];
extern f32 D_6031480[];
extern f32 D_60314C8[];
extern f32 D_6031500[];
extern f32 D_6031538[];
extern f32 D_6031554[];
extern f32 D_6031570[];
extern u16 D_603158C[];
extern Vec3s D_603184C[];
extern Triangle D_6031FB0[];
extern Triangle D_6031FB0[];
extern Vec3f D_6031FE0[];
extern Vec3f D_603204C[];
extern Triangle D_60320B8[];
extern u16* D_60320D0[];
extern Gfx D_60320E0[];
extern Vec3f D_603216C[];
extern f32 D_6032328[];
extern Triangle D_6032388[];
extern u16 D_60323D0[];
extern f32 D_6032408[];
extern Vec3f D_6032430[];
extern u16 D_6032440[];
extern f32 D_6032488[];
extern f32 D_60324EC[];
extern f32 D_6032550[];
extern Gfx D_6032580[];
extern u16 D_6032A60[];
extern Gfx D_6032BC0[];
extern u16* D_6032E18[];
extern Gfx D_6033000[];
extern CollisionPoly D_6033070[];
extern u16 D_6033080[];
extern Vec3s D_6033E08[];
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
extern u16 D_6035780[];
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
extern EnvSettings D_6037160;
extern Gfx D_6037CF0[];
extern u16 D_6037E80[];
extern u16* D_60381D8[];
extern u16 D_603A580[];
extern u16 D_603A580[];
extern ObjectInit D_603B074[];
extern u16 D_603CC80[];
extern u16* D_603D9E8[];
extern f32 D_603DCA4[];
extern f32 D_603DD40[];
extern EnvSettings D_C035110;
extern f32 D_603DDF0[];
extern f32 D_603DE8C[];
extern f32 D_603DEF4[];
extern f32 D_603DF8C[];
extern f32 D_603DFDC[];
extern f32 D_603E014[];
extern f32 D_603E030[];
extern f32 D_603E09C[];
extern f32 D_603E0EC[];

extern Gfx D_60084C0[];
extern Gfx D_6008D40[];
extern Gfx D_6007C40[];
extern Gfx D_601B790[];
extern Gfx D_601B790[];
extern Gfx D_601A700[];
extern Gfx D_6019670[];
extern Gfx D_60185E0[];
extern Gfx D_6017550[];

// ast_7_ti_2, ast_7_ti_1, ast_warp_zone, ast_versus, ast_ending
extern u8 D_7000F10[]; // fox_option
extern u8 D_7001030[]; // fox_option
extern u8 D_7001270[]; // fox_option
extern Gfx D_7001540[]; // fox_bg
extern u8 D_7001DF0[]; // fox_option
extern u8 D_7002110[]; // fox_option
extern u8 D_7003650[]; // fox_option
extern Gfx D_7003830[]; // fox_versus
extern u8 D_7003C70[]; // fox_versus
extern u8 D_7003E10[]; // fox_versus
extern u8 D_7003F10[]; // fox_versus
extern u8 D_7004010[]; // fox_option
extern u8 D_7004050[]; // fox_versus
extern u16 D_7004150[]; // fox_versus
extern u8 D_70041F0[]; // fox_versus
extern u16 D_70042F0[]; // fox_versus
extern u8 D_7004360[]; // fox_versus
extern u16 D_7004460[]; // fox_versus
extern u8 D_70044D0[]; // fox_versus
extern u16 D_7004990[]; // fox_versus
extern Gfx D_7007350[]; // fox_edisplay
extern Gfx D_700AB70[]; // fox_edata_1C
extern Gfx D_700BB10[]; // fox_edisplay
extern Gfx D_700BE00[]; // fox_edata_1C
extern Animation D_700CAF4; // fox_enmy2
extern u16 D_700E9A0[]; // fox_option
extern u8 D_70118E0[]; // fox_versus, fox_option
extern u16 D_70123F8[]; // fox_versus, fox_option

// ast_8_ti, ast_option
extern u8 D_8000000[]; // option
extern u16 D_8000680[]; // option
extern u8 D_80006A0[]; // option
extern u16 D_80017A0[]; // option
extern u8 D_80017C0[]; // option
extern u16 D_80038C0[]; // option
extern u8 D_80038E0[]; // option
extern u8 D_8003930[]; // option
extern u8 D_8003950[]; // option
extern u8 D_80039A8[]; // option
extern u8 D_8003A70[]; // option
extern u8 D_8003AB8[]; // option
extern u8 D_8003AE0[]; // option
extern u8 D_8003B28[]; // option
extern u8 D_8003B50[]; // option
extern u8 D_80046B0[]; // option
extern u8 D_8004C50[]; // option
extern u8 D_8005CD0[]; // option
extern u8 D_8006280[]; // option
extern u8 D_80064F0[]; // option
extern u8 D_80069C0[]; // option
extern u8 D_8006D10[]; // option
extern u8 D_8006E50[]; // option
extern u8 D_8007210[]; // option
extern u8 D_80076E0[]; // option
extern u8 D_80079F0[]; // option
extern u8 D_80080F0[]; // option
extern u8 D_80084B0[]; // option
extern u8 D_8008A30[]; // unused?
extern u8 D_8008DA0[]; // option
extern u8 D_80098E0[]; // unused?
extern u8 D_8009980[]; // option
extern u8 D_8009B00[]; // option
extern u8 D_8009CE0[]; // option
extern u8 D_800B5E0[]; // unused?
extern u8 D_800B680[]; // option
extern u8 D_800C640[]; // unused?
extern u8 D_800CD90[]; // option
extern u8 D_800D070[]; // option
extern u8 D_800D170[]; // option
extern u8 D_800D1F0[];
extern u8 D_800E130[];
extern u16 D_800E170[];
extern Gfx D_8015550[];
extern Gfx D_8015DF0[];

// ast_9_ti, ast_ve1_boss, ast_font_3d
extern Gfx D_9002CF0[];
extern u16 D_9003330[];
extern u16 D_9003890[];
extern u16 D_9003DF0[];
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

// ast_A_ti
extern Gfx D_A000000[];

// segment B is unused

// ast_andross
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
extern Gfx D_C039208[];

// ast_great_fox
extern Gfx D_E000000[];
extern Gfx D_E003AB0[];
extern Gfx D_E00DFB0[];
extern u16 D_E00E100[];
extern u16 D_E00F020[];
extern u16 D_E00FF40[];
extern u16 D_E010E60[];

// ast_logo
extern u16 D_F000000[];
extern u16 D_F000800[];
extern u16 D_F001000[];
extern u16 D_F001800[];
extern u16 D_F002000[];

// ast_star_wolf
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
extern Gfx D_F00F200[];
extern Gfx D_F0103D0[];
extern Gfx D_F014180[];
extern Gfx D_F014310[];

// fox_map, to be ordered later

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
extern u16 D_603EB38[];
extern Triangle D_603F338[];
extern u16 D_603F380[];
extern Vec3f D_603F388[];
extern Triangle D_603F40C[];
extern Vec3f D_603F4E4[];
extern Gfx D_6041070[];
extern u16 D_6041A80[];
extern u16 D_6044180[];
extern u16 D_60447A0[];
extern u16 D_6047550[];
extern Gfx D_6049F80[];
extern Gfx D_604A190[];
extern Gfx D_604A400[];
extern Gfx D_604A710[];
extern Gfx D_604A9F0[];
extern Gfx D_604B750[];
extern Gfx D_604DB10[];
extern Gfx D_6051D20[];
extern Gfx D_6055F20[];
extern Gfx D_605C230[];
extern Gfx D_6060610[];

extern Gfx D_9006AE0[];
extern Gfx D_9000570[];
extern Gfx D_90086F0[];
extern Gfx D_9002EA0[];
extern Gfx D_9005380[];
extern Gfx D_90075A0[];
extern Gfx D_9004230[];

extern Gfx D_C001880[];
extern f32 D_C037FCC[];
extern f32 D_C0380C0[];
extern f32 D_C0381B4[];
extern f32 D_C0382A8[];
extern f32 D_C03839C[];
extern f32 D_C038490[];
extern f32 D_C038584[];
extern f32 D_C038678[];
extern f32 D_C03876C[];
extern f32 D_C038860[];
extern f32 D_C038954[];

#endif // ASSETS_H
