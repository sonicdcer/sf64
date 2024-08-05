#include "global.h"

void Fortuna_LevelComplete(Player*);
void Bolse_BoLaserCannon_Update(Boss*);
void Bolse_BoLaserCannon_Draw(BoLaserCannon*);
void Bolse_BoShieldReactor_Update(BoShieldReactor*);
void Bolse_BoShieldReactor_Draw(Boss*);
void Bolse_BoBase_Update(Actor*);
void Bolse_BoBase_Draw(Actor*);
void Bolse_BoBaseShield_Update(Actor*);
void Bolse_BoBaseShield_Draw(Actor*);

UNK_TYPE D_i4_801A03C0;
s32 D_i4_8019EDD0 = 0;

void OvlI4_CallFunction(u32 mode, void* ptr) {
    switch (mode) {
        case OVLCALL_FO_CS_COMPLETE:
            Fortuna_LevelComplete(ptr);
            break;
        case OVLCALL_BO_BASE_UPDATE:
            Bolse_BoBase_Update(ptr);
            break;
        case OVLCALL_BO_BASE_DRAW:
            Bolse_BoBase_Draw(ptr);
            break;
        case OVLCALL_BO_BASE_SHIELD_UPDATE:
            Bolse_BoBaseShield_Update(ptr);
            break;
        case OVLCALL_BO_BASE_SHIELD_DRAW:
            Bolse_BoBaseShield_Draw(ptr);
            break;
        case OVLCALL_BO_SHIELD_REACTOR_UPDATE:
            Bolse_BoShieldReactor_Update(ptr);
            break;
        case OVLCALL_BO_SHIELD_REACTOR_DRAW:
            Bolse_BoShieldReactor_Draw(ptr);
            break;
        case OVLCALL_BO_LASER_CANNON_UPDATE:
            Bolse_BoLaserCannon_Update(ptr);
            break;
        case OVLCALL_BO_LASER_CANNON_DRAW:
            Bolse_BoLaserCannon_Draw(ptr);
        default:
            PRINTF("i4 指定外！\n"); // Not specified!
            break;
    }
}
