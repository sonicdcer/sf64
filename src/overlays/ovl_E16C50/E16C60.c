#include "global.h"

void func_E16C50_8018A1B0(Object_408_302 *boss302, s32 arg1);
void func_E16C50_8018A2C4(Object_408_302 *obj408);
void func_E16C50_8018A464(Object_408_302 *obj408, s32 arg1);
void func_E16C50_8018B9BC(Object_408_302 *obj408);
void func_E16C50_8018BCD4(Vec3f *arg0, f32 arg1, f32 arg2, Vec3f *arg3, s32 arg4, f32 arg5, s32 arg6, f32 arg7);
void func_E16C50_8018C0D0(f32 *arg0, f32 arg1, Vec3f *arg2, f32 arg3, s32 arg4);
void func_E16C50_8018C54C(Object_408_302 *obj408);

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

// extern s32 D_E16C50_801C227C; // may be part of larger struct

typedef struct {
    s32 unk_00[40];
} UnkStruct_1C2250;


typedef struct {
    f32 r[3];
    f32 g[3];
    f32 b[3];
    f32 unk_24;
    f32 unk_28[3];
    f32 unk_34;
} UnkStruct_1C22F0;

typedef struct {
    f32 r,g,b,a;
} Color_RGBAF32;

typedef struct {
    f32 r,g,b;
} Color_RGBF32;

extern UnkStruct_1C2250 D_E16C50_801C2250;
extern UnkStruct_1C22F0 D_E16C50_801C22F0;

extern f32 D_6028578[];

extern f32 D_E16C50_801BECB0[4][3];
extern Vec3f D_E16C50_801BECE0;
extern Vec3f D_E16C50_801BECEC;
extern Vec3f D_E16C50_801BECF8;
extern Vec3f D_E16C50_801BED04;
extern Vec3f D_E16C50_801BED10;
extern Vec3f D_E16C50_801BED1C;
extern Vec3f D_E16C50_801BED28;
extern Vec3f D_E16C50_801BED34;
extern f32 D_E16C50_801BF1F0[12];
extern f32 D_E16C50_801BF220[12];
extern f32 D_E16C50_801BF250[12];
extern f32 D_E16C50_801BF280[12];
extern f32 D_E16C50_801BF2B0[12];
extern f32 D_E16C50_801BF2E0[12];
extern Color_RGBAF32 D_E16C50_801BF454[4];

void func_E16C50_801875E4(f32 xPos, f32 yPos, f32 zPos, f32 unk124y, f32 xRot, f32 yRot, s32 timer0BC, s32 unk0B4) {
    s32 i;
    Object_2F4 *obj2F4;

    for(i = 0, obj2F4 = gObjects2F4; i < ARRAY_COUNT(gObjects2F4); i++, obj2F4++) {
        if (obj2F4->obj.status == 0) {
            func_E16C50_80187530(obj2F4, xPos, yPos, zPos, unk124y, xRot, yRot, timer0BC, unk0B4);
            D_E16C50_801C2250.unk_00[11] = i + 1;
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

void func_E16C50_80187754(Object_408_302 *boss302) {
    Hitbox* hitbox;
    s32 i;
    s32* ptr;

    D_80178284 = 1;
    D_80161A44 = 25000.0f;
    D_801613A0 = 0;
    boss302->unk_060 = 780;
    boss302->unk_0E0 = boss302->unk_160 = 2.0f;
    boss302->unk_164 = 1.2f;  
    boss302->unk_0BA = 3;
    boss302->unk_0A6[0] = boss302->unk_0A6[1] = boss302->unk_0A6[2] = 40;
    boss302->unk_0AC[0] = boss302->unk_0AC[1] = boss302->unk_0AC[2] = 3;
    for (i = 0; i < 40; i++) {
        ((s32*)D_E16C50_801C2250.unk_00)[i] = 0;
    }
    D_E16C50_801C22F0.unk_24 = D_E16C50_801C22F0.unk_28[0] = D_E16C50_801C22F0.unk_28[2] = D_E16C50_801C22F0.unk_28[1] = 255.0f;
    D_E16C50_801C22F0.unk_34 = 0.0f;
    boss302->unk_0BE[0] = boss302->unk_0BE[1] = boss302->unk_0BE[2] = 0;
    boss302->unk_0B4 = 32;
    boss302->unk_0B6 = 32;
    boss302->unk_0B8 = 255;
    boss302->unk_14C = 255.0f;
    
    boss302->unk_0E4 = -1700.0f;
    boss302->unk_0EC = 30.0f;
    boss302->unk_158 = 1.0f;
    boss302->timer_050 = 500;
    boss302->info.hitbox[8] =  boss302->info.hitbox[14] = boss302->info.hitbox[20]= 195.0f;
    boss302->info.hitbox[10] = boss302->info.hitbox[16] = boss302->info.hitbox[22]= 147.0f;
    boss302->info.hitbox[12] = boss302->info.hitbox[18] = boss302->info.hitbox[24]= 153.0f;
    func_800182F4(0x102800FF);
    func_800182F4(0x112800FF);
    Audio_PlaySfx(0x11002050U, &boss302->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

#ifdef NON_MATCHING
void func_E16C50_80187944(Object_408_302 *boss302) {
    s32 i;
    f32 var_fv1;
    s32 var_s0;
    s32 sp128;
    Color_RGBAF32 *sp68;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    Object_8C *temp_s0_3;
    f32 sp104;
    Vec3f spC8[5];
    Vec3f spA4[3];
    Vec3f sp98;
    Vec3f sp8C;
    s32 temp_1;
    f32 temp2;

    D_801613A0++;
    if ((boss302->unk_04E < 6) || ((boss302->unk_04E >= 8) && (boss302->unk_04E < 12))) {
        boss302->obj.rot.y = (Math_Atan2F(gPlayer[0].camEye.x - boss302->obj.pos.x, gPlayer[0].camEye.z - (boss302->obj.pos.z + D_80177D20)) * 180.0f) / 3.1415927f;
        boss302->obj.rot.x = (-Math_Atan2F(gPlayer[0].camEye.y - boss302->obj.pos.y, sqrtf(SQ(gPlayer[0].camEye.z - (boss302->obj.pos.z + D_80177D20)) + SQ(gPlayer[0].camEye.x - boss302->obj.pos.x))) * 180.0f) / 3.1415927f;
    }
    Matrix_RotateY(gCalcMatrix, boss302->obj.rot.y * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, boss302->obj.rot.x * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, boss302->obj.rot.z * 0.017453292f, 1U);
    if ((boss302->unk_062 != 0) && (boss302->unk_060 > 0)) {
        boss302->unk_062 = 0;
        if (boss302->unk_0D8 > 5.0f) {
            if ((boss302->unk_066 == 0) && (boss302->unk_0BA == 0) && (boss302->unk_14C < 30.0f)) {
                boss302->unk_060 -= boss302->unk_064;
                boss302->timer_05C = 15;
                if (boss302->unk_060 < 390) {
                    Audio_PlaySfx(0x2943500FU, &boss302->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    Audio_PlaySfx(0x29034003U, &boss302->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (boss302->unk_060 <= 0) {
                    boss302->unk_060 = 0;
                    func_80042EC0((Object_408 *) boss302);
                    func_800BA808(gMsg_ID_15252, RCID_SLIPPY);
                    D_8017796C = -1;
                    D_8015F984 = (D_80177D20 * 0.00004f) + 0.5f;
                    Audio_PlaySfx(0x2940D09AU, &boss302->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_80161734 = 0;
                    func_800182F4(0x102800FF);
                    func_800182F4(0x112800FF);
                    boss302->unk_0EC = 5.0f;
                    boss302->unk_0E4 = -20000.0f;
                    boss302->unk_0DC = 170.0f;
                    boss302->vel.z = -20.0f;
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BECE0, &spA4[0]);
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BECEC, &spA4[1]);
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BECF8, &spA4[2]);
                    for(i = 0; i < 3; i++) {
                        func_8007D0E0(spA4[i].x + boss302->obj.pos.x, spA4[i].y + boss302->obj.pos.y, spA4[i].z + boss302->obj.pos.z, 10.0f);
                    }
                                        boss302->timer_052 = 170;
                    
                    D_E16C50_801C2250.unk_00[2] = D_E16C50_801C2250.unk_00[3] = D_E16C50_801C2250.unk_00[4] = boss302->unk_0CA[0] = boss302->unk_0CA[1] = boss302->unk_0CA[2] = 0;
                    D_Timer_80161A60 = 4;
                    boss302->unk_04E = 11;
                    Audio_PlaySfx(0x2940C00AU, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    Audio_PlaySfx(0x3143402EU, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            if (((boss302->unk_066 == 4) || (boss302->unk_066 == 5) || (boss302->unk_066 == 6)) && (boss302->unk_0BA != 0)) {
                if(1) {
                func_E16C50_8018B9BC(boss302);
                }
            }
        }
        if ((boss302->unk_066 == 1) || (boss302->unk_066 == 2) || (boss302->unk_066 == 3)) {
            func_E16C50_8018A2C4(boss302);
        }
        if (boss302->unk_066 >= 7) {
            Audio_PlaySfx(0x29121007U, &boss302->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    for(i = 0; i < 3; i++) {
        var_s0 = (boss302->unk_0A6[i] / 10) - 1;
        if (var_s0 < 0) {
            var_s0 = 0;
        }
        Math_SmoothStepToF(&D_E16C50_801C22F0.r[i], D_E16C50_801BECB0[var_s0][0], 1.0f, 10.0f, 0);
        Math_SmoothStepToF(&D_E16C50_801C22F0.g[i], D_E16C50_801BECB0[var_s0][1], 1.0f, 10.0f, 0);
        Math_SmoothStepToF(&D_E16C50_801C22F0.b[i], D_E16C50_801BECB0[var_s0][2], 1.0f, 10.0f, 0);
    }
    if ((boss302->unk_0A6[0] == 0) && (boss302->unk_0A6[1] == 0) && (boss302->unk_0A6[2] == 0) && (boss302->unk_0D8 != 0) && !(gFrameCount & 1)) {
        func_8007C120(boss302->obj.pos.x, boss302->obj.pos.y, boss302->obj.pos.z + 200.0f, boss302->vel.x, boss302->vel.y, boss302->vel.z, 0.3f, 1);
    }
    temp2 = 0.5f;
    if (((Object_408_302*) gObjects408)->unk_0BA == 1) {
        temp2 = 2.0f;
    }
    if (D_E16C50_801C2250.unk_00[10] != 0) {
        D_E16C50_801C22F0.unk_34 += temp2;
        if (D_E16C50_801C22F0.unk_34 > 360.0f) {
            D_E16C50_801C22F0.unk_34 -= 360.0f;
        }
    } else {
        D_E16C50_801C22F0.unk_34 -= temp2;
        if (D_E16C50_801C22F0.unk_34 < 0.0f) {
            D_E16C50_801C22F0.unk_34 += 360.0f;
        }
    }
    if ((boss302->unk_04E >= 3) && (boss302->unk_04E < 5) && (boss302->unk_148 == 0.0f)) {
        Math_SmoothStepToAngle(&boss302->unk_0FC, boss302->unk_158, 0.05f, 0.02f, 0.00001f);
        Math_SmoothStepToAngle(&boss302->obj.rot.z, boss302->unk_0F8, 0.05f, boss302->unk_0FC, 0.00001f);
        if (boss302->unk_0BA >= 2) {
            if (!(gFrameCount & 0x3F) && (Rand_ZeroOne() < 0.5f)) {
                boss302->unk_0F0 = gPlayer[0].camEye.x + ((Rand_ZeroOne() - 0.5f) * 500.0f);
            }
            if (!(gFrameCount & 0x3F) && (Rand_ZeroOne() < 0.5f)) {
                boss302->unk_0F4 = gPlayer[0].camEye.y + ((Rand_ZeroOne() - 0.5f) * 500.0f);
            }
        } else {
            if (!(gFrameCount & 0x1F) && (Rand_ZeroOne() < 0.7f)) {
                boss302->unk_0F0 = gPlayer[0].camEye.x + (Rand_ZeroOne() - 0.5f) * 1000.0f;
                boss302->unk_150 = 0.0f;
            }
            if (!(gFrameCount & 0x1F) && (Rand_ZeroOne() < 0.7f)) {
                boss302->unk_0F4 = gPlayer[0].camEye.y + (Rand_ZeroOne() - 0.5f) * 1000.0f;
                boss302->unk_154 = 0.0f;
            }
        }
    }
    if (boss302->unk_04E != 0) {
        Math_SmoothStepToF(&boss302->unk_0E8, boss302->unk_0EC, 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&boss302->obj.pos.z, boss302->unk_0E4 + (gPlayer[0].camEye.z - D_80177D20), 0.1f, boss302->unk_0E8, 0.00001f);
        if (boss302->unk_04E < 5) {
            sp120 = 2.0f;
            if (boss302->unk_0BA == 1) {
                sp120 = 50.0f;
            }
            Math_SmoothStepToF(&boss302->unk_150, sp120, 0.1f, 1.0f, 0.00001f);
            Math_SmoothStepToF(&boss302->unk_154, sp120, 0.1f, 1.0f, 0.00001f);
            Math_SmoothStepToF(&boss302->obj.pos.x, boss302->unk_0F0, 0.2f, boss302->unk_150, 0.00001f);
            Math_SmoothStepToF(&boss302->obj.pos.y, boss302->unk_0F4, 0.2f, boss302->unk_154, 0.00001f);
        }
        Math_SmoothStepToAngle(&boss302->unk_0D8, boss302->unk_0DC, 0.2f, boss302->unk_0E0, 0.00001f);
    }
    Math_SmoothStepToF(&boss302->unk_100[0], boss302->unk_10C[0], 0.1f, boss302->unk_118[0], 0.0001f);
    Math_SmoothStepToF(&boss302->unk_100[1], boss302->unk_10C[1], 0.1f, boss302->unk_118[1], 0.0001f);
    Math_SmoothStepToF(&boss302->unk_100[2], boss302->unk_10C[2], 0.1f, boss302->unk_118[2], 0.0001f);
    Math_SmoothStepToF(&boss302->unk_124[0], boss302->unk_130[0], 0.1f, 10.0f, 0.00001f);
    Math_SmoothStepToF(&boss302->unk_124[1], boss302->unk_130[1], 0.1f, 10.0f, 0.00001f);
    Math_SmoothStepToF(&boss302->unk_124[2], boss302->unk_130[2], 0.1f, 10.0f, 0.00001f);
    if (boss302->unk_04E > 10) {
        boss302->obj.rot.z += boss302->unk_148;
        boss302->obj.rot.z = Math_ModF(boss302->obj.rot.z, 360.0f);
        Math_SmoothStepToF(&boss302->unk_148, 5.0f, 0.1f, 0.2f, 0.0001f);
        for(i = 0; i < 10; i++) {
            func_80079618(boss302->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 500.0f), boss302->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 500.0f), boss302->obj.pos.z + ((Rand_ZeroOne() - 0.5f) * 100.0f), (Rand_ZeroOne() * 4.0f) + 1.0f);
        }
        if (boss302->timer_05C == 0) {
            boss302->timer_05C = 15;
        }
        if (!(gFrameCount & 1)) {
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED04, &spC8[0]);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED10, &spC8[1]);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED1C, &spC8[2]);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED28, &spC8[3]);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED34, &spC8[4]);
            for(i = 0; i < 5; i++) {
                var_s0 = (Rand_ZeroOne() - 0.5f) * 300.0f;
                if(i == 0) {
                    var_s0 = (Rand_ZeroOne() - 0.5f) * 100.0f;
                }
                func_8007D0E0(boss302->obj.pos.x + var_s0 + spC8[i].x, boss302->obj.pos.y + var_s0 + spC8[i].y, boss302->obj.pos.z + spC8[i].z, 10.0f);
            }
        }
        if (!(gFrameCount & 0x1F)) {
            func_8007C120(boss302->obj.pos.x, boss302->obj.pos.y, boss302->obj.pos.z + 300.0f, boss302->vel.x, boss302->vel.y, boss302->vel.z, 0.5f, 70);
        }
    }
    if (!(gFrameCount & 0xF)) {
        sp114 = fabsf(boss302->unk_0E4 / -1700.0f);
        if (sp114 < 1.0f) {
            sp114 = 1.0f;
        }
        if (sp114 > 3.0f) {
            sp114 = 3.0f;
        }
        for(i = 0; i < 3; i++) {
            var_fv1 = sp114;
            if (boss302->unk_0AC[i] != 0) {
                var_fv1 = 1.0f;
            }
            boss302->info.hitbox[8 + 6 * i] = 195.0f * var_fv1;
            boss302->info.hitbox[10 + 6 * i] = 147.0f * var_fv1;
            boss302->info.hitbox[12 + 6 * i] = 153.0f * var_fv1;
        }
    }
    switch (boss302->unk_04E) {
        case 0:
            boss302->info.hitbox[0] = 0;
            
            sp11C = gPlayer[0].pos.x - boss302->obj.pos.x;
            sp118 = gPlayer[0].pos.y - boss302->obj.pos.y;
            sp114 = gPlayer[0].pos.z - 700.0f - boss302->obj.pos.z;
            sp104 = 10.0f;
            if ((boss302->timer_050 != 0) && (boss302->timer_050 < 200)) {
                
                sp11C = gPlayer[0].camEye.x - boss302->obj.pos.x;
                sp118 = gPlayer[0].camEye.y - boss302->obj.pos.y;
                sp114 = gPlayer[0].camEye.z - D_80177D20 + boss302->unk_0E4 - boss302->obj.pos.z;
                sp104 = 100.0f;
            }
            sp10C = Math_RadToDeg(Math_Atan2F(sp11C, sp114));
            sp110 = Math_RadToDeg(-Math_Atan2F(sp118, sqrtf(SQ(sp11C) + SQ(sp114))));
            Math_SmoothStepToAngle(&boss302->unk_07C, sp10C, 1.0f, sp104, 0.00001f);
            Math_SmoothStepToAngle(&boss302->unk_078, sp110, 1.0f, sp104, 0.00001f);
            Matrix_RotateY(gCalcMatrix, boss302->unk_07C * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, boss302->unk_078 * 0.017453292f, 1U);
            sp98.x = sp98.y = 0.0f;
            sp98.z = 30.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp98, &sp8C);
            boss302->vel.x = sp8C.x;
            boss302->vel.y = sp8C.y;
            sp98.x = sp98.y = 0.0f;
            sp98.z = 60.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp98, &sp8C);
            boss302->vel.z = sp8C.z;
            boss302->unk_15C += 30.0f;
            if (boss302->timer_050 == 0) {
                Math_SmoothStepToF(&D_E16C50_801C22F0.unk_24, 0.0f, 0.1f, 1.0f, 0);
                if (D_E16C50_801C22F0.unk_24 < 1.0f) {
                    D_E16C50_801C22F0.unk_24 = 0.0f;
                    Audio_KillSfx(&boss302->sfxPos);
                    Audio_PlaySfx(0x19004051U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    boss302->timer_050 = 20;
                    boss302->obj.pos.z = gPlayer[0].camEye.z - D_80177D20 + boss302->unk_0E4;
                    boss302->unk_0F0 = boss302->obj.pos.x = gPlayer[0].camEye.x;
                    boss302->unk_0F4 = boss302->obj.pos.y = gPlayer[0].camEye.y;
                    boss302->unk_04E = 2;
                    boss302->vel.x = 0.0f;
                    boss302->vel.y = 0.0f;
                    boss302->vel.z = -40.0f;
                    
                    Audio_PlaySfx(0x39408092U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;
        case 1:
            Math_SmoothStepToF(D_801779A8, 10.0f, 1.0f, 5.0f, 0.0f);
            boss302->info.hitbox[0] = 0;
            Math_SmoothStepToAngle(&boss302->obj.rot.z, 0.0f, 1.0f, 10.0f, 0.0001f);
            if (boss302->obj.rot.z < 1.0f) {
                if (D_E16C50_801C2250.unk_00[27] == 0) {
                    Audio_PlaySfx(0x39408091U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_E16C50_801C2250.unk_00[27] = 1;
                }
                boss302->obj.rot.z = 0.0f;
                Math_SmoothStepToF(&D_E16C50_801C22F0.unk_24, 0.0f, 0.1f, 5.0f, 0.0f);
                Math_SmoothStepToF(&boss302->unk_160, 2.0f, 0.1f, 0.1f, 0.0f);
                Math_SmoothStepToF(&boss302->unk_164, 1.2f, 0.1f, 0.1f, 0.0f);
                if (D_E16C50_801C22F0.unk_24 < 1.0f) {
                    boss302->unk_0F0 = gPlayer[0].camEye.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f);
                    boss302->unk_0F4 = gPlayer[0].camEye.y + ((Rand_ZeroOne() - 0.5f) * 1000.0f);
                    boss302->unk_0E4 = -3700.0f + (Rand_ZeroOne() - 0.5f) * 3000.0f;
                    boss302->unk_160 = 2.0f;
                    boss302->unk_164 = 1.2f;
                    if ((boss302->unk_0D2 == 0) && (boss302->unk_0CA[0] == 0) && (boss302->unk_0CA[1] == 0) && (boss302->unk_0CA[2] == 0) && (boss302->unk_0BE[0] == 0) && (boss302->unk_0BE[1] == 0) && (boss302->unk_0BE[2] == 0)) {
                        boss302->unk_0D2 = 1;
                    }
                    if (boss302->unk_0D2 != 0) {
                        boss302->unk_0AC[0] = boss302->unk_0AC[1] =boss302->unk_0AC[2] = 3;
                        boss302->unk_0E4 = -1700.0f;
                        if ((boss302->unk_0BA != 1) && (D_E16C50_801C2250.unk_00[0] != 2)) {
                            boss302->unk_0E4 = ((Rand_ZeroOne() - 0.5f) * 1000.0f) + -3700.0f;
                        }
                        boss302->obj.pos.z = gPlayer[0].camEye.z - D_80177D20 + boss302->unk_0E4;
                        boss302->unk_0F0 = boss302->obj.pos.x = gPlayer[0].camEye.x;
                        boss302->unk_0F4 = boss302->obj.pos.y = gPlayer[0].camEye.y;
                    }
                    D_E16C50_801C22F0.unk_24 = 0.0f;
                    boss302->timer_050 = 50;
                    boss302->unk_04E = 2;
                    D_E16C50_801C2250.unk_00[8] = 0;
                    Audio_PlaySfx(0x39408092U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;
        case 2:
            Math_SmoothStepToF(D_801779A8, 10.0f, 1.0f, 5.0f, 0.0f);
            if (boss302->timer_050 == 10) {
                D_80178348 = D_80178350 = D_80178354 = 255;
                D_80178340 = D_80178358 = 255;
                D_80178358 = 0;
                D_8017835C = 25;
                D_80178480 = 50;
            }
            if (boss302->timer_050 == 0) {
                if (D_E16C50_801C2250.unk_00[8] == 0) {
                    D_E16C50_801C2250.unk_00[8] = 1;
                    D_80178348 = D_80178350 = D_80178354 = D_80178340 = 0;
                }
                Math_SmoothStepToF(&D_E16C50_801C22F0.unk_24, 255.0f, 0.1f, 10.0f, 0.0f);
                Math_SmoothStepToF(&boss302->unk_160, 1.0f, 0.1f, 0.1f, 0.0f);
                Math_SmoothStepToF(&boss302->unk_164, 1.0f, 0.1f, 0.1f, 0.0f);
                if (D_E16C50_801C22F0.unk_24 > 254.0f) {
                    D_E16C50_801C22F0.unk_24 = 255.0f;
                    boss302->info.hitbox[0] = 10;
                    boss302->unk_160 = boss302->unk_164 = 1.0f;
                    switch (boss302->unk_0D4) {               /* switch 1; irregular */
                        case 0:                             /* switch 1 */
                            boss302->timer_050 = 100;
                            break;
                        case 1:                             /* switch 1 */
                            boss302->timer_050 = 1399;
                            break;
                    }
                    boss302->unk_0D4 = 0;
                    D_E16C50_801C2250.unk_00[28] = 1;
                    boss302->unk_04E = 4;
                    if (boss302->unk_0D2 != 0) {
                        boss302->timer_050 = 30;
                        boss302->unk_0D2 = 0;
                        boss302->unk_0F8 = boss302->unk_0FC = 0.0f;
                        if (boss302->unk_0D0 < 2) {
                            boss302->unk_0D0++;
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
                        boss302->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6028578);
                        D_E16C50_801C2250.unk_00[7] = 0;
                    }
                }
            }
            break;
        case 3:
            if (boss302->timer_050 == 1) {
                Audio_KillSfx(&boss302->sfxPos);
                if (D_E16C50_801C2250.unk_00[7] == 0) {
                    Audio_PlaySfx(0x31008069U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_E16C50_801C2250.unk_00[7] = 1;
                }
            }
            if (D_E16C50_801C2250.unk_00[0] != 0) {
                if (boss302->unk_0BA == 1) {
                    boss302->timer_052 = 30;
                    boss302->unk_04E = 5;
                    boss302->unk_0DC = 90.0f;
                    boss302->unk_0E0 = 2.0f;
                    boss302->unk16C = 300.0f;
                } else {
                    boss302->timer_052 = 30;
                    boss302->unk_04E = 8;
                }
            } else {
                if ((boss302->unk_0D0 == 3) && (D_E16C50_801C2250.unk_00[29] == 0)) {
                    func_800BA808(gMsg_ID_7084, RCID_PEPPY);
                    boss302->unk_0D0 = 4;
                    D_E16C50_801C2250.unk_00[29]++;
                    D_E16C50_801C2250.unk_00[29] &= 1;
                }
                if ((boss302->unk_0C4[0] != 0) && (boss302->unk_0C4[1] != 0) && (boss302->unk_0C4[2] != 0)) {
                    boss302->timer_050 = 1500;
                    boss302->unk_0DC = 0.0f;
                    D_E16C50_801C2250.unk_00[28] = 0;
                    boss302->unk_04E = 4;
                    boss302->unk_0E0 = 1.0f;
                    boss302->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6028454);
                    D_E16C50_801C2250.unk_00[6] = 1;
                    Audio_KillSfx(&boss302->sfxPos);
                    Audio_PlaySfx(0x31404067U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    boss302->unk_0C4[0] = boss302->unk_0C4[1] = boss302->unk_0C4[2] = 0;
                } else if (boss302->unk_0C4[0] == 0) {
                    func_E16C50_8018A1B0(boss302, 0);
                } else if (boss302->unk_0C4[1] == 0) {
                    func_E16C50_8018A1B0(boss302, 1);
                } else if (boss302->unk_0C4[2] == 0) {
                    func_E16C50_8018A1B0(boss302, 2);
                }
            }
            break;
        case 4:
            if (boss302->timer_050 == 1400) {
                boss302->unk_0A6[0] = boss302->unk_0A6[1] = boss302->unk_0A6[2] = 40;
                if (boss302->unk_0BA == 0) {
                    boss302->unk_0BA = 1;
                }
                boss302->unk_0E4 = ((Rand_ZeroOne() - 0.5f) * 1000.0f) + -3700.0f;
                if (D_E16C50_801C2250.unk_00[28] == 0) {
                    Audio_PlaySfx(0x39404068U, &boss302->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            Math_SmoothStepToF(&boss302->unk_14C, 255.0f, 1.0f, 10.0f, 0.0001f);
            if ((boss302->unk_0D0 == 2) && (boss302->unk_0D8 == 0.0f) && (D_E16C50_801C2250.unk_00[30] == 0)) {
                func_800BA808(gMsg_ID_7083, RCID_PEPPY);
                boss302->unk_0D0 = 3;
                D_E16C50_801C2250.unk_00[30]++;
                D_E16C50_801C2250.unk_00[30] &= 1;
            }
            if (!(gFrameCount & 0x3F)) {
                boss302->unk_0F8 = Rand_ZeroOne() * 360.0f;
                boss302->unk_0FC = 0.0f;
            }
            if ((boss302->timer_050 == 0) || ((boss302->unk_0CA[0] == 0) && (boss302->unk_0CA[1] == 0) && (boss302->unk_0CA[2] == 0) && (boss302->unk_0BE[0] == 0) && (boss302->unk_0BE[1] == 0) && (boss302->unk_0BE[2] == 0))) {
                boss302->unk_0D2 = 1;
                if (D_E16C50_801C2250.unk_00[6] != 0) {
                    boss302->unk_04E = 1;
                    D_E16C50_801C2250.unk_00[27] = 0;
                } else {
                    
                    boss302->unk_0DC = 90.0f;
                    boss302->timer_050 = 30;
                    boss302->unk_0F8 = boss302->unk_0FC = 0;
                    boss302->unk_0E0 = 2.0f;
                    Audio_PlaySfx(0x31404066U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    
                    boss302->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6028578);
                    D_E16C50_801C2250.unk_00[7] = boss302->unk_0D2 = 0;
                    boss302->unk_04E = 3;
                    if (D_E16C50_801C2250.unk_00[6] == 0) {
                        func_8001D444(0U, 0x8017U, 0U, 0xFFU);
                    }
                }
            } else if (boss302->unk_0D4 != 0) {
                boss302->timer_052 = 30;
                boss302->unk_04E = 9;
                boss302->unk_148 = 0.0f;
                D_E16C50_801C2250.unk_00[24] = 0;
                D_E16C50_801C2250.unk_00[27] = 0;
                boss302->timer_050 = 0;
                boss302->timer_054 = 0;
                D_E16C50_801C2250.unk_00[34] = 1;
            }
            break;
        case 5:
            if (boss302->timer_050 == 1) {
                func_E16C50_80187704();
                Audio_PlaySfx(0x39033093U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_E16C50_801C2250.unk_00[33] = 120;
            }
            if (D_E16C50_801C2250.unk_00[33] != 0) {
                D_E16C50_801C2250.unk_00[33]--;
            }
            if (D_E16C50_801C2250.unk_00[33] == 15) {
                if (D_E16C50_801C2250.unk_00[32] == 0) {
                    if (gTeamShields[1] > 0) {
                        func_800BA808(gMsg_ID_20315, RCID_FALCO);
                    } else if (gTeamShields[2] > 0) {
                        func_800BA808(gMsg_ID_20316, RCID_SLIPPY);
                    } else if (gTeamShields[3] > 0) {
                        func_800BA808(gMsg_ID_20317, RCID_PEPPY);
                    }
                }
                D_E16C50_801C2250.unk_00[32]++;
                D_E16C50_801C2250.unk_00[32] &= 1;
            }
            break;
        case 6:
            boss302->obj.pos.z -= boss302->unk16C;
            Math_SmoothStepToF(&boss302->unk16C, 0.0f, 1.0f, 10.0f, 0.00001f);
            Math_SmoothStepToF(&boss302->unk_0E4, -6000.0f, 10.0f, 100.0f, 0.00001f);
            sp68 = &D_E16C50_801BF454[D_E16C50_801C2250.unk_00[9]];
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[0], sp68->r, 0.5f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[2], sp68->g, 0.5f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[1], sp68->b, 0.5f, 100.0f, 0.00001f);
            if (!(gFrameCount & 0xF)) {
                D_E16C50_801C2250.unk_00[9]++;
                D_E16C50_801C2250.unk_00[9] &= 3;
            }
            if (boss302->timer_050 == 0) {
                boss302->unk_04E = 7;
                boss302->unk_0DC = 0.0f;
            }
            break;
        case 7:
            temp_s0_3 = &gObjects8C[boss302->unk_0D6];
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[0], 255.0f, 1.0f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[2], 255.0f, 1.0f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[1], 255.0f, 1.0f, 100.0f, 0.00001f);
            if (boss302->unk_0D8 < 10.0f) {
                temp_s0_3->unk_60.y = 5.0f - ((10.0f - boss302->unk_0D8) * 0.3f);
                temp_s0_3->unk_60.x = 5.0f - ((10.0f - boss302->unk_0D8) * 0.3f);
            }
            if (boss302->unk_0D8 < 1.0f) {
                Math_SmoothStepToF(&temp_s0_3->unk_60.x, 0.0f, 0.1f, 1.0f, 0.00001f);
                Math_SmoothStepToF(&temp_s0_3->unk_60.y, 0.0f, 0.1f, 1.0f, 0.00001f);
                Math_SmoothStepToF(&temp_s0_3->unk_60.z, 0.0f, 1.0f, 2.0f, 0.00001f);
                if (temp_s0_3->unk_60.z < 0.2f) {
                    D_E16C50_801C2250.unk_00[0] = 2;
                    boss302->unk_0D2 = 1;
                    boss302->timer_050 = 20;
                    D_E16C50_801C22F0.unk_28[0] = D_E16C50_801C22F0.unk_28[2] = D_E16C50_801C22F0.unk_28[1] = 255.0f;
                    boss302->unk_04E = 1;
                    D_E16C50_801C2250.unk_00[27] = 0;
                    Object_Kill(&temp_s0_3->obj, &temp_s0_3->sfxPos);
                }
            }
            break;
        case 8:
            if (boss302->timer_052 == 0) {
                D_E16C50_801C2250.unk_00[24] = 0;
                boss302->timer_052 = 300;
                boss302->timer_054 = 0;
                boss302->unk_04E = 9;
                Audio_PlaySfx(0x11002050U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 9:
            if (boss302->timer_052 == 0) {
                Audio_KillSfx(&boss302->sfxPos);
                Audio_PlaySfx(0x19004051U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss302->timer_054 = 0;
                boss302->unk_04E = 10;
            } else {
                if (D_E16C50_801C2250.unk_00[34] == 0) {
                    boss302->obj.rot.z += boss302->unk_148;
                    boss302->obj.rot.z = Math_ModF(boss302->obj.rot.z, 360.0f);
                    Math_SmoothStepToF(&boss302->unk_148, 20.0f, 0.1f, 0.5f, 0.0001f);
                }
                if (boss302->timer_054 == 0) {
                    boss302->timer_054 = 10;
                    if (D_E16C50_801C2250.unk_00[34] == 0) {
                        boss302->timer_054 = 30;
                    }
                    sp128 = 6;
                    if (boss302->unk_0BA == 2) {
                        sp128 = 12;
                    }
                    for(i = 0; i < sp128; i++) {
                        Matrix_RotateZ(gCalcMatrix, (360.0f / sp128) * 0.017453292f, 1U);
                        sp98.x = 0.0f;
                        sp98.z = 0.0f;
                        sp98.y = 400.0f;
                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp98, &sp8C);
                        sp10C = Math_RadToDeg(Math_Atan2F(sp8C.x, sp8C.z));
                        sp110 = Math_RadToDeg(-Math_Atan2F(sp8C.y, sqrtf(SQ(sp8C.x) + SQ(sp8C.z))));
                        temp_1 = D_E16C50_801C2250.unk_00[12 + i] - 1;
                        if (temp_1 < 0) {
                            temp_1 = 0;
                        }
                        if ((gObjects2F4[temp_1].obj.status == 0) || (gObjects2F4[temp_1].obj.id != OBJ_2F4_191) || (D_E16C50_801C2250.unk_00[24] == 0)) {
                            D_E16C50_801C2250.unk_00[12 + i] = 0;
                            temp_1 = 0;
                            if (boss302->unk_0BA == 1) {
                                temp_1 = 1;
                            }
                            func_E16C50_801875E4(boss302->obj.pos.x + sp8C.x, boss302->obj.pos.y + sp8C.y, boss302->obj.pos.z + sp8C.z, 25.0f, sp110, sp10C, 10, temp_1);
                            D_E16C50_801C2250.unk_00[12 + i] = D_E16C50_801C2250.unk_00[11];
                        }
                    }
                    D_E16C50_801C2250.unk_00[24] = 1;
                }
            }
            break;
        case 10:
            if (D_E16C50_801C2250.unk_00[34] == 0) {
                boss302->obj.rot.z += boss302->unk_148;
                boss302->obj.rot.z = Math_ModF(boss302->obj.rot.z, 360.0f);
                Math_SmoothStepToF(&boss302->unk_148, 0.0f, 0.1f, 0.5f, 0.0001f);
            }
            if (boss302->unk_148 <= 0.1f) {
                if (D_E16C50_801C2250.unk_00[34] == 0) {
                    boss302->unk_148 = 0.0f;
                    D_E16C50_801C2250.unk_00[0] = 2;
                    boss302->unk_0D2 = 1;
                }
                boss302->timer_050 = 20;
                D_E16C50_801C2250.unk_00[27] = 0;
                D_E16C50_801C2250.unk_00[34] = 0;
                boss302->unk_04E = 1;
            }
            break;
        case 11:
            if ((boss302->timer_052 == 160) && ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5))) {
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                gPlayer[0].unk_1D0 = 0;
            }
            if (boss302->timer_052 < 50) {
                D_801779A8[0] = 50.0f;
            } else {
                D_801779A8[0] = 20.0f;
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
    for(i = 0; i < 5; i++) {
        if (!(gFrameCount & 3)) {
            D_E16C50_801BF280[i] = (Rand_ZeroOne() - 0.5f) * 10.0f;
            D_E16C50_801BF2B0[i] = (Rand_ZeroOne() - 0.5f) * 10.0f;
            D_E16C50_801BF2E0[i] = (Rand_ZeroOne() - 0.5f) * 10.0f;
        }
        Math_SmoothStepToF(&D_E16C50_801BF1F0[i], D_E16C50_801BF280[i], 1.0f, 5.0f, 0.001f);
        Math_SmoothStepToF(&D_E16C50_801BF220[i], D_E16C50_801BF2B0[i], 1.0f, 5.0f, 0.001f);
        Math_SmoothStepToF(&D_E16C50_801BF250[i], D_E16C50_801BF2E0[i], 1.0f, 5.0f, 0.001f);
    }
    boss302->info.hitbox[25] = boss302->unk_1AC[3].x;
    boss302->info.hitbox[27] = boss302->unk_1AC[3].y;
    boss302->info.hitbox[29] = boss302->unk_1AC[3].z;
    boss302->info.hitbox[31] = boss302->unk_1AC[4].x;
    boss302->info.hitbox[33] = boss302->unk_1AC[4].y;
    boss302->info.hitbox[35] = boss302->unk_1AC[4].z;
    boss302->info.hitbox[37] = boss302->unk_1AC[5].x;
    boss302->info.hitbox[39] = boss302->unk_1AC[5].y;
    boss302->info.hitbox[41] = boss302->unk_1AC[5].z;
    if (D_801613A0 == 600) {
        func_800BA808(gMsg_ID_2225, RCID_SLIPPY);
    }
    if (D_801613A0 == 756) {
        D_80161734 = 1;
    }
    if (D_801613A0 > 756) {
        D_80177848 = (boss302->unk_060 / 780.0f) * 255.0f;
    }
    for(i = 0; i < 15; i++) {
        if(boss302->unk_088[i] != 0) {
            boss302->unk_088[i]--;
        }
    }
    if (boss302->unk_0D8 > 20.0f) {
        for(i = 0; i < 3; i++) {
            if(boss302->unk_088[i] == 0) {
                boss302->unk_088[i] = 5;
            }
        }
    }
    if (D_E16C50_801C2250.unk_00[5] != 0) {
        D_E16C50_801C2250.unk_00[5]--;
    }
    if (D_E16C50_801C2250.unk_00[25] != 0) {
        D_E16C50_801C2250.unk_00[25]--;
    }
}
#else
void func_E16C50_80187944(Object_408_302 *boss302);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_80187944.s")
#endif

void func_E16C50_8018A1B0(Object_408_302 *boss302, s32 arg1) {
    switch (D_E16C50_801C2250.unk_00[arg1 + 2]) {
        case 0:
            boss302->unk_0BE[arg1] = 12;
            D_E16C50_801C2250.unk_00[arg1 + 2] = 1;
            break;
        case 1:
            boss302->unk_10C[arg1] = 120.0f;
            if (((boss302->unk_0CA[arg1] == 0) && (D_E16C50_801C2250.unk_00[6] != 0) && ((boss302->unk_0A6[0] != 0) || (boss302->unk_0A6[1] != 0) || (boss302->unk_0A6[2] != 0))) || (boss302->unk_0BA == 0)) {
                boss302->unk_118[arg1] = 1.0f;
            } else {
                boss302->unk_118[arg1] = 60.0f;
            }
            if (boss302->unk_100[arg1] >= 119.0f) {
                boss302->unk_100[arg1] = 120.0f;
                boss302->unk_0CA[arg1] = 30;
                boss302->unk_118[arg1] = 60.0f;
                D_E16C50_801C2250.unk_00[arg1 + 2] = 0;
                boss302->unk_088[arg1 + 6] = 0;
                boss302->unk_088[arg1 + 9] = 0;
                boss302->unk_0C4[arg1] = 1;
                boss302->unk_0AC[arg1] = 0;
            }
            break;
    }
}

extern f32 D_E16C50_801BF334;
extern f32 D_E16C50_801BF364;
extern f32 D_E16C50_801BF394;
extern f32 D_E16C50_801BF3C4;
extern f32 D_E16C50_801BF3F4;
extern f32 D_E16C50_801BF424;

void func_E16C50_8018A2C4(Object_408_302 *boss302) {
    s32 i;
    Vec3f sp58;
    s32 pad1;

    for(i = 0; i < 3; i++) {
        if ((boss302->unk_066 == i + 1) && (boss302->unk_04E == 4) && (boss302->unk_0D8 < 20.0f)) {
            if ((boss302->unk_0AC[i] != 1) && (boss302->unk_0AC[i] != 3)) {
                boss302->unk_088[i] = 15;
                boss302->unk_088[i+3] = 40;
                boss302->unk_0CA[i] -= boss302->unk_064;
                if (i == 0) {
                    sp58.x = D_E16C50_801BF334;
                    sp58.y = D_E16C50_801BF3C4;
                    sp58.z = boss302->obj.pos.z;
                    func_8007A6F0(&sp58, 0x29034003);
                }
                if (i == 1) {
                    sp58.x = D_E16C50_801BF364;
                    sp58.y = D_E16C50_801BF3F4;
                    sp58.z = boss302->obj.pos.z;
                    func_8007A6F0(&sp58, 0x29034003);
                }
                if (i == 2) {
                    sp58.x = D_E16C50_801BF394;
                    sp58.y = D_E16C50_801BF424;
                    sp58.z = boss302->obj.pos.z;
                    func_8007A6F0(&sp58, 0x29034003);
                }
                if (boss302->unk_0CA[i] < 0) {
                    boss302->unk_0CA[i] = 0;
                }
            }
        }
    } 
}

void func_E16C50_8018A464(Object_408_302 *boss302, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018A464.s")

void func_E16C50_8018B9BC(Object_408_302 *boss302) {
    s32 i;
    s32 j;
    Vec3f sp94;
    Vec3f sp88;

    if (D_E16C50_801C2250.unk_00[0] == 0) {
        for(i = 3, j = 15; j < 18; j++, i++) {
            if(boss302->unk_088[j] != 0) {
                if ((D_8017812C != 0) && (gPlayerShots[15].unk_64 > 0)) {
                    boss302->unk_088[j] -= boss302->unk_064;
                } else if (i + 1 == boss302->unk_066) {
                    boss302->unk_088[j] -= boss302->unk_064;
                    if ((D_E16C50_801C2250.unk_00[25] == 0) && (boss302->unk_0BA == 1) && (Rand_ZeroOne() < 0.4f)) {
                        D_E16C50_801C2250.unk_00[10]++;
                        D_E16C50_801C2250.unk_00[10] &= 1;
                        D_E16C50_801C2250.unk_00[25] = 20;
                    }
                }
                Audio_PlaySfx(0x29033064U, &boss302->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                if (boss302->unk_088[j] <= 0) {
                    boss302->unk_088[j] = 0;
                    Matrix_MultVec3f(gCalcMatrix, &boss302->unk_1AC[i], &sp94);
                    func_8007D0E0(boss302->obj.pos.x +sp94.x, boss302->obj.pos.y + sp94.y, boss302->obj.pos.z + sp94.z, 10.0f);
                    sp88.x = boss302->obj.pos.x + sp94.x;
                    sp88.y = boss302->obj.pos.y + sp94.y;
                    sp88.z = boss302->obj.pos.z + sp94.z;
                    func_8007A6F0(&sp88, 0x2903B009);
                    func_8007C120(boss302->obj.pos.x, boss302->obj.pos.y, boss302->obj.pos.z + 150.0f, boss302->vel.x, boss302->vel.y, boss302->vel.z, 0.2f, 0x32);
                }
                if ((boss302->unk_088[15] == 0) && (boss302->unk_088[16] == 0) && (boss302->unk_088[17] == 0)) {
                    Audio_KillSfx(&boss302->sfxPos);
                    if (boss302->unk_0BA != 0) {
                        boss302->unk_0BA --;
                        if (boss302->unk_0BA != 0) {
                            boss302->unk_060 -= 60;
                        }
                    }
                    if (boss302->unk_0BA != 0) {
                        boss302->timer_058 = 50;
                    } else {
                        boss302->timer_054 = 30;
                        boss302->unk_158 = 20.0f;
                    }
                }
            }
        }
    }
}

void func_E16C50_8018BCD4(Vec3f *arg0, f32 arg1, f32 arg2, Vec3f *arg3, s32 arg4, f32 arg5, s32 arg6, f32 arg7);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018BCD4.s")

void func_E16C50_8018C0D0(f32 *arg0, f32 arg1, Vec3f *arg2, f32 arg3, s32 arg4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018C0D0.s")

void func_E16C50_8018C54C(Object_408_302 *boss302);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018C54C.s")

void func_E16C50_8018D3CC(s32 arg0, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 xRot, f32 yRot, f32 zRot);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018D3CC.s")

void func_E16C50_8018D4E0(Object_2F4 *obj2F4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018D4E0.s")

void func_E16C50_8018D5C8(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018D5C8.s")

void func_E16C50_8018D694(Object_2F4 *obj2F4, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018D694.s")

void func_E16C50_8018D804(Object_2F4 *obj2F4, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018D804.s")

void func_E16C50_8018D920(Vec3f *arg0);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018D920.s")

void func_E16C50_8018DA58(Object_2F4 *obj2F4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018DA58.s")

void func_E16C50_8018DF74(Player *player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018DF74.s")

void func_E16C50_8018EA88(Object_2F4 *obj2F4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018EA88.s")

void func_E16C50_8018EB3C(Object_2F4 *obj2F4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018EB3C.s")

void func_E16C50_8018EC38(Object_2F4 *obj2F4, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018EC38.s")

void func_E16C50_8018ED78(Player *player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/func_E16C50_8018ED78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/E16C60/D_E16C50_801C0900.s")
