#include "global.h"

void func_80005740(s32*);
void func_80084688(s32, s32);
void func_800A5D6C(void);
void func_800BB5D0(void);
void func_80006F20(void);
void func_800B6F50(f32, f32, f32, f32, f32, f32); 

void func_800182F4(s32); 
void func_8001DC6C(s32, s32); 
void func_801877F0_EBFEB0(void);
s32 func_80187ABC_EC017C(void);
void func_80187B00_EC01C0(void);
void func_801888E8_EC0FA8(void);
void func_8018994C_EC200C(void);
void func_8018A644_EC2D04(void);
void func_8018ACEC_EC33AC(void);
void func_8018B5C4_EC3C84(void);
void func_8018C644_EC4D04(void);
void func_80190E64_EC9524(void);
void func_8019111C_EC97DC(void);
void func_80187CA8_EC0368(void);
void func_80188010_EC06D0(void);
void func_80189208_EC18C8(void);
void func_8018A2F8_EC29B8(void);
void func_8018A990_EC3050(void);
void func_8018B038_EC36F8(void);
void func_8018C114_EC47D4(void);
void func_8018CB90_EC5250(void);
void func_8018F680_EC7D40(void);
void func_8018F77C_EC7E3C(void);
void func_8018F85C_EC7F1C(void);
void func_8018F8E4_EC7FA4(void);
void func_8018FC14_EC82D4(void);
void func_8018FD08_EC83C8(void);
void func_8018FF74_EC8634(void);
void func_801906A0_EC8D60(void);
void func_80190C9C_EC935C(void);
void func_801918FC_EC9FBC(void);

extern s32 D_800D2870;
extern u8 D_800DD8B0[];
extern s32 D_800DD8B4;

extern u8 D_80137E78;
extern s32 D_8013B3C0;

extern s16 D_80161A34;
extern s16 D_80161A36;

extern s32 D_8017783C;
extern s32 D_80177898;
extern s32 D_80177AE0;
extern s32 D_80177AF8;
extern s32 D_80177DB0;
extern s32 D_80178320;
extern s32 D_80178328;
extern s32 D_80178330;
extern s32 D_80178340;
extern s32 D_80178348;
extern s32 D_80178350;
extern s32 D_80178354;
extern f32 D_80178420;
extern f32 D_80178424;
extern f32 D_80177978;
extern f32 D_80177980;
extern f32 D_80177988;
extern f32 D_801779A0;
extern f32 D_801779B8;
extern f32 D_801779C0;
extern s32 D_8017829C;
extern s32 D_80178410;
extern f32 D_8017842C;

extern f32 D_801B7BC8;
extern f32 D_801B7BCC;
extern s32 D_801B827C;
extern s32 D_801B8280;
extern s32 D_801B8284;
extern s32 D_801B8288;
extern s32 D_801B82A8;
extern s32 D_801B82AC;
extern s32 D_801B82BC;
extern s32 D_801B82C0;
extern s32 D_801B82C4;
extern f32 D_801B833C;
extern s32 D_801B8344;
extern s32 D_801B8348;

void func_801875E0_EBFCA0(void) {
    D_80137E78 = 2;

    D_80177DB0 = 0;

    D_80177AE0 = 2;

    D_80161A34 = 0;
    D_800D2870 = 0;

    D_80177AF8 = func_80187ABC_EC017C();

    D_80178348 = 0;
    D_80178350 = 0;
    D_80178354 = 0;
    D_80178340 = 0;

    D_80178320 = 0;
    D_80178328 = 0;
    D_80178330 = 0;

    D_80161A36 = 0;

    D_801B8284 = 0;
    D_801B82A8 = 0;
    D_801B82AC = 0;

    D_801B833C = 0.0f;

    D_801B82C0 = 0;
    D_801B8280 = 0;

    D_801B7BCC = 255.0f;
    D_801B7BC8 = 255.0f;

    func_80006F20();

    func_800A5D6C();
    D_80178420 = 320.0f;
    D_80178424 = 240.0f;

    func_80188010_EC06D0();

    if ((D_80177AF8 == -1) || (D_801B827C != 0)) {
        func_8001DC6C(0, 0x17);
        D_801B82C4 = 0;
        D_801B827C = 0;
    } else {
        func_8001DC6C(0, 0x16);
        D_801B82C4 = 1;
    }
    D_800DD8B4 = 0x1E;
}

void func_80187754_EBFE14(void) {
    switch (D_80177AE0) {
        case 0:
            if (D_8017783C == 0) {
                D_80177898 = 0;
                D_80177AE0 = 1;
            }
            break;

        case 1:
            D_80177898 = 0;
            func_801875E0_EBFCA0();
            break;

        case 2:
            D_80177898 = 1;
            func_801877F0_EBFEB0();
            break;
    }
    D_80177DB0++;
}

void func_801877F0_EBFEB0(void) {
    if (D_801B82A8 > 0) {
        D_801B82A8 -= 1;
    }

    if (D_801B82AC > 0) {
        D_801B82AC -= 1;
    }

    switch (D_801B82C4) {
        case 7:
            func_80187B00_EC01C0();
            break;
        case 0:
            func_801888E8_EC0FA8();
            func_8019111C_EC97DC();
            break;
        case 1:
            func_8018994C_EC200C();
            break;
        case 2:
            func_8018A644_EC2D04();
            break;
        case 3:
            func_8018ACEC_EC33AC();
            break;
        case 4:
            func_8018B5C4_EC3C84();
            break;
        case 5:
            func_8018C644_EC4D04();
            break;
    }
    func_80190E64_EC9524();
}

void func_801878D8_EBFF98(void) {
    switch (D_801B82C4) {
        case 7:
            func_80187CA8_EC0368();
            break;

        case 0:
            func_801918FC_EC9FBC();
            func_80189208_EC18C8();
            func_80005740(&D_8013B3C0);
            func_8018F680_EC7D40();
            func_8018F85C_EC7F1C();
            func_8018FC14_EC82D4();
            func_8018F8E4_EC7FA4();
            func_801918FC_EC9FBC();
            func_8018F77C_EC7E3C();
            func_80005740(&D_8013B3C0);
            break;

        case 1:
            if (D_801B8348 != 0) {
                func_801918FC_EC9FBC();
                func_8018A2F8_EC29B8();
                func_80005740(&D_8013B3C0);
                func_800BB5D0();
                func_80190C9C_EC935C();
            }
            func_8018FF74_EC8634();
            func_801906A0_EC8D60();
            break;

        case 2:
            func_801918FC_EC9FBC();
            func_8018A990_EC3050();
            func_80005740(&D_8013B3C0);
            if (D_801B8344 != 0) {
                func_8018FD08_EC83C8();
            }
            break;

        case 3:
            func_801918FC_EC9FBC();
            func_8018B038_EC36F8();
            func_80005740(&D_8013B3C0);
            break;

        case 4:
            func_801918FC_EC9FBC();
            func_8018C114_EC47D4();
            func_80005740(&D_8013B3C0);
            func_80190C9C_EC935C();
            break;

        case 5:
            func_801918FC_EC9FBC();
            func_8018CB90_EC5250();
            func_80005740(&D_8013B3C0);
            break;
    }

    if (D_801B8284 != 0) {
        D_80178340 = 0;
        D_80178348 = 0;
        D_80178350 = 0;
        D_80178354 = 0;
        func_80084688(2, D_801B8284);
    }
}

s32 func_80187ABC_EC017C(void) {
    s32 ret = -1;
    s32 i;
    
    for (i = 0; i < 4; i++) {
        if (D_800DD8B0[i] == 1) {
            ret = i;
            break;
        }
    }
    
    return ret;
}

void func_80187B00_EC01C0(void) {
    switch (D_801B82C0) {
        case 0:
            D_801B8288 = 0;
            D_80178410 = 800;
            D_801B82BC = 450;
            D_801B82C0++;
            D_801B82A8 = 20;
            break;

        case 1:
            if (D_801B82BC != 0) {
                func_800B6F50(D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0);
                D_8017842C -= 1.0f;
                if (D_801B82BC == 0x3C) {
                    func_800182F4(0x103C00FF);
                    func_800182F4(0x113C00FF);
                }
            } else {
                D_80178410 = 0;
                D_8017829C = 0;
                D_801B82C0 = 0;
                D_80177898 = 0;
                func_8001DC6C(0, 0x16);
                D_801B82C4 = 1;
            }

            if (D_801B8288 == 0xA) {
                D_801B82BC -= 1;
            }
            break;
    }

    if ((D_801B82A8 == 0) && ((D_80177DB0 & 7) == 7) && (D_801B8288 < 10)) {
        D_801B8288++;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80187CA8_EC0368.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80187E28_EC04E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80188010_EC06D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_801881FC_EC08BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_801888E8_EC0FA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80189208_EC18C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_801894E8_EC1BA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018994C_EC200C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018A2F8_EC29B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018A338_EC29F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018A644_EC2D04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018A990_EC3050.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018ABC0_EC3280.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018ACEC_EC33AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018B038_EC36F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018B058_EC3718.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018B5C4_EC3C84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018C114_EC47D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018C1C0_EC4880.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018C644_EC4D04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018CB90_EC5250.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018CC30_EC52F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018CD9C_EC545C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018D2B8_EC5978.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018D510_EC5BD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018D80C_EC5ECC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018DDB8_EC6478.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018DF0C_EC65CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018E058_EC6718.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018E200_EC68C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018E67C_EC6D3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018EA78_EC7138.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018EDC8_EC7488.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018F438_EC7AF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018F680_EC7D40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018F77C_EC7E3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018F85C_EC7F1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018F8E4_EC7FA4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018FC14_EC82D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018FD08_EC83C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8018FF74_EC8634.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80190144_EC8804.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_801903B8_EC8A78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_801906A0_EC8D60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80190950_EC9010.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80190A98_EC9158.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80190B30_EC91F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80190C9C_EC935C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80190E64_EC9524.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80190EA4_EC9564.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80190FD0_EC9690.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_8019111C_EC97DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_801912A0_EC9960.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80191320_EC99E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_801914AC_EC9B6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80191674_EC9D34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80191798_EC9E58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_80191844_EC9F04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_801918FC_EC9FBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/segment_EBFBE0/EBFCA0/func_801919C4_ECA084.s")
