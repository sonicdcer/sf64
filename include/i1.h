#ifndef I1_H
#define I1_H

#include "libc/stdbool.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"

extern Gfx* D_VE1_8019A008[];
extern f32 D_VE1_8019A9B8[];

extern void Corneria_LevelStart(Player*);
extern void Corneria_LevelComplete1(Player*);
extern void Venom1_LevelStart(Player*);

void Corneria_Smoke_Update(Sprite*);
void Corneria_Granga_Update(Granga*);
void Corneria_Granga_Draw(Granga*);
void Corneria_Actor176_Update(Actor176*);
void Corneria_Actor177_Update(Actor177*);
void Corneria_Actor178_Update(Actor178*);
void Corneria_Actor179_Update(Actor179*);
void Corneria_Actor176_Draw(Actor176*);
void Corneria_Actor177_Draw(Actor177*);
void Corneria_Actor178_Draw(Actor178*);
void Corneria_Actor179_Draw(Actor179*);
void Corneria_Carrier_Update(Carrier*);
void Corneria_Boss294_Update(Boss294*);
void Corneria_Boss295_Update(Boss295*);
void Corneria_Boss296_Update(Boss296*);
void Corneria_Carrier_Draw(Carrier*);
void Corneria_Boss294_Draw(Boss294*);
void Corneria_Boss295_Draw(Boss295*);
void Corneria_Boss296_Draw(Boss296*);
void Corneria_Doors_Update(Scenery*);
void Corneria_Doors_Draw(Scenery*);
void Venom1_BossTrigger1_Update(Sprite*);
void Venom1_BossTrigger2_Update(Sprite*);
void Venom1_BossTrigger3_Update(Sprite*);
void Venom1_BossTrigger4_Update(Sprite*);
void Venom1_Actor280_Update(Actor*);
void Venom1_Doodad_Update(Actor*);
void Venom1_Actor281_Draw(Actor*);
void Venom1_Actor283_Update(Actor*);
void Venom1_Actor284_Update(Actor*);
void Venom1_Actor284_Draw(Actor*);
void Venom1_Scenery52_Update(Scenery*);
void Venom1_Boss_Update(Boss*);
void Venom1_Boss_Draw(Boss*);
void Training_ItemRing_Update(Item*);

void OvlI1_CallFunction(s32, void*);
void Corneria_BuildingOnFire_Update(Scenery*);
void Corneria_BuildingOnFire_Draw(Scenery*);
void Corneria_Granga_Init(Boss *);
void Corneria_8018B0B4(Actor *);
void Corneria_Carrier_Init(Carrier *);
void Corneria_Boss294_Draw(Boss*);
void Venom1_Scenery127_Update(Scenery* );
void Venom1_8019250C(Actor *);
void Venom1_80192CB0(Actor *);
void Venom1_80192EA4(Actor *);
void Venom1_801933B4(Actor *);
void Venom1_Boss319_Init(Boss *);
void Venom1_80198310(Boss *);
void Venom1_80198594(Boss *);
void Training_RingPassCount_Draw(void);
void Training_Setup360_TR(void);
void Training_SpawnEnemies(void);
void Venom1_8019864C(PlayerShot*);

#endif
