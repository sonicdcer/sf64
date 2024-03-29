
#ifndef ASSETS_H
#define ASSETS_H

#include "sys.h"
#include "sf64level.h"
#include "sf64object.h"
#include "sf64player.h"

// ast_enmy_planet


/* ast_corneria, ast_meteo, ast_titania, ast_sector_x, ast_sector_z,
 * ast_aquas, ast_area_6, ast_venom_1, ast_venom_2, ast_ve1_boss*,
 * ast_bolse, ast_fortuna, ast_sector_y, ast_solar, ast_zoness,
 * ast_katina, ast_macbeth, ast_title, ast_map, ast_training
 */
extern Gfx D_60005B0[]; // fox_bg
extern Gfx D_6000E00[]; // fox_edata_1C
extern Gfx D_6001360[]; // fox_bg, fox_demo, fox_edata_1C. Possible symbol collision
extern Gfx D_6001530[]; // fox_360, fox_demo, fox_ka
extern Gfx D_6001A60[]; // fox_effect
extern u8 D_6001B80[]; // fox_hud
extern Vtx D_6001C50[]; // fox_play
extern u8 D_60020D0[]; // fox_hud
extern Gfx D_6002990[]; // fox_edata_1C
extern Gfx D_6002E60[]; // fox_bg
extern Gfx D_6003000[]; // fox_edata_1C
extern Gfx D_60030F0[]; // fox_edata_1C
extern Gfx D_60038E0[];
extern u16 D_60038F8[];
extern Gfx D_6004170[];
extern Vtx D_6004500[];
extern Gfx D_60046F0[];
extern Gfx D_6004900[];
extern u16 D_6005710[];
extern Gfx D_6005780[];
extern Gfx D_6005880[];
extern Gfx D_60059F0[];
extern Gfx D_6006140[];
extern Gfx D_6006310[];
extern Animation D_600636C;
extern Limb* D_6006558[];
extern Gfx D_60066D0[];
extern u16 D_6006750[];
extern EnvSettings D_6006A60;
extern Gfx D_6006A80[];
extern Gfx D_6006BE0[];
extern u16 D_6006EA0[];
extern Gfx D_6006F50[];
extern Gfx D_6007410[];
extern Gfx D_60075D0[];
extern Gfx D_6007650[];
extern Gfx D_60079B0[];
extern Gfx D_6007CF0[];
extern Gfx D_6007D80[];
extern Gfx D_6007D90[];
extern EnvSettings D_VE1_6007E30;
extern Gfx D_6008370[];
extern Gfx D_6008770[];
extern Gfx D_6008830[];
extern Gfx D_6008AA0[];
extern Gfx D_6009250[];
extern u16* D_6009B34[];
extern f32 D_6009CC4[];
extern f32 D_6009CFC[];
extern Animation D_6009D30;
extern Gfx D_6009E30[];
extern Vtx D_6009ED0[];
extern Gfx D_6009F90[];
extern Gfx D_600A420[];
extern Gfx D_600A810[];
extern Gfx D_600AF40[];
extern Gfx D_600B0E0[];
extern Animation D_600B1B4;
extern Gfx D_600B4B0[];
extern Gfx D_600B8B0[];
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
extern Animation D_600E2C4;
extern u8 D_600E360[];
extern Limb* D_600E470[];
extern Animation D_600E5EC;
extern Gfx D_600E820[];
extern u8 D_600E980[];
extern EnvSettings D_FO_600EA90;
extern Gfx D_600EC90[];
extern Gfx D_600EFF0[];
extern Gfx D_600F160[];
extern Gfx D_600F1D0[];
extern CollisionPoly D_600F1DC[];
extern Gfx D_600F2F0[];
extern Vec3s D_600F394[];
extern Gfx D_600F3D0[];
extern CollisionPoly D_600F3F4[];
extern Gfx D_600F4C0[];
extern Gfx D_600F560[];
extern Vec3s D_600F5AC[];
extern CollisionPoly D_600F60C[];
extern Gfx D_600F670[];
extern Animation D_600F744;
extern u8 D_600F940[];
extern Gfx D_600F9B0[];
extern Vec3s D_600FD50[];
extern f32 D_600FE9C[];
extern f32 D_600FEB8[];
extern f32 D_600FF30_Hitbox[];
extern EnvSettings D_BO_600FF30;
extern f32 D_600FF80[];
extern f32 D_600FFA0[];
extern f32 D_600FFC0[];
extern f32 D_600FFE0[];
extern ObjectInit* D_6010088[];
extern u8 D_6010090[];
extern u16 D_6010198[];
extern CollisionPoly D_6010294[];
extern u8 D_60106B0[];
extern Gfx D_6010700[];
extern Gfx D_6010960[];
extern Gfx D_6010A50[];
extern u16 D_6010C20[];
extern Gfx D_6010E00[];
extern u8 D_6010FA0[];
extern EnvSettings D_KA_6011000;
extern f32 D_6011058[];
extern f32 D_601115C[];
extern Vec3s D_601170C[];
extern u8 D_6011890[];
extern f32 D_6011B24[];
extern u16 D_6011B40[];
extern f32 D_6011BF4[];
extern f32 D_6011C10[];
extern f32 D_6011C48[];
extern f32 D_6011C80[];
extern u8 D_6012310[];
extern u8 D_60123F0[];
extern Gfx D_6012C00_Gfx[];
extern Animation D_6012C00_Anim;
extern Gfx D_60132B0[];
extern u8 D_6013470[];
extern Gfx D_6013480[];
extern Gfx D_60137B0[];
extern Animation D_601388C;
extern Gfx D_6013960[];
extern Gfx D_6013B50[];
extern u8 D_6014140[];
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
extern EnvSettings D_VE2_6014D50;
extern CollisionPoly D_6014FEC[];
extern Gfx D_60153B0[];
extern u16 D_6015430[];
extern Gfx D_6015F00[];
extern Gfx D_6016270[];
extern Vec3s D_6016374[];
extern Gfx D_60164F0[];
extern Gfx D_6016580[];
extern f32 D_601668C[];
extern f32 D_60166F4[];
extern f32 D_6016714[];
extern Gfx D_6016CF0[];
extern Gfx D_6017090[];
extern Gfx D_6017370[];
extern Gfx D_6018450[];
extern Gfx D_6018C00[]; // possible collision
extern Gfx D_6018D40[];
extern Gfx D_6018E80[];
extern Gfx D_6019220[];
extern Gfx D_601A7A0[];
extern Gfx D_601A7D0[];
extern Gfx D_601AE40[];
extern Gfx D_601B0D0[];
extern u16* D_VE1_601B1E4[];
extern f32 D_601B4C4[];
extern f32 D_601B4E0[];
extern f32 D_601B4FC[];
extern f32 D_601B518[];
extern Gfx D_601B560[];
extern f32 D_601B584[];
extern f32 D_601B5F4[];
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
extern Gfx D_601BEC0[];
extern Gfx D_601C7C0[];
extern Gfx D_601C820[];
extern u16 D_601C8E0[];
extern Gfx D_601C9B0[];
extern u8 D_601D750[];
extern u16 D_601D800[];
extern u16 D_601DB50[];
extern Gfx D_601E150[];
extern u16 D_601E1E8[];
extern Animation D_601E8C4;
extern Limb* D_601E9D0[];
extern Gfx D_601EAA0[];
extern Gfx D_601F1D0[];
extern EnvSettings D_SO_601F1F0;
extern Gfx D_601F500[];
extern Gfx D_601F5A0[];
extern Animation D_601F874;
extern Limb* D_601F920[];
extern Gfx D_601FCB0[];
extern Gfx D_601FF80[];
extern Gfx D_60200E0[];
extern Gfx D_6020760[];
extern Gfx D_6020A30[];
extern Gfx D_6020B40[];
extern u16* D_SO_600631C[];
extern Gfx D_6020E60[];
extern u16 D_6020F60[];
extern Gfx D_60223C0[];
extern Gfx D_6022450[];
extern Gfx D_6022530[];
extern u16 D_6022760[];
extern Gfx D_6022920[];
extern u16 D_60229A4[];
extern f32 D_60231A4[];
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
extern EnvSettings D_ZO_60266D0;
extern EnvSettings D_ME_6026C80;
extern Gfx D_60270E0[];
extern Gfx D_6027180[];
extern Animation D_6027320;
extern u16 D_6027340[];
extern Limb* D_602742C[];
extern Gfx D_6027900[];
extern u16 D_6028260[];
extern u16 D_6028A60[];
extern Animation D_6029528;
extern Limb* D_6029674[];
extern Gfx D_6029890[];
extern Gfx D_602A720[];
extern u16* D_ZO_602AAC0[];
extern u16 D_602AC50[];
extern ObjectInit* D_602B148[];
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
extern Gfx D_602DAE0[];
extern Gfx D_602DB80[];
extern Gfx D_602DC20[];
extern Gfx D_602DCA0[];
extern u16 D_602DCB8[];
extern Gfx D_602E080[];
extern Gfx D_602E380[];
extern Gfx D_602E570[];
extern Gfx D_602E7A0[];
extern Gfx D_602E9E0[];
extern u16* D_ME_602F3AC[];
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
extern Vec3s D_60300C8[];
extern CollisionPoly D_6030208[];
extern Gfx D_6030500[];
extern Vec3s D_6030550[];
extern CollisionPoly D_60305DC[];
extern Gfx D_6030630[];
extern Gfx D_60306D0[];
extern EnvSettings D_MA_6030E30;
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
extern Gfx D_60320E0[];
extern Gfx D_6032580[];
extern Gfx D_6032BC0[];
extern Gfx D_6033000[];
extern Vec3s D_6033E08[];
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
extern EnvSettings D_CO_6037160;
extern Gfx D_6037CF0[];
extern u16* D_MA_60381D8[];
extern ObjectInit D_603B074[];
extern u16* D_CO_603D9E8[];
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
extern Vec3f D_603F388[];
extern Triangle D_603F40C[];
extern Vec3f D_603F4E4[];
extern Gfx D_6041070[];

#endif // ASSETS_H
