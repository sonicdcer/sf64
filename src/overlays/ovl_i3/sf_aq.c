// #include "prevent_bss_reordering.h"
#include "global.h"
#include "assets/ast_aq.h"
#include "assets/ast_8E1F80.h"

const char D_i3_801C1A30[] = "プレイヤーのすべてをクリア \n";
const char D_i3_801C1A50[] = "i %d\n";

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
f32 D_i3_801C0060[7][2] = {
    { 50.0f, 8.0f }, { 50.0f, 8.0f }, { 10.0f, 1.0f }, { 20.0f, 2.0f },
    { 20.0f, 2.0f }, { 20.0f, 2.0f }, { 50.0f, 2.0f },
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

// /* 0x1 */ ROM_SEGMENT(ast_873CB0),
// /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
// /* 0x3 */ ROM_SEGMENT(ast_8E1F80),
// /* 0x4 */ ROM_SEGMENT(ast_918430),
// /* 0x5 */ ROM_SEGMENT(ast_CD2410),
// /* 0x6 */ ROM_SEGMENT(ast_A58F60),
// /* 0x7 */ NO_SEGMENT,
// /* 0x8 */ NO_SEGMENT,
// /* 0x9 */ NO_SEGMENT,
// /* 0xA */ NO_SEGMENT,
// /* 0xB */ NO_SEGMENT,
// /* 0xC */ NO_SEGMENT,
// /* 0xD */ NO_SEGMENT,
// /* 0xE */ ROM_SEGMENT(ast_92EC40),
// /* 0xF */ NO_SEGMENT







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
            spA8[i] = RAND_FLOAT_CENTERED(70.0f);
            sp64[i] = RAND_FLOAT_CENTERED(70.0f);
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
        temp_fs1 = SIN_DEG(i * 10.0f) * radius;
        temp_fs0 = COS_DEG(i * 10.0f) * radius;
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

    gTeamShields[1] = gTeamShields[2] = gTeamShields[3] = 255;
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
            ((D_i3_801C4190[4] == 121) && (gBosses[0].swork[12] == 0))) {
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
                            ((j == 119) && (gBosses[0].swork[12] == 0))) {
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
                Audio_PlaySfx(0x9404028, player->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4 + player->unk_4D8) * M_DTOR), 1);
    sp8C.x = sp8C.y = 0.0f;
    sp8C.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp8C, &sp68);
    sp68.x *= 1.4f;
    sp68.y *= 1.4f;
    Matrix_RotateY(gCalcMatrix, player->unk_114 * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, player->unk_120 * M_DTOR, 1);
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
    player->unk_060 = SIN_DEG(player->unk_0F4 * 0.7f) * 0.5f;
    player->unk_088 += 10.0f;
    player->unk_0F4 += 8.0f + D_i3_801C41B8[24];
    player->unk_080 = -SIN_DEG(player->unk_088) * 0.5f;
    player->unk_0F0 = SIN_DEG(player->unk_0F4) * 1.5f;
    if (player->pos.y < (D_80177CC0 + 50.0f)) {
        Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114) * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, player->unk_0E4 * M_DTOR, 1);
        sp8C.x = sp8C.y = 0.0f;
        sp8C.z = 70.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp8C, &sp80);
        if (player->unk_110 > 1.0f) {
            player->unk_178 -= 30.0f;
            func_i3_801AC8A8(player->pos.x + RAND_FLOAT_CENTERED(10.0f) + sp80.x,
                             player->pos.y + RAND_FLOAT_CENTERED(10.0f) + sp80.y,
                             player->unk_138 + RAND_FLOAT_CENTERED(10.0f) + (sp80.z * -1.0f), 0.4f, 1);
        } else {
            player->unk_178 -= 10.0f;
            if (!(gGameFrameCount & 7)) {
                func_i3_801AC8A8(player->pos.x + RAND_FLOAT_CENTERED(10.0f) + sp80.x,
                                 player->pos.y + RAND_FLOAT_CENTERED(10.0f) + sp80.y,
                                 player->unk_138 + RAND_FLOAT_CENTERED(20.0f) + sp80.z, 0.4f, 0);
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
    if ((fabsf(shot->obj.pos.z - (gPlayer[0].camEye.z - D_80177D20)) > 10000.0f) ||
        (fabsf(shot->obj.pos.y - gPlayer[0].camEye.y) > 1500.0f) ||
        ((fabsf(shot->obj.pos.x - gPlayer[0].camEye.x) > 4000.0f) && (shot->unk_5C != 0))) {
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
                shot->obj.rot.y = gPlayer[0].unk_0E8;
                shot->obj.rot.x = gPlayer[0].unk_0E4;
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
                Matrix_RotateY(gCalcMatrix, shot->obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, shot->obj.rot.x * M_DTOR, 1);
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
            D_80178360 = 255;
            D_80178364 = 200;
            D_80178368 = 150;
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
            Audio_PlaySfx(0x1000025, shot->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
                Audio_PlaySfx(0x9400021, gPlayerShots[i].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                Audio_PlaySfx(0x9400027, gPlayerShots[i].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, player->unk_0E4 * M_DTOR, 1);
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
                tempy1 = actor->obj.pos.y + actor->info.hitbox[var_v1 + 2] + actor->info.hitbox[var_v1 + 3] + 200.0f;
                tempy2 = actor->obj.pos.y + actor->info.hitbox[var_v1 + 2] - actor->info.hitbox[var_v1 + 3] - 200.0f;
                tempx1 = actor->obj.pos.x + actor->info.hitbox[var_v1 + 4] + actor->info.hitbox[var_v1 + 5] + 200.0f;
                tempx2 = actor->obj.pos.x + actor->info.hitbox[var_v1 + 4] - actor->info.hitbox[var_v1 + 5] - 200.0f;
                if ((actor->health > 0) && (actor->timer_0C2 < 5) && (actor->obj.pos.z <= (player->unk_138 - 300.0f)) &&
                    ((player->unk_138 - 7000.0f) <= actor->obj.pos.z) && (player->pos.y + sp5C.y <= tempy1) &&
                    (tempy2 <= player->pos.y + sp5C.y) && (player->pos.x + sp5C.x <= tempx1) &&
                    (tempx2 <= player->pos.x + sp5C.x) &&
                    (fabsf(player->unk_138 - actor->obj.pos.z - actor->info.hitbox[var_v1 + 0]) < D_i3_801C41B8[11])) {
                    D_i3_801C41B8[11] = fabsf(player->unk_138 - actor->obj.pos.z - actor->info.hitbox[var_v1 + 0]);
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

void func_i3_801AC7C8(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 scale2, s32 state) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = 366;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->scale1 = RAND_FLOAT(360.0f);
    effect->state = state;
    effect->unk_4A = 40;
    effect->scale2 = scale2 * 0.2f;
    effect->unk_46 = 50;
    effect->unk_60.y = gPlayer[0].unk_0E8 + gPlayer[0].unk_114;
    if (effect->state == 2) {
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
void func_i3_801AC918(Effect* effect) {
    f32 temp_fs0;

    if (effect->unk_46 != 0) {
        effect->unk_46--;
    }
    switch (effect->state) { /* irregular */
        case 0:
            if (effect->vel.y < 5.0f) {
                effect->vel.y += 0.1f;
            }
            if (effect->unk_46 == 0) {
                Object_Kill(&effect->obj, effect->sfxPos);
            }
            effect->scale1 += 33.0f;
            temp_fs0 = COS_DEG(effect->scale1) * 1.5f;
            effect->vel.x = __cosf(gPlayer[0].unk_058) * temp_fs0;
            effect->vel.z = __sinf(gPlayer[0].unk_058) * temp_fs0;
            break;
        case 1:
            if (effect->unk_46 == 0) {
                Object_Kill(&effect->obj, effect->sfxPos);
            }
            effect->unk_60.x += 0.07f;
            effect->scale1 += 33.0f;

            effect->vel.y = effect->unk_60.x + (SIN_DEG(effect->scale1) * 3.0f);
            temp_fs0 = COS_DEG(effect->scale1) * 3.0f;
            effect->vel.x = COS_DEG(effect->unk_60.y) * temp_fs0;
            effect->vel.z = -SIN_DEG(effect->unk_60.y) * temp_fs0;
            break;
        case 2:
            if (effect->vel.y < 10.0f) {
                effect->vel.y += 0.2f;
            }
            if (effect->unk_46 == 0) {
                Object_Kill(&effect->obj, effect->sfxPos);
            }
            effect->scale1 += 55.0f;
            temp_fs0 = COS_DEG(effect->scale1) * 2.5f;
            effect->vel.x = __cosf(gPlayer[0].unk_058) * temp_fs0;
            effect->vel.z = __sinf(gPlayer[0].unk_058) * temp_fs0;
            break;
    }
}

void func_i3_801ACBB4(Player* player) {
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -40.0f, 1);
    Matrix_RotateY(gGfxMatrix, M_PI, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_3000C70);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, -4.5f, 1.2f, 1);
    Matrix_RotateZ(gGfxMatrix, player->unk_178 * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_3006DE0);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, 2.0f, 40.0f, 1);
    Matrix_RotateY(gGfxMatrix, -player->unk_180 * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_3006C70);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, -19.0f, -3.6f, 1.2f, 1);
    Matrix_RotateX(gGfxMatrix, player->unk_17C * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_3000AF0);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 19.0f, -3.6f, 1.2f, 1);
    Matrix_RotateX(gGfxMatrix, player->unk_17C * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_3006AF0);
    Matrix_Pop(&gGfxMatrix);
}

void func_i3_801ACE50(Player* player) {
    f32 pad;
    f32 pad2;
    Vec3f sp54;
    Vec3f sp48;

    player->boost = 0;
    if (player->timer_27C != 0) {
        player->timer_27C--;
        player->unk_110 += 0.3f;
        Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114) * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, player->unk_0E4 * M_DTOR, 1);
        sp54.x = sp54.y = 0.0f;
        sp54.z = 70.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
        func_i3_801AC8A8(player->pos.x + RAND_FLOAT_CENTERED(10.0f) + sp48.x,
                         player->pos.y + RAND_FLOAT_CENTERED(10.0f) + sp48.y,
                         player->unk_138 + RAND_FLOAT_CENTERED(10.0f) + (sp48.z * -1.0f), 0.4f, 1);
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
        if ((gBoostButton[player->num] & gInputHold->button) && (player->unk_230 == 0) &&
            (player->state_1C8 != PLAYERSTATE_1C8_5) && (player->unk_2B4 == 0)) {
            if (player->unk_2BC == 0) {
                Audio_PlaySfx(0x9004030, player->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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

void func_i3_801AD328(Player* player) {
    player->brake = 0;
    if ((gBrakeButton[player->num] & gInputHold->button) && (player->unk_230 == 0) &&
        (player->state_1C8 != PLAYERSTATE_1C8_5) && (player->unk_2B4 == 0)) {
        if (player->unk_2BC == 0) {
            Audio_PlaySfx(0x9004031, player->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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

void func_i3_801AD598(Actor* actor) {
    s32 i;

    D_i3_801C27C0 = &D_i3_801C27C8[50 * actor->iwork[0]];
    for (i = 50 * actor->iwork[0]; i < 50 * actor->iwork[0] + 50; i++, D_i3_801C27C0++) {
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

void func_i3_801AD688(Actor* actor) {
    func_i3_801AD598(actor);
    actor->iwork[1] = 10;
    actor->scale = 1.0f;
}

// OBJ_ACTOR_255 action
void func_i3_801AD6C0(Actor* actor) {
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
    if ((D_i3_801C42A0[23] == 0) || (gActors[var_v0].state >= 4)) {
        actor->timer_0C2 = 30000;
        actor->state = 2;
        actor->vel.y = 0.0f;
        actor->vel.x = 0.0f;
        actor->vel.z = 0.0f;
    }
    if ((gPlayer[0].unk_138 + 500.0f) <= actor->obj.pos.z) {
        Object_Kill(&actor->obj, actor->sfxPos);
    }
    actor->unk_04E++;
    if (actor->unk_04E >= 50) {
        actor->unk_04E = 0;
    }
    switch (actor->state) {
        case 0:
            if (actor->timer_0BC != 0) {
                actor->unk_0F4.x += D_i3_801C4308[10];
                actor->unk_0F4.z += 10.0f;
                actor->unk_0F4.z = Math_ModF(actor->unk_0F4.z, 360.0f);
            } else {
                actor->health = 30;
                Audio_PlaySfx(0x31000047, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actor->state++;
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
                        actor->state = 2;
                        actor->vel.y = 0.0f;
                        actor->vel.x = 0.0f;
                        actor->vel.z = 0.0f;
                        Audio_PlaySfx(0x2902A046, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }
            }
            if (actor->obj.pos.z <= (gPlayer[0].unk_138 - 200.0f)) {
                actor->fwork[7] = sp80 = gPlayer[0].pos.x + RAND_FLOAT_CENTERED(100.0f) - actor->obj.pos.x;
                actor->fwork[8] = sp7C = gPlayer[0].pos.y - 30.0f - actor->obj.pos.y;
                actor->fwork[9] = sp78 = gPlayer[0].unk_138 - actor->obj.pos.z;
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
            sp7C = SIN_DEG(actor->fwork[0]) * sp70 * actor->fwork[5];
            sp74 = COS_DEG(actor->fwork[1]) * sp70 * actor->fwork[6];
            sp80 = COS_DEG(actor->unk_0F4.y) * sp74;
            sp78 = -SIN_DEG(actor->unk_0F4.y) * sp74;
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
            sp68 = Math_RadToDeg(Math_Atan2F(gPlayer[0].pos.x + sp80 + RAND_FLOAT_CENTERED(200.0f) - actor->obj.pos.x,
                                             gPlayer[0].unk_138 + sp78 - actor->obj.pos.z));
            sp6C = Math_RadToDeg(-Math_Atan2F(gPlayer[0].pos.y - 30.0f + sp7C - actor->obj.pos.y, sp70));
            if (gPlayer[0].unk_138 <= actor->obj.pos.z) {
                sp68 = actor->unk_0F4.y;
                sp6C = actor->unk_0F4.x;
            }
            Math_SmoothStepToAngle(&actor->unk_0F4.y, sp68, 1.0f, 5.0f, 0.001f);
            Math_SmoothStepToAngle(&actor->unk_0F4.x, sp6C, 1.0f, 5.0f, 0.001f);
            Matrix_RotateY(gCalcMatrix, actor->unk_0F4.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, actor->unk_0F4.x * M_DTOR, 1);
            sp5C.x = 0.0f;
            sp5C.y = 0.0f;
            sp5C.z = 40.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp5C, &sp50);
            sp5C.z = (actor->iwork[0] + 1) * RAND_FLOAT(10.0f) + 10.0f;
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

void func_i3_801ADF7C(f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, u8 type, s32 flag, f32 scale,
                      s32 index) {
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, xPos, yPos, zPos + D_80177D20, 1);
    Matrix_RotateY(gGfxMatrix, M_DTOR * yRot, 1);
    Matrix_RotateX(gGfxMatrix, M_DTOR * xRot, 1);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * zRot, 1);
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
#ifdef NON_MATCHING
// float calculation acts oddly. seems to depend on how many references there are to static vars.
void func_i3_801AE168(Actor* actor) {
    f32 xz;
    f32 yRot;
    f32 xRot;
    s32 i;
    s32 index;

    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);

    for (i = 0; i <= actor->iwork[1]; i++) {
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
            yRot = RAD_TO_DEG(Math_Atan2F(gPlayer[0].camEye.x - D_i3_801C27C0->pos.x,
                                          gPlayer[0].camEye.z - (D_i3_801C27C0->pos.z + D_80177D20)));
            xz = sqrtf(SQ(gPlayer[0].camEye.x - D_i3_801C27C0->pos.x) +
                       SQ(gPlayer[0].camEye.z - (D_i3_801C27C0->pos.z + D_80177D20)));
            xRot = RAD_TO_DEG(-Math_Atan2F(gPlayer[0].camEye.y - D_i3_801C27C0->pos.y, xz));
        }
        func_i3_801ADF7C(D_i3_801C27C0->pos.x, D_i3_801C27C0->pos.y, D_i3_801C27C0->pos.z, xRot, yRot,
                         D_i3_801C27C0->rot.z, D_i3_801BFB90[i], actor->timer_0C6 & 1, actor->scale, i);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AE168.s")
#endif

void func_i3_801AE3AC(Actor* actor) {
    actor->fwork[1] = 1.0f;
    actor->obj.rot.x = 336.0f;
    actor->scale = 0.5f;
}

// OBJ_ACTOR_256 action
void func_i3_801AE3D8(Actor* actor) {
    s32 i;

    switch (actor->state) {
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
            if (actor->unk_0D0 != 0) {
                actor->unk_0D0 = 0;
                if ((fabsf(D_i3_801C4308[10]) >= 6.0f) && (gBosses[0].state >= 10) && (gBosses[0].swork[0] < 2)) {
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
                            for (i = 0; i < 60; i++) {
                                if ((gActors[i].obj.id == 256) && (actor->index != gActors[i].index)) {
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
                                Radio_PlayMessage(gMsg_ID_15120, RCID_SLIPPY);
                            }
                            actor->iwork[23]++;
                            actor->iwork[23] &= 1;
                        } else if (actor->damage == 31) {
                            actor->health -= actor->damage;
                            Radio_PlayMessage(gMsg_ID_15130, RCID_FALCO);
                            if (actor->health <= 0) {
                                gBosses[0].swork[0] = 2;
                                actor->health = 0;
                                actor->timer_0C6 = 300;
                                actor->fwork[2] = actor->scale;
                                Audio_PlaySfx(0x19000033, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                actor->state++;
                            }
                        }
                    }
                }
            }
            break;
        case 1:
            if (!(gGameFrameCount & 1)) {
                func_8007C120(actor->obj.pos.x, actor->fwork[0] + actor->obj.pos.y, actor->obj.pos.z, actor->vel.x,
                              actor->vel.y, actor->vel.z, 0.1f, 10);
                func_8007C120(actor->obj.pos.x, actor->obj.pos.y + (actor->fwork[0] * -1.0f), actor->obj.pos.z + 200.0f,
                              actor->vel.x, actor->vel.y, actor->vel.z, 0.1f, 10);
                actor->fwork[0] += 40.0f;
            }
            if ((actor->fwork[2] * 400.0f) <= actor->fwork[0]) {
                actor->timer_0BC = 20;
                actor->state++;
            }
            break;
        case 2:
            if (actor->timer_0BC == 0) {
                for (i = 0; i < 6; i++) {
                    func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y + 450.0f, actor->obj.pos.z + 50.0f, 50.0f);
                    func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y - 420.0f, actor->obj.pos.z + 300.0f, 50.0f);
                }
                actor->fwork[3] = 0.7f;
                actor->timer_0BC = 10;

                actor->state++;
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
                        for (i = 0; i < 60; i++) {
                            func_i3_801AC8A8(gBosses[0].obj.pos.x + RAND_FLOAT_CENTERED(1800.0f),
                                             gBosses[0].obj.pos.y + 400.0f + RAND_FLOAT_CENTERED(1000.0f),
                                             gBosses[0].obj.pos.z + 700.0f + RAND_FLOAT_CENTERED(1000.0f), 7.0f, 2);
                        }
                        gBosses[0].timer_052 = 0;
                        gBosses[0].timer_056 = 60;
                        gBosses[0].state = 14;
                    }
                    D_i3_801C4308[80] += D_i3_801BFBA8[actor->iwork[0]];
                }
            }
            break;
    }
}

// OBJ_ACTOR_256 draw
void func_i3_801AEB44(Actor* actor) {
    f32 var_fv0;
    u8 var_t1;
    u8 i;
    Vtx* var_t5;
    Vtx* temp_v1_2;

    if ((actor->timer_0C6 != 0) && (actor->state == 0) && (D_80177854 != 100)) {
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
    for (i = 0; i < 28; i += 1) {
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.ob[0] =
            temp_v1_2[i].v.ob[0] + (s16) ((((var_t5[i].n.ob[0] - temp_v1_2[i].n.ob[0]) * var_t1) / 2) * var_fv0);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.ob[1] =
            temp_v1_2[i].n.ob[1] + (((var_t5[i].n.ob[1] - temp_v1_2[i].n.ob[1]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.ob[2] =
            temp_v1_2[i].n.ob[2] + (((var_t5[i].n.ob[2] - temp_v1_2[i].n.ob[2]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.flag = temp_v1_2[i].n.flag;
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.tc[0] =
            temp_v1_2[i].n.tc[0] + (((var_t5[i].n.tc[0] - temp_v1_2[i].n.tc[0]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.tc[1] =
            temp_v1_2[i].n.tc[1] + (((var_t5[i].n.tc[1] - temp_v1_2[i].n.tc[1]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.n[0] =
            temp_v1_2[i].n.n[0] + (((var_t5[i].n.n[0] - temp_v1_2[i].n.n[0]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.n[1] =
            temp_v1_2[i].n.n[1] + (((var_t5[i].n.n[1] - temp_v1_2[i].n.n[1]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.n[2] =
            temp_v1_2[i].n.n[2] + (((var_t5[i].n.n[2] - temp_v1_2[i].n.n[2]) * var_t1) / 2);
        D_i3_801C3A88[actor->iwork[0]][gSysFrameCount % 2][i].n.a = temp_v1_2[i].n.a;
    }
    Matrix_Scale(gGfxMatrix, actor->fwork[1] - 0.25f + ((1.5f - actor->scale) * 0.5f), actor->scale, actor->fwork[1],
                 1);
    if (actor->state != 0) {
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
    gDPLoadTextureBlock(gMasterDisp++, D_6008EC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD);
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
    gDPLoadTextureBlock(gMasterDisp++, D_6019238, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD);
    gSPVertex(gMasterDisp++, &D_i3_801C3A88[actor->iwork[0]][gSysFrameCount & 1][20], 8, 0);
    gSP1Triangle(gMasterDisp++, 0, 1, 2, 0);
    gSP1Triangle(gMasterDisp++, 2, 3, 0, 0);
    gSP1Triangle(gMasterDisp++, 4, 5, 6, 0);
    gSP1Triangle(gMasterDisp++, 6, 7, 4, 0);
    gDPPipeSync(gMasterDisp++);
    gDPSetTextureLUT(gMasterDisp++, G_TT_NONE);
}

void func_i3_801AF9FC(Actor* actor) {
    s32 temp = actor->iwork[0];

    actor->fwork[0] = actor->fwork[1] = actor->fwork[2] = 1.0f;
    actor->obj.pos.x = D_i3_801C4308[1 + temp];
    actor->obj.pos.y = D_i3_801C4308[4 + temp];
    actor->obj.pos.z = D_i3_801C4308[7 + temp];
    actor->obj.rot.x = D_i3_801BFBBC[temp] + D_i3_801C4308[10];
}

#ifdef NON_MATCHING
void func_i3_801AFA5C(Actor* actor) {
    s32 i;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 pad64;
    Vec3f sp58;
    Vec3f sp4C;
    Actor* sp48;

    if (actor->state < 4) {
        i = actor->iwork[0];
        actor->obj.pos.x = D_i3_801C4308[1 + i];
        actor->obj.pos.y = D_i3_801C4308[4 + i];
        actor->obj.pos.z = D_i3_801C4308[7 + i];
        actor->obj.rot.x = D_i3_801BFBBC[i] + D_i3_801C4308[10];
        if (actor->obj.rot.x < 0.0f) {
            actor->obj.rot.x += 359.0f;
        }
        if (actor->obj.rot.x >= 360.0f) {
            actor->obj.rot.x -= 360.0f;
        }
        actor->obj.rot.y = D_i3_801BFBC8[i];
        actor->obj.rot.z = D_i3_801BFBD4[i];
    }
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        if ((gBosses[0].state >= 10) && (actor->health != 0) && (actor->damage == 31)) {
            actor->timer_0BE = 70;
            actor->health -= actor->damage;
            Audio_PlaySfx(0x2903604CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (actor->timer_0C6 == 0) {
                actor->timer_0C6 = 70;
            }
            if (actor->health <= 0) {
                actor->health = actor->timer_0BE = 0;
                BonusText_Display(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 200.0f, 3);
                gHitCount += 4;
                D_80177850 = 15;
                actor->info.bonus = 0;
                actor->state = 4;
            }
        }
    }
    if (D_i3_801C42A0[23] == 0) {
        Object_Kill(&actor->obj, actor->sfxPos);
    }
    if (actor->timer_0C6 & 1) {
        func_8007C120(actor->obj.pos.x, actor->obj.pos.y + 100.0f, actor->obj.pos.z + RAND_FLOAT(500.0f), actor->vel.x,
                      actor->vel.y, actor->vel.z, actor->scale * 0.2f, 10);
    }
    switch (actor->state) {
        case 0:
            if (gBosses[0].state >= 10) {
                actor->timer_0BC = D_i3_801BFBB0[actor->iwork[0]] + RAND_FLOAT(20.0f);
                actor->health = 90;
                actor->state++;
            }
            break;
        case 1:
            if ((actor->timer_0BC == 0) && (fabsf(D_i3_801C4308[10]) < 5.0f) && (actor->timer_0C6 == 0)) {
                i = actor->iwork[3] - 1;
                if (i >= 0) {
                    if ((gActors[i].obj.status != 2) || (gActors[i].obj.id != 255) ||
                        (gActors[i].iwork[0] != actor->iwork[0])) {
                        actor->iwork[3] = 0;
                        actor->state = 2;
                    }
                } else {
                    actor->iwork[3] = 0;
                    actor->state = 2;
                }
            }
            break;
        case 2:
            Math_SmoothStepToF(&actor->fwork[0], 1.0f, 0.2f, 0.5f, 0.01f);
            actor->fwork[2] = actor->fwork[1] = actor->fwork[0];
            if (actor->fwork[0] == 1.0f) {
                actor->state = 3;
            }
            break;
        case 3:
            i = actor->iwork[2];
            Math_SmoothStepToF(&actor->fwork[0], D_i3_801BFBE0[i][0], D_i3_801BFBE0[i][1], D_i3_801BFBE0[i][2],
                               0.00001f);
            Math_SmoothStepToF(&actor->fwork[1], D_i3_801BFC10[i][0], D_i3_801BFC10[i][1], D_i3_801BFC10[i][2],
                               0.00001f);
            Math_SmoothStepToF(&actor->fwork[2], D_i3_801BFC40[i][0], D_i3_801BFC40[i][1], D_i3_801BFC40[i][2],
                               0.00001f);
            actor->iwork[1]++;
            i = actor->iwork[3] - 1;

            if ((i >= 0) && ((gActors[i].obj.status != 2) || (gActors[i].obj.id != 255) ||
                             (gActors[i].iwork[0] != actor->iwork[0]))) {
                actor->iwork[3] = 0;
                i = -1;
            }
            if ((actor->iwork[1] == 13) && (i < 0)) {
                Audio_PlaySfx(0x29022048U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                for (i = 0, sp48 = gActors; i < 60; i++, sp48++) {
                    if (sp48->obj.status == 0) {
                        Actor_Initialize(sp48);
                        sp48->obj.status = 1;
                        sp48->obj.id = 255;
                        sp48->obj.pos.x = actor->obj.pos.x;
                        sp48->obj.pos.y = actor->obj.pos.y;
                        sp48->obj.pos.z = actor->obj.pos.z;
                        sp48->obj.rot.x = sp48->unk_0F4.x =
                            Math_ModF(actor->obj.rot.x + 270.0f + D_i3_801BFC7C[actor->iwork[0]], 360.0f);
                        sp48->obj.rot.y = sp48->unk_0F4.y =
                            Math_ModF(actor->obj.rot.y + D_i3_801BFC88[actor->iwork[0]], 360.0f);
                        sp48->unk_0F4.z = actor->obj.rot.z;
                        sp48->obj.rot.z = actor->obj.rot.z;
                        sp48->timer_0BC = 10;
                        Object_SetInfo(&sp48->info, sp48->obj.id);
                        actor->iwork[3] = i + 1;
                        sp48->iwork[0] = actor->iwork[0];
                        sp48->iwork[2] = actor->index + 1;
                        Matrix_RotateY(gCalcMatrix, sp48->obj.rot.y * M_DTOR, 0);
                        Matrix_RotateX(gCalcMatrix, sp48->obj.rot.x * M_DTOR, 1);
                        Matrix_RotateZ(gCalcMatrix, sp48->obj.rot.z * M_DTOR, 1);
                        sp58.x = sp58.y = 0.0f;
                        sp58.z = 60.0f;
                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp58, &sp4C);
                        sp48->vel.x = sp4C.x;
                        sp48->vel.y = sp4C.y;
                        sp48->vel.z = sp4C.z;
                        break;
                    }
                }
                if (i >= 60) {
                    actor->iwork[3] = 0;
                    sp48->obj.status = 0;
                }
            }
            if (actor->iwork[1] == D_i3_801BFC70[actor->iwork[2]]) {
                actor->iwork[2]++;
                if (actor->iwork[2] >= 3) {
                    actor->iwork[1] = actor->iwork[2] = 0;
                    actor->state = 1;
                    actor->fwork[0] = actor->fwork[1] = actor->fwork[2] = 1.0f;
                    actor->timer_0BC = D_i3_801BFBB0[actor->iwork[0]] + 70.0f - RAND_FLOAT_CENTERED(30.0f);
                }
            }
            break;
        case 4:
            actor->state = 5;
            actor->vel.y = 10.0f;
            actor->vel.z = 5.0f;
            Audio_PlaySfx(0x1902102FU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 5:
            if (actor->obj.pos.y > (gGroundLevel + 70.0f)) {
                Math_SmoothStepToF(actor->fwork, 1.0f, 0.1f, 0.2f, 0.0001f);
                Math_SmoothStepToF(&actor->fwork[1], 1.0f, 0.1f, 0.2f, 0.0001f);
                Math_SmoothStepToF(&actor->fwork[2], 1.0f, 0.1f, 0.2f, 0.0001f);
                Math_SmoothStepToF(&actor->vel.y, -10.0f, 0.1f, 1.0f, 0.001f);
                Math_SmoothStepToAngle(&actor->obj.rot.x, 80.0f, 0.1f, 1.0f, 0.001f);
                if (!(gGameFrameCount & 1)) {
                    func_i3_801AC8A8(actor->obj.pos.x + RAND_FLOAT_CENTERED(300.0f),
                                     actor->obj.pos.y + RAND_FLOAT_CENTERED(200.0f), actor->obj.pos.z, 4.0f, 2);
                }
                if (actor->timer_0C6 == 0) {
                    actor->timer_0C6 = 70;
                }
                actor->fwork[6] = 10.0f;
                actor->timer_0C0 = 20;
            } else {
                Math_SmoothStepToF(&actor->fwork[6], 30.0f, 0.1f, 12.0f, 0.1f);
                sp70 = RAND_FLOAT(30.0f);
                if (!(gGameFrameCount & 3)) {
                    for (i = 0; i < 36; i += 2) {
                        sp6C = __sinf(sp70 + (i * 10.0f * M_DTOR)) * actor->fwork[6] * 10.0f;
                        sp68 = __cosf(sp70 + (i * 10.0f * M_DTOR)) * actor->fwork[6] * 10.0f;
                        pad64 = gGroundLevel + 30.0f;
                        func_8007B8F8(actor->obj.pos.x + sp6C, pad64, actor->obj.pos.z + sp68, 20.0f);
                    }
                }
                if (actor->vel.z != 0) {
                    actor->vel.y = actor->vel.z = 0.0f;
                    Audio_PlaySfx(0x19402031U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (actor->timer_0C0 == 1) {
                    Audio_PlaySfx(0x19003030U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (actor->timer_0C0 == 0) {
                    if (actor->timer_0BE == 0) {
                        actor->timer_0BE = 10;
                    }
                    Math_SmoothStepToF(actor->fwork, 0.0f, 0.05f, 0.1f, 0.001f);
                    Math_SmoothStepToF(&actor->fwork[1], 0.0f, 0.05f, 0.1f, 0.001f);
                    Math_SmoothStepToF(&actor->fwork[2], 0.0f, 0.05f, 0.1f, 0.001f);
                    Math_SmoothStepToF(&actor->obj.pos.y, -300.0f, 0.1f, 1.0f, 0.001f);
                    if (actor->fwork[0] <= 0.2f) {
                        for (i = 0; i < 5; i++) {
                            func_8007BC7C(actor->obj.pos.x, gGroundLevel + 50.0f, actor->obj.pos.z, 20.0f);
                            func_i3_801AC8A8(actor->obj.pos.x + RAND_FLOAT_CENTERED(300.0f), gGroundLevel + (i * 20.0f),
                                             actor->obj.pos.z, 5.0f, 2);
                        }
                        if (gBosses[0].state < 13) {
                            gBosses[0].state++;
                            if (gBosses[0].state == 13) {
                                gBosses[0].swork[19] = 30;
                            }
                        }
                        Object_Kill(&actor->obj, actor->sfxPos);
                    }
                }
            }
            break;
    }
    if (actor->timer_0BE != 0) {
        actor->fwork[3] = SIN_DEG(actor->timer_0BE * 20.0f) * func_i3_801A958C(actor->timer_0BE, 20.0f);
        actor->fwork[4] = SIN_DEG(actor->timer_0BE * 20.0f) * func_i3_801A958C(actor->timer_0BE, 20.0f);
        actor->fwork[5] = SIN_DEG(actor->timer_0BE * 20.0f) * func_i3_801A958C(actor->timer_0BE, 20.0f);
    }
}
#else
// OBJ_ACTOR_257 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801AFA5C.s")
#endif

// OBJ_ACTOR_257 draw
void func_i3_801B099C(Actor* actor) {
    Matrix_RotateY(gGfxMatrix, (actor->obj.rot.x + actor->fwork[3]) * M_DTOR, 1);
    Matrix_RotateX(gGfxMatrix, (actor->obj.rot.y + actor->fwork[4]) * M_DTOR, 1);
    Matrix_RotateZ(gGfxMatrix, (actor->obj.rot.z + actor->fwork[5]) * M_DTOR, 1);
    Matrix_Scale(gGfxMatrix, actor->fwork[0], actor->fwork[1], actor->fwork[2], 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    if (!(actor->timer_0C6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x39);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x3D);
        GPC(255, 0, 0, 255);
    }
    switch (actor->iwork[0]) {
        case 0:
            GDL(D_6019E80);
            break;
        case 1:
            GDL(D_60194D0);
            break;
        case 2:
            GDL(D_6019880);
            break;
    }
}

// OBJ_ACTOR_258 action
void func_i3_801B0B60(Actor* actor) {
    Vec3f sp44;
    Vec3f sp38;

    if ((actor->unk_0D0 != 0) || (gBosses[0].state >= 16)) {
        actor->state = 3;
    }
    switch (actor->state) { /* irregular */
        case 0:
            if (actor->timer_0BC == 0) {
                Matrix_RotateY(gCalcMatrix, actor->fwork[2] * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, actor->fwork[1] * M_DTOR, 1);
                sp44.x = sp44.y = 0.0f;
                sp44.z = 50.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
                actor->vel.x = sp38.x;
                actor->vel.y = sp38.y;
                actor->vel.z = sp38.z;
                actor->timer_0BE = 5;
                actor->iwork[1] = 255;
                actor->iwork[2] = 255;
                actor->iwork[3] = 255;
                actor->state++;
            }
            break;
        case 1:
            if (actor->timer_0BE == 0) {
                Matrix_RotateY(gCalcMatrix, actor->fwork[4] * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, actor->fwork[3] * M_DTOR, 1);
                sp44.x = sp44.y = 0.0f;
                sp44.z = 30.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
                actor->vel.x = sp38.x;
                actor->vel.y = sp38.y;
                actor->vel.z = sp38.z;
                actor->timer_0C0 = 10;
                actor->state++;
            }
            break;
        case 2:
            if (actor->timer_0C0 == 0) {
                actor->iwork[1] -= 20;
                actor->iwork[2] -= 20;
                actor->iwork[3] -= 20;
                if (actor->iwork[1] < 5) {
                    actor->iwork[1] = actor->iwork[2] = actor->iwork[3] = 5;
                }
            }
            break;
        case 3:
            if (Rand_ZeroOne() < 0.1) {
                actor->unk_044 = 22;
                actor->unk_0D4 = 2;
                func_80066254(actor);
            }
            Object_Kill(&actor->obj, actor->sfxPos);
            func_800815DC();
            func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 50.0f, 5.0f);
            func_8007A6F0(&actor->obj.pos, 0x29018049);
            break;
    }
    if (!(gGameFrameCount & 0xF)) {
        func_i3_801AC8A8(actor->obj.pos.x + RAND_FLOAT_CENTERED(10.0f), actor->obj.pos.y + RAND_FLOAT_CENTERED(10.0f),
                         actor->obj.pos.z + RAND_FLOAT_CENTERED(10.0f), 2.0f, 1);
    }
    func_i3_801A96DC(actor);
}

// OBJ_ACTOR_258 draw
void func_i3_801B0EC0(Actor* actor) {
    if (actor->timer_0BC == 0) {
        Graphics_SetScaleMtx(0.8f);
        RCP_SetupDL(&gMasterDisp, 0x3D);
        GPC(actor->iwork[1], actor->iwork[2], actor->iwork[3], 255);
        Matrix_SetGfxMtx(&gMasterDisp);
        GDL(D_6024A50);
    }
}

void func_i3_801B0F88(Boss* bossAQ) {
    if ((D_i3_801C42A0[23] != 0) && (bossAQ->swork[0] < 2)) {
        bossAQ->swork[19] = 30;
        D_i3_801C4308[79] = 0.0f;
        bossAQ->swork[0] = 3;
    }
}

void func_i3_801B0FCC(Boss* bossAQ) {
    D_i3_801C4308[54] = D_i3_801C4308[61] = D_i3_801C4308[68] = 0.1f;
    bossAQ->swork[19] = 500;
    D_i3_801C4308[79] = -28.0f;
}

void func_i3_801B1008(Boss* bossAQ, s32 timer) {
    if ((bossAQ->swork[19] == 0) && (fabsf(D_i3_801C4308[10]) <= 1.0f) && (bossAQ->swork[0] == 0)) {
        D_i3_801C4308[79] = -28.0f;
        bossAQ->swork[19] = timer;
        bossAQ->swork[0] = 0;
        if (bossAQ->swork[22] == 0) {
            Radio_PlayMessage(gMsg_ID_15110, RCID_PEPPY);
        }
        bossAQ->swork[22]++;
        bossAQ->swork[22] &= 3;
    }
    if ((fabsf(D_i3_801C4308[10]) >= 15.0f) && (bossAQ->timer_056 == 0)) {
        bossAQ->swork[2] = bossAQ->swork[3] = 1;
        bossAQ->timer_056 = 60;
    }
}

// OBJ_BOSS_AQ init
void func_i3_801B10F8(Boss* bossAQ) {
    s32 i;
    Actor* actor;

    gBossActive = 1;
    gBossFrameCount = 0;
    bossAQ->health = 150;
    for (i = 0, actor = gActors; i < 2; actor++) {
        if (actor->obj.status == 0) {
            Actor_Initialize(actor);
            actor->obj.status = 1;
            actor->obj.id = 256;
            actor->obj.pos.x = bossAQ->obj.pos.x + D_i3_801C0098[i].x;
            actor->obj.pos.y = bossAQ->obj.pos.y + D_i3_801C0098[i].y;
            actor->obj.pos.z = bossAQ->obj.pos.z + D_i3_801C0098[i].z;
            actor->iwork[0] = i;
            i++;
            Object_SetInfo(&actor->info, actor->obj.id);
        }
    }
    D_i3_801C42A0[23] = 2;
    D_i3_801C42A0[0] = 255;
    D_i3_801C42A0[9] = D_i3_801C0058;
    D_i3_801C42A0[11] = 9;
    D_i3_801C42A0[10] = 10;
    D_i3_801C42A0[13] = 6;
    D_i3_801C42A0[14] = 11;

    bossAQ->fwork[1] = 10.0f;
    D_i3_801C4308[79] = D_i3_801C4308[10] = D_i3_801C4308[80] = D_i3_801C4308[11] = 0.0f;
    D_i3_801C4308[58] = D_i3_801C4308[65] = D_i3_801C4308[72] = 1.0f;
    bossAQ->fwork[8] = bossAQ->fwork[9] = bossAQ->fwork[10] = 1.0f;
    bossAQ->swork[14] = bossAQ->swork[15] = bossAQ->swork[16] = 255;
    bossAQ->swork[17] = 10;
    D_i3_801C42A0[1] = D_i3_801C42A0[2] = D_i3_801C42A0[4] = D_i3_801C42A0[5] =
        (D_i3_801C42A0[6] = D_i3_801C42A0[7] = 0) ^ 0; // fake
    for (i = 0; i < 28; i++) {
        D_i3_801C4230[i] = 0;
    }
    bossAQ->obj.pos.y += 400.0f;
    bossAQ->info.hitbox[119] = 1028.0f;
    bossAQ->info.hitbox[169] = 800.0f;
    bossAQ->swork[8] = bossAQ->swork[9] = 2;
    Audio_PlaySfx(0x3140904D, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

// OBJ_BOSS_AQ action
#ifdef NON_MATCHING
void func_i3_801B134C(Boss* bossAQ) {
    s32 i;
    s32 i2;
    s32 i3;
    s32 i7;
    Actor* actor;
    f32 sp110;
    f32 var_fs3;
    f32 var_fs0;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    Vec3f spD4;

    f32 var_fs1;

    gBossFrameCount++;

    switch (bossAQ->state) { /* switch 1 */
        case 0:              /* switch 1 */
            if (bossAQ->swork[21] == 0) {
                for (i2 = 0, actor = gActors; i2 < 3; actor++) {
                    if (actor->obj.status == 0) {
                        Actor_Initialize(actor);
                        actor->obj.status = 1;
                        actor->obj.id = 257;
                        actor->iwork[0] = i2;
                        Object_SetInfo(&actor->info, actor->obj.id);
                        i2++;
                    }
                }
                bossAQ->swork[21] = 1;
                func_800182F4(0x102800FF);
                func_800182F4(0x112800FF);
                Radio_PlayMessage(gMsg_ID_15100, RCID_FOX);
            }
            if (fabsf(bossAQ->obj.pos.z - gPlayer[0].unk_138) <= 3000.0f) {
                D_i3_801C4190[6] = 1;
                bossAQ->timer_056 = 20;
                func_8001D444(0, 32798, 0, 1);
                bossAQ->state = 1;
            }
            break;
        case 1: /* switch 1 */
            if (bossAQ->timer_056 == 0) {
                D_i3_801C4308[14] = 80.0f;
                D_i3_801C4308[12] = D_i3_801C4308[13] = 0.0f;
                bossAQ->timer_056 = 20;
                bossAQ->state = 2;
                Audio_PlaySfx(0x1900002E, bossAQ->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 2: /* switch 1 */
            func_i3_801B0FCC(bossAQ);
            if (!(bossAQ->timer_056 & 1)) {
                for (i3 = 0; i3 < 30; i3++) {
                    func_i3_801AC8A8(gBosses[0].obj.pos.x + RAND_FLOAT_CENTERED(1800.0f),
                                     gBosses[0].obj.pos.y + RAND_FLOAT_CENTERED(500.0f),
                                     gBosses[0].obj.pos.z + 700.0f + RAND_FLOAT_CENTERED(1000.0f), 7.0f, 2);
                }
            }
            if (bossAQ->timer_056 == 0) {
                bossAQ->timer_056 = 40;
                bossAQ->state = 3;
            }
            break;
        case 3: /* switch 1 */
            func_i3_801B0FCC(bossAQ);
            Math_SmoothStepToF(&D_i3_801C4308[12], -45.0f, 0.5f, 1.0f, 0.01f);
            Math_SmoothStepToF(&D_i3_801C4308[13], 30.0f, 0.5f, 1.0f, 0.01f);
            Math_SmoothStepToAngle(&D_i3_801C4308[14], 0.0f, 1.0f, 2.0f, 0.0f);
            Math_SmoothStepToAngle(&D_i3_801C4308[15], D_i3_801C0190[bossAQ->swork[20]], 1.0f, 10, 0.0f);
            if (bossAQ->timer_056 == 0) {
                bossAQ->timer_056 = 10;
                bossAQ->swork[20]++;
                if (bossAQ->swork[20] >= 5) {
                    bossAQ->state = 4;
                }
            }
            break;
        case 4: /* switch 1 */
            func_i3_801B0FCC(bossAQ);
            Math_SmoothStepToF(&D_i3_801C4308[58], 0.25f, 0.3f, 1.0f, 0.0f);
            if (bossAQ->timer_056 == 0) {
                bossAQ->timer_056 = 20;
                bossAQ->state = 5;
            }
            break;
        case 5: /* switch 1 */
            func_i3_801B0FCC(bossAQ);
            Math_SmoothStepToF(&D_i3_801C4308[58], 0.25f, 0.3f, 1.0f, 0.0f);
            if (bossAQ->timer_056 == 0) {
                bossAQ->timer_056 = 30;
                bossAQ->state = 6;
            }
            break;
        case 6: /* switch 1 */
            func_i3_801B0FCC(bossAQ);
            if (bossAQ->timer_056 == 0) {
                bossAQ->state = 7;
            }
            break;
        case 7: /* switch 1 */
            bossAQ->swork[19] = 500;
            D_i3_801C4308[79] = -28.0f;
            Math_SmoothStepToF(&D_i3_801C4308[54], 1.0f, 0.001f, 0.01f, 0.0f);
            Math_SmoothStepToF(&D_i3_801C4308[61], 1.0f, 0.001f, 0.01f, 0.0f);
            if (D_i3_801C4308[54] >= 0.9f) {
                bossAQ->timer_056 = 20;
                D_i3_801C4308[79] = 0.0f;
                bossAQ->swork[0] = 3;
                bossAQ->state = 8;
            }
            break;
        case 8: /* switch 1 */
            if (bossAQ->timer_056 == 0) {
                bossAQ->timer_056 = 20;
                bossAQ->swork[12] = 10;
                D_i3_801C42A0[3] = 0;
                Radio_PlayMessage(gMsg_ID_2225, RCID_SLIPPY);
                bossAQ->swork[26] = gBossFrameCount + 156;
                bossAQ->state = 9;
            }
            break;
        case 9: /* switch 1 */
            if (bossAQ->timer_056 == 0) {
                bossAQ->state = 10;
            }
            break;
        case 10: /* switch 1 */
        case 11: /* switch 1 */
        case 12: /* switch 1 */
            func_i3_801B1008(bossAQ, 500);
            break;
        case 13: /* switch 1 */
            func_i3_801B1008(bossAQ, 60);
            break;
        case 14: /* switch 1 */
            if (bossAQ->timer_056 == 58) {
                Audio_PlaySfx(0x29408055, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if ((bossAQ->timer_056 == 0) && (D_i3_801C4308[12] <= -44.0f)) {
                bossAQ->swork[2] = bossAQ->swork[3] = 20;
                bossAQ->state = 15;
            }
            if (bossAQ->timer_056 == 40) {
                Radio_PlayMessage(gMsg_ID_15140, RCID_PEPPY);
            }
            break;
        case 15: /* switch 1 */
            if (bossAQ->swork[2] == 0) {
                bossAQ->swork[2] = (s32) RAND_FLOAT(50.0f) + 100;
            }
            if (bossAQ->swork[3] == 0) {
                bossAQ->swork[3] = (s32) RAND_FLOAT(50.0f) + 100;
            }
            break;
        case 16: /* switch 1 */
            D_801779A8[0] = 20.0f;
            if (D_80178480 == 0) {

                D_80178340 = D_80178348 = D_80178350 = D_80178354 = D_80178358 = 255;

                D_80178358 = 0;
                D_8017835C = 25;
                D_80178480 = RAND_FLOAT(20) + 20;
            }
            if (D_80178480 == 29) {
                D_80178348 = D_80178350 = D_80178354 = D_80178340 = 0;
            }
            Math_SmoothStepToF(&D_i3_801C41B8[25], D_8015F970, 1.0f, 100, 0.f);
            Math_SmoothStepToF(&D_i3_801C41B8[26], 128.0f, 1.0f, 100, 0.f);
            for (i3 = 0; i3 < 28; i3++) {
                if (D_i3_801C4230[i3] == 0) {
                    D_i3_801C4230[i3] = 100;
                }
            }

            if (D_i3_801C42A0[7] == 0) {
                D_i3_801C42A0[1] = D_i3_801C42A0[2] = D_i3_801C42A0[4] = D_i3_801C42A0[5] = D_i3_801C42A0[6] =
                    D_i3_801C42A0[7] = 50;
            }
            if (!(gGameFrameCount & 1)) {
                func_8007C120(bossAQ->obj.pos.x + RAND_FLOAT_CENTERED(1200.0f),
                              bossAQ->obj.pos.y + 400.0f + RAND_FLOAT_CENTERED(400.0f),
                              bossAQ->obj.pos.z + 1000.0f + RAND_FLOAT_CENTERED(800.0f), bossAQ->vel.x, bossAQ->vel.y,
                              bossAQ->vel.z, 0.5f, 10);
                func_8007D0E0(bossAQ->obj.pos.x + RAND_FLOAT_CENTERED(1200.0f),
                              bossAQ->obj.pos.y + 200.0f + RAND_FLOAT_CENTERED(400.0f),
                              bossAQ->obj.pos.z + 1000.0f + RAND_FLOAT_CENTERED(800.0f), 10.0f);
            }
            if (i3 && i3) {}
            for (i3 = 0; i3 < 3; i3++) {
                func_80081A8C(bossAQ->obj.pos.x + RAND_FLOAT_CENTERED(1200.0f),
                              bossAQ->obj.pos.y + 200.0f + RAND_FLOAT_CENTERED(200.0f),
                              bossAQ->obj.pos.z + 1000.0f + RAND_FLOAT_CENTERED(800.0f), RAND_FLOAT(3.0f) + 3.0f, 5);
            }
            if (bossAQ->timer_056 == 0) {
                gEffects[98].obj.status = 0;
                gEffects[99].obj.status = 0;
                func_8007A568(bossAQ->obj.pos.x, bossAQ->obj.pos.y, bossAQ->obj.pos.z + 600.0f, 40.0f);
                bossAQ->timer_056 = 50;
                for (i3 = 0; i3 < 28; i3++) {
                    D_i3_801C4230[i3] = 100;
                }
                D_80178348 = D_80178350 = D_80178354 = D_80178340 = 0;
                bossAQ->state = 17;
            }
            break;
        case 17: /* switch 1 */
            if (bossAQ->timer_056 == 20) {
                gEffects[96].obj.status = 0;
                gEffects[97].obj.status = 0;
                func_8007A568(bossAQ->obj.pos.x, bossAQ->obj.pos.y, bossAQ->obj.pos.z + 600.0f, 80.0f);
            }
            D_i3_801C42A0[0]--;
            if (D_i3_801C42A0[0] < 0) {
                D_i3_801C42A0[0] = 0;
            }
            for (i3 = 0; i3 < 21; i3++) {
                Math_SmoothStepToF(&D_i3_801C4308[52 + i3], 0.1f, 0.1f, 1.0f, 0.0f);
            }
            Math_SmoothStepToF(&bossAQ->fwork[8], 0.1f, 0.1f, 1.0f, 0.0f);
            Math_SmoothStepToF(&bossAQ->fwork[9], 0.1f, 0.1f, 1.0f, 0.0f);
            Math_SmoothStepToF(&bossAQ->fwork[10], 0.1f, 0.1f, 1.0f, 0.0f);
            if (!(gGameFrameCount & 1)) {
                func_8007C120(RAND_FLOAT_CENTERED(1200.0f) + bossAQ->obj.pos.x,
                              RAND_FLOAT_CENTERED(400.0f) + (bossAQ->obj.pos.y + 400.0f),
                              RAND_FLOAT_CENTERED(800.0f) + (bossAQ->obj.pos.z + 1000.0f), bossAQ->vel.x, bossAQ->vel.y,
                              bossAQ->vel.z, 0.7f, 15);
            }
            if (bossAQ->timer_056 == 1) {
                for (i3 = 0; i3 < 28; i3++) {
                    if (i3 != 27) {
                        D_i3_801C4230[i3] = 1000;
                    }
                }
            }
            if (bossAQ->timer_056 == 0) {
                bossAQ->timer_056 = 300;
                bossAQ->state = 18;
            }
            break;
        case 18: /* switch 1 */
            if (bossAQ->timer_056 != 0) {
                for (i3 = 0; i3 < 30; i3++) {
                    func_i3_801AC8A8(gBosses[0].obj.pos.x + RAND_FLOAT_CENTERED(1800.0f),
                                     gBosses[0].obj.pos.y + RAND_FLOAT_CENTERED(500.0f),
                                     gBosses[0].obj.pos.z + 700.0f + RAND_FLOAT_CENTERED(1000.0f), 7.0f, 2);
                }
            }
            break;
    }
    switch (bossAQ->swork[0]) { /* switch 2 */

        case 0: /* switch 2 */
            if (D_i3_801C42A0[23] == 0) {
                D_i3_801C4308[79] = -180.0f;
            } else {
                Math_SmoothStepToF(&D_i3_801C4308[79], 0.0f, 0.05f, 0.2f, 0.0f);
            }
            Math_SmoothStepToF(&D_i3_801C4308[10], D_i3_801C4308[79], 0.05f, 0.3f, 0.0f);
            break;
        case 1: /* switch 2 */
            Math_SmoothStepToF(&D_i3_801C4308[10], -28.0f, 0.05f, 0.3f, 0.0f);
            if (bossAQ->timer_052 < 3) {
                func_i3_801B0F88(bossAQ);
            }
            break;
        case 2: /* switch 2 */
            break;
        case 3: /* switch 2 */
            Math_SmoothStepToF(&D_i3_801C4308[10], D_i3_801C4308[79], 0.5f, 10.0f, 0.0f);
            if (fabsf(D_i3_801C4308[10]) <= 5.0f) {
                bossAQ->swork[0] = 0;
                bossAQ->timer_052 = 0;
                bossAQ->swork[19] = 500;
                D_i3_801C4308[79] = 0.0f;
                Audio_PlaySfx(0x29408054, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                if (bossAQ->state < 14) {
                    for (i3 = 0, actor = gActors; i3 < 60; i3++, actor++) {
                        if ((actor->obj.id == 260) && (actor->obj.status == 2)) {
                            actor->iwork[0] = 1;
                        }
                    }
                    bossAQ->timer_058 = 30;
                    bossAQ->swork[0] = 4;
                    D_80178480 = 50;
                    Audio_PlaySfx(0x1900002D, bossAQ->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_80062B60(bossAQ->obj.pos.x, bossAQ->obj.pos.z + 800.0f, 0, 100.0f);
                    var_fs3 = 80.0f;
                    for (i2 = 0; i2 < 3; i2++, var_fs3 += 10.0f) {
                        for (i3 = 0; i3 < 9; i3++) {
                            var_fs0 = SIN_DEG((27 + 2 * i3) * (10.0f + 3 * i2)) * var_fs3 * 10.0f;
                            var_fs1 = COS_DEG((27 + 2 * i3) * (10.0f + 3 * i2)) * var_fs3 * 10.0f;
                            func_8007B8F8(bossAQ->obj.pos.x + var_fs0, gGroundLevel + 30.0f,
                                          bossAQ->obj.pos.z + 1000.0f + var_fs1, 20.0f);
                        }
                    }
                }
            }
            break;
        case 4: /* switch 2 */
            bossAQ->swork[19] = 50;
            Math_SmoothStepToF(&D_i3_801C4308[10], D_i3_801C4308[79], 0.5f, 5.0f, 0.0f);
            if (bossAQ->timer_058 > 10) {
                Math_SmoothStepToF(D_801779A8, 20.0f, 1.0f, 5.0f, 0.0f);
            }
            if (bossAQ->timer_058 != 0) {
                gPlayer[0].unk_2B4 = 1;
                Math_SmoothStepToF(&D_i3_801C41B8[24], 20.0f, 0.1f, 1.0f, 0.0f);
                Math_SmoothStepToF(&gPlayer[0].unk_08C, 180.0f, 0.4f, 20.0f, 0.0f);
            } else {
                Math_SmoothStepToF(&D_i3_801C41B8[24], 0.0f, 0.01f, 0.1f, 0.0f);
                Math_SmoothStepToF(&gPlayer[0].unk_08C, 0.0f, 0.1f, 2.0f, 0.0f);
                if (gPlayer[0].unk_08C < 0.1f) {
                    gPlayer[0].unk_2B4 = 0;
                    gPlayer[0].unk_08C = D_i3_801C41B8[24] = 0.0f;
                    bossAQ->swork[0] = 0;
                }
            }
            break;
    }
    Math_SmoothStepToF(&D_i3_801C4308[80], 0.0f, 1.0f, 2.0f, 0);
    Math_SmoothStepToF(&D_i3_801C4308[11], *(&D_i3_801C4308[80]), 0.1f, 2.0f, 0);
    if (bossAQ->dmgType != 0) {
        bossAQ->dmgType = 0;
        if (fabsf(D_i3_801C4308[10]) >= 5.0f) {
            switch (bossAQ->dmgPart) { /* switch 3 */
                case 13:               /* switch 3 */
                    if ((bossAQ->swork[12] != 0) && (bossAQ->state >= 15)) {
                        if (D_i3_801C42A0[23] == 0) {
                            D_i3_801C4230[9] = D_i3_801C42A0[3] = 50;
                            D_i3_801C42A0[22] = 0;
                            bossAQ->swork[12]--;
                            bossAQ->swork[13] = 70;
                            Audio_PlaySfx(0x2940604C, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        }
                    } else if (bossAQ->state >= 10) {
                        Audio_PlaySfx(0x29121007, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    break;
                case 14: /* switch 3 */
                    if (bossAQ->damage == 31) {
                        if (D_i3_801C42A0[23] != 0) {
                            Audio_PlaySfx(0x29121007, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        } else if ((bossAQ->state >= 15) && (bossAQ->swork[8] != 0)) {
                            D_i3_801C42A0[1] = 50;
                            D_i3_801C4230[7] = 50;
                            bossAQ->swork[8]--;
                            Audio_PlaySfx(0x2903604C, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            if (bossAQ->swork[8] == 0) {
                                spD4.x = D_i3_801C4308[73];
                                spD4.y = D_i3_801C4308[74];
                                spD4.z = D_i3_801C4308[75]; // 74?
                                func_8007A6F0(&spD4, 0x19000033);
                                bossAQ->swork[10] = RAND_FLOAT(50.0f) + 250.0f;
                            }
                        }
                    }
                    break;
                case 15: /* switch 3 */
                    if (bossAQ->damage == 31) {
                        if (D_i3_801C42A0[23] != 0) {
                            Audio_PlaySfx(0x29121007, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        } else if ((bossAQ->state >= 15) && (bossAQ->swork[9] != 0)) {
                            D_i3_801C42A0[2] = 50;
                            D_i3_801C4230[8] = 50;
                            bossAQ->swork[9]--;
                            Audio_PlaySfx(0x2903604C, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            if (bossAQ->swork[9] == 0) {
                                spD4.x = D_i3_801C4308[76];
                                spD4.y = D_i3_801C4308[77]; // 76?
                                spD4.z = D_i3_801C4308[78];
                                func_8007A6F0(&spD4, 0x19000033);
                                bossAQ->swork[11] = RAND_FLOAT(50.0f) + 250.0f;
                            }
                        }
                    }
                    break;
                case 16: /* switch 3 */
                    if (bossAQ->damage == 31) {
                        if (D_i3_801C42A0[23] != 0) {
                            Audio_PlaySfx(0x29121007, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        } else if (bossAQ->state >= 15) {
                            D_i3_801C42A0[4] = 75;
                        }
                    }
                    break;
                case 17: /* switch 3 */
                    if (bossAQ->damage == 31) {
                        if (D_i3_801C42A0[23] != 0) {
                            Audio_PlaySfx(0x29121007, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        } else if (bossAQ->state >= 15) {
                            D_i3_801C42A0[5] = 75;
                        }
                    }
                    break;
                case 18: /* switch 3 */
                    if ((bossAQ->damage == 31) && (bossAQ->swork[1] != 2) && (bossAQ->swork[12] == 0) &&
                        (bossAQ->state == 15) && (bossAQ->health != 0)) {
                        if (D_i3_801C42A0[23] != 0) {
                            Audio_PlaySfx(0x29121007, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        } else {
                            for (i7 = 0; i7 < 28; i7++) {
                                D_i3_801C4230[i7] = 50;
                            }
                            D_i3_801C42A0[1] = D_i3_801C42A0[2] = D_i3_801C42A0[4] = D_i3_801C42A0[5] =
                                D_i3_801C42A0[6] = D_i3_801C42A0[7] = 50;

                            bossAQ->swork[13] = 40;
                            bossAQ->swork[1] = 2;
                            Audio_PlaySfx(0x2940804E, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            bossAQ->health -= bossAQ->damage;
                            if ((bossAQ->swork[25] == 0) || (bossAQ->swork[25] == 2)) {
                                Radio_PlayMessage(gMsg_ID_7086, RCID_SLIPPY);
                            }
                            bossAQ->swork[25]++;
                            if (bossAQ->health <= 0) {
                                func_800182F4(0x102800FF);
                                func_800182F4(0x112800FF);
                                func_80042EC0(bossAQ);
                                Radio_PlayMessage(gMsg_ID_15252, RCID_SLIPPY);
                                D_8017796C = -1;
                                if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) ||
                                    (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
                                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                                    gPlayer[0].unk_1D0 = 0;
                                }
                                D_i3_801C4190[1] = 0;
                                D_i3_801C4190[5] = 0;
                                D_i3_801C4190[3] = 0;
                                D_i3_801C4190[4] = 0;
                                D_i3_801C4190[0] = 0;
                                bossAQ->health = 0;
                                bossAQ->swork[13] = 40;
                                bossAQ->swork[1] = 2;
                                bossAQ->timer_056 = 50;
                                Audio_PlaySfx(0x2940A04F, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                gShowBossHealth = false;
                                bossAQ->state = 16;
                            }
                        }
                    }
                    break;
                case 19: /* switch 3 */
                case 20: /* switch 3 */
                    if (bossAQ->damage == 31) {
                        if (D_i3_801C42A0[23] != 0) {
                            Audio_PlaySfx(0x29121007, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        } else if (bossAQ->state >= 15) {
                            D_i3_801C42A0[6] = 50;
                        }
                    }
                    break;
                default: /* switch 3 */
                    Audio_PlaySfx(0x29121007, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
            }
        }
    }
    if (bossAQ->state >= 15) {
        switch (bossAQ->swork[1]) { /* switch 4; irregular */
            case 0:                 /* switch 4 */
                Math_SmoothStepToF(&D_i3_801C4308[12], -45.0f, 1.0f, bossAQ->fwork[1], 0.01f);
                Math_SmoothStepToF(&D_i3_801C4308[13], 30.0f, 1.0f, bossAQ->fwork[1], 0.01f);
                if ((bossAQ->timer_050 == 0) && (*(&D_i3_801C4308[12]) == -45.0f)) {
                    bossAQ->timer_050 = 7;
                    bossAQ->swork[1]++;
                }
                break;
            case 1: /* switch 4 */
                var_fs0 = 2.0f * bossAQ->fwork[1];
                Math_SmoothStepToF(&D_i3_801C4308[12], 0.0f, 1.0f, var_fs0, 0.0001f);
                Math_SmoothStepToF(&D_i3_801C4308[13], 0.0f, 1.0f, var_fs0, 0.0001f);
                if (bossAQ->timer_050 == 0) {
                    bossAQ->swork[1] = 0;
                    bossAQ->timer_050 = 40.0f - ((bossAQ->health - 150) / 5.0f);
                }
                break;
            case 2: /* switch 4 */
                if (D_i3_801C42A0[7] != 0) {
                    Math_SmoothStepToF(&D_i3_801C4308[12], -80.0f, 1.0f, 10.0f, 0.0001f);
                    Math_SmoothStepToF(&D_i3_801C4308[13], 30.0f, 1.0f, 10.0f, 0.0001f);
                } else {
                    bossAQ->timer_050 = 50;
                    bossAQ->swork[1] = 0;
                }
                break;
        }
    }
    bossAQ->swork[14] += D_i3_801C0150[bossAQ->swork[18]][0];
    bossAQ->swork[15] += D_i3_801C0150[bossAQ->swork[18]][1];
    bossAQ->swork[16] += D_i3_801C0150[bossAQ->swork[18]][2];
    if (bossAQ->swork[14] < 0) {
        bossAQ->swork[14] = 0;
    }
    if (bossAQ->swork[15] < 0) {
        bossAQ->swork[15] = 0;
    }
    if (bossAQ->swork[16] < 0) {
        bossAQ->swork[16] = 0;
    }
    if (bossAQ->swork[17] == 0) {
        bossAQ->swork[17] = 10;
        bossAQ->swork[18] += 1;
        bossAQ->swork[18] &= 3;
    }
    if ((bossAQ->state >= 4) && (bossAQ->state < 16)) {
        sp104 = gPlayer[0].pos.x - bossAQ->obj.pos.x;
        sp100 = gPlayer[0].pos.y - bossAQ->obj.pos.y;
        spFC = gPlayer[0].unk_138 - bossAQ->obj.pos.z;
        spE8 = Math_RadToDeg(Math_Atan2F(sp104, spFC));
        spFC = sqrtf(SQ(sp104) + SQ(spFC));
        spE4 = Math_RadToDeg(-Math_Atan2F(sp100, spFC));
        if ((spE8 <= 40.0f) || (spE8 >= 320.0f)) {
            Math_SmoothStepToAngle(&D_i3_801C4308[15], spE8, 1.0f, 5.0f, 0.001f);
        }
        if ((spE4 <= 30.0f) || (spE4 >= 330.0f)) {
            Math_SmoothStepToAngle(&D_i3_801C4308[14], spE4, 1.0f, 5.0f, 0.001f);
        }
    }
    for (i3 = 0; i3 < 6; i3++) {
        if ((D_i3_801C42A0[i3 + 1] == 0) && (bossAQ->state < 17)) {
            if ((i3 + 1 != bossAQ->swork[6]) && (i3 + 1 != bossAQ->swork[7])) {
                i2 = D_i3_801C42A0[i3 + 16];
                Math_SmoothStepToF(&D_i3_801C4308[52 + i3], (&D_i3_801BFC94[0][0])[4 * i3 + i2].x,
                                   (&D_i3_801BFE18[0][0])[4 * i3 + i2].x, (&D_i3_801BFF38[0][0])[4 * i3 + i2].x,
                                   0.00001f);
                Math_SmoothStepToF(&D_i3_801C4308[59 + i3], (&D_i3_801BFC94[0][0])[4 * i3 + i2].y,
                                   (&D_i3_801BFE18[0][0])[4 * i3 + i2].y, (&D_i3_801BFF38[0][0])[4 * i3 + i2].y,
                                   0.00001f);
                Math_SmoothStepToF(&D_i3_801C4308[66 + i3], (&D_i3_801BFC94[0][0])[4 * i3 + i2].z,
                                   (&D_i3_801BFE18[0][0])[4 * i3 + i2].z, (&D_i3_801BFF38[0][0])[4 * i3 + i2].z,
                                   0.00001f);
                D_i3_801C42A0[i3 + 10]++;
                if (D_i3_801C42A0[i3 + 10] >= (&D_i3_801BFDB4[0][0])[4 * i3 + i2]) {
                    D_i3_801C42A0[i3 + 16]++;
                    if ((D_i3_801C42A0[i3 + 16] >= 4) ||
                        ((&D_i3_801BFDB4[0][0])[4 * i3 + D_i3_801C42A0[i3 + 16]] == 10000)) {
                        D_i3_801C42A0[i3 + 10] = 0;
                        D_i3_801C42A0[i3 + 16] = 0;
                    }
                }
            }
        }
    }

    spF4 = gPlayer[0].pos.y - D_i3_801C4308[77];
    spF8 = gPlayer[0].pos.x - D_i3_801C4308[76];
    spF0 = gPlayer[0].unk_138 - D_i3_801C4308[78];
    sp104 = gPlayer[0].pos.x - D_i3_801C4308[73];
    sp100 = gPlayer[0].pos.y - D_i3_801C4308[74];
    spFC = gPlayer[0].unk_138 - D_i3_801C4308[75];

    spE8 = Math_RadToDeg(Math_Atan2F(sp104, spFC));
    spE0 = Math_RadToDeg(Math_Atan2F(spF8, spF0));
    spFC = sqrtf((sp104 * sp104) + (spFC * spFC));
    spF0 = sqrtf((spF8 * spF8) + (spF0 * spF0));
    spE4 = Math_RadToDeg(-Math_Atan2F(sp100, spFC));
    spEC = Math_RadToDeg(-Math_Atan2F(spF4, spF0));
    if ((spE8 <= 15.0f) || (spE8 >= 310.0f)) {
        Math_SmoothStepToAngle(&D_i3_801C4308[18], spE8, 1.0f, 5.0f, 0.001f);
    }
    if ((spE4 <= 12.0f) || (spE4 >= 330.0f)) {
        Math_SmoothStepToAngle(&D_i3_801C4308[16], spE4, 1.0f, 5.0f, 0.001f);
    }
    if ((spE0 <= 20.0f) || (spE0 >= 315.0f)) {
        Math_SmoothStepToAngle(&D_i3_801C4308[19], spE0, 1.0f, 5.0f, 0.001f);
    }
    if ((spEC <= 12.0f) || (spEC >= 330.0f)) {
        Math_SmoothStepToAngle(&D_i3_801C4308[17], spEC, 1.0f, 5.0f, 0.001f);
    }
    if ((bossAQ->swork[2] == 1) && (bossAQ->swork[8] != 0) && (bossAQ->health != 0) && (bossAQ->swork[6] == 0)) {
        D_i3_801C42A0[16] = 0;
        D_i3_801C42A0[10] = 0;
        bossAQ->swork[6] = 1;
    }
    if ((bossAQ->swork[3] == 1) && (bossAQ->swork[9] != 0) && (bossAQ->health != 0) && (bossAQ->swork[7] == 0)) {
        D_i3_801C42A0[17] = 0;
        D_i3_801C42A0[11] = 0;
        bossAQ->swork[7] = 2;
    }
    if (bossAQ->health != 0) {
        for (i7 = 0; i7 < 2; i7++) {
            if (bossAQ->swork[i7 + 6] != 0) {
                i2 = bossAQ->swork[i7 + 4];
                Math_SmoothStepToF(&D_i3_801C4308[52 + i7], D_i3_801C00B0[0][i2], D_i3_801C00F0[0][i2],
                                   D_i3_801C0120[0][i2], 0.00001f);
                Math_SmoothStepToF(&D_i3_801C4308[59 + i7], D_i3_801C00B0[1][i2], D_i3_801C00F0[1][i2],
                                   D_i3_801C0120[1][i2], 0.00001f);
                Math_SmoothStepToF(&D_i3_801C4308[66 + i7], D_i3_801C00B0[2][i2], D_i3_801C00F0[2][i2],
                                   D_i3_801C0120[2][i2], 0.00001f);
                D_i3_801C42A0[i7 + 10]++;
                if (D_i3_801C42A0[i7 + 10] >= D_i3_801C00E0[i2]) {
                    bossAQ->swork[i7 + 4]++;
                    if (bossAQ->swork[i7 + 4] == 2) {
                        i = 4;
                        if (D_i3_801C42A0[23] == 0) {

                            i = ((160 - bossAQ->health) / 10) + 10;
                            if (bossAQ->health < 31) {
                                i += 10;
                            }
                            if (i > 40) {
                                i = 40;
                            }
                        }
                        spD4.x = D_i3_801C4308[73 + 3 * i7];
                        spD4.y = D_i3_801C4308[74 + 3 * i7];
                        spD4.z = D_i3_801C4308[75 + 3 * i7];
                        func_8007A6F0(&spD4, 0x2903404B);
                        i2 = 0;
                        for (i3 = 0; i2 <= i && i3 < 60; i3++) {
                            if ((gActors[i3].obj.status == 0) && (i3 < 60)) {
                                Actor_Initialize(&gActors[i3]);

                                gActors[i3].obj.status = 1;
                                gActors[i3].obj.id = 258;
                                gActors[i3].obj.pos.x = D_i3_801C4308[73 + 3 * i7];
                                gActors[i3].obj.pos.y = D_i3_801C4308[74 + 3 * i7] + 30.0f;
                                gActors[i3].obj.pos.z = D_i3_801C4308[75 + 3 * i7] + 150.0f;
                                if (Rand_ZeroOne() < 0.5f) {
                                    var_fs1 = Math_ModF(RAND_FLOAT_CENTERED(60.0f) + D_i3_801C4308[i7 + 16], 360.0f);
                                    var_fs0 = Math_ModF(RAND_FLOAT_CENTERED(60.0f) + D_i3_801C4308[i7 + 18], 360.0f);
                                    if (bossAQ->health < 61) {
                                        if (i7 == 0) {
                                            var_fs1 =
                                                Math_ModF(RAND_FLOAT_CENTERED(30.0f) + D_i3_801C4308[i7 + 16], 360.0f);
                                            var_fs0 = Math_ModF(
                                                RAND_FLOAT_CENTERED(20.0f) + (D_i3_801C4308[i7 + 18] - 30.0f), 360.0f);
                                        } else {
                                            var_fs1 =
                                                Math_ModF(RAND_FLOAT_CENTERED(30.0f) + D_i3_801C4308[i7 + 16], 360.0f);
                                            var_fs0 = Math_ModF(
                                                RAND_FLOAT_CENTERED(20.0f) + (D_i3_801C4308[i7 + 18] + 30.0f), 360.0f);
                                        }
                                    }
                                } else {
                                    var_fs1 = Math_ModF(RAND_FLOAT_CENTERED(30.0f) + D_i3_801C4308[i7 + 16], 360.0f);
                                    var_fs0 = Math_ModF(RAND_FLOAT_CENTERED(30.0f) + D_i3_801C4308[i7 + 18], 360.0f);
                                }
                                gActors[i3].fwork[3] = var_fs1;
                                gActors[i3].fwork[4] = var_fs0;
                                gActors[i3].timer_0BC = i2 * 3;
                                gActors[i3].fwork[1] = D_i3_801C4308[i7 + 16];
                                gActors[i3].fwork[2] = D_i3_801C4308[i7 + 18];
                                Object_SetInfo(&gActors[i3].info, gActors[i3].obj.id);
                                if (i3 >= 60) {
                                    gActors[i3].obj.status = 0;
                                }
                                i2++;
                            }
                        }
                    }
                    if (bossAQ->swork[i7 + 4] >= 4) {
                        D_i3_801C42A0[i7 + 10] = bossAQ->swork[i7 + 6] = bossAQ->swork[i7 + 4] = 0;
                    }
                }
            }
        }
    }
    for (i7 = 26; i7 < 107; i7 += 10) {
        var_fs0 = D_i3_801C4308[10] - 10;
        if (fabsf(D_i3_801C4308[10]) <= 5.0f) {
            var_fs0 = 0.0f;
        }
        bossAQ->info.hitbox[i7] = var_fs0;
    }
    if (bossAQ->state >= 10) {
        sp110 = D_i3_801C42A0[9];
        i2 = (gGameFrameCount & 0x1F);
        if (D_i3_801C4230[9] != 0) {
            Math_SmoothStepToF(&sp110, 255.0f, 1.0f, 10, 0.0001f);
        } else if (!(i2 & 0x10)) {
            Math_SmoothStepToF(&sp110, D_i3_801C005C, 1.0f, 10, 0.0001f);
        } else {
            Math_SmoothStepToF(&sp110, D_i3_801C0058, 1.0f, 10, 0.0001f);
        }
        D_i3_801C42A0[9] = sp110;
    }
    if (D_i3_801C42A0[7] != 0) {
        Math_SmoothStepToF(&D_801779A8[4], 20.0f, 1.0f, 5.0f, 0);
    }
    for (i7 = 0; i7 < 7; i7++) {
        if (D_i3_801C42A0[i7 + 1] != 0) {
            D_i3_801C4308[i7 + 45] = SIN_DEG(D_i3_801C0060[i7][0] * D_i3_801C42A0[i7 + 1]) *
                                     func_i3_801A958C(D_i3_801C42A0[i7 + 1], D_i3_801C0060[i7][1]);
            D_i3_801C42A0[i7 + 1]--;
        }
    }
    if (bossAQ->swork[12] != 0) {
        if (D_i3_801C42A0[3] != 0) {
            var_fs3 = 1.0f;
            if (D_i3_801C42A0[22] < 4) {
                var_fs3 = 1.2f;
            }
            Math_SmoothStepToF(&D_i3_801C4308[54], var_fs3, 0.3f, 1.0f, 0.0f);
            Math_SmoothStepToF(&D_i3_801C4308[61], var_fs3, 0.3f, 1.0f, 0.0f);
            D_i3_801C42A0[22]++;
            if (D_i3_801C42A0[22] >= 9) {
                D_i3_801C42A0[22] = 0;
            }
        }
    } else {
        D_i3_801C42A0[3] = 10;
        if (bossAQ->swork[13] != 0) {
            Math_SmoothStepToF(&D_i3_801C4308[54], 0.0f, 0.3f, 0.5f, 0.0f);
            Math_SmoothStepToF(&D_i3_801C4308[61], 0.0f, 0.3f, 0.5f, 0.0f);
            bossAQ->info.hitbox[119] = -10000.0f;
            if (bossAQ->swork[13] == 1) {
                Audio_PlaySfx(0x29409051, bossAQ->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        } else if ((bossAQ->health != 0) || (bossAQ->state < 16)) {
            Math_SmoothStepToF(&D_i3_801C4308[54], 1.0f, 0.3f, 0.5f, 0.0f);
            Math_SmoothStepToF(&D_i3_801C4308[61], 1.0f, 0.3f, 0.5f, 0.0f);
            if (D_i3_801C4308[61] >= 0.9f) {
                bossAQ->swork[12] = 10;
                bossAQ->info.hitbox[119] = 1028.0f;
            }
        } else {
            Math_SmoothStepToF(&D_i3_801C4308[54], 0, 0.1f, 10, 0);
            Math_SmoothStepToF(&D_i3_801C4308[61], 0, 0.1f, 10.0f, 0);
            D_i3_801C42A0[9] -= 5;
            if (D_i3_801C42A0[9] < 0) {
                D_i3_801C42A0[9] = 0;
            }
        }
    }
    if ((D_i3_801C42A0[7] != 0) || (bossAQ->state >= 16)) {
        var_fs3 = 0.25f;
    } else {
        var_fs3 = 1.0f;
    }
    Math_SmoothStepToF(&D_i3_801C4308[58], var_fs3, 0.3f, 1.0f, 0);
    for (i3 = 0; i3 < 2; i3++) {
        if (bossAQ->swork[i3 + 8] == 0) {
            if (bossAQ->swork[i3 + 10] == 1) {
                spD4.x = D_i3_801C4308[73 + 3 * i3];
                spD4.y = D_i3_801C4308[74 + 3 * i3];
                spD4.z = D_i3_801C4308[75 + 3 * i3];
                func_8007A6F0(&spD4, 0x29400052);
            }
            if ((fabsf(D_i3_801C4308[10]) <= 3.0f) || (bossAQ->swork[i3 + 10] == 0)) {
                Math_SmoothStepToF(&D_i3_801C4308[52 + i3], 1.0f, 0.1f, 0.5f, 0.0f);
                Math_SmoothStepToF(&D_i3_801C4308[59 + i3], 1.0f, 0.1f, 0.5f, 0.0f);
                Math_SmoothStepToF(&D_i3_801C4308[66 + i3], 1.0f, 0.1f, 0.5f, 0.0f);
                if (D_i3_801C4308[i3 + 66] >= 0.9f) {
                    for (i = 0; i < 3; i++) {
                        spD4.x = RAND_FLOAT(i * 200.0f) + D_i3_801C4308[73 + 3 * i3];
                        spD4.y = RAND_FLOAT(i * 200.0f) + D_i3_801C4308[74 + 3 * i3];
                        spD4.z = RAND_FLOAT(i * 400.0f) + D_i3_801C4308[75 + 3 * i3];
                        func_i3_801A94EC(&spD4, OBJ_ITEM_SILVER_RING);
                    }
                    bossAQ->swork[i3 + 8] = 2;
                }
            } else {
                Math_SmoothStepToF(&D_i3_801C4308[52 + i3], 0, 0.1f, 0.5f, 0.0f);
                Math_SmoothStepToF(&D_i3_801C4308[59 + i3], 0, 0.1f, 0.5f, 0.0f);
                Math_SmoothStepToF(&D_i3_801C4308[66 + i3], 0, 0.1f, 0.5f, 0.0f);
                D_i3_801C42A0[i3 + 1] = 50;
            }
        }
    }
    if (bossAQ->swork[2] != 0) {
        bossAQ->swork[2]--;
    }
    if (bossAQ->swork[3] != 0) {
        bossAQ->swork[3]--;
    }
    if (bossAQ->swork[10] != 0) {
        bossAQ->swork[10]--;
    }
    if (bossAQ->swork[11] != 0) {
        bossAQ->swork[11]--;
    }
    if (bossAQ->swork[13] != 0) {
        bossAQ->swork[13]--;
    }
    if (bossAQ->swork[17] != 0) {
        bossAQ->swork[17]--;
    }
    if (bossAQ->swork[19] != 0) {
        bossAQ->swork[19]--;
    }
    if (bossAQ->swork[26] == gBossFrameCount) {
        gShowBossHealth = true;
    }
    if (bossAQ->swork[26] < gBossFrameCount) {
        gBossHealthBar = (bossAQ->health / 150.0f) * 255.0f;
    }
}
#else
void func_i3_801B134C(Boss* bossAQ);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B134C.s")
#endif

bool func_i3_801B42AC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    Vec3f sp6C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp60;
    f32 sp5C = 0.0f;
    f32 sp58 = 0.0f;
    f32 sp54 = 0.0f;
    s32 sp50 = false;
    Boss* this = thisx;

    if (D_i3_801C4230[limbIndex] >= 1000) {
        *dList = NULL;
    } else if ((D_i3_801C4230[limbIndex] != 0) && (D_80177854 != 100)) {
        D_i3_801C4230[limbIndex]--;
    }
    GSGM_BACK();
    if ((D_i3_801C42A0[0] != 255) && (limbIndex != 27)) {
        RCP_SetupDL(&gMasterDisp, 0x3A);
        GPC(255, 255, 255, D_i3_801C42A0[0]);
    } else if (!(D_i3_801C4230[limbIndex] & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x39);
    } else {
        sp50 = true;
        RCP_SetupDL(&gMasterDisp, 0x3D);
        GPC(255, 0, 0, 255);
    }
    switch (limbIndex) {
        case 4:
            rot->x = D_i3_801C4308[13];
            sp5C = this->fwork[8];
            sp58 = this->fwork[9];
            sp54 = this->fwork[10];
            break;
        case 5:
            RCP_SetupDL(&gMasterDisp, 0x3D);
            GPC(gBosses[0].swork[14], gBosses[0].swork[15], gBosses[0].swork[16], 255);
            rot->x = D_i3_801C4308[14];
            rot->y = D_i3_801C4308[15];
            pos->z = 40.0f;
            sp5C = D_i3_801C4308[58];
            sp58 = D_i3_801C4308[65];
            sp54 = D_i3_801C4308[72];
            break;
        case 6:
            rot->x = D_i3_801C4308[12];
            sp5C = this->fwork[8];
            sp58 = this->fwork[9];
            sp54 = this->fwork[10];
            break;
        case 7:
            rot->x = D_i3_801C4308[16];
            rot->y = D_i3_801C4308[18];
            rot->x += D_i3_801C4308[45];
            rot->y += D_i3_801C4308[45];
            rot->z += D_i3_801C4308[45];
            sp5C = D_i3_801C4308[52];
            sp58 = D_i3_801C4308[59];
            sp54 = D_i3_801C4308[66];
            break;
        case 8:
            rot->x = D_i3_801C4308[17];
            rot->y = D_i3_801C4308[19];
            rot->x += D_i3_801C4308[46];
            rot->y += D_i3_801C4308[46];
            rot->z += D_i3_801C4308[46];
            sp5C = D_i3_801C4308[53];
            sp58 = D_i3_801C4308[60];
            sp54 = D_i3_801C4308[67];
            break;
        case 9:
            rot->x += D_i3_801C4308[47];
            rot->y += D_i3_801C4308[47];
            rot->z += D_i3_801C4308[47];
            sp5C = D_i3_801C4308[54];
            sp58 = D_i3_801C4308[61];
            sp54 = D_i3_801C4308[68];
            if (sp50) {
                RCP_SetupDL(&gMasterDisp, 0x3D);
                if (gBosses[0].health != 0) {
                    GPC(255, 0, 0, 255);
                } else {
                    GPC(255, 0, 0, 255);
                }
            }
            break;
        case 10:
            rot->x += D_i3_801C4308[48];
            rot->y += D_i3_801C4308[48];
            rot->z += D_i3_801C4308[48];
            sp5C = D_i3_801C4308[55];
            sp58 = D_i3_801C4308[62];
            sp54 = D_i3_801C4308[69];
            break;
        case 12:
            rot->x = D_i3_801C4308[14];
            rot->y = D_i3_801C4308[15];
            sp5C = this->fwork[8];
            sp58 = this->fwork[9];
            sp54 = this->fwork[10];
            break;
        case 15:
            rot->x += D_i3_801C4308[49];
            rot->y += D_i3_801C4308[49];
            rot->z += D_i3_801C4308[49];
            sp5C = D_i3_801C4308[56];
            sp58 = D_i3_801C4308[63];
            sp54 = D_i3_801C4308[70];
            break;
        case 18:
            rot->y += D_i3_801C4308[50];
            rot->z += D_i3_801C4308[50];
            sp5C = D_i3_801C4308[57];
            sp58 = D_i3_801C4308[64];
            sp54 = D_i3_801C4308[71];
            break;
        case 22:
            rot->x += D_i3_801C4308[51];
            rot->y += D_i3_801C4308[51];
            rot->z += D_i3_801C4308[51];
            sp5C = this->fwork[8];
            sp58 = this->fwork[9];
            sp54 = this->fwork[10];
            break;
        case 24:
            rot->x = D_i3_801C4308[10];
            rot->z = D_i3_801C4308[11];
            break;
        case 27:
            break;
    }
    if (sp5C > 0.0f) {
        Matrix_Translate(gCalcMatrix, pos->x, pos->y, pos->z, 1);
        Matrix_RotateZ(gCalcMatrix, rot->z * M_DTOR, 1);
        Matrix_RotateY(gCalcMatrix, rot->y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, rot->x * M_DTOR, 1);
        if (*dList != NULL) {
            Matrix_MultVec3f(gCalcMatrix, &sp6C, &sp60);
            func_8005F670(&sp60);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, sp5C, sp58, sp54, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(*dList);
            Matrix_Pop(&gGfxMatrix);
        }
        return true;
    }
    return false;
}

void func_i3_801B49DC(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp6C;
    Vec3f sp60 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp54 = { 340.0f, 600.0f, 1480.0f };
    Vec3f sp48 = { -640.0f, 380.0f, 1520.0f };
    Vec3f sp3C = { 760.0f, 340.0f, 1560.0f };
    Vec3f sp30 = { 130.0f, 350.0f, 130.0f };
    Vec3f sp24 = { -130.0f, 350.0f, 130.0f };

    switch (limbIndex) {
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
            D_i3_801C4308[21] = sp6C.x;
            D_i3_801C4308[22] = sp6C.y;
            D_i3_801C4308[23] = sp6C.z;
            break;
        case 7:
            Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
            D_i3_801C4308[24] = sp6C.x;
            D_i3_801C4308[25] = sp6C.y;
            D_i3_801C4308[26] = sp6C.z;
            Matrix_MultVec3f(gCalcMatrix, &sp30, &sp6C);
            D_i3_801C4308[73] = sp6C.x;
            D_i3_801C4308[74] = sp6C.y;
            D_i3_801C4308[75] = sp6C.z;
            break;
        case 8:
            Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
            D_i3_801C4308[27] = sp6C.x;
            D_i3_801C4308[28] = sp6C.y;
            D_i3_801C4308[29] = sp6C.z;
            Matrix_MultVec3f(gCalcMatrix, &sp24, &sp6C);
            D_i3_801C4308[76] = sp6C.x;
            D_i3_801C4308[77] = sp6C.y;
            D_i3_801C4308[78] = sp6C.z;
            break;
        case 9:
            Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
            D_i3_801C4308[30] = sp6C.x;
            D_i3_801C4308[31] = sp6C.y;
            D_i3_801C4308[32] = sp6C.z;
            break;
        case 10:
            Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
            D_i3_801C4308[33] = sp6C.x;
            D_i3_801C4308[34] = sp6C.y;
            D_i3_801C4308[35] = sp6C.z;
            break;
        case 15:
            Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
            D_i3_801C4308[36] = sp6C.x;
            D_i3_801C4308[37] = sp6C.y;
            D_i3_801C4308[38] = sp6C.z;
            break;
        case 18:
            Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
            D_i3_801C4308[39] = sp6C.x;
            D_i3_801C4308[40] = sp6C.y;
            D_i3_801C4308[41] = sp6C.z;
            break;
        case 22:
            Matrix_MultVec3f(gCalcMatrix, &sp60, &sp6C);
            D_i3_801C4308[42] = sp6C.x;
            D_i3_801C4308[43] = sp6C.y;
            D_i3_801C4308[44] = sp6C.z;
            break;
        case 24:
            Matrix_MultVec3f(gCalcMatrix, &sp54, &sp6C);
            D_i3_801C4308[1] = sp6C.x;
            D_i3_801C4308[4] = sp6C.y;
            D_i3_801C4308[7] = sp6C.z;
            Matrix_MultVec3f(gCalcMatrix, &sp48, &sp6C);
            D_i3_801C4308[2] = sp6C.x;
            D_i3_801C4308[5] = sp6C.y;
            D_i3_801C4308[8] = sp6C.z;
            Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp6C);
            D_i3_801C4308[3] = sp6C.x;
            D_i3_801C4308[6] = sp6C.y;
            D_i3_801C4308[9] = sp6C.z;
            break;
        case 27:
            break;
    }
}

// OBJ_BOSS_AQ draw
void func_i3_801B4D84(Boss* bossAQ) {
    Animation_DrawSkeleton(3, D_602BD60, bossAQ->vwork, func_i3_801B42AC, func_i3_801B49DC, bossAQ, gCalcMatrix);
}

f32 D_i3_801C01F8[11] = {
    400.0f, 430.0f, 460.0f, 490.0f, 520.0f, 550.0f, 580.0f, 610.0f, 640.0f, 670.0f, 700.0f,
};
f32 D_i3_801C0224[11] = {
    6.0f, 6.0f, 8.0f, 8.0f, 8.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f,
};
Vec3f D_i3_801C0250 = { 0.0f, 0.0f, 0.0f };

s32 func_i3_801B4DDC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    Actor* this = thisx;

    if (!(this->timer_0C6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x39);
        if ((limbIndex > 0) && (limbIndex < 5)) {
            RCP_SetupDL(&gMasterDisp, 0x3C);
        }
    } else {
        RCP_SetupDL(&gMasterDisp, 0x3D);
        GPC(255, 0, 0, 255);
    }
    return false;
}

void func_i3_801B4E94(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = D_i3_801C0250;
    Actor* this = thisx;

    if (this->health == 0) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, this->vwork);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[8]);
                break;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[9]);
                break;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[10]);
                break;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[11]);
                break;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[12]);
                break;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[13]);
                break;
            case 7:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[6]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[14]);
                break;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[7]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[15]);
                break;
        }
    }
}

// OBJ_ACTOR_261 draw
void func_i3_801B504C(Actor* actor) {
    Vec3f sp30[30];

    Matrix_Scale(gCalcMatrix, actor->scale, actor->scale, actor->scale, 1);
    Animation_GetFrameData(&D_6005954, actor->unk_0B6, sp30);
    Animation_DrawSkeleton(3, D_6005A80, sp30, func_i3_801B4DDC, func_i3_801B4E94, actor, gCalcMatrix);
}

f32 D_i3_801C025C[2] = { 120.0f, 0.0f };
s32 D_i3_801C0264[19] = {
    0, 0, 3, 4, 0, 5, 6, 7, 1, 2, 0, 0, 0, 0, 0, 0, 8, 9, 0,
};

// OBJ_ACTOR_261 action
void func_i3_801B50E8(Actor* actor) {
    s32 i;
    Vec3f sp88;
    Vec3f sp7C;
    Vec3f sp70;
    Actor* var_v0;

    if ((actor->health == 0) && (actor->state != 0)) {
        for (i = 0; i < 5; i++) {
            func_80081A8C(actor->obj.pos.x + RAND_FLOAT(i * 15.0f), actor->obj.pos.y + RAND_FLOAT(i * 3.0f),
                          actor->obj.pos.z + RAND_FLOAT(i * 5.0f), RAND_FLOAT(0.4f) + 0.4f, 7);
        }
        actor->health = 0;
        actor->state = 7;
        func_8007A6F0(&actor->obj.pos, 0x29038090);
    }
    switch (actor->state) {
        case 0:
            for (i = 0; i < 8; i++) {
                actor->vwork[i].x = actor->obj.pos.x;
                actor->vwork[i].y = actor->obj.pos.y;
                actor->vwork[i].z = actor->obj.pos.z;
                actor->vwork[8 + i].x = actor->obj.rot.x;
                actor->vwork[8 + i].y = actor->obj.rot.y;
                actor->vwork[8 + i].z = actor->obj.rot.z;
            }
            actor->info.bonus = 0;
            actor->health = 10;
            actor->fwork[4] = RAND_FLOAT_CENTERED(400.0f) + 1000.0f;
            actor->state++;
            break;
        case 2:
            Math_SmoothStepToF(&actor->obj.pos.z, gPlayer[0].unk_138, 1.0f, 10.0f, 0);
            if (fabsf(actor->obj.pos.z - gPlayer[0].unk_138) < actor->fwork[4]) {
                func_i3_801A9728(actor, 50.0f, 10.0f, 8);
                actor->state = 3;
                actor->vel.y = 30.0f;
            } else if (!(gGameFrameCount & 0xF)) {
                func_8007B8F8(actor->obj.pos.x, gGroundLevel + 30.0f, actor->obj.pos.z, 10.0f);
            }
            break;
        case 3:
            Math_SmoothStepToAngle(&actor->obj.rot.x, 270.0f, 1.0f, 100.0f, 0.0001f);
            if (actor->obj.rot.x == 270.0f) {
                actor->iwork[1] = RAND_FLOAT(10.0f);
                actor->fwork[0] = D_i3_801C01F8[actor->iwork[1]];
                actor->state = 4;
            }
            break;
        case 4:
            Math_SmoothStepToF(&actor->vel.y, 0.0f, 1.0f, 4.0f, 0.0001f);
            actor->vel.z = gPlayer[0].vel.z;
            Math_SmoothStepToF(&actor->obj.pos.z, gPlayer[0].unk_138 - actor->fwork[4], 0.1f, 100.0f, 0);
            Math_SmoothStepToF(&actor->obj.pos.y, actor->fwork[0], 1.0f, D_i3_801C0224[actor->iwork[1]], 0);
            actor->fwork[1] += 10.0f;
            actor->vel.x = COS_DEG(actor->fwork[1]) * actor->iwork[1] * 0.1f;
            if ((actor->fwork[0] - 1.0f) <= actor->obj.pos.y) {
                actor->state = 5;
            }
            if (!(gGameFrameCount & 7)) {
                func_i3_801AC8A8(actor->obj.pos.x + RAND_FLOAT_CENTERED(100.0f),
                                 actor->obj.pos.y + RAND_FLOAT_CENTERED(100.0f),
                                 actor->obj.pos.z + RAND_FLOAT_CENTERED(100.0f), 1.0f, 1);
            }
            break;
        case 5:
            actor->vel.z = gPlayer[0].vel.z;
            Math_SmoothStepToF(&actor->obj.pos.z, gPlayer[0].unk_138 - 1000.0f, 0.1f, 100.0f, 0);
            Math_SmoothStepToF(&actor->vel.x, 0.0f, 1.0f, 2.0f, 0.001f);
            Math_SmoothStepToAngle(&actor->obj.rot.x, D_i3_801C025C[actor->iwork[0]], 1.0f, 20.0f, 0);
            if (actor->obj.rot.x == D_i3_801C025C[actor->iwork[0]]) {
                actor->iwork[0]++;
                if (actor->iwork[0] >= 2) {
                    sp88.x = gPlayer[0].pos.x - actor->obj.pos.x;
                    sp88.y = gPlayer[0].pos.y - actor->obj.pos.y;
                    sp88.z = gPlayer[0].unk_138 - actor->obj.pos.z;
                    actor->fwork[2] = Math_RadToDeg(Math_Atan2F(sp88.x, sp88.z));
                    actor->fwork[3] = Math_RadToDeg(-Math_Atan2F(sp88.y, sqrtf(SQ(sp88.x) + SQ(sp88.z))));
                    Matrix_RotateY(gCalcMatrix, actor->fwork[2] * M_DTOR, 0);
                    Matrix_RotateX(gCalcMatrix, actor->fwork[3] * M_DTOR, 1);
                    sp7C.x = sp7C.y = 0.0f;
                    sp7C.z = 40.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp7C, &sp70);
                    actor->vel.x = sp70.x;
                    actor->vel.y = sp70.y;
                    actor->vel.z = sp70.z;
                    actor->state = 6;
                }
            }
            break;
        case 6:
            Math_SmoothStepToAngle(&actor->obj.rot.x, actor->fwork[3], 1.0f, 5.0f, 0);
            Math_SmoothStepToAngle(&actor->obj.rot.y, actor->fwork[2], 1.0f, 5.0f, 0);
            if (!(gGameFrameCount & 3)) {
                func_i3_801AC8A8(actor->obj.pos.x + RAND_FLOAT_CENTERED(100.0f),
                                 actor->obj.pos.y + RAND_FLOAT_CENTERED(100.0f),
                                 actor->obj.pos.z + RAND_FLOAT_CENTERED(100.0f), 1.0f, 1);
            }
            break;
        case 7:
            for (i = 0; i < 8; i++) {
                func_i3_801A9448(&actor->vwork[i], &actor->vwork[8 + i], RAND_FLOAT_CENTERED(20.0f), RAND_FLOAT(5.0f),
                                 RAND_FLOAT_CENTERED(10.0f), 49, actor->scale, 200, i);
                func_8007BC7C(actor->vwork[i].x, actor->vwork[i].y, actor->vwork[i].z + 100.0f, 6.0f);
            }
            actor->unk_044 = 0;
            func_80066254(actor);
            func_800815DC();
            Object_Kill(&actor->obj, actor->sfxPos);
            func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 6.0f);
            break;
    }
    if (actor->state >= 2) {
        if (actor->state < 3) {
            actor->unk_0B6++;
        } else {
            actor->unk_0B6 += 3;
        }
        if (actor->unk_0B6 >= Animation_GetFrameCount(&D_6005954)) {
            actor->unk_0B6 = 0;
        }
    }
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        if (actor->health != 0) {
            if (actor->damage == 31) {
                actor->info.bonus = 1;
                actor->health -= actor->damage;
                if (actor->health <= 0) {
                    actor->health = 0;
                }
            } else if (actor->damage == 30) {
                for (i = 0, var_v0 = gActors; i < 60; i++, var_v0++) {
                    if ((var_v0->obj.status == 2) && (var_v0->obj.id == 261) && (var_v0->state == 1) &&
                        (i != actor->index) && (fabsf(var_v0->obj.pos.x - actor->obj.pos.x) <= 300.0f) &&
                        (fabsf(var_v0->obj.pos.z - actor->obj.pos.z) <= 300.0f)) {
                        var_v0->state = 2;
                    }
                }
            } else if ((actor->state >= 3) && (actor->state < 5)) {
                actor->info.bonus = 1;
                actor->timer_0C6 = 15;
                actor->health -= actor->damage;
                if (actor->health <= 0) {
                    actor->health = 0;
                }
            }
        }
    }
}

s32 func_i3_801B5C18(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    f32 sp6C = 1.0f;
    f32 sp68 = 1.0f;
    f32 sp64 = 1.0f;
    Vec3f sp58;
    Vec3f sp4C = { 0.0f, 0.0f, 0.0f };
    Actor* this = thisx;

    if (!(this->timer_0C6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x39);
    } else if ((limbIndex < 7) || (limbIndex >= 9)) {
        RCP_SetupDL(&gMasterDisp, 0x3D);
        GPC(255, 0, 0, 255);
    }
    switch (limbIndex) {
        case 7:
            RCP_SetupDL(&gMasterDisp, 0x40);
            GPC(255, 255, 255, (s32) this->fwork[4]);
            GCGM_BACK();
            sp6C = this->fwork[1];
            sp68 = this->fwork[2];
            sp64 = this->fwork[3];
            break;
        case 8:
            RCP_SetupDL(&gMasterDisp, 0x3D);
            GPC(255, 255, 255, (s32) this->fwork[4]);
            break;
    }
    if (sp6C != 1.0f) {
        Matrix_Translate(gCalcMatrix, pos->x, pos->y, pos->z, 1);
        Matrix_RotateZ(gCalcMatrix, rot->z * M_DTOR, 1);
        Matrix_RotateY(gCalcMatrix, rot->y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, rot->x * M_DTOR, 1);
        if (*dList != NULL) {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp58);
            func_8005F670(&sp58);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, sp6C, sp68, sp64, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(*dList);
            Matrix_Pop(&gGfxMatrix);
        }
        return true;
    }
    return false;
}

void func_i3_801B5F68(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp3C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp30;
    Vec3f sp24;
    Actor* this = thisx;

    if ((this->health == 0) || (limbIndex == 7)) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp3C, &this->vwork[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[9]);
                break;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp3C, &this->vwork[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[10]);
                break;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp3C, &this->vwork[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[11]);
                break;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp3C, &this->vwork[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[12]);
                break;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp3C, &this->vwork[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[13]);
                break;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp3C, &this->vwork[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[14]);
                break;
            case 7:
                sp30.x = this->fwork[11];
                sp30.y = 0.0f;
                sp30.z = 0.0f;
                Matrix_MultVec3f(gCalcMatrix, &sp30, &sp24);
                this->fwork[8] = sp24.x;
                this->fwork[9] = gGroundLevel;
                this->fwork[10] = sp24.z;
                break;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp3C, &this->vwork[6]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[15]);
                break;
            case 9:
                Matrix_MultVec3f(gCalcMatrix, &sp3C, &this->vwork[7]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[16]);
                break;
            case 16:
                Matrix_MultVec3f(gCalcMatrix, &sp3C, &this->vwork[8]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[17]);
                break;
        }
    }
}

f32 D_i3_801C02C8[2] = { 255.0f, 68.0f };
s32 D_i3_801C02D0[2] = { 70, 100 };

// OBJ_ACTOR_259 draw
void func_i3_801B619C(Actor* actor) {
    Vec3f sp40[30];

    Matrix_Push(&gCalcMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Scale(gCalcMatrix, actor->scale, actor->scale, actor->scale, 1);
    Animation_GetFrameData(&D_6002628, actor->unk_0B6, sp40);
    Animation_DrawSkeleton(3, D_6002874, sp40, func_i3_801B5C18, func_i3_801B5F68, actor, gCalcMatrix);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Pop(&gCalcMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, actor->fwork[8], actor->fwork[9], actor->fwork[10], 1);
    Matrix_Scale(gGfxMatrix, actor->fwork[5], actor->fwork[6], actor->fwork[7], 1);
    RCP_SetupDL(&gMasterDisp, 0x31);
    GPC(255, 255, 255, (s32) actor->iwork[12]);
    GEC(127, 127, 0, (s32) actor->iwork[12]);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_1024AC0);
    Matrix_Pop(&gGfxMatrix);
}

void func_i3_801B6344(Actor* actor) {
    actor->health = 200;
    actor->iwork[13] = actor->fwork[4] = 255.0f;
    actor->fwork[12] = actor->obj.rot.y;
    actor->iwork[14] = actor->iwork[16] = actor->obj.rot.z;
}

#ifdef NON_MATCHING
void func_i3_801B638C(Actor* actor) {
    Actor* var_v0;
    s32 i;
    f32 spB4;
    f32 temp_dz;
    f32 temp_fscc;
    f32 temp_ryr;
    f32 temp_fsc;
    f32 temp2;
    f32 temp_dx;

    f32 sp98;
    Vec3f sp8C;
    Vec3f sp80;
    f32 var_rxd;

    if (actor->health == 0) {
        for (i = 0; i < 9; i++) {
            func_i3_801A9448(&actor->vwork[i], &actor->vwork[9 + i], RAND_FLOAT_CENTERED(20.0f), RAND_FLOAT(5.0f),
                             RAND_FLOAT_CENTERED(10.0f), 48, actor->scale, 200, i);
            func_8007BC7C(actor->vwork[i].x, actor->vwork[i].y, actor->vwork[i].z, 10.0f);
        }
        func_800815DC();
        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 150.0f, 10.0f);
        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 150.0f, 10.0f);
        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 150.0f, 10.0f);
        for (i = 0; i < 5; i++) {
            func_80081A8C(RAND_FLOAT(i * 15.0f) + actor->obj.pos.x, RAND_FLOAT(i * 3.0f) + actor->obj.pos.y,
                          RAND_FLOAT(i * 5.0f) + actor->obj.pos.z, RAND_FLOAT(1.0f) + 1.0f, 7);
        }
        actor->unk_044 = 2;
        if (actor->iwork[16] != 0) {
            actor->unk_044 = 14;
        }
        func_80066254(actor);
        Object_Kill(&actor->obj, actor->sfxPos);
        Audio_PlaySfx(0x1903001D, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        func_8007A6F0(&actor->obj.pos, 0x29038090);
    }
    actor->fwork[5] = (actor->obj.pos.y * 0.01f) + 2.5f;
    actor->fwork[6] = (actor->obj.pos.y * 0.003f) + 0.8f;
    actor->fwork[7] = (actor->obj.pos.y * 0.001f) + 0.8f;
    actor->iwork[12] = (actor->obj.pos.y * -0.24f) + 150.0f;
    if (actor->iwork[12] < 30.0f) {
        actor->iwork[12] = 30;
    }

    actor->fwork[1] = (actor->obj.pos.y * 0.0032f) + 1.0f;
    actor->fwork[2] = (actor->obj.pos.y * 0.0032f) + 1.5f;
    actor->fwork[3] = (actor->obj.pos.y * 0.0032f) + 2.0f;
    actor->fwork[11] = actor->obj.pos.y + 300.0f;
    if (actor->fwork[11] > 1200.0f) {
        actor->fwork[11] = 1200.0f;
    }
    actor->unk_0B6++;
    if (actor->unk_0B6 >= Animation_GetFrameCount(&D_6002628)) {
        actor->unk_0B6 = 0;
    }
    switch (actor->state) { /* irregular */
        case 0:
            for (i = 0; i < 9; i++) {
                actor->vwork[0 + i].x = actor->obj.pos.x;
                actor->vwork[0 + i].y = actor->obj.pos.y;
                actor->vwork[0 + i].z = actor->obj.pos.z;
                actor->vwork[9 + i].x = actor->obj.rot.x;
                actor->vwork[9 + i].y = actor->obj.rot.y;
                actor->vwork[9 + i].z = actor->obj.rot.z;
            }
            Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
            sp8C.x = sp8C.y = 0.0f;
            sp8C.z = -1400.0f;
            if (actor->iwork[14] != 0) {
                sp8C.z = -5000.0f;
            }
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp8C, &sp80);
            actor->fwork[15] = actor->obj.pos.x + sp80.x;
            actor->fwork[16] = actor->obj.pos.z + sp80.z;
            actor->state = 1;

            break;
        case 1:
            if (actor->timer_0BC == 1) {
                actor->iwork[15] = 1;
            }
            if (actor->iwork[15] != 0) {
                if ((gPlayer[0].unk_138 + 300.0f) < actor->obj.pos.z) {
                    Object_Kill(&actor->obj, actor->sfxPos);
                }
            } else {
                if (!(gGameFrameCount & 1)) {
                    for (i = 0, var_v0 = gActors; i < 60; i++, var_v0++) {
                        if ((var_v0->obj.status == 2) && (var_v0->obj.id == 261) && (var_v0->state == 1) &&
                            (fabsf(var_v0->obj.pos.x - actor->fwork[8]) <= (actor->fwork[5] * 48.0f)) &&
                            (var_v0->obj.pos.y <= (actor->obj.pos.y + 50.0f)) &&
                            (fabsf(var_v0->obj.pos.z - actor->fwork[10]) <= (actor->fwork[7] * 125.0f))) {
                            var_v0->state = 2;
                        }
                    }
                }
                temp_dx = actor->obj.pos.x - actor->fwork[15];
                temp_dz = actor->obj.pos.z - actor->fwork[16];
                sp98 = sqrtf(SQ(temp_dx) + SQ(temp_dz));
                actor->fwork[13] -= 20.0f;
                actor->fwork[14] += 5.0f;
                spB4 = SIN_DEG(actor->fwork[13]) * sp98 * 0.1f;
                temp_fsc = COS_DEG(actor->fwork[14]) * sp98 * 0.8f;
                temp_fscc = COS_DEG(actor->obj.rot.y) * temp_fsc;
                temp2 = -SIN_DEG(actor->obj.rot.y) * temp_fsc;
                temp_ryr = Math_Atan2F(actor->obj.pos.x - actor->fwork[15] + temp_fscc,
                                       actor->obj.pos.z - actor->fwork[16] + temp2);
                temp_fscc = actor->obj.pos.y - spB4;
                var_rxd = -Math_Atan2F(temp_fscc, sp98);
                temp_ryr = Math_RadToDeg(temp_ryr);
                Math_SmoothStepToAngle(&actor->obj.rot.y, temp_ryr, 0.1f, 100.0f, 0.001f);
                var_rxd = Math_RadToDeg(var_rxd);
                if (actor->obj.pos.y >= 1000.0f) {
                    var_rxd = 0.0f;
                }
                Math_SmoothStepToAngle(&actor->obj.rot.x, var_rxd, 0.1f, 100.0f, 0.001f);
                Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
                sp8C.x = sp8C.y = 0.0f;
                sp8C.z = 10.0f;
                if (actor->iwork[14] != 0) {
                    sp8C.z = 30.0f;
                }
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp8C, &sp80);
                actor->vel.x = sp80.x;
                actor->vel.y = sp80.y;
                actor->vel.z = sp80.z;
                if (actor->iwork[15] != 0) {
                    actor->vel.x = actor->vel.y = actor->vel.z = 0.0f;
                }
                if ((actor->iwork[14] != 0) && (actor->obj.pos.z < (gPlayer[0].unk_138 - 2000.0f))) {
                    actor->iwork[14] = 0;
                    actor->timer_0BC = 500;
                }
            }
            break;
    }
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        if ((actor->health != 0) && (actor->unk_0D2 == 0)) {
            actor->health -= actor->damage;
            actor->timer_0C6 = 30;
            Audio_PlaySfx(0x2903408F, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (actor->health <= 0) {
                actor->health = 0;
                BonusText_Display(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 200.0f, 3);
                gHitCount += 4;
                D_80177850 = 15;
            }
        }
    }
}
#else
// OBJ_ACTOR_259 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B638C.s")
#endif

void func_i3_801B6E54(Actor* actor) {
    s32 i;

    for (i = 0; i < 15; i++) {
        actor->vwork[0 + i].x = actor->obj.pos.x;
        actor->vwork[0 + i].y = actor->obj.pos.y;
        actor->vwork[0 + i].z = actor->obj.pos.z;
        actor->vwork[15 + i].x = actor->obj.rot.x;
        actor->vwork[15 + i].y = actor->obj.rot.y;
        actor->vwork[15 + i].z = actor->obj.rot.z;
    }
    actor->health = 0;
    if (actor->obj.rot.z != 0) {
        actor->obj.rot.z = 0.0f;
        actor->state = 1;
    }
    actor->fwork[4] = actor->obj.pos.z;
}

// OBJ_ACTOR_262 action
#ifdef NON_MATCHING
void func_i3_801B6FF8(Actor* actor) {
    s32 i;
    f32 temp_dx;
    f32 temp_dy;
    f32 temp_dz;
    f32 temp_fs2_2;
    f32 spA8;
    Vec3f sp9C;
    Vec3f sp90;
    f32 var_fs0;

    if (actor->health == -100) {
        actor->unk_044 = 2;
        func_80066254(actor);
        for (i = 0; i < 15; i++) {
            func_i3_801A9448(&actor->vwork[i], &actor->vwork[15 + i], RAND_FLOAT_CENTERED(20.0f), RAND_FLOAT(5.0f),
                             RAND_FLOAT_CENTERED(10.0f), 51, actor->scale, 200, i);
            func_800815DC();
            func_8007D0E0(actor->vwork[i].x, actor->vwork[i].y, actor->vwork[i].z + 100.0f, 6.0f);
        }
        Object_Kill(&actor->obj, actor->sfxPos);
        func_8007A6F0(&actor->obj.pos, 0x29038090);
    }
    switch (actor->state) { /* irregular */
        case 0:
            if (actor->timer_0BC == 0) {
                actor->timer_0BC = 200;
                actor->fwork[1] = gPlayer[0].pos.x + RAND_FLOAT_CENTERED(800.0f);
                actor->fwork[2] = gPlayer[0].pos.y + 50.0f + RAND_FLOAT(100.0f);
                actor->fwork[3] = gPlayer[0].unk_138 - 1500.0f;
                if (actor->fwork[1] > 700.0f) {
                    actor->fwork[1] = 700.0f;
                }
                if (actor->fwork[1] < -700.0f) {
                    actor->fwork[1] = -700.0f;
                }
                if (Rand_ZeroOne() < 0.2f) {
                    actor->fwork[3] = gPlayer[0].unk_138 - 800.0f;
                    actor->fwork[1] = gPlayer[0].pos.x;
                    actor->fwork[2] = gPlayer[0].pos.y + 50.0f;
                }
                if (fabsf(actor->fwork[4] - actor->obj.pos.z) >= 20000.0f) {
                    actor->fwork[3] = -10000.0f;
                }
            }
            actor->fwork[3] += gPlayer[0].vel.z;
            temp_dx = actor->fwork[1] - actor->obj.pos.x;
            temp_dy = actor->fwork[2] - actor->obj.pos.y;
            temp_dz = actor->fwork[3] - actor->obj.pos.z;
            spA8 = Math_RadToDeg(Math_Atan2F(temp_dx, temp_dz));
            var_fs0 = Math_RadToDeg(-Math_Atan2F(temp_dy, sqrtf(SQ(temp_dx) + SQ(temp_dz))));
            temp_fs2_2 = Math_SmoothStepToAngle(&actor->obj.rot.y, spA8, 0.1f, 1.0f, 0);

            Math_SmoothStepToAngle(&actor->obj.rot.x, var_fs0, 0.1f, 1.0f, 0);
            var_fs0 = 340.0f;
            if (temp_fs2_2 < 0.0f) {
                var_fs0 = 20.0f;
            }
            Math_SmoothStepToAngle(&actor->obj.rot.z, var_fs0, 0.1f, 1.0f, 0.f);
            Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
            sp9C.x = sp9C.y = 0.0f;
            sp9C.z = 10.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp9C, &sp90);
            actor->vel.x = sp90.x;
            actor->vel.y = sp90.y;
            actor->vel.z = sp90.z - 20.0f;
            break;
        case 1:
            Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
            sp9C.x = 0.0f;
            sp9C.y = 0.0f;
            sp9C.z = 19.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp9C, &sp90);
            actor->vel.x = sp90.x;
            actor->vel.y = sp90.y;
            actor->vel.z = sp90.z;
            break;
    }
    if (!(gGameFrameCount & 3)) {
        for (i = 0; i < 3; i++) {
            func_80081A8C(actor->obj.pos.x + RAND_FLOAT_CENTERED(70.0f), actor->obj.pos.y + RAND_FLOAT_CENTERED(70.0f),
                          actor->obj.pos.z + RAND_FLOAT_CENTERED(70.0f), 1.0f, 1);
        }
    }
    actor->unk_0B6++;
    if (Animation_GetFrameCount(&D_60260EC) < actor->unk_0B6) {
        actor->unk_0B6 = 0;
    }
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        if (actor->health > -100) {
            actor->timer_0C6 = 15;
            actor->health -= actor->damage;
            for (i = 0; i < 10; i++) {
                func_80081A8C(actor->unk_0D8.x + RAND_FLOAT_CENTERED(70.0f),
                              actor->unk_0D8.y + RAND_FLOAT_CENTERED(70.0f),
                              actor->unk_0D8.z + RAND_FLOAT_CENTERED(70.0f), 1.0f, 1);
            }
            Audio_PlaySfx(0x2903408F, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (actor->health <= -100) {
                actor->health = -100;
                BonusText_Display(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 200.0f, 3);
                gHitCount += 4;
                D_80177850 = 15;
            }
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B6FF8.s")
#endif

s32 func_i3_801B76EC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    GSGM_BACK();
    if ((limbIndex >= 4) && (limbIndex < 14)) {
        GCGM_BACK();
    }
    return false;
}

void func_i3_801B7754(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = { 0.0f, 0.0f, 0.0f };
    Actor* this = thisx;

    if (this->health == -100) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[15]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[16]);
                return;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[17]);
                return;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[18]);
                return;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[19]);
                return;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[20]);
                return;
            case 7:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[6]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[21]);
                return;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[7]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[22]);
                return;
            case 9:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[8]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[23]);
                return;
            case 10:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[9]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[24]);
                return;
            case 11:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[10]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[25]);
                return;
            case 12:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[11]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[26]);
                return;
            case 13:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[12]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[27]);
                return;
            case 22:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[13]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[28]);
                return;
            case 23:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[14]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[29]);
                break;
        }
    }
}

// OBJ_ACTOR_262 draw
void func_i3_801B7A24(Actor* actor) {
    Vec3f sp30[30];

    RCP_SetupDL(&gMasterDisp, 0x39);
    if (actor->timer_0C6 & 1) {
        RCP_SetupDL(&gMasterDisp, 0x3D);
        GPC(255, 0, 0, 255);
    }
    Animation_GetFrameData(&D_60260EC, actor->unk_0B6, sp30);
    Animation_DrawSkeleton(3, D_60263F8, sp30, func_i3_801B76EC, func_i3_801B7754, actor, gCalcMatrix);
}

void func_i3_801B7AF0(Actor* actor) {
    s32 i;

    actor->fwork[4] = 10.0f;
    actor->fwork[3] = -1000.0f;
    actor->fwork[2] = 30.0f;
    actor->obj.pos.y = 150.0f;
    actor->fwork[5] = 20.0f;
    actor->fwork[6] = 20.0f;
    actor->health = 60;
    for (i = 0; i < 10; i++) {
        actor->vwork[0 + i].x = actor->obj.pos.x;
        actor->vwork[0 + i].y = actor->obj.pos.y;
        actor->vwork[0 + i].z = actor->obj.pos.z;
        actor->vwork[10 + i].x = actor->obj.rot.x;
        actor->vwork[10 + i].y = actor->obj.rot.y;
        actor->vwork[10 + i].z = actor->obj.rot.z;
    }
}

// OBJ_ACTOR_260 action
void func_i3_801B7C78(Actor* actor) {
    s32 i;
    s32 j;
    f32 spAC;
    f32 temp_dz;
    f32 temp_dy;
    f32 temp_fs2;
    f32 temp1;
    Vec3f sp90;
    Vec3f sp84;
    Effect* effect;

    if (actor->health == 0) {
        for (i = 0; i < 10; i++) {
            func_80081A8C(actor->obj.pos.x + RAND_FLOAT(i * 15.0f), actor->obj.pos.y + RAND_FLOAT(i * 3.0f),
                          actor->obj.pos.z + RAND_FLOAT(i * 5.0f), RAND_FLOAT(0.5f) + 1.0f, 7);
        }
        for (i = 0; i < 10; i++) {
            func_i3_801A9448(&actor->vwork[0 + i], &actor->vwork[10 + i], RAND_FLOAT_CENTERED(20.0f), RAND_FLOAT(5.0f),
                             RAND_FLOAT_CENTERED(10.0f), 52, actor->scale, 200, i);
            func_8007BC7C(actor->vwork[0 + i].x, actor->vwork[0 + i].y, actor->vwork[0 + i].z + 100.0f, 6.0f);
        }

        for (i = 0; i < 2; i++) {
            if (actor->iwork[2 + i] != 0) {
                j = actor->iwork[2 + i] - 1;
                effect = &gEffects[j];
                if ((effect->obj.id == 395) && (effect->state == 2) && (effect->timer_50 != 0)) {
                    effect->unk_44 = 3;
                    actor->iwork[2 + i] = 0;
                }
            }
        }
        func_800815DC();
        func_8007D0E0(actor->vwork[7].x, actor->vwork[7].y, actor->vwork[7].z, 5.0f);
        actor->unk_044 = 4;
        func_80066254(actor);
        Object_Kill(&actor->obj, actor->sfxPos);
        func_8007A6F0(&actor->obj.pos, 0x29038090);
    }
    if (actor->state != 6) {
        spAC = gPlayer[0].pos.x - actor->obj.pos.x;
        Math_SmoothStepToAngle(&actor->obj.rot.y,
                               Math_RadToDeg(Math_Atan2F(spAC, gPlayer[0].unk_138 - actor->obj.pos.z)), 1.0f, 5.0f,
                               0.001f);
    }
    if (((actor->state >= 2) && (actor->state < 4)) || (actor->state >= 5)) {
        Math_SmoothStepToF(&actor->fwork[4], 10.0f, 0.2f, 20.0f, 0);
        Math_SmoothStepToF(&actor->fwork[5], 20.0f, 0.2f, 20.0f, 0);
        Math_SmoothStepToF(&actor->fwork[6], 20.0f, 0.2f, 20.0f, 0);
    }
    if ((actor->state >= 4) && (actor->state < 5)) {
        Math_SmoothStepToF(&actor->fwork[4], 159.0f, 0.1f, 10.0f, 0);
        Math_SmoothStepToF(&actor->fwork[5], 159.0f, 0.1f, 10.0f, 0);
        Math_SmoothStepToF(&actor->fwork[6], 255.0f, 0.1f, 10.0f, 0);
    }
    if (((actor->state < 5) || (actor->state == 7)) && (actor->health != 0) && !(gGameFrameCount & 0xF)) {
        func_8007B8F8(actor->vwork[22].x, gGroundLevel, actor->vwork[22].z, 5.0f);
    }
    Math_SmoothStepToF(&actor->fwork[1], actor->fwork[2], 0.1f, 2.0f, 0.00001f);
    Math_SmoothStepToF(&actor->obj.pos.z, gPlayer[0].camEye.z - D_80177D20 + actor->fwork[3], 0.1f, actor->fwork[1],
                       0.00001);
    if ((actor->state == 1) && (fabsf(actor->fwork[7] - actor->obj.pos.z) >= 10000.0f)) {
        actor->timer_0C0 = 20;
        actor->state = 5;
    }
    switch (actor->state) {
        case 0:
            actor->timer_0BE = (s32) (RAND_FLOAT(150.0f) + 100.0f);
            actor->state = 1;
            actor->fwork[7] = actor->obj.pos.z;
            break;
        case 1:
            if (actor->timer_0BC != 0) {
                Math_SmoothStepToF(&actor->fwork[4], 255.0f, 0.1f, 50.0f, 0);
                Math_SmoothStepToF(&actor->fwork[5], 255.0f, 0.1f, 50.0f, 0);
                Math_SmoothStepToF(&actor->fwork[6], 0.0f, 0.1f, 50.0f, 0);
            } else {
                Math_SmoothStepToF(&actor->fwork[4], 10.0f, 0.2f, 20.0f, 0);
                Math_SmoothStepToF(&actor->fwork[5], 20.0f, 0.2f, 20.0f, 0);
                Math_SmoothStepToF(&actor->fwork[6], 20.0f, 0.2f, 20.0f, 0);
                if (actor->timer_0BE == 0) {
                    actor->iwork[1] = 1;
                    actor->state = 2;
                }
            }
            if (!(gGameFrameCount & 3)) {
                func_i3_801AC8A8(actor->vwork[7].x + RAND_FLOAT_CENTERED(120.0f),
                                 actor->vwork[7].y + RAND_FLOAT_CENTERED(50.0f),
                                 actor->vwork[7].z + 100.0f + RAND_FLOAT_CENTERED(100.0f), 1.0f, 0);
            }
            break;
        case 2:
            actor->unk_0B6 += actor->iwork[1];
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_6024F80)) {
                actor->unk_0B6 = 0;
                actor->timer_0BE = 0;
                if (actor->iwork[1] >= 2) {
                    actor->timer_0BE = 30;
                }
                for (i = 0; i < 10; i++) {
                    func_i3_801AC8A8(actor->vwork[7].x + RAND_FLOAT_CENTERED(120.0f),
                                     actor->vwork[7].y + RAND_FLOAT_CENTERED(50.0f),
                                     actor->vwork[7].z + 100.0f + RAND_FLOAT_CENTERED(100.0f), 2.0f, 0);
                }
                actor->state = 3;
            }
            break;
        case 3:
            if (actor->timer_0BE == 0) {
                for (i = 0; i < 2; i++) {
                    actor->iwork[2 + i] =
                        func_80081B24(actor->vwork[20 + i].x, actor->vwork[20 + i].y, actor->vwork[20 + i].z, 0.1f) + 1;
                }
                actor->timer_0C0 = 10;
                Audio_PlaySfx(0x2900208D, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actor->state = 4;
            }
            break;
        case 4:
            actor->iwork[5]++;
            if (actor->timer_0C0 == 0) {
                Audio_KillSfx(actor->sfxPos);
                actor->unk_0B6++;
                if (Animation_GetFrameCount(&D_602AC28) < actor->unk_0B6) {
                    actor->unk_0B6 = Animation_GetFrameCount(&D_6024F80) - 1;
                    actor->state = 7;
                }
            }
            Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
            if ((actor->unk_0B6 < 21) && (actor->state == 4) && (actor->iwork[3] != 0)) {
                j = actor->iwork[3] - 1;
                effect = &gEffects[j];
                if (actor->unk_0B6 == 20) {
                    spAC = gPlayer[0].pos.x - effect->obj.pos.x;
                    temp_dy = gPlayer[0].pos.y - effect->obj.pos.y;
                    temp_dz = gPlayer[0].unk_138 - 50.0f - effect->obj.pos.z;

                    temp_fs2 = Math_RadToDeg(Math_Atan2F(spAC, temp_dz));
                    temp1 = Math_RadToDeg(-Math_Atan2F(temp_dy, sqrtf(SQ(spAC) + SQ(temp_dz))));
                    Matrix_RotateY(gCalcMatrix, M_DTOR * temp_fs2, 0);
                    Matrix_RotateX(gCalcMatrix, M_DTOR * temp1, 1);
                    sp90.x = sp90.y = 0.0f;
                    sp90.z = 30.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp90, &sp84);
                    effect->vel.x = sp84.x;
                    effect->vel.y = sp84.y;
                    effect->vel.z = sp84.z;
                    effect->unk_44 = 2;
                    effect->timer_50 = 100;
                    actor->iwork[3] = 0;
                    Audio_PlaySfx(0x2900308C, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    effect->obj.pos.x = actor->vwork[21].x;
                    effect->obj.pos.y = actor->vwork[21].y;
                    effect->obj.pos.z = actor->vwork[21].z;
                }
            }
            if ((actor->unk_0B6 < 58) && (actor->state == 4) && (actor->iwork[2] != 0)) {
                j = actor->iwork[2] - 1;
                effect = &gEffects[j];
                if (actor->unk_0B6 == 57) {
                    spAC = gPlayer[0].pos.x - effect->obj.pos.x;
                    temp_dy = gPlayer[0].pos.y - effect->obj.pos.y;
                    temp_dz = gPlayer[0].unk_138 - 50.0f - effect->obj.pos.z;
                    temp_fs2 = Math_RadToDeg(Math_Atan2F(spAC, temp_dz));
                    temp1 = Math_RadToDeg(-Math_Atan2F(temp_dy, sqrtf(SQ(spAC) + SQ(temp_dz))));
                    Matrix_RotateY(gCalcMatrix, M_DTOR * temp_fs2, 0);
                    Matrix_RotateX(gCalcMatrix, M_DTOR * temp1, 1);
                    sp90.x = sp90.y = 0.0f;
                    sp90.z = 50.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp90, &sp84);
                    effect->vel.x = sp84.x;
                    effect->vel.y = sp84.y;
                    effect->vel.z = sp84.z;
                    effect->unk_44 = 2;
                    effect->timer_50 = 100;
                    actor->iwork[2] = 0;
                } else {
                    effect->obj.pos.x = actor->vwork[20].x;
                    effect->obj.pos.y = actor->vwork[20].y;
                    effect->obj.pos.z = actor->vwork[20].z;
                }
            }
            break;
        case 5:
            Math_SmoothStepToAngle(&actor->obj.rot.x, 40.0f, 0.1f, 10.0f, 0);
            actor->unk_0B6++;
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_6024F80)) {
                actor->unk_0B6 = Animation_GetFrameCount(&D_6024F80) - 1;
            }
            if (actor->timer_0C0 == 0) {
                temp_dy = gPlayer[0].pos.y - 50.0f - actor->obj.pos.y;
                temp_dz = gPlayer[0].unk_138 - actor->obj.pos.z;
                temp1 = Math_RadToDeg(-Math_Atan2F(temp_dy, sqrtf(SQ(spAC) + SQ(temp_dz))));
                Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, M_DTOR * temp1, 1);
                sp90.x = sp90.y = 0.0f;
                sp90.z = 40.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp90, &sp84);
                actor->vel.x = sp84.x;
                actor->vel.y = sp84.y;
                actor->vel.z = sp84.z;
                actor->state = 6;
            }
            break;
        case 6:
            actor->unk_0B6++;
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_6024F80)) {
                actor->unk_0B6 = Animation_GetFrameCount(&D_6024F80) - 1;
            }
            Math_SmoothStepToAngle(&actor->obj.rot.x, 30.0f, 0.1f, 10.0f, 0);
            if (!(gGameFrameCount & 1)) {
                func_i3_801AC8A8(actor->vwork[7].x + RAND_FLOAT_CENTERED(120.0f),
                                 actor->vwork[7].y + RAND_FLOAT_CENTERED(50.0f),
                                 actor->vwork[7].z + RAND_FLOAT_CENTERED(100.0f), 2.0f, 0);
            }
            break;
        case 7:
            actor->unk_0B6--;
            if (actor->unk_0B6 <= 0) {
                actor->unk_0B6 = 0;
                actor->timer_0BE = (s32) (RAND_FLOAT(150.0f) + 100.0f);
                actor->state = 1;
            }
            break;
    }
    if (actor->iwork[0] != 0) {
        actor->health = 0;
    }
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        if (actor->health != 0) {
            actor->info.bonus = 0;
            if (actor->damage == 31) {
                if (actor->state >= 2) {
                    actor->info.bonus = 1;
                    actor->timer_0C6 = 30;
                    actor->health -= actor->damage;
                }
                if (actor->state == 1) {
                    actor->info.bonus = 1;
                    actor->iwork[1] = 7;
                    actor->state = 2;
                }
            } else if (actor->state >= 2) {
                actor->info.bonus = 1;
                actor->timer_0C6 = 30;
                actor->health -= actor->damage;
                Audio_PlaySfx(0x2903408F, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                actor->timer_0BC = 50;
            }
            if (actor->health <= 0) {
                actor->health = 0;
            }
        }
    }
}

s32 func_i3_801B8C50(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    Actor* this = thisx;

    RCP_SetupDL(&gMasterDisp, 0x3A);
    if (this->timer_0C6 & 1) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        GPC(255, 0, 0, 255);
    }
    if ((this->timer_0C6 == 0) && ((this->fwork[6] <= 254.0f) || (this->state >= 4))) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        GPC((s32) this->fwork[4], (s32) this->fwork[5], (s32) this->fwork[6], 255);
    }
    return false;
}

void func_i3_801B8D7C(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp4C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp40 = { 108.0f, 0.0f, 24.0f };
    Vec3f sp34 = { 102.0f, 14.0f, -21.0f };
    Vec3f sp28 = { 0.0f, 0.0f, 0.0f };
    Actor* this = thisx;

    switch (limbIndex) {
        case 1:
            if (this->health == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &this->vwork[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[10]);
            } else {
                Matrix_MultVec3f(gCalcMatrix, &sp40, &this->vwork[20]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[23]);
            }
            break;
        case 2:
            if (this->health == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &this->vwork[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[11]);
            }
            break;
        case 3:
            if (this->health == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &this->vwork[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[12]);
            }
            break;
        case 4:
            if (this->health == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &this->vwork[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[13]);
            } else {
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[21]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[24]);
            }
            break;
        case 5:
            if (this->health == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &this->vwork[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[14]);
            }
            break;
        case 6:
            if (this->health == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &this->vwork[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[15]);
            }
            break;
        case 9:
            if (this->health == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &this->vwork[6]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[16]);
            }
            break;
        case 10:
            if (this->health == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &this->vwork[7]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[17]);
            }
            break;
        case 11:
            if (this->health == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &this->vwork[8]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[18]);
            }
            break;
        case 12:
            if (this->health == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &this->vwork[9]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[19]);
            } else {
                Matrix_MultVec3f(gCalcMatrix, &sp28, &this->vwork[22]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[25]);
            }
            break;
    }
}

// OBJ_ACTOR_260 draw
void func_i3_801B90DC(Actor* actor) {
    Vec3f sp30[30];

    if ((actor->state >= 3) && (actor->state < 5)) {
        Animation_GetFrameData(&D_602AC28, actor->unk_0B6, sp30);
    } else {
        Animation_GetFrameData(&D_6024F80, actor->unk_0B6, sp30);
    }
    Matrix_Translate(gCalcMatrix, 0.0f, -150.0f, 100.0f, 1);
    Animation_DrawSkeleton(3, &D_602512C, sp30, func_i3_801B8C50, func_i3_801B8D7C, actor, gCalcMatrix);
}

// OBJ_ACTOR_263 action
#ifdef NON_MATCHING
// BonusText_Display has a return?
void func_i3_801B91A4(Actor* actor) {
    Vec3f spDC = { 0.0f, 0.0f, 50.0f };
    Vec3f spD0;
    Vec3f spC4;
    Vec3f spB8;
    Vec3f spAC;
    s32 i;
    f32 spfA4;
    f32 spA0;
    f32 spf9C;
    f32 spf98;
    f32 sp94;

    Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
    if ((actor->health == 0) && (actor->state > 0)) {
        actor->unk_044 = 0;
        func_80066254(actor);
        for (i = 0; i < 5; i++) {
            func_80081A8C(RAND_FLOAT(i * 15.0f) + actor->obj.pos.x, RAND_FLOAT(i * 3.0f) + actor->obj.pos.y,
                          RAND_FLOAT(i * 5.0f) + actor->obj.pos.z, RAND_FLOAT(0.3f) + 0.5f, 7);
        }
        for (i = RAND_INT(10.0f); i < 13; i++) {
            func_i3_801A9448(&actor->vwork[0 + i], &actor->vwork[13 + i], RAND_FLOAT_CENTERED(20.0f), RAND_FLOAT(5.0f),
                             RAND_FLOAT_CENTERED(10.0f), 53, actor->scale, 200, i);
            func_8007BC7C(actor->vwork[0 + i].x, actor->vwork[0 + i].y, actor->vwork[0 + i].z + 100.0f, 6.0f);
        }
        Object_Kill(&actor->obj, actor->sfxPos);
        func_800815DC();
        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 5.0f);
        func_8007A6F0(&actor->obj.pos, 0x29038090);
    }
    switch (actor->state) { /* irregular */
        case 0:
            for (i = 0; i < 13; i++) {
                actor->vwork[0 + i].x = actor->obj.pos.x;
                actor->vwork[0 + i].y = actor->obj.pos.y;
                actor->vwork[0 + i].z = actor->obj.pos.z;
                actor->vwork[13 + i].x = actor->obj.rot.x;
                actor->vwork[13 + i].y = actor->obj.rot.y;
                actor->vwork[13 + i].z = actor->obj.rot.z;
            }
            actor->health = 30;
            actor->unk_0B6 = 19;
            actor->fwork[1] = actor->obj.pos.z;
            if (actor->obj.rot.z >= 4.0f) {
                actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_60314AC);
                actor->health = 200;
                actor->info.bonus = 1;
                actor->state = 2;
                actor->obj.rot.x = actor->obj.rot.y = actor->obj.rot.z = 0.0f;
                actor->fwork[7] = actor->obj.pos.y;
                actor->scale = 2.0f;
            } else {
                if (actor->obj.rot.z >= 2.0f) {
                    actor->iwork[1] = 1;
                }
                spC4.x = spC4.y = 0.0f;
                spC4.z = 40.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spC4, &spB8);
                actor->fwork[4] = spB8.x;
                actor->fwork[5] = spB8.y;
                actor->fwork[6] = spB8.z;
                actor->state = 1;
                actor->obj.rot.z = 0.0f;
            }
            break;
        case 1:
            actor->unk_0B6++;
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_6000AE4)) {
                actor->unk_0B6 = 0;
            }
            if (actor->unk_0B6 == 36) {
                actor->vel.x = actor->fwork[4];
                actor->vel.y = actor->fwork[5];
                actor->vel.z = actor->fwork[6];
            }
            Math_SmoothStepToF(&actor->vel.x, 0.0f, 0.1f, 1.0f, 0.00001f);
            Math_SmoothStepToF(&actor->vel.y, 0.0f, 0.1f, 1.0f, 0.00001f);
            Math_SmoothStepToF(&actor->vel.z, 0.0f, 0.1f, 1.0f, 0.00001f);
            i = 0;
            if (actor->iwork[1] != 0) {
                if (!(actor->unk_0B6 & 7)) {
                    i = 1;
                }
            } else {
                if (!(actor->unk_0B6 & 1)) {
                    i = 1;
                }
            }
            if ((actor->unk_0B6 > 36) && (i != 0) && (fabsf(gPlayer[0].unk_138 - actor->obj.pos.z) > 1000.0f)) {
                spfA4 = gPlayer[0].pos.x + RAND_FLOAT_CENTERED(200.0f) - actor->vwork[26].x;
                spA0 = gPlayer[0].pos.y + RAND_FLOAT_CENTERED(200.0f) - actor->vwork[26].y;
                spf9C = gPlayer[0].unk_138 + RAND_FLOAT_CENTERED(200.0f) - actor->vwork[26].z;
                sp94 = Math_RadToDeg(Math_Atan2F(spfA4, spf9C));
                spf98 = Math_RadToDeg(-Math_Atan2F(spA0, sqrtf(SQ(spfA4) + SQ(spf9C))));
                Matrix_RotateY(gCalcMatrix, M_DTOR * sp94, 0);
                Matrix_RotateX(gCalcMatrix, M_DTOR * spf98, 1);
                spC4.x = spC4.y = 0.0f;
                spC4.z = 70.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spC4, &spAC);
                func_8007F04C(353, actor->vwork[26].x + RAND_FLOAT_CENTERED(200.0f),
                              actor->vwork[26].y + RAND_FLOAT_CENTERED(200.0f), actor->vwork[26].z, spf98, sp94, 0.0f,
                              0.0f, 0.0f, 0.0f, spAC.x, spAC.y, spAC.z, 1.0f);
            }
            break;
        case 2:
            actor->unk_0B6++;
            if ((actor->unk_0B6 >= Animation_GetFrameCount(&D_6000AE4)) && (actor->fwork[8] < 1.0f)) {
                actor->unk_0B6 = 0;
            }
            if (actor->unk_0B6 == 40) {
                actor->fwork[8] = 700.0f;
                func_i3_801A9728(actor, 50.0f, 10.0f, 8);
            }
            Math_SmoothStepToF(&actor->obj.pos.y, actor->fwork[7] + actor->fwork[8], 0.1f, 10.0f, 0.00001f);
            Math_SmoothStepToF(&actor->fwork[8], 0.0f, 0.1f, 10.0f, 0.0001f);
            if (actor->unk_0B6 >= 40) {
                func_i3_801AC8A8(RAND_FLOAT_CENTERED(70.0f) + actor->obj.pos.x,
                                 RAND_FLOAT_CENTERED(50.0f) + (actor->obj.pos.y - 50.0f),
                                 RAND_FLOAT_CENTERED(100.0f) + actor->obj.pos.z, 1.0f, 0);
            }
            if (actor->unk_0B6 >= 37) {
                actor->obj.rot.y += 20.0f;
                actor->fwork[2] += 20.0f;
                if (!(gGameFrameCount & 3)) {
                    Matrix_RotateY(gCalcMatrix, actor->fwork[2] * M_DTOR, 0);
                    Matrix_RotateX(gCalcMatrix, actor->vwork[27].x * M_DTOR, 1);
                    Matrix_RotateZ(gCalcMatrix, actor->vwork[27].z * M_DTOR, 1);
                    func_i3_801AC8A8(actor->vwork[11].x + RAND_FLOAT_CENTERED(120.0f),
                                     actor->vwork[11].y + RAND_FLOAT_CENTERED(50.0f),
                                     actor->vwork[11].z + RAND_FLOAT_CENTERED(100.0f), 2.0f, 0);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &spDC, &spD0);
                    func_8007F04C(353, actor->vwork[26].x + spD0.x, actor->vwork[26].y + spD0.y,
                                  actor->vwork[26].z + spD0.z, actor->vwork[27].x, actor->fwork[2], actor->vwork[27].z,
                                  0.0f, 0.0f, 0.0f, spD0.x, spD0.y, spD0.z, 1.0f);
                }
            }
            break;
    }
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        if ((actor->health != 0) && (actor->state != 0)) {
            actor->timer_0C6 = 15;
            actor->health -= actor->damage;
            Audio_PlaySfx(0x2903408F, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (actor->health <= 0) {
                actor->health = 0;
                if (actor->scale > 1.0f) {
                    BonusText_Display(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 200.0f, 2);
                    gHitCount += 2;
                    D_80177850 = 15;
                }
            }
        }
    }
}
#else
Vec3f D_i3_801C0314 = { 0.0f, 0.0f, 50.0f };
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801B91A4.s")
#endif

void func_i3_801B9DB0(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp34 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp28 = { -27.0f, 7.0f, 5.0f };
    Actor* this = thisx;

    if ((this->health == 0) || (limbIndex == 12)) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[13]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[14]);
                return;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[15]);
                return;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[16]);
                return;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[17]);
                return;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[18]);
                return;
            case 7:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[6]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[19]);
                return;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[7]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[20]);
                return;
            case 9:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[8]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[21]);
                return;
            case 10:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[9]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[22]);
                return;
            case 11:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[10]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[23]);
                return;
            case 12:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[11]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[24]);
                Matrix_Push(&gCalcMatrix);
                switch (gGameFrameCount & 3) {
                    case 0:
                        break;
                    case 1:
                        Matrix_RotateX(gCalcMatrix, M_PI / 2, 1);
                        break;
                    case 2:
                        Matrix_RotateX(gCalcMatrix, M_PI, 1);
                        break;
                    case 3:
                        Matrix_RotateX(gCalcMatrix, 3 * M_PI / 2, 1);
                        break;
                }
                Matrix_MultVec3f(gCalcMatrix, &sp28, &this->vwork[26]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[27]);
                Matrix_Pop(&gCalcMatrix);
                return;
            case 21:
                Matrix_MultVec3f(gCalcMatrix, &sp34, &this->vwork[12]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[25]);
                break;
        }
    }
}

// OBJ_ACTOR_263 draw
void func_i3_801BA108(Actor* actor) {
    Vec3f sp40[30];

    RCP_SetupDL(&gMasterDisp, 0x1D);
    if (actor->timer_0C6 & 1) {
        RCP_SetupDL(&gMasterDisp, 0x1E);
        GPC(255, 0, 0, 255);
    } else if (actor->state == 2) {
        RCP_SetupDL(&gMasterDisp, 0x1E);
        GPC(255, 95, 31, 255);
    }
    Matrix_Scale(gCalcMatrix, actor->scale, actor->scale, actor->scale, 1);
    if (actor->state == 1) {
        Matrix_RotateX(gCalcMatrix, (actor->obj.rot.x + 90.0f) * M_DTOR, 1);
    }
    Animation_GetFrameData(&D_6000AE4, actor->unk_0B6, sp40);
    Animation_DrawSkeleton(3, D_6000DB0, sp40, NULL, func_i3_801B9DB0, actor, gCalcMatrix);
}

// OBJ_ACTOR_264 action
void func_i3_801BA26C(Actor* actor) {
    Vec3f sp40[30];
    u16 sp3E;

    switch (actor->state) { /* irregular */
        case 0:
            actor->unk_0B6 = RAND_INT(50.0f);
            actor->state++;
            /* fallthrough */
        case 1:
            actor->unk_0B6 += 2;
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_6020A40)) {
                actor->unk_0B6 = 0;
            }
            sp3E = Animation_GetFrameData(&D_6020A40, actor->unk_0B6, sp40);
            if ((fabsf(actor->obj.pos.x - gPlayer[0].pos.x) < 150.0f) &&
                (fabsf(actor->obj.pos.y - gPlayer[0].pos.y) < 500.0f) &&
                (fabsf(actor->obj.pos.z - gPlayer[0].unk_138) < 700.0f)) {
                actor->state = 2;
                actor->fwork[0] = 0.0f;
            }
            break;
        case 2:
            actor->unk_0B6 += 2;
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_601DE50)) {
                actor->unk_0B6 = 0;
            }
            sp3E = Animation_GetFrameData(&D_601DE50, actor->unk_0B6, sp40);
            if ((fabsf(actor->obj.pos.x - gPlayer[0].pos.x) > 150.0f) ||
                (fabsf(actor->obj.pos.y - gPlayer[0].pos.y) > 500.0f) ||
                (fabsf(actor->obj.pos.z - gPlayer[0].unk_138) > 700.0f)) {
                actor->state = 1;
                actor->fwork[0] = 0.0f;
            }
            break;
    }
    Math_SmoothStepToVec3fArray(sp40, actor->vwork, 1, sp3E, actor->fwork[0], 100.0f, 0.0f);
    Math_SmoothStepToF(&actor->fwork[0], 0.5f, 1.0f, 0.008f, 0.0f);
}

// OBJ_ACTOR_264 draw
void func_i3_801BA4E4(Actor* actor) {
    GCGM_BACK();
    Animation_DrawSkeleton(1, D_6020C6C, actor->vwork, NULL, NULL, &actor->index, &gIdentityMatrix);
    GSGM_BACK();
}

void func_i3_801BA57C(Actor* actor) {
    if (actor->state == 0) {
        actor->scale = 1.0f;
        actor->gravity = 0.3f;
        actor->health = 10;
        actor->fwork[2] = RAND_FLOAT_CENTERED((actor->index & 7) + 3.0f);
    } else {
        actor->info.bonus = 0;
        actor->scale = 0.5f;
        actor->gravity = 0.1f;
        actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_603151C);
        actor->fwork[2] = RAND_FLOAT_CENTERED((actor->index & 3) + 1.0f);
    }
    actor->fwork[1] = RAND_FLOAT(50.0f);
}

// OBJ_ACTOR_265 action
void func_i3_801BA6A4(Actor* actor) {
    s32 i;
    s32 var_s2;
    Actor* var_s0;

    switch (actor->state) {
        case 0:
            if (actor->iwork[1] == 0) {
                actor->obj.rot.z += actor->fwork[2];
                if (!(gGameFrameCount & 1)) {
                    func_i3_801AC8A8(RAND_FLOAT_CENTERED(120.0f) + actor->obj.pos.x,
                                     RAND_FLOAT_CENTERED(50.0f) + actor->obj.pos.y,
                                     RAND_FLOAT_CENTERED(100.0f) + actor->obj.pos.z, 2.0f, 0);
                }
                actor->fwork[1] += 10.0f;
                actor->vel.x = SIN_DEG(actor->fwork[1]) * 10.0f;
                if (actor->obj.pos.y < (gGroundLevel + 30.0f)) {
                    Audio_PlaySfx(0x19400007, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    actor->iwork[1] = 1;
                    actor->vel.x = actor->vel.y = actor->vel.z = 0.0f;
                    actor->gravity = 0.0f;
                    func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 100.0f, actor->scale * 30.0f);
                    func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 100.0f, actor->scale * 30.0f);
                }
            }
            break;
        case 1:
            if (actor->iwork[1] == 0) {
                actor->obj.rot.z += actor->fwork[2];
                if (!(gGameFrameCount & 3)) {
                    func_i3_801AC8A8(RAND_FLOAT_CENTERED(70.0f) + actor->obj.pos.x,
                                     RAND_FLOAT_CENTERED(50.0f) + actor->obj.pos.y,
                                     RAND_FLOAT_CENTERED(50.0f) + actor->obj.pos.z, 1.0f, 0);
                }
                Math_SmoothStepToF(&actor->vel.y, -7.0f, 0.1f, 1.0f, 0.0001f);
                if (actor->obj.pos.y < (gGroundLevel + 20.0f)) {
                    actor->gravity = 0.0f;
                    if (actor->vel.y < 0.0f) {
                        actor->vel.y = 0.0f;
                    }
                    actor->iwork[1] = 1;
                    Audio_PlaySfx(0x19400007, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    func_8007B8F8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 100.0f, actor->scale * 30.0f);
                }
            } else {
                Math_SmoothStepToF(&actor->vel.y, 0.0f, 0.1f, 1.0f, 0.0001f);
            }
            Math_SmoothStepToF(&actor->vel.x, 0.0f, 0.1f, 1.0f, 0.0001f);
            Math_SmoothStepToF(&actor->vel.z, 0.0f, 0.1f, 1.0f, 0.0001f);
            break;
    }
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        actor->health -= actor->damage;
        if (actor->health <= 0) {
            actor->health = actor->unk_044 = 0;
            func_80066254(actor);
            if (actor->state == 0) {
                for (i = 0, var_s2 = 0, var_s0 = gActors; i < 60 && var_s2 < 4; i++, var_s0++) {
                    if (var_s0->obj.status == 0) {
                        Actor_Initialize(var_s0);
                        var_s0->obj.status = 1;
                        var_s0->obj.id = 265;
                        var_s0->obj.pos.x = actor->obj.pos.x;
                        var_s0->obj.pos.y = actor->obj.pos.y + 20.0f;
                        var_s0->obj.pos.z = actor->obj.pos.z;
                        var_s0->vel.x = RAND_FLOAT_CENTERED(50.0f);
                        var_s0->vel.y = RAND_FLOAT(5.0f);
                        var_s0->vel.z = RAND_FLOAT_CENTERED(50.0f);
                        var_s0->state = 1;

                        Object_SetInfo(&var_s0->info, var_s0->obj.id);
                        var_s2++;
                    }
                }
                if (i >= 60) {
                    var_s0->obj.status = 0;
                }
            } else {
                for (i = 0; i < 4; i++) {
                    func_i3_801A9448(&actor->obj.pos, &actor->obj.rot, RAND_FLOAT_CENTERED(30.0f), RAND_FLOAT(5.0f),
                                     RAND_FLOAT_CENTERED(10.0f), 54, 0.1f, 200, i);
                }
            }
            func_8007BC7C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 130.0f, actor->scale * 30.0f);
            func_8007BC7C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 130.0f, actor->scale * 30.0f);
            func_8007BC7C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 130.0f, actor->scale * 30.0f);
            Object_Kill(&actor->obj, actor->sfxPos);
            func_8007A6F0(&actor->obj.pos, 0x2903A008);
        }
    }
}

// OBJ_ACTOR_265 draw
void func_i3_801BAD7C(Actor* actor) {
    Matrix_Scale(gGfxMatrix, actor->scale, actor->scale, actor->scale, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_6014FD0);
}

// OBJ_ACTOR_266 action
void func_i3_801BADF8(Actor* actor) {
    s32 i;

    switch (actor->state) {
        case 0:
            for (i = 0; i < 5; i++) {
                actor->vwork[0 + i].x = actor->obj.pos.x;
                actor->vwork[0 + i].y = actor->obj.pos.y;
                actor->vwork[0 + i].z = actor->obj.pos.z;
                actor->vwork[5 + i].x = actor->obj.rot.x;
                actor->vwork[5 + i].y = actor->obj.rot.y;
                actor->vwork[5 + i].z = actor->obj.rot.z;
            }
            actor->state++;
            break;
        case 1:
            if (actor->unk_0D0 != 0) {
                actor->unk_0D0 = 0;
                if (actor->damage == 0) {
                    gPlayer[0].unk_1F4 = 6;
                    gPlayer[0].unk_21C = 0;
                }
                actor->state++;
            }
            break;
        case 2:
            for (i = 0; i < 5; i++) {
                func_i3_801A9448(&actor->vwork[0 + i], &actor->vwork[5 + i], RAND_FLOAT_CENTERED(20.0f),
                                 RAND_FLOAT(5.0f), RAND_FLOAT_CENTERED(10.0f), 55, actor->scale, 200, i);
                func_8007BC7C(actor->vwork[0 + i].x, actor->vwork[0 + i].y, actor->vwork[0 + i].z + 100.0f, 6.0f);
            }
            Object_Kill(&actor->obj, actor->sfxPos);
            break;
    }
}

void func_i3_801BB0C4(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = { 0.0f, 0.0f, 0.0f };
    Actor* this = thisx;

    if (this->state != 0) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[5]);
                break;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[6]);
                break;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[7]);
                break;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[8]);
                break;
            case 9:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->vwork[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[9]);
                break;
        }
    }
}

// OBJ_ACTOR_266 draw
void func_i3_801BB204(Actor* actor) {
    Vec3f sp28[30];

    Animation_GetFrameData(&D_601EC68, 0, sp28);
    Animation_DrawSkeleton(3, D_601EDB4, sp28, NULL, func_i3_801BB0C4, actor, gCalcMatrix);
}

Vec3f D_i3_801C0344[4] = {
    { -6.4f, -4.6f, -7.8f },
    { 6.4f, 4.6f, 7.8f },
    { -5.9f, -7.8f, -7.0f },
    { 5.9f, 7.8f, 7.0f },
};
f32 D_i3_801C0374[51] = {
    // Structured as f32[4 + 4 + 9][3]
    1.0f,  1.0f,  1.0f, 1.3f,  0.8f, 1.3f,  1.0f,  1.2f,  1.0f,  1.3f,  0.8f,  1.3f,  1.0f,  1.0f,  1.0f,  1.3f,  1.0f,
    1.3f,  1.0f,  1.0f, 1.0f,  1.3f, 1.0f,  1.3f,  1.0f,  1.0f,  1.0f,  0.85f, 0.95f, 0.85f, 0.85f, 0.95f, 0.85f, 0.85f,
    0.95f, 0.85f, 1.0f, 1.05f, 1.0f, 0.85f, 0.95f, 0.85f, 0.85f, 0.95f, 0.85f, 0.85f, 0.95f, 0.85f, 0.85f, 0.95f, 0.85f,
};
s32 D_i3_801C0440[24] = {
    0, 30, 60, 90, 0, 0, 0, 0, 0, 15, 30, 45, 0, 0, 0, 0, 0, 15, 30, 45, 60, 75, 90, 105,
};
s32 D_i3_801C04A0[6] = {
    15, -15, 10, -10, 7, -7,
};

void func_i3_801BB26C(Actor* actor) {
    s32 sp64;
    s32 sp60;
    Vec3f sp54;
    Vec3f sp48;
    Actor* sp44;
    Actor* sp40;

    actor->fwork[1] = RAND_FLOAT(100.0f);
    actor->timer_0BC = RAND_INT(50.0f);
    actor->iwork[3] = RAND_INT(10.0f) & 1;
    actor->fwork[11] = actor->fwork[14] = actor->fwork[17] = actor->fwork[12] = actor->fwork[15] = actor->fwork[18] =
        actor->fwork[13] = actor->fwork[16] = actor->fwork[19] = 1.0f;
    actor->fwork[2] = 213.0f;
    actor->fwork[3] = 160.0f;
    actor->fwork[4] = 255.0f;
    actor->fwork[8] = 255.0f;
    actor->fwork[7] = 255.0f;
    actor->fwork[6] = 197.0f;
    actor->fwork[5] = 197.0f;
    actor->fwork[10] = 231.0f;
    actor->fwork[9] = 231.0f;
    actor->fwork[22] = actor->obj.pos.x;
    actor->fwork[23] = actor->obj.pos.y;
    actor->fwork[24] = actor->obj.pos.z;
    actor->iwork[4] = RAND_INT(60.0f);
    actor->iwork[5] = RAND_INT(45.0f) + 15;
    actor->iwork[6] = RAND_INT(15.0f) + 45;
    actor->iwork[7] = RAND_INT(120.0f);
    actor->iwork[8] = RAND_INT(120.0f);
    actor->iwork[9] = RAND_INT(120.0f);
    actor->unk_0B6 = RAND_INT(Animation_GetFrameCount(&D_6023780));
    if (actor->iwork[2] == 0) {
        actor->iwork[18] = fabsf(actor->obj.rot.y / 10.0f);
        if ((actor->iwork[18] == 0) || (actor->iwork[18] == 2)) {
            actor->iwork[19] = 1;
        }
        actor->iwork[13] = D_i3_801C4450 * 3;
        Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * M_DTOR, 0);
        sp54.x = 0.0f;
        sp54.y = actor->obj.rot.x * 10.0f;
        sp54.z = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
        for (sp64 = 0, sp44 = gActors; sp64 < 60; sp64++, sp44++) {
            if (sp44->obj.status == 0) {
                Actor_Initialize(sp44);
                sp44->obj.status = 1;
                sp44->obj.id = 267;
                sp44->obj.pos.x = actor->obj.pos.x + sp48.x;
                sp44->obj.pos.y = actor->obj.pos.y + sp48.y;
                sp44->obj.pos.z = actor->obj.pos.z;
                sp44->iwork[0] = actor->index + 1;
                sp44->iwork[2] = 1;
                sp44->iwork[13] = actor->iwork[13];
                sp44->iwork[18] = actor->iwork[18];
                sp44->iwork[19] = actor->iwork[19];
                actor->iwork[0] = sp64 + 1;
                Object_SetInfo(&sp44->info, sp44->obj.id);
                break;
            }
        }
        Matrix_RotateZ(gCalcMatrix, (actor->obj.rot.z + 90.0f) * M_DTOR, 0);
        sp54.x = 0.0f;
        sp54.y = actor->obj.rot.x * 10.0f;
        sp54.z = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
        for (sp60 = 0, sp40 = gActors; sp60 < 60; sp60++, sp40++) {
            if (sp40->obj.status == 0) {
                Actor_Initialize(sp40);
                sp40->obj.status = 1;
                sp40->obj.id = 267;
                sp40->obj.pos.x = actor->obj.pos.x + sp48.x;
                sp40->obj.pos.y = actor->obj.pos.y + sp48.y;
                sp40->obj.pos.z = actor->obj.pos.z;
                sp40->iwork[0] = actor->index + 1;
                sp40->iwork[1] = sp44->index + 1;
                sp40->iwork[2] = 2;
                sp40->iwork[13] = actor->iwork[13];
                sp40->iwork[18] = actor->iwork[18];
                sp40->iwork[19] = actor->iwork[19];
                sp44->iwork[1] = sp60 + 1;
                actor->iwork[1] = sp60 + 1;
                Object_SetInfo(&sp40->info, sp40->obj.id);
                break;
            }
        }
        actor->fwork[21] = actor->obj.rot.x * 10.0f;
        actor->iwork[17] = fabsf(Math_ModF(actor->obj.rot.y, 10.0f));
        actor->fwork[20] = actor->obj.rot.z;

        actor->obj.rot.x = actor->obj.rot.y = actor->obj.rot.z = 0.0f;
        D_i3_801C4450++;
        if (D_i3_801C4450 > 20) {
            D_i3_801C4450 = 0;
        }
    }
}

// OBJ_ACTOR_267 action
void func_i3_801BB79C(Actor* actor) {
    s32 i;
    s32 it0;
    s32 it1;
    Vec3f sp80;
    Vec3f sp74;
    Actor* sp70;
    Actor* sp6C;
    Object_80* sp68;

    if (actor->timer_0C0 == 0) {
        switch (actor->iwork[18]) {
            case 1:
            case 2:
                i = actor->iwork[19] + (actor->iwork[2] * 2);
                actor->vel.x = D_i3_801C04A0[i];
                if (!(gGameFrameCount & 3)) {
                    if (fabsf(actor->fwork[22] - actor->obj.pos.x) >= 100.0f) {
                        if (actor->iwork[20] == 0) {
                            actor->iwork[19]++;
                            actor->iwork[19] &= 1;
                            actor->iwork[20] = 50;
                        }
                    } else {
                        for (i = 0, sp68 = gObjects80; i < 50; i++, sp68++) {
                            if ((sp68->obj.status == 2) && (sp68->obj.id == 122) &&
                                func_80062DBC(&actor->obj.pos, sp68->info.hitbox, &sp68->obj, 0.0f, 0.0f, 0.0f) &&
                                (actor->iwork[20] == 0)) {
                                actor->iwork[20] = 50;
                                actor->iwork[19]++;
                                actor->iwork[19] &= 1;
                            }
                        }
                    }
                }
                break;
            case 3:
            case 4:
                i = actor->iwork[19] + (actor->iwork[2] * 2);
                actor->vel.y = D_i3_801C04A0[i];
                if (!(gGameFrameCount & 3)) {
                    if (fabsf(actor->fwork[23] - actor->obj.pos.y) >= 100.0f) {
                        if (actor->iwork[20] == 0) {
                            actor->iwork[19]++;
                            actor->iwork[19] &= 1;
                            actor->iwork[20] = 50;
                        }
                    } else {
                        for (i = 0, sp68 = gObjects80; i < 50; i++, sp68++) {
                            if ((sp68->obj.status == 2) && (sp68->obj.id == 122) &&
                                (func_80062DBC(&actor->obj.pos, sp68->info.hitbox, &sp68->obj, 0.0f, 0.0f, 0.0f) ||
                                 (actor->obj.pos.y < (gGroundLevel + 30.0f))) &&
                                (actor->iwork[20] == 0)) {
                                actor->iwork[20] = 50;
                                actor->iwork[19]++;
                                actor->iwork[19] &= 1;
                            }
                        }
                    }
                }
                break;
        }
    } else {
        actor->vel.x = actor->vel.y = 0.0f;
    }
    if (actor->iwork[2] == 0) {
        sp70 = &gActors[actor->iwork[0] - 1];
        sp6C = &gActors[actor->iwork[1] - 1];
        Math_SmoothStepToF(&actor->fwork[21], 200.0f, 0.1f, 2.0f, 0.0001f);
        if ((actor->iwork[13] == sp70->iwork[13]) && (actor->iwork[14] == 0)) {
            i = 1;
            if ((sp70->obj.id != 267) || (sp70->obj.status != 2)) {
                actor->iwork[14] = 1;
                i = 0;
            }
            if (i != 0) {
                if (!actor->timer_0C0 && sp70->timer_0C0 >= 2) {
                    actor->timer_0C0 = sp70->timer_0C0;
                    actor->timer_0C6 = sp70->timer_0C6;
                }
                if (actor->timer_0C0 && !sp70->timer_0C0 >= 2) {
                    sp70->timer_0C0 = actor->timer_0C0;
                    sp70->timer_0C6 = actor->timer_0C6;
                }
            }
            if (!(gGameFrameCount & 7)) {
                func_8007A6F0(&sp70->obj.pos, 0x3100208E);
            }
            func_i3_801A92EC(actor, sp70->obj.pos.x, sp70->obj.pos.y, sp70->obj.pos.z, actor->iwork[13], i);
            if ((actor->fwork[21] > 200.0f) && (actor->iwork[17] != 0)) {
                Matrix_RotateZ(gCalcMatrix, actor->fwork[20] * M_DTOR, 0);
                sp80.x = 0.0f;
                sp80.y = actor->fwork[21];
                sp80.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp80, &sp74);
                sp70->obj.pos.x = actor->obj.pos.x + sp74.x;
                sp70->obj.pos.y = actor->obj.pos.y + sp74.y;
                sp70->obj.pos.z = actor->obj.pos.z;
            }
        }
        if ((actor->iwork[13] == sp6C->iwork[13]) && (actor->iwork[15] == 0)) {
            i = 1;
            if ((sp6C->obj.id != 267) || (sp6C->obj.status != 2)) {
                actor->iwork[15] = 1;
                i = 0;
            }
            if (i != 0) {
                if (!actor->timer_0C0 && sp6C->timer_0C0 >= 2) {
                    actor->timer_0C0 = sp6C->timer_0C0;
                    actor->timer_0C6 = sp6C->timer_0C6;
                }
                if (actor->timer_0C0 && !sp6C->timer_0C0 >= 2) {
                    sp6C->timer_0C0 = actor->timer_0C0;
                    sp6C->timer_0C6 = actor->timer_0C6;
                }
            }
            if (!(gGameFrameCount & 3)) {
                func_8007A6F0(&sp6C->obj.pos, 0x3100208E);
            }
            func_i3_801A92EC(actor, sp6C->obj.pos.x, sp6C->obj.pos.y, sp6C->obj.pos.z, actor->iwork[13] + 1, i);
            if ((actor->fwork[21] > 200.0f) && (actor->iwork[17] != 0)) {
                Matrix_RotateZ(gCalcMatrix, (actor->fwork[20] + 90.0f) * M_DTOR, 0);
                sp80.x = 0.0f;
                sp80.y = actor->fwork[21];
                sp80.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp80, &sp74);
                sp6C->obj.pos.x = actor->obj.pos.x + sp74.x;
                sp6C->obj.pos.y = actor->obj.pos.y + sp74.y;
                sp6C->obj.pos.z = actor->obj.pos.z;
            }
        }
    } else if (actor->iwork[2] == 1) {
        sp70 = &gActors[actor->iwork[1] - 1];
        if ((actor->iwork[13] == sp70->iwork[13]) && (actor->iwork[16] == 0)) {
            i = 1;
            if ((sp70->obj.id != 267) || (sp70->obj.status != 2)) {
                actor->iwork[16] = 1;
                i = 0;
            }
            if (i != 0) {
                if (!actor->timer_0C0 && sp70->timer_0C0 >= 2) {
                    actor->timer_0C0 = sp70->timer_0C0;
                    actor->timer_0C6 = sp70->timer_0C6;
                }
                if (actor->timer_0C0 && !sp70->timer_0C0 >= 2) {
                    sp70->timer_0C0 = actor->timer_0C0;
                    sp70->timer_0C6 = actor->timer_0C6;
                }
            }
            if (!(gGameFrameCount & 0xF)) {
                func_8007A6F0(&sp70->obj.pos, 0x3100208E);
            }
            func_i3_801A92EC(actor, sp70->obj.pos.x, sp70->obj.pos.y, sp70->obj.pos.z, actor->iwork[13] + 2, i);
        }
    }
    if (!(gGameFrameCount & 3)) {
        func_8007C120(RAND_FLOAT_CENTERED(100.0f) + actor->obj.pos.x, RAND_FLOAT_CENTERED(100.0f) + actor->obj.pos.y,
                      RAND_FLOAT_CENTERED(50.0f) + actor->obj.pos.z, actor->vel.x, actor->vel.y, actor->vel.z,
                      RAND_FLOAT(0.03f) + 0.05f, 10);
    }
    if (actor->timer_0BE == 0) {
        D_i3_801C41B8[18] = 255.0f;
        D_i3_801C41B8[19] = 255.0f;
        D_i3_801C41B8[20] = 255.0f;
        actor->timer_0BE = 10;
    }
    if (actor->iwork[3] == 0) {
        Math_SmoothStepToF(&actor->fwork[1], 30.0f, 0.1f, 1.0f, 0.00001f);
    } else {
        Math_SmoothStepToF(&actor->fwork[1], 100.0f, 0.1f, 1.0f, 0.00001f);
    }
    if (actor->timer_0BC == 0) {
        actor->timer_0BC = 100;
        actor->iwork[3]++;
        actor->iwork[3] &= 1;
    }
    actor->unk_0B6 += 2;
    if (actor->unk_0B6 >= Animation_GetFrameCount(&D_6023780)) {
        actor->unk_0B6 = 0;
    }
    if (actor->iwork[4] < 30) {
        actor->fwork[2] += D_i3_801C0344[0].x;
        actor->fwork[3] += D_i3_801C0344[0].y;
        actor->fwork[4] += D_i3_801C0344[0].z;
        if (actor->fwork[2] < 0.0f) {
            actor->fwork[2] = actor->fwork[3] = actor->fwork[4] = 0.0f;
        }
    } else {
        actor->fwork[2] += D_i3_801C0344[1].x;
        actor->fwork[3] += D_i3_801C0344[1].y;
        actor->fwork[4] += D_i3_801C0344[1].z;
        if (actor->fwork[3] >= 160.0f) {
            actor->fwork[2] = 213.0f;
            actor->fwork[3] = 160.0f;
            actor->fwork[4] = 255.0f;
        }
    }
    for (i = 0; i < 2; i++) {
        if (actor->iwork[i + 5] < 30) {
            actor->fwork[i + 5] += D_i3_801C0344[2].x;
            actor->fwork[i + 7] += D_i3_801C0344[2].y;
            actor->fwork[i + 9] += D_i3_801C0344[2].z;
            if (actor->fwork[i + 7] < 0.0f) {
                actor->fwork[i + 5] = actor->fwork[i + 7] = actor->fwork[i + 9] = 0.0f;
            }
        } else {
            actor->fwork[i + 5] += D_i3_801C0344[3].x;
            actor->fwork[i + 7] += D_i3_801C0344[3].y;
            actor->fwork[i + 9] += D_i3_801C0344[3].z;
            if (actor->fwork[i + 7] >= 255.0f) {
                actor->fwork[i + 5] = 197.0f;
                actor->fwork[i + 7] = 255.0f;
                actor->fwork[i + 9] = 231.0f;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        it0 = i * 12 + 3 * actor->iwork[10 + i];
        Math_SmoothStepToF(&actor->fwork[11 + i], D_i3_801C0374[it0 + 0], 0.1f, 5.0f, 0.000001f);
        Math_SmoothStepToF(&actor->fwork[14 + i], D_i3_801C0374[it0 + 1], 0.1f, 5.0f, 0.000001f);
        Math_SmoothStepToF(&actor->fwork[17 + i], D_i3_801C0374[it0 + 2], 0.1f, 5.0f, 0.000001f);

        it0 = 8 * i + actor->iwork[10 + i];
        if (actor->iwork[7 + i] == D_i3_801C0440[it0]) {
            actor->iwork[10 + i]++;
        }
    }
    actor->iwork[4]++;
    if (actor->iwork[4] >= 60) {
        actor->iwork[4] = 0;
    }
    actor->iwork[5]++;
    if (actor->iwork[5] >= 60) {
        actor->iwork[5] = 0;
    }
    actor->iwork[6]++;
    if (actor->iwork[6] >= 60) {
        actor->iwork[6] = 0;
    }
    actor->iwork[7]++;
    if (actor->iwork[7] >= 120) {
        actor->iwork[7] = actor->iwork[10] = 0;
    }
    actor->iwork[8]++;
    if (actor->iwork[8] >= 60) {
        actor->iwork[8] = actor->iwork[11] = 0;
    }
    actor->iwork[9]++;
    if (actor->iwork[9] >= 120) {
        actor->iwork[9] = actor->iwork[12] = 0;
    }
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        Audio_PlaySfx(0x2903408F, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        if (actor->damage != 31) {
            actor->timer_0C0 = actor->timer_0C6 = 40;
        } else {
            actor->timer_0C0 = actor->timer_0C6 = 80;
        }
    }
    if (actor->iwork[20] != 0) {
        actor->iwork[20]--;
    }
    func_i3_801A96DC(actor);
}

s32 func_i3_801BC530(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    Vec3f sp64 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp58;
    f32 sp54 = 0.0f;
    f32 sp50 = 0.0f;
    f32 sp4C = 0.0f;
    Actor* this = thisx;

    RCP_SetupDL(&gMasterDisp, 0x29);
    if (!(this->timer_0C6 & 1)) {
        GPC(191, 255, 223, (s32) this->fwork[1]);
    } else {
        GPC(0, 0, 0, 255);
    }
    switch (limbIndex) {
        case 1:
            sp54 = this->fwork[12];
            sp50 = this->fwork[15];
            sp4C = this->fwork[18];
            break;
        case 2:
            sp54 = this->fwork[13];
            sp50 = this->fwork[16];
            sp4C = this->fwork[19];
            break;
        case 3:
            GPC((s32) this->fwork[5], (s32) this->fwork[7], (s32) this->fwork[9], 255);
            break;
        case 4:
            GPC((s32) this->fwork[2], (s32) this->fwork[3], (s32) this->fwork[4], 255);
            break;
        case 5:
            GPC((s32) this->fwork[6], (s32) this->fwork[8], (s32) this->fwork[10], 255);
            break;
        case 11:
            sp54 = this->fwork[11];
            sp50 = this->fwork[14];
            sp4C = this->fwork[17];
    }
    if (sp54 > 0.0f) {
        Matrix_Translate(gCalcMatrix, pos->x, pos->y, pos->z, 1);
        Matrix_RotateZ(gCalcMatrix, rot->z * M_DTOR, 1);
        Matrix_RotateY(gCalcMatrix, rot->y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, rot->x * M_DTOR, 1);
        if (*dList != NULL) {
            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp58);
            func_8005F670(&sp58);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, sp54, sp50, sp4C, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(*dList);
            Matrix_Pop(&gGfxMatrix);
        }
        return true;
    }
    return false;
}

void func_i3_801BC91C(s32 limbIndex, Vec3f* rot, void* thisx) {
}

// OBJ_ACTOR_267 draw
void func_i3_801BC930(Actor* actor) {
    Vec3f sp28[30];

    Animation_GetFrameData(&D_6023780, actor->unk_0B6, sp28);
    Animation_DrawSkeleton(3, D_602390C, sp28, func_i3_801BC530, func_i3_801BC91C, actor, gCalcMatrix);
}

s32 D_i3_801C04C4[9] = {
    1, 5, 9, 14, 15, 16, 17, 0, 13,
};

// OBJ_ACTOR_269 action
#ifdef NON_MATCHING
// just stack
void func_i3_801BC9A0(Actor* actor) {
    s32 j;
    s32 i;
    Vec3f spA4;
    Vec3f sp98;
    Actor* var_a0;
    Actor* var_s0;

    switch (actor->state) {
        case 0:
            actor->vwork[0].x = actor->obj.pos.x;
            actor->vwork[1].x = actor->obj.pos.x;
            actor->vwork[4].x = actor->obj.pos.x;
            actor->vwork[0].y = actor->obj.pos.y;
            actor->vwork[1].y = actor->obj.pos.y;
            actor->vwork[4].y = actor->obj.pos.y;
            actor->vwork[0].z = actor->obj.pos.z;
            actor->vwork[1].z = actor->obj.pos.z;
            actor->vwork[4].z = actor->obj.pos.z;
            actor->iwork[1] = actor->obj.rot.z;
            if (actor->iwork[1] >= 9) {
                actor->iwork[1] = 7;
            }
            if (actor->obj.rot.y != 0) {
                actor->health = 7650;
                actor->iwork[3] = 1;
                actor->state = 2;
            } else {
                actor->health = 10;
                actor->info.drawType = 2;
                actor->info.bonus = 1;
                actor->state++;
            }
            actor->obj.rot.y = actor->obj.rot.z = 0.0f;
            break;
        case 1:
            if (actor->unk_0D0 != 0) {
                actor->unk_0D0 = 0;
                if ((actor->health != 0) && (actor->iwork[3] == 0) && (actor->damage == 31)) {
                    actor->health -= actor->damage;
                    Audio_PlaySfx(0x2903B009, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    if (actor->health <= 0) {
                        actor->health = 0;
                        actor->state = 3;
                    }
                }
            }
            break;
        case 3:
            for (i = 0; i < 2; i++) {
                for (j = 0, var_a0 = gActors; j < 60; j++, var_a0++) {
                    if ((var_a0->obj.status == 2) && (var_a0->obj.id == 189) && (var_a0->state == 58)) {
                        Object_Kill(&var_a0->obj, var_a0->sfxPos);
                        break;
                    }
                }
            }
            for (i = 0; i < 2; i++) {
                for (j = 0, var_s0 = gActors; j < 60; j++, var_s0++) {
                    if (var_s0->obj.status == 0) {
                        Actor_Initialize(var_s0);
                        var_s0->obj.status = 1;
                        var_s0->obj.id = 269;
                        var_s0->obj.pos.x = actor->vwork[i].x;
                        var_s0->obj.pos.y = actor->vwork[i].y;
                        var_s0->obj.pos.z = actor->vwork[i].z;
                        var_s0->iwork[0] = i + 1;
                        Object_SetInfo(&var_s0->info, var_s0->obj.id);
                        if (i == 0) {
                            var_s0->fwork[0] = RAND_FLOAT(360.0f);
                            Matrix_RotateY(gCalcMatrix, var_s0->fwork[0] * M_DTOR, 0);
                            spA4.x = spA4.y = spA4.z = 5.0f;
                            Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA4, &sp98);
                            var_s0->vel.x = sp98.x;
                            var_s0->vel.z = sp98.z;
                            var_s0->gravity = 0.4f;
                            var_s0->state = 5;
                            var_s0->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6030D3C);
                        } else {
                            var_s0->state = 2;
                            var_s0->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6030D58);
                        }
                        break;
                    }
                }
            }
            for (j = 0; j < 10; j++) {
                func_i3_801A9448(&actor->vwork[4], &actor->vwork[5], RAND_FLOAT_CENTERED(20.0f), RAND_FLOAT(5.0f),
                                 RAND_FLOAT_CENTERED(10.0f), 58, RAND_FLOAT(1.0f) + 0.2f, 200, 0);
                func_8007BC7C(actor->vwork[4].x, actor->vwork[4].y, actor->vwork[4].z + 50.0f, 6.0f);
            }
            func_800815DC();
            func_8007D0E0(actor->vwork[4].x, actor->vwork[4].y, actor->vwork[4].z, 10.0f);
            for (j = 0; j < 20; j++) {
                func_i3_801AC8A8(actor->vwork[4].x + RAND_FLOAT_CENTERED(100.0f),
                                 actor->vwork[4].y + RAND_FLOAT_CENTERED(200.0f),
                                 actor->vwork[4].z + 100.0f + RAND_FLOAT_CENTERED(200.0f), 6.0f, 2);
            }
            func_800815DC();
            func_8007D0E0(actor->vwork[4].x, actor->vwork[4].y, actor->vwork[4].z + 150.0f, 10.0f);
            actor->timer_0BC = 4;
            actor->state = 4;
            break;
        case 4:
            if (actor->timer_0BC == 0) {
                actor->obj.pos.x = actor->vwork[4].x;
                actor->obj.pos.y = actor->vwork[4].y;
                actor->obj.pos.z = actor->vwork[4].z;
                actor->unk_044 = D_i3_801C04C4[actor->iwork[1]];
                func_80066254(actor);
                Object_Kill(&actor->obj, actor->sfxPos);
                func_8007A6F0(&actor->obj.pos, 0x19021078);
            }
            break;
        case 5:
            Math_SmoothStepToAngle(&actor->obj.rot.y, actor->fwork[0], 0.1f, 10.0f, 0.0001f);
            Math_SmoothStepToAngle(&actor->obj.rot.x, 90.0f, 0.1f, 1.0f, 0.0001f);
            if (!(gGameFrameCount & 1) && (actor->iwork[2] == 0)) {
                func_i3_801AC8A8(actor->obj.pos.x + RAND_FLOAT_CENTERED(200.0f),
                                 actor->obj.pos.y + ((Rand_ZeroOne() - 0.3f) * 150.0f),
                                 actor->obj.pos.z + RAND_FLOAT_CENTERED(200.0f), 6.0f, 2);
            }
            if ((actor->obj.pos.y < (gGroundLevel + 30.0f)) && (actor->iwork[2] == 0)) {
                actor->iwork[2] = 1;
                actor->vel.x = actor->vel.y = actor->vel.z = actor->gravity = 0.0f;
                func_8007A6F0(&actor->obj.pos, 0x19400007);
                for (j = 0; j < 6; j++) {
                    func_8007B8F8(actor->obj.pos.x + RAND_FLOAT_CENTERED(100.0f),
                                  actor->obj.pos.y + ((Rand_ZeroOne() - 0.3f) * 30.0f),
                                  actor->obj.pos.z + RAND_FLOAT_CENTERED(200.0f), 20.0f);
                }
            }
            break;
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i3/sf_aq/func_i3_801BC9A0.s")
#endif

void func_i3_801BD17C(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp2C = { 0.0f, 0.0f, 0.0f };
    Actor* this = thisx;

    if (this->state == 3) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp2C, &this->vwork[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[5]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp2C, &this->vwork[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[2]);
                return;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp2C, &this->vwork[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->vwork[3]);
                break;
        }
    }
}

// OBJ_ACTOR_269 draw
void func_i3_801BD264(Actor* actor) {
    Vec3f sp40[30];

    if (actor->state != 0) {
        RCP_SetupDL(&gMasterDisp, 0x37);
        switch (actor->iwork[0]) { /* irregular */
            case 0:
                if (actor->state != 0) {
                    if ((actor->iwork[3] == 0) && (actor->info.drawType == 2)) {
                        Animation_GetFrameData(&D_6014438, 0, sp40);
                        Animation_DrawSkeleton(3, D_6014504, sp40, NULL, func_i3_801BD17C, actor, gCalcMatrix);
                    } else {
                        GDL(D_6014520);
                    }
                }
                break;
            case 1:
                GDL(D_60137F0);
                break;
            case 2:
                GDL(D_6014030);
                break;
        }
    }
}

void func_i3_801BD3B0(Actor* actor, f32 x, f32 y, f32 z) {
    f32 temp;
    Vec3f sp38;
    Vec3f sp2C;

    Math_SmoothStepToAngle(&actor->obj.rot.y, actor->fwork[6], 0.1f, 100.0f, 0.00001f);
    Math_SmoothStepToAngle(&actor->obj.rot.x, actor->fwork[7], 0.1f, 100.0f, 0.00001f);
    if (!(gGameFrameCount & 3)) {
        actor->fwork[6] = Math_RadToDeg(Math_Atan2F(x, z));
        temp = sqrtf(SQ(x) + SQ(z));
        actor->fwork[7] = Math_RadToDeg(-Math_Atan2F(y, temp));
        Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
        Math_SmoothStepToF(&actor->fwork[4], 5.0f, 0.1f, 10.0f, 0);
        sp38.z = actor->fwork[4];
        if (actor->iwork[2] != 0) {
            sp38.z = 50.0f;
        }
        sp38.x = sp38.y = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp38, &sp2C);
        actor->vel.x = sp2C.x;
        actor->vel.y = sp2C.y;
        actor->vel.z = sp2C.z;
    }
}

f32 D_i3_801C04F4[4] = { 700.0f, 300.0f, 600.0f, 400.0f };
// OBJ_ACTOR_268 action
void func_i3_801BD54C(Actor* actor) {
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    f32 var_fs0;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    Actor* var_s0;

    if (actor->state == 2) {
        var_fs0 = (actor->iwork[3] != 0) ? 2800.0f : 9000.0f;
        if (fabsf(actor->fwork[5] - actor->obj.pos.z) >= var_fs0) {
            actor->state = 3;
            if (actor->iwork[0] == 0) {
                Audio_PlaySfx(0x19400077, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        } else {
            // needed to match
        }
    }
    switch (actor->state) {
        case 0:
            if (actor->obj.rot.z != 0) {
                actor->iwork[3] = 1;
                actor->obj.rot.z = 0.0f;
            }
            actor->state = 1;
            actor->fwork[5] = actor->obj.pos.z;
            break;
        case 1:
            sp64 = actor->index;
            for (sp68 = 0; sp68 < 15; sp68++) {
                for (sp6C = 0, var_s0 = gActors; sp6C < 60; sp6C++, var_s0++) {
                    if (var_s0->obj.status == 0) {
                        Actor_Initialize(var_s0);
                        var_s0->obj.status = 1;
                        var_s0->obj.id = 268;
                        var_s0->iwork[4] = sp64;
                        var_s0->iwork[0] = sp68 + 1;
                        var_s0->iwork[3] = actor->iwork[3];
                        sp64 = sp6C;
                        var_fs0 = 100.0f;
                        if (Rand_ZeroOne() < 0.5f) {
                            var_fs0 = -100.0f;
                        }
                        var_s0->obj.pos.x = actor->obj.pos.x + ((sp68 & 7) * var_fs0) + RAND_FLOAT(50.0f);
                        var_s0->obj.pos.y = actor->obj.pos.y + ((sp68 & 7) * (var_fs0 / 2.0f)) + RAND_FLOAT(30.0f);
                        var_s0->obj.pos.z = actor->obj.pos.z + (sp68 * 20.0f) + RAND_FLOAT(-18.0f);
                        var_s0->unk_0B6 = RAND_FLOAT(20.0f);
                        var_s0->fwork[5] = actor->fwork[5];
                        var_s0->state = 2;
                        Object_SetInfo(&var_s0->info, var_s0->obj.id);
                        break;
                    }
                }
            }
            actor->state = 2;
            break;
        case 2:
            if (actor->obj.pos.y < gGroundLevel + 30.0f) {
                actor->obj.pos.y = gGroundLevel + 30.0f;
            }
            if ((actor->iwork[2] != 0) || (actor->timer_0BE != 0)) {
                actor->timer_0BC = 0;
            } else {
                Math_SmoothStepToF(&actor->fwork[3], D_i3_801C04F4[actor->iwork[1]], 0.1f, 30.0f, 0.0001f);
                Math_SmoothStepToF(&actor->obj.pos.z, gPlayer[0].camEye.z - D_80177D20 - actor->fwork[3], 0.1f, 30.0f,
                                   0.00001f);
            }
            if ((actor->timer_0BC == 0) && (actor->iwork[2] == 0) && (actor->timer_0BE == 0)) {
                actor->timer_0BC = 60;
                actor->fwork[1] = RAND_FLOAT_CENTERED(300.0f);
                actor->fwork[2] = RAND_FLOAT_CENTERED(100.0f) + 50.0f;
                if (actor->fwork[2] < gGroundLevel + 30.0f) {
                    actor->fwork[2] = gGroundLevel + 30.0f;
                }
                actor->iwork[1]++;
                actor->iwork[1] &= 3;
            }
            sp5C = gPlayer[0].pos.x - actor->obj.pos.x;
            sp58 = gPlayer[0].pos.y - actor->obj.pos.y;
            sp54 = gPlayer[0].unk_138 - actor->obj.pos.z;
            if (actor->timer_0BE == 0) {
                actor->iwork[2] = 0;
                if (actor->iwork[0] == 0) {
                    if (D_i3_801C4190[5] == 0) {
                        sp5C = gPlayer[0].pos.x + actor->fwork[1] - actor->obj.pos.x;
                        sp58 = gPlayer[0].pos.y - 100.0f + actor->fwork[2] - actor->obj.pos.y;
                        sp54 = gPlayer[0].unk_138 - actor->fwork[3] - actor->obj.pos.z;
                    } else if ((D_i3_801C41B8[21] != 0) && (D_i3_801C41B8[22] != 0) && (D_i3_801C41B8[23] != 0)) {
                        sp5C = D_i3_801C41B8[21] - actor->obj.pos.x;
                        sp58 = D_i3_801C41B8[22] - actor->obj.pos.y;
                        sp54 = D_i3_801C41B8[23] - actor->obj.pos.z;
                        actor->iwork[2] = 1;
                    }
                } else if (D_i3_801C4190[5] == 0) {
                    var_s0 = &gActors[actor->iwork[4]];
                    if ((actor->iwork[0] - 1 == var_s0->iwork[0]) && (var_s0->obj.status != 0) &&
                        (var_s0->obj.id == 268)) {
                        sp5C = var_s0->obj.pos.x + (actor->fwork[1] / 2.0f) - actor->obj.pos.x;
                        sp58 = var_s0->obj.pos.y + (actor->fwork[2] / 2.0f) - actor->obj.pos.y;
                        sp54 = var_s0->obj.pos.z - actor->obj.pos.z;
                    } else {
                        actor->iwork[0]--;
                        sp5C = gPlayer[0].pos.x + actor->fwork[1] - actor->obj.pos.x;
                        sp58 = gPlayer[0].pos.y + actor->fwork[2] - actor->obj.pos.y;
                        sp54 = gPlayer[0].unk_138 - actor->fwork[3] - actor->obj.pos.z;
                        if (actor->iwork[0] < 0) {
                            actor->iwork[0] = 0;
                        }
                    }
                } else if ((D_i3_801C41B8[21] != 0) && (D_i3_801C41B8[22] != 0) && (D_i3_801C41B8[23] != 0)) {
                    sp68 = actor->iwork[0];
                    var_fs0 = 50.0f;
                    if (Rand_ZeroOne() < 0.5f) {
                        var_fs0 = -50.0f;
                    }

                    sp5C = D_i3_801C41B8[21] + ((sp68 & 7) * var_fs0) + RAND_FLOAT(50.0f) - actor->obj.pos.x;
                    sp58 = D_i3_801C41B8[22] + ((sp68 & 7) * (var_fs0 / 2.0f)) + RAND_FLOAT(50.0f) - actor->obj.pos.y;
                    sp54 = D_i3_801C41B8[23] + RAND_FLOAT(50.0f) - actor->obj.pos.z;
                    actor->iwork[2] = 1;
                }
                if (1) {}
            }
            if ((actor->iwork[2] != 0) && (D_i3_801C4190[5] == 0)) {
                actor->iwork[2] = 0;
                actor->fwork[4] = 40.0f;
                actor->timer_0BE = 20;
            }
            func_i3_801BD3B0(actor, sp5C, sp58, sp54);
            break;
        case 3:
            sp5C = gPlayer[0].pos.x + actor->fwork[1] - actor->obj.pos.x;
            sp58 = gPlayer[0].pos.y + actor->fwork[2] - actor->obj.pos.y;
            sp54 = gPlayer[0].unk_138 + 10000.0f - actor->fwork[3] - actor->obj.pos.z;
            actor->iwork[2] = 1;
            func_i3_801BD3B0(actor, sp5C, sp58, sp54);
            if ((gPlayer[0].unk_138 + 1000.0f) < actor->obj.pos.z) {
                Object_Kill(&actor->obj, actor->sfxPos);
            }
            break;
    }
    actor->unk_0B6++;
    if (Animation_GetFrameCount(&D_60135E0) < actor->unk_0B6) {
        actor->unk_0B6 = 0;
    }
}

s32 func_i3_801BDDFC(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    GSGM_BACK();
    if ((limbIndex == 1) || (limbIndex == 2) || (limbIndex == 5)) {
        GCGM_BACK();
    }
    return false;
}

// OBJ_ACTOR_268 draw
void func_i3_801BDE6C(Actor* actor) {
    Animation_GetFrameData(&D_60135E0, actor->unk_0B6, actor->vwork);
    if (actor->iwork[3] == 0) {
        Animation_DrawSkeleton(1, &D_60136CC, actor->vwork, func_i3_801BDDFC, NULL, actor, &gIdentityMatrix);
    } else {
        Animation_DrawSkeleton(1, &D_60137CC, actor->vwork, func_i3_801BDDFC, NULL, actor, &gIdentityMatrix);
    }
}

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

void func_i3_801BDF14(void) {
    Actor* var_s0 = &gActors[1];
    s32 i;

    for (i = 0; i < 50; i++, var_s0++) {
        Actor_Initialize(var_s0);
        var_s0->obj.status = 1;
        var_s0->obj.id = 195;
        var_s0->obj.pos.x = D_i3_801C0504[i].x;
        var_s0->obj.pos.y = D_i3_801C0504[i].y;
        var_s0->obj.pos.z = D_i3_801C0504[i].z;
        var_s0->unk_0F4.y = D_i3_801C075C[i];
        var_s0->unk_0B6 = 41;
        var_s0->iwork[0] = RAND_INT(20.0f);
        var_s0->iwork[2] = i;
        var_s0->timer_0BC = 231;
        var_s0->fwork[0] = 4.5f;
        Object_SetInfo(&var_s0->info, var_s0->obj.id);
    }
}

void func_i3_801BE034(Actor* actor) {
    f32 temp;

    if (actor->timer_0BC == 0) {
        actor->fwork[0] = 10.0f;
        temp = D_i3_801C0828[actor->iwork[2]];
        Math_SmoothStepToAngle(&actor->unk_0F4.y, temp, 1.0f, 100.0f, 0.00001f);
    }
    actor->iwork[0]++;
    if (actor->iwork[0] >= Animation_GetFrameCount(&D_60135E0)) {
        actor->iwork[0] = 0;
    }
    if (gPlayer->unk_1D0 >= 5) {
        Object_Kill(&actor->obj, actor->sfxPos);
    }
}

void func_i3_801BE0F0(Actor* actor) {
    RCP_SetupDL(&gMasterDisp, 0x3D);
    Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, 1);
    GPC(0, 255, 255, 255);
    GCGM_BACK();
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_60135E0, actor->iwork[0], actor->vwork);
    Animation_DrawSkeleton(1, &D_60136CC, actor->vwork, NULL, NULL, actor, &gIdentityMatrix);
    GSGM_BACK();
}

// OBJ_80_126 draw
void func_i3_801BE1FC(Object_80* obj80) {
    Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_600EEF0);
}

void func_i3_801BE274(Actor* actor, f32 yRot, f32 xRot) {
    Vec3f sp64;
    Vec3f sp58;
    Vec3f sp4C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp40;

    Matrix_RotateY(gCalcMatrix, 0.017453292f * yRot, 0);
    Matrix_RotateX(gCalcMatrix, 0.017453292f * xRot, 1);
    sp40.x = sp40.y = 0.0f;
    sp40.z = 50.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp40, &sp64);
    sp64.x += actor->obj.pos.x;
    sp64.y += actor->obj.pos.y + 8.0f;
    sp64.z = actor->obj.pos.z;
    sp40.x = sp40.y = 0.0f;
    sp40.z = 80.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp40, &sp58);
    func_8007F04C(355, sp64.x, sp64.y, sp64.z, xRot, yRot, 0.0f, 0.0f, 0.0f, 0.0f, sp58.x, sp58.y, sp58.z, 1.0f);
}

// OBJ_ACTOR_270 action
void func_i3_801BE3F8(Actor* actor) {
    s32 i;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;

    switch (actor->state) {
        case 0:
            actor->health = 30;
            actor->fwork[0] = 1.0f;
            actor->fwork[1] = 0.9f;
            actor->fwork[2] = 0.8f;
            actor->state++;
            break;
        case 1:
            if (fabsf(gPlayer->pos.z - actor->obj.pos.z) <= 3000.0f) {
                actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_60314E4);
                actor->info.damage = 0;
                actor->info.bonus = 1;
                actor->timer_0BC = RAND_FLOAT(30.0f) + 40.0f;
                actor->state++;
            }
            break;
        case 2:
            actor->unk_0B6++;
            if (actor->unk_0B6 == 10) {
                for (i = 0; i < 10; i++) {
                    func_i3_801AC8A8(actor->obj.pos.x + RAND_FLOAT_CENTERED(200.0f),
                                     actor->obj.pos.y + 50.0f + RAND_FLOAT_CENTERED(70.0f),
                                     actor->obj.pos.z + 100.0f, 3.0f, 2);
                }
            }
            if ((actor->unk_0B6 == 18) && (actor->health != 0)) {
                actor->unk_0B6 = 17;
                if ((fabsf(actor->obj.pos.z - gPlayer->unk_138) > 1000.0f) && (actor->timer_0BC < 20) &&
                    !(actor->timer_0BC & 3)) {
                    sp68 = gPlayer->pos.x + RAND_FLOAT_CENTERED(200.0f) - actor->obj.pos.x;
                    sp64 = gPlayer->pos.y + RAND_FLOAT_CENTERED(200.0f) - actor->obj.pos.y;
                    sp60 = gPlayer->unk_138 - actor->obj.pos.z;
                    sp58 = Math_RadToDeg(Math_Atan2F(sp68, sp60));
                    sp5C = Math_RadToDeg(-Math_Atan2F(sp64, sqrtf(SQ(sp68) + SQ(sp60))));
                    func_i3_801BE274(actor, sp58, sp5C);
                    if (actor->timer_0BC == 0) {
                        actor->timer_0BC = RAND_FLOAT(30.0f) + 40.0f;
                    }
                }
            }
            if (actor->unk_0B6 >= Animation_GetFrameCount(&D_602201C)) {
                actor->info.bonus = 0;
                actor->unk_0B6 = Animation_GetFrameCount(&D_602201C) - 1;
                actor->state++;
            }
            break;
        case 3:
            break;
    }
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        if (actor->health != 0) {
            if (actor->state == 2) {
                actor->health -= actor->damage;
                if (actor->health <= 0) {
                    actor->health = actor->unk_044 = 0;
                    func_80066254(actor);
                    for (i = 0; i < 10; i++) {
                        func_i3_801AC8A8(actor->obj.pos.x + RAND_FLOAT_CENTERED(200.0f),
                                         actor->obj.pos.y + 50.0f + RAND_FLOAT_CENTERED(70.0f),
                                         actor->obj.pos.z + 100.0f, 3.0f, 2);
                    }
                    for (i = 0; i < 3; i++) {
                        func_80081A8C(actor->obj.pos.x + RAND_FLOAT(15.0f),
                                      actor->obj.pos.y + RAND_FLOAT(3.0f),
                                      actor->obj.pos.z + RAND_FLOAT(5.0f), RAND_FLOAT(0.5f) + 1.0f, 7);
                    }
                    func_800815DC();
                    func_8007CF30(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + 51.0f, 10.0f);
                }
            }
            if (actor->state == 1) {
                actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_60314E4);
                actor->info.damage = 0;
                actor->info.bonus = 1;
                actor->state = 2;
            }
        }
    }
}

// OBJ_ACTOR_270 draw
void func_i3_801BEB1C(Actor* actor) {
    Graphics_SetScaleMtx(3.0f);
    RCP_SetupDL(&gMasterDisp, 0x38);
    GPC(255, 143, 143, 255);
    Animation_GetFrameData(&D_602201C, actor->unk_0B6, actor->vwork);
    Animation_DrawSkeleton(1, D_60220E8, actor->vwork, NULL, NULL, &actor->index, &gIdentityMatrix);
    if (actor->health != 0) {
        RCP_SetupDL(&gMasterDisp, 0x37);
        Matrix_Scale(gGfxMatrix, actor->fwork[0], actor->fwork[1], actor->fwork[2], 1);
        Matrix_Translate(gGfxMatrix, 0.0f, -8.0f, 51.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        GDL(D_6002C10);
    }
}

// OBJ_BOSS_301 action
void func_i3_801BEC50(Boss* boss301) {
}

// OBJ_BOSS_301 draw
void func_i3_801BEC5C(Boss* boss301) {
}

// OBJ_ACTOR_188 action
void func_i3_801BEC68(Actor* actor) {
}

// OBJ_ACTOR_188 draw
void func_i3_801BEC74(Actor* actor) {
}

void func_i3_801BEC80(Player* player) {
}

void func_i3_801BEC8C(void* arg0) {
}
