#ifndef STRUCTS_H
#define STRUCTS_H

#include "libultra/ultra64.h"
#include "sf64math.h"

#define UNK_TYPE s32

typedef struct {
    /* 0x00 */ u8 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ char pad14[0x14];
} UnkEntity28; // size = 0x28

typedef struct {
    /* 0x00 */ u8 mode;
    /* 0x02 */ u16 timer;
    /* 0x04 */ Vec3f unk_04;
    /* 0x10 */ Vec3f unk_10;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ u8 unk_2C; // possibly a color struct
    /* 0x2D */ u8 unk_2D;
    /* 0x2E */ u8 unk_2E;
    /* 0x2F */ u8 unk_2F;
} UnkEntity30; // size = 0x30

typedef struct {
    /* 0x00 */ u8 hits;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ char pad14[0x4];
    /* 0x18 */ u16 timer;
} BonusText; // size = 0x1C

#define BONUS_TEXT_FREE 0
#define BONUS_TEXT_GREAT 100
#define BONUS_TEXT_1UP 101

typedef struct {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
} UnkStruct_D_menu_801B8294; // size = 0x18

typedef struct {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ s16 unk_10;
} UnkStruct_D_i5_801B8E50; //size = 0x14

typedef struct {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ s16 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ s16 unk_10;
} UnkStruct_D_i5_801BA1EC; //size = 0x14

typedef enum OptionState {
    OPTION_WAIT,
    OPTION_SETUP,
    OPTION_UPDATE
} OptionState;

#endif
