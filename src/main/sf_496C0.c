#include "global.h"

#include "variables.h"

extern float D_800CA050[3];
extern float D_800CA05C[3];
extern float D_800CA068[3];
extern float D_800CA074[3];

extern void func_80187520(s32, void*);
extern void func_800ADF58(Player*);
extern UNK_TYPE func_8004D440(Object_8C*);
extern UNK_TYPE func_8004A888(Object_8C*);
extern UNK_TYPE func_8004D828(Player*);
extern UNK_TYPE func_8004DEF8(Player*);
extern UNK_TYPE func_801AB9B0(Player*);

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_80048AC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_80048CC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_80048E40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_80049630.s")

void func_8004990C(Player* player) {
    if (D_801784AC == 0) {
        D_80177CE8 += 60.0f;
    }
    player->unk_138 = player->pos.z + player->unk_08C;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
}

extern f32 D_800C9FD0[4];
extern f32 D_800C9FE0[4];
extern f32 D_800C9FF0[4];
extern f32 D_800CA000[4];
extern f32 D_800CA010[4];
extern f32 D_800CA020[4];
extern s32 D_800CA030[4];
extern s32 D_800CA040[4];

void func_80049968(Object_2F4* arg0, s32 arg1) {
    Object_2F4_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 0xC3;
    arg0->obj.pos.x = D_800C9FD0[arg1];
    arg0->obj.pos.y = D_800C9FE0[arg1];
    arg0->obj.pos.z = D_800C9FF0[arg1] + (((void) 0, gPlayer))->unk_138;
    arg0->unk_114 = D_800CA000[arg1];
    arg0->unk_118 = D_800CA010[arg1];
    arg0->unk_0B6 = D_800CA030[arg1];
    arg0->unk_0B8 = D_800CA040[arg1];
    arg0->obj.rot.z = D_800CA020[arg1];
    arg0->obj.rot.y = 180.0f;
    arg0->unk_0E8.z = gPlayer->vel.z;
    Object_SetInfo(&arg0->info, arg0->obj.id);
    arg0->unk_07C = 1;
    Audio_PlaySfx(0x3100000CU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_80049A9C(Object_8C* obj8c, f32 x, f32 y, f32 z) {
    Object_8C_Initialize(obj8c);
    obj8c->obj.status = 1;
    obj8c->obj.id = 0x15A;
    obj8c->timer_50 = 0x64;
    obj8c->scale2 = 0.2f;
    obj8c->obj.pos.x = x;
    obj8c->obj.pos.y = y;
    obj8c->obj.pos.z = z;
    obj8c->unk_54.z = 40.0f;
    obj8c->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&obj8c->info, obj8c->obj.id);
}

void func_80049B44(void) {
    s32 i;
    f32 x;
    f32 y;
    f32 z;

    for (i = 0; i < sizeof(gObjects8C) / sizeof(gObjects8C[0]); i++) {
        if (!gObjects8C[i].obj.status) {
            x = (Rand_ZeroOne() - 0.5f) * 400.0f;
            y = (Rand_ZeroOne() - 0.5f) * 400.0f;
            z = (-D_80177D20 - 500.0f) - Rand_ZeroOne() * 500.0f;
            func_80049A9C(&gObjects8C[i], x, y, z);
            break;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_80049C0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004A52C.s")

void func_8004A700(Object_2F4* obj2F4, s32 arg1) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = 0xC3;
    obj2F4->obj.pos.x = gPlayer->pos.x;
    obj2F4->obj.pos.y = gPlayer->pos.y - 1000.0f;
    obj2F4->obj.pos.z = gPlayer->pos.z;
    obj2F4->unk_114 = D_800CA050[arg1];
    obj2F4->unk_118 = D_800CA05C[arg1];
    obj2F4->unk_11C = D_800CA068[arg1];
    obj2F4->unk_120 = 4.0f;
    obj2F4->unk_130 = Rand_ZeroOne() * 100.0f;
    obj2F4->unk_134 = Rand_ZeroOne() * 100.0f;
    obj2F4->obj.rot.z = D_800CA074[arg1];
    obj2F4->unk_07C = 1;
    Object_SetInfo(&obj2F4->info, (u32) obj2F4->obj.id);
    Audio_PlaySfx(0x3100000CU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_8004A840(s32 arg0) {
    func_8004A700(&gObjects2F4[arg0], arg0);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004A888.s")

void func_8004AA84(void) {
    s32 i;

    if (!(gFrameCount & 7) && gLevelType == LEVEL_CORNERIA) {
        for (i = 0; i < sizeof(gObjects8C) / sizeof(gObjects8C[0]); i++) {
            if (!gObjects8C[i].obj.status) {
                func_8004A888(&gObjects8C[i]);
                break;
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004AAF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004B368.s")

void func_8004C90C(s32 arg0) {
    func_80187520(0x5A, arg0);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004C930.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004CCC0.s")

void func_8004D3C8(s32 arg0) {
}

void func_8004D3D4(Player* player, s32 arg1, Item* arg2) {
    u16 itemId;

    Item_Initialize(arg2);
    arg2->obj.status = 1;
    arg2->obj.pos.x = player->pos.x;
    arg2->obj.pos.y = player->pos.y;
    arg2->obj.pos.z = player->unk_138;
    itemId = arg1 & 0xFFFF;
    arg2->obj.id = itemId;
    Object_SetInfo(&arg2->info, itemId);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004D440.s")

void func_8004D738(Player* arg0) {
    arg0->pos.y += 30.0f;
    func_8007D0E0(arg0->pos.x, arg0->pos.y, arg0->unk_138, 6.0f);
    if (gCamCount == 1) {
        func_8007BFFC(arg0->pos.x, arg0->pos.y, arg0->unk_138, 0.0f, 0.0f, 0.0f, 3.0f, 0x50);
        func_8007C688(arg0->pos.x, arg0->pos.y, arg0->unk_138, 3.0f, 0x320);
    } else {
        func_8007BFFC(arg0->pos.x, arg0->pos.y, arg0->unk_138, 0.0f, 0.0f, 0.0f, 3.0f, 0xA);
    }
    func_8004D440(arg0);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004D828.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004DEF8.s")

void func_8004E3D8(Player* arg0) {
    arg0->unk_228 = 0;
    arg0->unk_280 = 0;

    if (gFrameCount & 1) {
        D_80137E84[gPlayerNum] = 1;
    }
    switch (arg0->form) {
        case FORM_ARWING:
            if (gLevelMode == 1) {
                func_8004D828(arg0);
            } else {
                func_8004DEF8(arg0);
                func_800ADF58(arg0);
            }
            func_800A8BA4(arg0);
            func_800AA800(arg0);
            return;
        case FORM_LANDMASTER:
            func_8004D738(arg0);
            return;
        case FORM_BLUE_MARINE:
            func_801AB9B0(arg0);
            return;
        case FORM_ON_FOOT:
            func_8004D738(arg0);
            return;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004E4D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004EBD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004F05C.s")

void func_8004F798(Object_2F4* arg0) {
    arg0->unk_07C = 2;

    switch (arg0->unk_0B8) {
        case 0:
            Math_SmoothStepToF(&arg0->obj.pos.x, arg0->unk_114, 0.05f, 50.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.pos.y, arg0->unk_118, 0.05f, 50.0f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.rot.z, 0.0f, 0.05f, 1.0f, 0.0f);
            arg0->obj.pos.z -= 2.0f;
            return;
        case 1:
            arg0->unk_188 = 10.0f;
            arg0->unk_0E8.z -= 100.0f;
            if ((arg0->obj.pos.z + D_80177D20) < -15000.0f) {
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
            return;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004F8AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004FCB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_8004FEC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/func_800515C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_496C0/D_800D5750.s")
