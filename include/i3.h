#ifndef I3_H
#define I3_H

#include "libc/stdbool.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"

extern f32 D_AQ_801C4188;

void Aquas_801BE034(Actor*);

void Area6_8018DA58(Actor*);
void Zoness_8019E5F0(Actor*);
void Aquas_BlueMarineDown(Player*);
void Aquas_801BE0F0(Actor*);

void OvlI3_CallFunction(s32, void*);
void Area6_BossA6_Init(Boss *);
void Area6_Boss_Update(Boss*);
void Area6_Boss_Draw(Boss*);
void Area6_LevelStart(Player *player);
void Area6_LevelComplete(Player*);

void Zoness_SpawnDebris(Vec3f*, Vec3f*, f32, f32, f32, s32, f32, s32, s32);
void Zoness_Actor235_Draw(Actor235* this);
void Zoness_Actor235_Update(Actor235* this);
void Zoness_Actor236_Update(Actor* this);
void Zoness_Actor236_Draw(Actor* this);
void Zoness_Actor238_Update(Actor* this);
void Zoness_Actor238_Draw(Actor* this);
void Zoness_801915A4(Actor* this);
void Zoness_Actor240_Update(Actor* this);
void Zoness_Actor240_Draw(Actor* this);
void Zoness_80191BB8(Actor* actor);
void Zoness_Actor241_Update(Actor* this);
void Zoness_Actor241_Draw(Actor* this);
void Zoness_Actor241_Draw(Actor* this);
void Zoness_Actor242_Draw(Actor* this);
void Zoness_Actor242_Update(Actor* this);
void Zoness_Actor243_Update(Actor* this);
void Zoness_Actor243_Draw(Actor* this);
void Zoness_Actor244_Update(Actor* this);
void Zoness_Actor244_Draw(Actor* actor);
void Zoness_BossZo_Init(Boss* this);
void Zoness_Boss_Draw(Boss* this);
void Zoness_Boss_Update(Boss* this);
void Zoness_Actor245_Update(Actor245* this);
void Zoness_Actor245_Draw(Actor* actor);
void Zoness_Actor246_Update(Actor* this);
void Zoness_Actor246_Draw(Actor246* actor);
void Zoness_Actor248_Update(Actor* this);
void Zoness_Actor248_Draw(Actor* this);
void Zoness_Actor249_Update(Actor* this);
void Zoness_Actor249_Draw(Actor* this);
void Zoness_8019B1F0(Actor* actor);
void Zoness_Actor250_Update(Actor* this);
void Zoness_Actor250_Draw(Actor* actor);
void Zoness_8019B810(Actor* this);
void Zoness_Actor251_Update(Actor* this);
void Zoness_Actor251_Draw(Actor* this);
void Zoness_Actor252_Update(Actor* this);
void Zoness_Actor252_Draw(Actor* actor);
void Zoness_8019C200(Actor* this);
void Zoness_Actor253_Update(Actor* this);
void Zoness_Actor253_Draw(Actor* this);
void Zoness_Actor254_Update(Actor* this);
void Zoness_Actor254_Draw(Actor* this);
void Zoness_Actor247_Init(Actor* this);
void Zoness_Actor247_Update(Actor* this);
void Zoness_Actor247_Draw(Actor* this);
void Zoness_LevelStart(Player* player);
void Zoness_LevelComplete(Player* player);

void Solar_8019E8B8(f32, f32, f32, f32);
void Solar_8019E9F4(f32, f32, f32, f32, f32, f32, f32, s32);
void Solar_Actor278_Update(Actor278*);
void Solar_Doodad_Update(Actor*);
void Solar_Doodad_Draw(Actor*);
void Solar_Actor279_Update(Actor279*);
void Solar_Effect392_Update(Effect392*);
void Solar_Effect392_Draw(Effect392*);
void Solar_LevelStart(Player* player);
void Solar_Boss_Update(BossSO*);
void Solar_Boss_Draw(BossSO*);
void Solar_801A8BE8(ActorCutscene*);
void Solar_LevelComplete(Player* player);

void Aquas_801A9824(void);
void Aquas_801AA20C(void);
void Aquas_UpdateCamera(Player*);
void Aquas_BlueMarineMove(Player*);
void Aquas_801ABA40(PlayerShot*);
void Aquas_BlueMarineShoot(Player*);
void Aquas_801AC8A8(f32, f32, f32, f32, s32);
void Aquas_Effect366_Update(Effect*);
void Aquas_BlueMarine_Draw(Player*);
void Aquas_BlueMarineBoost(Player*);
void Aquas_BlueMarineBrake(Player*);
void Aquas_801AD688(Actor *);
void Aquas_Actor255_Update(Actor*);
void Aquas_Actor255_Draw(Actor*);
void Aquas_801AE3AC(Actor *);
void Aquas_Actor256_Update(Actor*);
void Aquas_Actor256_Draw(Actor*);
void Aquas_801AF9FC(Actor *);
void Aquas_Actor257_Update(Actor*);
void Aquas_Actor257_Draw(Actor*);
void Aquas_Actor258_Update(Actor*);
void Aquas_Actor258_Draw(Actor*);
void Aquas_BossAq_Init(Boss*);
void Aquas_Boss_Update(Boss*);
void Aquas_Boss_Draw(Boss*);
void Aquas_Actor261_Draw(Actor*);
void Aquas_Actor261_Update(Actor*);
void Aquas_Actor259_Draw(Actor*);
void Aquas_801B6344(Actor *);
void Aquas_Actor259_Update(Actor*);
void Aquas_801B6E54(Actor *);
void Aquas_Actor262_Update(Actor*);
void Aquas_Actor262_Draw(Actor*);
void Aquas_801B7AF0(Actor *);
void Aquas_Actor260_Update(Actor*);
void Aquas_Actor260_Draw(Actor*);
void Aquas_Actor263_Update(Actor*);
void Aquas_Actor263_Draw(Actor*);
void Aquas_Actor264_Update(Actor*);
void Aquas_Actor264_Draw(Actor*);
void Aquas_801BA57C(Actor *);
void Aquas_Actor265_Update(Actor*);
void Aquas_Actor265_Draw(Actor*);
void Aquas_Actor266_Update(Actor*);
void Aquas_Actor266_Draw(Actor*);
void Aquas_801BB26C(Actor *);
void Aquas_Actor267_Update(Actor*);
void Aquas_Actor267_Draw(Actor*);
void Aquas_Actor269_Update(Actor*);
void Aquas_Actor269_Draw(Actor*);
void Aquas_Actor268_Update(Actor*);
void Aquas_Actor268_Draw(Actor*);
void Aquas_801BDF14(void);
void Aquas_Scenery126_Draw(Scenery*);
void Aquas_Actor270_Update(Actor*);
void Aquas_Actor270_Draw(Actor*);
void Aquas_Boss301_Update(Boss*);
void Aquas_Boss301_Draw(Boss*);
void Aquas_Actor188_Update(Actor*);
void Aquas_Actor188_Draw(Actor*);
void Aquas_Update360(Player*);

#endif
