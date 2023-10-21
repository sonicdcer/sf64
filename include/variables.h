#ifndef VARIABLES_H
#define VARIABLES_H

typedef struct {
    /* 0x000 */ char pad_0[0x7C];
    /* 0x07C */ f32 unk07C;
    /* 0x080 */ char pad_80[0x148];
    /* 0x1C8 */ s32 unk1C8;
    /* 0x1CC */ char pad_END[0x314];
} UnkStruct_D_80178280; // Size = 0x4E0

extern UnkStruct_D_80178280* D_80178280;
extern s32 D_801778A0;
extern s32 D_801778A8;
extern s32 D_80177DB0;
extern s32 D_801778E8;
extern u8 D_80177C98;

extern Matrix* D_8013B3C0;
extern f32 D_800C5D28[];
extern f32 D_800C5D34;
extern s8 D_800C5D3C;

extern Gfx D_1015510[];
extern Gfx D_1024230[];
extern Gfx D_1024830[];
extern Gfx D_102A8A0[];
extern Gfx D_1024AC0[];
extern Gfx D_6004570[];
extern Gfx D_D0098B0[];
extern Gfx D_F014180[];

#endif // VARIABLES_H

