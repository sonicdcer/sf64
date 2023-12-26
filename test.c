#include "global.h"

typedef struct Cylinder16 {
    /* 0x0000 */ s16 radius;
    /* 0x0002 */ s16 height;
    /* 0x0004 */ s16 yShift;
    /* 0x0006 */ Vec3s pos;
} Cylinder16; // size = 0x0C

typedef struct ColliderInit {
    /* 0x00 */ u8 colType; // Determines hitmarks and sound effects during AC collisions.
    /* 0x01 */ u8 atFlags; // Information flags for AT collisions.
    /* 0x02 */ u8 acFlags; // Information flags for AC collisions.
    /* 0x03 */ u8 ocFlags1; // Information flags for OC collisions.
    /* 0x04 */ u8 ocFlags2; // Flags related to which colliders it can OC collide with.
    /* 0x05 */ u8 shape; // JntSph, Cylinder, Tris, or Quad
} ColliderInit; // size = 0x06

typedef struct ColliderTouch {
    /* 0x00 */ u32 dmgFlags; // Toucher damage type flags.
    /* 0x04 */ u8 effect; // Damage Effect (Knockback, Fire, etc.)
    /* 0x05 */ u8 damage; // Damage or Stun Timer
} ColliderTouch; // size = 0x08

typedef struct ColliderBumpInit {
    /* 0x00 */ u32 dmgFlags; // Bumper exclusion mask
    /* 0x04 */ u8 effect; // Damage Effect (Knockback, Fire, etc.)
    /* 0x05 */ u8 defense; // Damage Resistance
} ColliderBumpInit; // size = 0x08

typedef struct ColliderInfoInit {
    /* 0x00 */ u8 elemType; // Affects sfx reaction when attacked by Link and hookability. Full purpose unknown.
    /* 0x04 */ ColliderTouch toucher; // Damage properties when acting as an AT collider
    /* 0x0C */ ColliderBumpInit bumper; // Damage properties when acting as an AC collider
    /* 0x14 */ u8 toucherFlags; // Information flags for AT collisions
    /* 0x15 */ u8 bumperFlags;  // Information flags for AC collisions
    /* 0x16 */ u8 ocElemFlags; // Information flags for OC collisions
} ColliderInfoInit; // size = 0x18

typedef struct ColliderCylinderInit {
    /* 0x00 */ ColliderInit base;
    /* 0x08 */ ColliderInfoInit info;
    /* 0x20 */ Cylinder16 dim;
} ColliderCylinderInit; // size = 0x2C

static ColliderCylinderInit sCylinderInit =
{
    { 10, 0x00, 0x09, 0x39, 0x10, 2 },
    { 0x00, { 0x00000000, 0x00, 0x00 }, { 0x00000004, 0x00, 0x00 }, 0x00, 0x01, 0x01 },
    { 170, 150, 0, { 0, 0, 0 } },
};
