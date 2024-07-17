#ifndef I5_H
#define I5_H

#include "libc/stdbool.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"


extern Gfx* D_TI_801B7584[];
extern Gfx* D_TI_801B7608[];
extern Gfx* D_TI_801B769C[];
extern f32 D_TI_801B83A8[];
extern u8 D_MA_801BA1E8;
extern f32 D_MA_801BE250[40];
extern s16 D_MA_801BE2F0[9];

void Titania_LevelStart(Player*);
void Titania_LevelComplete(Player*);
void Macbeth_LevelStart(Player*);
void Macbeth_LevelComplete2(Player*);
void Macbeth_801B28BC(Actor*);
void Macbeth_LevelComplete1(Player*);

void OvlI5_CallFunction(u32 mode, void* ptr);
void Titania_LevelStart(Player *);
void Titania_80188F30(void);
void Titania_80189B80(Actor *);
void Titania_8018ADC4(Actor *);
void Titania_8018B720(Actor *);
void Titania_TiBomb_Init(Actor *);
void Titania_8018BFB0(Actor *);
void Titania_8018E3B0(Actor *);
void Titania_8018E3CC(Actor *);
void Titania_8018E5E8(Actor *);
void Titania_8018EFF0(Sprite *);
void Titania_8018F0D8(Scenery *);
void Titania_Boss306_Init(Boss *);
void Titania_801990DC(Boss *);
void Macbeth_80199920(void);
void Macbeth_80199F8C(Actor *);
void Macbeth_801A3E70(Actor *);
void Macbeth_801A4660(Actor *);
void Macbeth_801A4AF8(Actor *);
void Macbeth_801A5E2C(Actor *);
void Macbeth_801A6134(Actor *);
void Macbeth_801A65E0(Scenery *);
void Macbeth_801A7D98(Actor *);
void Macbeth_801ACFBC(void);
void Macbeth_801AD080(void);
void Ground_801B5110(f32, f32, f32);
void Ground_801B58AC(Gfx **, f32);
bool Ground_801B6AEC(f32, f32, f32);
s32 Ground_801B6E20(f32, f32, f32 *, f32 *, f32 *);
void Macbeth_801AD144(PlayerShot*);
void Titania_80189120(f32, f32, f32, f32, f32);
bool Macbeth_801A3C20(f32);
bool Macbeth_801A3300(Player*, f32, f32);
bool Macbeth_801A3790(Player*, f32, f32);

void Titania_Effect368_Update(Effect*);
void Titania_Effect368_Draw(Effect*);
void Titania_TiTerrain_Update(Actor*);
void Titania_DesertRover_Update(Actor*);
void Titania_DesertRover_Draw(Actor*);
void Titania_Fekuda_Update(Actor*);
void Titania_Fekuda_Draw(Actor*);
void Titania_TiBoulder_Update(Actor*);
void Titania_TiBoulder_Draw(Actor*);
void Titania_TiLandmine_Update(Actor*);
void Titania_TiRasco_Update(Actor*);
void Titania_TiRasco_Draw(Actor*);
void Titania_TiBomb_Update(Actor*);
void Titania_TiBomb_Draw(Actor*);
void Titania_TiDesertCrawler_Update(Actor*);
void Titania_TiDesertCrawler_Draw(Actor*);
void Titania_TiDelphor_Update(Actor*);
void Titania_TiDelphor_Draw(Actor*);
void Titania_TiDelphorHead_Update(Actor*);
void Titania_TiDelphorHead_Draw(Actor*);
void Titania_Cactus_Update(Sprite*);
void Titania_Scenery57_Update(Scenery*);
void Titania_Scenery57_Draw(Scenery*);
void Titania_Boss_Update(Boss*);
void Titania_Boss_Draw(Boss*);
void Macbeth_Locomotive_Update(Actor*);
void Macbeth_TrainCar4_Update(Actor*);
void Macbeth_TrainCar3_Update(Actor*);
void Macbeth_TrainCar5_Update(Actor*);
void Macbeth_TrainCar2_Update(Actor*);
void Macbeth_TrainCar7_Update(Actor*);
void Macbeth_TrainCar6_Update(Actor*);
void Macbeth_Scenery104_Update(Scenery*);
void Macbeth_Train_Draw(Actor*);
void Macbeth_SceneryDoodad_Draw(Scenery*);
void Macbeth_Scenery61_Draw(Scenery*);
void Macbeth_SceneryDoodad2_Draw(Scenery*);
void Macbeth_Scenery83_Update(Scenery*);
void Macbeth_Scenery83_Draw(Scenery*);
void Macbeth_RailroadSwitch_Update(Actor*);
void Macbeth_RailroadSwitch_Draw(Actor*);
void Macbeth_Boulder_Update(Actor*);
void Macbeth_Boulder_Draw(Actor*);
void Macbeth_RailwaySignal_Update(Actor*);
void Macbeth_RailwaySignal_Draw(Actor*);
void Macbeth_Effect378_Update(Effect*);
void Macbeth_Effect378_Draw(Effect*);
void Macbeth_Effect380_Update(Effect*);
void Macbeth_Effect380_Draw(Effect*);
void Macbeth_HorizontalLockBar_Update(Actor*);
void Macbeth_HorizontalLockBar_Draw(Actor*);
void Macbeth_VerticalLockBar_Update(Actor*);
void Macbeth_VerticalLockBar_Draw(Actor*);
void Macbeth_MaBarrier_Update(Actor*);
void Macbeth_MaBarrier_Draw(Actor*);
void Macbeth_Scenery65_Draw(Scenery*);
void Macbeth_Actor219_Update(Actor*);
void Macbeth_Actor219_Draw(Actor*);
void Macbeth_Actor207_Update(Actor*);
void Macbeth_Actor207_Draw(Actor*);
void Macbeth_TrainCar1_Update(Actor*);
void Macbeth_MaBombDrop_Update(Actor*);
void Macbeth_MaBombDrop_Draw(Actor*);
void Macbeth_Spear_Update(Actor*);
void Macbeth_Spear_Draw(Actor*);
void Macbeth_Effect379_Update(Effect*);
void Macbeth_Effect379_Draw(Effect*);
void Macbeth_ShockBox_Update(Actor*);
void Macbeth_ShockBox_Draw(Actor*);
s32 Macbeth_801A55D4(s32 , Vec3f* , Vec3f* , s32 );

#endif
