#include "global.h"

extern s32 D_i4_801A0560;

void func_i4_80199900(Actor* arg0, s32 arg1) {
    s32 i;

    D_Timer_80161A60 = 8;

    Object_Kill(&arg0->obj, arg0->sfxPos);
    func_8007A6F0(&arg0->obj.pos, 0x2903A060);

    for (i = 0; i < 20; i++) {
        func_800794CC(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.0f);
        func_80079618(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.0f);
    }

    func_8007BFFC(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0.0f, 0.0f, 0.0f, 20.0f, 0x1E);
    func_8007B344(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 20.0f, 5);

    if (arg1 != 0) {
        D_i4_801A0560++;
        if ((D_i4_801A0560 >= 6) &&
            ((gPlayer->state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer->state_1C8 == PLAYERSTATE_1C8_5))) {
            gCsFrameCount = 0;
            gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
            gPlayer->unk_1D0 = 0x3E8;
            gActors->unk_0B8 = 6;
            gPlayer->timer_1F8 = 0x1E;
            Audio_PlaySfx(0x11030010U, gActors->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Audio_PlaySfx(0x31024059U, gActors->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_800182F4(0x100100FF);
            func_800182F4(0x110100FF);
        }
        if ((D_i4_801A0560 == 3) && (D_800D3180[8] != 0)) {
            D_800C9B4C = D_8015F928 + 110;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_80199B18.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_80199BDC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_80199C60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_80199FCC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019A0F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019A1D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019A2F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019A3E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019AA9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019AB8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019B48C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019B568.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019B630.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019B75C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019B888.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019BA64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019C574.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019C70C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019C85C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019DD20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019E234.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019E3A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019E454.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019E98C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019EA68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/D_i4_801A00C0.s")
