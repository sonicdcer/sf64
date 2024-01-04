#include "global.h"

void func_E16C50_80187520(s32 arg0, void* arg1) {

}

void func_E16C50_80187530(Object_2F4 *obj2F4, f32 xPos, f32 yPos, f32 zPos, f32 unk124y, f32 xRot, f32 yRot, s32 timer0BC, s32 unk0B4) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = OBJ_2F4_191;
    obj2F4->obj.pos.x = xPos;
    obj2F4->obj.pos.y = yPos;
    obj2F4->obj.pos.z = zPos;
    obj2F4->obj.rot.x = xRot;
    obj2F4->obj.rot.y = yRot;
    obj2F4->timer_0BC = timer0BC;
    obj2F4->timer_0BE = 20;
    obj2F4->unk_0B4 = unk0B4;
    obj2F4->unk_124.y = unk124y;
    Object_SetInfo(&obj2F4->info, obj2F4->obj.id);
    func_8007A6F0(&obj2F4->obj.pos, 0x2903201B);
}

extern s32 D_E16C50_801C227C; // may be part of larger struct

void func_E16C50_801875E4(f32 xPos, f32 yPos, f32 zPos, f32 unk124y, f32 xRot, f32 yRot, s32 timer0BC, s32 unk0B4) {
    s32 i;
    Object_2F4 *obj2F4;

    for(i = 0, obj2F4 = gObjects2F4; i < ARRAY_COUNT(gObjects2F4); i++, obj2F4++) {
        if (obj2F4->obj.status == 0) {
            func_E16C50_80187530(obj2F4, xPos, yPos, zPos, unk124y, xRot, yRot, timer0BC, unk0B4);
            D_E16C50_801C227C = i + 1;
            break;
        }
    }
}

void func_E16C50_8018767C(Object_8C *obj8C) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_395;
    obj8C->obj.pos.x = gObjects408->obj.pos.x;
    obj8C->obj.pos.y = gObjects408->obj.pos.y;
    obj8C->obj.pos.z = gObjects408->obj.pos.z + 250.0f;
    obj8C->unk_4E = 8;
    obj8C->scale2 = 1.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_E16C50_80187704(void) {
    s32 i;
    
    for(i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_E16C50_8018767C(&gObjects8C[i]);
            break;
        }
    }
}

typedef struct {
    char unk_00[0xA0];
} UnkStruct_1C2250;


typedef struct {
    f32 r[3];
    f32 g[3];
    f32 b[3];
    f32 unk_24;
    f32 unk_28[3];
    f32 unk_34;
} UnkStruct_1C22F0;

// extern s32 D_E16C50_801C2250[8]; // could be part of larger struct
extern UnkStruct_1C2250 D_E16C50_801C2250; // could be part of larger struct
extern UnkStruct_1C22F0 D_E16C50_801C22F0; // could be part of larger struct
extern f32 D_E16C50_801BECB0[4][3];

void func_E16C50_80187754(Object_408 *obj408) {
    Hitbox* hitbox;
    s32 i;
    s32* ptr;

    D_80178284 = 1;
    D_80161A44 = 25000.0f;
    D_801613A0 = 0;
    obj408->unk_60 = 780;
    obj408->unk_0E0 = obj408->unk_160 = 2.0f;
    obj408->unk_164 = 1.2f;  
    obj408->unk_0BA = 3;
    obj408->unk_0A6[0] = obj408->unk_0A6[1] = obj408->unk_0A6[2] = 40;
    obj408->unk_0AC[0] = obj408->unk_0AC[1] = obj408->unk_0AC[2] = 3;
    for (i = 0; i < 40; i++) {
        ((s32*)D_E16C50_801C2250.unk_00)[i] = 0;
    }
    D_E16C50_801C22F0.unk_24 = D_E16C50_801C22F0.unk_28[0] = D_E16C50_801C22F0.unk_28[2] = D_E16C50_801C22F0.unk_28[1] = 255.0f;
    D_E16C50_801C22F0.unk_34 = 0.0f;
    obj408->unk_0BE[0] = obj408->unk_0BE[1] = obj408->unk_0BE[2] = 0;
    obj408->unk_0B4 = 0x20;
    obj408->unk_0B6 = 0x20;
    obj408->unk_0B8 = 0xFF;
    obj408->unk_14C = 255.0f;
    
    obj408->unk_0E4 = -1700.0f;
    obj408->unk_0EC = 30.0f;
    obj408->unk_158 = 1.0f;
    obj408->timer_050 = 500;
    obj408->info.hitbox[8] =  obj408->info.hitbox[14] = obj408->info.hitbox[20]= 195.0f;
    obj408->info.hitbox[10] = obj408->info.hitbox[16] = obj408->info.hitbox[22]= 147.0f;
    obj408->info.hitbox[12] = obj408->info.hitbox[18] = obj408->info.hitbox[24]= 153.0f;
    func_800182F4(0x102800FF);
    func_800182F4(0x112800FF);
    Audio_PlaySfx(0x11002050U, &obj408->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_80187944(Object_408 *obj408);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_80187944.s")

void func_E16C50_8018A1B0(Object_408 *obj408, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018A1B0.s")

void func_E16C50_8018A2C4(Object_408 *obj408);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018A2C4.s")

void func_E16C50_8018A464(Object_408 *obj408, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018A464.s")

void func_E16C50_8018B9BC(Object_408 *obj408);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018B9BC.s")

void func_E16C50_8018BCD4(Vec3f *arg0, f32 arg1, f32 arg2, Vec3f *arg3, s32 arg4, f32 arg5, s32 arg6, f32 arg7);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018BCD4.s")

void func_E16C50_8018C0D0(f32 *arg0, f32 arg1, Vec3f *arg2, f32 arg3, s32 arg4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018C0D0.s")

void func_E16C50_8018C54C(Object_408 *obj408);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018C54C.s")

void func_E16C50_8018D3CC(s32 arg0, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 xRot, f32 yRot, f32 zRot);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018D3CC.s")

void func_E16C50_8018D4E0(Object_2F4 *obj2F4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018D4E0.s")

void func_E16C50_8018D5C8(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018D5C8.s")

void func_E16C50_8018D694(Object_2F4 *obj2F4, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018D694.s")

void func_E16C50_8018D804(Object_2F4 *obj2F4, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018D804.s")

void func_E16C50_8018D920(Vec3f *arg0);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018D920.s")

void func_E16C50_8018DA58(Object_2F4 *obj2F4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018DA58.s")

void func_E16C50_8018DF74(Player *player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018DF74.s")

void func_E16C50_8018EA88(Object_2F4 *obj2F4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018EA88.s")

void func_E16C50_8018EB3C(Object_2F4 *obj2F4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018EB3C.s")

void func_E16C50_8018EC38(Object_2F4 *obj2F4, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018EC38.s")

void func_E16C50_8018ED78(Player *player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/func_E16C50_8018ED78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C50/D_E16C50_801C0900.s")
