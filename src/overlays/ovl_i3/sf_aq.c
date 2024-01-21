#include "prevent_bss_reordering.h"
#include "global.h"

void func_i3_801AC918(Effect*);
void func_i3_801AD6C0(Actor*);
void func_i3_801AE168(Actor*);
void func_i3_801AE3D8(Actor*);
void func_i3_801AEB44(Actor*);
void func_i3_801AFA5C(Actor*);
void func_i3_801B099C(Actor*);
void func_i3_801B0B60(Actor*);
void func_i3_801B0EC0(Actor*);
void func_i3_801B504C(Actor*);
void func_i3_801B50E8(Actor*);
void func_i3_801B619C(Actor*);
void func_i3_801B638C(Actor*);
void func_i3_801B6FF8(Actor*);
void func_i3_801B7A24(Actor*);
void func_i3_801B7C78(Actor*);
void func_i3_801B90DC(Actor*);
void func_i3_801B91A4(Actor*);
void func_i3_801BA108(Actor*);
void func_i3_801BA26C(Actor*);
void func_i3_801BA4E4(Actor*);
void func_i3_801BA6A4(Actor*);
void func_i3_801BAD7C(Actor*);
void func_i3_801BADF8(Actor*);
void func_i3_801BB204(Actor*);
void func_i3_801BB79C(Actor*);
void func_i3_801BC930(Actor*);
void func_i3_801BC9A0(Actor*);
void func_i3_801BD264(Actor*);
void func_i3_801BD54C(Actor*);
void func_i3_801BDE6C(Actor*);
void func_i3_801BE1FC(Object_80*);
void func_i3_801BE3F8(Actor*);
void func_i3_801BEB1C(Actor*);
void func_i3_801BEC68(Actor*);
void func_i3_801BEC74(Actor*);

typedef enum {
    /*  0 */ AQ_SWK_0,
    /*  1 */ AQ_SWK_1,
    /*  2 */ AQ_SWK_2,
    /*  3 */ AQ_SWK_3,
    /*  4 */ AQ_SWK_4,
    /*  5 */ AQ_SWK_5,
    /*  6 */ AQ_SWK_6,
    /*  7 */ AQ_SWK_7,
    /*  8 */ AQ_SWK_8,
    /*  9 */ AQ_SWK_9,
    /* 10 */ AQ_SWK_10,
    /* 11 */ AQ_SWK_11,
    /* 12 */ AQ_SWK_12,
    /* 13 */ AQ_SWK_13,
    /* 14 */ AQ_SWK_14,
    /* 15 */ AQ_SWK_15,
    /* 16 */ AQ_SWK_16,
    /* 17 */ AQ_SWK_17,
    /* 18 */ AQ_SWK_18,
    /* 19 */ AQ_SWK_19,
    /* 20 */ AQ_SWK_20,
    /* 21 */ AQ_SWK_21,
    /* 22 */ AQ_SWK_22,
    /* 23 */ AQ_SWK_23,
    /* 24 */ AQ_SWK_24,
    /* 25 */ AQ_SWK_25,
    /* 26 */ AQ_SWK_26,
    /* 27 */ AQ_SWK_27,
    /* 28 */ AQ_SWK_28,
    /* 29 */ AQ_SWK_29,
    /* 30 */ AQ_SWK_30,
    /* 31 */ AQ_SWK_31,
    /* 32 */ AQ_SWK_32,
    /* 33 */ AQ_SWK_33,
    /* 34 */ AQ_SWK_34,
    /* 35 */ AQ_SWK_35,
    /* 36 */ AQ_SWK_36,
    /* 37 */ AQ_SWK_37,
    /* 38 */ AQ_SWK_38,
    /* 39 */ AQ_SWK_39,
    /* 40 */ AQ_SWK_MAX,
} BossAQswork;

typedef enum {
    /*  0 */ AQ_FWK_0,
    /*  1 */ AQ_FWK_1,
    /*  2 */ AQ_FWK_2,
    /*  3 */ AQ_FWK_3,
    /*  4 */ AQ_FWK_4,
    /*  5 */ AQ_FWK_5,
    /*  6 */ AQ_FWK_6,
    /*  7 */ AQ_FWK_7,
    /*  8 */ AQ_FWK_8,
    /*  9 */ AQ_FWK_9,
    /* 10 */ AQ_FWK_10,
    /* 11 */ AQ_FWK_11,
    /* 12 */ AQ_FWK_12,
    /* 13 */ AQ_FWK_13,
    /* 14 */ AQ_FWK_14,
    /* 15 */ AQ_FWK_15,
    /* 16 */ AQ_FWK_16,
    /* 17 */ AQ_FWK_17,
    /* 18 */ AQ_FWK_18,
    /* 19 */ AQ_FWK_19,
    /* 20 */ AQ_FWK_20,
    /* 21 */ AQ_FWK_21,
    /* 22 */ AQ_FWK_22,
    /* 23 */ AQ_FWK_23,
    /* 24 */ AQ_FWK_24,
    /* 25 */ AQ_FWK_25,
    /* 26 */ AQ_FWK_26,
    /* 27 */ AQ_FWK_27,
    /* 28 */ AQ_FWK_28,
    /* 29 */ AQ_FWK_29,
    /* 30 */ AQ_FWK_30,
    /* 31 */ AQ_FWK_31,
    /* 32 */ AQ_FWK_32,
    /* 33 */ AQ_FWK_33,
    /* 34 */ AQ_FWK_34,
    /* 35 */ AQ_FWK_35,
    /* 36 */ AQ_FWK_36,
    /* 37 */ AQ_FWK_37,
    /* 38 */ AQ_FWK_38,
    /* 39 */ AQ_FWK_39,
    /* 40 */ AQ_FWK_40,
    /* 41 */ AQ_FWK_41,
    /* 42 */ AQ_FWK_42,
    /* 43 */ AQ_FWK_43,
    /* 44 */ AQ_FWK_44,
    /* 45 */ AQ_FWK_45,
    /* 46 */ AQ_FWK_46,
    /* 47 */ AQ_FWK_47,
    /* 48 */ AQ_FWK_48,
    /* 49 */ AQ_FWK_49,
    /* 50 */ AQ_FWK_MAX,
} BossAQfwork;

typedef enum {
    /*  0 */ AQ_VWK_0,
    /*  1 */ AQ_VWK_1,
    /*  2 */ AQ_VWK_2,
    /*  3 */ AQ_VWK_3,
    /*  4 */ AQ_VWK_4,
    /*  5 */ AQ_VWK_5,
    /*  6 */ AQ_VWK_6,
    /*  7 */ AQ_VWK_7,
    /*  8 */ AQ_VWK_8,
    /*  9 */ AQ_VWK_9,
    /* 10 */ AQ_VWK_10,
    /* 11 */ AQ_VWK_11,
    /* 12 */ AQ_VWK_12,
    /* 13 */ AQ_VWK_13,
    /* 14 */ AQ_VWK_14,
    /* 15 */ AQ_VWK_15,
    /* 16 */ AQ_VWK_16,
    /* 17 */ AQ_VWK_17,
    /* 18 */ AQ_VWK_18,
    /* 19 */ AQ_VWK_19,
    /* 20 */ AQ_VWK_20,
    /* 21 */ AQ_VWK_21,
    /* 22 */ AQ_VWK_22,
    /* 23 */ AQ_VWK_23,
    /* 24 */ AQ_VWK_24,
    /* 25 */ AQ_VWK_25,
    /* 26 */ AQ_VWK_26,
    /* 27 */ AQ_VWK_27,
    /* 28 */ AQ_VWK_28,
    /* 29 */ AQ_VWK_29,
    /* 30 */ AQ_VWK_30,
    /* 31 */ AQ_VWK_31,
    /* 32 */ AQ_VWK_32,
    /* 33 */ AQ_VWK_33,
    /* 34 */ AQ_VWK_34,
    /* 35 */ AQ_VWK_35,
    /* 36 */ AQ_VWK_36,
    /* 37 */ AQ_VWK_37,
    /* 38 */ AQ_VWK_38,
    /* 39 */ AQ_VWK_39,
    /* 40 */ AQ_VWK_40,
    /* 41 */ AQ_VWK_41,
    /* 42 */ AQ_VWK_42,
    /* 43 */ AQ_VWK_43,
    /* 44 */ AQ_VWK_44,
    /* 45 */ AQ_VWK_45,
    /* 46 */ AQ_VWK_46,
    /* 47 */ AQ_VWK_47,
    /* 48 */ AQ_VWK_48,
    /* 49 */ AQ_VWK_49,
    /* 50 */ AQ_VWK_MAX,
} BossAQvwork;

f32 D_i3_801BFB60 = 0.0f;
s32 D_i3_801BFB64[11] = {
    0, 30, 27, 24, 21, 18, 15, 12, 9, 6, 3,
};
u8 D_i3_801BFB90[12] = {
    0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
};
Gfx* D_i3_801BFB9C[3] = { D_6015FF0, D_6022110, D_6015DD0 };
f32 D_i3_801BFBA8[2] = { 40.0f, -40.0f };
f32 D_i3_801BFBB0[3] = { 20.0f, 10.0f, 15.0f };
f32 D_i3_801BFBBC[3] = { 8.0f, 27.0f, 42.0f };
f32 D_i3_801BFBC8[3] = { 15.0f, 6.0f, 7.0f };
f32 D_i3_801BFBD4[3] = { 358.0f, 12.0f, 352.0f };
f32 D_i3_801BFBE0[3][4] = {
    { 1.3f, 0.1f, 1.0f, 777.0f },
    { 0.7f, 0.5f, 5.0f, 777.0f },
    { 1.0f, 0.2f, 2.0f, 777.0f },
};
f32 D_i3_801BFC10[3][4] = {
    { 0.6f, 0.1f, 1.0f, 777.0f },
    { 1.5f, 0.5f, 5.0f, 777.0f },
    { 1.0f, 0.2f, 2.0f, 777.0f },
};
f32 D_i3_801BFC40[3][4] = {
    { 1.3f, 0.1f, 1.0f, 777.0f },
    { 0.7f, 0.5f, 5.0f, 777.0f },
    { 1.0f, 0.2f, 2.0f, 777.0f },
};
s32 D_i3_801BFC70[3] = { 18, 22, 45 };
f32 D_i3_801BFC7C[3] = { 20.0f, 10.0f, 0.0f };
f32 D_i3_801BFC88[3] = { 10.0f, 320.0f, 30.0f };
Vec3f D_i3_801BFC94[6][4] = {
    { { 1.0f, 1.0f, 1.0f }, { 0.9f, 0.9f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 0.9f, 0.9f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 0.9f, 0.9f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 0.9f, 1.0f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 0.9f, 1.0f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 1.0f, 0.8f, 0.9f }, { 1.0f, 1.0f, 1.0f }, { 1.0f, 1.0f, 1.0f } },
};
s32 D_i3_801BFDB4[6][4] = {
    { 1, 5, 15, 100000 },  { 1, 5, 15, 100000 },  { 1, 5, 15, 100000 },
    { 1, 10, 20, 100000 }, { 1, 10, 20, 100000 }, { 1, 10, 20, 100000 },
};
s32 D_i3_801BFE14 = 0;
Vec3f D_i3_801BFE18[6][4] = {
    { { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f } },
    { { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f } },
    { { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f }, { 0.4f, 0.4f, 0.4f } },
    { { 0.2f, 0.2f, 0.2f }, { 0.3f, 0.3f, 0.3f }, { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f } },
    { { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f } },
    { { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f }, { 0.2f, 0.2f, 0.2f } },
};
Vec3f D_i3_801BFF38[6][4] = {
    { { 1.0f, 1.0f, 1.0f }, { 5.0f, 5.0f, 5.0f }, { 10.0f, 10.0f, 10.0f }, { 5.0f, 5.0f, 5.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 5.0f, 5.0f, 5.0f }, { 10.0f, 10.0f, 10.0f }, { 5.0f, 5.0f, 5.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 3.0f, 3.0f, 3.0f }, { 2.0f, 2.0f, 2.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 3.0f, 1.0f, 3.0f }, { 2.0f, 1.0f, 2.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 3.0f, 1.0f, 3.0f }, { 2.0f, 1.0f, 2.0f }, { 1.0f, 1.0f, 1.0f } },
    { { 1.0f, 1.0f, 1.0f }, { 1.0f, 4.0f, 3.0f }, { 1.0f, 3.0f, 2.0f }, { 1.0f, 1.0f, 1.0f } },
};
f32 D_i3_801C0058 = 191.0f;
f32 D_i3_801C005C = 63.0f;
f32 D_i3_801C0060[14] = {
    50.0f, 8.0f, 50.0f, 8.0f, 10.0f, 1.0f, 20.0f, 2.0f, 20.0f, 2.0f, 20.0f, 2.0f, 50.0f, 2.0f,
};
Vec3f D_i3_801C0098[2] = {
    { 370.0f, -53.0f, 1085.0f },
    { -370.0f, -53.0f, 1085.0f },
};
f32 D_i3_801C00B0[3][4] = {
    { 1.0f, 1.2f, 0.8f, 1.0f },
    { 1.0f, 1.2f, 0.9f, 1.0f },
    { 1.0f, 0.7f, 1.4f, 1.0f },
};
s32 D_i3_801C00E0[4] = { 1, 5, 8, 40 };
f32 D_i3_801C00F0[3][4] = {
    { 0.3f, 0.3f, 0.3f, 0.3f },
    { 0.3f, 0.3f, 0.3f, 0.3f },
    { 0.5f, 0.5f, 0.5f, 0.5f },
};
f32 D_i3_801C0120[3][4] = {
    { 1.0f, 1.0f, 1.0f, 1.0f },
    { 1.0f, 1.0f, 1.0f, 1.0f },
    { 2.0f, 2.0f, 2.0f, 2.0f },
};
f32 D_i3_801C0150[4][4] = {
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, -25.5f, 0.0f, 0.0f },
    { -25.5f, 25.5f, -25.5f, 0.0f },
    { 25.5f, 0.0f, 25.5f, 0.0f },
};
f32 D_i3_801C0190[5] = {
    0.0f, -30.0f, 30.0f, -30.0f, 30.0f,
};
Vec3f D_i3_801C01A4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_i3_801C01B0 = { 0.0f, 0.0f, 0.0f };
Vec3f D_i3_801C01BC = { 340.0f, 600.0f, 1480.0f };
Vec3f D_i3_801C01C8 = { -640.0f, 380.0f, 1520.0f };
Vec3f D_i3_801C01D4 = { 760.0f, 340.0f, 1560.0f };
Vec3f D_i3_801C01E0 = { 130.0f, 350.0f, 130.0f };
Vec3f D_i3_801C01EC = { -130.0f, 350.0f, 130.0f };
f32 D_i3_801C01F8[11] = {
    400.0f, 430.0f, 460.0f, 490.0f, 520.0f, 550.0f, 580.0f, 610.0f, 640.0f, 670.0f, 700.0f,
};
f32 D_i3_801C0224[11] = {
    6.0f, 6.0f, 8.0f, 8.0f, 8.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f,
};
Vec3f D_i3_801C0250 = { 0.0f, 0.0f, 0.0f };
f32 D_i3_801C025C[2] = { 120.0f, 0.0f };
s32 D_i3_801C0264[19] = {
    0, 0, 3, 4, 0, 5, 6, 7, 1, 2, 0, 0, 0, 0, 0, 0, 8, 9, 0,
};
Vec3f D_i3_801C02B0 = { 0.0f, 0.0f, 0.0f };
Vec3f D_i3_801C02BC = { 0.0f, 0.0f, 0.0f };
f32 D_i3_801C02C8[2] = { 255.0f, 68.0f };
s32 D_i3_801C02D0[2] = { 70, 100 };
Vec3f D_i3_801C02D8 = { 0.0f, 0.0f, 0.0f };
Vec3f D_i3_801C02E4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_i3_801C02F0 = { 108.0f, 0.0f, 24.0f };
Vec3f D_i3_801C02FC = { 102.0f, 14.0f, -21.0f };
Vec3f D_i3_801C0308 = { 0.0f, 0.0f, 0.0f };
Vec3f D_i3_801C0314 = { 0.0f, 0.0f, 50.0f };
Vec3f D_i3_801C0320 = { 0.0f, 0.0f, 0.0f };
Vec3f D_i3_801C032C = { -27.0f, 7.0f, 5.0f };
Vec3f D_i3_801C0338 = { 0.0f, 0.0f, 0.0f };
Vec3f D_i3_801C0344[4] = {
    { -6.4f, -4.6f, -7.8f },
    { 6.4f, 4.6f, 7.8f },
    { -5.9f, -7.8f, -7.0f },
    { 5.9f, 7.8f, 7.0f },
};
Vec3f D_i3_801C0374[17] = {
    { 1.0f, 1.0f, 1.0f },    { 1.3f, 0.8f, 1.3f },    { 1.0f, 1.2f, 1.0f },    { 1.3f, 0.8f, 1.3f },
    { 1.0f, 1.0f, 1.0f },    { 1.3f, 1.0f, 1.3f },    { 1.0f, 1.0f, 1.0f },    { 1.3f, 1.0f, 1.3f },
    { 1.0f, 1.0f, 1.0f },    { 0.85f, 0.95f, 0.85f }, { 0.85f, 0.95f, 0.85f }, { 0.85f, 0.95f, 0.85f },
    { 1.0f, 1.05f, 1.0f },   { 0.85f, 0.95f, 0.85f }, { 0.85f, 0.95f, 0.85f }, { 0.85f, 0.95f, 0.85f },
    { 0.85f, 0.95f, 0.85f },
};
s32 D_i3_801C0440[24] = {
    0, 30, 60, 90, 0, 0, 0, 0, 0, 15, 30, 45, 0, 0, 0, 0, 0, 15, 30, 45, 60, 75, 90, 105,
};
s32 D_i3_801C04A0[6] = {
    15, -15, 10, -10, 7, -7,
};
Vec3f D_i3_801C04B8 = { 0.0f, 0.0f, 0.0f };
s32 D_i3_801C04C4[9] = {
    1, 5, 9, 14, 15, 16, 17, 0, 13,
};
Vec3f D_i3_801C04E8 = { 0.0f, 0.0f, 0.0f };
f32 D_i3_801C04F4[4] = { 700.0f, 300.0f, 600.0f, 400.0f };
Vec3f D_i3_801C0504[50] = {
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
f32 D_i3_801C075C[51] = {
    28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 28.0f,  28.0f,  28.0f,  28.0f,  28.0f, 28.0f, 28.0f,
    28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 320.0f, 320.0f, 320.0f, 320.0f, 40.0f, 40.0f, 40.0f,
    40.0f, 40.0f, 40.0f, 40.0f, 28.0f, 28.0f, 28.0f,  28.0f,  28.0f,  28.0f,  28.0f, 28.0f, 28.0f,
    28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 28.0f, 28.0f,  28.0f,  28.0f,  10.0f,  28.0f, 28.0f,
};
f32 D_i3_801C0828[51] = {
    210.0f, 250.0f, 170.0f, 200.0f, 225.0f, 240.0f, 220.0f, 180.0f, 210.0f, 230.0f, 355.0f, 349.0f, 357.0f,
    12.0f,  357.0f, 65.0f,  256.0f, 250.0f, 88.0f,  0.0f,   0.0f,   0.0f,   9.0f,   14.0f,  35.0f,  40.0f,
    5.0f,   92.0f,  56.0f,  71.0f,  355.0f, 326.0f, 30.0f,  5.0f,   30.0f,  30.0f,  60.0f,  69.0f,  1.0f,
    346.0f, 30.0f,  97.0f,  30.0f,  30.0f,  30.0f,  30.0f,  162.0f, 98.0f,  10.0f,  213.0f, 30.0f,
};
Vec3f D_i3_801C08F4 = { 0.0f, 0.0f, 0.0f };

PosRot* D_i3_801C27C0;
PosRot D_i3_801C27C8[4][50];
Vtx D_i3_801C3A88[2][2][28];
f32 D_i3_801C4188;
s32 D_i3_801C4190[10];
f32 D_i3_801C41B8[30];
s32 D_i3_801C4230[28];
s32 D_i3_801C42A0[25];
f32 D_i3_801C4308[82];
s32 D_i3_801C4450;
s32 D_i3_801C4454;
f32 D_i3_801C4458;
f32 D_i3_801C445C;

extern Gfx D_3000130[];
extern Gfx D_3000470[];
extern Gfx D_3000AF0[];
extern Gfx D_3000C70[];
extern Gfx D_3006AF0[];
extern Gfx D_3006C70[];
extern Gfx D_3006DE0[];
extern AnimationHeader D_6000AE4;
extern Limb* D_6000DB0[];
extern AnimationHeader D_6002628;
extern Limb* D_6002874[];
extern Gfx D_6002C10[];
extern AnimationHeader D_6005954;
extern Limb* D_6005A80[];
extern u8 D_6008EC8[];
extern u8 D_6008FC8[];
extern Vtx D_6011A78[];
extern AnimationHeader D_60135E0;
extern Limb* D_60136CC;
extern Limb* D_60137CC;
extern Gfx D_60137F0[];
extern Gfx D_6014030[];
extern AnimationHeader D_6014438;
extern Limb* D_6014504[];
extern Gfx D_6014520[];
extern Gfx D_6014FD0[];
extern Vtx D_6018878[];
extern Vtx D_6018C78[];
extern Vtx D_6019078[];
extern u8 D_6019238[];
extern u8 D_6019338[];
extern Gfx D_60194D0[];
extern Gfx D_6019880[];
extern Gfx D_6019E80[];
extern AnimationHeader D_601DE50;
extern AnimationHeader D_601EC68;
extern Limb* D_601EDB4[];
extern AnimationHeader D_6020A40;
extern Limb* D_6020C6C[];
extern AnimationHeader D_6023780;
extern Limb* D_602390C[];
extern Gfx D_6024A50[];
extern AnimationHeader D_6024F80;
extern Limb* D_602512C;
extern AnimationHeader D_60260EC;
extern Limb* D_60263F8[];
extern AnimationHeader D_602AC28;
extern Limb* D_602BD60[];
extern f32 D_6030D3C[];
extern f32 D_6030D58[];
extern f32 D_60314AC[];
extern f32 D_60314E4[];
extern f32 D_603151C[];
extern Vtx D_6031D90[];

void func_i3_801A8E30(void);
void func_i3_801A92EC(Actor* actor, f32 xUnk, f32 yUnk, f32 zUnk, s32 index, s32 mode);
void func_i3_801A9374(Actor* actor, Vec3f* pos, Vec3f* rot, f32 xVel, f32 yVel, f32 zVel, s32 unkB8, f32 scale,
                      s32 timerBC, s32 unk48);
void func_i3_801A9448(Vec3f* pos, Vec3f* rot, f32 xVel, f32 yVel, f32 zVel, s32 unkB8, f32 scale, s32 timerBC,
                      s32 unk48);
void func_i3_801A94EC(Vec3f* pos, ObjectId objId);
f32 func_i3_801A958C(s32 arg0, f32 arg1);
void func_i3_801A95C8(void);
void func_i3_801A96DC(Actor* actor);
void func_i3_801A9728(Actor* actor, f32 radius, f32 scale, s32 spread);
void func_i3_801A9824(void);
void func_i3_801A99D4(Player* player);
void func_i3_801A9C98(Player* player);
void func_i3_801A9DE4(Player* player);
void func_i3_801A9ED0(Player* player);
void func_i3_801AA20C(void);
void func_i3_801AA4BC(Player* player);
void func_i3_801AA8E8(Player* player);
void func_i3_801AACF8(Player* player);
void func_i3_801AB9B0(Player* player);
void func_i3_801ABA40(PlayerShot* shot);
void func_i3_801AC09C(Player* player);
void func_i3_801AC18C(Player* player);
void func_i3_801AC274(Player* player);
void func_i3_801AC7C8(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 scale2, s32 unk4E);
void func_i3_801AC8A8(f32 xPos, f32 yPos, f32 zPos, f32 scale2, s32 unk4E);
void func_i3_801AC918(Effect* effect);
void func_i3_801ACBB4(Player* player);
void func_i3_801ACE50(Player* player);
void func_i3_801AD328(Player* player);
void func_i3_801AD598(Actor* actor);
void func_i3_801AD688(Actor* actor);
void func_i3_801AD6C0(Actor* actor);
void func_i3_801AE168(Actor* actor);
void func_i3_801AE3AC(Actor* actor);
void func_i3_801AE3D8(Actor* actor);
void func_i3_801AEB44(Actor* actor);
void func_i3_801AF9FC(Actor* actor);
void func_i3_801AFA5C(Actor* actor);
void func_i3_801B099C(Actor* actor);
void func_i3_801B0B60(Actor* actor);
void func_i3_801B0EC0(Actor* actor);
void func_i3_801B0F88(Boss* bossAQ);
void func_i3_801B0FCC(Boss* bossAQ);
void func_i3_801B1008(Boss* bossAQ, s16 timer);
void func_i3_801B10F8(Boss* bossAQ);
void func_i3_801B134C(Boss* bossAQ);
bool func_i3_801B42AC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx);
void func_i3_801B49DC(s32 limbIndex, Vec3f* rot, void* thisx);
void func_i3_801B4D84(Boss* bossAQ);
bool func_i3_801B4DDC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx);
void func_i3_801B4E94(s32 limbIndex, Vec3f* rot, void* thisx);
void func_i3_801B504C(Actor* actor);
void func_i3_801B50E8(Actor* actor);
bool func_i3_801B5C18(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx);
void func_i3_801B5F68(s32 limbIndex, Vec3f* rot, void* thisx);
void func_i3_801B619C(Actor* actor);
void func_i3_801B6344(Actor* actor);
void func_i3_801B638C(Actor* actor);
void func_i3_801B6E54(Actor* actor);
void func_i3_801B6FF8(Actor* actor);
bool func_i3_801B76EC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx);
void func_i3_801B7754(s32 limbIndex, Vec3f* rot, void* thisx);
void func_i3_801B7A24(Actor* actor);
void func_i3_801B7AF0(Actor* actor);
void func_i3_801B7C78(Actor* actor);
bool func_i3_801B8C50(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx);
void func_i3_801B8D7C(s32 limbIndex, Vec3f* rot, void* thisx);
void func_i3_801B90DC(Actor* actor);
void func_i3_801B91A4(Actor* actor);
void func_i3_801B9DB0(s32 limbIndex, Vec3f* rot, void* thisx);
void func_i3_801BA108(Actor* actor);
void func_i3_801BA26C(Actor* actor);
void func_i3_801BA4E4(Actor* actor);
void func_i3_801BA57C(Actor* actor);
void func_i3_801BA6A4(Actor* actor);
void func_i3_801BAD7C(Actor* actor);
void func_i3_801BADF8(Actor* actor);
void func_i3_801BB0C4(s32 limbIndex, Vec3f* rot, void* thisx);
void func_i3_801BB204(Actor* actor);
void func_i3_801BB26C(Actor* actor);
void func_i3_801BB79C(Actor* actor);
bool func_i3_801BC530(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx);
void func_i3_801BC91C(s32 limbIndex, Vec3f* rot, void* thisx);
void func_i3_801BC930(Actor* actor);
void func_i3_801BC9A0(Actor* actor);
void func_i3_801BD17C(s32 limbIndex, Vec3f* rot, void* thisx);
void func_i3_801BD264(Actor* actor);
void func_i3_801BD3B0(Actor* actor, f32 x, f32 y, f32 z);
void func_i3_801BD54C(Actor* actor);
bool func_i3_801BDDFC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx);
void func_i3_801BDE6C(Actor* actor);
void func_i3_801BDF14(void);
void func_i3_801BE034(Actor* actor);
void func_i3_801BE0F0(Actor* actor);
void func_i3_801BE1FC(Object_80* obj80);
void func_i3_801BE274(Actor* actor, f32 yRot, f32 xRot);
void func_i3_801BE3F8(Actor* actor);
void func_i3_801BEB1C(Actor* actor);
void func_i3_801BEC68(Actor* actor);
void func_i3_801BEC74(Actor* actor);
void func_i3_801BEC80(Player* player);
void func_i3_801BEC8C(UNK_TYPE arg0);

void func_i3_801A8E30(void) {
    s32 i;
    f32 spA8[17];
    f32 sp64[17];
    s32 j;
    Vtx* sp5C = SEGMENTED_TO_VIRTUAL(D_6031D90);
    Vtx* sp58 = SEGMENTED_TO_VIRTUAL(D_6011A78);

    for (i = 0; i < 17; i++) {
        if ((i == 0) || (i == 16)) {
            spA8[i] = 0.0f;
            sp64[i] = 0.0f;
        } else {
            spA8[i] = (Rand_ZeroOne() - 0.5f) * 70.0f;
            sp64[i] = (Rand_ZeroOne() - 0.5f) * 70.0f;
        }
    }
    for (i = 0; i < 34; i++) {
        j = (sp5C[i].v.ob[2] + 200) / 25;
        sp58[i].v.ob[0] = sp5C[i].v.ob[0] + spA8[j];
        sp58[i].v.ob[1] = sp5C[i].v.ob[1] + sp64[j];
    }
}

void func_i3_801A92EC(Actor* actor, f32 xUnk, f32 yUnk, f32 zUnk, s32 index, s32 mode) {
    gUnkEntities30[index].mode = mode;
    gUnkEntities30[index].unk_28 = 10.0f;
    gUnkEntities30[index].unk_04.x = actor->obj.pos.x;
    gUnkEntities30[index].unk_04.y = actor->obj.pos.y;
    gUnkEntities30[index].unk_04.z = actor->obj.pos.z;
    gUnkEntities30[index].unk_10.x = xUnk;
    gUnkEntities30[index].unk_10.y = yUnk;
    gUnkEntities30[index].unk_10.z = zUnk;
    gUnkEntities30[index].unk_2C = gUnkEntities30[index].unk_2D = gUnkEntities30[index].unk_2E =
        gUnkEntities30[index].unk_2F = 255;
    gUnkEntities30[index].timer = 3;
}

void func_i3_801A9374(Actor* actor, Vec3f* pos, Vec3f* rot, f32 xVel, f32 yVel, f32 zVel, s32 unkB8, f32 scale,
                      s32 timerBC, s32 unk48) {
    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = 189;
    actor->unk_0B8 = unkB8;
    actor->scale = scale;
    actor->unk_048 = unk48;
    actor->obj.pos = *pos;
    actor->obj.rot = *rot;
    actor->vel.x = xVel;
    actor->vel.y = yVel;
    actor->vel.z = zVel;
    actor->timer_0BC = timerBC;
    actor->gravity = 0.5f;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_i3_801A9448(Vec3f* pos, Vec3f* rot, f32 xVel, f32 yVel, f32 zVel, s32 unkB8, f32 scale, s32 timerBC,
                      s32 unk48) {
    s32 i;

    for (i = 59; i >= 0; i--) {
        if (gActors[i].obj.status == 0) {
            func_i3_801A9374(&gActors[i], pos, rot, xVel, yVel, zVel, unkB8, scale, timerBC, unk48);
            break;
        }
    }
}

void func_i3_801A94EC(Vec3f* pos, ObjectId objId) {
    Item* sp18;
    Item* item;
    s32 i;

    for (i = 0, item = gItems; i < ARRAY_COUNT(gItems); i++, item++) {
        if (item->obj.status == 0) {
            Item_Initialize(item);
            item->obj.status = 1;
            item->obj.id = objId;
            item->obj.pos.x = pos->x;
            item->obj.pos.y = pos->y;
            item->obj.pos.z = pos->z;
            item->timer_4A = 2;
            Object_SetInfo(&item->info, item->obj.id);
            break;
        }
    }
}

f32 func_i3_801A958C(s32 arg0, f32 arg1) {
    f32 var_fv1 = arg0 / 2.0f;

    var_fv1 = MIN(arg1, var_fv1);

    return var_fv1;
}

void func_i3_801A95C8(void) {
    Math_SmoothStepToF(&gPlayer[0].camEye.x, D_80177978, 0.1f, 50.0f, 0.0001f);
    Math_SmoothStepToF(&gPlayer[0].camEye.y, D_80177980, 0.1f, 50.0f, 0.0001f);
    Math_SmoothStepToF(&gPlayer[0].camEye.z, D_80177988, 0.1f, 50.0f, 0.0001f);
    Math_SmoothStepToF(&gPlayer[0].camAt.x, D_801779A0, 0.1f, 50.0f, 0.0001f);
    Math_SmoothStepToF(&gPlayer[0].camAt.y, D_801779B8, 0.1f, 50.0f, 0.0001f);
    Math_SmoothStepToF(&gPlayer[0].camAt.z, D_801779C0, 0.1f, 50.0f, 0.0001f);
}

void func_i3_801A96DC(Actor* actor) {
    actor->obj.rot.y = RAD_TO_DEG(-gPlayer->unk_058);
    actor->obj.rot.x = RAD_TO_DEG(gPlayer->unk_05C);
}

void func_i3_801A9728(Actor* actor, f32 radius, f32 scale, s32 spread) {
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp;
    s32 i;

    for (i = 0; i < 36; i += spread) {
        temp_fs1 = __sinf(i * 10.0f * M_DTOR) * radius;
        temp_fs0 = __cosf(i * 10.0f * M_DTOR) * radius;
        temp = gGroundLevel + 30.0f;
        func_8007B8F8(actor->obj.pos.x + temp_fs1, temp, actor->obj.pos.z + temp_fs0, scale);
    }
}

// #pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801A9824.s")

void func_i3_801A9824(void) {
    s32 i;
    f32* var_v0;
    f32* var_v0_4;
    s32* var_a0;
    s32* var_v0_2;
    s32* var_v0_3;

    gTeamShields[1] = gTeamShields[2] = gTeamShields[3] = 0xFF;
    for (i = 0; i < ARRAY_COUNT(D_i3_801C4190); i++) {
        D_i3_801C4190[i] = 0;
    }
    for (i = 0; i < ARRAY_COUNT(D_i3_801C41B8); i++) {
        D_i3_801C41B8[i] = 0.0f;
    }
    for (i = 0; i < ARRAY_COUNT(D_i3_801C4230); i++) {
        D_i3_801C4230[i] = 0;
    }
    for (i = 0; i < ARRAY_COUNT(D_i3_801C42A0); i++) {
        D_i3_801C42A0[i] = 0;
    }
    for (i = 0; i < ARRAY_COUNT(D_i3_801C4308); i++) {
        D_i3_801C4308[i] = 0;
    }
    D_i3_801C4458 = D_i3_801C445C = 0.0f;
    D_i3_801C4450 = D_i3_801C4454 = 0;
    D_i3_801C41B8[12] = 40.0f;
    D_i3_801C41B8[13] = 100.0f;
    D_i3_801C41B8[14] = 120.0f;
    D_i3_801C41B8[15] = 20.0f;
    D_i3_801C41B8[16] = 30.0f;
    D_i3_801C41B8[17] = 50.0f;
    if (D_80177CA0 != 0) {
        D_i3_801C41B8[12] = 0.0f;
        D_i3_801C41B8[13] = 3.0f;
        D_i3_801C41B8[14] = 5.0f;
        D_i3_801C41B8[15] = 0.0f;
        D_i3_801C41B8[16] = 0.0f;
        D_i3_801C41B8[17] = 0.0f;
    }
    D_i3_801C4190[5] = 0;
    D_i3_801C41B8[25] = D_8015F970;
    D_i3_801C41B8[26] = 128.0f;
}

void func_i3_801A99D4(Player* player) {
    s32 sp24 = fabsf(player->unk_138 / 1000.0f);

    Math_SmoothStepToF(&D_8015F970, D_i3_801C41B8[25], 1.0f, 10.0f, 0.00001f);
    Math_SmoothStepToF(&D_i3_801C4188, D_i3_801C41B8[26], 0.1f, 10.0f, 0.00001f);
    if ((D_i3_801C4190[8] < sp24) && (D_i3_801C41B8[25] < 4600.0f)) {
        D_i3_801C4190[8] = sp24;
        D_i3_801C41B8[25] += 150.0f;
        D_i3_801C41B8[26] = D_i3_801C4188 - 6.0f;
        if (D_i3_801C41B8[26] < 0.0f) {
            D_i3_801C41B8[26] = 0.0f;
        }
        if (D_i3_801C41B8[25] > 4600.0f) {
            D_i3_801C41B8[25] = 4600.0f;
        }
        D_i3_801C41B8[12] -= 2.0f;
        if (D_i3_801C41B8[12] < 0.0f) {
            D_i3_801C41B8[12] = 0.0f;
        }
        D_i3_801C41B8[13] -= 6.0f;
        if (D_i3_801C41B8[13] < 3.0f) {
            D_i3_801C41B8[13] = 3.0f;
        }
        D_i3_801C41B8[14] -= 6.0f;
        if (D_i3_801C41B8[14] < 5.0f) {
            D_i3_801C41B8[14] = 5.0f;
        }
        D_i3_801C41B8[15] -= 1.0f;
        if (D_i3_801C41B8[15] < 0.0f) {
            D_i3_801C41B8[15] = 0.0f;
        }
        D_i3_801C41B8[16] -= 1.5f;
        if (D_i3_801C41B8[16] < 0.0f) {
            D_i3_801C41B8[16] = 0.0f;
        }
        D_i3_801C41B8[17] -= 2.5f;
        if (D_i3_801C41B8[17] < 0.0f) {
            D_i3_801C41B8[17] = 0.0f;
        }
        gLight1R = D_i3_801C41B8[12];
        gLight1G = D_i3_801C41B8[13];
        gLight1B = D_i3_801C41B8[14];
        gAmbientR = D_i3_801C41B8[15];
        gAmbientG = D_i3_801C41B8[16];
        gAmbientB = D_i3_801C41B8[17];
    }
}

// #pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801A99D4.s")

// #pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801A9C98.s")

void func_i3_801A9C98(Player* player) {
    Actor* actor;
    s32 i;
    s32 var_v0;

    if ((D_i3_801C4190[0] != 777) && (D_i3_801C4190[0] > 0)) {
        i = D_i3_801C4190[0] - 1;
        actor = &gActors[i];
        if ((actor->obj.status != 2) || ((player->unk_138 - 300.0f) <= actor->obj.pos.z) ||
            (actor->obj.pos.z <= (player->unk_138 - 7000.0f)) || (actor->obj.id != D_i3_801C4190[1]) ||
            (actor->health == 0)) {
            D_i3_801C4190[1] = 0;
            D_i3_801C4190[5] = 0;
            D_i3_801C4190[3] = 0;
            D_i3_801C4190[0] = 0;
        } else {
            var_v0 = 1;
            if (actor->info.hitbox[1] == 200000.0f) {
                var_v0 = 5;
            }
            D_i3_801C41B8[2] = actor->obj.pos.z + actor->info.hitbox[var_v0 + 0] + actor->info.hitbox[var_v0 + 1];
            D_i3_801C41B8[1] = actor->obj.pos.y + actor->info.hitbox[var_v0 + 2];
            D_i3_801C41B8[0] = actor->obj.pos.x + actor->info.hitbox[var_v0 + 4];
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801A9DE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801A9ED0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AA20C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AA4BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AA8E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AACF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AB9B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801ABA40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AC09C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AC18C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AC274.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AC7C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AC8A8.s")

// OBJ_EFFECT_366 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AC918.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801ACBB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801ACE50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AD328.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AD598.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AD688.s")

// OBJ_ACTOR_255 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AD6C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801ADF7C.s")

// OBJ_ACTOR_255 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AE168.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AE3AC.s")

// OBJ_ACTOR_256 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AE3D8.s")

// OBJ_ACTOR_256 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AEB44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AF9FC.s")

// OBJ_ACTOR_257 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AFA5C.s")

// OBJ_ACTOR_257 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B099C.s")

// OBJ_ACTOR_258 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B0B60.s")

// OBJ_ACTOR_258 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B0EC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B0F88.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B0FCC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B1008.s")

// OBJ_BOSS_AQ init
void func_i3_801B10F8(Boss* bossAQ);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B10F8.s")

// OBJ_BOSS_AQ action
void func_i3_801B134C(Boss* bossAQ);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B134C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B42AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B49DC.s")

// OBJ_BOSS_AQ draw
void func_i3_801B4D84(Boss* bossAQ);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B4D84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B4DDC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B4E94.s")

// OBJ_ACTOR_261 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B504C.s")

// OBJ_ACTOR_261 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B50E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B5C18.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B5F68.s")

// OBJ_ACTOR_259 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B619C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B6344.s")

// OBJ_ACTOR_259 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B638C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B6E54.s")

// OBJ_ACTOR_262 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B6FF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B76EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B7754.s")

// OBJ_ACTOR_262 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B7A24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B7AF0.s")

// OBJ_ACTOR_260 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B7C78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B8C50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B8D7C.s")

// OBJ_ACTOR_260 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B90DC.s")

// OBJ_ACTOR_263 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B91A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B9DB0.s")

// OBJ_ACTOR_263 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BA108.s")

// OBJ_ACTOR_264 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BA26C.s")

// OBJ_ACTOR_264 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BA4E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BA57C.s")

// OBJ_ACTOR_265 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BA6A4.s")

// OBJ_ACTOR_265 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BAD7C.s")

// OBJ_ACTOR_266 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BADF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BB0C4.s")

// OBJ_ACTOR_266 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BB204.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BB26C.s")

// OBJ_ACTOR_267 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BB79C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BC530.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BC91C.s")

// OBJ_ACTOR_267 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BC930.s")

// OBJ_ACTOR_269 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BC9A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BD17C.s")

// OBJ_ACTOR_269 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BD264.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BD3B0.s")

// OBJ_ACTOR_268 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BD54C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BDDFC.s")

// OBJ_ACTOR_268 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BDE6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BDF14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BE034.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BE0F0.s")

// OBJ_80_126 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BE1FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BE274.s")

// OBJ_ACTOR_270 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BE3F8.s")

// OBJ_ACTOR_270 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BEB1C.s")

// OBJ_BOSS_301 action
void func_i3_801BEC50(Boss* boss301) {
}

// OBJ_BOSS_301 draw
void func_i3_801BEC5C(Boss* boss301) {
}

// OBJ_ACTOR_188 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BEC68.s")

// OBJ_ACTOR_188 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BEC74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BEC80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BEC8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/D_i3_801C1A30.s")
