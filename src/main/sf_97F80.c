#include "global.h"

typedef struct {
    Vec3f unk_00;
    Vec3f unk_0C;
    s32 unk_18;
    void* unk_1C;
    void* unk_20;
} UnkStruct_D2B38; // size = 0x24

extern UnkStruct_D2B38 D_800D2B38[];

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_80097380.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_80097558.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_80097730.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_800978C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_800979E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_80097C88.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_8009808C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_800985CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_80098860.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_800988B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_800988F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_8009893C.s")
// typedef struct {
//     s16* unk0;
//     s16* unk1;
//     s16* unk2;
// } tempstruct;

s32 func_80098980(Vec3f *, Vec3s**, Vec3f *);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_80098980.s")

typedef struct {
    f32 unk_0;
    f32 unk_4;
} tempstruct;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
    s16 unk_06;
    Vec3s unk_08;
    s32 unk_10;
} tempstruct2;

typedef struct {
    Vec3f normal;
    f32 dist;
} Plane;

#ifndef NON_MATCHING
s32 func_80099254(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, UnkStruct_D2B38 *arg3, Vec3f *arg4, tempstruct *arg5) {
    Vec3s* sp12C[3];
    Vec3f temp_V3f1;
    s32 pad11C;
    s32 pad118;
    Plane sp108;
    f32 temp_fs0;
    s32 sp100;
    Vec3s* temp_s2;
    tempstruct2 *var_s0;
    s32 i;
    s32 spF0;
    f32 spEC;
    s32 temp_v0;
    Vec3f spDC;
    f32* padD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s32 spA8;
    Vec3f test1;
    Vec3f test2;

    sp100 = 0;
    arg4->x = arg4->y = arg4->z = arg5->unk_0 = arg5->unk_4 =  0.0f;
    temp_V3f1.x = arg0->x - arg1->x;
    temp_V3f1.y = arg0->y - arg1->y;
    temp_V3f1.z = arg0->z - arg1->z;
    test1.x = arg3->unk_00.x;
    test1.y = arg3->unk_00.y;
    test1.z = arg3->unk_00.z;
    test2.x = arg3->unk_0C.x;
    test2.y = arg3->unk_0C.y;
    test2.z = arg3->unk_0C.z;

    
    if ((temp_V3f1.x < test1.x) || (temp_V3f1.y < test1.y) || (temp_V3f1.z < test1.z) || (test2.x < temp_V3f1.x) || (test2.y < temp_V3f1.y) || ((test2.z < temp_V3f1.z))) {
        return 0;
    }
    if ((arg2->x == 0.0f) && (arg2->y == 0.0f) && (arg2->z == 0.0f)) {
        arg2->y = -5.0f;
    }
    spBC = (s32) temp_V3f1.x;
    spB4 = (s32) temp_V3f1.y;
    spAC = (s32) temp_V3f1.z;
    spB8 = (s32) (temp_V3f1.x - arg2->x);
    spB0 = (s32) (temp_V3f1.y - arg2->y);
    spA8 = (s32) (temp_V3f1.z - arg2->z);
    
    temp_v0 = spB8;
    if (spB8 < spBC) {
        spB8 = spBC;
        spBC = temp_v0;
    }
    temp_v0 = spB0;
    if (spB0 < spB4) {
        spB0 = spB4;
        spB4 = temp_v0;
    }
    temp_v0 = spA8;
    if (spA8 < spAC) {
        spA8 = spAC;
        spAC = temp_v0;
    }
    
    
    var_s0 = SEGMENTED_TO_VIRTUAL(arg3->unk_1C);
    temp_s2 = SEGMENTED_TO_VIRTUAL(arg3->unk_20);
    spF0 = arg3->unk_18;
    spEC = sqrtf(VEC3F_SQ(*arg2));
    
    for(i = 0; i < spF0; i++, var_s0++) {
        sp12C[0] = &temp_s2[var_s0->unk_00];
        sp12C[1] = &temp_s2[var_s0->unk_02];
        sp12C[2] = &temp_s2[var_s0->unk_04];
        Math_MinMax(&spD4, &spD0, sp12C[0]->x, sp12C[1]->x, sp12C[2]->x);
        Math_MinMax(&spCC, &spC8, sp12C[0]->y, sp12C[1]->y, sp12C[2]->y);
        Math_MinMax(&spC4, &spC0, sp12C[0]->z, sp12C[1]->z, sp12C[2]->z);
        if ((spBC < spD0) && (spD4 < spB8) && (spB4 < spC8) && (spCC < spB0) && (spAC < spC0) && (spC4 < spA8)) {
            sp108.normal.x = var_s0->unk_08.x;
            sp108.normal.y = var_s0->unk_08.y;
            sp108.normal.z = var_s0->unk_08.z;
            sp108.dist = var_s0->unk_10;
            if ((DOT_XYZ(sp108.normal, temp_V3f1) + sp108.dist) <= 0.0f) {
                temp_fs0 = DOT_XYZ(sp108.normal, *arg2);
                if (Math_FAcosF(temp_fs0 / (sqrtf(VEC3F_SQ(sp108.normal)) * spEC)) > 1.5707964f) {
                    temp_fs0 = (DOT_XYZ(sp108.normal, temp_V3f1) + sp108.dist) / temp_fs0;
                    spDC.x = temp_V3f1.x - (arg2->x * temp_fs0);
                    spDC.y = temp_V3f1.y - (arg2->y * temp_fs0);
                    spDC.z = temp_V3f1.z - (arg2->z * temp_fs0);
                    if (func_80098980(&spDC, sp12C, &sp108) == 1) {
                        arg4->x = arg1->x + spDC.x;
                        arg4->y = arg1->y + spDC.y;
                        arg4->z = arg1->z + spDC.z;
                        if (sp108.normal.x != 0.0) {
                            sp108.normal.x = -sp108.dist / sp108.normal.x;
                        }
                        if (sp108.normal.y != 0.0f) {
                            sp108.normal.y = -sp108.dist / sp108.normal.y;
                        }
                        if (sp108.normal.z != 0.0f) {
                            sp108.normal.z = -sp108.dist / sp108.normal.z;
                        }
                        arg5->unk_0 = Math_Atan2F_XY(sp108.normal.y, sp108.normal.z);
                        if (sp108.normal.z != 0.0f) {
                            arg5->unk_4 = -Math_Atan2F_XY(__sinf(Math_Atan2F_XY(sp108.normal.y, sp108.normal.z)) * sp108.normal.z, sp108.normal.x);
                        } else if (arg5->unk_0 >= 3.1415927f) {
                            arg5->unk_4 = Math_Atan2F_XY(sp108.normal.y, sp108.normal.x);
                        } else {
                            arg5->unk_4 = -Math_Atan2F_XY(sp108.normal.y, sp108.normal.x);
                        }
                        
                        sp100 = 1;
                        break;
                    }
                }
            }
        } 
    }
    return sp100;
}
#else
s32 func_80099254(Vec3f *arg0, Vec3f *arg1, Vec3f *arg2, UnkStruct_D2B38* arg3, Vec3f *arg4, f32 arg5[]);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_80099254.s")
#endif

s32 func_800998FC(Vec3f*, Vec3f*, Vec3f*, s32, Vec3f*, f32*);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_97F80/func_800998FC.s")
