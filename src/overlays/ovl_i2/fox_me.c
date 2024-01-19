#include "global.h"

void func_i2_80187530(Actor* actor) {
    if (actor->unk_0D0 == 1) {
        actor->unk_0D0 = 0;
        func_8007A6F0(&actor->obj.pos, 0x2902107D);
    }
}

void func_i2_8018756C(Actor* actor) {
    Vec3f vec;

    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        actor->unk_0CE -= actor->unk_0D6;
        if (actor->unk_0CE <= 0) {
            actor->obj.status = 3;
        }
    }

    actor->obj.rot.y += 2.0f;
    actor->obj.rot.x += 1.3f;

    vec.x = actor->vel.x;
    vec.y = actor->vel.y;
    vec.z = actor->vel.z;

    if ((func_8006351C(actor->index, &actor->obj.pos, &vec, 0) != 0) || (actor->obj.pos.y < (gGroundLevel + 20.0f))) {
        actor->obj.status = 3;
    }
    func_i2_80187530(actor);
}

void func_i2_80187650(Actor* actor) {
    Vec3f vec;

    actor->obj.rot.y += 1.7f;
    actor->obj.rot.x += 3.3f;
    actor->unk_046 -= 15;

    if (actor->unk_046 < 0) {
        actor->unk_046 = 0;
    }

    actor->unk_048 += 8;
    if (actor->unk_048 > 995) {
        actor->unk_048 = 995;
    }

    if ((actor->timer_0BC & 3) == 1) {
        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 6.0f);
    }

    if (actor->unk_0D0 != 0) {
        func_8007A6F0(&actor->obj.pos, 0x2903A008);
        func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 10.0f);
        Object_Kill(&actor->obj, &actor->sfxPos);
    }

    if (actor->timer_0C2 == 0) {
        vec.x = actor->vel.x;
        vec.y = actor->vel.y;
        vec.z = actor->vel.z;
        if ((func_8006351C(actor->index, &actor->obj.pos, &vec, 0) != 0) ||
            (actor->obj.pos.y < (gGroundLevel + 20.0f))) {
            func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 10.0f);
            actor->obj.status = 3;
        }
    }

    func_i2_80187530(actor);
}

void func_i2_801877C4(Actor* actor) {
    Vec3f sp44;
    Vec3f sp38;

    actor->obj.rot.z += 1.0f;

    Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * 0.017453292f, 0);

    sp38.x = 0.0f;
    sp38.y = -1100.0f;
    sp38.z = 0.0f;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp38, &sp44);

    actor->obj.pos.x = actor->fwork[0] + sp44.x;
    actor->obj.pos.y = actor->fwork[1] + sp44.y;

    if (actor->unk_0D0 != 0) {
        func_80066254(actor);
        func_8007A6F0(&actor->obj.pos, 0x2903A008);
        Object_Kill(&actor->obj, &actor->sfxPos);
        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z, 5.0f);
        func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 3.0f, 10);
    }

    if (actor->timer_0BC == 0) {
        actor->timer_0BC = 40;
        if (actor->obj.pos.z < (gPlayer->unk_138 - 1000.0f)) {
            func_8007F11C(0x161, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 120.0f);
        }
    }
}

void func_i2_8018795C(Actor* actor) {
    Vec3f sp54;
    s32 pad[2];

    actor->obj.rot.y += 7.0f;
    actor->obj.rot.x += 3.3f;

    if (actor->unk_0D0 != 0) {
        func_80066254(actor);
        func_8007A6F0(&actor->obj.pos, 0x2903A008);
        Object_Kill(&actor->obj, &actor->sfxPos);
        func_8007D0E0(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y, actor->obj.pos.z - actor->vel.z, 8.0f);
        func_8007BFFC(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z - actor->vel.z, 0.0f,
                      0.0f, 0.0f, 4.0f, 10);
    }

    if (!(gGameFrameCount & 7)) {
        Math_Vec3fFromAngles(&sp54, actor->obj.rot.x, actor->obj.rot.y, 100.0f);
        func_8007F04C(0x161, actor->obj.pos.x + (sp54.x * 3.0f), actor->obj.pos.y + (sp54.y * 3.0f),
                      actor->obj.pos.z + (sp54.z * 3.0f), actor->obj.rot.x, actor->obj.rot.y, actor->obj.rot.z, 0.0f,
                      0.0f, 0.0f, sp54.x, sp54.y, sp54.z, 1.0f);
    }
}

void func_i2_80187B08(Actor* actor) {
    actor->obj.rot.y += 7.0f;
    actor->obj.rot.x += 3.3f;

    actor->unk_046 -= 11;

    if (actor->unk_046 < 0) {
        actor->unk_046 = 0;
    }

    actor->unk_048 += 4;
    if (actor->unk_048 > 995) {
        actor->unk_048 = 995;
    }

    if (!(actor->timer_0BC & 3)) {
        func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 6.0f);
    }

    if ((actor->unk_0D0 != 0) || (actor->timer_0BC == 0)) {
        func_8007A6F0(&actor->obj.pos, 0x2903A008);
        Object_Kill(&actor->obj, &actor->sfxPos);
        func_8007D0E0(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y, actor->obj.pos.z - actor->vel.z, 8.0f);
        func_8007BFFC(actor->obj.pos.x - actor->vel.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z - actor->vel.z, 0.0f,
                      0.0f, 0.0f, 4.0f, 10);
    }
}

void func_i2_80187C68(Actor* actor, f32 x, f32 y, f32 z, f32 arg4, f32 xRot, f32 yRot, s32 arg7, s32 arg8, s32 id) {
    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = (u16) id;

    actor->obj.pos.x = x;
    actor->obj.pos.y = y;
    actor->obj.pos.z = z;

    actor->obj.rot.x = xRot;
    actor->obj.rot.y = yRot;

    actor->timer_0BC = arg7;
    actor->timer_0BE = 20;
    actor->unk_0B4 = arg8;
    actor->fwork[5] = arg4;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_i2_80187D08(f32 x, f32 y, f32 z, f32 arg3, f32 xRot, f32 yRot, s32 arg6, s32 arg7, s32 id) {
    s32 i;

    for (i = 0; i < (s32) (sizeof(gActors) / sizeof(gActors[0])); i++) {
        if (gActors[i].obj.status == 0) {
            func_i2_80187C68(&gActors[i], x, y, z, arg3, xRot, yRot, arg6, arg7, id);
            return;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80187D98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80187E38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80187FF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188088.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_801881A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188228.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188298.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188344.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_801887D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188A40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188B84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188C2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188CAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188E8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188F2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80188FAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80189114.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_801892F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80189624.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018978C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018B7C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018BACC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018C77C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018C8F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018CA10.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018CAD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018CB50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018CCF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018CD8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018D9EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DA6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DAEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DB6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DBEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DCE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DE14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018DF08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018E084.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018ED9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/D_i2_80195790.s")
