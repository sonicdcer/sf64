typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectInfo info;
    /* 0x040 */ s32 index;
    /* 0x044 */ char pad44[0xA];                    /* maybe part of index[3]? */
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ s16 timer_050;
    /* 0x052 */ s16 timer_052;
    /* 0x054 */ s16 timer_054;
    /* 0x056 */ s16 timer_056;
    /* 0x058 */ s16 timer_058;
    /* 0x05A */ s16 timer_05A;
    /* 0x05C */ s16 timer_05C;
    /* 0x05E */ u8 unk_05E;
    /* 0x05F */ char pad5F[1];
    /* 0x060 */ s16 unk_060;
    /* 0x062 */ s8 unk_062;
    /* 0x063 */ char pad63[1];
    /* 0x064 */ s16 unk_064;
    /* 0x066 */ s16 unk_066;
    /* 0x068 */ f32 unk_068;
    /* 0x06C */ Vec3f vel;
    /* 0x078 */ char pad78[0xC];
    /* 0x084 */ f32 gravity;
    /* 0x088 */ s16 unk_088;
    /* 0x08A */ s16 unk_08A;
    /* 0x08C */ char pad8C[6];                      /* maybe part of unk_08A[4]? */
    /* 0x092 */ u16 unk_092;
    /* 0x094 */ char pad94[0x12];                   /* maybe part of unk_092[0xA]? */
    /* 0x0A6 */ s16 unk_0A6;
    /* 0x0A8 */ char padA8[6];                      /* maybe part of unk_0A6[4]? */
    /* 0x0AE */ s16 unk_0AE;
    /* 0x0B0 */ char padB0[0xA];                    /* maybe part of unk_0AE[6]? */
    /* 0x0BA */ s16 unkBA;                          /* inferred */
    /* 0x0BC */ char padBC[0xA];                    /* maybe part of unkBA[6]? */
    /* 0x0C6 */ u16 unk_0C6;
    /* 0x0C8 */ char padC8[8];                      /* maybe part of unk_0C6[5]? */
    /* 0x0D0 */ s16 unk_0D0;
    /* 0x0D2 */ char padD2[4];                      /* maybe part of unk_0D0[3]? */
    /* 0x0D6 */ s16 unk_0D6;
    /* 0x0D8 */ char padD8[4];                      /* maybe part of unk_0D6[3]? */
    /* 0x0DC */ f32 unk_0DC;
    /* 0x0E0 */ f32 unk_0E0;
    /* 0x0E4 */ f32 unk_0E4;
    /* 0x0E8 */ f32 unk_0E8;
    /* 0x0EC */ f32 unk_0EC;
    /* 0x0F0 */ f32 unk_0F0;
    /* 0x0F4 */ f32 unk_0F4;
    /* 0x0F8 */ f32 unk_0F8;
    /* 0x0FC */ f32 unk_0FC;
    /* 0x100 */ Vec3f unk_100;
    /* 0x10C */ char pad10C[4];
    /* 0x110 */ f32 unk_110;
    /* 0x114 */ f32 unk_114;
    /* 0x118 */ char pad118[0x7C];                  /* maybe part of unk_114[0x20]? */
    /* 0x194 */ f32 unk_194;
    /* 0x198 */ f32 unk_198;
    /* 0x19C */ f32 unk_19C;
    /* 0x1A0 */ char pad1A0[0x168];                 /* maybe part of unk_19C[0x5B]? */
    /* 0x308 */ Vec3f unk_308;
    /* 0x314 */ char pad314[0xE4];                  /* maybe part of unk_308[0x14]? */
    /* 0x3F8 */ f32 unk_3F8;
    /* 0x3FC */ Vec3f sfxPos;
} Object_408;                                       /* size = 0x408 */

extern ? D_600F1F0;
extern ? D_6011910;
extern ? D_6015EE0;
extern AnimationHeader D_6018994;
extern Limb *D_6018BA0;
extern ? D_601B2B0;
extern ? D_801778F4;
extern s32 D_80177C3C;
extern f32 D_E16C50_801BED74;
extern f32 D_E16C50_801BEE04;
extern f32 D_E16C50_801BEEF4;
extern f32 D_E16C50_801BEF84;
extern f32 D_E16C50_801BF074;
extern f32 D_E16C50_801BF104;
extern ? D_E16C50_801BF194;
f32 D_E16C50_801BECB0[4][3] = {
    { 255.0f, 0.0f, 0.0f },
    { 255.0f, 63.0f, 63.0f },
    { 255.0f, 127.0f, 127.0f },
    { 255.0f, 255.0f, 255.0f },
};
Vec3f D_E16C50_801BECE0 = { 497.0f, 287.0f, 169.0f };
Vec3f D_E16C50_801BECEC = { -497.0f, 287.0f, 169.0f };
Vec3f D_E16C50_801BECF8 = { -6.0f, -528.0f, 169.0f };
Vec3f D_E16C50_801BED04 = { 0.0f, 0.0f, 169.0f };
Vec3f D_E16C50_801BED10 = { 238.0f, 235.0f, 169.0f };
Vec3f D_E16C50_801BED1C = { 238.0f, -235.0f, 169.0f };
Vec3f D_E16C50_801BED28 = { -238.0f, 235.0f, 169.0f };
Vec3f D_E16C50_801BED34[5] = {
    { -238.0f, -235.0f, 169.0f },
    { 0.0f, -300.0f, 300.0f },
    { 500.0f, -300.0f, 300.0f },
    { 270.0f, 45.0f, 135.0f },
    { 0.0f, 135.0f, 235.0f },
};
Vec3f D_E16C50_801BED70[0xC] = {
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
};
Vec3f D_E16C50_801BEE00[0xC] = {
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
};
f32 D_E16C50_801BEE90[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BEEC0[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BEEF0[0xC] = {
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
};
Vec3f D_E16C50_801BEF80[0xC] = {
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
};
f32 D_E16C50_801BF010[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF040[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF070[0xC] = {
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
};
Vec3f D_E16C50_801BF100[0xC] = {
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f },
};
f32 D_E16C50_801BF190[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF1C0[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF1F0[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF220[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF250[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF280[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF2B0[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF2E0[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
s32 D_E16C50_801BF310[3] = { 0xFF, 0xFF, 0x20 };
s32 D_E16C50_801BF31C[3] = { 0x20, 0xFF, 0x20 };
s32 D_E16C50_801BF328[3] = { 0x20, 0x22, 0xFF };
f32 D_E16C50_801BF334[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF364[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF394[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF3C4[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF3F4[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF424[0xC] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
Color_RGBAF32 D_E16C50_801BF454[4] = {
    { 255.0f, 0.0f, 0.0f, 0.0f },
    { 255.0f, 255.0f, 0.0f, 0.0f },
    { 0.0f, 255.0f, 255.0f, 0.0f },
    { 144.0f, 255.0f, 144.0f, 0.0f },
};
f32 D_E16C50_801BF494[0xC] = {
    -90.0f,
    30.0f,
    26.0f,
    22.0f,
    18.0f,
    11.0f,
    8.0f,
    5.0f,
    3.0f,
    2.0f,
    1.0f,
    0.0f,
};
Vec3f D_E16C50_801BF4C4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF4D0 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF4DC[5] = {
    { -150.0f, 0.0f, 200.0f },
    { 0.0f, 50.0f, 0.0f },
    { 150.0f, -50.0f, 100.0f },
    { -350.0f, 100.0f, 300.0f },
    { 100.0f, -300.0f, 100.0f },
};
Vec3f D_E16C50_801BF518[3] = {
    { -200.0f, 0.0f, -500.0f },
    { 200.0f, 30.0f, -600.0f },
    { 50.0f, -90.0f, -700.0f },
};
Vec3f D_E16C50_801BF53C[3] = {
    { -150.0f, 40.0f, 75.0f },
    { 150.0f, 40.0f, 150.0f },
    { 38.0f, 88.0f, 225.0f },
};

void func_E16C50_80187530(Object_2F4 *obj2F4, f32 xPos, f32 yPos, f32 zPos, f32 unk124y, f32 xRot, f32 yRot, s32 timer0BC, s32 unk0B4) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = 0xBF;
    obj2F4->obj.pos.x = xPos;
    obj2F4->obj.pos.y = yPos;
    obj2F4->obj.pos.z = zPos;
    obj2F4->obj.rot.x = xRot;
    obj2F4->obj.rot.y = yRot;
    obj2F4->timer_0BE = 0x14;
    obj2F4->timer_0BC = (u16) timer0BC;
    obj2F4->unk_0B4 = (s16) unk0B4;
    obj2F4->unk_124.y = unk124y;
    Object_SetInfo(&obj2F4->info, 0xBFU & 0xFFFF);
    func_8007A6F0(&obj2F4->obj.pos, 0x2903201B);
}

void func_E16C50_801875E4(f32 xPos, f32 yPos, f32 zPos, f32 unk124y, f32 xRot, f32 yRot, s32 timer0BC, s32 unk0B4) {
    s32 sp34;
    Object_2F4 *var_a0;
    s32 var_v0;

    var_a0 = gObjects2F4;
    var_v0 = 0;
loop_1:
    if (var_a0->obj.status == 0) {
        sp34 = var_v0;
        func_E16C50_80187530(var_a0, xPos, yPos, zPos, unk124y, xRot, yRot, timer0BC, unk0B4);
        D_E16C50_801C2250.unk_00[0xB] = var_v0 + 1;
        return;
    }
    var_v0 += 1;
    var_a0 += 0x2F4;
    if (var_v0 == 0x3C) {
        return;
    }
    goto loop_1;
}

void func_E16C50_8018767C(Object_8C *obj8C) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = 0x18B;
    obj8C->obj.pos.x = gObjects408->obj.pos.x;
    obj8C->obj.pos.y = gObjects408->obj.pos.y;
    obj8C->unk_4E = 8;
    obj8C->scale2 = 1.0f;
    obj8C->obj.pos.z = gObjects408->obj.pos.z + 250.0f;
    Object_SetInfo(&obj8C->info, 0x18BU & 0xFFFF);
}

void func_E16C50_80187704(void) {
    Object_8C *var_a0;

    var_a0 = gObjects8C;
loop_1:
    if (var_a0->obj.status == 0) {
        func_E16C50_8018767C(var_a0);
        return;
    }
    var_a0 += 0x8C;
    if (var_a0 == gItems) {
        return;
    }
    goto loop_1;
}

void func_E16C50_80187754(Object_408_302 *boss302) {
    UnkStruct_1C2250 *var_v0;
    f32 *temp_a1;
    f32 *temp_a1_2;
    f32 *temp_a1_3;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;

    D_80178284 = 1;
    D_80161A44 = 25000.0f;
    D_801613A0 = 0;
    boss302->unk_060 = 0x30C;
    boss302->unk_0E0 = 2.0f;
    boss302->unk_160 = 2.0f;
    boss302->unk_0A6[2] = 0x28;
    temp_v1 = boss302->unk_0A6[2];
    boss302->unk_0AC[2] = 3;
    boss302->unk_0A6[1] = temp_v1;
    boss302->unk_0A6[0] = temp_v1;
    temp_v1_2 = boss302->unk_0AC[2];
    boss302->unk_0BA = 3;
    var_v0 = &D_E16C50_801C2250;
    boss302->unk_0AC[1] = temp_v1_2;
    boss302->unk_0AC[0] = temp_v1_2;
    boss302->unk_164 = 1.2f;
    do {
        var_v0 += 0x10;
        var_v0->unk-C = 0;
        var_v0->unk-8 = 0;
        var_v0->unk-4 = 0;
        var_v0->unk-10 = 0;
    } while (var_v0 != &D_E16C50_801C22F0);
    D_E16C50_801C22F0.unk_28[1] = 255.0f;
    D_E16C50_801C22F0.unk_28[2] = D_E16C50_801C22F0.unk_28[1];
    D_E16C50_801C22F0.unk_28[0] = D_E16C50_801C22F0.unk_28[1];
    D_E16C50_801C22F0.unk_24 = D_E16C50_801C22F0.unk_28[1];
    D_E16C50_801C22F0.unk_34 = 0.0f;
    boss302->unk_0BE[2] = 0;
    temp_v1_3 = boss302->unk_0BE[2];
    boss302->unk_0B4 = 0x20;
    boss302->unk_0B6 = 0x20;
    boss302->unk_0B8 = 0xFF;
    boss302->unk_14C = 255.0f;
    boss302->unk_0BE[1] = temp_v1_3;
    boss302->unk_0BE[0] = temp_v1_3;
    boss302->timer_050 = 0x1F4;
    boss302->unk_0E4 = -1700.0f;
    boss302->unk_0EC = 30.0f;
    boss302->unk_158 = 1.0f;
    boss302->info.hitbox->unk50 = 195.0f;
    temp_a1 = boss302->info.hitbox;
    temp_fv0 = temp_a1->unk50;
    temp_a1->unk38 = temp_fv0;
    boss302->info.hitbox->unk20 = temp_fv0;
    boss302->info.hitbox->unk58 = 147.0f;
    temp_a1_2 = boss302->info.hitbox;
    temp_fv0_2 = temp_a1_2->unk58;
    temp_a1_2->unk40 = temp_fv0_2;
    boss302->info.hitbox->unk28 = temp_fv0_2;
    boss302->info.hitbox->unk60 = 153.0f;
    temp_a1_3 = boss302->info.hitbox;
    temp_fv0_3 = temp_a1_3->unk60;
    temp_a1_3->unk48 = temp_fv0_3;
    boss302->info.hitbox->unk30 = temp_fv0_3;
    func_800182F4(0x102800FF);
    func_800182F4(0x112800FF);
    Audio_PlaySfx(0x11002050U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_80187944(Object_408_302 *boss302) {
    s32 sp134;
    s32 sp128;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp104;
    Vec3f spF8;
    Vec3f spEC;
    Vec3f spE0;
    Vec3f spD4;
    Vec3f spC8;
    Vec3f spBC;
    Vec3f spB0;
    Vec3f spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    Vec3f sp8C;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    Vec3f *sp68;                                    /* compiler-managed */
    UnkStruct_1C2250 *sp64;                         /* compiler-managed */
    f32 *sp60;
    f32 *sp5C;
    f32 *sp58;
    f32 *sp54;
    Color_RGBAF32 *temp_v0_16;
    Object_2F4 *temp_v1;
    Object_408_302 *var_v1;
    Object_408_302 *var_v1_2;
    Object_408_302 *var_v1_3;
    Object_408_302 *var_v1_4;
    Object_8C *temp_s0_3;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    Vec3f *temp_a0_3;
    Vec3f *temp_a0_4;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    Vec3f *var_v0;
    Vec3f *var_v0_2;
    enum PlayerState1C8 temp_v1_2;
    f32 *temp_s0;
    f32 *temp_t4_2;
    f32 *temp_v0_5;
    f32 *var_s0_4;
    f32 temp_fa0;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft1_3;
    f32 temp_ft2;
    f32 temp_ft3;
    f32 temp_ft4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 var_fa1;
    f32 var_ft0;
    f32 var_ft4;
    f32 var_fv1;
    f32 var_fv1_2;
    f32 var_fv1_3;
    f32 var_fv1_4;
    s16 temp_a0_5;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_14;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_6;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s32 temp_s0_2;
    s32 temp_t1;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t6_2;
    s32 temp_t7_2;
    s32 temp_v0_15;
    s32 temp_v0_17;
    s32 temp_v0_7;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    u16 temp_t7;
    void *temp_t6;

    D_801613A0 += 1;
    temp_v0 = boss302->unk_04E;
    if ((temp_v0 < 6) || ((temp_v0 >= 8) && (temp_v0 < 0xC))) {
        boss302->obj.rot.y = (Math_Atan2F(gPlayer->camEye.x - boss302->obj.pos.x, gPlayer->camEye.z - (boss302->obj.pos.z + D_80177D20)) * 180.0f) / 3.1415927f;
        temp_fv1 = gPlayer->camEye.x - boss302->obj.pos.x;
        temp_ft4 = gPlayer->camEye.z - (boss302->obj.pos.z + D_80177D20);
        boss302->obj.rot.x = (-Math_Atan2F(gPlayer->camEye.y - boss302->obj.pos.y, sqrtf((temp_fv1 * temp_fv1) + (temp_ft4 * temp_ft4))) * 180.0f) / 3.1415927f;
    }
    Matrix_RotateY(gCalcMatrix, boss302->obj.rot.y * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, boss302->obj.rot.x * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, boss302->obj.rot.z * 0.017453292f, 1U);
    if ((boss302->unk_062 != 0) && (boss302->unk_060 > 0)) {
        boss302->unk_062 = 0;
        if (boss302->unk_0D8 > 5.0f) {
            if ((boss302->unk_066 == 0) && (boss302->unk_0BA == 0) && (boss302->unk_14C < 30.0f)) {
                boss302->unk_060 -= boss302->unk_064;
                boss302->timer_05C = 0xF;
                temp_a1 = &boss302->sfxPos;
                if (boss302->unk_060 < 0x186) {
                    temp_a1_2 = &boss302->sfxPos;
                    sp68 = temp_a1_2;
                    Audio_PlaySfx(0x2943500FU, temp_a1_2, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    sp68 = temp_a1;
                    Audio_PlaySfx(0x29034003U, temp_a1, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (boss302->unk_060 <= 0) {
                    boss302->unk_060 = 0;
                    func_80042EC0((Object_408 *) boss302);
                    func_800BA808(gMsg_ID_15252, 0x14);
                    D_8017796C = -1;
                    D_8015F984 = (D_80177D20 * 0.00004f) + 0.5f;
                    Audio_PlaySfx(0x2940D09AU, sp68, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_80161734 = 0;
                    func_800182F4(0x102800FF);
                    func_800182F4(0x112800FF);
                    boss302->unk_0EC = 5.0f;
                    boss302->unk_0E4 = -20000.0f;
                    boss302->unk_0DC = 170.0f;
                    boss302->vel.z = -20.0f;
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BECE0, &spA4);
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BECEC, &spB0);
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BECF8, &spBC);
                    var_v0 = &spA4;
                    do {
                        sp64 = (UnkStruct_1C2250 *) var_v0;
                        func_8007D0E0(var_v0->x + boss302->obj.pos.x, var_v0->y + boss302->obj.pos.y, var_v0->z + boss302->obj.pos.z, 10.0f);
                        var_v0 += 0xC;
                    } while (var_v0 != &spC8);
                    boss302->unk_0CA[2] = 0;
                    temp_v0_2 = boss302->unk_0CA[2];
                    boss302->timer_052 = 0xAA;
                    boss302->unk_0CA[1] = temp_v0_2;
                    boss302->unk_0CA[0] = temp_v0_2;
                    D_E16C50_801C2250.unk_00[2] = (s32) temp_v0_2;
                    D_E16C50_801C2250.unk_00[3] = (s32) temp_v0_2;
                    D_E16C50_801C2250.unk_00[4] = (s32) temp_v0_2;
                    D_Timer_80161A60 = 4;
                    boss302->unk_04E = 0xB;
                    Audio_PlaySfx(0x2940C00AU, sp68, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    Audio_PlaySfx(0x3143402EU, sp68, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            temp_v0_3 = boss302->unk_066;
            if (((temp_v0_3 == 4) || (temp_v0_3 == 5) || (temp_v0_3 == 6)) && (boss302->unk_0BA != 0)) {
                func_E16C50_8018B9BC(boss302);
            }
        }
        temp_v0_4 = boss302->unk_066;
        if ((temp_v0_4 == 1) || (temp_v0_4 == 2) || (temp_v0_4 == 3)) {
            func_E16C50_8018A2C4(boss302);
        }
        if (boss302->unk_066 >= 7) {
            Audio_PlaySfx(0x29121007U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    sp68 = &D_E16C50_801C22F0;
    sp5C = D_E16C50_801C22F0.g;
    sp58 = D_E16C50_801C22F0.b;
    var_v1 = boss302;
    do {
        var_s0 = ((s16) var_v1->unk_0A6[0] / 10) - 1;
        if (var_s0 < 0) {
            var_s0 = 0;
        }
        temp_v0_5 = D_E16C50_801BECB0[var_s0];
        sp60 = temp_v0_5;
        sp64 = var_v1;
        Math_SmoothStepToF(sp68->r, *temp_v0_5, 1.0f, 10.0f, 0.0f);
        Math_SmoothStepToF(sp5C, sp60->unk4, 1.0f, 10.0f, 0.0f);
        Math_SmoothStepToF(sp58, sp60->unk8, 1.0f, 10.0f, 0.0f);
        temp_s0 = sp58 + 4;
        sp5C += 4;
        sp68 = &sp68->r[1];
        sp58 = temp_s0;
        var_v1 = (Object_408_302 *) &var_v1->obj.id;
    } while ((u32) temp_s0 < (u32) &D_E16C50_801C22F0.unk_24);
    if ((boss302->unk_0A6[0] == 0) && (boss302->unk_0A6[1] == 0) && (boss302->unk_0A6[2] == 0) && (boss302->unk_0D8 != 0.0f) && !(gFrameCount & 1)) {
        func_8007C120(boss302->obj.pos.x, boss302->obj.pos.y, boss302->obj.pos.z + 200.0f, boss302->vel.x, boss302->vel.y, boss302->vel.z, 0.3f, 1);
    }
    var_fv1 = 0.5f;
    if (gObjects408->unkBA == 1) {
        var_fv1 = 2.0f;
    }
    if (D_E16C50_801C2250.unk_00[0xA] != 0) {
        temp_ft1 = D_E16C50_801C22F0.unk_34 + var_fv1;
        D_E16C50_801C22F0.unk_34 = temp_ft1;
        if (temp_ft1 > 360.0f) {
            var_ft0 = temp_ft1 - 360.0f;
            goto block_45;
        }
    } else {
        temp_ft1_2 = D_E16C50_801C22F0.unk_34 - var_fv1;
        D_E16C50_801C22F0.unk_34 = temp_ft1_2;
        if (temp_ft1_2 < 0.0f) {
            var_ft0 = temp_ft1_2 + 360.0f;
block_45:
            D_E16C50_801C22F0.unk_34 = var_ft0;
        }
    }
    temp_v0_6 = boss302->unk_04E;
    if ((temp_v0_6 >= 3) && (temp_v0_6 < 5) && (boss302->unk_148 == 0.0f)) {
        Math_SmoothStepToAngle(&boss302->unk_0FC, boss302->unk_158, 0.05f, 0.02f, 0.00001f);
        Math_SmoothStepToAngle(&boss302->obj.rot.z, boss302->unk_0F8, 0.05f, boss302->unk_0FC, 0.00001f);
        if (boss302->unk_0BA >= 2) {
            if (!(gFrameCount & 0x3F) && (Rand_ZeroOne() < 0.5f)) {
                boss302->unk_0F0 = gPlayer->camEye.x + ((Rand_ZeroOne() - 0.5f) * 500.0f);
            }
            if (!(gFrameCount & 0x3F) && (Rand_ZeroOne() < 0.5f)) {
                boss302->unk_0F4 = gPlayer->camEye.y + ((Rand_ZeroOne() - 0.5f) * 500.0f);
            }
        } else {
            if (!(gFrameCount & 0x1F) && (Rand_ZeroOne() < 0.7f)) {
                temp_ft3 = (Rand_ZeroOne() - 0.5f) * 1000.0f;
                boss302->unk_150 = 0.0f;
                boss302->unk_0F0 = gPlayer->camEye.x + temp_ft3;
            }
            if (!(gFrameCount & 0x1F) && (Rand_ZeroOne() < 0.7f)) {
                temp_ft0 = (Rand_ZeroOne() - 0.5f) * 1000.0f;
                boss302->unk_154 = 0.0f;
                boss302->unk_0F4 = gPlayer->camEye.y + temp_ft0;
            }
        }
    }
    if (boss302->unk_04E != 0) {
        Math_SmoothStepToF(&boss302->unk_0E8, boss302->unk_0EC, 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&boss302->obj.pos.z, boss302->unk_0E4 + (gPlayer->camEye.z - D_80177D20), 0.1f, boss302->unk_0E8, 0.00001f);
        if (boss302->unk_04E < 5) {
            var_fv1_2 = 2.0f;
            if (boss302->unk_0BA == 1) {
                var_fv1_2 = 50.0f;
            }
            sp120 = var_fv1_2;
            Math_SmoothStepToF(&boss302->unk_150, var_fv1_2, 0.1f, 1.0f, 0.00001f);
            Math_SmoothStepToF(&boss302->unk_154, var_fv1_2, 0.1f, 1.0f, 0.00001f);
            Math_SmoothStepToF(&boss302->obj.pos.x, boss302->unk_0F0, 0.2f, boss302->unk_150, 0.00001f);
            Math_SmoothStepToF(&boss302->obj.pos.y, boss302->unk_0F4, 0.2f, boss302->unk_154, 0.00001f);
        }
        Math_SmoothStepToAngle(&boss302->unk_0D8, boss302->unk_0DC, 0.2f, boss302->unk_0E0, 0.00001f);
    }
    Math_SmoothStepToF(boss302->unk_100, boss302->unk_10C[0], 0.1f, boss302->unk_118[0], 0.0001f);
    Math_SmoothStepToF(&boss302->unk_100[1], boss302->unk_10C[1], 0.1f, boss302->unk_118[1], 0.0001f);
    Math_SmoothStepToF(&boss302->unk_100[2], boss302->unk_10C[2], 0.1f, boss302->unk_118[2], 0.0001f);
    Math_SmoothStepToF(boss302->unk_124, boss302->unk_130[0], 0.1f, 10.0f, 0.00001f);
    Math_SmoothStepToF(&boss302->unk_124[1], boss302->unk_130[1], 0.1f, 10.0f, 0.00001f);
    Math_SmoothStepToF(&boss302->unk_124[2], boss302->unk_130[2], 0.1f, 10.0f, 0.00001f);
    if (boss302->unk_04E >= 0xB) {
        boss302->obj.rot.z += boss302->unk_148;
        boss302->obj.rot.z = Math_ModF(boss302->obj.rot.z, 360.0f);
        Math_SmoothStepToF(&boss302->unk_148, 5.0f, 0.1f, 0.2f, 0.0001f);
        sp134 = 0;
        do {
            sp6C = Rand_ZeroOne();
            sp70 = Rand_ZeroOne();
            sp74 = Rand_ZeroOne();
            func_80079618(((sp6C - 0.5f) * 500.0f) + boss302->obj.pos.x, ((sp70 - 0.5f) * 500.0f) + boss302->obj.pos.y, ((sp74 - 0.5f) * 100.0f) + boss302->obj.pos.z, (Rand_ZeroOne() * 4.0f) + 1.0f);
            temp_s0_2 = sp134 + 1;
            sp134 = temp_s0_2;
        } while (temp_s0_2 < 0xA);
        if (boss302->timer_05C == 0) {
            boss302->timer_05C = 0xF;
        }
        temp_v0_7 = gFrameCount;
        if (!(temp_v0_7 & 1)) {
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED04, &spC8);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED10, &spD4);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED1C, &spE0);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED28, &spEC);
            Matrix_MultVec3f(gCalcMatrix, D_E16C50_801BED34, &spF8);
            var_v0_2 = &spC8;
            do {
                sp64 = var_v0_2;
                var_s0_2 = (s32) ((Rand_ZeroOne() - 0.5f) * 300.0f);
                if (var_v0_2 == &spC8) {
                    sp64 = var_v0_2;
                    var_s0_2 = (s32) ((Rand_ZeroOne() - 0.5f) * 100.0f);
                }
                temp_fv0 = (f32) var_s0_2;
                sp64 = var_v0_2;
                func_8007D0E0(var_v0_2->x + (boss302->obj.pos.x + temp_fv0), var_v0_2->y + (boss302->obj.pos.y + temp_fv0), var_v0_2->z + boss302->obj.pos.z, 10.0f);
                var_v0_2 += 0xC;
            } while (var_v0_2 != &sp104);
        }
        if (!(temp_v0_7 & 0x1F)) {
            func_8007C120(boss302->obj.pos.x, boss302->obj.pos.y, boss302->obj.pos.z + 300.0f, boss302->vel.x, boss302->vel.y, boss302->vel.z, 0.5f, 0x46);
        }
    }
    if (!(gFrameCount & 0xF)) {
        var_v1_2 = boss302;
        var_v0_3 = 0;
        var_fv1_3 = fabsf(boss302->unk_0E4 / -1700.0f);
        if (var_fv1_3 < 1.0f) {
            var_fv1_3 = 1.0f;
        }
        if (var_fv1_3 > 3.0f) {
            var_fv1_3 = 3.0f;
        }
        sp114 = var_fv1_3;
        do {
            var_fv1_4 = sp114;
            if (var_v1_2->unk_0AC[0] != 0) {
                var_fv1_4 = 1.0f;
            }
            var_v1_2 += 2;
            (boss302->info.hitbox + var_v0_3)->unk20 = (f32) (195.0f * var_fv1_4);
            (boss302->info.hitbox + var_v0_3)->unk28 = (f32) (147.0f * var_fv1_4);
            temp_t6 = boss302->info.hitbox + var_v0_3;
            var_v0_3 += 0x18;
            temp_t6->unk30 = (f32) (153.0f * var_fv1_4);
        } while (var_v0_3 != 0x48);
    }
    temp_t7 = (u16) boss302->unk_04E;
    switch (temp_t7) {
    case 0:
        boss302->info.hitbox->unk0 = 0.0f;
        temp_fv0_2 = boss302->obj.pos.x;
        var_ft4 = 10.0f;
        sp11C = gPlayer->pos.x - temp_fv0_2;
        temp_fa0 = boss302->obj.pos.y;
        sp118 = gPlayer->pos.y - temp_fa0;
        temp_v0_8 = boss302->timer_050;
        temp_fv1_2 = boss302->obj.pos.z;
        var_fa1 = (gPlayer->pos.z - 700.0f) - temp_fv1_2;
        if ((temp_v0_8 != 0) && (temp_v0_8 < 0xC8)) {
            var_ft4 = 100.0f;
            sp11C = gPlayer->camEye.x - temp_fv0_2;
            sp118 = gPlayer->camEye.y - temp_fa0;
            var_fa1 = (boss302->unk_0E4 + (gPlayer->camEye.z - D_80177D20)) - temp_fv1_2;
        }
        sp114 = var_fa1;
        sp104 = var_ft4;
        sp10C = Math_RadToDeg(Math_Atan2F(sp11C, var_fa1));
        sp110 = Math_RadToDeg(-Math_Atan2F(sp118, sqrtf((sp11C * sp11C) + (sp114 * sp114))));
        Math_SmoothStepToAngle(&boss302->unk_07C, sp10C, 1.0f, sp104, 0.00001f);
        Math_SmoothStepToAngle(&boss302->unk_078, sp110, 1.0f, sp104, 0.00001f);
        Matrix_RotateY(gCalcMatrix, boss302->unk_07C * 0.017453292f, 0U);
        Matrix_RotateX(gCalcMatrix, boss302->unk_078 * 0.017453292f, 1U);
        sp9C = 0.0f;
        sp98 = 0.0f;
        spA0 = 30.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp98, &sp8C);
        boss302->vel.x = (bitwise f32) sp8C;
        boss302->vel.y = sp8C.y;
        sp98 = 0.0f;
        sp9C = 0.0f;
        spA0 = 60.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp98, &sp8C);
        boss302->vel.z = sp8C.z;
        boss302->unk_15C += 30.0f;
        if (boss302->timer_050 == 0) {
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_24, 0.0f, 0.1f, 1.0f, 0.0f);
            temp_a0 = &boss302->sfxPos;
            if (D_E16C50_801C22F0.unk_24 < 1.0f) {
                sp68 = temp_a0;
                D_E16C50_801C22F0.unk_24 = 0.0f;
                Audio_KillSfx(temp_a0);
                Audio_PlaySfx(0x19004051U, sp68, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss302->timer_050 = 0x14;
                boss302->obj.pos.z = boss302->unk_0E4 + (gPlayer->camEye.z - D_80177D20);
                temp_fv0_3 = gPlayer->camEye.x;
                boss302->obj.pos.x = temp_fv0_3;
                boss302->unk_0F0 = temp_fv0_3;
                temp_fv0_4 = gPlayer->camEye.y;
                boss302->unk_04E = 2;
                boss302->vel.x = 0.0f;
                boss302->vel.y = 0.0f;
                boss302->vel.z = -40.0f;
                boss302->obj.pos.y = temp_fv0_4;
                boss302->unk_0F4 = temp_fv0_4;
                Audio_PlaySfx(0x39408092U, sp68, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        break;
    case 1:
        Math_SmoothStepToF(D_801779A8, 10.0f, 1.0f, 5.0f, 0.0f);
        boss302->info.hitbox->unk0 = 0.0f;
        Math_SmoothStepToAngle(&boss302->obj.rot.z, 0.0f, 1.0f, 10.0f, 0.0001f);
        if (boss302->obj.rot.z < 1.0f) {
            if (D_E16C50_801C2250.unk_00[0x1B] == 0) {
                Audio_PlaySfx(0x39408091U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_E16C50_801C2250.unk_00[0x1B] = 1;
            }
            boss302->obj.rot.z = 0.0f;
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_24, 0.0f, 0.1f, 5.0f, 0.0f);
            Math_SmoothStepToF(&boss302->unk_160, 2.0f, 0.1f, 0.1f, 0.0f);
            Math_SmoothStepToF(&boss302->unk_164, 1.2f, 0.1f, 0.1f, 0.0f);
            if (D_E16C50_801C22F0.unk_24 < 1.0f) {
                sp68 = &boss302->sfxPos;
                boss302->unk_0F0 = gPlayer->camEye.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f);
                boss302->unk_0F4 = gPlayer->camEye.y + ((Rand_ZeroOne() - 0.5f) * 1000.0f);
                temp_ft1_3 = (Rand_ZeroOne() - 0.5f) * 3000.0f;
                boss302->unk_160 = 2.0f;
                boss302->unk_0E4 = temp_ft1_3 + -3700.0f;
                boss302->unk_164 = 1.2f;
                if ((boss302->unk_0D2 == 0) && (boss302->unk_0CA[0] == 0) && (boss302->unk_0CA[1] == 0) && (boss302->unk_0CA[2] == 0) && (boss302->unk_0BE[0] == 0) && (boss302->unk_0BE[1] == 0) && (boss302->unk_0BE[2] == 0)) {
                    boss302->unk_0D2 = 1;
                }
                if (boss302->unk_0D2 != 0) {
                    boss302->unk_0AC[2] = 3;
                    temp_v0_9 = boss302->unk_0AC[2];
                    boss302->unk_0AC[1] = temp_v0_9;
                    boss302->unk_0AC[0] = temp_v0_9;
                    boss302->unk_0E4 = -1700.0f;
                    if ((boss302->unk_0BA != 1) && (D_E16C50_801C2250.unk_00[0] != 2)) {
                        boss302->unk_0E4 = ((Rand_ZeroOne() - 0.5f) * 1000.0f) + -3700.0f;
                    }
                    boss302->obj.pos.z = boss302->unk_0E4 + (gPlayer->camEye.z - D_80177D20);
                    temp_fv0_5 = gPlayer->camEye.x;
                    boss302->obj.pos.x = temp_fv0_5;
                    boss302->unk_0F0 = temp_fv0_5;
                    temp_fv0_6 = gPlayer->camEye.y;
                    boss302->obj.pos.y = temp_fv0_6;
                    boss302->unk_0F4 = temp_fv0_6;
                }
                D_E16C50_801C22F0.unk_24 = 0.0f;
                boss302->timer_050 = 0x32;
                boss302->unk_04E = 2;
                D_E16C50_801C2250.unk_00[8] = 0;
                Audio_PlaySfx(0x39408092U, sp68, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        break;
    case 2:
        Math_SmoothStepToF(D_801779A8, 10.0f, 1.0f, 5.0f, 0.0f);
        if (boss302->timer_050 == 0xA) {
            D_80178354 = 0xFF;
            D_80178350 = 0xFF;
            D_80178348 = 0xFF;
            D_80178358 = 0xFF;
            D_80178340 = 0xFF;
            D_80178358 = 0;
            D_8017835C = 0x19;
            D_80178480 = 0x32;
        }
        if (boss302->timer_050 == 0) {
            if (D_E16C50_801C2250.unk_00[8] == 0) {
                D_E16C50_801C2250.unk_00[8] = 1;
                D_80178340 = 0;
                D_80178354 = 0;
                D_80178350 = 0;
                D_80178348 = 0;
            }
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_24, 255.0f, 0.1f, 10.0f, 0.0f);
            Math_SmoothStepToF(&boss302->unk_160, 1.0f, 0.1f, 0.1f, 0.0f);
            Math_SmoothStepToF(&boss302->unk_164, 1.0f, 0.1f, 0.1f, 0.0f);
            if (D_E16C50_801C22F0.unk_24 > 254.0f) {
                D_E16C50_801C22F0.unk_24 = 255.0f;
                boss302->info.hitbox->unk0 = 10.0f;
                temp_v0_10 = boss302->unk_0D4;
                boss302->unk_160 = 1.0f;
                boss302->unk_164 = 1.0f;
                switch (temp_v0_10) {               /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    boss302->timer_050 = 0x64;
                    break;
                case 1:                             /* switch 1 */
                    boss302->timer_050 = 0x577;
                    break;
                }
                boss302->unk_0D4 = 0;
                D_E16C50_801C2250.unk_00[0x1C] = 1;
                boss302->unk_04E = 4;
                if (boss302->unk_0D2 != 0) {
                    temp_v0_11 = boss302->unk_0D0;
                    boss302->timer_050 = 0x1E;
                    boss302->unk_0D2 = 0;
                    boss302->unk_0FC = 0.0f;
                    boss302->unk_0F8 = 0.0f;
                    if (temp_v0_11 < 2) {
                        boss302->unk_0D0 = temp_v0_11 + 1;
                    }
                    boss302->unk_04E = 3;
                }
                if (D_E16C50_801C2250.unk_00[6] != 0) {
                    if (D_E16C50_801C2250.unk_00[0] != 2) {
                        D_E16C50_801C2250.unk_00[0] = 1;
                    } else {
                        D_E16C50_801C2250.unk_00[0] = 0;
                    }
                }
                if ((D_E16C50_801C2250.unk_00[6] == 0) || (D_E16C50_801C2250.unk_00[0] == 0)) {
                    boss302->unk_0DC = 90.0f;
                    boss302->unk_0E0 = 2.0f;
                    Audio_PlaySfx(0x31404066U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    boss302->info.hitbox = gSegments[(u32) ((s32) D_6028578 * 0x10) >> 0x1C] + ((s32) D_6028578 & 0xFFFFFF) + 0x80000000;
                    D_E16C50_801C2250.unk_00[7] = 0;
                }
            }
        }
        break;
    case 3:
        temp_a0_2 = &boss302->sfxPos;
        if (boss302->timer_050 == 1) {
            sp68 = temp_a0_2;
            Audio_KillSfx(temp_a0_2);
            if (D_E16C50_801C2250.unk_00[7] == 0) {
                Audio_PlaySfx(0x31008069U, sp68, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_E16C50_801C2250.unk_00[7] = 1;
            }
        }
        if (D_E16C50_801C2250.unk_00[0] != 0) {
            if (boss302->unk_0BA == 1) {
                boss302->timer_052 = 0x1E;
                boss302->unk_04E = 5;
                boss302->unk_0DC = 90.0f;
                boss302->unk_0E0 = 2.0f;
                boss302->unk16C = 300.0f;
            } else {
                boss302->timer_052 = 0x1E;
                boss302->unk_04E = 8;
            }
        } else {
            if ((boss302->unk_0D0 == 3) && (D_E16C50_801C2250.unk_00[0x1D] == 0)) {
                func_800BA808(gMsg_ID_7084, 0x1E);
                boss302->unk_0D0 = 4;
                temp_t7_2 = D_E16C50_801C2250.unk_00[0x1D] + 1;
                D_E16C50_801C2250.unk_00[0x1D] = temp_t7_2;
                D_E16C50_801C2250.unk_00[0x1D] = temp_t7_2 & 1;
            }
            temp_v0_12 = boss302->unk_0C4[0];
            if ((temp_v0_12 != 0) && (boss302->unk_0C4[1] != 0) && (boss302->unk_0C4[2] != 0)) {
                boss302->timer_050 = 0x5DC;
                boss302->unk_0DC = 0.0f;
                D_E16C50_801C2250.unk_00[0x1C] = 0;
                boss302->unk_04E = 4;
                boss302->unk_0E0 = 1.0f;
                boss302->info.hitbox = gSegments[(u32) ((s32) D_6028454 * 0x10) >> 0x1C] + ((s32) D_6028454 & 0xFFFFFF) + 0x80000000;
                temp_a0_3 = &boss302->sfxPos;
                D_E16C50_801C2250.unk_00[6] = 1;
                sp68 = temp_a0_3;
                Audio_KillSfx(temp_a0_3);
                Audio_PlaySfx(0x31404067U, sp68, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss302->unk_0C4[2] = 0;
                temp_v0_13 = boss302->unk_0C4[2];
                boss302->unk_0C4[1] = temp_v0_13;
                boss302->unk_0C4[0] = temp_v0_13;
            } else if (temp_v0_12 == 0) {
                func_E16C50_8018A1B0(boss302, 0);
            } else if (boss302->unk_0C4[1] == 0) {
                func_E16C50_8018A1B0(boss302, 1);
            } else if (boss302->unk_0C4[2] == 0) {
                func_E16C50_8018A1B0(boss302, 2);
            }
        }
        break;
    case 4:
        if (boss302->timer_050 == 0x578) {
            boss302->unk_0A6[2] = 0x28;
            temp_v0_14 = boss302->unk_0A6[2];
            boss302->unk_0A6[1] = temp_v0_14;
            boss302->unk_0A6[0] = temp_v0_14;
            if (boss302->unk_0BA == 0) {
                boss302->unk_0BA = 1;
            }
            boss302->unk_0E4 = ((Rand_ZeroOne() - 0.5f) * 1000.0f) + -3700.0f;
            if (D_E16C50_801C2250.unk_00[0x1C] == 0) {
                Audio_PlaySfx(0x39404068U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        Math_SmoothStepToF(&boss302->unk_14C, 255.0f, 1.0f, 10.0f, 0.0001f);
        if ((boss302->unk_0D0 == 2) && (boss302->unk_0D8 == 0.0f) && (D_E16C50_801C2250.unk_00[0x1E] == 0)) {
            func_800BA808(gMsg_ID_7083, 0x1E);
            boss302->unk_0D0 = 3;
            temp_t6_2 = D_E16C50_801C2250.unk_00[0x1E] + 1;
            D_E16C50_801C2250.unk_00[0x1E] = temp_t6_2;
            D_E16C50_801C2250.unk_00[0x1E] = temp_t6_2 & 1;
        }
        if (!(gFrameCount & 0x3F)) {
            temp_ft2 = Rand_ZeroOne() * 360.0f;
            boss302->unk_0FC = 0.0f;
            boss302->unk_0F8 = temp_ft2;
        }
        if ((boss302->timer_050 == 0) || ((boss302->unk_0CA[0] == 0) && (boss302->unk_0CA[1] == 0) && (boss302->unk_0CA[2] == 0) && (boss302->unk_0BE[0] == 0) && (boss302->unk_0BE[1] == 0) && (boss302->unk_0BE[2] == 0))) {
            boss302->unk_0D2 = 1;
            if (D_E16C50_801C2250.unk_00[6] != 0) {
                boss302->unk_04E = 1;
                D_E16C50_801C2250.unk_00[0x1B] = 0;
            } else {
                boss302->timer_050 = 0x1E;
                boss302->unk_0DC = 90.0f;
                boss302->unk_0FC = 0.0f;
                boss302->unk_0F8 = 0.0f;
                boss302->unk_0E0 = 2.0f;
                Audio_PlaySfx(0x31404066U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss302->unk_0D2 = 0;
                boss302->info.hitbox = gSegments[(u32) ((s32) D_6028578 * 0x10) >> 0x1C] + ((s32) D_6028578 & 0xFFFFFF) + 0x80000000;
                D_E16C50_801C2250.unk_00[7] = (s32) boss302->unk_0D2;
                boss302->unk_04E = 3;
                if (D_E16C50_801C2250.unk_00[6] == 0) {
                    func_8001D444(0U, 0x8017U, 0U, 0xFFU);
                }
            }
        } else if (boss302->unk_0D4 != 0) {
            boss302->timer_052 = 0x1E;
            boss302->unk_04E = 9;
            boss302->unk_148 = 0.0f;
            D_E16C50_801C2250.unk_00[0x18] = 0;
            D_E16C50_801C2250.unk_00[0x1B] = 0;
            boss302->timer_050 = 0;
            boss302->timer_054 = 0;
            D_E16C50_801C2250.unk_00[0x22] = 1;
        }
        break;
    case 5:
        if (boss302->timer_050 == 1) {
            sp68 = &boss302->sfxPos;
            func_E16C50_80187704();
            Audio_PlaySfx(0x39033093U, sp68, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_E16C50_801C2250.unk_00[0x21] = 0x78;
        }
        var_v0_4 = D_E16C50_801C2250.unk_00[0x21];
        temp_t1 = var_v0_4 - 1;
        if (var_v0_4 != 0) {
            D_E16C50_801C2250.unk_00[0x21] = temp_t1;
            var_v0_4 = temp_t1;
        }
        if (var_v0_4 == 0xF) {
            temp_v0_15 = D_E16C50_801C2250.unk_00[0x20];
            if (temp_v0_15 == 0) {
                if (gTeamShields->unk4 > 0) {
                    func_800BA808(gMsg_ID_20315, 0xA);
                } else if (gTeamShields->unk8 > 0) {
                    func_800BA808(gMsg_ID_20316, 0x14);
                } else if (gTeamShields->unkC > 0) {
                    func_800BA808(gMsg_ID_20317, 0x1E);
                }
            }
            temp_t5 = temp_v0_15 + 1;
            D_E16C50_801C2250.unk_00[0x20] = temp_t5;
            D_E16C50_801C2250.unk_00[0x20] = temp_t5 & 1;
        }
        break;
    case 6:
        boss302->obj.pos.z -= boss302->unk16C;
        Math_SmoothStepToF(&boss302->unk16C, 0.0f, 1.0f, 10.0f, 0.00001f);
        Math_SmoothStepToF(&boss302->unk_0E4, -6000.0f, 10.0f, 100.0f, 0.00001f);
        temp_v0_16 = &D_E16C50_801BF454[D_E16C50_801C2250.unk_00[9]];
        sp68 = temp_v0_16;
        Math_SmoothStepToF(D_E16C50_801C22F0.unk_28, temp_v0_16->r, 0.5f, 100.0f, 0.00001f);
        Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[2], sp68->g, 0.5f, 100.0f, 0.00001f);
        Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[1], sp68->b, 0.5f, 100.0f, 0.00001f);
        if (!(gFrameCount & 0xF)) {
            temp_t4 = D_E16C50_801C2250.unk_00[9] + 1;
            D_E16C50_801C2250.unk_00[9] = temp_t4;
            D_E16C50_801C2250.unk_00[9] = temp_t4 & 3;
        }
        if (boss302->timer_050 == 0) {
            boss302->unk_04E = 7;
            boss302->unk_0DC = 0.0f;
        }
        break;
    case 7:
        temp_s0_3 = &gObjects8C[boss302->unk_0D6];
        Math_SmoothStepToF(D_E16C50_801C22F0.unk_28, 255.0f, 1.0f, 100.0f, 0.00001f);
        Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[2], 255.0f, 1.0f, 100.0f, 0.00001f);
        Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[1], 255.0f, 1.0f, 100.0f, 0.00001f);
        temp_fv1_3 = boss302->unk_0D8;
        if (temp_fv1_3 < 10.0f) {
            temp_s0_3->unk_60.y = 5.0f - ((10.0f - temp_fv1_3) * 0.3f);
            temp_s0_3->unk_60.x = 5.0f - ((10.0f - boss302->unk_0D8) * 0.3f);
        }
        if (boss302->unk_0D8 < 1.0f) {
            Math_SmoothStepToF(&temp_s0_3->unk_60.x, 0.0f, 0.1f, 1.0f, 0.00001f);
            Math_SmoothStepToF(&temp_s0_3->unk_60.y, 0.0f, 0.1f, 1.0f, 0.00001f);
            Math_SmoothStepToF(&temp_s0_3->unk_60.z, 0.0f, 1.0f, 2.0f, 0.00001f);
            if (temp_s0_3->unk_60.z < 0.2f) {
                D_E16C50_801C2250.unk_00[0] = 2;
                boss302->unk_0D2 = 1;
                boss302->timer_050 = 0x14;
                D_E16C50_801C22F0.unk_28[1] = 255.0f;
                D_E16C50_801C22F0.unk_28[2] = D_E16C50_801C22F0.unk_28[1];
                D_E16C50_801C22F0.unk_28[0] = D_E16C50_801C22F0.unk_28[1];
                boss302->unk_04E = 1;
                D_E16C50_801C2250.unk_00[0x1B] = 0;
                Object_Kill(&temp_s0_3->obj, &temp_s0_3->sfxPos);
            }
        }
        break;
    case 8:
        if (boss302->timer_052 == 0) {
            D_E16C50_801C2250.unk_00[0x18] = 0;
            boss302->timer_052 = 0x12C;
            boss302->timer_054 = 0;
            boss302->unk_04E = 9;
            Audio_PlaySfx(0x11002050U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        break;
    case 9:
        temp_a0_4 = &boss302->sfxPos;
        if (boss302->timer_052 == 0) {
            sp68 = temp_a0_4;
            Audio_KillSfx(temp_a0_4);
            Audio_PlaySfx(0x19004051U, sp68, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            boss302->timer_054 = 0;
            boss302->unk_04E = 0xA;
        } else {
            if (D_E16C50_801C2250.unk_00[0x22] == 0) {
                boss302->obj.rot.z += boss302->unk_148;
                boss302->obj.rot.z = Math_ModF(boss302->obj.rot.z, 360.0f);
                Math_SmoothStepToF(&boss302->unk_148, 20.0f, 0.1f, 0.5f, 0.0001f);
            }
            if (boss302->timer_054 == 0) {
                boss302->timer_054 = 0xA;
                var_s0_3 = 0;
                if (D_E16C50_801C2250.unk_00[0x22] == 0) {
                    boss302->timer_054 = 0x1E;
                }
                var_v0_5 = 6;
                if (boss302->unk_0BA == 2) {
                    var_v0_5 = 0xC;
                }
                if (var_v0_5 > 0) {
                    sp64 = &D_E16C50_801C2250;
                    sp128 = var_v0_5;
                    sp68 = (360.0f / (f32) var_v0_5) * 0.017453292f;
                    do {
                        Matrix_RotateZ(gCalcMatrix, sp68, 1U);
                        sp98 = 0.0f;
                        spA0 = 0.0f;
                        sp9C = 400.0f;
                        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp98, &sp8C);
                        sp10C = Math_RadToDeg(Math_Atan2F((bitwise f32) sp8C, sp8C.z));
                        temp_fv1_4 = Math_RadToDeg(-Math_Atan2F(sp8C.y, sqrtf(((bitwise f32) sp8C * (bitwise f32) sp8C) + (sp8C.z * sp8C.z))));
                        var_v0_6 = sp64->unk_00[0xC] - 1;
                        if (var_v0_6 < 0) {
                            var_v0_6 = 0;
                        }
                        temp_v1 = &gObjects2F4[var_v0_6];
                        if ((temp_v1->obj.status == 0) || (temp_v1->obj.id != 0xBF) || (D_E16C50_801C2250.unk_00[0x18] == 0)) {
                            sp64->unk_00[0xC] = 0;
                            var_v0_7 = 0;
                            if (boss302->unk_0BA == 1) {
                                var_v0_7 = 1;
                            }
                            func_E16C50_801875E4(boss302->obj.pos.x + (bitwise f32) sp8C, boss302->obj.pos.y + sp8C.y, boss302->obj.pos.z + sp8C.z, 25.0f, temp_fv1_4, sp10C, 0xA, var_v0_7);
                            sp64->unk_00[0xC] = D_E16C50_801C2250.unk_00[0xB];
                        }
                        var_s0_3 += 1;
                        sp64 = &sp64->unk_00[1];
                    } while (var_s0_3 != sp128);
                }
                D_E16C50_801C2250.unk_00[0x18] = 1;
            }
        }
        break;
    case 10:
        if (D_E16C50_801C2250.unk_00[0x22] == 0) {
            boss302->obj.rot.z += boss302->unk_148;
            boss302->obj.rot.z = Math_ModF(boss302->obj.rot.z, 360.0f);
            Math_SmoothStepToF(&boss302->unk_148, 0.0f, 0.1f, 0.5f, 0.0001f);
        }
        if (boss302->unk_148 <= 0.1f) {
            if (D_E16C50_801C2250.unk_00[0x22] == 0) {
                boss302->unk_148 = 0.0f;
                D_E16C50_801C2250.unk_00[0] = 2;
                boss302->unk_0D2 = 1;
            }
            boss302->timer_050 = 0x14;
            D_E16C50_801C2250.unk_00[0x1B] = 0;
            D_E16C50_801C2250.unk_00[0x22] = 0;
            boss302->unk_04E = 1;
        }
        break;
    case 11:
        if ((boss302->timer_052 == 0xA0) && ((temp_v1_2 = gPlayer->state_1C8, (temp_v1_2 == PLAYERSTATE_1C8_3)) || (temp_v1_2 == PLAYERSTATE_1C8_5))) {
            gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
            gPlayer->unk_1D0 = 0;
        }
        if (boss302->timer_052 < 0x32) {
            *D_801779A8 = 50.0f;
        } else {
            *D_801779A8 = 20.0f;
        }
        if (boss302->timer_052 == 0) {
            D_80161734 = 0;
            Object_Kill(&boss302->obj, &boss302->sfxPos);
        }
        break;
    }
    func_E16C50_8018A464(boss302, 0);
    func_E16C50_8018A464(boss302, 1);
    func_E16C50_8018A464(boss302, 2);
    var_s0_4 = D_E16C50_801BF280;
    sp64 = D_E16C50_801BF2B0;
    sp60 = D_E16C50_801BF2E0;
    sp5C = D_E16C50_801BF1F0;
    sp58 = D_E16C50_801BF220;
    sp54 = D_E16C50_801BF250;
    do {
        if (!(gFrameCount & 3)) {
            *var_s0_4 = (Rand_ZeroOne() - 0.5f) * 10.0f;
            sp64->unk0 = (Rand_ZeroOne() - 0.5f) * 10.0f;
            sp60->unk0 = (Rand_ZeroOne() - 0.5f) * 10.0f;
        }
        Math_SmoothStepToF(sp5C, *var_s0_4, 1.0f, 5.0f, 0.001f);
        Math_SmoothStepToF(sp58, sp64->unk0, 1.0f, 5.0f, 0.001f);
        Math_SmoothStepToF(sp54, sp60->unk0, 1.0f, 5.0f, 0.001f);
        temp_t4_2 = sp54 + 4;
        sp58 += 4;
        sp5C += 4;
        sp60 += 4;
        sp54 = temp_t4_2;
        sp64 += 4;
        var_s0_4 += 4;
    } while ((u32) temp_t4_2 < (u32) (D_E16C50_801BF250 + 0x14));
    boss302->info.hitbox->unk64 = (f32) boss302->unk_1AC[3].z;
    boss302->info.hitbox->unk6C = (f32) boss302->unk_1AC[3].y;
    boss302->info.hitbox->unk74 = (f32) boss302->unk_1AC[3].x;
    boss302->info.hitbox->unk7C = (f32) boss302->unk_1AC[4].z;
    boss302->info.hitbox->unk84 = (f32) boss302->unk_1AC[4].y;
    boss302->info.hitbox->unk8C = (f32) boss302->unk_1AC[4].x;
    boss302->info.hitbox->unk94 = (f32) boss302->unk_1AC[5].z;
    boss302->info.hitbox->unk9C = (f32) boss302->unk_1AC[5].y;
    boss302->info.hitbox->unkA4 = (f32) boss302->unk_1AC[5].x;
    temp_v0_17 = D_801613A0;
    if (temp_v0_17 == 0x258) {
        func_800BA808(gMsg_ID_2225, 0x14);
    }
    var_v1_3 = boss302;
    if (temp_v0_17 == 0x2F4) {
        D_80161734 = 1;
    }
    var_v0_8 = 0;
    if (temp_v0_17 >= 0x2F5) {
        D_80177848 = (s32) (((f32) boss302->unk_060 / 780.0f) * 255.0f);
    }
    do {
        temp_a0_5 = var_v1_3->unk_088[0];
        var_v0_8 += 2;
        if (temp_a0_5 != 0) {
            var_v1_3->unk_088[0] = temp_a0_5 - 1;
        }
        var_v1_3 += 2;
    } while (var_v0_8 < 0x1E);
    var_v0_9 = 0;
    var_v1_4 = boss302;
    if (boss302->unk_0D8 > 20.0f) {
        do {
            var_v0_9 += 2;
            if (var_v1_4->unk_088[0] == 0) {
                var_v1_4->unk_088[0] = 5;
            }
            var_v1_4 += 2;
        } while (var_v0_9 != 6);
    }
    if (D_E16C50_801C2250.unk_00[5] != 0) {
        D_E16C50_801C2250.unk_00[5] -= 1;
    }
    if (D_E16C50_801C2250.unk_00[0x19] != 0) {
        D_E16C50_801C2250.unk_00[0x19] -= 1;
    }
}

void func_E16C50_8018A1B0(Object_408_302 *boss302, s32 arg1) {
    s32 *temp_a2;
    s32 temp_v0;
    void *temp_v0_2;

    temp_a2 = &D_E16C50_801C2250.unk_00[arg1];
    temp_v0 = temp_a2->unk8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        boss302->unk_0BE[arg1] = 0xC;
        temp_a2->unk8 = 1;
        return;
    case 1:
        temp_v0_2 = boss302 + (arg1 * 2);
        boss302->unk_10C[arg1] = 120.0f;
        if (((boss302->unk_0CA[arg1] == 0) && (D_E16C50_801C2250.unk_00[6] != 0) && ((boss302->unk_0A6[0] != 0) || (boss302->unk_0A6[1] != 0) || (boss302->unk_0A6[2] != 0))) || (boss302->unk_0BA == 0)) {
            boss302->unk_118[arg1] = 1.0f;
        } else {
            boss302->unk_118[arg1] = 60.0f;
        }
        if (boss302->unk_100[arg1] >= 119.0f) {
            boss302->unk_100[arg1] = 120.0f;
            boss302->unk_0CA[arg1] = 0x1E;
            boss302->unk_118[arg1] = 60.0f;
            temp_a2->unk8 = 0;
            temp_v0_2->unk94 = 0;
            temp_v0_2->unk9A = 0;
            boss302->unk_0C4[arg1] = 1;
            boss302->unk_0AC[arg1] = 0;
        }
        return;
    }
}

void func_E16C50_8018A2C4(Object_408_302 *boss302) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    s16 temp_s3;
    s16 temp_v0;
    s16 var_s1;

    var_s1 = 0;
    do {
        temp_s3 = var_s1 + 1;
        if ((temp_s3 == boss302->unk_066) && (boss302->unk_04E == 4) && (boss302->unk_0D8 < 20.0f)) {
            temp_v0 = boss302->unk_0AC[var_s1];
            if ((temp_v0 != 1) && (temp_v0 != 3)) {
                boss302->unk_088[var_s1] = 0xF;
                (boss302 + (var_s1 * 2))->unk8E = 0x28;
                boss302->unk_0CA[var_s1] -= boss302->unk_064;
                if (var_s1 == 0) {
                    sp58 = *D_E16C50_801BF334;
                    sp5C = *D_E16C50_801BF3C4;
                    sp60 = boss302->obj.pos.z;
                    func_8007A6F0((Vec3f *) &sp58, 0x29034003);
                }
                if (var_s1 == 1) {
                    sp58 = *D_E16C50_801BF364;
                    sp5C = *D_E16C50_801BF3F4;
                    sp60 = boss302->obj.pos.z;
                    func_8007A6F0((Vec3f *) &sp58, 0x29034003);
                }
                if (var_s1 == 2) {
                    sp58 = *D_E16C50_801BF394;
                    sp5C = *D_E16C50_801BF424;
                    sp60 = boss302->obj.pos.z;
                    func_8007A6F0((Vec3f *) &sp58, 0x29034003);
                }
                if (boss302->unk_0CA[var_s1] < 0) {
                    boss302->unk_0CA[var_s1] = 0;
                }
            }
        }
        var_s1 = temp_s3;
    } while (temp_s3 != 3);
}

void func_E16C50_8018A464(Object_408_302 *boss302, s32 arg1) {
    f32 spE8;
    f32 spE4;
    f32 spE0;
    s32 spA8;
    void *spA0;
    Vec3f *temp_s0;
    Vec3f *temp_s0_2;
    Vec3f *temp_s0_3;
    Vec3f *temp_s0_4;
    Vec3f *temp_s1;
    Vec3f *temp_s1_2;
    Vec3f *temp_s1_3;
    Vec3f *temp_s1_4;
    Vec3f *temp_s2;
    Vec3f *temp_s2_2;
    Vec3f *temp_s2_3;
    Vec3f *temp_s2_4;
    Vec3f *temp_s4;
    Vec3f *temp_s4_2;
    Vec3f *temp_s5;
    Vec3f *temp_s5_2;
    Vec3f *temp_s6;
    Vec3f *temp_s6_2;
    Vec3f *var_s0;
    Vec3f *var_s0_2;
    Vec3f *var_s0_5;
    Vec3f *var_s0_6;
    Vec3f *var_s1_2;
    Vec3f *var_s1_3;
    Vec3f *var_s1_5;
    Vec3f *var_s1_6;
    Vec3f *var_s2_2;
    Vec3f *var_s2_3;
    Vec3f *var_s2_4;
    Vec3f *var_s2_5;
    Vec3f *var_s4_2;
    Vec3f *var_s4_4;
    Vec3f *var_s5;
    Vec3f *var_s5_4;
    Vec3f *var_s6;
    Vec3f *var_s6_3;
    f32 *temp_v1_10;
    f32 *temp_v1_12;
    f32 *temp_v1_2;
    f32 *temp_v1_4;
    f32 *temp_v1_6;
    f32 *temp_v1_8;
    f32 *var_a0;
    f32 *var_a1;
    f32 *var_fp;
    f32 *var_fp_2;
    f32 *var_s0_3;
    f32 *var_s0_4;
    f32 *var_s1;
    f32 *var_s1_4;
    f32 *var_s2;
    f32 *var_s4;
    f32 *var_s4_3;
    f32 *var_s5_2;
    f32 *var_s5_3;
    f32 *var_s6_2;
    f32 *var_s7;
    f32 *var_s7_2;
    f32 *var_v0;
    f32 *var_v1;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft2_3;
    f32 temp_ft3;
    f32 temp_ft3_2;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 var_fs0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_11;
    s16 temp_v1_3;
    s16 temp_v1_5;
    s16 temp_v1_7;
    s16 temp_v1_9;
    s32 temp_s7;
    s32 temp_s7_2;
    s32 temp_t6;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_s3_6;
    s32 var_s3_7;

    temp_t6 = arg1 * 0x18;
    spA8 = arg1 * 0xC;
    (boss302->info.hitbox + temp_t6)->unk1C = (f32) boss302->unk_1AC[arg1].z;
    (boss302->info.hitbox + temp_t6)->unk24 = (f32) boss302->unk_1AC[arg1].y;
    (boss302->info.hitbox + temp_t6)->unk2C = (f32) boss302->unk_1AC[arg1].x;
    if ((D_E16C50_801C2250.unk_00[5] != 0) && (boss302->timer_056 != 0)) {
        boss302->timer_050 = 0xCA;
        boss302->timer_056 = 0;
    }
    temp_s7 = arg1 * 2;
    spA0 = boss302 + temp_s7;
    temp_v0 = boss302->unk_0AC[arg1];
    switch (temp_v0) {                              /* irregular */
    case 0:
        Math_SmoothStepToF(&boss302->unk_13C[arg1], -90.0f, 0.05f, 2.0f, 0.00001f);
        Math_SmoothStepToF(boss302 + (arg1 * 4), 0.0f, 0.1f, 10.0f, 0.00001f);
        switch (arg1) {                             /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            var_s3 = 1;
            if (boss302->unk_0CA[0] != 0) {
                do {
                    D_E16C50_801BEE90[var_s3] = 3.0f;
                    D_E16C50_801BEEC0[var_s3] = 3.0f;
                    temp_v1 = boss302->unk_088[6];
                    if ((temp_v1 == 0) && (boss302->unk_04E != 3)) {
                        boss302->unk_088[6] = 0x14;
                        spA8 = var_s3 * 4;
                        D_E16C50_801BEE00->y = (Rand_ZeroOne() - 0.5f) * 720.0f;
                        if (D_E16C50_801BEE00->y < -20.0f) {
                            D_E16C50_801BEE00->y = -20.0f;
                        }
                        if (D_E16C50_801BEE00->y > 20.0f) {
                            D_E16C50_801BEE00->y = 20.0f;
                        }
                        *D_E16C50_801BF3C4 = D_E16C50_801BEE00->y;
                    } else if (!(temp_v1 & 3)) {
                        temp_v1_2 = &D_E16C50_801BF3C4[var_s3];
                        temp_s0 = &D_E16C50_801BEE00[var_s3];
                        temp_ft2 = temp_s0->y;
                        temp_s0->y = temp_v1_2->unk-4;
                        temp_v1_2->unk0 = temp_ft2;
                    }
                    temp_v1_3 = boss302->unk_088[9];
                    if (temp_v1_3 == 0) {
                        var_s0 = D_E16C50_801BEE00;
                        if ((D_E16C50_801BEE00->y < -20.0f) || (D_E16C50_801BEE00->y > 20.0f)) {
                            var_s3 = 0;
                            do {
                                Math_SmoothStepToF(&var_s0->x, 0.0f, 0.5f, 100.0f, 0.001f);
                                var_s3 += 1;
                                var_s0 += 0xC;
                            } while (var_s3 != 0xC);
                        } else {
                            boss302->unk_088[9] = 0x1E;
                            D_E16C50_801BEE00->x = (Rand_ZeroOne() - 0.5f) * 30.0f;
                        }
                        *D_E16C50_801BF334 = D_E16C50_801BEE00->x;
                    } else if (!(temp_v1_3 & 7)) {
                        temp_v1_4 = &D_E16C50_801BF334[var_s3];
                        temp_s0_2 = &D_E16C50_801BEE00[var_s3];
                        temp_ft3 = temp_s0_2->x;
                        temp_s0_2->x = temp_v1_4->unk-4;
                        temp_v1_4->unk0 = temp_ft3;
                    }
                    var_s3 += 1;
                } while (var_s3 < 0xC);
                var_s1 = &D_E16C50_801BED74;
                var_s5 = D_E16C50_801BED70;
                var_s0_2 = D_E16C50_801BEE00;
                var_fp = D_E16C50_801BEEC0;
                var_s7 = D_E16C50_801BEE90;
                do {
                    Math_SmoothStepToF(var_s1, var_s0_2->y, 0.05f, *var_fp, 0.001f);
                    Math_SmoothStepToF(&var_s5->x, var_s0_2->x, 0.05f, *var_s7, 0.001f);
                    Math_SmoothStepToF(var_s7, 1.0f, 0.03f, 0.05f, 0.001f);
                    Math_SmoothStepToF(var_fp, 1.0f, 0.03f, 0.05f, 0.001f);
                    var_s1 += 0xC;
                    var_s7 += 4;
                    var_fp += 4;
                    var_s0_2 += 0xC;
                    var_s5 += 0xC;
                } while (var_s1 != &D_E16C50_801BEE04);
            }
            break;
        case 1:                                     /* switch 1 */
            var_s3_2 = 1;
            if (boss302->unk_0CA[1] != 0) {
                do {
                    D_E16C50_801BF010[var_s3_2] = 3.0f;
                    D_E16C50_801BF040[var_s3_2] = 3.0f;
                    temp_v1_5 = boss302->unk_088[7];
                    if (temp_v1_5 == 0) {
                        boss302->unk_088[7] = 0x14;
                        spA8 = var_s3_2 * 4;
                        D_E16C50_801BEF80->y = (Rand_ZeroOne() - 0.5f) * 720.0f;
                        if (D_E16C50_801BEF80->y < -20.0f) {
                            D_E16C50_801BEF80->y = -20.0f;
                        }
                        if (D_E16C50_801BEF80->y > 20.0f) {
                            D_E16C50_801BEF80->y = 20.0f;
                        }
                        *D_E16C50_801BF3F4 = D_E16C50_801BEF80->y;
                    } else if (!(temp_v1_5 & 3)) {
                        temp_v1_6 = &D_E16C50_801BF3F4[var_s3_2];
                        temp_s1 = &D_E16C50_801BEF80[var_s3_2];
                        temp_ft2_2 = temp_s1->y;
                        temp_s1->y = temp_v1_6->unk-4;
                        temp_v1_6->unk0 = temp_ft2_2;
                    }
                    temp_v1_7 = boss302->unk_088[0xA];
                    if (temp_v1_7 == 0) {
                        var_s1_2 = D_E16C50_801BEF80;
                        if ((D_E16C50_801BEF80->y < -20.0f) || (D_E16C50_801BEF80->y > 20.0f)) {
                            var_s3_2 = 0;
                            do {
                                Math_SmoothStepToF(&var_s1_2->x, 0.0f, 0.5f, 50.0f, 0.001f);
                                var_s3_2 += 1;
                                var_s1_2 += 0xC;
                            } while (var_s3_2 != 0xC);
                        } else {
                            boss302->unk_088[0xA] = 0x1E;
                            D_E16C50_801BEF80->x = (Rand_ZeroOne() - 0.5f) * 30.0f;
                        }
                        *D_E16C50_801BF364 = D_E16C50_801BEF80->x;
                    } else if (!(temp_v1_7 & 7)) {
                        temp_v1_8 = &D_E16C50_801BF364[var_s3_2];
                        temp_s1_2 = &D_E16C50_801BEF80[var_s3_2];
                        temp_ft2_3 = temp_s1_2->x;
                        temp_s1_2->x = temp_v1_8->unk-4;
                        temp_v1_8->unk0 = temp_ft2_3;
                    }
                    var_s3_2 += 1;
                } while (var_s3_2 < 0xC);
                var_s0_3 = &D_E16C50_801BEEF4;
                var_s6 = D_E16C50_801BEEF0;
                var_s1_3 = D_E16C50_801BEF80;
                var_s4 = D_E16C50_801BF040;
                var_s2 = D_E16C50_801BF010;
                do {
                    Math_SmoothStepToF(var_s0_3, var_s1_3->y, 0.05f, *var_s4, 0.001f);
                    Math_SmoothStepToF(&var_s6->x, var_s1_3->x, 0.05f, *var_s2, 0.001f);
                    Math_SmoothStepToF(var_s2, 1.0f, 0.03f, 0.05f, 0.001f);
                    Math_SmoothStepToF(var_s4, 1.0f, 0.03f, 0.05f, 0.001f);
                    var_s0_3 += 0xC;
                    var_s2 += 4;
                    var_s4 += 4;
                    var_s1_3 += 0xC;
                    var_s6 += 0xC;
                } while (var_s0_3 != &D_E16C50_801BEF84);
            }
            break;
        case 2:                                     /* switch 1 */
            var_s3_3 = 1;
            if (boss302->unk_0CA[2] != 0) {
                do {
                    D_E16C50_801BF190[var_s3_3] = 3.0f;
                    D_E16C50_801BF1C0[var_s3_3] = 3.0f;
                    temp_v1_9 = boss302->unk_088[8];
                    if (temp_v1_9 == 0) {
                        boss302->unk_088[8] = 0x14;
                        spA8 = var_s3_3 * 4;
                        D_E16C50_801BF100->y = (Rand_ZeroOne() - 0.5f) * 720.0f;
                        if (D_E16C50_801BF100->y < -20.0f) {
                            D_E16C50_801BF100->y = -20.0f;
                        }
                        if (D_E16C50_801BF100->y > 20.0f) {
                            D_E16C50_801BF100->y = 20.0f;
                        }
                        *D_E16C50_801BF424 = D_E16C50_801BF100->y;
                    } else if (!(temp_v1_9 & 3)) {
                        temp_v1_10 = &D_E16C50_801BF424[var_s3_3];
                        temp_s2 = &D_E16C50_801BF100[var_s3_3];
                        temp_ft3_2 = temp_s2->y;
                        temp_s2->y = temp_v1_10->unk-4;
                        temp_v1_10->unk0 = temp_ft3_2;
                    }
                    temp_v1_11 = boss302->unk_088[0xB];
                    if (temp_v1_11 == 0) {
                        var_s2_2 = D_E16C50_801BF100;
                        if ((D_E16C50_801BF100->y < -20.0f) || (D_E16C50_801BF100->y > 20.0f)) {
                            var_s3_3 = 0;
                            do {
                                Math_SmoothStepToF(&var_s2_2->x, 0.0f, 0.5f, 50.0f, 0.001f);
                                var_s3_3 += 1;
                                var_s2_2 += 0xC;
                            } while (var_s3_3 != 0xC);
                        } else {
                            boss302->unk_088[0xB] = 0x1E;
                            D_E16C50_801BF100->x = (Rand_ZeroOne() - 0.4f) * 30.0f;
                        }
                        *D_E16C50_801BF394 = D_E16C50_801BF100->x;
                    } else if (!(temp_v1_11 & 7)) {
                        temp_v1_12 = &D_E16C50_801BF394[var_s3_3];
                        temp_s2_2 = &D_E16C50_801BF100[var_s3_3];
                        temp_ft5 = temp_s2_2->x;
                        temp_s2_2->x = temp_v1_12->unk-4;
                        temp_v1_12->unk0 = temp_ft5;
                    }
                    var_s3_3 += 1;
                } while (var_s3_3 < 0xC);
                var_s0_4 = &D_E16C50_801BF074;
                var_s4_2 = D_E16C50_801BF070;
                var_s2_3 = D_E16C50_801BF100;
                var_s5_2 = D_E16C50_801BF1C0;
                var_s1_4 = D_E16C50_801BF190;
                do {
                    Math_SmoothStepToF(var_s0_4, var_s2_3->y, 0.05f, *var_s5_2, 0.001f);
                    Math_SmoothStepToF(&var_s4_2->x, var_s2_3->x, 0.05f, *var_s1_4, 0.001f);
                    Math_SmoothStepToF(var_s1_4, 1.0f, 0.03f, 0.05f, 0.001f);
                    Math_SmoothStepToF(var_s5_2, 1.0f, 0.03f, 0.05f, 0.001f);
                    var_s0_4 += 0xC;
                    var_s1_4 += 4;
                    var_s5_2 += 4;
                    var_s2_3 += 0xC;
                    var_s4_2 += 0xC;
                } while (var_s0_4 != &D_E16C50_801BF104);
            }
            break;
        }
        if ((boss302->unk_04E >= 3) && (boss302->unk_0D8 == 0.0f) && ((boss302->unk_0CA[0] != 0) || (boss302->unk_0CA[1] != 0) || (boss302->unk_0CA[2] != 0)) && (D_E16C50_801C2250.unk_00[5] == 0)) {
            var_fs0 = 0.5f;
            if (boss302->unk_0BA < 2) {
                var_fs0 = 0.7f;
            }
            if (!(gFrameCount & 0x1F) && (Rand_ZeroOne() < var_fs0) && (D_E16C50_801C2250.unk_00[5] == 0) && (spA0->unkCA != 0)) {
                if ((Rand_ZeroOne() < 0.2f) || (var_s3_4 = 0, ((boss302->unk_0BA < 2) != 0))) {
                    if (boss302->unk_0AC[0] == 0) {
                        boss302->unk_0AC[0] = 1;
                    }
                    if (boss302->unk_0AC[1] == 0) {
                        boss302->unk_0AC[1] = 1;
                    }
                    if (boss302->unk_0AC[2] == 0) {
                        boss302->unk_0AC[2] = 1;
                    }
                    boss302->unk_088[0xC] = 0x1E;
                    if (boss302->unk_0CA[0] != 0) {
                        boss302->unk_088[0xD] = boss302->unk_088[0xC] + 0x32;
                    } else {
                        boss302->unk_088[0xD] = 0x1E;
                    }
                    if (boss302->unk_0CA[1] != 0) {
                        boss302->unk_088[0xE] = boss302->unk_088[0xD] + 0x32;
                        return;
                    }
                    boss302->unk_088[0xE] = boss302->unk_088[0xD];
                    return;
                }
                do {
                    if ((var_s3_4 == (gFrameCount & 0xF)) && (boss302->unk_0AC[var_s3_4] == 0)) {
                        (boss302 + (var_s3_4 * 2))->unkA0 = 0xF;
                        boss302->unk_0AC[var_s3_4] = 1;
                        var_s3_4 = 3;
                    }
                    var_s3_4 += 1;
                } while (var_s3_4 < 3);
                return;
            }
        } else {
            return;
        }
        break;
    case 1:
        D_E16C50_801C2250.unk_00[5] = 0x32;
        var_s3_5 = 0;
        do {
            if (temp_s7 == 0) {
                temp_fv0 = (f32) var_s3_5 * -3.0f;
                temp_s0_3 = &D_E16C50_801BEE00[var_s3_5];
                temp_s5 = &D_E16C50_801BED70[var_s3_5];
                temp_s0_3->y = 0.0f;
                temp_s0_3->x = temp_fv0;
                Math_SmoothStepToF(&temp_s5->x, temp_fv0, 0.1f, 10.0f, 0.001f);
                Math_SmoothStepToF(&temp_s5->y, temp_s0_3->y, 0.1f, 10.0f, 0.001f);
            }
            if (temp_s7 == 2) {
                temp_fv0_2 = (f32) var_s3_5 * -3.0f;
                temp_s1_3 = &D_E16C50_801BEF80[var_s3_5];
                temp_s6 = &D_E16C50_801BEEF0[var_s3_5];
                temp_s1_3->y = 0.0f;
                temp_s1_3->x = temp_fv0_2;
                Math_SmoothStepToF(&temp_s6->x, temp_fv0_2, 0.1f, 10.0f, 0.001f);
                Math_SmoothStepToF(&temp_s6->y, temp_s1_3->y, 0.1f, 10.0f, 0.001f);
            }
            if (temp_s7 == 4) {
                temp_fv0_3 = (f32) var_s3_5 * -3.0f;
                temp_s2_3 = &D_E16C50_801BF100[var_s3_5];
                temp_s4 = &D_E16C50_801BF070[var_s3_5];
                temp_s2_3->y = 0.0f;
                temp_s2_3->x = temp_fv0_3;
                Math_SmoothStepToF(&temp_s4->x, temp_fv0_3, 0.1f, 10.0f, 0.001f);
                Math_SmoothStepToF(&temp_s4->y, temp_s2_3->y, 0.1f, 10.0f, 0.001f);
            }
            var_s3_5 += 1;
        } while (var_s3_5 != 0xC);
        if (spA0->unkA0 == 0) {
            spA0->unkA0 = (s16) (s32) (40.0f - ((20.0f - ((boss302->unk_0E4 * -1.0f) / 150.0f)) * 3.0f));
            if (spA8 == 0) {
                spE0 = *D_E16C50_801BF334;
                spE4 = *D_E16C50_801BF3C4;
                spE8 = boss302->obj.pos.z;
                func_8007A6F0((Vec3f *) &spE0, 0x29034065);
            }
            if (temp_s7 == 2) {
                spE0 = *D_E16C50_801BF364;
                spE4 = *D_E16C50_801BF3F4;
                spE8 = boss302->obj.pos.z;
                func_8007A6F0((Vec3f *) &spE0, 0x29034065);
            }
            if (temp_s7 == 4) {
                spE0 = *D_E16C50_801BF394;
                spE4 = *D_E16C50_801BF424;
                spE8 = boss302->obj.pos.z;
                func_8007A6F0((Vec3f *) &spE0, 0x29034065);
            }
            spA0->unkAC = 2;
            return;
        }
        break;
    case 2:
        temp_s7_2 = arg1 * 4;
        D_E16C50_801C2250.unk_00[5] = 0x32;
        Math_SmoothStepToF(&boss302->unk_13C[arg1], 0.0f, 0.4f, 100.0f, 0.00001f);
        Math_SmoothStepToF(&boss302->unk_130[arg1], 420.0f - ((20.0f - ((boss302->unk_0E4 * -1.0f) / 150.0f)) * 20.0f), 0.3f, 100.0f, 0.00001f);
        var_s3_6 = 0;
        if ((spA0->unkA0 == 0) || (spA0->unk8E != 0)) {
            spA0->unkAC = 0;
            do {
                if (temp_s7_2 == 0) {
                    D_E16C50_801BEE90[var_s3_6].unk0 = 0.0f;
                    D_E16C50_801BEEC0[var_s3_6].unk0 = 0.0f;
                }
                if (temp_s7_2 == 4) {
                    D_E16C50_801BF010[var_s3_6].unk0 = 0.0f;
                    D_E16C50_801BF040[var_s3_6].unk0 = 0.0f;
                }
                if (temp_s7_2 == 8) {
                    D_E16C50_801BF190[var_s3_6].unk0 = 0.0f;
                    D_E16C50_801BF1C0[var_s3_6].unk0 = 0.0f;
                }
                if (temp_s7_2 == 0) {
                    D_E16C50_801BEE90[var_s3_6].unk4 = 0.0f;
                    D_E16C50_801BEEC0[var_s3_6].unk4 = 0.0f;
                }
                if (temp_s7_2 == 4) {
                    D_E16C50_801BF010[var_s3_6].unk4 = 0.0f;
                    D_E16C50_801BF040[var_s3_6].unk4 = 0.0f;
                }
                if (temp_s7_2 == 8) {
                    D_E16C50_801BF190[var_s3_6].unk4 = 0.0f;
                    D_E16C50_801BF1C0[var_s3_6].unk4 = 0.0f;
                }
                if (temp_s7_2 == 0) {
                    D_E16C50_801BEE90[var_s3_6].unk8 = 0.0f;
                    D_E16C50_801BEEC0[var_s3_6].unk8 = 0.0f;
                }
                if (temp_s7_2 == 4) {
                    D_E16C50_801BF010[var_s3_6].unk8 = 0.0f;
                    D_E16C50_801BF040[var_s3_6].unk8 = 0.0f;
                }
                if (temp_s7_2 == 8) {
                    D_E16C50_801BF190[var_s3_6].unk8 = 0.0f;
                    D_E16C50_801BF1C0[var_s3_6].unk8 = 0.0f;
                }
                if (temp_s7_2 == 0) {
                    D_E16C50_801BEE90[var_s3_6].unkC = 0.0f;
                    D_E16C50_801BEEC0[var_s3_6].unkC = 0.0f;
                }
                if (temp_s7_2 == 4) {
                    D_E16C50_801BF010[var_s3_6].unkC = 0.0f;
                    D_E16C50_801BF040[var_s3_6].unkC = 0.0f;
                }
                if (temp_s7_2 == 8) {
                    D_E16C50_801BF190[var_s3_6].unkC = 0.0f;
                    D_E16C50_801BF1C0[var_s3_6].unkC = 0.0f;
                }
                var_s3_6 += 4;
            } while (var_s3_6 != 0xC);
        }
        var_s3_7 = 0;
        do {
            if (temp_s7_2 == 0) {
                temp_s0_4 = &D_E16C50_801BEE00[var_s3_7];
                temp_s0_4->y = 0.0f;
                temp_s5_2 = &D_E16C50_801BED70[var_s3_7];
                temp_s0_4->x = D_E16C50_801BF494[var_s3_7];
                Math_SmoothStepToF(&temp_s5_2->y, 0.0f, 0.3f, 100.0f, 0.00001f);
                Math_SmoothStepToF(&temp_s5_2->x, temp_s0_4->x, 0.3f, 100.0f, 0.00001f);
            }
            if (temp_s7_2 == 4) {
                temp_s1_4 = &D_E16C50_801BEF80[var_s3_7];
                temp_s1_4->y = 0.0f;
                temp_s6_2 = &D_E16C50_801BEEF0[var_s3_7];
                temp_s1_4->x = D_E16C50_801BF494[var_s3_7];
                Math_SmoothStepToF(&temp_s6_2->y, 0.0f, 0.3f, 100.0f, 0.001f);
                Math_SmoothStepToF(&temp_s6_2->x, temp_s1_4->x, 0.3f, 100.0f, 0.001f);
            }
            if (temp_s7_2 == 8) {
                temp_s2_4 = &D_E16C50_801BF100[var_s3_7];
                temp_s2_4->y = 0.0f;
                temp_s4_2 = &D_E16C50_801BF070[var_s3_7];
                temp_s2_4->x = D_E16C50_801BF494[var_s3_7];
                Math_SmoothStepToF(&temp_s4_2->y, 0.0f, 0.3f, 100.0f, 0.001f);
                Math_SmoothStepToF(&temp_s4_2->x, temp_s2_4->x, 0.3f, 100.0f, 0.001f);
            }
            var_s3_7 += 1;
        } while (var_s3_7 != 0xC);
        return;
    case 3:
        var_s4_3 = &D_E16C50_801BF104;
        var_s6_2 = &D_E16C50_801BEF84;
        var_s5_3 = &D_E16C50_801BEE04;
        var_s2_4 = D_E16C50_801BF100;
        var_s1_5 = D_E16C50_801BEF80;
        var_s0_5 = D_E16C50_801BEE00;
        do {
            Math_SmoothStepToF(var_s5_3, 0.0f, 0.5f, 50.0f, 0.001f);
            Math_SmoothStepToF(&var_s0_5->x, 0.0f, 0.5f, 50.0f, 0.001f);
            Math_SmoothStepToF(var_s6_2, 0.0f, 0.5f, 50.0f, 0.001f);
            Math_SmoothStepToF(&var_s1_5->x, 0.0f, 0.5f, 50.0f, 0.001f);
            Math_SmoothStepToF(var_s4_3, 0.0f, 0.5f, 50.0f, 0.001f);
            Math_SmoothStepToF(&var_s2_4->x, 0.0f, 0.5f, 50.0f, 0.001f);
            var_s4_3 += 0xC;
            var_s0_5 += 0xC;
            var_s1_5 += 0xC;
            var_s2_4 += 0xC;
            var_s5_3 += 0xC;
            var_s6_2 += 0xC;
        } while ((u32) var_s4_3 < (u32) &D_E16C50_801BF194);
        boss302->unk_0AC[2] = 4;
        temp_v0_2 = boss302->unk_0AC[2];
        boss302->timer_050 = 0;
        boss302->unk_0AC[1] = temp_v0_2;
        boss302->unk_0AC[0] = temp_v0_2;
        boss302->unk_130[2] = 0.0f;
        boss302->unk_130[1] = 0.0f;
        boss302->unk_130[0] = 0.0f;
        boss302->unk_10C[2] = 0.0f;
        boss302->unk_10C[1] = 0.0f;
        boss302->unk_10C[0] = 0.0f;
        boss302->unk_124[2] = 0.0f;
        boss302->unk_124[1] = 0.0f;
        boss302->unk_124[0] = 0.0f;
        boss302->unk_100[2] = 0.0f;
        boss302->unk_100[1] = 0.0f;
        boss302->unk_100[0] = 0.0f;
        boss302->unk_148 = 0.0f;
        boss302->unk_13C[2] = -90.0f;
        boss302->unk_13C[1] = -90.0f;
        boss302->unk_13C[0] = -90.0f;
        var_s4_4 = D_E16C50_801BF070;
        var_s2_5 = D_E16C50_801BF100;
        var_a1 = D_E16C50_801BF1C0;
        var_a0 = D_E16C50_801BF190;
        var_s6_3 = D_E16C50_801BEEF0;
        var_s1_6 = D_E16C50_801BEF80;
        var_v1 = D_E16C50_801BF040;
        var_s5_4 = D_E16C50_801BED70;
        var_s0_6 = D_E16C50_801BEE00;
        var_fp_2 = D_E16C50_801BEEC0;
        var_s7_2 = D_E16C50_801BEE90;
        var_v0 = D_E16C50_801BF010;
        do {
            var_s4_4 += 0xC;
            var_s7_2 += 4;
            var_fp_2 += 4;
            var_s0_6 += 0xC;
            var_s5_4 += 0xC;
            var_v0 += 4;
            var_v1 += 4;
            var_s1_6 += 0xC;
            var_s6_3 += 0xC;
            var_a0 += 4;
            var_a1 += 4;
            var_s2_5 += 0xC;
            var_s0_6->unk-C = 0.0f;
            var_s0_6->unk-8 = 0.0f;
            var_s5_4->unk-C = 0.0f;
            var_s5_4->unk-8 = 0.0f;
            var_s7_2->unk-4 = 3.0f;
            var_fp_2->unk-4 = 3.0f;
            var_s1_6->unk-C = 0.0f;
            var_s1_6->unk-8 = 0.0f;
            var_s6_3->unk-C = 0.0f;
            var_s6_3->unk-8 = 0.0f;
            var_v0->unk-4 = 3.0f;
            var_v1->unk-4 = 3.0f;
            var_s2_5->unk-C = 0.0f;
            var_s2_5->unk-8 = 0.0f;
            var_s4_4->unk-C = 0.0f;
            var_s4_4->unk-8 = 0.0f;
            var_a0->unk-4 = 3.0f;
            var_a1->unk-4 = 3.0f;
        } while (var_s4_4 != D_E16C50_801BF100);
        break;
    }
}

void func_E16C50_8018B9BC(Object_408_302 *boss302) {
    Vec3f sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    Vec3f *temp_s4;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_t8;
    s32 var_s3;
    s32 var_s5;
    void *var_s1;

    var_s3 = 3;
    var_s5 = 0x1E;
    var_s1 = boss302 + 0x1E;
    if (D_E16C50_801C2250.unk_00[0] == 0) {
        do {
            temp_v0 = var_s1->unk88;
            if (temp_v0 != 0) {
                temp_s4 = &boss302->sfxPos;
                if ((D_8017812C != 0) && (gPlayerShots->unk6F4 > 0)) {
                    var_s1->unk88 = (s16) (temp_v0 - boss302->unk_064);
                } else if ((var_s3 + 1) == boss302->unk_066) {
                    var_s1->unk88 = (s16) (temp_v0 - boss302->unk_064);
                    if ((D_E16C50_801C2250.unk_00[0x19] == 0) && (boss302->unk_0BA == 1) && (Rand_ZeroOne() < 0.4f)) {
                        D_E16C50_801C2250.unk_00[0x19] = 0x14;
                        temp_t8 = D_E16C50_801C2250.unk_00[0xA] + 1;
                        D_E16C50_801C2250.unk_00[0xA] = temp_t8;
                        D_E16C50_801C2250.unk_00[0xA] = temp_t8 & 1;
                    }
                }
                Audio_PlaySfx(0x29033064U, temp_s4, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                if (var_s1->unk88 <= 0) {
                    var_s1->unk88 = 0;
                    Matrix_MultVec3f(gCalcMatrix, &boss302->unk_1AC[var_s3], &sp94);
                    func_8007D0E0(boss302->obj.pos.x + (bitwise f32) sp94, boss302->obj.pos.y + sp94.y, boss302->obj.pos.z + sp94.z, 10.0f);
                    sp88 = boss302->obj.pos.x + (bitwise f32) sp94;
                    sp8C = boss302->obj.pos.y + sp94.y;
                    sp90 = boss302->obj.pos.z + sp94.z;
                    func_8007A6F0((Vec3f *) &sp88, 0x2903B009);
                    func_8007C120(boss302->obj.pos.x, boss302->obj.pos.y, boss302->obj.pos.z + 150.0f, boss302->vel.x, boss302->vel.y, boss302->vel.z, 0.2f, 0x32);
                }
                if ((boss302->unk_0A6[0] == 0) && (boss302->unk_0A6[1] == 0) && (boss302->unk_0A6[2] == 0)) {
                    Audio_KillSfx(temp_s4);
                    temp_v0_2 = boss302->unk_0BA;
                    if (temp_v0_2 != 0) {
                        boss302->unk_0BA = temp_v0_2 - 1;
                        if (boss302->unk_0BA != 0) {
                            boss302->unk_060 -= 0x3C;
                        }
                    }
                    if (boss302->unk_0BA != 0) {
                        boss302->timer_058 = 0x32;
                    } else {
                        boss302->timer_054 = 0x1E;
                        boss302->unk_158 = 20.0f;
                    }
                }
            }
            var_s5 += 2;
            var_s1 += 2;
            var_s3 += 1;
        } while (var_s5 != 0x24);
    }
}

void func_E16C50_8018BCD4(Vec3f *arg0, f32 arg1, f32 arg2, Vec3f *arg3, s32 arg4, f32 arg5, s32 arg6, f32 arg7) {
    Vec3f sp90;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Vec3f *var_s3;
    s32 var_s4;

    sp90.x = D_E16C50_801BF4C4.x;
    sp90.y = D_E16C50_801BF4C4.y;
    sp90.z = D_E16C50_801BF4C4.z;
    if (D_E16C50_801C22F0.unk_24 != 0.0f) {
        RCP_SetupDL(&gMasterDisp, 0x17);
        if (D_E16C50_801C22F0.unk_24 != 255.0f) {
            RCP_SetupDL(&gMasterDisp, 0x47);
            temp_v0 = gMasterDisp;
            gMasterDisp = temp_v0 + 8;
            temp_v0->words.w0 = 0xFA000000;
            temp_v0->words.w1 = ((s32) D_E16C50_801C22F0.unk_24 & 0xFF) | ~0xFF;
        } else if (arg4 != 0) {
            RCP_SetupDL(&gMasterDisp, 0x1B);
            if (arg7 < 18.0f) {
                temp_v0_2 = gMasterDisp;
                gMasterDisp = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0xFF00FFFF;
                temp_v0_2->words.w0 = 0xFA000000;
            } else {
                temp_v0_3 = gMasterDisp;
                gMasterDisp = temp_v0_3 + 8;
                temp_v0_3->words.w1 = 0xFFFF00FF;
                temp_v0_3->words.w0 = 0xFA000000;
            }
        }
        Matrix_Push(&gGfxMatrix);
        Matrix_Push(&gCalcMatrix);
        Matrix_Copy(gCalcMatrix, &gIdentityMatrix);
        Matrix_RotateZ(gCalcMatrix, 0.017453292f * arg1, 1U);
        Matrix_Translate(gCalcMatrix, 0.0f, 100.0f, -223.0f, (u8) 1);
        Matrix_RotateX(gCalcMatrix, 0.017453292f * arg2, 1U);
        var_s4 = 0;
        var_s3 = arg0;
        if (arg6 > 0) {
            do {
                Matrix_Push(&gGfxMatrix);
                Matrix_Push(&gCalcMatrix);
                if (var_s4 == 0xB) {
                    Matrix_Scale(gCalcMatrix, 1.5f, 1.5f, 1.5f, (u8) 1);
                    Matrix_Mult(gGfxMatrix, gCalcMatrix, 1U);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    temp_v0_4 = gMasterDisp;
                    gMasterDisp = temp_v0_4 + 8;
                    temp_v0_4->words.w1 = 0x2000;
                    temp_v0_4->words.w0 = 0xB7000000;
                    temp_v0_5 = gMasterDisp;
                    gMasterDisp = temp_v0_5 + 8;
                    temp_v0_5->words.w1 = (u32) &D_600F1F0;
                    temp_v0_5->words.w0 = 0x06000000;
                    Matrix_MultVec3f(gCalcMatrix, &sp90, arg3);
                } else {
                    Matrix_Scale(gCalcMatrix, 2.0f, 2.0f, 2.0f, (u8) 1);
                    Matrix_Mult(gGfxMatrix, gCalcMatrix, 1U);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    temp_v0_6 = gMasterDisp;
                    gMasterDisp = temp_v0_6 + 8;
                    temp_v0_6->words.w1 = 0x2000;
                    temp_v0_6->words.w0 = 0xB6000000;
                    temp_v0_7 = gMasterDisp;
                    gMasterDisp = temp_v0_7 + 8;
                    temp_v0_7->words.w1 = (u32) &D_6015EE0;
                    temp_v0_7->words.w0 = 0x06000000;
                    if (arg6 != 0xC) {
                        Matrix_MultVec3f(gCalcMatrix, &sp90, arg3);
                    }
                }
                Matrix_Pop(&gGfxMatrix);
                Matrix_Pop(&gCalcMatrix);
                Matrix_RotateY(gCalcMatrix, var_s3->y * 0.017453292f, 1U);
                Matrix_RotateX(gCalcMatrix, var_s3->x * 0.017453292f, 1U);
                Matrix_Translate(gCalcMatrix, 0.0f, 0.0f, arg5, (u8) 1);
                var_s4 += 1;
                var_s3 += 0xC;
            } while (var_s4 != arg6);
        }
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_E16C50_8018C0D0(f32 *arg0, f32 arg1, Vec3f *arg2, f32 arg3, s32 arg4) {
    Vec3f spB0;
    f32 spAC;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    f32 *temp_s2;
    f32 *var_s5;
    f32 temp_fs4;
    f32 var_fs3;
    s32 var_s4;

    spB0.x = D_E16C50_801BF4D0.x;
    spB0.y = D_E16C50_801BF4D0.y;
    spB0.z = D_E16C50_801BF4D0.z;
    var_fs3 = 5.0f;
    if (!(gFrameCount & 1)) {
        spAC = 0.0f;
    } else {
        spAC = 180.0f;
        var_fs3 = 5.0f - (2.0f * (5.0f / 10.0f));
    }
    Matrix_Push(&gGfxMatrix);
    Matrix_Push(&gCalcMatrix);
    Matrix_Copy(gCalcMatrix, &gIdentityMatrix);
    temp_v0 = gMasterDisp;
    gMasterDisp = temp_v0 + 8;
    temp_v0->words.w1 = 0x2000;
    temp_v0->words.w0 = 0xB6000000;
    Matrix_RotateZ(gCalcMatrix, (D_E16C50_801C22F0.unk_34 + arg1) * 0.017453292f, 1U);
    Matrix_Translate(gCalcMatrix, 0.0f, -360.0f, 120.0f, (u8) 1);
    temp_fs4 = 90.0f - arg3;
    Matrix_RotateX(gCalcMatrix, -temp_fs4 * 0.017453292f, 1U);
    Matrix_Scale(gCalcMatrix, 0.7f, 0.7f, 0.7f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    var_s4 = 0;
    var_s5 = arg0;
    do {
        Matrix_Push(&gGfxMatrix);
        Matrix_Push(&gCalcMatrix);
        if (var_s4 == 0x10) {
            temp_s2 = &D_E16C50_801C22F0.r[arg4];
            Matrix_RotateX(gCalcMatrix, 1.3962634f, 1U);
            Matrix_RotateX(gCalcMatrix, temp_fs4 * 0.017453292f, 1U);
            Matrix_Scale(gCalcMatrix, var_fs3, var_fs3, 1.0f, (u8) 1);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1U);
            Matrix_SetGfxMtx(&gMasterDisp);
            RCP_SetupDL(&gMasterDisp, 0x31);
            temp_v0_2 = gMasterDisp;
            gMasterDisp = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xFA000000;
            temp_v0_2->words.w1 = (((s32) temp_s2->unk18 & 0xFF) << 8) | ((s32) temp_s2->unk0 << 0x18) | (((s32) temp_s2->unkC & 0xFF) << 0x10) | 0xFF;
            temp_v0_3 = gMasterDisp;
            gMasterDisp = temp_v0_3 + 8;
            temp_v0_3->words.w1 = 0xFF0000FF;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v0_4 = gMasterDisp;
            gMasterDisp = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) D_1024AC0;
            temp_v0_4->words.w0 = 0x06000000;
            Matrix_MultVec3f(gCalcMatrix, &spB0, arg2);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x2F);
            temp_v0_5 = gMasterDisp;
            gMasterDisp = temp_v0_5 + 8;
            temp_v0_5->words.w1 = 0xFF4040C0;
            temp_v0_5->words.w0 = 0xFA000000;
            Matrix_Translate(gCalcMatrix, 0.0f, -60.0f, 0.0f, (u8) 1);
            Matrix_Scale(gCalcMatrix, 2.0f, 3.0f, 1.0f, (u8) 1);
            Matrix_RotateY(gCalcMatrix, 0.017453292f * spAC, 1U);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1U);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v0_6 = gMasterDisp;
            gMasterDisp = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) D_102F5E0;
            temp_v0_6->words.w0 = 0x06000000;
        }
        Matrix_Pop(&gCalcMatrix);
        Matrix_Pop(&gGfxMatrix);
        Matrix_Translate(gCalcMatrix, 0.0f, -120.0f, 0.0f, (u8) 1);
        Matrix_RotateX(gCalcMatrix, -0.34906584f, 1U);
        Matrix_RotateZ(gCalcMatrix, *var_s5 * 0.017453292f, 1U);
        var_s4 += 4;
        var_s5 += 4;
    } while (var_s4 != 0x14);
    Matrix_Pop(&gCalcMatrix);
    Matrix_Pop(&gGfxMatrix);
}

void func_E16C50_8018C54C(Object_408_302 *boss302) {
    f32 sp114;
    f32 sp108;
    f32 spFC;
    Vec3f spD0;
    Vec3f spC4;
    Vec3f spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    s32 spA4;
    Object_408_302 *sp68;
    s32 sp64;
    Vec3f *sp60;
    Gfx *temp_v0;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Object_408_302 *var_t3;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    Vec3f *temp_a0_3;
    Vec3f *temp_v1;
    Vec3f *temp_v1_2;
    Vec3f *temp_v1_3;
    f32 temp_fv0;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_12;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 var_s1;
    s16 var_v1;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v0;
    void *temp_v0_7;

    if (boss302->unk_04E == 0) {
        RCP_SetupDL(&gMasterDisp, 0x31);
        temp_v0 = gMasterDisp;
        gMasterDisp = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = ((s32) D_E16C50_801C22F0.unk_24 & 0xFF) | ~0xFF;
        temp_v0_2 = gMasterDisp;
        gMasterDisp = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFB000000;
        temp_v0_2->words.w1 = 0xFFFF00FF;
        Matrix_Scale(gGfxMatrix, 10.0f, 10.0f, 10.0f, (u8) 1);
        Matrix_RotateZ(gGfxMatrix, boss302->unk_15C * 0.017453292f, 1U);
        Matrix_SetGfxMtx(&gMasterDisp);
        temp_v0_3 = gMasterDisp;
        gMasterDisp = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) D_101C2E0;
        temp_v0_3->words.w0 = 0x06000000;
        return;
    }
    if (D_E16C50_801C22F0.unk_24 != 0.0f) {
        Animation_GetFrameData(&D_6018994, 0, &spD0);
        if (D_E16C50_801C22F0.unk_24 != 255.0f) {
            RCP_SetupDL(&gMasterDisp, 0x47);
            temp_v0_4 = gMasterDisp;
            gMasterDisp = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFA000000;
            temp_v0_4->words.w1 = ((s32) D_E16C50_801C22F0.unk_24 & 0xFF) | ~0xFF;
            spAC = 0.0f;
            if (!(gFrameCounter & 1)) {
                spAC = 0.0f;
            }
            spB4 = 0.0f;
            spB0 = 0.0f;
            Matrix_RotateZ(gCalcMatrix, (f32) gFrameCount * 6.0f * 0.017453292f, 0U);
            Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &spAC, &spB8);
            Matrix_Translate(gGfxMatrix, (bitwise f32) spB8, spB8.y, 0.0f, (u8) 1);
            temp_fv0 = boss302->unk_3F8;
            Matrix_Scale(gGfxMatrix, temp_fv0, temp_fv0, temp_fv0, (u8) 1);
            Matrix_RotateZ(gGfxMatrix, (f32) gFrameCount * 10.0f * 0.017453292f, 1U);
            Matrix_Scale(gGfxMatrix, boss302->unk_160, boss302->unk_164, 1.0f, (u8) 1);
            Matrix_RotateZ(gGfxMatrix, -(f32) gFrameCount * 10.0f * 0.017453292f, 1U);
            Matrix_Scale(gGfxMatrix, boss302->unk_160, boss302->unk_164, 1.0f, (u8) 1);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x1B);
            if (boss302->timer_05C & 1) {
                temp_v0_5 = gMasterDisp;
                gMasterDisp = temp_v0_5 + 8;
                temp_v0_5->words.w0 = 0xFA000000;
                temp_v0_5->words.w1 = 0xFF0000FF;
            } else {
                temp_v0_6 = gMasterDisp;
                gMasterDisp = temp_v0_6 + 8;
                temp_v0_6->words.w0 = 0xFA000000;
                temp_v0_6->words.w1 = (((s32) D_E16C50_801C22F0.unk_28[1] & 0xFF) << 8) | ((s32) D_E16C50_801C22F0.unk_28[0] << 0x18) | (((s32) D_E16C50_801C22F0.unk_28[2] & 0xFF) << 0x10) | 0xFF;
            }
        }
        spFC -= boss302->unk_0D8;
        sp108 -= boss302->unk_0D8;
        sp114 -= boss302->unk_0D8;
        Animation_DrawSkeleton(1, &D_6018BA0, &spD0, NULL, NULL, boss302 + 0x40, &gIdentityMatrix);
        if (boss302->unk_3F8 >= 1.0f) {
            var_s1 = 0;
            var_t3 = boss302;
            do {
                if ((var_t3->unk_0CA[0] == 0) && (boss302->unk_04E != 3)) {
                    sp64 = var_s1 * 4;
                    if (((&D_E16C50_801C2250.unk_00[2])[var_s1] == 0) && !(gFrameCount & 3) && (var_t3->unk_0BE[0] != 0) && (D_80177854 != 0x64)) {
                        sp60 = &boss302->unk_1AC[var_s1];
                        sp68 = var_t3;
                        Matrix_RotateY(gCalcMatrix, boss302->obj.rot.y * 0.017453292f, 0U);
                        Matrix_RotateX(gCalcMatrix, boss302->obj.rot.x * 0.017453292f, 1U);
                        Matrix_RotateZ(gCalcMatrix, boss302->obj.rot.z * 0.017453292f, 1U);
                        Matrix_MultVec3f(gCalcMatrix, sp60, &spC4);
                        func_8007D0E0(boss302->obj.pos.x + (bitwise f32) spC4, boss302->obj.pos.y + spC4.y, boss302->obj.pos.z + spC4.z, 20.0f);
                        var_v0 = D_E16C50_801C2250.unk_00[0x1A];
                        spB8 = boss302->obj.pos.x + (bitwise f32) spC4;
                        var_t3 = sp68;
                        spB8.y = boss302->obj.pos.y + spC4.y;
                        spB8.z = boss302->obj.pos.z + spC4.z;
                        if (var_v0 == 0) {
                            func_8007A6F0(&spB8, 0x2903B009);
                            var_v0 = D_E16C50_801C2250.unk_00[0x1A];
                            var_t3 = sp68;
                        }
                        temp_t7 = var_v0 + 1;
                        D_E16C50_801C2250.unk_00[0x1A] = temp_t7;
                        D_E16C50_801C2250.unk_00[0x1A] = temp_t7 & 1;
                        var_t3->unk_0BE[0] -= 1;
                        if (var_t3->unk_0BE[0] <= 0) {
                            var_t3->unk_0AC[0] = 4;
                            boss302->unk_0D4 = 1;
                            var_t0 = 0;
                            temp_v0_7 = boss302 + sp64;
                            temp_v0_7->unk130 = 0.0f;
                            temp_v0_7->unk10C = 0.0f;
                            temp_v0_7->unk124 = 0.0f;
                            temp_v0_7->unk100 = 0.0f;
                            temp_v0_7->unk13C = -90.0f;
                            do {
                                if (var_s1 == 0) {
                                    D_E16C50_801BEE90[var_t0] = 3.0f;
                                    D_E16C50_801BEEC0[var_t0] = 3.0f;
                                    temp_v1 = &D_E16C50_801BEE00[var_t0];
                                    temp_a0 = &D_E16C50_801BED70[var_t0];
                                    temp_a0->x = 0.0f;
                                    temp_a0->y = 0.0f;
                                    temp_v1->x = 0.0f;
                                    temp_v1->y = 0.0f;
                                }
                                if (var_s1 == 1) {
                                    D_E16C50_801BF010[var_t0] = 3.0f;
                                    D_E16C50_801BF040[var_t0] = 3.0f;
                                    temp_v1_2 = &D_E16C50_801BEF80[var_t0];
                                    temp_a0_2 = &D_E16C50_801BEEF0[var_t0];
                                    temp_a0_2->x = 0.0f;
                                    temp_a0_2->y = 0.0f;
                                    temp_v1_2->x = 0.0f;
                                    temp_v1_2->y = 0.0f;
                                }
                                if (var_s1 == 2) {
                                    D_E16C50_801BF190[var_t0] = 3.0f;
                                    D_E16C50_801BF1C0[var_t0] = 3.0f;
                                    temp_v1_3 = &D_E16C50_801BF100[var_t0];
                                    temp_a0_3 = &D_E16C50_801BF070[var_t0];
                                    temp_a0_3->x = 0.0f;
                                    temp_a0_3->y = 0.0f;
                                    temp_v1_3->x = 0.0f;
                                    temp_v1_3->y = 0.0f;
                                }
                                var_t0 += 1;
                            } while (var_t0 != 0xC);
                        }
                    }
                }
                var_s1 += 1;
                var_t3 += 2;
            } while (var_s1 != 3);
            func_E16C50_8018BCD4(D_E16C50_801BED70, 0.0f, boss302->unk_13C[0], boss302->unk_1AC, boss302->unk_088[0] & 1, boss302->unk_124[0] + boss302->unk_100[0], (s32) boss302->unk_0BE[0], boss302->unk_0D8);
            func_E16C50_8018BCD4(D_E16C50_801BEEF0, -120.0f, boss302->unk_13C[1], &boss302->unk_1AC[1], boss302->unk_088[1] & 1, boss302->unk_124[1] + boss302->unk_100[1], (s32) boss302->unk_0BE[1], boss302->unk_0D8);
            func_E16C50_8018BCD4(D_E16C50_801BF070, 120.0f, boss302->unk_13C[2], &boss302->unk_1AC[2], boss302->unk_088[2] & 1, boss302->unk_124[2] + boss302->unk_100[2], (s32) boss302->unk_0BE[2], boss302->unk_0D8);
            if ((boss302->unk_0A6[0] != 0) && (boss302->unk_04E >= 3) && (D_E16C50_801C22F0.unk_24 == 255.0f) && (D_E16C50_801C2250.unk_00[0] == 0)) {
                func_E16C50_8018C0D0(D_E16C50_801BF1F0, 0.0f, &boss302->unk_1AC[3], boss302->unk_0D8, 0);
            }
            if ((boss302->unk_0A6[1] != 0) && (boss302->unk_04E >= 3) && (D_E16C50_801C22F0.unk_24 == 255.0f) && (D_E16C50_801C2250.unk_00[0] == 0)) {
                func_E16C50_8018C0D0(D_E16C50_801BF220, -120.0f, &boss302->unk_1AC[4], boss302->unk_0D8, 1);
            }
            if ((boss302->unk_0A6[2] != 0) && (boss302->unk_04E >= 3) && (D_E16C50_801C22F0.unk_24 == 255.0f) && (D_E16C50_801C2250.unk_00[0] == 0)) {
                func_E16C50_8018C0D0(D_E16C50_801BF250, 120.0f, &boss302->unk_1AC[5], boss302->unk_0D8, 2);
            }
            temp_v0_8 = boss302->unk_0BA;
            if (temp_v0_8 != 0) {
                var_v1 = boss302->timer_058;
                var_t0_2 = temp_v0_8 - 1;
                if ((var_v1 != 0) && !(var_v1 & 3)) {
                    spA4 = var_t0_2;
                    Audio_PlaySfx(0x29034003U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    var_v1 = boss302->timer_058;
                }
                if (var_v1 == (s16) 1) {
                    temp_v0_9 = boss302->unk_0BA;
                    if (temp_v0_9 == (s16) 2) {
                        spA4 = var_t0_2;
                        func_800BA808(gMsg_ID_7085, 0xA);
                    } else if (temp_v0_9 == (s16) 1) {
                        spA4 = var_t0_2;
                        func_800BA808(gMsg_ID_7086, 0x14);
                    }
                }
                temp_v1_4 = D_E16C50_801BF310[var_t0_2];
                temp_v0_10 = boss302->unk_0B4;
                if (temp_v0_10 != temp_v1_4) {
                    if (temp_v0_10 < temp_v1_4) {
                        boss302->unk_0B4 = temp_v0_10 + 1;
                    } else {
                        boss302->unk_0B4 = temp_v0_10 - 1;
                    }
                }
                temp_v1_5 = D_E16C50_801BF31C[var_t0_2];
                temp_v0_11 = boss302->unk_0B6;
                if (temp_v0_11 != temp_v1_5) {
                    if (temp_v0_11 < temp_v1_5) {
                        boss302->unk_0B6 = temp_v0_11 + 1;
                    } else {
                        boss302->unk_0B6 = temp_v0_11 - 1;
                    }
                }
                temp_v1_6 = D_E16C50_801BF328[var_t0_2];
                temp_v0_12 = boss302->unk_0B8;
                if (temp_v0_12 != temp_v1_6) {
                    if (temp_v0_12 < temp_v1_6) {
                        boss302->unk_0B8 = temp_v0_12 + 1;
                    } else {
                        boss302->unk_0B8 = temp_v0_12 - 1;
                    }
                }
            } else {
                Math_SmoothStepToF(&boss302->unk_14C, 0.0f, 1.0f, 10.0f, 0.0001f);
                if ((boss302->timer_054 == 0) && (boss302->unk_0D0 == 4) && (D_E16C50_801C2250.unk_00[0x1F] == 0)) {
                    func_800BA808(gMsg_ID_7087, 0x1E);
                    boss302->unk_0D0 = 5;
                    temp_t7_2 = D_E16C50_801C2250.unk_00[0x1F] + 1;
                    D_E16C50_801C2250.unk_00[0x1F] = temp_t7_2;
                    D_E16C50_801C2250.unk_00[0x1F] = temp_t7_2 & 1;
                }
            }
        }
        Matrix_Push(&gGfxMatrix);
        RCP_SetupDL(&gMasterDisp, 0x47);
        Matrix_Translate(gGfxMatrix, 0.0f, 2.0f, 70.0f, (u8) 1);
        Matrix_Scale(gGfxMatrix, 1.7f, 1.7f, 1.7f, (u8) 1);
        if (boss302->timer_05C & 1) {
            temp_v0_13 = gMasterDisp;
            gMasterDisp = temp_v0_13 + 8;
            temp_v0_13->words.w0 = 0xFA000000;
            temp_v0_13->words.w1 = 0xFF0000FF;
        } else {
            temp_v0_14 = gMasterDisp;
            gMasterDisp = temp_v0_14 + 8;
            temp_v0_14->words.w0 = 0xFA000000;
            temp_v0_14->words.w1 = ((s32) D_E16C50_801C22F0.unk_24 & 0xFF) | ~0xFF;
        }
        Matrix_SetGfxMtx(&gMasterDisp);
        temp_v0_15 = gMasterDisp;
        gMasterDisp = temp_v0_15 + 8;
        temp_v0_15->words.w1 = (u32) &D_601B2B0;
        temp_v0_15->words.w0 = 0x06000000;
        Matrix_Pop(&gGfxMatrix);
        RCP_SetupDL(&gMasterDisp, 0x47);
        if (D_E16C50_801C22F0.unk_24 != 255.0f) {
            temp_v0_16 = gMasterDisp;
            gMasterDisp = temp_v0_16 + 8;
            temp_v0_16->words.w0 = 0xFA000000;
            temp_v0_16->words.w1 = ((s32) D_E16C50_801C22F0.unk_24 & 0xFF) | (boss302->unk_0B4 << 0x18) | ((boss302->unk_0B6 & 0xFF) << 0x10) | ((boss302->unk_0B8 & 0xFF) << 8);
        } else {
            temp_v0_17 = gMasterDisp;
            gMasterDisp = temp_v0_17 + 8;
            temp_v0_17->words.w0 = 0xFA000000;
            temp_v0_17->words.w1 = ((s32) boss302->unk_14C & 0xFF) | (boss302->unk_0B4 << 0x18) | ((boss302->unk_0B6 & 0xFF) << 0x10) | ((boss302->unk_0B8 & 0xFF) << 8);
        }
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 74.0f, (u8) 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        temp_v0_18 = gMasterDisp;
        gMasterDisp = temp_v0_18 + 8;
        temp_v0_18->words.w1 = (u32) &D_6011910;
        temp_v0_18->words.w0 = 0x06000000;
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 74.0f, (u8) 1);
    }
}

void func_E16C50_8018D3CC(s32 arg0, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 xRot, f32 yRot, f32 zRot) {
    PlayerShot *var_s0;

    var_s0 = gPlayerShots;
loop_1:
    if (var_s0->obj.status == 0) {
        PlayerShot_Initialize(var_s0);
        var_s0->vel.z = zVel;
        var_s0->vel.x = xVel;
        var_s0->obj.pos.y = yPos;
        var_s0->vel.y = yVel;
        var_s0->obj.pos.x = xPos;
        var_s0->obj.pos.z = zPos;
        var_s0->obj.status = 1;
        var_s0->obj.rot.x = xRot + 180.0f;
        var_s0->obj.rot.z = -zRot;
        var_s0->unk_58 = 1;
        var_s0->unk_60 = 0;
        var_s0->obj.id = (u16) 1U;
        var_s0->unk_64 = 0x96;
        var_s0->playerNum = 0x64;
        var_s0->obj.rot.y = yRot;
        Audio_PlaySfx(0x2900000DU, &var_s0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        return;
    }
    var_s0 += 0x70;
    if (var_s0 == (gPlayerShots + 0x460)) {
        return;
    }
    goto loop_1;
}

void func_E16C50_8018D4E0(Object_2F4 *obj2F4) {
    s32 var_s0;

    func_8007BFFC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 0.0f, 0.0f, 0.0f, 4.0f, 0x14);
    func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 7.0f);
    func_8007B344(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 6.0f, 5);
    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
    var_s0 = 0;
    do {
        func_800794CC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 1.0f);
        var_s0 += 1;
    } while (var_s0 != 0xF);
    func_8007A6F0(&obj2F4->obj.pos, 0x2903B009);
}

void func_E16C50_8018D5C8(void) {
    Object_2F4_Initialize(gObjects2F4);
    gObjects2F4->obj.status = 1;
    gObjects2F4->obj.pos.x = 1600.0f;
    gObjects2F4->obj.pos.y = 3750.0f;
    gObjects2F4->obj.pos.z = 13000.0f;
    gObjects2F4->unk_0B6 = 1;
    gObjects2F4->unk_0B8 = 0x5A;
    gObjects2F4->unk_114 = 0.0f;
    gObjects2F4->obj.id = 0xC3;
    Object_SetInfo(&gObjects2F4->info, (u32) 0xC3U);
    Audio_PlaySfx(0x11030010U, &gObjects2F4->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8018D694(Object_2F4 *obj2F4, s32 arg1) {
    ? sp2C;
    void *temp_v0;

    M2C_MEMCPY_ALIGNED(&sp2C, D_E16C50_801BF4DC, 0x3C);
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 2;
    obj2F4->obj.id = 0xC3;
    temp_v0 = (arg1 * 0xC) + &sp2C;
    obj2F4->obj.pos.x = temp_v0->unk0 + 100.0f;
    obj2F4->obj.pos.y = temp_v0->unk4 + 350.0f;
    obj2F4->unk_0B8 = 1;
    obj2F4->unk_0B6 = 0x1C;
    obj2F4->unk_07C = (s32) 1;
    obj2F4->unk_0F4.y = 90.0f;
    obj2F4->unk_114 = 1.5f;
    obj2F4->obj.pos.z = temp_v0->unk8 + 1000.0f;
    obj2F4->unk_130 = Rand_ZeroOneSeeded() * 360.0f;
    obj2F4->unk_134 = Rand_ZeroOneSeeded() * 360.0f;
    obj2F4->unk_138 = Rand_ZeroOneSeeded() * 360.0f;
    Object_SetInfo(&obj2F4->info, (u32) obj2F4->obj.id);
    Audio_PlaySfx(0x31000011U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8018D804(Object_2F4 *obj2F4, s32 arg1) {
    ? sp2C;
    Player *sp28;
    Player *temp_v1;
    void *temp_v0;

    M2C_MEMCPY_ALIGNED(&sp2C, D_E16C50_801BF518, 0x24);
    temp_v1 = gPlayer;
    sp28 = temp_v1;
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 2;
    obj2F4->obj.id = 0xC3;
    temp_v0 = (arg1 * 0xC) + &sp2C;
    obj2F4->obj.pos.x = temp_v0->unk0 + temp_v1->pos.x;
    obj2F4->obj.pos.y = temp_v0->unk4 + temp_v1->pos.y;
    obj2F4->unk_0B8 = 5;
    obj2F4->unk_07C = 1;
    obj2F4->unk_114 = 0.0f;
    obj2F4->obj.pos.z = temp_v0->unk8 + temp_v1->pos.z;
    Object_SetInfo(&obj2F4->info, 0xC3U & 0xFFFF);
    Audio_PlaySfx(0x3100000CU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8018D920(Vec3f *arg0) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Vec3f sp44;
    f32 temp_fa1;
    f32 temp_fv0;

    temp_fv0 = arg0->z;
    temp_fa1 = (temp_fv0 - 1000.0f) - temp_fv0;
    sp64 = temp_fa1;
    sp60 = Math_RadToDeg(Math_Atan2F(0.0f, temp_fa1));
    sp5C = Math_RadToDeg(-Math_Atan2F(0.0f, sqrtf(0.0f + (sp64 * sp64))));
    Matrix_RotateY(gCalcMatrix, 0.017453292f * sp60, 0U);
    Matrix_RotateX(gCalcMatrix, 0.017453292f * sp5C, 1U);
    sp50 = 0.0f;
    sp54 = 0.0f;
    sp58 = 100.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp50, &sp44);
    func_E16C50_8018D3CC(0x64, arg0->x, arg0->y, arg0->z, (bitwise f32) sp44, sp44.y, sp44.z, sp5C, sp60, 0.0f);
}

void func_E16C50_8018DA58(Object_2F4 *obj2F4) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    Vec3f sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 var_fv1;
    s16 temp_v0;
    s16 temp_v1;

    temp_v1 = obj2F4->unk_0B8;
    switch (temp_v1) {                              /* irregular */
    case 0x1:
        obj2F4->unk_130 += 2.5f;
        temp_ft1 = __sinf(obj2F4->unk_130 * 0.017453292f) * 10.0f;
        obj2F4->unk_134 += 1.0f;
        obj2F4->unk_0F4.z = temp_ft1;
        obj2F4->obj.pos.y += __sinf(obj2F4->unk_134 * 0.017453292f) * 1.5f;
        obj2F4->unk_138 += 1.0f;
        obj2F4->obj.pos.z += __cosf(obj2F4->unk_138 * 0.017453292f) * 1.5f;
        break;
    case 0x2:
        Math_SmoothStepToF(&obj2F4->unk_0F4.z, -180.0f, 0.1f, 3.0f, 0.0f);
        break;
    case 0x3:
        Math_SmoothStepToF(&obj2F4->unk_0F4.z, -45.0f, 0.05f, 2.0f, 0.0f);
        Math_SmoothStepToAngle(&obj2F4->unk_0F4.y, 340.0f, 0.05f, 2.4f, 0.0f);
        Math_SmoothStepToF(&obj2F4->unk_0F4.x, 3.0f, 0.05f, 1.0f, 0.0f);
        Math_SmoothStepToF(&obj2F4->unk_114, 30.0f, 0.1f, 3.0f, 0.0f);
        break;
    case 0x6:
    case 0xB:
    case 0x10:
        obj2F4->unk_0B8 = temp_v1 + 1;
        Audio_PlaySfx(0x09000002U, &obj2F4->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        obj2F4->unk_188 = 5.0f;
        /* fallthrough */
    case 0x7:
    case 0xC:
    case 0x11:
        obj2F4->unk_07C = 2;
        Math_SmoothStepToF(&obj2F4->unk_114, 50.0f, 0.1f, 3.0f, 0.01f);
        temp_v0 = obj2F4->unk_0B8;
        switch (temp_v0) {                          /* switch 1; irregular */
        case 7:                                     /* switch 1 */
            sp48 = -100.0f;
            sp4C = 100.0f;
            sp44 = -999.0f;
            break;
        case 12:                                    /* switch 1 */
            sp4C = -100.0f;
            sp48 = -100.0f;
            sp44 = -999.0f;
            break;
        case 17:                                    /* switch 1 */
            sp48 = -100.0f;
            sp4C = 100.0f;
            sp44 = -999.0f;
            break;
        }
        sp3C = Math_RadToDeg(Math_Atan2F(sp4C, sp44));
        temp_fv0 = Math_RadToDeg(-Math_Atan2F(sp48, sqrtf((sp4C * sp4C) + (sp44 * sp44))));
        var_fv1 = temp_fv0;
        if ((temp_fv0 + 40.0f) >= 360.0f) {
            var_fv1 = temp_fv0 - 360.0f;
        }
        if (var_fv1 > 180.0f) {
            var_fv1 = 0.0f;
        }
        sp40 = var_fv1;
        sp38 = Math_SmoothStepToAngle(&obj2F4->unk_0F4.y, sp3C, 0.5f, 2.0f, 0.0001f) * 30.0f;
        Math_SmoothStepToAngle(&obj2F4->unk_0F4.x, var_fv1, 0.5f, 2.0f, 0.0001f);
        Math_SmoothStepToAngle(&obj2F4->unk_0F4.z, sp38, 0.1f, 5.0f, 0.0001f);
        break;
    case 0x5B:
        Math_SmoothStepToF(&obj2F4->obj.pos.y, 0.0f, 0.1f, 5.0f, 0.1f);
        Math_SmoothStepToF(&obj2F4->obj.pos.z, 0.0f, 1.0f, 20.0f, 20.0f);
        break;
    }
    Matrix_RotateY(gCalcMatrix, (obj2F4->unk_0F4.y + 180.0f) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, -(obj2F4->unk_0F4.x * 0.017453292f), 1U);
    sp5C = 0.0f;
    sp60 = 0.0f;
    sp64 = obj2F4->unk_114;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp5C, &sp50);
    obj2F4->vel.x = (bitwise f32) sp50;
    obj2F4->vel.y = sp50.y;
    obj2F4->obj.rot.x = -obj2F4->unk_0F4.x;
    obj2F4->vel.z = sp50.z;
    obj2F4->obj.rot.y = obj2F4->unk_0F4.y + 180.0f;
    obj2F4->obj.rot.z = -obj2F4->unk_0F4.z;
}

void func_E16C50_8018DF74(Player *player) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    Vec3f sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp40;
    f32 sp38;
    f32 sp34;
    f32 sp28;
    f32 *var_at;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_ft3;
    f32 temp_ft4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v1;

    temp_v0 = player->unk_1D0;
    switch (temp_v0) {                              /* switch 3; irregular */
    case 0:                                         /* switch 3 */
        D_80177A80 = 0;
        player->unk_1D0 = 1;
        Rand_SetSeed(1, 0x7148, 0x2694);
        func_E16C50_8018D694(gObjects2F4 + 0x2F4, 0);
        func_E16C50_8018D694(gObjects2F4 + 0x5E8, 1);
        func_E16C50_8018D694(gObjects2F4 + 0x11B8, 2);
        func_E16C50_8018D694(gObjects2F4 + 0x14AC, 3);
        func_E16C50_8018D694(gObjects2F4 + 0x17A0, 4);
        func_E16C50_8018D5C8();
        player->pos.y = 350.0f;
        player->pos.z = 16000.0f;
        player->pos.x = 0.0f;
        player->unk_0D0 = 30.0f;
        if (*(gTeamShields + 4) > 0) {
            func_E16C50_8018D804(gObjects2F4 + 0x8DC, 0);
        }
        if (*(gTeamShields + 8) > 0) {
            func_E16C50_8018D804(gObjects2F4 + 0xBD0, 1);
        }
        if (*(gTeamShields + 0xC) > 0) {
            func_E16C50_8018D804(gObjects2F4 + 0xEC4, 2);
        }
        gObjects2F4->unk_114 = 20.0f;
        *(gObjects2F4 + 0x9F0) = 30.0f;
        *(gObjects2F4 + 0xCE4) = 30.0f;
        *(gObjects2F4 + 0xFD8) = 30.0f;
        *(D_80177A48 + 0x10) = 270.0f;
        *(D_80177A48 + 0x14) = 1000.0f;
        *(D_80177A48 + 0x18) = 1100.0f;
        *(D_80177A48 + 0xC) = 0.001f;
        /* fallthrough */
    case 1:                                         /* switch 3 */
        Math_SmoothStepToF(&gObjects2F4->obj.pos.y, 0.0f, 0.01f, 10.0f, 0.001f);
        if (D_80177A80 < 0x1EA) {
            sp74 = 0.0f;
            sp78 = 0.0f;
            sp7C = D_80177A48->unk14;
            Matrix_Translate(gCalcMatrix, 0.0f, 350.0f, D_80177A48->unk18, (u8) 0);
            Matrix_RotateY(gCalcMatrix, -(*(D_80177A48 + 0x10) * 0.017453292f), 1U);
            Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp74, &sp68);
            D_80177978 = (bitwise f32) sp68;
            D_80177980 = sp68.y;
            D_80177988 = sp68.z;
            if (D_80177A80 < 0xC8) {
                Math_SmoothStepToF(D_80177A48 + 0x10, 0.0f, 0.05f, 0.56f, 0.001f);
                D_801779A0 = *(gObjects2F4 + 0x2F8);
                D_801779B8 = *(gObjects2F4 + 0x2FC);
                D_801779C0 = *(gObjects2F4 + 0x300);
                D_80177A48->unk0 = 1.0f;
                var_at = D_80177A48 + 4;
            } else {
                Math_SmoothStepToF(D_80177A48 + 0x10, 0.0f, 0.05f, 0.56f, 0.001f);
                Math_SmoothStepToF(D_80177A48 + 0x14, 0.0f, 0.003f, 100.0f, 0.001f);
                Math_SmoothStepToF(&D_801779A0, player->pos.x, 0.01f, 20.0f, 0.0001f);
                Math_SmoothStepToF(&D_801779B8, player->pos.y, 0.01f, 20.0f, 0.0001f);
                Math_SmoothStepToF(&D_801779C0, player->pos.z - 2500.0f, 0.01f, 20.0f, 0.0001f);
                D_80177A48->unk0 = 1.0f;
                var_at = D_80177A48 + 4;
            }
        } else {
            Math_SmoothStepToF(D_80177A48 + 0xC, 0.1f, 0.3f, 0.1f, 0.00001f);
            temp_fv1 = *(D_80177A48 + 0xC);
            temp_fv0 = fabsf(player->pos.x - D_80177978);
            sp38 = D_80177980;
            sp34 = D_80177988;
            temp_fa1 = temp_fv1 * fabsf(((player->pos.y * player->unk_148) + 50.0f) - D_80177980);
            D_80177978 += temp_fv1 * temp_fv0;
            temp_fv0_2 = fabsf((player->pos.z + 400.0f) - D_80177988);
            D_80177980 -= temp_fa1;
            D_80177988 -= temp_fv1 * temp_fv0_2;
            sp40 = D_801779A0;
            sp38 = D_801779B8;
            temp_fa0 = temp_fv1 * fabsf(player->pos.x - D_801779A0);
            sp34 = D_801779C0;
            sp28 = D_801779A0;
            temp_ft3 = D_801779B8 - (temp_fv1 * fabsf(((player->pos.y * player->unk_148) + 20.0f) - D_801779B8));
            temp_ft4 = temp_fv1 * fabsf((player->pos.z - 51.0f) - D_801779C0);
            D_801779A0 += temp_fa0;
            D_801779B8 = temp_ft3;
            D_801779C0 -= temp_ft4;
            D_80177A48->unk0 = 1.0f;
            var_at = D_80177A48 + 4;
        }
        *var_at = 1.0f;
        temp_v1 = D_80177A80;
        if (temp_v1 == 0x1CC) {
            player->unk_190 = 2.0f;
            player->unk_194 = 5.0f;
            Audio_PlaySfx(0x09000002U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (temp_v1 >= 0x1CC) {
            Math_SmoothStepToF(&player->unk_0D0, 50.0f, 0.1f, 3.0f, 0.01f);
        }
        if (player->pos.z < 30.0f) {
            player->pos.z = 0.0f;
            player->unk_0D0 = 0.0f;
        }
        var_v1 = D_80177A80;
        if (var_v1 == 0x21C) {
            D_80178488 = 1;
            D_80177838 = 0x32;
            player->pos.x = 0.0f;
            player->pos.z = 0.0f;
            player->pos.y = 350.0f;
            player->unk_1D0 = 0;
            player->timer_1F8 = 0;
            player->unk_0D0 = D_80161A54;
            func_8001D444(0U, 0x8007U, 0U, 0xFFU);
            player->state_1C8 = PLAYERSTATE_1C8_3;
        default:                                    /* switch 3 */
            var_v1 = D_80177A80;
        }
        break;
    }
    switch (var_v1) {                               /* switch 4; irregular */
    case 0x118:                                     /* switch 4 */
        func_8001D444(0U, 0x33U, 0U, 0xFFU);
        break;
    case 0x28:                                      /* switch 4 */
        func_800BA808(gMsg_ID_7005, 0xB4);
        break;
    case 0x9B:                                      /* switch 4 */
        sp5C = player->pos.x;
        sp60 = player->pos.y;
        sp64 = player->pos.z;
        func_E16C50_8018D920((Vec3f *) &sp5C);
        break;
    case 0xB0:                                      /* switch 4 */
        if (*(gTeamShields + 4) > 0) {
            func_E16C50_8018D920(gObjects2F4 + 0x8E0);
        }
        break;
    case 0xBB:                                      /* switch 4 */
        if (*(gTeamShields + 8) > 0) {
            func_E16C50_8018D920(gObjects2F4 + 0xBD4);
        }
        break;
    case 0xC6:                                      /* switch 4 */
        if (*(gTeamShields + 0xC) > 0) {
            func_E16C50_8018D920(gObjects2F4 + 0xEC8);
        }
        break;
    case 0xC7:                                      /* switch 4 */
        func_E16C50_8018D4E0(gObjects2F4 + 0x2F4);
        break;
    case 0xD2:                                      /* switch 4 */
        func_800BA808(gMsg_ID_7006, 0xB4);
        break;
    case 0xF0:                                      /* switch 4 */
        *(gObjects2F4 + 0x6A0) = 3;
        break;
    case 0xFA:                                      /* switch 4 */
        *(gObjects2F4 + 0x1270) = 3;
        break;
    case 0x104:                                     /* switch 4 */
        *(gObjects2F4 + 0x1564) = 3;
        break;
    case 0x10E:                                     /* switch 4 */
        *(gObjects2F4 + 0x1858) = 3;
        break;
    case 0x168:                                     /* switch 4 */
        func_800BA808(gMsg_ID_7011, 0xA);
        break;
    case 0x1AE:                                     /* switch 4 */
        *(gObjects2F4 + 0xF7C) = 0x10;
        break;
    case 0x1B8:                                     /* switch 4 */
        *(gObjects2F4 + 0xC88) = 0xB;
        break;
    case 0x1C2:                                     /* switch 4 */
        *(gObjects2F4 + 0x994) = 6;
        break;
    case 0x1E0:                                     /* switch 4 */
        func_800A6148();
        break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114 + 180.0f) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * 0.017453292f), 1U);
    if (player->state_1C8 != PLAYERSTATE_1C8_3) {
        sp74 = 0.0f;
        sp78 = 0.0f;
        sp7C = player->unk_0D0;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp74, &sp68);
        player->vel.x = (bitwise f32) sp68;
        player->vel.z = sp68.z;
        player->vel.y = sp68.y;
        player->pos.x += player->vel.x;
        player->pos.y += player->vel.y;
        player->pos.z += player->vel.z;
        player->unk_138 = player->pos.z;
    }
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48->unk0, 50000.0f, 0.001f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48->unk0, 50000.0f, 0.001f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48->unk0, 50000.0f, 0.001f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, *(D_80177A48 + 4), 50000.0f, 0.001f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, *(D_80177A48 + 4), 50000.0f, 0.001f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, *(D_80177A48 + 4), 50000.0f, 0.001f);
}

void func_E16C50_8018EA88(Object_2F4 *obj2F4) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 2;
    obj2F4->obj.id = 0xC3;
    obj2F4->obj.pos.x = 0.0f;
    obj2F4->obj.pos.y = 0.0f;
    obj2F4->obj.pos.z = gObjects408->obj.pos.z + 500.0f;
    obj2F4->unk_0B6 = 0x25;
    obj2F4->unk_0B8 = 0x64;
    obj2F4->unk_050 = 0xFF;
    obj2F4->unk_054 = 0xFF;
    obj2F4->unk_058 = 0xFF;
    obj2F4->unk_05C = 0xF0;
    obj2F4->unk_060 = 0;
    obj2F4->unk_064 = 0;
    obj2F4->unk_068 = 0xFF;
    obj2F4->unk_06C = (s32) 0x64;
    obj2F4->unk_124.x = 1.0f;
    obj2F4->scale = 1.0f;
    Object_SetInfo(&obj2F4->info, 0xC3U & 0xFFFF);
}

void func_E16C50_8018EB3C(Object_2F4 *obj2F4) {
    Player *sp2C;
    Vec3f *sp28;
    Player *temp_v0;
    Vec3f *temp_a1;

    temp_v0 = gPlayer;
    sp2C = temp_v0;
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = 0xC3;
    obj2F4->obj.pos.x = temp_v0->pos.x;
    obj2F4->obj.pos.y = temp_v0->pos.y + 600.0f;
    obj2F4->unk_0B6 = 1;
    obj2F4->unk_0B8 = 0x64;
    obj2F4->unk_114 = 0.0f;
    obj2F4->obj.pos.z = temp_v0->pos.z + 2800.0f;
    Object_SetInfo(&obj2F4->info, 0xC3U & 0xFFFF);
    temp_a1 = &obj2F4->sfxPos;
    sp28 = temp_a1;
    Audio_PlaySfx(0x11030010U, temp_a1, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Audio_PlaySfx(0x31024059U, temp_a1, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8018EC38(Object_2F4 *obj2F4, s32 arg1) {
    ? sp2C;
    Player *sp28;
    Player *temp_v1;
    void *temp_v0;

    M2C_MEMCPY_ALIGNED(&sp2C, D_E16C50_801BF53C, 0x24);
    temp_v1 = gPlayer;
    if ((gTeamShields + 4)[arg1] > 0) {
        sp28 = temp_v1;
        Object_2F4_Initialize(obj2F4);
        obj2F4->obj.status = 2;
        obj2F4->obj.id = 0xC3;
        temp_v0 = (arg1 * 0xC) + &sp2C;
        obj2F4->obj.pos.x = temp_v0->unk0 + temp_v1->pos.x;
        obj2F4->obj.pos.y = temp_v0->unk4 + temp_v1->pos.y;
        obj2F4->unk_0B8 = 0x64;
        obj2F4->unk_07C = 1;
        obj2F4->unk_114 = 0.0f;
        obj2F4->obj.pos.z = temp_v0->unk8 + temp_v1->pos.z;
        if (arg1 != 2) {
            obj2F4->unk_088 = arg1 + 2;
        }
        Object_SetInfo(&obj2F4->info, (u32) obj2F4->obj.id);
        Audio_PlaySfx(0x3100000CU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_E16C50_8018ED78(Player *player) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    Vec3f sp6C;
    Vec3f *sp3C;
    ? *var_a2;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 var_fv1;
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 temp_t4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v1;

    temp_v0 = player->unk_1D0;
    switch (temp_v0) {                              /* irregular */
    case 0:
        D_80177A80 = 0;
        player->unk_1D0 = 1;
        player->wings.unk_2C = 1;
        player->unk_194 = 5.0f;
        player->unk_190 = 2.0f;
        player->unk_0D0 = 60.0f;
        Audio_PlaySfx(0x09000002U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        *(D_80177A48 + 0xC) = 0.0f;
        /* fallthrough */
    case 1:
        Math_SmoothStepToAngle(&player->unk_130, 0.0f, 0.05f, 1.2f, 0.0001f);
        Math_SmoothStepToAngle(&player->unk_12C, 0.0f, 0.05f, 1.2f, 0.0001f);
        Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
        Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
        temp_v1 = D_80177A80;
        if (temp_v1 < 0x3C) {
            sp8C = Math_RadToDeg(Math_Atan2F(-100.0f, -1000.0f));
            temp_fv0 = Math_RadToDeg(-Math_Atan2F(-100.0f, sqrtf((-100.0f * -100.0f) + (-1000.0f * -1000.0f))));
            var_fv1 = temp_fv0;
            if ((temp_fv0 + 40.0f) >= 360.0f) {
                var_fv1 = temp_fv0 - 360.0f;
            }
            if (var_fv1 > 180.0f) {
                var_fv1 = 0.0f;
            }
            sp88 = var_fv1;
            sp84 = Math_SmoothStepToAngle(&player->unk_0E8, sp8C, 0.5f, 2.0f, 0.0001f) * 30.0f;
            Math_SmoothStepToAngle(&player->unk_0E4, var_fv1, 0.1f, 5.0f, 0.0001f);
            Math_SmoothStepToAngle(&player->unk_0EC, sp84, 0.1f, 5.0f, 0.0001f);
        }
        if (temp_v1 == 0x3C) {
            player->unk_234 = 0;
            player->unk_0D0 = 0.0f;
        }
        Math_SmoothStepToF(&D_80177978, gObjects408->obj.pos.x, 0.05f, 1000.0f, 0.001f);
        Math_SmoothStepToF(&D_80177980, gObjects408->obj.pos.y, 0.05f, 1000.0f, 0.001f);
        Math_SmoothStepToF(&D_80177988, gObjects408->obj.pos.z + D_80177D20, 0.05f, 10.0f, 0.0001f);
        player->camEye.x = D_80177978;
        player->camEye.y = D_80177980;
        player->camEye.z = D_80177988;
        var_v1 = D_80177A80;
        D_801779A0 = gObjects408->obj.pos.x;
        D_801779B8 = gObjects408->obj.pos.y;
        D_801779C0 = gObjects408->obj.pos.z + D_80177D20;
        D_80177A48->unk0 = 0.04f;
        if (var_v1 == 0x8C) {
            func_E16C50_8018EA88(gObjects2F4 + 0xBD0);
            func_E16C50_8018EA88(gObjects2F4 + 0xEC4);
            func_E16C50_8018EA88(gObjects2F4 + 0x11B8);
            var_v1 = D_80177A80;
            *(gObjects2F4 + 0xCF4) = 0.5f;
        }
        if (var_v1 >= 0xC8) {
            if (D_80178340 == 0xFF) {
                player->unk_1D0 = 2;
                func_800A6148();
                var_v1 = D_80177A80;
            } else {
                D_80178350 = 0xFF;
                D_80178354 = 0xFF;
                D_80178348 = 0xFF;
                D_80178358 = 0xFF;
                D_8017835C = 0x10;
            }
        } else if ((var_v1 == 0x83) || (var_v1 == 0x86) || (var_v1 == 0x89)) {
            D_80178354 = 0xFF;
            D_80178350 = 0xFF;
            D_80178348 = 0xFF;
            D_80178340 = 0xC0;
        } else {
            D_80178340 = 0;
            D_80178350 = 0;
            D_80178354 = 0;
            D_80178348 = 0;
        }
        if ((var_v1 == 0x92) || (var_v1 == 0x96)) {
            Audio_PlaySfx(0x2940F026U, gObjects2F4 + 0xFC4, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            var_v1 = D_80177A80;
        }
        if (var_v1 >= 0x93) {
            temp_v0_2 = *(gObjects2F4 + 0xC2C) - 4;
            *(gObjects2F4 + 0xC2C) = temp_v0_2;
            if (temp_v0_2 < 0) {
                *(gObjects2F4 + 0xC2C) = 0;
            }
            temp_v0_3 = *(gObjects2F4 + 0xC3C) - 4;
            *(gObjects2F4 + 0xC3C) = temp_v0_3;
            if (temp_v0_3 < 0) {
                *(gObjects2F4 + 0xC3C) = 0;
            }
            Math_SmoothStepToF(gObjects2F4 + 0xFE8, 450.0f, 0.03f, 1000.0f, 1.0f);
            Math_SmoothStepToF(gObjects2F4 + 0xFD4, 450.0f, 0.03f, 1000.0f, 1.0f);
            var_v1 = D_80177A80;
        }
        if (var_v1 >= 0xA1) {
            Math_SmoothStepToF(gObjects2F4 + 0x12DC, 350.0f, 0.03f, 1000.0f, 1.0f);
            Math_SmoothStepToF(gObjects2F4 + 0x12C8, 350.0f, 0.03f, 1000.0f, 1.0f);
            var_v1 = D_80177A80;
        }
        if (var_v1 >= 0x8D) {
            temp_fv0_2 = gObjects408->obj.pos.x;
            *(gObjects2F4 + 0x11BC) = temp_fv0_2;
            *(gObjects2F4 + 0xEC8) = temp_fv0_2;
            *(gObjects2F4 + 0xBD4) = temp_fv0_2;
            temp_fv0_3 = gObjects408->obj.pos.y;
            *(gObjects2F4 + 0x11C0) = temp_fv0_3;
            *(gObjects2F4 + 0xECC) = temp_fv0_3;
            *(gObjects2F4 + 0xBD8) = temp_fv0_3;
            temp_fv0_4 = gObjects408->obj.pos.z + 500.0f;
            *(gObjects2F4 + 0x11C4) = temp_fv0_4;
            *(gObjects2F4 + 0xED0) = temp_fv0_4;
            *(gObjects2F4 + 0xBDC) = temp_fv0_4;
            Math_SmoothStepToF(gObjects2F4 + 0xCE0, 600.0f, 0.03f, 1000.0f, 0.01f);
        default:
block_68:
            var_v1 = D_80177A80;
        }
        break;
    case 2:
        var_v1 = D_80177A80;
        if (var_v1 >= 0x12C) {
            if (var_v1 == 0x12C) {
                player->unk_234 = 1;
                player->pos.x = 0.0f;
                player->unk_4D8 = 0.0f;
                player->unk_130 = 0.0f;
                player->unk_12C = 0.0f;
                player->unk_034 = 0.0f;
                player->unk_110 = 0.0f;
                player->unk_0D0 = 0.0f;
                player->unk_0E4 = 0.0f;
                player->unk_0E8 = 0.0f;
                player->unk_0EC = 0.0f;
                player->unk_08C = 0.0f;
                player->pos.y = 200.0f;
                player->pos.z = 1000.0f;
                D_8015F984 = (D_80177D20 * 0.00004f) + 0.5f;
                func_E16C50_8018EC38(gObjects2F4 + 0x2F4, 0);
                func_E16C50_8018EC38(gObjects2F4 + 0x5E8, 1);
                func_E16C50_8018EC38(gObjects2F4 + 0x8DC, 2);
                func_E16C50_8018EB3C(gObjects2F4);
                *(D_80177A48 + 0x14) = 300.0f;
                *(D_80177A48 + 0x10) = 0.0f;
                *(D_80177A48 + 0x24) = 50.0f;
                D_801779A0 = player->pos.x;
                player->camAt.x = D_801779A0;
                D_801779B8 = 0.0f;
                player->camAt.y = 0.0f;
                temp_ft5 = player->pos.z + 50.0f + D_80177D20;
                D_801779C0 = temp_ft5;
                player->camAt.z = temp_ft5;
            }
            if (D_80178340 != 0) {
                D_80178358 = 0;
                D_8017835C = 4;
            } else {
                player->unk_1D0 = 3;
            }
        case 3:
            Math_SmoothStepToF(&player->pos.y, 0.0f, 0.01f, 10.0f, 0.001f);
            Math_SmoothStepToF(gObjects2F4 + 0x2FC, 40.0f, 0.01f, 10.0f, 0.001f);
            Math_SmoothStepToF(gObjects2F4 + 0x5F0, 40.0f, 0.01f, 10.0f, 0.001f);
            Math_SmoothStepToF(gObjects2F4 + 0x8E4, 88.0f, 0.01f, 10.0f, 0.001f);
            Math_SmoothStepToF(&gObjects2F4->obj.pos.y, 60.0f, 0.01f, 2.0f, 0.001f);
            temp_v1_2 = D_80177A80;
            if (temp_v1_2 < 0x435) {
                D_80177A48->unk4 = (f32) player->pos.x;
                D_80177A48->unkC = (f32) player->pos.z;
            }
            if (temp_v1_2 >= 0x3AC) {
                Math_SmoothStepToF(D_80177A48 + 0x24, 0.0f, 0.01f, 1000.0f, 0.001f);
            }
            if (temp_v1_2 < 0x435) {
                D_80177A48->unk10 = (f32) (D_80177A48->unk10 + 0.3f);
                if (D_80177A48->unk10 >= 360.0f) {
                    D_80177A48->unk10 = (f32) (D_80177A48->unk10 - 360.0f);
                }
                if (D_80177A48->unk10 < 0.0f) {
                    D_80177A48->unk10 = (f32) (D_80177A48->unk10 + 360.0f);
                }
                D_801779A0 = player->pos.x;
                D_801779B8 = 0.0f;
                D_801779C0 = D_80177A48->unk24 + player->pos.z + D_80177D20;
                D_80177A48->unk0 = 0.008f;
            } else {
                Math_SmoothStepToAngle(D_80177A48 + 0x10, 0.0f, 0.1f, 10.0f, 0.001f);
                Math_SmoothStepToF(D_80177A48 + 0x14, 0.0f, 0.1f, 1000.0f, 0.001f);
                D_8015F984 -= 0.005f;
                D_801779A0 += 2.0f;
                D_801779A0 = player->pos.x;
                player->camAt.x = D_801779A0;
                D_801779B8 = 0.0f;
                player->camAt.y = 0.0f;
                temp_ft4 = *(D_80177A48 + 0x24) + player->pos.z + D_80177D20;
                D_801779C0 = temp_ft4;
                player->camAt.z = temp_ft4;
            }
            sp78 = 0.0f;
            sp7C = 0.0f;
            sp80 = D_80177A48->unk14;
            Matrix_Translate(gCalcMatrix, D_80177A48->unk4, 0.0f, D_80177A48->unkC + D_80177D20, (u8) 0);
            Matrix_RotateY(gCalcMatrix, -(*(D_80177A48 + 0x10) * 0.017453292f), 1U);
            Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp78, &sp6C);
            D_80177978 = (bitwise f32) sp6C;
            player->camEye.x = (bitwise f32) sp6C;
            D_80177980 = sp6C.y;
            player->camEye.y = sp6C.y;
            D_80177988 = sp6C.z;
            player->camEye.z = sp6C.z;
            var_v1 = D_80177A80;
            if (var_v1 == 0x434) {
                Object_Kill(&gObjects2F4->obj, &gObjects2F4->sfxPos);
                player->unk_190 = 2.0f;
                player->unk_194 = 5.0f;
                Audio_PlaySfx(0x09000002U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                var_v1 = D_80177A80;
            }
            if (var_v1 >= 0x442) {
                D_80178354 = 0;
                D_80178350 = 0;
                D_80178348 = 0;
                D_80178358 = 0xFF;
                D_8017835C = 8;
                if (D_80178340 == 0xFF) {
                    sp3C = &player->unk_460;
                    D_800D3180[3] = Play_CheckMedalStatus(0x12CU) + 1;
                    var_a0 = gSavedTeamShields + 4;
                    var_a2 = &D_801778F4;
                    var_a1 = gTeamShields + 4;
                    var_v1_2 = &D_80177C3C;
                    do {
                        temp_v0_4 = *var_a1;
                        temp_t4 = *var_a0;
                        var_a0 += 4;
                        var_v1_2 += 4;
                        var_a1 += 4;
                        var_a2 += 4;
                        var_v1_2->unk-4 = temp_v0_4;
                        var_a0->unk-4 = temp_v0_4;
                        var_a2->unk-4 = temp_t4;
                    } while ((u32) var_a0 < (u32) &gVersusMode);
                    var_v1_3 = &D_80177C3C;
                    do {
                        if (*var_v1_3 == 0) {
                            *var_v1_3 = 0xFF;
                        }
                        var_v1_3 += 4;
                    } while (var_v1_3 != (&D_80177C3C + 0xC));
                    *D_80161A94 = *gGoldRingCount;
                    func_8001CA24(0U);
                    Audio_KillSfx(sp3C);
                    func_800A6148();
                    gNextGameState = 7;
                    gNextLevel = 0x13;
                    func_80088564();
                    var_v1 = D_80177A80;
                }
            }
            if (var_v1 == 0x410) {
                func_800182F4(0x105000FF);
                func_800182F4(0x115000FF);
                goto block_68;
            }
        }
        break;
    }
    switch (var_v1) {                               /* switch 1; irregular */
    case 0x17C:                                     /* switch 1 */
        func_8001D444(0U, 0x26U, 0U, 0xFFU);
block_86:
        var_v1 = D_80177A80;
        break;
    case 0x226:                                     /* switch 1 */
        D_80177840 = 0x64;
        break;
    case 0x2BC:                                     /* switch 1 */
        D_80177830 = 1;
        break;
    case 0x384:                                     /* switch 1 */
        D_80177830 = 0;
        break;
    case 0x3AC:                                     /* switch 1 */
        func_800BA808(gMsg_ID_7093, 0);
        goto block_86;
    case 0x42E:                                     /* switch 1 */
        *(gObjects2F4 + 0x47C) = 5.0f;
        Audio_PlaySfx(0x09000002U, gObjects2F4 + 0x3F4, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        goto block_86;
    case 0x430:                                     /* switch 1 */
        *(gObjects2F4 + 0x770) = 5.0f;
        Audio_PlaySfx(0x09000002U, gObjects2F4 + 0x6E8, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        goto block_86;
    case 0x432:                                     /* switch 1 */
        *(gObjects2F4 + 0xA64) = 5.0f;
        Audio_PlaySfx(0x09000002U, gObjects2F4 + 0x9DC, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        goto block_86;
    }
    if (var_v1 >= 0x42E) {
        Math_SmoothStepToF(gObjects2F4 + 0x408, 50.0f, 0.1f, 1000.0f, 0.001f);
        var_v1 = D_80177A80;
    }
    if (var_v1 >= 0x430) {
        Math_SmoothStepToF(gObjects2F4 + 0x6FC, 50.0f, 0.1f, 1000.0f, 0.001f);
        var_v1 = D_80177A80;
    }
    if (var_v1 >= 0x432) {
        Math_SmoothStepToF(gObjects2F4 + 0x9F0, 50.0f, 0.1f, 1000.0f, 0.001f);
        var_v1 = D_80177A80;
    }
    if (var_v1 >= 0x434) {
        Math_SmoothStepToF(&player->unk_0D0, 50.0f, 0.1f, 1000.0f, 0.001f);
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114 + 180.0f) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * 0.017453292f), 1U);
    sp78 = 0.0f;
    sp7C = 0.0f;
    sp80 = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp78, &sp6C);
    player->vel.x = (bitwise f32) sp6C;
    player->vel.z = sp6C.z;
    player->vel.y = sp6C.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48->unk0, 50000.0f, 0.0001f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48->unk0, 50000.0f, 0.0001f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48->unk0, 50000.0f, 0.0001f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48->unk0, 50000.0f, 0.0001f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48->unk0, 50000.0f, 0.0001f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48->unk0, 50000.0f, 0.0001f);
}
