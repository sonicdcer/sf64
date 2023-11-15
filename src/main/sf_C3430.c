#include "global.h"

u16* func_800C2830(u16 arg0) {
    s32 i;
    UnkStruct_D_80185CBC* ptr = D_80185CBC;

    while (ptr->unk0 != -1) {
        if (ptr->unk0 == arg0) {
            return ptr->unk4;
        }
        ptr++;
    }
    return 0;
}

u16 func_800C2890(u16* arg0) {
    s32 i;
    UnkStruct_D_80185CBC* ptr = D_80185CBC;

    while (ptr->unk4 != NULL) {
        if (ptr->unk4 == arg0) {
            return ptr->unk0;
        }
        ptr++;
    }
    return -1;
}

s32 func_800C28DC(u16* arg0) {
    s32 var_v1 = 0;
    u16* ptr = arg0;

    while (*ptr != 0) {
        if (*ptr > 15 || *ptr == 12) {
            var_v1++;
        }
        ptr++;
    }
    return var_v1;
}

s32 func_800C2928(u16* arg0) {
    s32 var_v1 = 0;
    u16* ptr = arg0;

    while (*ptr != 0) {
        var_v1++;
        ptr++;
    }
    return var_v1;
}

void func_800C295C(Gfx** arg0, u16 arg1, s32 arg2, s32 arg3) {
    gDPLoadTextureBlock_4b((*arg0)++, D_80179010[arg1 >> 2], G_IM_FMT_CI, 16, 13, arg1 & 3, G_TX_NOMIRROR | G_TX_WRAP,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*arg0)++, arg2 << 2, arg3 << 2, (arg2 + 13) << 2, (arg3 + 13) << 2, G_TX_RENDERTILE, 0x40, 0,
                        0x400, 0x400);
}

s32 func_800C2AF0(Gfx** arg0, u16* arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_s2 = arg2;
    s32 var_s4 = arg3;
    s32 i;
    s32 var_v1;

    gDPSetPrimColor((*arg0)++, 0x00, 0x00, 255, 255, 255, 255);
    gDPSetTextureLUT((*arg0)++, G_TT_RGBA16);
    gDPLoadTLUT((*arg0)++, 64, 0x100, D_Tex_800DBA20);

    // bug: if the for loop is skipped, var_v1 is never initialized
    for (i = 0; arg1[i] != 0 && i < arg4; i++) {
        var_v1 = 0;
        switch (arg1[i]) {
            case 1:
                var_s2 = arg2;
                var_s4 += 13;
                break;
            case 16:
            case 17:
            case 18:
            case 19:
                gDPSetPrimColor((*arg0)++, 0x00, 0x00, 255, 255, 0, 255);
                func_800C295C(arg0, arg1[i], var_s2, var_s4);
                var_s2 += 14;
                var_v1 = 1;
                gDPSetPrimColor((*arg0)++, 0x00, 0x00, 255, 255, 255, 255);
                break;
            case 12:
            default:
                func_800C295C(arg0, arg1[i], var_s2, var_s4);
                var_s2 += 7;
                var_v1 = 1;
                break;
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
            case 13:
            case 14:
            case 15:
                break;
        }
    }
    return var_v1;
}

void func_800C2D3C(Gfx** arg0, u16* arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 var_s2 = arg2;
    s32 var_s4 = arg3;
    s32 i;
    s32 var_v1;

    gDPSetTextureLUT((*arg0)++, G_TT_RGBA16);
    gDPLoadTLUT((*arg0)++, 64, 0x100, D_Tex_800DBA20);

    for (i = 0; arg1[i] != 0 && i < arg6; i++) {
        switch (arg1[i]) {
            case 1:
                var_s2 = arg2;
                var_s4 += 15;
                break;
            case 13:
                var_s2 += 2;
                break;
            case 14:
                var_s2 += 3;
                break;
            case 12:
                var_s2 += 7;
                break;
            default:
                if ((arg5 < var_s4) && (var_s4 < arg4)) {
                    func_800C295C(arg0, arg1[i], var_s2, var_s4);
                }
                var_s2 += 7;
                break;
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
            case 15:
                break;
        }
    }
}

s32 func_800C2F30(u16* arg0, s32 arg1) {
    s32 i;
    s32 var_v1;

    // bug: if the for loop is skipped, var_v1 is never initialized
    for (i = 0; arg0[i] != 0 && i < arg1; i++) {
        var_v1 = 0;
        switch (arg0[i]) {
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
                var_v1 = 1;
                break;
        }
    }
    return var_v1;
}
