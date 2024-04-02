#ifndef SF64_MESG
#define SF64_MESG

#include "libultra/ultra64.h"
#include "libc/stdbool.h"

typedef struct {
    s32 msgId;
    u16* msgPtr;
} MsgLookup;

u16* Message_PtrFromId(u16 msgId);
u16 Message_IdFromPtr(u16*);
s32 Message_GetWidth(u16* msgPtr);
s32 Message_GetCharCount(u16* msgPtr);
void Message_DisplayChar(Gfx** gfxPtr, u16 msgChar, s32 xpos, s32 ypos);
bool Message_DisplayText(Gfx** gfxPtr, u16* msgPtr, s32 xPos, s32 yPos, s32 len);
void Message_DisplayScrollingText(Gfx** gfxPtr, u16* msgPtr, s32 xPos, s32 yPos, s32 yRangeHi, s32 yRangeLo, s32 len);
bool Message_IsPrintingChar(u16* msgPtr, s32 charPos);

typedef enum RadioCharacterId {
    RCID_FOX = 0,
    RCID_FOX_OPEN,
    RCID_FOX_RED = 5,
    RCID_FOX_RED_OPEN,
    RCID_STATIC = 2,
    RCID_STATIC_FLIP,
    RCID_FALCO = 10,
    RCID_FALCO_OPEN,
    RCID_FALCO_RED = 15,
    RCID_FALCO_RED_OPEN,
    RCID_SLIPPY = 20,
    RCID_SLIPPY_OPEN,
    RCID_SLIPPY_RED = 25,
    RCID_SLIPPY_RED_OPEN,
    RCID_PEPPY = 30,
    RCID_PEPPY_OPEN,
    RCID_PEPPY_RED = 35,
    RCID_PEPPY_RED_OPEN,
    RCID_KATT = 40,
    RCID_KATT_OPEN,
    RCID_ANDROSS = 50,
    RCID_ANDROSS_OPEN,
    RCID_ANDROSS_RED = 55,
    RCID_ANDROSS_RED_OPEN,
    RCID_JAMES = 60,
    RCID_JAMES_OPEN,
    RCID_GEN_PEPPER = 70,
    RCID_GEN_PEPPER_OPEN,
    RCID_BOSS_CORNERIA = 80,
    RCID_BOSS_CORNERIA_OPEN,
    RCID_ROB64 = 90,
    RCID_ROB64_OPEN,
    RCID_ROB64_RED = 95,
    RCID_ROB64_RED_OPEN,
    RCID_BOSS_METEO = 100,
    RCID_BOSS_METEO_OPEN,
    RCID_BOSS_CORNERIA2 = 110,
    RCID_BOSS_CORNERIA2_OPEN,
    RCID_BOSS_AREA6 = 120,
    RCID_BOSS_AREA6_OPEN,
    RCID_BOSS_ZONESS = 130,
    RCID_BOSS_ZONESS_OPEN,
    RCID_ROB64_2 = 140,
    RCID_ROB64_2_OPEN,
    RCID_BOSS_SECTORX = 150,
    RCID_BOSS_SECTORX_OPEN,
    RCID_BOSS_SECTORY = 160,
    RCID_BOSS_SECTORY_OPEN,
    RCID_BILL = 170,
    RCID_BILL_OPEN,
    RCID_CAIMAN_AREA6 = 180,
    RCID_CAIMAN_AREA6_OPEN,
    RCID_BOSS_MACBETH = 190,
    RCID_BOSS_MACBETH_OPEN,
    RCID_WOLF = 200,
    RCID_WOLF_OPEN,
    RCID_PIGMA = 210,
    RCID_PIGMA_OPEN,
    RCID_LEON = 220,
    RCID_LEON_OPEN,
    RCID_ANDREW = 230,
    RCID_ANDREW_OPEN,
    RCID_WOLF_2 = 240,
    RCID_WOLF_2_OPEN,
    RCID_PIGMA_2 = 250,
    RCID_PIGMA_2_OPEN,
    RCID_LEON_2 = 260,
    RCID_LEON_2_OPEN,
    RCID_ANDREW_2 = 270,
    RCID_ANDREW_2_OPEN,
    RCID_ROB64_TITLE = 300,
    RCID_ROB64_TITLE_OPEN,
    RCID_GEN_PEPPER_TITLE = 310,
    RCID_GEN_PEPPER_TITLE_OPEN,
    RCID_TR = 350,
    RCID_TR_OPEN,
    RCID_FOX_EXPERT = 400,
    RCID_FOX_EXPERT_OPEN,
} RadioCharacterId;

void Radio_PlayMessage(u16*, enum RadioCharacterId);
void func_radio_800BB388(void);
void func_radio_800BB5D0(void);

typedef enum {
    MSGCHAR_END,
    MSGCHAR_NWL,
    MSGCHAR_NP2,
    MSGCHAR_NP3,
    MSGCHAR_NP4,
    MSGCHAR_NP5,
    MSGCHAR_NP6,
    MSGCHAR_NP7,
    MSGCHAR_PRI0,
    MSGCHAR_PRI1,
    MSGCHAR_PRI2,
    MSGCHAR_PRI3,
    MSGCHAR_SPC,
    MSGCHAR_QSP,
    MSGCHAR_HSP,
    MSGCHAR_NPF,
    MSGCHAR_CLF,
    MSGCHAR_CUP,
    MSGCHAR_CRT,
    MSGCHAR_CDN,
    MSGCHAR_AUP,
    MSGCHAR_ALF,
    MSGCHAR_ADN,
    MSGCHAR_ART,
    MSGCHAR_A,
    MSGCHAR_B,
    MSGCHAR_C,
    MSGCHAR_D,
    MSGCHAR_E,
    MSGCHAR_F,
    MSGCHAR_G,
    MSGCHAR_H,
    MSGCHAR_I,
    MSGCHAR_J,
    MSGCHAR_K,
    MSGCHAR_L,
    MSGCHAR_M,
    MSGCHAR_N,
    MSGCHAR_O,
    MSGCHAR_P,
    MSGCHAR_Q,
    MSGCHAR_R,
    MSGCHAR_S,
    MSGCHAR_T,
    MSGCHAR_U,
    MSGCHAR_V,
    MSGCHAR_W,
    MSGCHAR_X,
    MSGCHAR_Y,
    MSGCHAR_Z,
    MSGCHAR_a,
    MSGCHAR_b,
    MSGCHAR_c,
    MSGCHAR_d,
    MSGCHAR_e,
    MSGCHAR_f,
    MSGCHAR_g,
    MSGCHAR_h,
    MSGCHAR_i,
    MSGCHAR_j,
    MSGCHAR_k,
    MSGCHAR_l,
    MSGCHAR_m,
    MSGCHAR_n,
    MSGCHAR_o,
    MSGCHAR_p,
    MSGCHAR_q,
    MSGCHAR_r,
    MSGCHAR_s,
    MSGCHAR_t,
    MSGCHAR_u,
    MSGCHAR_v,
    MSGCHAR_w,
    MSGCHAR_x,
    MSGCHAR_y,
    MSGCHAR_z,
    MSGCHAR_EXM,
    MSGCHAR_QST,
    MSGCHAR_DSH,
    MSGCHAR_CMA,
    MSGCHAR_PRD,
    MSGCHAR_0,
    MSGCHAR_1,
    MSGCHAR_2,
    MSGCHAR_3,
    MSGCHAR_4,
    MSGCHAR_5,
    MSGCHAR_6,
    MSGCHAR_7,
    MSGCHAR_8,
    MSGCHAR_9,
    MSGCHAR_APS,
    MSGCHAR_LPR,
    MSGCHAR_RPR,
    MSGCHAR_CLN,
    MSGCHAR_PIP,
} MsgCharCode;

#endif
