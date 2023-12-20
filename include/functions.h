#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "libc/stdbool.h"
#include "structs.h"
#include "fox_option.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"

s32 Lib_vsPrintf(char* dst, const char* fmt, va_list args);
void Lib_Perspective(Gfx** dList);
void Lib_Ortho(Gfx** dList);
void Lib_DmaRead(void* src, void* dst, s32 size);
void Lib_FillScreen(u8 setFill);

void Memory_FreeAll(void);
void* Memory_Allocate(s32);

void func_8000FFCC(void);

u8* func_8001C3EC(void);
void func_80016A50(void);
void func_800182F4(s32);
void func_80019218(u32, Vec3f*, u8, f32*, f32*, s8*);
void func_8001A500(Vec3f*);
void func_8001A55C(Vec3f*, u32);
void func_8001A838(u32);
void func_8001ACDC(s32);
void func_8001AE58(void);
s32 func_8001AE78(void);
s32 func_8001AED4(void);
void func_8001AF40(s32);
void func_8001C8B8(u8);      
void func_8001CA24(u8);      
void func_8001CB80(u8, u8);  
void func_8001CCDC(u8, Vec3f *);
void func_8001D1C8(s32, s32);
void func_8001D2FC(Vec3f *, u16);
void func_8001D3A0(Vec3f *, u16);
void func_8001D400(s8);
void func_8001D444(u8, u16, u8, u8);
void func_8001D4AC(u16, u8, u8, u8);
void func_8001D638(u8);
void func_8001DA90(u8);
void func_8001DBD0(s32);
void func_8001DC6C(u8, u16);
void func_8001D8A8(u8, u8);
void func_8001D8F4(u8);
void func_8001DCE0(void);
void func_8001DECC(void);

SPTask* func_8001DF50(void);
void func_8001EE00(void);

f32 func_8001FE60(f32);
f64 func_8001FE6C(f64);
s32 func_8001FE78(f32);
s32 func_8001FE88(f64);
f32 func_8001FE98(f32);
f64 func_8001FEA4(f64);
s32 func_8001FEB0(f32);
s32 func_8001FEC0(f64);
f32 func_8001FED0(f32);
f64 func_8001FEDC(f64);
s32 func_8001FEE8(f32);
s32 func_8001FEF8(f64);
f32 func_8001FF08(f32);
f64 func_8001FF14(f64);
s32 func_8001FF20(f32);
s32 func_8001FF30(f64);
f32 func_8001FF40(f32);
f64 func_8001FF5C(f64);
s32 func_8001FF7C(f32);
s32 func_8001FF9C(f64);
f32 func_8001FAE4(f32);
f32 func_8001FB04(f32);
f64 func_8001FB24(f64);
f32 func_8001FB58(f32);
f32 func_8001FB88(f32);
f32 func_8001FBA8(f32);
f32 func_8001FBC8(f32);

void RdRam_CheckIPL3(void);
void Mio0_Decompress(void* header, u8* dst);
s32 vsprintf(char* dst, const char* fmt, va_list args);



// sf_2EFE0
void func_8002E3E0(Object_2F4*);
void func_8002E548(void);
void func_8002E5E0(Object_408*);
void func_8002E604(Object_408*);
void func_8002E628(Object_408*);
void func_8002E64C(Object_408*);
void func_8002E670(Object_2F4*);
void func_8002E694(Object_2F4*);
void func_8002E6B8(Object_2F4*);
void func_8002E6DC(Object_2F4*);
void func_8002E700(Player *);
void func_8002EE64(Object_2F4 *);
void func_8002F180(void);
void func_8002F5F4(void);
void func_800319AC(Object_2F4*);
void func_80035448(Object_2F4*);

//sf_36930
void PlayerShot_Initialize(PlayerShot *);
void func_800365E4(f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_8003D9B8();
void func_8003DA0C(void);
void func_8003DAF0(void);
void func_8003DE68(s32, s32);
void func_8003E1E8(void);
void func_80040450(void);
void func_80040954(void);
void func_80040CDC(void);
void func_80040CE4(void);

// fox_43AC0
void func_80042FAC(Object_408 *);
void func_80042FB8(Object_408*);
void func_80042FC4(Object_408*);
void func_80042FD0(Object_408 *);
void func_80042FDC(Object_408*);
void func_80042FE8(Object_408*);
void func_80043468(Player* );
void func_800444BC(Player *);
void func_80047504(Player *);

// sf_496E0
void func_80049C0C(Player *);
void func_8004A52C(Player *);
void func_8004AAF4(Player *);
void func_8004C930(Player *);
void func_8004CCC0(Player *);
void func_8004E3D8(Player *);
void func_8004F8AC(Object_2F4*);
void func_8004FEC0(Object_2F4*);
void func_800515C4(void);

// fox_display
void func_80053658(WingInfo *);
void func_8005465C(s32);
void func_80057814(Player*);
void func_80057D00(void);

// fox_edata
void func_800594F0(Object_80*);
void func_800595D0(Object_80*);
void func_800596C0(void);
void func_800596B0(Object_2F4*);

// fox_edisplay
void func_8005980C(f32);
void func_80059850(Object_4C*);
void func_800598E8(Object_2F4*);
void func_80059A24(Object_2F4*);
void func_80059AEC(Object_80*);
void func_80059B20(Object_80*);
void func_80059BBC(Object_80*);
void func_80059BF0(Object_2F4*);
void func_80059C34(Object_4C*);
void func_80059C40(Object_4C*);
void func_80059F68(Item*);
void func_80059FDC(Item*);
void func_8005A094(Object_2F4*);
void func_8005ADAC(Object_2F4*);
void func_8005B1E8(Object_2F4*, s32);
void func_8005B388(Object_2F4*);
void func_8005B6A4(Object_2F4*);
void func_8005B71C(Object_2F4*);
void func_8005B7CC(Object_2F4*);
void func_8005B848(Object_2F4*);
void func_8005B9A4(Object_2F4*);
void func_8005BA30(Object_2F4*);
void func_8005C5F0(Item*);
void func_8005C900(Item*);
void func_8005C9C0(Item*);
void func_8005CA80(Item*);
void func_8005CB44(Item*);
void func_8005CC9C(Item*);
void func_8005CDA8(Item*);
void func_8005F030(Vec3f*);
void func_8005F0E8(Vec3f*, Vec3f*);
void func_8005F1EC(Vec3f*);
void func_8005F290(Vec3f*, Vec3f*);
void func_8005F670(Vec3f*);
s32 func_8005F9DC(Vec3f*);

// fox_enmy
void func_80060714(s32 );
void func_8006089C(u8 );
void func_80060968(void);
void func_80060F30(Vec3f* , u32 , s32 );
void Object_Kill(Object*, Vec3f*);
s32 func_80060FE4(Vec3f*, f32);
void Object_SetInfo(ObjectInfo*, u32);
void Object_80_Initialize(Object_80*);
void Object_4C_Initialize(Object_4C*);
void Object_2F4_Initialize(Object_2F4*);
void Object_408_Initialize(Object_408*);
void Item_Initialize(Item*);
void Object_8C_Initialize(Object_8C*);
void func_80061B68(void);
void func_80061CD0(void);
void func_80061E48(Object_2F4* , f32 , f32 , f32 );
void func_80061F0C(Object_2F4* , ObjectInit* , s32 );
void Object_Spawn(ObjectInit* , f32 , f32 , f32 , f32 );
void func_80062568(void);
void func_80062C38(f32, f32); 
s32 func_800631A8(Vec3f*, f32*, Vec3f*);
s32 func_8006326C(Vec3f* , Vec3f* , s32 , Object* );
s32 func_8006351C(s32 , Vec3f* , Vec3f* , s32 );
void func_800652CC(Object_80*);
void func_800654E4(Object *);
void func_800656D4(Object_2F4*);
void func_800660F0(Object_2F4*);
void func_80066254(Object_2F4*);
void func_8006654C(Object_2F4*);
void func_8006684C(Object_2F4*);
void func_800669A0(Object_2F4*);
void func_80066A80(Object_2F4*);
void func_80066C00(Object_80*);
void func_80066D5C(Object_80*);
void func_80066E8C(Object_4C*);
void func_80066EA8(Object_80*);
void func_80066EF0(Item *);
void func_800671D0(Item *);
void func_800674B4(f32, f32, f32, f32, f32, f32, f32, f32);
void func_8006753C(Object_2F4*);
void func_80067874(Object_2F4*);
void func_80067A40(void);
void func_80067B1C(Item*);
void func_80067BEC(Item*);
void func_80067F6C(Item*);
void func_80068020(Item*);
void func_800685D8(Item*);
void func_800685F8(Item*);
void func_80068618(Item*);
void func_80068688(Item*);
void func_80068914(Item*);
void func_80068C48(Item*);
void func_80068C88(Item*);
void func_80068FE0(Object_4C*);
void func_800690D0(s32, s32);
void func_80069924(Object_8C *);
void func_800693E8(Object_2F4 *);
void func_80069658(Object_408 *);
void func_800696F8(Object_80 *);
void func_80069858(Object_4C *);
void func_80069A10(Item *);
void Object_2F4_Update(Object_2F4*);
void Object_408_Update(Object_408 *);
void Object_80_Update(Object_80 *);
void Object_4C_Update(Object_4C *);
void Item_Update(Item *);
void Object_8C_Update(Object_8C *);
void func_8006A06C(UnkEntity30*);
void func_8006A38C(void);
void Object_UpdateAll(void);

//fox_6B3B0
void func_8006A96C(Object_2F4*);
void func_8006A978(Object_2F4*);
void func_8006AA98(Object_80*);
void func_8006AC08(Object_2F4*);
void func_8006AD18(Object_2F4*);
void func_8006B094(Object_2F4*);
void func_8006B0A0(Object_2F4 *);
void func_8006B74C(Object_2F4 *);
void func_8006B95C(Object_80*);
void func_8006BB78(Object_2F4*);
void func_8006C008(Object_2F4*);
void func_8006D350(Object_80*);
void func_8006EEFC(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_80072594(Object_2F4*);
s32 func_80074F90(Object_80*);
void func_80074FF0(Object_2F4*);
void func_800763A4(Object_2F4 *);
void func_8007717C(Object_2F4 *);
void func_800771CC(Object_2F4*);
void func_80077218(Object_2F4*);

// sf_77E40
void func_80077240(f32 posX, f32 posY, f32 posZ, s32 );
void func_8007729C(void);
void func_80077790(void);
Object_8C* func_8007783C(s32 objId);
void func_8007797C(f32 posX, f32 posY, f32 posZ, f32 , f32 , f32 , f32 );
void func_80077A00(Object_8C* );
void func_80077A7C(Object_8C* );
void func_80077B78(Object_8C* );
void func_80077B84(Object_8C* );
void func_80078038(Object_8C* );
void func_800780F8(Object_8C* );
void func_800783C0(Object_8C* );
void func_80078438(Object_8C* );
void func_800784B4(Object_8C* );
void func_80078550(Object_8C* );
void func_80078604(Object_8C* );
void func_8007868C(Object_8C* );
void func_8007879C(Object_8C* );
void func_800788B0(Object_8C* );
void func_80078A64(Object_8C* );
void func_80078AEC(Object_8C* );
void func_80078B8C(Object_8C *);
void func_80078BE0(Object_8C* );
void func_80078C84(Object_8C* );
void func_80078CE8(Object_8C* );
void func_80078E50(f32 posX, f32 posY, f32 posZ, f32 );
void func_80078EBC(Object_8C* );
void func_80078F78(Object_8C* );
void func_8007905C(Object_8C* , f32 posX, f32 posY, f32 posZ, f32 , u8 );
void func_800794CC(f32 posX, f32 posY, f32 posZ, f32 );
void func_8007953C(f32 posX, f32 posY, f32 posZ, f32 );
void func_800795AC(f32 posX, f32 posY, f32 posZ, f32 );
void func_80079618(f32 posX, f32 posY, f32 posZ, f32 );
void func_8007968C(Object_8C *);
s32 func_800798C4(s32 , Gfx** , Vec3f* , Vec3f* , void* ); //OverrideLimbDraw
void func_800798F0(Object_8C* );
void func_8007A28C(Object_8C* );
void func_8007A3C0(Object_8C* );
void func_8007A568(f32 xPos, f32 yPos, f32 zPos, f32 );
void func_8007A5F8(Object_8C* , Vec3f* , u32 );
void func_8007A6F0(Vec3f *, u32);
void func_8007A748(Object_8C*);
s32 func_8007A774(Player*, Object_8C*, f32);
void func_8007A818(Object_8C*, f32 posX, f32 posY, f32 posZ, f32, u8, u8, u16);
void func_8007A900(f32 posX, f32 posY, f32 posZ, f32, u8, u8, u16);
void func_8007A994(Object_8C*);
void func_8007AA60(Object_8C*);
void func_8007AB50(Object_8C*);
void func_8007ACE0(f32, f32, f32, f32, f32, f32);
void func_8007ADF4(f32 , f32 posY, f32 , f32 , f32 );
void func_8007AFD0(f32 posX, f32 posZ, f32 , f32 , f32 );
void func_8007B040(Object_8C*);
void func_8007B0F4(Object_8C*);
void func_8007B228(f32 posX, f32 posY, f32 posZ, f32 );
void func_8007B344(f32 xPos, f32 yPos, f32 zPos, f32 , s32 );
void func_8007B3B8(Object_8C*);
void func_8007B550(f32 posX, f32 posY, f32 posZ, f32 , s32 );
void func_8007B5C0(Object_8C*);
void func_8007B62C(Object_8C*);
void func_8007B670(Object_8C*);
void func_8007B67C(Object_8C*);
void func_8007B758(Object_8C*);
void func_8007B8F8(f32 posX, f32 posY, f32 posZ, f32 );
void func_8007B960(Object_8C*);
void func_8007BC7C(f32, f32, f32, f32);
void func_8007BCE8(Object_8C*);
void func_8007B9DC(Object_8C*);
void func_8007BDE0(Object_8C*);
void func_8007BE54(Object_8C*);
void func_8007BEE8(Object_8C*);
void func_8007BFFC(f32, f32, f32, f32, f32, f32, f32, s32);
void func_8007C120(f32, f32, f32, f32, f32, f32, f32, s32);
void func_8007C250(Object_8C*);
void func_8007C484(f32, f32, f32, f32, f32, f32, f32, s32);
void func_8007C50C(Object_8C*);
void func_8007C688(f32 , f32 , f32 , f32 , s32 );
void func_8007C8C4(Object_8C*);
void func_8007C9E0(Object_8C*);
void func_8007CAF0(Object_8C*);
void func_8007D074(f32, f32, f32, f32);
void func_8007D0E0(f32, f32, f32, f32);
void func_8007D10C(f32, f32, f32, f32);
void func_8007D1E0(f32, f32, f32, f32);
void func_8007D2C8(f32, f32, f32, f32);
void func_8007D24C(f32, f32, f32, f32);
void func_8007D2F4(Object_8C*);
void func_8007D55C(Object_8C*);
void func_8007D748(Object_8C*);
void func_8007D8A8(Object_8C*);
void func_8007D9DC(f32, f32, f32, f32, f32, s32);
void func_8007DA58(Object_8C*);
void func_8007DAE4(Object_8C*);
void func_8007DB70(Object_8C*);
void func_8007DED4(Object_8C*);
void func_8007E014(Object_8C*);
void func_8007E258(Object_8C*);
void func_8007E298(Object_8C*);
void func_8007E330(Object_8C*);
void func_8007E3E4(Object_8C*);
void func_8007E45C(Object_8C*);
void func_8007E5CC(Object_8C*);
void func_8007E648(Object_8C*);
void func_8007E93C(Object_8C *, u16 , f32 , f32 , f32 , f32 );
void func_8007F04C(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8007F20C(s32 , f32 , f32 , f32 , f32 );
void func_8007F438(Object_8C*);
void func_8007F6B0(Object_8C*);
void func_8007F958(Object_8C*);
void func_8007FBE0(Object_8C*);
void func_8007FE88(Object_8C*);
void func_800802B8(Object_8C*);
void func_800802D8(Object_8C*);
void func_800802F8(Object_8C*);
void func_80080360(Object_8C*);
void func_8008040C(Object_8C*);
void func_8008092C(Object_8C*);
void func_80080ACC(Object_8C*);
void func_80080D04(Object_8C*);
void func_80081C5C(Object_8C*);
void func_80082F78(Object_8C*);
void func_800837EC(Object_8C*);
void func_80083B8C(Object_8C*);
void func_80083D2C(f32 , f32 , f32 , f32 );
void func_80083FA8(Object_8C*);
void func_80084194(Object_8C*);

// fox_fade
void func_80084370(s32);
void func_800843FC(s32);
void func_80084488(s32);
void func_80084688(s32, s32);

// fox_hud
void func_80084B94(s32);
void func_800857DC(f32, f32, f32, f32);
void func_80085890(f32, f32, f32, f32);
void func_80086110(f32, f32, s32);
void func_80086664(f32, f32);
void func_800869A0(f32, f32, s32, f32, s32, s32);
void func_80087530(f32, f32, s32);
void func_8008865C(void);
void func_8008AD94(void);
void func_8008B5B0(f32 x, f32 y);
s32 func_8008B774(void);
void func_8008BD00(u8*, s32, s32, u8);
void func_8008C104(u16 *, u16 *);
void func_8008C390(f32, f32, f32, s32);
void func_8008C5C8(f32, f32, f32, s32);
void func_8008C6F4(s32, s32);
s32 func_8008BCBC(s32);
void func_8008CA44(void);
s32 func_8008CB8C(void);
void func_8008D0DC(f32, f32, f32, f32, f32);
void func_8008DE68(void);
void func_8008E51C(s32* , f32);
void func_8008E9EC(f32, f32);
void func_8008EA14(f32, f32);
void func_8008FA84(void);
void func_8008FE78(Object_408*);
void func_8008FFF0(Object_408*, s32);
bool func_8009092C(Object_2F4*);
void func_800907C4(Object_408*);
s32 func_800915FC(Object_2F4*);
void func_80092D48(Object_2F4 *);
void func_80092EC0(Object_2F4*);
void func_80094954(Object_8C*);
void func_80094BBC(Object_8C*);
void func_80094D20(f32, f32);

// fox_97F80
void func_80098860(Plane *plane, Vec3f *point, Vec3f *normal);
s32 func_800988B4(Vec3f *vec, Plane *plane);
s32 func_800998FC(Vec3f*, Vec3f*, Vec3f*, s32, Vec3f*, f32*);

// fox_game
void Game_Initialize(void);
void Game_SetGameState(void);
bool func_800A1B6C(void);
void func_800A1C14(Gfx **);
void func_800A1E68(Gfx **);
void func_800A1F44(void);
void func_800A1FB0(Gfx **, u8 , u8);
void func_800A24DC(s32);
void func_800A26C0(void);
void func_800A25DC(void);
Object_2F4 *func_800A3608(s32);

// fox_A4290
bool func_800A3690(Vec3f*, Vec3f*, s32, Vec3f*);

// fox_A48A0
void func_800A3CA0(void);

// fox_play
s32 Play_CheckMedalStatus(u16);
s32 Play_GetMaxShields(void);
void func_800A5844(void);
void func_800A5D6C(void);
void func_800A5FA0(Vec3f* , u32 , s32 );
void func_800A6148(void);
void func_800A69F8(s32 , f32 , f32 , f32 );
void func_800A6CD0(Player *, s32, s32);
bool func_800A73E4(f32* , s32* , f32 posX, f32 posY, f32 posZ);
s32 func_800A78C4(Hitbox* hitbox, f32 , f32 , f32 , f32 , f32 , f32 );
void func_800A8BA4(Player* player);
void func_800AA800(Player *player);
void func_800ACDC0(Player *, PlayerShot *, s32 );
void func_800B0F50(Player *); 
void func_800B44C4(Player *);
void func_800B5FBC(Player *, s32 , s32 );
void func_800B63BC(Player *, s32);
void func_800B6848(Player *, s32 );
void func_800B6BFC(Player *, s32 );
void func_800B6F50(f32, f32, f32, f32, f32, f32);
void func_800B7184(Player *, s32);
void func_800B73E0(Player *);
void func_800B852C(s32 , Item *);
void func_800B86CC(void);

// fox_radio
s32 func_800BA7BC(u16*, s32);
void func_800BA808(u16*, s32);
void func_800BB5D0(void);

// fox_reset
void Graphics_NMIWipe(void);

// sf_versus
s32 func_800C1E9C(void); 
void func_800C1ED4(void);
void func_800C20B0(void);
void func_800C2190(void);
void func_800C26C8(void);

// fox_save
s32 Save_Write(void);
s32 Save_Read(void); 

void func_EFFA40_80187520(s32, void*);

void func_DF4260_80187530(Object_80*);
void func_DF4260_8018753C(Object_80*);
void func_DF4260_801878D8(Object_408 *);
void func_DF4260_8018B0B4(Object_2F4 *);
void func_DF4260_8018BE7C(Object_408 *);    
void func_DF4260_801924A8(Object_80* );
void func_DF4260_8019250C(Object_2F4 *);    
void func_DF4260_80192CB0(Object_2F4 *);    
void func_DF4260_80192EA4(Object_2F4 *);
void func_DF4260_801933B4(Object_2F4 *);    
void func_DF4260_801935CC(Object_408 *);
void func_DF4260_80198310(Object_408 *);
void func_DF4260_801988E0(void);
void func_DF4260_8018ED78(Object_408*);

void func_E08400_80187B08(Object_2F4 *);
void func_E08400_80188A40(Object_408 *);
void func_E08400_8018CCF8(Object_2F4 *);

void func_E16C50_80191DB0(Object_2F4*);
void func_E16C50_8018ED78(Player*);
void func_E16C50_80187754(Object_408 *);
void func_E16C50_801900FC(Vec3f*, Vec3f*, f32, f32, f32, s32, f32, s32, s32);
void func_E16C50_80190430(Object_2F4 *);
void func_E16C50_80190F08(Object_2F4 *);
void func_E16C50_801915A4(Object_2F4 *);
void func_E16C50_80191BB8(Object_2F4 *);
void func_E16C50_801932AC(Object_408 *);
void func_E16C50_8019B1F0(Object_2F4 *);
void func_E16C50_8019B810(Object_2F4 *);
void func_E16C50_8019C200(Object_2F4 *);
void func_E16C50_8019D060(Object_2F4 *);
void func_E16C50_8019E9F4(f32, f32, f32, f32, f32, f32, f32, s32);
void func_E16C50_801A9824(void);
void func_E16C50_801AA20C(void);
void func_E16C50_801AC8A8(f32, f32, f32, f32, s32);
void func_E16C50_801ACBB4(void);
void func_E16C50_801AD688(Object_2F4 *);
void func_E16C50_801AE3AC(Object_2F4 *);
void func_E16C50_801AF9FC(Object_2F4 *);
void func_E16C50_801B10F8(Object_408 *);
void func_E16C50_801B6344(Object_2F4 *);
void func_E16C50_801B6E54(Object_2F4 *);
void func_E16C50_801B7AF0(Object_2F4 *);
void func_E16C50_801BA57C(Object_2F4 *);
void func_E16C50_801BB26C(Object_2F4 *);

void func_E51970_80193CA4(Object_408 *);
void func_E51970_80198594(Object_408 *);
void func_E51970_8019EA68(Object_58**);
void func_E51970_80198930(Object_58**);
void func_E51970_8018BA2C(Object_58**);
void func_E51970_80191ED8(Object_58**);

void func_E6A810_80188F30(void);
void func_E6A810_80199920(void);
void func_E6A810_801B5110(f32, f32, f32);
void func_E6A810_8018769C(Object_2F4 *);
void func_E6A810_80189B80(Object_2F4 *);
void func_E6A810_8018ADC4(Object_2F4 *);
void func_E6A810_8018B720(Object_2F4 *);
void func_E6A810_8018B96C(Object_2F4 *);
void func_E6A810_8018BFB0(Object_2F4 *);
void func_E6A810_8018E3B0(Object_2F4 *);
void func_E6A810_8018E3CC(Object_2F4 *);
void func_E6A810_8018E5E8(Object_2F4 *);
void func_E6A810_8018EFF0(Object_4C *); 
void func_E6A810_8018F0D8(Object_80 *); 
void func_E6A810_8018FA48(Object_408 *);
void func_E6A810_801990DC(Object_408 *);
void func_E6A810_80199F8C(Object_2F4 *);
void func_E6A810_801A3E70(Object_2F4 *);
void func_E6A810_801A4660(Object_2F4 *);
void func_E6A810_801A4AF8(Object_2F4 *);
void func_E6A810_801A5E2C(Object_2F4 *);
void func_E6A810_801A6134(Object_2F4 *);
void func_E6A810_801A65E0(Object_80 *); 
void func_E6A810_801A7D98(Object_2F4 *);
void func_E6A810_801B58AC(Gfx **, f32);
s32 func_E6A810_801B6AEC(f32, f32, f32);
void func_E6A810_801B6E20(f32, f32, f32 *, f32 *, f32 *); 

void func_E9F1D0_80196968(Object_58**);
void func_E9F1D0_801878A8(Object_58**);
void func_E9F1D0_801961AC(Object_58**);
void func_E9F1D0_801A4CB0(Object_2F4*);
void func_E9F1D0_801A3BD4(Object_2F4*);
void func_E9F1D0_801888F4(Object_2F4 *);
void func_E9F1D0_8018D16C(Object_408 *);
void func_E9F1D0_80197CC4(Object_408 *);
void func_E9F1D0_801A6164(Player *);

void func_EF0260_8018A96C(void);
void func_EF0260_8018AAC4(void);

#endif
