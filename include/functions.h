#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "structs.h"

void func_8000291C(void);
void func_800029A8(void);
void func_80002AF4(void);
void func_80002BE8(void);
void func_80002C50(void);
void func_80002CB8(void);
void func_8000316C(Gfx** dList);
void func_800032B4(Gfx** dList);
void func_800033E0(void* var_s2, void* var_s1, s32 var_s0);
void func_800034E8(u8 arg0);

void func_8000372C(Gfx** dList, s32 dirX, s32 dirY, s32 dirZ, s32 colR, s32 colG, s32 colB, s32 ambR, s32 ambG, s32 ambB);

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

void Matrix_Copy(Matrix*, Matrix*);
void Matrix_Push(Matrix** mtxStack);
void Matrix_Pop(Matrix** mtxStack);
void Matrix_Mult(Matrix*, Matrix*, u8);
void Matrix_Translate(Matrix*, f32, f32, f32, u8);
void Matrix_Scale(Matrix*, f32, f32, f32, u8);
void Matrix_RotateX(Matrix*, f32, u8);
void Matrix_RotateY(Matrix*, f32, u8);
void Matrix_RotateZ(Matrix*, f32, u8);
void Matrix_RotateAxis(Matrix*, f32, f32, f32, f32, u8);
void Matrix_ToMtx(Mtx *dest);
void Matrix_FromMtx(Mtx *src, Matrix *dest);
void Matrix_MultVec3f(Matrix*, Vec3f*, Vec3f*);
void Matrix_MultVec3fNoTranslate(Matrix*, Vec3f*, Vec3f*);
void Matrix_GetYRPAngles(Matrix*, Vec3f*);
void Matrix_GetXYZAngles(Matrix*, Vec3f*);
void Matrix_LookAt(Matrix*, f32, f32, f32, f32, f32, f32, f32, f32, f32, u8);
void Matrix_SetGfxMtx(Gfx**);

s32 func_80006FD8(u64 arg0, void* arg2, s32* arg3, s32 arg4);

void func_80006F20(void);
void* func_80006F38(s32);

void func_80007068(s32* arg0, s32 arg1);
void func_8000707C(s32* arg0, s32 arg1);
void func_80007088(UnkStruct_func_80007088*);
void func_800070C8(u64);

s32 func_800071FC(SaveFile*);
s32 func_800072E0(SaveFile*);

void Fault_ThreadEntry(void*);
void func_80007FE4(FrameBuffer*, u16, u16);
void Fault_Init(void);

void func_80016A50(void);
void func_800182F4(s32);
void func_80019218(u32, f32*, u8, f32*, f32*, s8*);
void func_8001A500(f32*); // might be Vec3f*
void func_8001A838(u32 arg0);
void func_8001ACDC(s32);
void func_8001AE58(void);
void func_8001AF40(s32 arg0);
void func_8001D400(s32);
void func_8001D444(u8, u16, u8, u8);
void func_8001DBD0(s32);
void func_8001DC6C(u8, u16);

void func_8000FFCC(void);
void func_8001D8A8(u8, u8);
void func_8001DCE0(void);
void func_8001DECC(void);
SPTask* func_8001DF50(void);

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
s32 vsprintf(char* dst, char* fmt, va_list args);

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

void func_8002E3E0(Object_2F4 *arg0);

void func_8002E548(void);
void func_8003DAF0(void);
void func_80040CDC(void);
void func_80042FAC(Object_408 *);       
void func_80042FD0(Object_408 *);  
u8 func_80058F14(u8 arg0, u8 arg1);
void func_80059498(void);
void func_8005980C(f32 arg0);
void func_80057D00(void);

void func_80060FBC(Object*, f32*);
void func_800612B8(ObjectStruct_1C*, u32);
void func_800613C4(Object_2F4*);
void func_80061474(Object_8C* arg0);
void func_80061B68(void);
void func_80061CD0(void);
void func_80061E48(Object_2F4* arg0, f32 arg1, f32 arg2, f32 arg3);
void func_80061F0C(Object_2F4* arg0, ObjectInit* arg1, s32 arg2);
void func_80062180(ObjectInit* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
s32 func_800631A8(Vec3f*, f32*, Vec3f*);
s32 func_8006326C(Vec3f* arg0, s32 arg1, s32 arg2, Object* arg3);
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
void func_80066EF0(Object_6C *);                       /* extern */
void func_800671D0(Object_6C *);
void func_800674B4(f32, f32, f32, f32, f32, f32, f32, f32);
void func_8006753C(Object_2F4*);
void func_80067874(Object_2F4*);
void func_80067B1C(Object_6C*);
void func_80067BEC(Object_6C*);
void func_80067F6C(Object_6C*);
void func_80068020(Object_6C*);
void func_800685D8(Object_6C*);
void func_800685F8(Object_6C*);
void func_80068618(Object_6C*);
void func_80068688(Object_6C*);
void func_80068914(Object_6C*);
void func_80068C48(Object_6C*);
void func_80068C88(Object_6C*);
void func_80068FE0(Object_4C*);
void func_800690D0(s32, s32);
void func_80069924(Object_8C *);
void func_800693E8(Object_2F4 *);
void func_80069658(Object_408 *);
void func_800696F8(Object_80 *);
void func_80069858(Object_4C *);
void func_80069A10(Object_6C *);
void func_80069AAC(Object_2F4*);
void func_80069CBC(Object_408 *);
void func_80069DF4(Object_80 *);
void func_80069E88(Object_4C *);
void func_80069F30(Object_6C *);
void func_80069FD4(Object_8C *);
void func_8006A06C(UnkStruct_D_80174750*);
void func_8006A38C(void);
void func_8006B0A0(Object_2F4 *, s32);
void func_8006EEFC(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


void func_800763A4(Object_2F4 *, s32);
void func_8007717C(Object_2F4 *, s32);
void func_80077240(f32, f32, f32, s32);
void func_80078E50(f32, f32, f32, f32);
void func_800794CC(f32, f32, f32, f32);
void func_8007A6F0(Vec3f *, u32);
void func_8007BFFC(f32, f32, f32, f32, f32, f32, f32, s32);
void func_8007C120(f32, f32, f32, f32, f32, f32, f32, s32);
void func_8007D074(f32, f32, f32, f32);
void func_8007D0E0(f32, f32, f32, f32);
void func_8007D10C(f32, f32, f32, f32);
void func_8007D2C8(f32, f32, f32, f32);
void func_8007F04C(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32); // Object_Spawn?

void func_80084370(s32);
void func_800843FC(s32);
void func_80084488(s32);
void func_80084688(s32, s32);
void func_800857DC(f32, f32, f32, f32);
void func_80085890(f32, f32, f32, f32);
void func_80086664(f32, f32);
void func_800869A0(f32 arg0, f32 arg1, s32 k, f32 arg3, s32 arg4, s32 arg5);
void func_80087530(f32, f32, s32);
void func_8008865C(void);
void func_8008B5B0(f32 x, f32 y);
s32 func_8008B774(void);
void func_8008BD00(u8*, s32, s32, u8);
void func_8008C390(f32, f32, f32, s32);
void func_8008C5C8(f32, f32, f32, s32);
void func_8008C6F4(s32, s32);
s32 func_8008BCBC(s32 arg0);
void func_8008CA44(void);
s32 func_8008CB8C(void);
void func_8008D0DC(f32, f32, f32, f32, f32);
void func_8008DE68(void);
void func_8008E51C(s32* arg0, f32 arg1);
void func_8008E9EC(f32 arg0, f32 arg1);
void func_8008EA14(f32, f32);
void func_8008FA84(void);
void func_8008FFF0(Object_408* arg0, s32);
s32 func_8009092C(Object_2F4*);
s32 func_800915FC(Object_2F4*);
void func_80092D48(Object_2F4 *);  
void func_80094D20(f32, f32);
s32 func_800998FC(Vec3f*, Vec3f*, s32, s32, Vec3f*, Vec3f*);
s16 func_8009ACDC(s16 *);
f32 func_8009BC2C(f32*, f32, f32, f32, f32);
f32 func_8009BD38(f32*, f32, f32, f32, f32);
void func_8009D418(Gfx**, u16*, u32, u32, f32, f32, f32, f32);
void func_8009D994(Gfx**, u16*, u32, u32, f32, f32, f32, f32);
void func_8009F574(Gfx **, s32, s32, s32, s32, u8, u8, u8, u8);
void func_8009F6CC(Vec3f*, f32, f32, f32);
f32 func_8009F768(f32);
void func_8009FC0C(s32, s32, s32);
void func_8009FEA0(s32, s32, s32);
void func_800A1200(s32, s32, f32, f32, char*);
void func_800A18B0(void);
void func_800A1980(void);
s32 func_800A1B6C(void);
void func_800A1C14(Gfx **);
void func_800A1E68(Gfx **);
void func_800A1F44(void);
void func_800A1FB0(Gfx **, u8 , u8);
void func_800A24DC(s32);
void func_800A26C0(void);
void func_800A25DC(void);
Object_2F4 *func_800A3608(s32 arg0);
s32 func_800A3690(Vec3f*, Vec3f*, s32, Vec3f*);
void func_800A3CA0(void);
s32 func_800A3F50(s32);
void func_800A5844(void);
void func_800A5D6C(void);
void func_800A6148(void);
void func_800A6CD0(UnkStruct_D_80178280 *, s32, s32);
void func_800B86CC(void);
void func_800B8DD0(Gfx**, s16);
void func_800BA490(void);
void func_800BA4F0(void);
s32 func_800BA7BC(u16*, s32);
void func_800BA808(u16*, s32);
void func_800BB5D0(void);
void func_800BC4B0(void);
void func_800B6F50(f32, f32, f32, f32, f32, f32);
void func_800B9358(void);
void func_800C1ED4(void);
void func_800C20B0(void);
void func_800C2190(void);
u16 func_800C2890(u16*);
s32 func_800C2F30(u16*, s32);
s32 func_800C3084(void);
s32 func_800C3194(void); 

void func_EFFA40_80187520(s32, void*);

void func_DF4260_801878D8(Object_408 *);
void func_DF4260_801988E0(void);
void func_DF4260_8018B0B4(Object_2F4 *);
void func_DF4260_8018BE7C(Object_408 *);    
void func_DF4260_8019250C(Object_2F4 *);    
void func_DF4260_80192CB0(Object_2F4 *);    
void func_DF4260_80192EA4(Object_2F4 *);
void func_DF4260_801933B4(Object_2F4 *);    
void func_DF4260_801935CC(Object_408 *);

void func_E08400_80188A40(Object_408 *);

void func_E16C50_80187754(Object_408 *);
void func_E16C50_801932AC(Object_408 *);
void func_E16C50_8019B1F0(Object_2F4 *);
void func_E16C50_8019B810(Object_2F4 *);
void func_E16C50_8019C200(Object_2F4 *);
void func_E16C50_8019D060(Object_2F4 *);
void func_E16C50_801AD688(Object_2F4 *);
void func_E16C50_801AE3AC(Object_2F4 *);
void func_E16C50_801AF9FC(Object_2F4 *);
void func_E16C50_801B10F8(Object_408 *);
void func_E16C50_801B6344(Object_2F4 *);
void func_E16C50_801B6E54(Object_2F4 *);
void func_E16C50_801B7AF0(Object_2F4 *);
void func_E16C50_801BA57C(Object_2F4 *);
void func_E16C50_801BB26C(Object_2F4 *);
void func_E16C50_801915A4(Object_2F4 *);
void func_E16C50_80191BB8(Object_2F4 *);

void func_E51970_80193CA4(Object_408 *);

void func_E6A810_80189B80(Object_2F4 *);
void func_E6A810_8018ADC4(Object_2F4 *);
void func_E6A810_8018B96C(Object_2F4 *);
void func_E6A810_8018BFB0(Object_2F4 *);
void func_E6A810_8018E3CC(Object_2F4 *);
void func_E6A810_8018E5E8(Object_2F4 *);
void func_E6A810_8018EFF0(Object_4C *); 
void func_E6A810_8018F0D8(Object_80 *); 
void func_E6A810_8018FA48(Object_408 *);
void func_E6A810_80199F8C(Object_2F4 *);
void func_E6A810_801A3E70(Object_2F4 *);
void func_E6A810_801A4660(Object_2F4 *);
void func_E6A810_801A4AF8(Object_2F4 *);
void func_E6A810_801A5E2C(Object_2F4 *);
void func_E6A810_801A6134(Object_2F4 *);
void func_E6A810_801A65E0(Object_80 *); 
void func_E6A810_801A7D98(Object_2F4 *);
s32 func_E6A810_801B6AEC(f32, f32, f32);
void func_E6A810_801B6E20(f32, f32, f32 *, f32 *, f32 *); 

void func_E9F1D0_80197CC4(Object_408 *);    
void func_E9F1D0_8018D16C(Object_408 *); 

void func_EBFBE0_801877F0(void);
 s32 func_EBFBE0_80187ABC(void);
void func_EBFBE0_80187B00(void);
void func_EBFBE0_80187E28(void);
void func_EBFBE0_801888E8(void);
void func_EBFBE0_8018994C(void);
void func_EBFBE0_8018A644(void);
void func_EBFBE0_8018ACEC(void);
void func_EBFBE0_8018B5C4(void);
void func_EBFBE0_8018C644(void);
void func_EBFBE0_80190E64(void);
void func_EBFBE0_8019111C(void);
void func_EBFBE0_80187CA8(void);
void func_EBFBE0_80188010(void);
void func_EBFBE0_80189208(void);
void func_EBFBE0_8018A2F8(void);
void func_EBFBE0_8018A990(void);
void func_EBFBE0_8018B038(void);
void func_EBFBE0_8018C114(void);
void func_EBFBE0_8018CB90(void);
void func_EBFBE0_8018F680(void);
void func_EBFBE0_8018F77C(void);
void func_EBFBE0_8018F85C(void);
void func_EBFBE0_8018F8E4(void);
void func_EBFBE0_8018FC14(void);
void func_EBFBE0_8018FD08(void);
void func_EBFBE0_8018FF74(void);
void func_EBFBE0_801906A0(void);
void func_EBFBE0_80190C9C(void);
void func_EBFBE0_801918FC(void);
void func_EBFBE0_8018D2B8(s32);
void func_EBFBE0_8018EA78(s32);
void func_EBFBE0_80191674(f32, f32, f32, f32*, f32*, f32*);
void func_EBFBE0_8019E8D0(void);

void func_EF0260_8018A96C(void);
void func_EF0260_8018AAC4(void);

void func_E08400_80187B08(Object_2F4 *, s32);
void func_E9F1D0_801888F4(Object_2F4 *, s32);
void func_E6A810_8018B720(Object_2F4 *, s32);
void func_E51970_80198594(Object_408 *, s32);
void func_E6A810_801990DC(Object_408 *, s32);
void func_E6A810_8018E3B0(Object_2F4 *);
#endif
