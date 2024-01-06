#include "global.h"

void func_E16C50_801AC918(Object_8C*);
void func_E16C50_801AD6C0(Object_2F4*);
void func_E16C50_801AE168(Object_2F4*);
void func_E16C50_801AE3D8(Object_2F4*);
void func_E16C50_801AEB44(Object_2F4*);
void func_E16C50_801AFA5C(Object_2F4*);
void func_E16C50_801B099C(Object_2F4*);
void func_E16C50_801B0B60(Object_2F4*);
void func_E16C50_801B0EC0(Object_2F4*);
void func_E16C50_801B504C(Object_2F4*);
void func_E16C50_801B50E8(Object_2F4*);
void func_E16C50_801B619C(Object_2F4*);
void func_E16C50_801B638C(Object_2F4*);
void func_E16C50_801B6FF8(Object_2F4*);
void func_E16C50_801B7A24(Object_2F4*);
void func_E16C50_801B7C78(Object_2F4*);
void func_E16C50_801B90DC(Object_2F4*);
void func_E16C50_801B91A4(Object_2F4*);
void func_E16C50_801BA108(Object_2F4*);
void func_E16C50_801BA26C(Object_2F4*);
void func_E16C50_801BA4E4(Object_2F4*);
void func_E16C50_801BA6A4(Object_2F4*);
void func_E16C50_801BAD7C(Object_2F4*);
void func_E16C50_801BADF8(Object_2F4*);
void func_E16C50_801BB204(Object_2F4*);
void func_E16C50_801BB79C(Object_2F4*);
void func_E16C50_801BC930(Object_2F4*);
void func_E16C50_801BC9A0(Object_2F4*);
void func_E16C50_801BD264(Object_2F4*);
void func_E16C50_801BD54C(Object_2F4*);
void func_E16C50_801BDE6C(Object_2F4*);
void func_E16C50_801BE1FC(Object_80*);
void func_E16C50_801BE3F8(Object_2F4*);
void func_E16C50_801BEB1C(Object_2F4*);
void func_E16C50_801BEC68(Object_2F4*);
void func_E16C50_801BEC74(Object_2F4*);

f32 D_E16C50_801BFB60 = 0.0f;
s32 D_E16C50_801BFB64[11] = {
    0, 0x1E, 0x1B, 0x18, 0x15, 0x12, 0xF, 0xC, 9, 6, 3,
};
u8 D_E16C50_801BFB90[12] = {
    0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
};
u32 D_E16C50_801BFB9C[3] = { 0x06015FF0, 0x06022110, 0x06015DD0 };
f32 D_E16C50_801BFBA8[2] = { 40.0f, -40.0f };
f32 D_E16C50_801BFBB0[3] = { 20.0f, 10.0f, 15.0f };
f32 D_E16C50_801BFBBC[3] = { 8.0f, 27.0f, 42.0f };
f32 D_E16C50_801BFBC8[3] = { 15.0f, 6.0f, 7.0f };
f32 D_E16C50_801BFBD4[3] = { 358.0f, 12.0f, 352.0f };
f32 D_E16C50_801BFBE0[3][4] = {
    { 1.3f, 0.1f, 1.0f, 777.0f },
    { 0.7f, 0.5f, 5.0f, 777.0f },
    { 1.0f, 0.2f, 2.0f, 777.0f },
};
f32 D_E16C50_801BFC10[3][4] = {
    { 0.6f, 0.1f, 1.0f, 777.0f },
    { 1.5f, 0.5f, 5.0f, 777.0f },
    { 1.0f, 0.2f, 2.0f, 777.0f },
};
f32 D_E16C50_801BFC40[3][4] = {
    { 1.3f, 0.1f, 1.0f, 777.0f },
    { 0.7f, 0.5f, 5.0f, 777.0f },
    { 1.0f, 0.2f, 2.0f, 777.0f },
};
s32 D_E16C50_801BFC70[3] = { 0x12, 0x16, 0x2D };
f32 D_E16C50_801BFC7C[3] = { 20.0f, 10.0f, 0.0f };
f32 D_E16C50_801BFC88[3] = { 10.0f, 320.0f, 30.0f };
Vec3f D_E16C50_801BFC94[6][4] = {
    { { 1.0f, 1.0f, 1.0f }, { 0.9f, 0.9f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 0.9f, 0.9f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 0.9f, 0.9f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 0.9f, 1.0f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 0.9f, 1.0f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 1.0f, 0.8f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
};
s32 D_E16C50_801BFDB4[6][4] = {
    { 1, 5, 0xF, 0x186A0 },    { 1, 5, 0xF, 0x186A0 },    { 1, 5, 0xF, 0x186A0 },
    { 1, 0xA, 0x14, 0x186A0 }, { 1, 0xA, 0x14, 0x186A0 }, { 1, 0xA, 0x14, 0x186A0 },
};
s32 D_E16C50_801BFE14 = 0;
Vec3f D_E16C50_801BFE18[6][4] = {
    { { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f } },
    { { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f } },
    { { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f } },
    { { 0.2f, 0.2f, 0.2f }, { 0.3f, 0.3f, 0.3f }, { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f } },
    { { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f } },
    { { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f } },
};
Vec3f D_E16C50_801BFF38[6][4] = {
    { { 1.0f, 1.0f, 1.0f }, { 5.0f, 5.0f, 5.0f }, { 10.0f, 10.0f, 10.0f }, { 5.0f, 5.0f, 5.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 5.0f, 5.0f, 5.0f }, { 10.0f, 10.0f, 10.0f }, { 5.0f, 5.0f, 5.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 3.0f, 3.0f, 3.0f }, { 2.0f, 2.0f, 2.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 3.0f, 1.0f, 3.0f }, { 2.0f, 1.0f, 2.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 3.0f, 1.0f, 3.0f }, { 2.0f, 1.0f, 2.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 1.0f, 4.0f, 3.0f }, { 1.0f, 3.0f, 2.0f }, { 1.0f, 1.0f, 1.0f } },
};
f32 D_E16C50_801C0058 = 191.0f;
f32 D_E16C50_801C005C = 63.0f;
f32 D_E16C50_801C0060[14] = {
    50.0f, 8.0f, 50.0f, 8.0f, 10.0f, 1.0f, 20.0f, 2.0f, 20.0f, 2.0f, 20.0f, 2.0f, 50.0f, 2.0f,
};
Vec3f D_E16C50_801C0098[2] = {
    { 370.0f, -53.0f, 1085.0f },
    { -370.0f, -53.0f, 1085.0f },
};
f32 D_E16C50_801C00B0[3][4] = {
    { 1.0f, 1.2f, 0.8f, 1.0f },
    { 1.0f, 1.2f, 0.9f, 1.0f },
    { 1.0f, 0.7f, 1.4f, 1.0f },
};
s32 D_E16C50_801C00E0[4] = { 1, 5, 8, 0x28 };
f32 D_E16C50_801C00F0[3][4] = {
    { 0.3f, 0.3f, 0.3f, 0.3f },
    { 0.3f, 0.3f, 0.3f, 0.3f },
    { 0.5f, 0.5f, 0.5f, 0.5f },
};
f32 D_E16C50_801C0120[3][4] = {
    { 1.0f, 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f, 1.0f },
    { 2.0f, 2.0f, 2.0f, 2.0f },
};
f32 D_E16C50_801C0150[4][4] = {
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, -25.5f, 0.0f, 0.0f },
    { -25.5f, 25.5f, -25.5f, 0.0f },
    { 25.5f, 0.0f, 25.5f, 0.0f },
};
f32 D_E16C50_801C0190[5] = {
    0.0f, -30.0f, 30.0f, -30.0f, 30.0f,
};
Vec3f D_E16C50_801C01A4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801C01B0 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801C01BC = { 340.0f, 600.0f, 1480.0f };
Vec3f D_E16C50_801C01C8 = { -640.0f, 380.0f, 1520.0f };
Vec3f D_E16C50_801C01D4 = { 760.0f, 340.0f, 1560.0f };
Vec3f D_E16C50_801C01E0 = { 130.0f, 350.0f, 130.0f };
Vec3f D_E16C50_801C01EC = { -130.0f, 350.0f, 130.0f };
f32 D_E16C50_801C01F8[11] = {
    400.0f, 430.0f, 460.0f, 490.0f, 520.0f, 550.0f, 580.0f, 610.0f, 640.0f, 670.0f, 700.0f,
};
f32 D_E16C50_801C0224[11] = {
    6.0f, 6.0f, 8.0f, 8.0f, 8.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f,
};
Vec3f D_E16C50_801C0250 = { 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801C025C[2] = { 120.0f, 0.0f };
s32 D_E16C50_801C0264[19] = {
    0, 0, 3, 4, 0, 5, 6, 7, 1, 2, 0, 0, 0, 0, 0, 0, 8, 9, 0,
};
Vec3f D_E16C50_801C02B0 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801C02BC = { 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801C02C8[2] = { 255.0f, 68.0f };
s32 D_E16C50_801C02D0[2] = { 0x46, 0x64 };
Vec3f D_E16C50_801C02D8 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801C02E4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801C02F0 = { 108.0f, 0.0f, 24.0f };
Vec3f D_E16C50_801C02FC = { 102.0f, 14.0f, -21.0f };
Vec3f D_E16C50_801C0308 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801C0314 = { 0.0f, 0.0f, 50.0f };
Vec3f D_E16C50_801C0320 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801C032C = { -27.0f, 7.0f, 5.0f };
Vec3f D_E16C50_801C0338 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801C0344[4] = {
    { -6.4f, -4.6f, -7.8f },
    { 6.4f, 4.6f, 7.8f },
    { -5.9f, -7.8f, -7.0f },
    { 5.9f, 7.8f, 7.0f },
};
Vec3f D_E16C50_801C0374[17] = {
    { 1.0f, 1.0f, 1.0f },    { 1.3f, 0.8f, 1.3f },    { 1.0f, 1.2f, 1.0f },    { 1.3f, 0.8f, 1.3f },
    { 1.0f, 1.0f, 1.0f },    { 1.3f, 1.0f, 1.3f },    { 1.0f, 1.0f, 1.0f },    { 1.3f, 1.0f, 1.3f },
    { 1.0f, 1.0f, 1.0f },    { 0.85f, 0.95f, 0.85f }, { 0.85f, 0.95f, 0.85f }, { 0.85f, 0.95f, 0.85f },
    { 1.0f, 1.05f, 1.0f },   { 0.85f, 0.95f, 0.85f }, { 0.85f, 0.95f, 0.85f }, { 0.85f, 0.95f, 0.85f },
    { 0.85f, 0.95f, 0.85f },
};
s32 D_E16C50_801C0440[24] = {
    0, 0x1E, 0x3C, 0x5A, 0, 0, 0, 0, 0, 0xF, 0x1E, 0x2D, 0, 0, 0, 0, 0, 0xF, 0x1E, 0x2D, 0x3C, 0x4B, 0x5A, 0x69,
};
s32 D_E16C50_801C04A0[6] = {
    0xF, -0xF, 0xA, -0xA, 7, -7,
};
Vec3f D_E16C50_801C04B8 = { 0.0f, 0.0f, 0.0f };
s32 D_E16C50_801C04C4[9] = {
    1, 5, 9, 0xE, 0xF, 0x10, 0x11, 0, 0xD,
};
Vec3f D_E16C50_801C04E8 = { 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801C04F4[4] = {
    700.0f,
    300.0f,
    600.0f,
    400.0f,
};
Vec3f D_E16C50_801C0504[50] = {
    { 416.0f, 440.0f, -4182.0f }, { 437.0f, 440.0f, -4178.0f }, { 510.0f, 420.0f, -4156.0f },
    { 168.0f, 361.0f, -4168.0f }, { 434.0f, 440.0f, -4162.0f }, { 465.0f, 465.0f, -4146.0f },
    { 464.0f, 493.0f, -4124.0f }, { 426.0f, 395.0f, -4136.0f }, { 457.0f, 440.0f, -4112.0f },
    { 480.0f, 487.0f, -4110.0f }, { 454.0f, 440.0f, -4256.0f }, { 179.0f, 507.0f, -4272.0f },
    { 442.0f, 392.0f, -4242.0f }, { 450.0f, 481.0f, -4248.0f }, { 474.0f, 420.0f, -4232.0f },
    { 376.0f, 440.0f, -4196.0f }, { 463.0f, 507.0f, -4190.0f }, { 467.0f, 424.0f, -4208.0f },
    { 394.0f, 404.0f, -4186.0f }, { 256.0f, 440.0f, -3680.0f }, { 243.0f, 515.0f, -3648.0f },
    { 277.0f, 390.0f, -3662.0f }, { 234.0f, 457.0f, -3664.0f }, { 561.0f, 440.0f, -4332.0f },
    { 550.0f, 514.0f, -4346.0f }, { 568.0f, 404.0f, -4304.0f }, { 580.0f, 545.0f, -4350.0f },
    { 552.0f, 382.0f, -4292.0f }, { 528.0f, 462.0f, -4322.0f }, { 558.0f, 440.0f, -4294.0f },
    { 396.0f, 440.0f, -4284.0f }, { 391.0f, 363.0f, -4254.0f }, { 379.0f, 501.0f, -4254.0f },
    { 428.0f, 440.0f, -4246.0f }, { 374.0f, 440.0f, -4282.0f }, { 373.0f, 342.0f, -4290.0f },
    { 353.0f, 570.0f, -4266.0f }, { 359.0f, 440.0f, -4232.0f }, { 399.0f, 216.0f, -4246.0f },
    { 406.0f, 251.0f, -4222.0f }, { 380.0f, 189.0f, -4248.0f }, { 370.0f, 278.0f, -4214.0f },
    { 383.0f, 237.0f, -4266.0f }, { 360.0f, 299.0f, -4320.0f }, { 359.0f, 266.0f, -4280.0f },
    { 354.0f, 211.0f, -4256.0f }, { 391.0f, 238.0f, -4192.0f }, { 340.0f, 294.0f, -4216.0f },
    { 423.0f, 242.0f, -4200.0f }, { 429.0f, 311.0f, -4138.0f },
};
f32 D_E16C50_801C075C[51] = {
    28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 28.0f,  28.0f,  28.0f,  28.0f,  28.0f, 28.0f, 28.0f,
    28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 320.0f, 320.0f, 320.0f, 320.0f, 40.0f, 40.0f, 40.0f,
    40.0f, 40.0f, 40.0f, 40.0f, 28.0f, 28.0f, 28.0f,  28.0f,  28.0f,  28.0f,  28.0f, 28.0f, 28.0f,
    28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 28.0f,  28.0f,  28.0f,  10.0f,  28.0f, 28.0f,
};
f32 D_E16C50_801C0828[51] = {
    210.0f, 250.0f, 170.0f, 200.0f, 225.0f, 240.0f, 220.0f, 180.0f, 210.0f, 230.0f, 355.0f, 349.0f, 357.0f,
    12.0f,  357.0f, 65.0f,  256.0f, 250.0f, 88.0f,  0.0f,   0.0f,   0.0f,   9.0f,   14.0f,  35.0f,  40.0f,
    5.0f,   92.0f,  56.0f,  71.0f,  355.0f, 326.0f, 30.0f,  5.0f,   30.0f,  30.0f,  60.0f,  69.0f,  1.0f,
    346.0f, 30.0f,  97.0f,  30.0f,  30.0f,  30.0f,  30.0f,  162.0f, 98.0f,  10.0f,  213.0f, 30.0f,
};
Vec3f D_E16C50_801C08F4 = { 0.0f, 0.0f, 0.0f };

typedef struct {
    char unk_00[0x148];
} UnkStruct_1C4308;

PosRot* D_E16C50_801C27C0;
PosRot D_E16C50_801C27C8[4][50];
Vtx D_E16C50_801C3A88[2][2][28];
f32 D_E16C50_801C4188;
s32 D_E16C50_801C4190[10];
f32 D_E16C50_801C41B8[30];
s32 D_E16C50_801C4230[28];
s32 D_E16C50_801C42A0[25];
UnkStruct_1C4308 D_E16C50_801C4308;
s32 D_E16C50_801C4450;
s32 D_E16C50_801C4454;
f32 D_E16C50_801C4458;
f32 D_E16C50_801C445C;

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A8E30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A92EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A9374.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A9448.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A94EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A958C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A95C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A96DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A9728.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A9824.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A99D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A9C98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A9DE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801A9ED0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AA20C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AA4BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AA8E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AACF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AB9B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801ABA40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AC09C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AC18C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AC274.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AC7C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AC8A8.s")

// OBJ_8C_366 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AC918.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801ACBB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801ACE50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AD328.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AD598.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AD688.s")

// OBJ_2F4_255 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AD6C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801ADF7C.s")

// OBJ_2F4_255 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AE168.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AE3AC.s")

// OBJ_2F4_256 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AE3D8.s")

// OBJ_2F4_256 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AEB44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AF9FC.s")

// OBJ_2F4_257 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801AFA5C.s")

// OBJ_2F4_257 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B099C.s")

// OBJ_2F4_258 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B0B60.s")

// OBJ_2F4_258 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B0EC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B0F88.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B0FCC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B1008.s")

// OBJ_BOSS_AQ init
void func_E16C50_801B10F8(Boss* bossAQ);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B10F8.s")

// OBJ_BOSS_AQ action
void func_E16C50_801B134C(Boss* bossAQ);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B134C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B42AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B49DC.s")

// OBJ_BOSS_AQ draw
void func_E16C50_801B4D84(Boss* bossAQ);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B4D84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B4DDC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B4E94.s")

// OBJ_2F4_261 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B504C.s")

// OBJ_2F4_261 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B50E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B5C18.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B5F68.s")

// OBJ_2F4_259 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B619C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B6344.s")

// OBJ_2F4_259 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B638C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B6E54.s")

// OBJ_2F4_262 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B6FF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B76EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B7754.s")

// OBJ_2F4_262 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B7A24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B7AF0.s")

// OBJ_2F4_260 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B7C78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B8C50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B8D7C.s")

// OBJ_2F4_260 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B90DC.s")

// OBJ_2F4_263 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B91A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801B9DB0.s")

// OBJ_2F4_263 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BA108.s")

// OBJ_2F4_264 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BA26C.s")

// OBJ_2F4_264 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BA4E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BA57C.s")

// OBJ_2F4_265 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BA6A4.s")

// OBJ_2F4_265 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BAD7C.s")

// OBJ_2F4_266 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BADF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BB0C4.s")

// OBJ_2F4_266 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BB204.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BB26C.s")

// OBJ_2F4_267 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BB79C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BC530.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BC91C.s")

// OBJ_2F4_267 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BC930.s")

// OBJ_2F4_269 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BC9A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BD17C.s")

// OBJ_2F4_269 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BD264.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BD3B0.s")

// OBJ_2F4_268 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BD54C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BDDFC.s")

// OBJ_2F4_268 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BDE6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BDF14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BE034.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BE0F0.s")

// OBJ_80_126 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BE1FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BE274.s")

// OBJ_2F4_270 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BE3F8.s")

// OBJ_2F4_270 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BEB1C.s")

// OBJ_BOSS_301 action
void func_E16C50_801BEC50(Boss* boss301) {
}

// OBJ_BOSS_301 draw
void func_E16C50_801BEC5C(Boss* boss301) {
}

// OBJ_2F4_188 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BEC68.s")

// OBJ_2F4_188 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BEC74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BEC80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/func_E16C50_801BEC8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_aq/D_E16C50_801C1A30.s")
