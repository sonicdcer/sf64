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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80187650.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_801877C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_8018795C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80187B08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80187C68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i2/fox_me/func_i2_80187D08.s")

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
