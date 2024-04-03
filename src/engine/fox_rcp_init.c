#include "gfx.h"

Gfx gRcpInitDL[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                          G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
    gsDPSetRenderMode(G_RM_NOOP, G_RM_NOOP2),
    gsSPSetOtherModeHi(G_AD_NOISE | G_CD_DISABLE | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                       G_TD_CLAMP | G_TP_PERSP | G_CYC_FILL | G_PM_NPRIMITIVE),
    gsSPClipRatio(FRUSTRATIO_1),
    gsSPEndDisplayList(),
};
