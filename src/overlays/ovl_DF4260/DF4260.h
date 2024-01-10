#ifndef OVL_DF4260_H
#define OVL_DF4260_H

#include "global.h"

typedef struct {
                Object obj;
                ObjectInfo info;
                s32 index;
                u8 unk_044;
                s16 unk_046;
                s16 unk_048;
                s16 unk_04A;
                s16 timer_04C;
                s16 unk_04E;
                s32 swork[25];
                s16 unk_0B4;
                s16 unk_0B6;
                s16 unk_0B8;
                char pad0BA[0x2];
                u16 timer_0BC;
                u16 timer_0BE;
                u16 timer_0C0;
                u16 timer_0C2;
                u16 timer_0C4;
                u16 timer_0C6;
                u8 unk_0C8;
                u8 unk_0C9;
                u8 timer_0CA[4];
                s16 unk_0CE;
                s8 unk_0D0;
                s16 unk_0D2;
                s16 unk_0D4;
                u16 unk_0D6;
                Vec3f unk_0D8;
                s16 unk_0E4;
                s16 unk_0E6;
                Vec3f unk_0E8;
                Vec3f unk_0F4;
                Vec3f sfxPos;
                f32 unk_10C;
                f32 scale;
                f32 fwork[30];
                Vec3f vwork[30];
} Object_2F4_Test;

typedef struct {
    f32 arr[4];
} Temp_f32Arr4;

#endif
