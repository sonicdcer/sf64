#include "global.h"
#include "DF4260.h"

void func_DF4260_80187520(s32 arg0, s32 arg1) {
}

void func_DF4260_80187530(Object_80* obj80) {
}

extern Gfx* D_60199D0;

void func_DF4260_8018753C(Object_80* arg0) {

    GCGM_BACK(G_CULL_BACK);
    GDL(&D_60199D0);
    GSGM_BACK(G_CULL_BACK);
}

// potentially not 80
void func_DF4260_801875A4(Object_80* arg0) {
    f32 sp1C;
    f32 sp18;
    f32 var_f;

    if (!(gFrameCount & 3)) {
        sp1C = (Rand_ZeroOne() - 0.5f) * 10.0f;
        sp18 = (Rand_ZeroOne() - 0.5f) * 10.0f;
        var_f = ((Rand_ZeroOne() * 0.5f) + 1.0f);
        func_8007C85C(arg0->obj.pos.x + sp1C, arg0->obj.pos.y + sp18, arg0->obj.pos.z, 4.0f * var_f);
    }
}

void func_DF4260_80187670(Object_2F4* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8, s32 arg9) {

    Object_2F4_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = arg9;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->obj.rot.x = arg5;
    arg0->obj.rot.y = arg6;
    arg0->timer_0BC = arg7;
    arg0->timer_0BE = 0x14;
    arg0->unk_0B4 = arg8;
    arg0->unk_124.y = arg4;
    Object_SetInfo(&arg0->info, arg0->obj.id);
}

void func_DF4260_80187710(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 i;
    
    for(i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
        if (gObjects2F4[i].obj.status == 0) {
            func_DF4260_80187670(&gObjects2F4[i], arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
            return;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_801877A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80187838.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_801878D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018798C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_801879F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80187A38.s")

f32 func_DF4260_80187A88(s32 arg0) {
    f32 ret = arg0 * 0.5f;

    if (ret > 8.0f) {
        ret = 8.0f;
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80187AC8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80188750.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_801887AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80188A18.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80188C7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80188D50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80189058.s")

extern f32 D_DF4260_8019B714;
extern f32 D_DF4260_8019B718;

s32 func_DF4260_8018A434(s32 arg0, s32* arg1, s32 arg2, Vec3f* arg3, UnkStruct_func_DF4260_8018A434* arg4) {
    s32 pad;

    if (arg4->unk_088[arg0] == 0x3E8) {
        *arg1 = 0;
    }

    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, 0x3E9);
    switch (arg0) {
    case 6:
        arg3->x = (f32) (arg3->x + arg4->unk_0DC);
        arg3->y = (f32) (arg3->y + arg4->unk_0DC);
        arg3->y = (f32) (arg3->y - (arg4->unk_10C * 0.6f));
        break;
    case 5:
        arg3->x = (f32) (arg3->x - arg4->unk_0DC);
        arg3->y = (f32) (arg3->y - arg4->unk_0DC);
        arg3->z = (f32) (arg3->z + arg4->unk_0DC);
        break;
    case 4:
        arg3->x = (f32) (arg3->x + arg4->unk_0DC);
        arg3->y = (f32) (arg3->y + arg4->unk_0DC);
        arg3->z = (f32) (arg3->z - arg4->unk_0DC);
        break;
    case 9:
        arg3->x = (f32) (arg3->x - arg4->unk_0D8);
        arg3->y = (f32) (arg3->y - arg4->unk_0D8);
        arg3->y = (f32) (arg3->y + arg4->unk_10C);
        break;
    case 8:
        arg3->x = (f32) (arg3->x + arg4->unk_0D8);
        arg3->y = (f32) (arg3->y + arg4->unk_0D8);
        arg3->z = (f32) (arg3->z - arg4->unk_0D8);
        break;
    case 7:
        arg3->x = (f32) (arg3->x - arg4->unk_0D8);
        arg3->y = (f32) (arg3->y - arg4->unk_0D8);
        arg3->z = (f32) (arg3->z + arg4->unk_0D8);
        break;
    case 3:
        arg3->x = (f32) (arg3->x + arg4->unk_0E0);
        arg3->y = (f32) (arg3->y + arg4->unk_0E0);
        arg3->z = (f32) (arg3->z + D_DF4260_8019B714);
        break;
    case 1:
        arg3->x = (f32) (arg3->x + (arg4->unk_0E8 - D_DF4260_8019B714));
        arg3->y = (f32) (arg3->y + arg4->unk_0E8);
        break;
    case 2:
        arg3->x = (f32) (arg3->x + (arg4->unk_0E4 + D_DF4260_8019B714));
        arg3->y = (f32) (arg3->y + arg4->unk_0E4);
        break;
    case 16:
        arg3->x = (f32) (arg3->x + D_DF4260_8019B718);
        break;
    }
    if ((arg4->unk_088[arg0] & 1) || (arg4->unk_05C & 1)) {
        RCP_SetupDL_64();
        GPC(64, 64, 255, 255);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018A730.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018AA74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018AB08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018AB64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018ACE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018AED0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018B0B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018B15C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018B418.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018B58C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BAAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BAFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BBA4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BBF8.s")

s32 func_DF4260_8018BC50(s32 arg0, s32* arg1, s32 arg2, s32 arg3, UnkStruct_func_DF4260_8018BC50* arg4) {
    if ((arg4->unkB8 == 0x65) && (arg0 != 8)) {
        *arg1 = 0;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BC84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BD7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BDD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018BE7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018C0B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018C19C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018DDAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018E290.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018E76C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018EC54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018ECAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018ED1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018ED78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018EE2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018EE84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018EF38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018EF90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F044.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F1C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F31C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F3BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F4A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F55C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F678.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F6F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_8018F880.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80190F74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/func_DF4260_80191160.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_DF4260/DF4260/D_DF4260_8019AEF0.s")
