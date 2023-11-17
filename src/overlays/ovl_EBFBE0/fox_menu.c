#include "global.h"

void func_EBFBE0_80191B20(void);
void func_EBFBE0_80192190(void);
void func_EBFBE0_801928BC(void);
void func_EBFBE0_80192D58(void);
void func_EBFBE0_80192938(void);
void func_EBFBE0_80193864(void);
void func_EBFBE0_80193C4C(void);
void func_EBFBE0_801944F0(void);
void func_EBFBE0_80194678(void);
void func_EBFBE0_801948A8(void);
void func_EBFBE0_80194CE4(void);
void func_EBFBE0_80195B74(void);
void func_EBFBE0_801958DC(void);
void func_EBFBE0_80195944(void);
void func_EBFBE0_80196260(void);
void func_EBFBE0_801962A4(void);
void func_EBFBE0_80196894(void);
void func_EBFBE0_80196E54(void);
void func_EBFBE0_80196EFC(void);
void func_EBFBE0_80196F9C(void);
void func_EBFBE0_801992C4(void);
void func_EBFBE0_80199424(void);
void func_EBFBE0_8019978C(void);
void func_EBFBE0_80199FA8(void);
void func_EBFBE0_8019A0B8(void);
void func_EBFBE0_8019AAB4(void);
void func_EBFBE0_8019BDF0(void);
void func_EBFBE0_8019CAE0(void);
void func_EBFBE0_8019D118(void);
void func_EBFBE0_8019DD44(void);
void func_EBFBE0_8019DF64(void);
void func_EBFBE0_8019E030(void);
void func_EBFBE0_8019E284(void);
void func_EBFBE0_801A07E8(u8*, u8*, f32*);

extern s32 D_8017783C;
extern s32 D_8017784C;
extern s32 D_80177898;
extern s32 D_80177DB0;
extern void* D_EBFBE0_801B68B0[];
extern void* D_EBFBE0_801B68D4[];

extern s32 D_EBFBE0_801B68F8;
extern s32 D_EBFBE0_801B9124;
extern s32 D_EBFBE0_801B912C;
extern s32 D_EBFBE0_801B9178;
extern s32 D_EBFBE0_801B917C;
extern s32 D_EBFBE0_801B91BC;
extern f32 D_EBFBE0_801B91FC;
extern f32 D_EBFBE0_801B9200;
extern s32 D_EBFBE0_801B93E8;
extern s32 D_EBFBE0_801B93EC;

// Planet textures
extern s8 D_EBFBE0_801BB810[96 * 96];
extern s8 D_EBFBE0_801B9410[96 * 96];
extern s8 D_EBFBE0_801BDC10[96 * 96];
extern s8 D_EBFBE0_801C0010[96 * 96];
extern s8 D_EBFBE0_801C2410[96 * 96];
extern s8 D_EBFBE0_801C4810[96 * 96];
extern s8 D_EBFBE0_801C6C10[96 * 96];
extern s8 D_EBFBE0_801C9010[96 * 96];
extern s8 D_EBFBE0_801CB410[96 * 96];

extern f32 D_EBFBE0_801CD818[];

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80191B20.s")

void func_EBFBE0_801920C4(void) {
    if (D_EBFBE0_801B9178 > 0) {
        D_EBFBE0_801B9178--;
    }
    if (D_EBFBE0_801B917C > 0) {
        D_EBFBE0_801B917C--;
    }

    switch (D_8017784C) {
        case 0:
            if (D_8017783C == 0) {
                D_8017784C = 1;
                func_8001DC6C(0, 23);
            }
            break;

        case 1:
            D_80177898 = 0;
            func_EBFBE0_80191B20();
            break;

        case 2:
            D_80177898 = 2;
            func_EBFBE0_80192190();
            break;
    }
    D_80177DB0++;
}

void func_EBFBE0_80192190(void) {
    switch (D_EBFBE0_801B9124) {
        case 0x3E8:
            func_EBFBE0_80192D58();
            break;

        case 0x0:
            func_EBFBE0_801928BC();
            break;

        case 0x1:
            func_EBFBE0_80192938();
            break;

        case 0x2:
            func_EBFBE0_80193C4C();
            break;

        case 0x3:
            func_EBFBE0_80196EFC();
            break;

        case 0x4:
            func_EBFBE0_801948A8();
            break;

        case 0x5:
            func_EBFBE0_801962A4();
            break;

        case 0x6:
            func_EBFBE0_80195944();
            break;

        case 0x7D0:
            func_EBFBE0_8019A0B8();
            break;

        case 0xA:
        case 0x14:
        case 0x1E:
            func_EBFBE0_80199424();
            break;

        case 0xC8:
            func_EBFBE0_8019CAE0();
            break;

        case 0x12C:
            func_EBFBE0_8019DD44();
            break;

        case 0x190:
            func_EBFBE0_8019E030();
            break;
    }

    if (D_EBFBE0_801B91BC != 0) {
        D_EBFBE0_801B91FC += 3.8f;
        D_EBFBE0_801B9200 += 4.2f;
    }
}

void func_EBFBE0_80192340(void) {
    switch (D_EBFBE0_801B9124) {
        case 0x3E8:
            func_EBFBE0_80193864();
            break;

        case 0x2:
            func_EBFBE0_801944F0();
            break;

        case 0x3:
            func_EBFBE0_80196F9C();
            break;

        case 0x4:
            func_EBFBE0_80194CE4();
            break;

        case 0x6:
            func_EBFBE0_80195B74();
            break;

        case 0x5:
            func_EBFBE0_80196894();
            break;

        case 0x7D0:
            func_EBFBE0_8019AAB4();
            break;

        case 0xA:
        case 0x14:
        case 0x1E:
            func_EBFBE0_8019978C();
            break;

        case 0xC8:
            func_EBFBE0_8019D118();
            break;

        case 0x12C:
            func_EBFBE0_8019DF64();
            break;

        case 0x190:
            func_EBFBE0_8019E284();
            break;
    }

    if (D_EBFBE0_801B8280 != 0) {
        func_EBFBE0_8019BDF0();
        func_80084688(2, D_EBFBE0_801B8284);
        Matrix_Pop(&D_8013B3C0);
    }
}

void func_EBFBE0_801924C4(void) {
    D_80161A38 = 0xFF;
    D_EBFBE0_801B912C = 0;

    switch (D_EBFBE0_801B9124) {
        case 0x0:
            D_80177898 = 0;
            break;

        case 0xA:
        case 0x14:
        case 0x1E:
            func_EBFBE0_801992C4();
            break;

        case 0x7D0:
            func_EBFBE0_80199FA8();
            break;

        case 0x3:
            func_EBFBE0_80196E54();
            break;

        case 0x4:
            func_EBFBE0_80194678();
            break;

        case 0x6:
            func_EBFBE0_801958DC();
            break;

        case 0x5:
            func_EBFBE0_80196260();
            break;
    }
}

void func_EBFBE0_80192598(void) {
    s32 i;

    D_EBFBE0_801B93E8 = 0;
    D_EBFBE0_801B93EC = 0;

    for (i = 0; i < (96 * 96); i++) {
        // Planet Textures
        D_EBFBE0_801BB810[i] = 106;
        D_EBFBE0_801BDC10[i] = 84;
        D_EBFBE0_801C0010[i] = 75;
        D_EBFBE0_801C2410[i] = 81;
        D_EBFBE0_801C4810[i] = 55;
        D_EBFBE0_801C6C10[i] = 82;
        D_EBFBE0_801C9010[i] = 68;
        D_EBFBE0_801CB410[i] = 52;
        D_EBFBE0_801B9410[i] = 0;
    }

    for (i = 0; i < 9; i++) {
        D_EBFBE0_801CD818[i] = 0.0f;
        func_EBFBE0_801A07E8(D_EBFBE0_801B68B0[i], SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[i]), &D_EBFBE0_801CD818[i]);
    }
}

void func_EBFBE0_80192738(void) {
    if (D_EBFBE0_801B93E8 == 5) {
        func_EBFBE0_801A07E8(D_EBFBE0_801B68B0[8], SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[8]), &D_EBFBE0_801CD818[8]);
        D_EBFBE0_801B93E8 = 0;
    } else {
        D_EBFBE0_801B93E8++;
    }

    func_EBFBE0_801A07E8(D_EBFBE0_801B68B0[D_EBFBE0_801B93EC * 2],
                         SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[D_EBFBE0_801B93EC * 2]),
                         &D_EBFBE0_801CD818[D_EBFBE0_801B93EC * 2]);

    func_EBFBE0_801A07E8(D_EBFBE0_801B68B0[(D_EBFBE0_801B93EC * 2) + 1],
                         SEGMENTED_TO_VIRTUAL(D_EBFBE0_801B68D4[(D_EBFBE0_801B93EC * 2) + 1]),
                         &D_EBFBE0_801CD818[(D_EBFBE0_801B93EC * 2) + 1]);

    D_EBFBE0_801B93EC++;
    if (D_EBFBE0_801B93EC >= 4) {
        D_EBFBE0_801B93EC = 0;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801928BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80192938.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801929F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80192D58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80193864.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80193B04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80193C4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801944F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80194678.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801948A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80194AEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80194BD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80194CE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801952B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801958DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80195944.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80195B74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80196260.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801962A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019669C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80196894.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80196E54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80196EFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80196F9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80196FC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80197074.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019715C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7110.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7114.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7118.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B711C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7120.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7124.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7128.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B712C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7130.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7134.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7138.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B713C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7140.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7144.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7148.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B714C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7150.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7154.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/D_EBFBE0_801B7158.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801973C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019752C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80197914.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80197A3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80197D30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80197DE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80197F74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80198164.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801982B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801984D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80198608.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019882C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019896C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80199198.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80199284.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_801992C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80199424.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019949C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019978C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80199820.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80199EA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_80199FA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019A080.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019A0B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019A124.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019A1A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019A214.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019A298.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019A2E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019A4DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019A6DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019A954.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019AAB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019AB30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019AD84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019AFFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019B1F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019B3DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019B5AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019B6D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019B7D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019B8A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019B8C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019B9C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019BAB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019BBA4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019BC44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019BDF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019BE7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019BF34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019C04C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019C120.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019C418.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019C5A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019C66C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019C824.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019C8C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019CAE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019CBC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019CD54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019D118.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019D624.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019DB20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019DCE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019DD44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019DE74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019DF64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019E030.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_EBFBE0/fox_menu/func_EBFBE0_8019E284.s")
