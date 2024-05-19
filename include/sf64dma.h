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

#define ROM_SEGMENT(file) { SEGMENT_ROM_START(file), SEGMENT_ROM_END(file) }

#define OVERLAY_OFFSETS(file)                                 \
    { { SEGMENT_ROM_START(file), SEGMENT_ROM_END(file) },     \
      { SEGMENT_BSS_START(file), SEGMENT_BSS_END(file) },     \
      { SEGMENT_TEXT_START(file), SEGMENT_TEXT_END(file) },   \
      { SEGMENT_DATA_START(file), SEGMENT_RODATA_END(file) } }

#define NO_SEGMENT { NULL, NULL }

#define NO_OVERLAY { NO_SEGMENT, NO_SEGMENT, NO_SEGMENT, NO_SEGMENT }

u8 Load_SceneSetup(u8 sceneId, u8 sceneSetup);
void Load_InitDmaAndMsg(void);

typedef struct {
    /* 0x0 */ void* start;
    /* 0x4 */ void* end;
} SegmentOffset; // size = 0x8

#define SEGMENT_SIZE(segment) ((ptrdiff_t) ((uintptr_t) (segment).end - (uintptr_t) (segment).start))

typedef struct {
    /* 0x00 */ SegmentOffset rom;
    /* 0x08 */ SegmentOffset bss;
    /* 0x10 */ SegmentOffset text;
    /* 0x18 */ SegmentOffset data;
} OverlayOffsets; // size = 0x20

typedef struct {
    /* 0x00 */ OverlayOffsets ovl;
    /* 0x20 */ SegmentOffset assets[15];
} Scene; // size = 0x98

typedef struct {
    /* 0x0 */ void* vRomAddress;
    /* 0x4 */ SegmentOffset pRom;
    /* 0xC */ bool compFlag;
} DmaEntry; // size = 0x10;

#define DMA_ENTRY(file) { file##_ROM_START, { file##_ROM_START, file##_ROM_END }, false }
#define DMA_ENTRY_NONE { NULL, { NULL, NULL }, false }

extern DmaEntry gDmaTable[]; // 178A70

DECLARE_SEGMENT(makerom);
DECLARE_SEGMENT(main);
DECLARE_SEGMENT(dma_table);
DECLARE_SEGMENT(audio_seq);
DECLARE_SEGMENT(audio_bank);
DECLARE_SEGMENT(audio_table);
DECLARE_SEGMENT(ast_common);
DECLARE_SEGMENT(ast_bg_space);
DECLARE_SEGMENT(ast_bg_planet);
DECLARE_SEGMENT(ast_arwing);
DECLARE_SEGMENT(ast_landmaster);
DECLARE_SEGMENT(ast_blue_marine);
DECLARE_SEGMENT(ast_versus);
DECLARE_SEGMENT(ast_enmy_planet);
DECLARE_SEGMENT(ast_enmy_space);
DECLARE_SEGMENT(ast_great_fox);
DECLARE_SEGMENT(ast_star_wolf);
DECLARE_SEGMENT(ast_allies);
DECLARE_SEGMENT(ast_corneria);
DECLARE_SEGMENT(ast_meteo);
DECLARE_SEGMENT(ast_titania);
DECLARE_SEGMENT(ast_7_ti_2);
DECLARE_SEGMENT(ast_8_ti);
DECLARE_SEGMENT(ast_9_ti);
DECLARE_SEGMENT(ast_A_ti);
DECLARE_SEGMENT(ast_7_ti_1);
DECLARE_SEGMENT(ast_sector_x);
DECLARE_SEGMENT(ast_sector_z);
DECLARE_SEGMENT(ast_aquas);
DECLARE_SEGMENT(ast_area_6);
DECLARE_SEGMENT(ast_venom_1);
DECLARE_SEGMENT(ast_venom_2);
DECLARE_SEGMENT(ast_ve1_boss);
DECLARE_SEGMENT(ast_bolse);
DECLARE_SEGMENT(ast_fortuna);
DECLARE_SEGMENT(ast_sector_y);
DECLARE_SEGMENT(ast_solar);
DECLARE_SEGMENT(ast_zoness);
DECLARE_SEGMENT(ast_katina);
DECLARE_SEGMENT(ast_macbeth);
DECLARE_SEGMENT(ast_warp_zone);
DECLARE_SEGMENT(ast_title);
DECLARE_SEGMENT(ast_map);
DECLARE_SEGMENT(ast_map_en);
DECLARE_SEGMENT(ast_map_fr);
DECLARE_SEGMENT(ast_map_de);
DECLARE_SEGMENT(ast_option);
DECLARE_SEGMENT(ast_option_en);
DECLARE_SEGMENT(ast_option_fr);
DECLARE_SEGMENT(ast_option_de);
DECLARE_SEGMENT(ast_vs_menu);
DECLARE_SEGMENT(ast_vs_menu_en);
DECLARE_SEGMENT(ast_vs_menu_fr);
DECLARE_SEGMENT(ast_vs_menu_de);
DECLARE_SEGMENT(ast_text);
DECLARE_SEGMENT(ast_font_3d);
DECLARE_SEGMENT(ast_andross);
DECLARE_SEGMENT(ast_logo);
DECLARE_SEGMENT(ast_ending);
DECLARE_SEGMENT(ast_ending_award_front);
DECLARE_SEGMENT(ast_ending_award_back);
DECLARE_SEGMENT(ast_ending_expert);
DECLARE_SEGMENT(ast_training);
DECLARE_SEGMENT(ast_radio);
DECLARE_SEGMENT(ast_radio_en);
DECLARE_SEGMENT(ast_radio_fr);
DECLARE_SEGMENT(ast_radio_de);
DECLARE_SEGMENT(ovl_i1);
DECLARE_SEGMENT(ovl_i2);
DECLARE_SEGMENT(ovl_i3);
DECLARE_SEGMENT(ovl_i4);
DECLARE_SEGMENT(ovl_i5);
DECLARE_SEGMENT(ovl_i6);
DECLARE_SEGMENT(ovl_menu);
DECLARE_SEGMENT(ovl_ending);
DECLARE_SEGMENT(ovl_unused);





#endif
