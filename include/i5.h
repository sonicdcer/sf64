#ifndef I5_H
#define I5_H

#include "libc/stdbool.h"
#include "structs.h"
#include "sf64object.h"
#include "sf64thread.h"
#include "sf64player.h"
#include "sf64mesg.h"

extern Gfx* D_i5_801B7584[];
extern Gfx* D_i5_801B7608[];
extern Gfx* D_i5_801B769C[];
extern f32 D_i5_801B83A8[];
extern u8 D_i5_801BA1E8;

void func_i5_8018769C(Player*);
void func_i5_801882CC(Player*);
void func_i5_801AC754(Player*);
void func_i5_801AF8F4(Player*);
void func_i5_801B28BC(Actor*);
void func_i5_801B3D04(Player*);

void func_i5_80187520(u32 mode, void* ptr);
void func_i5_8018769C(Player *);
void func_i5_80188F30(void);
void func_i5_80189B80(Actor *);
void func_i5_8018ADC4(Actor *);
void func_i5_8018B720(Actor *);
void func_i5_8018B96C(Actor *);
void func_i5_8018BFB0(Actor *);
void func_i5_8018E3B0(Actor *);
void func_i5_8018E3CC(Actor *);
void func_i5_8018E5E8(Actor *);
void func_i5_8018EFF0(Object_4C *);
void func_i5_8018F0D8(Object_80 *);
void func_i5_8018FA48(Boss *);
void func_i5_801990DC(Boss *);
void func_i5_80199920(void);
void func_i5_80199F8C(Actor *);
void func_i5_801A3E70(Actor *);
void func_i5_801A4660(Actor *);
void func_i5_801A4AF8(Actor *);
void func_i5_801A5E2C(Actor *);
void func_i5_801A6134(Actor *);
void func_i5_801A65E0(Object_80 *);
void func_i5_801A7D98(Actor *);
void func_i5_801ACFBC(void);
void func_i5_801AD080(void);
void func_i5_801B5110(f32, f32, f32);
void func_i5_801B58AC(Gfx **, f32);
bool func_i5_801B6AEC(f32, f32, f32);
void func_i5_801B6E20(f32, f32, f32 *, f32 *, f32 *);
void func_i5_801AD144(PlayerShot*);
void func_i5_80189120(f32 x, f32 y, f32 z, f32, f32);
bool func_i5_801A3C20(f32);
s32 func_i5_801A3300(Player*, f32, f32);
s32 func_i5_801A3790(Player*, f32, f32);

void func_i5_80188F60(Effect*);
void func_i5_80188FA8(Effect*);
void func_i5_80189194(Actor*);
void func_i5_801895B8(Actor*);
void func_i5_80189AFC(Actor*);
void func_i5_80189CC8(Actor*);
void func_i5_8018A1C0(Actor*);
void func_i5_8018A544(Actor*);
void func_i5_8018AABC(Actor*);
void func_i5_8018AB44(Actor*);
void func_i5_8018B268(Actor*);
void func_i5_8018B6AC(Actor*);
void func_i5_8018B9D0(Actor*);
void func_i5_8018BE84(Actor*);
void func_i5_8018C8A8(Actor*);
void func_i5_8018E2D8(Actor*);
void func_i5_8018E54C(Actor*);
void func_i5_8018E5B4(Actor*);
void func_i5_8018E5F8(Actor*);
void func_i5_8018EF14(Actor*);
void func_i5_8018F038(Object_4C*);
void func_i5_8018F4D8(Object_80*);
void func_i5_8018F8B8(Object_80*);
void func_i5_80197A94(Boss*);
void func_i5_801982A8(Boss*);
void func_i5_8019C778(Actor*);
void func_i5_8019CE88(Actor*);
void func_i5_8019D700(Actor*);
void func_i5_8019E410(Actor*);
void func_i5_8019EA60(Actor*);
void func_i5_8019EE68(Actor*);
void func_i5_8019FF9C(Actor*);
void func_i5_801A0BD8(Object_80*);
void func_i5_801A12C4(Actor*);
void func_i5_801A23AC(Object_80*);
void func_i5_801A2A78(Object_80*);
void func_i5_801A2B24(Object_80*);
void func_i5_801A2DD8(Object_80*);
void func_i5_801A3240(Object_80*);
void func_i5_801A3E98(Actor*);
void func_i5_801A43BC(Actor*);
void func_i5_801A46A0(Actor*);
void func_i5_801A4A64(Actor*);
void func_i5_801A4B24(Actor*);
void func_i5_801A54E8(Actor*);
void func_i5_801A57D0(Effect*);
void func_i5_801A5AF0(Effect*);
void func_i5_801A5B4C(Effect*);
void func_i5_801A5D68(Effect*);
void func_i5_801A5E54(Actor*);
void func_i5_801A5F90(Actor*);
void func_i5_801A5FD0(Actor*);
void func_i5_801A6100(Actor*);
void func_i5_801A6144(Actor*);
void func_i5_801A6540(Actor*);
void func_i5_801A6608(Object_80*);
void func_i5_801A67C8(Actor*);
void func_i5_801A68EC(Actor*);
void func_i5_801A7E7C(Actor*);
void func_i5_801AC294(Actor*);
void func_i5_801AC438(Actor*);
void func_i5_801AD6F0(Actor*);
void func_i5_801ADAC8(Actor*);
void func_i5_801ADD68(Actor*);
void func_i5_801AE2C0(Actor*);
void func_i5_801AE87C(Effect*);
void func_i5_801AEAA0(Effect*);
void func_i5_801AEC04(Actor*);
void func_i5_801AEEFC(Actor*);
s32 func_i5_801A55D4(s32 , Vec3f* , Vec3f* , s32 );

#endif
