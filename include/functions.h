#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "structs.h"

void func_8000291C(void);
void func_800029A8(void);
void func_80002AF4(void);
void func_80002BE8(void);
void func_80002C50(void);
void func_80002CB8(void);

f32 Math_ModF(f32 value, f32 mod);
void Rand_Init(void);
f32 Rand_ZeroOne(void);
void Rand_SetSeed(s32 seed1, s32 seed2, s32 seed3);
f32 Rand_ZeroOneSeeded(void);
f32 Math_Atan2F(f32 y, f32 x);
f32 Math_Atan2F_XY(f32 x, f32 y);
f32 Math_Atan2F_XYAlt(f32 x, f32 y);
f32 Math_PowF(f32 base, s32 exp);
void Math_MinMax(s32* min, s32* max, s32 val1, s32 val2, s32 val3);

void func_80005680(Matrix*, Matrix*);
void func_80005708(Matrix** mtx);
void func_80005740(Matrix** mtx);
void func_80005B00(Matrix*, f32, f32, f32, u8);
void func_80005C34(Matrix*, f32, f32, f32, s32);
void func_80005E90(Matrix*, float, char);
void func_80006A20(Matrix*, Vec3f*, Vec3f*);
void func_80006EB8(Gfx**);
void func_80006F20(void);

void func_800070C8(u64);

s32 func_800071FC(s32*);
s32 func_800072E0(s32*);

void func_80007D58(void*);
void func_80007FE4(FrameBuffer*, u16, u16);
void func_80008018(void);

void func_800182F4(s32);
void func_80019218(u32, f32*, u8, f32*, f32*, s8*);
void func_8001A838(u32 arg0);
void func_8001AF40(s32 arg0);
void func_8001DC6C(s32, s32);

void func_8000FFCC(void);
void func_8001DCE0(void);
void func_8001DECC(void);
GfxPoolStruct0* func_8001DF50(void);

void RdRam_CheckIPL3(void);

void Mio0_Decompress(void* header, u8* dst);

s32 vsprintf(char* dst, char* fmt, va_list args);

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
f32 Math_FAtanF(f32);
f32 Math_FAtan2F(f32, f32);
f32 Math_FAsinF(f32);
f32 Math_FAcosF(f32);

void osCreatePiMgr(s32, OSMesgQueue*, OSMesg*, s32);

f32 __sinf(f32);
f32 __cosf(f32);

s64 __ull_div(s64, s64);
s64 __ll_mul(s64, s64);
s64 __ll_rshift(s64, s64);

void func_80060FBC(u8*, f32*);
void func_8006EEFC(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_8007C120(f32, f32, f32, f32, f32, f32, f32, s32);
void func_8007D10C(f32, f32, f32, f32);

void func_80084688(s32, s32);
void func_800857DC(f32, f32, f32, f32);
void func_80085890(f32, f32, f32, f32);
void func_80086664(f32, f32);
void func_80087530(f32, f32, s32);
void func_8008B5B0(f32 x, f32 y);
s32 func_8008B774(void);
void func_8008BD00(u8*, s32, s32, u8);
void func_8008C390(f32, f32, f32, s32);
void func_8008C5C8(f32, f32, f32, s32);
void func_8008C6F4(s32, s32);
s32 func_8008BCBC(s32 arg0);
void func_8008D0DC(f32, f32, f32, f32, f32);
void func_8008E9EC(f32 arg0, f32 arg1);
void func_8008EA14(f32, f32);
void func_8008FFF0(UnkStruct_D_8016F110* arg0, s32);
s32 func_8009092C(UnkStruct_func_80090A00*);
s32 func_800915FC(UnkStruct_func_80090A00*);
void func_80094D20(f32, f32);
f32 func_8009BC2C(f32*, f32, f32, f32, f32);
f32 func_8009BD38(f32*, f32, f32, f32, f32);
void func_8009D418(Gfx**, void*, u32, u32, f32, f32, f32, f32);
void func_8009D994(Gfx**, void*, u32, u32, f32, f32, f32, f32);
void func_8009F6CC(Vec3f*, f32, f32, f32);
void func_8009FC0C(s32, s32, s32);
f32 func_8009F768(f32);
void func_8009FEA0(s32, s32, s32);
void func_800A1200(s32, s32, f32, f32, char*);
void func_800A18B0(void);
void func_800A26C0(void);
s32 func_800A3F50(s32);
void func_800A5D6C(void);
void func_800B8DD0(Gfx**, s16);
void func_800BA490(void);
void func_800BA4F0(void);
void func_800BA808(u16*, s32);
void func_800BB5D0(void);
void func_800BC4B0(void);
void func_800B6F50(f32, f32, f32, f32, f32, f32);
void func_800B9358(void);

void func_801988E0(void);

void func_801877F0_EBFEB0(void);
s32 func_80187ABC_EC017C(void);
void func_80187B00_EC01C0(void);
void func_80187E28_EC04E8(void);
void func_801888E8_EC0FA8(void);
void func_8018994C_EC200C(void);
void func_8018A644_EC2D04(void);
void func_8018ACEC_EC33AC(void);
void func_8018B5C4_EC3C84(void);
void func_8018C644_EC4D04(void);
void func_80190E64_EC9524(void);
void func_8019111C_EC97DC(void);
void func_80187CA8_EC0368(void);
void func_80188010_EC06D0(void);
void func_80189208_EC18C8(void);
void func_8018A2F8_EC29B8(void);
void func_8018A990_EC3050(void);
void func_8018B038_EC36F8(void);
void func_8018C114_EC47D4(void);
void func_8018CB90_EC5250(void);
void func_8018F680_EC7D40(void);
void func_8018F77C_EC7E3C(void);
void func_8018F85C_EC7F1C(void);
void func_8018F8E4_EC7FA4(void);
void func_8018FC14_EC82D4(void);
void func_8018FD08_EC83C8(void);
void func_8018FF74_EC8634(void);
void func_801906A0_EC8D60(void);
void func_80190C9C_EC935C(void);
void func_801918FC_EC9FBC(void);
void func_8018D2B8_EC5978(s32);
void func_8018EA78_EC7138(s32);
void func_80191674_EC9D34(f32, f32, f32, f32*, f32*, f32*);

#endif
