#ifndef I4_H
#define I4_H

#include "libc/stdbool.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"

extern s32 D_BO_801A03DC;
extern Matrix D_BO_8019EE80;

void Bolse_LevelStart(Player*);
void Bolse_LevelComplete(Player*);
void Katina_LevelStart(Player*);
void Katina_LevelComplete(Player*);
void Katina_SFTeamFlyTowardsCamera(Actor*);
void SectorZ_LevelStart(Player*);
void SectorZ_LevelComplete(Player*);
void SectorZ_LevelCompleteCsUpdate(Actor*);

void OvlI4_CallFunction(u32, void*);
void Fortuna_UpdateEvents(Actor*);
void Fortuna_LoadLevelObjects(void);
void Bolse_UpdateEventHandler(Actor*);
void Bolse_80191ED8(void);
void Bolse_DrawDynamicGround(void);
void Katina_BossSetup(Boss *);
void Katina_UpdateEvents(Actor*);
void Katina_Init(void);
void SectorZ_MissileExplode(Actor *, bool);
void SectorZ_Missile_Update(Actor*);
void SectorZ_UpdateEvents(Actor*);
void SectorZ_LoadLevelObjects(void);

void Fortuna_Radar_Update(Actor*);
void Fortuna_Radar_Draw(Actor*);
void Bolse_Effect397_Update(Effect*);
void Bolse_Effect397_Draw(Effect*);
void Bolse_Boss311_Update(Boss*);
void Bolse_Boss311_Draw(Boss*);
void Katina_LaserEnergyParticlesUpdate(Effect*);
void Katina_LaserEnergyParticlesDraw(Effect*);
void Katina_BaseUpdate(Boss*);
void Katina_Base_Draw(Boss*);
void Katina_BossUpdate(Boss*);
void Katina_BossDraw(Boss*);
void SectorZ_SpaceJunkUpdate(Actor*);
void SectorZ_SpaceJunkDraw(Actor*);
void SectorZ_GreatFoxUpdate(Boss*);
void SectorZ_GreatFoxDraw(Boss*);

#endif
