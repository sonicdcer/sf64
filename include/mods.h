#ifndef MODS_H
#define MODS_H

/**
 * Level Select:
 * Press left or right on the D-PAD to choose which level to play,
 * useful for debugging and speedrunning training.
*/
#define MODS_LEVEL_SELECT 0

#if MODS_LEVEL_SELECT == true
void Map_LevelSelect(void);
#endif

#endif
