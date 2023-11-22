#ifndef GFX_H
#define GFX_H

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

typedef enum SetupDL {
    /* 0x00 */ SETUPDL_0,
    /* 0x01 */ SETUPDL_1,
    /* 0x02 */ SETUPDL_2,
    /* 0x03 */ SETUPDL_3,
    /* 0x04 */ SETUPDL_4,
    /* 0x05 */ SETUPDL_5,
    /* 0x06 */ SETUPDL_6,
    /* 0x07 */ SETUPDL_7,
    /* 0x08 */ SETUPDL_8,
    /* 0x09 */ SETUPDL_9,
    /* 0x0A */ SETUPDL_10,
    /* 0x0B */ SETUPDL_11,
    /* 0x0C */ SETUPDL_12,
    /* 0x0D */ SETUPDL_13,
    /* 0x0E */ SETUPDL_14,
    /* 0x0F */ SETUPDL_15,
    /* 0x10 */ SETUPDL_16,
    /* 0x11 */ SETUPDL_17,
    /* 0x12 */ SETUPDL_18,
    /* 0x13 */ SETUPDL_19,
    /* 0x14 */ SETUPDL_20,
    /* 0x15 */ SETUPDL_21,
    /* 0x16 */ SETUPDL_22,
    /* 0x17 */ SETUPDL_23,
    /* 0x18 */ SETUPDL_24,
    /* 0x19 */ SETUPDL_25,
    /* 0x1A */ SETUPDL_26,
    /* 0x1B */ SETUPDL_27,
    /* 0x1C */ SETUPDL_28,
    /* 0x1D */ SETUPDL_29,
    /* 0x1E */ SETUPDL_30,
    /* 0x1F */ SETUPDL_31,
    /* 0x20 */ SETUPDL_32,
    /* 0x21 */ SETUPDL_33,
    /* 0x22 */ SETUPDL_34,
    /* 0x23 */ SETUPDL_35,
    /* 0x24 */ SETUPDL_36,
    /* 0x25 */ SETUPDL_37,
    /* 0x26 */ SETUPDL_38,
    /* 0x27 */ SETUPDL_39,
    /* 0x28 */ SETUPDL_40,
    /* 0x29 */ SETUPDL_41,
    /* 0x2A */ SETUPDL_42,
    /* 0x2B */ SETUPDL_43,
    /* 0x2C */ SETUPDL_44,
    /* 0x2D */ SETUPDL_45,
    /* 0x2E */ SETUPDL_46,
    /* 0x2F */ SETUPDL_47,
    /* 0x30 */ SETUPDL_48,
    /* 0x31 */ SETUPDL_49,
    /* 0x32 */ SETUPDL_50,
    /* 0x33 */ SETUPDL_51,
    /* 0x34 */ SETUPDL_52,
    /* 0x35 */ SETUPDL_53,
    /* 0x36 */ SETUPDL_54,
    /* 0x37 */ SETUPDL_55,
    /* 0x38 */ SETUPDL_56,
    /* 0x39 */ SETUPDL_57,
    /* 0x3A */ SETUPDL_58,
    /* 0x3B */ SETUPDL_59,
    /* 0x3C */ SETUPDL_60,
    /* 0x3D */ SETUPDL_61,
    /* 0x3E */ SETUPDL_62,
    /* 0x3F */ SETUPDL_63,
    /* 0x40 */ SETUPDL_64,
    /* 0x41 */ SETUPDL_65,
    /* 0x42 */ SETUPDL_66,
    /* 0x43 */ SETUPDL_67,
    /* 0x44 */ SETUPDL_68,
    /* 0x45 */ SETUPDL_69,
    /* 0x46 */ SETUPDL_70,
    /* 0x47 */ SETUPDL_71,
    /* 0x48 */ SETUPDL_72,
    /* 0x49 */ SETUPDL_73,
    /* 0x4A */ SETUPDL_74,
    /* 0x4B */ SETUPDL_75,
    /* 0x4C */ SETUPDL_76,
    /* 0x4D */ SETUPDL_77,
    /* 0x4E */ SETUPDL_78,
    /* 0x4F */ SETUPDL_79,
    /* 0x50 */ SETUPDL_80,
    /* 0x51 */ SETUPDL_81,
    /* 0x52 */ SETUPDL_82,
    /* 0x53 */ SETUPDL_83,
    /* 0x54 */ SETUPDL_84,
    /* 0x55 */ SETUPDL_85,
    /* 0x56 */ SETUPDL_86,
    /* 0x57 */ SETUPDL_87,
    /* 0x58 */ SETUPDL_MAX
} SetupDL;

extern Gfx gSetupDLs[SETUPDL_MAX][9]; // 0x800D31B0

void func_800B8DD0(Gfx** gfxP, s16 i);
void func_800B8E14(Gfx** gfxP, s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B8F18(void);
void func_800B8F48(void);
void func_800B8F78(void);
void func_800B8FA8(void);
void func_800B8FD8(void);
void func_800B9008(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9120(void);
void func_800B9150(void);
void func_800B9180(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9298(void);
void func_800B92C8(void);
void func_800B92F8(void);
void func_800B9328(void);
void func_800B9358(void);
void func_800B9388(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B94A0(void);
void func_800B94D0(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B95E8(void);
void func_800B9618(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9730(void);
void func_800B9760(void);
void func_800B9790(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B98A8(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B99C0(void);
void func_800B99F0(void);
void func_800B9A20(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9B38(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9C50(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9D68(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9E80(void);
void func_800B9EB0(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9FC8(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800BA0E0(void);
void func_800BA110(void);
void func_800BA140(void);
void func_800BA170(void);
void func_800BA1A0(void);
void func_800BA1D0(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800BA2E8(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800BA400(void);
void func_800BA430(void);
void func_800BA460(void);
void func_800BA490(void);
void func_800BA4C0(void);
void func_800BA4F0(void);
void func_800BA520(void);
void func_800BA550(void);
void func_800BA580(void);
void func_800BA5B0(void);
void func_800BA5E0(void);
void func_800BA610(void);
void func_800BA640(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);

#endif
