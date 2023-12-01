#include "global.h"

typedef enum {
    MSGCHAR_END,
    MSGCHAR_NWL,
    MSGCHAR_NP2,
    MSGCHAR_NP3,
    MSGCHAR_NP4,
    MSGCHAR_NP5,
    MSGCHAR_NP6,
    MSGCHAR_NP7,
    MSGCHAR_NP8,
    MSGCHAR_NP9,
    MSGCHAR_NPA,
    MSGCHAR_NPB,
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
} CharCode;

u16* Message_PtrFromId(u16 msgId) {
    s32 i;
    MsgLookup* lookup = gMsgLookup;

    while (lookup->msgId != -1) {
        if (lookup->msgId == msgId) {
            return lookup->msgPtr;
        }
        lookup++;
    }
    return NULL;
}

u16 Message_IdFromPtr(u16* msgPtr) {
    s32 i;
    MsgLookup* lookup = gMsgLookup;

    while (lookup->msgPtr != NULL) {
        if (lookup->msgPtr == msgPtr) {
            return lookup->msgId;
        }
        lookup++;
    }
    return -1;
}

s32 Message_GetWidth(u16* msgPtr) {
    s32 width = 0;
    u16* msgChar = msgPtr;

    while (*msgChar != MSGCHAR_END) {
        if (*msgChar > 15 || *msgChar == 12) {
            width++;
        }
        msgChar++;
    }
    return width;
}

s32 Message_GetCharCount(u16* msgPtr) {
    s32 count = 0;
    u16* msgChar = msgPtr;

    while (*msgChar != 0) {
        count++;
        msgChar++;
    }
    return count;
}

void Message_DisplayChar(Gfx** gfxPtr, u16 msgChar, s32 xpos, s32 ypos) {
    gDPLoadTextureBlock_4b((*gfxPtr)++, gTextCharTextures[msgChar >> 2], G_IM_FMT_CI, 16, 13, msgChar & 3,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                           G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, xpos << 2, ypos << 2, (xpos + 13) << 2, (ypos + 13) << 2, G_TX_RENDERTILE, 0x40, 0,
                        0x400, 0x400);
}

s32 Message_DisplayText(Gfx** gfxPtr, u16* msgPtr, s32 xPos, s32 yPos, s32 len) {
    s32 xChar = xPos;
    s32 yChar = yPos;
    s32 i;
    s32 print;

    gDPSetPrimColor((*gfxPtr)++, 0x00, 0x00, 255, 255, 255, 255);
    gDPSetTextureLUT((*gfxPtr)++, G_TT_RGBA16);
    gDPLoadTLUT((*gfxPtr)++, 64, 0x100, D_Tex_800DBA20);

    // bug: if the for loop is skipped, print is never initialized
    for (i = 0; msgPtr[i] != MSGCHAR_END && i < len; i++) {
        print = false;
        switch (msgPtr[i]) {
            case MSGCHAR_NWL:
                xChar = xPos;
                yChar += 13;
                break;
            case MSGCHAR_CLF:
            case MSGCHAR_CUP:
            case MSGCHAR_CRT:
            case MSGCHAR_CDN:
                gDPSetPrimColor((*gfxPtr)++, 0x00, 0x00, 255, 255, 0, 255);
                Message_DisplayChar(gfxPtr, msgPtr[i], xChar, yChar);
                xChar += 14;
                print = true;
                gDPSetPrimColor((*gfxPtr)++, 0x00, 0x00, 255, 255, 255, 255);
                break;
            case MSGCHAR_SPC:
            default:
                Message_DisplayChar(gfxPtr, msgPtr[i], xChar, yChar);
                xChar += 7;
                print = true;
                break;
            case MSGCHAR_NP2:
            case MSGCHAR_NP3:
            case MSGCHAR_NP4:
            case MSGCHAR_NP5:
            case MSGCHAR_NP6:
            case MSGCHAR_NP7:
            case MSGCHAR_NP8:
            case MSGCHAR_NP9:
            case MSGCHAR_NPA:
            case MSGCHAR_NPB:
            case MSGCHAR_QSP:
            case MSGCHAR_HSP:
            case MSGCHAR_NPF:
                break;
        }
    }
    return print;
}

void Message_DisplayScrollingText(Gfx** gfxPtr, u16* msgPtr, s32 xPos, s32 yPos, s32 yRangeHi, s32 yRangeLo, s32 len) {
    s32 var_s2 = xPos;
    s32 var_s4 = yPos;
    s32 i;
    // s32 var_v1;

    gDPSetTextureLUT((*gfxPtr)++, G_TT_RGBA16);
    gDPLoadTLUT((*gfxPtr)++, 64, 0x100, D_Tex_800DBA20);

    for (i = 0; msgPtr[i] != 0 && i < len; i++) {
        switch (msgPtr[i]) {
            case MSGCHAR_NWL:
                var_s2 = xPos;
                var_s4 += 15;
                break;
            case MSGCHAR_QSP:
                var_s2 += 2;
                break;
            case MSGCHAR_HSP:
                var_s2 += 3;
                break;
            case MSGCHAR_SPC:
                var_s2 += 7;
                break;
            default:
                if ((yRangeLo < var_s4) && (var_s4 < yRangeHi)) {
                    Message_DisplayChar(gfxPtr, msgPtr[i], var_s2, var_s4);
                }
                var_s2 += 7;
                break;
            case MSGCHAR_NP2:
            case MSGCHAR_NP3:
            case MSGCHAR_NP4:
            case MSGCHAR_NP5:
            case MSGCHAR_NP6:
            case MSGCHAR_NP7:
            case MSGCHAR_NP8:
            case MSGCHAR_NP9:
            case MSGCHAR_NPA:
            case MSGCHAR_NPB:
            case MSGCHAR_NPF:
                break;
        }
    }
}

s32 Message_NotWhitespace(u16* msgPtr, s32 charPos) {
    s32 i;
    s32 print;

    // bug: if the for loop is skipped, print is never initialized
    for (i = 0; msgPtr[i] != 0 && i < charPos; i++) {
        print = 0;
        switch (msgPtr[i]) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                break;
            default:
                print = 1;
                break;
        }
    }
    return print;
}
