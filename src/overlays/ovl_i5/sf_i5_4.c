#include "global.h"

typedef struct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ s16 unk_1C;
    /* 0x20 */ f32 unk_20;
} UnkStruct_801C62E8; // size = 0x24
extern UnkStruct_801C62E8* D_i5_801C62E8[20];

bool func_i5_801B49D0(Actor* actor) {
    UnkStruct_801C62E8* var_v0;
    s32 i;
    bool found;

    found = false;
    var_v0 = &D_i5_801C62E8;
    for (i = 0; i < ARRAY_COUNT(D_i5_801C62E8); i++, var_v0++) {
        if (var_v0->unk_00 == 0) {
            found = true;
            var_v0->unk_00 = 1;
            var_v0->unk_04 = actor->obj.pos.y;
            var_v0->unk_08 = actor->obj.pos.x;
            var_v0->unk_0C = actor->obj.pos.z;
            var_v0->unk_10 = actor->obj.rot.x;
            var_v0->unk_14 = actor->obj.rot.y;
            var_v0->unk_18 = actor->obj.rot.z;
            break;
        }
    }
    actor->obj.status = 0;
    return found;
}

void func_i5_801B4A54(UnkStruct_801C62E8* arg0) {
    // Lots of conversions between floats, and ints unnecessarily here because of this chain assignment.
    arg0->unk_00 = arg0->unk_04 = arg0->unk_08 = arg0->unk_0C = arg0->unk_10 = arg0->unk_14 = arg0->unk_18 =
        arg0->unk_1C = arg0->unk_20 = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B4AA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B5110.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B5244.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B58AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B5FE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B68A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6AEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6B40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6E20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B7240.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/D_i5_801BBDF0.s")
