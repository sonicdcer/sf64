#include "global.h"

void func_E16C50_801904CC(Object_2F4*);
void func_E16C50_80190A00(Object_2F4*);
void func_E16C50_80191010(Object_2F4*);
void func_E16C50_801914C4(Object_2F4*);
void func_E16C50_80191680(Object_2F4*);
void func_E16C50_80191B4C(Object_2F4*);
void func_E16C50_80191BC4(Object_2F4*);
void func_E16C50_80191DB0(Object_2F4*);
void func_E16C50_80191FFC(Object_2F4*);
void func_E16C50_80192094(Object_2F4*);
void func_E16C50_80192834(Object_2F4*);
void func_E16C50_80192C18(Object_2F4*);
void func_E16C50_80192E64(Object_2F4*);
void func_E16C50_80193240(Object_2F4*);
void func_E16C50_8019969C(Object_2F4*);
void func_E16C50_8019983C(Object_2F4*);
void func_E16C50_80199A28(Object_2F4*);
void func_E16C50_80199E24(Object_2F4*);
void func_E16C50_80199F10(Object_2F4*);
void func_E16C50_8019A1FC(Object_2F4*);
void func_E16C50_8019A5D4(Object_2F4*);
void func_E16C50_8019ACCC(Object_2F4*);
void func_E16C50_8019B548(Object_2F4*);
void func_E16C50_8019B7DC(Object_2F4*);
void func_E16C50_8019B854(Object_2F4*);
void func_E16C50_8019BDE0(Object_2F4*);
void func_E16C50_8019BE48(Object_2F4*);
void func_E16C50_8019C1CC(Object_2F4*);
void func_E16C50_8019C454(Object_2F4*);
void func_E16C50_8019C83C(Object_2F4*);
void func_E16C50_8019CBEC(Object_2F4*);
void func_E16C50_8019CE58(Object_2F4*);
void func_E16C50_8019D15C(Object_2F4*);
void func_E16C50_8019D3C4(Object_2F4*);

Vec3f D_E16C50_801BF560 = { 0.0f, 0.0f, 0.0f };
s16 D_E16C50_801BF56C[20] = {
    0, 190, 180, 170, 160, 150, 140, 130, 120, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10,
};
u8 D_E16C50_801BF594[20] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2 };
Gfx* D_E16C50_801BF5A8[3] = { (Gfx*) 0x060012A0, (Gfx*) 0x060239E0, (Gfx*) 0x06023730 };
Vec3f D_E16C50_801BF5B4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF5C0 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF5CC = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF5D8 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF5E4 = { 0.0f, 0.0f, 0.0f };
s32 D_E16C50_801BF5F0[6] = { 20, 40, 20, 20, 10, 10 };
f32 D_E16C50_801BF608[6] = { -45.0f, 0.0f, -45.0f, 0.0f, -45.0f, 0.0f };
Vec3f D_E16C50_801BF620 = { 0.0f, 0.0f, 40.0f };
Vec3f D_E16C50_801BF62C = { 96.0f, 199.0f, -9.0f };
Vec3f D_E16C50_801BF638 = { 50.0f, 150.0f, -20.0f };
Vec3f D_E16C50_801BF644 = { 50.0f, 150.0f, 20.0f };
Vec3f D_E16C50_801BF650 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF65C = { 210.0f, -50.0f, 0.0f };
Vec3f D_E16C50_801BF668 = { 50.0f, 70.0f, 0.0f };
Vec3f D_E16C50_801BF674 = { 166.0f, -174.0f, -25.0f };
Vec3f D_E16C50_801BF680 = { 166.0f, -174.0f, 25.0f };
Vec3f D_E16C50_801BF68C = { 50.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF698 = { 150.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF6A4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF6B0 = { 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF6BC[2] = { -600.0f, -3400.0f };
f32 D_E16C50_801BF6C4[2] = { 330.0f, 30.0f };
f32 D_E16C50_801BF6CC[2] = { 250.0f, -250.0f };
f32 D_E16C50_801BF6D4[2] = { 330.0f, 30.0f };
Vec3f D_E16C50_801BF6DC = { 615.0f, 532.0f, -80.0f };
Vec3f D_E16C50_801BF6E8 = { -615.0f, 532.0f, -80.0f };
Vec3f D_E16C50_801BF6F4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF700 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF70C = { 0.0f, 0.0f, 40.0f };
Vec3f D_E16C50_801BF718 = { 0.0f, 0.0f, 50.0f };
Vec3f D_E16C50_801BF724 = { 0.0f, 0.0f, 20.0f };
Vec3f D_E16C50_801BF730 = { 0.0f, 0.0f, 100.0f };
f32 D_E16C50_801BF73C[2] = { -80.0f, 80.0f };
Vec3f D_E16C50_801BF744[3] = { { 0.0f, 50.0f, -200.0f }, { 0.0f, 50.0f, 200.0f }, { 0.0f, 50.0f, 600.0f } };
Vec3f D_E16C50_801BF768[3] = { { 0.0f, 300.0f, 0.0f }, { 0.0f, 300.0f, -200.0f }, { 0.0f, 300.0f, 300.0f } };
s32 D_E16C50_801BF78C[30] = {
    0, 7, 7, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 4, 7, 0, 0, 0, 0, 327, 324, 0, 322, 327, 0, 324, 324, 0, 336, 0,
};
f32 D_E16C50_801BF804[8] = { 0.0f, 0.0f, 270.0f, 90.0f, 0.0f, 180.0f, 400.0f, 400.0f };
s32 D_E16C50_801BF824[10] = { 1, 5, 9, 14, 15, 16, 17, 0, 13, 1000 };
Vec3f D_E16C50_801BF84C[6] = {
    { 5.0f, -10.0f, 0.0f },  { 10.0f, 0.0f, 0.0f },  { 5.0f, 10.0f, 0.0f },
    { -5.0f, -10.0f, 0.0f }, { -10.0f, 0.0f, 0.0f }, { -5.0f, 10.0f, 0.0f },
};
Vec3f D_E16C50_801BF894 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF8A0 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF8AC = { 230.0f, -50.0f, 0.0f };
Vec3f D_E16C50_801BF8B8 = { 230.0f, -250.0f, 0.0f };
f32 D_E16C50_801BF8C4[2] = { 46.0f, 314.0f };
f32 D_E16C50_801BF8CC[2] = { 23.0f, 337.0f };

// extern Vec3f D_E16C50_801BF560;
// extern s16 D_E16C50_801BF56C[20];
// extern u8 D_E16C50_801BF594[20];
// extern Gfx* D_E16C50_801BF5A8[3];
// extern Vec3f D_E16C50_801BF5B4;
// extern Vec3f D_E16C50_801BF5C0;
// extern Vec3f D_E16C50_801BF5CC;
// extern Vec3f D_E16C50_801BF5D8;
// extern Vec3f D_E16C50_801BF5E4;
// extern s32 D_E16C50_801BF5F0[6];
// extern f32 D_E16C50_801BF608[6];
// extern Vec3f D_E16C50_801BF620;
// extern Vec3f D_E16C50_801BF62C;
// extern Vec3f D_E16C50_801BF638;
// extern Vec3f D_E16C50_801BF644;
// extern Vec3f D_E16C50_801BF650;
// extern Vec3f D_E16C50_801BF65C;
// extern Vec3f D_E16C50_801BF668;
// extern Vec3f D_E16C50_801BF674;
// extern Vec3f D_E16C50_801BF680;
// extern Vec3f D_E16C50_801BF68C;
// extern Vec3f D_E16C50_801BF698;
// extern Vec3f D_E16C50_801BF6A4;
// extern Vec3f D_E16C50_801BF6B0;
// extern f32 D_E16C50_801BF6BC[2];
// extern f32 D_E16C50_801BF6C4[2];
// extern f32 D_E16C50_801BF6CC[2];
// extern f32 D_E16C50_801BF6D4[2];
// extern Vec3f D_E16C50_801BF6DC;
// extern Vec3f D_E16C50_801BF6E8;
// extern Vec3f D_E16C50_801BF6F4;
// extern Vec3f D_E16C50_801BF700;
// extern Vec3f D_E16C50_801BF70C;
// extern Vec3f D_E16C50_801BF718;
// extern Vec3f D_E16C50_801BF724;
// extern Vec3f D_E16C50_801BF730;
// extern f32 D_E16C50_801BF73C[2];
// extern Vec3f D_E16C50_801BF744[3];
// extern Vec3f D_E16C50_801BF768[3];
// extern s32 D_E16C50_801BF78C[30];
// extern f32 D_E16C50_801BF804[8];
// extern s32 D_E16C50_801BF824[10];
// extern Vec3f D_E16C50_801BF84C[6];
// extern Vec3f D_E16C50_801BF894;
// extern Vec3f D_E16C50_801BF8A0;
// extern Vec3f D_E16C50_801BF8AC;
// extern Vec3f D_E16C50_801BF8B8;
// extern f32 D_E16C50_801BF8C4[2];
// extern f32 D_E16C50_801BF8CC[2];

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8018FF50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80190028.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801900FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019019C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80190204.s")

// OBJ_2F4_235 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80190430.s")

// OBJ_2F4_235 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801904CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80190790.s")

// OBJ_2F4_236 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80190A00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80190B4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80190D0C.s")

// OBJ_2F4_236 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80190F08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80190F28.s")

// OBJ_2F4_238 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80191010.s")

// OBJ_2F4_238 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801914C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801915A4.s")

// OBJ_2F4_240 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80191680.s")

// OBJ_2F4_240 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80191B4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80191BB8.s")

// OBJ_2F4_241 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80191BC4.s")

// OBJ_2F4_241 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80191DB0.s")

// OBJ_2F4_242 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80191E94.s")

// OBJ_2F4_242 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80191FFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80192094.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801926F4.s")

// OBJ_2F4_243 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80192834.s")

// OBJ_2F4_243 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80192C18.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80192C84.s")

// OBJ_2F4_244 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80192E64.s")

// OBJ_2F4_244 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80193240.s")

// OBJ_408_307 init
void func_E16C50_801932AC(Object_408_307* boss307);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801932AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80193628.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801937D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80193908.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80193970.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80193A98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80193B08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80193C5C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80193CC8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80193D08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80194394.s")

// OBJ_408_307 draw
void func_E16C50_801949DC(Object_408_307* boss307);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801949DC.s")

// OBJ_408_307 action
void func_E16C50_80194A84(Object_408_307* boss307);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80194A84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801986FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801989FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80198BE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80198ECC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80198F3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019907C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019914C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801991D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80199394.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80199470.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019962C.s")

// OBJ_2F4_245 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019969C.s")

// OBJ_2F4_245 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019983C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801998E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_801999CC.s")

// OBJ_2F4_246 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80199A28.s")

// OBJ_2F4_246 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80199E24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80199E9C.s")

// OBJ_2F4_248 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_80199F10.s")

// OBJ_2F4_248 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019A1FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019A4E0.s")

// OBJ_2F4_249 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019A5D4.s")

// OBJ_2F4_249 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019ACCC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019B1F0.s")

// OBJ_2F4_250 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019B548.s")

// OBJ_2F4_250 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019B7DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019B810.s")

// OBJ_2F4_251 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019B854.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019BC78.s")

// OBJ_2F4_251 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019BDE0.s")

// OBJ_2F4_252 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019BE48.s")

// OBJ_2F4_252 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019C1CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019C200.s")

// OBJ_2F4_253 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019C454.s")

// OBJ_2F4_253 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019C83C.s")

// OBJ_2F4_254 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019CBEC.s")

// OBJ_2F4_254 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019CE58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019D060.s")

// OBJ_2F4_247 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019D15C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019D340.s")

// OBJ_2F4_247 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019D3C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019D428.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019D76C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/func_E16C50_8019E5F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E1F680/D_E16C50_801C0DB0.s")
