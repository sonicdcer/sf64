#ifndef I3_H
#define I3_H

#include "libc/stdbool.h"
#include "structs.h"
#include "fox_option.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"

// extern f32 D_i3_801C4188; Currently externed in relevant files for bss ordering

void func_i3_801BE034(Actor*, Player*);

void func_i3_8018DA58(Actor*);
void func_i3_8019E5F0(Actor*);
void func_i3_801A8BE8(Actor*);
void func_i3_801AB9B0(Player*);
void func_i3_801BE0F0(Actor*);

void func_i3_80187520(s32, void*);
void func_i3_80187754(Boss *);
void func_i3_80187944(Boss*);
void func_i3_8018C54C(Boss*);
void func_i3_8018DF74(Player *player);
void func_i3_8018ED78(Player*);

void func_i3_801900FC(Vec3f*, Vec3f*, f32, f32, f32, s32, f32, s32, s32);
void func_i3_80190430(Actor* actor);
void func_i3_801904CC(Actor* actor);
void func_i3_80190A00(Actor* actor);
void func_i3_80190F08(Actor* actor);
void func_i3_80191010(Actor* actor);
void func_i3_801914C4(Actor* actor);
void func_i3_801915A4(Actor* actor);
void func_i3_80191680(Actor* actor);
void func_i3_80191B4C(Actor* actor);
void func_i3_80191BB8(Actor* actor);
void func_i3_80191BC4(Actor* actor);
void func_i3_80191DB0(Actor* actor);
void func_i3_80191DB0(Actor* actor);
void func_i3_80191FFC(Actor* actor);
void func_i3_80192094(Actor* actor);
void func_i3_80192834(Actor* actor);
void func_i3_80192C18(Actor* actor);
void func_i3_80192E64(Actor* actor);
void func_i3_80193240(Actor* actor);
void func_i3_801932AC(Boss* bossZO);
void func_i3_801949DC(Boss* bossZO);
void func_i3_80194A84(Boss* bossZO);
void func_i3_8019969C(Actor* actor);
void func_i3_8019983C(Actor* actor);
void func_i3_80199A28(Actor* actor);
void func_i3_80199E24(Actor* actor);
void func_i3_80199F10(Actor* actor);
void func_i3_8019A1FC(Actor* actor);
void func_i3_8019A5D4(Actor* actor);
void func_i3_8019ACCC(Actor* actor);
void func_i3_8019B1F0(Actor* actor);
void func_i3_8019B548(Actor* actor);
void func_i3_8019B7DC(Actor* actor);
void func_i3_8019B810(Actor* actor);
void func_i3_8019B854(Actor* actor);
void func_i3_8019BDE0(Actor* actor);
void func_i3_8019BE48(Actor* actor);
void func_i3_8019C1CC(Actor* actor);
void func_i3_8019C200(Actor* actor);
void func_i3_8019C454(Actor* actor);
void func_i3_8019C83C(Actor* actor);
void func_i3_8019CBEC(Actor* actor);
void func_i3_8019CE58(Actor* actor);
void func_i3_8019D060(Actor* actor);
void func_i3_8019D15C(Actor* actor);
void func_i3_8019D3C4(Actor* actor);
void func_i3_8019D428(Player* player);
void func_i3_8019D76C(Player* player);

void func_i3_8019E8B8(f32, f32, f32, f32);
void func_i3_8019E9F4(f32, f32, f32, f32, f32, f32, f32, s32);
void func_i3_8019EA7C(Actor*);
void func_i3_8019F20C(Actor*);
void func_i3_8019F7AC(Actor*);
void func_i3_801A003C(Actor*);
void func_i3_801A0120(Effect*);
void func_i3_801A0AF0(Effect*);
void func_i3_801A10F4(Player* player);
void func_i3_801A5B3C(Boss*);
void func_i3_801A71B8(Boss*);
void func_i3_801A8BE8(Actor*);
void func_i3_801A7930(Player* player);

void func_i3_801A9824(void);
void func_i3_801AA20C(void);
void func_i3_801AA8E8(Player*);
void func_i3_801AACF8(Player*);
void func_i3_801ABA40(PlayerShot*);
void func_i3_801AC274(Player*);
void func_i3_801AC8A8(f32, f32, f32, f32, s32);
void func_i3_801AC918(Effect*);
void func_i3_801ACBB4(void);
void func_i3_801ACE50(Player*);
void func_i3_801AD328(Player*);
void func_i3_801AD688(Actor *);
void func_i3_801AD6C0(Actor*);
void func_i3_801AE168(Actor*);
void func_i3_801AE3AC(Actor *);
void func_i3_801AE3D8(Actor*);
void func_i3_801AEB44(Actor*);
void func_i3_801AF9FC(Actor *);
void func_i3_801AFA5C(Actor*);
void func_i3_801B099C(Actor*);
void func_i3_801B0B60(Actor*);
void func_i3_801B0EC0(Actor*);
void func_i3_801B10F8(Boss*);
void func_i3_801B134C(Boss*);
void func_i3_801B4D84(Boss*);
void func_i3_801B504C(Actor*);
void func_i3_801B50E8(Actor*);
void func_i3_801B619C(Actor*);
void func_i3_801B6344(Actor *);
void func_i3_801B638C(Actor*);
void func_i3_801B6E54(Actor *);
void func_i3_801B6FF8(Actor*);
void func_i3_801B7A24(Actor*);
void func_i3_801B7AF0(Actor *);
void func_i3_801B7C78(Actor*);
void func_i3_801B90DC(Actor*);
void func_i3_801B91A4(Actor*);
void func_i3_801BA108(Actor*);
void func_i3_801BA26C(Actor*);
void func_i3_801BA4E4(Actor*);
void func_i3_801BA57C(Actor *);
void func_i3_801BA6A4(Actor*);
void func_i3_801BAD7C(Actor*);
void func_i3_801BADF8(Actor*);
void func_i3_801BB204(Actor*);
void func_i3_801BB26C(Actor *);
void func_i3_801BB79C(Actor*);
void func_i3_801BC930(Actor*);
void func_i3_801BC9A0(Actor*);
void func_i3_801BD264(Actor*);
void func_i3_801BD54C(Actor*);
void func_i3_801BDE6C(Actor*);
void func_i3_801BDF14(void);
void func_i3_801BE1FC(Object_80*);
void func_i3_801BE3F8(Actor*);
void func_i3_801BEB1C(Actor*);
void func_i3_801BEC50(Boss*);
void func_i3_801BEC5C(Boss*);
void func_i3_801BEC68(Actor*);
void func_i3_801BEC74(Actor*);
void func_i3_801BEC80(Player*);

#endif
