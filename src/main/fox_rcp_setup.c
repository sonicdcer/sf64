#include "gfx.h"

Gfx gSetupDLs[][9] = {
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
        gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
        gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
        gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_PASS2),
        gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_DECAL, G_RM_AA_ZB_OPA_DECAL2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_PASS2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, SHADE, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, SHADE, ENVIRONMENT,
                           PRIMITIVE, ENVIRONMENT, SHADE, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, SHADE, ENVIRONMENT),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
        gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
        gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
        gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, 1, 0, 0, 0, TEXEL0, 0, 0, 0, 1),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
        gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
        gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_PASS2),
        gsSPSetGeometryMode(G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_DECALRGB, G_CC_DECALRGB),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_INTER, G_RM_AA_ZB_OPA_INTER2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_OPA_TERR, G_RM_AA_ZB_OPA_TERR2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | ALPHA_CVG_SEL |
                              GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA),
                          AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | ALPHA_CVG_SEL |
                              GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, PRIMITIVE, COMBINED, 0,
                           PRIMITIVE, 0),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_PASS2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, PRIMITIVE, COMBINED, 0,
                           PRIMITIVE, 0),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, NOISE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_PASS2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEI_PRIM, G_CC_PASS2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(NOISE, ENVIRONMENT, PRIMITIVE_ALPHA, ENVIRONMENT, 0, 0, 0, 1, TEXEL1, PRIMITIVE, COMBINED,
                           PRIMITIVE, 0, 0, 0, 1),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
        gsSPSetGeometryMode(G_SHADE | G_FOG | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT,
                           TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
        gsSPSetGeometryMode(G_ZBUFFER),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(G_ZBUFFER),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
        gsSPSetGeometryMode(G_ZBUFFER),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_XLU_DECAL, G_RM_AA_ZB_XLU_DECAL2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(G_ZBUFFER),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_XLU_DECAL, G_RM_AA_ZB_XLU_DECAL2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_BLENDPEDECALA, G_CC_BLENDPEDECALA),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT,
                           TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_BLENDPEDECALA, G_CC_BLENDPEDECALA),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_XLU_DECAL, G_RM_AA_ZB_XLU_DECAL2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | ZMODE_XLU | FORCE_BL | G_RM_PASS,
                          AA_EN | Z_CMP | Z_UPD | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | ZMODE_XLU | FORCE_BL |
                              GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_PASS2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_TEX_EDGE2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
        gsSPSetGeometryMode(G_ZBUFFER | G_CULL_BACK),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(G_ZBUFFER | G_CULL_BACK),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIDECALA),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_PASS2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, NOISE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_PASS2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_CLD_SURF, G_RM_CLD_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT,
                           TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0),
        gsSPSetGeometryMode(G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_CLD_SURF, G_RM_CLD_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(G_ZBUFFER),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(G_ZBUFFER),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_ZB_OVL_SURF, G_RM_ZB_OVL_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT,
                           TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,
                           PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,
                           PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_ZB_OVL_SURF, G_RM_ZB_OVL_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(G_ZBUFFER),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_FULL | ZMODE_OPA | CVG_X_ALPHA | FORCE_BL |
                              GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA),
                          AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_FULL | ZMODE_OPA | CVG_X_ALPHA | FORCE_BL |
                              GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(Z_CMP | Z_UPD | IM_RD | CVG_DST_SAVE | ZMODE_XLU | FORCE_BL | G_RM_PASS,
                          Z_CMP | Z_UPD | IM_RD | CVG_DST_SAVE | ZMODE_XLU | FORCE_BL |
                              GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT,
                           TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_SAVE | ZMODE_OPA | CVG_X_ALPHA | FORCE_BL |
                              GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA),
                          AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_SAVE | ZMODE_OPA | CVG_X_ALPHA | FORCE_BL |
                              GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_MODULATEIDECALA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_MODULATEIDECALA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,
                           PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_MODULATEIDECALA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA |
                              GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA),
                          AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA |
                              GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
        gsSPSetGeometryMode(0),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA |
                              GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA),
                          AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA |
                              GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_NONE | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
    {
        gsDPPipeSync(),
        gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                              G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
        gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
        gsDPSetCombineLERP(NOISE, ENVIRONMENT, ENV_ALPHA, ENVIRONMENT, 0, 0, 0, 1, TEXEL1, COMBINED, PRIMITIVE_ALPHA,
                           COMBINED, 0, 0, 0, 1),
        gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
        gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 3, G_AC_NONE | G_ZS_PIXEL),
        gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
        gsSPSetOtherModeHi(G_AD_PATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                           G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
        gsSPEndDisplayList(),
    },
};
