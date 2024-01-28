#include "global.h"

void func_8002FC00(Actor *);

#ifdef IMPORT_DATA
void func_i4_8018BD60(Actor* actor) {
    s32 i;
    Actor* actorPtr;
    f32 D_i4_8019EEC4[4] = { 8000.0f, -8000.0f, 8000.0f, -8000.0f };
    f32 D_i4_8019EED4[4] = { 8000.0f, 8000.0f, -8000.0f, -8000.0f };

    if (D_8015F924 == 0) {
        actor->unk_04E++;
        if (actor->unk_04E >= 4) {
            actor->unk_04E = 0;
        }
        for (actorPtr = gActors + 10, i = 10; i < 16; i++, actorPtr++) {
            if (actorPtr->obj.status == 0) {
                Actor_Initialize(actorPtr);
                actorPtr->obj.status = 2;
                actorPtr->obj.id = OBJ_ACTOR_197;
                actorPtr->obj.pos.x = D_i4_8019EEC4[actor->unk_04E];
                actorPtr->obj.pos.y = 1000.0f;
                actorPtr->obj.pos.z = D_i4_8019EED4[actor->unk_04E];
                actorPtr->state = 1;
                actorPtr->unk_0E6 = -1;
                actorPtr->health = 0x18;
                actorPtr->iwork[11] = 1;
                actorPtr->unk_044 = 2;
                actorPtr->unk_0E4 = i;
                Object_SetInfo(&actorPtr->info, actorPtr->obj.id);
                Audio_PlaySfx(0x3100000CU, actorPtr->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                break;
            }
        }
    }
    func_8002F69C(actor);
    func_8002FC00(actor);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018BD60.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018BEF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018C158.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018CC60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018CCE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018CE5C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D008.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D124.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D278.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D394.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D414.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D454.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D4F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D584.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D7F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D874.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D960.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018D9CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018DE8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018E05C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018E3FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018E710.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018E870.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018EAEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018EC1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018ECB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018ED44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018EE4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018EF6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018F83C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_8018F94C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80190D98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80190EE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80190F58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80190FE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191054.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191180.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_801912FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_801918E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191A6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191AFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191BAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191DB0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80191ED8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_bo/func_i4_80192264.s")
