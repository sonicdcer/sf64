#include "global.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_80199920.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_80199A40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_80199C20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_80199D88.s")

extern u8 D_i5_801BA1E4;
extern s16 D_i5_801BE314;
extern s16 D_i5_801BE316;

void func_i5_80199F8C(Actor* actor) {

    actor->unk_0B8 = 0;
    actor->iwork[1] = 0;
    actor->iwork[2] = 0;
    actor->iwork[3] = 0;
    actor->iwork[4] = 0;
    actor->iwork[5] = D_i5_801BA1E4;
    actor->iwork[7] = 0;
    actor->iwork[8] = 0;
    actor->iwork[9] = 0;
    actor->iwork[10] = 0;
    switch (actor->obj.id) {
        case OBJ_ACTOR_205:
            actor->health = 50;
            D_i5_801BE314 = actor->index;
            break;
        case OBJ_ACTOR_207:
            actor->health = 250;
            D_i5_801BE316 = actor->index;
            break;
        case OBJ_ACTOR_208:
            actor->health = 20;
            /* fallthrough */
        case OBJ_ACTOR_209:
            actor->health = 20;
            break;
        case OBJ_ACTOR_211:
            actor->health = 20;
            break;
        case OBJ_ACTOR_212:
            actor->health = 200;
            break;
        case OBJ_ACTOR_213:
            actor->health = 80;
            break;
        case OBJ_ACTOR_210:
            actor->health = 160;
        default:
            break;
    }

    actor->iwork[12] = 20;
    actor->iwork[13] = 0;
    actor->iwork[14] = 0;
    actor->iwork[16] = 20;
    actor->iwork[17] = 0;
    actor->iwork[18] = 0;
    actor->iwork[20] = 20;
    actor->iwork[21] = 0;
    actor->iwork[22] = 0;
    actor->iwork[23] = 0;
    actor->iwork[24] = 0;
    actor->iwork[11] = actor->health;
    actor->iwork[15] = actor->health;
    actor->iwork[19] = actor->health;
    actor->fwork[1] = 0.0f;
    actor->fwork[5] = 0.0f;
    actor->fwork[6] = 0.0f;
    actor->fwork[7] = 0.0f;
    actor->fwork[8] = 0.0f;
    actor->fwork[9] = 0.0f;
    actor->fwork[10] = 0.0f;
    actor->fwork[11] = 0.0f;
    actor->fwork[12] = 0.0f;
    actor->fwork[13] = 0.0f;
    actor->fwork[14] = 0.0f;
    actor->fwork[15] = 0.0f;
    actor->fwork[16] = 0.0f;
    actor->fwork[17] = 0.0f;
    actor->fwork[18] = 0.0f;
    actor->fwork[19] = 0.0f;
    actor->fwork[20] = 0.0f;
    actor->fwork[21] = 0.0f;
    actor->fwork[22] = 0.0f;
    actor->fwork[23] = 0.0f;
    actor->fwork[24] = 0.0f;
    actor->fwork[25] = 0.0f;
    actor->fwork[26] = 0.0f;
    actor->fwork[27] = 0.0f;
    actor->fwork[28] = 0.0f;
    actor->fwork[29] = 0.0f;
    D_i5_801BA1E4++;
}

void func_i5_80199A40(u8**, u8**, f32);
void func_i5_80199C20(u8**, s32, s32, s32, s32);
extern u8* D_6023228;
extern u8* D_6023388;
extern u8* D_Unk_800DB4B8;

void func_i5_8019A128(void) {
    func_i5_80199C20(&D_6023228, 0x10, 0x10, 0, 8);
    func_i5_80199A40(&D_6023388, &D_Unk_800DB4B8, (f32) gGameFrameCount * -20.0f);
}

void func_8001CFA8(f32);
extern f32 D_i5_801BA1DC;
extern f32 D_i5_801BA1E0;
extern u8 D_i5_801BA1E4;
extern s16 D_i5_801BE2F0[];
extern s16 D_i5_801BE310;
extern u8 D_i5_801BE313;

void func_i5_8019A198(Actor* actor) {

    if ((actor->iwork[5] >= D_i5_801BA1E4) || (actor->iwork[5] >= D_i5_801BE2F0[3])) {
        Math_SmoothStepToF(&actor->vel.z, 0.0f, 0.02f, 10.0f, 0.01f);
    } else {
        actor->vel.z = D_i5_801BA1DC;
        if ((actor->iwork[5] == D_i5_801BE2F0[3] - 1) || (actor->iwork[5] == D_i5_801BA1E4 - 1)) {
            if (D_i5_801BE310 != actor->iwork[5]) {
                if (actor->vel.z > -6.0f) {
                    func_8001CFA8(-6.0f);
                } else {
                    func_8001CFA8(actor->vel.z);
                }
                func_8001D10C(actor->sfxPos, 0x31078085U);
                D_i5_801BE310 = (s16) actor->iwork[5];
            }
            D_i5_801BA1E0 = actor->obj.pos.z;
            if (D_i5_801BE313 != 0) {
                if (actor->vel.z > -6.0f) {
                    func_8001CFA8(-6.0f);
                    return;
                }
                func_8001CFA8(actor->vel.z);
            }
        }
    }
}

typedef struct {
    f32 unk0;
    s16 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
} UnkStruct_801BA1EC; //size = 0x14
extern UnkStruct_801BA1EC D_i5_801BA1EC[45];
extern s16 D_i5_801BE320[];

void func_i5_8019A2F4(Actor* actor) {
    f32 var_fa1;
    f32 var_ft4;
    s32 var_a0;
    u8 var_v0;

    var_v0 = D_i5_801BE2F0[0];
    var_fa1 = 0.0f;
    var_ft4 = 0.0f;
    while (D_i5_801BA1EC[var_v0].unk0 != -1.0f) {
        if (D_i5_801BA1EC[var_v0].unk0 < gPlayer[0].unk_138) {
            var_a0 = var_v0;
            if (var_v0 == 0) {
                var_a0 = 1;
            }
            D_i5_801BE2F0[0] = var_a0;
            if (D_i5_801BA1E4 != D_i5_801BA1EC[var_a0 - 1].unk4) {
                Audio_PlaySfx(0x1940205E, actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            D_i5_801BA1E4 = D_i5_801BA1EC[var_a0 - 1].unk4;
            var_fa1 = D_i5_801BA1EC[var_a0 - 1].unk8;
            var_ft4 = D_i5_801BA1EC[var_a0 - 1].unkC;
            D_i5_801BE2F0[4] = D_i5_801BA1EC[var_a0 - 1].unk10;
            if (D_i5_801BA1EC[var_a0 - 1].unk10 >= 0x12C) {
                D_i5_801BE320[18] = (D_i5_801BA1EC[var_a0 - 1].unk10 - 0x12C);
            } else if (D_i5_801BA1EC[var_a0 - 1].unk10 == 0xC8) {
                if (D_i5_801BE320[16] == 0) {
                    D_i5_801BE320[16] = 1;
                }
            } else if (D_i5_801BA1EC[var_a0 - 1].unk10 == 0xC9) {
                D_i5_801BE320[17] = 1;
            } else if (D_i5_801BA1EC[var_a0 - 1].unk10 == 0xCA) {
                D_i5_801BE320[26] = 0;
            } else if (D_i5_801BA1EC[var_a0 - 1].unk10 == 0xCB) {
                D_i5_801BE320[26] = 1;
            } else if (D_i5_801BA1EC[var_a0 - 1].unk10 >= 0x64) {
                D_i5_801BA1E8 = D_i5_801BA1EC[var_a0 - 1].unk10;
            }
            break;
        }
        var_v0++;
    }
    if (D_i5_801BE320[16] != 0) {
        switch (D_i5_801BE320[19]) {
            case 0:
                var_fa1 = 1000.0f;
                var_ft4 = 700.0f;
                break;
            case 1:
                var_fa1 = -200.0f;
                var_ft4 = -250.0f;
                break;
        }
    }
    if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_7) {
        if (var_fa1 < (gPlayer[0].unk_138 - actor->obj.pos.z - (f32) ((D_i5_801BA1E4 * 0x588) - 0x588))) {
            Math_SmoothStepToF(&D_i5_801BA1DC, -6.0f, 0.1f, 0.2f, 0.01f);
        }
        if ((gPlayer[0].unk_138 - actor->obj.pos.z - (f32) ((D_i5_801BA1E4 * 0x588) - 0x588)) < var_ft4) {
            Math_SmoothStepToF(&D_i5_801BA1DC, -30.0f, 0.1f, 0.2f, 0.01f);
        }
        if ((D_i5_801BA1E4 < 5) && (gPlayer[0].unk_138 - actor->obj.pos.z > 4000.0f)) {
            Math_SmoothStepToF(&D_i5_801BA1DC, 0.0f, 0.1f, 1.0f, 0.01f);
        }
        if (gPlayer[0].unk_138 - actor->obj.pos.z > 25000.0f) {
            D_i5_801BA1DC = 0.0f;
        }
        if (gPlayer[0].unk_138 - actor->obj.pos.z < -8000.0f) {
            D_i5_801BA1DC = -200.0f;
        }
    }
}


void func_i5_8019A728(Actor* actor) {
    f32 var_fv0;
    u32 var_v1;
    u8 var_v0;

    var_v0 = actor->iwork[2];
    while (D_i5_801BA1EC[var_v0].unk0 != -1.0f) {
        if (D_i5_801BA1EC[var_v0].unk0 < actor->obj.pos.z) {
            var_v1 = var_v0;
            if (var_v0 == 0) {
                var_v1 = 1;
            }
            actor->iwork[2] = var_v1;
            if ((D_i5_801BA1EC[var_v1 - 1].unk10 == actor->iwork[5]) && (actor->iwork[1] == 0)) {
                if (actor->obj.id == 0xD4) {
                    actor->timer_0BC = 0x1E;
                    func_800BA808(gMsg_ID_17476, RCID_BOSS_MACBETH);
                }
                actor->iwork[1] = 1;
            }
            break;
        }
        var_v0++;
    }
}

void func_i5_8019A830(Actor* actor) {
    if ((gPlayer[0].unk_138 - actor->obj.pos.z) < -20000.0f) {
        Object_Kill(&actor->obj, actor->sfxPos);
    }
}

void func_i5_8019A87C(Actor* actor) {
    if ((gPlayer[0].unk_138 - actor->obj.pos.z) < -2000.0f) {
        Object_Kill(&actor->obj, actor->sfxPos);
    }
}

void func_i5_801AD624(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32, f32);

void func_i5_8019A8C8(Actor* actor, s16 arg1) {
    s32 i;

    func_8007BFFC(actor->obj.pos.x + actor->fwork[25], actor->obj.pos.y + 290.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 22.0f, 5);

    for (i = 0; i < 10; i++) {
        func_i5_801AD624((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[21], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (actor->obj.pos.z - 420.0f) + (Rand_ZeroOne() * 50.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() * 7.0f) + 7.0f, (Rand_ZeroOne() - 0.5f) * 10.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (s32) ((Rand_ZeroOne() * 50.0f) + 70.0f), arg1, (Rand_ZeroOne() * 0.8f) + 0.3f);
        func_i5_801AD624((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[25], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), actor->obj.pos.z + (Rand_ZeroOne() * 50.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() * 7.0f) + 7.0f, (Rand_ZeroOne() - 0.5f) * 10.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (s32) ((Rand_ZeroOne() * 50.0f) + 70.0f), arg1, (Rand_ZeroOne() * 0.8f) + 0.3f);
        func_i5_801AD624((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[23], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f),  (actor->obj.pos.z + 420.0f + 100.0f) + (Rand_ZeroOne() * 50.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() * 7.0f) + 7.0f, (Rand_ZeroOne() - 0.5f) * 10.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (s32) ((Rand_ZeroOne() * 50.0f) + 70.0f), arg1, (Rand_ZeroOne() * 0.8f) + 0.3f);
    }
    Audio_PlaySfx(0x2940C00A, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i5_8019AF34(Actor* actor) {
    s32 i;

    func_8007BFFC(actor->obj.pos.x + actor->fwork[25], actor->obj.pos.y + 290.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 22.0f, 5);

    for (i = 0; i < 10; i++) {
        func_i5_801AD624((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[21], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (actor->obj.pos.z - 420.0f) + (Rand_ZeroOne() * 50.0f), (Rand_ZeroOne() - 0.5f) * 50.0f, (Rand_ZeroOne() * 30.0f) + 7.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (s32) ((Rand_ZeroOne() * 50.0f) + 70.0f), 1, (Rand_ZeroOne() * 0.8f) + 0.3f);
        func_i5_801AD624((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[25], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), actor->obj.pos.z + (Rand_ZeroOne() * 50.0f), (Rand_ZeroOne() - 0.5f) * 45.0f, (Rand_ZeroOne() * 25.0f) + 7.0f, (Rand_ZeroOne() - 0.5f) * 20.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (s32) ((Rand_ZeroOne() * 50.0f) + 70.0f), 1, 2.0f * ((Rand_ZeroOne() * 0.8f) + 0.3f));
        func_i5_801AD624((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[23], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (actor->obj.pos.z + 420.0f + 100.0f) + (Rand_ZeroOne() * 50.0f), (Rand_ZeroOne() - 0.5f) * 40.0f, (Rand_ZeroOne() * 35.0f) + 7.0f, (Rand_ZeroOne() - 0.5f) * 20.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (s32) ((Rand_ZeroOne() * 50.0f) + 70.0f), 1, (Rand_ZeroOne() * 0.8f) + 0.3f);
    }
    Audio_PlaySfx(0x2940C00A, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}


void func_i5_8019B580(Actor* actor, s32* arg1) {

    if (*arg1 < 11) {
        if ((gGameFrameCount & 0x1F) == 0) {
            func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[21], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (actor->obj.pos.z - 420.0f) + (Rand_ZeroOne() * 50.0f), 10.0f);
        }
        else if ((gGameFrameCount & 0x1F) == 8) {
            func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[25], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), actor->obj.pos.z + (Rand_ZeroOne() * 50.0f), 10.0f);
        }
        else if ((gGameFrameCount & 0x1F) == 0x10) {
            func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[23], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (actor->obj.pos.z + 320.0f) + (Rand_ZeroOne() * 50.0f), 10.0f);
        }
        else if ((gGameFrameCount & 0x1F) == 0x18) {
            func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[25], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), actor->obj.pos.z + (Rand_ZeroOne() * 50.0f), 10.0f);
        }
        if (((gGameFrameCount & 3) & 0xFFFF) == 0) {
            func_8007C120(actor->obj.pos.x + actor->fwork[25], actor->obj.pos.y + 350.0f, actor->obj.pos.z, actor->vel.x, actor->vel.y, actor->vel.z, 0.2f, 10);
        }
    }
}

void func_i5_8019B8B0(Actor* actor) {

    if ((gGameFrameCount & 3) == 0) {
        func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[21], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (Rand_ZeroOne() * 50.0f) + (actor->obj.pos.z - 420.0f), 20.0f);
    } else if ((gGameFrameCount & 3) == 1) {
        func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[25], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (Rand_ZeroOne() * 50.0f) + actor->obj.pos.z, 20.0f);
    } else if ((gGameFrameCount & 3) == 2) {
        func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[23], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (Rand_ZeroOne() * 50.0f) + (actor->obj.pos.z + 420.0f), 20.0f);
    } else if ((gGameFrameCount & 3) == 3) {
        func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[25], (actor->obj.pos.y + 280.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (Rand_ZeroOne() * 50.0f) + actor->obj.pos.z, 20.0f);
    }
    if ((gGameFrameCount & 3) == 0) {
        func_8007C120(actor->obj.pos.x + actor->fwork[25], actor->obj.pos.y + 350.0f, actor->obj.pos.z, actor->vel.x, actor->vel.y, actor->vel.z, 0.2f, 0x14);
    }
}


void func_i5_8019BBEC(Actor* actor) {

    if ((actor->timer_0BC & 0xF) == 0) {
        func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[21], ((Rand_ZeroOne() - 0.5f) * 100.0f) + (actor->obj.pos.y + 100.0f), (Rand_ZeroOne() * 50.0f) + (actor->obj.pos.z - 400.0f), 3.0f);
    } else if ((actor->timer_0BC & 0xF) == 4) {
        func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[25], ((Rand_ZeroOne() - 0.5f) * 100.0f) + (actor->obj.pos.y + 100.0f), (Rand_ZeroOne() * 50.0f) + actor->obj.pos.z, 3.0f);
    } else if ((actor->timer_0BC & 0xF) == 8) {
        func_8007D2C8((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[23], ((Rand_ZeroOne() - 0.5f) * 100.0f) + (actor->obj.pos.y + 100.0f), (Rand_ZeroOne() * 50.0f) + (actor->obj.pos.z + 450.0f), 3.0f);
    } else if ((actor->timer_0BC & 0xF) == 0xC) {
        func_8007C120(actor->obj.pos.x + actor->fwork[25], actor->obj.pos.y + 100.0f, actor->obj.pos.z, actor->vel.x, actor->vel.y, actor->vel.z, 0.15f, 0xA);
    }
}

void func_i5_8019BE50(Actor* actor) {
    s16 i;

    func_8007BFFC(actor->obj.pos.x + actor->fwork[25], actor->obj.pos.y + 90.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 10.0f, 5);
    func_8007BFFC(actor->obj.pos.x + actor->fwork[23], actor->obj.pos.y + 90.0f, actor->obj.pos.z + 420.0f + 300.0f, 0.0f, 0.0f, 0.0f, 10.0f, 5);

    for (i = 0; i < 10; i++) {
        func_i5_801AD624((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[21], (actor->obj.pos.y + 80.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (actor->obj.pos.z - 420.0f) + (Rand_ZeroOne() * 50.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() * 7.0f) + 7.0f, (Rand_ZeroOne() - 0.5f) * 10.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (s32) ((Rand_ZeroOne() * 50.0f) + 70.0f), 0, (Rand_ZeroOne() * 0.8f) + 0.3f);
        func_i5_801AD624((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[25], (actor->obj.pos.y + 80.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), actor->obj.pos.z + (Rand_ZeroOne() * 50.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() * 10.0f) + 7.0f, (Rand_ZeroOne() - 0.5f) * 10.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (s32) ((Rand_ZeroOne() * 50.0f) + 70.0f), 0, ((Rand_ZeroOne() * 0.8f) + 0.3f));
        func_i5_801AD624((actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 200.0f)) + actor->fwork[23], (actor->obj.pos.y + 80.0f) + ((Rand_ZeroOne() - 0.5f) * 100.0f), (actor->obj.pos.z + 420.0f + 100.0f) + (Rand_ZeroOne() * 50.0f), (Rand_ZeroOne() - 0.5f) * 10.0f, (Rand_ZeroOne() * 7.0f) + 7.0f, (Rand_ZeroOne() - 0.5f) * 10.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, Rand_ZeroOne() * 360.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 30.0f, (s32) ((Rand_ZeroOne() * 50.0f) + 70.0f), 0, (Rand_ZeroOne() * 0.8f) + 0.3f);
    }
    func_8007A6F0(&actor->obj.pos, 0x2940C00A);
    gHitCount++;
}

extern s16 D_i5_801BE320[];

s32 func_i5_8019C4EC(Actor* actor) {
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        if (actor->unk_0D2 == 1) {
            Audio_PlaySfx(0x29034003, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            actor->unk_0D0 = 0;
            actor->iwork[7] = 0xF;
            D_i5_801BE320[22] = 0;
            D_i5_801BE320[4] = 0x78;
            D_i5_801BE320[21] = 2;
            return 1;
        }
        Audio_PlaySfx(0x29121007, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019C5B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019C6C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019C778.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019CE88.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019D048.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019D5C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019D670.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019D700.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019D910.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019E410.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019E624.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019EA60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019EBF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019EE68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019F164.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019FC54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_8019FF9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A015C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A0308.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A0A74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A0B00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A0B20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A0BD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A0DD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A0E2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A0EB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A1268.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A12C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A23AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A2A78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A2B24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A2DD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A30B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A3240.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A3300.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A3790.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A3C20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A3E70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A3E98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A41B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A43BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A4660.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A46A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A49B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A4A64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A4AF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A4B24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A5124.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A54AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A54E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A55D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A57D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A5AF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A5B4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A5D68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A5E2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A5E54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A5F90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A5FC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A5FD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A6100.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A6134.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A6144.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A6540.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A65E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A6608.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A67BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A67C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A68EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A68F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A6984.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A6C78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A6FB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A72DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A74C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A78B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A7A30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A7CAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A7D98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801A7E7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801ABC14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AC1C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AC294.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AC42C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AC438.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AC5AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AC6B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AC754.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801ACE40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801ACF6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801ACFBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AD080.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AD144.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AD554.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AD624.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AD6F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801ADAC8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801ADC08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801ADCEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801ADD68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AE2C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AE4CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AE610.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AE694.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AE800.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AE87C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AEAA0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AEC04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AEEFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AF134.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AF200.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AF27C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AF44C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AF628.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AF70C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801AF8F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801B28BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801B3554.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801B3718.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801B38E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ma/func_i5_801B3D04.s")
