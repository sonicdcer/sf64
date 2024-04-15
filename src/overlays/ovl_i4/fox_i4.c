#include "global.h"

void Fortuna_8018927C(void*);
void Bolse_8018D394(void*);
void Bolse_8018D454(void*);
void Bolse_8018D7F0(void*);
void Bolse_8018D960(void*);
void Bolse_8018E710(void*);
void Bolse_8018E870(void*);
void Bolse_80191BAC(void*);
void Bolse_80191DB0(void*);

UNK_TYPE D_i4_801A03C0;
s32 D_i4_8019EDD0 = 0;

void OvlI4_CallFunction(u32 arg0, void* arg1) {
    switch (arg0) {
        case OVLCALL_FO_CS_COMPLETE:
            Fortuna_8018927C(arg1);
            break;
        case OVLCALL_BOSS309_UPDATE:
            Bolse_8018E710(arg1);
            break;
        case OVLCALL_BOSS309_DRAW:
            Bolse_8018E870(arg1);
            break;
        case OVLCALL_BOSS310_UPDATE:
            Bolse_80191BAC(arg1);
            break;
        case OVLCALL_BOSS310_DRAW:
            Bolse_80191DB0(arg1);
            break;
        case OVLCALL_ACTOR271_UPDATE:
            Bolse_8018D7F0(arg1);
            break;
        case OVLCALL_ACTOR271_DRAW:
            Bolse_8018D960(arg1);
            break;
        case OVLCALL_ACTOR272_UPDATE:
            Bolse_8018D394(arg1);
            break;
        case OVLCALL_ACTOR272_DRAW:
            Bolse_8018D454(arg1);
        default:
            PRINTF("i4 指定外！\n"); // Not specified!
            break;
    }
}
