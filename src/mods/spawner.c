#include "global.h"
#include "sf64object.h"

typedef enum ObjType {
    /* 0 */ OBJ_SPAWN_ACTOR,
    /* 1 */ OBJ_SPAWN_EVENT,
    /* 2 */ OBJ_SPAWN_EFFECT,
    /* 3 */ OBJ_SPAWN_MAX
} ObjType;

typedef struct ObjCount {
    s32 actor;
    s32 scenery;
    s32 item;
    s32 effect;
} ObjCount;

static int sObjId = 0;
static int sObjType = 0;

static int sTextXpos = 239;
static int sTextYpos = 193;

static OSContPad* sContPress;
static OSContPad* sContHold;

void Spawner_Actor(int objId) {
    Vec3f* reticlePos = &D_display_801613E0[0];
    Actor* actorSpawn;

    if (gControllerPress[0].button & L_TRIG) {
        actorSpawn = Game_SpawnActor(objId);
        actorSpawn->obj.pos.x = reticlePos->x * 1.7f;
        actorSpawn->obj.pos.y = 200.0f;
        actorSpawn->obj.pos.z = gPlayer[0].pos.z - 1500.0f - (reticlePos->y * 1.7f);
        actorSpawn->state = 0;
    }
}

void Spawner_Event(int eventId) {
    Vec3f* reticlePos = &D_display_801613E0[0];
    ObjectInit objInit;
    s32 i;

    if (gControllerPress[0].button & L_TRIG) {
        for (i = 0; i < ARRAY_COUNT(gActors) - 1; i++) {
            if (gActors[i].obj.status == OBJ_FREE) {
                objInit.zPos1 = gPlayer[0].pos.z - 1500.0f - (reticlePos->y * 1.7f);
                objInit.zPos2 = gPlayer[0].pos.z - 1500.0f - (reticlePos->y * 1.7f) + 300.0f;
                objInit.xPos = reticlePos->x * 1.7f;
                objInit.yPos = 200.0f;
                objInit.rot.x = 0;
                objInit.rot.y = 0;
                objInit.rot.z = 0;
                objInit.id = ACTOR_EVENT_ID + eventId;
                ActorEvent_Load(&gActors[i], &objInit, i);
                break;
            }
        }
    }
}

ObjCount Spawner_ObjCount(void) {
    ObjCount counter = { 0, 0, 0, 0 };
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors) - 1; i++) {
        if (gActors[i].obj.status != OBJ_FREE) {
            counter.actor++;
        }
    }
    for (i = 0; i < ARRAY_COUNT(gScenery) - 1; i++) {
        if (gScenery[i].obj.status != OBJ_FREE) {
            counter.scenery++;
        }
    }
    for (i = 0; i < ARRAY_COUNT(gEffects) - 1; i++) {
        if (gEffects[i].obj.status != OBJ_FREE) {
            counter.effect++;
        }
    }
    for (i = 0; i < ARRAY_COUNT(gItems) - 1; i++) {
        if (gItems[i].obj.status != OBJ_FREE) {
            counter.item++;
        }
    }
    return counter;
}

void Spawner_Effect(int effectId) {
}

void Spawner_ObjKill(void) {
    s32 i;

    for (i = 0; i <= ARRAY_COUNT(gActors) - 1; i++) {
        Object_Kill(&gActors[i].obj, gActors[i].sfxSource);
    }
    for (i = 0; i <= ARRAY_COUNT(gBosses) - 1; i++) {
        Object_Kill(&gBosses[i].obj, gBosses[i].sfxSource);
    }
    for (i = 0; i <= ARRAY_COUNT(gScenery) - 1; i++) {
        Object_Kill(&gScenery[i].obj, gScenery[i].sfxSource);
    }
    for (i = 0; i <= ARRAY_COUNT(gEffects) - 1; i++) {
        Object_Kill(&gEffects[i].obj, gEffects[i].sfxSource);
    }
    for (i = 0; i <= ARRAY_COUNT(gItems) - 1; i++) {
        Object_Kill(&gItems[i].obj, gItems[i].sfxSource);
    }
}

void Spawner(void) {
    static bool sFreeze = true;
    static s32 sHoldTimer = 0;
    ObjCount counter;

    /* Prevent execution before gameplay */
    if ((gGameState != GSTATE_PLAY) || (gPlayState <= PLAY_INIT)) {
        return;
    }

    /* Object Selector */
    sContPress = &gControllerPress[gMainController];
    sContHold = &gControllerHold[gMainController];

    if (sContHold->button & (L_JPAD | R_JPAD)) {
        sHoldTimer++;
    } else {
        sHoldTimer = 0;
    }

    if (((sContHold->button & L_JPAD) && (sHoldTimer > 15)) || (sContPress->button & L_JPAD)) {
        sObjId--;
    } else if (((sContHold->button & R_JPAD) && (sHoldTimer > 15)) || (sContPress->button & R_JPAD)) {
        sObjId++;
    } else if (gControllerPress[0].button & D_JPAD) {
        sFreeze ^= 1; // Freeze arwing.
    } else if (gControllerPress[0].button & U_JPAD) {
        Spawner_ObjKill();
    } else if (gControllerPress[0].button & R_CBUTTONS) {
        sObjType++;
    }

    if (sObjId < 0) {
        sObjId = 0;
    }

    if (sObjType >= OBJ_SPAWN_MAX) {
        sObjType = OBJ_SPAWN_ACTOR;
    }

    /* Freeze arwing */
    if (sFreeze) {
        gPlayer[0].baseSpeed = 0;
    } else {
        gPlayer[0].baseSpeed = gArwingSpeed;
    }

    RCP_SetupDL(&gMasterDisp, SETUPDL_83);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    /* Spawners */
    switch (sObjType) {
        case OBJ_SPAWN_ACTOR:
            Graphics_DisplaySmallText(10, 220, 1.0f, 1.0f, "OBJID:");
            Spawner_Actor(sObjId);
            break;
        case OBJ_SPAWN_EVENT:
            Graphics_DisplaySmallText(10, 220, 1.0f, 1.0f, "EVENT:");
            Spawner_Event(sObjId);
            break;
        case OBJ_SPAWN_EFFECT:
            Graphics_DisplaySmallText(10, 220, 1.0f, 1.0f, "EFFECT:");
            Spawner_Effect(sObjId);
            break;
        default:
            break;
    }
    Graphics_DisplaySmallNumber(60, 220, sObjId);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    Graphics_DisplaySmallText(sTextXpos, sTextYpos, 1.0f, 1.0f, "ACTORS:");
    Graphics_DisplaySmallText(sTextXpos - 8, sTextYpos + 10, 1.0f, 1.0f, "SCENERY:");
    Graphics_DisplaySmallText(sTextXpos - 8, sTextYpos + 20, 1.0f, 1.0f, "EFFECTS:");
    Graphics_DisplaySmallText(sTextXpos + 12, sTextYpos + 30, 1.0f, 1.0f, "ITEMS:");

    counter = Spawner_ObjCount();

    Graphics_DisplaySmallNumber(sTextXpos + 55, sTextYpos, counter.actor);        /* Actors */
    Graphics_DisplaySmallNumber(sTextXpos + 55, sTextYpos + 10, counter.scenery); /* Scenery */
    Graphics_DisplaySmallNumber(sTextXpos + 55, sTextYpos + 20, counter.effect);  /* Effects */
    Graphics_DisplaySmallNumber(sTextXpos + 55, sTextYpos + 30, counter.item);    /* Items */
}
