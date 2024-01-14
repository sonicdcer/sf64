#include "sf64dma.h"

#define NO_SEGMENT \
    { NULL, NULL }

#define OVERLAY_OFFSETS(file)                                                                                   \
    {                                                                                                           \
        { SEGMENT_ROM_START(file), SEGMENT_ROM_END(file) }, { SEGMENT_BSS_START(file), SEGMENT_BSS_END(file) }, \
            { SEGMENT_TEXT_START(file), SEGMENT_TEXT_END(file) }, {                                             \
            SEGMENT_DATA_START(file), SEGMENT_RODATA_END(file)                                                  \
        }                                                                                                       \
    }

#define NO_OVERLAY                                        \
    {                                                     \
        { NULL, NULL }, { NULL, NULL }, { NULL, NULL }, { \
            NULL, NULL                                    \
        }                                                 \
    }

#define ROM_SEGMENT(file) \
    { SEGMENT_ROM_START(file), SEGMENT_ROM_END(file) }

OverlayInit sNoOvl_Logo[1] = {
    { NO_OVERLAY,
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ NO_SEGMENT,
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_D25100) } },
};

OverlayInit sOvlEF0260_Credits[6] = {
    { OVERLAY_OFFSETS(ovl_EF0260),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_D27600),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_955270),
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_EF0260),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_BFC510),
        /* 0x7 */ ROM_SEGMENT(ast_D27600),
        /* 0x8 */ ROM_SEGMENT(ast_D43400),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_EF0260),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_BFC510),
        /* 0x7 */ ROM_SEGMENT(ast_D27600),
        /* 0x8 */ ROM_SEGMENT(ast_D68480),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_EF0260),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_BFC510),
        /* 0x7 */ ROM_SEGMENT(ast_D27600),
        /* 0x8 */ ROM_SEGMENT(ast_D91F10),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_EF0260),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_BFC510),
        /* 0x7 */ ROM_SEGMENT(ast_D27600),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_EF0260),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_D27600),
        /* 0x8 */ ROM_SEGMENT(ast_D91F10),
        /* 0x9 */ ROM_SEGMENT(ast_CDDCA0),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvlEBFBE0_Title[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_BFC510),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvlEBFBE0_Menu[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_C48F40),
        /* 0x7 */ ROM_SEGMENT(ast_CBFE70),
        /* 0x8 */ ROM_SEGMENT(ast_CA9DE0),
        /* 0x9 */ ROM_SEGMENT(ast_CDDCA0),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvlEBFBE0_Map[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_C48F40),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ ROM_SEGMENT(ast_CDDCA0),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvlEBFBE0_State5[1] = {
    { OVERLAY_OFFSETS(ovl_menu),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ ROM_SEGMENT(ast_CE9E70),
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli1_Corneria[1] = {
    { OVERLAY_OFFSETS(ovl_DF4260),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_961CE0),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli2_Meteo[2] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8A68C0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_922730),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_9A1460),
        /* 0x7 */ ROM_SEGMENT(ast_BFA740),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8A68C0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_922730),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_9A1460),
        /* 0x7 */ ROM_SEGMENT(ast_BFA740),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvlE6A810_Titania[6] = {
    { OVERLAY_OFFSETS(ovl_E6A810),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8D99F0),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_9D2FD0),
        /* 0x7 */ ROM_SEGMENT(ast_A0E340),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_E6A810),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8D99F0),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_9D2FD0),
        /* 0x7 */ ROM_SEGMENT(ast_9DD390),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_E6A810),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8D99F0),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_9D2FD0),
        /* 0x7 */ ROM_SEGMENT(ast_9DD390),
        /* 0x8 */ ROM_SEGMENT(ast_9EB5E0),
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_E6A810),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8D99F0),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_9D2FD0),
        /* 0x7 */ ROM_SEGMENT(ast_9DD390),
        /* 0x8 */ ROM_SEGMENT(ast_9EB5E0),
        /* 0x9 */ ROM_SEGMENT(ast_9F4880),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_E6A810),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8D99F0),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_9D2FD0),
        /* 0x7 */ ROM_SEGMENT(ast_9DD390),
        /* 0x8 */ ROM_SEGMENT(ast_9EB5E0),
        /* 0x9 */ ROM_SEGMENT(ast_9F4880),
        /* 0xA */ ROM_SEGMENT(ast_A049A0),
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_E6A810),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8D99F0),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_9D2FD0),
        /* 0x7 */ ROM_SEGMENT(ast_9DD390),
        /* 0x8 */ ROM_SEGMENT(ast_9EB5E0),
        /* 0x9 */ ROM_SEGMENT(ast_9F4880),
        /* 0xA */ ROM_SEGMENT(ast_A049A0),
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli2_SectorX[2] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8A68C0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_922730),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_A1D0F0),
        /* 0x7 */ ROM_SEGMENT(ast_BFA740),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_955270),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8A68C0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_922730),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_A1D0F0),
        /* 0x7 */ ROM_SEGMENT(ast_BFA740),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_955270),
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli4_SectorZ[1] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8A68C0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_922730),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_A4FBB0),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_955270),
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli3_Aquas[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8E1F80),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_A58F60),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli3_Area6[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8A68C0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_922730),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_A8B470),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli4_Fortuna[2] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_B1CA50),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_940AD0) } },
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_B1CA50),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli3_Unk4[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8A68C0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_922730),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_A8B470),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvlE9F1D0_SectorY[1] = {
    { OVERLAY_OFFSETS(ovl_E9F1D0),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8A68C0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_922730),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_B2CA50),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli3_Solar[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_B612E0),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_955270),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli3_Zoness[1] = {
    { OVERLAY_OFFSETS(ovl_i3),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_B84560),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_955270),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli1_Venom1[1] = {
    { OVERLAY_OFFSETS(ovl_DF4260),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_AB4000),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ ROM_SEGMENT(ast_AE60A0),
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_955270),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvlE9F1D0_Venom2[1] = {
    { OVERLAY_OFFSETS(ovl_E9F1D0),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_ACF960),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ ROM_SEGMENT(ast_CE9E70),
        /* 0xD */ ROM_SEGMENT(ast_955270),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvlE9F1D0_VenomSW[2] = {
    { OVERLAY_OFFSETS(ovl_E9F1D0),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_ACF960),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_940AD0) } },
    { OVERLAY_OFFSETS(ovl_E9F1D0),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_ACF960),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli2_Setup20[1] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_AE60A0),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli4_Bolse[1] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8A68C0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_922730),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_B0AA00),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_940AD0) } },
};

OverlayInit sOvli4_Katina[1] = {
    { OVERLAY_OFFSETS(ovl_i4),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_BB11D0),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_955270),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_940AD0) } },
};

OverlayInit sOvlE6A810_Macbeth[2] = {
    { OVERLAY_OFFSETS(ovl_E6A810),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8D99F0),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_BC23D0),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ ROM_SEGMENT(ast_955270),
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_E6A810),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8D99F0),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_BC23D0),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ ROM_SEGMENT(ast_92EC40),
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sOvli1_Training[1] = {
    { OVERLAY_OFFSETS(ovl_DF4260),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8BFC00),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ ROM_SEGMENT(ast_DDC010),
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ ROM_SEGMENT(ast_940AD0) } },
};

OverlayInit sOvli2_Versus[2] = {
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8AE0A0),
        /* 0x3 */ ROM_SEGMENT(ast_8E92D0),
        /* 0x4 */ ROM_SEGMENT(ast_918430),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_CBFE70),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
    { OVERLAY_OFFSETS(ovl_i2),
      { /* 0x1 */ ROM_SEGMENT(ast_873CB0),
        /* 0x2 */ ROM_SEGMENT(ast_8A68C0),
        /* 0x3 */ ROM_SEGMENT(ast_8E92D0),
        /* 0x4 */ ROM_SEGMENT(ast_922730),
        /* 0x5 */ ROM_SEGMENT(ast_CD2410),
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ ROM_SEGMENT(ast_CBFE70),
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};

OverlayInit sEFFA40_Overlay[1] = {
    { OVERLAY_OFFSETS(ovl_EFFA40),
      { /* 0x1 */ NO_SEGMENT,
        /* 0x2 */ NO_SEGMENT,
        /* 0x3 */ NO_SEGMENT,
        /* 0x4 */ NO_SEGMENT,
        /* 0x5 */ NO_SEGMENT,
        /* 0x6 */ NO_SEGMENT,
        /* 0x7 */ NO_SEGMENT,
        /* 0x8 */ NO_SEGMENT,
        /* 0x9 */ NO_SEGMENT,
        /* 0xA */ NO_SEGMENT,
        /* 0xB */ NO_SEGMENT,
        /* 0xC */ NO_SEGMENT,
        /* 0xD */ NO_SEGMENT,
        /* 0xE */ NO_SEGMENT,
        /* 0xF */ NO_SEGMENT } },
};
