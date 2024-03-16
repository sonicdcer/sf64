
#ifndef ASSETS_H
#define ASSETS_H

#include "sys.h"
#include "sf64level.h"
#include "sf64object.h"
#include "sf64player.h"

// ast_enmy_planet
extern Animation D_40001A4;
extern Limb* D_4000270[];
extern Gfx D_40018A0[];
extern Animation D_40057AC;
extern Limb* D_40058B8[];
extern Gfx D_40068F0[];
extern Gfx D_4007AF0[];

/* ast_corneria, ast_meteo, ast_titania, ast_sector_x, ast_sector_z,
 * ast_aquas, ast_area_6, ast_venom_1, ast_venom_2, ast_ve1_boss*,
 * ast_bolse, ast_fortuna, ast_sector_y, ast_solar, ast_zoness,
 * ast_katina, ast_macbeth, ast_title, ast_menu, ast_training
 */
extern Gfx D_60005B0[]; // fox_bg
extern Gfx D_6000A80[]; // fox_bg, fox_effect
extern u16 D_6000B60[]; // fox_radio
extern Gfx D_6000E00[]; // fox_edata_1C
extern Gfx D_6001360[]; // fox_bg, fox_demo, fox_edata_1C
extern Gfx D_6001530[]; // fox_360, fox_demo, fox_ka
extern Gfx D_6001840[]; // fox_bg
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
extern Gfx D_600A420[];
extern Gfx D_600A810[];
extern u8 D_600AD30[];
extern Gfx D_600AF40[];
extern Gfx D_600B0E0[];
extern Animation D_600B1B4;
extern Gfx D_600B4B0[];
extern Gfx D_600B8B0[];
extern u8 D_600B9B0[];
extern Gfx D_600BAF0[];
extern u16 D_600BEA0[];
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
extern f32 D_6011B24[];
extern u16 D_6011B40[];
extern f32 D_6011BF4[];
extern f32 D_6011C10[];
extern f32 D_6011C48[];
extern f32 D_6011C80[];
extern u8 D_6011EA0[];
extern u8 D_6012310[];
extern u8 D_60123F0[];
extern Gfx D_6012C00_Gfx[];
extern Animation D_6012C00_Anim;
extern u8 D_60131A0[];
extern Gfx D_60132B0[];
extern u8 D_6013470[];
extern Gfx D_6013480[];
extern Gfx D_60137B0[];
extern Animation D_601388C;
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
extern u8 D_60148B0[];
extern Gfx D_60148D0[];
extern Gfx D_6014A20[];
extern Gfx D_6014B50[];
extern u8 D_6014BA0[];
extern EnvSettings D_6014D50;
extern CollisionPoly D_6014FEC[];
extern Gfx D_60153B0[];
extern u16 D_6015430[];
extern u8 D_6015CE0[];
extern Gfx D_6015EE0[];
extern Gfx D_6015F00[];
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
extern u16 D_6022340[];
extern Gfx D_60223C0[];
extern u8 D_60223E0[];
extern Gfx D_6022450[];
extern Gfx D_6022530[];
extern u16 D_6022760[];
extern Gfx D_6022920[];
extern u16 D_60229A4[];
extern f32 D_60231A4[];
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
extern Gfx D_602A720[];
extern u16* D_602AAC0[];
extern u16 D_602AC50[];
extern ObjectInit* D_602B148[];
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
extern f32 D_602C044[];
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
extern Gfx D_602E570[];
extern Gfx D_602E7A0[];
extern Gfx D_602E9E0[];
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
extern ObjectInit D_6030B14[];
extern EnvSettings D_6030E30_Env;
extern Triangle D_6030E74[];
extern Vec3f D_6030E80[];
extern Triangle D_6030EB0[];
extern Vec3f D_6030EBC[];
extern Triangle D_6030EEC[];
extern Vec3f D_6030EF8[];
extern Triangle D_6030F28[];
extern Vec3f D_6030F34[];
extern Triangle D_6030F64[];
extern Vec3f D_6030F7C[];
extern Triangle D_6030FC4[];
extern Vec3s D_603184C[];
extern Vec3f D_6031FE0[];
extern Vec3f D_603204C[];
extern Gfx D_60320E0[];
extern Vec3f D_603216C[];
extern u16 D_60323D0[];
extern Vec3f D_6032430[];
extern u16 D_6032440[];
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

// ast_versus, ast_ending
extern u8 D_7000F10[]; // fox_option
extern u8 D_7001030[]; // fox_option
extern u8 D_7001270[]; // fox_option
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
extern u16 D_700E9A0[]; // fox_option
extern u8 D_70118E0[]; // fox_versus, fox_option
extern u16 D_70123F8[]; // fox_versus, fox_option

// ast_9_ti, ast_ve1_boss
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

#endif // ASSETS_H
