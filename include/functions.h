#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "libc/stdbool.h"
#include "structs.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"

s32 Lib_vsPrintf(char* dst, const char* fmt, va_list args);
void Lib_Perspective(Gfx** dList);
void Lib_Ortho(Gfx** dList);
void Lib_DmaRead(void* src, void* dst, s32 size);
void Lib_FillScreen(u8 setFill);

void Memory_FreeAll(void);
void* Memory_Allocate(s32);

void func_8000FFCC(void);

void func_80016A50(void);
void func_800182F4(s32);
void Audio_PlaySfx(u32, f32*, u8, f32*, f32*, s8*);
void func_80019290(s32, void*);
void func_8001A38C(u8, f32*);
void Audio_KillSfx(f32*);
void func_8001A55C(f32*, u32);
void func_8001A838(u32);
void func_8001ACDC(s32);
void func_8001AD00(u32);
void func_8001AE58(void);
s32 func_8001AE78(void);
s32 func_8001AED4(void);
void func_8001AF40(s32);
u8* func_8001C3EC(void);
void func_8001C8B8(u8);
void func_8001CA24(u8);
void func_8001CB80(u8, u8);
void func_8001CCDC(u8, f32 *);
void func_8001CE28(u8, f32 *);
void func_8001CFA8(f32);
void func_8001D034(f32*, s32, u8);
void func_8001D10C(f32*, u32);
void func_8001D15C(u8);
void func_8001D1C8(u8, u32);
void func_8001D2FC(f32*, u16);
void func_8001D3A0(f32*, u16);
void func_8001D400(s8);
void func_8001D410(s32);
void func_8001D444(u8, u16, u8, u8);
void func_8001D4AC(u16, u8, u8, u8);
void func_8001D520(void);
void func_8001D638(u8);
void func_8001D6DC(s32);
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

// fox_360
void func_8002ED60(Player*);
void func_8002E3E0(Actor*);
void func_8002E548(void);
void func_8002E5E0(Boss*);
void func_8002E604(Boss*);
void func_8002E628(Boss*);
void func_8002E64C(Boss*);
void func_8002E670(Actor*);
void func_8002E694(Actor*);
void func_8002E6B8(Actor*);
void func_8002E6DC(Actor*);
bool func_8002E4F8(u16*, RadioCharacterId);
void func_8002E700(Player*);
void func_8002EE34(void);
void func_8002EE64(Actor* actor);
void func_8002F180(void);
void func_8002F5F4(u16* msg, RadioCharacterId character);
void func_8002F69C(Actor*);
void func_8003088C(Actor*);
void func_800319AC(Actor* this);
void func_80035448(Actor* actor);

//fox_beam
void func_80038140(PlayerShot* shot);
void func_80036318(PlayerShot* shot);
void func_80035DEC(f32 xPos, f32 yPos, f32 zPos);
void PlayerShot_Initialize(PlayerShot*);
void func_800365E4(f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_8003D9B8(void);
void func_8003DA0C(void);

// fox_bg
void func_8003DAF0(void);
void func_8003DE68(s32, s32);
void func_8003E1E8(void);
void func_80040450(void);
void func_80040954(void);
void func_80040CDC(void);
void func_80040CE4(void);
void func_80042D38(void);

// fox_boss
void func_80042EC0(Boss* boss);
void func_80042FAC(Boss* boss);
void func_80042FB8(Boss* boss);
void func_80042FC4(Boss* boss);
void func_80042FD0(Boss* boss);
void func_80042FDC(Boss* boss);
void func_80042FE8(Boss* boss);
void func_800430DC(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_8004319C(Player* player, f32 arg1, f32 arg2, f32 arg3);

// fox_tank
void func_80043468(Player* player);
void func_800444BC(Player* player);
void func_80044868(Player*);
void func_80045130(Player*);
void func_80045678(Player*);
void func_80045E7C(Player*);
void func_80047504(Player* player);
void func_80046358(Player*);

// fox_demo
void func_80048AC0(s32 teamId);
void func_80049C0C(Player*);
void func_8004A52C(Player*);
void func_8004AA84(void);
void func_8004AAF4(Player*);
void func_8004C930(Player*);
void func_8004CCC0(Player*);
void func_8004D440(Player* player);
void func_8004E3D8(Player*);
void func_8004F8AC(Actor*);
void func_8004FEC0(Actor*);
void func_800515C4(void);

// fox_display
void func_80053658(WingInfo*);
void func_8005465C(s32);
void func_80057814(Player*);
void func_80057D00(void);

// fox_edata
void func_800594F0(Object_80*);
void func_800595D0(Object_80*);
void func_800596C0(void);
void func_800596B0(Actor*);

// fox_edisplay
void Graphics_SetScaleMtx(f32);
void func_80059850(Object_4C*);
void func_800598E8(Actor*);
void func_80059A24(Actor*);
void func_80059AEC(Object_80*);
void func_80059B20(Object_80*);
void func_80059BBC(Object_80*);
void func_80059BF0(Actor*);
void func_80059C34(Object_4C*);
void func_80059C40(Object_4C*);
void func_80059F68(Item*);
void func_80059FDC(Item*);
void func_8005A094(Actor*);
void func_8005ADAC(Actor*);
void func_8005B1E8(Actor*, s32);
void func_8005B388(Actor*);
void func_8005B6A4(Actor*);
void func_8005B71C(Actor*);
void func_8005B7CC(Actor*);
void func_8005B848(Actor*);
void func_8005B9A4(Actor*);
void func_8005BA30(Actor*);
void func_8005C5F0(Item*);
void func_8005C900(Item*);
void func_8005C9C0(Item*);
void func_8005CA80(Item*);
void func_8005CB44(Item*);
void func_8005CC9C(Item*);
void func_8005CDA8(Item*);
void func_8005F030(f32*);
void func_8005F0E8(f32*, Vec3f*);
void func_8005F1EC(f32*);
void func_8005F290(f32*, Vec3f*);
void func_8005F670(Vec3f*);
s32 func_8005F9DC(Vec3f*);

// fox_enmy
void func_80060714(s32 );
void func_8006089C(u8 );
void func_80060968(void);
void func_80060D94(s32);
void func_80060F30(f32* , u32 , s32 );
void Object_Kill(Object*, f32*);
s32 func_80060FE4(Vec3f*, f32);
void Object_SetInfo(ObjectInfo* info, u32 objId);
void Object_80_Initialize(Object_80*);
void Object_4C_Initialize(Object_4C*);
void Actor_Initialize(Actor*);
void Boss_Initialize(Boss*);
void Item_Initialize(Item*);
void Effect_Initialize(Effect*);
void func_80061B68(void);
void func_80061CD0(void);
void func_80061E48(Actor* , f32 , f32 , f32 );
void func_80061F0C(Actor* , ObjectInit* , s32 );
void Object_Load(ObjectInit* , f32 , f32 , f32 , f32 );
void func_80062568(void);
void func_80062B60(f32 xPos, f32 zPos, s32 state, f32 scale);
void func_80062C38(f32, f32);
bool func_80062DBC(Vec3f* pos, f32* hitboxData, Object* obj, f32 xRot, f32 yRot, f32 zRot);
s32 func_800631A8(Vec3f*, f32*, Vec3f*);
s32 func_8006326C(Vec3f* , Vec3f* , ObjectId , Object* );
s32 func_8006351C(s32 , Vec3f* , Vec3f* , s32 );
void func_800652CC(Object_80*);
void func_800654E4(Object*);
void func_800656D4(Actor*);
void func_800660F0(Actor*);
void func_80066254(Actor*);
void func_8006654C(Actor*);
void func_8006684C(Actor*);
void func_800669A0(Actor*);
void func_80066A80(Actor*);
void func_80066C00(Object_80*);
void func_80066D5C(Object_80*);
void func_80066E8C(Object_4C*);
void func_80066EA8(Object_80*);
void func_80066EF0(Item*);
void func_800671D0(Item*);
void func_800674B4(f32, f32, f32, f32, f32, f32, f32, f32);
void func_8006753C(Actor*);
void func_80067874(Actor*);
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
void func_800690D0(s32, ObjectId);
void func_80069924(Effect*);
void func_800693E8(Actor*);
void func_80069658(Boss*);
void func_800696F8(Object_80*);
void func_80069858(Object_4C*);
void func_80069A10(Item*);
void Actor_Update(Actor*);
void Boss_Update(Boss*);
void Object_80_Update(Object_80*);
void Object_4C_Update(Object_4C*);
void Item_Update(Item*);
void Effect_Update(Effect*);
void func_8006A06C(UnkEntity30*);
void func_8006A38C(void);
void Object_UpdateAll(void);

//fox_6B3B0
void func_8006A96C(Actor*);
void func_8006A978(Actor*);
void func_8006AA98(Object_80*);
void func_8006AC08(Actor*);
void func_8006AD18(Actor*);
void func_8006B094(Actor*);
void func_8006B0A0(Actor*);
void func_8006B74C(Actor*);
void func_8006B95C(Object_80*);
void func_8006BB78(Actor*);
void func_8006C008(Actor*);
void func_8006D350(Object_80*);
void func_8006ECBC(PlayerShotId, PlayerShot*, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8006EEFC(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8006EFA0(s32 unk0E4, f32 xPos, f32 yPos, f32 zPos, f32 arg4, f32 arg5, f32 arg6, f32 xRot, f32 yRot,
                   f32 zRot);
void func_8006F0D8(f32 xPos, f32 yPos, f32 zPos, f32 arg3);
void func_8006F254(Actor*);
void func_80072594(Actor*);
s32 func_80074F90(Object_80*);
void func_80074FF0(Actor*);
void func_800763A4(Actor*);
void func_8007717C(Actor*);
void func_800771CC(Actor*);
void func_80077218(Actor*);

// fox_effect
s32 func_80081B24(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void BonusText_Display(f32 xPos, f32 yPos, f32 zPos, s32 hits);
void BonusText_Update(void);
void BonusText_DrawAll(void);
Effect* func_8007783C(ObjectId objId);
void func_8007797C(f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 scale2);
void func_80077A00(Effect* );
void func_80077A7C(Effect* );
void func_80077B78(Effect* );
void func_80077B84(Effect* );
void func_80078038(Effect* );
void func_800780F8(Effect* );
void func_800783C0(Effect* );
void func_80078438(Effect* );
void func_800784B4(Effect* );
void func_80078550(Effect* );
void func_80078604(Effect* );
void func_8007868C(Effect* );
void func_8007879C(Effect* );
void func_800788B0(Effect* );
void func_80078A64(Effect* );
void func_80078AEC(Effect* );
void func_80078B8C(Effect*);
void func_80078BE0(Effect* );
void func_80078C84(Effect* );
void func_80078CE8(Effect* );
void func_80078E50(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_80078EBC(Effect* );
void func_80078F78(Effect* );
void func_800794CC(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007953C(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_800795AC(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_80079618(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007968C(Effect*);
s32 func_800798C4(s32 , Gfx** , Vec3f* , Vec3f* , void* ); //OverrideLimbDraw
void func_800798F0(Effect* );
void func_8007A28C(Effect* );
void func_8007A3C0(Effect* );
void func_8007A568(f32 xPos, f32 yPos, f32 zPos, f32 scale1);
void func_8007A5F8(Effect* , Vec3f* pos, u32 sfxId);
void func_8007A6F0(Vec3f* pos, s32 sfxId);
void func_8007A748(Effect*);
s32 func_8007A774(Player*, Effect*, f32);
void func_8007A900(f32 xPos, f32 yPos, f32 zPos, f32 scale1, u8, u8, u16);
void func_8007A994(Effect*);
void func_8007AA60(Effect*);
void func_8007AB50(Effect*);
void func_8007ACE0(f32 xPos, f32 yPos, f32 zPos, f32 scale2, f32 scale1, f32 yRot);
void func_8007ADF4(f32 xPos, f32 yPos, f32 zPos, f32 scale2, f32 scale1);
void func_8007AFD0(f32 xPos, f32 zPos, f32 xVel, f32 zVel, f32 scale1);
void func_8007B040(Effect*);
void func_8007B0F4(Effect*);
void func_8007B228(f32 xPos, f32 yPos, f32 zPos, f32 scale1);
void func_8007B344(f32 xPos, f32 yPos, f32 zPos, f32 scale1, s32 );
void func_8007B3B8(Effect*);
void func_8007B550(f32 xPos, f32 yPos, f32 zPos, f32 scale1, s32 );
void func_8007B5C0(Effect*);
void func_8007B62C(Effect*);
void func_8007B670(Effect*);
void func_8007B67C(Effect*);
void func_8007B758(Effect*);
void func_8007B8F8(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007B960(Effect*);
void func_8007BC7C(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007BCE8(Effect*);
void func_8007B9DC(Effect*);
void func_8007BDE0(Effect*);
void func_8007BE54(Effect*);
void func_8007BEE8(Effect*);
void func_8007BFFC(f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 scale2, s32 timer50);
void func_8007C120(f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 scale2, s32 timer50);
void func_8007C250(Effect*);
void func_8007C484(f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 scale2, s32 arg7);
void func_8007C50C(Effect*);
void func_8007C688(f32 xPos, f32 yPos, f32 zPos, f32 scale2, s32 timer50);
void func_8007C8C4(Effect*);
void func_8007C85C(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007C9E0(Effect*);
void func_8007CAF0(Effect*);
void func_8007CF30(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007D074(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007D0E0(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007D10C(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007D1E0(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007D24C(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007D2C8(f32 xPos, f32 yPos, f32 zPos, f32 scale2);
void func_8007D2F4(Effect*);
void func_8007D55C(Effect*);
void func_8007D748(Effect*);
void func_8007D8A8(Effect*);
void func_8007D9DC(f32 xPos, f32 yPos, f32 zPos, f32 scale2, f32 scale1, s32 timer50);
void func_8007DA58(Effect*);
void func_8007DAE4(Effect*);
void func_8007DB70(Effect*);
void func_8007DED4(Effect*);
void func_8007E014(Effect*);
void func_8007E258(Effect*);
void func_8007E298(Effect*);
void func_8007E330(Effect*);
void func_8007E3E4(Effect*);
void func_8007E45C(Effect*);
void func_8007E5CC(Effect*);
void func_8007E648(Effect*);
void func_8007E93C(Effect* effect, u32 objId, f32 xPos, f32 yPos, f32 zPos, f32 arg5);
void func_8007EE68(s32 objId, Vec3f* pos, Vec3f* rot, Vec3f* arg3, Vec3f* arg4, f32 scale2);
void func_8007F04C(s32 objId, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, f32 unkX, f32 unkY, f32 unkZ, f32 xVel, f32 yVel, f32 zVel, f32 scale2);
void func_8007F11C(s32 objId, f32 xPos, f32 yPos, f32 zPos, f32 arg4);
void func_8007F20C(s32 objId, f32 xPos, f32 yPos, f32 zPos, f32 arg4);
void func_8007F438(Effect*);
void func_8007F6B0(Effect*);
void func_8007F958(Effect*);
void func_8007FBE0(Effect*);
void func_8007FE88(Effect*);
s32 func_8007FD84(Effect*);
void func_800802B8(Effect*);
void func_800802D8(Effect*);
void func_800802F8(Effect*);
void func_80080360(Effect*);
void func_8008040C(Effect*);
void func_8008092C(Effect*);
void func_80080ACC(Effect*);
void func_80080D04(Effect*);
void func_800815DC(void);
void func_80081A8C(f32 xPos, f32 yPos, f32 zPos, f32 scale2, s32 arg4);
void func_80081BEC(f32 xPos, f32 yPos, f32 zPos, f32 scale2, s32 arg4);
void func_80081C5C(Effect*);
void func_80082F78(Effect*);
void func_800837EC(Effect*);
void func_80083B8C(Effect*);
void func_80083C70(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 arg7, s32 arg8);
void func_80083D2C(f32 xPos, f32 yPos, f32 zPos, f32 srcZ);
void func_80083FA8(Effect*);
void func_80084194(Effect*);

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
void func_800884E4(void);
void func_80088564(void);
void func_8008865C(void);
s32 func_8008AC54(s32);
void func_8008AD94(void);
void func_8008B5B0(f32 x, f32 y);
s32 func_8008B774(void);
void func_8008BD00(u8*, s32, s32, u8);
void func_8008C104(u16*, u16*);
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
void func_8008FE78(Boss*);
void func_8008FFF0(Boss*, s32);
bool func_8009092C(Actor*);
void func_800907C4(Boss*);
s32 func_800915FC(Actor*);
s32 func_800924E0(Actor*);
s32 func_800927A0(Actor*);
void func_80092D48(Actor*);
void func_80092EC0(Actor* actor);
void func_80093164(Actor*);
void func_800935E8(Player*);
void func_800953A0(Actor*, s32);
void func_8009546C(Actor*, s32);
void func_80095538(Actor*, s32);
void func_80095604(Player*);
void func_80094954(Effect*);
void func_80094BBC(Effect*);
void func_80094D20(f32, f32);

// fox_97F80
void func_80098860(Plane* plane, Vec3f* point, Vec3f* normal);
s32 func_800988B4(Vec3f* vec, Plane* plane);
s32 func_800998FC(Vec3f*, Vec3f*, Vec3f*, s32, Vec3f*, f32*);

// fox_game
void Game_Initialize(void);
void Game_SetGameState(void);
bool func_800A1B6C(void);
void func_800A1C14(Gfx**);
void func_800A1E68(Gfx**);
void func_800A1F44(void);
void func_800A1FB0(Gfx**, u8 , u8);
void func_800A24DC(s32);
void func_800A26C0(void);
void func_800A25DC(void);
Actor* func_800A3608(s32);

// fox_A4290
bool func_800A3690(Vec3f*, Vec3f*, s32, Vec3f*);

// fox_A48A0
void func_800A3CA0(void);

// fox_play
s32 Play_CheckMedalStatus(u16);
s32 Play_GetMaxShields(void);
void func_800A6028(f32*, u32);
void func_800AC290(Player* player, PlayerShot* shot, f32 arg2, f32 arg3, PlayerShotId shotId, f32 arg5);
void func_800A5844(void);
void func_800A594C(void);
void func_800A5D6C(void);
void func_800A5FA0(f32* , u32 , s32 );
void func_800A6070(f32* , u32 );
void func_800A6148(void);
void func_800A69F8(s32 , f32 , f32 , f32 );
void Player_ApplyDamage(Player* player, s32 direction, s32 damage);
bool func_800A73E4(f32* , s32* , f32 xPos, f32 yPos, f32 zPos);
s32 func_800A78C4(Hitbox* hitbox, f32 , f32 , f32 , f32 , f32 , f32 );
void func_800A8BA4(Player* player);
void func_800AA800(Player* player);
void func_800ACDC0(Player*, PlayerShot*, PlayerShotId );
void func_800B0F50(Player*);
void func_800B44C4(Player*);
void func_800AB334(void);
void func_800ABA08(void);
void func_800AE278(Player*);
void func_800B2130(Player*);
void func_800B2574(Player*);
void func_800B5FBC(Player*, s32 , s32 );
void func_800B63BC(Player*, s32);
void func_800B6848(Player*, s32 );
void func_800B6BFC(Player*, s32 );
void func_800B6F50(f32, f32, f32, f32, f32, f32);
void func_800B7184(Player*, s32);
void func_800B73E0(Player*);
void func_800B852C(ObjectId , Item*);
void func_800B86CC(void);
void func_800A668C(f32 xPos, f32 yPos, f32 zPos);
void func_800AD7F0(Player* player);
void func_800ADF58(Player* player);
void func_800B415C(Player* player);
void func_800B41E0(Player* player);
void func_800B41EC(Player* player);
void func_800A46A0(Player* player);
void func_800A86E4(Player* player);
void func_800A887C(Player* player);
s32 func_800A7974(Player* player, f32* hitboxData, s32* index, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot,
                  f32 zRot, f32 arg9, f32 argA, f32 argB);
bool func_800A8054(ObjectId objId, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, Vec3f* arg7, Vec3f* arg8);
void Object_58_Initialize(Object_58*);

// fox_radio
s32 func_800BA7BC(u16*, s32);
void Radio_PlayMessage(u16*, RadioCharacterId);
void func_800BB388(void);
void func_800BB5D0(void);

// fox_reset
void Graphics_NMIWipe(void);

// fox_versus
s32 func_800C1E9C(void);
void func_800C1ED4(void);
void func_800C20B0(void);
void func_800C2190(void);
void func_800C26C8(void);

// fox_save
s32 Save_Write(void);
s32 Save_Read(void);

void func_menu_80187520(u32, void*);
void func_menu_8019E8D0(void);

void func_i1_80198414(void);
s32 func_i1_801937F4(s32, Gfx**, Vec3f*, Vec3f*, void*);
void func_i1_80193D64(s32, Vec3f*, void*);

void func_ending_8018A96C(void);
void func_ending_8018AAC4(void);

#endif
