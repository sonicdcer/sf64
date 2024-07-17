#ifndef I6_H
#define I6_H

#include "libc/stdbool.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"

extern f32 D_Andross_801A7F58;
extern f32 D_Andross_801A7F60;
extern f32 D_Andross_801A7F68;
extern f32 D_Andross_801A7F70;
extern f32 D_Andross_801A7F78;

void Andross_80187530(Actor*);
void Andross_80193C4C(Player*);
void Andross_80195E44(Actor*);
void Venom2_LevelStart(Player*);
void Venom2_LevelComplete(Player*);
void SectorY_LevelComplete(Player*);
void SectorY_8019FF00(Actor*);
void SectorY_801A0AC0(Player*);

void Andross_8018769C(Actor*);
void OvlI6_CallFunction(u32 mode, void* ptr);
void Andross_801878A8(void);
void Andross_801888F4(Actor *);
void Andross_80189214(void);
void Andross_8018BDD8(void);
void Andross_8018C390(Player*);
void Andross_Boss320_Init(Boss *);
void Andross_801961AC(void);
void Venom2_UpdateEvents(Actor*);
void Venom2_LoadLevelObjects(void);
void SectorY_Boss314_Init(Boss *);
void SectorY_SyRobot_Update(Actor*);
void SectorY_SyRobot_Draw(Actor*);
void Turret_Update(Player*);
void Turret_UpdateCamera(Player*);
void Turret_Draw(Player *);

void Andross_Actor199_Update(Actor*);
void Andross_Actor199_Draw(Actor*);
void Andross_Actor286_Update(Actor*);
void Andross_Actor286_Draw(Actor*);
void Andross_AndBossTimer_Update(Actor*);
void Andross_AndRadio_Update(Actor*);
void Andross_AndJamesTrigger_Update(Actor*);
void Andross_AndExplosion_Update(Actor*);
void Andross_Boss321_Update(Boss*);
void Andross_Boss321_Draw(Boss*);
void Andross_Effect396_Update(Effect*);
void Andross_Effect396_Draw(Effect*);
void Andross_Boss320_Update(Boss*);
void Andross_Boss320_Draw(Boss*);
void Andross_AndLaserEmitter_Update(Actor*);
void Andross_AndLaserEmitter_Draw(Actor*);
void Andross_Scenery132_Update(Scenery*);
void Andross_Scenery132_Draw(Scenery*);
void Andross_Scenery131_Update(Scenery*);
void Andross_Scenery131_Draw(Scenery*);
void Venom2_Boss_Update(Boss*);
void Venom2_Boss_Draw(Boss*);
void SectorY_Effect354_Draw(Effect*);
void SectorY_Scenery156_Draw(Scenery*);
void SectorY_Boss_Update(Boss*);
void SectorY_Boss_Draw(Boss*);
void SectorY_Scenery109_Update(Scenery*);
void SectorY_Scenery112_Update(Scenery*);

#endif
