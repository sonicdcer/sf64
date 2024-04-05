#ifndef I6_H
#define I6_H

#include "libc/stdbool.h"
#include "structs.h"
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
void Venom2_80196BF8(Player*);
void Venom2_80196D88(Player*);
void SectorY_8019EE60(Player*);
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
void Venom2_80196314(Actor*);
void Venom2_80196968(void);
void SectorY_Boss314_Init(Boss *);
void SectorY_Actor204_Update(Actor*);
void SectorY_Actor204_Draw(Actor*);
void Turret_801A5AD4(Player*);
void Turret_801A5FC0(Player*);
void Turret_801A6164(Player *);

void Andross_801880E4(Actor*);
void Andross_80188448(Actor*);
void Andross_80188528(Actor*);
void Andross_80188660(Actor*);
void Andross_8018933C(Actor*);
void Andross_801893B8(Actor*);
void Andross_80189470(Actor*);
void Andross_80189724(Actor*);
void Andross_80189B70(Boss*);
void Andross_8018B8C0(Boss*);
void Andross_8018CAD4(Effect*);
void Andross_8018CF98(Effect*);
void Andross_8018DBF0(Boss*);
void Andross_801928C8(Boss*);
void Andross_80192E94(Actor*);
void Andross_80193244(Actor*);
void Andross_80193380(Object_80*);
void Andross_8019350C(Object_80*);
void Andross_8019356C(Object_80*);
void Andross_801935D4(Object_80*);
void Venom2_80196210(Boss*);
void Venom2_80196288(Boss*);
void SectorY_80197C64(Effect*);
void SectorY_80197CB8(Object_80*);
void SectorY_8019C888(Boss*);
void SectorY_8019E2C4(Boss*);
void SectorY_801A4E44(Object_80*);
void SectorY_801A52B8(Object_80*);

#endif
