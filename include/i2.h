#ifndef I2_H
#define I2_H

#include "libc/stdbool.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"

void Meteo_LevelStart(Player*);
void Meteo_LevelComplete(Player*);
void Meteo_8018ED9C(Actor*);
void SectorX_LevelStart(Player*);
void SectorX_LevelComplete(Player*);

void OvlI2_CallFunction(s32, void*);
void Meteo_80187B08(Actor *);
void Meteo_MeCrusher_Init(Boss *);
void Meteo_8018CCF8(Actor *);

void Meteo_MeMeteor1_Update(MeMeteor1*);
void Meteo_MeMeteor2_Update(MeMeteor2*);
void Meteo_MeLaserCannon1_Update(MeLaserCannon1*);
void Meteo_MeLaserCannon2_Update(MeLaserCannon2*);
void Meteo_Boss298_Update(Boss*);
void Meteo_Boss298_Draw(Boss*);
void Meteo_Effect369_Update(Effect*);
void Meteo_Effect370_Update(Effect*);
void Meteo_Effect371_Update(Effect*);
void Meteo_MeCrusher_Update(Boss*);
void Meteo_MeCrusher_Draw(Boss*);
void Meteo_ActorDoodad_Update(Actor*);
void Meteo_Actor183_Draw(Actor*);
void Meteo_Actor184_Draw(Actor*);
void Meteo_Actor185_Draw(Actor*);
void Meteo_Effect370_Draw(Effect*);
void Meteo_Effect369_Draw(Effect*);
void Meteo_Effect371_Draw(Effect*);
void SectorX_Slippy_Update(Actor*);
void SectorX_Slippy_Draw(Actor*);
void SectorX_Boss304_Update(Boss*);
void SectorX_Boss305_Update(Boss*);
void SectorX_Boss304_Draw(Boss*);
void SectorX_Boss305_Draw(Boss*);
void SectorX_Boss_Update(Boss*);
void SectorX_Boss_Draw(Boss*);

#endif
