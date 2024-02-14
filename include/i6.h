#ifndef I6_H
#define I6_H

#include "libc/stdbool.h"
#include "structs.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"

extern f32 D_i6_801A7F40;
extern f32 D_i6_801A7F44;
extern f32 D_i6_801A7F48;
extern f32 D_i6_801A7F4C;
extern f32 D_i6_801A7F50;
extern f32 D_i6_801A7F54;
extern f32 D_i6_801A7F58;
extern f32 D_i6_801A7F5C;
extern f32 D_i6_801A7F60;
extern f32 D_i6_801A7F64;
extern f32 D_i6_801A7F68;
extern f32 D_i6_801A7F6C;
extern f32 D_i6_801A7F70;
extern f32 D_i6_801A7F74;
extern f32 D_i6_801A7F78;
extern f32 D_i6_801A7F7C;

void func_i6_80187530(Actor*);
void func_i6_80193C4C(Player*);
void func_i6_80195E44(Actor*);
void func_i6_80196BF8(Player*);
void func_i6_80196D88(Player*);
void func_i6_8019EE60(Player*);
void func_i6_8019FF00(Actor*);
void func_i6_801A0AC0(Player*);

void func_i6_8018769C(Actor*);
void func_i6_80187520(u32 mode, void* ptr);
void func_i6_801878A8(void);
void func_i6_801888F4(Actor *);
void func_i6_80189214(void);
void func_i6_8018BDD8(void);
void func_i6_8018C390(Player*);
void func_i6_8018D16C(Boss *);
void func_i6_801961AC(void);
void func_i6_80196314(Actor*);
void func_i6_80196968(void);
void func_i6_80197CC4(Boss *);
void func_i6_801A3BD4(Actor*);
void func_i6_801A4CB0(Actor*);
void func_i6_801A5AD4(Player*);
void func_i6_801A5FC0(Player*);
void func_i6_801A6164(Player *);

void func_i6_801880E4(Actor*);
void func_i6_80188448(Actor*);
void func_i6_80188528(Actor*);
void func_i6_80188660(Actor*);
void func_i6_8018933C(Actor*);
void func_i6_801893B8(Actor*);
void func_i6_80189470(Actor*);
void func_i6_80189724(Actor*);
void func_i6_80189B70(Boss*);
void func_i6_8018B8C0(Boss*);
void func_i6_8018CAD4(Effect*);
void func_i6_8018CF98(Effect*);
void func_i6_8018DBF0(Boss*);
void func_i6_801928C8(Boss*);
void func_i6_80192E94(Actor*);
void func_i6_80193244(Actor*);
void func_i6_80193380(Object_80*);
void func_i6_8019350C(Object_80*);
void func_i6_8019356C(Object_80*);
void func_i6_801935D4(Object_80*);
void func_i6_80196210(Boss*);
void func_i6_80196288(Boss*);
void func_i6_80197C64(Effect*);
void func_i6_80197CB8(Object_80*);
void func_i6_8019C888(Boss*);
void func_i6_8019E2C4(Boss*);
void func_i6_801A4E44(Object_80*);
void func_i6_801A52B8(Object_80*);

#endif
