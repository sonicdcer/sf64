#include "global.h"

extern s32 D_i4_801A0560;

void func_i4_80199900(Actor* actor, s32 arg1) {
    s32 i;

    D_Timer_80161A60 = 8;

    Object_Kill(&actor->obj, actor->sfxPos);
    func_8007A6F0(&actor->obj.pos, 0x2903A060);

    for (i = 0; i < 20; i++) {
        func_800794CC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
        func_80079618(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
    }

    func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 20.0f, 0x1E);
    func_8007B344(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 20.0f, 5);

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

void func_i4_80199B18(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 scale) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_339;

    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;

    effect->vel.x = xVel;
    effect->vel.y = yVel;
    effect->vel.z = zVel;

    effect->scale2 = scale;
    effect->scale1 = 0.5f;

    effect->unk_4C = 2;
    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;

    Object_SetInfo(&effect->info, effect->obj.id);

    effect->unk_44 = 255;
    effect->unk_46 = 2;
}

void func_i4_80199BDC(f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 scale) {
    s32 i;

    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i4_80199B18(&gEffects[i], xPos, yPos, zPos, xVel, yVel, zVel, scale);
            break;
        }
    }
}

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
