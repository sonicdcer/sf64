#ifndef FUNCTIONS_H
#define FUNCTIONS_H

f32 func_80004E20(f32 arg0, f32 arg1);
void func_80004E4C(void);
f32 func_80004EB0(void);
void func_80004FC8(s32 arg0, s32 arg1, s32 arg2);
f32 func_80004FE8(void);
f32 func_80005100(f32 arg0, f32 arg1);
f32 func_80005320(f32 arg0, f32 arg1);
f32 func_800055DC(f32 arg0, s32 arg1);
void func_80005604(s32* arg0, s32* arg1, s32 arg2, s32 arg3, s32 arg4);

void func_80005680(Matrix*, Matrix*);
void func_80005708(Matrix** mtx);
void func_80005740(Matrix** mtx);
void func_80005B00(Matrix*, f32, f32, f32, u8);
void func_80005C34(Matrix*, f32, f32, f32, s32);
void func_80006EB8(Gfx**);
void func_80006F20(void);

void func_800070C8(s64);

s32 func_800071FC(s32*);
s32 func_800072E0(s32*);

void func_80007D58(void*);

void func_80008018(void);

void func_800182F4(s32);
void func_80019218(u32, f32*, u8, f32*, f32*, s8*);
void func_8001A838(u32 arg0);
void func_8001AF40(s32 arg0);
void func_8001DC6C(s32, s32);

s32 func_8001EF10(void);

f32 func_8001FBE8(f32);

void func_800227A0(s32, OSMesgQueue*, OSMesg*, s32);

s32 func_80022B60(void);

s64 __ull_div(s64, s64);
s64 __ll_mul(s64, s64);
s64 __ll_rshift(s64, s64);

void __osSiCreateAccessQueue(void);

OSMesgQueue* osPiGetCmdQueue(void);

s32 func_8002DE78(void*, s32, s32); // Not real signature

void func_80084688(s32, s32);
void func_800857DC(f32, f32, f32, f32);
void func_80085890(f32, f32, f32, f32);
void func_80086664(f32, f32);
void func_8008B5B0(f32 x, f32 y);
s32 func_8008B774(void);
void func_8008BD00(u8*, s32, s32, u8);
void func_8008C390(f32, f32, f32, s32);
void func_8008C5C8(f32, f32, f32, s32);
void func_8008C6F4(s32, s32);
s32 func_8008BCBC(s32 arg0);
void func_8008D0DC(f32, f32, f32, f32, f32);
f32 func_8009BC2C(f32*, f32, f32, f32, f32);
void func_8009D418(Gfx**, void*, u32, u32, f32, f32, f32, f32);
void func_8009D994(Gfx**, void*, u32, u32, f32, f32, f32, f32);
void func_8009FC0C(s32, s32, s32);
void func_8009FEA0(s32, s32, s32);
void func_800A1200(s32, s32, f32, f32, char*);
void func_800A5D6C(void);
void func_800B8DD0(Gfx**, s16);
void func_800BA490(void);
void func_800BA4F0(void);
void func_800BB5D0(void);
void func_800B6F50(f32, f32, f32, f32, f32, f32);

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
