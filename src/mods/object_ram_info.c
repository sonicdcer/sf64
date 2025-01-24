#include "object_ram.h"

static OramFieldInfo objFields[] = {
    /* 0x00 */ STRUCT_FIELD(Object, u8, status, 0),
    /* 0x02 */ STRUCT_FIELD(Object, u16, id, 0),
    /* 0x04 */ STRUCT_FIELD(Object, Vec3f, pos, 0),
    /* 0x10 */ STRUCT_FIELD(Object, Vec3f, rot, 0),
};

static OramFieldInfo objInfoFields[] = {
    /* 0x00 */ STRUCT_FIELD(ObjectInfo, uintptr_t, draw, 0),
    /* 0x04 */ STRUCT_FIELD(ObjectInfo, u8, drawType, 0),
    /* 0x08 */ STRUCT_FIELD(ObjectInfo, uintptr_t, action, 0),
    /* 0x0C */ STRUCT_FIELD(ObjectInfo, uintptr_t, hitbox, 0),
    /* 0x10 */ STRUCT_FIELD(ObjectInfo, f32, cullDistance, 0),
    /* 0x14 */ STRUCT_FIELD(ObjectInfo, s16, unk_14, 0),
    /* 0x16 */ STRUCT_FIELD(ObjectInfo, s16, unk_16, 0),
    /* 0x18 */ STRUCT_FIELD(ObjectInfo, u8, damage, 0),
    /* 0x19 */ STRUCT_FIELD(ObjectInfo, u8, unk_19, 0),
    /* 0x1C */ STRUCT_FIELD(ObjectInfo, f32, targetOffset, 0),
    /* 0x20 */ STRUCT_FIELD(ObjectInfo, u8, bonus, 0),
}; // size = 0x24

static OramFieldInfo arwingFields[] = {
    /* 0x00 */ STRUCT_FIELD(ArwingInfo, u8, rightWingState, 0),
    /* 0x01 */ STRUCT_FIELD(ArwingInfo, u8, leftWingState, 0),
    /* 0x04 */ STRUCT_FIELD(ArwingInfo, f32, upperRightFlapYrot, 0),
    /* 0x08 */ STRUCT_FIELD(ArwingInfo, f32, bottomRightFlapYrot, 0),
    /* 0x0C */ STRUCT_FIELD(ArwingInfo, f32, upperLeftFlapYrot, 0),
    /* 0x10 */ STRUCT_FIELD(ArwingInfo, f32, bottomLeftFlapYrot, 0),
    /* 0x14 */ STRUCT_FIELD(ArwingInfo, f32, laserGunsYpos, 0),
    /* 0x18 */ STRUCT_FIELD(ArwingInfo, f32, laserGunsXpos, 0),
    /* 0x1C */ STRUCT_FIELD(ArwingInfo, f32, wingsXrot, 0),
    /* 0x20 */ STRUCT_FIELD(ArwingInfo, f32, wingsYrot, 0),
    /* 0x24 */ STRUCT_FIELD(ArwingInfo, f32, wingsZrot, 0),
    /* 0x28 */ STRUCT_FIELD(ArwingInfo, f32, unk_28, 0),
    /* 0x2C */ STRUCT_FIELD(ArwingInfo, u8, drawFace, 0),
    /* 0x30 */ STRUCT_FIELD(ArwingInfo, f32, teamFaceXrot, 0),
    /* 0x34 */ STRUCT_FIELD(ArwingInfo, f32, teamFaceYrot, 0),
    /* 0x38 */ STRUCT_FIELD(ArwingInfo, f32, cockpitGlassXrot, 0),
}; // size = 0x3C

static OramFieldInfo playerSfxFields[] = {
    /* 0x00 */ STRUCT_FIELD(PlayerSfx, u8, levelType, 0),
    /* 0x01 */ STRUCT_FIELD(PlayerSfx, u8, form, 0),
    /* 0x04 */ STRUCT_FIELD(PlayerSfx, uintptr_t, srcPos, 0),
    /* 0x08 */ STRUCT_FIELD(PlayerSfx, uintptr_t, srcVel, 0),
    /* 0x0C */ STRUCT_FIELD(PlayerSfx, u8, boost, 0),
    /* 0x0D */ STRUCT_FIELD(PlayerSfx, u8, brake, 0),
    /* 0x10 */ STRUCT_FIELD(PlayerSfx, f32, yVel, 0),
    /* 0x14 */ STRUCT_FIELD(PlayerSfx, u8, bank, 0),
    /* 0x18 */ STRUCT_FIELD(PlayerSfx, f32, zRot, 0),
    /* 0x1C */ STRUCT_FIELD(PlayerSfx, u8, roll, 0),
}; // size = 0x20

static OramFieldInfo radarMarkFields[] = {
    /* 0x00 */ STRUCT_FIELD(RadarMark, u8, enabled, 0),
    /* 0x02 */ STRUCT_FIELD(RadarMark, u16, type, 0),
    /* 0x04 */ STRUCT_FIELD(RadarMark, Vec3f, pos, 0),
    /* 0x10 */ STRUCT_FIELD(RadarMark, f32, yRot, 0),
    /* 0x14 */ STRUCT_FIELD(RadarMark, uintptr_t, pad14, 5),
}; // size = 0x28

static OramFieldInfo texLineFields[] = {
    /* 0x00 */ STRUCT_FIELD(TexturedLine, u8, mode, 0),
    /* 0x02 */ STRUCT_FIELD(TexturedLine, u16, timer, 0),
    /* 0x04 */ STRUCT_FIELD(TexturedLine, Vec3f, posAA, 0),
    /* 0x10 */ STRUCT_FIELD(TexturedLine, Vec3f, posBB, 0),
    /* 0x1C */ STRUCT_FIELD(TexturedLine, f32, xRot, 0),
    /* 0x20 */ STRUCT_FIELD(TexturedLine, f32, yRot, 0),
    /* 0x24 */ STRUCT_FIELD(TexturedLine, f32, zScale, 0),
    /* 0x28 */ STRUCT_FIELD(TexturedLine, f32, xyScale, 0),
    /* 0x2C */ STRUCT_FIELD(TexturedLine, uintptr_t, prim, 0),
}; // size = 0x30

static OramFieldInfo bonusFields[] = {
    /* 0x00 */ STRUCT_FIELD(BonusText, u8, hits, 0),
    /* 0x04 */ STRUCT_FIELD(BonusText, Vec3f, pos, 0),
    /* 0x10 */ STRUCT_FIELD(BonusText, f32, rise, 0),
    /* 0x14 */ STRUCT_FIELD(BonusText, uintptr_t, pad14, 0),
    /* 0x18 */ STRUCT_FIELD(BonusText, u16, timer, 0),
}; // size = 0x1C

static OramFieldInfo scenery360Fields[] = {
    /* 0x00 */ STRUCT_FIELD(Scenery360, Object, obj, 0),
    /* 0x1C */ STRUCT_FIELD(Scenery360, ObjectInfo, info, 0),
    /* 0x40 */ STRUCT_FIELD(Scenery360, u8, pathIndex, 0),
    /* 0x41 */ STRUCT_FIELD(Scenery360, char, unk_41, 7),
    /* 0x48 */ STRUCT_FIELD(Scenery360, Vec3f, sfxSource, 0),
    /* 0x54 */ STRUCT_FIELD(Scenery360, f32, unk_54, 0),
}; // size = 0x58

static OramFieldInfo sceneryFields[] = {
    /* 0x00 */ STRUCT_FIELD(Scenery, Object, obj, 0),
    /* 0x1C */ STRUCT_FIELD(Scenery, ObjectInfo, info, 0),
    /* 0x40 */ STRUCT_FIELD(Scenery, s32, index, 0),
    /* 0x44 */ STRUCT_FIELD(Scenery, s32, unk_44, 0),
    /* 0x48 */ STRUCT_FIELD(Scenery, s32, state, 0),
    /* 0x4C */ STRUCT_FIELD(Scenery, s32, timer_4C, 0),
    /* 0x50 */ STRUCT_FIELD(Scenery, s8, dmgType, 0),
    /* 0x54 */ STRUCT_FIELD(Scenery, s32, dmgPart, 0),
    /* 0x58 */ STRUCT_FIELD(Scenery, Vec3f, effectVel, 0),
    /* 0x64 */ STRUCT_FIELD(Scenery, Vec3f, vel, 0),
    /* 0x70 */ STRUCT_FIELD(Scenery, Vec3f, sfxSource, 0),
    /* 0x7C */ STRUCT_FIELD(Scenery, long, pad7C, 0),
}; // size = 0x80

static OramFieldInfo spriteFields[] = {
    /* 0x00 */ STRUCT_FIELD(Sprite, Object, obj, 0),
    /* 0x1C */ STRUCT_FIELD(Sprite, ObjectInfo, info, 0),
    /* 0x40 */ STRUCT_FIELD(Sprite, s32, index, 0),
    /* 0x44 */ STRUCT_FIELD(Sprite, char, pad44, 0),
    /* 0x45 */ STRUCT_FIELD(Sprite, u8, sceneryId, 0),
    /* 0x46 */ STRUCT_FIELD(Sprite, s8, destroy, 0),
    /* 0x48 */ STRUCT_FIELD(Sprite, s32, toLeft, 0),
}; // size = 0x4C

static OramFieldInfo itemFields[] = {
    /* 0x00 */ STRUCT_FIELD(Item, Object, obj, 0),
    /* 0x1C */ STRUCT_FIELD(Item, ObjectInfo, info, 0),
    /* 0x40 */ STRUCT_FIELD(Item, s32, index, 0),
    /* 0x44 */ STRUCT_FIELD(Item, s16, unk_44, 0),
    /* 0x46 */ STRUCT_FIELD(Item, u8, state, 0),
    /* 0x48 */ STRUCT_FIELD(Item, u16, timer_48, 0),
    /* 0x4A */ STRUCT_FIELD(Item, u16, timer_4A, 0),
    /* 0x4C */ STRUCT_FIELD(Item, s8, collected, 0),
    /* 0x4E */ STRUCT_FIELD(Item, s16, playerNum, 0),
    /* 0x50 */ STRUCT_FIELD(Item, f32, unk_50, 0),
    /* 0x54 */ STRUCT_FIELD(Item, f32, unk_54, 0),
    /* 0x58 */ STRUCT_FIELD(Item, f32, unk_58, 0),
    /* 0x5C */ STRUCT_FIELD(Item, Vec3f, sfxSource, 0),
    /* 0x68 */ STRUCT_FIELD(Item, f32, width, 0),
}; // size 0x6C

static OramFieldInfo effectFields[] = {
    /* 0x00 */ STRUCT_FIELD(Effect, Object, obj, 0),
    /* 0x1C */ STRUCT_FIELD(Effect, ObjectInfo, info, 0),
    /* 0x40 */ STRUCT_FIELD(Effect, s32, index, 0),
    /* 0x44 */ STRUCT_FIELD(Effect, s16, alpha, 0),
    /* 0x46 */ STRUCT_FIELD(Effect, s16, unk_46, 0),
    /* 0x48 */ STRUCT_FIELD(Effect, s16, unk_48, 0),
    /* 0x4A */ STRUCT_FIELD(Effect, s16, unk_4A, 0),
    /* 0x4C */ STRUCT_FIELD(Effect, u8, unk_4C, 0),
    /* 0x4E */ STRUCT_FIELD(Effect, s16, state, 0),
    /* 0x50 */ STRUCT_FIELD(Effect, u16, timer_50, 0),
    /* 0x52 */ STRUCT_FIELD(Effect, short, pad52, 0),
    /* 0x54 */ STRUCT_FIELD(Effect, Vec3f, vel, 0),
    /* 0x60 */ STRUCT_FIELD(Effect, Vec3f, orient, 0),
    /* 0x6C */ STRUCT_FIELD(Effect, f32, scale1, 0),
    /* 0x70 */ STRUCT_FIELD(Effect, f32, scale2, 0),
    /* 0x74 */ STRUCT_FIELD(Effect, uintptr_t, dList, 0),
    /* 0x78 */ STRUCT_FIELD(Effect, s16, unk_78, 0),
    /* 0x7A */ STRUCT_FIELD(Effect, s16, unk_7A, 0),
    /* 0x7C */ STRUCT_FIELD(Effect, long, pad7C, 4),
    /* 0x80 */ STRUCT_FIELD(Effect, Vec3f, sfxSource, 0),
};

static OramFieldInfo actorFields[] = {
    /* 0x000 */ STRUCT_FIELD(Actor, Object, obj, 0),
    /* 0x01C */ STRUCT_FIELD(Actor, ObjectInfo, info, 0),
    /* 0x040 */ STRUCT_FIELD(Actor, s32, index, 0),
    /* 0x044 */ STRUCT_FIELD(Actor, u8, itemDrop, 0),
    /* 0x046 */ STRUCT_FIELD(Actor, s16, work_046, 0),
    /* 0x048 */ STRUCT_FIELD(Actor, s16, work_048, 0),
    /* 0x04A */ STRUCT_FIELD(Actor, s16, work_04A, 0),
    /* 0x04C */ STRUCT_FIELD(Actor, s16, work_04C, 0),
    /* 0x04E */ STRUCT_FIELD(Actor, s16, counter_04E, 0),
    /* 0x050 */ STRUCT_FIELD(Actor, s32, iwork, 25),
    /* 0x0B4 */ STRUCT_FIELD(Actor, s16, eventType, 0),
    /* 0x0B6 */ STRUCT_FIELD(Actor, s16, animFrame, 0), // used for model type in ActorAllRange and ActorCutscene
    /* 0x0B8 */ STRUCT_FIELD(Actor, s16, state, 0),
    /* 0x0BA */ STRUCT_FIELD(Actor, short, pad0BA, 0),
    /* 0x0BC */ STRUCT_FIELD(Actor, u16, timer_0BC, 0),
    /* 0x0BE */ STRUCT_FIELD(Actor, u16, timer_0BE, 0),
    /* 0x0C0 */ STRUCT_FIELD(Actor, u16, timer_0C0, 0),
    /* 0x0C2 */ STRUCT_FIELD(Actor, u16, timer_0C2, 0),
    /* 0x0C4 */ STRUCT_FIELD(Actor, u16, timer_0C4, 0),
    /* 0x0C6 */ STRUCT_FIELD(Actor, u16, timer_0C6, 0),
    /* 0x0C8 */ STRUCT_FIELD(Actor, u8, unk_0C8, 0), // may have been used for scenery shadowing
    /* 0x0C9 */ STRUCT_FIELD(Actor, u8, drawShadow, 0),
    /* 0x0CA */ STRUCT_FIELD(Actor, u8, lockOnTimers, 4),
    /* 0x0CE */ STRUCT_FIELD(Actor, s16, health, 0),
    /* 0x0D0 */ STRUCT_FIELD(Actor, s8, dmgType, 0),
    /* 0x0D2 */ STRUCT_FIELD(Actor, s16, dmgPart, 0),
    /* 0x0D4 */ STRUCT_FIELD(Actor, s16, dmgSource, 0),
    /* 0x0D6 */ STRUCT_FIELD(Actor, u16, damage, 0),
    /* 0x0D8 */ STRUCT_FIELD(Actor, Vec3f, hitPos, 0),
    /* 0x0E4 */ STRUCT_FIELD(Actor, s16, aiType, 0),  // Actor index for AllRange, script index for Event
    /* 0x0E6 */ STRUCT_FIELD(Actor, s16, aiIndex, 0), // Target index for AllRange, program counter for Event
    /* 0x0E8 */ STRUCT_FIELD(Actor, Vec3f, vel, 0),
    /* 0x0F4 */ STRUCT_FIELD(Actor, Vec3f, orient, 0),
    /* 0x100 */ STRUCT_FIELD(Actor, Vec3f, sfxSource, 0),
    /* 0x10C */ STRUCT_FIELD(Actor, f32, gravity, 0),
    /* 0x110 */ STRUCT_FIELD(Actor, f32, scale, 0),
    /* 0x114 */ STRUCT_FIELD(Actor, f32, fwork, 30),
    /* 0x18C */ STRUCT_FIELD(Actor, Vec3f, vwork, 30),
}; // size = 0x2F4

static OramFieldInfo bossFields[] = {
    /* 0x000 */ STRUCT_FIELD(Boss, Object, obj, 0),
    /* 0x01C */ STRUCT_FIELD(Boss, ObjectInfo, info, 0),
    /* 0x040 */ STRUCT_FIELD(Boss, s32, index, 0),
    /* 0x044 */ STRUCT_FIELD(Boss, s16, work_044, 0),
    /* 0x046 */ STRUCT_FIELD(Boss, s16, work_046, 0),
    /* 0x048 */ STRUCT_FIELD(Boss, s16, work_048, 0),
    /* 0x04A */ STRUCT_FIELD(Boss, s16, work_04A, 0),
    /* 0x04C */ STRUCT_FIELD(Boss, s16, animFrame, 0),
    /* 0x04E */ STRUCT_FIELD(Boss, s16, state, 0),
    /* 0x050 */ STRUCT_FIELD(Boss, s16, timer_050, 0),
    /* 0x052 */ STRUCT_FIELD(Boss, s16, timer_052, 0),
    /* 0x054 */ STRUCT_FIELD(Boss, s16, timer_054, 0),
    /* 0x056 */ STRUCT_FIELD(Boss, s16, timer_056, 0),
    /* 0x058 */ STRUCT_FIELD(Boss, s16, timer_058, 0),
    /* 0x05A */ STRUCT_FIELD(Boss, s16, timer_05A, 0),
    /* 0x05C */ STRUCT_FIELD(Boss, s16, timer_05C, 0),
    /* 0x05E */ STRUCT_FIELD(Boss, u8, drawShadow, 0),
    /* 0x060 */ STRUCT_FIELD(Boss, s16, health, 0),
    /* 0x062 */ STRUCT_FIELD(Boss, s8, dmgType, 0),
    /* 0x064 */ STRUCT_FIELD(Boss, s16, damage, 0),
    /* 0x066 */ STRUCT_FIELD(Boss, s16, dmgPart, 0),
    /* 0x068 */ STRUCT_FIELD(Boss, f32, yOffset, 0),
    /* 0x06C */ STRUCT_FIELD(Boss, Vec3f, vel, 0),
    /* 0x078 */ STRUCT_FIELD(Boss, Vec3f, orient, 0),
    /* 0x084 */ STRUCT_FIELD(Boss, f32, gravity, 0),
    /* 0x088 */ STRUCT_FIELD(Boss, s16, swork, 40),
    /* 0x0D8 */ STRUCT_FIELD(Boss, f32, fwork, 50),
    /* 0x1A0 */ STRUCT_FIELD(Boss, Vec3f, vwork, 50),
    /* 0x3F8 */ STRUCT_FIELD(Boss, f32, scale, 0),
    /* 0x3FC */ STRUCT_FIELD(Boss, Vec3f, sfxSource, 0),
}; // size = 0x408

static OramFieldInfo shotFields[] = {
    /* 0x00 */ STRUCT_FIELD(PlayerShot, Object, obj, 0),
    /* 0x1C */ STRUCT_FIELD(PlayerShot, s32, index, 0),
    /* 0x20 */ STRUCT_FIELD(PlayerShot, Vec3f, vel, 0),
    /* 0x2C */ STRUCT_FIELD(PlayerShot, Vec3f, vec_2C, 0),
    /* 0x38 */ STRUCT_FIELD(PlayerShot, Vec3f, sfxSource, 0),
    /* 0x44 */ STRUCT_FIELD(PlayerShot, f32, scale, 0),
    /* 0x48 */ STRUCT_FIELD(PlayerShot, f32, unk_48, 0),
    /* 0x4C */ STRUCT_FIELD(PlayerShot, f32, unk_4C, 0),
    /* 0x50 */ STRUCT_FIELD(PlayerShot, f32, unk_50, 0),
    /* 0x54 */ STRUCT_FIELD(PlayerShot, f32, unk_54, 0),
    /* 0x58 */ STRUCT_FIELD(PlayerShot, s32, unk_58, 0),
    /* 0x5C */ STRUCT_FIELD(PlayerShot, s32, unk_5C, 0),
    /* 0x60 */ STRUCT_FIELD(PlayerShot, s32, unk_60, 0),
    /* 0x64 */ STRUCT_FIELD(PlayerShot, s32, timer, 0),
    /* 0x68 */ STRUCT_FIELD(PlayerShot, s32, sourceId, 0),
    /* 0x6C */ STRUCT_FIELD(PlayerShot, u8, bonus, 0),
}; // size = 0x70

static OramFieldInfo playerFields[] = {
    /* 0x000 */ STRUCT_FIELD(Player, f32, unk_000, 0),
    /* 0x004 */ STRUCT_FIELD(Player, f32, unk_004, 0),
    /* 0x008 */ STRUCT_FIELD(Player, f32, unk_008, 0),
    /* 0x00C */ STRUCT_FIELD(Player, f32, unk_00C, 0),
    /* 0x010 */ STRUCT_FIELD(Player, f32, unk_010, 0),
    /* 0x014 */ STRUCT_FIELD(Player, f32, unk_014, 0),
    /* 0x018 */ STRUCT_FIELD(Player, f32, unk_018, 0),
    /* 0x01C */ STRUCT_FIELD(Player, f32, unk_01C, 0),
    /* 0x020 */ STRUCT_FIELD(Player, long, pad20, 2),
    /* 0x028 */ STRUCT_FIELD(Player, f32, unk_028, 0),
    /* 0x02C */ STRUCT_FIELD(Player, f32, unk_02C, 0),
    /* 0x030 */ STRUCT_FIELD(Player, f32, unk_030, 0),
    /* 0x034 */ STRUCT_FIELD(Player, f32, camRoll, 0),
    /* 0x038 */ STRUCT_FIELD(Player, long, pad38, 2),
    /* 0x040 */ STRUCT_FIELD(Player, Vec3f, cam, 2),
    /* 0x058 */ STRUCT_FIELD(Player, f32, camYaw, 0),
    /* 0x05C */ STRUCT_FIELD(Player, f32, camPitch, 0),
    /* 0x05C */ STRUCT_FIELD(Player, f32, xRock, 0),
    /* 0x064 */ STRUCT_FIELD(Player, Vec3f, groundPos, 0), // position on ground directly below player
    /* 0x070 */ STRUCT_FIELD(Player, f32, groundRotY, 0),  // y rotation of actor under player when acting as ground
    /* 0x074 */ STRUCT_FIELD(Player, Vec3f, pos, 0), // pos.z is position along path. see trueZpos for the actual z
                                                     // position
    /* 0x080 */ STRUCT_FIELD(Player, f32, yBob, 0),
    /* 0x084 */ STRUCT_FIELD(Player, f32, xShake, 0),
    /* 0x088 */ STRUCT_FIELD(Player, f32, bobPhase, 0),
    /* 0x08C */ STRUCT_FIELD(Player, f32, camDist, 0),
    /* 0x090 */ STRUCT_FIELD(Player, Vec3f, basePos, 0), // position at start of update
    /* 0x09C */ STRUCT_FIELD(Player, f32, pathWidth, 0),
    /* 0x0A0 */ STRUCT_FIELD(Player, f32, pathHeight, 0),
    /* 0x0A4 */ STRUCT_FIELD(Player, f32, pathFloor, 0),
    /* 0x0A8 */ STRUCT_FIELD(Player, f32, unk_0A8, 0), // set to 3000.0f, not used. May have been z-extent of path?
    /* 0x0AC */ STRUCT_FIELD(Player, f32, xPath, 0),
    /* 0x0B0 */ STRUCT_FIELD(Player, f32, yPath, 0),
    /* 0x0B4 */ STRUCT_FIELD(Player, f32, pathStep, 0),
    /* 0x0B8 */ STRUCT_FIELD(Player, f32, xPathTarget, 0),
    /* 0x0BC */ STRUCT_FIELD(Player, f32, yPathTarget, 0),
    /* 0x0C0 */ STRUCT_FIELD(Player, Vec3f, vel, 0),
    /* 0x0CC */ STRUCT_FIELD(Player, f32, warpCamSpeed, 0),
    /* 0x0D0 */ STRUCT_FIELD(Player, f32, baseSpeed, 0),
    /* 0x0D4 */ STRUCT_FIELD(Player, f32, gravity, 0),
    /* 0x0D8 */ STRUCT_FIELD(Player, Vec3f, knockback, 0),
    /* 0x0E4 */ STRUCT_FIELD(Player, Vec3f, rot, 0),
    /* 0x0F0 */ STRUCT_FIELD(Player, f32, rockAngle, 0),
    /* 0x0F4 */ STRUCT_FIELD(Player, f32, rockPhase, 0),
    /* 0x0F8 */ STRUCT_FIELD(Player, f32, bankAngle, 0),
    /* 0x0FC */ STRUCT_FIELD(Player, f32, xRot_0FC, 0),  // on-foot cam x tilt from floor
    /* 0x100 */ STRUCT_FIELD(Player, f32, zRot_0FC, 0),  // on-foot cam z tilt from floor
    /* 0x104 */ STRUCT_FIELD(Player, Vec3f, rot_104, 0), // rotation modifiers from ground movement
    /* 0x110 */ STRUCT_FIELD(Player, f32, boostSpeed, 0),
    /* 0x114 */ STRUCT_FIELD(Player, f32, yRot_114, 0),
    /* 0x118 */ STRUCT_FIELD(Player, f32, pathChangeYaw, 0),
    /* 0x11C */ STRUCT_FIELD(Player, f32, yRotVel_11C, 0),
    /* 0x120 */ STRUCT_FIELD(Player, f32, xRot_120, 0),
    /* 0x124 */ STRUCT_FIELD(Player, f32, pathChangePitch, 0),
    /* 0x128 */ STRUCT_FIELD(Player, long, pad128, 0),
    /* 0x12C */ STRUCT_FIELD(Player, f32, zRotBank, 0),
    /* 0x130 */ STRUCT_FIELD(Player, f32, zRotBarrelRoll, 0),
    /* 0x134 */ STRUCT_FIELD(Player, f32, damageShake, 0),
    /* 0x138 */ STRUCT_FIELD(Player, f32, trueZpos, 0), // the actual position of the arwing. pos.z is its z position
                                                        // along the path
    /* 0x13C */ STRUCT_FIELD(Player, long, pad13C, 0),
    /* 0x140 */ STRUCT_FIELD(Player, f32, zPathVel, 0),
    /* 0x144 */ STRUCT_FIELD(Player, f32, zPath, 0),
    /* 0x148 */ STRUCT_FIELD(Player, f32, unk_148, 0), // affects how cam eye follows the player
    /* 0x14C */ STRUCT_FIELD(Player, f32, unk_14C, 0), // affects how cam at follows the player
    /* 0x150 */ STRUCT_FIELD(Player, f32, unk_150, 0),
    /* 0x154 */ STRUCT_FIELD(Player, f32, unk_154, 0),
    /* 0x158 */ STRUCT_FIELD(Player, f32, unk_158, 0),
    /* 0x15C */ STRUCT_FIELD(Player, f32, unk_15C, 0),
    /* 0x160 */ STRUCT_FIELD(Player, long, pad160, 0),
    /* 0x164 */ STRUCT_FIELD(Player, f32, unk_164, 0),
    /* 0x168 */ STRUCT_FIELD(Player, f32, unk_168, 0),
    /* 0x16C */ STRUCT_FIELD(Player, f32, unk_16C, 0),
    /* 0x170 */ STRUCT_FIELD(Player, f32, unk_170, 0),
    /* 0x174 */ STRUCT_FIELD(Player, f32, unk_174, 0),
    /* 0x178 */ STRUCT_FIELD(Player, f32, unk_178, 0),
    /* 0x17C */ STRUCT_FIELD(Player, f32, unk_17C, 0),
    /* 0x180 */ STRUCT_FIELD(Player, f32, unk_180, 0),
    /* 0x184 */ STRUCT_FIELD(Player, f32, unk_184, 0),
    /* 0x188 */ STRUCT_FIELD(Player, f32, unk_188, 0),
    /* 0x18C */ STRUCT_FIELD(Player, f32, unk_18C, 0),
    /* 0x190 */ STRUCT_FIELD(Player, f32, unk_190, 0), // Related to engine glow. Investigate
    /* 0x194 */ STRUCT_FIELD(Player, f32, unk_194, 0), // Related to engine glow. Investigate
    /* 0x198 */ STRUCT_FIELD(Player, s32, savedAlternateView, 0),
    /* 0x19C */ STRUCT_FIELD(Player, s32, unk_19C, 0), // used to indicate whether a U-turn is forced, whether to draw
                                                       // ground in TI intro, and to stop the landmaster
    /* 0x1A0 */ STRUCT_FIELD(Player, s32, unk_1A0, 0), // tank muzzle flash timer
    /* 0x1A4 */ STRUCT_FIELD(Player, s32, dmgType, 0),
    /* 0x1A8 */ STRUCT_FIELD(Player, long, pad1A8, 2),
    /* 0x1B0 */ STRUCT_FIELD(Player, s32, turretState, 0),
    /* 0x1B4 */ STRUCT_FIELD(Player, s32, turretActor, 0),
    /* 0x1B8 */ STRUCT_FIELD(Player, long, pad1B8, 0),
    /* 0x1BC */ STRUCT_FIELD(Player, s32, turretRecoil, 0),
    /* 0x1C0 */ STRUCT_FIELD(Player, s32, turretLockOnCount, 0),
    /* 0x1C4 */ STRUCT_FIELD(Player, s32, num, 0),
    /* 0x1C8 */ STRUCT_FIELD(Player, s32, state, 0),
    /* 0x1CC */ STRUCT_FIELD(Player, s32, form, 0),
    /* 0x1D0 */ STRUCT_FIELD(Player, s32, csState, 0),
    /* 0x1D4 */ STRUCT_FIELD(Player, s32, grounded, 0),
    /* 0x1D8 */ STRUCT_FIELD(Player, s32, meTargetIndex, 0),
    /* 0x1DC */ STRUCT_FIELD(Player, s32, rollState, 0),
    /* 0x1E0 */ STRUCT_FIELD(Player, s32, rollInputTimerL, 0),
    /* 0x1E4 */ STRUCT_FIELD(Player, s32, rollInputTimerR, 0),
    /* 0x1E8 */ STRUCT_FIELD(Player, s32, rollTimer, 0),
    /* 0x1EC */ STRUCT_FIELD(Player, s32, rollRate, 0),
    /* 0x1F0 */ STRUCT_FIELD(Player, s32, baseRollRate, 0),
    /* 0x1F4 */ STRUCT_FIELD(Player, s32, hitTimer, 0),
    /* 0x1F8 */ STRUCT_FIELD(Player, s32, csTimer, 0),
    /* 0x1FC */ STRUCT_FIELD(Player, s32, csEventTimer, 0),
    /* 0x200 */ STRUCT_FIELD(Player, s32, dmgEffect, 0), // 1 colors the arwing red. 2 gives it a static-y texture
    /* 0x204 */ STRUCT_FIELD(Player, s32, wingPosition, 0),
    /* 0x208 */ STRUCT_FIELD(Player, s32, unk_208, 0), // timer for great fox splash effects in aquas intro
    /* 0x20C */ STRUCT_FIELD(Player, s32, unk_20C, 0),
    /* 0x210 */ STRUCT_FIELD(Player, s32, pathChangeTimer, 0),
    /* 0x214 */ STRUCT_FIELD(Player, s32, timer_214, 0), // unused. may have been another double input timer like barrel
                                                         // roll
    /* 0x218 */ STRUCT_FIELD(Player, s32, timer_218, 0), // unused. may have been another double input timer like barrel
                                                         // roll
    /* 0x21C */ STRUCT_FIELD(Player, s32, hitDirection, 0),
    /* 0x220 */ STRUCT_FIELD(Player, s32, radioDamageTimer, 0),
    /* 0x224 */ STRUCT_FIELD(Player, s32, dmgEffectTimer, 0),
    /* 0x228 */ STRUCT_FIELD(Player, s32, flags_228, 0),
    /* 0x22C */ STRUCT_FIELD(Player, s32, whooshTimer, 0),
    /* 0x230 */ STRUCT_FIELD(Player, s32, unk_230, 0), // turns off some Blue Marine controls. perhaps was a lockout
                                                       // timer?
    /* 0x234 */ STRUCT_FIELD(Player, s32, draw, 0),
    /* 0x238 */ STRUCT_FIELD(Player, s32, alternateView, 0),
    /* 0x23C */ STRUCT_FIELD(Player, s32, shadowing, 0),
    /* 0x240 */ STRUCT_FIELD(Player, s32, hideShadow, 0),
    /* 0x244 */ STRUCT_FIELD(Player, s32, shotTimer, 0),
    /* 0x248 */ STRUCT_FIELD(Player, f32, shadowRotX, 0), // forms YPR triple with groundRotY
    /* 0x24C */ STRUCT_FIELD(Player, f32, shadowRotZ, 0),
    /* 0x250 */ STRUCT_FIELD(Player, f32, unk_250, 0), // checked for by event actors, but unused?
    /* 0x250 */ STRUCT_FIELD(Player, long, pad254, 0),
    /* 0x258 */ STRUCT_FIELD(Player, f32, meteoWarpSpinSpeed, 0),
    /* 0x25C */ STRUCT_FIELD(Player, f32, contrailScale, 0),
    /* 0x260 */ STRUCT_FIELD(Player, long, pad260, 0),
    /* 0x264 */ STRUCT_FIELD(Player, s32, shields, 0),
    /* 0x268 */ STRUCT_FIELD(Player, s32, damage, 0),
    /* 0x26C */ STRUCT_FIELD(Player, s32, heal, 0),
    /* 0x270 */ STRUCT_FIELD(Player, s32, unk_270, 0), // checked for by event actors, but unused?
    /* 0x274 */ STRUCT_FIELD(Player, long, pad274, 0),
    /* 0x278 */ STRUCT_FIELD(Player, s32, timer_278, 0),
    /* 0x27C */ STRUCT_FIELD(Player, s32, meteoWarpTimer, 0),
    /* 0x280 */ STRUCT_FIELD(Player, s32, barrelRollAlpha, 0),
    /* 0x284 */ STRUCT_FIELD(Player, s32, unk_284, 0),
    /* 0x288 */ STRUCT_FIELD(Player, s32, attacker, 0),
    /* 0x28C */ STRUCT_FIELD(Player, long, pad28C, 10),
    /* 0x2B4 */ STRUCT_FIELD(Player, s32, boostCooldown, 0),
    /* 0x2B8 */ STRUCT_FIELD(Player, s32, boostActive, 0),
    /* 0x2BC */ STRUCT_FIELD(Player, f32, boostMeter, 0),
    /* 0x2C0 */ STRUCT_FIELD(Player, f32, unk_2C0, 0),      // has to do with starting right tank jet. counterpart of
                                                            // D_800C9F20
    /* 0x2C4 */ STRUCT_FIELD(Player, s32, deflectCount, 0), // counts shots deflected by barrel rolls. never used
    /* 0x2C8 */ STRUCT_FIELD(Player, Vec3f, hit2, 0),
    /* 0x2D4 */ STRUCT_FIELD(Player, Vec3f, hit1, 0),
    /* 0x2E0 */ STRUCT_FIELD(Player, Vec3f, hit3, 0),
    /* 0x2EC */ STRUCT_FIELD(Player, Vec3f, hit4, 0),
    /* 0x2F8 */ STRUCT_FIELD(Player, Vec3f, jointTable, 30),
    /* 0x460 */ STRUCT_FIELD(Player, Vec3f, sfxSource, 0),
    /* 0x46C */ STRUCT_FIELD(Player, Vec3f, sfxVel, 0),
    /* 0x478 */ STRUCT_FIELD(Player, PlayerSfx, sfx, 0),
    /* 0x498 */ STRUCT_FIELD(Player, s32, mercyTimer, 0),
    /* 0x49C */ STRUCT_FIELD(Player, ArwingInfo, arwing, 0),
    /* 0x4D8 */ STRUCT_FIELD(Player, f32, aerobaticPitch, 0),
    /* 0x4DC */ STRUCT_FIELD(Player, s32, somersault, 0),
}; // size = 0x4E0

static ObjArrayInfo objArrays[] = {
    { NULL, 0, 1, "--", NULL, 0 },
    { NULL, sizeof(Player), 1, "PL", playerFields, ARRAY_COUNT(playerFields) },
    { NULL, sizeof(Scenery360), 200, "SC", scenery360Fields, ARRAY_COUNT(scenery360Fields) },
    OBJ_ARRAY_INFO(gScenery, "SC", sceneryFields),
    OBJ_ARRAY_INFO(gSprites, "SP", spriteFields),
    OBJ_ARRAY_INFO(gActors, "AC", actorFields),
    OBJ_ARRAY_INFO(gBosses, "BS", bossFields),
    OBJ_ARRAY_INFO(gItems, "IT", itemFields),
    OBJ_ARRAY_INFO(gEffects, "EF", effectFields),
    OBJ_ARRAY_INFO(gPlayerShots, "SH", shotFields),
    OBJ_ARRAY_INFO(gTexturedLines, "TL", texLineFields),
    OBJ_ARRAY_INFO(gRadarMarks, "RM", radarMarkFields),
    OBJ_ARRAY_INFO(gBonusText, "BT", bonusFields),
};
