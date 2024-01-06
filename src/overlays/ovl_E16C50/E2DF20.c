#include "global.h"

typedef void (*BossSOfunc)(Object_408_302*);

void func_E16C50_8019EA7C(Object_2F4*);
void func_E16C50_8019F20C(Object_2F4*);
void func_E16C50_8019F7AC(Object_2F4*);
void func_E16C50_801A003C(Object_2F4*);
void func_E16C50_801A0120(Object_8C*);
void func_E16C50_801A0AF0(Object_8C*);

void func_E16C50_801A1F80(Object_408_302* bossSO);
void func_E16C50_801A23F4(Object_408_302* bossSO);
void func_E16C50_801A2C98(Object_408_302* bossSO);
void func_E16C50_801A3128(Object_408_302* bossSO);
void func_E16C50_801A3510(Object_408_302* bossSO);
void func_E16C50_801A4214(Object_408_302* bossSO);
void func_E16C50_801A4A34(Object_408_302* bossSO);
void func_E16C50_801A4EF8(Object_408_302* bossSO);
void func_E16C50_801A56B8(Object_408_302* bossSO);

f32 D_E16C50_801BF8E0[4] = { 10.0f, 6.0f, -6.0f, -10.0f };
Vec3f D_E16C50_801BF8F0[4] = {
    { 10.0f, 7.0f, 0.0f },
    { -10.0f, 7.0f, 0.0f },
    { 7.0f, 10.0f, 0.0f },
    { -7.0f, 10.0f, 0.0f },
};
Vec3f D_E16C50_801BF920 = { 0.0f, 0.0f, 0.0f };
u32 D_E16C50_801BF92C[6] = {
    0x0200B630, 0x0200A5A0, 0x02009510, 0x060084C0, 0x06008D40, 0x06007C40,
};
u32 D_E16C50_801BF944[6] = {
    0x0601B790, 0x0601B790, 0x0601A700, 0x06019670, 0x060185E0, 0x06017550,
};
Vec3f D_E16C50_801BF95C[3] = {
    { 0.0f, 30.0f, 480.0f },
    { -180.0f, 0.0f, 240.0f },
    { 180.0f, 0.0f, 240.0f },
};
BossSOfunc D_E16C50_801BF980[9] = {
    func_E16C50_801A1F80, func_E16C50_801A23F4, func_E16C50_801A2C98, func_E16C50_801A3128, func_E16C50_801A3510,
    func_E16C50_801A4214, func_E16C50_801A4A34, func_E16C50_801A4EF8, func_E16C50_801A56B8,
};
Vec3f D_E16C50_801BF9A4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF9B0 = { 10.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF9BC = { -10.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF9C8 = { 90.0f, 0.0f, -10.0f };
Vec3f D_E16C50_801BF9D4 = { 135.0f, 0.0f, -40.0f };
Vec3f D_E16C50_801BF9E0 = { 106.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF9EC = { 75.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF9F8 = { 85.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BFA04 = { 10.0f, 2.0f, 0.0f };
Vec3f D_E16C50_801BFA10 = { 10.0f, -2.0f, 0.0f };
Vec3f D_E16C50_801BFA1C = { 0.0f, 0.05f, 0.0f };
Vec3f D_E16C50_801BFA28 = { 0.0f, -0.05f, 0.0f };
Vec3f D_E16C50_801BFA34 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BFA40[9] = {
    { 150.0f, 300.0f, 100.0f },  { -100.0f, 200.0f, 100.0f }, { 50.0f, 100.0f, 100.0f },
    { 0.0f, 0.0f, -500.0f },     { 790.0f, 630.0f, -600.0f }, { 280.0f, 140.0f, 500.0f },
    { -210.0f, 110.0f, 500.0f }, { -460.0f, 260.0f, 500.0f }, { 380.0f, 290.0f, 500.0f },
};
Vec3f D_E16C50_801BFAAC[3] = {
    { -1.0f, -0.3f, -2.0f },
    { 121.0f, 209.0f, 183.0f },
    { 181.0f, 167.0f, 182.0f },
};
Vec3f D_E16C50_801BFAD0[3] = {
    { -89.0f, -90.0f, -88.0f },
    { -36.0f, -73.0f, -95.0f },
    { -91.0f, -83.0f, -91.0f },
};
Vec3f D_E16C50_801BFAF4[5] = {
    { 0.0f, 10.0f, 20.0f },   { 300.0f, 100.0f, 200.0f }, { 100.0f, 60.0f, -260.0f },
    { 80.0f, 100.0f, 80.0f }, { 262.0f, 285.0f, 252.0f },
};
Vec3f D_E16C50_801BFB30[4] = {
    { 0.0f, 50.0f, 500.0f },
    { -500.0f, 0.0f, 250.0f },
    { 500.0f, 0.0f, 250.0f },
    { 0.0f, 0.0f, 0.0f },
};

s32 D_E16C50_801C2740[10];
f32 D_E16C50_801C2768[14];
s32 D_E16C50_801C27A0[8]; // unused? part of previous?

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019E7F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019E8B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019E920.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019E9F4.s")

// OBJ_2F4_278 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019EA7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019EF30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019F038.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019F0B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019F194.s")

// OBJ_2F4_275, 276, 277 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019F20C.s")

// OBJ_2F4_275, 276, 277 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019F7AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019F99C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019FAA4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019FDE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019FEE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019FF44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_8019FFC0.s")

// OBJ_2F4_279 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A003C.s")

// OBJ_8C_392 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A0120.s")

// OBJ_8C_392 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A0AF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A0CEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A0D90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A0DF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A0FD4.s")

void func_E16C50_801A10F4(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A10F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A1CD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A1E14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A1EB0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A1F80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A239C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A23F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A2C3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A2C98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A30CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A3128.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A3468.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A3510.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A3C4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A4214.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A48B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A4A34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A4EC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A4EF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A56B8.s")

// OBJ_408_315 action
void func_E16C50_801A5B3C(Object_408_302* bossSO);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A5B3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A68A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A6BDC.s")

// OBJ_408_315 draw
void func_E16C50_801A71B8(Object_408_302* bossSO);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A71B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A7750.s")

void func_E16C50_801A7930(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A7930.s")

void func_E16C50_801A8BE8(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A8BE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E2DF20/func_E16C50_801A8DB8.s")
