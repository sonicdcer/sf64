#ifndef I1_H
#define I1_H

#include "libc/stdbool.h"
#include "structs.h"
#include "fox_option.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"

extern Gfx* D_i1_8019A008[];
extern f32 D_i1_8019A9B8[];

extern void func_i1_8018F880(Player*);
extern void func_i1_80191160(Player*);
extern void func_i1_801988B8(Player*);

void func_i1_801875A4(Object_4C*);
void func_i1_80189058(Boss*);
void func_i1_8018AA74(Boss*);
void func_i1_8018AED0(Actor*);
void func_i1_8018B15C(Actor*);
void func_i1_8018B418(Actor*);
void func_i1_8018B58C(Actor*);
void func_i1_8018BAAC(Actor*);
void func_i1_8018BBA4(Actor*);
void func_i1_8018BBF8(Actor*);
void func_i1_8018BD7C(Actor*);
void func_i1_8018C19C(Boss*);
void func_i1_8018DDAC(Boss*);
void func_i1_8018E290(Boss*);
void func_i1_8018E76C(Boss*);
void func_i1_8018ECAC(Boss*);
void func_i1_8018ED78(Boss*);
void func_i1_8018EE84(Boss*);
void func_i1_8018EF90(Boss*);
void func_i1_8018F044(Object_80*);
void func_i1_8018F31C(Object_80*);
void func_i1_801922DC(Object_4C*);
void func_i1_80192358(Object_4C*);
void func_i1_801923C0(Object_4C*);
void func_i1_8019243C(Object_4C*);
void func_i1_80192518(Actor*);
void func_i1_80192CD4(Actor*);
void func_i1_80192E2C(Actor*);
void func_i1_80192EB0(Actor*);
void func_i1_801933DC(Actor*);
void func_i1_801934D0(Actor*);
void func_i1_80193540(Object_80*);
void func_i1_80194398(Boss*);
void func_i1_801985E4(Boss*);
void func_i1_80198968(Item*);

void func_i1_80187520(s32, void*);
void func_i1_80187530(Object_80*);
void func_i1_8018753C(Object_80*);
void func_i1_801878D8(Boss *);
void func_i1_8018B0B4(Actor *);
void func_i1_8018BE7C(Boss *);
void func_i1_8018ED78(Boss*);
void func_i1_801924A8(Object_80* );
void func_i1_8019250C(Actor *);
void func_i1_80192CB0(Actor *);
void func_i1_80192EA4(Actor *);
void func_i1_801933B4(Actor *);
void func_i1_801935CC(Boss *);
void func_i1_80198310(Boss *);
void func_i1_80198594(Boss *);
void func_i1_801988E0(void);
void func_i1_80198C50(void);
void func_i1_8019949C(void);
void func_i1_8019864C(PlayerShot*);

#endif
