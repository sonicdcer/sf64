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
PosRot D_i3_801C27C8[4 * 50];
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
void func_i3_801ADF7C(f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, u8 type, s32 arg7, f32 scale, s32 arg9);
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
    actor->state = unkB8;
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
    actor->obj.rot.y = RAD_TO_DEG(-gPlayer[0].unk_058);
    actor->obj.rot.x = RAD_TO_DEG(gPlayer[0].unk_05C);
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

void func_i3_801A9DE4(Player* player) {
    s32 i;

    if (D_i3_801C4190[0] == 777) {
        if ((gBosses[0].obj.status != OBJ_ACTIVE) || (gBosses[0].health == 0) || (fabsf(D_i3_801C4308[10]) <= 6.0f) ||
            ((D_i3_801C4190[4] == 0x79) && (gBosses[0].swork[0xC] == 0))) {
            D_i3_801C4190[1] = 0;
            D_i3_801C4190[5] = 0;
            D_i3_801C4190[3] = 0;
            D_i3_801C4190[4] = 0;
            D_i3_801C4190[0] = 0;
        } else {
            i = D_i3_801C4190[4] - 2;

            D_i3_801C41B8[2] = gBosses[0].obj.pos.z + gBosses[0].info.hitbox[i + 0] + gBosses[0].info.hitbox[i + 1];
            D_i3_801C41B8[1] = gBosses[0].obj.pos.y + gBosses[0].info.hitbox[i + 2];
            D_i3_801C41B8[0] = gBosses[0].obj.pos.x + gBosses[0].info.hitbox[i + 4];
        }
    }
}

// Loop looks really fake. optimized out index?
void func_i3_801A9ED0(Player* player) {
    s32 j;
    s32 i;
    s32 sp8C;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv1;
    Vec3f sp70;
    Vec3f sp64;
    f32* tempx;
    f32* tempy;
    f32* tempz;

    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, player->unk_0E4 * M_DTOR, 1);
    sp70.x = 0.0f;
    sp70.y = 0.0f;
    sp70.z = -1200.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);
    if (D_i3_801C4190[3] == 0) {
        sp8C = D_i3_801C4190[4];

        if ((fabsf(D_i3_801C4308[10]) >= 6.0f) && (gBosses[0].state >= 10) && (gBosses[0].obj.status == 2) &&
            (gBosses[0].health != 0)) {
            for (j = 119, i = 121; j < 199; j += 10, i += 10) {
                if ((j == 119) || (j == 129) || (j == 139) || (j == 169)) {
                    tempy = &gBosses[0].info.hitbox[i];

                    temp_fv0 = gBosses[0].obj.pos.y + tempy[0] + tempy[1] + 200.0f;
                    temp_fa0 = gBosses[0].obj.pos.y + tempy[0] - tempy[1] - 200.0f;
                    temp_fv1 = gBosses[0].obj.pos.x + tempy[2] + tempy[3] + 200.0f;
                    temp_fa1 = gBosses[0].obj.pos.x + tempy[2] - tempy[3] - 200.0f;
                    if ((gBosses[0].state >= 10) && ((player->pos.y + sp64.y) <= temp_fv0) &&
                        (temp_fa0 <= (player->pos.y + sp64.y)) && ((player->pos.x + sp64.x) <= temp_fv1) &&
                        (temp_fa1 <= (player->pos.x + sp64.x))) {
                        if (D_i3_801C41B8[11] >=
                            fabsf(player->unk_138 - gBosses[0].obj.pos.z - gBosses[0].info.hitbox[j])) {
                            D_i3_801C41B8[11] =
                                fabsf(player->unk_138 - gBosses[0].obj.pos.z - gBosses[0].info.hitbox[j]);
                            D_i3_801C4190[0] = 777;
                            D_i3_801C4190[4] = i;
                            D_i3_801C4190[1] = 318;
                        }
                        if (((j == 129) && (gBosses[0].swork[8] == 0)) || ((j == 139) && (gBosses[0].swork[9] == 0)) ||
                            ((j == 119) && (gBosses[0].swork[0xC] == 0))) {
                            D_i3_801C4190[1] = 0;
                            D_i3_801C4190[5] = 0;
                            D_i3_801C4190[3] = 0;
                            D_i3_801C4190[4] = 0;
                            D_i3_801C4190[0] = 0;
                        }
                    }
                }
            }
            if ((sp8C != D_i3_801C4190[4]) && (D_i3_801C41B8[5] == 3.0f)) {
                Audio_PlaySfx(0x4900001B, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_i3_801C41B8[5] = 20.0f;
            }
        }
    }
    func_i3_801A9DE4(player);
}

void func_i3_801AA20C(void) {
    f32 var_fs1;
    f32 var_fs2;
    s32 i;

    if (gPlayer[0].unk_234 != 0) {
        Matrix_Push(&gGfxMatrix);
        Math_SmoothStepToF(&D_i3_801C41B8[5], 3.0f, 1.0f, 4.0f, 0.0001f);
        RCP_SetupDL(&gMasterDisp, 0x3D);
        if (D_i3_801C4190[3] == 0) {
            GPC(255, 255, 255, 255);
            var_fs1 = -10.0f;
            var_fs2 = 10.0f;
            if (D_i3_801C4190[0] != 0) {
                var_fs1 = var_fs2 = 0.0f;
            }
            Matrix_Translate(gGfxMatrix, D_i3_801C41B8[0] + var_fs1, D_i3_801C41B8[1] + var_fs2,
                             D_i3_801C41B8[2] + gPlayer[0].unk_144, 1);
            Matrix_Scale(gGfxMatrix, D_i3_801C41B8[5], D_i3_801C41B8[5], D_i3_801C41B8[5], 1);
            for (i = 0; i < 4; i++) {
                Matrix_RotateZ(gGfxMatrix, M_PI / 2, 1);
                Matrix_Translate(gGfxMatrix, var_fs1, var_fs2, 0.0f, 1);
                Matrix_Push(&gGfxMatrix);
                Matrix_SetGfxMtx(&gMasterDisp);
                GDL(D_3000470);
                Matrix_Pop(&gGfxMatrix);
            }
        } else {
            GPC(255, 0, 0, 255);
            Matrix_Translate(gGfxMatrix, D_i3_801C41B8[0], D_i3_801C41B8[1], D_i3_801C41B8[2] + gPlayer[0].unk_144, 1);
            Matrix_Scale(gGfxMatrix, D_i3_801C41B8[5], D_i3_801C41B8[5], D_i3_801C41B8[5], 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_3000130);
        }
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_i3_801AA4BC(Player* player) {
    f32 sp3C;
    f32 sp38;

    if (player->unk_230 == 0) {
        sp3C = 0.0f;
        sp38 = 0.1f;
        if ((gInputHold->button & Z_TRIG) && !(gInputHold->button & R_TRIG)) {
            sp3C = 90.0f;
            sp38 = 0.2f;
            if (player->unk_12C < 70.0f) {
                Math_SmoothStepToF(&player->wings.unk_04, -70.0f, 0.3f, 100.0f, 0);
                Math_SmoothStepToF(&player->wings.unk_08, -70.0f, 0.3f, 100.0f, 0);
                Math_SmoothStepToF(&player->wings.unk_0C, 70.0f, 0.3f, 100.0f, 0);
                Math_SmoothStepToF(&player->wings.unk_10, 70.0f, 0.3f, 100.0f, 0);
            }
        }
        if ((gInputHold->button & R_TRIG) && !(gInputHold->button & Z_TRIG)) {
            sp3C = -90.0f;
            sp38 = 0.2f;
            if (player->unk_12C > -70.0f) {
                Math_SmoothStepToF(&player->wings.unk_04, 70.0f, 0.3f, 100.0f, 0);
                Math_SmoothStepToF(&player->wings.unk_08, 70.0f, 0.3f, 100.0f, 0);
                Math_SmoothStepToF(&player->wings.unk_0C, -70.0f, 0.3f, 100.0f, 0);
                Math_SmoothStepToF(&player->wings.unk_10, -70.0f, 0.3f, 100.0f, 0);
            }
        }
        Math_SmoothStepToF(&player->unk_12C, sp3C, sp38, 10.0f, 0);
    }
    if ((gInputPress->button & Z_TRIG) && (player->unk_230 == 0)) {
        player->unk_48C = 1;
        if (player->timer_1E0 != 0) {
            player->unk_1DC = 1;
            player->timer_1E8 = 10;
            player->unk_1EC = player->unk_1F0 = 30;
            player->unk_494 = 1;
        } else {
            player->timer_1E0 = 10;
        }
    }
    if ((gInputPress->button & R_TRIG) && (player->unk_230 == 0)) {
        player->unk_48C = 1;
        if (player->timer_1E4 != 0) {
            player->unk_1DC = 1;
            player->timer_1E8 = 10;
            player->unk_1EC = player->unk_1F0 = -30;
            player->unk_494 = 1;
        } else {
            player->timer_1E4 = 10;
        }
    }
    Math_SmoothStepToF(&player->unk_150, 1.0f, 0.05f, 10.0f, 0.0001f);
    player->unk_130 = Math_ModF(player->unk_130, 360.0f);
    if (player->unk_280 > 0) {
        player->unk_280 -= 30;
        if (player->unk_280 <= 0) {
            player->unk_280 = 0;
        }
    }
    if (player->unk_1DC == 0) {
        Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 10.0f, 0.00001f);
    }
    if (player->timer_1E0 != 0) {
        player->timer_1E0--;
    }
    if (player->timer_1E4 != 0) {
        player->timer_1E4--;
    }
    if (player->timer_214 != 0) {
        player->timer_214--;
    }
    if (player->timer_218 != 0) {
        player->timer_218--;
    }
    if (player->timer_1E8 != 0) {
        player->timer_1E8--;
    }
    if (player->unk_1DC != 0) {
        player->timer_1E0 = player->timer_1E4 = 0;
        player->unk_150 = 1.5f;
        player->unk_130 += player->unk_1EC;
        if (player->timer_1E8 == 0) {
            if (player->unk_1EC > 0) {
                player->unk_1EC -= 5;
            }
            if (player->unk_1EC < 0) {
                player->unk_1EC += 5;
            }
            if (player->unk_1EC == 0) {
                player->unk_1DC = 0;
            }
        } else {
            if (player->unk_280 < 180) {
                player->unk_280 += 60;
                if (player->unk_280 > 180) {
                    player->unk_280 = 180;
                }
            }
        }
    }
}

void func_i3_801AA8E8(Player* player) {
    f32 var_fv0 = gInputPress->stick_x;
    f32 var_fv1 = -gInputPress->stick_y;
    f32 temp;

    if (player->state_1C8 != PLAYERSTATE_1C8_3) {
        var_fv0 = var_fv1 = 0.0f;
    }
    Math_SmoothStepToF(&player->unk_030, var_fv0, 0.05f, 1.0f, 0.05f);
    if (player->pos.y < (gGroundLevel + 50.0f)) {
        Math_SmoothStepToF(&player->unk_02C, var_fv1 * 0.3f, 0.05f, 1.0f, 0.05f);
    } else {
        Math_SmoothStepToF(&player->unk_02C, var_fv1, 0.05f, 2.0f, 0.05f);
    }
    D_80177978 = (player->pos.x - player->unk_0AC) * (600.0f / player->unk_09C);
    D_80177978 -= player->unk_030 * 1.5f;
    D_80177978 += player->unk_0AC + D_i3_801C41B8[9];
    D_80177980 = player->pos.y * (740.0f / player->unk_0A0);
    D_80177980 -= player->unk_02C - 50.0f;
    D_80177980 += player->unk_0B0;
    D_801779A0 = (player->pos.x - player->unk_0AC - D_i3_801C41B8[9]) * (600.0f / player->unk_09C);
    D_801779A0 += player->unk_084 * -2.0f;
    D_801779A0 -= player->unk_030 * 0.5f;
    D_801779A0 += player->unk_0AC;
    D_801779B8 = (player->pos.y - player->unk_0B0) * (750.0f / player->unk_0A0);
    D_801779B8 += player->unk_060 * 10.0f;
    D_801779B8 -= player->unk_02C * -0.55f;
    D_801779B8 += player->unk_0B0 + D_i3_801C41B8[10];
    if (D_801779B8 < 20.0f) {
        D_801779B8 = 20.0f;
    }
    D_80177988 = 240.0f;
    D_801779C0 = player->unk_138 + (D_80177D20 - 1.0f);
    Math_SmoothStepToF(&player->camEye.x, D_80177978, player->unk_014, 1000.0f, 0);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, player->unk_014, 1000.0f, 0);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, 0.2f, 30.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, player->unk_014, 1000.0f, 0);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, player->unk_014, 1000.0f, 0);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, player->unk_014, 1000.0f, 0);
    Math_SmoothStepToF(&player->unk_014, 1.0f, 1.0f, 0.05f, 0.0f);
    temp = -player->unk_0EC;
    Math_SmoothStepToF(&player->unk_034, temp * 0.3f, 0.1f, 1.5f, 0.0f);
}

void func_i3_801AACF8(Player* player) {
    Vec3f sp8C;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fv1_2;
    s32 pad;

    func_i3_801AA4BC(player);
    func_i3_801A99D4(player);
    func_i3_801A8E30();
    sp64 = -gInputPress->stick_x;
    sp5C = gInputPress->stick_y;
    D_80177970 = 0.68f;
    Math_SmoothStepToF(&player->unk_180, sp64 * D_80177970, 1.0f, 10.0f, 0.0001f);
    var_fa0 = fabsf(player->unk_180 * 0.5f);
    if (var_fa0 > 2.0f) {
        var_fa0 = 2.0f;
    }
    if (player->unk_180 < 0.0f) {
        if (D_i3_801C41B8[3] > player->unk_180) {
            D_i3_801C41B8[3] -= var_fa0;
        }
    } else {
        if (D_i3_801C41B8[3] < player->unk_180) {
            D_i3_801C41B8[3] += var_fa0;
        }
    }
    Math_SmoothStepToF(&D_i3_801C41B8[3], player->unk_180, 0.1f, 2.0f, 0.00001f);
    sp60 = D_i3_801C41B8[3];
    D_80177968 = 7.0f;
    if ((player->pos.x < (-player->unk_09C + player->unk_0AC + 10.0f)) && (sp60 >= 20.0f)) {
        D_80177968 = 2.0f;
        Math_SmoothStepToF(&D_i3_801C41B8[9], 30.0f, 0.1f, 10.0f, 0.0001f);
    }
    if ((player->pos.x > (player->unk_09C + player->unk_0AC - 10.0f)) && (sp60 <= -20.0f)) {
        D_80177968 = 2.0f;
        Math_SmoothStepToF(&D_i3_801C41B8[9], -30.0f, 0.1f, 10.0f, 0.0001f);
    }
    Math_SmoothStepToF(&player->unk_0E8, sp60, 0.3f, D_80177968, 0.00001f);
    if (D_80177968 != 2.0f) {
        Math_SmoothStepToF(&D_i3_801C41B8[9], 0.0f, 0.1f, 20.0f, 0.0001f);
    }
    Math_SmoothStepToF(&player->unk_17C, sp5C * D_80177970, 1.0f, 7.0f, 0.0001f);
    var_fa1 = fabsf(player->unk_17C * 0.05f);
    if (var_fa1 > 2.0f) {
        var_fa1 = 2.0f;
    }
    if (player->unk_17C * -1.0f < 0.0f) {
        if (D_i3_801C41B8[4] > player->unk_17C) {
            D_i3_801C41B8[4] -= var_fa1;
        }
    } else {
        if (D_i3_801C41B8[4] < player->unk_17C) {
            D_i3_801C41B8[4] += var_fa1;
        }
    }
    Math_SmoothStepToF(&D_i3_801C41B8[4], player->unk_17C * -1.0f, 0.1f, 3.0f, 0.00001f);
    sp58 = D_i3_801C41B8[4] * 0.8f;
    D_80177968 = 10.0f;
    if (player->pos.y < (gGroundLevel + 50.0f)) {
        if (sp58 <= 0.0f) {
            sp58 = 0.0f;
            D_80177968 = 2.0f;
            if (D_i3_801C4190[7] == 0) {
                Audio_PlaySfx(0x09404028, player->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_i3_801C4190[7] = 1;
            }
        }
    } else {
        D_i3_801C4190[7] = 0;
    }
    if ((player->unk_0A0 - 50.0f) <= player->pos.y) {
        if (sp58 >= 0.0f) {
            Math_SmoothStepToF(&D_i3_801C41B8[10], 30.0f, 1.0f, 1.0f, 0.00001f);
        }
    } else {
        Math_SmoothStepToF(&D_i3_801C41B8[10], 0.0f, 0.1f, 1.0f, 0.00001f);
    }
    Math_SmoothStepToF(&player->unk_0E4, sp58, 1.0f, D_80177968, 0.00001f);
    var_fv1_2 = 2.0f;
    if (sp64 == 0.0f) {
        var_fv1_2 = 1.0f;
    }
    Math_SmoothStepToF(&player->unk_0EC, player->unk_180 * 0.7f, 0.08f, var_fv1_2, 0.0001f);
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4 + player->unk_4D8) * 0.017453292f), 1);
    sp8C.x = sp8C.y = 0.0f;
    sp8C.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp8C, &sp68);
    sp68.x *= 1.4f;
    sp68.y *= 1.4f;
    Matrix_RotateY(gCalcMatrix, player->unk_114 * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, player->unk_120 * 0.017453292f, 1);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp68, &sp80);
    sp8C.x = sp8C.y = 0.0f;
    sp8C.z = -player->unk_110;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp8C, &sp74);
    player->vel.x = (sp80.x + sp74.x) * player->unk_150;
    player->vel.y = (sp80.y + sp74.y) * player->unk_150;
    player->vel.z = sp80.z + sp74.z;
    player->pos.x += player->vel.x;
    if (player->pos.x > player->unk_09C + player->unk_0AC) {
        player->pos.x = player->unk_09C + player->unk_0AC;
        player->vel.x = 0.0f;
    }
    if (player->pos.x < player->unk_0AC - player->unk_09C) {
        player->pos.x = player->unk_0AC - player->unk_09C;
        player->vel.x = 0.0f;
    }
    player->pos.y += player->vel.y;
    if (player->pos.y > player->unk_0A0) {
        player->pos.y = player->unk_0A0;
        player->vel.y = 0.0f;
    }
    if (player->pos.y < player->unk_0A4) {
        player->pos.y = player->unk_0A4;
        player->vel.y = 0.0f;
    }
    if (player->pos.x > (player->unk_0AC + (player->unk_09C - 100.0f))) {
        player->unk_228 = 1;
    }
    if (player->pos.x < (player->unk_0AC - (player->unk_09C - 100.0f))) {
        player->unk_228 = 2;
    }
    if (player->pos.y > (player->unk_0B0 + (player->unk_0A0 - 100.0f))) {
        player->unk_228 = 8;
    }
    if (player->pos.y <= (gGroundLevel + 100)) {
        player->unk_228 = 4;
    }
    if (D_i3_801C4190[6] != 0) {
        player->unk_0D0 = 20.0f;
        Math_SmoothStepToF(&D_i3_801BFB60, -40.0f, 0.01f, 0.1f, 0.0f);
        player->vel.z += D_i3_801BFB60;
        if (player->vel.z <= 0.0f) {
            player->vel.z = 0.0f;
        }
    }
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->unk_060 = __sinf(player->unk_0F4 * 0.7f * 0.017453292f) * 0.5f;
    player->unk_088 += 10.0f;
    player->unk_0F4 += 8.0f + D_i3_801C41B8[24];
    player->unk_080 = -__sinf(player->unk_088 * 0.017453292f) * 0.5f;
    player->unk_0F0 = __sinf(player->unk_0F4 * 0.017453292f) * 1.5f;
    if (player->pos.y < (D_80177CC0 + 50.0f)) {
        Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114) * 0.017453292f, 0);
        Matrix_RotateX(gCalcMatrix, player->unk_0E4 * 0.017453292f, 1);
        sp8C.x = sp8C.y = 0.0f;
        sp8C.z = 70.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp8C, &sp80);
        if (player->unk_110 > 1.0f) {
            player->unk_178 -= 30.0f;
            func_i3_801AC8A8(player->pos.x + ((Rand_ZeroOne() - 0.5f) * 10.0f) + sp80.x,
                             player->pos.y + ((Rand_ZeroOne() - 0.5f) * 10.0f) + sp80.y,
                             player->unk_138 + ((Rand_ZeroOne() - 0.5f) * 10.0f) + (sp80.z * -1.0f), 0.4f, 1);
        } else {
            player->unk_178 -= 10.0f;
            if (!(gGameFrameCount & 7)) {
                func_i3_801AC8A8(player->pos.x + ((Rand_ZeroOne() - 0.5f) * 10.0f) + sp80.x,
                                 player->pos.y + ((Rand_ZeroOne() - 0.5f) * 10.0f) + sp80.y,
                                 player->unk_138 + ((Rand_ZeroOne() - 0.5f) * 20.0f) + sp80.z, 0.4f, 0);
            }
        }
    }
}

void func_i3_801AB9B0(Player* player) {
    func_8007D0E0(player->pos.x, player->pos.y, player->unk_138, 6.0f);
    func_8007B344(player->pos.x, player->pos.y, player->unk_138, 3.0f, 5);
    func_8007BFFC(player->pos.x, player->pos.y, player->unk_138, 0.0f, 0.0f, 0.0f, 3.0f, 80);
    func_8004D440(player);
}

void func_i3_801ABA40(PlayerShot* shot) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    Vec3f sp60;
    Vec3f sp54;

    D_i3_801C41B8[21] = shot->obj.pos.x;
    D_i3_801C41B8[22] = shot->obj.pos.y;
    D_i3_801C41B8[23] = shot->obj.pos.z;
    if ((fabsf(shot->obj.pos.z - (gPlayer->camEye.z - D_80177D20)) > 10000.0f) ||
        (fabsf(shot->obj.pos.y - gPlayer->camEye.y) > 1500.0f) ||
        ((fabsf(shot->obj.pos.x - gPlayer->camEye.x) > 4000.0f) && (shot->unk_5C != 0))) {
        shot->unk_64 = 0;
    }
    if (shot->obj.pos.y < gGroundLevel) {
        shot->obj.pos.y = gGroundLevel + 2.0f;
        func_800365E4(shot->obj.pos.x, shot->obj.pos.y, shot->obj.pos.z, 0.0f, 0.0f, 0.0f, 0.0f, 90.0f, 2.0f, 0, 0);
        func_8007CF30(shot->obj.pos.x, shot->obj.pos.y, shot->obj.pos.z, 1.2f);
        D_i3_801C4190[5] = D_i3_801C4190[3] = 0;
        func_80036318(shot);
    } else if (((shot->unk_64 == 0) || (D_i3_801C4454 == 0)) && (shot->unk_5C != 0)) {
        func_8007CF30(shot->obj.pos.x, shot->obj.pos.y, shot->obj.pos.z, 1.2f);
        D_i3_801C41B8[21] = D_i3_801C41B8[22] = D_i3_801C41B8[23] = 0.0f;
        D_i3_801C4190[5] = D_i3_801C4190[3] = 0;
        func_80036318(shot);
    } else {
        Math_SmoothStepToF(&shot->unk_48, 50.0f, 0.2f, 10.0f, 0.00001f);
        shot->obj.rot.z += shot->unk_48;
        if (!(gGameFrameCount & 1)) {
            func_80035DEC(shot->obj.pos.x, shot->obj.pos.y, shot->obj.pos.z);
        }
        func_80038140(shot);
        shot->unk_2C = (shot->obj.pos.y * 0.01f) + 1.2f;
        shot->unk_30 = (shot->obj.pos.y * 0.003f) + 0.6f;
        shot->unk_34 = (shot->obj.pos.y * 0.001f) + 0.6f;
        shot->unk_58 = (shot->obj.pos.y * -0.24f) + 150.0f;
        if (shot->unk_58 < 30) {
            shot->unk_58 = 30;
        }
        switch (shot->unk_5C) { /* irregular */
            case 0:
                shot->unk_64 = 50;
                shot->obj.rot.y = gPlayer->unk_0E8;
                shot->obj.rot.x = gPlayer->unk_0E4;
                shot->unk_5C++;
                break;
            case 1:
                if (D_i3_801C4190[3] != 0) {
                    sp7C = shot->obj.pos.x - D_i3_801C41B8[0];
                    sp78 = shot->obj.pos.y - D_i3_801C41B8[1];
                    sp74 = shot->obj.pos.z - D_i3_801C41B8[2];
                    sp6C = Math_RadToDeg(Math_Atan2F(sp7C, sp74));
                    sp70 = Math_RadToDeg(-Math_Atan2F(sp78, sqrtf(SQ(sp7C) + SQ(sp74))));
                    Math_SmoothStepToAngle(&shot->obj.rot.y, sp6C, 1.0f, 100.0f, 0.00001f);
                    Math_SmoothStepToAngle(&shot->obj.rot.x, sp70, 1.0f, 100.0f, 0.00001f);
                    if (shot->unk_64 < 2) {
                        if (D_i3_801C4458 < -30.0f) {
                            D_i3_801C4458 += 20.0f;
                        }
                        if (D_i3_801C445C < 1.0f) {
                            D_i3_801C445C += 0.25f;
                        }
                        shot->unk_64 = 10;
                    }
                }
                if (shot->unk_54 == 0) {
                    shot->unk_54 = -30.0f;
                }
                if (!(gGameFrameCount & 3)) {
                    Math_SmoothStepToF(&shot->unk_54, D_i3_801C4458, 0.1f, 50.0f, 0.0001f);
                }
                Matrix_RotateY(gCalcMatrix, shot->obj.rot.y * 0.017453292f, 0);
                Matrix_RotateX(gCalcMatrix, shot->obj.rot.x * 0.017453292f, 1);
                sp60.x = sp60.y = 0.0f;
                sp60.z = shot->unk_54;
                Matrix_MultVec3f(gCalcMatrix, &sp60, &sp54);
                shot->vel.x = sp54.x;
                shot->vel.y = sp54.y;
                shot->vel.z = sp54.z;
                if ((shot->obj.pos.y < (gGroundLevel + 30.0f)) && (shot->vel.y < 0.0f) && (D_i3_801C4190[3] != 0)) {
                    shot->vel.y = 0.0f;
                }
                break;
        }
        if (D_i3_801C4454 < 297) {
            D_80178370 = shot->obj.pos.x;
            D_80178374 = shot->obj.pos.y;
            D_80178378 = shot->obj.pos.z;
            D_80178360 = 0xFF;
            D_80178364 = 0xC8;
            D_80178368 = 0x96;
            Math_SmoothStepToF(&D_8017836C, 0.8f, 1.0f, 0.08f, 0.001f);
        }
        if (D_i3_801C4454 != 0) {
            D_i3_801C4454--;
        }
    }
}

void func_i3_801AC09C(Player* player) {
    s32 i;
    PlayerShot* shot;

    for (i = 15, shot = &gPlayerShots[15]; i < 16; i++, shot++) {
        if (shot->obj.status == 0) {
            func_800AC290(player, shot, 0.0f, 0.0f, PLAYERSHOT_8, 50.0f);
            Audio_PlaySfx(0x01000025, shot->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_i3_801C4190[5] = i + 1;
            D_i3_801C4454 = 300;
            D_i3_801C4458 = -100.0f;
            D_i3_801C445C = 0.1f;
            D_8017836C = 1.0f;
            break;
        }
    }
}

void func_i3_801AC18C(Player* player) {
    s32 i;

    for (i = 0; i < 3; i++) {
        if (gPlayerShots[i].obj.status == 0) {
            func_800AC290(player, &gPlayerShots[i], 0.0f, -10.0f, PLAYERSHOT_0, 120.0f);
            if (gLaserStrength[gPlayerNum] == LASERS_SINGLE) {
                Audio_PlaySfx(0x09400021, gPlayerShots[i].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                Audio_PlaySfx(0x09400027, gPlayerShots[i].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        }
    }
}

void func_i3_801AC274(Player* player) {
    s32 temp;
    s32 i;
    f32 tempy1;
    f32 tempy2;
    f32 tempx1;
    f32 tempx2;
    s32 var_v1;
    Vec3f sp68;
    Vec3f sp5C;
    Actor* actor;

    if ((gPlayerShots[D_i3_801C4190[5] - 1].obj.status == 0) && (D_i3_801C4190[5] != 0)) {
        D_i3_801C41B8[21] = D_i3_801C41B8[22] = D_i3_801C41B8[23] = 0.0f;
        D_i3_801C4190[5] = D_i3_801C4190[3] = 0;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114) * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, player->unk_0E4 * 0.017453292f, 1);
    sp68.x = 0.0f;
    sp68.y = 0.0f;
    sp68.z = -1200.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp68, &sp5C);
    D_i3_801C41B8[6] = player->pos.x + sp5C.x;
    D_i3_801C41B8[7] = player->pos.y + sp5C.y;
    D_i3_801C41B8[8] = player->unk_138 + sp5C.z;
    if (D_i3_801C4190[3] == 0) {
        
        if (D_i3_801C4190[0] == 0) {
            D_i3_801C41B8[0] = player->pos.x + sp5C.x;
            D_i3_801C41B8[1] = player->pos.y + sp5C.y;
            D_i3_801C41B8[2] = player->unk_138 + sp5C.z;
            D_i3_801C41B8[5] = 3.0f;
        }
        D_i3_801C41B8[11] = 10000.0f;
        temp = D_i3_801C4190[0];
        for (i = 0, actor = gActors; i < 60; i++, actor++) {
            if ((actor->obj.status == 2) && (actor->obj.id != 189)) {
                var_v1 = 1;
                if (actor->info.hitbox[1] == HITBOX_UNK_2) {
                    var_v1 = 5;
                }
                tempy1 = actor->obj.pos.y + actor->info.hitbox[var_v1+2] + actor->info.hitbox[var_v1+3] + 200.0f;
                tempy2 = actor->obj.pos.y + actor->info.hitbox[var_v1+2] - actor->info.hitbox[var_v1+3] - 200.0f;
                tempx1 = actor->obj.pos.x + actor->info.hitbox[var_v1+4] + actor->info.hitbox[var_v1+5] + 200.0f;
                tempx2 = actor->obj.pos.x + actor->info.hitbox[var_v1+4] - actor->info.hitbox[var_v1+5] - 200.0f;
                if ((actor->health > 0) && (actor->timer_0C2 < 5) && (actor->obj.pos.z <= (player->unk_138 - 300.0f)) &&
                    ((player->unk_138 - 7000.0f) <= actor->obj.pos.z) && (player->pos.y + sp5C.y <= tempy1) &&
                    (tempy2 <= player->pos.y + sp5C.y) && (player->pos.x + sp5C.x <= tempx1) &&
                    (tempx2 <= player->pos.x + sp5C.x) &&
                    (fabsf(player->unk_138 - actor->obj.pos.z - actor->info.hitbox[var_v1+0]) < D_i3_801C41B8[11])) {
                    D_i3_801C41B8[11] = fabsf(player->unk_138 - actor->obj.pos.z - actor->info.hitbox[var_v1+0]);
                    D_i3_801C4190[0] = actor->index + 1;
                    D_i3_801C4190[1] = actor->obj.id;
                }
            }
        }

        if ((D_i3_801C4190[0] != temp) && (D_i3_801C41B8[5] == 3.0f)) {
            Audio_PlaySfx(0x4900001B, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_i3_801C41B8[5] = 20.0f;
        }
        if (D_i3_801C4190[0] != 0) {
            func_i3_801A9C98(player);
        }
        if (gBosses[0].health != 0) {
            func_i3_801A9ED0(player);
        }
    } else {
        func_i3_801A9C98(player);
        func_i3_801A9DE4(player);
    }
    if (gInputPress->button & A_BUTTON) {
        func_i3_801AC18C(player);
    }
    if (gInputPress->button & B_BUTTON) {
        func_i3_801AC09C(player);
        if (D_i3_801C4190[0] != 0) {
            D_i3_801C4190[3] = 1;
        }
    }
    if (D_i3_801C4190[5] == 0) {
        D_80178370 = player->pos.x;
        D_80178374 = player->pos.y - 5.0f;
        D_80178378 = player->unk_138 - 60.0f;

        D_80178360 += 4;
        D_80178364 += 3;
        D_80178368 += 2;
        if (D_80178360 >= 255) {
            D_80178360 = 255;
        }
        if (D_80178364 > 200) {
            D_80178364 = 200;
        }
        if (D_80178368 > 150) {
            D_80178368 = 150;
        }
        Math_SmoothStepToF(&D_8017836C, 0.2f, 1.0f, 0.04f, 0.001f);
    }
}

void func_i3_801AC7C8(Effect *effect, f32 xPos, f32 yPos, f32 zPos, f32 scale2, s32 unk4E) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = 366;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->scale1 = Rand_ZeroOne() * 360.0f;
    effect->unk_4E = unk4E;
    effect->unk_4A = 40;
    effect->scale2 = scale2 * 0.2f;
    effect->unk_46 = 50;
    effect->unk_60.y = gPlayer->unk_114 + gPlayer->unk_0E8;
    if (effect->unk_4E == 2) {
        effect->unk_46 = 100;
    }
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i3_801AC8A8(f32 xPos, f32 yPos, f32 zPos, f32 scale2, s32 unk4E) {
    s32 i;

    for (i = 0; i < 95; i++) {
        if (gEffects[i].obj.status == 0) {
            func_i3_801AC7C8(&gEffects[i], xPos, yPos, zPos, scale2, unk4E);
            break;
        }
    }
}

// OBJ_EFFECT_366 action
void func_i3_801AC918(Effect *effect) {
    f32 temp_fs0;

    if (effect->unk_46 != 0) {
        effect->unk_46--;
    }
    switch (effect->unk_4E) {                            /* irregular */
        case 0:
            if (effect->vel.y < 5.0f) {
                effect->vel.y += 0.1f;
            }
            if (effect->unk_46 == 0) {
                Object_Kill(&effect->obj, effect->sfxPos);
            }
            effect->scale1 += 33.0f;
            temp_fs0 = __cosf(effect->scale1 * 0.017453292f) * 1.5f;
            effect->vel.x = __cosf(gPlayer->unk_058) * temp_fs0;
            effect->vel.z = __sinf(gPlayer->unk_058) * temp_fs0;
            break;
        case 1:
            if (effect->unk_46 == 0) {
                Object_Kill(&effect->obj, effect->sfxPos);
            }
            effect->unk_60.x += 0.07f;
            effect->scale1 += 33.0f;
            
            effect->vel.y = (__sinf(effect->scale1 * 0.017453292f) * 3.0f) + effect->unk_60.x;
            temp_fs0 = __cosf(effect->scale1 * 0.017453292f) * 3.0f;
            effect->vel.x = __cosf(effect->unk_60.y * 0.017453292f) * temp_fs0;
            effect->vel.z = -__sinf(effect->unk_60.y * 0.017453292f) * temp_fs0;
            break;
        case 2:
            if (effect->vel.y < 10.0f) {
                effect->vel.y += 0.2f;
            }
            if (effect->unk_46 == 0) {
                Object_Kill(&effect->obj, effect->sfxPos);
            }
            effect->scale1 += 55.0f;
            temp_fs0 = __cosf(effect->scale1 * 0.017453292f) * 2.5f;
            effect->vel.x = __cosf(gPlayer->unk_058) * temp_fs0;
            effect->vel.z = __sinf(gPlayer->unk_058) * temp_fs0;
            break;
    }
}

void func_i3_801ACBB4(Player *player) {
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -40.0f, 1);
    Matrix_RotateY(gGfxMatrix, 3.1415927f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_3000C70);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, -4.5f, 1.2f, 1);
    Matrix_RotateZ(gGfxMatrix, player->unk_178 * 0.017453292f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_3006DE0);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, 2.0f, 40.0f, 1);
    Matrix_RotateY(gGfxMatrix, -player->unk_180 * 0.017453292f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_3006C70);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, -19.0f, -3.6f, 1.2f, 1);
    Matrix_RotateX(gGfxMatrix, player->unk_17C * 0.017453292f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_3000AF0);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 19.0f, -3.6f, 1.2f, 1);
    Matrix_RotateX(gGfxMatrix, player->unk_17C * 0.017453292f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_3006AF0);
    Matrix_Pop(&gGfxMatrix);
}

void func_i3_801ACE50(Player *player) {
    f32 pad;
    f32 pad2;
    Vec3f sp54;
    Vec3f sp48;
    
    player->boost = 0;
    if (player->timer_27C != 0) {
        player->timer_27C--;
        player->unk_110 += 0.3f;
        Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114) * 0.017453292f, 0);
        Matrix_RotateX(gCalcMatrix, player->unk_0E4 * 0.017453292f, 1);
        sp54.x = sp54.y =0.0f;
        sp54.z = 70.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
        func_i3_801AC8A8(player->pos.x + ((Rand_ZeroOne() - 0.5f) * 10.0f) + sp48.x, player->pos.y + ((Rand_ZeroOne() - 0.5f) * 10.0f) + sp48.y, player->unk_138 + ((Rand_ZeroOne() - 0.5f) * 10.0f) + (sp48.z * -1.0f), 0.4f, 1);
        Math_SmoothStepToF(&player->unk_08C, -130.0f, 0.1f, 10.0f, 0.00001f);
        player->unk_130 -= player->unk_258;
        player->unk_258 += 0.2f;
        if (player->unk_258 > 50.0f) {
            player->unk_258 = 50.0f;
        }
        if (!(gGameFrameCount & 1) && (gBlurAlpha > 64)) {
            gBlurAlpha -= 1;
        }
    } else {
        player->unk_258 = 0.0f;
        if (gBlurAlpha < 255) {
            gBlurAlpha += 4;
            if (gBlurAlpha >= 252) {
                gBlurAlpha = 255;
            }
        }
        if (!(gBrakeButton[player->num] & gInputHold->button) && !(gBoostButton[player->num] & gInputHold->button)) {
            player->unk_2B4 = 1;
            if (player->unk_2BC == 0.0f) {
                player->unk_2B4 = 0;
            }
        }
        if ((gBoostButton[player->num] & gInputHold->button) && (player->unk_230 == 0) && (player->state_1C8 != PLAYERSTATE_1C8_5) && (player->unk_2B4 == 0)) {
            if (player->unk_2BC == 0) {
                Audio_PlaySfx(0x09004030, player->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            player->unk_2BC += 3.0f;
            if (player->unk_2BC > 90.0f) {
                player->unk_2BC = 90.0f;
                player->unk_2B4 = 1;
            }
            player->unk_110 += 2.0f;
            if (player->unk_110 > 10.0f) {
                player->unk_110 = 10.0f;
            }
            Math_SmoothStepToF(&D_i3_801C41B8[27], 10.0f, 0.1f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&player->unk_08C, -200.0f, 0.1f, D_i3_801C41B8[27], 0.00001f);
            player->boost = 1;
            Math_SmoothStepToF(&D_801779A8[0], 50.0f, 1.0f, 10.0f, 0.0f);
        } else {
            D_i3_801C41B8[27] = 0.0f;
            if (player->unk_2BC > 0.0f) {
                player->unk_2BC -= 0.50f;
                if (player->unk_2BC <= 0.0f) {
                    player->unk_2BC = 0.0f;
                    player->unk_2B4 = 0;
                }
            }
            if (player->unk_110 > 0.0f) {
                player->unk_110 -= 1.0f;
                if (player->unk_110 < 0.0f) {
                    player->unk_110 = 0.0f;
                }
            }
        }
    }
    Math_SmoothStepToF(&player->unk_08C, 0.0f, 0.1f, 2.0f, 0.0f);
}

void func_i3_801AD328(Player *player) {
    player->brake = 0;
    if ((gBrakeButton[player->num] & gInputHold->button) && (player->unk_230 == 0) && (player->state_1C8 != PLAYERSTATE_1C8_5) && (player->unk_2B4 == 0)) {
        if (player->unk_2BC == 0) {
            Audio_PlaySfx(0x09004031, player->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        player->unk_2BC += 3.0f;
        if (player->unk_2BC > 90.0f) {
            player->unk_2BC = 90.0f;
            player->unk_2B4 = 1;
        }
        player->unk_110 -= 1.0f;
        if (player->unk_110 < -20.0f) {
            player->unk_110 = -20.0f;
        }
        Math_SmoothStepToF(&D_i3_801C41B8[28], 10.0f, 1.0f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&player->unk_08C, 180.0f, 0.1f, D_i3_801C41B8[28], 0.0f);
        player->brake = 1;
        Math_SmoothStepToF(&D_801779A8[0], 25.0f, 1.0f, 5.0f, 0.0f);
    } else {
        if (player->unk_2BC > 0.0f) {
            player->unk_2BC -= 0.5f;
            if (player->unk_2BC <= 0.0f) {
                player->unk_2BC = 0.0f;
                player->unk_2B4 = 0;
                D_i3_801C41B8[28] = 0.0f;
            }
            Math_SmoothStepToF(&D_i3_801C41B8[28], 0.0f, 1.0f, 1.0f, 0.0001f);
            if (player->unk_110 < 0.0f) {
                player->unk_110 += 0.5f;
                if (player->unk_110 > 0.0f) {
                    player->unk_110 = 0.0f;
                }
            }
        }
    }
    Math_SmoothStepToF(&player->unk_08C, 0.0f, 0.1f, 2.0f, 0.0f);
}

// #pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AD598.s")

void func_i3_801AD598(Actor *actor) {
    s32 i;

    D_i3_801C27C0 = &D_i3_801C27C8[50 * actor->iwork[0]];
    for(i = 50 * actor->iwork[0]; i < 50 * actor->iwork[0] + 50; i++, D_i3_801C27C0++) {
        D_i3_801C27C0->pos.x = actor->obj.pos.x;
        D_i3_801C27C0->pos.y = actor->obj.pos.y;
        D_i3_801C27C0->pos.z = actor->obj.pos.z;
        D_i3_801C27C0->rot.x = actor->obj.rot.x;
        D_i3_801C27C0->rot.y = actor->obj.rot.y;
        D_i3_801C27C0->rot.z = actor->obj.rot.z;
        D_i3_801C27C0->rot.x = actor->unk_0F4.x;
        D_i3_801C27C0->rot.y = actor->unk_0F4.y;
        D_i3_801C27C0->rot.z = actor->unk_0F4.z;
    }
}

void func_i3_801AD688(Actor *actor) {
    func_i3_801AD598(actor);
    actor->iwork[1] = 10;
    actor->scale = 1.0f;
}

// OBJ_ACTOR_255 action
void func_i3_801AD6C0(Actor *actor) {
    s32 var_v0;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;

    var_v0 = actor->iwork[2] - 1;
    if ((D_i3_801C42A0[23] == 0) || (gActors[var_v0].unk_0B8  >= 4)) {
        actor->timer_0C2 = 30000;
        actor->unk_0B8 = 2;
        actor->vel.y = 0.0f;
        actor->vel.x = 0.0f;
        actor->vel.z = 0.0f;
    }
    if ((gPlayer->unk_138 + 500.0f) <= actor->obj.pos.z) {
        Object_Kill(&actor->obj, actor->sfxPos);
    }
    actor->unk_04E++;
    if (actor->unk_04E >= 50) {
        actor->unk_04E = 0;
    }
    switch (actor->unk_0B8) {
        case 0:
            if (actor->timer_0BC != 0) {
                actor->unk_0F4.x += D_i3_801C4308[10];
                actor->unk_0F4.z += 10.0f;
                actor->unk_0F4.z = Math_ModF(actor->unk_0F4.z, 360.0f);
            } else {
                actor->health = 30;
                Audio_PlaySfx(0x31000047, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actor->unk_0B8++;
            }
            break;
        case 1:
            if (actor->unk_0D0 != 0) {
                if (actor->health > 0) {
                    actor->unk_0D0 = 0;
                    actor->timer_0C6 = 15;
                    actor->health -= actor->damage;
                    Audio_PlaySfx(0x29034045, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    if (actor->health <= 0) {
                        actor->timer_0C2 = 30000;
                        actor->unk_0B8 = 2;
                        actor->vel.y = 0.0f;
                        actor->vel.x = 0.0f;
                        actor->vel.z = 0.0f;
                        Audio_PlaySfx(0x2902A046, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }
            }
            if (actor->obj.pos.z <= (gPlayer->unk_138 - 200.0f)) {
                actor->fwork[7] = sp80 = gPlayer->pos.x + ((Rand_ZeroOne() - 0.5f) * 100.0f) - actor->obj.pos.x;
                actor->fwork[8] = sp7C = gPlayer->pos.y - 30.0f - actor->obj.pos.y;
                actor->fwork[9] = sp78 = gPlayer->unk_138 - actor->obj.pos.z;
            } else {
                sp80 = actor->fwork[7];
                sp7C = actor->fwork[8];
                sp78 = actor->fwork[9] + 600.0f;
            }
            Math_RadToDeg(Math_Atan2F(sp80, sp78));
            sp70 = sqrtf(SQ(sp80) + SQ(sp78));
            Math_RadToDeg(-Math_Atan2F(sp7C, sp70));
            actor->fwork[0] += (actor->iwork[0] + 1) * 5.0f;
            actor->fwork[1] += 10.0f + (actor->iwork[0] + 1) * 5.0f;
            actor->fwork[5] = (actor->iwork[0] + 1) * 0.2f;
            actor->fwork[6] = (actor->iwork[0] + 1) * 0.2f;
            sp7C = __sinf(actor->fwork[0] * 0.017453292f) * sp70 * actor->fwork[5];
            sp74 = __cosf(actor->fwork[1] * 0.017453292f) * sp70 * actor->fwork[6];
            sp80 = __cosf(actor->unk_0F4.y * 0.017453292f) * sp74;
            sp78 = -__sinf(actor->unk_0F4.y * 0.017453292f) * sp74;
            if (sp7C < 20.0f) {
                sp7C = 20.0f;
            }
            if ((Rand_ZeroOne() < 0.7) && (actor->obj.rot.z == 0.0f)) {
                actor->fwork[2] = 360.0f;
            }
            Math_SmoothStepToF(&actor->unk_0F4.z, actor->fwork[2], 0.1f, 10.0f, 0.001f);
            if (actor->unk_0F4.z >= 360.0f) {
                actor->unk_0F4.z = 0.0f;
                actor->fwork[2] = 0.0f;
            }
            sp68 = Math_RadToDeg(Math_Atan2F(gPlayer->pos.x + sp80 + ((Rand_ZeroOne() - 0.5f) * 200.0f) - actor->obj.pos.x, gPlayer->unk_138 + sp78 - actor->obj.pos.z));
            sp6C = Math_RadToDeg(-Math_Atan2F(gPlayer->pos.y - 30.0f + sp7C - actor->obj.pos.y, sp70));
            if (gPlayer->unk_138 <= actor->obj.pos.z) {
                sp68 = actor->unk_0F4.y;
                sp6C = actor->unk_0F4.x;
            }
            Math_SmoothStepToAngle(&actor->unk_0F4.y, sp68, 1.0f, 5.0f, 0.001f);
            Math_SmoothStepToAngle(&actor->unk_0F4.x, sp6C, 1.0f, 5.0f, 0.001f);
            Matrix_RotateY(gCalcMatrix, actor->unk_0F4.y * 0.017453292f, 0);
            Matrix_RotateX(gCalcMatrix, actor->unk_0F4.x * 0.017453292f, 1);
            sp5C.x = 0.0f;
            sp5C.y = 0.0f;
            sp5C.z = 40.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp5C, &sp50);
            sp5C.z = (actor->iwork[0] + 1) * (Rand_ZeroOne() * 10.0f) + 10.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp5C, &sp44);
            actor->vel.x = sp50.x;
            actor->vel.y = sp50.y;
            actor->vel.z = sp44.z;
            break;
        case 2:
            if (actor->timer_0C6 == 0) {
                actor->timer_0C6 = 15;
            }
            if (actor->timer_0BC == 0) {
                var_v0 = actor->iwork[0] * 50 + actor->unk_04E - D_i3_801BFB64[actor->iwork[1]];
                if (var_v0 < actor->iwork[0] * 50) {
                    if (var_v0 > 0) {
                        var_v0 -= actor->iwork[0] * 50;
                    }
                    var_v0 = var_v0 + (actor->iwork[0] + 1) * 50;
                }
                D_i3_801C27C0 = &D_i3_801C27C8[var_v0];
                func_800815DC();
                actor->iwork[1]--;
                if (actor->iwork[1] <= 0) {
                    actor->unk_044 = 0;
                    actor->unk_0D4 = 2;
                    func_80066254(actor);
                    Object_Kill(&actor->obj, actor->sfxPos);
                }
                actor->timer_0BC = 4;
                func_8007D0E0(D_i3_801C27C0->pos.x, D_i3_801C27C0->pos.y, D_i3_801C27C0->pos.z, 3.0f);
                Audio_PlaySfx(0x29018049, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
    }
    D_i3_801C27C0 = &D_i3_801C27C8[50 * actor->iwork[0] + actor->unk_04E];
    D_i3_801C27C0->pos.x = actor->obj.pos.x;
    D_i3_801C27C0->pos.y = actor->obj.pos.y;
    D_i3_801C27C0->pos.z = actor->obj.pos.z;
    D_i3_801C27C0->rot.x = actor->unk_0F4.x;
    D_i3_801C27C0->rot.y = actor->unk_0F4.y;
    D_i3_801C27C0->rot.z = actor->unk_0F4.z;
}

void func_i3_801ADF7C(f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, u8 type, s32 flag, f32 scale, s32 index) {
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, xPos, yPos, zPos + D_80177D20, 1);
    Matrix_RotateY(gGfxMatrix, 0.017453292f * yRot, 1);
    Matrix_RotateX(gGfxMatrix, 0.017453292f * xRot, 1);
    Matrix_RotateZ(gGfxMatrix, 0.017453292f * zRot, 1);
    Graphics_SetScaleMtx(scale);
    if (index < 2) {
        if (!flag) {
            RCP_SetupDL(&gMasterDisp, 0x39);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x3D);
            GPC(255, 0, 0, 255);
        }
    } else {
        if (!flag) {
            RCP_SetupDL(&gMasterDisp, 0x39);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x3D);
            GPC(255, 0, 0, 255);
        }
    }
    GDL(D_i3_801BFB9C[type]);
    Matrix_Pop(&gGfxMatrix);
}

// OBJ_ACTOR_255 draw
void func_i3_801AE168(Actor *actor) {
    f32 xz;
    f32 yRot;
    f32 xRot;
    s32 i;
    s32 index;

    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);

    for(i = 0; i <= actor->iwork[1]; i++) {
        if ((actor->iwork[1] != 10) && (i == 0)) {
            i = 1;
        }
        index = actor->iwork[0] * 50 + actor->unk_04E - D_i3_801BFB64[actor->iwork[1]];
        if (index < actor->iwork[0] * 50) {
            if (index > 0) {
                index -= actor->iwork[0] * 50;
            }
            index = index + (actor->iwork[0] + 1) * 50;
            }
        D_i3_801C27C0 = &D_i3_801C27C8[index];
        xRot = D_i3_801C27C0->rot.x;
        yRot = D_i3_801C27C0->rot.y;
        if (i >= 2) {
            yRot = RAD_TO_DEG(Math_Atan2F(gPlayer->camEye.x - D_i3_801C27C0->pos.x, gPlayer->camEye.z - (D_i3_801C27C0->pos.z + D_80177D20)));
            xz = sqrtf(SQ(gPlayer->camEye.x - D_i3_801C27C0->pos.x) + SQ(gPlayer->camEye.z - (D_i3_801C27C0->pos.z + D_80177D20)));
            xRot = RAD_TO_DEG(-Math_Atan2F(gPlayer->camEye.y - D_i3_801C27C0->pos.y, xz));
        }
        func_i3_801ADF7C(D_i3_801C27C0->pos.x, D_i3_801C27C0->pos.y, D_i3_801C27C0->pos.z, xRot, yRot, D_i3_801C27C0->rot.z, D_i3_801BFB90[i], actor->timer_0C6 & 1, actor->scale, i);
    }
}

void func_i3_801AE3AC(Actor *actor) {
    actor->fwork[1] = 1.0f;
    actor->obj.rot.x = 336.0f;
    actor->scale = 0.5f;
}

// OBJ_ACTOR_256 action
void func_i3_801AE3D8(Actor *actor) {
    s32 i;

    switch (actor->unk_0B8) {
        case 0:
            actor->obj.pos.y = fabsf(D_i3_801C4308[10] * 15.0f) + 347.0f;
            if (actor->obj.pos.y >= 757.0f) {
                actor->obj.pos.y = 757.0f;
            }
            if (actor->obj.pos.y <= 347.0f) {
                actor->obj.pos.y = 347.0f;
            }
            actor->scale = fabsf(D_i3_801C4308[10] / -28.0f) + 0.5f;
            if (actor->scale > 1.3f) {
                actor->scale = 1.3f;
            }
            if (actor->scale <= 0.5f) {
                actor->scale = 0.5f;
            }
            if (gBosses[0].timer_052 == 0) {
                actor->health = 0;
                if (actor->info.hitbox[10] != 116.0f) {
                     actor->info.hitbox[10] = 116.0f;
                }
            }
            if (actor->unk_0D0 != 0){
                actor->unk_0D0 = 0;
                if ((fabsf(D_i3_801C4308[10]) >= 6.0f) && (gBosses[0].actionState >= 10) && (gBosses[0].swork[0] < 2)) {
                    actor->timer_0C6 = 30;
                    actor->iwork[1] = 0;
                    D_i3_801C4308[79] -= 5.0f;
                    Audio_PlaySfx(0x29036050, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    if (D_i3_801C4308[79] <= -28.0f) {
                        D_i3_801C4308[79] = -28.0f;
                    }
                    if (D_i3_801C4308[10] <= -23.0f) {
                        if (gBosses[0].timer_052 == 0) {
                            gBosses[0].timer_052 = 72;
                            actor->health = 10;
                            for(i = 0; i < 60; i++) {
                                if((gActors[i].obj.id == 256) && (actor->index != gActors[i].index)) {
                                    gActors[i].health = 10;
                                }
                            }
                        } else {
                            actor->iwork[1] = 0;
                            actor->timer_0C6 = 0;
                        }
                        if (gBosses[0].swork[0] == 0) {
                            gBosses[0].swork[0] = 1;
                            actor->info.hitbox[10] = 300.0f;
                            if (actor->iwork[23] == 0) {
                                func_800BA808(gMsg_ID_15120, RCID_SLIPPY);
                            }
                            actor->iwork[23]++;
                            actor->iwork[23] &= 1;
                        } else if (actor->damage == 31) {
                            actor->health -= actor->damage;
                            func_800BA808(gMsg_ID_15130, RCID_FALCO);
                            if (actor->health <= 0) {
                                gBosses[0].swork[0] = 2;
                                actor->health = 0;
                                actor->timer_0C6 = 300;
                                actor->fwork[2] = actor->scale;
                                Audio_PlaySfx(0x19000033, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                actor->unk_0B8++;

                            }
                        }
                    }
                }
            }
            break;
        case 1:
            if (!(gGameFrameCount & 1)) {
                func_8007C120(actor->obj.pos.x, actor->fwork[0] + actor->obj.pos.y, actor->obj.pos.z, actor->vel.x, actor->vel.y, actor->vel.z, 0.1f, 10);
                func_8007C120(actor->obj.pos.x, actor->obj.pos.y + (actor->fwork[0] * -1.0f), actor->obj.pos.z + 200.0f, actor->vel.x, actor->vel.y, actor->vel.z, 0.1f, 10);
                actor->fwork[0] += 40.0f;
            }
            if ((actor->fwork[2] * 400.0f) <= actor->fwork[0]) {
                actor->timer_0BC = 20;
                actor->unk_0B8++;
            }
            break;
        case 2:
            if (actor->timer_0BC == 0) {
                for(i = 0; i < 6; i++) {
                    func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y + 450.0f, actor->obj.pos.z + 50.0f, 50.0f);
                    func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y - 420.0f, actor->obj.pos.z + 300.0f, 50.0f);
                }
                actor->fwork[3] = 0.7f;
                actor->timer_0BC = 10;
                
                actor->unk_0B8++;
                
            }
            break;
        case 3:
            if (actor->timer_0BC == 0) {
                Math_SmoothStepToF(&actor->fwork[3], 0.0f, 0.1f, 2.0f, 0);
                Math_SmoothStepToF(&actor->scale, 0.0f, actor->fwork[3], 10.0f, 0);
                if (actor->scale <= 0.2f) {
                    func_8007BC7C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 50.0f);
                    func_8007BC7C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 50.0f);
                    func_8007BC7C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 50.0f);
                    Object_Kill(&actor->obj, actor->sfxPos);
                    D_i3_801C42A0[23]--;
                    gBosses[0].swork[0] = 3;
                    gBosses[0].swork[19] = 30;
                    D_i3_801C4308[79] = 0.0f;
                    if (D_i3_801C42A0[23] == 0) {
                        D_i3_801C4308[79] = -180.0f;
                        for(i = 0; i < 60; i++) {
                            func_i3_801AC8A8(gBosses[0].obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 1800.0f), gBosses[0].obj.pos.y + 400.0f + ((Rand_ZeroOne() - 0.5f) * 1000.0f), gBosses[0].obj.pos.z + 700.0f + ((Rand_ZeroOne() - 0.5f) * 1000.0f), 7.0f, 2);
                        }
                        gBosses[0].timer_052 = 0;
                        gBosses[0].timer_056 = 0x3C;
                        gBosses[0].actionState = 0xE;
                    }
                    D_i3_801C4308[80] += D_i3_801BFBA8[actor->iwork[0]];
                }
            }
            break;
    }
}

// OBJ_ACTOR_256 draw
void func_i3_801AEB44(Actor *actor) {
    f32 var_fv0;
    u8 var_t1;
    u8 i;
    Vtx *var_t5;
    Vtx *temp_v1_2;

    if ((actor->timer_0C6 != 0) && (actor->unk_0B8 == 0) && (D_80177854 != 100)) {
        actor->iwork[1]++;
        actor->iwork[1] %= 8;
    }
    temp_v1_2 = SEGMENTED_TO_VIRTUAL(D_6019078);
    if (actor->iwork[1] < 4) {
        var_t5 = SEGMENTED_TO_VIRTUAL(D_6018C78);
    } else {
        var_t5 = SEGMENTED_TO_VIRTUAL(D_6018878);
    }
    var_t1 = actor->iwork[1] % 4;
    if (var_t1 >= 3) {
        var_t1 = 4 - var_t1;
    }
    var_fv0 = actor->timer_0C6 / 60.0f;
    if (var_fv0 < 0.1f) {
        var_fv0 = 0.1f;
    }
    for(i = 0; i < 28; i += 1) {
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.ob[0] = temp_v1_2[i].v.ob[0] + (s16)((((var_t5[i].n.ob[0] - temp_v1_2[i].n.ob[0]) * var_t1) / 2) * var_fv0);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.ob[1] = temp_v1_2[i].n.ob[1] + (((var_t5[i].n.ob[1] - temp_v1_2[i].n.ob[1]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.ob[2] = temp_v1_2[i].n.ob[2] + (((var_t5[i].n.ob[2] - temp_v1_2[i].n.ob[2]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.flag  = temp_v1_2[i].n.flag;
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.tc[0] = temp_v1_2[i].n.tc[0] + (((var_t5[i].n.tc[0] - temp_v1_2[i].n.tc[0]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.tc[1] = temp_v1_2[i].n.tc[1] + (((var_t5[i].n.tc[1] - temp_v1_2[i].n.tc[1]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.n[0]  = temp_v1_2[i].n.n[0]  + (((var_t5[i].n.n[0]  - temp_v1_2[i].n.n[0] ) * var_t1) / 2) ;
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.n[1]  = temp_v1_2[i].n.n[1]  + (((var_t5[i].n.n[1]  - temp_v1_2[i].n.n[1] ) * var_t1) / 2) ;
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.n[2]  = temp_v1_2[i].n.n[2]  + (((var_t5[i].n.n[2]  - temp_v1_2[i].n.n[2] ) * var_t1) / 2) ;
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.a     = temp_v1_2[i].n.a;
    } 
    Matrix_Scale(gGfxMatrix, actor->fwork[1] - 0.25f + ((1.5f - actor->scale) * 0.5f), actor->scale, actor->fwork[1], 1);
    if (actor->unk_0B8 != 0) {
        RCP_SetupDL(&gMasterDisp, 0x20);
    } else if (gBosses[0].swork[0] == 1) {
        RCP_SetupDL(&gMasterDisp, 4);
    } else if (!(actor->timer_0C6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x1D);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x16);
        GPC(255, 0, 0, 255);
    }
    Matrix_SetGfxMtx(&gMasterDisp);
    gDPSetTextureLUT(gMasterDisp++, G_TT_RGBA16);
    gDPLoadTLUT_pal256(gMasterDisp++, D_6008FC8);
    gDPLoadTextureBlock(gMasterDisp++, D_6008EC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD);
    gSPVertex(gMasterDisp++, D_i3_801C3A88[actor->iwork[0]][gSysFrameCount & 1], 14, 0);
    gSP1Triangle(gMasterDisp++, 0, 1, 2, 0);
    gSP1Triangle(gMasterDisp++, 3, 1, 0, 0);
    gSP1Triangle(gMasterDisp++, 4, 5, 0, 0);
    gSP1Triangle(gMasterDisp++, 0, 6, 7, 0);
    gSP1Triangle(gMasterDisp++, 2, 6, 0, 0);
    gSP1Triangle(gMasterDisp++, 0, 5, 3, 0);
    gSP1Triangle(gMasterDisp++, 0, 8, 4, 0);
    gSP1Triangle(gMasterDisp++, 7, 8, 0, 0);
    gSP1Triangle(gMasterDisp++, 9, 4, 8, 0);
    gSP1Triangle(gMasterDisp++, 8, 7, 10, 0);
    gSP1Triangle(gMasterDisp++, 8, 11, 9, 0);
    gSP1Triangle(gMasterDisp++, 10, 11, 8, 0);
    gSP1Triangle(gMasterDisp++, 12, 4, 9, 0);
    gSP1Triangle(gMasterDisp++, 13, 5, 4, 0);
    gSP1Triangle(gMasterDisp++, 4, 12, 13, 0);
    gSP1Triangle(gMasterDisp++, 3, 5, 13, 0);
    gSP1Triangle(gMasterDisp++, 13, 6, 2, 0);
    gSP1Triangle(gMasterDisp++, 7, 6, 13, 0);
    gSP1Triangle(gMasterDisp++, 13, 12, 7, 0);
    gSP1Triangle(gMasterDisp++, 10, 7, 12, 0);
    gSPVertex(gMasterDisp++, &D_i3_801C3A88[actor->iwork[0]][gSysFrameCount & 1][1], 3, 0);
    gSPVertex(gMasterDisp++, &D_i3_801C3A88[actor->iwork[0]][gSysFrameCount & 1][9], 2, 3);
    gSPVertex(gMasterDisp++, &D_i3_801C3A88[actor->iwork[0]][gSysFrameCount & 1][12], 8, 5);
    gSP1Triangle(gMasterDisp++, 0, 2, 7, 0);
    gSP1Triangle(gMasterDisp++, 7, 2, 8, 0);
    gSP1Triangle(gMasterDisp++, 6, 8, 2, 0);
    gSP1Triangle(gMasterDisp++, 8, 1, 9, 0);
    gSP1Triangle(gMasterDisp++, 1, 8, 6, 0);
    gSP1Triangle(gMasterDisp++, 5, 10, 4, 0);
    gSP1Triangle(gMasterDisp++, 3, 10, 5, 0);
    gSP1Triangle(gMasterDisp++, 8, 12, 7, 0);
    gSP1Triangle(gMasterDisp++, 7, 11, 0, 0);
    gSP1Triangle(gMasterDisp++, 0, 11, 9, 0);
    gSP1Triangle(gMasterDisp++, 9, 1, 0, 0);
    gSP1Triangle(gMasterDisp++, 9, 12, 8, 0);
    gDPLoadTLUT_pal256(gMasterDisp++, D_6019338);
    gDPLoadTextureBlock(gMasterDisp++, D_6019238, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD);
    gSPVertex(gMasterDisp++, &D_i3_801C3A88[actor->iwork[0]][gSysFrameCount & 1][20], 8, 0);
    gSP1Triangle(gMasterDisp++, 0, 1, 2, 0);
    gSP1Triangle(gMasterDisp++, 2, 3, 0, 0);
    gSP1Triangle(gMasterDisp++, 4, 5, 6, 0);
    gSP1Triangle(gMasterDisp++, 6, 7, 4, 0);
    gDPPipeSync(gMasterDisp++);
    gDPSetTextureLUT(gMasterDisp++, G_TT_NONE);
}

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
