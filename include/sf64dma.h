#ifndef SF64_DMA
#define SF64_DMA

#include "PR/ultratypes.h"
#include "libc/stdbool.h"

#define DECLARE_VRAM_SEGMENT(name) \
    extern u8 name ## _VRAM[]; \
    extern u8 name ## _VRAM_END[]

#define DECLARE_ROM_SEGMENT(name) \
    extern u8 name ## _ROM_START[]; \
    extern u8 name ## _ROM_END[]

#define DECLARE_TEXT_SEGMENT(name)   \
    extern u8 name ## _TEXT_START[]; \
    extern u8 name ## _TEXT_END[]

#define DECLARE_DATA_SEGMENT(name)   \
    extern u8 name ## _DATA_START[]; \
    extern u8 name ## _DATA_END[]; \
    extern u8 name ## _DATA_SIZE[]

#define DECLARE_RODATA_SEGMENT(name)   \
    extern u8 name ## _RODATA_START[]; \
    extern u8 name ## _RODATA_END[]


#define DECLARE_BSS_SEGMENT(name)   \
    extern u8 name ## _BSS_START[]; \
    extern u8 name ## _BSS_END[]

#define DECLARE_SEGMENT(name) \
    DECLARE_VRAM_SEGMENT(name); \
    DECLARE_ROM_SEGMENT(name); \
    DECLARE_TEXT_SEGMENT(name); \
    DECLARE_DATA_SEGMENT(name); \
    DECLARE_RODATA_SEGMENT(name); \
    DECLARE_BSS_SEGMENT(name)

#define SEGMENT_VRAM_START(segment) (segment ## _VRAM)
#define SEGMENT_VRAM_END(segment)   (segment ## _VRAM_END)
#define SEGMENT_VRAM_SIZE(segment)  ((uintptr_t)SEGMENT_VRAM_END(segment) - (uintptr_t)SEGMENT_VRAM_START(segment))

#define SEGMENT_ROM_START(segment) (segment ## _ROM_START)
#define SEGMENT_ROM_END(segment)   (segment ## _ROM_END)
#define SEGMENT_ROM_SIZE(segment)  ((uintptr_t)SEGMENT_ROM_END(segment) - (uintptr_t)SEGMENT_ROM_START(segment))

#define SEGMENT_TEXT_START(segment) (segment ## _TEXT_START)
#define SEGMENT_TEXT_END(segment)   (segment ## _TEXT_END)
#define SEGMENT_TEXT_SIZE(segment)  ((uintptr_t)SEGMENT_TEXT_END(segment) - (uintptr_t)SEGMENT_TEXT_START(segment))

#define SEGMENT_DATA_START(segment) (segment ## _DATA_START)
#define SEGMENT_DATA_END(segment)   (segment ## _DATA_END)
#define SEGMENT_DATA_SIZE(segment)  ((uintptr_t)SEGMENT_DATA_END(segment) - (uintptr_t)SEGMENT_DATA_START(segment))
#define SEGMENT_DATA_SIZE_CONST(segment) (segment ## _DATA_SIZE)

#define SEGMENT_RODATA_START(segment) (segment ## _RODATA_START)
#define SEGMENT_RODATA_END(segment)   (segment ## _RODATA_END)
#define SEGMENT_RODATA_SIZE(segment)  ((uintptr_t)SEGMENT_RODATA_END(segment) - (uintptr_t)SEGMENT_RODATA_START(segment))
#define SEGMENT_RODATA_SIZE_CONST(segment) (segment ## _RODATA_SIZE)

#define SEGMENT_BSS_START(segment) (segment ## _BSS_START)
#define SEGMENT_BSS_END(segment)   (segment ## _BSS_END)
#define SEGMENT_BSS_SIZE(segment)  ((uintptr_t)SEGMENT_BSS_END(segment) - (uintptr_t)SEGMENT_BSS_START(segment))

u8 Overlay_Load(u8, u8);
void Overlay_InitDma(void);

typedef struct {
    /* 0x0 */ void* start;
    /* 0x4 */ void* end;
} SegmentOffset; // size = 0x8

typedef struct {
    /* 0x00 */ SegmentOffset rom;
    /* 0x08 */ SegmentOffset bss;
    /* 0x10 */ SegmentOffset text;
    /* 0x18 */ SegmentOffset data;
} OverlayOffsets; // size = 0x20

typedef struct {
    /* 0x00 */ OverlayOffsets ovl;
    /* 0x20 */ SegmentOffset assets[15];
} OverlayInit; // size = 0x98

typedef struct {
    /* 0x0 */ void* vRomAddress;
    /* 0x8 */ SegmentOffset pRom;
    /* 0xC */ s32 compFlag;
} DmaEntry; // size = 0x10;

extern DmaEntry gDmaTable[]; // 178A70

extern OverlayInit sNoOvl_Logo[1]; // sets segment 15 with no overlay
extern OverlayInit sOvlEF0260_Credits[6]; // overlay EF0260
extern OverlayInit sOvlEBFBE0_Title[1]; // EBFBE0
extern OverlayInit sOvlEBFBE0_Menu[1]; // EBFBE0
extern OverlayInit sOvlEBFBE0_Map[1]; // EBFBE0
extern OverlayInit sOvlEBFBE0_State5[1]; // EBFBE0
extern OverlayInit sOvlDF4260_Corneria[1]; // DF4260
extern OverlayInit sOvlE08400_Meteo[2]; // E08400
extern OverlayInit sOvlE6A810_Titania[6]; // E6A810
extern OverlayInit sOvlE08400_SectorX[2]; // E08400
extern OverlayInit sOvlE51970_SectorZ[1]; // E51970
extern OverlayInit sOvli3_Aquas[1]; // i3
extern OverlayInit sOvli3_Area6[1]; // i3
extern OverlayInit sOvlE51970_Fortuna[2]; // E51970
extern OverlayInit sOvli3_Unk4[1]; // i3
extern OverlayInit sOvlE9F1D0_SectorY[1]; // E9F1D0
extern OverlayInit sOvli3_Solar[1]; // i3
extern OverlayInit sOvli3_Zoness[1]; // i3
extern OverlayInit sOvlDF4260_Venom1[1]; // DF4260
extern OverlayInit sOvlE9F1D0_Venom2[1]; // E9F1D0
extern OverlayInit sOvlE9F1D0_VenomSW[2]; // E9F1D0
extern OverlayInit sOvlE08400_Setup20[1]; // E08400
extern OverlayInit sOvlE51970_Bolse[1]; // E51970
extern OverlayInit sOvlE51970_Katina[1]; // E51970
extern OverlayInit sOvlE6A810_Macbeth[2]; // E6A810
extern OverlayInit sOvlDF4260_Training[1]; // DF4260
extern OverlayInit sOvlE08400_Versus[2]; // E08400
extern OverlayInit sEFFA40_Overlay[1]; // EFFA40

DECLARE_SEGMENT(makerom);
DECLARE_SEGMENT(main);
DECLARE_SEGMENT(dma_table);
DECLARE_SEGMENT(audio_seq);
DECLARE_SEGMENT(audio_bank);
DECLARE_SEGMENT(audio_table);
DECLARE_SEGMENT(ast_873CB0);
DECLARE_SEGMENT(ast_8A68C0);
DECLARE_SEGMENT(ast_8AE0A0);
DECLARE_SEGMENT(ast_8BFC00);
DECLARE_SEGMENT(ast_8D99F0);
DECLARE_SEGMENT(ast_8E1F80);
DECLARE_SEGMENT(ast_8E92D0);
DECLARE_SEGMENT(ast_918430);
DECLARE_SEGMENT(ast_922730);
DECLARE_SEGMENT(ast_92EC40);
DECLARE_SEGMENT(ast_940AD0);
DECLARE_SEGMENT(ast_955270);
DECLARE_SEGMENT(ast_961CE0);
DECLARE_SEGMENT(ast_9A1460);
DECLARE_SEGMENT(ast_9D2FD0);
DECLARE_SEGMENT(ast_9DD390);
DECLARE_SEGMENT(ast_9EB5E0);
DECLARE_SEGMENT(ast_9F4880);
DECLARE_SEGMENT(ast_A049A0);
DECLARE_SEGMENT(ast_A0E340);
DECLARE_SEGMENT(ast_A1D0F0);
DECLARE_SEGMENT(ast_A4FBB0);
DECLARE_SEGMENT(ast_A58F60);
DECLARE_SEGMENT(ast_A8B470);
DECLARE_SEGMENT(ast_AB4000);
DECLARE_SEGMENT(ast_ACF960);
DECLARE_SEGMENT(ast_AE60A0);
DECLARE_SEGMENT(ast_B0AA00);
DECLARE_SEGMENT(ast_B1CA50);
DECLARE_SEGMENT(ast_B2CA50);
DECLARE_SEGMENT(ast_B612E0);
DECLARE_SEGMENT(ast_B84560);
DECLARE_SEGMENT(ast_BB11D0);
DECLARE_SEGMENT(ast_BC23D0);
DECLARE_SEGMENT(ast_BFA740);
DECLARE_SEGMENT(ast_BFC510);
DECLARE_SEGMENT(ast_C48F40);
DECLARE_SEGMENT(ast_CA9DE0);
DECLARE_SEGMENT(ast_CBFE70);
DECLARE_SEGMENT(ast_CD2410);
DECLARE_SEGMENT(ast_CDDCA0);
DECLARE_SEGMENT(ast_CE9E70);
DECLARE_SEGMENT(ast_D25100);
DECLARE_SEGMENT(ast_D27600);
DECLARE_SEGMENT(ast_D43400);
DECLARE_SEGMENT(ast_D68480);
DECLARE_SEGMENT(ast_D91F10);
DECLARE_SEGMENT(ast_DDC010);
DECLARE_SEGMENT(ast_DE5D50);
DECLARE_SEGMENT(ovl_DF4260);
DECLARE_SEGMENT(ovl_E08400);
DECLARE_SEGMENT(ovl_i3);
DECLARE_SEGMENT(ovl_E51970);
DECLARE_SEGMENT(ovl_E6A810);
DECLARE_SEGMENT(ovl_E9F1D0);
DECLARE_SEGMENT(ovl_menu);
DECLARE_SEGMENT(ovl_EF0260);
DECLARE_SEGMENT(ovl_EFFA40);

#endif
