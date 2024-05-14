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

 // Id + 1 gives the other frame of the animation
typedef enum RadioCharacterId {
    RCID_FOX = 0,
    RCID_STATIC = 2,
    RCID_FOX_RED = 5,
    RCID_FALCO = 10,
    RCID_FALCO_RED = 15,
    RCID_SLIPPY = 20,
    RCID_SLIPPY_RED = 25,
    RCID_PEPPY = 30,
    RCID_PEPPY_RED = 35,
    RCID_KATT = 40,
    RCID_ANDROSS = 50,
    RCID_ANDROSS_RED = 55,
    RCID_JAMES = 60,
    RCID_GEN_PEPPER = 70,
    RCID_BOSS_CORNERIA = 80,
    RCID_ROB64 = 90,
    RCID_ROB64_RED = 95,
    RCID_BOSS_METEO = 100,
    RCID_BOSS_CORNERIA2 = 110,
    RCID_BOSS_AREA6 = 120,
    RCID_BOSS_ZONESS = 130,
    RCID_ROB64_2 = 140,
    RCID_BOSS_SECTORX = 150,
    RCID_BOSS_SECTORY = 160,
    RCID_BILL = 170,
    RCID_CAIMAN_AREA6 = 180,
    RCID_BOSS_MACBETH = 190,
    RCID_WOLF = 200,
    RCID_PIGMA = 210,
    RCID_LEON = 220,
    RCID_ANDREW = 230,
    RCID_WOLF_2 = 240,
    RCID_PIGMA_2 = 250,
    RCID_LEON_2 = 260,
    RCID_ANDREW_2 = 270,
    RCID_ROB64_TITLE = 300,
    RCID_GEN_PEPPER_TITLE = 310,
    RCID_TR = 350,
    RCID_FOX_EXPERT = 400,
    RCID_1000 = 1000,
} RadioCharacterId;

void Radio_PlayMessage(u16*, RadioCharacterId);
void func_radio_800BB388(void);
void Radio_Draw(void);

typedef enum MsgCharCode {
    // Non-printing and whitespace
    MSGCHAR_END,   // End message
    MSGCHAR_NWL,   // New line
    MSGCHAR_NP2,   // No effect
    MSGCHAR_NP3,   // No effect
    MSGCHAR_NP4,   // No effect
    MSGCHAR_NP5,   // No effect
    MSGCHAR_NP6,   // No effect
    MSGCHAR_NP7,   // No effect
    MSGCHAR_PRI0,  // Set message priority
    MSGCHAR_PRI1,  // Set message priority
    MSGCHAR_PRI2,  // Set message priority
    MSGCHAR_PRI3,  // Set message priority
    MSGCHAR_SPC,   // Space
    MSGCHAR_QSP,   // Quarter space
    MSGCHAR_HSP,   // Half Space
    MSGCHAR_NXT,   // Next text box

    // printing characters
    MSGCHAR_CLF,   // C-Left
    MSGCHAR_CUP,   // C-Up
    MSGCHAR_CRT,   // C-Right
    MSGCHAR_CDN,   // C-Down
    MSGCHAR_AUP,   // Up arrow
    MSGCHAR_ALF,   // Left arrow
    MSGCHAR_ADN,   // Down arrow
    MSGCHAR_ART,   // Right arrow
    MSGCHAR_A,     // A
    MSGCHAR_B,     // B
    MSGCHAR_C,     // C
    MSGCHAR_D,     // D
    MSGCHAR_E,     // E
    MSGCHAR_F,     // F
    MSGCHAR_G,     // G
    MSGCHAR_H,     // H
    MSGCHAR_I,     // I
    MSGCHAR_J,     // J
    MSGCHAR_K,     // K
    MSGCHAR_L,     // L
    MSGCHAR_M,     // M
    MSGCHAR_N,     // N
    MSGCHAR_O,     // O
    MSGCHAR_P,     // P
    MSGCHAR_Q,     // Q
    MSGCHAR_R,     // R
    MSGCHAR_S,     // S
    MSGCHAR_T,     // T
    MSGCHAR_U,     // U
    MSGCHAR_V,     // V
    MSGCHAR_W,     // W
    MSGCHAR_X,     // X
    MSGCHAR_Y,     // Y
    MSGCHAR_Z,     // Z
    MSGCHAR_a,     // a
    MSGCHAR_b,     // b
    MSGCHAR_c,     // c
    MSGCHAR_d,     // d
    MSGCHAR_e,     // e
    MSGCHAR_f,     // f
    MSGCHAR_g,     // g
    MSGCHAR_h,     // h
    MSGCHAR_i,     // i
    MSGCHAR_j,     // j
    MSGCHAR_k,     // k
    MSGCHAR_l,     // l
    MSGCHAR_m,     // m
    MSGCHAR_n,     // n
    MSGCHAR_o,     // o
    MSGCHAR_p,     // p
    MSGCHAR_q,     // q
    MSGCHAR_r,     // r
    MSGCHAR_s,     // s
    MSGCHAR_t,     // t
    MSGCHAR_u,     // u
    MSGCHAR_v,     // v
    MSGCHAR_w,     // w
    MSGCHAR_x,     // x
    MSGCHAR_y,     // y
    MSGCHAR_z,     // z
    MSGCHAR_EXM,   // !
    MSGCHAR_QST,   // ?
    MSGCHAR_DSH,   // -
    MSGCHAR_CMA,   // ,
    MSGCHAR_PRD,   // .
    MSGCHAR_0,     // 0
    MSGCHAR_1,     // 1
    MSGCHAR_2,     // 2
    MSGCHAR_3,     // 3
    MSGCHAR_4,     // 4
    MSGCHAR_5,     // 5
    MSGCHAR_6,     // 6
    MSGCHAR_7,     // 7
    MSGCHAR_8,     // 8
    MSGCHAR_9,     // 9
    MSGCHAR_APS,   // '
    MSGCHAR_LPR,   // (
    MSGCHAR_RPR,   // )
    MSGCHAR_CLN,   // :
    MSGCHAR_PIP,   // |
} MsgCharCode;

#endif
