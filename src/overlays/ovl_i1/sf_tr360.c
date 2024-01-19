#include "global.h"

extern ObjectInit D_6008EF8[];

void func_i1_80198C50(void) {
    Object_58* obj58;
    s32 i;

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_6008EF8);
    Rand_SetSeed(1, 29000, 9876);

    obj58 = gObjects58;
    for (i = 0; i < 1000; i++) {
        if (D_80178310[i].id >= 0) {
            if (D_80178310[i].id <= 160) {
                func_800A4F4C(obj58);
                obj58->obj.status = 2;
                obj58->obj.id = D_80178310[i].id;
                obj58->obj.pos.x = D_80178310[i].xPos;
                obj58->obj.pos.z = -D_80178310[i].zPos1;
                obj58->obj.pos.y = D_80178310[i].yPos - (Rand_ZeroOneSeeded() * 300.0f);
                obj58->obj.rot.y = D_80178310[i].rot.y;
                Object_SetInfo(&obj58->info, obj58->obj.id);
                obj58++;
            }
        } else {
            break;
        }
    }
}

bool func_i1_80198DCC(Actor* actor, f32 x, f32 z) {
    Object_58* obj58;
    s32 i;

    for (i = 0, obj58 = gObjects58; i < 200;) {
        if ((obj58->obj.status == 2) &&
            (fabsf(obj58->obj.pos.x - (actor->obj.pos.x + ((x * 650.0f) + 350.0f))) < 1200.0f) &&
            (fabsf(obj58->obj.pos.z - (actor->obj.pos.z + ((z * 650.0f) + 350.0f))) < 1200.0f) &&
            (actor->obj.pos.y < 650.0f)) {
            return TRUE;
        }
        obj58++;
        if ((obj58->obj.status == 2) &&
            (fabsf(obj58->obj.pos.x - (actor->obj.pos.x + ((x * 650.0f) + 350.0f))) < 1200.0f) &&
            (fabsf(obj58->obj.pos.z - (actor->obj.pos.z + ((z * 650.0f) + 350.0f))) < 1200.0f) &&
            (actor->obj.pos.y < 650.0f)) {
            return TRUE;
        }
        obj58++;
        if ((obj58->obj.status == 2) &&
            (fabsf(obj58->obj.pos.x - (actor->obj.pos.x + ((x * 650.0f) + 350.0f))) < 1200.0f) &&
            (fabsf(obj58->obj.pos.z - (actor->obj.pos.z + ((z * 650.0f) + 350.0f))) < 1200.0f) &&
            (actor->obj.pos.y < 650.0f)) {
            return TRUE;
        }
        obj58++;
        if ((obj58->obj.status == 2) &&
            (fabsf(obj58->obj.pos.x - (actor->obj.pos.x + ((x * 650.0f) + 350.0f))) < 1200.0f) &&
            (fabsf(obj58->obj.pos.z - (actor->obj.pos.z + ((z * 650.0f) + 350.0f))) < 1200.0f) &&
            (actor->obj.pos.y < 650.0f)) {
            return TRUE;
        }
        obj58++;
        i += 4;
    }

    return FALSE;
}

void func_i1_80199024(Actor* actor) {
    s32 pad[8];
    Vec3f sp54;
    f32 var_fv0;
    UnkEntity28* unkEntity28;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fv0_2;
    s32 temp_v0;
    f32 sinRotX;
    f32 sinRotY;
    f32 cosRotX;
    f32 cosRotY;

    if (actor->timer_0BC == 0) {
        sp54.y = Rand_ZeroOne() * 1000.0f;
        sp54.z = (Rand_ZeroOne() - 0.5f) * 10000.0f;
        sp54.x = (Rand_ZeroOne() - 0.5f) * 10000.0f;
        actor->fwork[4] = sp54.z;
        actor->fwork[5] = sp54.y;
        actor->fwork[6] = sp54.x;
        actor->timer_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 10;
    }
    sinRotX = __sinf(actor->obj.rot.x * M_DTOR);
    cosRotX = __cosf(actor->obj.rot.x * M_DTOR);
    sinRotY = __sinf(actor->obj.rot.y * M_DTOR);
    cosRotY = __cosf(actor->obj.rot.y * M_DTOR);
    sp54.z = actor->fwork[4] - actor->obj.pos.x;
    sp54.y = actor->fwork[5] - actor->obj.pos.y;
    sp54.x = actor->fwork[6] - actor->obj.pos.z;
    if (!((actor->index + gGameFrameCount) & 7)) {
        actor->fwork[19] = Math_RadToDeg(Math_Atan2F(sp54.z, sp54.x));
        actor->fwork[20] = Math_RadToDeg(Math_Atan2F(sp54.y, sqrtf(SQ(sp54.z) + SQ(sp54.x))));
    }
    var_fv0 = actor->fwork[20];
    temp_v0 = func_i1_80198DCC(actor, sinRotY, cosRotY);
    if (temp_v0 != 0) {
        var_fv0 += 40.0f * (f32) temp_v0;
        if (var_fv0 >= 360.0f) {
            var_fv0 -= 360.0f;
        }
        if (var_fv0 < 0.0f) {
            var_fv0 += 360.0f;
        }
    } else if ((actor->obj.pos.y < (gGroundLevel + 50.0f)) && (var_fv0 > 180.0f)) {
        var_fv0 = 0.0f;
        actor->unk_0F4.x = 0.0f;
    }
    Math_SmoothStepToAngle(&actor->unk_0F4.x, var_fv0, 0.5f, 1.0f, 0.0001f);
    temp_fv1 = Math_SmoothStepToAngle(&actor->unk_0F4.y, actor->fwork[19], 0.5f, 1.0f, 0.0001f) * 30.0f;
    if (temp_fv1 < 0.0f) {
        var_fv0_2 = temp_fv1 * -1.0f;
    } else {
        var_fv0_2 = 360.0f - temp_fv1;
    }
    Math_SmoothStepToAngle(&actor->obj.rot.z, var_fv0_2, 0.1f, 3.0f, 0.01f);
    actor->obj.rot.x = -actor->unk_0F4.x;
    actor->obj.rot.y = actor->unk_0F4.y;
    actor->vel.x = actor->fwork[13] + (sinRotY * (cosRotX * 35.0f));
    actor->vel.y = actor->fwork[14] + (-sinRotX * 35.0f);
    actor->vel.z = actor->fwork[12] + (cosRotY * (cosRotX * 35.0f));
    actor->fwork[13] -= (actor->fwork[13] * 0.1f);
    actor->fwork[14] -= (actor->fwork[14] * 0.1f);
    actor->fwork[12] -= (actor->fwork[12] * 0.1f);
    if ((actor->obj.pos.y < gGroundLevel + 40.0f) && (actor->vel.y < 0.0f)) {
        actor->obj.pos.y = gGroundLevel + 40.0f;
        actor->vel.y = 0.0f;
    }
    func_8003088C(actor);
    unkEntity28 = &gUnkEntities28[actor->index];
    unkEntity28->unk_00 = 1;
    unkEntity28->unk_02 = actor->unk_0E4;
    unkEntity28->pos.x = actor->obj.pos.x;
    unkEntity28->pos.y = actor->obj.pos.y;
    unkEntity28->pos.z = actor->obj.pos.z;
    unkEntity28->unk_10 = actor->unk_0F4.y + 180.0f;
    if (actor->iwork[8] != 0) {
        actor->iwork[8]--;
    }
}

typedef struct {
    u16* msg;
    u16 unk;
} TestStruct;

extern TestStruct D_i1_8019AE50[];
// u16* D_i1_8019AE50 = gMsg_ID_23028;
// extern u16* D_i1_8019AE50;
extern u16 D_i1_8019AE54[];
void func_i1_8019949C(void) {
    s32 i;
    Actor* actor;
    Vec3f sp44;
    Vec3f sp38;
    s32 var_v1;

    var_v1 = 1;
    if (gHitCount >= 100) {
        var_v1 = 0;
    }
    if (!(gGameFrameCount & 3)) {
        if (gPlayer->state_1C8 == PLAYERSTATE_1C8_3) {
            sp44.x = 0.0f;
            sp44.y = 0.0f;
            sp44.z = -15000.0f;
            for (i = var_v1, actor = &gActors[i + 10]; i < 16; i++, actor++) {
                if (actor->obj.status == 0) {
                    Actor_Initialize(actor);
                    actor->obj.status = 2;
                    actor->obj.id = OBJ_ACTOR_197;
                    Matrix_RotateY(gCalcMatrix, gGameFrameCount * 6.0f * M_DTOR, 0);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
                    actor->obj.pos.x = sp38.x;
                    actor->obj.pos.y = 2000.0f;
                    actor->obj.pos.z = sp38.z;
                    actor->unk_0F4.y = gGameFrameCount * 6.0f;
                    actor->unk_0E4 = i + 10;
                    actor->unk_0CE = 24;
                    actor->unk_0C9 = actor->iwork[11] = 1;
                    actor->timer_0C2 = 30;
                    Object_SetInfo(&actor->info, actor->obj.id);
                    Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    if ((i + 10) == 10) {
                        actor->unk_0E6 = 0;
                        actor->unk_0CE = 50;
                    } else {
                        actor->unk_0E6 = -1;
                        actor->info.action = (ObjectFunc) func_i1_80199024;
                    }
                    break;
                }
            }
        }
    }
    if (D_80177C78 != 0) {
        D_80177C78--;
    }
    if (D_80177C78 == 0) {
        if (D_i1_8019AE50[D_80177C8C].msg == 0) {
            D_80177C8C = 1;
        }
        if (D_i1_8019AE50[D_80177C8C].unk != 0) {
            func_800BA808(D_i1_8019AE50[D_80177C8C].msg, RCID_TRAINING);
            D_80177C78 = D_i1_8019AE50[D_80177C8C].unk;
        } else {
            D_80161690 = 80;
            D_80177C78 = 320;
        }
        D_80177C8C++;
    }
    if ((D_80161690 != 0) && (gControllerPress[gMainController].button & R_CBUTTONS)) {
        func_8001AF40(0);
        D_800CFF90 = 0;
        D_80161690 = 0;
        // This is ROB 64. Keep up the good work.
        func_800BA808(gMsg_ID_20329, RCID_ROB64);
    }
}
