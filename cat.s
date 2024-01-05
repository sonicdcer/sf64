glabel func_E16C50_80187530
/* E16C60 80187530 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E16C64 80187534 AFA60020 */  sw          $a2, 0x20($sp)
/* E16C68 80187538 00803025 */  or          $a2, $a0, $zero
/* E16C6C 8018753C AFBF0014 */  sw          $ra, 0x14($sp)
/* E16C70 80187540 AFA40018 */  sw          $a0, 0x18($sp)
/* E16C74 80187544 AFA5001C */  sw          $a1, 0x1C($sp)
/* E16C78 80187548 AFA70024 */  sw          $a3, 0x24($sp)
/* E16C7C 8018754C 00C02025 */  or          $a0, $a2, $zero
/* E16C80 80187550 0C0184F1 */  jal         Object_2F4_Initialize
/* E16C84 80187554 AFA60018 */   sw         $a2, 0x18($sp)
/* E16C88 80187558 8FA60018 */  lw          $a2, 0x18($sp)
/* E16C8C 8018755C 240E0001 */  addiu       $t6, $zero, 0x1
/* E16C90 80187560 240F00BF */  addiu       $t7, $zero, 0xBF
/* E16C94 80187564 A0CE0000 */  sb          $t6, 0x0($a2)
/* E16C98 80187568 A4CF0002 */  sh          $t7, 0x2($a2)
/* E16C9C 8018756C C7A4001C */  lwc1        $ft0, 0x1C($sp)
/* E16CA0 80187570 24190014 */  addiu       $t9, $zero, 0x14
/* E16CA4 80187574 31E5FFFF */  andi        $a1, $t7, 0xFFFF
/* E16CA8 80187578 E4C40004 */  swc1        $ft0, 0x4($a2)
/* E16CAC 8018757C C7A60020 */  lwc1        $ft1, 0x20($sp)
/* E16CB0 80187580 24C4001C */  addiu       $a0, $a2, 0x1C
/* E16CB4 80187584 E4C60008 */  swc1        $ft1, 0x8($a2)
/* E16CB8 80187588 C7A80024 */  lwc1        $ft2, 0x24($sp)
/* E16CBC 8018758C E4C8000C */  swc1        $ft2, 0xC($a2)
/* E16CC0 80187590 C7AA002C */  lwc1        $ft3, 0x2C($sp)
/* E16CC4 80187594 E4CA0010 */  swc1        $ft3, 0x10($a2)
/* E16CC8 80187598 C7B00030 */  lwc1        $ft4, 0x30($sp)
/* E16CCC 8018759C E4D00014 */  swc1        $ft4, 0x14($a2)
/* E16CD0 801875A0 8FB80034 */  lw          $t8, 0x34($sp)
/* E16CD4 801875A4 A4D900BE */  sh          $t9, 0xBE($a2)
/* E16CD8 801875A8 A4D800BC */  sh          $t8, 0xBC($a2)
/* E16CDC 801875AC 8FA80038 */  lw          $t0, 0x38($sp)
/* E16CE0 801875B0 A4C800B4 */  sh          $t0, 0xB4($a2)
/* E16CE4 801875B4 C7B20028 */  lwc1        $ft5, 0x28($sp)
/* E16CE8 801875B8 0C0184AE */  jal         Object_SetInfo
/* E16CEC 801875BC E4D20128 */   swc1       $ft5, 0x128($a2)
/* E16CF0 801875C0 8FA60018 */  lw          $a2, 0x18($sp)
/* E16CF4 801875C4 3C052903 */  lui         $a1, (0x2903201B >> 16)
/* E16CF8 801875C8 34A5201B */  ori         $a1, $a1, (0x2903201B & 0xFFFF)
/* E16CFC 801875CC 0C01E9BC */  jal         func_8007A6F0
/* E16D00 801875D0 24C40004 */   addiu      $a0, $a2, 0x4
/* E16D04 801875D4 8FBF0014 */  lw          $ra, 0x14($sp)
/* E16D08 801875D8 27BD0018 */  addiu       $sp, $sp, 0x18
/* E16D0C 801875DC 03E00008 */  jr          $ra
/* E16D10 801875E0 00000000 */   nop
glabel func_E16C50_801875E4
/* E16D14 801875E4 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* E16D18 801875E8 AFBF002C */  sw          $ra, 0x2C($sp)
/* E16D1C 801875EC AFA60040 */  sw          $a2, 0x40($sp)
/* E16D20 801875F0 AFA70044 */  sw          $a3, 0x44($sp)
/* E16D24 801875F4 3C048016 */  lui         $a0, %hi(gObjects2F4)
/* E16D28 801875F8 24843FE0 */  addiu       $a0, $a0, %lo(gObjects2F4)
/* E16D2C 801875FC 00001025 */  or          $v0, $zero, $zero
/* E16D30 80187600 2403003C */  addiu       $v1, $zero, 0x3C
.LE16C50_80187604:
/* E16D34 80187604 908E0000 */  lbu         $t6, 0x0($a0)
/* E16D38 80187608 55C00016 */  bnel        $t6, $zero, .LE16C50_80187664
/* E16D3C 8018760C 24420001 */   addiu      $v0, $v0, 0x1
/* E16D40 80187610 C7A40044 */  lwc1        $ft0, 0x44($sp)
/* E16D44 80187614 C7A60048 */  lwc1        $ft1, 0x48($sp)
/* E16D48 80187618 C7A8004C */  lwc1        $ft2, 0x4C($sp)
/* E16D4C 8018761C 8FAF0050 */  lw          $t7, 0x50($sp)
/* E16D50 80187620 8FB80054 */  lw          $t8, 0x54($sp)
/* E16D54 80187624 44056000 */  mfc1        $a1, $fa0
/* E16D58 80187628 44067000 */  mfc1        $a2, $fa1
/* E16D5C 8018762C 8FA70040 */  lw          $a3, 0x40($sp)
/* E16D60 80187630 AFA20034 */  sw          $v0, 0x34($sp)
/* E16D64 80187634 E7A40010 */  swc1        $ft0, 0x10($sp)
/* E16D68 80187638 E7A60014 */  swc1        $ft1, 0x14($sp)
/* E16D6C 8018763C E7A80018 */  swc1        $ft2, 0x18($sp)
/* E16D70 80187640 AFAF001C */  sw          $t7, 0x1C($sp)
/* E16D74 80187644 0C061D4C */  jal         func_E16C50_80187530
/* E16D78 80187648 AFB80020 */   sw         $t8, 0x20($sp)
/* E16D7C 8018764C 8FA20034 */  lw          $v0, 0x34($sp)
/* E16D80 80187650 3C01801C */  lui         $at, %hi(D_E16C50_801C2250 + 0x2C)
/* E16D84 80187654 24590001 */  addiu       $t9, $v0, 0x1
/* E16D88 80187658 10000004 */  b           .LE16C50_8018766C
/* E16D8C 8018765C AC39227C */   sw         $t9, %lo(D_E16C50_801C2250 + 0x2C)($at)
/* E16D90 80187660 24420001 */  addiu       $v0, $v0, 0x1
.LE16C50_80187664:
/* E16D94 80187664 1443FFE7 */  bne         $v0, $v1, .LE16C50_80187604
/* E16D98 80187668 248402F4 */   addiu      $a0, $a0, 0x2F4
.LE16C50_8018766C:
/* E16D9C 8018766C 8FBF002C */  lw          $ra, 0x2C($sp)
/* E16DA0 80187670 27BD0038 */  addiu       $sp, $sp, 0x38
/* E16DA4 80187674 03E00008 */  jr          $ra
/* E16DA8 80187678 00000000 */   nop
glabel func_E16C50_8018767C
/* E16DAC 8018767C 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E16DB0 80187680 AFBF0014 */  sw          $ra, 0x14($sp)
/* E16DB4 80187684 00803025 */  or          $a2, $a0, $zero
/* E16DB8 80187688 00C02025 */  or          $a0, $a2, $zero
/* E16DBC 8018768C 0C01851D */  jal         Object_8C_Initialize
/* E16DC0 80187690 AFA60018 */   sw         $a2, 0x18($sp)
/* E16DC4 80187694 8FA60018 */  lw          $a2, 0x18($sp)
/* E16DC8 80187698 3C028017 */  lui         $v0, %hi(gObjects408)
/* E16DCC 8018769C 240E0001 */  addiu       $t6, $zero, 0x1
/* E16DD0 801876A0 240F018B */  addiu       $t7, $zero, 0x18B
/* E16DD4 801876A4 2442F110 */  addiu       $v0, $v0, %lo(gObjects408)
/* E16DD8 801876A8 A0CE0000 */  sb          $t6, 0x0($a2)
/* E16DDC 801876AC A4CF0002 */  sh          $t7, 0x2($a2)
/* E16DE0 801876B0 C4440004 */  lwc1        $ft0, 0x4($v0)
/* E16DE4 801876B4 3C01437A */  lui         $at, (0x437A0000 >> 16)
/* E16DE8 801876B8 44815000 */  mtc1        $at, $ft3
/* E16DEC 801876BC E4C40004 */  swc1        $ft0, 0x4($a2)
/* E16DF0 801876C0 C4460008 */  lwc1        $ft1, 0x8($v0)
/* E16DF4 801876C4 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E16DF8 801876C8 44819000 */  mtc1        $at, $ft5
/* E16DFC 801876CC E4C60008 */  swc1        $ft1, 0x8($a2)
/* E16E00 801876D0 C448000C */  lwc1        $ft2, 0xC($v0)
/* E16E04 801876D4 24180008 */  addiu       $t8, $zero, 0x8
/* E16E08 801876D8 31E5FFFF */  andi        $a1, $t7, 0xFFFF
/* E16E0C 801876DC 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E16E10 801876E0 A4D8004E */  sh          $t8, 0x4E($a2)
/* E16E14 801876E4 24C4001C */  addiu       $a0, $a2, 0x1C
/* E16E18 801876E8 E4D20070 */  swc1        $ft5, 0x70($a2)
/* E16E1C 801876EC 0C0184AE */  jal         Object_SetInfo
/* E16E20 801876F0 E4D0000C */   swc1       $ft4, 0xC($a2)
/* E16E24 801876F4 8FBF0014 */  lw          $ra, 0x14($sp)
/* E16E28 801876F8 27BD0018 */  addiu       $sp, $sp, 0x18
/* E16E2C 801876FC 03E00008 */  jr          $ra
/* E16E30 80187700 00000000 */   nop
glabel func_E16C50_80187704
/* E16E34 80187704 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E16E38 80187708 AFBF0014 */  sw          $ra, 0x14($sp)
/* E16E3C 8018770C 3C048017 */  lui         $a0, %hi(gObjects8C)
/* E16E40 80187710 3C028017 */  lui         $v0, %hi(gItems)
/* E16E44 80187714 244237E0 */  addiu       $v0, $v0, %lo(gItems)
/* E16E48 80187718 24840130 */  addiu       $a0, $a0, %lo(gObjects8C)
/* E16E4C 8018771C 908E0000 */  lbu         $t6, 0x0($a0)
.LE16C50_80187720:
/* E16E50 80187720 55C00006 */  bnel        $t6, $zero, .LE16C50_8018773C
/* E16E54 80187724 2484008C */   addiu      $a0, $a0, 0x8C
/* E16E58 80187728 0C061D9F */  jal         func_E16C50_8018767C
/* E16E5C 8018772C 00000000 */   nop
/* E16E60 80187730 10000005 */  b           .LE16C50_80187748
/* E16E64 80187734 8FBF0014 */   lw         $ra, 0x14($sp)
/* E16E68 80187738 2484008C */  addiu       $a0, $a0, 0x8C
.LE16C50_8018773C:
/* E16E6C 8018773C 5482FFF8 */  bnel        $a0, $v0, .LE16C50_80187720
/* E16E70 80187740 908E0000 */   lbu        $t6, 0x0($a0)
/* E16E74 80187744 8FBF0014 */  lw          $ra, 0x14($sp)
.LE16C50_80187748:
/* E16E78 80187748 27BD0018 */  addiu       $sp, $sp, 0x18
/* E16E7C 8018774C 03E00008 */  jr          $ra
/* E16E80 80187750 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C0910
/* E50040 801C0910 46C35000 */ .float 25000

dlabel D_E16C50_801C0914
/* E50044 801C0914 3F99999A */ .float 1.200000048

dlabel D_E16C50_801C0918
/* E50048 801C0918 C4D48000 */ .float -1700


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_80187754
/* E16E84 80187754 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E16E88 80187758 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E16E8C 8018775C AFB00020 */  sw          $s0, 0x20($sp)
/* E16E90 80187760 44810000 */  mtc1        $at, $fv0
/* E16E94 80187764 00808025 */  or          $s0, $a0, $zero
/* E16E98 80187768 AFBF0024 */  sw          $ra, 0x24($sp)
/* E16E9C 8018776C 24060003 */  addiu       $a2, $zero, 0x3
/* E16EA0 80187770 240E0001 */  addiu       $t6, $zero, 0x1
/* E16EA4 80187774 3C018018 */  lui         $at, %hi(D_80178284)
/* E16EA8 80187778 AC2E8284 */  sw          $t6, %lo(D_80178284)($at)
/* E16EAC 8018777C 3C01801C */  lui         $at, %hi(D_E16C50_801C0910)
/* E16EB0 80187780 C4240910 */  lwc1        $ft0, %lo(D_E16C50_801C0910)($at)
/* E16EB4 80187784 3C018016 */  lui         $at, %hi(D_80161A44)
/* E16EB8 80187788 240F030C */  addiu       $t7, $zero, 0x30C
/* E16EBC 8018778C E4241A44 */  swc1        $ft0, %lo(D_80161A44)($at)
/* E16EC0 80187790 3C018016 */  lui         $at, %hi(D_801613A0)
/* E16EC4 80187794 AC2013A0 */  sw          $zero, %lo(D_801613A0)($at)
/* E16EC8 80187798 A60F0060 */  sh          $t7, 0x60($s0)
/* E16ECC 8018779C E60000E0 */  swc1        $fv0, 0xE0($s0)
/* E16ED0 801877A0 E6000160 */  swc1        $fv0, 0x160($s0)
/* E16ED4 801877A4 3C01801C */  lui         $at, %hi(D_E16C50_801C0914)
/* E16ED8 801877A8 C4260914 */  lwc1        $ft1, %lo(D_E16C50_801C0914)($at)
/* E16EDC 801877AC 24180028 */  addiu       $t8, $zero, 0x28
/* E16EE0 801877B0 A61800AA */  sh          $t8, 0xAA($s0)
/* E16EE4 801877B4 860300AA */  lh          $v1, 0xAA($s0)
/* E16EE8 801877B8 A60600B0 */  sh          $a2, 0xB0($s0)
/* E16EEC 801877BC 3C02801C */  lui         $v0, %hi(D_E16C50_801C2250)
/* E16EF0 801877C0 A60300A8 */  sh          $v1, 0xA8($s0)
/* E16EF4 801877C4 A60300A6 */  sh          $v1, 0xA6($s0)
/* E16EF8 801877C8 860300B0 */  lh          $v1, 0xB0($s0)
/* E16EFC 801877CC A60600BA */  sh          $a2, 0xBA($s0)
/* E16F00 801877D0 24422250 */  addiu       $v0, $v0, %lo(D_E16C50_801C2250)
/* E16F04 801877D4 A60300AE */  sh          $v1, 0xAE($s0)
/* E16F08 801877D8 A60300AC */  sh          $v1, 0xAC($s0)
/* E16F0C 801877DC 3C03801C */  lui         $v1, %hi(D_E16C50_801C22F0)
/* E16F10 801877E0 246322F0 */  addiu       $v1, $v1, %lo(D_E16C50_801C22F0)
/* E16F14 801877E4 E6060164 */  swc1        $ft1, 0x164($s0)
.LE16C50_801877E8:
/* E16F18 801877E8 24420010 */  addiu       $v0, $v0, 0x10
/* E16F1C 801877EC AC40FFF4 */  sw          $zero, -0xC($v0)
/* E16F20 801877F0 AC40FFF8 */  sw          $zero, -0x8($v0)
/* E16F24 801877F4 AC40FFFC */  sw          $zero, -0x4($v0)
/* E16F28 801877F8 1443FFFB */  bne         $v0, $v1, .LE16C50_801877E8
/* E16F2C 801877FC AC40FFF0 */   sw         $zero, -0x10($v0)
/* E16F30 80187800 3C01437F */  lui         $at, (0x437F0000 >> 16)
/* E16F34 80187804 44816000 */  mtc1        $at, $fa0
/* E16F38 80187808 3C02801C */  lui         $v0, %hi(D_E16C50_801C22F0)
/* E16F3C 8018780C 244222F0 */  addiu       $v0, $v0, %lo(D_E16C50_801C22F0)
/* E16F40 80187810 E44C002C */  swc1        $fa0, 0x2C($v0)
/* E16F44 80187814 C442002C */  lwc1        $fv1, 0x2C($v0)
/* E16F48 80187818 44804000 */  mtc1        $zero, $ft2
/* E16F4C 8018781C 24040020 */  addiu       $a0, $zero, 0x20
/* E16F50 80187820 E4420030 */  swc1        $fv1, 0x30($v0)
/* E16F54 80187824 E4420028 */  swc1        $fv1, 0x28($v0)
/* E16F58 80187828 E4420024 */  swc1        $fv1, 0x24($v0)
/* E16F5C 8018782C E4480034 */  swc1        $ft2, 0x34($v0)
/* E16F60 80187830 A60000C2 */  sh          $zero, 0xC2($s0)
/* E16F64 80187834 860300C2 */  lh          $v1, 0xC2($s0)
/* E16F68 80187838 241900FF */  addiu       $t9, $zero, 0xFF
/* E16F6C 8018783C A60400B4 */  sh          $a0, 0xB4($s0)
/* E16F70 80187840 A60400B6 */  sh          $a0, 0xB6($s0)
/* E16F74 80187844 A61900B8 */  sh          $t9, 0xB8($s0)
/* E16F78 80187848 3C01801C */  lui         $at, %hi(D_E16C50_801C0918)
/* E16F7C 8018784C E60C014C */  swc1        $fa0, 0x14C($s0)
/* E16F80 80187850 A60300C0 */  sh          $v1, 0xC0($s0)
/* E16F84 80187854 A60300BE */  sh          $v1, 0xBE($s0)
/* E16F88 80187858 C42A0918 */  lwc1        $ft3, %lo(D_E16C50_801C0918)($at)
/* E16F8C 8018785C 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E16F90 80187860 44818000 */  mtc1        $at, $ft4
/* E16F94 80187864 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E16F98 80187868 44819000 */  mtc1        $at, $ft5
/* E16F9C 8018786C 3C014343 */  lui         $at, (0x43430000 >> 16)
/* E16FA0 80187870 44812000 */  mtc1        $at, $ft0
/* E16FA4 80187874 8E090028 */  lw          $t1, 0x28($s0)
/* E16FA8 80187878 240801F4 */  addiu       $t0, $zero, 0x1F4
/* E16FAC 8018787C A6080050 */  sh          $t0, 0x50($s0)
/* E16FB0 80187880 E60A00E4 */  swc1        $ft3, 0xE4($s0)
/* E16FB4 80187884 E61000EC */  swc1        $ft4, 0xEC($s0)
/* E16FB8 80187888 E6120158 */  swc1        $ft5, 0x158($s0)
/* E16FBC 8018788C E5240050 */  swc1        $ft0, 0x50($t1)
/* E16FC0 80187890 8E050028 */  lw          $a1, 0x28($s0)
/* E16FC4 80187894 3C014313 */  lui         $at, (0x43130000 >> 16)
/* E16FC8 80187898 44813000 */  mtc1        $at, $ft1
/* E16FCC 8018789C C4A00050 */  lwc1        $fv0, 0x50($a1)
/* E16FD0 801878A0 3C014319 */  lui         $at, (0x43190000 >> 16)
/* E16FD4 801878A4 44814000 */  mtc1        $at, $ft2
/* E16FD8 801878A8 E4A00038 */  swc1        $fv0, 0x38($a1)
/* E16FDC 801878AC 8E0A0028 */  lw          $t2, 0x28($s0)
/* E16FE0 801878B0 3C041028 */  lui         $a0, (0x102800FF >> 16)
/* E16FE4 801878B4 348400FF */  ori         $a0, $a0, (0x102800FF & 0xFFFF)
/* E16FE8 801878B8 E5400020 */  swc1        $fv0, 0x20($t2)
/* E16FEC 801878BC 8E0B0028 */  lw          $t3, 0x28($s0)
/* E16FF0 801878C0 E5660058 */  swc1        $ft1, 0x58($t3)
/* E16FF4 801878C4 8E050028 */  lw          $a1, 0x28($s0)
/* E16FF8 801878C8 C4A00058 */  lwc1        $fv0, 0x58($a1)
/* E16FFC 801878CC E4A00040 */  swc1        $fv0, 0x40($a1)
/* E17000 801878D0 8E0C0028 */  lw          $t4, 0x28($s0)
/* E17004 801878D4 E5800028 */  swc1        $fv0, 0x28($t4)
/* E17008 801878D8 8E0D0028 */  lw          $t5, 0x28($s0)
/* E1700C 801878DC E5A80060 */  swc1        $ft2, 0x60($t5)
/* E17010 801878E0 8E050028 */  lw          $a1, 0x28($s0)
/* E17014 801878E4 C4A00060 */  lwc1        $fv0, 0x60($a1)
/* E17018 801878E8 E4A00048 */  swc1        $fv0, 0x48($a1)
/* E1701C 801878EC 8E0E0028 */  lw          $t6, 0x28($s0)
/* E17020 801878F0 0C0060BD */  jal         func_800182F4
/* E17024 801878F4 E5C00030 */   swc1       $fv0, 0x30($t6)
/* E17028 801878F8 3C041128 */  lui         $a0, (0x112800FF >> 16)
/* E1702C 801878FC 0C0060BD */  jal         func_800182F4
/* E17030 80187900 348400FF */   ori        $a0, $a0, (0x112800FF & 0xFFFF)
/* E17034 80187904 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E17038 80187908 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E1703C 8018790C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E17040 80187910 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E17044 80187914 3C041100 */  lui         $a0, (0x11002050 >> 16)
/* E17048 80187918 34842050 */  ori         $a0, $a0, (0x11002050 & 0xFFFF)
/* E1704C 8018791C AFAF0014 */  sw          $t7, 0x14($sp)
/* E17050 80187920 AFA70010 */  sw          $a3, 0x10($sp)
/* E17054 80187924 260503FC */  addiu       $a1, $s0, 0x3FC
/* E17058 80187928 0C006486 */  jal         Audio_PlaySfx
/* E1705C 8018792C 24060004 */   addiu      $a2, $zero, 0x4
/* E17060 80187930 8FBF0024 */  lw          $ra, 0x24($sp)
/* E17064 80187934 8FB00020 */  lw          $s0, 0x20($sp)
/* E17068 80187938 27BD0028 */  addiu       $sp, $sp, 0x28
/* E1706C 8018793C 03E00008 */  jr          $ra
/* E17070 80187940 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C091C
/* E5004C 801C091C 40490FDB */ .float 3.141592741

dlabel D_E16C50_801C0920
/* E50050 801C0920 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0924
/* E50054 801C0924 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0928
/* E50058 801C0928 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C092C
/* E5005C 801C092C 3827C5AC */ .float 3.999999899e-05

dlabel D_E16C50_801C0930
/* E50060 801C0930 C69C4000 */ .float -20000

dlabel D_E16C50_801C0934
/* E50064 801C0934 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C0938
/* E50068 801C0938 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C093C
/* E5006C 801C093C 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0940
/* E50070 801C0940 3F333333 */ .float 0.6999999881

dlabel D_E16C50_801C0944
/* E50074 801C0944 3F333333 */ .float 0.6999999881

dlabel D_E16C50_801C0948
/* E50078 801C0948 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C094C
/* E5007C 801C094C 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0950
/* E50080 801C0950 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0954
/* E50084 801C0954 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0958
/* E50088 801C0958 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C095C
/* E5008C 801C095C 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0960
/* E50090 801C0960 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0964
/* E50094 801C0964 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0968
/* E50098 801C0968 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C096C
/* E5009C 801C096C 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0970
/* E500A0 801C0970 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0974
/* E500A4 801C0974 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0978
/* E500A8 801C0978 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C097C
/* E500AC 801C097C 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0980
/* E500B0 801C0980 C4D48000 */ .float -1700

dlabel jtbl_E16C50_801C0984
/* E500B4 801C0984 8018886C */ .word .LE16C50_8018886C
/* E500B8 801C0988 80188B98 */ .word .LE16C50_80188B98
/* E500BC 801C098C 80188EBC */ .word .LE16C50_80188EBC
/* E500C0 801C0990 80189180 */ .word .LE16C50_80189180
/* E500C4 801C0994 801893AC */ .word .LE16C50_801893AC
/* E500C8 801C0998 80189674 */ .word .LE16C50_80189674
/* E500CC 801C099C 80189774 */ .word .LE16C50_80189774
/* E500D0 801C09A0 80189898 */ .word .LE16C50_80189898
/* E500D4 801C09A4 80189A60 */ .word .LE16C50_80189A60
/* E500D8 801C09A8 80189AB4 */ .word .LE16C50_80189AB4
/* E500DC 801C09AC 80189D60 */ .word .LE16C50_80189D60
/* E500E0 801C09B0 80189E14 */ .word .LE16C50_80189E14

dlabel D_E16C50_801C09B4
/* E500E4 801C09B4 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C09B8
/* E500E8 801C09B8 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C09BC
/* E500EC 801C09BC 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C09C0
/* E500F0 801C09C0 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C09C4
/* E500F4 801C09C4 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C09C8
/* E500F8 801C09C8 453B8000 */ .float 3000

dlabel D_E16C50_801C09CC
/* E500FC 801C09CC C5674000 */ .float -3700

dlabel D_E16C50_801C09D0
/* E50100 801C09D0 3F99999A */ .float 1.200000048

dlabel D_E16C50_801C09D4
/* E50104 801C09D4 C4D48000 */ .float -1700

dlabel D_E16C50_801C09D8
/* E50108 801C09D8 C5674000 */ .float -3700

dlabel D_E16C50_801C09DC
/* E5010C 801C09DC 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C09E0
/* E50110 801C09E0 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C09E4
/* E50114 801C09E4 C5674000 */ .float -3700

dlabel D_E16C50_801C09E8
/* E50118 801C09E8 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C09EC
/* E5011C 801C09EC 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C09F0
/* E50120 801C09F0 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C09F4
/* E50124 801C09F4 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C09F8
/* E50128 801C09F8 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C09FC
/* E5012C 801C09FC 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0A00
/* E50130 801C0A00 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0A04
/* E50134 801C0A04 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0A08
/* E50138 801C0A08 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0A0C
/* E5013C 801C0A0C 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C0A10
/* E50140 801C0A10 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C0A14
/* E50144 801C0A14 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0A18
/* E50148 801C0A18 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0A1C
/* E5014C 801C0A1C 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0A20
/* E50150 801C0A20 3E4CCCCD */ .float 0.200000003

dlabel D_E16C50_801C0A24
/* E50154 801C0A24 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0A28
/* E50158 801C0A28 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0A2C
/* E5015C 801C0A2C 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0A30
/* E50160 801C0A30 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C0A34
/* E50164 801C0A34 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0A38
/* E50168 801C0A38 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0A3C
/* E5016C 801C0A3C 3A83126F */ .float 0.001000000047


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_80187944
/* E17074 80187944 27BDFEC8 */  addiu       $sp, $sp, -0x138
/* E17078 80187948 AFB10044 */  sw          $s1, 0x44($sp)
/* E1707C 8018794C 00808825 */  or          $s1, $a0, $zero
/* E17080 80187950 AFBF004C */  sw          $ra, 0x4C($sp)
/* E17084 80187954 AFB20048 */  sw          $s2, 0x48($sp)
/* E17088 80187958 AFB00040 */  sw          $s0, 0x40($sp)
/* E1708C 8018795C F7B80038 */  sdc1        $fs2, 0x38($sp)
/* E17090 80187960 F7B60030 */  sdc1        $fs1, 0x30($sp)
/* E17094 80187964 F7B40028 */  sdc1        $fs0, 0x28($sp)
/* E17098 80187968 3C0E8016 */  lui         $t6, %hi(D_801613A0)
/* E1709C 8018796C 8DCE13A0 */  lw          $t6, %lo(D_801613A0)($t6)
/* E170A0 80187970 3C018016 */  lui         $at, %hi(D_801613A0)
/* E170A4 80187974 25CF0001 */  addiu       $t7, $t6, 0x1
/* E170A8 80187978 AC2F13A0 */  sw          $t7, %lo(D_801613A0)($at)
/* E170AC 8018797C 8622004E */  lh          $v0, 0x4E($s1)
/* E170B0 80187980 28410006 */  slti        $at, $v0, 0x6
/* E170B4 80187984 14200004 */  bnez        $at, .LE16C50_80187998
/* E170B8 80187988 28410008 */   slti       $at, $v0, 0x8
/* E170BC 8018798C 1420002C */  bnez        $at, .LE16C50_80187A40
/* E170C0 80187990 2841000C */   slti       $at, $v0, 0xC
/* E170C4 80187994 1020002A */  beqz        $at, .LE16C50_80187A40
.LE16C50_80187998:
/* E170C8 80187998 3C108018 */   lui        $s0, %hi(gPlayer)
/* E170CC 8018799C 8E108280 */  lw          $s0, %lo(gPlayer)($s0)
/* E170D0 801879A0 3C018017 */  lui         $at, %hi(D_80177D20)
/* E170D4 801879A4 C42A7D20 */  lwc1        $ft3, %lo(D_80177D20)($at)
/* E170D8 801879A8 C6260004 */  lwc1        $ft1, 0x4($s1)
/* E170DC 801879AC C628000C */  lwc1        $ft2, 0xC($s1)
/* E170E0 801879B0 C6040040 */  lwc1        $ft0, 0x40($s0)
/* E170E4 801879B4 460A4480 */  add.s       $ft5, $ft2, $ft3
/* E170E8 801879B8 46062301 */  sub.s       $fa0, $ft0, $ft1
/* E170EC 801879BC C6040048 */  lwc1        $ft0, 0x48($s0)
/* E170F0 801879C0 0C001440 */  jal         Math_Atan2F
/* E170F4 801879C4 46122381 */   sub.s      $fa1, $ft0, $ft5
/* E170F8 801879C8 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E170FC 801879CC 4481A000 */  mtc1        $at, $fs0
/* E17100 801879D0 3C01801C */  lui         $at, %hi(D_E16C50_801C091C)
/* E17104 801879D4 C436091C */  lwc1        $fs1, %lo(D_E16C50_801C091C)($at)
/* E17108 801879D8 46140182 */  mul.s       $ft1, $fv0, $fs0
/* E1710C 801879DC 3C108018 */  lui         $s0, %hi(gPlayer)
/* E17110 801879E0 3C018017 */  lui         $at, %hi(D_80177D20)
/* E17114 801879E4 C6240004 */  lwc1        $ft0, 0x4($s1)
/* E17118 801879E8 C632000C */  lwc1        $ft5, 0xC($s1)
/* E1711C 801879EC 46163203 */  div.s       $ft2, $ft1, $fs1
/* E17120 801879F0 E6280014 */  swc1        $ft2, 0x14($s1)
/* E17124 801879F4 8E108280 */  lw          $s0, %lo(gPlayer)($s0)
/* E17128 801879F8 C4267D20 */  lwc1        $ft1, %lo(D_80177D20)($at)
/* E1712C 801879FC C60A0040 */  lwc1        $ft3, 0x40($s0)
/* E17130 80187A00 46069200 */  add.s       $ft2, $ft5, $ft1
/* E17134 80187A04 C6060044 */  lwc1        $ft1, 0x44($s0)
/* E17138 80187A08 46045081 */  sub.s       $fv1, $ft3, $ft0
/* E1713C 80187A0C C60A0048 */  lwc1        $ft3, 0x48($s0)
/* E17140 80187A10 46085401 */  sub.s       $ft4, $ft3, $ft2
/* E17144 80187A14 46021102 */  mul.s       $ft0, $fv1, $fv1
/* E17148 80187A18 C62A0008 */  lwc1        $ft3, 0x8($s1)
/* E1714C 80187A1C 46108482 */  mul.s       $ft5, $ft4, $ft4
/* E17150 80187A20 460A3301 */  sub.s       $fa0, $ft1, $ft3
/* E17154 80187A24 46122000 */  add.s       $fv0, $ft0, $ft5
/* E17158 80187A28 0C001440 */  jal         Math_Atan2F
/* E1715C 80187A2C 46000384 */   sqrt.s     $fa1, $fv0
/* E17160 80187A30 46000207 */  neg.s       $ft2, $fv0
/* E17164 80187A34 46144102 */  mul.s       $ft0, $ft2, $fs0
/* E17168 80187A38 46162483 */  div.s       $ft5, $ft0, $fs1
/* E1716C 80187A3C E6320010 */  swc1        $ft5, 0x10($s1)
.LE16C50_80187A40:
/* E17170 80187A40 3C01801C */  lui         $at, %hi(D_E16C50_801C0920)
/* E17174 80187A44 C42A0920 */  lwc1        $ft3, %lo(D_E16C50_801C0920)($at)
/* E17178 80187A48 C6260014 */  lwc1        $ft1, 0x14($s1)
/* E1717C 80187A4C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E17180 80187A50 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E17184 80187A54 460A3202 */  mul.s       $ft2, $ft1, $ft3
/* E17188 80187A58 00003025 */  or          $a2, $zero, $zero
/* E1718C 80187A5C 44054000 */  mfc1        $a1, $ft2
/* E17190 80187A60 0C0017A4 */  jal         Matrix_RotateY
/* E17194 80187A64 00000000 */   nop
/* E17198 80187A68 3C01801C */  lui         $at, %hi(D_E16C50_801C0924)
/* E1719C 80187A6C C4320924 */  lwc1        $ft5, %lo(D_E16C50_801C0924)($at)
/* E171A0 80187A70 C6240010 */  lwc1        $ft0, 0x10($s1)
/* E171A4 80187A74 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E171A8 80187A78 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E171AC 80187A7C 46122182 */  mul.s       $ft1, $ft0, $ft5
/* E171B0 80187A80 24060001 */  addiu       $a2, $zero, 0x1
/* E171B4 80187A84 44053000 */  mfc1        $a1, $ft1
/* E171B8 80187A88 0C001751 */  jal         Matrix_RotateX
/* E171BC 80187A8C 00000000 */   nop
/* E171C0 80187A90 3C01801C */  lui         $at, %hi(D_E16C50_801C0928)
/* E171C4 80187A94 C4280928 */  lwc1        $ft2, %lo(D_E16C50_801C0928)($at)
/* E171C8 80187A98 C62A0018 */  lwc1        $ft3, 0x18($s1)
/* E171CC 80187A9C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E171D0 80187AA0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E171D4 80187AA4 46085102 */  mul.s       $ft0, $ft3, $ft2
/* E171D8 80187AA8 24060001 */  addiu       $a2, $zero, 0x1
/* E171DC 80187AAC 44052000 */  mfc1        $a1, $ft0
/* E171E0 80187AB0 0C0017F8 */  jal         Matrix_RotateZ
/* E171E4 80187AB4 00000000 */   nop
/* E171E8 80187AB8 82380062 */  lb          $t8, 0x62($s1)
/* E171EC 80187ABC 530000E6 */  beql        $t8, $zero, .LE16C50_80187E58
/* E171F0 80187AC0 3C013F00 */   lui        $at, (0x3F000000 >> 16)
/* E171F4 80187AC4 86390060 */  lh          $t9, 0x60($s1)
/* E171F8 80187AC8 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E171FC 80187ACC 5B2000E2 */  blezl       $t9, .LE16C50_80187E58
/* E17200 80187AD0 3C013F00 */   lui        $at, (0x3F000000 >> 16)
/* E17204 80187AD4 44819000 */  mtc1        $at, $ft5
/* E17208 80187AD8 C62600D8 */  lwc1        $ft1, 0xD8($s1)
/* E1720C 80187ADC A2200062 */  sb          $zero, 0x62($s1)
/* E17210 80187AE0 4606903C */  c.lt.s      $ft5, $ft1
/* E17214 80187AE4 00000000 */  nop
/* E17218 80187AE8 450200C3 */  bc1fl       .LE16C50_80187DF8
/* E1721C 80187AEC 86220066 */   lh         $v0, 0x66($s1)
/* E17220 80187AF0 86280066 */  lh          $t0, 0x66($s1)
/* E17224 80187AF4 550000B3 */  bnel        $t0, $zero, .LE16C50_80187DC4
/* E17228 80187AF8 86220066 */   lh         $v0, 0x66($s1)
/* E1722C 80187AFC 862900BA */  lh          $t1, 0xBA($s1)
/* E17230 80187B00 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E17234 80187B04 552000AF */  bnel        $t1, $zero, .LE16C50_80187DC4
/* E17238 80187B08 86220066 */   lh         $v0, 0x66($s1)
/* E1723C 80187B0C C62A014C */  lwc1        $ft3, 0x14C($s1)
/* E17240 80187B10 44814000 */  mtc1        $at, $ft2
/* E17244 80187B14 00000000 */  nop
/* E17248 80187B18 4608503C */  c.lt.s      $ft3, $ft2
/* E1724C 80187B1C 00000000 */  nop
/* E17250 80187B20 450200A8 */  bc1fl       .LE16C50_80187DC4
/* E17254 80187B24 86220066 */   lh         $v0, 0x66($s1)
/* E17258 80187B28 862B0060 */  lh          $t3, 0x60($s1)
/* E1725C 80187B2C 862C0064 */  lh          $t4, 0x64($s1)
/* E17260 80187B30 240A000F */  addiu       $t2, $zero, 0xF
/* E17264 80187B34 3C042903 */  lui         $a0, (0x29034003 >> 16)
/* E17268 80187B38 016C6823 */  subu        $t5, $t3, $t4
/* E1726C 80187B3C A62D0060 */  sh          $t5, 0x60($s1)
/* E17270 80187B40 862E0060 */  lh          $t6, 0x60($s1)
/* E17274 80187B44 A62A005C */  sh          $t2, 0x5C($s1)
/* E17278 80187B48 34844003 */  ori         $a0, $a0, (0x29034003 & 0xFFFF)
/* E1727C 80187B4C 29C10186 */  slti        $at, $t6, 0x186
/* E17280 80187B50 1020000F */  beqz        $at, .LE16C50_80187B90
/* E17284 80187B54 262503FC */   addiu      $a1, $s1, 0x3FC
/* E17288 80187B58 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1728C 80187B5C 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E17290 80187B60 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E17294 80187B64 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E17298 80187B68 3C042943 */  lui         $a0, (0x2943500F >> 16)
/* E1729C 80187B6C 262503FC */  addiu       $a1, $s1, 0x3FC
/* E172A0 80187B70 AFA50068 */  sw          $a1, 0x68($sp)
/* E172A4 80187B74 3484500F */  ori         $a0, $a0, (0x2943500F & 0xFFFF)
/* E172A8 80187B78 AFAF0014 */  sw          $t7, 0x14($sp)
/* E172AC 80187B7C AFA70010 */  sw          $a3, 0x10($sp)
/* E172B0 80187B80 0C006486 */  jal         Audio_PlaySfx
/* E172B4 80187B84 24060004 */   addiu      $a2, $zero, 0x4
/* E172B8 80187B88 1000000B */  b           .LE16C50_80187BB8
/* E172BC 80187B8C 86280060 */   lh         $t0, 0x60($s1)
.LE16C50_80187B90:
/* E172C0 80187B90 3C18800C */  lui         $t8, %hi(D_800C5D34)
/* E172C4 80187B94 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E172C8 80187B98 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E172CC 80187B9C 27075D34 */  addiu       $a3, $t8, %lo(D_800C5D34)
/* E172D0 80187BA0 AFA70010 */  sw          $a3, 0x10($sp)
/* E172D4 80187BA4 AFB90014 */  sw          $t9, 0x14($sp)
/* E172D8 80187BA8 24060004 */  addiu       $a2, $zero, 0x4
/* E172DC 80187BAC 0C006486 */  jal         Audio_PlaySfx
/* E172E0 80187BB0 AFA50068 */   sw         $a1, 0x68($sp)
/* E172E4 80187BB4 86280060 */  lh          $t0, 0x60($s1)
.LE16C50_80187BB8:
/* E172E8 80187BB8 02202025 */  or          $a0, $s1, $zero
/* E172EC 80187BBC 5D000081 */  bgtzl       $t0, .LE16C50_80187DC4
/* E172F0 80187BC0 86220066 */   lh         $v0, 0x66($s1)
/* E172F4 80187BC4 0C010BB0 */  jal         func_80042EC0
/* E172F8 80187BC8 A6200060 */   sh         $zero, 0x60($s1)
/* E172FC 80187BCC 3C048018 */  lui         $a0, %hi(gMsg_ID_15252)
/* E17300 80187BD0 24840FFC */  addiu       $a0, $a0, %lo(gMsg_ID_15252)
/* E17304 80187BD4 0C02EA02 */  jal         func_800BA808
/* E17308 80187BD8 24050014 */   addiu      $a1, $zero, 0x14
/* E1730C 80187BDC 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E17310 80187BE0 4481B000 */  mtc1        $at, $fs1
/* E17314 80187BE4 3C018017 */  lui         $at, %hi(D_8017796C)
/* E17318 80187BE8 2409FFFF */  addiu       $t1, $zero, -0x1
/* E1731C 80187BEC AC29796C */  sw          $t1, %lo(D_8017796C)($at)
/* E17320 80187BF0 3C018017 */  lui         $at, %hi(D_80177D20)
/* E17324 80187BF4 C4247D20 */  lwc1        $ft0, %lo(D_80177D20)($at)
/* E17328 80187BF8 3C01801C */  lui         $at, %hi(D_E16C50_801C092C)
/* E1732C 80187BFC C432092C */  lwc1        $ft5, %lo(D_E16C50_801C092C)($at)
/* E17330 80187C00 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E17334 80187C04 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E17338 80187C08 46122182 */  mul.s       $ft1, $ft0, $ft5
/* E1733C 80187C0C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E17340 80187C10 3C018016 */  lui         $at, %hi(D_8015F984)
/* E17344 80187C14 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E17348 80187C18 3C042940 */  lui         $a0, (0x2940D09A >> 16)
/* E1734C 80187C1C 3484D09A */  ori         $a0, $a0, (0x2940D09A & 0xFFFF)
/* E17350 80187C20 AFAA0014 */  sw          $t2, 0x14($sp)
/* E17354 80187C24 46163280 */  add.s       $ft3, $ft1, $fs1
/* E17358 80187C28 AFA70010 */  sw          $a3, 0x10($sp)
/* E1735C 80187C2C 8FA50068 */  lw          $a1, 0x68($sp)
/* E17360 80187C30 24060004 */  addiu       $a2, $zero, 0x4
/* E17364 80187C34 0C006486 */  jal         Audio_PlaySfx
/* E17368 80187C38 E42AF984 */   swc1       $ft3, %lo(D_8015F984)($at)
/* E1736C 80187C3C 3C018016 */  lui         $at, %hi(D_80161734)
/* E17370 80187C40 3C041028 */  lui         $a0, (0x102800FF >> 16)
/* E17374 80187C44 AC201734 */  sw          $zero, %lo(D_80161734)($at)
/* E17378 80187C48 0C0060BD */  jal         func_800182F4
/* E1737C 80187C4C 348400FF */   ori        $a0, $a0, (0x102800FF & 0xFFFF)
/* E17380 80187C50 3C041128 */  lui         $a0, (0x112800FF >> 16)
/* E17384 80187C54 0C0060BD */  jal         func_800182F4
/* E17388 80187C58 348400FF */   ori        $a0, $a0, (0x112800FF & 0xFFFF)
/* E1738C 80187C5C 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E17390 80187C60 44814000 */  mtc1        $at, $ft2
/* E17394 80187C64 3C01801C */  lui         $at, %hi(D_E16C50_801C0930)
/* E17398 80187C68 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1739C 80187C6C E62800EC */  swc1        $ft2, 0xEC($s1)
/* E173A0 80187C70 C4240930 */  lwc1        $ft0, %lo(D_E16C50_801C0930)($at)
/* E173A4 80187C74 3C01432A */  lui         $at, (0x432A0000 >> 16)
/* E173A8 80187C78 44819000 */  mtc1        $at, $ft5
/* E173AC 80187C7C 3C01C1A0 */  lui         $at, (0xC1A00000 >> 16)
/* E173B0 80187C80 44813000 */  mtc1        $at, $ft1
/* E173B4 80187C84 3C05801C */  lui         $a1, %hi(D_E16C50_801BECE0)
/* E173B8 80187C88 E62400E4 */  swc1        $ft0, 0xE4($s1)
/* E173BC 80187C8C E63200DC */  swc1        $ft5, 0xDC($s1)
/* E173C0 80187C90 E6260074 */  swc1        $ft1, 0x74($s1)
/* E173C4 80187C94 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E173C8 80187C98 24A5ECE0 */  addiu       $a1, $a1, %lo(D_E16C50_801BECE0)
/* E173CC 80187C9C 0C001A5C */  jal         Matrix_MultVec3f
/* E173D0 80187CA0 27A600A4 */   addiu      $a2, $sp, 0xA4
/* E173D4 80187CA4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E173D8 80187CA8 3C05801C */  lui         $a1, %hi(D_E16C50_801BECEC)
/* E173DC 80187CAC 24A5ECEC */  addiu       $a1, $a1, %lo(D_E16C50_801BECEC)
/* E173E0 80187CB0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E173E4 80187CB4 0C001A5C */  jal         Matrix_MultVec3f
/* E173E8 80187CB8 27A600B0 */   addiu      $a2, $sp, 0xB0
/* E173EC 80187CBC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E173F0 80187CC0 3C05801C */  lui         $a1, %hi(D_E16C50_801BECF8)
/* E173F4 80187CC4 24A5ECF8 */  addiu       $a1, $a1, %lo(D_E16C50_801BECF8)
/* E173F8 80187CC8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E173FC 80187CCC 0C001A5C */  jal         Matrix_MultVec3f
/* E17400 80187CD0 27A600BC */   addiu      $a2, $sp, 0xBC
/* E17404 80187CD4 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E17408 80187CD8 4481C000 */  mtc1        $at, $fs2
/* E1740C 80187CDC 27A200A4 */  addiu       $v0, $sp, 0xA4
/* E17410 80187CE0 27B000C8 */  addiu       $s0, $sp, 0xC8
/* E17414 80187CE4 C4560008 */  lwc1        $fs1, 0x8($v0)
.LE16C50_80187CE8:
/* E17418 80187CE8 C634000C */  lwc1        $fs0, 0xC($s1)
/* E1741C 80187CEC C4520000 */  lwc1        $ft5, 0x0($v0)
/* E17420 80187CF0 C6300004 */  lwc1        $ft4, 0x4($s1)
/* E17424 80187CF4 4614B500 */  add.s       $fs0, $fs1, $fs0
/* E17428 80187CF8 C4560004 */  lwc1        $fs1, 0x4($v0)
/* E1742C 80187CFC C62A0008 */  lwc1        $ft3, 0x8($s1)
/* E17430 80187D00 46109300 */  add.s       $fa0, $ft5, $ft4
/* E17434 80187D04 4406A000 */  mfc1        $a2, $fs0
/* E17438 80187D08 4407C000 */  mfc1        $a3, $fs2
/* E1743C 80187D0C 460AB380 */  add.s       $fa1, $fs1, $ft3
/* E17440 80187D10 0C01F438 */  jal         func_8007D0E0
/* E17444 80187D14 AFA20064 */   sw         $v0, 0x64($sp)
/* E17448 80187D18 8FA20064 */  lw          $v0, 0x64($sp)
/* E1744C 80187D1C 2442000C */  addiu       $v0, $v0, 0xC
/* E17450 80187D20 5450FFF1 */  bnel        $v0, $s0, .LE16C50_80187CE8
/* E17454 80187D24 C4560008 */   lwc1       $fs1, 0x8($v0)
/* E17458 80187D28 A62000CE */  sh          $zero, 0xCE($s1)
/* E1745C 80187D2C 862200CE */  lh          $v0, 0xCE($s1)
/* E17460 80187D30 3C12801C */  lui         $s2, %hi(D_E16C50_801C2250)
/* E17464 80187D34 240B00AA */  addiu       $t3, $zero, 0xAA
/* E17468 80187D38 26522250 */  addiu       $s2, $s2, %lo(D_E16C50_801C2250)
/* E1746C 80187D3C A62B0052 */  sh          $t3, 0x52($s1)
/* E17470 80187D40 A62200CC */  sh          $v0, 0xCC($s1)
/* E17474 80187D44 A62200CA */  sh          $v0, 0xCA($s1)
/* E17478 80187D48 240C0004 */  addiu       $t4, $zero, 0x4
/* E1747C 80187D4C 3C018016 */  lui         $at, %hi(D_Timer_80161A60)
/* E17480 80187D50 AE420008 */  sw          $v0, 0x8($s2)
/* E17484 80187D54 AE42000C */  sw          $v0, 0xC($s2)
/* E17488 80187D58 AE420010 */  sw          $v0, 0x10($s2)
/* E1748C 80187D5C A42C1A60 */  sh          $t4, %lo(D_Timer_80161A60)($at)
/* E17490 80187D60 240D000B */  addiu       $t5, $zero, 0xB
/* E17494 80187D64 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E17498 80187D68 A62D004E */  sh          $t5, 0x4E($s1)
/* E1749C 80187D6C 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E174A0 80187D70 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E174A4 80187D74 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E174A8 80187D78 3C042940 */  lui         $a0, (0x2940C00A >> 16)
/* E174AC 80187D7C 3484C00A */  ori         $a0, $a0, (0x2940C00A & 0xFFFF)
/* E174B0 80187D80 AFAE0014 */  sw          $t6, 0x14($sp)
/* E174B4 80187D84 AFA70010 */  sw          $a3, 0x10($sp)
/* E174B8 80187D88 8FA50068 */  lw          $a1, 0x68($sp)
/* E174BC 80187D8C 0C006486 */  jal         Audio_PlaySfx
/* E174C0 80187D90 24060004 */   addiu      $a2, $zero, 0x4
/* E174C4 80187D94 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E174C8 80187D98 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E174CC 80187D9C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E174D0 80187DA0 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E174D4 80187DA4 3C043143 */  lui         $a0, (0x3143402E >> 16)
/* E174D8 80187DA8 3484402E */  ori         $a0, $a0, (0x3143402E & 0xFFFF)
/* E174DC 80187DAC AFAF0014 */  sw          $t7, 0x14($sp)
/* E174E0 80187DB0 AFA70010 */  sw          $a3, 0x10($sp)
/* E174E4 80187DB4 8FA50068 */  lw          $a1, 0x68($sp)
/* E174E8 80187DB8 0C006486 */  jal         Audio_PlaySfx
/* E174EC 80187DBC 24060004 */   addiu      $a2, $zero, 0x4
/* E174F0 80187DC0 86220066 */  lh          $v0, 0x66($s1)
.LE16C50_80187DC4:
/* E174F4 80187DC4 24010004 */  addiu       $at, $zero, 0x4
/* E174F8 80187DC8 10410005 */  beq         $v0, $at, .LE16C50_80187DE0
/* E174FC 80187DCC 24010005 */   addiu      $at, $zero, 0x5
/* E17500 80187DD0 10410003 */  beq         $v0, $at, .LE16C50_80187DE0
/* E17504 80187DD4 24010006 */   addiu      $at, $zero, 0x6
/* E17508 80187DD8 54410007 */  bnel        $v0, $at, .LE16C50_80187DF8
/* E1750C 80187DDC 86220066 */   lh         $v0, 0x66($s1)
.LE16C50_80187DE0:
/* E17510 80187DE0 863800BA */  lh          $t8, 0xBA($s1)
/* E17514 80187DE4 53000004 */  beql        $t8, $zero, .LE16C50_80187DF8
/* E17518 80187DE8 86220066 */   lh         $v0, 0x66($s1)
/* E1751C 80187DEC 0C062E6F */  jal         func_E16C50_8018B9BC
/* E17520 80187DF0 02202025 */   or         $a0, $s1, $zero
/* E17524 80187DF4 86220066 */  lh          $v0, 0x66($s1)
.LE16C50_80187DF8:
/* E17528 80187DF8 24010001 */  addiu       $at, $zero, 0x1
/* E1752C 80187DFC 10410005 */  beq         $v0, $at, .LE16C50_80187E14
/* E17530 80187E00 24010002 */   addiu      $at, $zero, 0x2
/* E17534 80187E04 10410003 */  beq         $v0, $at, .LE16C50_80187E14
/* E17538 80187E08 24010003 */   addiu      $at, $zero, 0x3
/* E1753C 80187E0C 54410005 */  bnel        $v0, $at, .LE16C50_80187E24
/* E17540 80187E10 28410007 */   slti       $at, $v0, 0x7
.LE16C50_80187E14:
/* E17544 80187E14 0C0628B1 */  jal         func_E16C50_8018A2C4
/* E17548 80187E18 02202025 */   or         $a0, $s1, $zero
/* E1754C 80187E1C 86220066 */  lh          $v0, 0x66($s1)
/* E17550 80187E20 28410007 */  slti        $at, $v0, 0x7
.LE16C50_80187E24:
/* E17554 80187E24 1420000B */  bnez        $at, .LE16C50_80187E54
/* E17558 80187E28 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E1755C 80187E2C 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E17560 80187E30 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E17564 80187E34 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E17568 80187E38 3C042912 */  lui         $a0, (0x29121007 >> 16)
/* E1756C 80187E3C 34841007 */  ori         $a0, $a0, (0x29121007 & 0xFFFF)
/* E17570 80187E40 AFB90014 */  sw          $t9, 0x14($sp)
/* E17574 80187E44 AFA70010 */  sw          $a3, 0x10($sp)
/* E17578 80187E48 262503FC */  addiu       $a1, $s1, 0x3FC
/* E1757C 80187E4C 0C006486 */  jal         Audio_PlaySfx
/* E17580 80187E50 24060004 */   addiu      $a2, $zero, 0x4
.LE16C50_80187E54:
/* E17584 80187E54 3C013F00 */  lui         $at, (0x3F000000 >> 16)
.LE16C50_80187E58:
/* E17588 80187E58 4481B000 */  mtc1        $at, $fs1
/* E1758C 80187E5C 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E17590 80187E60 4481C000 */  mtc1        $at, $fs2
/* E17594 80187E64 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E17598 80187E68 3C08801C */  lui         $t0, %hi(D_E16C50_801C22F0)
/* E1759C 80187E6C 3C09801C */  lui         $t1, %hi(D_E16C50_801C22F0 + 0xC)
/* E175A0 80187E70 3C0A801C */  lui         $t2, %hi(D_E16C50_801C22F0 + 0x18)
/* E175A4 80187E74 3C12801C */  lui         $s2, %hi(D_E16C50_801C2250)
/* E175A8 80187E78 254A2308 */  addiu       $t2, $t2, %lo(D_E16C50_801C22F0 + 0x18)
/* E175AC 80187E7C 252922FC */  addiu       $t1, $t1, %lo(D_E16C50_801C22F0 + 0xC)
/* E175B0 80187E80 250822F0 */  addiu       $t0, $t0, %lo(D_E16C50_801C22F0)
/* E175B4 80187E84 4481A000 */  mtc1        $at, $fs0
/* E175B8 80187E88 26522250 */  addiu       $s2, $s2, %lo(D_E16C50_801C2250)
/* E175BC 80187E8C AFA80068 */  sw          $t0, 0x68($sp)
/* E175C0 80187E90 AFA9005C */  sw          $t1, 0x5C($sp)
/* E175C4 80187E94 AFAA0058 */  sw          $t2, 0x58($sp)
/* E175C8 80187E98 02201825 */  or          $v1, $s1, $zero
.LE16C50_80187E9C:
/* E175CC 80187E9C 847000A6 */  lh          $s0, 0xA6($v1)
/* E175D0 80187EA0 2401000A */  addiu       $at, $zero, 0xA
/* E175D4 80187EA4 8FA40068 */  lw          $a0, 0x68($sp)
/* E175D8 80187EA8 0201001A */  div         $zero, $s0, $at
/* E175DC 80187EAC 00005812 */  mflo        $t3
/* E175E0 80187EB0 2570FFFF */  addiu       $s0, $t3, -0x1
/* E175E4 80187EB4 06010002 */  bgez        $s0, .LE16C50_80187EC0
/* E175E8 80187EB8 3C0D801C */   lui        $t5, %hi(D_E16C50_801BECB0)
/* E175EC 80187EBC 00008025 */  or          $s0, $zero, $zero
.LE16C50_80187EC0:
/* E175F0 80187EC0 00106080 */  sll         $t4, $s0, 2
/* E175F4 80187EC4 01906023 */  subu        $t4, $t4, $s0
/* E175F8 80187EC8 44802000 */  mtc1        $zero, $ft0
/* E175FC 80187ECC 000C6080 */  sll         $t4, $t4, 2
/* E17600 80187ED0 25ADECB0 */  addiu       $t5, $t5, %lo(D_E16C50_801BECB0)
/* E17604 80187ED4 018D1021 */  addu        $v0, $t4, $t5
/* E17608 80187ED8 4406A000 */  mfc1        $a2, $fs0
/* E1760C 80187EDC 4407C000 */  mfc1        $a3, $fs2
/* E17610 80187EE0 8C450000 */  lw          $a1, 0x0($v0)
/* E17614 80187EE4 AFA20060 */  sw          $v0, 0x60($sp)
/* E17618 80187EE8 AFA30064 */  sw          $v1, 0x64($sp)
/* E1761C 80187EEC 0C026F0B */  jal         Math_SmoothStepToF
/* E17620 80187EF0 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E17624 80187EF4 8FAE0060 */  lw          $t6, 0x60($sp)
/* E17628 80187EF8 44809000 */  mtc1        $zero, $ft5
/* E1762C 80187EFC 4406A000 */  mfc1        $a2, $fs0
/* E17630 80187F00 4407C000 */  mfc1        $a3, $fs2
/* E17634 80187F04 8DC50004 */  lw          $a1, 0x4($t6)
/* E17638 80187F08 8FB00058 */  lw          $s0, 0x58($sp)
/* E1763C 80187F0C 8FA4005C */  lw          $a0, 0x5C($sp)
/* E17640 80187F10 0C026F0B */  jal         Math_SmoothStepToF
/* E17644 80187F14 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E17648 80187F18 8FAF0060 */  lw          $t7, 0x60($sp)
/* E1764C 80187F1C 44803000 */  mtc1        $zero, $ft1
/* E17650 80187F20 4406A000 */  mfc1        $a2, $fs0
/* E17654 80187F24 4407C000 */  mfc1        $a3, $fs2
/* E17658 80187F28 8DE50008 */  lw          $a1, 0x8($t7)
/* E1765C 80187F2C 02002025 */  or          $a0, $s0, $zero
/* E17660 80187F30 0C026F0B */  jal         Math_SmoothStepToF
/* E17664 80187F34 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E17668 80187F38 8FB80068 */  lw          $t8, 0x68($sp)
/* E1766C 80187F3C 8FA8005C */  lw          $t0, 0x5C($sp)
/* E17670 80187F40 3C0A801C */  lui         $t2, %hi(D_E16C50_801C22F0 + 0x24)
/* E17674 80187F44 8FA30064 */  lw          $v1, 0x64($sp)
/* E17678 80187F48 254A2314 */  addiu       $t2, $t2, %lo(D_E16C50_801C22F0 + 0x24)
/* E1767C 80187F4C 26100004 */  addiu       $s0, $s0, 0x4
/* E17680 80187F50 020A082B */  sltu        $at, $s0, $t2
/* E17684 80187F54 27190004 */  addiu       $t9, $t8, 0x4
/* E17688 80187F58 25090004 */  addiu       $t1, $t0, 0x4
/* E1768C 80187F5C AFA9005C */  sw          $t1, 0x5C($sp)
/* E17690 80187F60 AFB90068 */  sw          $t9, 0x68($sp)
/* E17694 80187F64 AFB00058 */  sw          $s0, 0x58($sp)
/* E17698 80187F68 1420FFCC */  bnez        $at, .LE16C50_80187E9C
/* E1769C 80187F6C 24630002 */   addiu      $v1, $v1, 0x2
/* E176A0 80187F70 862B00A6 */  lh          $t3, 0xA6($s1)
/* E176A4 80187F74 15600024 */  bnez        $t3, .LE16C50_80188008
/* E176A8 80187F78 00000000 */   nop
/* E176AC 80187F7C 862C00A8 */  lh          $t4, 0xA8($s1)
/* E176B0 80187F80 15800021 */  bnez        $t4, .LE16C50_80188008
/* E176B4 80187F84 00000000 */   nop
/* E176B8 80187F88 862D00AA */  lh          $t5, 0xAA($s1)
/* E176BC 80187F8C 15A0001E */  bnez        $t5, .LE16C50_80188008
/* E176C0 80187F90 00000000 */   nop
/* E176C4 80187F94 44805000 */  mtc1        $zero, $ft3
/* E176C8 80187F98 C62800D8 */  lwc1        $ft2, 0xD8($s1)
/* E176CC 80187F9C 3C0E8017 */  lui         $t6, %hi(gFrameCount)
/* E176D0 80187FA0 46085032 */  c.eq.s      $ft3, $ft2
/* E176D4 80187FA4 00000000 */  nop
/* E176D8 80187FA8 45010017 */  bc1t        .LE16C50_80188008
/* E176DC 80187FAC 00000000 */   nop
/* E176E0 80187FB0 8DCE7DB0 */  lw          $t6, %lo(gFrameCount)($t6)
/* E176E4 80187FB4 3C014348 */  lui         $at, (0x43480000 >> 16)
/* E176E8 80187FB8 24180001 */  addiu       $t8, $zero, 0x1
/* E176EC 80187FBC 31CF0001 */  andi        $t7, $t6, 0x1
/* E176F0 80187FC0 15E00011 */  bnez        $t7, .LE16C50_80188008
/* E176F4 80187FC4 00000000 */   nop
/* E176F8 80187FC8 C624000C */  lwc1        $ft0, 0xC($s1)
/* E176FC 80187FCC 44819000 */  mtc1        $at, $ft5
/* E17700 80187FD0 C62A0070 */  lwc1        $ft3, 0x70($s1)
/* E17704 80187FD4 C62C0004 */  lwc1        $fa0, 0x4($s1)
/* E17708 80187FD8 46122180 */  add.s       $ft1, $ft0, $ft5
/* E1770C 80187FDC C62E0008 */  lwc1        $fa1, 0x8($s1)
/* E17710 80187FE0 8E27006C */  lw          $a3, 0x6C($s1)
/* E17714 80187FE4 3C01801C */  lui         $at, %hi(D_E16C50_801C0934)
/* E17718 80187FE8 E7AA0010 */  swc1        $ft3, 0x10($sp)
/* E1771C 80187FEC C6280074 */  lwc1        $ft2, 0x74($s1)
/* E17720 80187FF0 C4240934 */  lwc1        $ft0, %lo(D_E16C50_801C0934)($at)
/* E17724 80187FF4 44063000 */  mfc1        $a2, $ft1
/* E17728 80187FF8 AFB8001C */  sw          $t8, 0x1C($sp)
/* E1772C 80187FFC E7A80014 */  swc1        $ft2, 0x14($sp)
/* E17730 80188000 0C01F048 */  jal         func_8007C120
/* E17734 80188004 E7A40018 */   swc1       $ft0, 0x18($sp)
.LE16C50_80188008:
/* E17738 80188008 3C198017 */  lui         $t9, %hi(gObjects408 + 0xBA)
/* E1773C 8018800C 8739F1CA */  lh          $t9, %lo(gObjects408 + 0xBA)($t9)
/* E17740 80188010 24010001 */  addiu       $at, $zero, 0x1
/* E17744 80188014 4600B086 */  mov.s       $fv1, $fs1
/* E17748 80188018 17210003 */  bne         $t9, $at, .LE16C50_80188028
/* E1774C 8018801C 3C014000 */   lui        $at, (0x40000000 >> 16)
/* E17750 80188020 44811000 */  mtc1        $at, $fv1
/* E17754 80188024 00000000 */  nop
.LE16C50_80188028:
/* E17758 80188028 8E480028 */  lw          $t0, 0x28($s2)
/* E1775C 8018802C 11000010 */  beqz        $t0, .LE16C50_80188070
/* E17760 80188030 3C01801C */   lui        $at, %hi(D_E16C50_801C22F0 + 0x34)
/* E17764 80188034 C4322324 */  lwc1        $ft5, %lo(D_E16C50_801C22F0 + 0x34)($at)
/* E17768 80188038 46029180 */  add.s       $ft1, $ft5, $fv1
/* E1776C 8018803C E4262324 */  swc1        $ft1, %lo(D_E16C50_801C22F0 + 0x34)($at)
/* E17770 80188040 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E17774 80188044 44815000 */  mtc1        $at, $ft3
/* E17778 80188048 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E1777C 8018804C 4606503C */  c.lt.s      $ft3, $ft1
/* E17780 80188050 00000000 */  nop
/* E17784 80188054 45020014 */  bc1fl       .LE16C50_801880A8
/* E17788 80188058 8622004E */   lh         $v0, 0x4E($s1)
/* E1778C 8018805C 44814000 */  mtc1        $at, $ft2
/* E17790 80188060 3C01801C */  lui         $at, %hi(D_E16C50_801C22F0 + 0x34)
/* E17794 80188064 46083101 */  sub.s       $ft0, $ft1, $ft2
/* E17798 80188068 1000000E */  b           .LE16C50_801880A4
/* E1779C 8018806C E4242324 */   swc1       $ft0, %lo(D_E16C50_801C22F0 + 0x34)($at)
.LE16C50_80188070:
/* E177A0 80188070 3C01801C */  lui         $at, %hi(D_E16C50_801C22F0 + 0x34)
/* E177A4 80188074 C4322324 */  lwc1        $ft5, %lo(D_E16C50_801C22F0 + 0x34)($at)
/* E177A8 80188078 44805000 */  mtc1        $zero, $ft3
/* E177AC 8018807C 46029181 */  sub.s       $ft1, $ft5, $fv1
/* E177B0 80188080 460A303C */  c.lt.s      $ft1, $ft3
/* E177B4 80188084 E4262324 */  swc1        $ft1, %lo(D_E16C50_801C22F0 + 0x34)($at)
/* E177B8 80188088 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E177BC 8018808C 45020006 */  bc1fl       .LE16C50_801880A8
/* E177C0 80188090 8622004E */   lh         $v0, 0x4E($s1)
/* E177C4 80188094 44814000 */  mtc1        $at, $ft2
/* E177C8 80188098 3C01801C */  lui         $at, %hi(D_E16C50_801C22F0 + 0x34)
/* E177CC 8018809C 46083100 */  add.s       $ft0, $ft1, $ft2
/* E177D0 801880A0 E4242324 */  swc1        $ft0, %lo(D_E16C50_801C22F0 + 0x34)($at)
.LE16C50_801880A4:
/* E177D4 801880A4 8622004E */  lh          $v0, 0x4E($s1)
.LE16C50_801880A8:
/* E177D8 801880A8 28410003 */  slti        $at, $v0, 0x3
/* E177DC 801880AC 1420007F */  bnez        $at, .LE16C50_801882AC
/* E177E0 801880B0 28410005 */   slti       $at, $v0, 0x5
/* E177E4 801880B4 5020007E */  beql        $at, $zero, .LE16C50_801882B0
/* E177E8 801880B8 862C004E */   lh         $t4, 0x4E($s1)
/* E177EC 801880BC 44809000 */  mtc1        $zero, $ft5
/* E177F0 801880C0 C6260148 */  lwc1        $ft1, 0x148($s1)
/* E177F4 801880C4 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E177F8 801880C8 3C073CA3 */  lui         $a3, (0x3CA3D70A >> 16)
/* E177FC 801880CC 46069032 */  c.eq.s      $ft5, $ft1
/* E17800 801880D0 34E7D70A */  ori         $a3, $a3, (0x3CA3D70A & 0xFFFF)
/* E17804 801880D4 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E17808 801880D8 262400FC */  addiu       $a0, $s1, 0xFC
/* E1780C 801880DC 45000073 */  bc1f        .LE16C50_801882AC
/* E17810 801880E0 3C01801C */   lui        $at, %hi(D_E16C50_801C0938)
/* E17814 801880E4 C42A0938 */  lwc1        $ft3, %lo(D_E16C50_801C0938)($at)
/* E17818 801880E8 8E250158 */  lw          $a1, 0x158($s1)
/* E1781C 801880EC 0C026F4E */  jal         Math_SmoothStepToAngle
/* E17820 801880F0 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E17824 801880F4 3C01801C */  lui         $at, %hi(D_E16C50_801C093C)
/* E17828 801880F8 C428093C */  lwc1        $ft2, %lo(D_E16C50_801C093C)($at)
/* E1782C 801880FC 8E2500F8 */  lw          $a1, 0xF8($s1)
/* E17830 80188100 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E17834 80188104 8E2700FC */  lw          $a3, 0xFC($s1)
/* E17838 80188108 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1783C 8018810C 26240018 */  addiu       $a0, $s1, 0x18
/* E17840 80188110 0C026F4E */  jal         Math_SmoothStepToAngle
/* E17844 80188114 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E17848 80188118 862900BA */  lh          $t1, 0xBA($s1)
/* E1784C 8018811C 3C0A8017 */  lui         $t2, %hi(gFrameCount)
/* E17850 80188120 3C188017 */  lui         $t8, %hi(gFrameCount)
/* E17854 80188124 29210002 */  slti        $at, $t1, 0x2
/* E17858 80188128 1420002D */  bnez        $at, .LE16C50_801881E0
/* E1785C 8018812C 00000000 */   nop
/* E17860 80188130 8D4A7DB0 */  lw          $t2, %lo(gFrameCount)($t2)
/* E17864 80188134 314B003F */  andi        $t3, $t2, 0x3F
/* E17868 80188138 15600012 */  bnez        $t3, .LE16C50_80188184
/* E1786C 8018813C 00000000 */   nop
/* E17870 80188140 0C0013AC */  jal         Rand_ZeroOne
/* E17874 80188144 00000000 */   nop
/* E17878 80188148 4616003C */  c.lt.s      $fv0, $fs1
/* E1787C 8018814C 00000000 */  nop
/* E17880 80188150 4500000C */  bc1f        .LE16C50_80188184
/* E17884 80188154 00000000 */   nop
/* E17888 80188158 0C0013AC */  jal         Rand_ZeroOne
/* E1788C 8018815C 00000000 */   nop
/* E17890 80188160 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E17894 80188164 3C0143FA */  lui         $at, (0x43FA0000 >> 16)
/* E17898 80188168 44819000 */  mtc1        $at, $ft5
/* E1789C 8018816C 3C0C8018 */  lui         $t4, %hi(gPlayer)
/* E178A0 80188170 8D8C8280 */  lw          $t4, %lo(gPlayer)($t4)
/* E178A4 80188174 46122182 */  mul.s       $ft1, $ft0, $ft5
/* E178A8 80188178 C58A0040 */  lwc1        $ft3, 0x40($t4)
/* E178AC 8018817C 46065200 */  add.s       $ft2, $ft3, $ft1
/* E178B0 80188180 E62800F0 */  swc1        $ft2, 0xF0($s1)
.LE16C50_80188184:
/* E178B4 80188184 3C0D8017 */  lui         $t5, %hi(gFrameCount)
/* E178B8 80188188 8DAD7DB0 */  lw          $t5, %lo(gFrameCount)($t5)
/* E178BC 8018818C 31AE003F */  andi        $t6, $t5, 0x3F
/* E178C0 80188190 55C00047 */  bnel        $t6, $zero, .LE16C50_801882B0
/* E178C4 80188194 862C004E */   lh         $t4, 0x4E($s1)
/* E178C8 80188198 0C0013AC */  jal         Rand_ZeroOne
/* E178CC 8018819C 00000000 */   nop
/* E178D0 801881A0 4616003C */  c.lt.s      $fv0, $fs1
/* E178D4 801881A4 00000000 */  nop
/* E178D8 801881A8 45020041 */  bc1fl       .LE16C50_801882B0
/* E178DC 801881AC 862C004E */   lh         $t4, 0x4E($s1)
/* E178E0 801881B0 0C0013AC */  jal         Rand_ZeroOne
/* E178E4 801881B4 00000000 */   nop
/* E178E8 801881B8 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E178EC 801881BC 3C0143FA */  lui         $at, (0x43FA0000 >> 16)
/* E178F0 801881C0 44819000 */  mtc1        $at, $ft5
/* E178F4 801881C4 3C0F8018 */  lui         $t7, %hi(gPlayer)
/* E178F8 801881C8 8DEF8280 */  lw          $t7, %lo(gPlayer)($t7)
/* E178FC 801881CC 46122282 */  mul.s       $ft3, $ft0, $ft5
/* E17900 801881D0 C5E60044 */  lwc1        $ft1, 0x44($t7)
/* E17904 801881D4 460A3200 */  add.s       $ft2, $ft1, $ft3
/* E17908 801881D8 10000034 */  b           .LE16C50_801882AC
/* E1790C 801881DC E62800F4 */   swc1       $ft2, 0xF4($s1)
.LE16C50_801881E0:
/* E17910 801881E0 8F187DB0 */  lw          $t8, %lo(gFrameCount)($t8)
/* E17914 801881E4 3319001F */  andi        $t9, $t8, 0x1F
/* E17918 801881E8 17200016 */  bnez        $t9, .LE16C50_80188244
/* E1791C 801881EC 00000000 */   nop
/* E17920 801881F0 0C0013AC */  jal         Rand_ZeroOne
/* E17924 801881F4 00000000 */   nop
/* E17928 801881F8 3C01801C */  lui         $at, %hi(D_E16C50_801C0940)
/* E1792C 801881FC C4240940 */  lwc1        $ft0, %lo(D_E16C50_801C0940)($at)
/* E17930 80188200 4604003C */  c.lt.s      $fv0, $ft0
/* E17934 80188204 00000000 */  nop
/* E17938 80188208 4500000E */  bc1f        .LE16C50_80188244
/* E1793C 8018820C 00000000 */   nop
/* E17940 80188210 0C0013AC */  jal         Rand_ZeroOne
/* E17944 80188214 00000000 */   nop
/* E17948 80188218 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E1794C 8018821C 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E17950 80188220 44813000 */  mtc1        $at, $ft1
/* E17954 80188224 3C088018 */  lui         $t0, %hi(gPlayer)
/* E17958 80188228 8D088280 */  lw          $t0, %lo(gPlayer)($t0)
/* E1795C 8018822C 46069282 */  mul.s       $ft3, $ft5, $ft1
/* E17960 80188230 44809000 */  mtc1        $zero, $ft5
/* E17964 80188234 C5080040 */  lwc1        $ft2, 0x40($t0)
/* E17968 80188238 E6320150 */  swc1        $ft5, 0x150($s1)
/* E1796C 8018823C 460A4100 */  add.s       $ft0, $ft2, $ft3
/* E17970 80188240 E62400F0 */  swc1        $ft0, 0xF0($s1)
.LE16C50_80188244:
/* E17974 80188244 3C098017 */  lui         $t1, %hi(gFrameCount)
/* E17978 80188248 8D297DB0 */  lw          $t1, %lo(gFrameCount)($t1)
/* E1797C 8018824C 312A001F */  andi        $t2, $t1, 0x1F
/* E17980 80188250 55400017 */  bnel        $t2, $zero, .LE16C50_801882B0
/* E17984 80188254 862C004E */   lh         $t4, 0x4E($s1)
/* E17988 80188258 0C0013AC */  jal         Rand_ZeroOne
/* E1798C 8018825C 00000000 */   nop
/* E17990 80188260 3C01801C */  lui         $at, %hi(D_E16C50_801C0944)
/* E17994 80188264 C4260944 */  lwc1        $ft1, %lo(D_E16C50_801C0944)($at)
/* E17998 80188268 4606003C */  c.lt.s      $fv0, $ft1
/* E1799C 8018826C 00000000 */  nop
/* E179A0 80188270 4502000F */  bc1fl       .LE16C50_801882B0
/* E179A4 80188274 862C004E */   lh         $t4, 0x4E($s1)
/* E179A8 80188278 0C0013AC */  jal         Rand_ZeroOne
/* E179AC 8018827C 00000000 */   nop
/* E179B0 80188280 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E179B4 80188284 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E179B8 80188288 44815000 */  mtc1        $at, $ft3
/* E179BC 8018828C 3C0B8018 */  lui         $t3, %hi(gPlayer)
/* E179C0 80188290 8D6B8280 */  lw          $t3, %lo(gPlayer)($t3)
/* E179C4 80188294 460A4102 */  mul.s       $ft0, $ft2, $ft3
/* E179C8 80188298 44804000 */  mtc1        $zero, $ft2
/* E179CC 8018829C C5720044 */  lwc1        $ft5, 0x44($t3)
/* E179D0 801882A0 E6280154 */  swc1        $ft2, 0x154($s1)
/* E179D4 801882A4 46049180 */  add.s       $ft1, $ft5, $ft0
/* E179D8 801882A8 E62600F4 */  swc1        $ft1, 0xF4($s1)
.LE16C50_801882AC:
/* E179DC 801882AC 862C004E */  lh          $t4, 0x4E($s1)
.LE16C50_801882B0:
/* E179E0 801882B0 11800055 */  beqz        $t4, .LE16C50_80188408
/* E179E4 801882B4 3C01801C */   lui        $at, %hi(D_E16C50_801C0948)
/* E179E8 801882B8 C42A0948 */  lwc1        $ft3, %lo(D_E16C50_801C0948)($at)
/* E179EC 801882BC 8E2500EC */  lw          $a1, 0xEC($s1)
/* E179F0 801882C0 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E179F4 801882C4 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E179F8 801882C8 262400E8 */  addiu       $a0, $s1, 0xE8
/* E179FC 801882CC 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E17A00 801882D0 0C026F0B */  jal         Math_SmoothStepToF
/* E17A04 801882D4 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E17A08 801882D8 3C0D8018 */  lui         $t5, %hi(gPlayer)
/* E17A0C 801882DC 8DAD8280 */  lw          $t5, %lo(gPlayer)($t5)
/* E17A10 801882E0 3C018017 */  lui         $at, %hi(D_80177D20)
/* E17A14 801882E4 C4247D20 */  lwc1        $ft0, %lo(D_80177D20)($at)
/* E17A18 801882E8 C5B20048 */  lwc1        $ft5, 0x48($t5)
/* E17A1C 801882EC C62800E4 */  lwc1        $ft2, 0xE4($s1)
/* E17A20 801882F0 3C01801C */  lui         $at, %hi(D_E16C50_801C094C)
/* E17A24 801882F4 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E17A28 801882F8 C432094C */  lwc1        $ft5, %lo(D_E16C50_801C094C)($at)
/* E17A2C 801882FC 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E17A30 80188300 8E2700E8 */  lw          $a3, 0xE8($s1)
/* E17A34 80188304 46064280 */  add.s       $ft3, $ft2, $ft1
/* E17A38 80188308 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E17A3C 8018830C 2624000C */  addiu       $a0, $s1, 0xC
/* E17A40 80188310 E7B20010 */  swc1        $ft5, 0x10($sp)
/* E17A44 80188314 44055000 */  mfc1        $a1, $ft3
/* E17A48 80188318 0C026F0B */  jal         Math_SmoothStepToF
/* E17A4C 8018831C 00000000 */   nop
/* E17A50 80188320 862E004E */  lh          $t6, 0x4E($s1)
/* E17A54 80188324 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E17A58 80188328 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E17A5C 8018832C 29C10005 */  slti        $at, $t6, 0x5
/* E17A60 80188330 1020002C */  beqz        $at, .LE16C50_801883E4
/* E17A64 80188334 26240150 */   addiu      $a0, $s1, 0x150
/* E17A68 80188338 862F00BA */  lh          $t7, 0xBA($s1)
/* E17A6C 8018833C 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E17A70 80188340 44811000 */  mtc1        $at, $fv1
/* E17A74 80188344 24010001 */  addiu       $at, $zero, 0x1
/* E17A78 80188348 15E10003 */  bne         $t7, $at, .LE16C50_80188358
/* E17A7C 8018834C 3C014248 */   lui        $at, (0x42480000 >> 16)
/* E17A80 80188350 44811000 */  mtc1        $at, $fv1
/* E17A84 80188354 00000000 */  nop
.LE16C50_80188358:
/* E17A88 80188358 3C01801C */  lui         $at, %hi(D_E16C50_801C0950)
/* E17A8C 8018835C C4240950 */  lwc1        $ft0, %lo(D_E16C50_801C0950)($at)
/* E17A90 80188360 44051000 */  mfc1        $a1, $fv1
/* E17A94 80188364 4407A000 */  mfc1        $a3, $fs0
/* E17A98 80188368 E7A20120 */  swc1        $fv1, 0x120($sp)
/* E17A9C 8018836C 0C026F0B */  jal         Math_SmoothStepToF
/* E17AA0 80188370 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E17AA4 80188374 C7A20120 */  lwc1        $fv1, 0x120($sp)
/* E17AA8 80188378 3C01801C */  lui         $at, %hi(D_E16C50_801C0954)
/* E17AAC 8018837C C4280954 */  lwc1        $ft2, %lo(D_E16C50_801C0954)($at)
/* E17AB0 80188380 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E17AB4 80188384 4407A000 */  mfc1        $a3, $fs0
/* E17AB8 80188388 44051000 */  mfc1        $a1, $fv1
/* E17ABC 8018838C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E17AC0 80188390 26240154 */  addiu       $a0, $s1, 0x154
/* E17AC4 80188394 0C026F0B */  jal         Math_SmoothStepToF
/* E17AC8 80188398 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E17ACC 8018839C 3C01801C */  lui         $at, %hi(D_E16C50_801C0958)
/* E17AD0 801883A0 C4260958 */  lwc1        $ft1, %lo(D_E16C50_801C0958)($at)
/* E17AD4 801883A4 8E2500F0 */  lw          $a1, 0xF0($s1)
/* E17AD8 801883A8 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* E17ADC 801883AC 8E270150 */  lw          $a3, 0x150($s1)
/* E17AE0 801883B0 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* E17AE4 801883B4 26240004 */  addiu       $a0, $s1, 0x4
/* E17AE8 801883B8 0C026F0B */  jal         Math_SmoothStepToF
/* E17AEC 801883BC E7A60010 */   swc1       $ft1, 0x10($sp)
/* E17AF0 801883C0 3C01801C */  lui         $at, %hi(D_E16C50_801C095C)
/* E17AF4 801883C4 C42A095C */  lwc1        $ft3, %lo(D_E16C50_801C095C)($at)
/* E17AF8 801883C8 8E2500F4 */  lw          $a1, 0xF4($s1)
/* E17AFC 801883CC 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* E17B00 801883D0 8E270154 */  lw          $a3, 0x154($s1)
/* E17B04 801883D4 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* E17B08 801883D8 26240008 */  addiu       $a0, $s1, 0x8
/* E17B0C 801883DC 0C026F0B */  jal         Math_SmoothStepToF
/* E17B10 801883E0 E7AA0010 */   swc1       $ft3, 0x10($sp)
.LE16C50_801883E4:
/* E17B14 801883E4 3C01801C */  lui         $at, %hi(D_E16C50_801C0960)
/* E17B18 801883E8 C4320960 */  lwc1        $ft5, %lo(D_E16C50_801C0960)($at)
/* E17B1C 801883EC 8E2500DC */  lw          $a1, 0xDC($s1)
/* E17B20 801883F0 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* E17B24 801883F4 8E2700E0 */  lw          $a3, 0xE0($s1)
/* E17B28 801883F8 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* E17B2C 801883FC 262400D8 */  addiu       $a0, $s1, 0xD8
/* E17B30 80188400 0C026F4E */  jal         Math_SmoothStepToAngle
/* E17B34 80188404 E7B20010 */   swc1       $ft5, 0x10($sp)
.LE16C50_80188408:
/* E17B38 80188408 3C01801C */  lui         $at, %hi(D_E16C50_801C0964)
/* E17B3C 8018840C C4240964 */  lwc1        $ft0, %lo(D_E16C50_801C0964)($at)
/* E17B40 80188410 8E25010C */  lw          $a1, 0x10C($s1)
/* E17B44 80188414 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E17B48 80188418 8E270118 */  lw          $a3, 0x118($s1)
/* E17B4C 8018841C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E17B50 80188420 26240100 */  addiu       $a0, $s1, 0x100
/* E17B54 80188424 0C026F0B */  jal         Math_SmoothStepToF
/* E17B58 80188428 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E17B5C 8018842C 3C01801C */  lui         $at, %hi(D_E16C50_801C0968)
/* E17B60 80188430 C4280968 */  lwc1        $ft2, %lo(D_E16C50_801C0968)($at)
/* E17B64 80188434 8E250110 */  lw          $a1, 0x110($s1)
/* E17B68 80188438 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E17B6C 8018843C 8E27011C */  lw          $a3, 0x11C($s1)
/* E17B70 80188440 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E17B74 80188444 26240104 */  addiu       $a0, $s1, 0x104
/* E17B78 80188448 0C026F0B */  jal         Math_SmoothStepToF
/* E17B7C 8018844C E7A80010 */   swc1       $ft2, 0x10($sp)
/* E17B80 80188450 3C01801C */  lui         $at, %hi(D_E16C50_801C096C)
/* E17B84 80188454 C426096C */  lwc1        $ft1, %lo(D_E16C50_801C096C)($at)
/* E17B88 80188458 8E250114 */  lw          $a1, 0x114($s1)
/* E17B8C 8018845C 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E17B90 80188460 8E270120 */  lw          $a3, 0x120($s1)
/* E17B94 80188464 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E17B98 80188468 26240108 */  addiu       $a0, $s1, 0x108
/* E17B9C 8018846C 0C026F0B */  jal         Math_SmoothStepToF
/* E17BA0 80188470 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E17BA4 80188474 3C01801C */  lui         $at, %hi(D_E16C50_801C0970)
/* E17BA8 80188478 C42A0970 */  lwc1        $ft3, %lo(D_E16C50_801C0970)($at)
/* E17BAC 8018847C 8E250130 */  lw          $a1, 0x130($s1)
/* E17BB0 80188480 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E17BB4 80188484 4407C000 */  mfc1        $a3, $fs2
/* E17BB8 80188488 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E17BBC 8018848C 26240124 */  addiu       $a0, $s1, 0x124
/* E17BC0 80188490 0C026F0B */  jal         Math_SmoothStepToF
/* E17BC4 80188494 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E17BC8 80188498 3C01801C */  lui         $at, %hi(D_E16C50_801C0974)
/* E17BCC 8018849C C4320974 */  lwc1        $ft5, %lo(D_E16C50_801C0974)($at)
/* E17BD0 801884A0 8E250134 */  lw          $a1, 0x134($s1)
/* E17BD4 801884A4 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E17BD8 801884A8 4407C000 */  mfc1        $a3, $fs2
/* E17BDC 801884AC 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E17BE0 801884B0 26240128 */  addiu       $a0, $s1, 0x128
/* E17BE4 801884B4 0C026F0B */  jal         Math_SmoothStepToF
/* E17BE8 801884B8 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E17BEC 801884BC 3C01801C */  lui         $at, %hi(D_E16C50_801C0978)
/* E17BF0 801884C0 C4240978 */  lwc1        $ft0, %lo(D_E16C50_801C0978)($at)
/* E17BF4 801884C4 8E250138 */  lw          $a1, 0x138($s1)
/* E17BF8 801884C8 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E17BFC 801884CC 4407C000 */  mfc1        $a3, $fs2
/* E17C00 801884D0 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E17C04 801884D4 2624012C */  addiu       $a0, $s1, 0x12C
/* E17C08 801884D8 0C026F0B */  jal         Math_SmoothStepToF
/* E17C0C 801884DC E7A40010 */   swc1       $ft0, 0x10($sp)
/* E17C10 801884E0 8638004E */  lh          $t8, 0x4E($s1)
/* E17C14 801884E4 2B01000B */  slti        $at, $t8, 0xB
/* E17C18 801884E8 142000A5 */  bnez        $at, .LE16C50_80188780
/* E17C1C 801884EC 00000000 */   nop
/* E17C20 801884F0 C6280018 */  lwc1        $ft2, 0x18($s1)
/* E17C24 801884F4 C6260148 */  lwc1        $ft1, 0x148($s1)
/* E17C28 801884F8 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E17C2C 801884FC 44817000 */  mtc1        $at, $fa1
/* E17C30 80188500 46064280 */  add.s       $ft3, $ft2, $ft1
/* E17C34 80188504 E62A0018 */  swc1        $ft3, 0x18($s1)
/* E17C38 80188508 0C001388 */  jal         Math_ModF
/* E17C3C 8018850C C62C0018 */   lwc1       $fa0, 0x18($s1)
/* E17C40 80188510 E6200018 */  swc1        $fv0, 0x18($s1)
/* E17C44 80188514 3C01801C */  lui         $at, %hi(D_E16C50_801C097C)
/* E17C48 80188518 C432097C */  lwc1        $ft5, %lo(D_E16C50_801C097C)($at)
/* E17C4C 8018851C 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E17C50 80188520 3C073E4C */  lui         $a3, (0x3E4CCCCD >> 16)
/* E17C54 80188524 34E7CCCD */  ori         $a3, $a3, (0x3E4CCCCD & 0xFFFF)
/* E17C58 80188528 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E17C5C 8018852C 26240148 */  addiu       $a0, $s1, 0x148
/* E17C60 80188530 3C0540A0 */  lui         $a1, (0x40A00000 >> 16)
/* E17C64 80188534 0C026F0B */  jal         Math_SmoothStepToF
/* E17C68 80188538 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E17C6C 8018853C AFA00134 */  sw          $zero, 0x134($sp)
.LE16C50_80188540:
/* E17C70 80188540 0C0013AC */  jal         Rand_ZeroOne
/* E17C74 80188544 00000000 */   nop
/* E17C78 80188548 8FB00134 */  lw          $s0, 0x134($sp)
/* E17C7C 8018854C 0C0013AC */  jal         Rand_ZeroOne
/* E17C80 80188550 E7A0006C */   swc1       $fv0, 0x6C($sp)
/* E17C84 80188554 0C0013AC */  jal         Rand_ZeroOne
/* E17C88 80188558 E7A00070 */   swc1       $fv0, 0x70($sp)
/* E17C8C 8018855C 0C0013AC */  jal         Rand_ZeroOne
/* E17C90 80188560 E7A00074 */   swc1       $fv0, 0x74($sp)
/* E17C94 80188564 C7A4006C */  lwc1        $ft0, 0x6C($sp)
/* E17C98 80188568 3C0143FA */  lui         $at, (0x43FA0000 >> 16)
/* E17C9C 8018856C 44811000 */  mtc1        $at, $fv1
/* E17CA0 80188570 46162201 */  sub.s       $ft2, $ft0, $fs1
/* E17CA4 80188574 C7B20070 */  lwc1        $ft5, 0x70($sp)
/* E17CA8 80188578 C62A0004 */  lwc1        $ft3, 0x4($s1)
/* E17CAC 8018857C 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E17CB0 80188580 46024182 */  mul.s       $ft1, $ft2, $fv1
/* E17CB4 80188584 46169101 */  sub.s       $ft0, $ft5, $fs1
/* E17CB8 80188588 46022202 */  mul.s       $ft2, $ft0, $fv1
/* E17CBC 8018858C 44812000 */  mtc1        $at, $ft0
/* E17CC0 80188590 460A3300 */  add.s       $fa0, $ft1, $ft3
/* E17CC4 80188594 C7AA0074 */  lwc1        $ft3, 0x74($sp)
/* E17CC8 80188598 C6260008 */  lwc1        $ft1, 0x8($s1)
/* E17CCC 8018859C 3C014080 */  lui         $at, (0x40800000 >> 16)
/* E17CD0 801885A0 46165481 */  sub.s       $ft5, $ft3, $fs1
/* E17CD4 801885A4 46064380 */  add.s       $fa1, $ft2, $ft1
/* E17CD8 801885A8 46049202 */  mul.s       $ft2, $ft5, $ft0
/* E17CDC 801885AC 44819000 */  mtc1        $at, $ft5
/* E17CE0 801885B0 C626000C */  lwc1        $ft1, 0xC($s1)
/* E17CE4 801885B4 46120102 */  mul.s       $ft0, $fv0, $ft5
/* E17CE8 801885B8 46064280 */  add.s       $ft3, $ft2, $ft1
/* E17CEC 801885BC 46142200 */  add.s       $ft2, $ft0, $fs0
/* E17CF0 801885C0 44065000 */  mfc1        $a2, $ft3
/* E17CF4 801885C4 44074000 */  mfc1        $a3, $ft2
/* E17CF8 801885C8 0C01E586 */  jal         func_80079618
/* E17CFC 801885CC 00000000 */   nop
/* E17D00 801885D0 26100001 */  addiu       $s0, $s0, 0x1
/* E17D04 801885D4 2A01000A */  slti        $at, $s0, 0xA
/* E17D08 801885D8 1420FFD9 */  bnez        $at, .LE16C50_80188540
/* E17D0C 801885DC AFB00134 */   sw         $s0, 0x134($sp)
/* E17D10 801885E0 8639005C */  lh          $t9, 0x5C($s1)
/* E17D14 801885E4 2408000F */  addiu       $t0, $zero, 0xF
/* E17D18 801885E8 3C028017 */  lui         $v0, %hi(gFrameCount)
/* E17D1C 801885EC 17200002 */  bnez        $t9, .LE16C50_801885F8
/* E17D20 801885F0 3C048014 */   lui        $a0, %hi(gCalcMatrix)
/* E17D24 801885F4 A628005C */  sh          $t0, 0x5C($s1)
.LE16C50_801885F8:
/* E17D28 801885F8 8C427DB0 */  lw          $v0, %lo(gFrameCount)($v0)
/* E17D2C 801885FC 3C05801C */  lui         $a1, %hi(D_E16C50_801BED04)
/* E17D30 80188600 24A5ED04 */  addiu       $a1, $a1, %lo(D_E16C50_801BED04)
/* E17D34 80188604 30490001 */  andi        $t1, $v0, 0x1
/* E17D38 80188608 1520004B */  bnez        $t1, .LE16C50_80188738
/* E17D3C 8018860C 27A600C8 */   addiu      $a2, $sp, 0xC8
/* E17D40 80188610 0C001A5C */  jal         Matrix_MultVec3f
/* E17D44 80188614 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E17D48 80188618 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E17D4C 8018861C 3C05801C */  lui         $a1, %hi(D_E16C50_801BED10)
/* E17D50 80188620 24A5ED10 */  addiu       $a1, $a1, %lo(D_E16C50_801BED10)
/* E17D54 80188624 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E17D58 80188628 0C001A5C */  jal         Matrix_MultVec3f
/* E17D5C 8018862C 27A600D4 */   addiu      $a2, $sp, 0xD4
/* E17D60 80188630 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E17D64 80188634 3C05801C */  lui         $a1, %hi(D_E16C50_801BED1C)
/* E17D68 80188638 24A5ED1C */  addiu       $a1, $a1, %lo(D_E16C50_801BED1C)
/* E17D6C 8018863C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E17D70 80188640 0C001A5C */  jal         Matrix_MultVec3f
/* E17D74 80188644 27A600E0 */   addiu      $a2, $sp, 0xE0
/* E17D78 80188648 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E17D7C 8018864C 3C05801C */  lui         $a1, %hi(D_E16C50_801BED28)
/* E17D80 80188650 24A5ED28 */  addiu       $a1, $a1, %lo(D_E16C50_801BED28)
/* E17D84 80188654 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E17D88 80188658 0C001A5C */  jal         Matrix_MultVec3f
/* E17D8C 8018865C 27A600EC */   addiu      $a2, $sp, 0xEC
/* E17D90 80188660 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E17D94 80188664 3C05801C */  lui         $a1, %hi(D_E16C50_801BED34)
/* E17D98 80188668 24A5ED34 */  addiu       $a1, $a1, %lo(D_E16C50_801BED34)
/* E17D9C 8018866C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E17DA0 80188670 0C001A5C */  jal         Matrix_MultVec3f
/* E17DA4 80188674 27A600F8 */   addiu      $a2, $sp, 0xF8
/* E17DA8 80188678 27A200C8 */  addiu       $v0, $sp, 0xC8
.LE16C50_8018867C:
/* E17DAC 8018867C 0C0013AC */  jal         Rand_ZeroOne
/* E17DB0 80188680 AFA20064 */   sw         $v0, 0x64($sp)
/* E17DB4 80188684 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E17DB8 80188688 3C014396 */  lui         $at, (0x43960000 >> 16)
/* E17DBC 8018868C 44815000 */  mtc1        $at, $ft3
/* E17DC0 80188690 8FA20064 */  lw          $v0, 0x64($sp)
/* E17DC4 80188694 27AB00C8 */  addiu       $t3, $sp, 0xC8
/* E17DC8 80188698 460A3482 */  mul.s       $ft5, $ft1, $ft3
/* E17DCC 8018869C 4600910D */  trunc.w.s   $ft0, $ft5
/* E17DD0 801886A0 44102000 */  mfc1        $s0, $ft0
/* E17DD4 801886A4 544B000C */  bnel        $v0, $t3, .LE16C50_801886D8
/* E17DD8 801886A8 44902000 */   mtc1       $s0, $ft0
/* E17DDC 801886AC 0C0013AC */  jal         Rand_ZeroOne
/* E17DE0 801886B0 AFA20064 */   sw         $v0, 0x64($sp)
/* E17DE4 801886B4 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E17DE8 801886B8 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E17DEC 801886BC 44813000 */  mtc1        $at, $ft1
/* E17DF0 801886C0 8FA20064 */  lw          $v0, 0x64($sp)
/* E17DF4 801886C4 46064282 */  mul.s       $ft3, $ft2, $ft1
/* E17DF8 801886C8 4600548D */  trunc.w.s   $ft5, $ft3
/* E17DFC 801886CC 44109000 */  mfc1        $s0, $ft5
/* E17E00 801886D0 00000000 */  nop
/* E17E04 801886D4 44902000 */  mtc1        $s0, $ft0
.LE16C50_801886D8:
/* E17E08 801886D8 C6260004 */  lwc1        $ft1, 0x4($s1)
/* E17E0C 801886DC C4480000 */  lwc1        $ft2, 0x0($v0)
/* E17E10 801886E0 46802020 */  cvt.s.w     $fv0, $ft0
/* E17E14 801886E4 C6240008 */  lwc1        $ft0, 0x8($s1)
/* E17E18 801886E8 C4520004 */  lwc1        $ft5, 0x4($v0)
/* E17E1C 801886EC 4407C000 */  mfc1        $a3, $fs2
/* E17E20 801886F0 46003280 */  add.s       $ft3, $ft1, $fv0
/* E17E24 801886F4 46002180 */  add.s       $ft1, $ft0, $fv0
/* E17E28 801886F8 460A4300 */  add.s       $fa0, $ft2, $ft3
/* E17E2C 801886FC C62A000C */  lwc1        $ft3, 0xC($s1)
/* E17E30 80188700 C4480008 */  lwc1        $ft2, 0x8($v0)
/* E17E34 80188704 AFA20064 */  sw          $v0, 0x64($sp)
/* E17E38 80188708 46069380 */  add.s       $fa1, $ft5, $ft1
/* E17E3C 8018870C 460A4100 */  add.s       $ft0, $ft2, $ft3
/* E17E40 80188710 44062000 */  mfc1        $a2, $ft0
/* E17E44 80188714 0C01F438 */  jal         func_8007D0E0
/* E17E48 80188718 00000000 */   nop
/* E17E4C 8018871C 8FA20064 */  lw          $v0, 0x64($sp)
/* E17E50 80188720 27AD0104 */  addiu       $t5, $sp, 0x104
/* E17E54 80188724 2442000C */  addiu       $v0, $v0, 0xC
/* E17E58 80188728 144DFFD4 */  bne         $v0, $t5, .LE16C50_8018867C
/* E17E5C 8018872C 00000000 */   nop
/* E17E60 80188730 3C028017 */  lui         $v0, %hi(gFrameCount)
/* E17E64 80188734 8C427DB0 */  lw          $v0, %lo(gFrameCount)($v0)
.LE16C50_80188738:
/* E17E68 80188738 304E001F */  andi        $t6, $v0, 0x1F
/* E17E6C 8018873C 15C00010 */  bnez        $t6, .LE16C50_80188780
/* E17E70 80188740 3C014396 */   lui        $at, (0x43960000 >> 16)
/* E17E74 80188744 C632000C */  lwc1        $ft5, 0xC($s1)
/* E17E78 80188748 44813000 */  mtc1        $at, $ft1
/* E17E7C 8018874C C62A0070 */  lwc1        $ft3, 0x70($s1)
/* E17E80 80188750 C62C0004 */  lwc1        $fa0, 0x4($s1)
/* E17E84 80188754 46069200 */  add.s       $ft2, $ft5, $ft1
/* E17E88 80188758 C62E0008 */  lwc1        $fa1, 0x8($s1)
/* E17E8C 8018875C 8E27006C */  lw          $a3, 0x6C($s1)
/* E17E90 80188760 E7AA0010 */  swc1        $ft3, 0x10($sp)
/* E17E94 80188764 C6240074 */  lwc1        $ft0, 0x74($s1)
/* E17E98 80188768 44064000 */  mfc1        $a2, $ft2
/* E17E9C 8018876C 240F0046 */  addiu       $t7, $zero, 0x46
/* E17EA0 80188770 AFAF001C */  sw          $t7, 0x1C($sp)
/* E17EA4 80188774 E7B60018 */  swc1        $fs1, 0x18($sp)
/* E17EA8 80188778 0C01F048 */  jal         func_8007C120
/* E17EAC 8018877C E7A40014 */   swc1       $ft0, 0x14($sp)
.LE16C50_80188780:
/* E17EB0 80188780 3C188017 */  lui         $t8, %hi(gFrameCount)
/* E17EB4 80188784 8F187DB0 */  lw          $t8, %lo(gFrameCount)($t8)
/* E17EB8 80188788 3319000F */  andi        $t9, $t8, 0xF
/* E17EBC 8018878C 1720002E */  bnez        $t9, .LE16C50_80188848
/* E17EC0 80188790 3C01801C */   lui        $at, %hi(D_E16C50_801C0980)
/* E17EC4 80188794 C4260980 */  lwc1        $ft1, %lo(D_E16C50_801C0980)($at)
/* E17EC8 80188798 C63200E4 */  lwc1        $ft5, 0xE4($s1)
/* E17ECC 8018879C 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E17ED0 801887A0 02201825 */  or          $v1, $s1, $zero
/* E17ED4 801887A4 46069003 */  div.s       $fv0, $ft5, $ft1
/* E17ED8 801887A8 00001025 */  or          $v0, $zero, $zero
/* E17EDC 801887AC 24040048 */  addiu       $a0, $zero, 0x48
/* E17EE0 801887B0 46000085 */  abs.s       $fv1, $fv0
/* E17EE4 801887B4 44810000 */  mtc1        $at, $fv0
/* E17EE8 801887B8 4614103C */  c.lt.s      $fv1, $fs0
/* E17EEC 801887BC 3C014319 */  lui         $at, (0x43190000 >> 16)
/* E17EF0 801887C0 44817000 */  mtc1        $at, $fa1
/* E17EF4 801887C4 3C014313 */  lui         $at, (0x43130000 >> 16)
/* E17EF8 801887C8 45020003 */  bc1fl       .LE16C50_801887D8
/* E17EFC 801887CC 4602003C */   c.lt.s     $fv0, $fv1
/* E17F00 801887D0 4600A086 */  mov.s       $fv1, $fs0
/* E17F04 801887D4 4602003C */  c.lt.s      $fv0, $fv1
.LE16C50_801887D8:
/* E17F08 801887D8 44816000 */  mtc1        $at, $fa0
/* E17F0C 801887DC 3C014343 */  lui         $at, (0x43430000 >> 16)
/* E17F10 801887E0 45020003 */  bc1fl       .LE16C50_801887F0
/* E17F14 801887E4 E7A20114 */   swc1       $fv1, 0x114($sp)
/* E17F18 801887E8 46000086 */  mov.s       $fv1, $fv0
/* E17F1C 801887EC E7A20114 */  swc1        $fv1, 0x114($sp)
.LE16C50_801887F0:
/* E17F20 801887F0 44810000 */  mtc1        $at, $fv0
/* E17F24 801887F4 C7B00114 */  lwc1        $ft4, 0x114($sp)
.LE16C50_801887F8:
/* E17F28 801887F8 846800AC */  lh          $t0, 0xAC($v1)
/* E17F2C 801887FC 46008086 */  mov.s       $fv1, $ft4
/* E17F30 80188800 11000002 */  beqz        $t0, .LE16C50_8018880C
/* E17F34 80188804 00000000 */   nop
/* E17F38 80188808 4600A086 */  mov.s       $fv1, $fs0
.LE16C50_8018880C:
/* E17F3C 8018880C 46020202 */  mul.s       $ft2, $fv0, $fv1
/* E17F40 80188810 8E290028 */  lw          $t1, 0x28($s1)
/* E17F44 80188814 24630002 */  addiu       $v1, $v1, 0x2
/* E17F48 80188818 46026282 */  mul.s       $ft3, $fa0, $fv1
/* E17F4C 8018881C 01225021 */  addu        $t2, $t1, $v0
/* E17F50 80188820 46027102 */  mul.s       $ft0, $fa1, $fv1
/* E17F54 80188824 E5480020 */  swc1        $ft2, 0x20($t2)
/* E17F58 80188828 8E2B0028 */  lw          $t3, 0x28($s1)
/* E17F5C 8018882C 01626021 */  addu        $t4, $t3, $v0
/* E17F60 80188830 E58A0028 */  swc1        $ft3, 0x28($t4)
/* E17F64 80188834 8E2D0028 */  lw          $t5, 0x28($s1)
/* E17F68 80188838 01A27021 */  addu        $t6, $t5, $v0
/* E17F6C 8018883C 24420018 */  addiu       $v0, $v0, 0x18
/* E17F70 80188840 1444FFED */  bne         $v0, $a0, .LE16C50_801887F8
/* E17F74 80188844 E5C40030 */   swc1       $ft0, 0x30($t6)
.LE16C50_80188848:
/* E17F78 80188848 962F004E */  lhu         $t7, 0x4E($s1)
/* E17F7C 8018884C 2DE1000C */  sltiu       $at, $t7, 0xC
/* E17F80 80188850 10200594 */  beqz        $at, .LE16C50_80189EA4
/* E17F84 80188854 000F7880 */   sll        $t7, $t7, 2
/* E17F88 80188858 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C0984)
/* E17F8C 8018885C 002F0821 */  addu        $at, $at, $t7
/* E17F90 80188860 8C2F0984 */  lw          $t7, %lo(jtbl_E16C50_801C0984)($at)
/* E17F94 80188864 01E00008 */  jr          $t7
/* E17F98 80188868 00000000 */   nop
.LE16C50_8018886C:
/* E17F9C 8018886C 44809000 */  mtc1        $zero, $ft5
/* E17FA0 80188870 8E380028 */  lw          $t8, 0x28($s1)
/* E17FA4 80188874 3C108018 */  lui         $s0, %hi(gPlayer)
/* E17FA8 80188878 3C01442F */  lui         $at, (0x442F0000 >> 16)
/* E17FAC 8018887C E7120000 */  swc1        $ft5, 0x0($t8)
/* E17FB0 80188880 8E108280 */  lw          $s0, %lo(gPlayer)($s0)
/* E17FB4 80188884 C6200004 */  lwc1        $fv0, 0x4($s1)
/* E17FB8 80188888 4600C406 */  mov.s       $ft4, $fs2
/* E17FBC 8018888C C6060074 */  lwc1        $ft1, 0x74($s0)
/* E17FC0 80188890 46003201 */  sub.s       $ft2, $ft1, $fv0
/* E17FC4 80188894 44813000 */  mtc1        $at, $ft1
/* E17FC8 80188898 E7A8011C */  swc1        $ft2, 0x11C($sp)
/* E17FCC 8018889C C62C0008 */  lwc1        $fa0, 0x8($s1)
/* E17FD0 801888A0 C60A0078 */  lwc1        $ft3, 0x78($s0)
/* E17FD4 801888A4 460C5101 */  sub.s       $ft0, $ft3, $fa0
/* E17FD8 801888A8 E7A40118 */  swc1        $ft0, 0x118($sp)
/* E17FDC 801888AC C612007C */  lwc1        $ft5, 0x7C($s0)
/* E17FE0 801888B0 86220050 */  lh          $v0, 0x50($s1)
/* E17FE4 801888B4 C622000C */  lwc1        $fv1, 0xC($s1)
/* E17FE8 801888B8 46069201 */  sub.s       $ft2, $ft5, $ft1
/* E17FEC 801888BC 10400013 */  beqz        $v0, .LE16C50_8018890C
/* E17FF0 801888C0 46024381 */   sub.s      $fa1, $ft2, $fv1
/* E17FF4 801888C4 284100C8 */  slti        $at, $v0, 0xC8
/* E17FF8 801888C8 50200011 */  beql        $at, $zero, .LE16C50_80188910
/* E17FFC 801888CC C7AC011C */   lwc1       $fa0, 0x11C($sp)
/* E18000 801888D0 C60A0040 */  lwc1        $ft3, 0x40($s0)
/* E18004 801888D4 3C018017 */  lui         $at, %hi(D_80177D20)
/* E18008 801888D8 46005101 */  sub.s       $ft0, $ft3, $fv0
/* E1800C 801888DC C42A7D20 */  lwc1        $ft3, %lo(D_80177D20)($at)
/* E18010 801888E0 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E18014 801888E4 44818000 */  mtc1        $at, $ft4
/* E18018 801888E8 E7A4011C */  swc1        $ft0, 0x11C($sp)
/* E1801C 801888EC C6120044 */  lwc1        $ft5, 0x44($s0)
/* E18020 801888F0 460C9181 */  sub.s       $ft1, $ft5, $fa0
/* E18024 801888F4 E7A60118 */  swc1        $ft1, 0x118($sp)
/* E18028 801888F8 C6080048 */  lwc1        $ft2, 0x48($s0)
/* E1802C 801888FC C63200E4 */  lwc1        $ft5, 0xE4($s1)
/* E18030 80188900 460A4101 */  sub.s       $ft0, $ft2, $ft3
/* E18034 80188904 46049180 */  add.s       $ft1, $ft5, $ft0
/* E18038 80188908 46023381 */  sub.s       $fa1, $ft1, $fv1
.LE16C50_8018890C:
/* E1803C 8018890C C7AC011C */  lwc1        $fa0, 0x11C($sp)
.LE16C50_80188910:
/* E18040 80188910 E7AE0114 */  swc1        $fa1, 0x114($sp)
/* E18044 80188914 0C001440 */  jal         Math_Atan2F
/* E18048 80188918 E7B00104 */   swc1       $ft4, 0x104($sp)
/* E1804C 8018891C 0C027DDA */  jal         Math_RadToDeg
/* E18050 80188920 46000306 */   mov.s      $fa0, $fv0
/* E18054 80188924 C7A2011C */  lwc1        $fv1, 0x11C($sp)
/* E18058 80188928 C7B00114 */  lwc1        $ft4, 0x114($sp)
/* E1805C 8018892C E7A0010C */  swc1        $fv0, 0x10C($sp)
/* E18060 80188930 46021202 */  mul.s       $ft2, $fv1, $fv1
/* E18064 80188934 C7AC0118 */  lwc1        $fa0, 0x118($sp)
/* E18068 80188938 46108282 */  mul.s       $ft3, $ft4, $ft4
/* E1806C 8018893C 460A4000 */  add.s       $fv0, $ft2, $ft3
/* E18070 80188940 0C001440 */  jal         Math_Atan2F
/* E18074 80188944 46000384 */   sqrt.s     $fa1, $fv0
/* E18078 80188948 0C027DDA */  jal         Math_RadToDeg
/* E1807C 8018894C 46000307 */   neg.s      $fa0, $fv0
/* E18080 80188950 3C01801C */  lui         $at, %hi(D_E16C50_801C09B4)
/* E18084 80188954 C43209B4 */  lwc1        $ft5, %lo(D_E16C50_801C09B4)($at)
/* E18088 80188958 4406A000 */  mfc1        $a2, $fs0
/* E1808C 8018895C 2624007C */  addiu       $a0, $s1, 0x7C
/* E18090 80188960 8FA5010C */  lw          $a1, 0x10C($sp)
/* E18094 80188964 8FA70104 */  lw          $a3, 0x104($sp)
/* E18098 80188968 E7A00110 */  swc1        $fv0, 0x110($sp)
/* E1809C 8018896C 0C026F4E */  jal         Math_SmoothStepToAngle
/* E180A0 80188970 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E180A4 80188974 C7A20110 */  lwc1        $fv1, 0x110($sp)
/* E180A8 80188978 3C01801C */  lui         $at, %hi(D_E16C50_801C09B8)
/* E180AC 8018897C C42409B8 */  lwc1        $ft0, %lo(D_E16C50_801C09B8)($at)
/* E180B0 80188980 4406A000 */  mfc1        $a2, $fs0
/* E180B4 80188984 44051000 */  mfc1        $a1, $fv1
/* E180B8 80188988 26240078 */  addiu       $a0, $s1, 0x78
/* E180BC 8018898C 8FA70104 */  lw          $a3, 0x104($sp)
/* E180C0 80188990 0C026F4E */  jal         Math_SmoothStepToAngle
/* E180C4 80188994 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E180C8 80188998 3C01801C */  lui         $at, %hi(D_E16C50_801C09BC)
/* E180CC 8018899C C42809BC */  lwc1        $ft2, %lo(D_E16C50_801C09BC)($at)
/* E180D0 801889A0 C626007C */  lwc1        $ft1, 0x7C($s1)
/* E180D4 801889A4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E180D8 801889A8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E180DC 801889AC 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E180E0 801889B0 00003025 */  or          $a2, $zero, $zero
/* E180E4 801889B4 44055000 */  mfc1        $a1, $ft3
/* E180E8 801889B8 0C0017A4 */  jal         Matrix_RotateY
/* E180EC 801889BC 00000000 */   nop
/* E180F0 801889C0 3C01801C */  lui         $at, %hi(D_E16C50_801C09C0)
/* E180F4 801889C4 C42409C0 */  lwc1        $ft0, %lo(D_E16C50_801C09C0)($at)
/* E180F8 801889C8 C6320078 */  lwc1        $ft5, 0x78($s1)
/* E180FC 801889CC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E18100 801889D0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E18104 801889D4 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E18108 801889D8 24060001 */  addiu       $a2, $zero, 0x1
/* E1810C 801889DC 44053000 */  mfc1        $a1, $ft1
/* E18110 801889E0 0C001751 */  jal         Matrix_RotateX
/* E18114 801889E4 00000000 */   nop
/* E18118 801889E8 44800000 */  mtc1        $zero, $fv0
/* E1811C 801889EC 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E18120 801889F0 44814000 */  mtc1        $at, $ft2
/* E18124 801889F4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E18128 801889F8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1812C 801889FC 27A50098 */  addiu       $a1, $sp, 0x98
/* E18130 80188A00 27A6008C */  addiu       $a2, $sp, 0x8C
/* E18134 80188A04 E7A0009C */  swc1        $fv0, 0x9C($sp)
/* E18138 80188A08 E7A00098 */  swc1        $fv0, 0x98($sp)
/* E1813C 80188A0C 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E18140 80188A10 E7A800A0 */   swc1       $ft2, 0xA0($sp)
/* E18144 80188A14 C7AA008C */  lwc1        $ft3, 0x8C($sp)
/* E18148 80188A18 44800000 */  mtc1        $zero, $fv0
/* E1814C 80188A1C 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E18150 80188A20 E62A006C */  swc1        $ft3, 0x6C($s1)
/* E18154 80188A24 C7B20090 */  lwc1        $ft5, 0x90($sp)
/* E18158 80188A28 44812000 */  mtc1        $at, $ft0
/* E1815C 80188A2C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E18160 80188A30 E6320070 */  swc1        $ft5, 0x70($s1)
/* E18164 80188A34 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E18168 80188A38 27A50098 */  addiu       $a1, $sp, 0x98
/* E1816C 80188A3C 27A6008C */  addiu       $a2, $sp, 0x8C
/* E18170 80188A40 E7A00098 */  swc1        $fv0, 0x98($sp)
/* E18174 80188A44 E7A0009C */  swc1        $fv0, 0x9C($sp)
/* E18178 80188A48 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E1817C 80188A4C E7A400A0 */   swc1       $ft0, 0xA0($sp)
/* E18180 80188A50 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E18184 80188A54 44815000 */  mtc1        $at, $ft3
/* E18188 80188A58 C628015C */  lwc1        $ft2, 0x15C($s1)
/* E1818C 80188A5C 86390050 */  lh          $t9, 0x50($s1)
/* E18190 80188A60 C7A60094 */  lwc1        $ft1, 0x94($sp)
/* E18194 80188A64 460A4480 */  add.s       $ft5, $ft2, $ft3
/* E18198 80188A68 3C04801C */  lui         $a0, %hi(D_E16C50_801C22F0 + 0x24)
/* E1819C 80188A6C E6260074 */  swc1        $ft1, 0x74($s1)
/* E181A0 80188A70 1720050C */  bnez        $t9, .LE16C50_80189EA4
/* E181A4 80188A74 E632015C */   swc1       $ft5, 0x15C($s1)
/* E181A8 80188A78 44802000 */  mtc1        $zero, $ft0
/* E181AC 80188A7C 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E181B0 80188A80 4407A000 */  mfc1        $a3, $fs0
/* E181B4 80188A84 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E181B8 80188A88 24842314 */  addiu       $a0, $a0, %lo(D_E16C50_801C22F0 + 0x24)
/* E181BC 80188A8C 24050000 */  addiu       $a1, $zero, 0x0
/* E181C0 80188A90 0C026F0B */  jal         Math_SmoothStepToF
/* E181C4 80188A94 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E181C8 80188A98 3C02801C */  lui         $v0, %hi(D_E16C50_801C22F0)
/* E181CC 80188A9C 244222F0 */  addiu       $v0, $v0, %lo(D_E16C50_801C22F0)
/* E181D0 80188AA0 C4460024 */  lwc1        $ft1, 0x24($v0)
/* E181D4 80188AA4 262403FC */  addiu       $a0, $s1, 0x3FC
/* E181D8 80188AA8 4614303C */  c.lt.s      $ft1, $fs0
/* E181DC 80188AAC 00000000 */  nop
/* E181E0 80188AB0 450204FD */  bc1fl       .LE16C50_80189EA8
/* E181E4 80188AB4 02202025 */   or         $a0, $s1, $zero
/* E181E8 80188AB8 44804000 */  mtc1        $zero, $ft2
/* E181EC 80188ABC AFA40068 */  sw          $a0, 0x68($sp)
/* E181F0 80188AC0 0C006940 */  jal         Audio_KillSfx
/* E181F4 80188AC4 E4480024 */   swc1       $ft2, 0x24($v0)
/* E181F8 80188AC8 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E181FC 80188ACC 3C08800C */  lui         $t0, %hi(D_800C5D3C)
/* E18200 80188AD0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E18204 80188AD4 25085D3C */  addiu       $t0, $t0, %lo(D_800C5D3C)
/* E18208 80188AD8 3C041900 */  lui         $a0, (0x19004051 >> 16)
/* E1820C 80188ADC 34844051 */  ori         $a0, $a0, (0x19004051 & 0xFFFF)
/* E18210 80188AE0 AFA80014 */  sw          $t0, 0x14($sp)
/* E18214 80188AE4 AFA70010 */  sw          $a3, 0x10($sp)
/* E18218 80188AE8 8FA50068 */  lw          $a1, 0x68($sp)
/* E1821C 80188AEC 0C006486 */  jal         Audio_PlaySfx
/* E18220 80188AF0 24060004 */   addiu      $a2, $zero, 0x4
/* E18224 80188AF4 3C028018 */  lui         $v0, %hi(gPlayer)
/* E18228 80188AF8 24090014 */  addiu       $t1, $zero, 0x14
/* E1822C 80188AFC 24428280 */  addiu       $v0, $v0, %lo(gPlayer)
/* E18230 80188B00 A6290050 */  sh          $t1, 0x50($s1)
/* E18234 80188B04 8C4A0000 */  lw          $t2, 0x0($v0)
/* E18238 80188B08 3C018017 */  lui         $at, %hi(D_80177D20)
/* E1823C 80188B0C C4327D20 */  lwc1        $ft5, %lo(D_80177D20)($at)
/* E18240 80188B10 C54A0048 */  lwc1        $ft3, 0x48($t2)
/* E18244 80188B14 C62600E4 */  lwc1        $ft1, 0xE4($s1)
/* E18248 80188B18 44801000 */  mtc1        $zero, $fv1
/* E1824C 80188B1C 46125101 */  sub.s       $ft0, $ft3, $ft5
/* E18250 80188B20 3C01C220 */  lui         $at, (0xC2200000 >> 16)
/* E18254 80188B24 44815000 */  mtc1        $at, $ft3
/* E18258 80188B28 240D0002 */  addiu       $t5, $zero, 0x2
/* E1825C 80188B2C 46043200 */  add.s       $ft2, $ft1, $ft0
/* E18260 80188B30 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E18264 80188B34 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E18268 80188B38 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1826C 80188B3C E628000C */  swc1        $ft2, 0xC($s1)
/* E18270 80188B40 8C4B0000 */  lw          $t3, 0x0($v0)
/* E18274 80188B44 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E18278 80188B48 3C043940 */  lui         $a0, (0x39408092 >> 16)
/* E1827C 80188B4C C5600040 */  lwc1        $fv0, 0x40($t3)
/* E18280 80188B50 34848092 */  ori         $a0, $a0, (0x39408092 & 0xFFFF)
/* E18284 80188B54 24060004 */  addiu       $a2, $zero, 0x4
/* E18288 80188B58 E6200004 */  swc1        $fv0, 0x4($s1)
/* E1828C 80188B5C E62000F0 */  swc1        $fv0, 0xF0($s1)
/* E18290 80188B60 8C4C0000 */  lw          $t4, 0x0($v0)
/* E18294 80188B64 C5800044 */  lwc1        $fv0, 0x44($t4)
/* E18298 80188B68 A62D004E */  sh          $t5, 0x4E($s1)
/* E1829C 80188B6C E622006C */  swc1        $fv1, 0x6C($s1)
/* E182A0 80188B70 E6220070 */  swc1        $fv1, 0x70($s1)
/* E182A4 80188B74 E62A0074 */  swc1        $ft3, 0x74($s1)
/* E182A8 80188B78 E6200008 */  swc1        $fv0, 0x8($s1)
/* E182AC 80188B7C E62000F4 */  swc1        $fv0, 0xF4($s1)
/* E182B0 80188B80 AFAE0014 */  sw          $t6, 0x14($sp)
/* E182B4 80188B84 AFA70010 */  sw          $a3, 0x10($sp)
/* E182B8 80188B88 0C006486 */  jal         Audio_PlaySfx
/* E182BC 80188B8C 8FA50068 */   lw         $a1, 0x68($sp)
/* E182C0 80188B90 100004C5 */  b           .LE16C50_80189EA8
/* E182C4 80188B94 02202025 */   or         $a0, $s1, $zero
.LE16C50_80188B98:
/* E182C8 80188B98 44809000 */  mtc1        $zero, $ft5
/* E182CC 80188B9C 3C048017 */  lui         $a0, %hi(D_801779A8)
/* E182D0 80188BA0 4405C000 */  mfc1        $a1, $fs2
/* E182D4 80188BA4 4406A000 */  mfc1        $a2, $fs0
/* E182D8 80188BA8 248479A8 */  addiu       $a0, $a0, %lo(D_801779A8)
/* E182DC 80188BAC 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E182E0 80188BB0 26300018 */  addiu       $s0, $s1, 0x18
/* E182E4 80188BB4 0C026F0B */  jal         Math_SmoothStepToF
/* E182E8 80188BB8 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E182EC 80188BBC 44803000 */  mtc1        $zero, $ft1
/* E182F0 80188BC0 8E2F0028 */  lw          $t7, 0x28($s1)
/* E182F4 80188BC4 3C01801C */  lui         $at, %hi(D_E16C50_801C09C4)
/* E182F8 80188BC8 4406A000 */  mfc1        $a2, $fs0
/* E182FC 80188BCC E5E60000 */  swc1        $ft1, 0x0($t7)
/* E18300 80188BD0 C42409C4 */  lwc1        $ft0, %lo(D_E16C50_801C09C4)($at)
/* E18304 80188BD4 4407C000 */  mfc1        $a3, $fs2
/* E18308 80188BD8 02002025 */  or          $a0, $s0, $zero
/* E1830C 80188BDC 24050000 */  addiu       $a1, $zero, 0x0
/* E18310 80188BE0 0C026F4E */  jal         Math_SmoothStepToAngle
/* E18314 80188BE4 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E18318 80188BE8 C6280018 */  lwc1        $ft2, 0x18($s1)
/* E1831C 80188BEC 4614403C */  c.lt.s      $ft2, $fs0
/* E18320 80188BF0 00000000 */  nop
/* E18324 80188BF4 450204AC */  bc1fl       .LE16C50_80189EA8
/* E18328 80188BF8 02202025 */   or         $a0, $s1, $zero
/* E1832C 80188BFC 8E58006C */  lw          $t8, 0x6C($s2)
/* E18330 80188C00 3C043940 */  lui         $a0, (0x39408091 >> 16)
/* E18334 80188C04 34848091 */  ori         $a0, $a0, (0x39408091 & 0xFFFF)
/* E18338 80188C08 1700000B */  bnez        $t8, .LE16C50_80188C38
/* E1833C 80188C0C 262503FC */   addiu      $a1, $s1, 0x3FC
/* E18340 80188C10 3C19800C */  lui         $t9, %hi(D_800C5D34)
/* E18344 80188C14 3C08800C */  lui         $t0, %hi(D_800C5D3C)
/* E18348 80188C18 25085D3C */  addiu       $t0, $t0, %lo(D_800C5D3C)
/* E1834C 80188C1C 27275D34 */  addiu       $a3, $t9, %lo(D_800C5D34)
/* E18350 80188C20 AFA70010 */  sw          $a3, 0x10($sp)
/* E18354 80188C24 AFA80014 */  sw          $t0, 0x14($sp)
/* E18358 80188C28 0C006486 */  jal         Audio_PlaySfx
/* E1835C 80188C2C 24060004 */   addiu      $a2, $zero, 0x4
/* E18360 80188C30 24090001 */  addiu       $t1, $zero, 0x1
/* E18364 80188C34 AE49006C */  sw          $t1, 0x6C($s2)
.LE16C50_80188C38:
/* E18368 80188C38 44805000 */  mtc1        $zero, $ft3
/* E1836C 80188C3C 44809000 */  mtc1        $zero, $ft5
/* E18370 80188C40 3C04801C */  lui         $a0, %hi(D_E16C50_801C22F0 + 0x24)
/* E18374 80188C44 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E18378 80188C48 E62A0018 */  swc1        $ft3, 0x18($s1)
/* E1837C 80188C4C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E18380 80188C50 24842314 */  addiu       $a0, $a0, %lo(D_E16C50_801C22F0 + 0x24)
/* E18384 80188C54 24050000 */  addiu       $a1, $zero, 0x0
/* E18388 80188C58 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E1838C 80188C5C 0C026F0B */  jal         Math_SmoothStepToF
/* E18390 80188C60 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E18394 80188C64 44803000 */  mtc1        $zero, $ft1
/* E18398 80188C68 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1839C 80188C6C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E183A0 80188C70 00C03821 */  addu        $a3, $a2, $zero
/* E183A4 80188C74 26240160 */  addiu       $a0, $s1, 0x160
/* E183A8 80188C78 3C054000 */  lui         $a1, (0x40000000 >> 16)
/* E183AC 80188C7C 0C026F0B */  jal         Math_SmoothStepToF
/* E183B0 80188C80 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E183B4 80188C84 44802000 */  mtc1        $zero, $ft0
/* E183B8 80188C88 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E183BC 80188C8C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E183C0 80188C90 3C053F99 */  lui         $a1, (0x3F99999A >> 16)
/* E183C4 80188C94 34A5999A */  ori         $a1, $a1, (0x3F99999A & 0xFFFF)
/* E183C8 80188C98 00C03821 */  addu        $a3, $a2, $zero
/* E183CC 80188C9C 26240164 */  addiu       $a0, $s1, 0x164
/* E183D0 80188CA0 0C026F0B */  jal         Math_SmoothStepToF
/* E183D4 80188CA4 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E183D8 80188CA8 3C01801C */  lui         $at, %hi(D_E16C50_801C22F0 + 0x24)
/* E183DC 80188CAC C4282314 */  lwc1        $ft2, %lo(D_E16C50_801C22F0 + 0x24)($at)
/* E183E0 80188CB0 262A03FC */  addiu       $t2, $s1, 0x3FC
/* E183E4 80188CB4 4614403C */  c.lt.s      $ft2, $fs0
/* E183E8 80188CB8 00000000 */  nop
/* E183EC 80188CBC 4502047A */  bc1fl       .LE16C50_80189EA8
/* E183F0 80188CC0 02202025 */   or         $a0, $s1, $zero
/* E183F4 80188CC4 0C0013AC */  jal         Rand_ZeroOne
/* E183F8 80188CC8 AFAA0068 */   sw         $t2, 0x68($sp)
/* E183FC 80188CCC 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E18400 80188CD0 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E18404 80188CD4 44819000 */  mtc1        $at, $ft5
/* E18408 80188CD8 3C0B8018 */  lui         $t3, %hi(gPlayer)
/* E1840C 80188CDC 8D6B8280 */  lw          $t3, %lo(gPlayer)($t3)
/* E18410 80188CE0 46125182 */  mul.s       $ft1, $ft3, $ft5
/* E18414 80188CE4 C5640040 */  lwc1        $ft0, 0x40($t3)
/* E18418 80188CE8 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1841C 80188CEC 0C0013AC */  jal         Rand_ZeroOne
/* E18420 80188CF0 E62800F0 */   swc1       $ft2, 0xF0($s1)
/* E18424 80188CF4 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E18428 80188CF8 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E1842C 80188CFC 44819000 */  mtc1        $at, $ft5
/* E18430 80188D00 3C0C8018 */  lui         $t4, %hi(gPlayer)
/* E18434 80188D04 8D8C8280 */  lw          $t4, %lo(gPlayer)($t4)
/* E18438 80188D08 46125102 */  mul.s       $ft0, $ft3, $ft5
/* E1843C 80188D0C C5860044 */  lwc1        $ft1, 0x44($t4)
/* E18440 80188D10 46043200 */  add.s       $ft2, $ft1, $ft0
/* E18444 80188D14 0C0013AC */  jal         Rand_ZeroOne
/* E18448 80188D18 E62800F4 */   swc1       $ft2, 0xF4($s1)
/* E1844C 80188D1C 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E18450 80188D20 3C01801C */  lui         $at, %hi(D_E16C50_801C09C8)
/* E18454 80188D24 C43209C8 */  lwc1        $ft5, %lo(D_E16C50_801C09C8)($at)
/* E18458 80188D28 3C01801C */  lui         $at, %hi(D_E16C50_801C09CC)
/* E1845C 80188D2C C42409CC */  lwc1        $ft0, %lo(D_E16C50_801C09CC)($at)
/* E18460 80188D30 46125182 */  mul.s       $ft1, $ft3, $ft5
/* E18464 80188D34 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E18468 80188D38 44815000 */  mtc1        $at, $ft3
/* E1846C 80188D3C 862200D2 */  lh          $v0, 0xD2($s1)
/* E18470 80188D40 3C01801C */  lui         $at, %hi(D_E16C50_801C09D0)
/* E18474 80188D44 E62A0160 */  swc1        $ft3, 0x160($s1)
/* E18478 80188D48 240A0003 */  addiu       $t2, $zero, 0x3
/* E1847C 80188D4C 46043200 */  add.s       $ft2, $ft1, $ft0
/* E18480 80188D50 E62800E4 */  swc1        $ft2, 0xE4($s1)
/* E18484 80188D54 C43209D0 */  lwc1        $ft5, %lo(D_E16C50_801C09D0)($at)
/* E18488 80188D58 14400016 */  bnez        $v0, .LE16C50_80188DB4
/* E1848C 80188D5C E6320164 */   swc1       $ft5, 0x164($s1)
/* E18490 80188D60 862D00CA */  lh          $t5, 0xCA($s1)
/* E18494 80188D64 15A00013 */  bnez        $t5, .LE16C50_80188DB4
/* E18498 80188D68 00000000 */   nop
/* E1849C 80188D6C 862E00CC */  lh          $t6, 0xCC($s1)
/* E184A0 80188D70 15C00010 */  bnez        $t6, .LE16C50_80188DB4
/* E184A4 80188D74 00000000 */   nop
/* E184A8 80188D78 862F00CE */  lh          $t7, 0xCE($s1)
/* E184AC 80188D7C 15E0000D */  bnez        $t7, .LE16C50_80188DB4
/* E184B0 80188D80 00000000 */   nop
/* E184B4 80188D84 863800BE */  lh          $t8, 0xBE($s1)
/* E184B8 80188D88 1700000A */  bnez        $t8, .LE16C50_80188DB4
/* E184BC 80188D8C 00000000 */   nop
/* E184C0 80188D90 863900C0 */  lh          $t9, 0xC0($s1)
/* E184C4 80188D94 17200007 */  bnez        $t9, .LE16C50_80188DB4
/* E184C8 80188D98 00000000 */   nop
/* E184CC 80188D9C 862800C2 */  lh          $t0, 0xC2($s1)
/* E184D0 80188DA0 24090001 */  addiu       $t1, $zero, 0x1
/* E184D4 80188DA4 15000003 */  bnez        $t0, .LE16C50_80188DB4
/* E184D8 80188DA8 00000000 */   nop
/* E184DC 80188DAC A62900D2 */  sh          $t1, 0xD2($s1)
/* E184E0 80188DB0 862200D2 */  lh          $v0, 0xD2($s1)
.LE16C50_80188DB4:
/* E184E4 80188DB4 5040002D */  beql        $v0, $zero, .LE16C50_80188E6C
/* E184E8 80188DB8 44802000 */   mtc1       $zero, $ft0
/* E184EC 80188DBC A62A00B0 */  sh          $t2, 0xB0($s1)
/* E184F0 80188DC0 862200B0 */  lh          $v0, 0xB0($s1)
/* E184F4 80188DC4 3C01801C */  lui         $at, %hi(D_E16C50_801C09D4)
/* E184F8 80188DC8 862B00BA */  lh          $t3, 0xBA($s1)
/* E184FC 80188DCC A62200AE */  sh          $v0, 0xAE($s1)
/* E18500 80188DD0 A62200AC */  sh          $v0, 0xAC($s1)
/* E18504 80188DD4 C42609D4 */  lwc1        $ft1, %lo(D_E16C50_801C09D4)($at)
/* E18508 80188DD8 24010001 */  addiu       $at, $zero, 0x1
/* E1850C 80188DDC 1161000F */  beq         $t3, $at, .LE16C50_80188E1C
/* E18510 80188DE0 E62600E4 */   swc1       $ft1, 0xE4($s1)
/* E18514 80188DE4 8E4C0000 */  lw          $t4, 0x0($s2)
/* E18518 80188DE8 24010002 */  addiu       $at, $zero, 0x2
/* E1851C 80188DEC 1181000B */  beq         $t4, $at, .LE16C50_80188E1C
/* E18520 80188DF0 00000000 */   nop
/* E18524 80188DF4 0C0013AC */  jal         Rand_ZeroOne
/* E18528 80188DF8 00000000 */   nop
/* E1852C 80188DFC 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E18530 80188E00 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E18534 80188E04 44814000 */  mtc1        $at, $ft2
/* E18538 80188E08 3C01801C */  lui         $at, %hi(D_E16C50_801C09D8)
/* E1853C 80188E0C C43209D8 */  lwc1        $ft5, %lo(D_E16C50_801C09D8)($at)
/* E18540 80188E10 46082282 */  mul.s       $ft3, $ft0, $ft2
/* E18544 80188E14 46125180 */  add.s       $ft1, $ft3, $ft5
/* E18548 80188E18 E62600E4 */  swc1        $ft1, 0xE4($s1)
.LE16C50_80188E1C:
/* E1854C 80188E1C 3C0D8018 */  lui         $t5, %hi(gPlayer)
/* E18550 80188E20 8DAD8280 */  lw          $t5, %lo(gPlayer)($t5)
/* E18554 80188E24 3C018017 */  lui         $at, %hi(D_80177D20)
/* E18558 80188E28 C4287D20 */  lwc1        $ft2, %lo(D_80177D20)($at)
/* E1855C 80188E2C C5A40048 */  lwc1        $ft0, 0x48($t5)
/* E18560 80188E30 C63200E4 */  lwc1        $ft5, 0xE4($s1)
/* E18564 80188E34 3C0E8018 */  lui         $t6, %hi(gPlayer)
/* E18568 80188E38 46082281 */  sub.s       $ft3, $ft0, $ft2
/* E1856C 80188E3C 3C0F8018 */  lui         $t7, %hi(gPlayer)
/* E18570 80188E40 460A9180 */  add.s       $ft1, $ft5, $ft3
/* E18574 80188E44 E626000C */  swc1        $ft1, 0xC($s1)
/* E18578 80188E48 8DCE8280 */  lw          $t6, %lo(gPlayer)($t6)
/* E1857C 80188E4C C5C00040 */  lwc1        $fv0, 0x40($t6)
/* E18580 80188E50 E6200004 */  swc1        $fv0, 0x4($s1)
/* E18584 80188E54 E62000F0 */  swc1        $fv0, 0xF0($s1)
/* E18588 80188E58 8DEF8280 */  lw          $t7, %lo(gPlayer)($t7)
/* E1858C 80188E5C C5E00044 */  lwc1        $fv0, 0x44($t7)
/* E18590 80188E60 E6200008 */  swc1        $fv0, 0x8($s1)
/* E18594 80188E64 E62000F4 */  swc1        $fv0, 0xF4($s1)
/* E18598 80188E68 44802000 */  mtc1        $zero, $ft0
.LE16C50_80188E6C:
/* E1859C 80188E6C 3C01801C */  lui         $at, %hi(D_E16C50_801C22F0 + 0x24)
/* E185A0 80188E70 24180032 */  addiu       $t8, $zero, 0x32
/* E185A4 80188E74 E4242314 */  swc1        $ft0, %lo(D_E16C50_801C22F0 + 0x24)($at)
/* E185A8 80188E78 24190002 */  addiu       $t9, $zero, 0x2
/* E185AC 80188E7C A6380050 */  sh          $t8, 0x50($s1)
/* E185B0 80188E80 A639004E */  sh          $t9, 0x4E($s1)
/* E185B4 80188E84 3C08800C */  lui         $t0, %hi(D_800C5D34)
/* E185B8 80188E88 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E185BC 80188E8C 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E185C0 80188E90 25075D34 */  addiu       $a3, $t0, %lo(D_800C5D34)
/* E185C4 80188E94 3C043940 */  lui         $a0, (0x39408092 >> 16)
/* E185C8 80188E98 AE400020 */  sw          $zero, 0x20($s2)
/* E185CC 80188E9C 34848092 */  ori         $a0, $a0, (0x39408092 & 0xFFFF)
/* E185D0 80188EA0 AFA70010 */  sw          $a3, 0x10($sp)
/* E185D4 80188EA4 AFA90014 */  sw          $t1, 0x14($sp)
/* E185D8 80188EA8 8FA50068 */  lw          $a1, 0x68($sp)
/* E185DC 80188EAC 0C006486 */  jal         Audio_PlaySfx
/* E185E0 80188EB0 24060004 */   addiu      $a2, $zero, 0x4
/* E185E4 80188EB4 100003FC */  b           .LE16C50_80189EA8
/* E185E8 80188EB8 02202025 */   or         $a0, $s1, $zero
.LE16C50_80188EBC:
/* E185EC 80188EBC 44804000 */  mtc1        $zero, $ft2
/* E185F0 80188EC0 3C048017 */  lui         $a0, %hi(D_801779A8)
/* E185F4 80188EC4 4405C000 */  mfc1        $a1, $fs2
/* E185F8 80188EC8 4406A000 */  mfc1        $a2, $fs0
/* E185FC 80188ECC 248479A8 */  addiu       $a0, $a0, %lo(D_801779A8)
/* E18600 80188ED0 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E18604 80188ED4 0C026F0B */  jal         Math_SmoothStepToF
/* E18608 80188ED8 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1860C 80188EDC 86220050 */  lh          $v0, 0x50($s1)
/* E18610 80188EE0 2401000A */  addiu       $at, $zero, 0xA
/* E18614 80188EE4 3C038018 */  lui         $v1, %hi(D_80178358)
/* E18618 80188EE8 14410016 */  bne         $v0, $at, .LE16C50_80188F44
/* E1861C 80188EEC 24638358 */   addiu      $v1, $v1, %lo(D_80178358)
/* E18620 80188EF0 3C048018 */  lui         $a0, %hi(D_80178354)
/* E18624 80188EF4 240500FF */  addiu       $a1, $zero, 0xFF
/* E18628 80188EF8 3C068018 */  lui         $a2, %hi(D_80178350)
/* E1862C 80188EFC 24C68350 */  addiu       $a2, $a2, %lo(D_80178350)
/* E18630 80188F00 24848354 */  addiu       $a0, $a0, %lo(D_80178354)
/* E18634 80188F04 AC850000 */  sw          $a1, 0x0($a0)
/* E18638 80188F08 ACC50000 */  sw          $a1, 0x0($a2)
/* E1863C 80188F0C 3C018018 */  lui         $at, %hi(D_80178348)
/* E18640 80188F10 AC258348 */  sw          $a1, %lo(D_80178348)($at)
/* E18644 80188F14 3C078018 */  lui         $a3, %hi(D_80178340)
/* E18648 80188F18 24E78340 */  addiu       $a3, $a3, %lo(D_80178340)
/* E1864C 80188F1C AC650000 */  sw          $a1, 0x0($v1)
/* E18650 80188F20 ACE50000 */  sw          $a1, 0x0($a3)
/* E18654 80188F24 AC600000 */  sw          $zero, 0x0($v1)
/* E18658 80188F28 3C018018 */  lui         $at, %hi(D_8017835C)
/* E1865C 80188F2C 240D0019 */  addiu       $t5, $zero, 0x19
/* E18660 80188F30 AC2D835C */  sw          $t5, %lo(D_8017835C)($at)
/* E18664 80188F34 3C018018 */  lui         $at, %hi(D_80178480)
/* E18668 80188F38 240E0032 */  addiu       $t6, $zero, 0x32
/* E1866C 80188F3C AC2E8480 */  sw          $t6, %lo(D_80178480)($at)
/* E18670 80188F40 86220050 */  lh          $v0, 0x50($s1)
.LE16C50_80188F44:
/* E18674 80188F44 3C048018 */  lui         $a0, %hi(D_80178354)
/* E18678 80188F48 3C068018 */  lui         $a2, %hi(D_80178350)
/* E1867C 80188F4C 3C078018 */  lui         $a3, %hi(D_80178340)
/* E18680 80188F50 24E78340 */  addiu       $a3, $a3, %lo(D_80178340)
/* E18684 80188F54 24C68350 */  addiu       $a2, $a2, %lo(D_80178350)
/* E18688 80188F58 144003D2 */  bnez        $v0, .LE16C50_80189EA4
/* E1868C 80188F5C 24848354 */   addiu      $a0, $a0, %lo(D_80178354)
/* E18690 80188F60 8E4F0020 */  lw          $t7, 0x20($s2)
/* E18694 80188F64 44809000 */  mtc1        $zero, $ft5
/* E18698 80188F68 24180001 */  addiu       $t8, $zero, 0x1
/* E1869C 80188F6C 15E00007 */  bnez        $t7, .LE16C50_80188F8C
/* E186A0 80188F70 3C05437F */   lui        $a1, (0x437F0000 >> 16)
/* E186A4 80188F74 AE580020 */  sw          $t8, 0x20($s2)
/* E186A8 80188F78 ACE00000 */  sw          $zero, 0x0($a3)
/* E186AC 80188F7C AC800000 */  sw          $zero, 0x0($a0)
/* E186B0 80188F80 ACC00000 */  sw          $zero, 0x0($a2)
/* E186B4 80188F84 3C018018 */  lui         $at, %hi(D_80178348)
/* E186B8 80188F88 AC208348 */  sw          $zero, %lo(D_80178348)($at)
.LE16C50_80188F8C:
/* E186BC 80188F8C 3C04801C */  lui         $a0, %hi(D_E16C50_801C22F0 + 0x24)
/* E186C0 80188F90 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E186C4 80188F94 4407C000 */  mfc1        $a3, $fs2
/* E186C8 80188F98 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E186CC 80188F9C 24842314 */  addiu       $a0, $a0, %lo(D_E16C50_801C22F0 + 0x24)
/* E186D0 80188FA0 0C026F0B */  jal         Math_SmoothStepToF
/* E186D4 80188FA4 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E186D8 80188FA8 3C01801C */  lui         $at, %hi(D_E16C50_801C09DC)
/* E186DC 80188FAC C42209DC */  lwc1        $fv1, %lo(D_E16C50_801C09DC)($at)
/* E186E0 80188FB0 44805000 */  mtc1        $zero, $ft3
/* E186E4 80188FB4 4405A000 */  mfc1        $a1, $fs0
/* E186E8 80188FB8 44061000 */  mfc1        $a2, $fv1
/* E186EC 80188FBC 44071000 */  mfc1        $a3, $fv1
/* E186F0 80188FC0 26240160 */  addiu       $a0, $s1, 0x160
/* E186F4 80188FC4 0C026F0B */  jal         Math_SmoothStepToF
/* E186F8 80188FC8 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E186FC 80188FCC 3C01801C */  lui         $at, %hi(D_E16C50_801C09E0)
/* E18700 80188FD0 C42209E0 */  lwc1        $fv1, %lo(D_E16C50_801C09E0)($at)
/* E18704 80188FD4 44803000 */  mtc1        $zero, $ft1
/* E18708 80188FD8 4405A000 */  mfc1        $a1, $fs0
/* E1870C 80188FDC 44061000 */  mfc1        $a2, $fv1
/* E18710 80188FE0 44071000 */  mfc1        $a3, $fv1
/* E18714 80188FE4 26240164 */  addiu       $a0, $s1, 0x164
/* E18718 80188FE8 0C026F0B */  jal         Math_SmoothStepToF
/* E1871C 80188FEC E7A60010 */   swc1       $ft1, 0x10($sp)
/* E18720 80188FF0 3C03801C */  lui         $v1, %hi(D_E16C50_801C22F0)
/* E18724 80188FF4 246322F0 */  addiu       $v1, $v1, %lo(D_E16C50_801C22F0)
/* E18728 80188FF8 3C01437E */  lui         $at, (0x437E0000 >> 16)
/* E1872C 80188FFC 44812000 */  mtc1        $at, $ft0
/* E18730 80189000 C4680024 */  lwc1        $ft2, 0x24($v1)
/* E18734 80189004 3C01437F */  lui         $at, (0x437F0000 >> 16)
/* E18738 80189008 240D0001 */  addiu       $t5, $zero, 0x1
/* E1873C 8018900C 4608203C */  c.lt.s      $ft0, $ft2
/* E18740 80189010 00000000 */  nop
/* E18744 80189014 450203A4 */  bc1fl       .LE16C50_80189EA8
/* E18748 80189018 02202025 */   or         $a0, $s1, $zero
/* E1874C 8018901C 44819000 */  mtc1        $at, $ft5
/* E18750 80189020 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E18754 80189024 44815000 */  mtc1        $at, $ft3
/* E18758 80189028 E4720024 */  swc1        $ft5, 0x24($v1)
/* E1875C 8018902C 8E2A0028 */  lw          $t2, 0x28($s1)
/* E18760 80189030 24010001 */  addiu       $at, $zero, 0x1
/* E18764 80189034 240B0064 */  addiu       $t3, $zero, 0x64
/* E18768 80189038 E54A0000 */  swc1        $ft3, 0x0($t2)
/* E1876C 8018903C 862200D4 */  lh          $v0, 0xD4($s1)
/* E18770 80189040 E6340160 */  swc1        $fs0, 0x160($s1)
/* E18774 80189044 E6340164 */  swc1        $fs0, 0x164($s1)
/* E18778 80189048 10400005 */  beqz        $v0, .LE16C50_80189060
/* E1877C 8018904C 2418001E */   addiu      $t8, $zero, 0x1E
/* E18780 80189050 10410005 */  beq         $v0, $at, .LE16C50_80189068
/* E18784 80189054 240C0577 */   addiu      $t4, $zero, 0x577
/* E18788 80189058 10000005 */  b           .LE16C50_80189070
/* E1878C 8018905C A62000D4 */   sh         $zero, 0xD4($s1)
.LE16C50_80189060:
/* E18790 80189060 10000002 */  b           .LE16C50_8018906C
/* E18794 80189064 A62B0050 */   sh         $t3, 0x50($s1)
.LE16C50_80189068:
/* E18798 80189068 A62C0050 */  sh          $t4, 0x50($s1)
.LE16C50_8018906C:
/* E1879C 8018906C A62000D4 */  sh          $zero, 0xD4($s1)
.LE16C50_80189070:
/* E187A0 80189070 AE4D0070 */  sw          $t5, 0x70($s2)
/* E187A4 80189074 862F00D2 */  lh          $t7, 0xD2($s1)
/* E187A8 80189078 240E0004 */  addiu       $t6, $zero, 0x4
/* E187AC 8018907C A62E004E */  sh          $t6, 0x4E($s1)
/* E187B0 80189080 11E0000D */  beqz        $t7, .LE16C50_801890B8
/* E187B4 80189084 24080003 */   addiu      $t0, $zero, 0x3
/* E187B8 80189088 862200D0 */  lh          $v0, 0xD0($s1)
/* E187BC 8018908C 44803000 */  mtc1        $zero, $ft1
/* E187C0 80189090 44802000 */  mtc1        $zero, $ft0
/* E187C4 80189094 28410002 */  slti        $at, $v0, 0x2
/* E187C8 80189098 A6380050 */  sh          $t8, 0x50($s1)
/* E187CC 8018909C A62000D2 */  sh          $zero, 0xD2($s1)
/* E187D0 801890A0 E62600FC */  swc1        $ft1, 0xFC($s1)
/* E187D4 801890A4 10200003 */  beqz        $at, .LE16C50_801890B4
/* E187D8 801890A8 E62400F8 */   swc1       $ft0, 0xF8($s1)
/* E187DC 801890AC 24590001 */  addiu       $t9, $v0, 0x1
/* E187E0 801890B0 A63900D0 */  sh          $t9, 0xD0($s1)
.LE16C50_801890B4:
/* E187E4 801890B4 A628004E */  sh          $t0, 0x4E($s1)
.LE16C50_801890B8:
/* E187E8 801890B8 8E420018 */  lw          $v0, 0x18($s2)
/* E187EC 801890BC 3C043140 */  lui         $a0, (0x31404066 >> 16)
/* E187F0 801890C0 34844066 */  ori         $a0, $a0, (0x31404066 & 0xFFFF)
/* E187F4 801890C4 1040000B */  beqz        $v0, .LE16C50_801890F4
/* E187F8 801890C8 262503FC */   addiu      $a1, $s1, 0x3FC
/* E187FC 801890CC 8E490000 */  lw          $t1, 0x0($s2)
/* E18800 801890D0 24010002 */  addiu       $at, $zero, 0x2
/* E18804 801890D4 240A0001 */  addiu       $t2, $zero, 0x1
/* E18808 801890D8 51210005 */  beql        $t1, $at, .LE16C50_801890F0
/* E1880C 801890DC AE400000 */   sw         $zero, 0x0($s2)
/* E18810 801890E0 AE4A0000 */  sw          $t2, 0x0($s2)
/* E18814 801890E4 10000003 */  b           .LE16C50_801890F4
/* E18818 801890E8 8E420018 */   lw         $v0, 0x18($s2)
/* E1881C 801890EC AE400000 */  sw          $zero, 0x0($s2)
.LE16C50_801890F0:
/* E18820 801890F0 8E420018 */  lw          $v0, 0x18($s2)
.LE16C50_801890F4:
/* E18824 801890F4 10400004 */  beqz        $v0, .LE16C50_80189108
/* E18828 801890F8 3C0142B4 */   lui        $at, (0x42B40000 >> 16)
/* E1882C 801890FC 8E4B0000 */  lw          $t3, 0x0($s2)
/* E18830 80189100 55600369 */  bnel        $t3, $zero, .LE16C50_80189EA8
/* E18834 80189104 02202025 */   or         $a0, $s1, $zero
.LE16C50_80189108:
/* E18838 80189108 44814000 */  mtc1        $at, $ft2
/* E1883C 8018910C 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E18840 80189110 44819000 */  mtc1        $at, $ft5
/* E18844 80189114 3C0C800C */  lui         $t4, %hi(D_800C5D34)
/* E18848 80189118 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E1884C 8018911C 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E18850 80189120 25875D34 */  addiu       $a3, $t4, %lo(D_800C5D34)
/* E18854 80189124 E62800DC */  swc1        $ft2, 0xDC($s1)
/* E18858 80189128 E63200E0 */  swc1        $ft5, 0xE0($s1)
/* E1885C 8018912C AFAD0014 */  sw          $t5, 0x14($sp)
/* E18860 80189130 AFA70010 */  sw          $a3, 0x10($sp)
/* E18864 80189134 0C006486 */  jal         Audio_PlaySfx
/* E18868 80189138 24060004 */   addiu      $a2, $zero, 0x4
/* E1886C 8018913C 3C020603 */  lui         $v0, %hi(D_6028578)
/* E18870 80189140 24428578 */  addiu       $v0, $v0, %lo(D_6028578)
/* E18874 80189144 00027100 */  sll         $t6, $v0, 4
/* E18878 80189148 000E7F02 */  srl         $t7, $t6, 28
/* E1887C 8018914C 000FC080 */  sll         $t8, $t7, 2
/* E18880 80189150 3C19800E */  lui         $t9, %hi(gSegments)
/* E18884 80189154 0338C821 */  addu        $t9, $t9, $t8
/* E18888 80189158 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* E1888C 8018915C 8F391FD0 */  lw          $t9, %lo(gSegments)($t9)
/* E18890 80189160 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* E18894 80189164 00414024 */  and         $t0, $v0, $at
/* E18898 80189168 3C018000 */  lui         $at, (0x80000000 >> 16)
/* E1889C 8018916C 03284821 */  addu        $t1, $t9, $t0
/* E188A0 80189170 01215021 */  addu        $t2, $t1, $at
/* E188A4 80189174 AE2A0028 */  sw          $t2, 0x28($s1)
/* E188A8 80189178 1000034A */  b           .LE16C50_80189EA4
/* E188AC 8018917C AE40001C */   sw         $zero, 0x1C($s2)
.LE16C50_80189180:
/* E188B0 80189180 862B0050 */  lh          $t3, 0x50($s1)
/* E188B4 80189184 24010001 */  addiu       $at, $zero, 0x1
/* E188B8 80189188 262403FC */  addiu       $a0, $s1, 0x3FC
/* E188BC 8018918C 55610013 */  bnel        $t3, $at, .LE16C50_801891DC
/* E188C0 80189190 8E4F0000 */   lw         $t7, 0x0($s2)
/* E188C4 80189194 0C006940 */  jal         Audio_KillSfx
/* E188C8 80189198 AFA40068 */   sw         $a0, 0x68($sp)
/* E188CC 8018919C 8E4C001C */  lw          $t4, 0x1C($s2)
/* E188D0 801891A0 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E188D4 801891A4 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E188D8 801891A8 1580000B */  bnez        $t4, .LE16C50_801891D8
/* E188DC 801891AC 3C043100 */   lui        $a0, (0x31008069 >> 16)
/* E188E0 801891B0 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E188E4 801891B4 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E188E8 801891B8 AFAD0014 */  sw          $t5, 0x14($sp)
/* E188EC 801891BC 34848069 */  ori         $a0, $a0, (0x31008069 & 0xFFFF)
/* E188F0 801891C0 8FA50068 */  lw          $a1, 0x68($sp)
/* E188F4 801891C4 24060004 */  addiu       $a2, $zero, 0x4
/* E188F8 801891C8 0C006486 */  jal         Audio_PlaySfx
/* E188FC 801891CC AFA70010 */   sw         $a3, 0x10($sp)
/* E18900 801891D0 240E0001 */  addiu       $t6, $zero, 0x1
/* E18904 801891D4 AE4E001C */  sw          $t6, 0x1C($s2)
.LE16C50_801891D8:
/* E18908 801891D8 8E4F0000 */  lw          $t7, 0x0($s2)
.LE16C50_801891DC:
/* E1890C 801891DC 51E00018 */  beql        $t7, $zero, .LE16C50_80189240
/* E18910 801891E0 862B00D0 */   lh         $t3, 0xD0($s1)
/* E18914 801891E4 863800BA */  lh          $t8, 0xBA($s1)
/* E18918 801891E8 24010001 */  addiu       $at, $zero, 0x1
/* E1891C 801891EC 2409001E */  addiu       $t1, $zero, 0x1E
/* E18920 801891F0 1701000F */  bne         $t8, $at, .LE16C50_80189230
/* E18924 801891F4 240A0008 */   addiu      $t2, $zero, 0x8
/* E18928 801891F8 3C0142B4 */  lui         $at, (0x42B40000 >> 16)
/* E1892C 801891FC 44815000 */  mtc1        $at, $ft3
/* E18930 80189200 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E18934 80189204 44813000 */  mtc1        $at, $ft1
/* E18938 80189208 3C014396 */  lui         $at, (0x43960000 >> 16)
/* E1893C 8018920C 44812000 */  mtc1        $at, $ft0
/* E18940 80189210 2419001E */  addiu       $t9, $zero, 0x1E
/* E18944 80189214 24080005 */  addiu       $t0, $zero, 0x5
/* E18948 80189218 A6390052 */  sh          $t9, 0x52($s1)
/* E1894C 8018921C A628004E */  sh          $t0, 0x4E($s1)
/* E18950 80189220 E62A00DC */  swc1        $ft3, 0xDC($s1)
/* E18954 80189224 E62600E0 */  swc1        $ft1, 0xE0($s1)
/* E18958 80189228 1000031E */  b           .LE16C50_80189EA4
/* E1895C 8018922C E624016C */   swc1       $ft0, 0x16C($s1)
.LE16C50_80189230:
/* E18960 80189230 A6290052 */  sh          $t1, 0x52($s1)
/* E18964 80189234 1000031B */  b           .LE16C50_80189EA4
/* E18968 80189238 A62A004E */   sh         $t2, 0x4E($s1)
/* E1896C 8018923C 862B00D0 */  lh          $t3, 0xD0($s1)
.LE16C50_80189240:
/* E18970 80189240 24010003 */  addiu       $at, $zero, 0x3
/* E18974 80189244 55610010 */  bnel        $t3, $at, .LE16C50_80189288
/* E18978 80189248 862200C4 */   lh         $v0, 0xC4($s1)
/* E1897C 8018924C 8E4C0074 */  lw          $t4, 0x74($s2)
/* E18980 80189250 3C048018 */  lui         $a0, %hi(gMsg_ID_7084)
/* E18984 80189254 2484DFA0 */  addiu       $a0, $a0, %lo(gMsg_ID_7084)
/* E18988 80189258 5580000B */  bnel        $t4, $zero, .LE16C50_80189288
/* E1898C 8018925C 862200C4 */   lh         $v0, 0xC4($s1)
/* E18990 80189260 0C02EA02 */  jal         func_800BA808
/* E18994 80189264 2405001E */   addiu      $a1, $zero, 0x1E
/* E18998 80189268 240D0004 */  addiu       $t5, $zero, 0x4
/* E1899C 8018926C A62D00D0 */  sh          $t5, 0xD0($s1)
/* E189A0 80189270 8E4E0074 */  lw          $t6, 0x74($s2)
/* E189A4 80189274 25CF0001 */  addiu       $t7, $t6, 0x1
/* E189A8 80189278 AE4F0074 */  sw          $t7, 0x74($s2)
/* E189AC 8018927C 31F90001 */  andi        $t9, $t7, 0x1
/* E189B0 80189280 AE590074 */  sw          $t9, 0x74($s2)
/* E189B4 80189284 862200C4 */  lh          $v0, 0xC4($s1)
.LE16C50_80189288:
/* E189B8 80189288 10400032 */  beqz        $v0, .LE16C50_80189354
/* E189BC 8018928C 00000000 */   nop
/* E189C0 80189290 862800C6 */  lh          $t0, 0xC6($s1)
/* E189C4 80189294 1100002F */  beqz        $t0, .LE16C50_80189354
/* E189C8 80189298 00000000 */   nop
/* E189CC 8018929C 862900C8 */  lh          $t1, 0xC8($s1)
/* E189D0 801892A0 240A05DC */  addiu       $t2, $zero, 0x5DC
/* E189D4 801892A4 240B0004 */  addiu       $t3, $zero, 0x4
/* E189D8 801892A8 1120002A */  beqz        $t1, .LE16C50_80189354
/* E189DC 801892AC 3C0F800E */   lui        $t7, %hi(gSegments)
/* E189E0 801892B0 44804000 */  mtc1        $zero, $ft2
/* E189E4 801892B4 3C020603 */  lui         $v0, %hi(D_6028454)
/* E189E8 801892B8 24428454 */  addiu       $v0, $v0, %lo(D_6028454)
/* E189EC 801892BC A62A0050 */  sh          $t2, 0x50($s1)
/* E189F0 801892C0 00026100 */  sll         $t4, $v0, 4
/* E189F4 801892C4 E62800DC */  swc1        $ft2, 0xDC($s1)
/* E189F8 801892C8 AE400070 */  sw          $zero, 0x70($s2)
/* E189FC 801892CC 000C6F02 */  srl         $t5, $t4, 28
/* E18A00 801892D0 000D7080 */  sll         $t6, $t5, 2
/* E18A04 801892D4 A62B004E */  sh          $t3, 0x4E($s1)
/* E18A08 801892D8 E63400E0 */  swc1        $fs0, 0xE0($s1)
/* E18A0C 801892DC 01EE7821 */  addu        $t7, $t7, $t6
/* E18A10 801892E0 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* E18A14 801892E4 8DEF1FD0 */  lw          $t7, %lo(gSegments)($t7)
/* E18A18 801892E8 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* E18A1C 801892EC 0041C024 */  and         $t8, $v0, $at
/* E18A20 801892F0 3C018000 */  lui         $at, (0x80000000 >> 16)
/* E18A24 801892F4 01F8C821 */  addu        $t9, $t7, $t8
/* E18A28 801892F8 03214021 */  addu        $t0, $t9, $at
/* E18A2C 801892FC AE280028 */  sw          $t0, 0x28($s1)
/* E18A30 80189300 24090001 */  addiu       $t1, $zero, 0x1
/* E18A34 80189304 262403FC */  addiu       $a0, $s1, 0x3FC
/* E18A38 80189308 AE490018 */  sw          $t1, 0x18($s2)
/* E18A3C 8018930C 0C006940 */  jal         Audio_KillSfx
/* E18A40 80189310 AFA40068 */   sw         $a0, 0x68($sp)
/* E18A44 80189314 3C0A800C */  lui         $t2, %hi(D_800C5D34)
/* E18A48 80189318 3C0B800C */  lui         $t3, %hi(D_800C5D3C)
/* E18A4C 8018931C 256B5D3C */  addiu       $t3, $t3, %lo(D_800C5D3C)
/* E18A50 80189320 25475D34 */  addiu       $a3, $t2, %lo(D_800C5D34)
/* E18A54 80189324 3C043140 */  lui         $a0, (0x31404067 >> 16)
/* E18A58 80189328 34844067 */  ori         $a0, $a0, (0x31404067 & 0xFFFF)
/* E18A5C 8018932C AFA70010 */  sw          $a3, 0x10($sp)
/* E18A60 80189330 AFAB0014 */  sw          $t3, 0x14($sp)
/* E18A64 80189334 8FA50068 */  lw          $a1, 0x68($sp)
/* E18A68 80189338 0C006486 */  jal         Audio_PlaySfx
/* E18A6C 8018933C 24060004 */   addiu      $a2, $zero, 0x4
/* E18A70 80189340 A62000C8 */  sh          $zero, 0xC8($s1)
/* E18A74 80189344 862200C8 */  lh          $v0, 0xC8($s1)
/* E18A78 80189348 A62200C6 */  sh          $v0, 0xC6($s1)
/* E18A7C 8018934C 100002D5 */  b           .LE16C50_80189EA4
/* E18A80 80189350 A62200C4 */   sh         $v0, 0xC4($s1)
.LE16C50_80189354:
/* E18A84 80189354 14400005 */  bnez        $v0, .LE16C50_8018936C
/* E18A88 80189358 02202025 */   or         $a0, $s1, $zero
/* E18A8C 8018935C 0C06286C */  jal         func_E16C50_8018A1B0
/* E18A90 80189360 00002825 */   or         $a1, $zero, $zero
/* E18A94 80189364 100002D0 */  b           .LE16C50_80189EA8
/* E18A98 80189368 02202025 */   or         $a0, $s1, $zero
.LE16C50_8018936C:
/* E18A9C 8018936C 862C00C6 */  lh          $t4, 0xC6($s1)
/* E18AA0 80189370 02202025 */  or          $a0, $s1, $zero
/* E18AA4 80189374 55800006 */  bnel        $t4, $zero, .LE16C50_80189390
/* E18AA8 80189378 862D00C8 */   lh         $t5, 0xC8($s1)
/* E18AAC 8018937C 0C06286C */  jal         func_E16C50_8018A1B0
/* E18AB0 80189380 24050001 */   addiu      $a1, $zero, 0x1
/* E18AB4 80189384 100002C8 */  b           .LE16C50_80189EA8
/* E18AB8 80189388 02202025 */   or         $a0, $s1, $zero
/* E18ABC 8018938C 862D00C8 */  lh          $t5, 0xC8($s1)
.LE16C50_80189390:
/* E18AC0 80189390 02202025 */  or          $a0, $s1, $zero
/* E18AC4 80189394 55A002C4 */  bnel        $t5, $zero, .LE16C50_80189EA8
/* E18AC8 80189398 02202025 */   or         $a0, $s1, $zero
/* E18ACC 8018939C 0C06286C */  jal         func_E16C50_8018A1B0
/* E18AD0 801893A0 24050002 */   addiu      $a1, $zero, 0x2
/* E18AD4 801893A4 100002C0 */  b           .LE16C50_80189EA8
/* E18AD8 801893A8 02202025 */   or         $a0, $s1, $zero
.LE16C50_801893AC:
/* E18ADC 801893AC 862E0050 */  lh          $t6, 0x50($s1)
/* E18AE0 801893B0 24010578 */  addiu       $at, $zero, 0x578
/* E18AE4 801893B4 240F0028 */  addiu       $t7, $zero, 0x28
/* E18AE8 801893B8 15C10021 */  bne         $t6, $at, .LE16C50_80189440
/* E18AEC 801893BC 00000000 */   nop
/* E18AF0 801893C0 A62F00AA */  sh          $t7, 0xAA($s1)
/* E18AF4 801893C4 862200AA */  lh          $v0, 0xAA($s1)
/* E18AF8 801893C8 863800BA */  lh          $t8, 0xBA($s1)
/* E18AFC 801893CC 24190001 */  addiu       $t9, $zero, 0x1
/* E18B00 801893D0 A62200A8 */  sh          $v0, 0xA8($s1)
/* E18B04 801893D4 17000002 */  bnez        $t8, .LE16C50_801893E0
/* E18B08 801893D8 A62200A6 */   sh         $v0, 0xA6($s1)
/* E18B0C 801893DC A63900BA */  sh          $t9, 0xBA($s1)
.LE16C50_801893E0:
/* E18B10 801893E0 0C0013AC */  jal         Rand_ZeroOne
/* E18B14 801893E4 00000000 */   nop
/* E18B18 801893E8 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E18B1C 801893EC 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E18B20 801893F0 44815000 */  mtc1        $at, $ft3
/* E18B24 801893F4 3C01801C */  lui         $at, %hi(D_E16C50_801C09E4)
/* E18B28 801893F8 C42409E4 */  lwc1        $ft0, %lo(D_E16C50_801C09E4)($at)
/* E18B2C 801893FC 460A9182 */  mul.s       $ft1, $ft5, $ft3
/* E18B30 80189400 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E18B34 80189404 3C043940 */  lui         $a0, (0x39404068 >> 16)
/* E18B38 80189408 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E18B3C 8018940C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E18B40 80189410 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E18B44 80189414 34844068 */  ori         $a0, $a0, (0x39404068 & 0xFFFF)
/* E18B48 80189418 46043200 */  add.s       $ft2, $ft1, $ft0
/* E18B4C 8018941C 262503FC */  addiu       $a1, $s1, 0x3FC
/* E18B50 80189420 24060004 */  addiu       $a2, $zero, 0x4
/* E18B54 80189424 E62800E4 */  swc1        $ft2, 0xE4($s1)
/* E18B58 80189428 8E480070 */  lw          $t0, 0x70($s2)
/* E18B5C 8018942C 15000004 */  bnez        $t0, .LE16C50_80189440
/* E18B60 80189430 00000000 */   nop
/* E18B64 80189434 AFA70010 */  sw          $a3, 0x10($sp)
/* E18B68 80189438 0C006486 */  jal         Audio_PlaySfx
/* E18B6C 8018943C AFA90014 */   sw         $t1, 0x14($sp)
.LE16C50_80189440:
/* E18B70 80189440 3C01801C */  lui         $at, %hi(D_E16C50_801C09E8)
/* E18B74 80189444 C43209E8 */  lwc1        $ft5, %lo(D_E16C50_801C09E8)($at)
/* E18B78 80189448 4406A000 */  mfc1        $a2, $fs0
/* E18B7C 8018944C 4407C000 */  mfc1        $a3, $fs2
/* E18B80 80189450 2624014C */  addiu       $a0, $s1, 0x14C
/* E18B84 80189454 3C05437F */  lui         $a1, (0x437F0000 >> 16)
/* E18B88 80189458 0C026F0B */  jal         Math_SmoothStepToF
/* E18B8C 8018945C E7B20010 */   swc1       $ft5, 0x10($sp)
/* E18B90 80189460 862A00D0 */  lh          $t2, 0xD0($s1)
/* E18B94 80189464 24010002 */  addiu       $at, $zero, 0x2
/* E18B98 80189468 15410015 */  bne         $t2, $at, .LE16C50_801894C0
/* E18B9C 8018946C 00000000 */   nop
/* E18BA0 80189470 44805000 */  mtc1        $zero, $ft3
/* E18BA4 80189474 C62600D8 */  lwc1        $ft1, 0xD8($s1)
/* E18BA8 80189478 46065032 */  c.eq.s      $ft3, $ft1
/* E18BAC 8018947C 00000000 */  nop
/* E18BB0 80189480 4500000F */  bc1f        .LE16C50_801894C0
/* E18BB4 80189484 00000000 */   nop
/* E18BB8 80189488 8E4B0078 */  lw          $t3, 0x78($s2)
/* E18BBC 8018948C 3C048018 */  lui         $a0, %hi(gMsg_ID_7083)
/* E18BC0 80189490 2484DF4C */  addiu       $a0, $a0, %lo(gMsg_ID_7083)
/* E18BC4 80189494 1560000A */  bnez        $t3, .LE16C50_801894C0
/* E18BC8 80189498 00000000 */   nop
/* E18BCC 8018949C 0C02EA02 */  jal         func_800BA808
/* E18BD0 801894A0 2405001E */   addiu      $a1, $zero, 0x1E
/* E18BD4 801894A4 240C0003 */  addiu       $t4, $zero, 0x3
/* E18BD8 801894A8 A62C00D0 */  sh          $t4, 0xD0($s1)
/* E18BDC 801894AC 8E4D0078 */  lw          $t5, 0x78($s2)
/* E18BE0 801894B0 25AE0001 */  addiu       $t6, $t5, 0x1
/* E18BE4 801894B4 AE4E0078 */  sw          $t6, 0x78($s2)
/* E18BE8 801894B8 31D80001 */  andi        $t8, $t6, 0x1
/* E18BEC 801894BC AE580078 */  sw          $t8, 0x78($s2)
.LE16C50_801894C0:
/* E18BF0 801894C0 3C198017 */  lui         $t9, %hi(gFrameCount)
/* E18BF4 801894C4 8F397DB0 */  lw          $t9, %lo(gFrameCount)($t9)
/* E18BF8 801894C8 3328003F */  andi        $t0, $t9, 0x3F
/* E18BFC 801894CC 5500000A */  bnel        $t0, $zero, .LE16C50_801894F8
/* E18C00 801894D0 86290050 */   lh         $t1, 0x50($s1)
/* E18C04 801894D4 0C0013AC */  jal         Rand_ZeroOne
/* E18C08 801894D8 00000000 */   nop
/* E18C0C 801894DC 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E18C10 801894E0 44812000 */  mtc1        $at, $ft0
/* E18C14 801894E4 44809000 */  mtc1        $zero, $ft5
/* E18C18 801894E8 46040202 */  mul.s       $ft2, $fv0, $ft0
/* E18C1C 801894EC E63200FC */  swc1        $ft5, 0xFC($s1)
/* E18C20 801894F0 E62800F8 */  swc1        $ft2, 0xF8($s1)
/* E18C24 801894F4 86290050 */  lh          $t1, 0x50($s1)
.LE16C50_801894F8:
/* E18C28 801894F8 24180001 */  addiu       $t8, $zero, 0x1
/* E18C2C 801894FC 51200014 */  beql        $t1, $zero, .LE16C50_80189550
/* E18C30 80189500 A63800D2 */   sh         $t8, 0xD2($s1)
/* E18C34 80189504 862A00CA */  lh          $t2, 0xCA($s1)
/* E18C38 80189508 5540004C */  bnel        $t2, $zero, .LE16C50_8018963C
/* E18C3C 8018950C 862B00D4 */   lh         $t3, 0xD4($s1)
/* E18C40 80189510 862B00CC */  lh          $t3, 0xCC($s1)
/* E18C44 80189514 55600049 */  bnel        $t3, $zero, .LE16C50_8018963C
/* E18C48 80189518 862B00D4 */   lh         $t3, 0xD4($s1)
/* E18C4C 8018951C 862C00CE */  lh          $t4, 0xCE($s1)
/* E18C50 80189520 55800046 */  bnel        $t4, $zero, .LE16C50_8018963C
/* E18C54 80189524 862B00D4 */   lh         $t3, 0xD4($s1)
/* E18C58 80189528 862D00BE */  lh          $t5, 0xBE($s1)
/* E18C5C 8018952C 55A00043 */  bnel        $t5, $zero, .LE16C50_8018963C
/* E18C60 80189530 862B00D4 */   lh         $t3, 0xD4($s1)
/* E18C64 80189534 862E00C0 */  lh          $t6, 0xC0($s1)
/* E18C68 80189538 55C00040 */  bnel        $t6, $zero, .LE16C50_8018963C
/* E18C6C 8018953C 862B00D4 */   lh         $t3, 0xD4($s1)
/* E18C70 80189540 862F00C2 */  lh          $t7, 0xC2($s1)
/* E18C74 80189544 55E0003D */  bnel        $t7, $zero, .LE16C50_8018963C
/* E18C78 80189548 862B00D4 */   lh         $t3, 0xD4($s1)
/* E18C7C 8018954C A63800D2 */  sh          $t8, 0xD2($s1)
.LE16C50_80189550:
/* E18C80 80189550 8E590018 */  lw          $t9, 0x18($s2)
/* E18C84 80189554 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E18C88 80189558 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E18C8C 8018955C 13200005 */  beqz        $t9, .LE16C50_80189574
/* E18C90 80189560 3C0142B4 */   lui        $at, (0x42B40000 >> 16)
/* E18C94 80189564 24080001 */  addiu       $t0, $zero, 0x1
/* E18C98 80189568 A628004E */  sh          $t0, 0x4E($s1)
/* E18C9C 8018956C 1000024D */  b           .LE16C50_80189EA4
/* E18CA0 80189570 AE40006C */   sw         $zero, 0x6C($s2)
.LE16C50_80189574:
/* E18CA4 80189574 44815000 */  mtc1        $at, $ft3
/* E18CA8 80189578 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E18CAC 8018957C 44803000 */  mtc1        $zero, $ft1
/* E18CB0 80189580 44802000 */  mtc1        $zero, $ft0
/* E18CB4 80189584 44814000 */  mtc1        $at, $ft2
/* E18CB8 80189588 2409001E */  addiu       $t1, $zero, 0x1E
/* E18CBC 8018958C 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E18CC0 80189590 A6290050 */  sh          $t1, 0x50($s1)
/* E18CC4 80189594 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E18CC8 80189598 3C043140 */  lui         $a0, (0x31404066 >> 16)
/* E18CCC 8018959C E62A00DC */  swc1        $ft3, 0xDC($s1)
/* E18CD0 801895A0 E62600FC */  swc1        $ft1, 0xFC($s1)
/* E18CD4 801895A4 E62400F8 */  swc1        $ft0, 0xF8($s1)
/* E18CD8 801895A8 E62800E0 */  swc1        $ft2, 0xE0($s1)
/* E18CDC 801895AC AFAA0014 */  sw          $t2, 0x14($sp)
/* E18CE0 801895B0 AFA70010 */  sw          $a3, 0x10($sp)
/* E18CE4 801895B4 34844066 */  ori         $a0, $a0, (0x31404066 & 0xFFFF)
/* E18CE8 801895B8 262503FC */  addiu       $a1, $s1, 0x3FC
/* E18CEC 801895BC 0C006486 */  jal         Audio_PlaySfx
/* E18CF0 801895C0 24060004 */   addiu      $a2, $zero, 0x4
/* E18CF4 801895C4 3C020603 */  lui         $v0, %hi(D_6028578)
/* E18CF8 801895C8 24428578 */  addiu       $v0, $v0, %lo(D_6028578)
/* E18CFC 801895CC 00025900 */  sll         $t3, $v0, 4
/* E18D00 801895D0 000B6702 */  srl         $t4, $t3, 28
/* E18D04 801895D4 000C6880 */  sll         $t5, $t4, 2
/* E18D08 801895D8 3C0E800E */  lui         $t6, %hi(gSegments)
/* E18D0C 801895DC 01CD7021 */  addu        $t6, $t6, $t5
/* E18D10 801895E0 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* E18D14 801895E4 8DCE1FD0 */  lw          $t6, %lo(gSegments)($t6)
/* E18D18 801895E8 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* E18D1C 801895EC 00417824 */  and         $t7, $v0, $at
/* E18D20 801895F0 A62000D2 */  sh          $zero, 0xD2($s1)
/* E18D24 801895F4 862800D2 */  lh          $t0, 0xD2($s1)
/* E18D28 801895F8 3C018000 */  lui         $at, (0x80000000 >> 16)
/* E18D2C 801895FC 01CFC021 */  addu        $t8, $t6, $t7
/* E18D30 80189600 0301C821 */  addu        $t9, $t8, $at
/* E18D34 80189604 AE390028 */  sw          $t9, 0x28($s1)
/* E18D38 80189608 24090003 */  addiu       $t1, $zero, 0x3
/* E18D3C 8018960C AE48001C */  sw          $t0, 0x1C($s2)
/* E18D40 80189610 A629004E */  sh          $t1, 0x4E($s1)
/* E18D44 80189614 8E4A0018 */  lw          $t2, 0x18($s2)
/* E18D48 80189618 00002025 */  or          $a0, $zero, $zero
/* E18D4C 8018961C 34058017 */  ori         $a1, $zero, 0x8017
/* E18D50 80189620 15400220 */  bnez        $t2, .LE16C50_80189EA4
/* E18D54 80189624 00003025 */   or         $a2, $zero, $zero
/* E18D58 80189628 0C007511 */  jal         func_8001D444
/* E18D5C 8018962C 240700FF */   addiu      $a3, $zero, 0xFF
/* E18D60 80189630 1000021D */  b           .LE16C50_80189EA8
/* E18D64 80189634 02202025 */   or         $a0, $s1, $zero
/* E18D68 80189638 862B00D4 */  lh          $t3, 0xD4($s1)
.LE16C50_8018963C:
/* E18D6C 8018963C 240C001E */  addiu       $t4, $zero, 0x1E
/* E18D70 80189640 240D0009 */  addiu       $t5, $zero, 0x9
/* E18D74 80189644 11600217 */  beqz        $t3, .LE16C50_80189EA4
/* E18D78 80189648 240E0001 */   addiu      $t6, $zero, 0x1
/* E18D7C 8018964C 44809000 */  mtc1        $zero, $ft5
/* E18D80 80189650 A62C0052 */  sh          $t4, 0x52($s1)
/* E18D84 80189654 A62D004E */  sh          $t5, 0x4E($s1)
/* E18D88 80189658 E6320148 */  swc1        $ft5, 0x148($s1)
/* E18D8C 8018965C AE400060 */  sw          $zero, 0x60($s2)
/* E18D90 80189660 AE40006C */  sw          $zero, 0x6C($s2)
/* E18D94 80189664 A6200050 */  sh          $zero, 0x50($s1)
/* E18D98 80189668 A6200054 */  sh          $zero, 0x54($s1)
/* E18D9C 8018966C 1000020D */  b           .LE16C50_80189EA4
/* E18DA0 80189670 AE4E0088 */   sw         $t6, 0x88($s2)
.LE16C50_80189674:
/* E18DA4 80189674 862F0050 */  lh          $t7, 0x50($s1)
/* E18DA8 80189678 24010001 */  addiu       $at, $zero, 0x1
/* E18DAC 8018967C 263803FC */  addiu       $t8, $s1, 0x3FC
/* E18DB0 80189680 55E10011 */  bnel        $t7, $at, .LE16C50_801896C8
/* E18DB4 80189684 8E420084 */   lw         $v0, 0x84($s2)
/* E18DB8 80189688 0C061DC1 */  jal         func_E16C50_80187704
/* E18DBC 8018968C AFB80068 */   sw         $t8, 0x68($sp)
/* E18DC0 80189690 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E18DC4 80189694 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E18DC8 80189698 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E18DCC 8018969C 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E18DD0 801896A0 3C043903 */  lui         $a0, (0x39033093 >> 16)
/* E18DD4 801896A4 34843093 */  ori         $a0, $a0, (0x39033093 & 0xFFFF)
/* E18DD8 801896A8 AFB90014 */  sw          $t9, 0x14($sp)
/* E18DDC 801896AC AFA70010 */  sw          $a3, 0x10($sp)
/* E18DE0 801896B0 8FA50068 */  lw          $a1, 0x68($sp)
/* E18DE4 801896B4 0C006486 */  jal         Audio_PlaySfx
/* E18DE8 801896B8 24060004 */   addiu      $a2, $zero, 0x4
/* E18DEC 801896BC 24080078 */  addiu       $t0, $zero, 0x78
/* E18DF0 801896C0 AE480084 */  sw          $t0, 0x84($s2)
/* E18DF4 801896C4 8E420084 */  lw          $v0, 0x84($s2)
.LE16C50_801896C8:
/* E18DF8 801896C8 2401000F */  addiu       $at, $zero, 0xF
/* E18DFC 801896CC 10400003 */  beqz        $v0, .LE16C50_801896DC
/* E18E00 801896D0 2449FFFF */   addiu      $t1, $v0, -0x1
/* E18E04 801896D4 AE490084 */  sw          $t1, 0x84($s2)
/* E18E08 801896D8 01201025 */  or          $v0, $t1, $zero
.LE16C50_801896DC:
/* E18E0C 801896DC 544101F2 */  bnel        $v0, $at, .LE16C50_80189EA8
/* E18E10 801896E0 02202025 */   or         $a0, $s1, $zero
/* E18E14 801896E4 8E420080 */  lw          $v0, 0x80($s2)
/* E18E18 801896E8 3C038017 */  lui         $v1, %hi(gTeamShields)
/* E18E1C 801896EC 246378B0 */  addiu       $v1, $v1, %lo(gTeamShields)
/* E18E20 801896F0 5440001C */  bnel        $v0, $zero, .LE16C50_80189764
/* E18E24 801896F4 244D0001 */   addiu      $t5, $v0, 0x1
/* E18E28 801896F8 8C6A0004 */  lw          $t2, 0x4($v1)
/* E18E2C 801896FC 3C048018 */  lui         $a0, %hi(gMsg_ID_20315)
/* E18E30 80189700 248447B0 */  addiu       $a0, $a0, %lo(gMsg_ID_20315)
/* E18E34 80189704 59400006 */  blezl       $t2, .LE16C50_80189720
/* E18E38 80189708 8C6B0008 */   lw         $t3, 0x8($v1)
/* E18E3C 8018970C 0C02EA02 */  jal         func_800BA808
/* E18E40 80189710 2405000A */   addiu      $a1, $zero, 0xA
/* E18E44 80189714 10000012 */  b           .LE16C50_80189760
/* E18E48 80189718 8E420080 */   lw         $v0, 0x80($s2)
/* E18E4C 8018971C 8C6B0008 */  lw          $t3, 0x8($v1)
.LE16C50_80189720:
/* E18E50 80189720 3C048018 */  lui         $a0, %hi(gMsg_ID_20316)
/* E18E54 80189724 248447D4 */  addiu       $a0, $a0, %lo(gMsg_ID_20316)
/* E18E58 80189728 59600006 */  blezl       $t3, .LE16C50_80189744
/* E18E5C 8018972C 8C6C000C */   lw         $t4, 0xC($v1)
/* E18E60 80189730 0C02EA02 */  jal         func_800BA808
/* E18E64 80189734 24050014 */   addiu      $a1, $zero, 0x14
/* E18E68 80189738 10000009 */  b           .LE16C50_80189760
/* E18E6C 8018973C 8E420080 */   lw         $v0, 0x80($s2)
/* E18E70 80189740 8C6C000C */  lw          $t4, 0xC($v1)
.LE16C50_80189744:
/* E18E74 80189744 3C048018 */  lui         $a0, %hi(gMsg_ID_20317)
/* E18E78 80189748 248447F8 */  addiu       $a0, $a0, %lo(gMsg_ID_20317)
/* E18E7C 8018974C 59800005 */  blezl       $t4, .LE16C50_80189764
/* E18E80 80189750 244D0001 */   addiu      $t5, $v0, 0x1
/* E18E84 80189754 0C02EA02 */  jal         func_800BA808
/* E18E88 80189758 2405001E */   addiu      $a1, $zero, 0x1E
/* E18E8C 8018975C 8E420080 */  lw          $v0, 0x80($s2)
.LE16C50_80189760:
/* E18E90 80189760 244D0001 */  addiu       $t5, $v0, 0x1
.LE16C50_80189764:
/* E18E94 80189764 AE4D0080 */  sw          $t5, 0x80($s2)
/* E18E98 80189768 31AF0001 */  andi        $t7, $t5, 0x1
/* E18E9C 8018976C 100001CD */  b           .LE16C50_80189EA4
/* E18EA0 80189770 AE4F0080 */   sw         $t7, 0x80($s2)
.LE16C50_80189774:
/* E18EA4 80189774 C62A000C */  lwc1        $ft3, 0xC($s1)
/* E18EA8 80189778 C626016C */  lwc1        $ft1, 0x16C($s1)
/* E18EAC 8018977C 3C01801C */  lui         $at, %hi(D_E16C50_801C09EC)
/* E18EB0 80189780 4406A000 */  mfc1        $a2, $fs0
/* E18EB4 80189784 46065101 */  sub.s       $ft0, $ft3, $ft1
/* E18EB8 80189788 4407C000 */  mfc1        $a3, $fs2
/* E18EBC 8018978C 2624016C */  addiu       $a0, $s1, 0x16C
/* E18EC0 80189790 24050000 */  addiu       $a1, $zero, 0x0
/* E18EC4 80189794 E624000C */  swc1        $ft0, 0xC($s1)
/* E18EC8 80189798 C42809EC */  lwc1        $ft2, %lo(D_E16C50_801C09EC)($at)
/* E18ECC 8018979C 0C026F0B */  jal         Math_SmoothStepToF
/* E18ED0 801897A0 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E18ED4 801897A4 3C01801C */  lui         $at, %hi(D_E16C50_801C09F0)
/* E18ED8 801897A8 C43209F0 */  lwc1        $ft5, %lo(D_E16C50_801C09F0)($at)
/* E18EDC 801897AC 3C05C5BB */  lui         $a1, (0xC5BB8000 >> 16)
/* E18EE0 801897B0 4406C000 */  mfc1        $a2, $fs2
/* E18EE4 801897B4 34A58000 */  ori         $a1, $a1, (0xC5BB8000 & 0xFFFF)
/* E18EE8 801897B8 262400E4 */  addiu       $a0, $s1, 0xE4
/* E18EEC 801897BC 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* E18EF0 801897C0 0C026F0B */  jal         Math_SmoothStepToF
/* E18EF4 801897C4 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E18EF8 801897C8 8E580024 */  lw          $t8, 0x24($s2)
/* E18EFC 801897CC 3C08801C */  lui         $t0, %hi(D_E16C50_801BF454)
/* E18F00 801897D0 3C01801C */  lui         $at, %hi(D_E16C50_801C09F4)
/* E18F04 801897D4 C42A09F4 */  lwc1        $ft3, %lo(D_E16C50_801C09F4)($at)
/* E18F08 801897D8 2508F454 */  addiu       $t0, $t0, %lo(D_E16C50_801BF454)
/* E18F0C 801897DC 0018C900 */  sll         $t9, $t8, 4
/* E18F10 801897E0 03281021 */  addu        $v0, $t9, $t0
/* E18F14 801897E4 3C04801C */  lui         $a0, %hi(D_E16C50_801C22F0 + 0x28)
/* E18F18 801897E8 4406B000 */  mfc1        $a2, $fs1
/* E18F1C 801897EC 24842318 */  addiu       $a0, $a0, %lo(D_E16C50_801C22F0 + 0x28)
/* E18F20 801897F0 8C450000 */  lw          $a1, 0x0($v0)
/* E18F24 801897F4 AFA20068 */  sw          $v0, 0x68($sp)
/* E18F28 801897F8 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* E18F2C 801897FC 0C026F0B */  jal         Math_SmoothStepToF
/* E18F30 80189800 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E18F34 80189804 3C01801C */  lui         $at, %hi(D_E16C50_801C09F8)
/* E18F38 80189808 8FB00068 */  lw          $s0, 0x68($sp)
/* E18F3C 8018980C C42609F8 */  lwc1        $ft1, %lo(D_E16C50_801C09F8)($at)
/* E18F40 80189810 3C04801C */  lui         $a0, %hi(D_E16C50_801C22F0 + 0x30)
/* E18F44 80189814 4406B000 */  mfc1        $a2, $fs1
/* E18F48 80189818 24842320 */  addiu       $a0, $a0, %lo(D_E16C50_801C22F0 + 0x30)
/* E18F4C 8018981C 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* E18F50 80189820 8E050004 */  lw          $a1, 0x4($s0)
/* E18F54 80189824 0C026F0B */  jal         Math_SmoothStepToF
/* E18F58 80189828 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E18F5C 8018982C 3C01801C */  lui         $at, %hi(D_E16C50_801C09FC)
/* E18F60 80189830 C42409FC */  lwc1        $ft0, %lo(D_E16C50_801C09FC)($at)
/* E18F64 80189834 3C04801C */  lui         $a0, %hi(D_E16C50_801C22F0 + 0x2C)
/* E18F68 80189838 4406B000 */  mfc1        $a2, $fs1
/* E18F6C 8018983C 2484231C */  addiu       $a0, $a0, %lo(D_E16C50_801C22F0 + 0x2C)
/* E18F70 80189840 8E050008 */  lw          $a1, 0x8($s0)
/* E18F74 80189844 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* E18F78 80189848 0C026F0B */  jal         Math_SmoothStepToF
/* E18F7C 8018984C E7A40010 */   swc1       $ft0, 0x10($sp)
/* E18F80 80189850 3C098017 */  lui         $t1, %hi(gFrameCount)
/* E18F84 80189854 8D297DB0 */  lw          $t1, %lo(gFrameCount)($t1)
/* E18F88 80189858 24180007 */  addiu       $t8, $zero, 0x7
/* E18F8C 8018985C 312A000F */  andi        $t2, $t1, 0xF
/* E18F90 80189860 55400007 */  bnel        $t2, $zero, .LE16C50_80189880
/* E18F94 80189864 862F0050 */   lh         $t7, 0x50($s1)
/* E18F98 80189868 8E4B0024 */  lw          $t3, 0x24($s2)
/* E18F9C 8018986C 256C0001 */  addiu       $t4, $t3, 0x1
/* E18FA0 80189870 AE4C0024 */  sw          $t4, 0x24($s2)
/* E18FA4 80189874 318E0003 */  andi        $t6, $t4, 0x3
/* E18FA8 80189878 AE4E0024 */  sw          $t6, 0x24($s2)
/* E18FAC 8018987C 862F0050 */  lh          $t7, 0x50($s1)
.LE16C50_80189880:
/* E18FB0 80189880 55E00189 */  bnel        $t7, $zero, .LE16C50_80189EA8
/* E18FB4 80189884 02202025 */   or         $a0, $s1, $zero
/* E18FB8 80189888 44804000 */  mtc1        $zero, $ft2
/* E18FBC 8018988C A638004E */  sh          $t8, 0x4E($s1)
/* E18FC0 80189890 10000184 */  b           .LE16C50_80189EA4
/* E18FC4 80189894 E62800DC */   swc1       $ft2, 0xDC($s1)
.LE16C50_80189898:
/* E18FC8 80189898 863900D6 */  lh          $t9, 0xD6($s1)
/* E18FCC 8018989C 3C01801C */  lui         $at, %hi(D_E16C50_801C0A00)
/* E18FD0 801898A0 C4320A00 */  lwc1        $ft5, %lo(D_E16C50_801C0A00)($at)
/* E18FD4 801898A4 001940C0 */  sll         $t0, $t9, 3
/* E18FD8 801898A8 01194021 */  addu        $t0, $t0, $t9
/* E18FDC 801898AC 00084080 */  sll         $t0, $t0, 2
/* E18FE0 801898B0 3C098017 */  lui         $t1, %hi(gObjects8C)
/* E18FE4 801898B4 01194023 */  subu        $t0, $t0, $t9
/* E18FE8 801898B8 00084080 */  sll         $t0, $t0, 2
/* E18FEC 801898BC 25290130 */  addiu       $t1, $t1, %lo(gObjects8C)
/* E18FF0 801898C0 3C04801C */  lui         $a0, %hi(D_E16C50_801C22F0 + 0x28)
/* E18FF4 801898C4 4406A000 */  mfc1        $a2, $fs0
/* E18FF8 801898C8 01098021 */  addu        $s0, $t0, $t1
/* E18FFC 801898CC 24842318 */  addiu       $a0, $a0, %lo(D_E16C50_801C22F0 + 0x28)
/* E19000 801898D0 3C05437F */  lui         $a1, (0x437F0000 >> 16)
/* E19004 801898D4 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* E19008 801898D8 0C026F0B */  jal         Math_SmoothStepToF
/* E1900C 801898DC E7B20010 */   swc1       $ft5, 0x10($sp)
/* E19010 801898E0 3C01801C */  lui         $at, %hi(D_E16C50_801C0A04)
/* E19014 801898E4 C42A0A04 */  lwc1        $ft3, %lo(D_E16C50_801C0A04)($at)
/* E19018 801898E8 3C04801C */  lui         $a0, %hi(D_E16C50_801C22F0 + 0x30)
/* E1901C 801898EC 4406A000 */  mfc1        $a2, $fs0
/* E19020 801898F0 24842320 */  addiu       $a0, $a0, %lo(D_E16C50_801C22F0 + 0x30)
/* E19024 801898F4 3C05437F */  lui         $a1, (0x437F0000 >> 16)
/* E19028 801898F8 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* E1902C 801898FC 0C026F0B */  jal         Math_SmoothStepToF
/* E19030 80189900 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E19034 80189904 3C01801C */  lui         $at, %hi(D_E16C50_801C0A08)
/* E19038 80189908 C4260A08 */  lwc1        $ft1, %lo(D_E16C50_801C0A08)($at)
/* E1903C 8018990C 3C04801C */  lui         $a0, %hi(D_E16C50_801C22F0 + 0x2C)
/* E19040 80189910 4406A000 */  mfc1        $a2, $fs0
/* E19044 80189914 2484231C */  addiu       $a0, $a0, %lo(D_E16C50_801C22F0 + 0x2C)
/* E19048 80189918 3C05437F */  lui         $a1, (0x437F0000 >> 16)
/* E1904C 8018991C 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* E19050 80189920 0C026F0B */  jal         Math_SmoothStepToF
/* E19054 80189924 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E19058 80189928 C62200D8 */  lwc1        $fv1, 0xD8($s1)
/* E1905C 8018992C 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E19060 80189930 3C01801C */  lui         $at, %hi(D_E16C50_801C0A0C)
/* E19064 80189934 4618103C */  c.lt.s      $fv1, $fs2
/* E19068 80189938 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1906C 8018993C 26040060 */  addiu       $a0, $s0, 0x60
/* E19070 80189940 24050000 */  addiu       $a1, $zero, 0x0
/* E19074 80189944 45020013 */  bc1fl       .LE16C50_80189994
/* E19078 80189948 4614103C */   c.lt.s     $fv1, $fs0
/* E1907C 8018994C 4602C101 */  sub.s       $ft0, $fs2, $fv1
/* E19080 80189950 C4280A0C */  lwc1        $ft2, %lo(D_E16C50_801C0A0C)($at)
/* E19084 80189954 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E19088 80189958 44815000 */  mtc1        $at, $ft3
/* E1908C 8018995C 46082482 */  mul.s       $ft5, $ft0, $ft2
/* E19090 80189960 3C01801C */  lui         $at, %hi(D_E16C50_801C0A10)
/* E19094 80189964 46125181 */  sub.s       $ft1, $ft3, $ft5
/* E19098 80189968 E6060064 */  swc1        $ft1, 0x64($s0)
/* E1909C 8018996C C62400D8 */  lwc1        $ft0, 0xD8($s1)
/* E190A0 80189970 C42A0A10 */  lwc1        $ft3, %lo(D_E16C50_801C0A10)($at)
/* E190A4 80189974 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E190A8 80189978 4604C201 */  sub.s       $ft2, $fs2, $ft0
/* E190AC 8018997C 44813000 */  mtc1        $at, $ft1
/* E190B0 80189980 460A4482 */  mul.s       $ft5, $ft2, $ft3
/* E190B4 80189984 46123101 */  sub.s       $ft0, $ft1, $ft5
/* E190B8 80189988 E6040060 */  swc1        $ft0, 0x60($s0)
/* E190BC 8018998C C62200D8 */  lwc1        $fv1, 0xD8($s1)
/* E190C0 80189990 4614103C */  c.lt.s      $fv1, $fs0
.LE16C50_80189994:
/* E190C4 80189994 3C01801C */  lui         $at, %hi(D_E16C50_801C0A14)
/* E190C8 80189998 45020143 */  bc1fl       .LE16C50_80189EA8
/* E190CC 8018999C 02202025 */   or         $a0, $s1, $zero
/* E190D0 801899A0 C4280A14 */  lwc1        $ft2, %lo(D_E16C50_801C0A14)($at)
/* E190D4 801899A4 4407A000 */  mfc1        $a3, $fs0
/* E190D8 801899A8 0C026F0B */  jal         Math_SmoothStepToF
/* E190DC 801899AC E7A80010 */   swc1       $ft2, 0x10($sp)
/* E190E0 801899B0 3C01801C */  lui         $at, %hi(D_E16C50_801C0A18)
/* E190E4 801899B4 C42A0A18 */  lwc1        $ft3, %lo(D_E16C50_801C0A18)($at)
/* E190E8 801899B8 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E190EC 801899BC 4407A000 */  mfc1        $a3, $fs0
/* E190F0 801899C0 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E190F4 801899C4 26040064 */  addiu       $a0, $s0, 0x64
/* E190F8 801899C8 24050000 */  addiu       $a1, $zero, 0x0
/* E190FC 801899CC 0C026F0B */  jal         Math_SmoothStepToF
/* E19100 801899D0 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E19104 801899D4 3C01801C */  lui         $at, %hi(D_E16C50_801C0A1C)
/* E19108 801899D8 C4260A1C */  lwc1        $ft1, %lo(D_E16C50_801C0A1C)($at)
/* E1910C 801899DC 4406A000 */  mfc1        $a2, $fs0
/* E19110 801899E0 26040068 */  addiu       $a0, $s0, 0x68
/* E19114 801899E4 24050000 */  addiu       $a1, $zero, 0x0
/* E19118 801899E8 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E1911C 801899EC 0C026F0B */  jal         Math_SmoothStepToF
/* E19120 801899F0 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E19124 801899F4 3C01801C */  lui         $at, %hi(D_E16C50_801C0A20)
/* E19128 801899F8 C4240A20 */  lwc1        $ft0, %lo(D_E16C50_801C0A20)($at)
/* E1912C 801899FC C6120068 */  lwc1        $ft5, 0x68($s0)
/* E19130 80189A00 3C02801C */  lui         $v0, %hi(D_E16C50_801C22F0)
/* E19134 80189A04 244222F0 */  addiu       $v0, $v0, %lo(D_E16C50_801C22F0)
/* E19138 80189A08 4604903C */  c.lt.s      $ft5, $ft0
/* E1913C 80189A0C 240A0002 */  addiu       $t2, $zero, 0x2
/* E19140 80189A10 240B0001 */  addiu       $t3, $zero, 0x1
/* E19144 80189A14 240C0014 */  addiu       $t4, $zero, 0x14
/* E19148 80189A18 45000122 */  bc1f        .LE16C50_80189EA4
/* E1914C 80189A1C 3C01437F */   lui        $at, (0x437F0000 >> 16)
/* E19150 80189A20 44814000 */  mtc1        $at, $ft2
/* E19154 80189A24 AE4A0000 */  sw          $t2, 0x0($s2)
/* E19158 80189A28 A62B00D2 */  sh          $t3, 0xD2($s1)
/* E1915C 80189A2C A62C0050 */  sh          $t4, 0x50($s1)
/* E19160 80189A30 E448002C */  swc1        $ft2, 0x2C($v0)
/* E19164 80189A34 C440002C */  lwc1        $fv0, 0x2C($v0)
/* E19168 80189A38 240D0001 */  addiu       $t5, $zero, 0x1
/* E1916C 80189A3C 02002025 */  or          $a0, $s0, $zero
/* E19170 80189A40 E4400030 */  swc1        $fv0, 0x30($v0)
/* E19174 80189A44 E4400028 */  swc1        $fv0, 0x28($v0)
/* E19178 80189A48 A62D004E */  sh          $t5, 0x4E($s1)
/* E1917C 80189A4C AE40006C */  sw          $zero, 0x6C($s2)
/* E19180 80189A50 0C0183EF */  jal         Object_Kill
/* E19184 80189A54 26050080 */   addiu      $a1, $s0, 0x80
/* E19188 80189A58 10000113 */  b           .LE16C50_80189EA8
/* E1918C 80189A5C 02202025 */   or         $a0, $s1, $zero
.LE16C50_80189A60:
/* E19190 80189A60 862E0052 */  lh          $t6, 0x52($s1)
/* E19194 80189A64 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E19198 80189A68 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1919C 80189A6C 15C0010D */  bnez        $t6, .LE16C50_80189EA4
/* E191A0 80189A70 240F012C */   addiu      $t7, $zero, 0x12C
/* E191A4 80189A74 AE400060 */  sw          $zero, 0x60($s2)
/* E191A8 80189A78 24180009 */  addiu       $t8, $zero, 0x9
/* E191AC 80189A7C 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E191B0 80189A80 A62F0052 */  sh          $t7, 0x52($s1)
/* E191B4 80189A84 A6200054 */  sh          $zero, 0x54($s1)
/* E191B8 80189A88 A638004E */  sh          $t8, 0x4E($s1)
/* E191BC 80189A8C 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E191C0 80189A90 3C041100 */  lui         $a0, (0x11002050 >> 16)
/* E191C4 80189A94 34842050 */  ori         $a0, $a0, (0x11002050 & 0xFFFF)
/* E191C8 80189A98 AFB90014 */  sw          $t9, 0x14($sp)
/* E191CC 80189A9C AFA70010 */  sw          $a3, 0x10($sp)
/* E191D0 80189AA0 262503FC */  addiu       $a1, $s1, 0x3FC
/* E191D4 80189AA4 0C006486 */  jal         Audio_PlaySfx
/* E191D8 80189AA8 24060004 */   addiu      $a2, $zero, 0x4
/* E191DC 80189AAC 100000FE */  b           .LE16C50_80189EA8
/* E191E0 80189AB0 02202025 */   or         $a0, $s1, $zero
.LE16C50_80189AB4:
/* E191E4 80189AB4 86280052 */  lh          $t0, 0x52($s1)
/* E191E8 80189AB8 262403FC */  addiu       $a0, $s1, 0x3FC
/* E191EC 80189ABC 55000013 */  bnel        $t0, $zero, .LE16C50_80189B0C
/* E191F0 80189AC0 8E4B0088 */   lw         $t3, 0x88($s2)
/* E191F4 80189AC4 0C006940 */  jal         Audio_KillSfx
/* E191F8 80189AC8 AFA40068 */   sw         $a0, 0x68($sp)
/* E191FC 80189ACC 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E19200 80189AD0 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E19204 80189AD4 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E19208 80189AD8 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E1920C 80189ADC 3C041900 */  lui         $a0, (0x19004051 >> 16)
/* E19210 80189AE0 34844051 */  ori         $a0, $a0, (0x19004051 & 0xFFFF)
/* E19214 80189AE4 AFA90014 */  sw          $t1, 0x14($sp)
/* E19218 80189AE8 AFA70010 */  sw          $a3, 0x10($sp)
/* E1921C 80189AEC 8FA50068 */  lw          $a1, 0x68($sp)
/* E19220 80189AF0 0C006486 */  jal         Audio_PlaySfx
/* E19224 80189AF4 24060004 */   addiu      $a2, $zero, 0x4
/* E19228 80189AF8 240A000A */  addiu       $t2, $zero, 0xA
/* E1922C 80189AFC A6200054 */  sh          $zero, 0x54($s1)
/* E19230 80189B00 100000E8 */  b           .LE16C50_80189EA4
/* E19234 80189B04 A62A004E */   sh         $t2, 0x4E($s1)
/* E19238 80189B08 8E4B0088 */  lw          $t3, 0x88($s2)
.LE16C50_80189B0C:
/* E1923C 80189B0C 55600015 */  bnel        $t3, $zero, .LE16C50_80189B64
/* E19240 80189B10 862C0054 */   lh         $t4, 0x54($s1)
/* E19244 80189B14 C62A0018 */  lwc1        $ft3, 0x18($s1)
/* E19248 80189B18 C6260148 */  lwc1        $ft1, 0x148($s1)
/* E1924C 80189B1C 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E19250 80189B20 44817000 */  mtc1        $at, $fa1
/* E19254 80189B24 46065480 */  add.s       $ft5, $ft3, $ft1
/* E19258 80189B28 26300148 */  addiu       $s0, $s1, 0x148
/* E1925C 80189B2C E6320018 */  swc1        $ft5, 0x18($s1)
/* E19260 80189B30 0C001388 */  jal         Math_ModF
/* E19264 80189B34 C62C0018 */   lwc1       $fa0, 0x18($s1)
/* E19268 80189B38 E6200018 */  swc1        $fv0, 0x18($s1)
/* E1926C 80189B3C 3C01801C */  lui         $at, %hi(D_E16C50_801C0A24)
/* E19270 80189B40 C4240A24 */  lwc1        $ft0, %lo(D_E16C50_801C0A24)($at)
/* E19274 80189B44 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E19278 80189B48 4407B000 */  mfc1        $a3, $fs1
/* E1927C 80189B4C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E19280 80189B50 02002025 */  or          $a0, $s0, $zero
/* E19284 80189B54 3C0541A0 */  lui         $a1, (0x41A00000 >> 16)
/* E19288 80189B58 0C026F0B */  jal         Math_SmoothStepToF
/* E1928C 80189B5C E7A40010 */   swc1       $ft0, 0x10($sp)
/* E19290 80189B60 862C0054 */  lh          $t4, 0x54($s1)
.LE16C50_80189B64:
/* E19294 80189B64 240D000A */  addiu       $t5, $zero, 0xA
/* E19298 80189B68 558000CF */  bnel        $t4, $zero, .LE16C50_80189EA8
/* E1929C 80189B6C 02202025 */   or         $a0, $s1, $zero
/* E192A0 80189B70 A62D0054 */  sh          $t5, 0x54($s1)
/* E192A4 80189B74 8E4E0088 */  lw          $t6, 0x88($s2)
/* E192A8 80189B78 00008025 */  or          $s0, $zero, $zero
/* E192AC 80189B7C 240F001E */  addiu       $t7, $zero, 0x1E
/* E192B0 80189B80 55C00003 */  bnel        $t6, $zero, .LE16C50_80189B90
/* E192B4 80189B84 863800BA */   lh         $t8, 0xBA($s1)
/* E192B8 80189B88 A62F0054 */  sh          $t7, 0x54($s1)
/* E192BC 80189B8C 863800BA */  lh          $t8, 0xBA($s1)
.LE16C50_80189B90:
/* E192C0 80189B90 24010002 */  addiu       $at, $zero, 0x2
/* E192C4 80189B94 24020006 */  addiu       $v0, $zero, 0x6
/* E192C8 80189B98 17010002 */  bne         $t8, $at, .LE16C50_80189BA4
/* E192CC 80189B9C 00000000 */   nop
/* E192D0 80189BA0 2402000C */  addiu       $v0, $zero, 0xC
.LE16C50_80189BA4:
/* E192D4 80189BA4 5840006C */  blezl       $v0, .LE16C50_80189D58
/* E192D8 80189BA8 240C0001 */   addiu      $t4, $zero, 0x1
/* E192DC 80189BAC 44825000 */  mtc1        $v0, $ft3
/* E192E0 80189BB0 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E192E4 80189BB4 44814000 */  mtc1        $at, $ft2
/* E192E8 80189BB8 468051A0 */  cvt.s.w     $ft1, $ft3
/* E192EC 80189BBC 3C01801C */  lui         $at, %hi(D_E16C50_801C0A28)
/* E192F0 80189BC0 C4240A28 */  lwc1        $ft0, %lo(D_E16C50_801C0A28)($at)
/* E192F4 80189BC4 3C19801C */  lui         $t9, %hi(D_E16C50_801C2250)
/* E192F8 80189BC8 27392250 */  addiu       $t9, $t9, %lo(D_E16C50_801C2250)
/* E192FC 80189BCC AFB90064 */  sw          $t9, 0x64($sp)
/* E19300 80189BD0 46064483 */  div.s       $ft5, $ft2, $ft1
/* E19304 80189BD4 AFA20128 */  sw          $v0, 0x128($sp)
/* E19308 80189BD8 46049002 */  mul.s       $fv0, $ft5, $ft0
/* E1930C 80189BDC E7A00068 */  swc1        $fv0, 0x68($sp)
.LE16C50_80189BE0:
/* E19310 80189BE0 C7A00068 */  lwc1        $fv0, 0x68($sp)
/* E19314 80189BE4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E19318 80189BE8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1931C 80189BEC 44050000 */  mfc1        $a1, $fv0
/* E19320 80189BF0 0C0017F8 */  jal         Matrix_RotateZ
/* E19324 80189BF4 24060001 */   addiu      $a2, $zero, 0x1
/* E19328 80189BF8 44800000 */  mtc1        $zero, $fv0
/* E1932C 80189BFC 3C0143C8 */  lui         $at, (0x43C80000 >> 16)
/* E19330 80189C00 44815000 */  mtc1        $at, $ft3
/* E19334 80189C04 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E19338 80189C08 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1933C 80189C0C 27A50098 */  addiu       $a1, $sp, 0x98
/* E19340 80189C10 27A6008C */  addiu       $a2, $sp, 0x8C
/* E19344 80189C14 E7A00098 */  swc1        $fv0, 0x98($sp)
/* E19348 80189C18 E7A000A0 */  swc1        $fv0, 0xA0($sp)
/* E1934C 80189C1C 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E19350 80189C20 E7AA009C */   swc1       $ft3, 0x9C($sp)
/* E19354 80189C24 C7AC008C */  lwc1        $fa0, 0x8C($sp)
/* E19358 80189C28 0C001440 */  jal         Math_Atan2F
/* E1935C 80189C2C C7AE0094 */   lwc1       $fa1, 0x94($sp)
/* E19360 80189C30 0C027DDA */  jal         Math_RadToDeg
/* E19364 80189C34 46000306 */   mov.s      $fa0, $fv0
/* E19368 80189C38 C7A2008C */  lwc1        $fv1, 0x8C($sp)
/* E1936C 80189C3C C7B00094 */  lwc1        $ft4, 0x94($sp)
/* E19370 80189C40 E7A0010C */  swc1        $fv0, 0x10C($sp)
/* E19374 80189C44 46021202 */  mul.s       $ft2, $fv1, $fv1
/* E19378 80189C48 C7AC0090 */  lwc1        $fa0, 0x90($sp)
/* E1937C 80189C4C 46108182 */  mul.s       $ft1, $ft4, $ft4
/* E19380 80189C50 46064000 */  add.s       $fv0, $ft2, $ft1
/* E19384 80189C54 0C001440 */  jal         Math_Atan2F
/* E19388 80189C58 46000384 */   sqrt.s     $fa1, $fv0
/* E1938C 80189C5C 0C027DDA */  jal         Math_RadToDeg
/* E19390 80189C60 46000307 */   neg.s      $fa0, $fv0
/* E19394 80189C64 8FA80064 */  lw          $t0, 0x64($sp)
/* E19398 80189C68 3C0A8016 */  lui         $t2, %hi(gObjects2F4)
/* E1939C 80189C6C 46000086 */  mov.s       $fv1, $fv0
/* E193A0 80189C70 8D020030 */  lw          $v0, 0x30($t0)
/* E193A4 80189C74 254A3FE0 */  addiu       $t2, $t2, %lo(gObjects2F4)
/* E193A8 80189C78 8FAE0064 */  lw          $t6, 0x64($sp)
/* E193AC 80189C7C 2442FFFF */  addiu       $v0, $v0, -0x1
/* E193B0 80189C80 04410002 */  bgez        $v0, .LE16C50_80189C8C
/* E193B4 80189C84 3C0741C8 */   lui        $a3, (0x41C80000 >> 16)
/* E193B8 80189C88 00001025 */  or          $v0, $zero, $zero
.LE16C50_80189C8C:
/* E193BC 80189C8C 00024880 */  sll         $t1, $v0, 2
/* E193C0 80189C90 01224823 */  subu        $t1, $t1, $v0
/* E193C4 80189C94 00094900 */  sll         $t1, $t1, 4
/* E193C8 80189C98 01224823 */  subu        $t1, $t1, $v0
/* E193CC 80189C9C 00094880 */  sll         $t1, $t1, 2
/* E193D0 80189CA0 01224821 */  addu        $t1, $t1, $v0
/* E193D4 80189CA4 00094880 */  sll         $t1, $t1, 2
/* E193D8 80189CA8 012A1821 */  addu        $v1, $t1, $t2
/* E193DC 80189CAC 906B0000 */  lbu         $t3, 0x0($v1)
/* E193E0 80189CB0 2418000A */  addiu       $t8, $zero, 0xA
/* E193E4 80189CB4 51600009 */  beql        $t3, $zero, .LE16C50_80189CDC
/* E193E8 80189CB8 ADC00030 */   sw         $zero, 0x30($t6)
/* E193EC 80189CBC 946C0002 */  lhu         $t4, 0x2($v1)
/* E193F0 80189CC0 240100BF */  addiu       $at, $zero, 0xBF
/* E193F4 80189CC4 55810005 */  bnel        $t4, $at, .LE16C50_80189CDC
/* E193F8 80189CC8 ADC00030 */   sw         $zero, 0x30($t6)
/* E193FC 80189CCC 8E4D0060 */  lw          $t5, 0x60($s2)
/* E19400 80189CD0 55A0001B */  bnel        $t5, $zero, .LE16C50_80189D40
/* E19404 80189CD4 8FA90064 */   lw         $t1, 0x64($sp)
/* E19408 80189CD8 ADC00030 */  sw          $zero, 0x30($t6)
.LE16C50_80189CDC:
/* E1940C 80189CDC 862F00BA */  lh          $t7, 0xBA($s1)
/* E19410 80189CE0 24010001 */  addiu       $at, $zero, 0x1
/* E19414 80189CE4 00001025 */  or          $v0, $zero, $zero
/* E19418 80189CE8 15E10002 */  bne         $t7, $at, .LE16C50_80189CF4
/* E1941C 80189CEC C7A4008C */   lwc1       $ft0, 0x8C($sp)
/* E19420 80189CF0 24020001 */  addiu       $v0, $zero, 0x1
.LE16C50_80189CF4:
/* E19424 80189CF4 C6320004 */  lwc1        $ft5, 0x4($s1)
/* E19428 80189CF8 C626000C */  lwc1        $ft1, 0xC($s1)
/* E1942C 80189CFC C62A0008 */  lwc1        $ft3, 0x8($s1)
/* E19430 80189D00 46049300 */  add.s       $fa0, $ft5, $ft0
/* E19434 80189D04 C7B20094 */  lwc1        $ft5, 0x94($sp)
/* E19438 80189D08 C7A80090 */  lwc1        $ft2, 0x90($sp)
/* E1943C 80189D0C AFA2001C */  sw          $v0, 0x1C($sp)
/* E19440 80189D10 46123100 */  add.s       $ft0, $ft1, $ft5
/* E19444 80189D14 AFB80018 */  sw          $t8, 0x18($sp)
/* E19448 80189D18 E7A20010 */  swc1        $fv1, 0x10($sp)
/* E1944C 80189D1C 46085380 */  add.s       $fa1, $ft3, $ft2
/* E19450 80189D20 C7AA010C */  lwc1        $ft3, 0x10C($sp)
/* E19454 80189D24 44062000 */  mfc1        $a2, $ft0
/* E19458 80189D28 0C061D79 */  jal         func_E16C50_801875E4
/* E1945C 80189D2C E7AA0014 */   swc1       $ft3, 0x14($sp)
/* E19460 80189D30 8E59002C */  lw          $t9, 0x2C($s2)
/* E19464 80189D34 8FA80064 */  lw          $t0, 0x64($sp)
/* E19468 80189D38 AD190030 */  sw          $t9, 0x30($t0)
/* E1946C 80189D3C 8FA90064 */  lw          $t1, 0x64($sp)
.LE16C50_80189D40:
/* E19470 80189D40 8FAB0128 */  lw          $t3, 0x128($sp)
/* E19474 80189D44 26100001 */  addiu       $s0, $s0, 0x1
/* E19478 80189D48 252A0004 */  addiu       $t2, $t1, 0x4
/* E1947C 80189D4C 160BFFA4 */  bne         $s0, $t3, .LE16C50_80189BE0
/* E19480 80189D50 AFAA0064 */   sw         $t2, 0x64($sp)
/* E19484 80189D54 240C0001 */  addiu       $t4, $zero, 0x1
.LE16C50_80189D58:
/* E19488 80189D58 10000052 */  b           .LE16C50_80189EA4
/* E1948C 80189D5C AE4C0060 */   sw         $t4, 0x60($s2)
.LE16C50_80189D60:
/* E19490 80189D60 8E4D0088 */  lw          $t5, 0x88($s2)
/* E19494 80189D64 15A00014 */  bnez        $t5, .LE16C50_80189DB8
/* E19498 80189D68 00000000 */   nop
/* E1949C 80189D6C C6280018 */  lwc1        $ft2, 0x18($s1)
/* E194A0 80189D70 C6260148 */  lwc1        $ft1, 0x148($s1)
/* E194A4 80189D74 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E194A8 80189D78 44817000 */  mtc1        $at, $fa1
/* E194AC 80189D7C 46064480 */  add.s       $ft5, $ft2, $ft1
/* E194B0 80189D80 26300148 */  addiu       $s0, $s1, 0x148
/* E194B4 80189D84 E6320018 */  swc1        $ft5, 0x18($s1)
/* E194B8 80189D88 0C001388 */  jal         Math_ModF
/* E194BC 80189D8C C62C0018 */   lwc1       $fa0, 0x18($s1)
/* E194C0 80189D90 E6200018 */  swc1        $fv0, 0x18($s1)
/* E194C4 80189D94 3C01801C */  lui         $at, %hi(D_E16C50_801C0A2C)
/* E194C8 80189D98 C4240A2C */  lwc1        $ft0, %lo(D_E16C50_801C0A2C)($at)
/* E194CC 80189D9C 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E194D0 80189DA0 4407B000 */  mfc1        $a3, $fs1
/* E194D4 80189DA4 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E194D8 80189DA8 02002025 */  or          $a0, $s0, $zero
/* E194DC 80189DAC 24050000 */  addiu       $a1, $zero, 0x0
/* E194E0 80189DB0 0C026F0B */  jal         Math_SmoothStepToF
/* E194E4 80189DB4 E7A40010 */   swc1       $ft0, 0x10($sp)
.LE16C50_80189DB8:
/* E194E8 80189DB8 3C01801C */  lui         $at, %hi(D_E16C50_801C0A30)
/* E194EC 80189DBC C42A0A30 */  lwc1        $ft3, %lo(D_E16C50_801C0A30)($at)
/* E194F0 80189DC0 C6280148 */  lwc1        $ft2, 0x148($s1)
/* E194F4 80189DC4 24190014 */  addiu       $t9, $zero, 0x14
/* E194F8 80189DC8 24080001 */  addiu       $t0, $zero, 0x1
/* E194FC 80189DCC 460A403E */  c.le.s      $ft2, $ft3
/* E19500 80189DD0 00000000 */  nop
/* E19504 80189DD4 45020034 */  bc1fl       .LE16C50_80189EA8
/* E19508 80189DD8 02202025 */   or         $a0, $s1, $zero
/* E1950C 80189DDC 8E4E0088 */  lw          $t6, 0x88($s2)
/* E19510 80189DE0 55C00008 */  bnel        $t6, $zero, .LE16C50_80189E04
/* E19514 80189DE4 A6390050 */   sh         $t9, 0x50($s1)
/* E19518 80189DE8 44803000 */  mtc1        $zero, $ft1
/* E1951C 80189DEC 240F0002 */  addiu       $t7, $zero, 0x2
/* E19520 80189DF0 24180001 */  addiu       $t8, $zero, 0x1
/* E19524 80189DF4 E6260148 */  swc1        $ft1, 0x148($s1)
/* E19528 80189DF8 AE4F0000 */  sw          $t7, 0x0($s2)
/* E1952C 80189DFC A63800D2 */  sh          $t8, 0xD2($s1)
/* E19530 80189E00 A6390050 */  sh          $t9, 0x50($s1)
.LE16C50_80189E04:
/* E19534 80189E04 AE40006C */  sw          $zero, 0x6C($s2)
/* E19538 80189E08 AE400088 */  sw          $zero, 0x88($s2)
/* E1953C 80189E0C 10000025 */  b           .LE16C50_80189EA4
/* E19540 80189E10 A628004E */   sh         $t0, 0x4E($s1)
.LE16C50_80189E14:
/* E19544 80189E14 86220052 */  lh          $v0, 0x52($s1)
/* E19548 80189E18 240100A0 */  addiu       $at, $zero, 0xA0
/* E1954C 80189E1C 3C048018 */  lui         $a0, %hi(gPlayer)
/* E19550 80189E20 1441000D */  bne         $v0, $at, .LE16C50_80189E58
/* E19554 80189E24 24848280 */   addiu      $a0, $a0, %lo(gPlayer)
/* E19558 80189E28 8C900000 */  lw          $s0, 0x0($a0)
/* E1955C 80189E2C 24010003 */  addiu       $at, $zero, 0x3
/* E19560 80189E30 24090007 */  addiu       $t1, $zero, 0x7
/* E19564 80189E34 8E0301C8 */  lw          $v1, 0x1C8($s0)
/* E19568 80189E38 10610003 */  beq         $v1, $at, .LE16C50_80189E48
/* E1956C 80189E3C 24010005 */   addiu      $at, $zero, 0x5
/* E19570 80189E40 54610006 */  bnel        $v1, $at, .LE16C50_80189E5C
/* E19574 80189E44 28410032 */   slti       $at, $v0, 0x32
.LE16C50_80189E48:
/* E19578 80189E48 AE0901C8 */  sw          $t1, 0x1C8($s0)
/* E1957C 80189E4C 8C8A0000 */  lw          $t2, 0x0($a0)
/* E19580 80189E50 AD4001D0 */  sw          $zero, 0x1D0($t2)
/* E19584 80189E54 86220052 */  lh          $v0, 0x52($s1)
.LE16C50_80189E58:
/* E19588 80189E58 28410032 */  slti        $at, $v0, 0x32
.LE16C50_80189E5C:
/* E1958C 80189E5C 10200006 */  beqz        $at, .LE16C50_80189E78
/* E19590 80189E60 02202025 */   or         $a0, $s1, $zero
/* E19594 80189E64 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E19598 80189E68 44819000 */  mtc1        $at, $ft5
/* E1959C 80189E6C 3C018017 */  lui         $at, %hi(D_801779A8)
/* E195A0 80189E70 10000005 */  b           .LE16C50_80189E88
/* E195A4 80189E74 E43279A8 */   swc1       $ft5, %lo(D_801779A8)($at)
.LE16C50_80189E78:
/* E195A8 80189E78 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E195AC 80189E7C 44812000 */  mtc1        $at, $ft0
/* E195B0 80189E80 3C018017 */  lui         $at, %hi(D_801779A8)
/* E195B4 80189E84 E42479A8 */  swc1        $ft0, %lo(D_801779A8)($at)
.LE16C50_80189E88:
/* E195B8 80189E88 862B0052 */  lh          $t3, 0x52($s1)
/* E195BC 80189E8C 3C018016 */  lui         $at, %hi(D_80161734)
/* E195C0 80189E90 262503FC */  addiu       $a1, $s1, 0x3FC
/* E195C4 80189E94 55600004 */  bnel        $t3, $zero, .LE16C50_80189EA8
/* E195C8 80189E98 02202025 */   or         $a0, $s1, $zero
/* E195CC 80189E9C 0C0183EF */  jal         Object_Kill
/* E195D0 80189EA0 AC201734 */   sw         $zero, %lo(D_80161734)($at)
.LE16C50_80189EA4:
/* E195D4 80189EA4 02202025 */  or          $a0, $s1, $zero
.LE16C50_80189EA8:
/* E195D8 80189EA8 0C062919 */  jal         func_E16C50_8018A464
/* E195DC 80189EAC 00002825 */   or         $a1, $zero, $zero
/* E195E0 80189EB0 02202025 */  or          $a0, $s1, $zero
/* E195E4 80189EB4 0C062919 */  jal         func_E16C50_8018A464
/* E195E8 80189EB8 24050001 */   addiu      $a1, $zero, 0x1
/* E195EC 80189EBC 02202025 */  or          $a0, $s1, $zero
/* E195F0 80189EC0 0C062919 */  jal         func_E16C50_8018A464
/* E195F4 80189EC4 24050002 */   addiu      $a1, $zero, 0x2
/* E195F8 80189EC8 3C0C801C */  lui         $t4, %hi(D_E16C50_801BF2B0)
/* E195FC 80189ECC 3C0D801C */  lui         $t5, %hi(D_E16C50_801BF2E0)
/* E19600 80189ED0 3C0E801C */  lui         $t6, %hi(D_E16C50_801BF1F0)
/* E19604 80189ED4 3C0F801C */  lui         $t7, %hi(D_E16C50_801BF220)
/* E19608 80189ED8 3C18801C */  lui         $t8, %hi(D_E16C50_801BF250)
/* E1960C 80189EDC 2718F250 */  addiu       $t8, $t8, %lo(D_E16C50_801BF250)
/* E19610 80189EE0 25EFF220 */  addiu       $t7, $t7, %lo(D_E16C50_801BF220)
/* E19614 80189EE4 25CEF1F0 */  addiu       $t6, $t6, %lo(D_E16C50_801BF1F0)
/* E19618 80189EE8 25ADF2E0 */  addiu       $t5, $t5, %lo(D_E16C50_801BF2E0)
/* E1961C 80189EEC 258CF2B0 */  addiu       $t4, $t4, %lo(D_E16C50_801BF2B0)
/* E19620 80189EF0 3C10801C */  lui         $s0, %hi(D_E16C50_801BF280)
/* E19624 80189EF4 2610F280 */  addiu       $s0, $s0, %lo(D_E16C50_801BF280)
/* E19628 80189EF8 AFAC0064 */  sw          $t4, 0x64($sp)
/* E1962C 80189EFC AFAD0060 */  sw          $t5, 0x60($sp)
/* E19630 80189F00 AFAE005C */  sw          $t6, 0x5C($sp)
/* E19634 80189F04 AFAF0058 */  sw          $t7, 0x58($sp)
/* E19638 80189F08 AFB80054 */  sw          $t8, 0x54($sp)
.LE16C50_80189F0C:
/* E1963C 80189F0C 3C198017 */  lui         $t9, %hi(gFrameCount)
/* E19640 80189F10 8F397DB0 */  lw          $t9, %lo(gFrameCount)($t9)
/* E19644 80189F14 33280003 */  andi        $t0, $t9, 0x3
/* E19648 80189F18 15000010 */  bnez        $t0, .LE16C50_80189F5C
/* E1964C 80189F1C 00000000 */   nop
/* E19650 80189F20 0C0013AC */  jal         Rand_ZeroOne
/* E19654 80189F24 00000000 */   nop
/* E19658 80189F28 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E1965C 80189F2C 46185202 */  mul.s       $ft2, $ft3, $fs2
/* E19660 80189F30 0C0013AC */  jal         Rand_ZeroOne
/* E19664 80189F34 E6080000 */   swc1       $ft2, 0x0($s0)
/* E19668 80189F38 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E1966C 80189F3C 8FA90064 */  lw          $t1, 0x64($sp)
/* E19670 80189F40 46183482 */  mul.s       $ft5, $ft1, $fs2
/* E19674 80189F44 0C0013AC */  jal         Rand_ZeroOne
/* E19678 80189F48 E5320000 */   swc1       $ft5, 0x0($t1)
/* E1967C 80189F4C 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E19680 80189F50 8FAA0060 */  lw          $t2, 0x60($sp)
/* E19684 80189F54 46182282 */  mul.s       $ft3, $ft0, $fs2
/* E19688 80189F58 E54A0000 */  swc1        $ft3, 0x0($t2)
.LE16C50_80189F5C:
/* E1968C 80189F5C 3C01801C */  lui         $at, %hi(D_E16C50_801C0A34)
/* E19690 80189F60 C4280A34 */  lwc1        $ft2, %lo(D_E16C50_801C0A34)($at)
/* E19694 80189F64 4406A000 */  mfc1        $a2, $fs0
/* E19698 80189F68 8FA4005C */  lw          $a0, 0x5C($sp)
/* E1969C 80189F6C 8E050000 */  lw          $a1, 0x0($s0)
/* E196A0 80189F70 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E196A4 80189F74 0C026F0B */  jal         Math_SmoothStepToF
/* E196A8 80189F78 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E196AC 80189F7C 8FAB0064 */  lw          $t3, 0x64($sp)
/* E196B0 80189F80 3C01801C */  lui         $at, %hi(D_E16C50_801C0A38)
/* E196B4 80189F84 C4260A38 */  lwc1        $ft1, %lo(D_E16C50_801C0A38)($at)
/* E196B8 80189F88 4406A000 */  mfc1        $a2, $fs0
/* E196BC 80189F8C 8D650000 */  lw          $a1, 0x0($t3)
/* E196C0 80189F90 8FA40058 */  lw          $a0, 0x58($sp)
/* E196C4 80189F94 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E196C8 80189F98 0C026F0B */  jal         Math_SmoothStepToF
/* E196CC 80189F9C E7A60010 */   swc1       $ft1, 0x10($sp)
/* E196D0 80189FA0 8FAC0060 */  lw          $t4, 0x60($sp)
/* E196D4 80189FA4 3C01801C */  lui         $at, %hi(D_E16C50_801C0A3C)
/* E196D8 80189FA8 C4320A3C */  lwc1        $ft5, %lo(D_E16C50_801C0A3C)($at)
/* E196DC 80189FAC 4406A000 */  mfc1        $a2, $fs0
/* E196E0 80189FB0 8D850000 */  lw          $a1, 0x0($t4)
/* E196E4 80189FB4 8FA40054 */  lw          $a0, 0x54($sp)
/* E196E8 80189FB8 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E196EC 80189FBC 0C026F0B */  jal         Math_SmoothStepToF
/* E196F0 80189FC0 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E196F4 80189FC4 8FAD0064 */  lw          $t5, 0x64($sp)
/* E196F8 80189FC8 8FAB0054 */  lw          $t3, 0x54($sp)
/* E196FC 80189FCC 8FAF0060 */  lw          $t7, 0x60($sp)
/* E19700 80189FD0 8FB9005C */  lw          $t9, 0x5C($sp)
/* E19704 80189FD4 8FA90058 */  lw          $t1, 0x58($sp)
/* E19708 80189FD8 25AE0004 */  addiu       $t6, $t5, 0x4
/* E1970C 80189FDC 3C0D801C */  lui         $t5, %hi(D_E16C50_801BF250 + 0x14)
/* E19710 80189FE0 25ADF264 */  addiu       $t5, $t5, %lo(D_E16C50_801BF250 + 0x14)
/* E19714 80189FE4 256C0004 */  addiu       $t4, $t3, 0x4
/* E19718 80189FE8 018D082B */  sltu        $at, $t4, $t5
/* E1971C 80189FEC 25F80004 */  addiu       $t8, $t7, 0x4
/* E19720 80189FF0 27280004 */  addiu       $t0, $t9, 0x4
/* E19724 80189FF4 252A0004 */  addiu       $t2, $t1, 0x4
/* E19728 80189FF8 AFAA0058 */  sw          $t2, 0x58($sp)
/* E1972C 80189FFC AFA8005C */  sw          $t0, 0x5C($sp)
/* E19730 8018A000 AFB80060 */  sw          $t8, 0x60($sp)
/* E19734 8018A004 AFAC0054 */  sw          $t4, 0x54($sp)
/* E19738 8018A008 AFAE0064 */  sw          $t6, 0x64($sp)
/* E1973C 8018A00C 1420FFBF */  bnez        $at, .LE16C50_80189F0C
/* E19740 8018A010 26100004 */   addiu      $s0, $s0, 0x4
/* E19744 8018A014 C62401D8 */  lwc1        $ft0, 0x1D8($s1)
/* E19748 8018A018 8E2E0028 */  lw          $t6, 0x28($s1)
/* E1974C 8018A01C 3C028016 */  lui         $v0, %hi(D_801613A0)
/* E19750 8018A020 24010258 */  addiu       $at, $zero, 0x258
/* E19754 8018A024 E5C40064 */  swc1        $ft0, 0x64($t6)
/* E19758 8018A028 8E2F0028 */  lw          $t7, 0x28($s1)
/* E1975C 8018A02C C62A01D4 */  lwc1        $ft3, 0x1D4($s1)
/* E19760 8018A030 3C048018 */  lui         $a0, %hi(gMsg_ID_2225)
/* E19764 8018A034 2484B270 */  addiu       $a0, $a0, %lo(gMsg_ID_2225)
/* E19768 8018A038 E5EA006C */  swc1        $ft3, 0x6C($t7)
/* E1976C 8018A03C 8E380028 */  lw          $t8, 0x28($s1)
/* E19770 8018A040 C62801D0 */  lwc1        $ft2, 0x1D0($s1)
/* E19774 8018A044 E7080074 */  swc1        $ft2, 0x74($t8)
/* E19778 8018A048 8E390028 */  lw          $t9, 0x28($s1)
/* E1977C 8018A04C C62601E4 */  lwc1        $ft1, 0x1E4($s1)
/* E19780 8018A050 E726007C */  swc1        $ft1, 0x7C($t9)
/* E19784 8018A054 8E280028 */  lw          $t0, 0x28($s1)
/* E19788 8018A058 C63201E0 */  lwc1        $ft5, 0x1E0($s1)
/* E1978C 8018A05C E5120084 */  swc1        $ft5, 0x84($t0)
/* E19790 8018A060 8E290028 */  lw          $t1, 0x28($s1)
/* E19794 8018A064 C62401DC */  lwc1        $ft0, 0x1DC($s1)
/* E19798 8018A068 E524008C */  swc1        $ft0, 0x8C($t1)
/* E1979C 8018A06C 8E2A0028 */  lw          $t2, 0x28($s1)
/* E197A0 8018A070 C62A01F0 */  lwc1        $ft3, 0x1F0($s1)
/* E197A4 8018A074 E54A0094 */  swc1        $ft3, 0x94($t2)
/* E197A8 8018A078 8E2B0028 */  lw          $t3, 0x28($s1)
/* E197AC 8018A07C C62801EC */  lwc1        $ft2, 0x1EC($s1)
/* E197B0 8018A080 E568009C */  swc1        $ft2, 0x9C($t3)
/* E197B4 8018A084 8E2C0028 */  lw          $t4, 0x28($s1)
/* E197B8 8018A088 C62601E8 */  lwc1        $ft1, 0x1E8($s1)
/* E197BC 8018A08C E58600A4 */  swc1        $ft1, 0xA4($t4)
/* E197C0 8018A090 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
/* E197C4 8018A094 54410006 */  bnel        $v0, $at, .LE16C50_8018A0B0
/* E197C8 8018A098 240102F4 */   addiu      $at, $zero, 0x2F4
/* E197CC 8018A09C 0C02EA02 */  jal         func_800BA808
/* E197D0 8018A0A0 24050014 */   addiu      $a1, $zero, 0x14
/* E197D4 8018A0A4 3C028016 */  lui         $v0, %hi(D_801613A0)
/* E197D8 8018A0A8 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
/* E197DC 8018A0AC 240102F4 */  addiu       $at, $zero, 0x2F4
.LE16C50_8018A0B0:
/* E197E0 8018A0B0 14410004 */  bne         $v0, $at, .LE16C50_8018A0C4
/* E197E4 8018A0B4 02201825 */   or         $v1, $s1, $zero
/* E197E8 8018A0B8 240D0001 */  addiu       $t5, $zero, 0x1
/* E197EC 8018A0BC 3C018016 */  lui         $at, %hi(D_80161734)
/* E197F0 8018A0C0 AC2D1734 */  sw          $t5, %lo(D_80161734)($at)
.LE16C50_8018A0C4:
/* E197F4 8018A0C4 284102F5 */  slti        $at, $v0, 0x2F5
/* E197F8 8018A0C8 1420000F */  bnez        $at, .LE16C50_8018A108
/* E197FC 8018A0CC 00001025 */   or         $v0, $zero, $zero
/* E19800 8018A0D0 862E0060 */  lh          $t6, 0x60($s1)
/* E19804 8018A0D4 3C014443 */  lui         $at, (0x44430000 >> 16)
/* E19808 8018A0D8 44815000 */  mtc1        $at, $ft3
/* E1980C 8018A0DC 448E9000 */  mtc1        $t6, $ft5
/* E19810 8018A0E0 3C01437F */  lui         $at, (0x437F0000 >> 16)
/* E19814 8018A0E4 44813000 */  mtc1        $at, $ft1
/* E19818 8018A0E8 46809120 */  cvt.s.w     $ft0, $ft5
/* E1981C 8018A0EC 3C018017 */  lui         $at, %hi(D_80177848)
/* E19820 8018A0F0 460A2203 */  div.s       $ft2, $ft0, $ft3
/* E19824 8018A0F4 46064482 */  mul.s       $ft5, $ft2, $ft1
/* E19828 8018A0F8 4600910D */  trunc.w.s   $ft0, $ft5
/* E1982C 8018A0FC 44182000 */  mfc1        $t8, $ft0
/* E19830 8018A100 00000000 */  nop
/* E19834 8018A104 AC387848 */  sw          $t8, %lo(D_80177848)($at)
.LE16C50_8018A108:
/* E19838 8018A108 84640088 */  lh          $a0, 0x88($v1)
/* E1983C 8018A10C 24420002 */  addiu       $v0, $v0, 0x2
/* E19840 8018A110 2841001E */  slti        $at, $v0, 0x1E
/* E19844 8018A114 10800002 */  beqz        $a0, .LE16C50_8018A120
/* E19848 8018A118 2499FFFF */   addiu      $t9, $a0, -0x1
/* E1984C 8018A11C A4790088 */  sh          $t9, 0x88($v1)
.LE16C50_8018A120:
/* E19850 8018A120 1420FFF9 */  bnez        $at, .LE16C50_8018A108
/* E19854 8018A124 24630002 */   addiu      $v1, $v1, 0x2
/* E19858 8018A128 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1985C 8018A12C 44815000 */  mtc1        $at, $ft3
/* E19860 8018A130 C62800D8 */  lwc1        $ft2, 0xD8($s1)
/* E19864 8018A134 00001025 */  or          $v0, $zero, $zero
/* E19868 8018A138 02201825 */  or          $v1, $s1, $zero
/* E1986C 8018A13C 4608503C */  c.lt.s      $ft3, $ft2
/* E19870 8018A140 24040006 */  addiu       $a0, $zero, 0x6
/* E19874 8018A144 4502000A */  bc1fl       .LE16C50_8018A170
/* E19878 8018A148 8E420014 */   lw         $v0, 0x14($s2)
.LE16C50_8018A14C:
/* E1987C 8018A14C 84680088 */  lh          $t0, 0x88($v1)
/* E19880 8018A150 24420002 */  addiu       $v0, $v0, 0x2
/* E19884 8018A154 24090005 */  addiu       $t1, $zero, 0x5
/* E19888 8018A158 15000002 */  bnez        $t0, .LE16C50_8018A164
/* E1988C 8018A15C 00000000 */   nop
/* E19890 8018A160 A4690088 */  sh          $t1, 0x88($v1)
.LE16C50_8018A164:
/* E19894 8018A164 1444FFF9 */  bne         $v0, $a0, .LE16C50_8018A14C
/* E19898 8018A168 24630002 */   addiu      $v1, $v1, 0x2
/* E1989C 8018A16C 8E420014 */  lw          $v0, 0x14($s2)
.LE16C50_8018A170:
/* E198A0 8018A170 10400002 */  beqz        $v0, .LE16C50_8018A17C
/* E198A4 8018A174 244AFFFF */   addiu      $t2, $v0, -0x1
/* E198A8 8018A178 AE4A0014 */  sw          $t2, 0x14($s2)
.LE16C50_8018A17C:
/* E198AC 8018A17C 8E420064 */  lw          $v0, 0x64($s2)
/* E198B0 8018A180 10400002 */  beqz        $v0, .LE16C50_8018A18C
/* E198B4 8018A184 244BFFFF */   addiu      $t3, $v0, -0x1
/* E198B8 8018A188 AE4B0064 */  sw          $t3, 0x64($s2)
.LE16C50_8018A18C:
/* E198BC 8018A18C 8FBF004C */  lw          $ra, 0x4C($sp)
/* E198C0 8018A190 D7B40028 */  ldc1        $fs0, 0x28($sp)
/* E198C4 8018A194 D7B60030 */  ldc1        $fs1, 0x30($sp)
/* E198C8 8018A198 D7B80038 */  ldc1        $fs2, 0x38($sp)
/* E198CC 8018A19C 8FB00040 */  lw          $s0, 0x40($sp)
/* E198D0 8018A1A0 8FB10044 */  lw          $s1, 0x44($sp)
/* E198D4 8018A1A4 8FB20048 */  lw          $s2, 0x48($sp)
/* E198D8 8018A1A8 03E00008 */  jr          $ra
/* E198DC 8018A1AC 27BD0138 */   addiu      $sp, $sp, 0x138
glabel func_E16C50_8018A1B0
/* E198E0 8018A1B0 3C08801C */  lui         $t0, %hi(D_E16C50_801C2250)
/* E198E4 8018A1B4 25082250 */  addiu       $t0, $t0, %lo(D_E16C50_801C2250)
/* E198E8 8018A1B8 00051880 */  sll         $v1, $a1, 2
/* E198EC 8018A1BC 01033021 */  addu        $a2, $t0, $v1
/* E198F0 8018A1C0 8CC20008 */  lw          $v0, 0x8($a2)
/* E198F4 8018A1C4 24090001 */  addiu       $t1, $zero, 0x1
/* E198F8 8018A1C8 240E000C */  addiu       $t6, $zero, 0xC
/* E198FC 8018A1CC 10400006 */  beqz        $v0, .LE16C50_8018A1E8
/* E19900 8018A1D0 00057840 */   sll        $t7, $a1, 1
/* E19904 8018A1D4 24090001 */  addiu       $t1, $zero, 0x1
/* E19908 8018A1D8 10490007 */  beq         $v0, $t1, .LE16C50_8018A1F8
/* E1990C 8018A1DC 3C0142F0 */   lui        $at, (0x42F00000 >> 16)
/* E19910 8018A1E0 03E00008 */  jr          $ra
/* E19914 8018A1E4 00000000 */   nop
.LE16C50_8018A1E8:
/* E19918 8018A1E8 008FC021 */  addu        $t8, $a0, $t7
/* E1991C 8018A1EC A70E00BE */  sh          $t6, 0xBE($t8)
/* E19920 8018A1F0 03E00008 */  jr          $ra
/* E19924 8018A1F4 ACC90008 */   sw         $t1, 0x8($a2)
.LE16C50_8018A1F8:
/* E19928 8018A1F8 44810000 */  mtc1        $at, $fv0
/* E1992C 8018A1FC 00833821 */  addu        $a3, $a0, $v1
/* E19930 8018A200 0005C840 */  sll         $t9, $a1, 1
/* E19934 8018A204 00991021 */  addu        $v0, $a0, $t9
/* E19938 8018A208 E4E0010C */  swc1        $fv0, 0x10C($a3)
/* E1993C 8018A20C 844A00CA */  lh          $t2, 0xCA($v0)
/* E19940 8018A210 2418001E */  addiu       $t8, $zero, 0x1E
/* E19944 8018A214 5540000E */  bnel        $t2, $zero, .LE16C50_8018A250
/* E19948 8018A218 848E00BA */   lh         $t6, 0xBA($a0)
/* E1994C 8018A21C 8D0B0018 */  lw          $t3, 0x18($t0)
/* E19950 8018A220 5160000B */  beql        $t3, $zero, .LE16C50_8018A250
/* E19954 8018A224 848E00BA */   lh         $t6, 0xBA($a0)
/* E19958 8018A228 848C00A6 */  lh          $t4, 0xA6($a0)
/* E1995C 8018A22C 5580000C */  bnel        $t4, $zero, .LE16C50_8018A260
/* E19960 8018A230 3C013F80 */   lui        $at, (0x3F800000 >> 16)
/* E19964 8018A234 848D00A8 */  lh          $t5, 0xA8($a0)
/* E19968 8018A238 55A00009 */  bnel        $t5, $zero, .LE16C50_8018A260
/* E1996C 8018A23C 3C013F80 */   lui        $at, (0x3F800000 >> 16)
/* E19970 8018A240 848F00AA */  lh          $t7, 0xAA($a0)
/* E19974 8018A244 55E00006 */  bnel        $t7, $zero, .LE16C50_8018A260
/* E19978 8018A248 3C013F80 */   lui        $at, (0x3F800000 >> 16)
/* E1997C 8018A24C 848E00BA */  lh          $t6, 0xBA($a0)
.LE16C50_8018A250:
/* E19980 8018A250 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E19984 8018A254 55C00006 */  bnel        $t6, $zero, .LE16C50_8018A270
/* E19988 8018A258 44813000 */   mtc1       $at, $ft1
/* E1998C 8018A25C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
.LE16C50_8018A260:
/* E19990 8018A260 44812000 */  mtc1        $at, $ft0
/* E19994 8018A264 10000004 */  b           .LE16C50_8018A278
/* E19998 8018A268 E4E40118 */   swc1       $ft0, 0x118($a3)
/* E1999C 8018A26C 44813000 */  mtc1        $at, $ft1
.LE16C50_8018A270:
/* E199A0 8018A270 00000000 */  nop
/* E199A4 8018A274 E4E60118 */  swc1        $ft1, 0x118($a3)
.LE16C50_8018A278:
/* E199A8 8018A278 3C0142EE */  lui         $at, (0x42EE0000 >> 16)
/* E199AC 8018A27C 44815000 */  mtc1        $at, $ft3
/* E199B0 8018A280 C4E80100 */  lwc1        $ft2, 0x100($a3)
/* E199B4 8018A284 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E199B8 8018A288 4608503E */  c.le.s      $ft3, $ft2
/* E199BC 8018A28C 00000000 */  nop
/* E199C0 8018A290 4500000A */  bc1f        .LE16C50_8018A2BC
/* E199C4 8018A294 00000000 */   nop
/* E199C8 8018A298 44818000 */  mtc1        $at, $ft4
/* E199CC 8018A29C E4E00100 */  swc1        $fv0, 0x100($a3)
/* E199D0 8018A2A0 A45800CA */  sh          $t8, 0xCA($v0)
/* E199D4 8018A2A4 E4F00118 */  swc1        $ft4, 0x118($a3)
/* E199D8 8018A2A8 ACC00008 */  sw          $zero, 0x8($a2)
/* E199DC 8018A2AC A4400094 */  sh          $zero, 0x94($v0)
/* E199E0 8018A2B0 A440009A */  sh          $zero, 0x9A($v0)
/* E199E4 8018A2B4 A44900C4 */  sh          $t1, 0xC4($v0)
/* E199E8 8018A2B8 A44000AC */  sh          $zero, 0xAC($v0)
.LE16C50_8018A2BC:
/* E199EC 8018A2BC 03E00008 */  jr          $ra
/* E199F0 8018A2C0 00000000 */   nop
glabel func_E16C50_8018A2C4
/* E199F4 8018A2C4 27BDFF98 */  addiu       $sp, $sp, -0x68
/* E199F8 8018A2C8 AFB20028 */  sw          $s2, 0x28($sp)
/* E199FC 8018A2CC 00809025 */  or          $s2, $a0, $zero
/* E19A00 8018A2D0 AFBF0044 */  sw          $ra, 0x44($sp)
/* E19A04 8018A2D4 AFBE0040 */  sw          $fp, 0x40($sp)
/* E19A08 8018A2D8 AFB7003C */  sw          $s7, 0x3C($sp)
/* E19A0C 8018A2DC AFB60038 */  sw          $s6, 0x38($sp)
/* E19A10 8018A2E0 AFB50034 */  sw          $s5, 0x34($sp)
/* E19A14 8018A2E4 AFB40030 */  sw          $s4, 0x30($sp)
/* E19A18 8018A2E8 AFB3002C */  sw          $s3, 0x2C($sp)
/* E19A1C 8018A2EC AFB10024 */  sw          $s1, 0x24($sp)
/* E19A20 8018A2F0 AFB00020 */  sw          $s0, 0x20($sp)
/* E19A24 8018A2F4 F7B40018 */  sdc1        $fs0, 0x18($sp)
/* E19A28 8018A2F8 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E19A2C 8018A2FC 3C152903 */  lui         $s5, (0x29034003 >> 16)
/* E19A30 8018A300 4481A000 */  mtc1        $at, $fs0
/* E19A34 8018A304 36B54003 */  ori         $s5, $s5, (0x29034003 & 0xFFFF)
/* E19A38 8018A308 00008825 */  or          $s1, $zero, $zero
/* E19A3C 8018A30C 241E0004 */  addiu       $fp, $zero, 0x4
/* E19A40 8018A310 24170003 */  addiu       $s7, $zero, 0x3
/* E19A44 8018A314 24160001 */  addiu       $s6, $zero, 0x1
/* E19A48 8018A318 27B40058 */  addiu       $s4, $sp, 0x58
.LE16C50_8018A31C:
/* E19A4C 8018A31C 864E0066 */  lh          $t6, 0x66($s2)
/* E19A50 8018A320 26330001 */  addiu       $s3, $s1, 0x1
/* E19A54 8018A324 166E0040 */  bne         $s3, $t6, .LE16C50_8018A428
/* E19A58 8018A328 00000000 */   nop
/* E19A5C 8018A32C 864F004E */  lh          $t7, 0x4E($s2)
/* E19A60 8018A330 17CF003D */  bne         $fp, $t7, .LE16C50_8018A428
/* E19A64 8018A334 00000000 */   nop
/* E19A68 8018A338 C64400D8 */  lwc1        $ft0, 0xD8($s2)
/* E19A6C 8018A33C 0011C040 */  sll         $t8, $s1, 1
/* E19A70 8018A340 02588021 */  addu        $s0, $s2, $t8
/* E19A74 8018A344 4614203C */  c.lt.s      $ft0, $fs0
/* E19A78 8018A348 00000000 */  nop
/* E19A7C 8018A34C 45000036 */  bc1f        .LE16C50_8018A428
/* E19A80 8018A350 00000000 */   nop
/* E19A84 8018A354 860200AC */  lh          $v0, 0xAC($s0)
/* E19A88 8018A358 12C20033 */  beq         $s6, $v0, .LE16C50_8018A428
/* E19A8C 8018A35C 00000000 */   nop
/* E19A90 8018A360 12E20031 */  beq         $s7, $v0, .LE16C50_8018A428
/* E19A94 8018A364 2419000F */   addiu      $t9, $zero, 0xF
/* E19A98 8018A368 24080028 */  addiu       $t0, $zero, 0x28
/* E19A9C 8018A36C A6190088 */  sh          $t9, 0x88($s0)
/* E19AA0 8018A370 A608008E */  sh          $t0, 0x8E($s0)
/* E19AA4 8018A374 864A0064 */  lh          $t2, 0x64($s2)
/* E19AA8 8018A378 860900CA */  lh          $t1, 0xCA($s0)
/* E19AAC 8018A37C 3C01801C */  lui         $at, %hi(D_E16C50_801BF334)
/* E19AB0 8018A380 012A5823 */  subu        $t3, $t1, $t2
/* E19AB4 8018A384 1620000B */  bnez        $s1, .LE16C50_8018A3B4
/* E19AB8 8018A388 A60B00CA */   sh         $t3, 0xCA($s0)
/* E19ABC 8018A38C C426F334 */  lwc1        $ft1, %lo(D_E16C50_801BF334)($at)
/* E19AC0 8018A390 3C01801C */  lui         $at, %hi(D_E16C50_801BF3C4)
/* E19AC4 8018A394 C428F3C4 */  lwc1        $ft2, %lo(D_E16C50_801BF3C4)($at)
/* E19AC8 8018A398 E7A60058 */  swc1        $ft1, 0x58($sp)
/* E19ACC 8018A39C 02802025 */  or          $a0, $s4, $zero
/* E19AD0 8018A3A0 E7A8005C */  swc1        $ft2, 0x5C($sp)
/* E19AD4 8018A3A4 C64A000C */  lwc1        $ft3, 0xC($s2)
/* E19AD8 8018A3A8 02A02825 */  or          $a1, $s5, $zero
/* E19ADC 8018A3AC 0C01E9BC */  jal         func_8007A6F0
/* E19AE0 8018A3B0 E7AA0060 */   swc1       $ft3, 0x60($sp)
.LE16C50_8018A3B4:
/* E19AE4 8018A3B4 1636000B */  bne         $s1, $s6, .LE16C50_8018A3E4
/* E19AE8 8018A3B8 3C01801C */   lui        $at, %hi(D_E16C50_801BF364)
/* E19AEC 8018A3BC C430F364 */  lwc1        $ft4, %lo(D_E16C50_801BF364)($at)
/* E19AF0 8018A3C0 3C01801C */  lui         $at, %hi(D_E16C50_801BF3F4)
/* E19AF4 8018A3C4 C432F3F4 */  lwc1        $ft5, %lo(D_E16C50_801BF3F4)($at)
/* E19AF8 8018A3C8 E7B00058 */  swc1        $ft4, 0x58($sp)
/* E19AFC 8018A3CC 02802025 */  or          $a0, $s4, $zero
/* E19B00 8018A3D0 E7B2005C */  swc1        $ft5, 0x5C($sp)
/* E19B04 8018A3D4 C644000C */  lwc1        $ft0, 0xC($s2)
/* E19B08 8018A3D8 02A02825 */  or          $a1, $s5, $zero
/* E19B0C 8018A3DC 0C01E9BC */  jal         func_8007A6F0
/* E19B10 8018A3E0 E7A40060 */   swc1       $ft0, 0x60($sp)
.LE16C50_8018A3E4:
/* E19B14 8018A3E4 24010002 */  addiu       $at, $zero, 0x2
/* E19B18 8018A3E8 1621000B */  bne         $s1, $at, .LE16C50_8018A418
/* E19B1C 8018A3EC 3C01801C */   lui        $at, %hi(D_E16C50_801BF394)
/* E19B20 8018A3F0 C426F394 */  lwc1        $ft1, %lo(D_E16C50_801BF394)($at)
/* E19B24 8018A3F4 3C01801C */  lui         $at, %hi(D_E16C50_801BF424)
/* E19B28 8018A3F8 C428F424 */  lwc1        $ft2, %lo(D_E16C50_801BF424)($at)
/* E19B2C 8018A3FC E7A60058 */  swc1        $ft1, 0x58($sp)
/* E19B30 8018A400 02802025 */  or          $a0, $s4, $zero
/* E19B34 8018A404 E7A8005C */  swc1        $ft2, 0x5C($sp)
/* E19B38 8018A408 C64A000C */  lwc1        $ft3, 0xC($s2)
/* E19B3C 8018A40C 02A02825 */  or          $a1, $s5, $zero
/* E19B40 8018A410 0C01E9BC */  jal         func_8007A6F0
/* E19B44 8018A414 E7AA0060 */   swc1       $ft3, 0x60($sp)
.LE16C50_8018A418:
/* E19B48 8018A418 860C00CA */  lh          $t4, 0xCA($s0)
/* E19B4C 8018A41C 05810002 */  bgez        $t4, .LE16C50_8018A428
/* E19B50 8018A420 00000000 */   nop
/* E19B54 8018A424 A60000CA */  sh          $zero, 0xCA($s0)
.LE16C50_8018A428:
/* E19B58 8018A428 1677FFBC */  bne         $s3, $s7, .LE16C50_8018A31C
/* E19B5C 8018A42C 02608825 */   or         $s1, $s3, $zero
/* E19B60 8018A430 8FBF0044 */  lw          $ra, 0x44($sp)
/* E19B64 8018A434 D7B40018 */  ldc1        $fs0, 0x18($sp)
/* E19B68 8018A438 8FB00020 */  lw          $s0, 0x20($sp)
/* E19B6C 8018A43C 8FB10024 */  lw          $s1, 0x24($sp)
/* E19B70 8018A440 8FB20028 */  lw          $s2, 0x28($sp)
/* E19B74 8018A444 8FB3002C */  lw          $s3, 0x2C($sp)
/* E19B78 8018A448 8FB40030 */  lw          $s4, 0x30($sp)
/* E19B7C 8018A44C 8FB50034 */  lw          $s5, 0x34($sp)
/* E19B80 8018A450 8FB60038 */  lw          $s6, 0x38($sp)
/* E19B84 8018A454 8FB7003C */  lw          $s7, 0x3C($sp)
/* E19B88 8018A458 8FBE0040 */  lw          $fp, 0x40($sp)
/* E19B8C 8018A45C 03E00008 */  jr          $ra
/* E19B90 8018A460 27BD0068 */   addiu      $sp, $sp, 0x68
.section .late_rodata
dlabel D_E16C50_801C0A40
/* E50170 801C0A40 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0A44
/* E50174 801C0A44 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C0A48
/* E50178 801C0A48 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0A4C
/* E5017C 801C0A4C 3CF5C28F */ .float 0.02999999933

dlabel D_E16C50_801C0A50
/* E50180 801C0A50 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0A54
/* E50184 801C0A54 3CF5C28F */ .float 0.02999999933

dlabel D_E16C50_801C0A58
/* E50188 801C0A58 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0A5C
/* E5018C 801C0A5C 3ECCCCCD */ .float 0.400000006

dlabel D_E16C50_801C0A60
/* E50190 801C0A60 3CF5C28F */ .float 0.02999999933

dlabel D_E16C50_801C0A64
/* E50194 801C0A64 3F333333 */ .float 0.6999999881

dlabel D_E16C50_801C0A68
/* E50198 801C0A68 3E4CCCCD */ .float 0.200000003

dlabel D_E16C50_801C0A6C
/* E5019C 801C0A6C 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C0A70
/* E501A0 801C0A70 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0A74
/* E501A4 801C0A74 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0A78
/* E501A8 801C0A78 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C0A7C
/* E501AC 801C0A7C 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0A80
/* E501B0 801C0A80 3A83126F */ .float 0.001000000047


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8018A464
/* E19B94 8018A464 27BDFF08 */  addiu       $sp, $sp, -0xF8
/* E19B98 8018A468 AFBE0070 */  sw          $fp, 0x70($sp)
/* E19B9C 8018A46C AFB10054 */  sw          $s1, 0x54($sp)
/* E19BA0 8018A470 3C08801C */  lui         $t0, %hi(D_E16C50_801C2250)
/* E19BA4 8018A474 25082250 */  addiu       $t0, $t0, %lo(D_E16C50_801C2250)
/* E19BA8 8018A478 00A08825 */  or          $s1, $a1, $zero
/* E19BAC 8018A47C 241E000C */  addiu       $fp, $zero, 0xC
/* E19BB0 8018A480 AFBF0074 */  sw          $ra, 0x74($sp)
/* E19BB4 8018A484 AFB7006C */  sw          $s7, 0x6C($sp)
/* E19BB8 8018A488 AFB60068 */  sw          $s6, 0x68($sp)
/* E19BBC 8018A48C AFB50064 */  sw          $s5, 0x64($sp)
/* E19BC0 8018A490 AFB40060 */  sw          $s4, 0x60($sp)
/* E19BC4 8018A494 AFB3005C */  sw          $s3, 0x5C($sp)
/* E19BC8 8018A498 AFB20058 */  sw          $s2, 0x58($sp)
/* E19BCC 8018A49C AFB00050 */  sw          $s0, 0x50($sp)
/* E19BD0 8018A4A0 F7BE0048 */  sdc1        $fs5, 0x48($sp)
/* E19BD4 8018A4A4 F7BC0040 */  sdc1        $fs4, 0x40($sp)
/* E19BD8 8018A4A8 F7BA0038 */  sdc1        $fs3, 0x38($sp)
/* E19BDC 8018A4AC F7B80030 */  sdc1        $fs2, 0x30($sp)
/* E19BE0 8018A4B0 F7B60028 */  sdc1        $fs1, 0x28($sp)
/* E19BE4 8018A4B4 F7B40020 */  sdc1        $fs0, 0x20($sp)
/* E19BE8 8018A4B8 AFA400F8 */  sw          $a0, 0xF8($sp)
/* E19BEC 8018A4BC 023E0019 */  multu       $s1, $fp
/* E19BF0 8018A4C0 8FB800F8 */  lw          $t8, 0xF8($sp)
/* E19BF4 8018A4C4 00111080 */  sll         $v0, $s1, 2
/* E19BF8 8018A4C8 00511023 */  subu        $v0, $v0, $s1
/* E19BFC 8018A4CC 000270C0 */  sll         $t6, $v0, 3
/* E19C00 8018A4D0 01C01025 */  or          $v0, $t6, $zero
/* E19C04 8018A4D4 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E19C08 8018A4D8 3C01C2B4 */  lui         $at, (0xC2B40000 >> 16)
/* E19C0C 8018A4DC 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E19C10 8018A4E0 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E19C14 8018A4E4 00007812 */  mflo        $t7
/* E19C18 8018A4E8 AFAF00A8 */  sw          $t7, 0xA8($sp)
/* E19C1C 8018A4EC 8F0C0028 */  lw          $t4, 0x28($t8)
/* E19C20 8018A4F0 030F1821 */  addu        $v1, $t8, $t7
/* E19C24 8018A4F4 C46401B4 */  lwc1        $ft0, 0x1B4($v1)
/* E19C28 8018A4F8 018E6821 */  addu        $t5, $t4, $t6
/* E19C2C 8018A4FC E5A4001C */  swc1        $ft0, 0x1C($t5)
/* E19C30 8018A500 8FAE00F8 */  lw          $t6, 0xF8($sp)
/* E19C34 8018A504 C46601B0 */  lwc1        $ft1, 0x1B0($v1)
/* E19C38 8018A508 8DCF0028 */  lw          $t7, 0x28($t6)
/* E19C3C 8018A50C 01E2C821 */  addu        $t9, $t7, $v0
/* E19C40 8018A510 E7260024 */  swc1        $ft1, 0x24($t9)
/* E19C44 8018A514 8FB800F8 */  lw          $t8, 0xF8($sp)
/* E19C48 8018A518 C46801AC */  lwc1        $ft2, 0x1AC($v1)
/* E19C4C 8018A51C 8F0C0028 */  lw          $t4, 0x28($t8)
/* E19C50 8018A520 01826821 */  addu        $t5, $t4, $v0
/* E19C54 8018A524 E5A8002C */  swc1        $ft2, 0x2C($t5)
/* E19C58 8018A528 8D0E0014 */  lw          $t6, 0x14($t0)
/* E19C5C 8018A52C 8FAF00F8 */  lw          $t7, 0xF8($sp)
/* E19C60 8018A530 51C00008 */  beql        $t6, $zero, .LE16C50_8018A554
/* E19C64 8018A534 8FAC00F8 */   lw         $t4, 0xF8($sp)
/* E19C68 8018A538 85F90056 */  lh          $t9, 0x56($t7)
/* E19C6C 8018A53C 241800CA */  addiu       $t8, $zero, 0xCA
/* E19C70 8018A540 53200004 */  beql        $t9, $zero, .LE16C50_8018A554
/* E19C74 8018A544 8FAC00F8 */   lw         $t4, 0xF8($sp)
/* E19C78 8018A548 A5F80050 */  sh          $t8, 0x50($t7)
/* E19C7C 8018A54C A5E00056 */  sh          $zero, 0x56($t7)
/* E19C80 8018A550 8FAC00F8 */  lw          $t4, 0xF8($sp)
.LE16C50_8018A554:
/* E19C84 8018A554 0011B840 */  sll         $s7, $s1, 1
/* E19C88 8018A558 8FAE00F8 */  lw          $t6, 0xF8($sp)
/* E19C8C 8018A55C 01976821 */  addu        $t5, $t4, $s7
/* E19C90 8018A560 AFAD00A0 */  sw          $t5, 0xA0($sp)
/* E19C94 8018A564 85A200AC */  lh          $v0, 0xAC($t5)
/* E19C98 8018A568 0011C880 */  sll         $t9, $s1, 2
/* E19C9C 8018A56C 01D98021 */  addu        $s0, $t6, $t9
/* E19CA0 8018A570 1040000C */  beqz        $v0, .LE16C50_8018A5A4
/* E19CA4 8018A574 2604013C */   addiu      $a0, $s0, 0x13C
/* E19CA8 8018A578 24010001 */  addiu       $at, $zero, 0x1
/* E19CAC 8018A57C 104102C7 */  beq         $v0, $at, .LE16C50_8018B09C
/* E19CB0 8018A580 240E0032 */   addiu      $t6, $zero, 0x32
/* E19CB4 8018A584 24010002 */  addiu       $at, $zero, 0x2
/* E19CB8 8018A588 1041037C */  beq         $v0, $at, .LE16C50_8018B37C
/* E19CBC 8018A58C 240E0032 */   addiu      $t6, $zero, 0x32
/* E19CC0 8018A590 24010003 */  addiu       $at, $zero, 0x3
/* E19CC4 8018A594 10410463 */  beq         $v0, $at, .LE16C50_8018B724
/* E19CC8 8018A598 3C10801C */   lui        $s0, %hi(D_E16C50_801BEE00)
/* E19CCC 8018A59C 100004F6 */  b           .LE16C50_8018B978
/* E19CD0 8018A5A0 8FBF0074 */   lw         $ra, 0x74($sp)
.LE16C50_8018A5A4:
/* E19CD4 8018A5A4 44810000 */  mtc1        $at, $fv0
/* E19CD8 8018A5A8 3C01801C */  lui         $at, %hi(D_E16C50_801C0A40)
/* E19CDC 8018A5AC C43C0A40 */  lwc1        $fs4, %lo(D_E16C50_801C0A40)($at)
/* E19CE0 8018A5B0 44050000 */  mfc1        $a1, $fv0
/* E19CE4 8018A5B4 0C026F0B */  jal         Math_SmoothStepToF
/* E19CE8 8018A5B8 E7BC0010 */   swc1       $fs4, 0x10($sp)
/* E19CEC 8018A5BC 3C01801C */  lui         $at, %hi(D_E16C50_801C0A44)
/* E19CF0 8018A5C0 C4380A44 */  lwc1        $fs2, %lo(D_E16C50_801C0A44)($at)
/* E19CF4 8018A5C4 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E19CF8 8018A5C8 4481D000 */  mtc1        $at, $fs3
/* E19CFC 8018A5CC 4480A000 */  mtc1        $zero, $fs0
/* E19D00 8018A5D0 4406C000 */  mfc1        $a2, $fs2
/* E19D04 8018A5D4 4407D000 */  mfc1        $a3, $fs3
/* E19D08 8018A5D8 4405A000 */  mfc1        $a1, $fs0
/* E19D0C 8018A5DC 26040130 */  addiu       $a0, $s0, %lo(D_E16C50_801C0130)
/* E19D10 8018A5E0 0C026F0B */  jal         Math_SmoothStepToF
/* E19D14 8018A5E4 E7BC0010 */   swc1       $fs4, 0x10($sp)
/* E19D18 8018A5E8 1220000B */  beqz        $s1, .LE16C50_8018A618
/* E19D1C 8018A5EC 8FB800F8 */   lw         $t8, 0xF8($sp)
/* E19D20 8018A5F0 24010001 */  addiu       $at, $zero, 0x1
/* E19D24 8018A5F4 122100C4 */  beq         $s1, $at, .LE16C50_8018A908
/* E19D28 8018A5F8 8FA400F8 */   lw         $a0, 0xF8($sp)
/* E19D2C 8018A5FC 24010002 */  addiu       $at, $zero, 0x2
/* E19D30 8018A600 12210177 */  beq         $s1, $at, .LE16C50_8018ABE0
/* E19D34 8018A604 8FA400F8 */   lw         $a0, 0xF8($sp)
/* E19D38 8018A608 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E19D3C 8018A60C 4481D000 */  mtc1        $at, $fs3
/* E19D40 8018A610 1000022C */  b           .LE16C50_8018AEC4
/* E19D44 8018A614 8FA200F8 */   lw         $v0, 0xF8($sp)
.LE16C50_8018A618:
/* E19D48 8018A618 870F00CA */  lh          $t7, 0xCA($t8)
/* E19D4C 8018A61C 24130001 */  addiu       $s3, $zero, 0x1
/* E19D50 8018A620 3C01C1A0 */  lui         $at, (0xC1A00000 >> 16)
/* E19D54 8018A624 11E000B4 */  beqz        $t7, .LE16C50_8018A8F8
/* E19D58 8018A628 24170014 */   addiu      $s7, $zero, 0x14
/* E19D5C 8018A62C 4481F000 */  mtc1        $at, $fs5
/* E19D60 8018A630 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E19D64 8018A634 4481E000 */  mtc1        $at, $fs4
/* E19D68 8018A638 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E19D6C 8018A63C 4481D000 */  mtc1        $at, $fs3
/* E19D70 8018A640 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E19D74 8018A644 4481C000 */  mtc1        $at, $fs2
/* E19D78 8018A648 3C01801C */  lui         $at, %hi(D_E16C50_801C0A48)
/* E19D7C 8018A64C 3C16801C */  lui         $s6, %hi(D_E16C50_801BEE90)
/* E19D80 8018A650 3C15801C */  lui         $s5, %hi(D_E16C50_801BEEC0)
/* E19D84 8018A654 3C14801C */  lui         $s4, %hi(D_E16C50_801BF3C4)
/* E19D88 8018A658 3C12801C */  lui         $s2, %hi(D_E16C50_801BF334)
/* E19D8C 8018A65C 3C11801C */  lui         $s1, %hi(D_E16C50_801BEE00)
/* E19D90 8018A660 2631EE00 */  addiu       $s1, $s1, %lo(D_E16C50_801BEE00)
/* E19D94 8018A664 2652F334 */  addiu       $s2, $s2, %lo(D_E16C50_801BF334)
/* E19D98 8018A668 2694F3C4 */  addiu       $s4, $s4, %lo(D_E16C50_801BF3C4)
/* E19D9C 8018A66C 26B5EEC0 */  addiu       $s5, $s5, %lo(D_E16C50_801BEEC0)
/* E19DA0 8018A670 26D6EE90 */  addiu       $s6, $s6, %lo(D_E16C50_801BEE90)
/* E19DA4 8018A674 C4360A48 */  lwc1        $fs1, %lo(D_E16C50_801C0A48)($at)
/* E19DA8 8018A678 00131080 */  sll         $v0, $s3, 2
.LE16C50_8018A67C:
/* E19DAC 8018A67C 02C26021 */  addu        $t4, $s6, $v0
/* E19DB0 8018A680 E59C0000 */  swc1        $fs4, 0x0($t4)
/* E19DB4 8018A684 02A26821 */  addu        $t5, $s5, $v0
/* E19DB8 8018A688 E5BC0000 */  swc1        $fs4, 0x0($t5)
/* E19DBC 8018A68C 8FAE00F8 */  lw          $t6, 0xF8($sp)
/* E19DC0 8018A690 85C30094 */  lh          $v1, 0x94($t6)
/* E19DC4 8018A694 14600022 */  bnez        $v1, .LE16C50_8018A720
/* E19DC8 8018A698 30780003 */   andi       $t8, $v1, 0x3
/* E19DCC 8018A69C 85D9004E */  lh          $t9, 0x4E($t6)
/* E19DD0 8018A6A0 24010003 */  addiu       $at, $zero, 0x3
/* E19DD4 8018A6A4 1321001E */  beq         $t9, $at, .LE16C50_8018A720
/* E19DD8 8018A6A8 00000000 */   nop
/* E19DDC 8018A6AC A5D70094 */  sh          $s7, 0x94($t6)
/* E19DE0 8018A6B0 0C0013AC */  jal         Rand_ZeroOne
/* E19DE4 8018A6B4 AFA200A8 */   sw         $v0, 0xA8($sp)
/* E19DE8 8018A6B8 461A0281 */  sub.s       $ft3, $fv0, $fs3
/* E19DEC 8018A6BC 3C014434 */  lui         $at, (0x44340000 >> 16)
/* E19DF0 8018A6C0 44818000 */  mtc1        $at, $ft4
/* E19DF4 8018A6C4 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E19DF8 8018A6C8 44812000 */  mtc1        $at, $ft0
/* E19DFC 8018A6CC 46105482 */  mul.s       $ft5, $ft3, $ft4
/* E19E00 8018A6D0 8FA200A8 */  lw          $v0, 0xA8($sp)
/* E19E04 8018A6D4 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E19E08 8018A6D8 E6320004 */  swc1        $ft5, 0x4($s1)
/* E19E0C 8018A6DC C6220004 */  lwc1        $fv1, 0x4($s1)
/* E19E10 8018A6E0 461E103C */  c.lt.s      $fv1, $fs5
/* E19E14 8018A6E4 00000000 */  nop
/* E19E18 8018A6E8 45020004 */  bc1fl       .LE16C50_8018A6FC
/* E19E1C 8018A6EC 4602203C */   c.lt.s     $ft0, $fv1
/* E19E20 8018A6F0 E63E0004 */  swc1        $fs5, 0x4($s1)
/* E19E24 8018A6F4 C6220004 */  lwc1        $fv1, 0x4($s1)
/* E19E28 8018A6F8 4602203C */  c.lt.s      $ft0, $fv1
.LE16C50_8018A6FC:
/* E19E2C 8018A6FC 00000000 */  nop
/* E19E30 8018A700 45000005 */  bc1f        .LE16C50_8018A718
/* E19E34 8018A704 00000000 */   nop
/* E19E38 8018A708 44813000 */  mtc1        $at, $ft1
/* E19E3C 8018A70C 00000000 */  nop
/* E19E40 8018A710 E6260004 */  swc1        $ft1, 0x4($s1)
/* E19E44 8018A714 C6220004 */  lwc1        $fv1, 0x4($s1)
.LE16C50_8018A718:
/* E19E48 8018A718 1000000B */  b           .LE16C50_8018A748
/* E19E4C 8018A71C E6820000 */   swc1       $fv1, 0x0($s4)
.LE16C50_8018A720:
/* E19E50 8018A720 5700000A */  bnel        $t8, $zero, .LE16C50_8018A74C
/* E19E54 8018A724 8FAC00F8 */   lw         $t4, 0xF8($sp)
/* E19E58 8018A728 027E0019 */  multu       $s3, $fp
/* E19E5C 8018A72C 02821821 */  addu        $v1, $s4, $v0
/* E19E60 8018A730 C46AFFFC */  lwc1        $ft3, -0x4($v1)
/* E19E64 8018A734 00007812 */  mflo        $t7
/* E19E68 8018A738 022F8021 */  addu        $s0, $s1, $t7
/* E19E6C 8018A73C C6080004 */  lwc1        $ft2, 0x4($s0)
/* E19E70 8018A740 E60A0004 */  swc1        $ft3, 0x4($s0)
/* E19E74 8018A744 E4680000 */  swc1        $ft2, 0x0($v1)
.LE16C50_8018A748:
/* E19E78 8018A748 8FAC00F8 */  lw          $t4, 0xF8($sp)
.LE16C50_8018A74C:
/* E19E7C 8018A74C 8583009A */  lh          $v1, 0x9A($t4)
/* E19E80 8018A750 14600029 */  bnez        $v1, .LE16C50_8018A7F8
/* E19E84 8018A754 306E0007 */   andi       $t6, $v1, 0x7
/* E19E88 8018A758 C6220004 */  lwc1        $fv1, 0x4($s1)
/* E19E8C 8018A75C 3C10801C */  lui         $s0, %hi(D_E16C50_801BEE00)
/* E19E90 8018A760 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E19E94 8018A764 461E103C */  c.lt.s      $fv1, $fs5
/* E19E98 8018A768 2610EE00 */  addiu       $s0, $s0, %lo(D_E16C50_801BEE00)
/* E19E9C 8018A76C 45030008 */  bc1tl       .LE16C50_8018A790
/* E19EA0 8018A770 00009825 */   or         $s3, $zero, $zero
/* E19EA4 8018A774 44818000 */  mtc1        $at, $ft4
/* E19EA8 8018A778 8FB900F8 */  lw          $t9, 0xF8($sp)
/* E19EAC 8018A77C 4602803C */  c.lt.s      $ft4, $fv1
/* E19EB0 8018A780 00000000 */  nop
/* E19EB4 8018A784 4502000E */  bc1fl       .LE16C50_8018A7C0
/* E19EB8 8018A788 240D001E */   addiu      $t5, $zero, 0x1E
/* E19EBC 8018A78C 00009825 */  or          $s3, $zero, $zero
.LE16C50_8018A790:
/* E19EC0 8018A790 4405A000 */  mfc1        $a1, $fs0
/* E19EC4 8018A794 4406D000 */  mfc1        $a2, $fs3
/* E19EC8 8018A798 4407C000 */  mfc1        $a3, $fs2
/* E19ECC 8018A79C 02002025 */  or          $a0, $s0, $zero
/* E19ED0 8018A7A0 0C026F0B */  jal         Math_SmoothStepToF
/* E19ED4 8018A7A4 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E19ED8 8018A7A8 26730001 */  addiu       $s3, $s3, 0x1
/* E19EDC 8018A7AC 167EFFF8 */  bne         $s3, $fp, .LE16C50_8018A790
/* E19EE0 8018A7B0 2610000C */   addiu      $s0, $s0, 0xC
/* E19EE4 8018A7B4 1000000A */  b           .LE16C50_8018A7E0
/* E19EE8 8018A7B8 00000000 */   nop
/* E19EEC 8018A7BC 240D001E */  addiu       $t5, $zero, 0x1E
.LE16C50_8018A7C0:
/* E19EF0 8018A7C0 0C0013AC */  jal         Rand_ZeroOne
/* E19EF4 8018A7C4 A72D009A */   sh         $t5, 0x9A($t9)
/* E19EF8 8018A7C8 461A0481 */  sub.s       $ft5, $fv0, $fs3
/* E19EFC 8018A7CC 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E19F00 8018A7D0 44812000 */  mtc1        $at, $ft0
/* E19F04 8018A7D4 3C01801C */  lui         $at, %hi(D_E16C50_801BEE00)
/* E19F08 8018A7D8 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E19F0C 8018A7DC E426EE00 */  swc1        $ft1, %lo(D_E16C50_801BEE00)($at)
.LE16C50_8018A7E0:
/* E19F10 8018A7E0 3C01801C */  lui         $at, %hi(D_E16C50_801BEE00)
/* E19F14 8018A7E4 C428EE00 */  lwc1        $ft2, %lo(D_E16C50_801BEE00)($at)
/* E19F18 8018A7E8 3C11801C */  lui         $s1, %hi(D_E16C50_801BEE00)
/* E19F1C 8018A7EC 2631EE00 */  addiu       $s1, $s1, %lo(D_E16C50_801BEE00)
/* E19F20 8018A7F0 1000000B */  b           .LE16C50_8018A820
/* E19F24 8018A7F4 E6480000 */   swc1       $ft2, 0x0($s2)
.LE16C50_8018A7F8:
/* E19F28 8018A7F8 55C0000A */  bnel        $t6, $zero, .LE16C50_8018A824
/* E19F2C 8018A7FC 26730001 */   addiu      $s3, $s3, 0x1
/* E19F30 8018A800 027E0019 */  multu       $s3, $fp
/* E19F34 8018A804 02421821 */  addu        $v1, $s2, $v0
/* E19F38 8018A808 C470FFFC */  lwc1        $ft4, -0x4($v1)
/* E19F3C 8018A80C 0000C012 */  mflo        $t8
/* E19F40 8018A810 02388021 */  addu        $s0, $s1, $t8
/* E19F44 8018A814 C60A0000 */  lwc1        $ft3, 0x0($s0)
/* E19F48 8018A818 E6100000 */  swc1        $ft4, 0x0($s0)
/* E19F4C 8018A81C E46A0000 */  swc1        $ft3, 0x0($v1)
.LE16C50_8018A820:
/* E19F50 8018A820 26730001 */  addiu       $s3, $s3, 0x1
.LE16C50_8018A824:
/* E19F54 8018A824 2A61000C */  slti        $at, $s3, 0xC
/* E19F58 8018A828 5420FF94 */  bnel        $at, $zero, .LE16C50_8018A67C
/* E19F5C 8018A82C 00131080 */   sll        $v0, $s3, 2
/* E19F60 8018A830 3C01801C */  lui         $at, %hi(D_E16C50_801C0A4C)
/* E19F64 8018A834 C4380A4C */  lwc1        $fs2, %lo(D_E16C50_801C0A4C)($at)
/* E19F68 8018A838 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E19F6C 8018A83C 3C17801C */  lui         $s7, %hi(D_E16C50_801BEE90)
/* E19F70 8018A840 3C1E801C */  lui         $fp, %hi(D_E16C50_801BEEC0)
/* E19F74 8018A844 3C10801C */  lui         $s0, %hi(D_E16C50_801BEE00)
/* E19F78 8018A848 3C15801C */  lui         $s5, %hi(D_E16C50_801BED70)
/* E19F7C 8018A84C 3C11801C */  lui         $s1, %hi(D_E16C50_801BED74)
/* E19F80 8018A850 3C12801C */  lui         $s2, %hi(D_E16C50_801BEE04)
/* E19F84 8018A854 4481A000 */  mtc1        $at, $fs0
/* E19F88 8018A858 2652EE04 */  addiu       $s2, $s2, %lo(D_E16C50_801BEE04)
/* E19F8C 8018A85C 2631ED74 */  addiu       $s1, $s1, %lo(D_E16C50_801BED74)
/* E19F90 8018A860 26B5ED70 */  addiu       $s5, $s5, %lo(D_E16C50_801BED70)
/* E19F94 8018A864 2610EE00 */  addiu       $s0, $s0, %lo(D_E16C50_801BEE00)
/* E19F98 8018A868 27DEEEC0 */  addiu       $fp, $fp, %lo(D_E16C50_801BEEC0)
/* E19F9C 8018A86C 26F7EE90 */  addiu       $s7, $s7, %lo(D_E16C50_801BEE90)
.LE16C50_8018A870:
/* E19FA0 8018A870 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E19FA4 8018A874 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E19FA8 8018A878 02202025 */  or          $a0, $s1, $zero
/* E19FAC 8018A87C 8E050004 */  lw          $a1, 0x4($s0)
/* E19FB0 8018A880 8FC70000 */  lw          $a3, 0x0($fp)
/* E19FB4 8018A884 0C026F0B */  jal         Math_SmoothStepToF
/* E19FB8 8018A888 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E19FBC 8018A88C 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E19FC0 8018A890 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E19FC4 8018A894 02A02025 */  or          $a0, $s5, $zero
/* E19FC8 8018A898 8E050000 */  lw          $a1, 0x0($s0)
/* E19FCC 8018A89C 8EE70000 */  lw          $a3, 0x0($s7)
/* E19FD0 8018A8A0 0C026F0B */  jal         Math_SmoothStepToF
/* E19FD4 8018A8A4 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E19FD8 8018A8A8 4405A000 */  mfc1        $a1, $fs0
/* E19FDC 8018A8AC 4406C000 */  mfc1        $a2, $fs2
/* E19FE0 8018A8B0 3C073D4C */  lui         $a3, (0x3D4CCCCD >> 16)
/* E19FE4 8018A8B4 34E7CCCD */  ori         $a3, $a3, (0x3D4CCCCD & 0xFFFF)
/* E19FE8 8018A8B8 02E02025 */  or          $a0, $s7, $zero
/* E19FEC 8018A8BC 0C026F0B */  jal         Math_SmoothStepToF
/* E19FF0 8018A8C0 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E19FF4 8018A8C4 4405A000 */  mfc1        $a1, $fs0
/* E19FF8 8018A8C8 4406C000 */  mfc1        $a2, $fs2
/* E19FFC 8018A8CC 3C073D4C */  lui         $a3, (0x3D4CCCCD >> 16)
/* E1A000 8018A8D0 34E7CCCD */  ori         $a3, $a3, (0x3D4CCCCD & 0xFFFF)
/* E1A004 8018A8D4 03C02025 */  or          $a0, $fp, $zero
/* E1A008 8018A8D8 0C026F0B */  jal         Math_SmoothStepToF
/* E1A00C 8018A8DC E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A010 8018A8E0 2631000C */  addiu       $s1, $s1, 0xC
/* E1A014 8018A8E4 26F70004 */  addiu       $s7, $s7, 0x4
/* E1A018 8018A8E8 27DE0004 */  addiu       $fp, $fp, 0x4
/* E1A01C 8018A8EC 2610000C */  addiu       $s0, $s0, 0xC
/* E1A020 8018A8F0 1632FFDF */  bne         $s1, $s2, .LE16C50_8018A870
/* E1A024 8018A8F4 26B5000C */   addiu      $s5, $s5, 0xC
.LE16C50_8018A8F8:
/* E1A028 8018A8F8 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E1A02C 8018A8FC 4481D000 */  mtc1        $at, $fs3
/* E1A030 8018A900 10000170 */  b           .LE16C50_8018AEC4
/* E1A034 8018A904 8FA200F8 */   lw         $v0, 0xF8($sp)
.LE16C50_8018A908:
/* E1A038 8018A908 848F00CC */  lh          $t7, 0xCC($a0)
/* E1A03C 8018A90C 24130001 */  addiu       $s3, $zero, 0x1
/* E1A040 8018A910 3C01C1A0 */  lui         $at, (0xC1A00000 >> 16)
/* E1A044 8018A914 11E000AE */  beqz        $t7, .LE16C50_8018ABD0
/* E1A048 8018A918 24170014 */   addiu      $s7, $zero, 0x14
/* E1A04C 8018A91C 4481F000 */  mtc1        $at, $fs5
/* E1A050 8018A920 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E1A054 8018A924 4481E000 */  mtc1        $at, $fs4
/* E1A058 8018A928 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E1A05C 8018A92C 4481D000 */  mtc1        $at, $fs3
/* E1A060 8018A930 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E1A064 8018A934 4481C000 */  mtc1        $at, $fs2
/* E1A068 8018A938 3C01801C */  lui         $at, %hi(D_E16C50_801C0A50)
/* E1A06C 8018A93C C4360A50 */  lwc1        $fs1, %lo(D_E16C50_801C0A50)($at)
/* E1A070 8018A940 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1A074 8018A944 3C16801C */  lui         $s6, %hi(D_E16C50_801BF3F4)
/* E1A078 8018A948 3C15801C */  lui         $s5, %hi(D_E16C50_801BF364)
/* E1A07C 8018A94C 3C14801C */  lui         $s4, %hi(D_E16C50_801BF040)
/* E1A080 8018A950 3C12801C */  lui         $s2, %hi(D_E16C50_801BF010)
/* E1A084 8018A954 3C10801C */  lui         $s0, %hi(D_E16C50_801BEF80)
/* E1A088 8018A958 44810000 */  mtc1        $at, $fv0
/* E1A08C 8018A95C 2610EF80 */  addiu       $s0, $s0, %lo(D_E16C50_801BEF80)
/* E1A090 8018A960 2652F010 */  addiu       $s2, $s2, %lo(D_E16C50_801BF010)
/* E1A094 8018A964 2694F040 */  addiu       $s4, $s4, %lo(D_E16C50_801BF040)
/* E1A098 8018A968 26B5F364 */  addiu       $s5, $s5, %lo(D_E16C50_801BF364)
/* E1A09C 8018A96C 26D6F3F4 */  addiu       $s6, $s6, %lo(D_E16C50_801BF3F4)
/* E1A0A0 8018A970 00131080 */  sll         $v0, $s3, 2
.LE16C50_8018A974:
/* E1A0A4 8018A974 02426021 */  addu        $t4, $s2, $v0
/* E1A0A8 8018A978 E59C0000 */  swc1        $fs4, 0x0($t4)
/* E1A0AC 8018A97C 02826821 */  addu        $t5, $s4, $v0
/* E1A0B0 8018A980 E5BC0000 */  swc1        $fs4, 0x0($t5)
/* E1A0B4 8018A984 84830096 */  lh          $v1, 0x96($a0)
/* E1A0B8 8018A988 1460001C */  bnez        $v1, .LE16C50_8018A9FC
/* E1A0BC 8018A98C 30790003 */   andi       $t9, $v1, 0x3
/* E1A0C0 8018A990 A4970096 */  sh          $s7, 0x96($a0)
/* E1A0C4 8018A994 0C0013AC */  jal         Rand_ZeroOne
/* E1A0C8 8018A998 AFA200A8 */   sw         $v0, 0xA8($sp)
/* E1A0CC 8018A99C 461A0481 */  sub.s       $ft5, $fv0, $fs3
/* E1A0D0 8018A9A0 3C014434 */  lui         $at, (0x44340000 >> 16)
/* E1A0D4 8018A9A4 44812000 */  mtc1        $at, $ft0
/* E1A0D8 8018A9A8 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1A0DC 8018A9AC 44810000 */  mtc1        $at, $fv0
/* E1A0E0 8018A9B0 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E1A0E4 8018A9B4 8FA200A8 */  lw          $v0, 0xA8($sp)
/* E1A0E8 8018A9B8 E6060004 */  swc1        $ft1, 0x4($s0)
/* E1A0EC 8018A9BC C6020004 */  lwc1        $fv1, 0x4($s0)
/* E1A0F0 8018A9C0 461E103C */  c.lt.s      $fv1, $fs5
/* E1A0F4 8018A9C4 00000000 */  nop
/* E1A0F8 8018A9C8 45020004 */  bc1fl       .LE16C50_8018A9DC
/* E1A0FC 8018A9CC 4602003C */   c.lt.s     $fv0, $fv1
/* E1A100 8018A9D0 E61E0004 */  swc1        $fs5, 0x4($s0)
/* E1A104 8018A9D4 C6020004 */  lwc1        $fv1, 0x4($s0)
/* E1A108 8018A9D8 4602003C */  c.lt.s      $fv0, $fv1
.LE16C50_8018A9DC:
/* E1A10C 8018A9DC 00000000 */  nop
/* E1A110 8018A9E0 45020004 */  bc1fl       .LE16C50_8018A9F4
/* E1A114 8018A9E4 E6C20000 */   swc1       $fv1, 0x0($s6)
/* E1A118 8018A9E8 E6000004 */  swc1        $fv0, 0x4($s0)
/* E1A11C 8018A9EC C6020004 */  lwc1        $fv1, 0x4($s0)
/* E1A120 8018A9F0 E6C20000 */  swc1        $fv1, 0x0($s6)
.LE16C50_8018A9F4:
/* E1A124 8018A9F4 1000000B */  b           .LE16C50_8018AA24
/* E1A128 8018A9F8 8FA400F8 */   lw         $a0, 0xF8($sp)
.LE16C50_8018A9FC:
/* E1A12C 8018A9FC 5720000A */  bnel        $t9, $zero, .LE16C50_8018AA28
/* E1A130 8018AA00 8483009C */   lh         $v1, 0x9C($a0)
/* E1A134 8018AA04 027E0019 */  multu       $s3, $fp
/* E1A138 8018AA08 02C21821 */  addu        $v1, $s6, $v0
/* E1A13C 8018AA0C C46AFFFC */  lwc1        $ft3, -0x4($v1)
/* E1A140 8018AA10 00007012 */  mflo        $t6
/* E1A144 8018AA14 020E8821 */  addu        $s1, $s0, $t6
/* E1A148 8018AA18 C6280004 */  lwc1        $ft2, 0x4($s1)
/* E1A14C 8018AA1C E62A0004 */  swc1        $ft3, 0x4($s1)
/* E1A150 8018AA20 E4680000 */  swc1        $ft2, 0x0($v1)
.LE16C50_8018AA24:
/* E1A154 8018AA24 8483009C */  lh          $v1, 0x9C($a0)
.LE16C50_8018AA28:
/* E1A158 8018AA28 14600029 */  bnez        $v1, .LE16C50_8018AAD0
/* E1A15C 8018AA2C 306F0007 */   andi       $t7, $v1, 0x7
/* E1A160 8018AA30 C6020004 */  lwc1        $fv1, 0x4($s0)
/* E1A164 8018AA34 3C11801C */  lui         $s1, %hi(D_E16C50_801BEF80)
/* E1A168 8018AA38 2631EF80 */  addiu       $s1, $s1, %lo(D_E16C50_801BEF80)
/* E1A16C 8018AA3C 461E103C */  c.lt.s      $fv1, $fs5
/* E1A170 8018AA40 00000000 */  nop
/* E1A174 8018AA44 45030006 */  bc1tl       .LE16C50_8018AA60
/* E1A178 8018AA48 00009825 */   or         $s3, $zero, $zero
/* E1A17C 8018AA4C 4602003C */  c.lt.s      $fv0, $fv1
/* E1A180 8018AA50 2418001E */  addiu       $t8, $zero, 0x1E
/* E1A184 8018AA54 4500000D */  bc1f        .LE16C50_8018AA8C
/* E1A188 8018AA58 00000000 */   nop
/* E1A18C 8018AA5C 00009825 */  or          $s3, $zero, $zero
.LE16C50_8018AA60:
/* E1A190 8018AA60 4405A000 */  mfc1        $a1, $fs0
/* E1A194 8018AA64 4406D000 */  mfc1        $a2, $fs3
/* E1A198 8018AA68 4407C000 */  mfc1        $a3, $fs2
/* E1A19C 8018AA6C 02202025 */  or          $a0, $s1, $zero
/* E1A1A0 8018AA70 0C026F0B */  jal         Math_SmoothStepToF
/* E1A1A4 8018AA74 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A1A8 8018AA78 26730001 */  addiu       $s3, $s3, 0x1
/* E1A1AC 8018AA7C 167EFFF8 */  bne         $s3, $fp, .LE16C50_8018AA60
/* E1A1B0 8018AA80 2631000C */   addiu      $s1, $s1, 0xC
/* E1A1B4 8018AA84 10000009 */  b           .LE16C50_8018AAAC
/* E1A1B8 8018AA88 00000000 */   nop
.LE16C50_8018AA8C:
/* E1A1BC 8018AA8C 0C0013AC */  jal         Rand_ZeroOne
/* E1A1C0 8018AA90 A498009C */   sh         $t8, 0x9C($a0)
/* E1A1C4 8018AA94 461A0401 */  sub.s       $ft4, $fv0, $fs3
/* E1A1C8 8018AA98 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E1A1CC 8018AA9C 44819000 */  mtc1        $at, $ft5
/* E1A1D0 8018AAA0 3C01801C */  lui         $at, %hi(D_E16C50_801BEF80)
/* E1A1D4 8018AAA4 46128102 */  mul.s       $ft0, $ft4, $ft5
/* E1A1D8 8018AAA8 E424EF80 */  swc1        $ft0, %lo(D_E16C50_801BEF80)($at)
.LE16C50_8018AAAC:
/* E1A1DC 8018AAAC 3C01801C */  lui         $at, %hi(D_E16C50_801BEF80)
/* E1A1E0 8018AAB0 C426EF80 */  lwc1        $ft1, %lo(D_E16C50_801BEF80)($at)
/* E1A1E4 8018AAB4 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1A1E8 8018AAB8 44810000 */  mtc1        $at, $fv0
/* E1A1EC 8018AABC 3C10801C */  lui         $s0, %hi(D_E16C50_801BEF80)
/* E1A1F0 8018AAC0 2610EF80 */  addiu       $s0, $s0, %lo(D_E16C50_801BEF80)
/* E1A1F4 8018AAC4 8FA400F8 */  lw          $a0, 0xF8($sp)
/* E1A1F8 8018AAC8 1000000B */  b           .LE16C50_8018AAF8
/* E1A1FC 8018AACC E6A60000 */   swc1       $ft1, 0x0($s5)
.LE16C50_8018AAD0:
/* E1A200 8018AAD0 55E0000A */  bnel        $t7, $zero, .LE16C50_8018AAFC
/* E1A204 8018AAD4 26730001 */   addiu      $s3, $s3, 0x1
/* E1A208 8018AAD8 027E0019 */  multu       $s3, $fp
/* E1A20C 8018AADC 02A21821 */  addu        $v1, $s5, $v0
/* E1A210 8018AAE0 C46AFFFC */  lwc1        $ft3, -0x4($v1)
/* E1A214 8018AAE4 00006012 */  mflo        $t4
/* E1A218 8018AAE8 020C8821 */  addu        $s1, $s0, $t4
/* E1A21C 8018AAEC C6280000 */  lwc1        $ft2, 0x0($s1)
/* E1A220 8018AAF0 E62A0000 */  swc1        $ft3, 0x0($s1)
/* E1A224 8018AAF4 E4680000 */  swc1        $ft2, 0x0($v1)
.LE16C50_8018AAF8:
/* E1A228 8018AAF8 26730001 */  addiu       $s3, $s3, 0x1
.LE16C50_8018AAFC:
/* E1A22C 8018AAFC 2A61000C */  slti        $at, $s3, 0xC
/* E1A230 8018AB00 5420FF9C */  bnel        $at, $zero, .LE16C50_8018A974
/* E1A234 8018AB04 00131080 */   sll        $v0, $s3, 2
/* E1A238 8018AB08 3C01801C */  lui         $at, %hi(D_E16C50_801C0A54)
/* E1A23C 8018AB0C C4380A54 */  lwc1        $fs2, %lo(D_E16C50_801C0A54)($at)
/* E1A240 8018AB10 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1A244 8018AB14 3C12801C */  lui         $s2, %hi(D_E16C50_801BF010)
/* E1A248 8018AB18 3C14801C */  lui         $s4, %hi(D_E16C50_801BF040)
/* E1A24C 8018AB1C 3C11801C */  lui         $s1, %hi(D_E16C50_801BEF80)
/* E1A250 8018AB20 3C16801C */  lui         $s6, %hi(D_E16C50_801BEEF0)
/* E1A254 8018AB24 3C10801C */  lui         $s0, %hi(D_E16C50_801BEEF4)
/* E1A258 8018AB28 3C13801C */  lui         $s3, %hi(D_E16C50_801BEF84)
/* E1A25C 8018AB2C 4481A000 */  mtc1        $at, $fs0
/* E1A260 8018AB30 2673EF84 */  addiu       $s3, $s3, %lo(D_E16C50_801BEF84)
/* E1A264 8018AB34 2610EEF4 */  addiu       $s0, $s0, %lo(D_E16C50_801BEEF4)
/* E1A268 8018AB38 26D6EEF0 */  addiu       $s6, $s6, %lo(D_E16C50_801BEEF0)
/* E1A26C 8018AB3C 2631EF80 */  addiu       $s1, $s1, %lo(D_E16C50_801BEF80)
/* E1A270 8018AB40 2694F040 */  addiu       $s4, $s4, %lo(D_E16C50_801BF040)
/* E1A274 8018AB44 2652F010 */  addiu       $s2, $s2, %lo(D_E16C50_801BF010)
.LE16C50_8018AB48:
/* E1A278 8018AB48 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1A27C 8018AB4C 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1A280 8018AB50 02002025 */  or          $a0, $s0, $zero
/* E1A284 8018AB54 8E250004 */  lw          $a1, 0x4($s1)
/* E1A288 8018AB58 8E870000 */  lw          $a3, 0x0($s4)
/* E1A28C 8018AB5C 0C026F0B */  jal         Math_SmoothStepToF
/* E1A290 8018AB60 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A294 8018AB64 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1A298 8018AB68 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1A29C 8018AB6C 02C02025 */  or          $a0, $s6, $zero
/* E1A2A0 8018AB70 8E250000 */  lw          $a1, 0x0($s1)
/* E1A2A4 8018AB74 8E470000 */  lw          $a3, 0x0($s2)
/* E1A2A8 8018AB78 0C026F0B */  jal         Math_SmoothStepToF
/* E1A2AC 8018AB7C E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A2B0 8018AB80 4405A000 */  mfc1        $a1, $fs0
/* E1A2B4 8018AB84 4406C000 */  mfc1        $a2, $fs2
/* E1A2B8 8018AB88 3C073D4C */  lui         $a3, (0x3D4CCCCD >> 16)
/* E1A2BC 8018AB8C 34E7CCCD */  ori         $a3, $a3, (0x3D4CCCCD & 0xFFFF)
/* E1A2C0 8018AB90 02402025 */  or          $a0, $s2, $zero
/* E1A2C4 8018AB94 0C026F0B */  jal         Math_SmoothStepToF
/* E1A2C8 8018AB98 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A2CC 8018AB9C 4405A000 */  mfc1        $a1, $fs0
/* E1A2D0 8018ABA0 4406C000 */  mfc1        $a2, $fs2
/* E1A2D4 8018ABA4 3C073D4C */  lui         $a3, (0x3D4CCCCD >> 16)
/* E1A2D8 8018ABA8 34E7CCCD */  ori         $a3, $a3, (0x3D4CCCCD & 0xFFFF)
/* E1A2DC 8018ABAC 02802025 */  or          $a0, $s4, $zero
/* E1A2E0 8018ABB0 0C026F0B */  jal         Math_SmoothStepToF
/* E1A2E4 8018ABB4 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A2E8 8018ABB8 2610000C */  addiu       $s0, $s0, 0xC
/* E1A2EC 8018ABBC 26520004 */  addiu       $s2, $s2, 0x4
/* E1A2F0 8018ABC0 26940004 */  addiu       $s4, $s4, 0x4
/* E1A2F4 8018ABC4 2631000C */  addiu       $s1, $s1, 0xC
/* E1A2F8 8018ABC8 1613FFDF */  bne         $s0, $s3, .LE16C50_8018AB48
/* E1A2FC 8018ABCC 26D6000C */   addiu      $s6, $s6, 0xC
.LE16C50_8018ABD0:
/* E1A300 8018ABD0 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E1A304 8018ABD4 4481D000 */  mtc1        $at, $fs3
/* E1A308 8018ABD8 100000BA */  b           .LE16C50_8018AEC4
/* E1A30C 8018ABDC 8FA200F8 */   lw         $v0, 0xF8($sp)
.LE16C50_8018ABE0:
/* E1A310 8018ABE0 848D00CE */  lh          $t5, 0xCE($a0)
/* E1A314 8018ABE4 24130001 */  addiu       $s3, $zero, 0x1
/* E1A318 8018ABE8 3C01C1A0 */  lui         $at, (0xC1A00000 >> 16)
/* E1A31C 8018ABEC 11A000B1 */  beqz        $t5, .LE16C50_8018AEB4
/* E1A320 8018ABF0 24170014 */   addiu      $s7, $zero, 0x14
/* E1A324 8018ABF4 4481F000 */  mtc1        $at, $fs5
/* E1A328 8018ABF8 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E1A32C 8018ABFC 4481E000 */  mtc1        $at, $fs4
/* E1A330 8018AC00 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E1A334 8018AC04 4481D000 */  mtc1        $at, $fs3
/* E1A338 8018AC08 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E1A33C 8018AC0C 4481C000 */  mtc1        $at, $fs2
/* E1A340 8018AC10 3C01801C */  lui         $at, %hi(D_E16C50_801C0A58)
/* E1A344 8018AC14 3C16801C */  lui         $s6, %hi(D_E16C50_801BF424)
/* E1A348 8018AC18 3C15801C */  lui         $s5, %hi(D_E16C50_801BF1C0)
/* E1A34C 8018AC1C 3C14801C */  lui         $s4, %hi(D_E16C50_801BF394)
/* E1A350 8018AC20 3C11801C */  lui         $s1, %hi(D_E16C50_801BF190)
/* E1A354 8018AC24 3C10801C */  lui         $s0, %hi(D_E16C50_801BF100)
/* E1A358 8018AC28 2610F100 */  addiu       $s0, $s0, %lo(D_E16C50_801BF100)
/* E1A35C 8018AC2C 2631F190 */  addiu       $s1, $s1, %lo(D_E16C50_801BF190)
/* E1A360 8018AC30 2694F394 */  addiu       $s4, $s4, %lo(D_E16C50_801BF394)
/* E1A364 8018AC34 26B5F1C0 */  addiu       $s5, $s5, %lo(D_E16C50_801BF1C0)
/* E1A368 8018AC38 26D6F424 */  addiu       $s6, $s6, %lo(D_E16C50_801BF424)
/* E1A36C 8018AC3C C4360A58 */  lwc1        $fs1, %lo(D_E16C50_801C0A58)($at)
/* E1A370 8018AC40 00131080 */  sll         $v0, $s3, 2
.LE16C50_8018AC44:
/* E1A374 8018AC44 0222C821 */  addu        $t9, $s1, $v0
/* E1A378 8018AC48 E73C0000 */  swc1        $fs4, 0x0($t9)
/* E1A37C 8018AC4C 02A27021 */  addu        $t6, $s5, $v0
/* E1A380 8018AC50 E5DC0000 */  swc1        $fs4, 0x0($t6)
/* E1A384 8018AC54 84830098 */  lh          $v1, 0x98($a0)
/* E1A388 8018AC58 1460001F */  bnez        $v1, .LE16C50_8018ACD8
/* E1A38C 8018AC5C 30780003 */   andi       $t8, $v1, 0x3
/* E1A390 8018AC60 A4970098 */  sh          $s7, 0x98($a0)
/* E1A394 8018AC64 0C0013AC */  jal         Rand_ZeroOne
/* E1A398 8018AC68 AFA200A8 */   sw         $v0, 0xA8($sp)
/* E1A39C 8018AC6C 461A0401 */  sub.s       $ft4, $fv0, $fs3
/* E1A3A0 8018AC70 3C014434 */  lui         $at, (0x44340000 >> 16)
/* E1A3A4 8018AC74 44819000 */  mtc1        $at, $ft5
/* E1A3A8 8018AC78 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1A3AC 8018AC7C 44813000 */  mtc1        $at, $ft1
/* E1A3B0 8018AC80 46128102 */  mul.s       $ft0, $ft4, $ft5
/* E1A3B4 8018AC84 8FA200A8 */  lw          $v0, 0xA8($sp)
/* E1A3B8 8018AC88 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1A3BC 8018AC8C E6040004 */  swc1        $ft0, 0x4($s0)
/* E1A3C0 8018AC90 C6020004 */  lwc1        $fv1, 0x4($s0)
/* E1A3C4 8018AC94 461E103C */  c.lt.s      $fv1, $fs5
/* E1A3C8 8018AC98 00000000 */  nop
/* E1A3CC 8018AC9C 45020004 */  bc1fl       .LE16C50_8018ACB0
/* E1A3D0 8018ACA0 4602303C */   c.lt.s     $ft1, $fv1
/* E1A3D4 8018ACA4 E61E0004 */  swc1        $fs5, 0x4($s0)
/* E1A3D8 8018ACA8 C6020004 */  lwc1        $fv1, 0x4($s0)
/* E1A3DC 8018ACAC 4602303C */  c.lt.s      $ft1, $fv1
.LE16C50_8018ACB0:
/* E1A3E0 8018ACB0 00000000 */  nop
/* E1A3E4 8018ACB4 45020006 */  bc1fl       .LE16C50_8018ACD0
/* E1A3E8 8018ACB8 E6C20000 */   swc1       $fv1, 0x0($s6)
/* E1A3EC 8018ACBC 44814000 */  mtc1        $at, $ft2
/* E1A3F0 8018ACC0 00000000 */  nop
/* E1A3F4 8018ACC4 E6080004 */  swc1        $ft2, 0x4($s0)
/* E1A3F8 8018ACC8 C6020004 */  lwc1        $fv1, 0x4($s0)
/* E1A3FC 8018ACCC E6C20000 */  swc1        $fv1, 0x0($s6)
.LE16C50_8018ACD0:
/* E1A400 8018ACD0 1000000B */  b           .LE16C50_8018AD00
/* E1A404 8018ACD4 8FA400F8 */   lw         $a0, 0xF8($sp)
.LE16C50_8018ACD8:
/* E1A408 8018ACD8 5700000A */  bnel        $t8, $zero, .LE16C50_8018AD04
/* E1A40C 8018ACDC 8483009E */   lh         $v1, 0x9E($a0)
/* E1A410 8018ACE0 027E0019 */  multu       $s3, $fp
/* E1A414 8018ACE4 02C21821 */  addu        $v1, $s6, $v0
/* E1A418 8018ACE8 C470FFFC */  lwc1        $ft4, -0x4($v1)
/* E1A41C 8018ACEC 00007812 */  mflo        $t7
/* E1A420 8018ACF0 020F9021 */  addu        $s2, $s0, $t7
/* E1A424 8018ACF4 C64A0004 */  lwc1        $ft3, 0x4($s2)
/* E1A428 8018ACF8 E6500004 */  swc1        $ft4, 0x4($s2)
/* E1A42C 8018ACFC E46A0000 */  swc1        $ft3, 0x0($v1)
.LE16C50_8018AD00:
/* E1A430 8018AD00 8483009E */  lh          $v1, 0x9E($a0)
.LE16C50_8018AD04:
/* E1A434 8018AD04 1460002B */  bnez        $v1, .LE16C50_8018ADB4
/* E1A438 8018AD08 306D0007 */   andi       $t5, $v1, 0x7
/* E1A43C 8018AD0C C6020004 */  lwc1        $fv1, 0x4($s0)
/* E1A440 8018AD10 3C12801C */  lui         $s2, %hi(D_E16C50_801BF100)
/* E1A444 8018AD14 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1A448 8018AD18 461E103C */  c.lt.s      $fv1, $fs5
/* E1A44C 8018AD1C 2652F100 */  addiu       $s2, $s2, %lo(D_E16C50_801BF100)
/* E1A450 8018AD20 45030008 */  bc1tl       .LE16C50_8018AD44
/* E1A454 8018AD24 00009825 */   or         $s3, $zero, $zero
/* E1A458 8018AD28 44819000 */  mtc1        $at, $ft5
/* E1A45C 8018AD2C 240C001E */  addiu       $t4, $zero, 0x1E
/* E1A460 8018AD30 4602903C */  c.lt.s      $ft5, $fv1
/* E1A464 8018AD34 00000000 */  nop
/* E1A468 8018AD38 4500000D */  bc1f        .LE16C50_8018AD70
/* E1A46C 8018AD3C 00000000 */   nop
/* E1A470 8018AD40 00009825 */  or          $s3, $zero, $zero
.LE16C50_8018AD44:
/* E1A474 8018AD44 4405A000 */  mfc1        $a1, $fs0
/* E1A478 8018AD48 4406D000 */  mfc1        $a2, $fs3
/* E1A47C 8018AD4C 4407C000 */  mfc1        $a3, $fs2
/* E1A480 8018AD50 02402025 */  or          $a0, $s2, $zero
/* E1A484 8018AD54 0C026F0B */  jal         Math_SmoothStepToF
/* E1A488 8018AD58 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A48C 8018AD5C 26730001 */  addiu       $s3, $s3, 0x1
/* E1A490 8018AD60 167EFFF8 */  bne         $s3, $fp, .LE16C50_8018AD44
/* E1A494 8018AD64 2652000C */   addiu      $s2, $s2, 0xC
/* E1A498 8018AD68 1000000B */  b           .LE16C50_8018AD98
/* E1A49C 8018AD6C 00000000 */   nop
.LE16C50_8018AD70:
/* E1A4A0 8018AD70 0C0013AC */  jal         Rand_ZeroOne
/* E1A4A4 8018AD74 A48C009E */   sh         $t4, 0x9E($a0)
/* E1A4A8 8018AD78 3C01801C */  lui         $at, %hi(D_E16C50_801C0A5C)
/* E1A4AC 8018AD7C C4240A5C */  lwc1        $ft0, %lo(D_E16C50_801C0A5C)($at)
/* E1A4B0 8018AD80 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E1A4B4 8018AD84 44814000 */  mtc1        $at, $ft2
/* E1A4B8 8018AD88 46040181 */  sub.s       $ft1, $fv0, $ft0
/* E1A4BC 8018AD8C 3C01801C */  lui         $at, %hi(D_E16C50_801BF100)
/* E1A4C0 8018AD90 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E1A4C4 8018AD94 E42AF100 */  swc1        $ft3, %lo(D_E16C50_801BF100)($at)
.LE16C50_8018AD98:
/* E1A4C8 8018AD98 3C01801C */  lui         $at, %hi(D_E16C50_801BF100)
/* E1A4CC 8018AD9C C430F100 */  lwc1        $ft4, %lo(D_E16C50_801BF100)($at)
/* E1A4D0 8018ADA0 3C10801C */  lui         $s0, %hi(D_E16C50_801BF100)
/* E1A4D4 8018ADA4 2610F100 */  addiu       $s0, $s0, %lo(D_E16C50_801BF100)
/* E1A4D8 8018ADA8 8FA400F8 */  lw          $a0, 0xF8($sp)
/* E1A4DC 8018ADAC 1000000B */  b           .LE16C50_8018ADDC
/* E1A4E0 8018ADB0 E6900000 */   swc1       $ft4, 0x0($s4)
.LE16C50_8018ADB4:
/* E1A4E4 8018ADB4 55A0000A */  bnel        $t5, $zero, .LE16C50_8018ADE0
/* E1A4E8 8018ADB8 26730001 */   addiu      $s3, $s3, 0x1
/* E1A4EC 8018ADBC 027E0019 */  multu       $s3, $fp
/* E1A4F0 8018ADC0 02821821 */  addu        $v1, $s4, $v0
/* E1A4F4 8018ADC4 C464FFFC */  lwc1        $ft0, -0x4($v1)
/* E1A4F8 8018ADC8 0000C812 */  mflo        $t9
/* E1A4FC 8018ADCC 02199021 */  addu        $s2, $s0, $t9
/* E1A500 8018ADD0 C6520000 */  lwc1        $ft5, 0x0($s2)
/* E1A504 8018ADD4 E6440000 */  swc1        $ft0, 0x0($s2)
/* E1A508 8018ADD8 E4720000 */  swc1        $ft5, 0x0($v1)
.LE16C50_8018ADDC:
/* E1A50C 8018ADDC 26730001 */  addiu       $s3, $s3, 0x1
.LE16C50_8018ADE0:
/* E1A510 8018ADE0 2A61000C */  slti        $at, $s3, 0xC
/* E1A514 8018ADE4 5420FF97 */  bnel        $at, $zero, .LE16C50_8018AC44
/* E1A518 8018ADE8 00131080 */   sll        $v0, $s3, 2
/* E1A51C 8018ADEC 3C01801C */  lui         $at, %hi(D_E16C50_801C0A60)
/* E1A520 8018ADF0 C4380A60 */  lwc1        $fs2, %lo(D_E16C50_801C0A60)($at)
/* E1A524 8018ADF4 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1A528 8018ADF8 3C11801C */  lui         $s1, %hi(D_E16C50_801BF190)
/* E1A52C 8018ADFC 3C15801C */  lui         $s5, %hi(D_E16C50_801BF1C0)
/* E1A530 8018AE00 3C12801C */  lui         $s2, %hi(D_E16C50_801BF100)
/* E1A534 8018AE04 3C14801C */  lui         $s4, %hi(D_E16C50_801BF070)
/* E1A538 8018AE08 3C10801C */  lui         $s0, %hi(D_E16C50_801BF074)
/* E1A53C 8018AE0C 3C13801C */  lui         $s3, %hi(D_E16C50_801BF104)
/* E1A540 8018AE10 4481A000 */  mtc1        $at, $fs0
/* E1A544 8018AE14 2673F104 */  addiu       $s3, $s3, %lo(D_E16C50_801BF104)
/* E1A548 8018AE18 2610F074 */  addiu       $s0, $s0, %lo(D_E16C50_801BF074)
/* E1A54C 8018AE1C 2694F070 */  addiu       $s4, $s4, %lo(D_E16C50_801BF070)
/* E1A550 8018AE20 2652F100 */  addiu       $s2, $s2, %lo(D_E16C50_801BF100)
/* E1A554 8018AE24 26B5F1C0 */  addiu       $s5, $s5, %lo(D_E16C50_801BF1C0)
/* E1A558 8018AE28 2631F190 */  addiu       $s1, $s1, %lo(D_E16C50_801BF190)
.LE16C50_8018AE2C:
/* E1A55C 8018AE2C 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1A560 8018AE30 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1A564 8018AE34 02002025 */  or          $a0, $s0, $zero
/* E1A568 8018AE38 8E450004 */  lw          $a1, 0x4($s2)
/* E1A56C 8018AE3C 8EA70000 */  lw          $a3, 0x0($s5)
/* E1A570 8018AE40 0C026F0B */  jal         Math_SmoothStepToF
/* E1A574 8018AE44 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A578 8018AE48 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1A57C 8018AE4C 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1A580 8018AE50 02802025 */  or          $a0, $s4, $zero
/* E1A584 8018AE54 8E450000 */  lw          $a1, 0x0($s2)
/* E1A588 8018AE58 8E270000 */  lw          $a3, 0x0($s1)
/* E1A58C 8018AE5C 0C026F0B */  jal         Math_SmoothStepToF
/* E1A590 8018AE60 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A594 8018AE64 4405A000 */  mfc1        $a1, $fs0
/* E1A598 8018AE68 4406C000 */  mfc1        $a2, $fs2
/* E1A59C 8018AE6C 3C073D4C */  lui         $a3, (0x3D4CCCCD >> 16)
/* E1A5A0 8018AE70 34E7CCCD */  ori         $a3, $a3, (0x3D4CCCCD & 0xFFFF)
/* E1A5A4 8018AE74 02202025 */  or          $a0, $s1, $zero
/* E1A5A8 8018AE78 0C026F0B */  jal         Math_SmoothStepToF
/* E1A5AC 8018AE7C E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A5B0 8018AE80 4405A000 */  mfc1        $a1, $fs0
/* E1A5B4 8018AE84 4406C000 */  mfc1        $a2, $fs2
/* E1A5B8 8018AE88 3C073D4C */  lui         $a3, (0x3D4CCCCD >> 16)
/* E1A5BC 8018AE8C 34E7CCCD */  ori         $a3, $a3, (0x3D4CCCCD & 0xFFFF)
/* E1A5C0 8018AE90 02A02025 */  or          $a0, $s5, $zero
/* E1A5C4 8018AE94 0C026F0B */  jal         Math_SmoothStepToF
/* E1A5C8 8018AE98 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A5CC 8018AE9C 2610000C */  addiu       $s0, $s0, 0xC
/* E1A5D0 8018AEA0 26310004 */  addiu       $s1, $s1, 0x4
/* E1A5D4 8018AEA4 26B50004 */  addiu       $s5, $s5, 0x4
/* E1A5D8 8018AEA8 2652000C */  addiu       $s2, $s2, 0xC
/* E1A5DC 8018AEAC 1613FFDF */  bne         $s0, $s3, .LE16C50_8018AE2C
/* E1A5E0 8018AEB0 2694000C */   addiu      $s4, $s4, 0xC
.LE16C50_8018AEB4:
/* E1A5E4 8018AEB4 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E1A5E8 8018AEB8 4481D000 */  mtc1        $at, $fs3
/* E1A5EC 8018AEBC 00000000 */  nop
/* E1A5F0 8018AEC0 8FA200F8 */  lw          $v0, 0xF8($sp)
.LE16C50_8018AEC4:
/* E1A5F4 8018AEC4 844E004E */  lh          $t6, 0x4E($v0)
/* E1A5F8 8018AEC8 29C10003 */  slti        $at, $t6, 0x3
/* E1A5FC 8018AECC 542002AA */  bnel        $at, $zero, .LE16C50_8018B978
/* E1A600 8018AED0 8FBF0074 */   lw         $ra, 0x74($sp)
/* E1A604 8018AED4 44803000 */  mtc1        $zero, $ft1
/* E1A608 8018AED8 C44800D8 */  lwc1        $ft2, 0xD8($v0)
/* E1A60C 8018AEDC 46083032 */  c.eq.s      $ft1, $ft2
/* E1A610 8018AEE0 00000000 */  nop
/* E1A614 8018AEE4 450202A4 */  bc1fl       .LE16C50_8018B978
/* E1A618 8018AEE8 8FBF0074 */   lw         $ra, 0x74($sp)
/* E1A61C 8018AEEC 845800CA */  lh          $t8, 0xCA($v0)
/* E1A620 8018AEF0 3C0D801C */  lui         $t5, %hi(D_E16C50_801C2250 + 0x14)
/* E1A624 8018AEF4 17000007 */  bnez        $t8, .LE16C50_8018AF14
/* E1A628 8018AEF8 00000000 */   nop
/* E1A62C 8018AEFC 844F00CC */  lh          $t7, 0xCC($v0)
/* E1A630 8018AF00 15E00004 */  bnez        $t7, .LE16C50_8018AF14
/* E1A634 8018AF04 00000000 */   nop
/* E1A638 8018AF08 844C00CE */  lh          $t4, 0xCE($v0)
/* E1A63C 8018AF0C 5180029A */  beql        $t4, $zero, .LE16C50_8018B978
/* E1A640 8018AF10 8FBF0074 */   lw         $ra, 0x74($sp)
.LE16C50_8018AF14:
/* E1A644 8018AF14 8DAD2264 */  lw          $t5, %lo(D_E16C50_801C2250 + 0x14)($t5)
/* E1A648 8018AF18 3C108017 */  lui         $s0, %hi(gFrameCount)
/* E1A64C 8018AF1C 26107DB0 */  addiu       $s0, $s0, %lo(gFrameCount)
/* E1A650 8018AF20 55A00295 */  bnel        $t5, $zero, .LE16C50_8018B978
/* E1A654 8018AF24 8FBF0074 */   lw         $ra, 0x74($sp)
/* E1A658 8018AF28 845900BA */  lh          $t9, 0xBA($v0)
/* E1A65C 8018AF2C 4600D506 */  mov.s       $fs0, $fs3
/* E1A660 8018AF30 2B210002 */  slti        $at, $t9, 0x2
/* E1A664 8018AF34 10200002 */  beqz        $at, .LE16C50_8018AF40
/* E1A668 8018AF38 3C01801C */   lui        $at, %hi(D_E16C50_801C0A64)
/* E1A66C 8018AF3C C4340A64 */  lwc1        $fs0, %lo(D_E16C50_801C0A64)($at)
.LE16C50_8018AF40:
/* E1A670 8018AF40 8E0E0000 */  lw          $t6, 0x0($s0)
/* E1A674 8018AF44 31D8001F */  andi        $t8, $t6, 0x1F
/* E1A678 8018AF48 5700028B */  bnel        $t8, $zero, .LE16C50_8018B978
/* E1A67C 8018AF4C 8FBF0074 */   lw         $ra, 0x74($sp)
/* E1A680 8018AF50 0C0013AC */  jal         Rand_ZeroOne
/* E1A684 8018AF54 00000000 */   nop
/* E1A688 8018AF58 4614003C */  c.lt.s      $fv0, $fs0
/* E1A68C 8018AF5C 3C0F801C */  lui         $t7, %hi(D_E16C50_801C2250 + 0x14)
/* E1A690 8018AF60 45020285 */  bc1fl       .LE16C50_8018B978
/* E1A694 8018AF64 8FBF0074 */   lw         $ra, 0x74($sp)
/* E1A698 8018AF68 8DEF2264 */  lw          $t7, %lo(D_E16C50_801C2250 + 0x14)($t7)
/* E1A69C 8018AF6C 8FAC00A0 */  lw          $t4, 0xA0($sp)
/* E1A6A0 8018AF70 55E00281 */  bnel        $t7, $zero, .LE16C50_8018B978
/* E1A6A4 8018AF74 8FBF0074 */   lw         $ra, 0x74($sp)
/* E1A6A8 8018AF78 858D00CA */  lh          $t5, 0xCA($t4)
/* E1A6AC 8018AF7C 51A0027E */  beql        $t5, $zero, .LE16C50_8018B978
/* E1A6B0 8018AF80 8FBF0074 */   lw         $ra, 0x74($sp)
/* E1A6B4 8018AF84 0C0013AC */  jal         Rand_ZeroOne
/* E1A6B8 8018AF88 00000000 */   nop
/* E1A6BC 8018AF8C 3C01801C */  lui         $at, %hi(D_E16C50_801C0A68)
/* E1A6C0 8018AF90 C42A0A68 */  lwc1        $ft3, %lo(D_E16C50_801C0A68)($at)
/* E1A6C4 8018AF94 8FA400F8 */  lw          $a0, 0xF8($sp)
/* E1A6C8 8018AF98 460A003C */  c.lt.s      $fv0, $ft3
/* E1A6CC 8018AF9C 00000000 */  nop
/* E1A6D0 8018AFA0 45030008 */  bc1tl       .LE16C50_8018AFC4
/* E1A6D4 8018AFA4 8FA400F8 */   lw         $a0, 0xF8($sp)
/* E1A6D8 8018AFA8 849900BA */  lh          $t9, 0xBA($a0)
/* E1A6DC 8018AFAC 00009825 */  or          $s3, $zero, $zero
/* E1A6E0 8018AFB0 2403000F */  addiu       $v1, $zero, 0xF
/* E1A6E4 8018AFB4 2B210002 */  slti        $at, $t9, 0x2
/* E1A6E8 8018AFB8 10200025 */  beqz        $at, .LE16C50_8018B050
/* E1A6EC 8018AFBC 00000000 */   nop
/* E1A6F0 8018AFC0 8FA400F8 */  lw          $a0, 0xF8($sp)
.LE16C50_8018AFC4:
/* E1A6F4 8018AFC4 24180001 */  addiu       $t8, $zero, 0x1
/* E1A6F8 8018AFC8 240C0001 */  addiu       $t4, $zero, 0x1
/* E1A6FC 8018AFCC 848E00AC */  lh          $t6, 0xAC($a0)
/* E1A700 8018AFD0 24190001 */  addiu       $t9, $zero, 0x1
/* E1A704 8018AFD4 55C00003 */  bnel        $t6, $zero, .LE16C50_8018AFE4
/* E1A708 8018AFD8 848F00AE */   lh         $t7, 0xAE($a0)
/* E1A70C 8018AFDC A49800AC */  sh          $t8, 0xAC($a0)
/* E1A710 8018AFE0 848F00AE */  lh          $t7, 0xAE($a0)
.LE16C50_8018AFE4:
/* E1A714 8018AFE4 55E00003 */  bnel        $t7, $zero, .LE16C50_8018AFF4
/* E1A718 8018AFE8 848D00B0 */   lh         $t5, 0xB0($a0)
/* E1A71C 8018AFEC A48C00AE */  sh          $t4, 0xAE($a0)
/* E1A720 8018AFF0 848D00B0 */  lh          $t5, 0xB0($a0)
.LE16C50_8018AFF4:
/* E1A724 8018AFF4 55A00003 */  bnel        $t5, $zero, .LE16C50_8018B004
/* E1A728 8018AFF8 848E00CA */   lh         $t6, 0xCA($a0)
/* E1A72C 8018AFFC A49900B0 */  sh          $t9, 0xB0($a0)
/* E1A730 8018B000 848E00CA */  lh          $t6, 0xCA($a0)
.LE16C50_8018B004:
/* E1A734 8018B004 2402001E */  addiu       $v0, $zero, 0x1E
/* E1A738 8018B008 A48200A0 */  sh          $v0, 0xA0($a0)
/* E1A73C 8018B00C 51C00006 */  beql        $t6, $zero, .LE16C50_8018B028
/* E1A740 8018B010 A48200A2 */   sh         $v0, 0xA2($a0)
/* E1A744 8018B014 849800A0 */  lh          $t8, 0xA0($a0)
/* E1A748 8018B018 270F0032 */  addiu       $t7, $t8, 0x32
/* E1A74C 8018B01C 10000002 */  b           .LE16C50_8018B028
/* E1A750 8018B020 A48F00A2 */   sh         $t7, 0xA2($a0)
/* E1A754 8018B024 A48200A2 */  sh          $v0, 0xA2($a0)
.LE16C50_8018B028:
/* E1A758 8018B028 848C00CC */  lh          $t4, 0xCC($a0)
/* E1A75C 8018B02C 51800006 */  beql        $t4, $zero, .LE16C50_8018B048
/* E1A760 8018B030 848E00A2 */   lh         $t6, 0xA2($a0)
/* E1A764 8018B034 848D00A2 */  lh          $t5, 0xA2($a0)
/* E1A768 8018B038 25B90032 */  addiu       $t9, $t5, 0x32
/* E1A76C 8018B03C 1000024D */  b           .LE16C50_8018B974
/* E1A770 8018B040 A49900A4 */   sh         $t9, 0xA4($a0)
/* E1A774 8018B044 848E00A2 */  lh          $t6, 0xA2($a0)
.LE16C50_8018B048:
/* E1A778 8018B048 1000024A */  b           .LE16C50_8018B974
/* E1A77C 8018B04C A48E00A4 */   sh         $t6, 0xA4($a0)
.LE16C50_8018B050:
/* E1A780 8018B050 8E180000 */  lw          $t8, 0x0($s0)
.LE16C50_8018B054:
/* E1A784 8018B054 00136040 */  sll         $t4, $s3, 1
/* E1A788 8018B058 008C1021 */  addu        $v0, $a0, $t4
/* E1A78C 8018B05C 330F000F */  andi        $t7, $t8, 0xF
/* E1A790 8018B060 566F0009 */  bnel        $s3, $t7, .LE16C50_8018B088
/* E1A794 8018B064 26730001 */   addiu      $s3, $s3, 0x1
/* E1A798 8018B068 844D00AC */  lh          $t5, 0xAC($v0)
/* E1A79C 8018B06C 24190001 */  addiu       $t9, $zero, 0x1
/* E1A7A0 8018B070 55A00005 */  bnel        $t5, $zero, .LE16C50_8018B088
/* E1A7A4 8018B074 26730001 */   addiu      $s3, $s3, 0x1
/* E1A7A8 8018B078 A44300A0 */  sh          $v1, 0xA0($v0)
/* E1A7AC 8018B07C A45900AC */  sh          $t9, 0xAC($v0)
/* E1A7B0 8018B080 24130003 */  addiu       $s3, $zero, 0x3
/* E1A7B4 8018B084 26730001 */  addiu       $s3, $s3, 0x1
.LE16C50_8018B088:
/* E1A7B8 8018B088 2A610003 */  slti        $at, $s3, 0x3
/* E1A7BC 8018B08C 5420FFF1 */  bnel        $at, $zero, .LE16C50_8018B054
/* E1A7C0 8018B090 8E180000 */   lw         $t8, 0x0($s0)
/* E1A7C4 8018B094 10000238 */  b           .LE16C50_8018B978
/* E1A7C8 8018B098 8FBF0074 */   lw         $ra, 0x74($sp)
.LE16C50_8018B09C:
/* E1A7CC 8018B09C 3C01C040 */  lui         $at, (0xC0400000 >> 16)
/* E1A7D0 8018B0A0 4481E000 */  mtc1        $at, $fs4
/* E1A7D4 8018B0A4 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E1A7D8 8018B0A8 4481D000 */  mtc1        $at, $fs3
/* E1A7DC 8018B0AC AD0E0014 */  sw          $t6, 0x14($t0)
/* E1A7E0 8018B0B0 3C01801C */  lui         $at, %hi(D_E16C50_801C0A6C)
/* E1A7E4 8018B0B4 C4380A6C */  lwc1        $fs2, %lo(D_E16C50_801C0A6C)($at)
/* E1A7E8 8018B0B8 3C01801C */  lui         $at, %hi(D_E16C50_801C0A70)
/* E1A7EC 8018B0BC 4480A000 */  mtc1        $zero, $fs0
/* E1A7F0 8018B0C0 C4360A70 */  lwc1        $fs1, %lo(D_E16C50_801C0A70)($at)
/* E1A7F4 8018B0C4 00009825 */  or          $s3, $zero, $zero
.LE16C50_8018B0C8:
/* E1A7F8 8018B0C8 16E0001E */  bnez        $s7, .LE16C50_8018B144
/* E1A7FC 8018B0CC 3C18801C */   lui        $t8, %hi(D_E16C50_801BEE00)
/* E1A800 8018B0D0 44938000 */  mtc1        $s3, $ft4
/* E1A804 8018B0D4 027E0019 */  multu       $s3, $fp
/* E1A808 8018B0D8 3C01C040 */  lui         $at, (0xC0400000 >> 16)
/* E1A80C 8018B0DC 468084A0 */  cvt.s.w     $ft5, $ft4
/* E1A810 8018B0E0 44812000 */  mtc1        $at, $ft0
/* E1A814 8018B0E4 3C0F801C */  lui         $t7, %hi(D_E16C50_801BED70)
/* E1A818 8018B0E8 2718EE00 */  addiu       $t8, $t8, %lo(D_E16C50_801BEE00)
/* E1A81C 8018B0EC 25EFED70 */  addiu       $t7, $t7, %lo(D_E16C50_801BED70)
/* E1A820 8018B0F0 4406C000 */  mfc1        $a2, $fs2
/* E1A824 8018B0F4 46049002 */  mul.s       $fv0, $ft5, $ft0
/* E1A828 8018B0F8 4407D000 */  mfc1        $a3, $fs3
/* E1A82C 8018B0FC 00001012 */  mflo        $v0
/* E1A830 8018B100 00588021 */  addu        $s0, $v0, $t8
/* E1A834 8018B104 004FA821 */  addu        $s5, $v0, $t7
/* E1A838 8018B108 E6140004 */  swc1        $fs0, 0x4($s0)
/* E1A83C 8018B10C 02A02025 */  or          $a0, $s5, $zero
/* E1A840 8018B110 44050000 */  mfc1        $a1, $fv0
/* E1A844 8018B114 E6000000 */  swc1        $fv0, 0x0($s0)
/* E1A848 8018B118 26B10004 */  addiu       $s1, $s5, 0x4
/* E1A84C 8018B11C 0C026F0B */  jal         Math_SmoothStepToF
/* E1A850 8018B120 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A854 8018B124 3C01C040 */  lui         $at, (0xC0400000 >> 16)
/* E1A858 8018B128 4481E000 */  mtc1        $at, $fs4
/* E1A85C 8018B12C 4406C000 */  mfc1        $a2, $fs2
/* E1A860 8018B130 4407D000 */  mfc1        $a3, $fs3
/* E1A864 8018B134 02202025 */  or          $a0, $s1, $zero
/* E1A868 8018B138 8E050004 */  lw          $a1, 0x4($s0)
/* E1A86C 8018B13C 0C026F0B */  jal         Math_SmoothStepToF
/* E1A870 8018B140 E7B60010 */   swc1       $fs1, 0x10($sp)
.LE16C50_8018B144:
/* E1A874 8018B144 24010002 */  addiu       $at, $zero, 0x2
/* E1A878 8018B148 56E1001C */  bnel        $s7, $at, .LE16C50_8018B1BC
/* E1A87C 8018B14C 24010004 */   addiu      $at, $zero, 0x4
/* E1A880 8018B150 44933000 */  mtc1        $s3, $ft1
/* E1A884 8018B154 027E0019 */  multu       $s3, $fp
/* E1A888 8018B158 3C0C801C */  lui         $t4, %hi(D_E16C50_801BEF80)
/* E1A88C 8018B15C 46803220 */  cvt.s.w     $ft2, $ft1
/* E1A890 8018B160 3C0D801C */  lui         $t5, %hi(D_E16C50_801BEEF0)
/* E1A894 8018B164 258CEF80 */  addiu       $t4, $t4, %lo(D_E16C50_801BEF80)
/* E1A898 8018B168 25ADEEF0 */  addiu       $t5, $t5, %lo(D_E16C50_801BEEF0)
/* E1A89C 8018B16C 4406C000 */  mfc1        $a2, $fs2
/* E1A8A0 8018B170 4407D000 */  mfc1        $a3, $fs3
/* E1A8A4 8018B174 461C4002 */  mul.s       $fv0, $ft2, $fs4
/* E1A8A8 8018B178 E7B60010 */  swc1        $fs1, 0x10($sp)
/* E1A8AC 8018B17C 00001012 */  mflo        $v0
/* E1A8B0 8018B180 004C8821 */  addu        $s1, $v0, $t4
/* E1A8B4 8018B184 004DB021 */  addu        $s6, $v0, $t5
/* E1A8B8 8018B188 E6340004 */  swc1        $fs0, 0x4($s1)
/* E1A8BC 8018B18C 02C02025 */  or          $a0, $s6, $zero
/* E1A8C0 8018B190 44050000 */  mfc1        $a1, $fv0
/* E1A8C4 8018B194 E6200000 */  swc1        $fv0, 0x0($s1)
/* E1A8C8 8018B198 0C026F0B */  jal         Math_SmoothStepToF
/* E1A8CC 8018B19C 26D00004 */   addiu      $s0, $s6, 0x4
/* E1A8D0 8018B1A0 4406C000 */  mfc1        $a2, $fs2
/* E1A8D4 8018B1A4 4407D000 */  mfc1        $a3, $fs3
/* E1A8D8 8018B1A8 02002025 */  or          $a0, $s0, $zero
/* E1A8DC 8018B1AC 8E250004 */  lw          $a1, 0x4($s1)
/* E1A8E0 8018B1B0 0C026F0B */  jal         Math_SmoothStepToF
/* E1A8E4 8018B1B4 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A8E8 8018B1B8 24010004 */  addiu       $at, $zero, 0x4
.LE16C50_8018B1BC:
/* E1A8EC 8018B1BC 56E1001C */  bnel        $s7, $at, .LE16C50_8018B230
/* E1A8F0 8018B1C0 26730001 */   addiu      $s3, $s3, 0x1
/* E1A8F4 8018B1C4 44935000 */  mtc1        $s3, $ft3
/* E1A8F8 8018B1C8 027E0019 */  multu       $s3, $fp
/* E1A8FC 8018B1CC 3C19801C */  lui         $t9, %hi(D_E16C50_801BF100)
/* E1A900 8018B1D0 46805420 */  cvt.s.w     $ft4, $ft3
/* E1A904 8018B1D4 3C0E801C */  lui         $t6, %hi(D_E16C50_801BF070)
/* E1A908 8018B1D8 2739F100 */  addiu       $t9, $t9, %lo(D_E16C50_801BF100)
/* E1A90C 8018B1DC 25CEF070 */  addiu       $t6, $t6, %lo(D_E16C50_801BF070)
/* E1A910 8018B1E0 4406C000 */  mfc1        $a2, $fs2
/* E1A914 8018B1E4 4407D000 */  mfc1        $a3, $fs3
/* E1A918 8018B1E8 461C8002 */  mul.s       $fv0, $ft4, $fs4
/* E1A91C 8018B1EC E7B60010 */  swc1        $fs1, 0x10($sp)
/* E1A920 8018B1F0 00001012 */  mflo        $v0
/* E1A924 8018B1F4 00599021 */  addu        $s2, $v0, $t9
/* E1A928 8018B1F8 004EA021 */  addu        $s4, $v0, $t6
/* E1A92C 8018B1FC E6540004 */  swc1        $fs0, 0x4($s2)
/* E1A930 8018B200 02802025 */  or          $a0, $s4, $zero
/* E1A934 8018B204 44050000 */  mfc1        $a1, $fv0
/* E1A938 8018B208 E6400000 */  swc1        $fv0, 0x0($s2)
/* E1A93C 8018B20C 0C026F0B */  jal         Math_SmoothStepToF
/* E1A940 8018B210 26900004 */   addiu      $s0, $s4, 0x4
/* E1A944 8018B214 4406C000 */  mfc1        $a2, $fs2
/* E1A948 8018B218 4407D000 */  mfc1        $a3, $fs3
/* E1A94C 8018B21C 02002025 */  or          $a0, $s0, $zero
/* E1A950 8018B220 8E450004 */  lw          $a1, 0x4($s2)
/* E1A954 8018B224 0C026F0B */  jal         Math_SmoothStepToF
/* E1A958 8018B228 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1A95C 8018B22C 26730001 */  addiu       $s3, $s3, 0x1
.LE16C50_8018B230:
/* E1A960 8018B230 167EFFA5 */  bne         $s3, $fp, .LE16C50_8018B0C8
/* E1A964 8018B234 00000000 */   nop
/* E1A968 8018B238 8FB800A0 */  lw          $t8, 0xA0($sp)
/* E1A96C 8018B23C 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E1A970 8018B240 8FAC00F8 */  lw          $t4, 0xF8($sp)
/* E1A974 8018B244 870F00A0 */  lh          $t7, 0xA0($t8)
/* E1A978 8018B248 55E001CB */  bnel        $t7, $zero, .LE16C50_8018B978
/* E1A97C 8018B24C 8FBF0074 */   lw         $ra, 0x74($sp)
/* E1A980 8018B250 4481E000 */  mtc1        $at, $fs4
/* E1A984 8018B254 3C01BF80 */  lui         $at, (0xBF800000 >> 16)
/* E1A988 8018B258 44812000 */  mtc1        $at, $ft0
/* E1A98C 8018B25C C59200E4 */  lwc1        $ft5, 0xE4($t4)
/* E1A990 8018B260 3C014316 */  lui         $at, (0x43160000 >> 16)
/* E1A994 8018B264 44814000 */  mtc1        $at, $ft2
/* E1A998 8018B268 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E1A99C 8018B26C 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1A9A0 8018B270 44818000 */  mtc1        $at, $ft4
/* E1A9A4 8018B274 3C014220 */  lui         $at, (0x42200000 >> 16)
/* E1A9A8 8018B278 3C12801C */  lui         $s2, %hi(D_E16C50_801BF334)
/* E1A9AC 8018B27C 3C14801C */  lui         $s4, %hi(D_E16C50_801BF3C4)
/* E1A9B0 8018B280 2694F3C4 */  addiu       $s4, $s4, %lo(D_E16C50_801BF3C4)
/* E1A9B4 8018B284 46083283 */  div.s       $ft3, $ft1, $ft2
/* E1A9B8 8018B288 44813000 */  mtc1        $at, $ft1
/* E1A9BC 8018B28C 2652F334 */  addiu       $s2, $s2, %lo(D_E16C50_801BF334)
/* E1A9C0 8018B290 27A400E0 */  addiu       $a0, $sp, 0xE0
/* E1A9C4 8018B294 460A8481 */  sub.s       $ft5, $ft4, $ft3
/* E1A9C8 8018B298 461C9102 */  mul.s       $ft0, $ft5, $fs4
/* E1A9CC 8018B29C 46043201 */  sub.s       $ft2, $ft1, $ft0
/* E1A9D0 8018B2A0 4600440D */  trunc.w.s   $ft4, $ft2
/* E1A9D4 8018B2A4 44198000 */  mfc1        $t9, $ft4
/* E1A9D8 8018B2A8 00000000 */  nop
/* E1A9DC 8018B2AC A71900A0 */  sh          $t9, 0xA0($t8)
/* E1A9E0 8018B2B0 8FAE00A8 */  lw          $t6, 0xA8($sp)
/* E1A9E4 8018B2B4 55C0000B */  bnel        $t6, $zero, .LE16C50_8018B2E4
/* E1A9E8 8018B2B8 3C112903 */   lui        $s1, (0x29034065 >> 16)
/* E1A9EC 8018B2BC C64A0000 */  lwc1        $ft3, 0x0($s2)
/* E1A9F0 8018B2C0 C6920000 */  lwc1        $ft5, 0x0($s4)
/* E1A9F4 8018B2C4 3C112903 */  lui         $s1, (0x29034065 >> 16)
/* E1A9F8 8018B2C8 E7AA00E0 */  swc1        $ft3, 0xE0($sp)
/* E1A9FC 8018B2CC E7B200E4 */  swc1        $ft5, 0xE4($sp)
/* E1AA00 8018B2D0 C586000C */  lwc1        $ft1, 0xC($t4)
/* E1AA04 8018B2D4 36254065 */  ori         $a1, $s1, (0x29034065 & 0xFFFF)
/* E1AA08 8018B2D8 0C01E9BC */  jal         func_8007A6F0
/* E1AA0C 8018B2DC E7A600E8 */   swc1       $ft1, 0xE8($sp)
/* E1AA10 8018B2E0 3C112903 */  lui         $s1, (0x29034065 >> 16)
.LE16C50_8018B2E4:
/* E1AA14 8018B2E4 24010002 */  addiu       $at, $zero, 0x2
/* E1AA18 8018B2E8 36314065 */  ori         $s1, $s1, (0x29034065 & 0xFFFF)
/* E1AA1C 8018B2EC 16E1000F */  bne         $s7, $at, .LE16C50_8018B32C
/* E1AA20 8018B2F0 27B000E0 */   addiu      $s0, $sp, 0xE0
/* E1AA24 8018B2F4 3C15801C */  lui         $s5, %hi(D_E16C50_801BF364)
/* E1AA28 8018B2F8 3C16801C */  lui         $s6, %hi(D_E16C50_801BF3F4)
/* E1AA2C 8018B2FC 26D6F3F4 */  addiu       $s6, $s6, %lo(D_E16C50_801BF3F4)
/* E1AA30 8018B300 26B5F364 */  addiu       $s5, $s5, %lo(D_E16C50_801BF364)
/* E1AA34 8018B304 C6A40000 */  lwc1        $ft0, 0x0($s5)
/* E1AA38 8018B308 C6C80000 */  lwc1        $ft2, 0x0($s6)
/* E1AA3C 8018B30C 8FAF00F8 */  lw          $t7, 0xF8($sp)
/* E1AA40 8018B310 E7A400E0 */  swc1        $ft0, 0xE0($sp)
/* E1AA44 8018B314 E7A800E4 */  swc1        $ft2, 0xE4($sp)
/* E1AA48 8018B318 C5F0000C */  lwc1        $ft4, 0xC($t7)
/* E1AA4C 8018B31C 02002025 */  or          $a0, $s0, $zero
/* E1AA50 8018B320 02202825 */  or          $a1, $s1, $zero
/* E1AA54 8018B324 0C01E9BC */  jal         func_8007A6F0
/* E1AA58 8018B328 E7B000E8 */   swc1       $ft4, 0xE8($sp)
.LE16C50_8018B32C:
/* E1AA5C 8018B32C 24010004 */  addiu       $at, $zero, 0x4
/* E1AA60 8018B330 16E1000E */  bne         $s7, $at, .LE16C50_8018B36C
/* E1AA64 8018B334 3C14801C */   lui        $s4, %hi(D_E16C50_801BF394)
/* E1AA68 8018B338 3C16801C */  lui         $s6, %hi(D_E16C50_801BF424)
/* E1AA6C 8018B33C 26D6F424 */  addiu       $s6, $s6, %lo(D_E16C50_801BF424)
/* E1AA70 8018B340 2694F394 */  addiu       $s4, $s4, %lo(D_E16C50_801BF394)
/* E1AA74 8018B344 C68A0000 */  lwc1        $ft3, 0x0($s4)
/* E1AA78 8018B348 C6D20000 */  lwc1        $ft5, 0x0($s6)
/* E1AA7C 8018B34C 8FAD00F8 */  lw          $t5, 0xF8($sp)
/* E1AA80 8018B350 E7AA00E0 */  swc1        $ft3, 0xE0($sp)
/* E1AA84 8018B354 E7B200E4 */  swc1        $ft5, 0xE4($sp)
/* E1AA88 8018B358 C5A6000C */  lwc1        $ft1, 0xC($t5)
/* E1AA8C 8018B35C 02002025 */  or          $a0, $s0, $zero
/* E1AA90 8018B360 02202825 */  or          $a1, $s1, $zero
/* E1AA94 8018B364 0C01E9BC */  jal         func_8007A6F0
/* E1AA98 8018B368 E7A600E8 */   swc1       $ft1, 0xE8($sp)
.LE16C50_8018B36C:
/* E1AA9C 8018B36C 8FB800A0 */  lw          $t8, 0xA0($sp)
/* E1AAA0 8018B370 24190002 */  addiu       $t9, $zero, 0x2
/* E1AAA4 8018B374 1000017F */  b           .LE16C50_8018B974
/* E1AAA8 8018B378 A71900AC */   sh         $t9, 0xAC($t8)
.LE16C50_8018B37C:
/* E1AAAC 8018B37C 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E1AAB0 8018B380 4481C000 */  mtc1        $at, $fs2
/* E1AAB4 8018B384 4480A000 */  mtc1        $zero, $fs0
/* E1AAB8 8018B388 8FAC00F8 */  lw          $t4, 0xF8($sp)
/* E1AABC 8018B38C 3C01801C */  lui         $at, %hi(D_E16C50_801C0A74)
/* E1AAC0 8018B390 C43C0A74 */  lwc1        $fs4, %lo(D_E16C50_801C0A74)($at)
/* E1AAC4 8018B394 0011B880 */  sll         $s7, $s1, 2
/* E1AAC8 8018B398 3C063ECC */  lui         $a2, (0x3ECCCCCD >> 16)
/* E1AACC 8018B39C 4407C000 */  mfc1        $a3, $fs2
/* E1AAD0 8018B3A0 01978021 */  addu        $s0, $t4, $s7
/* E1AAD4 8018B3A4 4405A000 */  mfc1        $a1, $fs0
/* E1AAD8 8018B3A8 AD0E0014 */  sw          $t6, 0x14($t0)
/* E1AADC 8018B3AC 2604013C */  addiu       $a0, $s0, 0x13C
/* E1AAE0 8018B3B0 34C6CCCD */  ori         $a2, $a2, (0x3ECCCCCD & 0xFFFF)
/* E1AAE4 8018B3B4 0C026F0B */  jal         Math_SmoothStepToF
/* E1AAE8 8018B3B8 E7BC0010 */   swc1       $fs4, 0x10($sp)
/* E1AAEC 8018B3BC 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1AAF0 8018B3C0 44811000 */  mtc1        $at, $fv1
/* E1AAF4 8018B3C4 8FAF00F8 */  lw          $t7, 0xF8($sp)
/* E1AAF8 8018B3C8 3C01801C */  lui         $at, %hi(D_E16C50_801C0A78)
/* E1AAFC 8018B3CC C43A0A78 */  lwc1        $fs3, %lo(D_E16C50_801C0A78)($at)
/* E1AB00 8018B3D0 3C01BF80 */  lui         $at, (0xBF800000 >> 16)
/* E1AB04 8018B3D4 44814000 */  mtc1        $at, $ft2
/* E1AB08 8018B3D8 C5E400E4 */  lwc1        $ft0, 0xE4($t7)
/* E1AB0C 8018B3DC 3C014316 */  lui         $at, (0x43160000 >> 16)
/* E1AB10 8018B3E0 44815000 */  mtc1        $at, $ft3
/* E1AB14 8018B3E4 46082402 */  mul.s       $ft4, $ft0, $ft2
/* E1AB18 8018B3E8 3C0143D2 */  lui         $at, (0x43D20000 >> 16)
/* E1AB1C 8018B3EC 44814000 */  mtc1        $at, $ft2
/* E1AB20 8018B3F0 4407C000 */  mfc1        $a3, $fs2
/* E1AB24 8018B3F4 4406D000 */  mfc1        $a2, $fs3
/* E1AB28 8018B3F8 E7BC0010 */  swc1        $fs4, 0x10($sp)
/* E1AB2C 8018B3FC 26040130 */  addiu       $a0, $s0, 0x130
/* E1AB30 8018B400 460A8483 */  div.s       $ft5, $ft4, $ft3
/* E1AB34 8018B404 46121181 */  sub.s       $ft1, $fv1, $ft5
/* E1AB38 8018B408 46023102 */  mul.s       $ft0, $ft1, $fv1
/* E1AB3C 8018B40C 46044401 */  sub.s       $ft4, $ft2, $ft0
/* E1AB40 8018B410 44058000 */  mfc1        $a1, $ft4
/* E1AB44 8018B414 0C026F0B */  jal         Math_SmoothStepToF
/* E1AB48 8018B418 00000000 */   nop
/* E1AB4C 8018B41C 8FAD00A0 */  lw          $t5, 0xA0($sp)
/* E1AB50 8018B420 3C16801C */  lui         $s6, %hi(D_E16C50_801BEE90)
/* E1AB54 8018B424 8FAE00A0 */  lw          $t6, 0xA0($sp)
/* E1AB58 8018B428 85B900A0 */  lh          $t9, 0xA0($t5)
/* E1AB5C 8018B42C 26D6EE90 */  addiu       $s6, $s6, %lo(D_E16C50_801BEE90)
/* E1AB60 8018B430 00009825 */  or          $s3, $zero, $zero
/* E1AB64 8018B434 13200003 */  beqz        $t9, .LE16C50_8018B444
/* E1AB68 8018B438 3C01801C */   lui        $at, %hi(D_E16C50_801C0A7C)
/* E1AB6C 8018B43C 85B8008E */  lh          $t8, 0x8E($t5)
/* E1AB70 8018B440 1300005E */  beqz        $t8, .LE16C50_8018B5BC
.LE16C50_8018B444:
/* E1AB74 8018B444 3C15801C */   lui        $s5, %hi(D_E16C50_801BF1C0)
/* E1AB78 8018B448 3C14801C */  lui         $s4, %hi(D_E16C50_801BF040)
/* E1AB7C 8018B44C 3C12801C */  lui         $s2, %hi(D_E16C50_801BF010)
/* E1AB80 8018B450 3C11801C */  lui         $s1, %hi(D_E16C50_801BF190)
/* E1AB84 8018B454 3C03801C */  lui         $v1, %hi(D_E16C50_801BEEC0)
/* E1AB88 8018B458 A5C000AC */  sh          $zero, 0xAC($t6)
/* E1AB8C 8018B45C 2463EEC0 */  addiu       $v1, $v1, %lo(D_E16C50_801BEEC0)
/* E1AB90 8018B460 2631F190 */  addiu       $s1, $s1, %lo(D_E16C50_801BF190)
/* E1AB94 8018B464 2652F010 */  addiu       $s2, $s2, %lo(D_E16C50_801BF010)
/* E1AB98 8018B468 2694F040 */  addiu       $s4, $s4, %lo(D_E16C50_801BF040)
/* E1AB9C 8018B46C 26B5F1C0 */  addiu       $s5, $s5, %lo(D_E16C50_801BF1C0)
/* E1ABA0 8018B470 240B0008 */  addiu       $t3, $zero, 0x8
/* E1ABA4 8018B474 240A0004 */  addiu       $t2, $zero, 0x4
/* E1ABA8 8018B478 24090008 */  addiu       $t1, $zero, 0x8
/* E1ABAC 8018B47C 24080004 */  addiu       $t0, $zero, 0x4
/* E1ABB0 8018B480 24070008 */  addiu       $a3, $zero, 0x8
/* E1ABB4 8018B484 24060004 */  addiu       $a2, $zero, 0x4
/* E1ABB8 8018B488 24050008 */  addiu       $a1, $zero, 0x8
/* E1ABBC 8018B48C 24040004 */  addiu       $a0, $zero, 0x4
.LE16C50_8018B490:
/* E1ABC0 8018B490 16E00005 */  bnez        $s7, .LE16C50_8018B4A8
/* E1ABC4 8018B494 00131080 */   sll        $v0, $s3, 2
/* E1ABC8 8018B498 02C26021 */  addu        $t4, $s6, $v0
/* E1ABCC 8018B49C E5940000 */  swc1        $fs0, 0x0($t4)
/* E1ABD0 8018B4A0 00627821 */  addu        $t7, $v1, $v0
/* E1ABD4 8018B4A4 E5F40000 */  swc1        $fs0, 0x0($t7)
.LE16C50_8018B4A8:
/* E1ABD8 8018B4A8 16E40005 */  bne         $s7, $a0, .LE16C50_8018B4C0
/* E1ABDC 8018B4AC 00131080 */   sll        $v0, $s3, 2
/* E1ABE0 8018B4B0 0242C821 */  addu        $t9, $s2, $v0
/* E1ABE4 8018B4B4 E7340000 */  swc1        $fs0, 0x0($t9)
/* E1ABE8 8018B4B8 02826821 */  addu        $t5, $s4, $v0
/* E1ABEC 8018B4BC E5B40000 */  swc1        $fs0, 0x0($t5)
.LE16C50_8018B4C0:
/* E1ABF0 8018B4C0 16E50005 */  bne         $s7, $a1, .LE16C50_8018B4D8
/* E1ABF4 8018B4C4 00131080 */   sll        $v0, $s3, 2
/* E1ABF8 8018B4C8 0222C021 */  addu        $t8, $s1, $v0
/* E1ABFC 8018B4CC E7140000 */  swc1        $fs0, 0x0($t8)
/* E1AC00 8018B4D0 02A27021 */  addu        $t6, $s5, $v0
/* E1AC04 8018B4D4 E5D40000 */  swc1        $fs0, 0x0($t6)
.LE16C50_8018B4D8:
/* E1AC08 8018B4D8 16E00005 */  bnez        $s7, .LE16C50_8018B4F0
/* E1AC0C 8018B4DC 00131080 */   sll        $v0, $s3, 2
/* E1AC10 8018B4E0 02C26021 */  addu        $t4, $s6, $v0
/* E1AC14 8018B4E4 E5940004 */  swc1        $fs0, 0x4($t4)
/* E1AC18 8018B4E8 00627821 */  addu        $t7, $v1, $v0
/* E1AC1C 8018B4EC E5F40004 */  swc1        $fs0, 0x4($t7)
.LE16C50_8018B4F0:
/* E1AC20 8018B4F0 16E60005 */  bne         $s7, $a2, .LE16C50_8018B508
/* E1AC24 8018B4F4 00131080 */   sll        $v0, $s3, 2
/* E1AC28 8018B4F8 0242C821 */  addu        $t9, $s2, $v0
/* E1AC2C 8018B4FC E7340004 */  swc1        $fs0, 0x4($t9)
/* E1AC30 8018B500 02826821 */  addu        $t5, $s4, $v0
/* E1AC34 8018B504 E5B40004 */  swc1        $fs0, 0x4($t5)
.LE16C50_8018B508:
/* E1AC38 8018B508 16E70005 */  bne         $s7, $a3, .LE16C50_8018B520
/* E1AC3C 8018B50C 00131080 */   sll        $v0, $s3, 2
/* E1AC40 8018B510 0222C021 */  addu        $t8, $s1, $v0
/* E1AC44 8018B514 E7140004 */  swc1        $fs0, 0x4($t8)
/* E1AC48 8018B518 02A27021 */  addu        $t6, $s5, $v0
/* E1AC4C 8018B51C E5D40004 */  swc1        $fs0, 0x4($t6)
.LE16C50_8018B520:
/* E1AC50 8018B520 16E00005 */  bnez        $s7, .LE16C50_8018B538
/* E1AC54 8018B524 00131080 */   sll        $v0, $s3, 2
/* E1AC58 8018B528 02C26021 */  addu        $t4, $s6, $v0
/* E1AC5C 8018B52C E5940008 */  swc1        $fs0, 0x8($t4)
/* E1AC60 8018B530 00627821 */  addu        $t7, $v1, $v0
/* E1AC64 8018B534 E5F40008 */  swc1        $fs0, 0x8($t7)
.LE16C50_8018B538:
/* E1AC68 8018B538 16E80005 */  bne         $s7, $t0, .LE16C50_8018B550
/* E1AC6C 8018B53C 00131080 */   sll        $v0, $s3, 2
/* E1AC70 8018B540 0242C821 */  addu        $t9, $s2, $v0
/* E1AC74 8018B544 E7340008 */  swc1        $fs0, 0x8($t9)
/* E1AC78 8018B548 02826821 */  addu        $t5, $s4, $v0
/* E1AC7C 8018B54C E5B40008 */  swc1        $fs0, 0x8($t5)
.LE16C50_8018B550:
/* E1AC80 8018B550 16E90005 */  bne         $s7, $t1, .LE16C50_8018B568
/* E1AC84 8018B554 00131080 */   sll        $v0, $s3, 2
/* E1AC88 8018B558 0222C021 */  addu        $t8, $s1, $v0
/* E1AC8C 8018B55C E7140008 */  swc1        $fs0, 0x8($t8)
/* E1AC90 8018B560 02A27021 */  addu        $t6, $s5, $v0
/* E1AC94 8018B564 E5D40008 */  swc1        $fs0, 0x8($t6)
.LE16C50_8018B568:
/* E1AC98 8018B568 16E00005 */  bnez        $s7, .LE16C50_8018B580
/* E1AC9C 8018B56C 00131080 */   sll        $v0, $s3, 2
/* E1ACA0 8018B570 02C26021 */  addu        $t4, $s6, $v0
/* E1ACA4 8018B574 E594000C */  swc1        $fs0, 0xC($t4)
/* E1ACA8 8018B578 00627821 */  addu        $t7, $v1, $v0
/* E1ACAC 8018B57C E5F4000C */  swc1        $fs0, 0xC($t7)
.LE16C50_8018B580:
/* E1ACB0 8018B580 16EA0005 */  bne         $s7, $t2, .LE16C50_8018B598
/* E1ACB4 8018B584 00131080 */   sll        $v0, $s3, 2
/* E1ACB8 8018B588 0242C821 */  addu        $t9, $s2, $v0
/* E1ACBC 8018B58C E734000C */  swc1        $fs0, 0xC($t9)
/* E1ACC0 8018B590 02826821 */  addu        $t5, $s4, $v0
/* E1ACC4 8018B594 E5B4000C */  swc1        $fs0, 0xC($t5)
.LE16C50_8018B598:
/* E1ACC8 8018B598 16EB0005 */  bne         $s7, $t3, .LE16C50_8018B5B0
/* E1ACCC 8018B59C 00131080 */   sll        $v0, $s3, 2
/* E1ACD0 8018B5A0 0222C021 */  addu        $t8, $s1, $v0
/* E1ACD4 8018B5A4 E714000C */  swc1        $fs0, 0xC($t8)
/* E1ACD8 8018B5A8 02A27021 */  addu        $t6, $s5, $v0
/* E1ACDC 8018B5AC E5D4000C */  swc1        $fs0, 0xC($t6)
.LE16C50_8018B5B0:
/* E1ACE0 8018B5B0 26730004 */  addiu       $s3, $s3, 0x4
/* E1ACE4 8018B5B4 167EFFB6 */  bne         $s3, $fp, .LE16C50_8018B490
/* E1ACE8 8018B5B8 00000000 */   nop
.LE16C50_8018B5BC:
/* E1ACEC 8018B5BC 00009825 */  or          $s3, $zero, $zero
/* E1ACF0 8018B5C0 C4360A7C */  lwc1        $fs1, %lo(D_E16C50_801C0A7C)($at)
.LE16C50_8018B5C4:
/* E1ACF4 8018B5C4 16E0001A */  bnez        $s7, .LE16C50_8018B630
/* E1ACF8 8018B5C8 3C0C801C */   lui        $t4, %hi(D_E16C50_801BEE00)
/* E1ACFC 8018B5CC 027E0019 */  multu       $s3, $fp
/* E1AD00 8018B5D0 258CEE00 */  addiu       $t4, $t4, %lo(D_E16C50_801BEE00)
/* E1AD04 8018B5D4 00137880 */  sll         $t7, $s3, 2
/* E1AD08 8018B5D8 3C01801C */  lui         $at, %hi(D_E16C50_801BF494)
/* E1AD0C 8018B5DC 002F0821 */  addu        $at, $at, $t7
/* E1AD10 8018B5E0 3C19801C */  lui         $t9, %hi(D_E16C50_801BED70)
/* E1AD14 8018B5E4 2739ED70 */  addiu       $t9, $t9, %lo(D_E16C50_801BED70)
/* E1AD18 8018B5E8 4405A000 */  mfc1        $a1, $fs0
/* E1AD1C 8018B5EC 4406D000 */  mfc1        $a2, $fs3
/* E1AD20 8018B5F0 4407C000 */  mfc1        $a3, $fs2
/* E1AD24 8018B5F4 00001012 */  mflo        $v0
/* E1AD28 8018B5F8 004C8021 */  addu        $s0, $v0, $t4
/* E1AD2C 8018B5FC E6140004 */  swc1        $fs0, 0x4($s0)
/* E1AD30 8018B600 C42AF494 */  lwc1        $ft3, %lo(D_E16C50_801BF494)($at)
/* E1AD34 8018B604 0059A821 */  addu        $s5, $v0, $t9
/* E1AD38 8018B608 26A40004 */  addiu       $a0, $s5, 0x4
/* E1AD3C 8018B60C E7BC0010 */  swc1        $fs4, 0x10($sp)
/* E1AD40 8018B610 0C026F0B */  jal         Math_SmoothStepToF
/* E1AD44 8018B614 E60A0000 */   swc1       $ft3, 0x0($s0)
/* E1AD48 8018B618 4406D000 */  mfc1        $a2, $fs3
/* E1AD4C 8018B61C 4407C000 */  mfc1        $a3, $fs2
/* E1AD50 8018B620 02A02025 */  or          $a0, $s5, $zero
/* E1AD54 8018B624 8E050000 */  lw          $a1, 0x0($s0)
/* E1AD58 8018B628 0C026F0B */  jal         Math_SmoothStepToF
/* E1AD5C 8018B62C E7BC0010 */   swc1       $fs4, 0x10($sp)
.LE16C50_8018B630:
/* E1AD60 8018B630 24010004 */  addiu       $at, $zero, 0x4
/* E1AD64 8018B634 16E1001A */  bne         $s7, $at, .LE16C50_8018B6A0
/* E1AD68 8018B638 3C0D801C */   lui        $t5, %hi(D_E16C50_801BEF80)
/* E1AD6C 8018B63C 027E0019 */  multu       $s3, $fp
/* E1AD70 8018B640 25ADEF80 */  addiu       $t5, $t5, %lo(D_E16C50_801BEF80)
/* E1AD74 8018B644 0013C080 */  sll         $t8, $s3, 2
/* E1AD78 8018B648 3C01801C */  lui         $at, %hi(D_E16C50_801BF494)
/* E1AD7C 8018B64C 00380821 */  addu        $at, $at, $t8
/* E1AD80 8018B650 3C0E801C */  lui         $t6, %hi(D_E16C50_801BEEF0)
/* E1AD84 8018B654 25CEEEF0 */  addiu       $t6, $t6, %lo(D_E16C50_801BEEF0)
/* E1AD88 8018B658 4405A000 */  mfc1        $a1, $fs0
/* E1AD8C 8018B65C 4406D000 */  mfc1        $a2, $fs3
/* E1AD90 8018B660 4407C000 */  mfc1        $a3, $fs2
/* E1AD94 8018B664 00001012 */  mflo        $v0
/* E1AD98 8018B668 004D8821 */  addu        $s1, $v0, $t5
/* E1AD9C 8018B66C E6340004 */  swc1        $fs0, 0x4($s1)
/* E1ADA0 8018B670 C432F494 */  lwc1        $ft5, %lo(D_E16C50_801BF494)($at)
/* E1ADA4 8018B674 004EB021 */  addu        $s6, $v0, $t6
/* E1ADA8 8018B678 26C40004 */  addiu       $a0, $s6, 0x4
/* E1ADAC 8018B67C E7B60010 */  swc1        $fs1, 0x10($sp)
/* E1ADB0 8018B680 0C026F0B */  jal         Math_SmoothStepToF
/* E1ADB4 8018B684 E6320000 */   swc1       $ft5, 0x0($s1)
/* E1ADB8 8018B688 4406D000 */  mfc1        $a2, $fs3
/* E1ADBC 8018B68C 4407C000 */  mfc1        $a3, $fs2
/* E1ADC0 8018B690 02C02025 */  or          $a0, $s6, $zero
/* E1ADC4 8018B694 8E250000 */  lw          $a1, 0x0($s1)
/* E1ADC8 8018B698 0C026F0B */  jal         Math_SmoothStepToF
/* E1ADCC 8018B69C E7B60010 */   swc1       $fs1, 0x10($sp)
.LE16C50_8018B6A0:
/* E1ADD0 8018B6A0 24010008 */  addiu       $at, $zero, 0x8
/* E1ADD4 8018B6A4 16E1001A */  bne         $s7, $at, .LE16C50_8018B710
/* E1ADD8 8018B6A8 3C0C801C */   lui        $t4, %hi(D_E16C50_801BF100)
/* E1ADDC 8018B6AC 027E0019 */  multu       $s3, $fp
/* E1ADE0 8018B6B0 258CF100 */  addiu       $t4, $t4, %lo(D_E16C50_801BF100)
/* E1ADE4 8018B6B4 00137880 */  sll         $t7, $s3, 2
/* E1ADE8 8018B6B8 3C01801C */  lui         $at, %hi(D_E16C50_801BF494)
/* E1ADEC 8018B6BC 002F0821 */  addu        $at, $at, $t7
/* E1ADF0 8018B6C0 3C19801C */  lui         $t9, %hi(D_E16C50_801BF070)
/* E1ADF4 8018B6C4 2739F070 */  addiu       $t9, $t9, %lo(D_E16C50_801BF070)
/* E1ADF8 8018B6C8 4405A000 */  mfc1        $a1, $fs0
/* E1ADFC 8018B6CC 4406D000 */  mfc1        $a2, $fs3
/* E1AE00 8018B6D0 4407C000 */  mfc1        $a3, $fs2
/* E1AE04 8018B6D4 00001012 */  mflo        $v0
/* E1AE08 8018B6D8 004C9021 */  addu        $s2, $v0, $t4
/* E1AE0C 8018B6DC E6540004 */  swc1        $fs0, 0x4($s2)
/* E1AE10 8018B6E0 C426F494 */  lwc1        $ft1, %lo(D_E16C50_801BF494)($at)
/* E1AE14 8018B6E4 0059A021 */  addu        $s4, $v0, $t9
/* E1AE18 8018B6E8 26840004 */  addiu       $a0, $s4, 0x4
/* E1AE1C 8018B6EC E7B60010 */  swc1        $fs1, 0x10($sp)
/* E1AE20 8018B6F0 0C026F0B */  jal         Math_SmoothStepToF
/* E1AE24 8018B6F4 E6460000 */   swc1       $ft1, 0x0($s2)
/* E1AE28 8018B6F8 4406D000 */  mfc1        $a2, $fs3
/* E1AE2C 8018B6FC 4407C000 */  mfc1        $a3, $fs2
/* E1AE30 8018B700 02802025 */  or          $a0, $s4, $zero
/* E1AE34 8018B704 8E450000 */  lw          $a1, 0x0($s2)
/* E1AE38 8018B708 0C026F0B */  jal         Math_SmoothStepToF
/* E1AE3C 8018B70C E7B60010 */   swc1       $fs1, 0x10($sp)
.LE16C50_8018B710:
/* E1AE40 8018B710 26730001 */  addiu       $s3, $s3, 0x1
/* E1AE44 8018B714 167EFFAB */  bne         $s3, $fp, .LE16C50_8018B5C4
/* E1AE48 8018B718 00000000 */   nop
/* E1AE4C 8018B71C 10000096 */  b           .LE16C50_8018B978
/* E1AE50 8018B720 8FBF0074 */   lw         $ra, 0x74($sp)
.LE16C50_8018B724:
/* E1AE54 8018B724 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E1AE58 8018B728 4481D000 */  mtc1        $at, $fs3
/* E1AE5C 8018B72C 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E1AE60 8018B730 4481C000 */  mtc1        $at, $fs2
/* E1AE64 8018B734 3C01801C */  lui         $at, %hi(D_E16C50_801C0A80)
/* E1AE68 8018B738 3C11801C */  lui         $s1, %hi(D_E16C50_801BEF80)
/* E1AE6C 8018B73C 3C12801C */  lui         $s2, %hi(D_E16C50_801BF100)
/* E1AE70 8018B740 3C15801C */  lui         $s5, %hi(D_E16C50_801BEE04)
/* E1AE74 8018B744 3C16801C */  lui         $s6, %hi(D_E16C50_801BEF84)
/* E1AE78 8018B748 3C14801C */  lui         $s4, %hi(D_E16C50_801BF104)
/* E1AE7C 8018B74C 3C13801C */  lui         $s3, %hi(D_E16C50_801BF194)
/* E1AE80 8018B750 4480A000 */  mtc1        $zero, $fs0
/* E1AE84 8018B754 2673F194 */  addiu       $s3, $s3, %lo(D_E16C50_801BF194)
/* E1AE88 8018B758 2694F104 */  addiu       $s4, $s4, %lo(D_E16C50_801BF104)
/* E1AE8C 8018B75C 26D6EF84 */  addiu       $s6, $s6, %lo(D_E16C50_801BEF84)
/* E1AE90 8018B760 26B5EE04 */  addiu       $s5, $s5, %lo(D_E16C50_801BEE04)
/* E1AE94 8018B764 2652F100 */  addiu       $s2, $s2, %lo(D_E16C50_801BF100)
/* E1AE98 8018B768 2631EF80 */  addiu       $s1, $s1, %lo(D_E16C50_801BEF80)
/* E1AE9C 8018B76C C4360A80 */  lwc1        $fs1, %lo(D_E16C50_801C0A80)($at)
/* E1AEA0 8018B770 2610EE00 */  addiu       $s0, $s0, %lo(D_E16C50_801BEE00)
.LE16C50_8018B774:
/* E1AEA4 8018B774 4405A000 */  mfc1        $a1, $fs0
/* E1AEA8 8018B778 4406D000 */  mfc1        $a2, $fs3
/* E1AEAC 8018B77C 4407C000 */  mfc1        $a3, $fs2
/* E1AEB0 8018B780 02A02025 */  or          $a0, $s5, $zero
/* E1AEB4 8018B784 0C026F0B */  jal         Math_SmoothStepToF
/* E1AEB8 8018B788 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1AEBC 8018B78C 4405A000 */  mfc1        $a1, $fs0
/* E1AEC0 8018B790 4406D000 */  mfc1        $a2, $fs3
/* E1AEC4 8018B794 4407C000 */  mfc1        $a3, $fs2
/* E1AEC8 8018B798 02002025 */  or          $a0, $s0, $zero
/* E1AECC 8018B79C 0C026F0B */  jal         Math_SmoothStepToF
/* E1AED0 8018B7A0 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1AED4 8018B7A4 4405A000 */  mfc1        $a1, $fs0
/* E1AED8 8018B7A8 4406D000 */  mfc1        $a2, $fs3
/* E1AEDC 8018B7AC 4407C000 */  mfc1        $a3, $fs2
/* E1AEE0 8018B7B0 02C02025 */  or          $a0, $s6, $zero
/* E1AEE4 8018B7B4 0C026F0B */  jal         Math_SmoothStepToF
/* E1AEE8 8018B7B8 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1AEEC 8018B7BC 4405A000 */  mfc1        $a1, $fs0
/* E1AEF0 8018B7C0 4406D000 */  mfc1        $a2, $fs3
/* E1AEF4 8018B7C4 4407C000 */  mfc1        $a3, $fs2
/* E1AEF8 8018B7C8 02202025 */  or          $a0, $s1, $zero
/* E1AEFC 8018B7CC 0C026F0B */  jal         Math_SmoothStepToF
/* E1AF00 8018B7D0 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1AF04 8018B7D4 4405A000 */  mfc1        $a1, $fs0
/* E1AF08 8018B7D8 4406D000 */  mfc1        $a2, $fs3
/* E1AF0C 8018B7DC 4407C000 */  mfc1        $a3, $fs2
/* E1AF10 8018B7E0 02802025 */  or          $a0, $s4, $zero
/* E1AF14 8018B7E4 0C026F0B */  jal         Math_SmoothStepToF
/* E1AF18 8018B7E8 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1AF1C 8018B7EC 4405A000 */  mfc1        $a1, $fs0
/* E1AF20 8018B7F0 4406D000 */  mfc1        $a2, $fs3
/* E1AF24 8018B7F4 4407C000 */  mfc1        $a3, $fs2
/* E1AF28 8018B7F8 02402025 */  or          $a0, $s2, $zero
/* E1AF2C 8018B7FC 0C026F0B */  jal         Math_SmoothStepToF
/* E1AF30 8018B800 E7B60010 */   swc1       $fs1, 0x10($sp)
/* E1AF34 8018B804 2694000C */  addiu       $s4, $s4, 0xC
/* E1AF38 8018B808 0293082B */  sltu        $at, $s4, $s3
/* E1AF3C 8018B80C 2610000C */  addiu       $s0, $s0, 0xC
/* E1AF40 8018B810 2631000C */  addiu       $s1, $s1, 0xC
/* E1AF44 8018B814 2652000C */  addiu       $s2, $s2, 0xC
/* E1AF48 8018B818 26B5000C */  addiu       $s5, $s5, 0xC
/* E1AF4C 8018B81C 1420FFD5 */  bnez        $at, .LE16C50_8018B774
/* E1AF50 8018B820 26D6000C */   addiu      $s6, $s6, 0xC
/* E1AF54 8018B824 8FA600F8 */  lw          $a2, 0xF8($sp)
/* E1AF58 8018B828 240D0004 */  addiu       $t5, $zero, 0x4
/* E1AF5C 8018B82C 3C01C2B4 */  lui         $at, (0xC2B40000 >> 16)
/* E1AF60 8018B830 A4CD00B0 */  sh          $t5, 0xB0($a2)
/* E1AF64 8018B834 44810000 */  mtc1        $at, $fv0
/* E1AF68 8018B838 84C200B0 */  lh          $v0, 0xB0($a2)
/* E1AF6C 8018B83C 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E1AF70 8018B840 A4C00050 */  sh          $zero, 0x50($a2)
/* E1AF74 8018B844 A4C200AE */  sh          $v0, 0xAE($a2)
/* E1AF78 8018B848 A4C200AC */  sh          $v0, 0xAC($a2)
/* E1AF7C 8018B84C E4D40138 */  swc1        $fs0, 0x138($a2)
/* E1AF80 8018B850 E4D40134 */  swc1        $fs0, 0x134($a2)
/* E1AF84 8018B854 E4D40130 */  swc1        $fs0, 0x130($a2)
/* E1AF88 8018B858 E4D40114 */  swc1        $fs0, 0x114($a2)
/* E1AF8C 8018B85C E4D40110 */  swc1        $fs0, 0x110($a2)
/* E1AF90 8018B860 E4D4010C */  swc1        $fs0, 0x10C($a2)
/* E1AF94 8018B864 E4D4012C */  swc1        $fs0, 0x12C($a2)
/* E1AF98 8018B868 E4D40128 */  swc1        $fs0, 0x128($a2)
/* E1AF9C 8018B86C E4D40124 */  swc1        $fs0, 0x124($a2)
/* E1AFA0 8018B870 E4D40108 */  swc1        $fs0, 0x108($a2)
/* E1AFA4 8018B874 E4D40104 */  swc1        $fs0, 0x104($a2)
/* E1AFA8 8018B878 E4D40100 */  swc1        $fs0, 0x100($a2)
/* E1AFAC 8018B87C E4D40148 */  swc1        $fs0, 0x148($a2)
/* E1AFB0 8018B880 E4C00144 */  swc1        $fv0, 0x144($a2)
/* E1AFB4 8018B884 E4C00140 */  swc1        $fv0, 0x140($a2)
/* E1AFB8 8018B888 E4C0013C */  swc1        $fv0, 0x13C($a2)
/* E1AFBC 8018B88C 3C06801C */  lui         $a2, %hi(D_E16C50_801BF100)
/* E1AFC0 8018B890 3C02801C */  lui         $v0, %hi(D_E16C50_801BF010)
/* E1AFC4 8018B894 3C17801C */  lui         $s7, %hi(D_E16C50_801BEE90)
/* E1AFC8 8018B898 3C1E801C */  lui         $fp, %hi(D_E16C50_801BEEC0)
/* E1AFCC 8018B89C 3C10801C */  lui         $s0, %hi(D_E16C50_801BEE00)
/* E1AFD0 8018B8A0 3C15801C */  lui         $s5, %hi(D_E16C50_801BED70)
/* E1AFD4 8018B8A4 3C03801C */  lui         $v1, %hi(D_E16C50_801BF040)
/* E1AFD8 8018B8A8 3C11801C */  lui         $s1, %hi(D_E16C50_801BEF80)
/* E1AFDC 8018B8AC 3C16801C */  lui         $s6, %hi(D_E16C50_801BEEF0)
/* E1AFE0 8018B8B0 3C04801C */  lui         $a0, %hi(D_E16C50_801BF190)
/* E1AFE4 8018B8B4 3C05801C */  lui         $a1, %hi(D_E16C50_801BF1C0)
/* E1AFE8 8018B8B8 3C12801C */  lui         $s2, %hi(D_E16C50_801BF100)
/* E1AFEC 8018B8BC 3C14801C */  lui         $s4, %hi(D_E16C50_801BF070)
/* E1AFF0 8018B8C0 4481E000 */  mtc1        $at, $fs4
/* E1AFF4 8018B8C4 2694F070 */  addiu       $s4, $s4, %lo(D_E16C50_801BF070)
/* E1AFF8 8018B8C8 2652F100 */  addiu       $s2, $s2, %lo(D_E16C50_801BF100)
/* E1AFFC 8018B8CC 24A5F1C0 */  addiu       $a1, $a1, %lo(D_E16C50_801BF1C0)
/* E1B000 8018B8D0 2484F190 */  addiu       $a0, $a0, %lo(D_E16C50_801BF190)
/* E1B004 8018B8D4 26D6EEF0 */  addiu       $s6, $s6, %lo(D_E16C50_801BEEF0)
/* E1B008 8018B8D8 2631EF80 */  addiu       $s1, $s1, %lo(D_E16C50_801BEF80)
/* E1B00C 8018B8DC 2463F040 */  addiu       $v1, $v1, %lo(D_E16C50_801BF040)
/* E1B010 8018B8E0 26B5ED70 */  addiu       $s5, $s5, %lo(D_E16C50_801BED70)
/* E1B014 8018B8E4 2610EE00 */  addiu       $s0, $s0, %lo(D_E16C50_801BEE00)
/* E1B018 8018B8E8 27DEEEC0 */  addiu       $fp, $fp, %lo(D_E16C50_801BEEC0)
/* E1B01C 8018B8EC 26F7EE90 */  addiu       $s7, $s7, %lo(D_E16C50_801BEE90)
/* E1B020 8018B8F0 2442F010 */  addiu       $v0, $v0, %lo(D_E16C50_801BF010)
/* E1B024 8018B8F4 24C6F100 */  addiu       $a2, $a2, %lo(D_E16C50_801BF100)
.LE16C50_8018B8F8:
/* E1B028 8018B8F8 2694000C */  addiu       $s4, $s4, 0xC
/* E1B02C 8018B8FC 26F70004 */  addiu       $s7, $s7, 0x4
/* E1B030 8018B900 27DE0004 */  addiu       $fp, $fp, 0x4
/* E1B034 8018B904 2610000C */  addiu       $s0, $s0, 0xC
/* E1B038 8018B908 26B5000C */  addiu       $s5, $s5, 0xC
/* E1B03C 8018B90C 24420004 */  addiu       $v0, $v0, 0x4
/* E1B040 8018B910 24630004 */  addiu       $v1, $v1, 0x4
/* E1B044 8018B914 2631000C */  addiu       $s1, $s1, 0xC
/* E1B048 8018B918 26D6000C */  addiu       $s6, $s6, 0xC
/* E1B04C 8018B91C 24840004 */  addiu       $a0, $a0, 0x4
/* E1B050 8018B920 24A50004 */  addiu       $a1, $a1, 0x4
/* E1B054 8018B924 2652000C */  addiu       $s2, $s2, 0xC
/* E1B058 8018B928 E614FFF4 */  swc1        $fs0, -0xC($s0)
/* E1B05C 8018B92C E614FFF8 */  swc1        $fs0, -0x8($s0)
/* E1B060 8018B930 E6B4FFF4 */  swc1        $fs0, -0xC($s5)
/* E1B064 8018B934 E6B4FFF8 */  swc1        $fs0, -0x8($s5)
/* E1B068 8018B938 E6FCFFFC */  swc1        $fs4, -0x4($s7)
/* E1B06C 8018B93C E7DCFFFC */  swc1        $fs4, -0x4($fp)
/* E1B070 8018B940 E634FFF4 */  swc1        $fs0, -0xC($s1)
/* E1B074 8018B944 E634FFF8 */  swc1        $fs0, -0x8($s1)
/* E1B078 8018B948 E6D4FFF4 */  swc1        $fs0, -0xC($s6)
/* E1B07C 8018B94C E6D4FFF8 */  swc1        $fs0, -0x8($s6)
/* E1B080 8018B950 E45CFFFC */  swc1        $fs4, -0x4($v0)
/* E1B084 8018B954 E47CFFFC */  swc1        $fs4, -0x4($v1)
/* E1B088 8018B958 E654FFF4 */  swc1        $fs0, -0xC($s2)
/* E1B08C 8018B95C E654FFF8 */  swc1        $fs0, -0x8($s2)
/* E1B090 8018B960 E694FFF4 */  swc1        $fs0, -0xC($s4)
/* E1B094 8018B964 E694FFF8 */  swc1        $fs0, -0x8($s4)
/* E1B098 8018B968 E49CFFFC */  swc1        $fs4, -0x4($a0)
/* E1B09C 8018B96C 1686FFE2 */  bne         $s4, $a2, .LE16C50_8018B8F8
/* E1B0A0 8018B970 E4BCFFFC */   swc1       $fs4, -0x4($a1)
.LE16C50_8018B974:
/* E1B0A4 8018B974 8FBF0074 */  lw          $ra, 0x74($sp)
.LE16C50_8018B978:
/* E1B0A8 8018B978 D7B40020 */  ldc1        $fs0, 0x20($sp)
/* E1B0AC 8018B97C D7B60028 */  ldc1        $fs1, 0x28($sp)
/* E1B0B0 8018B980 D7B80030 */  ldc1        $fs2, 0x30($sp)
/* E1B0B4 8018B984 D7BA0038 */  ldc1        $fs3, 0x38($sp)
/* E1B0B8 8018B988 D7BC0040 */  ldc1        $fs4, 0x40($sp)
/* E1B0BC 8018B98C D7BE0048 */  ldc1        $fs5, 0x48($sp)
/* E1B0C0 8018B990 8FB00050 */  lw          $s0, 0x50($sp)
/* E1B0C4 8018B994 8FB10054 */  lw          $s1, 0x54($sp)
/* E1B0C8 8018B998 8FB20058 */  lw          $s2, 0x58($sp)
/* E1B0CC 8018B99C 8FB3005C */  lw          $s3, 0x5C($sp)
/* E1B0D0 8018B9A0 8FB40060 */  lw          $s4, 0x60($sp)
/* E1B0D4 8018B9A4 8FB50064 */  lw          $s5, 0x64($sp)
/* E1B0D8 8018B9A8 8FB60068 */  lw          $s6, 0x68($sp)
/* E1B0DC 8018B9AC 8FB7006C */  lw          $s7, 0x6C($sp)
/* E1B0E0 8018B9B0 8FBE0070 */  lw          $fp, 0x70($sp)
/* E1B0E4 8018B9B4 03E00008 */  jr          $ra
/* E1B0E8 8018B9B8 27BD00F8 */   addiu      $sp, $sp, 0xF8
.section .late_rodata
dlabel D_E16C50_801C0A84
/* E501B4 801C0A84 3ECCCCCD */ .float 0.400000006

dlabel D_E16C50_801C0A88
/* E501B8 801C0A88 3E4CCCCD */ .float 0.200000003


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8018B9BC
/* E1B0EC 8018B9BC 27BDFF58 */  addiu       $sp, $sp, -0xA8
/* E1B0F0 8018B9C0 AFB20058 */  sw          $s2, 0x58($sp)
/* E1B0F4 8018B9C4 3C12801C */  lui         $s2, %hi(D_E16C50_801C2250)
/* E1B0F8 8018B9C8 AFB00050 */  sw          $s0, 0x50($sp)
/* E1B0FC 8018B9CC 00808025 */  or          $s0, $a0, $zero
/* E1B100 8018B9D0 26522250 */  addiu       $s2, $s2, %lo(D_E16C50_801C2250)
/* E1B104 8018B9D4 AFBF0074 */  sw          $ra, 0x74($sp)
/* E1B108 8018B9D8 AFBE0070 */  sw          $fp, 0x70($sp)
/* E1B10C 8018B9DC AFB7006C */  sw          $s7, 0x6C($sp)
/* E1B110 8018B9E0 AFB60068 */  sw          $s6, 0x68($sp)
/* E1B114 8018B9E4 AFB50064 */  sw          $s5, 0x64($sp)
/* E1B118 8018B9E8 AFB40060 */  sw          $s4, 0x60($sp)
/* E1B11C 8018B9EC AFB3005C */  sw          $s3, 0x5C($sp)
/* E1B120 8018B9F0 AFB10054 */  sw          $s1, 0x54($sp)
/* E1B124 8018B9F4 F7BC0048 */  sdc1        $fs4, 0x48($sp)
/* E1B128 8018B9F8 F7BA0040 */  sdc1        $fs3, 0x40($sp)
/* E1B12C 8018B9FC F7B80038 */  sdc1        $fs2, 0x38($sp)
/* E1B130 8018BA00 F7B60030 */  sdc1        $fs1, 0x30($sp)
/* E1B134 8018BA04 F7B40028 */  sdc1        $fs0, 0x28($sp)
/* E1B138 8018BA08 8E4E0000 */  lw          $t6, 0x0($s2)
/* E1B13C 8018BA0C 24130003 */  addiu       $s3, $zero, 0x3
/* E1B140 8018BA10 2415001E */  addiu       $s5, $zero, 0x1E
/* E1B144 8018BA14 15C0009E */  bnez        $t6, .LE16C50_8018BC90
/* E1B148 8018BA18 2611001E */   addiu      $s1, $s0, 0x1E
/* E1B14C 8018BA1C 3C01801C */  lui         $at, %hi(D_E16C50_801C0A84)
/* E1B150 8018BA20 C43C0A84 */  lwc1        $fs4, %lo(D_E16C50_801C0A84)($at)
/* E1B154 8018BA24 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1B158 8018BA28 4481D000 */  mtc1        $at, $fs3
/* E1B15C 8018BA2C 3C01801C */  lui         $at, %hi(D_E16C50_801C0A88)
/* E1B160 8018BA30 C4380A88 */  lwc1        $fs2, %lo(D_E16C50_801C0A88)($at)
/* E1B164 8018BA34 3C014316 */  lui         $at, (0x43160000 >> 16)
/* E1B168 8018BA38 4481B000 */  mtc1        $at, $fs1
/* E1B16C 8018BA3C 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E1B170 8018BA40 3C1E8017 */  lui         $fp, %hi(gPlayerShots)
/* E1B174 8018BA44 3C178018 */  lui         $s7, %hi(D_8017812C)
/* E1B178 8018BA48 3C16800C */  lui         $s6, %hi(D_800C5D34)
/* E1B17C 8018BA4C 4481A000 */  mtc1        $at, $fs0
/* E1B180 8018BA50 26D65D34 */  addiu       $s6, $s6, %lo(D_800C5D34)
/* E1B184 8018BA54 26F7812C */  addiu       $s7, $s7, %lo(D_8017812C)
/* E1B188 8018BA58 27DE4050 */  addiu       $fp, $fp, %lo(gPlayerShots)
.LE16C50_8018BA5C:
/* E1B18C 8018BA5C 86220088 */  lh          $v0, 0x88($s1)
/* E1B190 8018BA60 50400087 */  beql        $v0, $zero, .LE16C50_8018BC80
/* E1B194 8018BA64 26B50002 */   addiu      $s5, $s5, 0x2
/* E1B198 8018BA68 8EEF0000 */  lw          $t7, 0x0($s7)
/* E1B19C 8018BA6C 261403FC */  addiu       $s4, $s0, 0x3FC
/* E1B1A0 8018BA70 51E00009 */  beql        $t7, $zero, .LE16C50_8018BA98
/* E1B1A4 8018BA74 860A0066 */   lh         $t2, 0x66($s0)
/* E1B1A8 8018BA78 8FD806F4 */  lw          $t8, 0x6F4($fp)
/* E1B1AC 8018BA7C 5B000006 */  blezl       $t8, .LE16C50_8018BA98
/* E1B1B0 8018BA80 860A0066 */   lh         $t2, 0x66($s0)
/* E1B1B4 8018BA84 86190064 */  lh          $t9, 0x64($s0)
/* E1B1B8 8018BA88 00594023 */  subu        $t0, $v0, $t9
/* E1B1BC 8018BA8C 1000001C */  b           .LE16C50_8018BB00
/* E1B1C0 8018BA90 A6280088 */   sh         $t0, 0x88($s1)
/* E1B1C4 8018BA94 860A0066 */  lh          $t2, 0x66($s0)
.LE16C50_8018BA98:
/* E1B1C8 8018BA98 26690001 */  addiu       $t1, $s3, 0x1
/* E1B1CC 8018BA9C 152A0018 */  bne         $t1, $t2, .LE16C50_8018BB00
/* E1B1D0 8018BAA0 00000000 */   nop
/* E1B1D4 8018BAA4 860B0064 */  lh          $t3, 0x64($s0)
/* E1B1D8 8018BAA8 004B6023 */  subu        $t4, $v0, $t3
/* E1B1DC 8018BAAC A62C0088 */  sh          $t4, 0x88($s1)
/* E1B1E0 8018BAB0 8E4D0064 */  lw          $t5, 0x64($s2)
/* E1B1E4 8018BAB4 15A00012 */  bnez        $t5, .LE16C50_8018BB00
/* E1B1E8 8018BAB8 00000000 */   nop
/* E1B1EC 8018BABC 860E00BA */  lh          $t6, 0xBA($s0)
/* E1B1F0 8018BAC0 24010001 */  addiu       $at, $zero, 0x1
/* E1B1F4 8018BAC4 15C1000E */  bne         $t6, $at, .LE16C50_8018BB00
/* E1B1F8 8018BAC8 00000000 */   nop
/* E1B1FC 8018BACC 0C0013AC */  jal         Rand_ZeroOne
/* E1B200 8018BAD0 00000000 */   nop
/* E1B204 8018BAD4 461C003C */  c.lt.s      $fv0, $fs4
/* E1B208 8018BAD8 00000000 */  nop
/* E1B20C 8018BADC 45000008 */  bc1f        .LE16C50_8018BB00
/* E1B210 8018BAE0 00000000 */   nop
/* E1B214 8018BAE4 8E4F0028 */  lw          $t7, 0x28($s2)
/* E1B218 8018BAE8 24090014 */  addiu       $t1, $zero, 0x14
/* E1B21C 8018BAEC AE490064 */  sw          $t1, 0x64($s2)
/* E1B220 8018BAF0 25F80001 */  addiu       $t8, $t7, 0x1
/* E1B224 8018BAF4 AE580028 */  sw          $t8, 0x28($s2)
/* E1B228 8018BAF8 33080001 */  andi        $t0, $t8, 0x1
/* E1B22C 8018BAFC AE480028 */  sw          $t0, 0x28($s2)
.LE16C50_8018BB00:
/* E1B230 8018BB00 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E1B234 8018BB04 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E1B238 8018BB08 3C042903 */  lui         $a0, (0x29033064 >> 16)
/* E1B23C 8018BB0C 34843064 */  ori         $a0, $a0, (0x29033064 & 0xFFFF)
/* E1B240 8018BB10 AFAA0014 */  sw          $t2, 0x14($sp)
/* E1B244 8018BB14 02802825 */  or          $a1, $s4, $zero
/* E1B248 8018BB18 24060004 */  addiu       $a2, $zero, 0x4
/* E1B24C 8018BB1C 02C03825 */  or          $a3, $s6, $zero
/* E1B250 8018BB20 0C006486 */  jal         Audio_PlaySfx
/* E1B254 8018BB24 AFB60010 */   sw         $s6, 0x10($sp)
/* E1B258 8018BB28 862B0088 */  lh          $t3, 0x88($s1)
/* E1B25C 8018BB2C 00136080 */  sll         $t4, $s3, 2
/* E1B260 8018BB30 01936023 */  subu        $t4, $t4, $s3
/* E1B264 8018BB34 1D600033 */  bgtz        $t3, .LE16C50_8018BC04
/* E1B268 8018BB38 3C048014 */   lui        $a0, %hi(gCalcMatrix)
/* E1B26C 8018BB3C 000C6080 */  sll         $t4, $t4, 2
/* E1B270 8018BB40 A6200088 */  sh          $zero, 0x88($s1)
/* E1B274 8018BB44 020C2821 */  addu        $a1, $s0, $t4
/* E1B278 8018BB48 24A501AC */  addiu       $a1, $a1, 0x1AC
/* E1B27C 8018BB4C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1B280 8018BB50 0C001A5C */  jal         Matrix_MultVec3f
/* E1B284 8018BB54 27A60094 */   addiu      $a2, $sp, 0x94
/* E1B288 8018BB58 C6040004 */  lwc1        $ft0, 0x4($s0)
/* E1B28C 8018BB5C C7A60094 */  lwc1        $ft1, 0x94($sp)
/* E1B290 8018BB60 C610000C */  lwc1        $ft4, 0xC($s0)
/* E1B294 8018BB64 C7B2009C */  lwc1        $ft5, 0x9C($sp)
/* E1B298 8018BB68 46062300 */  add.s       $fa0, $ft0, $ft1
/* E1B29C 8018BB6C C6080008 */  lwc1        $ft2, 0x8($s0)
/* E1B2A0 8018BB70 C7AA0098 */  lwc1        $ft3, 0x98($sp)
/* E1B2A4 8018BB74 46128100 */  add.s       $ft0, $ft4, $ft5
/* E1B2A8 8018BB78 4407A000 */  mfc1        $a3, $fs0
/* E1B2AC 8018BB7C 460A4380 */  add.s       $fa1, $ft2, $ft3
/* E1B2B0 8018BB80 44062000 */  mfc1        $a2, $ft0
/* E1B2B4 8018BB84 0C01F438 */  jal         func_8007D0E0
/* E1B2B8 8018BB88 00000000 */   nop
/* E1B2BC 8018BB8C C6060004 */  lwc1        $ft1, 0x4($s0)
/* E1B2C0 8018BB90 C7A80094 */  lwc1        $ft2, 0x94($sp)
/* E1B2C4 8018BB94 C7B20098 */  lwc1        $ft5, 0x98($sp)
/* E1B2C8 8018BB98 3C052903 */  lui         $a1, (0x2903B009 >> 16)
/* E1B2CC 8018BB9C 46083280 */  add.s       $ft3, $ft1, $ft2
/* E1B2D0 8018BBA0 C7A8009C */  lwc1        $ft2, 0x9C($sp)
/* E1B2D4 8018BBA4 34A5B009 */  ori         $a1, $a1, (0x2903B009 & 0xFFFF)
/* E1B2D8 8018BBA8 27A40088 */  addiu       $a0, $sp, 0x88
/* E1B2DC 8018BBAC E7AA0088 */  swc1        $ft3, 0x88($sp)
/* E1B2E0 8018BBB0 C6100008 */  lwc1        $ft4, 0x8($s0)
/* E1B2E4 8018BBB4 46128100 */  add.s       $ft0, $ft4, $ft5
/* E1B2E8 8018BBB8 E7A4008C */  swc1        $ft0, 0x8C($sp)
/* E1B2EC 8018BBBC C606000C */  lwc1        $ft1, 0xC($s0)
/* E1B2F0 8018BBC0 46083280 */  add.s       $ft3, $ft1, $ft2
/* E1B2F4 8018BBC4 0C01E9BC */  jal         func_8007A6F0
/* E1B2F8 8018BBC8 E7AA0090 */   swc1       $ft3, 0x90($sp)
/* E1B2FC 8018BBCC C610000C */  lwc1        $ft4, 0xC($s0)
/* E1B300 8018BBD0 C6040070 */  lwc1        $ft0, 0x70($s0)
/* E1B304 8018BBD4 C60C0004 */  lwc1        $fa0, 0x4($s0)
/* E1B308 8018BBD8 46168480 */  add.s       $ft5, $ft4, $fs1
/* E1B30C 8018BBDC C60E0008 */  lwc1        $fa1, 0x8($s0)
/* E1B310 8018BBE0 8E07006C */  lw          $a3, 0x6C($s0)
/* E1B314 8018BBE4 E7A40010 */  swc1        $ft0, 0x10($sp)
/* E1B318 8018BBE8 C6060074 */  lwc1        $ft1, 0x74($s0)
/* E1B31C 8018BBEC 44069000 */  mfc1        $a2, $ft5
/* E1B320 8018BBF0 240D0032 */  addiu       $t5, $zero, 0x32
/* E1B324 8018BBF4 AFAD001C */  sw          $t5, 0x1C($sp)
/* E1B328 8018BBF8 E7B80018 */  swc1        $fs2, 0x18($sp)
/* E1B32C 8018BBFC 0C01F048 */  jal         func_8007C120
/* E1B330 8018BC00 E7A60014 */   swc1       $ft1, 0x14($sp)
.LE16C50_8018BC04:
/* E1B334 8018BC04 860E00A6 */  lh          $t6, 0xA6($s0)
/* E1B338 8018BC08 55C0001D */  bnel        $t6, $zero, .LE16C50_8018BC80
/* E1B33C 8018BC0C 26B50002 */   addiu      $s5, $s5, 0x2
/* E1B340 8018BC10 860F00A8 */  lh          $t7, 0xA8($s0)
/* E1B344 8018BC14 55E0001A */  bnel        $t7, $zero, .LE16C50_8018BC80
/* E1B348 8018BC18 26B50002 */   addiu      $s5, $s5, 0x2
/* E1B34C 8018BC1C 861800AA */  lh          $t8, 0xAA($s0)
/* E1B350 8018BC20 57000017 */  bnel        $t8, $zero, .LE16C50_8018BC80
/* E1B354 8018BC24 26B50002 */   addiu      $s5, $s5, 0x2
/* E1B358 8018BC28 0C006940 */  jal         Audio_KillSfx
/* E1B35C 8018BC2C 02802025 */   or         $a0, $s4, $zero
/* E1B360 8018BC30 860200BA */  lh          $v0, 0xBA($s0)
/* E1B364 8018BC34 240A0032 */  addiu       $t2, $zero, 0x32
/* E1B368 8018BC38 240B001E */  addiu       $t3, $zero, 0x1E
/* E1B36C 8018BC3C 10400009 */  beqz        $v0, .LE16C50_8018BC64
/* E1B370 8018BC40 2459FFFF */   addiu      $t9, $v0, -0x1
/* E1B374 8018BC44 A61900BA */  sh          $t9, 0xBA($s0)
/* E1B378 8018BC48 860200BA */  lh          $v0, 0xBA($s0)
/* E1B37C 8018BC4C 10400005 */  beqz        $v0, .LE16C50_8018BC64
/* E1B380 8018BC50 00000000 */   nop
/* E1B384 8018BC54 86080060 */  lh          $t0, 0x60($s0)
/* E1B388 8018BC58 860200BA */  lh          $v0, 0xBA($s0)
/* E1B38C 8018BC5C 2509FFC4 */  addiu       $t1, $t0, -0x3C
/* E1B390 8018BC60 A6090060 */  sh          $t1, 0x60($s0)
.LE16C50_8018BC64:
/* E1B394 8018BC64 50400004 */  beql        $v0, $zero, .LE16C50_8018BC78
/* E1B398 8018BC68 A60B0054 */   sh         $t3, 0x54($s0)
/* E1B39C 8018BC6C 10000003 */  b           .LE16C50_8018BC7C
/* E1B3A0 8018BC70 A60A0058 */   sh         $t2, 0x58($s0)
/* E1B3A4 8018BC74 A60B0054 */  sh          $t3, 0x54($s0)
.LE16C50_8018BC78:
/* E1B3A8 8018BC78 E61A0158 */  swc1        $fs3, 0x158($s0)
.LE16C50_8018BC7C:
/* E1B3AC 8018BC7C 26B50002 */  addiu       $s5, $s5, 0x2
.LE16C50_8018BC80:
/* E1B3B0 8018BC80 24010024 */  addiu       $at, $zero, 0x24
/* E1B3B4 8018BC84 26310002 */  addiu       $s1, $s1, 0x2
/* E1B3B8 8018BC88 16A1FF74 */  bne         $s5, $at, .LE16C50_8018BA5C
/* E1B3BC 8018BC8C 26730001 */   addiu      $s3, $s3, 0x1
.LE16C50_8018BC90:
/* E1B3C0 8018BC90 8FBF0074 */  lw          $ra, 0x74($sp)
/* E1B3C4 8018BC94 D7B40028 */  ldc1        $fs0, 0x28($sp)
/* E1B3C8 8018BC98 D7B60030 */  ldc1        $fs1, 0x30($sp)
/* E1B3CC 8018BC9C D7B80038 */  ldc1        $fs2, 0x38($sp)
/* E1B3D0 8018BCA0 D7BA0040 */  ldc1        $fs3, 0x40($sp)
/* E1B3D4 8018BCA4 D7BC0048 */  ldc1        $fs4, 0x48($sp)
/* E1B3D8 8018BCA8 8FB00050 */  lw          $s0, 0x50($sp)
/* E1B3DC 8018BCAC 8FB10054 */  lw          $s1, 0x54($sp)
/* E1B3E0 8018BCB0 8FB20058 */  lw          $s2, 0x58($sp)
/* E1B3E4 8018BCB4 8FB3005C */  lw          $s3, 0x5C($sp)
/* E1B3E8 8018BCB8 8FB40060 */  lw          $s4, 0x60($sp)
/* E1B3EC 8018BCBC 8FB50064 */  lw          $s5, 0x64($sp)
/* E1B3F0 8018BCC0 8FB60068 */  lw          $s6, 0x68($sp)
/* E1B3F4 8018BCC4 8FB7006C */  lw          $s7, 0x6C($sp)
/* E1B3F8 8018BCC8 8FBE0070 */  lw          $fp, 0x70($sp)
/* E1B3FC 8018BCCC 03E00008 */  jr          $ra
/* E1B400 8018BCD0 27BD00A8 */   addiu      $sp, $sp, 0xA8
.section .late_rodata
dlabel D_E16C50_801C0A8C
/* E501BC 801C0A8C 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8018BCD4
/* E1B404 8018BCD4 27BDFF60 */  addiu       $sp, $sp, -0xA0
/* E1B408 8018BCD8 AFB00040 */  sw          $s0, 0x40($sp)
/* E1B40C 8018BCDC F7BA0038 */  sdc1        $fs3, 0x38($sp)
/* E1B410 8018BCE0 F7B60028 */  sdc1        $fs1, 0x28($sp)
/* E1B414 8018BCE4 F7B40020 */  sdc1        $fs0, 0x20($sp)
/* E1B418 8018BCE8 3C10801C */  lui         $s0, %hi(D_E16C50_801C22F0)
/* E1B41C 8018BCEC AFB20048 */  sw          $s2, 0x48($sp)
/* E1B420 8018BCF0 4485A000 */  mtc1        $a1, $fs0
/* E1B424 8018BCF4 4486B000 */  mtc1        $a2, $fs1
/* E1B428 8018BCF8 4480D000 */  mtc1        $zero, $fs3
/* E1B42C 8018BCFC 00809025 */  or          $s2, $a0, $zero
/* E1B430 8018BD00 261022F0 */  addiu       $s0, $s0, %lo(D_E16C50_801C22F0)
/* E1B434 8018BD04 AFBF0064 */  sw          $ra, 0x64($sp)
/* E1B438 8018BD08 AFBE0060 */  sw          $fp, 0x60($sp)
/* E1B43C 8018BD0C AFB7005C */  sw          $s7, 0x5C($sp)
/* E1B440 8018BD10 AFB60058 */  sw          $s6, 0x58($sp)
/* E1B444 8018BD14 AFB50054 */  sw          $s5, 0x54($sp)
/* E1B448 8018BD18 AFB40050 */  sw          $s4, 0x50($sp)
/* E1B44C 8018BD1C AFB3004C */  sw          $s3, 0x4C($sp)
/* E1B450 8018BD20 AFB10044 */  sw          $s1, 0x44($sp)
/* E1B454 8018BD24 F7B80030 */  sdc1        $fs2, 0x30($sp)
/* E1B458 8018BD28 AFA700AC */  sw          $a3, 0xAC($sp)
/* E1B45C 8018BD2C 3C0F801C */  lui         $t7, %hi(D_E16C50_801BF4C4)
/* E1B460 8018BD30 25EFF4C4 */  addiu       $t7, $t7, %lo(D_E16C50_801BF4C4)
/* E1B464 8018BD34 8DE10000 */  lw          $at, 0x0($t7)
/* E1B468 8018BD38 27AE0090 */  addiu       $t6, $sp, 0x90
/* E1B46C 8018BD3C 8DE80004 */  lw          $t0, 0x4($t7)
/* E1B470 8018BD40 ADC10000 */  sw          $at, 0x0($t6)
/* E1B474 8018BD44 8DE10008 */  lw          $at, 0x8($t7)
/* E1B478 8018BD48 ADC80004 */  sw          $t0, 0x4($t6)
/* E1B47C 8018BD4C 3C118013 */  lui         $s1, %hi(gMasterDisp)
/* E1B480 8018BD50 ADC10008 */  sw          $at, 0x8($t6)
/* E1B484 8018BD54 C6040024 */  lwc1        $ft0, 0x24($s0)
/* E1B488 8018BD58 26317E64 */  addiu       $s1, $s1, %lo(gMasterDisp)
/* E1B48C 8018BD5C 02202025 */  or          $a0, $s1, $zero
/* E1B490 8018BD60 4604D032 */  c.eq.s      $fs3, $ft0
/* E1B494 8018BD64 00000000 */  nop
/* E1B498 8018BD68 450300CA */  bc1tl       .LE16C50_8018C094
/* E1B49C 8018BD6C 8FBF0064 */   lw         $ra, 0x64($sp)
/* E1B4A0 8018BD70 0C02E374 */  jal         RCP_SetupDL
/* E1B4A4 8018BD74 24050017 */   addiu      $a1, $zero, 0x17
/* E1B4A8 8018BD78 3C01437F */  lui         $at, (0x437F0000 >> 16)
/* E1B4AC 8018BD7C 44813000 */  mtc1        $at, $ft1
/* E1B4B0 8018BD80 C6080024 */  lwc1        $ft2, 0x24($s0)
/* E1B4B4 8018BD84 02202025 */  or          $a0, $s1, $zero
/* E1B4B8 8018BD88 46083032 */  c.eq.s      $ft1, $ft2
/* E1B4BC 8018BD8C 00000000 */  nop
/* E1B4C0 8018BD90 45030013 */  bc1tl       .LE16C50_8018BDE0
/* E1B4C4 8018BD94 8FB800B0 */   lw         $t8, 0xB0($sp)
/* E1B4C8 8018BD98 0C02E374 */  jal         RCP_SetupDL
/* E1B4CC 8018BD9C 24050047 */   addiu      $a1, $zero, 0x47
/* E1B4D0 8018BDA0 8E220000 */  lw          $v0, 0x0($s1)
/* E1B4D4 8018BDA4 3C0AFA00 */  lui         $t2, (0xFA000000 >> 16)
/* E1B4D8 8018BDA8 2401FF00 */  addiu       $at, $zero, -0x100
/* E1B4DC 8018BDAC 24490008 */  addiu       $t1, $v0, 0x8
/* E1B4E0 8018BDB0 AE290000 */  sw          $t1, 0x0($s1)
/* E1B4E4 8018BDB4 AC4A0000 */  sw          $t2, 0x0($v0)
/* E1B4E8 8018BDB8 C60A0024 */  lwc1        $ft3, 0x24($s0)
/* E1B4EC 8018BDBC 4600540D */  trunc.w.s   $ft4, $ft3
/* E1B4F0 8018BDC0 440C8000 */  mfc1        $t4, $ft4
/* E1B4F4 8018BDC4 00000000 */  nop
/* E1B4F8 8018BDC8 318D00FF */  andi        $t5, $t4, 0xFF
/* E1B4FC 8018BDCC 01A1C825 */  or          $t9, $t5, $at
/* E1B500 8018BDD0 AC590004 */  sw          $t9, 0x4($v0)
/* E1B504 8018BDD4 1000001F */  b           .LE16C50_8018BE54
/* E1B508 8018BDD8 00000000 */   nop
/* E1B50C 8018BDDC 8FB800B0 */  lw          $t8, 0xB0($sp)
.LE16C50_8018BDE0:
/* E1B510 8018BDE0 1300001C */  beqz        $t8, .LE16C50_8018BE54
/* E1B514 8018BDE4 02202025 */   or         $a0, $s1, $zero
/* E1B518 8018BDE8 0C02E374 */  jal         RCP_SetupDL
/* E1B51C 8018BDEC 2405001B */   addiu      $a1, $zero, 0x1B
/* E1B520 8018BDF0 3C014190 */  lui         $at, (0x41900000 >> 16)
/* E1B524 8018BDF4 44812000 */  mtc1        $at, $ft0
/* E1B528 8018BDF8 C7B200BC */  lwc1        $ft5, 0xBC($sp)
/* E1B52C 8018BDFC 3C0FFA00 */  lui         $t7, (0xFA000000 >> 16)
/* E1B530 8018BE00 3C0AFA00 */  lui         $t2, (0xFA000000 >> 16)
/* E1B534 8018BE04 4604903C */  c.lt.s      $ft5, $ft0
/* E1B538 8018BE08 00000000 */  nop
/* E1B53C 8018BE0C 4502000B */  bc1fl       .LE16C50_8018BE3C
/* E1B540 8018BE10 8E220000 */   lw         $v0, 0x0($s1)
/* E1B544 8018BE14 8E220000 */  lw          $v0, 0x0($s1)
/* E1B548 8018BE18 3C08FF00 */  lui         $t0, (0xFF00FFFF >> 16)
/* E1B54C 8018BE1C 3508FFFF */  ori         $t0, $t0, (0xFF00FFFF & 0xFFFF)
/* E1B550 8018BE20 244E0008 */  addiu       $t6, $v0, 0x8
/* E1B554 8018BE24 AE2E0000 */  sw          $t6, 0x0($s1)
/* E1B558 8018BE28 AC480004 */  sw          $t0, 0x4($v0)
/* E1B55C 8018BE2C AC4F0000 */  sw          $t7, 0x0($v0)
/* E1B560 8018BE30 10000008 */  b           .LE16C50_8018BE54
/* E1B564 8018BE34 00000000 */   nop
/* E1B568 8018BE38 8E220000 */  lw          $v0, 0x0($s1)
.LE16C50_8018BE3C:
/* E1B56C 8018BE3C 3C0BFFFF */  lui         $t3, (0xFFFF00FF >> 16)
/* E1B570 8018BE40 356B00FF */  ori         $t3, $t3, (0xFFFF00FF & 0xFFFF)
/* E1B574 8018BE44 24490008 */  addiu       $t1, $v0, 0x8
/* E1B578 8018BE48 AE290000 */  sw          $t1, 0x0($s1)
/* E1B57C 8018BE4C AC4B0004 */  sw          $t3, 0x4($v0)
/* E1B580 8018BE50 AC4A0000 */  sw          $t2, 0x0($v0)
.LE16C50_8018BE54:
/* E1B584 8018BE54 3C158014 */  lui         $s5, %hi(gGfxMatrix)
/* E1B588 8018BE58 26B5B3C0 */  addiu       $s5, $s5, %lo(gGfxMatrix)
/* E1B58C 8018BE5C 0C0015C2 */  jal         Matrix_Push
/* E1B590 8018BE60 02A02025 */   or         $a0, $s5, $zero
/* E1B594 8018BE64 3C108014 */  lui         $s0, %hi(gCalcMatrix)
/* E1B598 8018BE68 2610BBC8 */  addiu       $s0, $s0, %lo(gCalcMatrix)
/* E1B59C 8018BE6C 0C0015C2 */  jal         Matrix_Push
/* E1B5A0 8018BE70 02002025 */   or         $a0, $s0, $zero
/* E1B5A4 8018BE74 3C05800C */  lui         $a1, %hi(gIdentityMatrix)
/* E1B5A8 8018BE78 24A54660 */  addiu       $a1, $a1, %lo(gIdentityMatrix)
/* E1B5AC 8018BE7C 0C0015A0 */  jal         Matrix_Copy
/* E1B5B0 8018BE80 8E040000 */   lw         $a0, 0x0($s0)
/* E1B5B4 8018BE84 3C01801C */  lui         $at, %hi(D_E16C50_801C0A8C)
/* E1B5B8 8018BE88 C4380A8C */  lwc1        $fs2, %lo(D_E16C50_801C0A8C)($at)
/* E1B5BC 8018BE8C 8E040000 */  lw          $a0, 0x0($s0)
/* E1B5C0 8018BE90 24060001 */  addiu       $a2, $zero, 0x1
/* E1B5C4 8018BE94 4614C182 */  mul.s       $ft1, $fs2, $fs0
/* E1B5C8 8018BE98 44053000 */  mfc1        $a1, $ft1
/* E1B5CC 8018BE9C 0C0017F8 */  jal         Matrix_RotateZ
/* E1B5D0 8018BEA0 00000000 */   nop
/* E1B5D4 8018BEA4 4405D000 */  mfc1        $a1, $fs3
/* E1B5D8 8018BEA8 240C0001 */  addiu       $t4, $zero, 0x1
/* E1B5DC 8018BEAC AFAC0010 */  sw          $t4, 0x10($sp)
/* E1B5E0 8018BEB0 8E040000 */  lw          $a0, 0x0($s0)
/* E1B5E4 8018BEB4 3C0642C8 */  lui         $a2, (0x42C80000 >> 16)
/* E1B5E8 8018BEB8 0C0016C0 */  jal         Matrix_Translate
/* E1B5EC 8018BEBC 3C07C35F */   lui        $a3, (0xC35F0000 >> 16)
/* E1B5F0 8018BEC0 4616C202 */  mul.s       $ft2, $fs2, $fs1
/* E1B5F4 8018BEC4 8E040000 */  lw          $a0, 0x0($s0)
/* E1B5F8 8018BEC8 24060001 */  addiu       $a2, $zero, 0x1
/* E1B5FC 8018BECC 44054000 */  mfc1        $a1, $ft2
/* E1B600 8018BED0 0C001751 */  jal         Matrix_RotateX
/* E1B604 8018BED4 00000000 */   nop
/* E1B608 8018BED8 8FBE00B8 */  lw          $fp, 0xB8($sp)
/* E1B60C 8018BEDC 0000A025 */  or          $s4, $zero, $zero
/* E1B610 8018BEE0 02409825 */  or          $s3, $s2, $zero
/* E1B614 8018BEE4 1BC00068 */  blez        $fp, .LE16C50_8018C088
/* E1B618 8018BEE8 3C014000 */   lui        $at, (0x40000000 >> 16)
/* E1B61C 8018BEEC 4481B000 */  mtc1        $at, $fs1
/* E1B620 8018BEF0 3C013FC0 */  lui         $at, (0x3FC00000 >> 16)
/* E1B624 8018BEF4 4481A000 */  mtc1        $at, $fs0
/* E1B628 8018BEF8 3C170600 */  lui         $s7, (0x6000000 >> 16)
/* E1B62C 8018BEFC 24162000 */  addiu       $s6, $zero, 0x2000
.LE16C50_8018BF00:
/* E1B630 8018BF00 0C0015C2 */  jal         Matrix_Push
/* E1B634 8018BF04 02A02025 */   or         $a0, $s5, $zero
/* E1B638 8018BF08 0C0015C2 */  jal         Matrix_Push
/* E1B63C 8018BF0C 02002025 */   or         $a0, $s0, $zero
/* E1B640 8018BF10 2401000B */  addiu       $at, $zero, 0xB
/* E1B644 8018BF14 16810021 */  bne         $s4, $at, .LE16C50_8018BF9C
/* E1B648 8018BF18 240F0001 */   addiu      $t7, $zero, 0x1
/* E1B64C 8018BF1C 4405A000 */  mfc1        $a1, $fs0
/* E1B650 8018BF20 4406A000 */  mfc1        $a2, $fs0
/* E1B654 8018BF24 4407A000 */  mfc1        $a3, $fs0
/* E1B658 8018BF28 240D0001 */  addiu       $t5, $zero, 0x1
/* E1B65C 8018BF2C 3C120601 */  lui         $s2, %hi(D_600F1F0)
/* E1B660 8018BF30 2652F1F0 */  addiu       $s2, $s2, %lo(D_600F1F0)
/* E1B664 8018BF34 AFAD0010 */  sw          $t5, 0x10($sp)
/* E1B668 8018BF38 0C00170D */  jal         Matrix_Scale
/* E1B66C 8018BF3C 8E040000 */   lw         $a0, 0x0($s0)
/* E1B670 8018BF40 8EA40000 */  lw          $a0, 0x0($s5)
/* E1B674 8018BF44 8E050000 */  lw          $a1, 0x0($s0)
/* E1B678 8018BF48 0C0015D5 */  jal         Matrix_Mult
/* E1B67C 8018BF4C 24060001 */   addiu      $a2, $zero, 0x1
/* E1B680 8018BF50 0C001BAE */  jal         Matrix_SetGfxMtx
/* E1B684 8018BF54 02202025 */   or         $a0, $s1, $zero
/* E1B688 8018BF58 8E220000 */  lw          $v0, 0x0($s1)
/* E1B68C 8018BF5C 3C18B700 */  lui         $t8, (0xB7000000 >> 16)
/* E1B690 8018BF60 27A50090 */  addiu       $a1, $sp, 0x90
/* E1B694 8018BF64 24590008 */  addiu       $t9, $v0, 0x8
/* E1B698 8018BF68 AE390000 */  sw          $t9, 0x0($s1)
/* E1B69C 8018BF6C AC560004 */  sw          $s6, 0x4($v0)
/* E1B6A0 8018BF70 AC580000 */  sw          $t8, 0x0($v0)
/* E1B6A4 8018BF74 8E220000 */  lw          $v0, 0x0($s1)
/* E1B6A8 8018BF78 244E0008 */  addiu       $t6, $v0, 0x8
/* E1B6AC 8018BF7C AE2E0000 */  sw          $t6, 0x0($s1)
/* E1B6B0 8018BF80 AC520004 */  sw          $s2, 0x4($v0)
/* E1B6B4 8018BF84 AC570000 */  sw          $s7, 0x0($v0)
/* E1B6B8 8018BF88 8E040000 */  lw          $a0, 0x0($s0)
/* E1B6BC 8018BF8C 0C001A5C */  jal         Matrix_MultVec3f
/* E1B6C0 8018BF90 8FA600AC */   lw         $a2, 0xAC($sp)
/* E1B6C4 8018BF94 10000020 */  b           .LE16C50_8018C018
/* E1B6C8 8018BF98 00000000 */   nop
.LE16C50_8018BF9C:
/* E1B6CC 8018BF9C 4405B000 */  mfc1        $a1, $fs1
/* E1B6D0 8018BFA0 4406B000 */  mfc1        $a2, $fs1
/* E1B6D4 8018BFA4 4407B000 */  mfc1        $a3, $fs1
/* E1B6D8 8018BFA8 3C120601 */  lui         $s2, %hi(D_6015EE0)
/* E1B6DC 8018BFAC 26525EE0 */  addiu       $s2, $s2, %lo(D_6015EE0)
/* E1B6E0 8018BFB0 8E040000 */  lw          $a0, 0x0($s0)
/* E1B6E4 8018BFB4 0C00170D */  jal         Matrix_Scale
/* E1B6E8 8018BFB8 AFAF0010 */   sw         $t7, 0x10($sp)
/* E1B6EC 8018BFBC 8EA40000 */  lw          $a0, 0x0($s5)
/* E1B6F0 8018BFC0 8E050000 */  lw          $a1, 0x0($s0)
/* E1B6F4 8018BFC4 0C0015D5 */  jal         Matrix_Mult
/* E1B6F8 8018BFC8 24060001 */   addiu      $a2, $zero, 0x1
/* E1B6FC 8018BFCC 0C001BAE */  jal         Matrix_SetGfxMtx
/* E1B700 8018BFD0 02202025 */   or         $a0, $s1, $zero
/* E1B704 8018BFD4 8E220000 */  lw          $v0, 0x0($s1)
/* E1B708 8018BFD8 3C09B600 */  lui         $t1, (0xB6000000 >> 16)
/* E1B70C 8018BFDC 2401000C */  addiu       $at, $zero, 0xC
/* E1B710 8018BFE0 24480008 */  addiu       $t0, $v0, 0x8
/* E1B714 8018BFE4 AE280000 */  sw          $t0, 0x0($s1)
/* E1B718 8018BFE8 AC560004 */  sw          $s6, 0x4($v0)
/* E1B71C 8018BFEC AC490000 */  sw          $t1, 0x0($v0)
/* E1B720 8018BFF0 8E220000 */  lw          $v0, 0x0($s1)
/* E1B724 8018BFF4 27A50090 */  addiu       $a1, $sp, 0x90
/* E1B728 8018BFF8 244A0008 */  addiu       $t2, $v0, 0x8
/* E1B72C 8018BFFC AE2A0000 */  sw          $t2, 0x0($s1)
/* E1B730 8018C000 AC520004 */  sw          $s2, 0x4($v0)
/* E1B734 8018C004 AC570000 */  sw          $s7, 0x0($v0)
/* E1B738 8018C008 13C10003 */  beq         $fp, $at, .LE16C50_8018C018
/* E1B73C 8018C00C 8FA600AC */   lw         $a2, 0xAC($sp)
/* E1B740 8018C010 0C001A5C */  jal         Matrix_MultVec3f
/* E1B744 8018C014 8E040000 */   lw         $a0, 0x0($s0)
.LE16C50_8018C018:
/* E1B748 8018C018 0C0015D0 */  jal         Matrix_Pop
/* E1B74C 8018C01C 02A02025 */   or         $a0, $s5, $zero
/* E1B750 8018C020 0C0015D0 */  jal         Matrix_Pop
/* E1B754 8018C024 02002025 */   or         $a0, $s0, $zero
/* E1B758 8018C028 C66A0004 */  lwc1        $ft3, 0x4($s3)
/* E1B75C 8018C02C 8E040000 */  lw          $a0, 0x0($s0)
/* E1B760 8018C030 24060001 */  addiu       $a2, $zero, 0x1
/* E1B764 8018C034 46185402 */  mul.s       $ft4, $ft3, $fs2
/* E1B768 8018C038 44058000 */  mfc1        $a1, $ft4
/* E1B76C 8018C03C 0C0017A4 */  jal         Matrix_RotateY
/* E1B770 8018C040 00000000 */   nop
/* E1B774 8018C044 C6720000 */  lwc1        $ft5, 0x0($s3)
/* E1B778 8018C048 8E040000 */  lw          $a0, 0x0($s0)
/* E1B77C 8018C04C 24060001 */  addiu       $a2, $zero, 0x1
/* E1B780 8018C050 46189102 */  mul.s       $ft0, $ft5, $fs2
/* E1B784 8018C054 44052000 */  mfc1        $a1, $ft0
/* E1B788 8018C058 0C001751 */  jal         Matrix_RotateX
/* E1B78C 8018C05C 00000000 */   nop
/* E1B790 8018C060 4405D000 */  mfc1        $a1, $fs3
/* E1B794 8018C064 4406D000 */  mfc1        $a2, $fs3
/* E1B798 8018C068 240B0001 */  addiu       $t3, $zero, 0x1
/* E1B79C 8018C06C AFAB0010 */  sw          $t3, 0x10($sp)
/* E1B7A0 8018C070 8E040000 */  lw          $a0, 0x0($s0)
/* E1B7A4 8018C074 0C0016C0 */  jal         Matrix_Translate
/* E1B7A8 8018C078 8FA700B4 */   lw         $a3, 0xB4($sp)
/* E1B7AC 8018C07C 26940001 */  addiu       $s4, $s4, 0x1
/* E1B7B0 8018C080 169EFF9F */  bne         $s4, $fp, .LE16C50_8018BF00
/* E1B7B4 8018C084 2673000C */   addiu      $s3, $s3, 0xC
.LE16C50_8018C088:
/* E1B7B8 8018C088 0C0015D0 */  jal         Matrix_Pop
/* E1B7BC 8018C08C 02A02025 */   or         $a0, $s5, $zero
/* E1B7C0 8018C090 8FBF0064 */  lw          $ra, 0x64($sp)
.LE16C50_8018C094:
/* E1B7C4 8018C094 D7B40020 */  ldc1        $fs0, 0x20($sp)
/* E1B7C8 8018C098 D7B60028 */  ldc1        $fs1, 0x28($sp)
/* E1B7CC 8018C09C D7B80030 */  ldc1        $fs2, 0x30($sp)
/* E1B7D0 8018C0A0 D7BA0038 */  ldc1        $fs3, 0x38($sp)
/* E1B7D4 8018C0A4 8FB00040 */  lw          $s0, 0x40($sp)
/* E1B7D8 8018C0A8 8FB10044 */  lw          $s1, 0x44($sp)
/* E1B7DC 8018C0AC 8FB20048 */  lw          $s2, 0x48($sp)
/* E1B7E0 8018C0B0 8FB3004C */  lw          $s3, 0x4C($sp)
/* E1B7E4 8018C0B4 8FB40050 */  lw          $s4, 0x50($sp)
/* E1B7E8 8018C0B8 8FB50054 */  lw          $s5, 0x54($sp)
/* E1B7EC 8018C0BC 8FB60058 */  lw          $s6, 0x58($sp)
/* E1B7F0 8018C0C0 8FB7005C */  lw          $s7, 0x5C($sp)
/* E1B7F4 8018C0C4 8FBE0060 */  lw          $fp, 0x60($sp)
/* E1B7F8 8018C0C8 03E00008 */  jr          $ra
/* E1B7FC 8018C0CC 27BD00A0 */   addiu      $sp, $sp, 0xA0
.section .late_rodata
dlabel D_E16C50_801C0A90
/* E501C0 801C0A90 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0A94
/* E501C4 801C0A94 3F333333 */ .float 0.6999999881


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8018C0D0
/* E1B800 8018C0D0 27BDFF40 */  addiu       $sp, $sp, -0xC0
/* E1B804 8018C0D4 F7B80030 */  sdc1        $fs2, 0x30($sp)
/* E1B808 8018C0D8 F7B40020 */  sdc1        $fs0, 0x20($sp)
/* E1B80C 8018C0DC 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E1B810 8018C0E0 AFB20058 */  sw          $s2, 0x58($sp)
/* E1B814 8018C0E4 44811000 */  mtc1        $at, $fv1
/* E1B818 8018C0E8 4485A000 */  mtc1        $a1, $fs0
/* E1B81C 8018C0EC 4487C000 */  mtc1        $a3, $fs2
/* E1B820 8018C0F0 00809025 */  or          $s2, $a0, $zero
/* E1B824 8018C0F4 AFBF0074 */  sw          $ra, 0x74($sp)
/* E1B828 8018C0F8 AFBE0070 */  sw          $fp, 0x70($sp)
/* E1B82C 8018C0FC AFB7006C */  sw          $s7, 0x6C($sp)
/* E1B830 8018C100 AFB60068 */  sw          $s6, 0x68($sp)
/* E1B834 8018C104 AFB50064 */  sw          $s5, 0x64($sp)
/* E1B838 8018C108 AFB40060 */  sw          $s4, 0x60($sp)
/* E1B83C 8018C10C AFB3005C */  sw          $s3, 0x5C($sp)
/* E1B840 8018C110 AFB10054 */  sw          $s1, 0x54($sp)
/* E1B844 8018C114 AFB00050 */  sw          $s0, 0x50($sp)
/* E1B848 8018C118 F7BE0048 */  sdc1        $fs5, 0x48($sp)
/* E1B84C 8018C11C F7BC0040 */  sdc1        $fs4, 0x40($sp)
/* E1B850 8018C120 F7BA0038 */  sdc1        $fs3, 0x38($sp)
/* E1B854 8018C124 F7B60028 */  sdc1        $fs1, 0x28($sp)
/* E1B858 8018C128 AFA600C8 */  sw          $a2, 0xC8($sp)
/* E1B85C 8018C12C 3C0F801C */  lui         $t7, %hi(D_E16C50_801BF4D0)
/* E1B860 8018C130 25EFF4D0 */  addiu       $t7, $t7, %lo(D_E16C50_801BF4D0)
/* E1B864 8018C134 8DE10000 */  lw          $at, 0x0($t7)
/* E1B868 8018C138 27AE00B0 */  addiu       $t6, $sp, 0xB0
/* E1B86C 8018C13C 8DE90004 */  lw          $t1, 0x4($t7)
/* E1B870 8018C140 ADC10000 */  sw          $at, 0x0($t6)
/* E1B874 8018C144 8DE10008 */  lw          $at, 0x8($t7)
/* E1B878 8018C148 3C0A8017 */  lui         $t2, %hi(gFrameCount)
/* E1B87C 8018C14C ADC90004 */  sw          $t1, 0x4($t6)
/* E1B880 8018C150 ADC10008 */  sw          $at, 0x8($t6)
/* E1B884 8018C154 8D4A7DB0 */  lw          $t2, %lo(gFrameCount)($t2)
/* E1B888 8018C158 3C168014 */  lui         $s6, %hi(gGfxMatrix)
/* E1B88C 8018C15C 46001686 */  mov.s       $fs3, $fv1
/* E1B890 8018C160 314B0001 */  andi        $t3, $t2, 0x1
/* E1B894 8018C164 15600004 */  bnez        $t3, .LE16C50_8018C178
/* E1B898 8018C168 26D6B3C0 */   addiu      $s6, $s6, %lo(gGfxMatrix)
/* E1B89C 8018C16C 4480B000 */  mtc1        $zero, $fs1
/* E1B8A0 8018C170 1000000A */  b           .LE16C50_8018C19C
/* E1B8A4 8018C174 E7B600AC */   swc1       $fs1, 0xAC($sp)
.LE16C50_8018C178:
/* E1B8A8 8018C178 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E1B8AC 8018C17C 44812000 */  mtc1        $at, $ft0
/* E1B8B0 8018C180 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E1B8B4 8018C184 44813000 */  mtc1        $at, $ft1
/* E1B8B8 8018C188 4480B000 */  mtc1        $zero, $fs1
/* E1B8BC 8018C18C E7A400AC */  swc1        $ft0, 0xAC($sp)
/* E1B8C0 8018C190 46061003 */  div.s       $fv0, $fv1, $ft1
/* E1B8C4 8018C194 46000200 */  add.s       $ft2, $fv0, $fv0
/* E1B8C8 8018C198 46081681 */  sub.s       $fs3, $fv1, $ft2
.LE16C50_8018C19C:
/* E1B8CC 8018C19C 0C0015C2 */  jal         Matrix_Push
/* E1B8D0 8018C1A0 02C02025 */   or         $a0, $s6, $zero
/* E1B8D4 8018C1A4 3C118014 */  lui         $s1, %hi(gCalcMatrix)
/* E1B8D8 8018C1A8 2631BBC8 */  addiu       $s1, $s1, %lo(gCalcMatrix)
/* E1B8DC 8018C1AC 0C0015C2 */  jal         Matrix_Push
/* E1B8E0 8018C1B0 02202025 */   or         $a0, $s1, $zero
/* E1B8E4 8018C1B4 3C05800C */  lui         $a1, %hi(gIdentityMatrix)
/* E1B8E8 8018C1B8 24A54660 */  addiu       $a1, $a1, %lo(gIdentityMatrix)
/* E1B8EC 8018C1BC 0C0015A0 */  jal         Matrix_Copy
/* E1B8F0 8018C1C0 8E240000 */   lw         $a0, 0x0($s1)
/* E1B8F4 8018C1C4 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* E1B8F8 8018C1C8 3C01801C */  lui         $at, %hi(D_E16C50_801C0A90)
/* E1B8FC 8018C1CC C43E0A90 */  lwc1        $fs5, %lo(D_E16C50_801C0A90)($at)
/* E1B900 8018C1D0 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* E1B904 8018C1D4 8E020000 */  lw          $v0, 0x0($s0)
/* E1B908 8018C1D8 3C0DB600 */  lui         $t5, (0xB6000000 >> 16)
/* E1B90C 8018C1DC 24192000 */  addiu       $t9, $zero, 0x2000
/* E1B910 8018C1E0 244C0008 */  addiu       $t4, $v0, 0x8
/* E1B914 8018C1E4 AE0C0000 */  sw          $t4, 0x0($s0)
/* E1B918 8018C1E8 AC590004 */  sw          $t9, 0x4($v0)
/* E1B91C 8018C1EC AC4D0000 */  sw          $t5, 0x0($v0)
/* E1B920 8018C1F0 3C01801C */  lui         $at, %hi(D_E16C50_801C22F0 + 0x34)
/* E1B924 8018C1F4 C42A2324 */  lwc1        $ft3, %lo(D_E16C50_801C22F0 + 0x34)($at)
/* E1B928 8018C1F8 8E240000 */  lw          $a0, 0x0($s1)
/* E1B92C 8018C1FC 24060001 */  addiu       $a2, $zero, 0x1
/* E1B930 8018C200 46145400 */  add.s       $ft4, $ft3, $fs0
/* E1B934 8018C204 461E8482 */  mul.s       $ft5, $ft4, $fs5
/* E1B938 8018C208 44059000 */  mfc1        $a1, $ft5
/* E1B93C 8018C20C 0C0017F8 */  jal         Matrix_RotateZ
/* E1B940 8018C210 00000000 */   nop
/* E1B944 8018C214 4405B000 */  mfc1        $a1, $fs1
/* E1B948 8018C218 24180001 */  addiu       $t8, $zero, 0x1
/* E1B94C 8018C21C AFB80010 */  sw          $t8, 0x10($sp)
/* E1B950 8018C220 8E240000 */  lw          $a0, 0x0($s1)
/* E1B954 8018C224 3C06C3B4 */  lui         $a2, (0xC3B40000 >> 16)
/* E1B958 8018C228 0C0016C0 */  jal         Matrix_Translate
/* E1B95C 8018C22C 3C0742F0 */   lui        $a3, (0x42F00000 >> 16)
/* E1B960 8018C230 3C0142B4 */  lui         $at, (0x42B40000 >> 16)
/* E1B964 8018C234 44812000 */  mtc1        $at, $ft0
/* E1B968 8018C238 8E240000 */  lw          $a0, 0x0($s1)
/* E1B96C 8018C23C 24060001 */  addiu       $a2, $zero, 0x1
/* E1B970 8018C240 46182701 */  sub.s       $fs4, $ft0, $fs2
/* E1B974 8018C244 4600E187 */  neg.s       $ft1, $fs4
/* E1B978 8018C248 461E3202 */  mul.s       $ft2, $ft1, $fs5
/* E1B97C 8018C24C 44054000 */  mfc1        $a1, $ft2
/* E1B980 8018C250 0C001751 */  jal         Matrix_RotateX
/* E1B984 8018C254 00000000 */   nop
/* E1B988 8018C258 3C01801C */  lui         $at, %hi(D_E16C50_801C0A94)
/* E1B98C 8018C25C C4200A94 */  lwc1        $fv0, %lo(D_E16C50_801C0A94)($at)
/* E1B990 8018C260 240E0001 */  addiu       $t6, $zero, 0x1
/* E1B994 8018C264 AFAE0010 */  sw          $t6, 0x10($sp)
/* E1B998 8018C268 44050000 */  mfc1        $a1, $fv0
/* E1B99C 8018C26C 44060000 */  mfc1        $a2, $fv0
/* E1B9A0 8018C270 44070000 */  mfc1        $a3, $fv0
/* E1B9A4 8018C274 0C00170D */  jal         Matrix_Scale
/* E1B9A8 8018C278 8E240000 */   lw         $a0, 0x0($s1)
/* E1B9AC 8018C27C 0C001BAE */  jal         Matrix_SetGfxMtx
/* E1B9B0 8018C280 02002025 */   or         $a0, $s0, $zero
/* E1B9B4 8018C284 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1B9B8 8018C288 4481C000 */  mtc1        $at, $fs2
/* E1B9BC 8018C28C 0000A025 */  or          $s4, $zero, $zero
/* E1B9C0 8018C290 0240A825 */  or          $s5, $s2, $zero
/* E1B9C4 8018C294 3C1E0600 */  lui         $fp, (0x6000000 >> 16)
/* E1B9C8 8018C298 3C17FA00 */  lui         $s7, (0xFA000000 >> 16)
.LE16C50_8018C29C:
/* E1B9CC 8018C29C 0C0015C2 */  jal         Matrix_Push
/* E1B9D0 8018C2A0 02C02025 */   or         $a0, $s6, $zero
/* E1B9D4 8018C2A4 0C0015C2 */  jal         Matrix_Push
/* E1B9D8 8018C2A8 02202025 */   or         $a0, $s1, $zero
/* E1B9DC 8018C2AC 24010010 */  addiu       $at, $zero, 0x10
/* E1B9E0 8018C2B0 1681004B */  bne         $s4, $at, .LE16C50_8018C3E0
/* E1B9E4 8018C2B4 02002025 */   or         $a0, $s0, $zero
/* E1B9E8 8018C2B8 8FAF00D0 */  lw          $t7, 0xD0($sp)
/* E1B9EC 8018C2BC 3C0A801C */  lui         $t2, %hi(D_E16C50_801C22F0)
/* E1B9F0 8018C2C0 254A22F0 */  addiu       $t2, $t2, %lo(D_E16C50_801C22F0)
/* E1B9F4 8018C2C4 3C053FB2 */  lui         $a1, (0x3FB2B8C2 >> 16)
/* E1B9F8 8018C2C8 461EE502 */  mul.s       $fs0, $fs4, $fs5
/* E1B9FC 8018C2CC 3C130102 */  lui         $s3, %hi(D_1024AC0)
/* E1BA00 8018C2D0 000F4880 */  sll         $t1, $t7, 2
/* E1BA04 8018C2D4 012A9021 */  addu        $s2, $t1, $t2
/* E1BA08 8018C2D8 26734AC0 */  addiu       $s3, $s3, %lo(D_1024AC0)
/* E1BA0C 8018C2DC 34A5B8C2 */  ori         $a1, $a1, (0x3FB2B8C2 & 0xFFFF)
/* E1BA10 8018C2E0 8E240000 */  lw          $a0, 0x0($s1)
/* E1BA14 8018C2E4 0C001751 */  jal         Matrix_RotateX
/* E1BA18 8018C2E8 24060001 */   addiu      $a2, $zero, 0x1
/* E1BA1C 8018C2EC 4405A000 */  mfc1        $a1, $fs0
/* E1BA20 8018C2F0 8E240000 */  lw          $a0, 0x0($s1)
/* E1BA24 8018C2F4 0C001751 */  jal         Matrix_RotateX
/* E1BA28 8018C2F8 24060001 */   addiu      $a2, $zero, 0x1
/* E1BA2C 8018C2FC 4405D000 */  mfc1        $a1, $fs3
/* E1BA30 8018C300 4406D000 */  mfc1        $a2, $fs3
/* E1BA34 8018C304 4407C000 */  mfc1        $a3, $fs2
/* E1BA38 8018C308 240B0001 */  addiu       $t3, $zero, 0x1
/* E1BA3C 8018C30C AFAB0010 */  sw          $t3, 0x10($sp)
/* E1BA40 8018C310 0C00170D */  jal         Matrix_Scale
/* E1BA44 8018C314 8E240000 */   lw         $a0, 0x0($s1)
/* E1BA48 8018C318 8EC40000 */  lw          $a0, 0x0($s6)
/* E1BA4C 8018C31C 8E250000 */  lw          $a1, 0x0($s1)
/* E1BA50 8018C320 0C0015D5 */  jal         Matrix_Mult
/* E1BA54 8018C324 24060001 */   addiu      $a2, $zero, 0x1
/* E1BA58 8018C328 0C001BAE */  jal         Matrix_SetGfxMtx
/* E1BA5C 8018C32C 02002025 */   or         $a0, $s0, $zero
/* E1BA60 8018C330 02002025 */  or          $a0, $s0, $zero
/* E1BA64 8018C334 0C02E374 */  jal         RCP_SetupDL
/* E1BA68 8018C338 24050031 */   addiu      $a1, $zero, 0x31
/* E1BA6C 8018C33C 8E020000 */  lw          $v0, 0x0($s0)
/* E1BA70 8018C340 3C0DFF00 */  lui         $t5, (0xFF0000FF >> 16)
/* E1BA74 8018C344 27A500B0 */  addiu       $a1, $sp, 0xB0
/* E1BA78 8018C348 244C0008 */  addiu       $t4, $v0, 0x8
/* E1BA7C 8018C34C AE0C0000 */  sw          $t4, 0x0($s0)
/* E1BA80 8018C350 AC570000 */  sw          $s7, 0x0($v0)
/* E1BA84 8018C354 C64A0018 */  lwc1        $ft3, 0x18($s2)
/* E1BA88 8018C358 C646000C */  lwc1        $ft1, 0xC($s2)
/* E1BA8C 8018C35C C6520000 */  lwc1        $ft5, 0x0($s2)
/* E1BA90 8018C360 4600540D */  trunc.w.s   $ft4, $ft3
/* E1BA94 8018C364 4600320D */  trunc.w.s   $ft2, $ft1
/* E1BA98 8018C368 44198000 */  mfc1        $t9, $ft4
/* E1BA9C 8018C36C 4600910D */  trunc.w.s   $ft0, $ft5
/* E1BAA0 8018C370 333800FF */  andi        $t8, $t9, 0xFF
/* E1BAA4 8018C374 44194000 */  mfc1        $t9, $ft2
/* E1BAA8 8018C378 00187200 */  sll         $t6, $t8, 8
/* E1BAAC 8018C37C 440A2000 */  mfc1        $t2, $ft0
/* E1BAB0 8018C380 333800FF */  andi        $t8, $t9, 0xFF
/* E1BAB4 8018C384 00187C00 */  sll         $t7, $t8, 16
/* E1BAB8 8018C388 000A5E00 */  sll         $t3, $t2, 24
/* E1BABC 8018C38C 01CB6025 */  or          $t4, $t6, $t3
/* E1BAC0 8018C390 018F4825 */  or          $t1, $t4, $t7
/* E1BAC4 8018C394 352A00FF */  ori         $t2, $t1, 0xFF
/* E1BAC8 8018C398 AC4A0004 */  sw          $t2, 0x4($v0)
/* E1BACC 8018C39C 8E020000 */  lw          $v0, 0x0($s0)
/* E1BAD0 8018C3A0 3C0BFB00 */  lui         $t3, (0xFB000000 >> 16)
/* E1BAD4 8018C3A4 35AD00FF */  ori         $t5, $t5, (0xFF0000FF & 0xFFFF)
/* E1BAD8 8018C3A8 244E0008 */  addiu       $t6, $v0, 0x8
/* E1BADC 8018C3AC AE0E0000 */  sw          $t6, 0x0($s0)
/* E1BAE0 8018C3B0 AC4D0004 */  sw          $t5, 0x4($v0)
/* E1BAE4 8018C3B4 AC4B0000 */  sw          $t3, 0x0($v0)
/* E1BAE8 8018C3B8 8E020000 */  lw          $v0, 0x0($s0)
/* E1BAEC 8018C3BC 24590008 */  addiu       $t9, $v0, 0x8
/* E1BAF0 8018C3C0 AE190000 */  sw          $t9, 0x0($s0)
/* E1BAF4 8018C3C4 AC530004 */  sw          $s3, 0x4($v0)
/* E1BAF8 8018C3C8 AC5E0000 */  sw          $fp, 0x0($v0)
/* E1BAFC 8018C3CC 8E240000 */  lw          $a0, 0x0($s1)
/* E1BB00 8018C3D0 0C001A5C */  jal         Matrix_MultVec3f
/* E1BB04 8018C3D4 8FA600C8 */   lw         $a2, 0xC8($sp)
/* E1BB08 8018C3D8 1000002B */  b           .LE16C50_8018C488
/* E1BB0C 8018C3DC 00000000 */   nop
.LE16C50_8018C3E0:
/* E1BB10 8018C3E0 C7AA00AC */  lwc1        $ft3, 0xAC($sp)
/* E1BB14 8018C3E4 3C120103 */  lui         $s2, %hi(D_102F5E0)
/* E1BB18 8018C3E8 2652F5E0 */  addiu       $s2, $s2, %lo(D_102F5E0)
/* E1BB1C 8018C3EC 460AF502 */  mul.s       $fs0, $fs5, $ft3
/* E1BB20 8018C3F0 0C02E374 */  jal         RCP_SetupDL
/* E1BB24 8018C3F4 2405002F */   addiu      $a1, $zero, 0x2F
/* E1BB28 8018C3F8 8E020000 */  lw          $v0, 0x0($s0)
/* E1BB2C 8018C3FC 3C0CFF40 */  lui         $t4, (0xFF4040C0 >> 16)
/* E1BB30 8018C400 358C40C0 */  ori         $t4, $t4, (0xFF4040C0 & 0xFFFF)
/* E1BB34 8018C404 24580008 */  addiu       $t8, $v0, 0x8
/* E1BB38 8018C408 AE180000 */  sw          $t8, 0x0($s0)
/* E1BB3C 8018C40C AC4C0004 */  sw          $t4, 0x4($v0)
/* E1BB40 8018C410 AC570000 */  sw          $s7, 0x0($v0)
/* E1BB44 8018C414 4405B000 */  mfc1        $a1, $fs1
/* E1BB48 8018C418 4407B000 */  mfc1        $a3, $fs1
/* E1BB4C 8018C41C 240F0001 */  addiu       $t7, $zero, 0x1
/* E1BB50 8018C420 AFAF0010 */  sw          $t7, 0x10($sp)
/* E1BB54 8018C424 8E240000 */  lw          $a0, 0x0($s1)
/* E1BB58 8018C428 0C0016C0 */  jal         Matrix_Translate
/* E1BB5C 8018C42C 3C06C270 */   lui        $a2, (0xC2700000 >> 16)
/* E1BB60 8018C430 4407C000 */  mfc1        $a3, $fs2
/* E1BB64 8018C434 24090001 */  addiu       $t1, $zero, 0x1
/* E1BB68 8018C438 AFA90010 */  sw          $t1, 0x10($sp)
/* E1BB6C 8018C43C 8E240000 */  lw          $a0, 0x0($s1)
/* E1BB70 8018C440 3C054000 */  lui         $a1, (0x40000000 >> 16)
/* E1BB74 8018C444 0C00170D */  jal         Matrix_Scale
/* E1BB78 8018C448 3C064040 */   lui        $a2, (0x40400000 >> 16)
/* E1BB7C 8018C44C 4405A000 */  mfc1        $a1, $fs0
/* E1BB80 8018C450 8E240000 */  lw          $a0, 0x0($s1)
/* E1BB84 8018C454 0C0017A4 */  jal         Matrix_RotateY
/* E1BB88 8018C458 24060001 */   addiu      $a2, $zero, 0x1
/* E1BB8C 8018C45C 8EC40000 */  lw          $a0, 0x0($s6)
/* E1BB90 8018C460 8E250000 */  lw          $a1, 0x0($s1)
/* E1BB94 8018C464 0C0015D5 */  jal         Matrix_Mult
/* E1BB98 8018C468 24060001 */   addiu      $a2, $zero, 0x1
/* E1BB9C 8018C46C 0C001BAE */  jal         Matrix_SetGfxMtx
/* E1BBA0 8018C470 02002025 */   or         $a0, $s0, $zero
/* E1BBA4 8018C474 8E020000 */  lw          $v0, 0x0($s0)
/* E1BBA8 8018C478 244A0008 */  addiu       $t2, $v0, 0x8
/* E1BBAC 8018C47C AE0A0000 */  sw          $t2, 0x0($s0)
/* E1BBB0 8018C480 AC520004 */  sw          $s2, 0x4($v0)
/* E1BBB4 8018C484 AC5E0000 */  sw          $fp, 0x0($v0)
.LE16C50_8018C488:
/* E1BBB8 8018C488 0C0015D0 */  jal         Matrix_Pop
/* E1BBBC 8018C48C 02202025 */   or         $a0, $s1, $zero
/* E1BBC0 8018C490 0C0015D0 */  jal         Matrix_Pop
/* E1BBC4 8018C494 02C02025 */   or         $a0, $s6, $zero
/* E1BBC8 8018C498 4405B000 */  mfc1        $a1, $fs1
/* E1BBCC 8018C49C 4407B000 */  mfc1        $a3, $fs1
/* E1BBD0 8018C4A0 240E0001 */  addiu       $t6, $zero, 0x1
/* E1BBD4 8018C4A4 AFAE0010 */  sw          $t6, 0x10($sp)
/* E1BBD8 8018C4A8 8E240000 */  lw          $a0, 0x0($s1)
/* E1BBDC 8018C4AC 0C0016C0 */  jal         Matrix_Translate
/* E1BBE0 8018C4B0 3C06C2F0 */   lui        $a2, (0xC2F00000 >> 16)
/* E1BBE4 8018C4B4 3C05BEB2 */  lui         $a1, (0xBEB2B8C2 >> 16)
/* E1BBE8 8018C4B8 34A5B8C2 */  ori         $a1, $a1, (0xBEB2B8C2 & 0xFFFF)
/* E1BBEC 8018C4BC 8E240000 */  lw          $a0, 0x0($s1)
/* E1BBF0 8018C4C0 0C001751 */  jal         Matrix_RotateX
/* E1BBF4 8018C4C4 24060001 */   addiu      $a2, $zero, 0x1
/* E1BBF8 8018C4C8 C6B00000 */  lwc1        $ft4, 0x0($s5)
/* E1BBFC 8018C4CC 8E240000 */  lw          $a0, 0x0($s1)
/* E1BC00 8018C4D0 24060001 */  addiu       $a2, $zero, 0x1
/* E1BC04 8018C4D4 461E8482 */  mul.s       $ft5, $ft4, $fs5
/* E1BC08 8018C4D8 44059000 */  mfc1        $a1, $ft5
/* E1BC0C 8018C4DC 0C0017F8 */  jal         Matrix_RotateZ
/* E1BC10 8018C4E0 00000000 */   nop
/* E1BC14 8018C4E4 26940004 */  addiu       $s4, $s4, 0x4
/* E1BC18 8018C4E8 24010014 */  addiu       $at, $zero, 0x14
/* E1BC1C 8018C4EC 1681FF6B */  bne         $s4, $at, .LE16C50_8018C29C
/* E1BC20 8018C4F0 26B50004 */   addiu      $s5, $s5, 0x4
/* E1BC24 8018C4F4 0C0015D0 */  jal         Matrix_Pop
/* E1BC28 8018C4F8 02202025 */   or         $a0, $s1, $zero
/* E1BC2C 8018C4FC 0C0015D0 */  jal         Matrix_Pop
/* E1BC30 8018C500 02C02025 */   or         $a0, $s6, $zero
/* E1BC34 8018C504 8FBF0074 */  lw          $ra, 0x74($sp)
/* E1BC38 8018C508 D7B40020 */  ldc1        $fs0, 0x20($sp)
/* E1BC3C 8018C50C D7B60028 */  ldc1        $fs1, 0x28($sp)
/* E1BC40 8018C510 D7B80030 */  ldc1        $fs2, 0x30($sp)
/* E1BC44 8018C514 D7BA0038 */  ldc1        $fs3, 0x38($sp)
/* E1BC48 8018C518 D7BC0040 */  ldc1        $fs4, 0x40($sp)
/* E1BC4C 8018C51C D7BE0048 */  ldc1        $fs5, 0x48($sp)
/* E1BC50 8018C520 8FB00050 */  lw          $s0, 0x50($sp)
/* E1BC54 8018C524 8FB10054 */  lw          $s1, 0x54($sp)
/* E1BC58 8018C528 8FB20058 */  lw          $s2, 0x58($sp)
/* E1BC5C 8018C52C 8FB3005C */  lw          $s3, 0x5C($sp)
/* E1BC60 8018C530 8FB40060 */  lw          $s4, 0x60($sp)
/* E1BC64 8018C534 8FB50064 */  lw          $s5, 0x64($sp)
/* E1BC68 8018C538 8FB60068 */  lw          $s6, 0x68($sp)
/* E1BC6C 8018C53C 8FB7006C */  lw          $s7, 0x6C($sp)
/* E1BC70 8018C540 8FBE0070 */  lw          $fp, 0x70($sp)
/* E1BC74 8018C544 03E00008 */  jr          $ra
/* E1BC78 8018C548 27BD00C0 */   addiu      $sp, $sp, 0xC0
.section .late_rodata
dlabel D_E16C50_801C0A98
/* E501C8 801C0A98 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0A9C
/* E501CC 801C0A9C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0AA0
/* E501D0 801C0AA0 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0AA4
/* E501D4 801C0AA4 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0AA8
/* E501D8 801C0AA8 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0AAC
/* E501DC 801C0AAC 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0AB0
/* E501E0 801C0AB0 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0AB4
/* E501E4 801C0AB4 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0AB8
/* E501E8 801C0AB8 3FD9999A */ .float 1.700000048


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8018C54C
/* E1BC7C 8018C54C 27BDFDC8 */  addiu       $sp, $sp, -0x238
/* E1BC80 8018C550 AFBF005C */  sw          $ra, 0x5C($sp)
/* E1BC84 8018C554 AFBE0058 */  sw          $fp, 0x58($sp)
/* E1BC88 8018C558 AFB70054 */  sw          $s7, 0x54($sp)
/* E1BC8C 8018C55C AFB60050 */  sw          $s6, 0x50($sp)
/* E1BC90 8018C560 AFB5004C */  sw          $s5, 0x4C($sp)
/* E1BC94 8018C564 AFB40048 */  sw          $s4, 0x48($sp)
/* E1BC98 8018C568 AFB30044 */  sw          $s3, 0x44($sp)
/* E1BC9C 8018C56C AFB20040 */  sw          $s2, 0x40($sp)
/* E1BCA0 8018C570 AFB1003C */  sw          $s1, 0x3C($sp)
/* E1BCA4 8018C574 AFB00038 */  sw          $s0, 0x38($sp)
/* E1BCA8 8018C578 F7B60030 */  sdc1        $fs1, 0x30($sp)
/* E1BCAC 8018C57C F7B40028 */  sdc1        $fs0, 0x28($sp)
/* E1BCB0 8018C580 AFA40238 */  sw          $a0, 0x238($sp)
/* E1BCB4 8018C584 8FAE0238 */  lw          $t6, 0x238($sp)
/* E1BCB8 8018C588 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* E1BCBC 8018C58C 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* E1BCC0 8018C590 85CF004E */  lh          $t7, 0x4E($t6)
/* E1BCC4 8018C594 02002025 */  or          $a0, $s0, $zero
/* E1BCC8 8018C598 15E0003A */  bnez        $t7, .LE16C50_8018C684
/* E1BCCC 8018C59C 00000000 */   nop
/* E1BCD0 8018C5A0 0C02E374 */  jal         RCP_SetupDL
/* E1BCD4 8018C5A4 24050031 */   addiu      $a1, $zero, 0x31
/* E1BCD8 8018C5A8 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E1BCDC 8018C5AC 3C118014 */  lui         $s1, %hi(gGfxMatrix)
/* E1BCE0 8018C5B0 44810000 */  mtc1        $at, $fv0
/* E1BCE4 8018C5B4 2631B3C0 */  addiu       $s1, $s1, %lo(gGfxMatrix)
/* E1BCE8 8018C5B8 8E020000 */  lw          $v0, 0x0($s0)
/* E1BCEC 8018C5BC 3C19FA00 */  lui         $t9, (0xFA000000 >> 16)
/* E1BCF0 8018C5C0 3C01801C */  lui         $at, %hi(D_E16C50_801C22F0 + 0x24)
/* E1BCF4 8018C5C4 24580008 */  addiu       $t8, $v0, 0x8
/* E1BCF8 8018C5C8 AE180000 */  sw          $t8, 0x0($s0)
/* E1BCFC 8018C5CC AC590000 */  sw          $t9, 0x0($v0)
/* E1BD00 8018C5D0 C4242314 */  lwc1        $ft0, %lo(D_E16C50_801C22F0 + 0x24)($at)
/* E1BD04 8018C5D4 2401FF00 */  addiu       $at, $zero, -0x100
/* E1BD08 8018C5D8 44050000 */  mfc1        $a1, $fv0
/* E1BD0C 8018C5DC 4600218D */  trunc.w.s   $ft1, $ft0
/* E1BD10 8018C5E0 44060000 */  mfc1        $a2, $fv0
/* E1BD14 8018C5E4 44070000 */  mfc1        $a3, $fv0
/* E1BD18 8018C5E8 440F3000 */  mfc1        $t7, $ft1
/* E1BD1C 8018C5EC 00000000 */  nop
/* E1BD20 8018C5F0 31F800FF */  andi        $t8, $t7, 0xFF
/* E1BD24 8018C5F4 0301C825 */  or          $t9, $t8, $at
/* E1BD28 8018C5F8 AC590004 */  sw          $t9, 0x4($v0)
/* E1BD2C 8018C5FC 8E020000 */  lw          $v0, 0x0($s0)
/* E1BD30 8018C600 3C18FFFF */  lui         $t8, (0xFFFF00FF >> 16)
/* E1BD34 8018C604 371800FF */  ori         $t8, $t8, (0xFFFF00FF & 0xFFFF)
/* E1BD38 8018C608 244E0008 */  addiu       $t6, $v0, 0x8
/* E1BD3C 8018C60C AE0E0000 */  sw          $t6, 0x0($s0)
/* E1BD40 8018C610 3C0FFB00 */  lui         $t7, (0xFB000000 >> 16)
/* E1BD44 8018C614 AC4F0000 */  sw          $t7, 0x0($v0)
/* E1BD48 8018C618 AC580004 */  sw          $t8, 0x4($v0)
/* E1BD4C 8018C61C 24190001 */  addiu       $t9, $zero, 0x1
/* E1BD50 8018C620 AFB90010 */  sw          $t9, 0x10($sp)
/* E1BD54 8018C624 0C00170D */  jal         Matrix_Scale
/* E1BD58 8018C628 8E240000 */   lw         $a0, 0x0($s1)
/* E1BD5C 8018C62C 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1BD60 8018C630 3C01801C */  lui         $at, %hi(D_E16C50_801C0A98)
/* E1BD64 8018C634 C42A0A98 */  lwc1        $ft3, %lo(D_E16C50_801C0A98)($at)
/* E1BD68 8018C638 C5A8015C */  lwc1        $ft2, 0x15C($t5)
/* E1BD6C 8018C63C 8E240000 */  lw          $a0, 0x0($s1)
/* E1BD70 8018C640 24060001 */  addiu       $a2, $zero, 0x1
/* E1BD74 8018C644 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E1BD78 8018C648 44058000 */  mfc1        $a1, $ft4
/* E1BD7C 8018C64C 0C0017F8 */  jal         Matrix_RotateZ
/* E1BD80 8018C650 00000000 */   nop
/* E1BD84 8018C654 0C001BAE */  jal         Matrix_SetGfxMtx
/* E1BD88 8018C658 02002025 */   or         $a0, $s0, $zero
/* E1BD8C 8018C65C 3C110600 */  lui         $s1, (0x6000000 >> 16)
/* E1BD90 8018C660 8E020000 */  lw          $v0, 0x0($s0)
/* E1BD94 8018C664 3C0F0102 */  lui         $t7, %hi(D_101C2E0)
/* E1BD98 8018C668 25EFC2E0 */  addiu       $t7, $t7, %lo(D_101C2E0)
/* E1BD9C 8018C66C 244E0008 */  addiu       $t6, $v0, 0x8
/* E1BDA0 8018C670 AE0E0000 */  sw          $t6, 0x0($s0)
/* E1BDA4 8018C674 AC4F0004 */  sw          $t7, 0x4($v0)
/* E1BDA8 8018C678 AC510000 */  sw          $s1, 0x0($v0)
/* E1BDAC 8018C67C 10000346 */  b           .LE16C50_8018D398
/* E1BDB0 8018C680 8FBF005C */   lw         $ra, 0x5C($sp)
.LE16C50_8018C684:
/* E1BDB4 8018C684 3C13801C */  lui         $s3, %hi(D_E16C50_801C22F0)
/* E1BDB8 8018C688 267322F0 */  addiu       $s3, $s3, %lo(D_E16C50_801C22F0)
/* E1BDBC 8018C68C 4480B000 */  mtc1        $zero, $fs1
/* E1BDC0 8018C690 C6720024 */  lwc1        $ft5, 0x24($s3)
/* E1BDC4 8018C694 4612B032 */  c.eq.s      $fs1, $ft5
/* E1BDC8 8018C698 00000000 */  nop
/* E1BDCC 8018C69C 4501033D */  bc1t        .LE16C50_8018D394
/* E1BDD0 8018C6A0 27B100D0 */   addiu      $s1, $sp, 0xD0
/* E1BDD4 8018C6A4 3C040602 */  lui         $a0, %hi(D_6018994)
/* E1BDD8 8018C6A8 24848994 */  addiu       $a0, $a0, %lo(D_6018994)
/* E1BDDC 8018C6AC 02203025 */  or          $a2, $s1, $zero
/* E1BDE0 8018C6B0 0C026A88 */  jal         Animation_GetFrameData
/* E1BDE4 8018C6B4 00002825 */   or         $a1, $zero, $zero
/* E1BDE8 8018C6B8 3C01437F */  lui         $at, (0x437F0000 >> 16)
/* E1BDEC 8018C6BC 44812000 */  mtc1        $at, $ft0
/* E1BDF0 8018C6C0 C6660024 */  lwc1        $ft1, 0x24($s3)
/* E1BDF4 8018C6C4 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* E1BDF8 8018C6C8 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* E1BDFC 8018C6CC 46062032 */  c.eq.s      $ft0, $ft1
/* E1BE00 8018C6D0 02002025 */  or          $a0, $s0, $zero
/* E1BE04 8018C6D4 45010074 */  bc1t        .LE16C50_8018C8A8
/* E1BE08 8018C6D8 00000000 */   nop
/* E1BE0C 8018C6DC 0C02E374 */  jal         RCP_SetupDL
/* E1BE10 8018C6E0 24050047 */   addiu      $a1, $zero, 0x47
/* E1BE14 8018C6E4 8E020000 */  lw          $v0, 0x0($s0)
/* E1BE18 8018C6E8 3C19FA00 */  lui         $t9, (0xFA000000 >> 16)
/* E1BE1C 8018C6EC 2401FF00 */  addiu       $at, $zero, -0x100
/* E1BE20 8018C6F0 24580008 */  addiu       $t8, $v0, 0x8
/* E1BE24 8018C6F4 AE180000 */  sw          $t8, 0x0($s0)
/* E1BE28 8018C6F8 AC590000 */  sw          $t9, 0x0($v0)
/* E1BE2C 8018C6FC C6680024 */  lwc1        $ft2, 0x24($s3)
/* E1BE30 8018C700 3C148017 */  lui         $s4, %hi(gFrameCount)
/* E1BE34 8018C704 3C0E8013 */  lui         $t6, %hi(gFrameCounter)
/* E1BE38 8018C708 4600428D */  trunc.w.s   $ft3, $ft2
/* E1BE3C 8018C70C 26947DB0 */  addiu       $s4, $s4, %lo(gFrameCount)
/* E1BE40 8018C710 440F5000 */  mfc1        $t7, $ft3
/* E1BE44 8018C714 00000000 */  nop
/* E1BE48 8018C718 31F800FF */  andi        $t8, $t7, 0xFF
/* E1BE4C 8018C71C 0301C825 */  or          $t9, $t8, $at
/* E1BE50 8018C720 AC590004 */  sw          $t9, 0x4($v0)
/* E1BE54 8018C724 8DCE7E7C */  lw          $t6, %lo(gFrameCounter)($t6)
/* E1BE58 8018C728 E7B600AC */  swc1        $fs1, 0xAC($sp)
/* E1BE5C 8018C72C 31CF0001 */  andi        $t7, $t6, 0x1
/* E1BE60 8018C730 55E00003 */  bnel        $t7, $zero, .LE16C50_8018C740
/* E1BE64 8018C734 8E980000 */   lw         $t8, 0x0($s4)
/* E1BE68 8018C738 E7B600AC */  swc1        $fs1, 0xAC($sp)
/* E1BE6C 8018C73C 8E980000 */  lw          $t8, 0x0($s4)
.LE16C50_8018C740:
/* E1BE70 8018C740 3C0140C0 */  lui         $at, (0x40C00000 >> 16)
/* E1BE74 8018C744 44812000 */  mtc1        $at, $ft0
/* E1BE78 8018C748 44988000 */  mtc1        $t8, $ft4
/* E1BE7C 8018C74C 3C01801C */  lui         $at, %hi(D_E16C50_801C0A9C)
/* E1BE80 8018C750 C4280A9C */  lwc1        $ft2, %lo(D_E16C50_801C0A9C)($at)
/* E1BE84 8018C754 468084A0 */  cvt.s.w     $ft5, $ft4
/* E1BE88 8018C758 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1BE8C 8018C75C E7B600B4 */  swc1        $fs1, 0xB4($sp)
/* E1BE90 8018C760 E7B600B0 */  swc1        $fs1, 0xB0($sp)
/* E1BE94 8018C764 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1BE98 8018C768 00003025 */  or          $a2, $zero, $zero
/* E1BE9C 8018C76C 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E1BEA0 8018C770 00000000 */  nop
/* E1BEA4 8018C774 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E1BEA8 8018C778 44055000 */  mfc1        $a1, $ft3
/* E1BEAC 8018C77C 0C0017F8 */  jal         Matrix_RotateZ
/* E1BEB0 8018C780 00000000 */   nop
/* E1BEB4 8018C784 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1BEB8 8018C788 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1BEBC 8018C78C 27A500AC */  addiu       $a1, $sp, 0xAC
/* E1BEC0 8018C790 0C001A5C */  jal         Matrix_MultVec3f
/* E1BEC4 8018C794 27A600B8 */   addiu      $a2, $sp, 0xB8
/* E1BEC8 8018C798 3C128014 */  lui         $s2, %hi(gGfxMatrix)
/* E1BECC 8018C79C 2652B3C0 */  addiu       $s2, $s2, %lo(gGfxMatrix)
/* E1BED0 8018C7A0 4407B000 */  mfc1        $a3, $fs1
/* E1BED4 8018C7A4 24190001 */  addiu       $t9, $zero, 0x1
/* E1BED8 8018C7A8 AFB90010 */  sw          $t9, 0x10($sp)
/* E1BEDC 8018C7AC 8E440000 */  lw          $a0, 0x0($s2)
/* E1BEE0 8018C7B0 8FA500B8 */  lw          $a1, 0xB8($sp)
/* E1BEE4 8018C7B4 0C0016C0 */  jal         Matrix_Translate
/* E1BEE8 8018C7B8 8FA600BC */   lw         $a2, 0xBC($sp)
/* E1BEEC 8018C7BC 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1BEF0 8018C7C0 240E0001 */  addiu       $t6, $zero, 0x1
/* E1BEF4 8018C7C4 8E440000 */  lw          $a0, 0x0($s2)
/* E1BEF8 8018C7C8 C5A003F8 */  lwc1        $fv0, 0x3F8($t5)
/* E1BEFC 8018C7CC AFAE0010 */  sw          $t6, 0x10($sp)
/* E1BF00 8018C7D0 44050000 */  mfc1        $a1, $fv0
/* E1BF04 8018C7D4 44060000 */  mfc1        $a2, $fv0
/* E1BF08 8018C7D8 44070000 */  mfc1        $a3, $fv0
/* E1BF0C 8018C7DC 0C00170D */  jal         Matrix_Scale
/* E1BF10 8018C7E0 00000000 */   nop
/* E1BF14 8018C7E4 8E8F0000 */  lw          $t7, 0x0($s4)
/* E1BF18 8018C7E8 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E1BF1C 8018C7EC 44812000 */  mtc1        $at, $ft0
/* E1BF20 8018C7F0 448F8000 */  mtc1        $t7, $ft4
/* E1BF24 8018C7F4 3C01801C */  lui         $at, %hi(D_E16C50_801C0AA0)
/* E1BF28 8018C7F8 C4280AA0 */  lwc1        $ft2, %lo(D_E16C50_801C0AA0)($at)
/* E1BF2C 8018C7FC 468084A0 */  cvt.s.w     $ft5, $ft4
/* E1BF30 8018C800 8E440000 */  lw          $a0, 0x0($s2)
/* E1BF34 8018C804 24060001 */  addiu       $a2, $zero, 0x1
/* E1BF38 8018C808 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E1BF3C 8018C80C 00000000 */  nop
/* E1BF40 8018C810 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E1BF44 8018C814 44055000 */  mfc1        $a1, $ft3
/* E1BF48 8018C818 0C0017F8 */  jal         Matrix_RotateZ
/* E1BF4C 8018C81C 00000000 */   nop
/* E1BF50 8018C820 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1BF54 8018C824 24180001 */  addiu       $t8, $zero, 0x1
/* E1BF58 8018C828 8E440000 */  lw          $a0, 0x0($s2)
/* E1BF5C 8018C82C 8DA50160 */  lw          $a1, 0x160($t5)
/* E1BF60 8018C830 8DA60164 */  lw          $a2, 0x164($t5)
/* E1BF64 8018C834 AFB80010 */  sw          $t8, 0x10($sp)
/* E1BF68 8018C838 0C00170D */  jal         Matrix_Scale
/* E1BF6C 8018C83C 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* E1BF70 8018C840 8E990000 */  lw          $t9, 0x0($s4)
/* E1BF74 8018C844 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E1BF78 8018C848 44813000 */  mtc1        $at, $ft1
/* E1BF7C 8018C84C 44998000 */  mtc1        $t9, $ft4
/* E1BF80 8018C850 3C01801C */  lui         $at, %hi(D_E16C50_801C0AA4)
/* E1BF84 8018C854 C42A0AA4 */  lwc1        $ft3, %lo(D_E16C50_801C0AA4)($at)
/* E1BF88 8018C858 468084A0 */  cvt.s.w     $ft5, $ft4
/* E1BF8C 8018C85C 8E440000 */  lw          $a0, 0x0($s2)
/* E1BF90 8018C860 24060001 */  addiu       $a2, $zero, 0x1
/* E1BF94 8018C864 46009107 */  neg.s       $ft0, $ft5
/* E1BF98 8018C868 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E1BF9C 8018C86C 00000000 */  nop
/* E1BFA0 8018C870 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E1BFA4 8018C874 44058000 */  mfc1        $a1, $ft4
/* E1BFA8 8018C878 0C0017F8 */  jal         Matrix_RotateZ
/* E1BFAC 8018C87C 00000000 */   nop
/* E1BFB0 8018C880 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1BFB4 8018C884 240E0001 */  addiu       $t6, $zero, 0x1
/* E1BFB8 8018C888 8E440000 */  lw          $a0, 0x0($s2)
/* E1BFBC 8018C88C 8DA50160 */  lw          $a1, 0x160($t5)
/* E1BFC0 8018C890 8DA60164 */  lw          $a2, 0x164($t5)
/* E1BFC4 8018C894 AFAE0010 */  sw          $t6, 0x10($sp)
/* E1BFC8 8018C898 0C00170D */  jal         Matrix_Scale
/* E1BFCC 8018C89C 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* E1BFD0 8018C8A0 1000002E */  b           .LE16C50_8018C95C
/* E1BFD4 8018C8A4 8FAD0238 */   lw         $t5, 0x238($sp)
.LE16C50_8018C8A8:
/* E1BFD8 8018C8A8 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* E1BFDC 8018C8AC 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* E1BFE0 8018C8B0 02002025 */  or          $a0, $s0, $zero
/* E1BFE4 8018C8B4 0C02E374 */  jal         RCP_SetupDL
/* E1BFE8 8018C8B8 2405001B */   addiu      $a1, $zero, 0x1B
/* E1BFEC 8018C8BC 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1BFF0 8018C8C0 85AF005C */  lh          $t7, 0x5C($t5)
/* E1BFF4 8018C8C4 31F80001 */  andi        $t8, $t7, 0x1
/* E1BFF8 8018C8C8 5300000C */  beql        $t8, $zero, .LE16C50_8018C8FC
/* E1BFFC 8018C8CC 8E020000 */   lw         $v0, 0x0($s0)
/* E1C000 8018C8D0 8E020000 */  lw          $v0, 0x0($s0)
/* E1C004 8018C8D4 3C0FFF00 */  lui         $t7, (0xFF0000FF >> 16)
/* E1C008 8018C8D8 35EF00FF */  ori         $t7, $t7, (0xFF0000FF & 0xFFFF)
/* E1C00C 8018C8DC 24590008 */  addiu       $t9, $v0, 0x8
/* E1C010 8018C8E0 AE190000 */  sw          $t9, 0x0($s0)
/* E1C014 8018C8E4 3C0EFA00 */  lui         $t6, (0xFA000000 >> 16)
/* E1C018 8018C8E8 AC4E0000 */  sw          $t6, 0x0($v0)
/* E1C01C 8018C8EC AC4F0004 */  sw          $t7, 0x4($v0)
/* E1C020 8018C8F0 1000001B */  b           .LE16C50_8018C960
/* E1C024 8018C8F4 C7B200FC */   lwc1       $ft5, 0xFC($sp)
/* E1C028 8018C8F8 8E020000 */  lw          $v0, 0x0($s0)
.LE16C50_8018C8FC:
/* E1C02C 8018C8FC 3C19FA00 */  lui         $t9, (0xFA000000 >> 16)
/* E1C030 8018C900 24580008 */  addiu       $t8, $v0, 0x8
/* E1C034 8018C904 AE180000 */  sw          $t8, 0x0($s0)
/* E1C038 8018C908 AC590000 */  sw          $t9, 0x0($v0)
/* E1C03C 8018C90C C672002C */  lwc1        $ft5, 0x2C($s3)
/* E1C040 8018C910 C6660028 */  lwc1        $ft1, 0x28($s3)
/* E1C044 8018C914 C66A0030 */  lwc1        $ft3, 0x30($s3)
/* E1C048 8018C918 4600910D */  trunc.w.s   $ft0, $ft5
/* E1C04C 8018C91C 4600320D */  trunc.w.s   $ft2, $ft1
/* E1C050 8018C920 440F2000 */  mfc1        $t7, $ft0
/* E1C054 8018C924 4600540D */  trunc.w.s   $ft4, $ft3
/* E1C058 8018C928 31F800FF */  andi        $t8, $t7, 0xFF
/* E1C05C 8018C92C 0018CA00 */  sll         $t9, $t8, 8
/* E1C060 8018C930 44184000 */  mfc1        $t8, $ft2
/* E1C064 8018C934 00000000 */  nop
/* E1C068 8018C938 00187600 */  sll         $t6, $t8, 24
/* E1C06C 8018C93C 032E7825 */  or          $t7, $t9, $t6
/* E1C070 8018C940 44198000 */  mfc1        $t9, $ft4
/* E1C074 8018C944 00000000 */  nop
/* E1C078 8018C948 332E00FF */  andi        $t6, $t9, 0xFF
/* E1C07C 8018C94C 000EC400 */  sll         $t8, $t6, 16
/* E1C080 8018C950 01F8C825 */  or          $t9, $t7, $t8
/* E1C084 8018C954 372E00FF */  ori         $t6, $t9, 0xFF
/* E1C088 8018C958 AC4E0004 */  sw          $t6, 0x4($v0)
.LE16C50_8018C95C:
/* E1C08C 8018C95C C7B200FC */  lwc1        $ft5, 0xFC($sp)
.LE16C50_8018C960:
/* E1C090 8018C960 C5A400D8 */  lwc1        $ft0, 0xD8($t5)
/* E1C094 8018C964 C7A80108 */  lwc1        $ft2, 0x108($sp)
/* E1C098 8018C968 3C18800C */  lui         $t8, %hi(gIdentityMatrix)
/* E1C09C 8018C96C 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E1C0A0 8018C970 C7B20114 */  lwc1        $ft5, 0x114($sp)
/* E1C0A4 8018C974 27184660 */  addiu       $t8, $t8, %lo(gIdentityMatrix)
/* E1C0A8 8018C978 3C050602 */  lui         $a1, %hi(D_6018BA0)
/* E1C0AC 8018C97C E7A600FC */  swc1        $ft1, 0xFC($sp)
/* E1C0B0 8018C980 C5AA00D8 */  lwc1        $ft3, 0xD8($t5)
/* E1C0B4 8018C984 25AF0040 */  addiu       $t7, $t5, 0x40
/* E1C0B8 8018C988 24A58BA0 */  addiu       $a1, $a1, %lo(D_6018BA0)
/* E1C0BC 8018C98C 460A4401 */  sub.s       $ft4, $ft2, $ft3
/* E1C0C0 8018C990 24040001 */  addiu       $a0, $zero, 0x1
/* E1C0C4 8018C994 02203025 */  or          $a2, $s1, $zero
/* E1C0C8 8018C998 00003825 */  or          $a3, $zero, $zero
/* E1C0CC 8018C99C E7B00108 */  swc1        $ft4, 0x108($sp)
/* E1C0D0 8018C9A0 C5A400D8 */  lwc1        $ft0, 0xD8($t5)
/* E1C0D4 8018C9A4 AFB80018 */  sw          $t8, 0x18($sp)
/* E1C0D8 8018C9A8 AFAF0014 */  sw          $t7, 0x14($sp)
/* E1C0DC 8018C9AC 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E1C0E0 8018C9B0 AFA00010 */  sw          $zero, 0x10($sp)
/* E1C0E4 8018C9B4 0C0269CB */  jal         Animation_DrawSkeleton
/* E1C0E8 8018C9B8 E7A60114 */   swc1       $ft1, 0x114($sp)
/* E1C0EC 8018C9BC 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C0F0 8018C9C0 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1C0F4 8018C9C4 44815000 */  mtc1        $at, $ft3
/* E1C0F8 8018C9C8 C5A803F8 */  lwc1        $ft2, 0x3F8($t5)
/* E1C0FC 8018C9CC 4608503E */  c.le.s      $ft3, $ft2
/* E1C100 8018C9D0 00000000 */  nop
/* E1C104 8018C9D4 450001DA */  bc1f        .LE16C50_8018D140
/* E1C108 8018C9D8 3C014040 */   lui        $at, (0x40400000 >> 16)
/* E1C10C 8018C9DC 3C1E801C */  lui         $fp, %hi(D_E16C50_801BF100)
/* E1C110 8018C9E0 3C17801C */  lui         $s7, %hi(D_E16C50_801BF040)
/* E1C114 8018C9E4 3C16801C */  lui         $s6, %hi(D_E16C50_801BF010)
/* E1C118 8018C9E8 3C15801C */  lui         $s5, %hi(D_E16C50_801BEF80)
/* E1C11C 8018C9EC 3C14801C */  lui         $s4, %hi(D_E16C50_801BEEC0)
/* E1C120 8018C9F0 3C13801C */  lui         $s3, %hi(D_E16C50_801BEE90)
/* E1C124 8018C9F4 3C12801C */  lui         $s2, %hi(D_E16C50_801BEE00)
/* E1C128 8018C9F8 4481A000 */  mtc1        $at, $fs0
/* E1C12C 8018C9FC 2652EE00 */  addiu       $s2, $s2, %lo(D_E16C50_801BEE00)
/* E1C130 8018CA00 2673EE90 */  addiu       $s3, $s3, %lo(D_E16C50_801BEE90)
/* E1C134 8018CA04 2694EEC0 */  addiu       $s4, $s4, %lo(D_E16C50_801BEEC0)
/* E1C138 8018CA08 26B5EF80 */  addiu       $s5, $s5, %lo(D_E16C50_801BEF80)
/* E1C13C 8018CA0C 26D6F010 */  addiu       $s6, $s6, %lo(D_E16C50_801BF010)
/* E1C140 8018CA10 26F7F040 */  addiu       $s7, $s7, %lo(D_E16C50_801BF040)
/* E1C144 8018CA14 27DEF100 */  addiu       $fp, $fp, %lo(D_E16C50_801BF100)
/* E1C148 8018CA18 00008825 */  or          $s1, $zero, $zero
/* E1C14C 8018CA1C 01A05825 */  or          $t3, $t5, $zero
/* E1C150 8018CA20 2410000C */  addiu       $s0, $zero, 0xC
.LE16C50_8018CA24:
/* E1C154 8018CA24 857900CA */  lh          $t9, 0xCA($t3)
/* E1C158 8018CA28 572000C5 */  bnel        $t9, $zero, .LE16C50_8018CD40
/* E1C15C 8018CA2C 26310001 */   addiu      $s1, $s1, 0x1
/* E1C160 8018CA30 85AE004E */  lh          $t6, 0x4E($t5)
/* E1C164 8018CA34 24010003 */  addiu       $at, $zero, 0x3
/* E1C168 8018CA38 00111080 */  sll         $v0, $s1, 2
/* E1C16C 8018CA3C 11C100BF */  beq         $t6, $at, .LE16C50_8018CD3C
/* E1C170 8018CA40 3C0F801C */   lui        $t7, %hi(D_E16C50_801C2250 + 0x8)
/* E1C174 8018CA44 01E27821 */  addu        $t7, $t7, $v0
/* E1C178 8018CA48 8DEF2258 */  lw          $t7, %lo(D_E16C50_801C2250 + 0x8)($t7)
/* E1C17C 8018CA4C AFA20064 */  sw          $v0, 0x64($sp)
/* E1C180 8018CA50 3C188017 */  lui         $t8, %hi(gFrameCount)
/* E1C184 8018CA54 55E000BA */  bnel        $t7, $zero, .LE16C50_8018CD40
/* E1C188 8018CA58 26310001 */   addiu      $s1, $s1, 0x1
/* E1C18C 8018CA5C 8F187DB0 */  lw          $t8, %lo(gFrameCount)($t8)
/* E1C190 8018CA60 33190003 */  andi        $t9, $t8, 0x3
/* E1C194 8018CA64 572000B6 */  bnel        $t9, $zero, .LE16C50_8018CD40
/* E1C198 8018CA68 26310001 */   addiu      $s1, $s1, 0x1
/* E1C19C 8018CA6C 856E00BE */  lh          $t6, 0xBE($t3)
/* E1C1A0 8018CA70 3C0F8017 */  lui         $t7, %hi(D_80177854)
/* E1C1A4 8018CA74 51C000B2 */  beql        $t6, $zero, .LE16C50_8018CD40
/* E1C1A8 8018CA78 26310001 */   addiu      $s1, $s1, 0x1
/* E1C1AC 8018CA7C 8DEF7854 */  lw          $t7, %lo(D_80177854)($t7)
/* E1C1B0 8018CA80 24010064 */  addiu       $at, $zero, 0x64
/* E1C1B4 8018CA84 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1C1B8 8018CA88 11E100AC */  beq         $t7, $at, .LE16C50_8018CD3C
/* E1C1BC 8018CA8C 3C01801C */   lui        $at, %hi(D_E16C50_801C0AA8)
/* E1C1C0 8018CA90 C4320AA8 */  lwc1        $ft5, %lo(D_E16C50_801C0AA8)($at)
/* E1C1C4 8018CA94 C5B00014 */  lwc1        $ft4, 0x14($t5)
/* E1C1C8 8018CA98 0011C080 */  sll         $t8, $s1, 2
/* E1C1CC 8018CA9C 0311C023 */  subu        $t8, $t8, $s1
/* E1C1D0 8018CAA0 46128102 */  mul.s       $ft0, $ft4, $ft5
/* E1C1D4 8018CAA4 0018C080 */  sll         $t8, $t8, 2
/* E1C1D8 8018CAA8 01B8C821 */  addu        $t9, $t5, $t8
/* E1C1DC 8018CAAC 272E01AC */  addiu       $t6, $t9, 0x1AC
/* E1C1E0 8018CAB0 AFAE0060 */  sw          $t6, 0x60($sp)
/* E1C1E4 8018CAB4 AFAB0068 */  sw          $t3, 0x68($sp)
/* E1C1E8 8018CAB8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1C1EC 8018CABC 44052000 */  mfc1        $a1, $ft0
/* E1C1F0 8018CAC0 0C0017A4 */  jal         Matrix_RotateY
/* E1C1F4 8018CAC4 00003025 */   or         $a2, $zero, $zero
/* E1C1F8 8018CAC8 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C1FC 8018CACC 3C01801C */  lui         $at, %hi(D_E16C50_801C0AAC)
/* E1C200 8018CAD0 C4280AAC */  lwc1        $ft2, %lo(D_E16C50_801C0AAC)($at)
/* E1C204 8018CAD4 C5A60010 */  lwc1        $ft1, 0x10($t5)
/* E1C208 8018CAD8 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1C20C 8018CADC 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1C210 8018CAE0 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E1C214 8018CAE4 24060001 */  addiu       $a2, $zero, 0x1
/* E1C218 8018CAE8 44055000 */  mfc1        $a1, $ft3
/* E1C21C 8018CAEC 0C001751 */  jal         Matrix_RotateX
/* E1C220 8018CAF0 00000000 */   nop
/* E1C224 8018CAF4 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C228 8018CAF8 3C01801C */  lui         $at, %hi(D_E16C50_801C0AB0)
/* E1C22C 8018CAFC C4320AB0 */  lwc1        $ft5, %lo(D_E16C50_801C0AB0)($at)
/* E1C230 8018CB00 C5B00018 */  lwc1        $ft4, 0x18($t5)
/* E1C234 8018CB04 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1C238 8018CB08 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1C23C 8018CB0C 46128102 */  mul.s       $ft0, $ft4, $ft5
/* E1C240 8018CB10 24060001 */  addiu       $a2, $zero, 0x1
/* E1C244 8018CB14 44052000 */  mfc1        $a1, $ft0
/* E1C248 8018CB18 0C0017F8 */  jal         Matrix_RotateZ
/* E1C24C 8018CB1C 00000000 */   nop
/* E1C250 8018CB20 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1C254 8018CB24 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1C258 8018CB28 8FA50060 */  lw          $a1, 0x60($sp)
/* E1C25C 8018CB2C 0C001A5C */  jal         Matrix_MultVec3f
/* E1C260 8018CB30 27A600C4 */   addiu      $a2, $sp, 0xC4
/* E1C264 8018CB34 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C268 8018CB38 C7B200CC */  lwc1        $ft5, 0xCC($sp)
/* E1C26C 8018CB3C C7B000C4 */  lwc1        $ft4, 0xC4($sp)
/* E1C270 8018CB40 C5AA000C */  lwc1        $ft3, 0xC($t5)
/* E1C274 8018CB44 C5A80004 */  lwc1        $ft2, 0x4($t5)
/* E1C278 8018CB48 C5A60008 */  lwc1        $ft1, 0x8($t5)
/* E1C27C 8018CB4C 46125480 */  add.s       $ft5, $ft3, $ft5
/* E1C280 8018CB50 C7AA00C8 */  lwc1        $ft3, 0xC8($sp)
/* E1C284 8018CB54 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E1C288 8018CB58 46104300 */  add.s       $fa0, $ft2, $ft4
/* E1C28C 8018CB5C 44069000 */  mfc1        $a2, $ft5
/* E1C290 8018CB60 0C01F438 */  jal         func_8007D0E0
/* E1C294 8018CB64 460A3380 */   add.s      $fa1, $ft1, $ft3
/* E1C298 8018CB68 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C29C 8018CB6C C7AA00C4 */  lwc1        $ft3, 0xC4($sp)
/* E1C2A0 8018CB70 C7A400C8 */  lwc1        $ft0, 0xC8($sp)
/* E1C2A4 8018CB74 C5A80004 */  lwc1        $ft2, 0x4($t5)
/* E1C2A8 8018CB78 3C02801C */  lui         $v0, %hi(D_E16C50_801C2250 + 0x68)
/* E1C2AC 8018CB7C 8C4222B8 */  lw          $v0, %lo(D_E16C50_801C2250 + 0x68)($v0)
/* E1C2B0 8018CB80 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E1C2B4 8018CB84 C7AA00CC */  lwc1        $ft3, 0xCC($sp)
/* E1C2B8 8018CB88 3C09801C */  lui         $t1, %hi(D_E16C50_801BF190)
/* E1C2BC 8018CB8C 3C0A801C */  lui         $t2, %hi(D_E16C50_801BF1C0)
/* E1C2C0 8018CB90 E7B000B8 */  swc1        $ft4, 0xB8($sp)
/* E1C2C4 8018CB94 C5B20008 */  lwc1        $ft5, 0x8($t5)
/* E1C2C8 8018CB98 3C052903 */  lui         $a1, (0x2903B009 >> 16)
/* E1C2CC 8018CB9C 254AF1C0 */  addiu       $t2, $t2, %lo(D_E16C50_801BF1C0)
/* E1C2D0 8018CBA0 46049180 */  add.s       $ft1, $ft5, $ft0
/* E1C2D4 8018CBA4 2529F190 */  addiu       $t1, $t1, %lo(D_E16C50_801BF190)
/* E1C2D8 8018CBA8 8FAB0068 */  lw          $t3, 0x68($sp)
/* E1C2DC 8018CBAC 240C0001 */  addiu       $t4, $zero, 0x1
/* E1C2E0 8018CBB0 E7A600BC */  swc1        $ft1, 0xBC($sp)
/* E1C2E4 8018CBB4 C5A8000C */  lwc1        $ft2, 0xC($t5)
/* E1C2E8 8018CBB8 241F0002 */  addiu       $ra, $zero, 0x2
/* E1C2EC 8018CBBC 34A5B009 */  ori         $a1, $a1, (0x2903B009 & 0xFFFF)
/* E1C2F0 8018CBC0 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E1C2F4 8018CBC4 27A400B8 */  addiu       $a0, $sp, 0xB8
/* E1C2F8 8018CBC8 1440000D */  bnez        $v0, .LE16C50_8018CC00
/* E1C2FC 8018CBCC E7B000C0 */   swc1       $ft4, 0xC0($sp)
/* E1C300 8018CBD0 0C01E9BC */  jal         func_8007A6F0
/* E1C304 8018CBD4 AFAB0068 */   sw         $t3, 0x68($sp)
/* E1C308 8018CBD8 3C09801C */  lui         $t1, %hi(D_E16C50_801BF190)
/* E1C30C 8018CBDC 3C0A801C */  lui         $t2, %hi(D_E16C50_801BF1C0)
/* E1C310 8018CBE0 3C02801C */  lui         $v0, %hi(D_E16C50_801C2250 + 0x68)
/* E1C314 8018CBE4 8C4222B8 */  lw          $v0, %lo(D_E16C50_801C2250 + 0x68)($v0)
/* E1C318 8018CBE8 254AF1C0 */  addiu       $t2, $t2, %lo(D_E16C50_801BF1C0)
/* E1C31C 8018CBEC 2529F190 */  addiu       $t1, $t1, %lo(D_E16C50_801BF190)
/* E1C320 8018CBF0 8FAB0068 */  lw          $t3, 0x68($sp)
/* E1C324 8018CBF4 240C0001 */  addiu       $t4, $zero, 0x1
/* E1C328 8018CBF8 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C32C 8018CBFC 241F0002 */  addiu       $ra, $zero, 0x2
.LE16C50_8018CC00:
/* E1C330 8018CC00 3C03801C */  lui         $v1, %hi(D_E16C50_801C2250)
/* E1C334 8018CC04 244F0001 */  addiu       $t7, $v0, 0x1
/* E1C338 8018CC08 24632250 */  addiu       $v1, $v1, %lo(D_E16C50_801C2250)
/* E1C33C 8018CC0C AC6F0068 */  sw          $t7, 0x68($v1)
/* E1C340 8018CC10 31F90001 */  andi        $t9, $t7, 0x1
/* E1C344 8018CC14 AC790068 */  sw          $t9, 0x68($v1)
/* E1C348 8018CC18 856E00BE */  lh          $t6, 0xBE($t3)
/* E1C34C 8018CC1C 24190004 */  addiu       $t9, $zero, 0x4
/* E1C350 8018CC20 3C01C2B4 */  lui         $at, (0xC2B40000 >> 16)
/* E1C354 8018CC24 25CFFFFF */  addiu       $t7, $t6, -0x1
/* E1C358 8018CC28 A56F00BE */  sh          $t7, 0xBE($t3)
/* E1C35C 8018CC2C 857800BE */  lh          $t8, 0xBE($t3)
/* E1C360 8018CC30 5F000043 */  bgtzl       $t8, .LE16C50_8018CD40
/* E1C364 8018CC34 26310001 */   addiu      $s1, $s1, 0x1
/* E1C368 8018CC38 A57900AC */  sh          $t9, 0xAC($t3)
/* E1C36C 8018CC3C A5AC00D4 */  sh          $t4, 0xD4($t5)
/* E1C370 8018CC40 8FAE0064 */  lw          $t6, 0x64($sp)
/* E1C374 8018CC44 44819000 */  mtc1        $at, $ft5
/* E1C378 8018CC48 00004025 */  or          $t0, $zero, $zero
/* E1C37C 8018CC4C 01AE1021 */  addu        $v0, $t5, $t6
/* E1C380 8018CC50 E4560130 */  swc1        $fs1, 0x130($v0)
/* E1C384 8018CC54 E456010C */  swc1        $fs1, 0x10C($v0)
/* E1C388 8018CC58 E4560124 */  swc1        $fs1, 0x124($v0)
/* E1C38C 8018CC5C E4560100 */  swc1        $fs1, 0x100($v0)
/* E1C390 8018CC60 E452013C */  swc1        $ft5, 0x13C($v0)
.LE16C50_8018CC64:
/* E1C394 8018CC64 16200010 */  bnez        $s1, .LE16C50_8018CCA8
/* E1C398 8018CC68 00000000 */   nop
/* E1C39C 8018CC6C 01100019 */  multu       $t0, $s0
/* E1C3A0 8018CC70 3C0F801C */  lui         $t7, %hi(D_E16C50_801BED70)
/* E1C3A4 8018CC74 25EFED70 */  addiu       $t7, $t7, %lo(D_E16C50_801BED70)
/* E1C3A8 8018CC78 00082880 */  sll         $a1, $t0, 2
/* E1C3AC 8018CC7C 0265C021 */  addu        $t8, $s3, $a1
/* E1C3B0 8018CC80 E7140000 */  swc1        $fs0, 0x0($t8)
/* E1C3B4 8018CC84 0285C821 */  addu        $t9, $s4, $a1
/* E1C3B8 8018CC88 E7340000 */  swc1        $fs0, 0x0($t9)
/* E1C3BC 8018CC8C 00001012 */  mflo        $v0
/* E1C3C0 8018CC90 02421821 */  addu        $v1, $s2, $v0
/* E1C3C4 8018CC94 004F2021 */  addu        $a0, $v0, $t7
/* E1C3C8 8018CC98 E4960000 */  swc1        $fs1, 0x0($a0)
/* E1C3CC 8018CC9C E4960004 */  swc1        $fs1, 0x4($a0)
/* E1C3D0 8018CCA0 E4760000 */  swc1        $fs1, 0x0($v1)
/* E1C3D4 8018CCA4 E4760004 */  swc1        $fs1, 0x4($v1)
.LE16C50_8018CCA8:
/* E1C3D8 8018CCA8 162C0010 */  bne         $s1, $t4, .LE16C50_8018CCEC
/* E1C3DC 8018CCAC 00000000 */   nop
/* E1C3E0 8018CCB0 01100019 */  multu       $t0, $s0
/* E1C3E4 8018CCB4 3C0E801C */  lui         $t6, %hi(D_E16C50_801BEEF0)
/* E1C3E8 8018CCB8 25CEEEF0 */  addiu       $t6, $t6, %lo(D_E16C50_801BEEF0)
/* E1C3EC 8018CCBC 00082880 */  sll         $a1, $t0, 2
/* E1C3F0 8018CCC0 02C57821 */  addu        $t7, $s6, $a1
/* E1C3F4 8018CCC4 E5F40000 */  swc1        $fs0, 0x0($t7)
/* E1C3F8 8018CCC8 02E5C021 */  addu        $t8, $s7, $a1
/* E1C3FC 8018CCCC E7140000 */  swc1        $fs0, 0x0($t8)
/* E1C400 8018CCD0 00001012 */  mflo        $v0
/* E1C404 8018CCD4 02A21821 */  addu        $v1, $s5, $v0
/* E1C408 8018CCD8 004E2021 */  addu        $a0, $v0, $t6
/* E1C40C 8018CCDC E4960000 */  swc1        $fs1, 0x0($a0)
/* E1C410 8018CCE0 E4960004 */  swc1        $fs1, 0x4($a0)
/* E1C414 8018CCE4 E4760000 */  swc1        $fs1, 0x0($v1)
/* E1C418 8018CCE8 E4760004 */  swc1        $fs1, 0x4($v1)
.LE16C50_8018CCEC:
/* E1C41C 8018CCEC 563F0011 */  bnel        $s1, $ra, .LE16C50_8018CD34
/* E1C420 8018CCF0 25080001 */   addiu      $t0, $t0, 0x1
/* E1C424 8018CCF4 01100019 */  multu       $t0, $s0
/* E1C428 8018CCF8 3C19801C */  lui         $t9, %hi(D_E16C50_801BF070)
/* E1C42C 8018CCFC 2739F070 */  addiu       $t9, $t9, %lo(D_E16C50_801BF070)
/* E1C430 8018CD00 00082880 */  sll         $a1, $t0, 2
/* E1C434 8018CD04 01257021 */  addu        $t6, $t1, $a1
/* E1C438 8018CD08 E5D40000 */  swc1        $fs0, 0x0($t6)
/* E1C43C 8018CD0C 01457821 */  addu        $t7, $t2, $a1
/* E1C440 8018CD10 E5F40000 */  swc1        $fs0, 0x0($t7)
/* E1C444 8018CD14 00001012 */  mflo        $v0
/* E1C448 8018CD18 03C21821 */  addu        $v1, $fp, $v0
/* E1C44C 8018CD1C 00592021 */  addu        $a0, $v0, $t9
/* E1C450 8018CD20 E4960000 */  swc1        $fs1, 0x0($a0)
/* E1C454 8018CD24 E4960004 */  swc1        $fs1, 0x4($a0)
/* E1C458 8018CD28 E4760000 */  swc1        $fs1, 0x0($v1)
/* E1C45C 8018CD2C E4760004 */  swc1        $fs1, 0x4($v1)
/* E1C460 8018CD30 25080001 */  addiu       $t0, $t0, 0x1
.LE16C50_8018CD34:
/* E1C464 8018CD34 1510FFCB */  bne         $t0, $s0, .LE16C50_8018CC64
/* E1C468 8018CD38 00000000 */   nop
.LE16C50_8018CD3C:
/* E1C46C 8018CD3C 26310001 */  addiu       $s1, $s1, 0x1
.LE16C50_8018CD40:
/* E1C470 8018CD40 24010003 */  addiu       $at, $zero, 0x3
/* E1C474 8018CD44 1621FF37 */  bne         $s1, $at, .LE16C50_8018CA24
/* E1C478 8018CD48 256B0002 */   addiu      $t3, $t3, 0x2
/* E1C47C 8018CD4C 85B80088 */  lh          $t8, 0x88($t5)
/* E1C480 8018CD50 8DA6013C */  lw          $a2, 0x13C($t5)
/* E1C484 8018CD54 3C04801C */  lui         $a0, %hi(D_E16C50_801BED70)
/* E1C488 8018CD58 33190001 */  andi        $t9, $t8, 0x1
/* E1C48C 8018CD5C AFB90010 */  sw          $t9, 0x10($sp)
/* E1C490 8018CD60 C5A60100 */  lwc1        $ft1, 0x100($t5)
/* E1C494 8018CD64 C5A40124 */  lwc1        $ft0, 0x124($t5)
/* E1C498 8018CD68 4405B000 */  mfc1        $a1, $fs1
/* E1C49C 8018CD6C 2484ED70 */  addiu       $a0, $a0, %lo(D_E16C50_801BED70)
/* E1C4A0 8018CD70 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1C4A4 8018CD74 25A701AC */  addiu       $a3, $t5, 0x1AC
/* E1C4A8 8018CD78 E7A80014 */  swc1        $ft2, 0x14($sp)
/* E1C4AC 8018CD7C 85AE00BE */  lh          $t6, 0xBE($t5)
/* E1C4B0 8018CD80 AFAE0018 */  sw          $t6, 0x18($sp)
/* E1C4B4 8018CD84 C5AA00D8 */  lwc1        $ft3, 0xD8($t5)
/* E1C4B8 8018CD88 0C062F35 */  jal         func_E16C50_8018BCD4
/* E1C4BC 8018CD8C E7AA001C */   swc1       $ft3, 0x1C($sp)
/* E1C4C0 8018CD90 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C4C4 8018CD94 3C01C2F0 */  lui         $at, (0xC2F00000 >> 16)
/* E1C4C8 8018CD98 4481A000 */  mtc1        $at, $fs0
/* E1C4CC 8018CD9C 85AF008A */  lh          $t7, 0x8A($t5)
/* E1C4D0 8018CDA0 8DA60140 */  lw          $a2, 0x140($t5)
/* E1C4D4 8018CDA4 3C04801C */  lui         $a0, %hi(D_E16C50_801BEEF0)
/* E1C4D8 8018CDA8 31F80001 */  andi        $t8, $t7, 0x1
/* E1C4DC 8018CDAC AFB80010 */  sw          $t8, 0x10($sp)
/* E1C4E0 8018CDB0 C5B20104 */  lwc1        $ft5, 0x104($t5)
/* E1C4E4 8018CDB4 C5B00128 */  lwc1        $ft4, 0x128($t5)
/* E1C4E8 8018CDB8 4405A000 */  mfc1        $a1, $fs0
/* E1C4EC 8018CDBC 2484EEF0 */  addiu       $a0, $a0, %lo(D_E16C50_801BEEF0)
/* E1C4F0 8018CDC0 46128100 */  add.s       $ft0, $ft4, $ft5
/* E1C4F4 8018CDC4 25A701B8 */  addiu       $a3, $t5, 0x1B8
/* E1C4F8 8018CDC8 E7A40014 */  swc1        $ft0, 0x14($sp)
/* E1C4FC 8018CDCC 85B900C0 */  lh          $t9, 0xC0($t5)
/* E1C500 8018CDD0 AFB90018 */  sw          $t9, 0x18($sp)
/* E1C504 8018CDD4 C5A600D8 */  lwc1        $ft1, 0xD8($t5)
/* E1C508 8018CDD8 0C062F35 */  jal         func_E16C50_8018BCD4
/* E1C50C 8018CDDC E7A6001C */   swc1       $ft1, 0x1C($sp)
/* E1C510 8018CDE0 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C514 8018CDE4 3C04801C */  lui         $a0, %hi(D_E16C50_801BF070)
/* E1C518 8018CDE8 2484F070 */  addiu       $a0, $a0, %lo(D_E16C50_801BF070)
/* E1C51C 8018CDEC 85AE008C */  lh          $t6, 0x8C($t5)
/* E1C520 8018CDF0 8DA60144 */  lw          $a2, 0x144($t5)
/* E1C524 8018CDF4 3C0542F0 */  lui         $a1, (0x42F00000 >> 16)
/* E1C528 8018CDF8 31CF0001 */  andi        $t7, $t6, 0x1
/* E1C52C 8018CDFC AFAF0010 */  sw          $t7, 0x10($sp)
/* E1C530 8018CE00 C5AA0108 */  lwc1        $ft3, 0x108($t5)
/* E1C534 8018CE04 C5A8012C */  lwc1        $ft2, 0x12C($t5)
/* E1C538 8018CE08 25A701C4 */  addiu       $a3, $t5, 0x1C4
/* E1C53C 8018CE0C 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E1C540 8018CE10 E7B00014 */  swc1        $ft4, 0x14($sp)
/* E1C544 8018CE14 85B800C2 */  lh          $t8, 0xC2($t5)
/* E1C548 8018CE18 AFB80018 */  sw          $t8, 0x18($sp)
/* E1C54C 8018CE1C C5B200D8 */  lwc1        $ft5, 0xD8($t5)
/* E1C550 8018CE20 0C062F35 */  jal         func_E16C50_8018BCD4
/* E1C554 8018CE24 E7B2001C */   swc1       $ft5, 0x1C($sp)
/* E1C558 8018CE28 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C55C 8018CE2C 240C0001 */  addiu       $t4, $zero, 0x1
/* E1C560 8018CE30 241F0002 */  addiu       $ra, $zero, 0x2
/* E1C564 8018CE34 85B900A6 */  lh          $t9, 0xA6($t5)
/* E1C568 8018CE38 5320001C */  beql        $t9, $zero, .LE16C50_8018CEAC
/* E1C56C 8018CE3C 85B800A8 */   lh         $t8, 0xA8($t5)
/* E1C570 8018CE40 85AE004E */  lh          $t6, 0x4E($t5)
/* E1C574 8018CE44 3C11801C */  lui         $s1, %hi(D_E16C50_801C22F0)
/* E1C578 8018CE48 263122F0 */  addiu       $s1, $s1, %lo(D_E16C50_801C22F0)
/* E1C57C 8018CE4C 29C10003 */  slti        $at, $t6, 0x3
/* E1C580 8018CE50 14200015 */  bnez        $at, .LE16C50_8018CEA8
/* E1C584 8018CE54 3C01437F */   lui        $at, (0x437F0000 >> 16)
/* E1C588 8018CE58 44812000 */  mtc1        $at, $ft0
/* E1C58C 8018CE5C C6260024 */  lwc1        $ft1, 0x24($s1)
/* E1C590 8018CE60 3C10801C */  lui         $s0, %hi(D_E16C50_801C2250)
/* E1C594 8018CE64 26102250 */  addiu       $s0, $s0, %lo(D_E16C50_801C2250)
/* E1C598 8018CE68 46062032 */  c.eq.s      $ft0, $ft1
/* E1C59C 8018CE6C 00000000 */  nop
/* E1C5A0 8018CE70 4502000E */  bc1fl       .LE16C50_8018CEAC
/* E1C5A4 8018CE74 85B800A8 */   lh         $t8, 0xA8($t5)
/* E1C5A8 8018CE78 8E0F0000 */  lw          $t7, 0x0($s0)
/* E1C5AC 8018CE7C 3C04801C */  lui         $a0, %hi(D_E16C50_801BF1F0)
/* E1C5B0 8018CE80 2484F1F0 */  addiu       $a0, $a0, %lo(D_E16C50_801BF1F0)
/* E1C5B4 8018CE84 15E00008 */  bnez        $t7, .LE16C50_8018CEA8
/* E1C5B8 8018CE88 25A601D0 */   addiu      $a2, $t5, 0x1D0
/* E1C5BC 8018CE8C 4405B000 */  mfc1        $a1, $fs1
/* E1C5C0 8018CE90 8DA700D8 */  lw          $a3, 0xD8($t5)
/* E1C5C4 8018CE94 0C063034 */  jal         func_E16C50_8018C0D0
/* E1C5C8 8018CE98 AFA00010 */   sw         $zero, 0x10($sp)
/* E1C5CC 8018CE9C 240C0001 */  addiu       $t4, $zero, 0x1
/* E1C5D0 8018CEA0 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C5D4 8018CEA4 241F0002 */  addiu       $ra, $zero, 0x2
.LE16C50_8018CEA8:
/* E1C5D8 8018CEA8 85B800A8 */  lh          $t8, 0xA8($t5)
.LE16C50_8018CEAC:
/* E1C5DC 8018CEAC 3C10801C */  lui         $s0, %hi(D_E16C50_801C2250)
/* E1C5E0 8018CEB0 3C11801C */  lui         $s1, %hi(D_E16C50_801C22F0)
/* E1C5E4 8018CEB4 263122F0 */  addiu       $s1, $s1, %lo(D_E16C50_801C22F0)
/* E1C5E8 8018CEB8 13000017 */  beqz        $t8, .LE16C50_8018CF18
/* E1C5EC 8018CEBC 26102250 */   addiu      $s0, $s0, %lo(D_E16C50_801C2250)
/* E1C5F0 8018CEC0 85B9004E */  lh          $t9, 0x4E($t5)
/* E1C5F4 8018CEC4 2B210003 */  slti        $at, $t9, 0x3
/* E1C5F8 8018CEC8 14200013 */  bnez        $at, .LE16C50_8018CF18
/* E1C5FC 8018CECC 3C01437F */   lui        $at, (0x437F0000 >> 16)
/* E1C600 8018CED0 44814000 */  mtc1        $at, $ft2
/* E1C604 8018CED4 C62A0024 */  lwc1        $ft3, 0x24($s1)
/* E1C608 8018CED8 460A4032 */  c.eq.s      $ft2, $ft3
/* E1C60C 8018CEDC 00000000 */  nop
/* E1C610 8018CEE0 4502000E */  bc1fl       .LE16C50_8018CF1C
/* E1C614 8018CEE4 85AF00AA */   lh         $t7, 0xAA($t5)
/* E1C618 8018CEE8 8E0E0000 */  lw          $t6, 0x0($s0)
/* E1C61C 8018CEEC 3C04801C */  lui         $a0, %hi(D_E16C50_801BF220)
/* E1C620 8018CEF0 2484F220 */  addiu       $a0, $a0, %lo(D_E16C50_801BF220)
/* E1C624 8018CEF4 15C00008 */  bnez        $t6, .LE16C50_8018CF18
/* E1C628 8018CEF8 25A601DC */   addiu      $a2, $t5, 0x1DC
/* E1C62C 8018CEFC 4405A000 */  mfc1        $a1, $fs0
/* E1C630 8018CF00 8DA700D8 */  lw          $a3, 0xD8($t5)
/* E1C634 8018CF04 0C063034 */  jal         func_E16C50_8018C0D0
/* E1C638 8018CF08 AFAC0010 */   sw         $t4, 0x10($sp)
/* E1C63C 8018CF0C 240C0001 */  addiu       $t4, $zero, 0x1
/* E1C640 8018CF10 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C644 8018CF14 241F0002 */  addiu       $ra, $zero, 0x2
.LE16C50_8018CF18:
/* E1C648 8018CF18 85AF00AA */  lh          $t7, 0xAA($t5)
.LE16C50_8018CF1C:
/* E1C64C 8018CF1C 51E00018 */  beql        $t7, $zero, .LE16C50_8018CF80
/* E1C650 8018CF20 85A200BA */   lh         $v0, 0xBA($t5)
/* E1C654 8018CF24 85B8004E */  lh          $t8, 0x4E($t5)
/* E1C658 8018CF28 2B010003 */  slti        $at, $t8, 0x3
/* E1C65C 8018CF2C 14200013 */  bnez        $at, .LE16C50_8018CF7C
/* E1C660 8018CF30 3C01437F */   lui        $at, (0x437F0000 >> 16)
/* E1C664 8018CF34 44818000 */  mtc1        $at, $ft4
/* E1C668 8018CF38 C6320024 */  lwc1        $ft5, 0x24($s1)
/* E1C66C 8018CF3C 46128032 */  c.eq.s      $ft4, $ft5
/* E1C670 8018CF40 00000000 */  nop
/* E1C674 8018CF44 4502000E */  bc1fl       .LE16C50_8018CF80
/* E1C678 8018CF48 85A200BA */   lh         $v0, 0xBA($t5)
/* E1C67C 8018CF4C 8E190000 */  lw          $t9, 0x0($s0)
/* E1C680 8018CF50 3C04801C */  lui         $a0, %hi(D_E16C50_801BF250)
/* E1C684 8018CF54 2484F250 */  addiu       $a0, $a0, %lo(D_E16C50_801BF250)
/* E1C688 8018CF58 17200008 */  bnez        $t9, .LE16C50_8018CF7C
/* E1C68C 8018CF5C 3C0542F0 */   lui        $a1, (0x42F00000 >> 16)
/* E1C690 8018CF60 8DA700D8 */  lw          $a3, 0xD8($t5)
/* E1C694 8018CF64 AFBF0010 */  sw          $ra, 0x10($sp)
/* E1C698 8018CF68 0C063034 */  jal         func_E16C50_8018C0D0
/* E1C69C 8018CF6C 25A601E8 */   addiu      $a2, $t5, 0x1E8
/* E1C6A0 8018CF70 240C0001 */  addiu       $t4, $zero, 0x1
/* E1C6A4 8018CF74 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C6A8 8018CF78 241F0002 */  addiu       $ra, $zero, 0x2
.LE16C50_8018CF7C:
/* E1C6AC 8018CF7C 85A200BA */  lh          $v0, 0xBA($t5)
.LE16C50_8018CF80:
/* E1C6B0 8018CF80 25A4014C */  addiu       $a0, $t5, 0x14C
/* E1C6B4 8018CF84 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E1C6B8 8018CF88 10400051 */  beqz        $v0, .LE16C50_8018D0D0
/* E1C6BC 8018CF8C 3C074120 */   lui        $a3, (0x41200000 >> 16)
/* E1C6C0 8018CF90 85A30058 */  lh          $v1, 0x58($t5)
/* E1C6C4 8018CF94 2448FFFF */  addiu       $t0, $v0, -0x1
/* E1C6C8 8018CF98 10600013 */  beqz        $v1, .LE16C50_8018CFE8
/* E1C6CC 8018CF9C 306E0003 */   andi       $t6, $v1, 0x3
/* E1C6D0 8018CFA0 15C00011 */  bnez        $t6, .LE16C50_8018CFE8
/* E1C6D4 8018CFA4 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E1C6D8 8018CFA8 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E1C6DC 8018CFAC 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1C6E0 8018CFB0 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E1C6E4 8018CFB4 3C042903 */  lui         $a0, (0x29034003 >> 16)
/* E1C6E8 8018CFB8 34844003 */  ori         $a0, $a0, (0x29034003 & 0xFFFF)
/* E1C6EC 8018CFBC AFAF0014 */  sw          $t7, 0x14($sp)
/* E1C6F0 8018CFC0 AFA70010 */  sw          $a3, 0x10($sp)
/* E1C6F4 8018CFC4 25A503FC */  addiu       $a1, $t5, 0x3FC
/* E1C6F8 8018CFC8 24060004 */  addiu       $a2, $zero, 0x4
/* E1C6FC 8018CFCC 0C006486 */  jal         Audio_PlaySfx
/* E1C700 8018CFD0 AFA800A4 */   sw         $t0, 0xA4($sp)
/* E1C704 8018CFD4 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C708 8018CFD8 8FA800A4 */  lw          $t0, 0xA4($sp)
/* E1C70C 8018CFDC 240C0001 */  addiu       $t4, $zero, 0x1
/* E1C710 8018CFE0 241F0002 */  addiu       $ra, $zero, 0x2
/* E1C714 8018CFE4 85A30058 */  lh          $v1, 0x58($t5)
.LE16C50_8018CFE8:
/* E1C718 8018CFE8 55830014 */  bnel        $t4, $v1, .LE16C50_8018D03C
/* E1C71C 8018CFEC 00082880 */   sll        $a1, $t0, 2
/* E1C720 8018CFF0 85A200BA */  lh          $v0, 0xBA($t5)
/* E1C724 8018CFF4 3C048018 */  lui         $a0, %hi(gMsg_ID_7085)
/* E1C728 8018CFF8 2484DFE4 */  addiu       $a0, $a0, %lo(gMsg_ID_7085)
/* E1C72C 8018CFFC 17E20006 */  bne         $ra, $v0, .LE16C50_8018D018
/* E1C730 8018D000 2405000A */   addiu      $a1, $zero, 0xA
/* E1C734 8018D004 0C02EA02 */  jal         func_800BA808
/* E1C738 8018D008 AFA800A4 */   sw         $t0, 0xA4($sp)
/* E1C73C 8018D00C 8FA800A4 */  lw          $t0, 0xA4($sp)
/* E1C740 8018D010 10000009 */  b           .LE16C50_8018D038
/* E1C744 8018D014 8FAD0238 */   lw         $t5, 0x238($sp)
.LE16C50_8018D018:
/* E1C748 8018D018 15820007 */  bne         $t4, $v0, .LE16C50_8018D038
/* E1C74C 8018D01C 3C048018 */   lui        $a0, %hi(gMsg_ID_7086)
/* E1C750 8018D020 2484E014 */  addiu       $a0, $a0, %lo(gMsg_ID_7086)
/* E1C754 8018D024 24050014 */  addiu       $a1, $zero, 0x14
/* E1C758 8018D028 0C02EA02 */  jal         func_800BA808
/* E1C75C 8018D02C AFA800A4 */   sw         $t0, 0xA4($sp)
/* E1C760 8018D030 8FA800A4 */  lw          $t0, 0xA4($sp)
/* E1C764 8018D034 8FAD0238 */  lw          $t5, 0x238($sp)
.LE16C50_8018D038:
/* E1C768 8018D038 00082880 */  sll         $a1, $t0, 2
.LE16C50_8018D03C:
/* E1C76C 8018D03C 3C03801C */  lui         $v1, %hi(D_E16C50_801BF310)
/* E1C770 8018D040 00651821 */  addu        $v1, $v1, $a1
/* E1C774 8018D044 8C63F310 */  lw          $v1, %lo(D_E16C50_801BF310)($v1)
/* E1C778 8018D048 85A200B4 */  lh          $v0, 0xB4($t5)
/* E1C77C 8018D04C 10430007 */  beq         $v0, $v1, .LE16C50_8018D06C
/* E1C780 8018D050 0043082A */   slt        $at, $v0, $v1
/* E1C784 8018D054 10200004 */  beqz        $at, .LE16C50_8018D068
/* E1C788 8018D058 2459FFFF */   addiu      $t9, $v0, -0x1
/* E1C78C 8018D05C 24580001 */  addiu       $t8, $v0, 0x1
/* E1C790 8018D060 10000002 */  b           .LE16C50_8018D06C
/* E1C794 8018D064 A5B800B4 */   sh         $t8, 0xB4($t5)
.LE16C50_8018D068:
/* E1C798 8018D068 A5B900B4 */  sh          $t9, 0xB4($t5)
.LE16C50_8018D06C:
/* E1C79C 8018D06C 3C03801C */  lui         $v1, %hi(D_E16C50_801BF31C)
/* E1C7A0 8018D070 00651821 */  addu        $v1, $v1, $a1
/* E1C7A4 8018D074 8C63F31C */  lw          $v1, %lo(D_E16C50_801BF31C)($v1)
/* E1C7A8 8018D078 85A200B6 */  lh          $v0, 0xB6($t5)
/* E1C7AC 8018D07C 10430007 */  beq         $v0, $v1, .LE16C50_8018D09C
/* E1C7B0 8018D080 0043082A */   slt        $at, $v0, $v1
/* E1C7B4 8018D084 10200004 */  beqz        $at, .LE16C50_8018D098
/* E1C7B8 8018D088 244FFFFF */   addiu      $t7, $v0, -0x1
/* E1C7BC 8018D08C 244E0001 */  addiu       $t6, $v0, 0x1
/* E1C7C0 8018D090 10000002 */  b           .LE16C50_8018D09C
/* E1C7C4 8018D094 A5AE00B6 */   sh         $t6, 0xB6($t5)
.LE16C50_8018D098:
/* E1C7C8 8018D098 A5AF00B6 */  sh          $t7, 0xB6($t5)
.LE16C50_8018D09C:
/* E1C7CC 8018D09C 3C03801C */  lui         $v1, %hi(D_E16C50_801BF328)
/* E1C7D0 8018D0A0 00651821 */  addu        $v1, $v1, $a1
/* E1C7D4 8018D0A4 8C63F328 */  lw          $v1, %lo(D_E16C50_801BF328)($v1)
/* E1C7D8 8018D0A8 85A200B8 */  lh          $v0, 0xB8($t5)
/* E1C7DC 8018D0AC 10430024 */  beq         $v0, $v1, .LE16C50_8018D140
/* E1C7E0 8018D0B0 0043082A */   slt        $at, $v0, $v1
/* E1C7E4 8018D0B4 10200004 */  beqz        $at, .LE16C50_8018D0C8
/* E1C7E8 8018D0B8 2459FFFF */   addiu      $t9, $v0, -0x1
/* E1C7EC 8018D0BC 24580001 */  addiu       $t8, $v0, 0x1
/* E1C7F0 8018D0C0 1000001F */  b           .LE16C50_8018D140
/* E1C7F4 8018D0C4 A5B800B8 */   sh         $t8, 0xB8($t5)
.LE16C50_8018D0C8:
/* E1C7F8 8018D0C8 1000001D */  b           .LE16C50_8018D140
/* E1C7FC 8018D0CC A5B900B8 */   sh         $t9, 0xB8($t5)
.LE16C50_8018D0D0:
/* E1C800 8018D0D0 3C01801C */  lui         $at, %hi(D_E16C50_801C0AB4)
/* E1C804 8018D0D4 C4240AB4 */  lwc1        $ft0, %lo(D_E16C50_801C0AB4)($at)
/* E1C808 8018D0D8 4405B000 */  mfc1        $a1, $fs1
/* E1C80C 8018D0DC 0C026F0B */  jal         Math_SmoothStepToF
/* E1C810 8018D0E0 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1C814 8018D0E4 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C818 8018D0E8 85AE0054 */  lh          $t6, 0x54($t5)
/* E1C81C 8018D0EC 15C00014 */  bnez        $t6, .LE16C50_8018D140
/* E1C820 8018D0F0 00000000 */   nop
/* E1C824 8018D0F4 85AF00D0 */  lh          $t7, 0xD0($t5)
/* E1C828 8018D0F8 24010004 */  addiu       $at, $zero, 0x4
/* E1C82C 8018D0FC 15E10010 */  bne         $t7, $at, .LE16C50_8018D140
/* E1C830 8018D100 00000000 */   nop
/* E1C834 8018D104 8E18007C */  lw          $t8, 0x7C($s0)
/* E1C838 8018D108 3C048018 */  lui         $a0, %hi(gMsg_ID_7087)
/* E1C83C 8018D10C 2484E030 */  addiu       $a0, $a0, %lo(gMsg_ID_7087)
/* E1C840 8018D110 1700000B */  bnez        $t8, .LE16C50_8018D140
/* E1C844 8018D114 00000000 */   nop
/* E1C848 8018D118 0C02EA02 */  jal         func_800BA808
/* E1C84C 8018D11C 2405001E */   addiu      $a1, $zero, 0x1E
/* E1C850 8018D120 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C854 8018D124 24190005 */  addiu       $t9, $zero, 0x5
/* E1C858 8018D128 A5B900D0 */  sh          $t9, 0xD0($t5)
/* E1C85C 8018D12C 8E0E007C */  lw          $t6, 0x7C($s0)
/* E1C860 8018D130 25CF0001 */  addiu       $t7, $t6, 0x1
/* E1C864 8018D134 AE0F007C */  sw          $t7, 0x7C($s0)
/* E1C868 8018D138 31F90001 */  andi        $t9, $t7, 0x1
/* E1C86C 8018D13C AE19007C */  sw          $t9, 0x7C($s0)
.LE16C50_8018D140:
/* E1C870 8018D140 3C128014 */  lui         $s2, %hi(gGfxMatrix)
/* E1C874 8018D144 2652B3C0 */  addiu       $s2, $s2, %lo(gGfxMatrix)
/* E1C878 8018D148 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* E1C87C 8018D14C 3C13801C */  lui         $s3, %hi(D_E16C50_801C22F0)
/* E1C880 8018D150 267322F0 */  addiu       $s3, $s3, %lo(D_E16C50_801C22F0)
/* E1C884 8018D154 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* E1C888 8018D158 0C0015C2 */  jal         Matrix_Push
/* E1C88C 8018D15C 02402025 */   or         $a0, $s2, $zero
/* E1C890 8018D160 02002025 */  or          $a0, $s0, $zero
/* E1C894 8018D164 0C02E374 */  jal         RCP_SetupDL
/* E1C898 8018D168 24050047 */   addiu      $a1, $zero, 0x47
/* E1C89C 8018D16C 4405B000 */  mfc1        $a1, $fs1
/* E1C8A0 8018D170 240E0001 */  addiu       $t6, $zero, 0x1
/* E1C8A4 8018D174 AFAE0010 */  sw          $t6, 0x10($sp)
/* E1C8A8 8018D178 8E440000 */  lw          $a0, 0x0($s2)
/* E1C8AC 8018D17C 3C064000 */  lui         $a2, (0x40000000 >> 16)
/* E1C8B0 8018D180 0C0016C0 */  jal         Matrix_Translate
/* E1C8B4 8018D184 3C07428C */   lui        $a3, (0x428C0000 >> 16)
/* E1C8B8 8018D188 3C01801C */  lui         $at, %hi(D_E16C50_801C0AB8)
/* E1C8BC 8018D18C C4200AB8 */  lwc1        $fv0, %lo(D_E16C50_801C0AB8)($at)
/* E1C8C0 8018D190 240F0001 */  addiu       $t7, $zero, 0x1
/* E1C8C4 8018D194 AFAF0010 */  sw          $t7, 0x10($sp)
/* E1C8C8 8018D198 44050000 */  mfc1        $a1, $fv0
/* E1C8CC 8018D19C 44060000 */  mfc1        $a2, $fv0
/* E1C8D0 8018D1A0 44070000 */  mfc1        $a3, $fv0
/* E1C8D4 8018D1A4 0C00170D */  jal         Matrix_Scale
/* E1C8D8 8018D1A8 8E440000 */   lw         $a0, 0x0($s2)
/* E1C8DC 8018D1AC 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C8E0 8018D1B0 85B8005C */  lh          $t8, 0x5C($t5)
/* E1C8E4 8018D1B4 33190001 */  andi        $t9, $t8, 0x1
/* E1C8E8 8018D1B8 5320000C */  beql        $t9, $zero, .LE16C50_8018D1EC
/* E1C8EC 8018D1BC 8E020000 */   lw         $v0, 0x0($s0)
/* E1C8F0 8018D1C0 8E020000 */  lw          $v0, 0x0($s0)
/* E1C8F4 8018D1C4 3C18FF00 */  lui         $t8, (0xFF0000FF >> 16)
/* E1C8F8 8018D1C8 371800FF */  ori         $t8, $t8, (0xFF0000FF & 0xFFFF)
/* E1C8FC 8018D1CC 244E0008 */  addiu       $t6, $v0, 0x8
/* E1C900 8018D1D0 AE0E0000 */  sw          $t6, 0x0($s0)
/* E1C904 8018D1D4 3C0FFA00 */  lui         $t7, (0xFA000000 >> 16)
/* E1C908 8018D1D8 AC4F0000 */  sw          $t7, 0x0($v0)
/* E1C90C 8018D1DC AC580004 */  sw          $t8, 0x4($v0)
/* E1C910 8018D1E0 1000000E */  b           .LE16C50_8018D21C
/* E1C914 8018D1E4 00000000 */   nop
/* E1C918 8018D1E8 8E020000 */  lw          $v0, 0x0($s0)
.LE16C50_8018D1EC:
/* E1C91C 8018D1EC 3C0EFA00 */  lui         $t6, (0xFA000000 >> 16)
/* E1C920 8018D1F0 2401FF00 */  addiu       $at, $zero, -0x100
/* E1C924 8018D1F4 24590008 */  addiu       $t9, $v0, 0x8
/* E1C928 8018D1F8 AE190000 */  sw          $t9, 0x0($s0)
/* E1C92C 8018D1FC AC4E0000 */  sw          $t6, 0x0($v0)
/* E1C930 8018D200 C6660024 */  lwc1        $ft1, 0x24($s3)
/* E1C934 8018D204 4600320D */  trunc.w.s   $ft2, $ft1
/* E1C938 8018D208 44184000 */  mfc1        $t8, $ft2
/* E1C93C 8018D20C 00000000 */  nop
/* E1C940 8018D210 331900FF */  andi        $t9, $t8, 0xFF
/* E1C944 8018D214 03217025 */  or          $t6, $t9, $at
/* E1C948 8018D218 AC4E0004 */  sw          $t6, 0x4($v0)
.LE16C50_8018D21C:
/* E1C94C 8018D21C 0C001BAE */  jal         Matrix_SetGfxMtx
/* E1C950 8018D220 02002025 */   or         $a0, $s0, $zero
/* E1C954 8018D224 3C110600 */  lui         $s1, (0x6000000 >> 16)
/* E1C958 8018D228 8E020000 */  lw          $v0, 0x0($s0)
/* E1C95C 8018D22C 3C180602 */  lui         $t8, %hi(D_601B2B0)
/* E1C960 8018D230 2718B2B0 */  addiu       $t8, $t8, %lo(D_601B2B0)
/* E1C964 8018D234 244F0008 */  addiu       $t7, $v0, 0x8
/* E1C968 8018D238 AE0F0000 */  sw          $t7, 0x0($s0)
/* E1C96C 8018D23C AC580004 */  sw          $t8, 0x4($v0)
/* E1C970 8018D240 AC510000 */  sw          $s1, 0x0($v0)
/* E1C974 8018D244 0C0015D0 */  jal         Matrix_Pop
/* E1C978 8018D248 02402025 */   or         $a0, $s2, $zero
/* E1C97C 8018D24C 02002025 */  or          $a0, $s0, $zero
/* E1C980 8018D250 0C02E374 */  jal         RCP_SetupDL
/* E1C984 8018D254 24050047 */   addiu      $a1, $zero, 0x47
/* E1C988 8018D258 3C01437F */  lui         $at, (0x437F0000 >> 16)
/* E1C98C 8018D25C 44815000 */  mtc1        $at, $ft3
/* E1C990 8018D260 C6700024 */  lwc1        $ft4, 0x24($s3)
/* E1C994 8018D264 8FAD0238 */  lw          $t5, 0x238($sp)
/* E1C998 8018D268 46105032 */  c.eq.s      $ft3, $ft4
/* E1C99C 8018D26C 00000000 */  nop
/* E1C9A0 8018D270 4503001A */  bc1tl       .LE16C50_8018D2DC
/* E1C9A4 8018D274 8E020000 */   lw         $v0, 0x0($s0)
/* E1C9A8 8018D278 8E020000 */  lw          $v0, 0x0($s0)
/* E1C9AC 8018D27C 3C0EFA00 */  lui         $t6, (0xFA000000 >> 16)
/* E1C9B0 8018D280 24590008 */  addiu       $t9, $v0, 0x8
/* E1C9B4 8018D284 AE190000 */  sw          $t9, 0x0($s0)
/* E1C9B8 8018D288 AC4E0000 */  sw          $t6, 0x0($v0)
/* E1C9BC 8018D28C C6720024 */  lwc1        $ft5, 0x24($s3)
/* E1C9C0 8018D290 85AF00B4 */  lh          $t7, 0xB4($t5)
/* E1C9C4 8018D294 4600910D */  trunc.w.s   $ft0, $ft5
/* E1C9C8 8018D298 44182000 */  mfc1        $t8, $ft0
/* E1C9CC 8018D29C 00000000 */  nop
/* E1C9D0 8018D2A0 331900FF */  andi        $t9, $t8, 0xFF
/* E1C9D4 8018D2A4 000FC600 */  sll         $t8, $t7, 24
/* E1C9D8 8018D2A8 85AF00B6 */  lh          $t7, 0xB6($t5)
/* E1C9DC 8018D2AC 03387025 */  or          $t6, $t9, $t8
/* E1C9E0 8018D2B0 31F900FF */  andi        $t9, $t7, 0xFF
/* E1C9E4 8018D2B4 0019C400 */  sll         $t8, $t9, 16
/* E1C9E8 8018D2B8 85B900B8 */  lh          $t9, 0xB8($t5)
/* E1C9EC 8018D2BC 01D87825 */  or          $t7, $t6, $t8
/* E1C9F0 8018D2C0 332E00FF */  andi        $t6, $t9, 0xFF
/* E1C9F4 8018D2C4 000EC200 */  sll         $t8, $t6, 8
/* E1C9F8 8018D2C8 01F8C825 */  or          $t9, $t7, $t8
/* E1C9FC 8018D2CC AC590004 */  sw          $t9, 0x4($v0)
/* E1CA00 8018D2D0 10000018 */  b           .LE16C50_8018D334
/* E1CA04 8018D2D4 3C014294 */   lui        $at, (0x42940000 >> 16)
/* E1CA08 8018D2D8 8E020000 */  lw          $v0, 0x0($s0)
.LE16C50_8018D2DC:
/* E1CA0C 8018D2DC 3C0FFA00 */  lui         $t7, (0xFA000000 >> 16)
/* E1CA10 8018D2E0 244E0008 */  addiu       $t6, $v0, 0x8
/* E1CA14 8018D2E4 AE0E0000 */  sw          $t6, 0x0($s0)
/* E1CA18 8018D2E8 AC4F0000 */  sw          $t7, 0x0($v0)
/* E1CA1C 8018D2EC C5A6014C */  lwc1        $ft1, 0x14C($t5)
/* E1CA20 8018D2F0 85B800B4 */  lh          $t8, 0xB4($t5)
/* E1CA24 8018D2F4 4600320D */  trunc.w.s   $ft2, $ft1
/* E1CA28 8018D2F8 44194000 */  mfc1        $t9, $ft2
/* E1CA2C 8018D2FC 00000000 */  nop
/* E1CA30 8018D300 332E00FF */  andi        $t6, $t9, 0xFF
/* E1CA34 8018D304 0018CE00 */  sll         $t9, $t8, 24
/* E1CA38 8018D308 85B800B6 */  lh          $t8, 0xB6($t5)
/* E1CA3C 8018D30C 01D97825 */  or          $t7, $t6, $t9
/* E1CA40 8018D310 330E00FF */  andi        $t6, $t8, 0xFF
/* E1CA44 8018D314 000ECC00 */  sll         $t9, $t6, 16
/* E1CA48 8018D318 85AE00B8 */  lh          $t6, 0xB8($t5)
/* E1CA4C 8018D31C 01F9C025 */  or          $t8, $t7, $t9
/* E1CA50 8018D320 31CF00FF */  andi        $t7, $t6, 0xFF
/* E1CA54 8018D324 000FCA00 */  sll         $t9, $t7, 8
/* E1CA58 8018D328 03197025 */  or          $t6, $t8, $t9
/* E1CA5C 8018D32C AC4E0004 */  sw          $t6, 0x4($v0)
/* E1CA60 8018D330 3C014294 */  lui         $at, (0x42940000 >> 16)
.LE16C50_8018D334:
/* E1CA64 8018D334 4481A000 */  mtc1        $at, $fs0
/* E1CA68 8018D338 4405B000 */  mfc1        $a1, $fs1
/* E1CA6C 8018D33C 4406B000 */  mfc1        $a2, $fs1
/* E1CA70 8018D340 240F0001 */  addiu       $t7, $zero, 0x1
/* E1CA74 8018D344 4407A000 */  mfc1        $a3, $fs0
/* E1CA78 8018D348 AFAF0010 */  sw          $t7, 0x10($sp)
/* E1CA7C 8018D34C 0C0016C0 */  jal         Matrix_Translate
/* E1CA80 8018D350 8E440000 */   lw         $a0, 0x0($s2)
/* E1CA84 8018D354 0C001BAE */  jal         Matrix_SetGfxMtx
/* E1CA88 8018D358 02002025 */   or         $a0, $s0, $zero
/* E1CA8C 8018D35C 8E020000 */  lw          $v0, 0x0($s0)
/* E1CA90 8018D360 3C190601 */  lui         $t9, %hi(D_6011910)
/* E1CA94 8018D364 27391910 */  addiu       $t9, $t9, %lo(D_6011910)
/* E1CA98 8018D368 24580008 */  addiu       $t8, $v0, 0x8
/* E1CA9C 8018D36C AE180000 */  sw          $t8, 0x0($s0)
/* E1CAA0 8018D370 AC590004 */  sw          $t9, 0x4($v0)
/* E1CAA4 8018D374 AC510000 */  sw          $s1, 0x0($v0)
/* E1CAA8 8018D378 4405B000 */  mfc1        $a1, $fs1
/* E1CAAC 8018D37C 4406B000 */  mfc1        $a2, $fs1
/* E1CAB0 8018D380 4407A000 */  mfc1        $a3, $fs0
/* E1CAB4 8018D384 240E0001 */  addiu       $t6, $zero, 0x1
/* E1CAB8 8018D388 AFAE0010 */  sw          $t6, 0x10($sp)
/* E1CABC 8018D38C 0C0016C0 */  jal         Matrix_Translate
/* E1CAC0 8018D390 8E440000 */   lw         $a0, 0x0($s2)
.LE16C50_8018D394:
/* E1CAC4 8018D394 8FBF005C */  lw          $ra, 0x5C($sp)
.LE16C50_8018D398:
/* E1CAC8 8018D398 D7B40028 */  ldc1        $fs0, 0x28($sp)
/* E1CACC 8018D39C D7B60030 */  ldc1        $fs1, 0x30($sp)
/* E1CAD0 8018D3A0 8FB00038 */  lw          $s0, 0x38($sp)
/* E1CAD4 8018D3A4 8FB1003C */  lw          $s1, 0x3C($sp)
/* E1CAD8 8018D3A8 8FB20040 */  lw          $s2, 0x40($sp)
/* E1CADC 8018D3AC 8FB30044 */  lw          $s3, 0x44($sp)
/* E1CAE0 8018D3B0 8FB40048 */  lw          $s4, 0x48($sp)
/* E1CAE4 8018D3B4 8FB5004C */  lw          $s5, 0x4C($sp)
/* E1CAE8 8018D3B8 8FB60050 */  lw          $s6, 0x50($sp)
/* E1CAEC 8018D3BC 8FB70054 */  lw          $s7, 0x54($sp)
/* E1CAF0 8018D3C0 8FBE0058 */  lw          $fp, 0x58($sp)
/* E1CAF4 8018D3C4 03E00008 */  jr          $ra
/* E1CAF8 8018D3C8 27BD0238 */   addiu      $sp, $sp, 0x238
glabel func_E16C50_8018D3CC
/* E1CAFC 8018D3CC 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E1CB00 8018D3D0 AFBF0024 */  sw          $ra, 0x24($sp)
/* E1CB04 8018D3D4 AFB00020 */  sw          $s0, 0x20($sp)
/* E1CB08 8018D3D8 AFA40028 */  sw          $a0, 0x28($sp)
/* E1CB0C 8018D3DC AFA5002C */  sw          $a1, 0x2C($sp)
/* E1CB10 8018D3E0 AFA60030 */  sw          $a2, 0x30($sp)
/* E1CB14 8018D3E4 AFA70034 */  sw          $a3, 0x34($sp)
/* E1CB18 8018D3E8 3C108017 */  lui         $s0, %hi(gPlayerShots)
/* E1CB1C 8018D3EC 3C028017 */  lui         $v0, %hi(gPlayerShots + 0x460)
/* E1CB20 8018D3F0 244244B0 */  addiu       $v0, $v0, %lo(gPlayerShots + 0x460)
/* E1CB24 8018D3F4 26104050 */  addiu       $s0, $s0, %lo(gPlayerShots)
/* E1CB28 8018D3F8 920E0000 */  lbu         $t6, 0x0($s0)
.LE16C50_8018D3FC:
/* E1CB2C 8018D3FC 55C00031 */  bnel        $t6, $zero, .LE16C50_8018D4C4
/* E1CB30 8018D400 26100070 */   addiu      $s0, $s0, 0x70
/* E1CB34 8018D404 0C00D792 */  jal         PlayerShot_Initialize
/* E1CB38 8018D408 02002025 */   or         $a0, $s0, $zero
/* E1CB3C 8018D40C C7A40040 */  lwc1        $ft0, 0x40($sp)
/* E1CB40 8018D410 C7A60038 */  lwc1        $ft1, 0x38($sp)
/* E1CB44 8018D414 C7B00030 */  lwc1        $ft4, 0x30($sp)
/* E1CB48 8018D418 C7A8003C */  lwc1        $ft2, 0x3C($sp)
/* E1CB4C 8018D41C 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E1CB50 8018D420 E6040028 */  swc1        $ft0, 0x28($s0)
/* E1CB54 8018D424 E6060020 */  swc1        $ft1, 0x20($s0)
/* E1CB58 8018D428 C7AA002C */  lwc1        $ft3, 0x2C($sp)
/* E1CB5C 8018D42C 44813000 */  mtc1        $at, $ft1
/* E1CB60 8018D430 C7A40044 */  lwc1        $ft0, 0x44($sp)
/* E1CB64 8018D434 C7B20034 */  lwc1        $ft5, 0x34($sp)
/* E1CB68 8018D438 E6100008 */  swc1        $ft4, 0x8($s0)
/* E1CB6C 8018D43C C7B0004C */  lwc1        $ft4, 0x4C($sp)
/* E1CB70 8018D440 E6080024 */  swc1        $ft2, 0x24($s0)
/* E1CB74 8018D444 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1CB78 8018D448 E60A0004 */  swc1        $ft3, 0x4($s0)
/* E1CB7C 8018D44C C7AA0048 */  lwc1        $ft3, 0x48($sp)
/* E1CB80 8018D450 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1CB84 8018D454 3C08800C */  lui         $t0, %hi(D_800C5D3C)
/* E1CB88 8018D458 E612000C */  swc1        $ft5, 0xC($s0)
/* E1CB8C 8018D45C 46008487 */  neg.s       $ft5, $ft4
/* E1CB90 8018D460 24020001 */  addiu       $v0, $zero, 0x1
/* E1CB94 8018D464 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1CB98 8018D468 240F0001 */  addiu       $t7, $zero, 0x1
/* E1CB9C 8018D46C 24180096 */  addiu       $t8, $zero, 0x96
/* E1CBA0 8018D470 24190064 */  addiu       $t9, $zero, 0x64
/* E1CBA4 8018D474 25085D3C */  addiu       $t0, $t0, %lo(D_800C5D3C)
/* E1CBA8 8018D478 3C042900 */  lui         $a0, (0x2900000D >> 16)
/* E1CBAC 8018D47C A2020000 */  sb          $v0, 0x0($s0)
/* E1CBB0 8018D480 E6080010 */  swc1        $ft2, 0x10($s0)
/* E1CBB4 8018D484 E6120018 */  swc1        $ft5, 0x18($s0)
/* E1CBB8 8018D488 AE0F0058 */  sw          $t7, 0x58($s0)
/* E1CBBC 8018D48C AE000060 */  sw          $zero, 0x60($s0)
/* E1CBC0 8018D490 A6020002 */  sh          $v0, 0x2($s0)
/* E1CBC4 8018D494 AE180064 */  sw          $t8, 0x64($s0)
/* E1CBC8 8018D498 AE190068 */  sw          $t9, 0x68($s0)
/* E1CBCC 8018D49C 3484000D */  ori         $a0, $a0, (0x2900000D & 0xFFFF)
/* E1CBD0 8018D4A0 AFA80014 */  sw          $t0, 0x14($sp)
/* E1CBD4 8018D4A4 AFA70010 */  sw          $a3, 0x10($sp)
/* E1CBD8 8018D4A8 26050038 */  addiu       $a1, $s0, 0x38
/* E1CBDC 8018D4AC 24060004 */  addiu       $a2, $zero, 0x4
/* E1CBE0 8018D4B0 0C006486 */  jal         Audio_PlaySfx
/* E1CBE4 8018D4B4 E60A0014 */   swc1       $ft3, 0x14($s0)
/* E1CBE8 8018D4B8 10000005 */  b           .LE16C50_8018D4D0
/* E1CBEC 8018D4BC 8FBF0024 */   lw         $ra, 0x24($sp)
/* E1CBF0 8018D4C0 26100070 */  addiu       $s0, $s0, 0x70
.LE16C50_8018D4C4:
/* E1CBF4 8018D4C4 5602FFCD */  bnel        $s0, $v0, .LE16C50_8018D3FC
/* E1CBF8 8018D4C8 920E0000 */   lbu        $t6, 0x0($s0)
/* E1CBFC 8018D4CC 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_8018D4D0:
/* E1CC00 8018D4D0 8FB00020 */  lw          $s0, 0x20($sp)
/* E1CC04 8018D4D4 27BD0028 */  addiu       $sp, $sp, 0x28
/* E1CC08 8018D4D8 03E00008 */  jr          $ra
/* E1CC0C 8018D4DC 00000000 */   nop
glabel func_E16C50_8018D4E0
/* E1CC10 8018D4E0 27BDFFC0 */  addiu       $sp, $sp, -0x40
/* E1CC14 8018D4E4 AFB10034 */  sw          $s1, 0x34($sp)
/* E1CC18 8018D4E8 44800000 */  mtc1        $zero, $fv0
/* E1CC1C 8018D4EC 00808825 */  or          $s1, $a0, $zero
/* E1CC20 8018D4F0 AFBF003C */  sw          $ra, 0x3C($sp)
/* E1CC24 8018D4F4 AFB20038 */  sw          $s2, 0x38($sp)
/* E1CC28 8018D4F8 AFB00030 */  sw          $s0, 0x30($sp)
/* E1CC2C 8018D4FC F7B40028 */  sdc1        $fs0, 0x28($sp)
/* E1CC30 8018D500 C62C0004 */  lwc1        $fa0, 0x4($s1)
/* E1CC34 8018D504 C62E0008 */  lwc1        $fa1, 0x8($s1)
/* E1CC38 8018D508 8E26000C */  lw          $a2, 0xC($s1)
/* E1CC3C 8018D50C 3C014080 */  lui         $at, (0x40800000 >> 16)
/* E1CC40 8018D510 44812000 */  mtc1        $at, $ft0
/* E1CC44 8018D514 44070000 */  mfc1        $a3, $fv0
/* E1CC48 8018D518 240E0014 */  addiu       $t6, $zero, 0x14
/* E1CC4C 8018D51C AFAE001C */  sw          $t6, 0x1C($sp)
/* E1CC50 8018D520 E7A00014 */  swc1        $fv0, 0x14($sp)
/* E1CC54 8018D524 E7A00010 */  swc1        $fv0, 0x10($sp)
/* E1CC58 8018D528 0C01EFFF */  jal         func_8007BFFC
/* E1CC5C 8018D52C E7A40018 */   swc1       $ft0, 0x18($sp)
/* E1CC60 8018D530 C62C0004 */  lwc1        $fa0, 0x4($s1)
/* E1CC64 8018D534 C62E0008 */  lwc1        $fa1, 0x8($s1)
/* E1CC68 8018D538 8E26000C */  lw          $a2, 0xC($s1)
/* E1CC6C 8018D53C 0C01F4B2 */  jal         func_8007D2C8
/* E1CC70 8018D540 3C0740E0 */   lui        $a3, (0x40E00000 >> 16)
/* E1CC74 8018D544 C62C0004 */  lwc1        $fa0, 0x4($s1)
/* E1CC78 8018D548 C62E0008 */  lwc1        $fa1, 0x8($s1)
/* E1CC7C 8018D54C 8E26000C */  lw          $a2, 0xC($s1)
/* E1CC80 8018D550 240F0005 */  addiu       $t7, $zero, 0x5
/* E1CC84 8018D554 AFAF0010 */  sw          $t7, 0x10($sp)
/* E1CC88 8018D558 0C01ECD1 */  jal         func_8007B344
/* E1CC8C 8018D55C 3C0740C0 */   lui        $a3, (0x40C00000 >> 16)
/* E1CC90 8018D560 02202025 */  or          $a0, $s1, $zero
/* E1CC94 8018D564 0C0183EF */  jal         Object_Kill
/* E1CC98 8018D568 26250100 */   addiu      $a1, $s1, 0x100
/* E1CC9C 8018D56C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1CCA0 8018D570 4481A000 */  mtc1        $at, $fs0
/* E1CCA4 8018D574 00008025 */  or          $s0, $zero, $zero
/* E1CCA8 8018D578 2412000F */  addiu       $s2, $zero, 0xF
/* E1CCAC 8018D57C 4407A000 */  mfc1        $a3, $fs0
.LE16C50_8018D580:
/* E1CCB0 8018D580 C62C0004 */  lwc1        $fa0, 0x4($s1)
/* E1CCB4 8018D584 C62E0008 */  lwc1        $fa1, 0x8($s1)
/* E1CCB8 8018D588 0C01E533 */  jal         func_800794CC
/* E1CCBC 8018D58C 8E26000C */   lw         $a2, 0xC($s1)
/* E1CCC0 8018D590 26100001 */  addiu       $s0, $s0, 0x1
/* E1CCC4 8018D594 5612FFFA */  bnel        $s0, $s2, .LE16C50_8018D580
/* E1CCC8 8018D598 4407A000 */   mfc1       $a3, $fs0
/* E1CCCC 8018D59C 3C052903 */  lui         $a1, (0x2903B009 >> 16)
/* E1CCD0 8018D5A0 34A5B009 */  ori         $a1, $a1, (0x2903B009 & 0xFFFF)
/* E1CCD4 8018D5A4 0C01E9BC */  jal         func_8007A6F0
/* E1CCD8 8018D5A8 26240004 */   addiu      $a0, $s1, 0x4
/* E1CCDC 8018D5AC 8FBF003C */  lw          $ra, 0x3C($sp)
/* E1CCE0 8018D5B0 D7B40028 */  ldc1        $fs0, 0x28($sp)
/* E1CCE4 8018D5B4 8FB00030 */  lw          $s0, 0x30($sp)
/* E1CCE8 8018D5B8 8FB10034 */  lw          $s1, 0x34($sp)
/* E1CCEC 8018D5BC 8FB20038 */  lw          $s2, 0x38($sp)
/* E1CCF0 8018D5C0 03E00008 */  jr          $ra
/* E1CCF4 8018D5C4 27BD0040 */   addiu      $sp, $sp, 0x40
.section .late_rodata
dlabel D_E16C50_801C0ABC
/* E501EC 801C0ABC 456A6000 */ .float 3750

dlabel D_E16C50_801C0AC0
/* E501F0 801C0AC0 464B2000 */ .float 13000


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8018D5C8
/* E1CCF8 8018D5C8 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* E1CCFC 8018D5CC AFBF001C */  sw          $ra, 0x1C($sp)
/* E1CD00 8018D5D0 3C048016 */  lui         $a0, %hi(gObjects2F4)
/* E1CD04 8018D5D4 0C0184F1 */  jal         Object_2F4_Initialize
/* E1CD08 8018D5D8 24843FE0 */   addiu      $a0, $a0, %lo(gObjects2F4)
/* E1CD0C 8018D5DC 240E0001 */  addiu       $t6, $zero, 0x1
/* E1CD10 8018D5E0 3C018016 */  lui         $at, %hi(gObjects2F4)
/* E1CD14 8018D5E4 A02E3FE0 */  sb          $t6, %lo(gObjects2F4)($at)
/* E1CD18 8018D5E8 3C0144C8 */  lui         $at, (0x44C80000 >> 16)
/* E1CD1C 8018D5EC 44812000 */  mtc1        $at, $ft0
/* E1CD20 8018D5F0 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x4)
/* E1CD24 8018D5F4 240F0001 */  addiu       $t7, $zero, 0x1
/* E1CD28 8018D5F8 E4243FE4 */  swc1        $ft0, %lo(gObjects2F4 + 0x4)($at)
/* E1CD2C 8018D5FC 3C01801C */  lui         $at, %hi(D_E16C50_801C0ABC)
/* E1CD30 8018D600 C4260ABC */  lwc1        $ft1, %lo(D_E16C50_801C0ABC)($at)
/* E1CD34 8018D604 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x8)
/* E1CD38 8018D608 44805000 */  mtc1        $zero, $ft3
/* E1CD3C 8018D60C E4263FE8 */  swc1        $ft1, %lo(gObjects2F4 + 0x8)($at)
/* E1CD40 8018D610 3C01801C */  lui         $at, %hi(D_E16C50_801C0AC0)
/* E1CD44 8018D614 C4280AC0 */  lwc1        $ft2, %lo(D_E16C50_801C0AC0)($at)
/* E1CD48 8018D618 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xC)
/* E1CD4C 8018D61C 2418005A */  addiu       $t8, $zero, 0x5A
/* E1CD50 8018D620 E4283FEC */  swc1        $ft2, %lo(gObjects2F4 + 0xC)($at)
/* E1CD54 8018D624 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xB6)
/* E1CD58 8018D628 A42F4096 */  sh          $t7, %lo(gObjects2F4 + 0xB6)($at)
/* E1CD5C 8018D62C 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xB8)
/* E1CD60 8018D630 A4384098 */  sh          $t8, %lo(gObjects2F4 + 0xB8)($at)
/* E1CD64 8018D634 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x114)
/* E1CD68 8018D638 E42A40F4 */  swc1        $ft3, %lo(gObjects2F4 + 0x114)($at)
/* E1CD6C 8018D63C 240500C3 */  addiu       $a1, $zero, 0xC3
/* E1CD70 8018D640 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x2)
/* E1CD74 8018D644 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1C)
/* E1CD78 8018D648 24843FFC */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1C)
/* E1CD7C 8018D64C 0C0184AE */  jal         Object_SetInfo
/* E1CD80 8018D650 A4253FE2 */   sh         $a1, %lo(gObjects2F4 + 0x2)($at)
/* E1CD84 8018D654 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1CD88 8018D658 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E1CD8C 8018D65C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1CD90 8018D660 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E1CD94 8018D664 3C041103 */  lui         $a0, (0x11030010 >> 16)
/* E1CD98 8018D668 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0x100)
/* E1CD9C 8018D66C 24A540E0 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0x100)
/* E1CDA0 8018D670 34840010 */  ori         $a0, $a0, (0x11030010 & 0xFFFF)
/* E1CDA4 8018D674 AFB90014 */  sw          $t9, 0x14($sp)
/* E1CDA8 8018D678 AFA70010 */  sw          $a3, 0x10($sp)
/* E1CDAC 8018D67C 0C006486 */  jal         Audio_PlaySfx
/* E1CDB0 8018D680 00003025 */   or         $a2, $zero, $zero
/* E1CDB4 8018D684 8FBF001C */  lw          $ra, 0x1C($sp)
/* E1CDB8 8018D688 27BD0020 */  addiu       $sp, $sp, 0x20
/* E1CDBC 8018D68C 03E00008 */  jr          $ra
/* E1CDC0 8018D690 00000000 */   nop
glabel func_E16C50_8018D694
/* E1CDC4 8018D694 27BDFF98 */  addiu       $sp, $sp, -0x68
/* E1CDC8 8018D698 AFB00020 */  sw          $s0, 0x20($sp)
/* E1CDCC 8018D69C 00808025 */  or          $s0, $a0, $zero
/* E1CDD0 8018D6A0 AFBF0024 */  sw          $ra, 0x24($sp)
/* E1CDD4 8018D6A4 AFA5006C */  sw          $a1, 0x6C($sp)
/* E1CDD8 8018D6A8 3C0F801C */  lui         $t7, %hi(D_E16C50_801BF4DC)
/* E1CDDC 8018D6AC 25EFF4DC */  addiu       $t7, $t7, %lo(D_E16C50_801BF4DC)
/* E1CDE0 8018D6B0 25E8003C */  addiu       $t0, $t7, 0x3C
/* E1CDE4 8018D6B4 27AE002C */  addiu       $t6, $sp, 0x2C
.LE16C50_8018D6B8:
/* E1CDE8 8018D6B8 8DE10000 */  lw          $at, 0x0($t7)
/* E1CDEC 8018D6BC 25EF000C */  addiu       $t7, $t7, 0xC
/* E1CDF0 8018D6C0 25CE000C */  addiu       $t6, $t6, 0xC
/* E1CDF4 8018D6C4 ADC1FFF4 */  sw          $at, -0xC($t6)
/* E1CDF8 8018D6C8 8DE1FFF8 */  lw          $at, -0x8($t7)
/* E1CDFC 8018D6CC ADC1FFF8 */  sw          $at, -0x8($t6)
/* E1CE00 8018D6D0 8DE1FFFC */  lw          $at, -0x4($t7)
/* E1CE04 8018D6D4 15E8FFF8 */  bne         $t7, $t0, .LE16C50_8018D6B8
/* E1CE08 8018D6D8 ADC1FFFC */   sw         $at, -0x4($t6)
/* E1CE0C 8018D6DC 0C0184F1 */  jal         Object_2F4_Initialize
/* E1CE10 8018D6E0 02002025 */   or         $a0, $s0, $zero
/* E1CE14 8018D6E4 24090002 */  addiu       $t1, $zero, 0x2
/* E1CE18 8018D6E8 240A00C3 */  addiu       $t2, $zero, 0xC3
/* E1CE1C 8018D6EC A2090000 */  sb          $t1, 0x0($s0)
/* E1CE20 8018D6F0 A60A0002 */  sh          $t2, 0x2($s0)
/* E1CE24 8018D6F4 8FAB006C */  lw          $t3, 0x6C($sp)
/* E1CE28 8018D6F8 27AD002C */  addiu       $t5, $sp, 0x2C
/* E1CE2C 8018D6FC 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E1CE30 8018D700 000B6080 */  sll         $t4, $t3, 2
/* E1CE34 8018D704 018B6023 */  subu        $t4, $t4, $t3
/* E1CE38 8018D708 000C6080 */  sll         $t4, $t4, 2
/* E1CE3C 8018D70C 018D1021 */  addu        $v0, $t4, $t5
/* E1CE40 8018D710 C4440000 */  lwc1        $ft0, 0x0($v0)
/* E1CE44 8018D714 44813000 */  mtc1        $at, $ft1
/* E1CE48 8018D718 3C0143AF */  lui         $at, (0x43AF0000 >> 16)
/* E1CE4C 8018D71C 44818000 */  mtc1        $at, $ft4
/* E1CE50 8018D720 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1CE54 8018D724 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E1CE58 8018D728 44813000 */  mtc1        $at, $ft1
/* E1CE5C 8018D72C 3C0142B4 */  lui         $at, (0x42B40000 >> 16)
/* E1CE60 8018D730 E6080004 */  swc1        $ft2, 0x4($s0)
/* E1CE64 8018D734 C44A0004 */  lwc1        $ft3, 0x4($v0)
/* E1CE68 8018D738 24030001 */  addiu       $v1, $zero, 0x1
/* E1CE6C 8018D73C 2419001C */  addiu       $t9, $zero, 0x1C
/* E1CE70 8018D740 46105480 */  add.s       $ft5, $ft3, $ft4
/* E1CE74 8018D744 44815000 */  mtc1        $at, $ft3
/* E1CE78 8018D748 3C013FC0 */  lui         $at, (0x3FC00000 >> 16)
/* E1CE7C 8018D74C 44818000 */  mtc1        $at, $ft4
/* E1CE80 8018D750 E6120008 */  swc1        $ft5, 0x8($s0)
/* E1CE84 8018D754 C4440008 */  lwc1        $ft0, 0x8($v0)
/* E1CE88 8018D758 A60300B8 */  sh          $v1, 0xB8($s0)
/* E1CE8C 8018D75C A61900B6 */  sh          $t9, 0xB6($s0)
/* E1CE90 8018D760 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1CE94 8018D764 AE03007C */  sw          $v1, 0x7C($s0)
/* E1CE98 8018D768 E60A00F8 */  swc1        $ft3, 0xF8($s0)
/* E1CE9C 8018D76C E6100114 */  swc1        $ft4, 0x114($s0)
/* E1CEA0 8018D770 0C0013FA */  jal         Rand_ZeroOneSeeded
/* E1CEA4 8018D774 E608000C */   swc1       $ft2, 0xC($s0)
/* E1CEA8 8018D778 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E1CEAC 8018D77C 44819000 */  mtc1        $at, $ft5
/* E1CEB0 8018D780 00000000 */  nop
/* E1CEB4 8018D784 46120102 */  mul.s       $ft0, $fv0, $ft5
/* E1CEB8 8018D788 0C0013FA */  jal         Rand_ZeroOneSeeded
/* E1CEBC 8018D78C E6040130 */   swc1       $ft0, 0x130($s0)
/* E1CEC0 8018D790 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E1CEC4 8018D794 44813000 */  mtc1        $at, $ft1
/* E1CEC8 8018D798 00000000 */  nop
/* E1CECC 8018D79C 46060202 */  mul.s       $ft2, $fv0, $ft1
/* E1CED0 8018D7A0 0C0013FA */  jal         Rand_ZeroOneSeeded
/* E1CED4 8018D7A4 E6080134 */   swc1       $ft2, 0x134($s0)
/* E1CED8 8018D7A8 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E1CEDC 8018D7AC 44815000 */  mtc1        $at, $ft3
/* E1CEE0 8018D7B0 2604001C */  addiu       $a0, $s0, 0x1C
/* E1CEE4 8018D7B4 96050002 */  lhu         $a1, 0x2($s0)
/* E1CEE8 8018D7B8 460A0402 */  mul.s       $ft4, $fv0, $ft3
/* E1CEEC 8018D7BC 0C0184AE */  jal         Object_SetInfo
/* E1CEF0 8018D7C0 E6100138 */   swc1       $ft4, 0x138($s0)
/* E1CEF4 8018D7C4 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1CEF8 8018D7C8 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E1CEFC 8018D7CC 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1CF00 8018D7D0 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E1CF04 8018D7D4 3C043100 */  lui         $a0, (0x31000011 >> 16)
/* E1CF08 8018D7D8 34840011 */  ori         $a0, $a0, (0x31000011 & 0xFFFF)
/* E1CF0C 8018D7DC AFB80014 */  sw          $t8, 0x14($sp)
/* E1CF10 8018D7E0 AFA70010 */  sw          $a3, 0x10($sp)
/* E1CF14 8018D7E4 26050100 */  addiu       $a1, $s0, 0x100
/* E1CF18 8018D7E8 0C006486 */  jal         Audio_PlaySfx
/* E1CF1C 8018D7EC 24060004 */   addiu      $a2, $zero, 0x4
/* E1CF20 8018D7F0 8FBF0024 */  lw          $ra, 0x24($sp)
/* E1CF24 8018D7F4 8FB00020 */  lw          $s0, 0x20($sp)
/* E1CF28 8018D7F8 27BD0068 */  addiu       $sp, $sp, 0x68
/* E1CF2C 8018D7FC 03E00008 */  jr          $ra
/* E1CF30 8018D800 00000000 */   nop
glabel func_E16C50_8018D804
/* E1CF34 8018D804 27BDFFB0 */  addiu       $sp, $sp, -0x50
/* E1CF38 8018D808 AFB00020 */  sw          $s0, 0x20($sp)
/* E1CF3C 8018D80C 00808025 */  or          $s0, $a0, $zero
/* E1CF40 8018D810 AFBF0024 */  sw          $ra, 0x24($sp)
/* E1CF44 8018D814 AFA50054 */  sw          $a1, 0x54($sp)
/* E1CF48 8018D818 3C0F801C */  lui         $t7, %hi(D_E16C50_801BF518)
/* E1CF4C 8018D81C 25EFF518 */  addiu       $t7, $t7, %lo(D_E16C50_801BF518)
/* E1CF50 8018D820 25E80024 */  addiu       $t0, $t7, 0x24
/* E1CF54 8018D824 27AE002C */  addiu       $t6, $sp, 0x2C
.LE16C50_8018D828:
/* E1CF58 8018D828 8DE10000 */  lw          $at, 0x0($t7)
/* E1CF5C 8018D82C 25EF000C */  addiu       $t7, $t7, 0xC
/* E1CF60 8018D830 25CE000C */  addiu       $t6, $t6, 0xC
/* E1CF64 8018D834 ADC1FFF4 */  sw          $at, -0xC($t6)
/* E1CF68 8018D838 8DE1FFF8 */  lw          $at, -0x8($t7)
/* E1CF6C 8018D83C ADC1FFF8 */  sw          $at, -0x8($t6)
/* E1CF70 8018D840 8DE1FFFC */  lw          $at, -0x4($t7)
/* E1CF74 8018D844 15E8FFF8 */  bne         $t7, $t0, .LE16C50_8018D828
/* E1CF78 8018D848 ADC1FFFC */   sw         $at, -0x4($t6)
/* E1CF7C 8018D84C 3C038018 */  lui         $v1, %hi(gPlayer)
/* E1CF80 8018D850 8C638280 */  lw          $v1, %lo(gPlayer)($v1)
/* E1CF84 8018D854 02002025 */  or          $a0, $s0, $zero
/* E1CF88 8018D858 0C0184F1 */  jal         Object_2F4_Initialize
/* E1CF8C 8018D85C AFA30028 */   sw         $v1, 0x28($sp)
/* E1CF90 8018D860 8FA30028 */  lw          $v1, 0x28($sp)
/* E1CF94 8018D864 24090002 */  addiu       $t1, $zero, 0x2
/* E1CF98 8018D868 240A00C3 */  addiu       $t2, $zero, 0xC3
/* E1CF9C 8018D86C A2090000 */  sb          $t1, 0x0($s0)
/* E1CFA0 8018D870 A60A0002 */  sh          $t2, 0x2($s0)
/* E1CFA4 8018D874 8FAB0054 */  lw          $t3, 0x54($sp)
/* E1CFA8 8018D878 27AD002C */  addiu       $t5, $sp, 0x2C
/* E1CFAC 8018D87C C4660074 */  lwc1        $ft1, 0x74($v1)
/* E1CFB0 8018D880 000B6080 */  sll         $t4, $t3, 2
/* E1CFB4 8018D884 018B6023 */  subu        $t4, $t4, $t3
/* E1CFB8 8018D888 000C6080 */  sll         $t4, $t4, 2
/* E1CFBC 8018D88C 018D1021 */  addu        $v0, $t4, $t5
/* E1CFC0 8018D890 C4440000 */  lwc1        $ft0, 0x0($v0)
/* E1CFC4 8018D894 24190005 */  addiu       $t9, $zero, 0x5
/* E1CFC8 8018D898 24180001 */  addiu       $t8, $zero, 0x1
/* E1CFCC 8018D89C 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1CFD0 8018D8A0 3145FFFF */  andi        $a1, $t2, 0xFFFF
/* E1CFD4 8018D8A4 2604001C */  addiu       $a0, $s0, 0x1C
/* E1CFD8 8018D8A8 E6080004 */  swc1        $ft2, 0x4($s0)
/* E1CFDC 8018D8AC C44A0004 */  lwc1        $ft3, 0x4($v0)
/* E1CFE0 8018D8B0 C4700078 */  lwc1        $ft4, 0x78($v1)
/* E1CFE4 8018D8B4 46105480 */  add.s       $ft5, $ft3, $ft4
/* E1CFE8 8018D8B8 44805000 */  mtc1        $zero, $ft3
/* E1CFEC 8018D8BC E6120008 */  swc1        $ft5, 0x8($s0)
/* E1CFF0 8018D8C0 C4440008 */  lwc1        $ft0, 0x8($v0)
/* E1CFF4 8018D8C4 C466007C */  lwc1        $ft1, 0x7C($v1)
/* E1CFF8 8018D8C8 A61900B8 */  sh          $t9, 0xB8($s0)
/* E1CFFC 8018D8CC AE18007C */  sw          $t8, 0x7C($s0)
/* E1D000 8018D8D0 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1D004 8018D8D4 E60A0114 */  swc1        $ft3, 0x114($s0)
/* E1D008 8018D8D8 0C0184AE */  jal         Object_SetInfo
/* E1D00C 8018D8DC E608000C */   swc1       $ft2, 0xC($s0)
/* E1D010 8018D8E0 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1D014 8018D8E4 3C08800C */  lui         $t0, %hi(D_800C5D3C)
/* E1D018 8018D8E8 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1D01C 8018D8EC 25085D3C */  addiu       $t0, $t0, %lo(D_800C5D3C)
/* E1D020 8018D8F0 3C043100 */  lui         $a0, (0x3100000C >> 16)
/* E1D024 8018D8F4 3484000C */  ori         $a0, $a0, (0x3100000C & 0xFFFF)
/* E1D028 8018D8F8 AFA80014 */  sw          $t0, 0x14($sp)
/* E1D02C 8018D8FC AFA70010 */  sw          $a3, 0x10($sp)
/* E1D030 8018D900 26050100 */  addiu       $a1, $s0, 0x100
/* E1D034 8018D904 0C006486 */  jal         Audio_PlaySfx
/* E1D038 8018D908 24060004 */   addiu      $a2, $zero, 0x4
/* E1D03C 8018D90C 8FBF0024 */  lw          $ra, 0x24($sp)
/* E1D040 8018D910 8FB00020 */  lw          $s0, 0x20($sp)
/* E1D044 8018D914 27BD0050 */  addiu       $sp, $sp, 0x50
/* E1D048 8018D918 03E00008 */  jr          $ra
/* E1D04C 8018D91C 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C0AC4
/* E501F4 801C0AC4 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0AC8
/* E501F8 801C0AC8 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8018D920
/* E1D050 8018D920 27BDFF90 */  addiu       $sp, $sp, -0x70
/* E1D054 8018D924 F7B40028 */  sdc1        $fs0, 0x28($sp)
/* E1D058 8018D928 4480A000 */  mtc1        $zero, $fs0
/* E1D05C 8018D92C AFBF0034 */  sw          $ra, 0x34($sp)
/* E1D060 8018D930 AFA40070 */  sw          $a0, 0x70($sp)
/* E1D064 8018D934 8FAE0070 */  lw          $t6, 0x70($sp)
/* E1D068 8018D938 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E1D06C 8018D93C 44812000 */  mtc1        $at, $ft0
/* E1D070 8018D940 C5C00008 */  lwc1        $fv0, 0x8($t6)
/* E1D074 8018D944 4600A306 */  mov.s       $fa0, $fs0
/* E1D078 8018D948 46040181 */  sub.s       $ft1, $fv0, $ft0
/* E1D07C 8018D94C 46003381 */  sub.s       $fa1, $ft1, $fv0
/* E1D080 8018D950 0C001440 */  jal         Math_Atan2F
/* E1D084 8018D954 E7AE0064 */   swc1       $fa1, 0x64($sp)
/* E1D088 8018D958 0C027DDA */  jal         Math_RadToDeg
/* E1D08C 8018D95C 46000306 */   mov.s      $fa0, $fv0
/* E1D090 8018D960 C7A20064 */  lwc1        $fv1, 0x64($sp)
/* E1D094 8018D964 E7A00060 */  swc1        $fv0, 0x60($sp)
/* E1D098 8018D968 4600A306 */  mov.s       $fa0, $fs0
/* E1D09C 8018D96C 46021202 */  mul.s       $ft2, $fv1, $fv1
/* E1D0A0 8018D970 4608A000 */  add.s       $fv0, $fs0, $ft2
/* E1D0A4 8018D974 0C001440 */  jal         Math_Atan2F
/* E1D0A8 8018D978 46000384 */   sqrt.s     $fa1, $fv0
/* E1D0AC 8018D97C 0C027DDA */  jal         Math_RadToDeg
/* E1D0B0 8018D980 46000307 */   neg.s      $fa0, $fv0
/* E1D0B4 8018D984 3C01801C */  lui         $at, %hi(D_E16C50_801C0AC4)
/* E1D0B8 8018D988 C42A0AC4 */  lwc1        $ft3, %lo(D_E16C50_801C0AC4)($at)
/* E1D0BC 8018D98C C7B00060 */  lwc1        $ft4, 0x60($sp)
/* E1D0C0 8018D990 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1D0C4 8018D994 E7A0005C */  swc1        $fv0, 0x5C($sp)
/* E1D0C8 8018D998 46105482 */  mul.s       $ft5, $ft3, $ft4
/* E1D0CC 8018D99C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1D0D0 8018D9A0 00003025 */  or          $a2, $zero, $zero
/* E1D0D4 8018D9A4 44059000 */  mfc1        $a1, $ft5
/* E1D0D8 8018D9A8 0C0017A4 */  jal         Matrix_RotateY
/* E1D0DC 8018D9AC 00000000 */   nop
/* E1D0E0 8018D9B0 3C01801C */  lui         $at, %hi(D_E16C50_801C0AC8)
/* E1D0E4 8018D9B4 C4240AC8 */  lwc1        $ft0, %lo(D_E16C50_801C0AC8)($at)
/* E1D0E8 8018D9B8 C7A6005C */  lwc1        $ft1, 0x5C($sp)
/* E1D0EC 8018D9BC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1D0F0 8018D9C0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1D0F4 8018D9C4 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E1D0F8 8018D9C8 24060001 */  addiu       $a2, $zero, 0x1
/* E1D0FC 8018D9CC 44054000 */  mfc1        $a1, $ft2
/* E1D100 8018D9D0 0C001751 */  jal         Matrix_RotateX
/* E1D104 8018D9D4 00000000 */   nop
/* E1D108 8018D9D8 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E1D10C 8018D9DC 44815000 */  mtc1        $at, $ft3
/* E1D110 8018D9E0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1D114 8018D9E4 E7B40050 */  swc1        $fs0, 0x50($sp)
/* E1D118 8018D9E8 E7B40054 */  swc1        $fs0, 0x54($sp)
/* E1D11C 8018D9EC 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1D120 8018D9F0 27A50050 */  addiu       $a1, $sp, 0x50
/* E1D124 8018D9F4 27A60044 */  addiu       $a2, $sp, 0x44
/* E1D128 8018D9F8 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E1D12C 8018D9FC E7AA0058 */   swc1       $ft3, 0x58($sp)
/* E1D130 8018DA00 8FA20070 */  lw          $v0, 0x70($sp)
/* E1D134 8018DA04 C7B00044 */  lwc1        $ft4, 0x44($sp)
/* E1D138 8018DA08 C7B20048 */  lwc1        $ft5, 0x48($sp)
/* E1D13C 8018DA0C 8C450000 */  lw          $a1, 0x0($v0)
/* E1D140 8018DA10 8C460004 */  lw          $a2, 0x4($v0)
/* E1D144 8018DA14 8C470008 */  lw          $a3, 0x8($v0)
/* E1D148 8018DA18 C7A4004C */  lwc1        $ft0, 0x4C($sp)
/* E1D14C 8018DA1C C7A6005C */  lwc1        $ft1, 0x5C($sp)
/* E1D150 8018DA20 C7A80060 */  lwc1        $ft2, 0x60($sp)
/* E1D154 8018DA24 E7B40024 */  swc1        $fs0, 0x24($sp)
/* E1D158 8018DA28 24040064 */  addiu       $a0, $zero, 0x64
/* E1D15C 8018DA2C E7B00010 */  swc1        $ft4, 0x10($sp)
/* E1D160 8018DA30 E7B20014 */  swc1        $ft5, 0x14($sp)
/* E1D164 8018DA34 E7A40018 */  swc1        $ft0, 0x18($sp)
/* E1D168 8018DA38 E7A6001C */  swc1        $ft1, 0x1C($sp)
/* E1D16C 8018DA3C 0C0634F3 */  jal         func_E16C50_8018D3CC
/* E1D170 8018DA40 E7A80020 */   swc1       $ft2, 0x20($sp)
/* E1D174 8018DA44 8FBF0034 */  lw          $ra, 0x34($sp)
/* E1D178 8018DA48 D7B40028 */  ldc1        $fs0, 0x28($sp)
/* E1D17C 8018DA4C 27BD0070 */  addiu       $sp, $sp, 0x70
/* E1D180 8018DA50 03E00008 */  jr          $ra
/* E1D184 8018DA54 00000000 */   nop
.section .late_rodata
dlabel jtbl_E16C50_801C0ACC
/* E501FC 801C0ACC 8018DACC */ .word .LE16C50_8018DACC
/* E50200 801C0AD0 8018DB94 */ .word .LE16C50_8018DB94
/* E50204 801C0AD4 8018DBBC */ .word .LE16C50_8018DBBC
/* E50208 801C0AD8 8018DE94 */ .word .LE16C50_8018DE94
/* E5020C 801C0ADC 8018DE94 */ .word .LE16C50_8018DE94
/* E50210 801C0AE0 8018DC48 */ .word .LE16C50_8018DC48
/* E50214 801C0AE4 8018DC8C */ .word .LE16C50_8018DC8C
/* E50218 801C0AE8 8018DE94 */ .word .LE16C50_8018DE94
/* E5021C 801C0AEC 8018DE94 */ .word .LE16C50_8018DE94
/* E50220 801C0AF0 8018DE94 */ .word .LE16C50_8018DE94
/* E50224 801C0AF4 8018DC48 */ .word .LE16C50_8018DC48
/* E50228 801C0AF8 8018DC8C */ .word .LE16C50_8018DC8C
/* E5022C 801C0AFC 8018DE94 */ .word .LE16C50_8018DE94
/* E50230 801C0B00 8018DE94 */ .word .LE16C50_8018DE94
/* E50234 801C0B04 8018DE94 */ .word .LE16C50_8018DE94
/* E50238 801C0B08 8018DC48 */ .word .LE16C50_8018DC48
/* E5023C 801C0B0C 8018DC8C */ .word .LE16C50_8018DC8C

dlabel D_E16C50_801C0B10
/* E50240 801C0B10 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0B14
/* E50244 801C0B14 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0B18
/* E50248 801C0B18 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0B1C
/* E5024C 801C0B1C 3C23D70A */ .float 0.009999999776

dlabel D_E16C50_801C0B20
/* E50250 801C0B20 C479C000 */ .float -999

dlabel D_E16C50_801C0B24
/* E50254 801C0B24 C479C000 */ .float -999

dlabel D_E16C50_801C0B28
/* E50258 801C0B28 C479C000 */ .float -999

dlabel D_E16C50_801C0B2C
/* E5025C 801C0B2C 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0B30
/* E50260 801C0B30 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0B34
/* E50264 801C0B34 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0B38
/* E50268 801C0B38 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C0B3C
/* E5026C 801C0B3C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0B40
/* E50270 801C0B40 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8018DA58
/* E1D188 8018DA58 27BDFF98 */  addiu       $sp, $sp, -0x68
/* E1D18C 8018DA5C AFB00020 */  sw          $s0, 0x20($sp)
/* E1D190 8018DA60 00808025 */  or          $s0, $a0, $zero
/* E1D194 8018DA64 AFBF0024 */  sw          $ra, 0x24($sp)
/* E1D198 8018DA68 860300B8 */  lh          $v1, 0xB8($s0)
/* E1D19C 8018DA6C 2861005B */  slti        $at, $v1, 0x5B
/* E1D1A0 8018DA70 14200006 */  bnez        $at, .LE16C50_8018DA8C
/* E1D1A4 8018DA74 00601025 */   or         $v0, $v1, $zero
/* E1D1A8 8018DA78 2401005B */  addiu       $at, $zero, 0x5B
/* E1D1AC 8018DA7C 104100F6 */  beq         $v0, $at, .LE16C50_8018DE58
/* E1D1B0 8018DA80 26040008 */   addiu      $a0, $s0, 0x8
/* E1D1B4 8018DA84 10000104 */  b           .LE16C50_8018DE98
/* E1D1B8 8018DA88 3C014334 */   lui        $at, (0x43340000 >> 16)
.LE16C50_8018DA8C:
/* E1D1BC 8018DA8C 28410012 */  slti        $at, $v0, 0x12
/* E1D1C0 8018DA90 14200006 */  bnez        $at, .LE16C50_8018DAAC
/* E1D1C4 8018DA94 244EFFFF */   addiu      $t6, $v0, -0x1
/* E1D1C8 8018DA98 2401005A */  addiu       $at, $zero, 0x5A
/* E1D1CC 8018DA9C 504100FE */  beql        $v0, $at, .LE16C50_8018DE98
/* E1D1D0 8018DAA0 3C014334 */   lui        $at, (0x43340000 >> 16)
/* E1D1D4 8018DAA4 100000FC */  b           .LE16C50_8018DE98
/* E1D1D8 8018DAA8 3C014334 */   lui        $at, (0x43340000 >> 16)
.LE16C50_8018DAAC:
/* E1D1DC 8018DAAC 2DC10011 */  sltiu       $at, $t6, 0x11
/* E1D1E0 8018DAB0 102000F8 */  beqz        $at, .LE16C50_8018DE94
/* E1D1E4 8018DAB4 000E7080 */   sll        $t6, $t6, 2
/* E1D1E8 8018DAB8 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C0ACC)
/* E1D1EC 8018DABC 002E0821 */  addu        $at, $at, $t6
/* E1D1F0 8018DAC0 8C2E0ACC */  lw          $t6, %lo(jtbl_E16C50_801C0ACC)($at)
/* E1D1F4 8018DAC4 01C00008 */  jr          $t6
/* E1D1F8 8018DAC8 00000000 */   nop
.LE16C50_8018DACC:
/* E1D1FC 8018DACC 3C014020 */  lui         $at, (0x40200000 >> 16)
/* E1D200 8018DAD0 44813000 */  mtc1        $at, $ft1
/* E1D204 8018DAD4 C6040130 */  lwc1        $ft0, 0x130($s0)
/* E1D208 8018DAD8 3C01801C */  lui         $at, %hi(D_E16C50_801C0B10)
/* E1D20C 8018DADC 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1D210 8018DAE0 E6080130 */  swc1        $ft2, 0x130($s0)
/* E1D214 8018DAE4 C4320B10 */  lwc1        $ft5, %lo(D_E16C50_801C0B10)($at)
/* E1D218 8018DAE8 C60A0130 */  lwc1        $ft3, 0x130($s0)
/* E1D21C 8018DAEC 46125302 */  mul.s       $fa0, $ft3, $ft5
/* E1D220 8018DAF0 0C008C24 */  jal         __sinf
/* E1D224 8018DAF4 00000000 */   nop
/* E1D228 8018DAF8 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E1D22C 8018DAFC 44812000 */  mtc1        $at, $ft0
/* E1D230 8018DB00 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1D234 8018DB04 44815000 */  mtc1        $at, $ft3
/* E1D238 8018DB08 C6080134 */  lwc1        $ft2, 0x134($s0)
/* E1D23C 8018DB0C 46040182 */  mul.s       $ft1, $fv0, $ft0
/* E1D240 8018DB10 3C01801C */  lui         $at, %hi(D_E16C50_801C0B14)
/* E1D244 8018DB14 460A4480 */  add.s       $ft5, $ft2, $ft3
/* E1D248 8018DB18 E6120134 */  swc1        $ft5, 0x134($s0)
/* E1D24C 8018DB1C E60600FC */  swc1        $ft1, 0xFC($s0)
/* E1D250 8018DB20 C4260B14 */  lwc1        $ft1, %lo(D_E16C50_801C0B14)($at)
/* E1D254 8018DB24 C6040134 */  lwc1        $ft0, 0x134($s0)
/* E1D258 8018DB28 46062302 */  mul.s       $fa0, $ft0, $ft1
/* E1D25C 8018DB2C 0C008C24 */  jal         __sinf
/* E1D260 8018DB30 00000000 */   nop
/* E1D264 8018DB34 3C013FC0 */  lui         $at, (0x3FC00000 >> 16)
/* E1D268 8018DB38 44815000 */  mtc1        $at, $ft3
/* E1D26C 8018DB3C C6080008 */  lwc1        $ft2, 0x8($s0)
/* E1D270 8018DB40 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1D274 8018DB44 460A0482 */  mul.s       $ft5, $fv0, $ft3
/* E1D278 8018DB48 44815000 */  mtc1        $at, $ft3
/* E1D27C 8018DB4C C6060138 */  lwc1        $ft1, 0x138($s0)
/* E1D280 8018DB50 3C01801C */  lui         $at, %hi(D_E16C50_801C0B18)
/* E1D284 8018DB54 46124100 */  add.s       $ft0, $ft2, $ft5
/* E1D288 8018DB58 460A3200 */  add.s       $ft2, $ft1, $ft3
/* E1D28C 8018DB5C E6040008 */  swc1        $ft0, 0x8($s0)
/* E1D290 8018DB60 E6080138 */  swc1        $ft2, 0x138($s0)
/* E1D294 8018DB64 C4240B18 */  lwc1        $ft0, %lo(D_E16C50_801C0B18)($at)
/* E1D298 8018DB68 C6120138 */  lwc1        $ft5, 0x138($s0)
/* E1D29C 8018DB6C 46049302 */  mul.s       $fa0, $ft5, $ft0
/* E1D2A0 8018DB70 0C008C94 */  jal         __cosf
/* E1D2A4 8018DB74 00000000 */   nop
/* E1D2A8 8018DB78 3C013FC0 */  lui         $at, (0x3FC00000 >> 16)
/* E1D2AC 8018DB7C 44815000 */  mtc1        $at, $ft3
/* E1D2B0 8018DB80 C606000C */  lwc1        $ft1, 0xC($s0)
/* E1D2B4 8018DB84 460A0202 */  mul.s       $ft2, $fv0, $ft3
/* E1D2B8 8018DB88 46083480 */  add.s       $ft5, $ft1, $ft2
/* E1D2BC 8018DB8C 100000C1 */  b           .LE16C50_8018DE94
/* E1D2C0 8018DB90 E612000C */   swc1       $ft5, 0xC($s0)
.LE16C50_8018DB94:
/* E1D2C4 8018DB94 44802000 */  mtc1        $zero, $ft0
/* E1D2C8 8018DB98 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1D2CC 8018DB9C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1D2D0 8018DBA0 260400FC */  addiu       $a0, $s0, 0xFC
/* E1D2D4 8018DBA4 3C05C334 */  lui         $a1, (0xC3340000 >> 16)
/* E1D2D8 8018DBA8 3C074040 */  lui         $a3, (0x40400000 >> 16)
/* E1D2DC 8018DBAC 0C026F0B */  jal         Math_SmoothStepToF
/* E1D2E0 8018DBB0 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1D2E4 8018DBB4 100000B8 */  b           .LE16C50_8018DE98
/* E1D2E8 8018DBB8 3C014334 */   lui        $at, (0x43340000 >> 16)
.LE16C50_8018DBBC:
/* E1D2EC 8018DBBC 44805000 */  mtc1        $zero, $ft3
/* E1D2F0 8018DBC0 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1D2F4 8018DBC4 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1D2F8 8018DBC8 260400FC */  addiu       $a0, $s0, 0xFC
/* E1D2FC 8018DBCC 3C05C234 */  lui         $a1, (0xC2340000 >> 16)
/* E1D300 8018DBD0 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E1D304 8018DBD4 0C026F0B */  jal         Math_SmoothStepToF
/* E1D308 8018DBD8 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E1D30C 8018DBDC 44803000 */  mtc1        $zero, $ft1
/* E1D310 8018DBE0 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1D314 8018DBE4 3C074019 */  lui         $a3, (0x4019999A >> 16)
/* E1D318 8018DBE8 34E7999A */  ori         $a3, $a3, (0x4019999A & 0xFFFF)
/* E1D31C 8018DBEC 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1D320 8018DBF0 260400F8 */  addiu       $a0, $s0, 0xF8
/* E1D324 8018DBF4 3C0543AA */  lui         $a1, (0x43AA0000 >> 16)
/* E1D328 8018DBF8 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1D32C 8018DBFC E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1D330 8018DC00 44804000 */  mtc1        $zero, $ft2
/* E1D334 8018DC04 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1D338 8018DC08 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1D33C 8018DC0C 260400F4 */  addiu       $a0, $s0, 0xF4
/* E1D340 8018DC10 3C054040 */  lui         $a1, (0x40400000 >> 16)
/* E1D344 8018DC14 3C073F80 */  lui         $a3, (0x3F800000 >> 16)
/* E1D348 8018DC18 0C026F0B */  jal         Math_SmoothStepToF
/* E1D34C 8018DC1C E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1D350 8018DC20 44809000 */  mtc1        $zero, $ft5
/* E1D354 8018DC24 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1D358 8018DC28 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1D35C 8018DC2C 26040114 */  addiu       $a0, $s0, 0x114
/* E1D360 8018DC30 3C0541F0 */  lui         $a1, (0x41F00000 >> 16)
/* E1D364 8018DC34 3C074040 */  lui         $a3, (0x40400000 >> 16)
/* E1D368 8018DC38 0C026F0B */  jal         Math_SmoothStepToF
/* E1D36C 8018DC3C E7B20010 */   swc1       $ft5, 0x10($sp)
/* E1D370 8018DC40 10000095 */  b           .LE16C50_8018DE98
/* E1D374 8018DC44 3C014334 */   lui        $at, (0x43340000 >> 16)
.LE16C50_8018DC48:
/* E1D378 8018DC48 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1D37C 8018DC4C 246F0001 */  addiu       $t7, $v1, 0x1
/* E1D380 8018DC50 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E1D384 8018DC54 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1D388 8018DC58 A60F00B8 */  sh          $t7, 0xB8($s0)
/* E1D38C 8018DC5C 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E1D390 8018DC60 3C040900 */  lui         $a0, (0x9000002 >> 16)
/* E1D394 8018DC64 34840002 */  ori         $a0, $a0, (0x9000002 & 0xFFFF)
/* E1D398 8018DC68 AFB80014 */  sw          $t8, 0x14($sp)
/* E1D39C 8018DC6C AFA70010 */  sw          $a3, 0x10($sp)
/* E1D3A0 8018DC70 26050100 */  addiu       $a1, $s0, 0x100
/* E1D3A4 8018DC74 0C006486 */  jal         Audio_PlaySfx
/* E1D3A8 8018DC78 00003025 */   or         $a2, $zero, $zero
/* E1D3AC 8018DC7C 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E1D3B0 8018DC80 44812000 */  mtc1        $at, $ft0
/* E1D3B4 8018DC84 00000000 */  nop
/* E1D3B8 8018DC88 E6040188 */  swc1        $ft0, 0x188($s0)
.LE16C50_8018DC8C:
/* E1D3BC 8018DC8C 24190002 */  addiu       $t9, $zero, 0x2
/* E1D3C0 8018DC90 AE19007C */  sw          $t9, 0x7C($s0)
/* E1D3C4 8018DC94 3C01801C */  lui         $at, %hi(D_E16C50_801C0B1C)
/* E1D3C8 8018DC98 C42A0B1C */  lwc1        $ft3, %lo(D_E16C50_801C0B1C)($at)
/* E1D3CC 8018DC9C 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1D3D0 8018DCA0 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1D3D4 8018DCA4 26040114 */  addiu       $a0, $s0, 0x114
/* E1D3D8 8018DCA8 3C054248 */  lui         $a1, (0x42480000 >> 16)
/* E1D3DC 8018DCAC 3C074040 */  lui         $a3, (0x40400000 >> 16)
/* E1D3E0 8018DCB0 0C026F0B */  jal         Math_SmoothStepToF
/* E1D3E4 8018DCB4 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E1D3E8 8018DCB8 860200B8 */  lh          $v0, 0xB8($s0)
/* E1D3EC 8018DCBC 24010007 */  addiu       $at, $zero, 0x7
/* E1D3F0 8018DCC0 10410007 */  beq         $v0, $at, .LE16C50_8018DCE0
/* E1D3F4 8018DCC4 2401000C */   addiu      $at, $zero, 0xC
/* E1D3F8 8018DCC8 1041000F */  beq         $v0, $at, .LE16C50_8018DD08
/* E1D3FC 8018DCCC 24010011 */   addiu      $at, $zero, 0x11
/* E1D400 8018DCD0 50410016 */  beql        $v0, $at, .LE16C50_8018DD2C
/* E1D404 8018DCD4 3C01C2C8 */   lui        $at, (0xC2C80000 >> 16)
/* E1D408 8018DCD8 1000001D */  b           .LE16C50_8018DD50
/* E1D40C 8018DCDC C7AC004C */   lwc1       $fa0, 0x4C($sp)
.LE16C50_8018DCE0:
/* E1D410 8018DCE0 3C01C2C8 */  lui         $at, (0xC2C80000 >> 16)
/* E1D414 8018DCE4 44810000 */  mtc1        $at, $fv0
/* E1D418 8018DCE8 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E1D41C 8018DCEC 44813000 */  mtc1        $at, $ft1
/* E1D420 8018DCF0 3C01801C */  lui         $at, %hi(D_E16C50_801C0B20)
/* E1D424 8018DCF4 C4280B20 */  lwc1        $ft2, %lo(D_E16C50_801C0B20)($at)
/* E1D428 8018DCF8 E7A00048 */  swc1        $fv0, 0x48($sp)
/* E1D42C 8018DCFC E7A6004C */  swc1        $ft1, 0x4C($sp)
/* E1D430 8018DD00 10000012 */  b           .LE16C50_8018DD4C
/* E1D434 8018DD04 E7A80044 */   swc1       $ft2, 0x44($sp)
.LE16C50_8018DD08:
/* E1D438 8018DD08 3C01C2C8 */  lui         $at, (0xC2C80000 >> 16)
/* E1D43C 8018DD0C 44810000 */  mtc1        $at, $fv0
/* E1D440 8018DD10 3C01801C */  lui         $at, %hi(D_E16C50_801C0B24)
/* E1D444 8018DD14 C4320B24 */  lwc1        $ft5, %lo(D_E16C50_801C0B24)($at)
/* E1D448 8018DD18 E7A0004C */  swc1        $fv0, 0x4C($sp)
/* E1D44C 8018DD1C E7A00048 */  swc1        $fv0, 0x48($sp)
/* E1D450 8018DD20 1000000A */  b           .LE16C50_8018DD4C
/* E1D454 8018DD24 E7B20044 */   swc1       $ft5, 0x44($sp)
/* E1D458 8018DD28 3C01C2C8 */  lui         $at, (0xC2C80000 >> 16)
.LE16C50_8018DD2C:
/* E1D45C 8018DD2C 44810000 */  mtc1        $at, $fv0
/* E1D460 8018DD30 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E1D464 8018DD34 44812000 */  mtc1        $at, $ft0
/* E1D468 8018DD38 3C01801C */  lui         $at, %hi(D_E16C50_801C0B28)
/* E1D46C 8018DD3C C42A0B28 */  lwc1        $ft3, %lo(D_E16C50_801C0B28)($at)
/* E1D470 8018DD40 E7A00048 */  swc1        $fv0, 0x48($sp)
/* E1D474 8018DD44 E7A4004C */  swc1        $ft0, 0x4C($sp)
/* E1D478 8018DD48 E7AA0044 */  swc1        $ft3, 0x44($sp)
.LE16C50_8018DD4C:
/* E1D47C 8018DD4C C7AC004C */  lwc1        $fa0, 0x4C($sp)
.LE16C50_8018DD50:
/* E1D480 8018DD50 0C001440 */  jal         Math_Atan2F
/* E1D484 8018DD54 C7AE0044 */   lwc1       $fa1, 0x44($sp)
/* E1D488 8018DD58 0C027DDA */  jal         Math_RadToDeg
/* E1D48C 8018DD5C 46000306 */   mov.s      $fa0, $fv0
/* E1D490 8018DD60 C7A2004C */  lwc1        $fv1, 0x4C($sp)
/* E1D494 8018DD64 C7B00044 */  lwc1        $ft4, 0x44($sp)
/* E1D498 8018DD68 E7A0003C */  swc1        $fv0, 0x3C($sp)
/* E1D49C 8018DD6C 46021182 */  mul.s       $ft1, $fv1, $fv1
/* E1D4A0 8018DD70 C7AC0048 */  lwc1        $fa0, 0x48($sp)
/* E1D4A4 8018DD74 46108202 */  mul.s       $ft2, $ft4, $ft4
/* E1D4A8 8018DD78 46083000 */  add.s       $fv0, $ft1, $ft2
/* E1D4AC 8018DD7C 0C001440 */  jal         Math_Atan2F
/* E1D4B0 8018DD80 46000384 */   sqrt.s     $fa1, $fv0
/* E1D4B4 8018DD84 0C027DDA */  jal         Math_RadToDeg
/* E1D4B8 8018DD88 46000307 */   neg.s      $fa0, $fv0
/* E1D4BC 8018DD8C 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E1D4C0 8018DD90 44816000 */  mtc1        $at, $fa0
/* E1D4C4 8018DD94 3C014220 */  lui         $at, (0x42200000 >> 16)
/* E1D4C8 8018DD98 44819000 */  mtc1        $at, $ft5
/* E1D4CC 8018DD9C 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E1D4D0 8018DDA0 44815000 */  mtc1        $at, $ft3
/* E1D4D4 8018DDA4 46120100 */  add.s       $ft0, $fv0, $ft5
/* E1D4D8 8018DDA8 46000086 */  mov.s       $fv1, $fv0
/* E1D4DC 8018DDAC 3C01801C */  lui         $at, %hi(D_E16C50_801C0B2C)
/* E1D4E0 8018DDB0 260400F8 */  addiu       $a0, $s0, 0xF8
/* E1D4E4 8018DDB4 4604603E */  c.le.s      $fa0, $ft0
/* E1D4E8 8018DDB8 8FA5003C */  lw          $a1, 0x3C($sp)
/* E1D4EC 8018DDBC 3C063F00 */  lui         $a2, (0x3F000000 >> 16)
/* E1D4F0 8018DDC0 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E1D4F4 8018DDC4 45020003 */  bc1fl       .LE16C50_8018DDD4
/* E1D4F8 8018DDC8 4602503C */   c.lt.s     $ft3, $fv1
/* E1D4FC 8018DDCC 460C0081 */  sub.s       $fv1, $fv0, $fa0
/* E1D500 8018DDD0 4602503C */  c.lt.s      $ft3, $fv1
.LE16C50_8018DDD4:
/* E1D504 8018DDD4 00000000 */  nop
/* E1D508 8018DDD8 45000003 */  bc1f        .LE16C50_8018DDE8
/* E1D50C 8018DDDC 00000000 */   nop
/* E1D510 8018DDE0 44801000 */  mtc1        $zero, $fv1
/* E1D514 8018DDE4 00000000 */  nop
.LE16C50_8018DDE8:
/* E1D518 8018DDE8 C4260B2C */  lwc1        $ft1, %lo(D_E16C50_801C0B2C)($at)
/* E1D51C 8018DDEC E7A20040 */  swc1        $fv1, 0x40($sp)
/* E1D520 8018DDF0 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1D524 8018DDF4 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1D528 8018DDF8 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E1D52C 8018DDFC 44814000 */  mtc1        $at, $ft2
/* E1D530 8018DE00 C7A20040 */  lwc1        $fv1, 0x40($sp)
/* E1D534 8018DE04 3C01801C */  lui         $at, %hi(D_E16C50_801C0B30)
/* E1D538 8018DE08 46080482 */  mul.s       $ft5, $fv0, $ft2
/* E1D53C 8018DE0C C4240B30 */  lwc1        $ft0, %lo(D_E16C50_801C0B30)($at)
/* E1D540 8018DE10 44051000 */  mfc1        $a1, $fv1
/* E1D544 8018DE14 260400F4 */  addiu       $a0, $s0, 0xF4
/* E1D548 8018DE18 3C063F00 */  lui         $a2, (0x3F000000 >> 16)
/* E1D54C 8018DE1C 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E1D550 8018DE20 E7A40010 */  swc1        $ft0, 0x10($sp)
/* E1D554 8018DE24 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1D558 8018DE28 E7B20038 */   swc1       $ft5, 0x38($sp)
/* E1D55C 8018DE2C 3C01801C */  lui         $at, %hi(D_E16C50_801C0B34)
/* E1D560 8018DE30 C42A0B34 */  lwc1        $ft3, %lo(D_E16C50_801C0B34)($at)
/* E1D564 8018DE34 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1D568 8018DE38 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1D56C 8018DE3C 260400FC */  addiu       $a0, $s0, 0xFC
/* E1D570 8018DE40 8FA50038 */  lw          $a1, 0x38($sp)
/* E1D574 8018DE44 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E1D578 8018DE48 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1D57C 8018DE4C E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E1D580 8018DE50 10000011 */  b           .LE16C50_8018DE98
/* E1D584 8018DE54 3C014334 */   lui        $at, (0x43340000 >> 16)
.LE16C50_8018DE58:
/* E1D588 8018DE58 3C01801C */  lui         $at, %hi(D_E16C50_801C0B38)
/* E1D58C 8018DE5C C4200B38 */  lwc1        $fv0, %lo(D_E16C50_801C0B38)($at)
/* E1D590 8018DE60 24050000 */  addiu       $a1, $zero, 0x0
/* E1D594 8018DE64 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E1D598 8018DE68 44060000 */  mfc1        $a2, $fv0
/* E1D59C 8018DE6C 0C026F0B */  jal         Math_SmoothStepToF
/* E1D5A0 8018DE70 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E1D5A4 8018DE74 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1D5A8 8018DE78 44811000 */  mtc1        $at, $fv1
/* E1D5AC 8018DE7C 2604000C */  addiu       $a0, $s0, 0xC
/* E1D5B0 8018DE80 24050000 */  addiu       $a1, $zero, 0x0
/* E1D5B4 8018DE84 44071000 */  mfc1        $a3, $fv1
/* E1D5B8 8018DE88 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E1D5BC 8018DE8C 0C026F0B */  jal         Math_SmoothStepToF
/* E1D5C0 8018DE90 E7A20010 */   swc1       $fv1, 0x10($sp)
.LE16C50_8018DE94:
/* E1D5C4 8018DE94 3C014334 */  lui         $at, (0x43340000 >> 16)
.LE16C50_8018DE98:
/* E1D5C8 8018DE98 44814000 */  mtc1        $at, $ft2
/* E1D5CC 8018DE9C C60600F8 */  lwc1        $ft1, 0xF8($s0)
/* E1D5D0 8018DEA0 3C01801C */  lui         $at, %hi(D_E16C50_801C0B3C)
/* E1D5D4 8018DEA4 C4240B3C */  lwc1        $ft0, %lo(D_E16C50_801C0B3C)($at)
/* E1D5D8 8018DEA8 46083480 */  add.s       $ft5, $ft1, $ft2
/* E1D5DC 8018DEAC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1D5E0 8018DEB0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1D5E4 8018DEB4 00003025 */  or          $a2, $zero, $zero
/* E1D5E8 8018DEB8 46049282 */  mul.s       $ft3, $ft5, $ft0
/* E1D5EC 8018DEBC 44055000 */  mfc1        $a1, $ft3
/* E1D5F0 8018DEC0 0C0017A4 */  jal         Matrix_RotateY
/* E1D5F4 8018DEC4 00000000 */   nop
/* E1D5F8 8018DEC8 3C01801C */  lui         $at, %hi(D_E16C50_801C0B40)
/* E1D5FC 8018DECC C4280B40 */  lwc1        $ft2, %lo(D_E16C50_801C0B40)($at)
/* E1D600 8018DED0 C60600F4 */  lwc1        $ft1, 0xF4($s0)
/* E1D604 8018DED4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1D608 8018DED8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1D60C 8018DEDC 46083482 */  mul.s       $ft5, $ft1, $ft2
/* E1D610 8018DEE0 24060001 */  addiu       $a2, $zero, 0x1
/* E1D614 8018DEE4 46009107 */  neg.s       $ft0, $ft5
/* E1D618 8018DEE8 44052000 */  mfc1        $a1, $ft0
/* E1D61C 8018DEEC 0C001751 */  jal         Matrix_RotateX
/* E1D620 8018DEF0 00000000 */   nop
/* E1D624 8018DEF4 44800000 */  mtc1        $zero, $fv0
/* E1D628 8018DEF8 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1D62C 8018DEFC 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1D630 8018DF00 E7A0005C */  swc1        $fv0, 0x5C($sp)
/* E1D634 8018DF04 E7A00060 */  swc1        $fv0, 0x60($sp)
/* E1D638 8018DF08 C60A0114 */  lwc1        $ft3, 0x114($s0)
/* E1D63C 8018DF0C 27A5005C */  addiu       $a1, $sp, 0x5C
/* E1D640 8018DF10 27A60050 */  addiu       $a2, $sp, 0x50
/* E1D644 8018DF14 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E1D648 8018DF18 E7AA0064 */   swc1       $ft3, 0x64($sp)
/* E1D64C 8018DF1C C7B20050 */  lwc1        $ft5, 0x50($sp)
/* E1D650 8018DF20 C61000F8 */  lwc1        $ft4, 0xF8($s0)
/* E1D654 8018DF24 C60E00F4 */  lwc1        $fa1, 0xF4($s0)
/* E1D658 8018DF28 C60C00FC */  lwc1        $fa0, 0xFC($s0)
/* E1D65C 8018DF2C E61200E8 */  swc1        $ft5, 0xE8($s0)
/* E1D660 8018DF30 C7B20054 */  lwc1        $ft5, 0x54($sp)
/* E1D664 8018DF34 46007387 */  neg.s       $fa1, $fa1
/* E1D668 8018DF38 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E1D66C 8018DF3C 44815000 */  mtc1        $at, $ft3
/* E1D670 8018DF40 E61200EC */  swc1        $ft5, 0xEC($s0)
/* E1D674 8018DF44 C7B20058 */  lwc1        $ft5, 0x58($sp)
/* E1D678 8018DF48 460A8280 */  add.s       $ft3, $ft4, $ft3
/* E1D67C 8018DF4C E60E0010 */  swc1        $fa1, 0x10($s0)
/* E1D680 8018DF50 E61200F0 */  swc1        $ft5, 0xF0($s0)
/* E1D684 8018DF54 46006307 */  neg.s       $fa0, $fa0
/* E1D688 8018DF58 E60A0014 */  swc1        $ft3, 0x14($s0)
/* E1D68C 8018DF5C E60C0018 */  swc1        $fa0, 0x18($s0)
/* E1D690 8018DF60 8FBF0024 */  lw          $ra, 0x24($sp)
/* E1D694 8018DF64 8FB00020 */  lw          $s0, 0x20($sp)
/* E1D698 8018DF68 27BD0068 */  addiu       $sp, $sp, 0x68
/* E1D69C 8018DF6C 03E00008 */  jr          $ra
/* E1D6A0 8018DF70 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C0B44
/* E50274 801C0B44 44898000 */ .float 1100

dlabel D_E16C50_801C0B48
/* E50278 801C0B48 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0B4C
/* E5027C 801C0B4C 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0B50
/* E50280 801C0B50 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0B54
/* E50284 801C0B54 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0B58
/* E50288 801C0B58 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0B5C
/* E5028C 801C0B5C 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0B60
/* E50290 801C0B60 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0B64
/* E50294 801C0B64 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0B68
/* E50298 801C0B68 451C4000 */ .float 2500

dlabel D_E16C50_801C0B6C
/* E5029C 801C0B6C 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0B70
/* E502A0 801C0B70 3727C5AC */ .float 9.999999747e-06

dlabel D_E16C50_801C0B74
/* E502A4 801C0B74 3C23D70A */ .float 0.009999999776

dlabel jtbl_E16C50_801C0B78
/* E502A8 801C0B78 8018E7E4 */ .word .LE16C50_8018E7E4
/* E502AC 801C0B7C 8018E864 */ .word .LE16C50_8018E864
/* E502B0 801C0B80 8018E864 */ .word .LE16C50_8018E864
/* E502B4 801C0B84 8018E864 */ .word .LE16C50_8018E864
/* E502B8 801C0B88 8018E864 */ .word .LE16C50_8018E864
/* E502BC 801C0B8C 8018E864 */ .word .LE16C50_8018E864
/* E502C0 801C0B90 8018E864 */ .word .LE16C50_8018E864
/* E502C4 801C0B94 8018E864 */ .word .LE16C50_8018E864
/* E502C8 801C0B98 8018E864 */ .word .LE16C50_8018E864
/* E502CC 801C0B9C 8018E864 */ .word .LE16C50_8018E864
/* E502D0 801C0BA0 8018E7F4 */ .word .LE16C50_8018E7F4
/* E502D4 801C0BA4 8018E864 */ .word .LE16C50_8018E864
/* E502D8 801C0BA8 8018E864 */ .word .LE16C50_8018E864
/* E502DC 801C0BAC 8018E864 */ .word .LE16C50_8018E864
/* E502E0 801C0BB0 8018E864 */ .word .LE16C50_8018E864
/* E502E4 801C0BB4 8018E864 */ .word .LE16C50_8018E864
/* E502E8 801C0BB8 8018E864 */ .word .LE16C50_8018E864
/* E502EC 801C0BBC 8018E864 */ .word .LE16C50_8018E864
/* E502F0 801C0BC0 8018E864 */ .word .LE16C50_8018E864
/* E502F4 801C0BC4 8018E864 */ .word .LE16C50_8018E864
/* E502F8 801C0BC8 8018E804 */ .word .LE16C50_8018E804
/* E502FC 801C0BCC 8018E864 */ .word .LE16C50_8018E864
/* E50300 801C0BD0 8018E864 */ .word .LE16C50_8018E864
/* E50304 801C0BD4 8018E864 */ .word .LE16C50_8018E864
/* E50308 801C0BD8 8018E864 */ .word .LE16C50_8018E864
/* E5030C 801C0BDC 8018E864 */ .word .LE16C50_8018E864
/* E50310 801C0BE0 8018E864 */ .word .LE16C50_8018E864
/* E50314 801C0BE4 8018E864 */ .word .LE16C50_8018E864
/* E50318 801C0BE8 8018E864 */ .word .LE16C50_8018E864
/* E5031C 801C0BEC 8018E864 */ .word .LE16C50_8018E864
/* E50320 801C0BF0 8018E814 */ .word .LE16C50_8018E814
/* E50324 801C0BF4 8018E864 */ .word .LE16C50_8018E864
/* E50328 801C0BF8 8018E864 */ .word .LE16C50_8018E864
/* E5032C 801C0BFC 8018E864 */ .word .LE16C50_8018E864
/* E50330 801C0C00 8018E864 */ .word .LE16C50_8018E864
/* E50334 801C0C04 8018E864 */ .word .LE16C50_8018E864
/* E50338 801C0C08 8018E864 */ .word .LE16C50_8018E864
/* E5033C 801C0C0C 8018E864 */ .word .LE16C50_8018E864
/* E50340 801C0C10 8018E864 */ .word .LE16C50_8018E864
/* E50344 801C0C14 8018E864 */ .word .LE16C50_8018E864
/* E50348 801C0C18 8018E6F4 */ .word .LE16C50_8018E6F4

dlabel jtbl_E16C50_801C0C1C
/* E5034C 801C0C1C 8018E724 */ .word .LE16C50_8018E724
/* E50350 801C0C20 8018E864 */ .word .LE16C50_8018E864
/* E50354 801C0C24 8018E864 */ .word .LE16C50_8018E864
/* E50358 801C0C28 8018E864 */ .word .LE16C50_8018E864
/* E5035C 801C0C2C 8018E864 */ .word .LE16C50_8018E864
/* E50360 801C0C30 8018E864 */ .word .LE16C50_8018E864
/* E50364 801C0C34 8018E864 */ .word .LE16C50_8018E864
/* E50368 801C0C38 8018E864 */ .word .LE16C50_8018E864
/* E5036C 801C0C3C 8018E864 */ .word .LE16C50_8018E864
/* E50370 801C0C40 8018E864 */ .word .LE16C50_8018E864
/* E50374 801C0C44 8018E864 */ .word .LE16C50_8018E864
/* E50378 801C0C48 8018E864 */ .word .LE16C50_8018E864
/* E5037C 801C0C4C 8018E864 */ .word .LE16C50_8018E864
/* E50380 801C0C50 8018E864 */ .word .LE16C50_8018E864
/* E50384 801C0C54 8018E864 */ .word .LE16C50_8018E864
/* E50388 801C0C58 8018E864 */ .word .LE16C50_8018E864
/* E5038C 801C0C5C 8018E864 */ .word .LE16C50_8018E864
/* E50390 801C0C60 8018E864 */ .word .LE16C50_8018E864
/* E50394 801C0C64 8018E864 */ .word .LE16C50_8018E864
/* E50398 801C0C68 8018E864 */ .word .LE16C50_8018E864
/* E5039C 801C0C6C 8018E864 */ .word .LE16C50_8018E864
/* E503A0 801C0C70 8018E74C */ .word .LE16C50_8018E74C
/* E503A4 801C0C74 8018E864 */ .word .LE16C50_8018E864
/* E503A8 801C0C78 8018E864 */ .word .LE16C50_8018E864
/* E503AC 801C0C7C 8018E864 */ .word .LE16C50_8018E864
/* E503B0 801C0C80 8018E864 */ .word .LE16C50_8018E864
/* E503B4 801C0C84 8018E864 */ .word .LE16C50_8018E864
/* E503B8 801C0C88 8018E864 */ .word .LE16C50_8018E864
/* E503BC 801C0C8C 8018E864 */ .word .LE16C50_8018E864
/* E503C0 801C0C90 8018E864 */ .word .LE16C50_8018E864
/* E503C4 801C0C94 8018E864 */ .word .LE16C50_8018E864
/* E503C8 801C0C98 8018E864 */ .word .LE16C50_8018E864
/* E503CC 801C0C9C 8018E770 */ .word .LE16C50_8018E770
/* E503D0 801C0CA0 8018E864 */ .word .LE16C50_8018E864
/* E503D4 801C0CA4 8018E864 */ .word .LE16C50_8018E864
/* E503D8 801C0CA8 8018E864 */ .word .LE16C50_8018E864
/* E503DC 801C0CAC 8018E864 */ .word .LE16C50_8018E864
/* E503E0 801C0CB0 8018E864 */ .word .LE16C50_8018E864
/* E503E4 801C0CB4 8018E864 */ .word .LE16C50_8018E864
/* E503E8 801C0CB8 8018E864 */ .word .LE16C50_8018E864
/* E503EC 801C0CBC 8018E864 */ .word .LE16C50_8018E864
/* E503F0 801C0CC0 8018E864 */ .word .LE16C50_8018E864
/* E503F4 801C0CC4 8018E864 */ .word .LE16C50_8018E864
/* E503F8 801C0CC8 8018E794 */ .word .LE16C50_8018E794
/* E503FC 801C0CCC 8018E7B8 */ .word .LE16C50_8018E7B8
/* E50400 801C0CD0 8018E864 */ .word .LE16C50_8018E864
/* E50404 801C0CD4 8018E864 */ .word .LE16C50_8018E864
/* E50408 801C0CD8 8018E864 */ .word .LE16C50_8018E864
/* E5040C 801C0CDC 8018E864 */ .word .LE16C50_8018E864
/* E50410 801C0CE0 8018E864 */ .word .LE16C50_8018E864
/* E50414 801C0CE4 8018E864 */ .word .LE16C50_8018E864
/* E50418 801C0CE8 8018E864 */ .word .LE16C50_8018E864
/* E5041C 801C0CEC 8018E864 */ .word .LE16C50_8018E864
/* E50420 801C0CF0 8018E864 */ .word .LE16C50_8018E864
/* E50424 801C0CF4 8018E864 */ .word .LE16C50_8018E864
/* E50428 801C0CF8 8018E7CC */ .word .LE16C50_8018E7CC

dlabel D_E16C50_801C0CFC
/* E5042C 801C0CFC 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0D00
/* E50430 801C0D00 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0D04
/* E50434 801C0D04 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D08
/* E50438 801C0D08 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D0C
/* E5043C 801C0D0C 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D10
/* E50440 801C0D10 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D14
/* E50444 801C0D14 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D18
/* E50448 801C0D18 3A83126F */ .float 0.001000000047


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8018DF74
/* E1D6A4 8018DF74 27BDFF80 */  addiu       $sp, $sp, -0x80
/* E1D6A8 8018DF78 AFB00020 */  sw          $s0, 0x20($sp)
/* E1D6AC 8018DF7C 00808025 */  or          $s0, $a0, $zero
/* E1D6B0 8018DF80 AFBF0024 */  sw          $ra, 0x24($sp)
/* E1D6B4 8018DF84 8E0201D0 */  lw          $v0, 0x1D0($s0)
/* E1D6B8 8018DF88 10400005 */  beqz        $v0, .LE16C50_8018DFA0
/* E1D6BC 8018DF8C 24010001 */   addiu      $at, $zero, 0x1
/* E1D6C0 8018DF90 10410064 */  beq         $v0, $at, .LE16C50_8018E124
/* E1D6C4 8018DF94 3C038017 */   lui        $v1, %hi(D_80177A80)
/* E1D6C8 8018DF98 100001A3 */  b           .LE16C50_8018E628
/* E1D6CC 8018DF9C 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_8018DFA0:
/* E1D6D0 8018DFA0 3C018017 */  lui         $at, %hi(D_80177A80)
/* E1D6D4 8018DFA4 AC207A80 */  sw          $zero, %lo(D_80177A80)($at)
/* E1D6D8 8018DFA8 24190001 */  addiu       $t9, $zero, 0x1
/* E1D6DC 8018DFAC AE1901D0 */  sw          $t9, 0x1D0($s0)
/* E1D6E0 8018DFB0 24040001 */  addiu       $a0, $zero, 0x1
/* E1D6E4 8018DFB4 24057148 */  addiu       $a1, $zero, 0x7148
/* E1D6E8 8018DFB8 0C0013F2 */  jal         Rand_SetSeed
/* E1D6EC 8018DFBC 24062694 */   addiu      $a2, $zero, 0x2694
/* E1D6F0 8018DFC0 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x2F4)
/* E1D6F4 8018DFC4 248442D4 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x2F4)
/* E1D6F8 8018DFC8 0C0635A5 */  jal         func_E16C50_8018D694
/* E1D6FC 8018DFCC 00002825 */   or         $a1, $zero, $zero
/* E1D700 8018DFD0 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x5E8)
/* E1D704 8018DFD4 248445C8 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x5E8)
/* E1D708 8018DFD8 0C0635A5 */  jal         func_E16C50_8018D694
/* E1D70C 8018DFDC 24050001 */   addiu      $a1, $zero, 0x1
/* E1D710 8018DFE0 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x11B8)
/* E1D714 8018DFE4 24845198 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x11B8)
/* E1D718 8018DFE8 0C0635A5 */  jal         func_E16C50_8018D694
/* E1D71C 8018DFEC 24050002 */   addiu      $a1, $zero, 0x2
/* E1D720 8018DFF0 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x14AC)
/* E1D724 8018DFF4 2484548C */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x14AC)
/* E1D728 8018DFF8 0C0635A5 */  jal         func_E16C50_8018D694
/* E1D72C 8018DFFC 24050003 */   addiu      $a1, $zero, 0x3
/* E1D730 8018E000 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x17A0)
/* E1D734 8018E004 24845780 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x17A0)
/* E1D738 8018E008 0C0635A5 */  jal         func_E16C50_8018D694
/* E1D73C 8018E00C 24050004 */   addiu      $a1, $zero, 0x4
/* E1D740 8018E010 0C063572 */  jal         func_E16C50_8018D5C8
/* E1D744 8018E014 00000000 */   nop
/* E1D748 8018E018 3C0143AF */  lui         $at, (0x43AF0000 >> 16)
/* E1D74C 8018E01C 44813000 */  mtc1        $at, $ft1
/* E1D750 8018E020 3C01467A */  lui         $at, (0x467A0000 >> 16)
/* E1D754 8018E024 44814000 */  mtc1        $at, $ft2
/* E1D758 8018E028 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E1D75C 8018E02C 44802000 */  mtc1        $zero, $ft0
/* E1D760 8018E030 44815000 */  mtc1        $at, $ft3
/* E1D764 8018E034 3C088017 */  lui         $t0, %hi(gTeamShields + 0x4)
/* E1D768 8018E038 E6060078 */  swc1        $ft1, 0x78($s0)
/* E1D76C 8018E03C E608007C */  swc1        $ft2, 0x7C($s0)
/* E1D770 8018E040 E6040074 */  swc1        $ft0, 0x74($s0)
/* E1D774 8018E044 E60A00D0 */  swc1        $ft3, 0xD0($s0)
/* E1D778 8018E048 8D0878B4 */  lw          $t0, %lo(gTeamShields + 0x4)($t0)
/* E1D77C 8018E04C 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x8DC)
/* E1D780 8018E050 248448BC */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x8DC)
/* E1D784 8018E054 19000003 */  blez        $t0, .LE16C50_8018E064
/* E1D788 8018E058 00000000 */   nop
/* E1D78C 8018E05C 0C063601 */  jal         func_E16C50_8018D804
/* E1D790 8018E060 00002825 */   or         $a1, $zero, $zero
.LE16C50_8018E064:
/* E1D794 8018E064 3C098017 */  lui         $t1, %hi(gTeamShields + 0x8)
/* E1D798 8018E068 8D2978B8 */  lw          $t1, %lo(gTeamShields + 0x8)($t1)
/* E1D79C 8018E06C 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xBD0)
/* E1D7A0 8018E070 24844BB0 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0xBD0)
/* E1D7A4 8018E074 19200003 */  blez        $t1, .LE16C50_8018E084
/* E1D7A8 8018E078 00000000 */   nop
/* E1D7AC 8018E07C 0C063601 */  jal         func_E16C50_8018D804
/* E1D7B0 8018E080 24050001 */   addiu      $a1, $zero, 0x1
.LE16C50_8018E084:
/* E1D7B4 8018E084 3C0A8017 */  lui         $t2, %hi(gTeamShields + 0xC)
/* E1D7B8 8018E088 8D4A78BC */  lw          $t2, %lo(gTeamShields + 0xC)($t2)
/* E1D7BC 8018E08C 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xEC4)
/* E1D7C0 8018E090 24844EA4 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0xEC4)
/* E1D7C4 8018E094 59400004 */  blezl       $t2, .LE16C50_8018E0A8
/* E1D7C8 8018E098 3C0141A0 */   lui        $at, (0x41A00000 >> 16)
/* E1D7CC 8018E09C 0C063601 */  jal         func_E16C50_8018D804
/* E1D7D0 8018E0A0 24050002 */   addiu      $a1, $zero, 0x2
/* E1D7D4 8018E0A4 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
.LE16C50_8018E0A8:
/* E1D7D8 8018E0A8 44812000 */  mtc1        $at, $ft0
/* E1D7DC 8018E0AC 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x114)
/* E1D7E0 8018E0B0 E42440F4 */  swc1        $ft0, %lo(gObjects2F4 + 0x114)($at)
/* E1D7E4 8018E0B4 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E1D7E8 8018E0B8 44813000 */  mtc1        $at, $ft1
/* E1D7EC 8018E0BC 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x9F0)
/* E1D7F0 8018E0C0 E42649D0 */  swc1        $ft1, %lo(gObjects2F4 + 0x9F0)($at)
/* E1D7F4 8018E0C4 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E1D7F8 8018E0C8 44814000 */  mtc1        $at, $ft2
/* E1D7FC 8018E0CC 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xCE4)
/* E1D800 8018E0D0 E4284CC4 */  swc1        $ft2, %lo(gObjects2F4 + 0xCE4)($at)
/* E1D804 8018E0D4 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E1D808 8018E0D8 44815000 */  mtc1        $at, $ft3
/* E1D80C 8018E0DC 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xFD8)
/* E1D810 8018E0E0 E42A4FB8 */  swc1        $ft3, %lo(gObjects2F4 + 0xFD8)($at)
/* E1D814 8018E0E4 3C014387 */  lui         $at, (0x43870000 >> 16)
/* E1D818 8018E0E8 44812000 */  mtc1        $at, $ft0
/* E1D81C 8018E0EC 3C018017 */  lui         $at, %hi(D_80177A48 + 0x10)
/* E1D820 8018E0F0 E4247A58 */  swc1        $ft0, %lo(D_80177A48 + 0x10)($at)
/* E1D824 8018E0F4 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E1D828 8018E0F8 44813000 */  mtc1        $at, $ft1
/* E1D82C 8018E0FC 3C018017 */  lui         $at, %hi(D_80177A48 + 0x14)
/* E1D830 8018E100 E4267A5C */  swc1        $ft1, %lo(D_80177A48 + 0x14)($at)
/* E1D834 8018E104 3C01801C */  lui         $at, %hi(D_E16C50_801C0B44)
/* E1D838 8018E108 C4280B44 */  lwc1        $ft2, %lo(D_E16C50_801C0B44)($at)
/* E1D83C 8018E10C 3C018017 */  lui         $at, %hi(D_80177A48 + 0x18)
/* E1D840 8018E110 E4287A60 */  swc1        $ft2, %lo(D_80177A48 + 0x18)($at)
/* E1D844 8018E114 3C01801C */  lui         $at, %hi(D_E16C50_801C0B48)
/* E1D848 8018E118 C42A0B48 */  lwc1        $ft3, %lo(D_E16C50_801C0B48)($at)
/* E1D84C 8018E11C 3C018017 */  lui         $at, %hi(D_80177A48 + 0xC)
/* E1D850 8018E120 E42A7A54 */  swc1        $ft3, %lo(D_80177A48 + 0xC)($at)
.LE16C50_8018E124:
/* E1D854 8018E124 3C01801C */  lui         $at, %hi(D_E16C50_801C0B4C)
/* E1D858 8018E128 C4240B4C */  lwc1        $ft0, %lo(D_E16C50_801C0B4C)($at)
/* E1D85C 8018E12C 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x8)
/* E1D860 8018E130 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* E1D864 8018E134 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* E1D868 8018E138 24843FE8 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x8)
/* E1D86C 8018E13C 24050000 */  addiu       $a1, $zero, 0x0
/* E1D870 8018E140 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E1D874 8018E144 0C026F0B */  jal         Math_SmoothStepToF
/* E1D878 8018E148 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1D87C 8018E14C 3C0B8017 */  lui         $t3, %hi(D_80177A80)
/* E1D880 8018E150 8D6B7A80 */  lw          $t3, %lo(D_80177A80)($t3)
/* E1D884 8018E154 3C048017 */  lui         $a0, %hi(D_80177A48 + 0xC)
/* E1D888 8018E158 24847A54 */  addiu       $a0, $a0, %lo(D_80177A48 + 0xC)
/* E1D88C 8018E15C 296101EA */  slti        $at, $t3, 0x1EA
/* E1D890 8018E160 10200089 */  beqz        $at, .LE16C50_8018E388
/* E1D894 8018E164 3C053DCC */   lui        $a1, (0x3DCCCCCD >> 16)
/* E1D898 8018E168 44800000 */  mtc1        $zero, $fv0
/* E1D89C 8018E16C 3C028017 */  lui         $v0, %hi(D_80177A48)
/* E1D8A0 8018E170 24427A48 */  addiu       $v0, $v0, %lo(D_80177A48)
/* E1D8A4 8018E174 C4460014 */  lwc1        $ft1, 0x14($v0)
/* E1D8A8 8018E178 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1D8AC 8018E17C 44050000 */  mfc1        $a1, $fv0
/* E1D8B0 8018E180 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1D8B4 8018E184 8C470018 */  lw          $a3, 0x18($v0)
/* E1D8B8 8018E188 3C0643AF */  lui         $a2, (0x43AF0000 >> 16)
/* E1D8BC 8018E18C AFA00010 */  sw          $zero, 0x10($sp)
/* E1D8C0 8018E190 E7A00074 */  swc1        $fv0, 0x74($sp)
/* E1D8C4 8018E194 E7A00078 */  swc1        $fv0, 0x78($sp)
/* E1D8C8 8018E198 0C0016C0 */  jal         Matrix_Translate
/* E1D8CC 8018E19C E7A6007C */   swc1       $ft1, 0x7C($sp)
/* E1D8D0 8018E1A0 3C018017 */  lui         $at, %hi(D_80177A48 + 0x10)
/* E1D8D4 8018E1A4 C4287A58 */  lwc1        $ft2, %lo(D_80177A48 + 0x10)($at)
/* E1D8D8 8018E1A8 3C01801C */  lui         $at, %hi(D_E16C50_801C0B50)
/* E1D8DC 8018E1AC C42A0B50 */  lwc1        $ft3, %lo(D_E16C50_801C0B50)($at)
/* E1D8E0 8018E1B0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1D8E4 8018E1B4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1D8E8 8018E1B8 460A4102 */  mul.s       $ft0, $ft2, $ft3
/* E1D8EC 8018E1BC 24060001 */  addiu       $a2, $zero, 0x1
/* E1D8F0 8018E1C0 46002187 */  neg.s       $ft1, $ft0
/* E1D8F4 8018E1C4 44053000 */  mfc1        $a1, $ft1
/* E1D8F8 8018E1C8 0C0017A4 */  jal         Matrix_RotateY
/* E1D8FC 8018E1CC 00000000 */   nop
/* E1D900 8018E1D0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1D904 8018E1D4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1D908 8018E1D8 27A50074 */  addiu       $a1, $sp, 0x74
/* E1D90C 8018E1DC 0C001A5C */  jal         Matrix_MultVec3f
/* E1D910 8018E1E0 27A60068 */   addiu      $a2, $sp, 0x68
/* E1D914 8018E1E4 C7A80068 */  lwc1        $ft2, 0x68($sp)
/* E1D918 8018E1E8 C7AA006C */  lwc1        $ft3, 0x6C($sp)
/* E1D91C 8018E1EC 3C018017 */  lui         $at, %hi(D_80177978)
/* E1D920 8018E1F0 E4287978 */  swc1        $ft2, %lo(D_80177978)($at)
/* E1D924 8018E1F4 C7A40070 */  lwc1        $ft0, 0x70($sp)
/* E1D928 8018E1F8 3C018017 */  lui         $at, %hi(D_80177980)
/* E1D92C 8018E1FC 3C0C8017 */  lui         $t4, %hi(D_80177A80)
/* E1D930 8018E200 8D8C7A80 */  lw          $t4, %lo(D_80177A80)($t4)
/* E1D934 8018E204 E42A7980 */  swc1        $ft3, %lo(D_80177980)($at)
/* E1D938 8018E208 3C018017 */  lui         $at, %hi(D_80177988)
/* E1D93C 8018E20C E4247988 */  swc1        $ft0, %lo(D_80177988)($at)
/* E1D940 8018E210 298100C8 */  slti        $at, $t4, 0xC8
/* E1D944 8018E214 1020001F */  beqz        $at, .LE16C50_8018E294
/* E1D948 8018E218 3C048017 */   lui        $a0, %hi(D_80177A48 + 0x10)
/* E1D94C 8018E21C 3C01801C */  lui         $at, %hi(D_E16C50_801C0B54)
/* E1D950 8018E220 C4260B54 */  lwc1        $ft1, %lo(D_E16C50_801C0B54)($at)
/* E1D954 8018E224 3C048017 */  lui         $a0, %hi(D_80177A48 + 0x10)
/* E1D958 8018E228 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1D95C 8018E22C 3C073F0F */  lui         $a3, (0x3F0F5C29 >> 16)
/* E1D960 8018E230 34E75C29 */  ori         $a3, $a3, (0x3F0F5C29 & 0xFFFF)
/* E1D964 8018E234 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1D968 8018E238 24847A58 */  addiu       $a0, $a0, %lo(D_80177A48 + 0x10)
/* E1D96C 8018E23C 24050000 */  addiu       $a1, $zero, 0x0
/* E1D970 8018E240 0C026F0B */  jal         Math_SmoothStepToF
/* E1D974 8018E244 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1D978 8018E248 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1D97C 8018E24C 44810000 */  mtc1        $at, $fv0
/* E1D980 8018E250 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x2F8)
/* E1D984 8018E254 C42842D8 */  lwc1        $ft2, %lo(gObjects2F4 + 0x2F8)($at)
/* E1D988 8018E258 3C018017 */  lui         $at, %hi(D_801779A0)
/* E1D98C 8018E25C E42879A0 */  swc1        $ft2, %lo(D_801779A0)($at)
/* E1D990 8018E260 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x2FC)
/* E1D994 8018E264 C42A42DC */  lwc1        $ft3, %lo(gObjects2F4 + 0x2FC)($at)
/* E1D998 8018E268 3C018017 */  lui         $at, %hi(D_801779B8)
/* E1D99C 8018E26C E42A79B8 */  swc1        $ft3, %lo(D_801779B8)($at)
/* E1D9A0 8018E270 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x300)
/* E1D9A4 8018E274 C42442E0 */  lwc1        $ft0, %lo(gObjects2F4 + 0x300)($at)
/* E1D9A8 8018E278 3C018017 */  lui         $at, %hi(D_801779C0)
/* E1D9AC 8018E27C E42479C0 */  swc1        $ft0, %lo(D_801779C0)($at)
/* E1D9B0 8018E280 3C018017 */  lui         $at, %hi(D_80177A48)
/* E1D9B4 8018E284 E4207A48 */  swc1        $fv0, %lo(D_80177A48)($at)
/* E1D9B8 8018E288 3C018017 */  lui         $at, %hi(D_80177A48 + 0x4)
/* E1D9BC 8018E28C 1000009C */  b           .LE16C50_8018E500
/* E1D9C0 8018E290 E4207A4C */   swc1       $fv0, %lo(D_80177A48 + 0x4)($at)
.LE16C50_8018E294:
/* E1D9C4 8018E294 3C01801C */  lui         $at, %hi(D_E16C50_801C0B58)
/* E1D9C8 8018E298 C4260B58 */  lwc1        $ft1, %lo(D_E16C50_801C0B58)($at)
/* E1D9CC 8018E29C 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1D9D0 8018E2A0 3C073F0F */  lui         $a3, (0x3F0F5C29 >> 16)
/* E1D9D4 8018E2A4 34E75C29 */  ori         $a3, $a3, (0x3F0F5C29 & 0xFFFF)
/* E1D9D8 8018E2A8 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1D9DC 8018E2AC 24847A58 */  addiu       $a0, $a0, %lo(D_80177A48 + 0x10)
/* E1D9E0 8018E2B0 24050000 */  addiu       $a1, $zero, 0x0
/* E1D9E4 8018E2B4 0C026F0B */  jal         Math_SmoothStepToF
/* E1D9E8 8018E2B8 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1D9EC 8018E2BC 3C01801C */  lui         $at, %hi(D_E16C50_801C0B5C)
/* E1D9F0 8018E2C0 C4280B5C */  lwc1        $ft2, %lo(D_E16C50_801C0B5C)($at)
/* E1D9F4 8018E2C4 3C048017 */  lui         $a0, %hi(D_80177A48 + 0x14)
/* E1D9F8 8018E2C8 3C063B44 */  lui         $a2, (0x3B449BA6 >> 16)
/* E1D9FC 8018E2CC 34C69BA6 */  ori         $a2, $a2, (0x3B449BA6 & 0xFFFF)
/* E1DA00 8018E2D0 24847A5C */  addiu       $a0, $a0, %lo(D_80177A48 + 0x14)
/* E1DA04 8018E2D4 24050000 */  addiu       $a1, $zero, 0x0
/* E1DA08 8018E2D8 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* E1DA0C 8018E2DC 0C026F0B */  jal         Math_SmoothStepToF
/* E1DA10 8018E2E0 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1DA14 8018E2E4 3C01801C */  lui         $at, %hi(D_E16C50_801C0B60)
/* E1DA18 8018E2E8 C42A0B60 */  lwc1        $ft3, %lo(D_E16C50_801C0B60)($at)
/* E1DA1C 8018E2EC 3C048017 */  lui         $a0, %hi(D_801779A0)
/* E1DA20 8018E2F0 8E050074 */  lw          $a1, 0x74($s0)
/* E1DA24 8018E2F4 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* E1DA28 8018E2F8 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* E1DA2C 8018E2FC 248479A0 */  addiu       $a0, $a0, %lo(D_801779A0)
/* E1DA30 8018E300 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E1DA34 8018E304 0C026F0B */  jal         Math_SmoothStepToF
/* E1DA38 8018E308 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E1DA3C 8018E30C 3C01801C */  lui         $at, %hi(D_E16C50_801C0B64)
/* E1DA40 8018E310 C4240B64 */  lwc1        $ft0, %lo(D_E16C50_801C0B64)($at)
/* E1DA44 8018E314 3C048017 */  lui         $a0, %hi(D_801779B8)
/* E1DA48 8018E318 8E050078 */  lw          $a1, 0x78($s0)
/* E1DA4C 8018E31C 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* E1DA50 8018E320 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* E1DA54 8018E324 248479B8 */  addiu       $a0, $a0, %lo(D_801779B8)
/* E1DA58 8018E328 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E1DA5C 8018E32C 0C026F0B */  jal         Math_SmoothStepToF
/* E1DA60 8018E330 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1DA64 8018E334 3C01801C */  lui         $at, %hi(D_E16C50_801C0B68)
/* E1DA68 8018E338 C4280B68 */  lwc1        $ft2, %lo(D_E16C50_801C0B68)($at)
/* E1DA6C 8018E33C C606007C */  lwc1        $ft1, 0x7C($s0)
/* E1DA70 8018E340 3C01801C */  lui         $at, %hi(D_E16C50_801C0B6C)
/* E1DA74 8018E344 C4240B6C */  lwc1        $ft0, %lo(D_E16C50_801C0B6C)($at)
/* E1DA78 8018E348 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E1DA7C 8018E34C 3C048017 */  lui         $a0, %hi(D_801779C0)
/* E1DA80 8018E350 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* E1DA84 8018E354 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* E1DA88 8018E358 44055000 */  mfc1        $a1, $ft3
/* E1DA8C 8018E35C 248479C0 */  addiu       $a0, $a0, %lo(D_801779C0)
/* E1DA90 8018E360 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E1DA94 8018E364 0C026F0B */  jal         Math_SmoothStepToF
/* E1DA98 8018E368 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1DA9C 8018E36C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1DAA0 8018E370 44810000 */  mtc1        $at, $fv0
/* E1DAA4 8018E374 3C018017 */  lui         $at, %hi(D_80177A48)
/* E1DAA8 8018E378 E4207A48 */  swc1        $fv0, %lo(D_80177A48)($at)
/* E1DAAC 8018E37C 3C018017 */  lui         $at, %hi(D_80177A48 + 0x4)
/* E1DAB0 8018E380 1000005F */  b           .LE16C50_8018E500
/* E1DAB4 8018E384 E4207A4C */   swc1       $fv0, %lo(D_80177A48 + 0x4)($at)
.LE16C50_8018E388:
/* E1DAB8 8018E388 3C01801C */  lui         $at, %hi(D_E16C50_801C0B70)
/* E1DABC 8018E38C C4260B70 */  lwc1        $ft1, %lo(D_E16C50_801C0B70)($at)
/* E1DAC0 8018E390 34A5CCCD */  ori         $a1, $a1, (0x3DCCCCCD & 0xFFFF)
/* E1DAC4 8018E394 3C063E99 */  lui         $a2, (0x3E99999A >> 16)
/* E1DAC8 8018E398 34C6999A */  ori         $a2, $a2, (0x3E99999A & 0xFFFF)
/* E1DACC 8018E39C 00A03821 */  addu        $a3, $a1, $zero
/* E1DAD0 8018E3A0 0C026F0B */  jal         Math_SmoothStepToF
/* E1DAD4 8018E3A4 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1DAD8 8018E3A8 3C018017 */  lui         $at, %hi(D_80177978)
/* E1DADC 8018E3AC C4327978 */  lwc1        $ft5, %lo(D_80177978)($at)
/* E1DAE0 8018E3B0 C6080074 */  lwc1        $ft2, 0x74($s0)
/* E1DAE4 8018E3B4 3C018017 */  lui         $at, %hi(D_80177A48 + 0xC)
/* E1DAE8 8018E3B8 C4227A54 */  lwc1        $fv1, %lo(D_80177A48 + 0xC)($at)
/* E1DAEC 8018E3BC 46124001 */  sub.s       $fv0, $ft2, $ft5
/* E1DAF0 8018E3C0 3C018017 */  lui         $at, %hi(D_80177980)
/* E1DAF4 8018E3C4 C42A7980 */  lwc1        $ft3, %lo(D_80177980)($at)
/* E1DAF8 8018E3C8 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E1DAFC 8018E3CC 46000005 */  abs.s       $fv0, $fv0
/* E1DB00 8018E3D0 E7AA0038 */  swc1        $ft3, 0x38($sp)
/* E1DB04 8018E3D4 46001302 */  mul.s       $fa0, $fv1, $fv0
/* E1DB08 8018E3D8 C6060148 */  lwc1        $ft1, 0x148($s0)
/* E1DB0C 8018E3DC C6040078 */  lwc1        $ft0, 0x78($s0)
/* E1DB10 8018E3E0 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E1DB14 8018E3E4 44812000 */  mtc1        $at, $ft0
/* E1DB18 8018E3E8 3C018017 */  lui         $at, %hi(D_80177988)
/* E1DB1C 8018E3EC 46044180 */  add.s       $ft1, $ft2, $ft0
/* E1DB20 8018E3F0 C4287988 */  lwc1        $ft2, %lo(D_80177988)($at)
/* E1DB24 8018E3F4 3C0143C8 */  lui         $at, (0x43C80000 >> 16)
/* E1DB28 8018E3F8 460A3001 */  sub.s       $fv0, $ft1, $ft3
/* E1DB2C 8018E3FC E7A80034 */  swc1        $ft2, 0x34($sp)
/* E1DB30 8018E400 C604007C */  lwc1        $ft0, 0x7C($s0)
/* E1DB34 8018E404 44813000 */  mtc1        $at, $ft1
/* E1DB38 8018E408 46000005 */  abs.s       $fv0, $fv0
/* E1DB3C 8018E40C 3C018017 */  lui         $at, %hi(D_80177978)
/* E1DB40 8018E410 46062100 */  add.s       $ft0, $ft0, $ft1
/* E1DB44 8018E414 46001382 */  mul.s       $fa1, $fv1, $fv0
/* E1DB48 8018E418 460C9180 */  add.s       $ft1, $ft5, $fa0
/* E1DB4C 8018E41C 46082001 */  sub.s       $fv0, $ft0, $ft2
/* E1DB50 8018E420 E4267978 */  swc1        $ft1, %lo(D_80177978)($at)
/* E1DB54 8018E424 3C018017 */  lui         $at, %hi(D_80177980)
/* E1DB58 8018E428 460E5101 */  sub.s       $ft0, $ft3, $fa1
/* E1DB5C 8018E42C 46000005 */  abs.s       $fv0, $fv0
/* E1DB60 8018E430 E4247980 */  swc1        $ft0, %lo(D_80177980)($at)
/* E1DB64 8018E434 46001402 */  mul.s       $ft4, $fv1, $fv0
/* E1DB68 8018E438 3C018017 */  lui         $at, %hi(D_80177988)
/* E1DB6C 8018E43C 46104181 */  sub.s       $ft1, $ft2, $ft4
/* E1DB70 8018E440 E4267988 */  swc1        $ft1, %lo(D_80177988)($at)
/* E1DB74 8018E444 3C018017 */  lui         $at, %hi(D_801779A0)
/* E1DB78 8018E448 C42A79A0 */  lwc1        $ft3, %lo(D_801779A0)($at)
/* E1DB7C 8018E44C 3C018017 */  lui         $at, %hi(D_801779B8)
/* E1DB80 8018E450 C42879B8 */  lwc1        $ft2, %lo(D_801779B8)($at)
/* E1DB84 8018E454 E7AA0040 */  swc1        $ft3, 0x40($sp)
/* E1DB88 8018E458 C6040074 */  lwc1        $ft0, 0x74($s0)
/* E1DB8C 8018E45C E7A80038 */  swc1        $ft2, 0x38($sp)
/* E1DB90 8018E460 C6060078 */  lwc1        $ft1, 0x78($s0)
/* E1DB94 8018E464 460A2001 */  sub.s       $fv0, $ft0, $ft3
/* E1DB98 8018E468 C6040148 */  lwc1        $ft0, 0x148($s0)
/* E1DB9C 8018E46C 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E1DBA0 8018E470 46000005 */  abs.s       $fv0, $fv0
/* E1DBA4 8018E474 46001302 */  mul.s       $fa0, $fv1, $fv0
/* E1DBA8 8018E478 00000000 */  nop
/* E1DBAC 8018E47C 46043182 */  mul.s       $ft1, $ft1, $ft0
/* E1DBB0 8018E480 44812000 */  mtc1        $at, $ft0
/* E1DBB4 8018E484 3C018017 */  lui         $at, %hi(D_801779C0)
/* E1DBB8 8018E488 46043180 */  add.s       $ft1, $ft1, $ft0
/* E1DBBC 8018E48C C42479C0 */  lwc1        $ft0, %lo(D_801779C0)($at)
/* E1DBC0 8018E490 3C01424C */  lui         $at, (0x424C0000 >> 16)
/* E1DBC4 8018E494 46083001 */  sub.s       $fv0, $ft1, $ft2
/* E1DBC8 8018E498 E7A40034 */  swc1        $ft0, 0x34($sp)
/* E1DBCC 8018E49C C606007C */  lwc1        $ft1, 0x7C($s0)
/* E1DBD0 8018E4A0 E7AA0028 */  swc1        $ft3, 0x28($sp)
/* E1DBD4 8018E4A4 44815000 */  mtc1        $at, $ft3
/* E1DBD8 8018E4A8 46000005 */  abs.s       $fv0, $fv0
/* E1DBDC 8018E4AC 3C018017 */  lui         $at, %hi(D_801779A0)
/* E1DBE0 8018E4B0 460A3181 */  sub.s       $ft1, $ft1, $ft3
/* E1DBE4 8018E4B4 46001382 */  mul.s       $fa1, $fv1, $fv0
/* E1DBE8 8018E4B8 C7AA0028 */  lwc1        $ft3, 0x28($sp)
/* E1DBEC 8018E4BC 46043001 */  sub.s       $fv0, $ft1, $ft0
/* E1DBF0 8018E4C0 460C5180 */  add.s       $ft1, $ft3, $fa0
/* E1DBF4 8018E4C4 46000005 */  abs.s       $fv0, $fv0
/* E1DBF8 8018E4C8 460E4281 */  sub.s       $ft3, $ft2, $fa1
/* E1DBFC 8018E4CC 46001402 */  mul.s       $ft4, $fv1, $fv0
/* E1DC00 8018E4D0 E42679A0 */  swc1        $ft1, %lo(D_801779A0)($at)
/* E1DC04 8018E4D4 3C018017 */  lui         $at, %hi(D_801779B8)
/* E1DC08 8018E4D8 E42A79B8 */  swc1        $ft3, %lo(D_801779B8)($at)
/* E1DC0C 8018E4DC 3C018017 */  lui         $at, %hi(D_801779C0)
/* E1DC10 8018E4E0 46102181 */  sub.s       $ft1, $ft0, $ft4
/* E1DC14 8018E4E4 E42679C0 */  swc1        $ft1, %lo(D_801779C0)($at)
/* E1DC18 8018E4E8 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1DC1C 8018E4EC 44810000 */  mtc1        $at, $fv0
/* E1DC20 8018E4F0 3C018017 */  lui         $at, %hi(D_80177A48)
/* E1DC24 8018E4F4 E4207A48 */  swc1        $fv0, %lo(D_80177A48)($at)
/* E1DC28 8018E4F8 3C018017 */  lui         $at, %hi(D_80177A48 + 0x4)
/* E1DC2C 8018E4FC E4207A4C */  swc1        $fv0, %lo(D_80177A48 + 0x4)($at)
.LE16C50_8018E500:
/* E1DC30 8018E500 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1DC34 8018E504 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E1DC38 8018E508 240101CC */  addiu       $at, $zero, 0x1CC
/* E1DC3C 8018E50C 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1DC40 8018E510 14610012 */  bne         $v1, $at, .LE16C50_8018E55C
/* E1DC44 8018E514 24E75D34 */   addiu      $a3, $a3, %lo(D_800C5D34)
/* E1DC48 8018E518 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E1DC4C 8018E51C 44814000 */  mtc1        $at, $ft2
/* E1DC50 8018E520 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E1DC54 8018E524 44815000 */  mtc1        $at, $ft3
/* E1DC58 8018E528 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E1DC5C 8018E52C 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E1DC60 8018E530 3C040900 */  lui         $a0, (0x9000002 >> 16)
/* E1DC64 8018E534 E6080190 */  swc1        $ft2, 0x190($s0)
/* E1DC68 8018E538 E60A0194 */  swc1        $ft3, 0x194($s0)
/* E1DC6C 8018E53C AFAD0014 */  sw          $t5, 0x14($sp)
/* E1DC70 8018E540 AFA70010 */  sw          $a3, 0x10($sp)
/* E1DC74 8018E544 34840002 */  ori         $a0, $a0, (0x9000002 & 0xFFFF)
/* E1DC78 8018E548 26050460 */  addiu       $a1, $s0, 0x460
/* E1DC7C 8018E54C 0C006486 */  jal         Audio_PlaySfx
/* E1DC80 8018E550 00003025 */   or         $a2, $zero, $zero
/* E1DC84 8018E554 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1DC88 8018E558 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018E55C:
/* E1DC8C 8018E55C 286101CC */  slti        $at, $v1, 0x1CC
/* E1DC90 8018E560 14200009 */  bnez        $at, .LE16C50_8018E588
/* E1DC94 8018E564 260400D0 */   addiu      $a0, $s0, 0xD0
/* E1DC98 8018E568 3C01801C */  lui         $at, %hi(D_E16C50_801C0B74)
/* E1DC9C 8018E56C C4240B74 */  lwc1        $ft0, %lo(D_E16C50_801C0B74)($at)
/* E1DCA0 8018E570 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1DCA4 8018E574 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1DCA8 8018E578 3C054248 */  lui         $a1, (0x42480000 >> 16)
/* E1DCAC 8018E57C 3C074040 */  lui         $a3, (0x40400000 >> 16)
/* E1DCB0 8018E580 0C026F0B */  jal         Math_SmoothStepToF
/* E1DCB4 8018E584 E7A40010 */   swc1       $ft0, 0x10($sp)
.LE16C50_8018E588:
/* E1DCB8 8018E588 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E1DCBC 8018E58C 44814000 */  mtc1        $at, $ft2
/* E1DCC0 8018E590 C606007C */  lwc1        $ft1, 0x7C($s0)
/* E1DCC4 8018E594 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1DCC8 8018E598 240E0001 */  addiu       $t6, $zero, 0x1
/* E1DCCC 8018E59C 4608303C */  c.lt.s      $ft1, $ft2
/* E1DCD0 8018E5A0 240F0032 */  addiu       $t7, $zero, 0x32
/* E1DCD4 8018E5A4 00002025 */  or          $a0, $zero, $zero
/* E1DCD8 8018E5A8 34058007 */  ori         $a1, $zero, 0x8007
/* E1DCDC 8018E5AC 45000005 */  bc1f        .LE16C50_8018E5C4
/* E1DCE0 8018E5B0 00003025 */   or         $a2, $zero, $zero
/* E1DCE4 8018E5B4 44805000 */  mtc1        $zero, $ft3
/* E1DCE8 8018E5B8 44802000 */  mtc1        $zero, $ft0
/* E1DCEC 8018E5BC E60A007C */  swc1        $ft3, 0x7C($s0)
/* E1DCF0 8018E5C0 E60400D0 */  swc1        $ft0, 0xD0($s0)
.LE16C50_8018E5C4:
/* E1DCF4 8018E5C4 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E1DCF8 8018E5C8 2401021C */  addiu       $at, $zero, 0x21C
/* E1DCFC 8018E5CC 240700FF */  addiu       $a3, $zero, 0xFF
/* E1DD00 8018E5D0 14610015 */  bne         $v1, $at, .LE16C50_8018E628
/* E1DD04 8018E5D4 3C018018 */   lui        $at, %hi(D_80178488)
/* E1DD08 8018E5D8 AC2E8488 */  sw          $t6, %lo(D_80178488)($at)
/* E1DD0C 8018E5DC 3C018017 */  lui         $at, %hi(D_80177838)
/* E1DD10 8018E5E0 AC2F7838 */  sw          $t7, %lo(D_80177838)($at)
/* E1DD14 8018E5E4 3C0143AF */  lui         $at, (0x43AF0000 >> 16)
/* E1DD18 8018E5E8 44803000 */  mtc1        $zero, $ft1
/* E1DD1C 8018E5EC 44804000 */  mtc1        $zero, $ft2
/* E1DD20 8018E5F0 44815000 */  mtc1        $at, $ft3
/* E1DD24 8018E5F4 3C018016 */  lui         $at, %hi(D_80161A54)
/* E1DD28 8018E5F8 E6060074 */  swc1        $ft1, 0x74($s0)
/* E1DD2C 8018E5FC E608007C */  swc1        $ft2, 0x7C($s0)
/* E1DD30 8018E600 E60A0078 */  swc1        $ft3, 0x78($s0)
/* E1DD34 8018E604 C4241A54 */  lwc1        $ft0, %lo(D_80161A54)($at)
/* E1DD38 8018E608 AE0001D0 */  sw          $zero, 0x1D0($s0)
/* E1DD3C 8018E60C AE0001F8 */  sw          $zero, 0x1F8($s0)
/* E1DD40 8018E610 0C007511 */  jal         func_8001D444
/* E1DD44 8018E614 E60400D0 */   swc1       $ft0, 0xD0($s0)
/* E1DD48 8018E618 24180003 */  addiu       $t8, $zero, 0x3
/* E1DD4C 8018E61C AE1801C8 */  sw          $t8, 0x1C8($s0)
/* E1DD50 8018E620 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1DD54 8018E624 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018E628:
/* E1DD58 8018E628 28610169 */  slti        $at, $v1, 0x169
/* E1DD5C 8018E62C 1420000F */  bnez        $at, .LE16C50_8018E66C
/* E1DD60 8018E630 00601025 */   or         $v0, $v1, $zero
/* E1DD64 8018E634 240101AE */  addiu       $at, $zero, 0x1AE
/* E1DD68 8018E638 1061007F */  beq         $v1, $at, .LE16C50_8018E838
/* E1DD6C 8018E63C 24180010 */   addiu      $t8, $zero, 0x10
/* E1DD70 8018E640 240101B8 */  addiu       $at, $zero, 0x1B8
/* E1DD74 8018E644 1061007F */  beq         $v1, $at, .LE16C50_8018E844
/* E1DD78 8018E648 2419000B */   addiu      $t9, $zero, 0xB
/* E1DD7C 8018E64C 240101C2 */  addiu       $at, $zero, 0x1C2
/* E1DD80 8018E650 1061007F */  beq         $v1, $at, .LE16C50_8018E850
/* E1DD84 8018E654 24080006 */   addiu      $t0, $zero, 0x6
/* E1DD88 8018E658 240101E0 */  addiu       $at, $zero, 0x1E0
/* E1DD8C 8018E65C 1061007F */  beq         $v1, $at, .LE16C50_8018E85C
/* E1DD90 8018E660 00000000 */   nop
/* E1DD94 8018E664 10000080 */  b           .LE16C50_8018E868
/* E1DD98 8018E668 C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E66C:
/* E1DD9C 8018E66C 284100D3 */  slti        $at, $v0, 0xD3
/* E1DDA0 8018E670 14200010 */  bnez        $at, .LE16C50_8018E6B4
/* E1DDA4 8018E674 28410119 */   slti       $at, $v0, 0x119
/* E1DDA8 8018E678 14200006 */  bnez        $at, .LE16C50_8018E694
/* E1DDAC 8018E67C 2459FF10 */   addiu      $t9, $v0, -0xF0
/* E1DDB0 8018E680 24010168 */  addiu       $at, $zero, 0x168
/* E1DDB4 8018E684 10410067 */  beq         $v0, $at, .LE16C50_8018E824
/* E1DDB8 8018E688 3C048018 */   lui        $a0, %hi(gMsg_ID_7011)
/* E1DDBC 8018E68C 10000076 */  b           .LE16C50_8018E868
/* E1DDC0 8018E690 C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E694:
/* E1DDC4 8018E694 2F210029 */  sltiu       $at, $t9, 0x29
/* E1DDC8 8018E698 10200072 */  beqz        $at, .LE16C50_8018E864
/* E1DDCC 8018E69C 0019C880 */   sll        $t9, $t9, 2
/* E1DDD0 8018E6A0 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C0B78)
/* E1DDD4 8018E6A4 00390821 */  addu        $at, $at, $t9
/* E1DDD8 8018E6A8 8C390B78 */  lw          $t9, %lo(jtbl_E16C50_801C0B78)($at)
/* E1DDDC 8018E6AC 03200008 */  jr          $t9
/* E1DDE0 8018E6B0 00000000 */   nop
.LE16C50_8018E6B4:
/* E1DDE4 8018E6B4 28410029 */  slti        $at, $v0, 0x29
/* E1DDE8 8018E6B8 14200009 */  bnez        $at, .LE16C50_8018E6E0
/* E1DDEC 8018E6BC 2448FF65 */   addiu      $t0, $v0, -0x9B
/* E1DDF0 8018E6C0 2D010038 */  sltiu       $at, $t0, 0x38
/* E1DDF4 8018E6C4 10200067 */  beqz        $at, .LE16C50_8018E864
/* E1DDF8 8018E6C8 00084080 */   sll        $t0, $t0, 2
/* E1DDFC 8018E6CC 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C0C1C)
/* E1DE00 8018E6D0 00280821 */  addu        $at, $at, $t0
/* E1DE04 8018E6D4 8C280C1C */  lw          $t0, %lo(jtbl_E16C50_801C0C1C)($at)
/* E1DE08 8018E6D8 01000008 */  jr          $t0
/* E1DE0C 8018E6DC 00000000 */   nop
.LE16C50_8018E6E0:
/* E1DE10 8018E6E0 24010028 */  addiu       $at, $zero, 0x28
/* E1DE14 8018E6E4 1041000A */  beq         $v0, $at, .LE16C50_8018E710
/* E1DE18 8018E6E8 3C048018 */   lui        $a0, %hi(gMsg_ID_7005)
/* E1DE1C 8018E6EC 1000005E */  b           .LE16C50_8018E868
/* E1DE20 8018E6F0 C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E6F4:
/* E1DE24 8018E6F4 00002025 */  or          $a0, $zero, $zero
/* E1DE28 8018E6F8 24050033 */  addiu       $a1, $zero, 0x33
/* E1DE2C 8018E6FC 00003025 */  or          $a2, $zero, $zero
/* E1DE30 8018E700 0C007511 */  jal         func_8001D444
/* E1DE34 8018E704 240700FF */   addiu      $a3, $zero, 0xFF
/* E1DE38 8018E708 10000057 */  b           .LE16C50_8018E868
/* E1DE3C 8018E70C C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E710:
/* E1DE40 8018E710 2484DAF4 */  addiu       $a0, $a0, %lo(gMsg_ID_7005)
/* E1DE44 8018E714 0C02EA02 */  jal         func_800BA808
/* E1DE48 8018E718 240500B4 */   addiu      $a1, $zero, 0xB4
/* E1DE4C 8018E71C 10000052 */  b           .LE16C50_8018E868
/* E1DE50 8018E720 C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E724:
/* E1DE54 8018E724 C6060074 */  lwc1        $ft1, 0x74($s0)
/* E1DE58 8018E728 27A4005C */  addiu       $a0, $sp, 0x5C
/* E1DE5C 8018E72C E7A6005C */  swc1        $ft1, 0x5C($sp)
/* E1DE60 8018E730 C6080078 */  lwc1        $ft2, 0x78($s0)
/* E1DE64 8018E734 E7A80060 */  swc1        $ft2, 0x60($sp)
/* E1DE68 8018E738 C60A007C */  lwc1        $ft3, 0x7C($s0)
/* E1DE6C 8018E73C 0C063648 */  jal         func_E16C50_8018D920
/* E1DE70 8018E740 E7AA0064 */   swc1       $ft3, 0x64($sp)
/* E1DE74 8018E744 10000048 */  b           .LE16C50_8018E868
/* E1DE78 8018E748 C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E74C:
/* E1DE7C 8018E74C 3C098017 */  lui         $t1, %hi(gTeamShields + 0x4)
/* E1DE80 8018E750 8D2978B4 */  lw          $t1, %lo(gTeamShields + 0x4)($t1)
/* E1DE84 8018E754 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x8E0)
/* E1DE88 8018E758 59200043 */  blezl       $t1, .LE16C50_8018E868
/* E1DE8C 8018E75C C60400E8 */   lwc1       $ft0, 0xE8($s0)
/* E1DE90 8018E760 0C063648 */  jal         func_E16C50_8018D920
/* E1DE94 8018E764 248448C0 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0x8E0)
/* E1DE98 8018E768 1000003F */  b           .LE16C50_8018E868
/* E1DE9C 8018E76C C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E770:
/* E1DEA0 8018E770 3C0A8017 */  lui         $t2, %hi(gTeamShields + 0x8)
/* E1DEA4 8018E774 8D4A78B8 */  lw          $t2, %lo(gTeamShields + 0x8)($t2)
/* E1DEA8 8018E778 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xBD4)
/* E1DEAC 8018E77C 5940003A */  blezl       $t2, .LE16C50_8018E868
/* E1DEB0 8018E780 C60400E8 */   lwc1       $ft0, 0xE8($s0)
/* E1DEB4 8018E784 0C063648 */  jal         func_E16C50_8018D920
/* E1DEB8 8018E788 24844BB4 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xBD4)
/* E1DEBC 8018E78C 10000036 */  b           .LE16C50_8018E868
/* E1DEC0 8018E790 C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E794:
/* E1DEC4 8018E794 3C0B8017 */  lui         $t3, %hi(gTeamShields + 0xC)
/* E1DEC8 8018E798 8D6B78BC */  lw          $t3, %lo(gTeamShields + 0xC)($t3)
/* E1DECC 8018E79C 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xEC8)
/* E1DED0 8018E7A0 59600031 */  blezl       $t3, .LE16C50_8018E868
/* E1DED4 8018E7A4 C60400E8 */   lwc1       $ft0, 0xE8($s0)
/* E1DED8 8018E7A8 0C063648 */  jal         func_E16C50_8018D920
/* E1DEDC 8018E7AC 24844EA8 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xEC8)
/* E1DEE0 8018E7B0 1000002D */  b           .LE16C50_8018E868
/* E1DEE4 8018E7B4 C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E7B8:
/* E1DEE8 8018E7B8 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x2F4)
/* E1DEEC 8018E7BC 0C063538 */  jal         func_E16C50_8018D4E0
/* E1DEF0 8018E7C0 248442D4 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0x2F4)
/* E1DEF4 8018E7C4 10000028 */  b           .LE16C50_8018E868
/* E1DEF8 8018E7C8 C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E7CC:
/* E1DEFC 8018E7CC 3C048018 */  lui         $a0, %hi(gMsg_ID_7006)
/* E1DF00 8018E7D0 2484DB2C */  addiu       $a0, $a0, %lo(gMsg_ID_7006)
/* E1DF04 8018E7D4 0C02EA02 */  jal         func_800BA808
/* E1DF08 8018E7D8 240500B4 */   addiu      $a1, $zero, 0xB4
/* E1DF0C 8018E7DC 10000022 */  b           .LE16C50_8018E868
/* E1DF10 8018E7E0 C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E7E4:
/* E1DF14 8018E7E4 240C0003 */  addiu       $t4, $zero, 0x3
/* E1DF18 8018E7E8 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x6A0)
/* E1DF1C 8018E7EC 1000001D */  b           .LE16C50_8018E864
/* E1DF20 8018E7F0 A42C4680 */   sh         $t4, %lo(gObjects2F4 + 0x6A0)($at)
.LE16C50_8018E7F4:
/* E1DF24 8018E7F4 240D0003 */  addiu       $t5, $zero, 0x3
/* E1DF28 8018E7F8 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1270)
/* E1DF2C 8018E7FC 10000019 */  b           .LE16C50_8018E864
/* E1DF30 8018E800 A42D5250 */   sh         $t5, %lo(gObjects2F4 + 0x1270)($at)
.LE16C50_8018E804:
/* E1DF34 8018E804 240E0003 */  addiu       $t6, $zero, 0x3
/* E1DF38 8018E808 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1564)
/* E1DF3C 8018E80C 10000015 */  b           .LE16C50_8018E864
/* E1DF40 8018E810 A42E5544 */   sh         $t6, %lo(gObjects2F4 + 0x1564)($at)
.LE16C50_8018E814:
/* E1DF44 8018E814 240F0003 */  addiu       $t7, $zero, 0x3
/* E1DF48 8018E818 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1858)
/* E1DF4C 8018E81C 10000011 */  b           .LE16C50_8018E864
/* E1DF50 8018E820 A42F5838 */   sh         $t7, %lo(gObjects2F4 + 0x1858)($at)
.LE16C50_8018E824:
/* E1DF54 8018E824 2484DB74 */  addiu       $a0, $a0, %lo(gMsg_ID_7011)
/* E1DF58 8018E828 0C02EA02 */  jal         func_800BA808
/* E1DF5C 8018E82C 2405000A */   addiu      $a1, $zero, 0xA
/* E1DF60 8018E830 1000000D */  b           .LE16C50_8018E868
/* E1DF64 8018E834 C60400E8 */   lwc1       $ft0, 0xE8($s0)
.LE16C50_8018E838:
/* E1DF68 8018E838 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xF7C)
/* E1DF6C 8018E83C 10000009 */  b           .LE16C50_8018E864
/* E1DF70 8018E840 A4384F5C */   sh         $t8, %lo(gObjects2F4 + 0xF7C)($at)
.LE16C50_8018E844:
/* E1DF74 8018E844 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xC88)
/* E1DF78 8018E848 10000006 */  b           .LE16C50_8018E864
/* E1DF7C 8018E84C A4394C68 */   sh         $t9, %lo(gObjects2F4 + 0xC88)($at)
.LE16C50_8018E850:
/* E1DF80 8018E850 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x994)
/* E1DF84 8018E854 10000003 */  b           .LE16C50_8018E864
/* E1DF88 8018E858 A4284974 */   sh         $t0, %lo(gObjects2F4 + 0x994)($at)
.LE16C50_8018E85C:
/* E1DF8C 8018E85C 0C029852 */  jal         func_800A6148
/* E1DF90 8018E860 00000000 */   nop
.LE16C50_8018E864:
/* E1DF94 8018E864 C60400E8 */  lwc1        $ft0, 0xE8($s0)
.LE16C50_8018E868:
/* E1DF98 8018E868 C6060114 */  lwc1        $ft1, 0x114($s0)
/* E1DF9C 8018E86C 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E1DFA0 8018E870 44815000 */  mtc1        $at, $ft3
/* E1DFA4 8018E874 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1DFA8 8018E878 3C01801C */  lui         $at, %hi(D_E16C50_801C0CFC)
/* E1DFAC 8018E87C C4260CFC */  lwc1        $ft1, %lo(D_E16C50_801C0CFC)($at)
/* E1DFB0 8018E880 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1DFB4 8018E884 460A4100 */  add.s       $ft0, $ft2, $ft3
/* E1DFB8 8018E888 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1DFBC 8018E88C 00003025 */  or          $a2, $zero, $zero
/* E1DFC0 8018E890 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E1DFC4 8018E894 44054000 */  mfc1        $a1, $ft2
/* E1DFC8 8018E898 0C0017A4 */  jal         Matrix_RotateY
/* E1DFCC 8018E89C 00000000 */   nop
/* E1DFD0 8018E8A0 3C01801C */  lui         $at, %hi(D_E16C50_801C0D00)
/* E1DFD4 8018E8A4 C4240D00 */  lwc1        $ft0, %lo(D_E16C50_801C0D00)($at)
/* E1DFD8 8018E8A8 C60A00E4 */  lwc1        $ft3, 0xE4($s0)
/* E1DFDC 8018E8AC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1DFE0 8018E8B0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1DFE4 8018E8B4 46045182 */  mul.s       $ft1, $ft3, $ft0
/* E1DFE8 8018E8B8 24060001 */  addiu       $a2, $zero, 0x1
/* E1DFEC 8018E8BC 46003207 */  neg.s       $ft2, $ft1
/* E1DFF0 8018E8C0 44054000 */  mfc1        $a1, $ft2
/* E1DFF4 8018E8C4 0C001751 */  jal         Matrix_RotateX
/* E1DFF8 8018E8C8 00000000 */   nop
/* E1DFFC 8018E8CC 8E0901C8 */  lw          $t1, 0x1C8($s0)
/* E1E000 8018E8D0 24010003 */  addiu       $at, $zero, 0x3
/* E1E004 8018E8D4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1E008 8018E8D8 5121001F */  beql        $t1, $at, .LE16C50_8018E958
/* E1E00C 8018E8DC C60600EC */   lwc1       $ft1, 0xEC($s0)
/* E1E010 8018E8E0 44800000 */  mtc1        $zero, $fv0
/* E1E014 8018E8E4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1E018 8018E8E8 27A50074 */  addiu       $a1, $sp, 0x74
/* E1E01C 8018E8EC E7A00074 */  swc1        $fv0, 0x74($sp)
/* E1E020 8018E8F0 E7A00078 */  swc1        $fv0, 0x78($sp)
/* E1E024 8018E8F4 C60A00D0 */  lwc1        $ft3, 0xD0($s0)
/* E1E028 8018E8F8 27A60068 */  addiu       $a2, $sp, 0x68
/* E1E02C 8018E8FC 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E1E030 8018E900 E7AA007C */   swc1       $ft3, 0x7C($sp)
/* E1E034 8018E904 C7A40068 */  lwc1        $ft0, 0x68($sp)
/* E1E038 8018E908 C60A0074 */  lwc1        $ft3, 0x74($s0)
/* E1E03C 8018E90C E60400C0 */  swc1        $ft0, 0xC0($s0)
/* E1E040 8018E910 C7A60070 */  lwc1        $ft1, 0x70($sp)
/* E1E044 8018E914 C60400C0 */  lwc1        $ft0, 0xC0($s0)
/* E1E048 8018E918 E60600C8 */  swc1        $ft1, 0xC8($s0)
/* E1E04C 8018E91C C7A8006C */  lwc1        $ft2, 0x6C($sp)
/* E1E050 8018E920 46045180 */  add.s       $ft1, $ft3, $ft0
/* E1E054 8018E924 E60800C4 */  swc1        $ft2, 0xC4($s0)
/* E1E058 8018E928 C60A00C4 */  lwc1        $ft3, 0xC4($s0)
/* E1E05C 8018E92C C6080078 */  lwc1        $ft2, 0x78($s0)
/* E1E060 8018E930 E6060074 */  swc1        $ft1, 0x74($s0)
/* E1E064 8018E934 C606007C */  lwc1        $ft1, 0x7C($s0)
/* E1E068 8018E938 460A4100 */  add.s       $ft0, $ft2, $ft3
/* E1E06C 8018E93C C60800C8 */  lwc1        $ft2, 0xC8($s0)
/* E1E070 8018E940 46083280 */  add.s       $ft3, $ft1, $ft2
/* E1E074 8018E944 E6040078 */  swc1        $ft0, 0x78($s0)
/* E1E078 8018E948 E60A007C */  swc1        $ft3, 0x7C($s0)
/* E1E07C 8018E94C C604007C */  lwc1        $ft0, 0x7C($s0)
/* E1E080 8018E950 E6040138 */  swc1        $ft0, 0x138($s0)
/* E1E084 8018E954 C60600EC */  lwc1        $ft1, 0xEC($s0)
.LE16C50_8018E958:
/* E1E088 8018E958 C608012C */  lwc1        $ft2, 0x12C($s0)
/* E1E08C 8018E95C C6040130 */  lwc1        $ft0, 0x130($s0)
/* E1E090 8018E960 3C01801C */  lui         $at, %hi(D_E16C50_801C0D04)
/* E1E094 8018E964 46083280 */  add.s       $ft3, $ft1, $ft2
/* E1E098 8018E968 3C058017 */  lui         $a1, %hi(D_80177978)
/* E1E09C 8018E96C 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E1E0A0 8018E970 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1E0A4 8018E974 46045180 */  add.s       $ft1, $ft3, $ft0
/* E1E0A8 8018E978 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1E0AC 8018E97C 26040040 */  addiu       $a0, $s0, 0x40
/* E1E0B0 8018E980 E60600F8 */  swc1        $ft1, 0xF8($s0)
/* E1E0B4 8018E984 C4280D04 */  lwc1        $ft2, %lo(D_E16C50_801C0D04)($at)
/* E1E0B8 8018E988 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E1E0BC 8018E98C 8CA57978 */  lw          $a1, %lo(D_80177978)($a1)
/* E1E0C0 8018E990 0C026F0B */  jal         Math_SmoothStepToF
/* E1E0C4 8018E994 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1E0C8 8018E998 3C01801C */  lui         $at, %hi(D_E16C50_801C0D08)
/* E1E0CC 8018E99C C42A0D08 */  lwc1        $ft3, %lo(D_E16C50_801C0D08)($at)
/* E1E0D0 8018E9A0 3C058017 */  lui         $a1, %hi(D_80177980)
/* E1E0D4 8018E9A4 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E1E0D8 8018E9A8 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1E0DC 8018E9AC 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1E0E0 8018E9B0 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E1E0E4 8018E9B4 8CA57980 */  lw          $a1, %lo(D_80177980)($a1)
/* E1E0E8 8018E9B8 26040044 */  addiu       $a0, $s0, 0x44
/* E1E0EC 8018E9BC 0C026F0B */  jal         Math_SmoothStepToF
/* E1E0F0 8018E9C0 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E1E0F4 8018E9C4 3C01801C */  lui         $at, %hi(D_E16C50_801C0D0C)
/* E1E0F8 8018E9C8 C4240D0C */  lwc1        $ft0, %lo(D_E16C50_801C0D0C)($at)
/* E1E0FC 8018E9CC 3C058017 */  lui         $a1, %hi(D_80177988)
/* E1E100 8018E9D0 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E1E104 8018E9D4 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1E108 8018E9D8 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1E10C 8018E9DC 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E1E110 8018E9E0 8CA57988 */  lw          $a1, %lo(D_80177988)($a1)
/* E1E114 8018E9E4 26040048 */  addiu       $a0, $s0, 0x48
/* E1E118 8018E9E8 0C026F0B */  jal         Math_SmoothStepToF
/* E1E11C 8018E9EC E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1E120 8018E9F0 3C01801C */  lui         $at, %hi(D_E16C50_801C0D10)
/* E1E124 8018E9F4 C4260D10 */  lwc1        $ft1, %lo(D_E16C50_801C0D10)($at)
/* E1E128 8018E9F8 3C058017 */  lui         $a1, %hi(D_801779A0)
/* E1E12C 8018E9FC 3C068017 */  lui         $a2, %hi(D_80177A48 + 0x4)
/* E1E130 8018EA00 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1E134 8018EA04 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1E138 8018EA08 8CC67A4C */  lw          $a2, %lo(D_80177A48 + 0x4)($a2)
/* E1E13C 8018EA0C 8CA579A0 */  lw          $a1, %lo(D_801779A0)($a1)
/* E1E140 8018EA10 2604004C */  addiu       $a0, $s0, 0x4C
/* E1E144 8018EA14 0C026F0B */  jal         Math_SmoothStepToF
/* E1E148 8018EA18 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1E14C 8018EA1C 3C01801C */  lui         $at, %hi(D_E16C50_801C0D14)
/* E1E150 8018EA20 C4280D14 */  lwc1        $ft2, %lo(D_E16C50_801C0D14)($at)
/* E1E154 8018EA24 3C058017 */  lui         $a1, %hi(D_801779B8)
/* E1E158 8018EA28 3C068017 */  lui         $a2, %hi(D_80177A48 + 0x4)
/* E1E15C 8018EA2C 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1E160 8018EA30 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1E164 8018EA34 8CC67A4C */  lw          $a2, %lo(D_80177A48 + 0x4)($a2)
/* E1E168 8018EA38 8CA579B8 */  lw          $a1, %lo(D_801779B8)($a1)
/* E1E16C 8018EA3C 26040050 */  addiu       $a0, $s0, 0x50
/* E1E170 8018EA40 0C026F0B */  jal         Math_SmoothStepToF
/* E1E174 8018EA44 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1E178 8018EA48 3C01801C */  lui         $at, %hi(D_E16C50_801C0D18)
/* E1E17C 8018EA4C C42A0D18 */  lwc1        $ft3, %lo(D_E16C50_801C0D18)($at)
/* E1E180 8018EA50 3C058017 */  lui         $a1, %hi(D_801779C0)
/* E1E184 8018EA54 3C068017 */  lui         $a2, %hi(D_80177A48 + 0x4)
/* E1E188 8018EA58 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1E18C 8018EA5C 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1E190 8018EA60 8CC67A4C */  lw          $a2, %lo(D_80177A48 + 0x4)($a2)
/* E1E194 8018EA64 8CA579C0 */  lw          $a1, %lo(D_801779C0)($a1)
/* E1E198 8018EA68 26040054 */  addiu       $a0, $s0, 0x54
/* E1E19C 8018EA6C 0C026F0B */  jal         Math_SmoothStepToF
/* E1E1A0 8018EA70 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E1E1A4 8018EA74 8FBF0024 */  lw          $ra, 0x24($sp)
/* E1E1A8 8018EA78 8FB00020 */  lw          $s0, 0x20($sp)
/* E1E1AC 8018EA7C 27BD0080 */  addiu       $sp, $sp, 0x80
/* E1E1B0 8018EA80 03E00008 */  jr          $ra
/* E1E1B4 8018EA84 00000000 */   nop
glabel func_E16C50_8018EA88
/* E1E1B8 8018EA88 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E1E1BC 8018EA8C AFBF0014 */  sw          $ra, 0x14($sp)
/* E1E1C0 8018EA90 00803025 */  or          $a2, $a0, $zero
/* E1E1C4 8018EA94 00C02025 */  or          $a0, $a2, $zero
/* E1E1C8 8018EA98 0C0184F1 */  jal         Object_2F4_Initialize
/* E1E1CC 8018EA9C AFA60018 */   sw         $a2, 0x18($sp)
/* E1E1D0 8018EAA0 8FA60018 */  lw          $a2, 0x18($sp)
/* E1E1D4 8018EAA4 44800000 */  mtc1        $zero, $fv0
/* E1E1D8 8018EAA8 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1E1DC 8018EAAC 44811000 */  mtc1        $at, $fv1
/* E1E1E0 8018EAB0 240E0002 */  addiu       $t6, $zero, 0x2
/* E1E1E4 8018EAB4 240F00C3 */  addiu       $t7, $zero, 0xC3
/* E1E1E8 8018EAB8 3C018017 */  lui         $at, %hi(gObjects408 + 0xC)
/* E1E1EC 8018EABC A0CE0000 */  sb          $t6, 0x0($a2)
/* E1E1F0 8018EAC0 A4CF0002 */  sh          $t7, 0x2($a2)
/* E1E1F4 8018EAC4 E4C00004 */  swc1        $fv0, 0x4($a2)
/* E1E1F8 8018EAC8 E4C00008 */  swc1        $fv0, 0x8($a2)
/* E1E1FC 8018EACC C424F11C */  lwc1        $ft0, %lo(gObjects408 + 0xC)($at)
/* E1E200 8018EAD0 3C0143FA */  lui         $at, (0x43FA0000 >> 16)
/* E1E204 8018EAD4 44813000 */  mtc1        $at, $ft1
/* E1E208 8018EAD8 240200FF */  addiu       $v0, $zero, 0xFF
/* E1E20C 8018EADC 24030064 */  addiu       $v1, $zero, 0x64
/* E1E210 8018EAE0 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1E214 8018EAE4 24180025 */  addiu       $t8, $zero, 0x25
/* E1E218 8018EAE8 241900F0 */  addiu       $t9, $zero, 0xF0
/* E1E21C 8018EAEC 31E5FFFF */  andi        $a1, $t7, 0xFFFF
/* E1E220 8018EAF0 E4C8000C */  swc1        $ft2, 0xC($a2)
/* E1E224 8018EAF4 A4D800B6 */  sh          $t8, 0xB6($a2)
/* E1E228 8018EAF8 A4C300B8 */  sh          $v1, 0xB8($a2)
/* E1E22C 8018EAFC ACC20050 */  sw          $v0, 0x50($a2)
/* E1E230 8018EB00 ACC20054 */  sw          $v0, 0x54($a2)
/* E1E234 8018EB04 ACC20058 */  sw          $v0, 0x58($a2)
/* E1E238 8018EB08 ACD9005C */  sw          $t9, 0x5C($a2)
/* E1E23C 8018EB0C ACC00060 */  sw          $zero, 0x60($a2)
/* E1E240 8018EB10 ACC00064 */  sw          $zero, 0x64($a2)
/* E1E244 8018EB14 ACC20068 */  sw          $v0, 0x68($a2)
/* E1E248 8018EB18 ACC3006C */  sw          $v1, 0x6C($a2)
/* E1E24C 8018EB1C 24C4001C */  addiu       $a0, $a2, 0x1C
/* E1E250 8018EB20 E4C20124 */  swc1        $fv1, 0x124($a2)
/* E1E254 8018EB24 0C0184AE */  jal         Object_SetInfo
/* E1E258 8018EB28 E4C20110 */   swc1       $fv1, 0x110($a2)
/* E1E25C 8018EB2C 8FBF0014 */  lw          $ra, 0x14($sp)
/* E1E260 8018EB30 27BD0018 */  addiu       $sp, $sp, 0x18
/* E1E264 8018EB34 03E00008 */  jr          $ra
/* E1E268 8018EB38 00000000 */   nop
glabel func_E16C50_8018EB3C
/* E1E26C 8018EB3C 27BDFFD0 */  addiu       $sp, $sp, -0x30
/* E1E270 8018EB40 AFB00020 */  sw          $s0, 0x20($sp)
/* E1E274 8018EB44 00808025 */  or          $s0, $a0, $zero
/* E1E278 8018EB48 AFBF0024 */  sw          $ra, 0x24($sp)
/* E1E27C 8018EB4C 3C028018 */  lui         $v0, %hi(gPlayer)
/* E1E280 8018EB50 8C428280 */  lw          $v0, %lo(gPlayer)($v0)
/* E1E284 8018EB54 02002025 */  or          $a0, $s0, $zero
/* E1E288 8018EB58 0C0184F1 */  jal         Object_2F4_Initialize
/* E1E28C 8018EB5C AFA2002C */   sw         $v0, 0x2C($sp)
/* E1E290 8018EB60 8FA2002C */  lw          $v0, 0x2C($sp)
/* E1E294 8018EB64 240E0001 */  addiu       $t6, $zero, 0x1
/* E1E298 8018EB68 240F00C3 */  addiu       $t7, $zero, 0xC3
/* E1E29C 8018EB6C A20E0000 */  sb          $t6, 0x0($s0)
/* E1E2A0 8018EB70 A60F0002 */  sh          $t7, 0x2($s0)
/* E1E2A4 8018EB74 C4440074 */  lwc1        $ft0, 0x74($v0)
/* E1E2A8 8018EB78 3C014416 */  lui         $at, (0x44160000 >> 16)
/* E1E2AC 8018EB7C 44814000 */  mtc1        $at, $ft2
/* E1E2B0 8018EB80 E6040004 */  swc1        $ft0, 0x4($s0)
/* E1E2B4 8018EB84 C4460078 */  lwc1        $ft1, 0x78($v0)
/* E1E2B8 8018EB88 3C01452F */  lui         $at, (0x452F0000 >> 16)
/* E1E2BC 8018EB8C 44819000 */  mtc1        $at, $ft5
/* E1E2C0 8018EB90 46083280 */  add.s       $ft3, $ft1, $ft2
/* E1E2C4 8018EB94 44803000 */  mtc1        $zero, $ft1
/* E1E2C8 8018EB98 24180001 */  addiu       $t8, $zero, 0x1
/* E1E2CC 8018EB9C 24190064 */  addiu       $t9, $zero, 0x64
/* E1E2D0 8018EBA0 E60A0008 */  swc1        $ft3, 0x8($s0)
/* E1E2D4 8018EBA4 C450007C */  lwc1        $ft4, 0x7C($v0)
/* E1E2D8 8018EBA8 A61800B6 */  sh          $t8, 0xB6($s0)
/* E1E2DC 8018EBAC A61900B8 */  sh          $t9, 0xB8($s0)
/* E1E2E0 8018EBB0 46128100 */  add.s       $ft0, $ft4, $ft5
/* E1E2E4 8018EBB4 31E5FFFF */  andi        $a1, $t7, 0xFFFF
/* E1E2E8 8018EBB8 2604001C */  addiu       $a0, $s0, 0x1C
/* E1E2EC 8018EBBC E6060114 */  swc1        $ft1, 0x114($s0)
/* E1E2F0 8018EBC0 0C0184AE */  jal         Object_SetInfo
/* E1E2F4 8018EBC4 E604000C */   swc1       $ft0, 0xC($s0)
/* E1E2F8 8018EBC8 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1E2FC 8018EBCC 3C08800C */  lui         $t0, %hi(D_800C5D3C)
/* E1E300 8018EBD0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1E304 8018EBD4 25085D3C */  addiu       $t0, $t0, %lo(D_800C5D3C)
/* E1E308 8018EBD8 3C041103 */  lui         $a0, (0x11030010 >> 16)
/* E1E30C 8018EBDC 26050100 */  addiu       $a1, $s0, 0x100
/* E1E310 8018EBE0 AFA50028 */  sw          $a1, 0x28($sp)
/* E1E314 8018EBE4 34840010 */  ori         $a0, $a0, (0x11030010 & 0xFFFF)
/* E1E318 8018EBE8 AFA80014 */  sw          $t0, 0x14($sp)
/* E1E31C 8018EBEC AFA70010 */  sw          $a3, 0x10($sp)
/* E1E320 8018EBF0 0C006486 */  jal         Audio_PlaySfx
/* E1E324 8018EBF4 00003025 */   or         $a2, $zero, $zero
/* E1E328 8018EBF8 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1E32C 8018EBFC 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E1E330 8018EC00 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1E334 8018EC04 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E1E338 8018EC08 3C043102 */  lui         $a0, (0x31024059 >> 16)
/* E1E33C 8018EC0C 8FA50028 */  lw          $a1, 0x28($sp)
/* E1E340 8018EC10 34844059 */  ori         $a0, $a0, (0x31024059 & 0xFFFF)
/* E1E344 8018EC14 AFA90014 */  sw          $t1, 0x14($sp)
/* E1E348 8018EC18 AFA70010 */  sw          $a3, 0x10($sp)
/* E1E34C 8018EC1C 0C006486 */  jal         Audio_PlaySfx
/* E1E350 8018EC20 00003025 */   or         $a2, $zero, $zero
/* E1E354 8018EC24 8FBF0024 */  lw          $ra, 0x24($sp)
/* E1E358 8018EC28 8FB00020 */  lw          $s0, 0x20($sp)
/* E1E35C 8018EC2C 27BD0030 */  addiu       $sp, $sp, 0x30
/* E1E360 8018EC30 03E00008 */  jr          $ra
/* E1E364 8018EC34 00000000 */   nop
glabel func_E16C50_8018EC38
/* E1E368 8018EC38 27BDFFB0 */  addiu       $sp, $sp, -0x50
/* E1E36C 8018EC3C AFB00020 */  sw          $s0, 0x20($sp)
/* E1E370 8018EC40 00808025 */  or          $s0, $a0, $zero
/* E1E374 8018EC44 AFBF0024 */  sw          $ra, 0x24($sp)
/* E1E378 8018EC48 3C0F801C */  lui         $t7, %hi(D_E16C50_801BF53C)
/* E1E37C 8018EC4C 25EFF53C */  addiu       $t7, $t7, %lo(D_E16C50_801BF53C)
/* E1E380 8018EC50 25E80024 */  addiu       $t0, $t7, 0x24
/* E1E384 8018EC54 27AE002C */  addiu       $t6, $sp, 0x2C
.LE16C50_8018EC58:
/* E1E388 8018EC58 8DE10000 */  lw          $at, 0x0($t7)
/* E1E38C 8018EC5C 25EF000C */  addiu       $t7, $t7, 0xC
/* E1E390 8018EC60 25CE000C */  addiu       $t6, $t6, 0xC
/* E1E394 8018EC64 ADC1FFF4 */  sw          $at, -0xC($t6)
/* E1E398 8018EC68 8DE1FFF8 */  lw          $at, -0x8($t7)
/* E1E39C 8018EC6C ADC1FFF8 */  sw          $at, -0x8($t6)
/* E1E3A0 8018EC70 8DE1FFFC */  lw          $at, -0x4($t7)
/* E1E3A4 8018EC74 15E8FFF8 */  bne         $t7, $t0, .LE16C50_8018EC58
/* E1E3A8 8018EC78 ADC1FFFC */   sw         $at, -0x4($t6)
/* E1E3AC 8018EC7C 00054880 */  sll         $t1, $a1, 2
/* E1E3B0 8018EC80 3C0A8017 */  lui         $t2, %hi(gTeamShields + 0x4)
/* E1E3B4 8018EC84 01495021 */  addu        $t2, $t2, $t1
/* E1E3B8 8018EC88 8D4A78B4 */  lw          $t2, %lo(gTeamShields + 0x4)($t2)
/* E1E3BC 8018EC8C 3C038018 */  lui         $v1, %hi(gPlayer)
/* E1E3C0 8018EC90 8C638280 */  lw          $v1, %lo(gPlayer)($v1)
/* E1E3C4 8018EC94 19400033 */  blez        $t2, .LE16C50_8018ED64
/* E1E3C8 8018EC98 02002025 */   or         $a0, $s0, $zero
/* E1E3CC 8018EC9C AFA30028 */  sw          $v1, 0x28($sp)
/* E1E3D0 8018ECA0 0C0184F1 */  jal         Object_2F4_Initialize
/* E1E3D4 8018ECA4 AFA50054 */   sw         $a1, 0x54($sp)
/* E1E3D8 8018ECA8 8FA50054 */  lw          $a1, 0x54($sp)
/* E1E3DC 8018ECAC 8FA30028 */  lw          $v1, 0x28($sp)
/* E1E3E0 8018ECB0 240B0002 */  addiu       $t3, $zero, 0x2
/* E1E3E4 8018ECB4 00056880 */  sll         $t5, $a1, 2
/* E1E3E8 8018ECB8 240C00C3 */  addiu       $t4, $zero, 0xC3
/* E1E3EC 8018ECBC 01A56823 */  subu        $t5, $t5, $a1
/* E1E3F0 8018ECC0 A20B0000 */  sb          $t3, 0x0($s0)
/* E1E3F4 8018ECC4 A60C0002 */  sh          $t4, 0x2($s0)
/* E1E3F8 8018ECC8 000D6880 */  sll         $t5, $t5, 2
/* E1E3FC 8018ECCC 27B9002C */  addiu       $t9, $sp, 0x2C
/* E1E400 8018ECD0 01B91021 */  addu        $v0, $t5, $t9
/* E1E404 8018ECD4 C4440000 */  lwc1        $ft0, 0x0($v0)
/* E1E408 8018ECD8 C4660074 */  lwc1        $ft1, 0x74($v1)
/* E1E40C 8018ECDC 24180064 */  addiu       $t8, $zero, 0x64
/* E1E410 8018ECE0 24080001 */  addiu       $t0, $zero, 0x1
/* E1E414 8018ECE4 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1E418 8018ECE8 24010002 */  addiu       $at, $zero, 0x2
/* E1E41C 8018ECEC 2604001C */  addiu       $a0, $s0, 0x1C
/* E1E420 8018ECF0 24AF0002 */  addiu       $t7, $a1, 0x2
/* E1E424 8018ECF4 E6080004 */  swc1        $ft2, 0x4($s0)
/* E1E428 8018ECF8 C44A0004 */  lwc1        $ft3, 0x4($v0)
/* E1E42C 8018ECFC C4700078 */  lwc1        $ft4, 0x78($v1)
/* E1E430 8018ED00 46105480 */  add.s       $ft5, $ft3, $ft4
/* E1E434 8018ED04 44805000 */  mtc1        $zero, $ft3
/* E1E438 8018ED08 E6120008 */  swc1        $ft5, 0x8($s0)
/* E1E43C 8018ED0C C4440008 */  lwc1        $ft0, 0x8($v0)
/* E1E440 8018ED10 C466007C */  lwc1        $ft1, 0x7C($v1)
/* E1E444 8018ED14 A61800B8 */  sh          $t8, 0xB8($s0)
/* E1E448 8018ED18 AE08007C */  sw          $t0, 0x7C($s0)
/* E1E44C 8018ED1C 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1E450 8018ED20 E60A0114 */  swc1        $ft3, 0x114($s0)
/* E1E454 8018ED24 10A10002 */  beq         $a1, $at, .LE16C50_8018ED30
/* E1E458 8018ED28 E608000C */   swc1       $ft2, 0xC($s0)
/* E1E45C 8018ED2C AE0F0088 */  sw          $t7, 0x88($s0)
.LE16C50_8018ED30:
/* E1E460 8018ED30 0C0184AE */  jal         Object_SetInfo
/* E1E464 8018ED34 96050002 */   lhu        $a1, 0x2($s0)
/* E1E468 8018ED38 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1E46C 8018ED3C 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E1E470 8018ED40 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1E474 8018ED44 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E1E478 8018ED48 3C043100 */  lui         $a0, (0x3100000C >> 16)
/* E1E47C 8018ED4C 3484000C */  ori         $a0, $a0, (0x3100000C & 0xFFFF)
/* E1E480 8018ED50 AFAE0014 */  sw          $t6, 0x14($sp)
/* E1E484 8018ED54 AFA70010 */  sw          $a3, 0x10($sp)
/* E1E488 8018ED58 26050100 */  addiu       $a1, $s0, 0x100
/* E1E48C 8018ED5C 0C006486 */  jal         Audio_PlaySfx
/* E1E490 8018ED60 24060004 */   addiu      $a2, $zero, 0x4
.LE16C50_8018ED64:
/* E1E494 8018ED64 8FBF0024 */  lw          $ra, 0x24($sp)
/* E1E498 8018ED68 8FB00020 */  lw          $s0, 0x20($sp)
/* E1E49C 8018ED6C 27BD0050 */  addiu       $sp, $sp, 0x50
/* E1E4A0 8018ED70 03E00008 */  jr          $ra
/* E1E4A4 8018ED74 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C0D1C
/* E5044C 801C0D1C 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0D20
/* E50450 801C0D20 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0D24
/* E50454 801C0D24 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0D28
/* E50458 801C0D28 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0D2C
/* E5045C 801C0D2C 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0D30
/* E50460 801C0D30 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D34
/* E50464 801C0D34 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D38
/* E50468 801C0D38 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0D3C
/* E5046C 801C0D3C 3D23D70A */ .float 0.03999999911

dlabel D_E16C50_801C0D40
/* E50470 801C0D40 3C23D70A */ .float 0.009999999776

dlabel D_E16C50_801C0D44
/* E50474 801C0D44 3827C5AC */ .float 3.999999899e-05

dlabel D_E16C50_801C0D48
/* E50478 801C0D48 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D4C
/* E5047C 801C0D4C 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D50
/* E50480 801C0D50 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D54
/* E50484 801C0D54 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D58
/* E50488 801C0D58 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D5C
/* E5048C 801C0D5C 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D60
/* E50490 801C0D60 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C0D64
/* E50494 801C0D64 3C03126F */ .float 0.00800000038

dlabel D_E16C50_801C0D68
/* E50498 801C0D68 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D6C
/* E5049C 801C0D6C 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D70
/* E504A0 801C0D70 3BA3D70A */ .float 0.004999999888

dlabel D_E16C50_801C0D74
/* E504A4 801C0D74 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0D78
/* E504A8 801C0D78 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D7C
/* E504AC 801C0D7C 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D80
/* E504B0 801C0D80 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D84
/* E504B4 801C0D84 3A83126F */ .float 0.001000000047

dlabel D_E16C50_801C0D88
/* E504B8 801C0D88 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0D8C
/* E504BC 801C0D8C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C0D90
/* E504C0 801C0D90 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0D94
/* E504C4 801C0D94 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0D98
/* E504C8 801C0D98 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0D9C
/* E504CC 801C0D9C 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0DA0
/* E504D0 801C0DA0 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C0DA4
/* E504D4 801C0DA4 38D1B717 */ .float 9.999999747e-05
/* E504D8 801C0DA8 00000000 */ .float 0
/* E504DC 801C0DAC 00000000 */ .float 0


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8018ED78
/* E1E4A8 8018ED78 27BDFF60 */  addiu       $sp, $sp, -0xA0
/* E1E4AC 8018ED7C AFB00020 */  sw          $s0, 0x20($sp)
/* E1E4B0 8018ED80 00808025 */  or          $s0, $a0, $zero
/* E1E4B4 8018ED84 AFBF0024 */  sw          $ra, 0x24($sp)
/* E1E4B8 8018ED88 8E0201D0 */  lw          $v0, 0x1D0($s0)
/* E1E4BC 8018ED8C 1040000A */  beqz        $v0, .LE16C50_8018EDB8
/* E1E4C0 8018ED90 24080001 */   addiu      $t0, $zero, 0x1
/* E1E4C4 8018ED94 10480025 */  beq         $v0, $t0, .LE16C50_8018EE2C
/* E1E4C8 8018ED98 24010002 */   addiu      $at, $zero, 0x2
/* E1E4CC 8018ED9C 104101A1 */  beq         $v0, $at, .LE16C50_8018F424
/* E1E4D0 8018EDA0 3C038017 */   lui        $v1, %hi(D_80177A80)
/* E1E4D4 8018EDA4 24010003 */  addiu       $at, $zero, 0x3
/* E1E4D8 8018EDA8 104101F9 */  beq         $v0, $at, .LE16C50_8018F590
/* E1E4DC 8018EDAC 3C038017 */   lui        $v1, %hi(D_80177A80)
/* E1E4E0 8018EDB0 10000345 */  b           .LE16C50_8018FAC8
/* E1E4E4 8018EDB4 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_8018EDB8:
/* E1E4E8 8018EDB8 3C018017 */  lui         $at, %hi(D_80177A80)
/* E1E4EC 8018EDBC AC207A80 */  sw          $zero, %lo(D_80177A80)($at)
/* E1E4F0 8018EDC0 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E1E4F4 8018EDC4 44812000 */  mtc1        $at, $ft0
/* E1E4F8 8018EDC8 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E1E4FC 8018EDCC 44813000 */  mtc1        $at, $ft1
/* E1E500 8018EDD0 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E1E504 8018EDD4 44814000 */  mtc1        $at, $ft2
/* E1E508 8018EDD8 24080001 */  addiu       $t0, $zero, 0x1
/* E1E50C 8018EDDC 240E0001 */  addiu       $t6, $zero, 0x1
/* E1E510 8018EDE0 3C0F800C */  lui         $t7, %hi(D_800C5D34)
/* E1E514 8018EDE4 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E1E518 8018EDE8 AE0801D0 */  sw          $t0, 0x1D0($s0)
/* E1E51C 8018EDEC A20E04C8 */  sb          $t6, 0x4C8($s0)
/* E1E520 8018EDF0 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E1E524 8018EDF4 25E75D34 */  addiu       $a3, $t7, %lo(D_800C5D34)
/* E1E528 8018EDF8 3C040900 */  lui         $a0, (0x9000002 >> 16)
/* E1E52C 8018EDFC E6040194 */  swc1        $ft0, 0x194($s0)
/* E1E530 8018EE00 E6060190 */  swc1        $ft1, 0x190($s0)
/* E1E534 8018EE04 E60800D0 */  swc1        $ft2, 0xD0($s0)
/* E1E538 8018EE08 AFB80014 */  sw          $t8, 0x14($sp)
/* E1E53C 8018EE0C AFA70010 */  sw          $a3, 0x10($sp)
/* E1E540 8018EE10 34840002 */  ori         $a0, $a0, (0x9000002 & 0xFFFF)
/* E1E544 8018EE14 26050460 */  addiu       $a1, $s0, 0x460
/* E1E548 8018EE18 0C006486 */  jal         Audio_PlaySfx
/* E1E54C 8018EE1C 00003025 */   or         $a2, $zero, $zero
/* E1E550 8018EE20 44805000 */  mtc1        $zero, $ft3
/* E1E554 8018EE24 3C018017 */  lui         $at, %hi(D_80177A48 + 0xC)
/* E1E558 8018EE28 E42A7A54 */  swc1        $ft3, %lo(D_80177A48 + 0xC)($at)
.LE16C50_8018EE2C:
/* E1E55C 8018EE2C 3C01801C */  lui         $at, %hi(D_E16C50_801C0D1C)
/* E1E560 8018EE30 C4300D1C */  lwc1        $ft4, %lo(D_E16C50_801C0D1C)($at)
/* E1E564 8018EE34 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1E568 8018EE38 3C073F99 */  lui         $a3, (0x3F99999A >> 16)
/* E1E56C 8018EE3C 34E7999A */  ori         $a3, $a3, (0x3F99999A & 0xFFFF)
/* E1E570 8018EE40 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1E574 8018EE44 26040130 */  addiu       $a0, $s0, 0x130
/* E1E578 8018EE48 24050000 */  addiu       $a1, $zero, 0x0
/* E1E57C 8018EE4C 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1E580 8018EE50 E7B00010 */   swc1       $ft4, 0x10($sp)
/* E1E584 8018EE54 3C01801C */  lui         $at, %hi(D_E16C50_801C0D20)
/* E1E588 8018EE58 C4320D20 */  lwc1        $ft5, %lo(D_E16C50_801C0D20)($at)
/* E1E58C 8018EE5C 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1E590 8018EE60 3C073F99 */  lui         $a3, (0x3F99999A >> 16)
/* E1E594 8018EE64 34E7999A */  ori         $a3, $a3, (0x3F99999A & 0xFFFF)
/* E1E598 8018EE68 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1E59C 8018EE6C 2604012C */  addiu       $a0, $s0, 0x12C
/* E1E5A0 8018EE70 24050000 */  addiu       $a1, $zero, 0x0
/* E1E5A4 8018EE74 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1E5A8 8018EE78 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E1E5AC 8018EE7C 44802000 */  mtc1        $zero, $ft0
/* E1E5B0 8018EE80 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1E5B4 8018EE84 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1E5B8 8018EE88 26040034 */  addiu       $a0, $s0, 0x34
/* E1E5BC 8018EE8C 24050000 */  addiu       $a1, $zero, 0x0
/* E1E5C0 8018EE90 3C074040 */  lui         $a3, (0x40400000 >> 16)
/* E1E5C4 8018EE94 0C026F0B */  jal         Math_SmoothStepToF
/* E1E5C8 8018EE98 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1E5CC 8018EE9C 44803000 */  mtc1        $zero, $ft1
/* E1E5D0 8018EEA0 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1E5D4 8018EEA4 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1E5D8 8018EEA8 260404D8 */  addiu       $a0, $s0, 0x4D8
/* E1E5DC 8018EEAC 24050000 */  addiu       $a1, $zero, 0x0
/* E1E5E0 8018EEB0 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E1E5E4 8018EEB4 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1E5E8 8018EEB8 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1E5EC 8018EEBC 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1E5F0 8018EEC0 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E1E5F4 8018EEC4 2861003C */  slti        $at, $v1, 0x3C
/* E1E5F8 8018EEC8 10200049 */  beqz        $at, .LE16C50_8018EFF0
/* E1E5FC 8018EECC 3C01C2C8 */   lui        $at, (0xC2C80000 >> 16)
/* E1E600 8018EED0 44816000 */  mtc1        $at, $fa0
/* E1E604 8018EED4 3C01C47A */  lui         $at, (0xC47A0000 >> 16)
/* E1E608 8018EED8 44817000 */  mtc1        $at, $fa1
/* E1E60C 8018EEDC 0C001440 */  jal         Math_Atan2F
/* E1E610 8018EEE0 00000000 */   nop
/* E1E614 8018EEE4 0C027DDA */  jal         Math_RadToDeg
/* E1E618 8018EEE8 46000306 */   mov.s      $fa0, $fv0
/* E1E61C 8018EEEC 3C01C47A */  lui         $at, (0xC47A0000 >> 16)
/* E1E620 8018EEF0 44811000 */  mtc1        $at, $fv1
/* E1E624 8018EEF4 3C01C2C8 */  lui         $at, (0xC2C80000 >> 16)
/* E1E628 8018EEF8 44816000 */  mtc1        $at, $fa0
/* E1E62C 8018EEFC E7A0008C */  swc1        $fv0, 0x8C($sp)
/* E1E630 8018EF00 460C6202 */  mul.s       $ft2, $fa0, $fa0
/* E1E634 8018EF04 00000000 */  nop
/* E1E638 8018EF08 46021282 */  mul.s       $ft3, $fv1, $fv1
/* E1E63C 8018EF0C 460A4000 */  add.s       $fv0, $ft2, $ft3
/* E1E640 8018EF10 0C001440 */  jal         Math_Atan2F
/* E1E644 8018EF14 46000384 */   sqrt.s     $fa1, $fv0
/* E1E648 8018EF18 0C027DDA */  jal         Math_RadToDeg
/* E1E64C 8018EF1C 46000307 */   neg.s      $fa0, $fv0
/* E1E650 8018EF20 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E1E654 8018EF24 44816000 */  mtc1        $at, $fa0
/* E1E658 8018EF28 3C014220 */  lui         $at, (0x42200000 >> 16)
/* E1E65C 8018EF2C 44818000 */  mtc1        $at, $ft4
/* E1E660 8018EF30 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E1E664 8018EF34 44812000 */  mtc1        $at, $ft0
/* E1E668 8018EF38 46100480 */  add.s       $ft5, $fv0, $ft4
/* E1E66C 8018EF3C 46000086 */  mov.s       $fv1, $fv0
/* E1E670 8018EF40 3C01801C */  lui         $at, %hi(D_E16C50_801C0D24)
/* E1E674 8018EF44 260400E8 */  addiu       $a0, $s0, 0xE8
/* E1E678 8018EF48 4612603E */  c.le.s      $fa0, $ft5
/* E1E67C 8018EF4C 8FA5008C */  lw          $a1, 0x8C($sp)
/* E1E680 8018EF50 3C063F00 */  lui         $a2, (0x3F000000 >> 16)
/* E1E684 8018EF54 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E1E688 8018EF58 45020003 */  bc1fl       .LE16C50_8018EF68
/* E1E68C 8018EF5C 4602203C */   c.lt.s     $ft0, $fv1
/* E1E690 8018EF60 460C0081 */  sub.s       $fv1, $fv0, $fa0
/* E1E694 8018EF64 4602203C */  c.lt.s      $ft0, $fv1
.LE16C50_8018EF68:
/* E1E698 8018EF68 00000000 */  nop
/* E1E69C 8018EF6C 45000003 */  bc1f        .LE16C50_8018EF7C
/* E1E6A0 8018EF70 00000000 */   nop
/* E1E6A4 8018EF74 44801000 */  mtc1        $zero, $fv1
/* E1E6A8 8018EF78 00000000 */  nop
.LE16C50_8018EF7C:
/* E1E6AC 8018EF7C C4260D24 */  lwc1        $ft1, %lo(D_E16C50_801C0D24)($at)
/* E1E6B0 8018EF80 E7A20088 */  swc1        $fv1, 0x88($sp)
/* E1E6B4 8018EF84 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1E6B8 8018EF88 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1E6BC 8018EF8C 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E1E6C0 8018EF90 44814000 */  mtc1        $at, $ft2
/* E1E6C4 8018EF94 C7A20088 */  lwc1        $fv1, 0x88($sp)
/* E1E6C8 8018EF98 3C01801C */  lui         $at, %hi(D_E16C50_801C0D28)
/* E1E6CC 8018EF9C 46080282 */  mul.s       $ft3, $fv0, $ft2
/* E1E6D0 8018EFA0 C4300D28 */  lwc1        $ft4, %lo(D_E16C50_801C0D28)($at)
/* E1E6D4 8018EFA4 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1E6D8 8018EFA8 44051000 */  mfc1        $a1, $fv1
/* E1E6DC 8018EFAC 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1E6E0 8018EFB0 260400E4 */  addiu       $a0, $s0, 0xE4
/* E1E6E4 8018EFB4 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E1E6E8 8018EFB8 E7AA0084 */  swc1        $ft3, 0x84($sp)
/* E1E6EC 8018EFBC 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1E6F0 8018EFC0 E7B00010 */   swc1       $ft4, 0x10($sp)
/* E1E6F4 8018EFC4 3C01801C */  lui         $at, %hi(D_E16C50_801C0D2C)
/* E1E6F8 8018EFC8 C4320D2C */  lwc1        $ft5, %lo(D_E16C50_801C0D2C)($at)
/* E1E6FC 8018EFCC 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1E700 8018EFD0 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1E704 8018EFD4 260400EC */  addiu       $a0, $s0, 0xEC
/* E1E708 8018EFD8 8FA50084 */  lw          $a1, 0x84($sp)
/* E1E70C 8018EFDC 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E1E710 8018EFE0 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1E714 8018EFE4 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E1E718 8018EFE8 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1E71C 8018EFEC 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018EFF0:
/* E1E720 8018EFF0 2401003C */  addiu       $at, $zero, 0x3C
/* E1E724 8018EFF4 14610004 */  bne         $v1, $at, .LE16C50_8018F008
/* E1E728 8018EFF8 3C048017 */   lui        $a0, %hi(D_80177978)
/* E1E72C 8018EFFC 44802000 */  mtc1        $zero, $ft0
/* E1E730 8018F000 AE000234 */  sw          $zero, 0x234($s0)
/* E1E734 8018F004 E60400D0 */  swc1        $ft0, 0xD0($s0)
.LE16C50_8018F008:
/* E1E738 8018F008 3C01801C */  lui         $at, %hi(D_E16C50_801C0D30)
/* E1E73C 8018F00C C4260D30 */  lwc1        $ft1, %lo(D_E16C50_801C0D30)($at)
/* E1E740 8018F010 3C058017 */  lui         $a1, %hi(gObjects408 + 0x4)
/* E1E744 8018F014 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1E748 8018F018 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1E74C 8018F01C 8CA5F114 */  lw          $a1, %lo(gObjects408 + 0x4)($a1)
/* E1E750 8018F020 24847978 */  addiu       $a0, $a0, %lo(D_80177978)
/* E1E754 8018F024 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1E758 8018F028 0C026F0B */  jal         Math_SmoothStepToF
/* E1E75C 8018F02C E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1E760 8018F030 3C01801C */  lui         $at, %hi(D_E16C50_801C0D34)
/* E1E764 8018F034 C4280D34 */  lwc1        $ft2, %lo(D_E16C50_801C0D34)($at)
/* E1E768 8018F038 3C048017 */  lui         $a0, %hi(D_80177980)
/* E1E76C 8018F03C 3C058017 */  lui         $a1, %hi(gObjects408 + 0x8)
/* E1E770 8018F040 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1E774 8018F044 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1E778 8018F048 8CA5F118 */  lw          $a1, %lo(gObjects408 + 0x8)($a1)
/* E1E77C 8018F04C 24847980 */  addiu       $a0, $a0, %lo(D_80177980)
/* E1E780 8018F050 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1E784 8018F054 0C026F0B */  jal         Math_SmoothStepToF
/* E1E788 8018F058 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1E78C 8018F05C 3C018017 */  lui         $at, %hi(gObjects408 + 0xC)
/* E1E790 8018F060 C42AF11C */  lwc1        $ft3, %lo(gObjects408 + 0xC)($at)
/* E1E794 8018F064 3C018017 */  lui         $at, %hi(D_80177D20)
/* E1E798 8018F068 C4307D20 */  lwc1        $ft4, %lo(D_80177D20)($at)
/* E1E79C 8018F06C 3C01801C */  lui         $at, %hi(D_E16C50_801C0D38)
/* E1E7A0 8018F070 C4240D38 */  lwc1        $ft0, %lo(D_E16C50_801C0D38)($at)
/* E1E7A4 8018F074 46105480 */  add.s       $ft5, $ft3, $ft4
/* E1E7A8 8018F078 3C048017 */  lui         $a0, %hi(D_80177988)
/* E1E7AC 8018F07C 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E1E7B0 8018F080 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E1E7B4 8018F084 44059000 */  mfc1        $a1, $ft5
/* E1E7B8 8018F088 24847988 */  addiu       $a0, $a0, %lo(D_80177988)
/* E1E7BC 8018F08C 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E1E7C0 8018F090 0C026F0B */  jal         Math_SmoothStepToF
/* E1E7C4 8018F094 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1E7C8 8018F098 3C018017 */  lui         $at, %hi(D_80177978)
/* E1E7CC 8018F09C C4267978 */  lwc1        $ft1, %lo(D_80177978)($at)
/* E1E7D0 8018F0A0 3C018017 */  lui         $at, %hi(D_80177980)
/* E1E7D4 8018F0A4 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1E7D8 8018F0A8 E6060040 */  swc1        $ft1, 0x40($s0)
/* E1E7DC 8018F0AC C4287980 */  lwc1        $ft2, %lo(D_80177980)($at)
/* E1E7E0 8018F0B0 3C018017 */  lui         $at, %hi(D_80177988)
/* E1E7E4 8018F0B4 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xBD0)
/* E1E7E8 8018F0B8 E6080044 */  swc1        $ft2, 0x44($s0)
/* E1E7EC 8018F0BC C42A7988 */  lwc1        $ft3, %lo(D_80177988)($at)
/* E1E7F0 8018F0C0 3C018017 */  lui         $at, %hi(gObjects408 + 0x4)
/* E1E7F4 8018F0C4 E60A0048 */  swc1        $ft3, 0x48($s0)
/* E1E7F8 8018F0C8 C430F114 */  lwc1        $ft4, %lo(gObjects408 + 0x4)($at)
/* E1E7FC 8018F0CC 3C018017 */  lui         $at, %hi(D_801779A0)
/* E1E800 8018F0D0 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E1E804 8018F0D4 E43079A0 */  swc1        $ft4, %lo(D_801779A0)($at)
/* E1E808 8018F0D8 3C018017 */  lui         $at, %hi(gObjects408 + 0x8)
/* E1E80C 8018F0DC C432F118 */  lwc1        $ft5, %lo(gObjects408 + 0x8)($at)
/* E1E810 8018F0E0 3C018017 */  lui         $at, %hi(D_801779B8)
/* E1E814 8018F0E4 E43279B8 */  swc1        $ft5, %lo(D_801779B8)($at)
/* E1E818 8018F0E8 3C018017 */  lui         $at, %hi(gObjects408 + 0xC)
/* E1E81C 8018F0EC C424F11C */  lwc1        $ft0, %lo(gObjects408 + 0xC)($at)
/* E1E820 8018F0F0 3C018017 */  lui         $at, %hi(D_80177D20)
/* E1E824 8018F0F4 C4267D20 */  lwc1        $ft1, %lo(D_80177D20)($at)
/* E1E828 8018F0F8 3C018017 */  lui         $at, %hi(D_801779C0)
/* E1E82C 8018F0FC 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1E830 8018F100 E42879C0 */  swc1        $ft2, %lo(D_801779C0)($at)
/* E1E834 8018F104 3C01801C */  lui         $at, %hi(D_E16C50_801C0D3C)
/* E1E838 8018F108 C42A0D3C */  lwc1        $ft3, %lo(D_E16C50_801C0D3C)($at)
/* E1E83C 8018F10C 3C018017 */  lui         $at, %hi(D_80177A48)
/* E1E840 8018F110 E42A7A48 */  swc1        $ft3, %lo(D_80177A48)($at)
/* E1E844 8018F114 2401008C */  addiu       $at, $zero, 0x8C
/* E1E848 8018F118 54610010 */  bnel        $v1, $at, .LE16C50_8018F15C
/* E1E84C 8018F11C 286100C8 */   slti       $at, $v1, 0xC8
/* E1E850 8018F120 0C063AA2 */  jal         func_E16C50_8018EA88
/* E1E854 8018F124 24844BB0 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xBD0)
/* E1E858 8018F128 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xEC4)
/* E1E85C 8018F12C 0C063AA2 */  jal         func_E16C50_8018EA88
/* E1E860 8018F130 24844EA4 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xEC4)
/* E1E864 8018F134 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x11B8)
/* E1E868 8018F138 0C063AA2 */  jal         func_E16C50_8018EA88
/* E1E86C 8018F13C 24845198 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0x11B8)
/* E1E870 8018F140 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E1E874 8018F144 44818000 */  mtc1        $at, $ft4
/* E1E878 8018F148 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xCF4)
/* E1E87C 8018F14C 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1E880 8018F150 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E1E884 8018F154 E4304CD4 */  swc1        $ft4, %lo(gObjects2F4 + 0xCF4)($at)
/* E1E888 8018F158 286100C8 */  slti        $at, $v1, 0xC8
.LE16C50_8018F15C:
/* E1E88C 8018F15C 14200018 */  bnez        $at, .LE16C50_8018F1C0
/* E1E890 8018F160 3C198018 */   lui        $t9, %hi(D_80178340)
/* E1E894 8018F164 8F398340 */  lw          $t9, %lo(D_80178340)($t9)
/* E1E898 8018F168 240800FF */  addiu       $t0, $zero, 0xFF
/* E1E89C 8018F16C 3C028018 */  lui         $v0, %hi(D_80178354)
/* E1E8A0 8018F170 15190007 */  bne         $t0, $t9, .LE16C50_8018F190
/* E1E8A4 8018F174 24428354 */   addiu      $v0, $v0, %lo(D_80178354)
/* E1E8A8 8018F178 24090002 */  addiu       $t1, $zero, 0x2
/* E1E8AC 8018F17C 0C029852 */  jal         func_800A6148
/* E1E8B0 8018F180 AE0901D0 */   sw         $t1, 0x1D0($s0)
/* E1E8B4 8018F184 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1E8B8 8018F188 1000002A */  b           .LE16C50_8018F234
/* E1E8BC 8018F18C 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_8018F190:
/* E1E8C0 8018F190 3C048018 */  lui         $a0, %hi(D_80178350)
/* E1E8C4 8018F194 24848350 */  addiu       $a0, $a0, %lo(D_80178350)
/* E1E8C8 8018F198 AC880000 */  sw          $t0, 0x0($a0)
/* E1E8CC 8018F19C AC480000 */  sw          $t0, 0x0($v0)
/* E1E8D0 8018F1A0 3C018018 */  lui         $at, %hi(D_80178348)
/* E1E8D4 8018F1A4 AC288348 */  sw          $t0, %lo(D_80178348)($at)
/* E1E8D8 8018F1A8 3C018018 */  lui         $at, %hi(D_80178358)
/* E1E8DC 8018F1AC AC288358 */  sw          $t0, %lo(D_80178358)($at)
/* E1E8E0 8018F1B0 3C018018 */  lui         $at, %hi(D_8017835C)
/* E1E8E4 8018F1B4 240C0010 */  addiu       $t4, $zero, 0x10
/* E1E8E8 8018F1B8 1000001E */  b           .LE16C50_8018F234
/* E1E8EC 8018F1BC AC2C835C */   sw         $t4, %lo(D_8017835C)($at)
.LE16C50_8018F1C0:
/* E1E8F0 8018F1C0 24010083 */  addiu       $at, $zero, 0x83
/* E1E8F4 8018F1C4 10610006 */  beq         $v1, $at, .LE16C50_8018F1E0
/* E1E8F8 8018F1C8 3C028018 */   lui        $v0, %hi(D_80178354)
/* E1E8FC 8018F1CC 24010086 */  addiu       $at, $zero, 0x86
/* E1E900 8018F1D0 10610003 */  beq         $v1, $at, .LE16C50_8018F1E0
/* E1E904 8018F1D4 24010089 */   addiu      $at, $zero, 0x89
/* E1E908 8018F1D8 1461000D */  bne         $v1, $at, .LE16C50_8018F210
/* E1E90C 8018F1DC 3C048018 */   lui        $a0, %hi(D_80178350)
.LE16C50_8018F1E0:
/* E1E910 8018F1E0 3C048018 */  lui         $a0, %hi(D_80178350)
/* E1E914 8018F1E4 240800FF */  addiu       $t0, $zero, 0xFF
/* E1E918 8018F1E8 24848350 */  addiu       $a0, $a0, %lo(D_80178350)
/* E1E91C 8018F1EC 24428354 */  addiu       $v0, $v0, %lo(D_80178354)
/* E1E920 8018F1F0 AC480000 */  sw          $t0, 0x0($v0)
/* E1E924 8018F1F4 AC880000 */  sw          $t0, 0x0($a0)
/* E1E928 8018F1F8 3C018018 */  lui         $at, %hi(D_80178348)
/* E1E92C 8018F1FC AC288348 */  sw          $t0, %lo(D_80178348)($at)
/* E1E930 8018F200 3C018018 */  lui         $at, %hi(D_80178340)
/* E1E934 8018F204 240F00C0 */  addiu       $t7, $zero, 0xC0
/* E1E938 8018F208 1000000A */  b           .LE16C50_8018F234
/* E1E93C 8018F20C AC2F8340 */   sw         $t7, %lo(D_80178340)($at)
.LE16C50_8018F210:
/* E1E940 8018F210 3C018018 */  lui         $at, %hi(D_80178340)
/* E1E944 8018F214 AC208340 */  sw          $zero, %lo(D_80178340)($at)
/* E1E948 8018F218 3C028018 */  lui         $v0, %hi(D_80178354)
/* E1E94C 8018F21C 24428354 */  addiu       $v0, $v0, %lo(D_80178354)
/* E1E950 8018F220 24848350 */  addiu       $a0, $a0, %lo(D_80178350)
/* E1E954 8018F224 AC800000 */  sw          $zero, 0x0($a0)
/* E1E958 8018F228 AC400000 */  sw          $zero, 0x0($v0)
/* E1E95C 8018F22C 3C018018 */  lui         $at, %hi(D_80178348)
/* E1E960 8018F230 AC208348 */  sw          $zero, %lo(D_80178348)($at)
.LE16C50_8018F234:
/* E1E964 8018F234 24010092 */  addiu       $at, $zero, 0x92
/* E1E968 8018F238 10610003 */  beq         $v1, $at, .LE16C50_8018F248
/* E1E96C 8018F23C 3C042940 */   lui        $a0, (0x2940F026 >> 16)
/* E1E970 8018F240 24010096 */  addiu       $at, $zero, 0x96
/* E1E974 8018F244 1461000D */  bne         $v1, $at, .LE16C50_8018F27C
.LE16C50_8018F248:
/* E1E978 8018F248 3C09800C */   lui        $t1, %hi(D_800C5D34)
/* E1E97C 8018F24C 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E1E980 8018F250 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E1E984 8018F254 25275D34 */  addiu       $a3, $t1, %lo(D_800C5D34)
/* E1E988 8018F258 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0xFC4)
/* E1E98C 8018F25C 24A54FA4 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0xFC4)
/* E1E990 8018F260 AFA70010 */  sw          $a3, 0x10($sp)
/* E1E994 8018F264 AFAA0014 */  sw          $t2, 0x14($sp)
/* E1E998 8018F268 3484F026 */  ori         $a0, $a0, (0x2940F026 & 0xFFFF)
/* E1E99C 8018F26C 0C006486 */  jal         Audio_PlaySfx
/* E1E9A0 8018F270 24060004 */   addiu      $a2, $zero, 0x4
/* E1E9A4 8018F274 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1E9A8 8018F278 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018F27C:
/* E1E9AC 8018F27C 28610093 */  slti        $at, $v1, 0x93
/* E1E9B0 8018F280 14200026 */  bnez        $at, .LE16C50_8018F31C
/* E1E9B4 8018F284 3C028016 */   lui        $v0, %hi(gObjects2F4 + 0xC2C)
/* E1E9B8 8018F288 8C424C0C */  lw          $v0, %lo(gObjects2F4 + 0xC2C)($v0)
/* E1E9BC 8018F28C 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xC2C)
/* E1E9C0 8018F290 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xFE8)
/* E1E9C4 8018F294 2442FFFC */  addiu       $v0, $v0, -0x4
/* E1E9C8 8018F298 04410003 */  bgez        $v0, .LE16C50_8018F2A8
/* E1E9CC 8018F29C AC224C0C */   sw         $v0, %lo(gObjects2F4 + 0xC2C)($at)
/* E1E9D0 8018F2A0 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xC2C)
/* E1E9D4 8018F2A4 AC204C0C */  sw          $zero, %lo(gObjects2F4 + 0xC2C)($at)
.LE16C50_8018F2A8:
/* E1E9D8 8018F2A8 3C028016 */  lui         $v0, %hi(gObjects2F4 + 0xC3C)
/* E1E9DC 8018F2AC 8C424C1C */  lw          $v0, %lo(gObjects2F4 + 0xC3C)($v0)
/* E1E9E0 8018F2B0 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xC3C)
/* E1E9E4 8018F2B4 24844FC8 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0xFE8)
/* E1E9E8 8018F2B8 2442FFFC */  addiu       $v0, $v0, -0x4
/* E1E9EC 8018F2BC 04410003 */  bgez        $v0, .LE16C50_8018F2CC
/* E1E9F0 8018F2C0 AC224C1C */   sw         $v0, %lo(gObjects2F4 + 0xC3C)($at)
/* E1E9F4 8018F2C4 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xC3C)
/* E1E9F8 8018F2C8 AC204C1C */  sw          $zero, %lo(gObjects2F4 + 0xC3C)($at)
.LE16C50_8018F2CC:
/* E1E9FC 8018F2CC 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1EA00 8018F2D0 44819000 */  mtc1        $at, $ft5
/* E1EA04 8018F2D4 3C063CF5 */  lui         $a2, (0x3CF5C28F >> 16)
/* E1EA08 8018F2D8 34C6C28F */  ori         $a2, $a2, (0x3CF5C28F & 0xFFFF)
/* E1EA0C 8018F2DC 3C0543E1 */  lui         $a1, (0x43E10000 >> 16)
/* E1EA10 8018F2E0 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1EA14 8018F2E4 0C026F0B */  jal         Math_SmoothStepToF
/* E1EA18 8018F2E8 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E1EA1C 8018F2EC 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1EA20 8018F2F0 44812000 */  mtc1        $at, $ft0
/* E1EA24 8018F2F4 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xFD4)
/* E1EA28 8018F2F8 3C063CF5 */  lui         $a2, (0x3CF5C28F >> 16)
/* E1EA2C 8018F2FC 34C6C28F */  ori         $a2, $a2, (0x3CF5C28F & 0xFFFF)
/* E1EA30 8018F300 24844FB4 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0xFD4)
/* E1EA34 8018F304 3C0543E1 */  lui         $a1, (0x43E10000 >> 16)
/* E1EA38 8018F308 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1EA3C 8018F30C 0C026F0B */  jal         Math_SmoothStepToF
/* E1EA40 8018F310 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1EA44 8018F314 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1EA48 8018F318 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018F31C:
/* E1EA4C 8018F31C 286100A1 */  slti        $at, $v1, 0xA1
/* E1EA50 8018F320 14200016 */  bnez        $at, .LE16C50_8018F37C
/* E1EA54 8018F324 3C048016 */   lui        $a0, %hi(gObjects2F4 + 0x12DC)
/* E1EA58 8018F328 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1EA5C 8018F32C 44813000 */  mtc1        $at, $ft1
/* E1EA60 8018F330 3C063CF5 */  lui         $a2, (0x3CF5C28F >> 16)
/* E1EA64 8018F334 34C6C28F */  ori         $a2, $a2, (0x3CF5C28F & 0xFFFF)
/* E1EA68 8018F338 248452BC */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x12DC)
/* E1EA6C 8018F33C 3C0543AF */  lui         $a1, (0x43AF0000 >> 16)
/* E1EA70 8018F340 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1EA74 8018F344 0C026F0B */  jal         Math_SmoothStepToF
/* E1EA78 8018F348 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1EA7C 8018F34C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E1EA80 8018F350 44814000 */  mtc1        $at, $ft2
/* E1EA84 8018F354 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x12C8)
/* E1EA88 8018F358 3C063CF5 */  lui         $a2, (0x3CF5C28F >> 16)
/* E1EA8C 8018F35C 34C6C28F */  ori         $a2, $a2, (0x3CF5C28F & 0xFFFF)
/* E1EA90 8018F360 248452A8 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x12C8)
/* E1EA94 8018F364 3C0543AF */  lui         $a1, (0x43AF0000 >> 16)
/* E1EA98 8018F368 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1EA9C 8018F36C 0C026F0B */  jal         Math_SmoothStepToF
/* E1EAA0 8018F370 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1EAA4 8018F374 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1EAA8 8018F378 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018F37C:
/* E1EAAC 8018F37C 2861008D */  slti        $at, $v1, 0x8D
/* E1EAB0 8018F380 142001D1 */  bnez        $at, .LE16C50_8018FAC8
/* E1EAB4 8018F384 3C018017 */   lui        $at, %hi(gObjects408 + 0x4)
/* E1EAB8 8018F388 C420F114 */  lwc1        $fv0, %lo(gObjects408 + 0x4)($at)
/* E1EABC 8018F38C 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x11BC)
/* E1EAC0 8018F390 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xCE0)
/* E1EAC4 8018F394 E420519C */  swc1        $fv0, %lo(gObjects2F4 + 0x11BC)($at)
/* E1EAC8 8018F398 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xEC8)
/* E1EACC 8018F39C E4204EA8 */  swc1        $fv0, %lo(gObjects2F4 + 0xEC8)($at)
/* E1EAD0 8018F3A0 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xBD4)
/* E1EAD4 8018F3A4 E4204BB4 */  swc1        $fv0, %lo(gObjects2F4 + 0xBD4)($at)
/* E1EAD8 8018F3A8 3C018017 */  lui         $at, %hi(gObjects408 + 0x8)
/* E1EADC 8018F3AC C420F118 */  lwc1        $fv0, %lo(gObjects408 + 0x8)($at)
/* E1EAE0 8018F3B0 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x11C0)
/* E1EAE4 8018F3B4 3C063CF5 */  lui         $a2, (0x3CF5C28F >> 16)
/* E1EAE8 8018F3B8 E42051A0 */  swc1        $fv0, %lo(gObjects2F4 + 0x11C0)($at)
/* E1EAEC 8018F3BC 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xECC)
/* E1EAF0 8018F3C0 E4204EAC */  swc1        $fv0, %lo(gObjects2F4 + 0xECC)($at)
/* E1EAF4 8018F3C4 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xBD8)
/* E1EAF8 8018F3C8 E4204BB8 */  swc1        $fv0, %lo(gObjects2F4 + 0xBD8)($at)
/* E1EAFC 8018F3CC 3C018017 */  lui         $at, %hi(gObjects408 + 0xC)
/* E1EB00 8018F3D0 C42AF11C */  lwc1        $ft3, %lo(gObjects408 + 0xC)($at)
/* E1EB04 8018F3D4 3C0143FA */  lui         $at, (0x43FA0000 >> 16)
/* E1EB08 8018F3D8 44818000 */  mtc1        $at, $ft4
/* E1EB0C 8018F3DC 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x11C4)
/* E1EB10 8018F3E0 34C6C28F */  ori         $a2, $a2, (0x3CF5C28F & 0xFFFF)
/* E1EB14 8018F3E4 46105000 */  add.s       $fv0, $ft3, $ft4
/* E1EB18 8018F3E8 24844CC0 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0xCE0)
/* E1EB1C 8018F3EC 3C054416 */  lui         $a1, (0x44160000 >> 16)
/* E1EB20 8018F3F0 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1EB24 8018F3F4 E42051A4 */  swc1        $fv0, %lo(gObjects2F4 + 0x11C4)($at)
/* E1EB28 8018F3F8 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xED0)
/* E1EB2C 8018F3FC E4204EB0 */  swc1        $fv0, %lo(gObjects2F4 + 0xED0)($at)
/* E1EB30 8018F400 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xBDC)
/* E1EB34 8018F404 E4204BBC */  swc1        $fv0, %lo(gObjects2F4 + 0xBDC)($at)
/* E1EB38 8018F408 3C01801C */  lui         $at, %hi(D_E16C50_801C0D40)
/* E1EB3C 8018F40C C4320D40 */  lwc1        $ft5, %lo(D_E16C50_801C0D40)($at)
/* E1EB40 8018F410 0C026F0B */  jal         Math_SmoothStepToF
/* E1EB44 8018F414 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E1EB48 8018F418 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1EB4C 8018F41C 100001AA */  b           .LE16C50_8018FAC8
/* E1EB50 8018F420 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_8018F424:
/* E1EB54 8018F424 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E1EB58 8018F428 2861012C */  slti        $at, $v1, 0x12C
/* E1EB5C 8018F42C 142001A6 */  bnez        $at, .LE16C50_8018FAC8
/* E1EB60 8018F430 2401012C */   addiu      $at, $zero, 0x12C
/* E1EB64 8018F434 1461004B */  bne         $v1, $at, .LE16C50_8018F564
/* E1EB68 8018F438 00000000 */   nop
/* E1EB6C 8018F43C 44800000 */  mtc1        $zero, $fv0
/* E1EB70 8018F440 3C014348 */  lui         $at, (0x43480000 >> 16)
/* E1EB74 8018F444 44812000 */  mtc1        $at, $ft0
/* E1EB78 8018F448 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E1EB7C 8018F44C 44813000 */  mtc1        $at, $ft1
/* E1EB80 8018F450 AE080234 */  sw          $t0, 0x234($s0)
/* E1EB84 8018F454 3C018017 */  lui         $at, %hi(D_80177D20)
/* E1EB88 8018F458 E6000074 */  swc1        $fv0, 0x74($s0)
/* E1EB8C 8018F45C E60004D8 */  swc1        $fv0, 0x4D8($s0)
/* E1EB90 8018F460 E6000130 */  swc1        $fv0, 0x130($s0)
/* E1EB94 8018F464 E600012C */  swc1        $fv0, 0x12C($s0)
/* E1EB98 8018F468 E6000034 */  swc1        $fv0, 0x34($s0)
/* E1EB9C 8018F46C E6000110 */  swc1        $fv0, 0x110($s0)
/* E1EBA0 8018F470 E60000D0 */  swc1        $fv0, 0xD0($s0)
/* E1EBA4 8018F474 E60000E4 */  swc1        $fv0, 0xE4($s0)
/* E1EBA8 8018F478 E60000E8 */  swc1        $fv0, 0xE8($s0)
/* E1EBAC 8018F47C E60000EC */  swc1        $fv0, 0xEC($s0)
/* E1EBB0 8018F480 E600008C */  swc1        $fv0, 0x8C($s0)
/* E1EBB4 8018F484 E6040078 */  swc1        $ft0, 0x78($s0)
/* E1EBB8 8018F488 E606007C */  swc1        $ft1, 0x7C($s0)
/* E1EBBC 8018F48C C4287D20 */  lwc1        $ft2, %lo(D_80177D20)($at)
/* E1EBC0 8018F490 3C01801C */  lui         $at, %hi(D_E16C50_801C0D44)
/* E1EBC4 8018F494 C42A0D44 */  lwc1        $ft3, %lo(D_E16C50_801C0D44)($at)
/* E1EBC8 8018F498 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E1EBCC 8018F49C 44819000 */  mtc1        $at, $ft5
/* E1EBD0 8018F4A0 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E1EBD4 8018F4A4 3C018016 */  lui         $at, %hi(D_8015F984)
/* E1EBD8 8018F4A8 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x2F4)
/* E1EBDC 8018F4AC 248442D4 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x2F4)
/* E1EBE0 8018F4B0 00002825 */  or          $a1, $zero, $zero
/* E1EBE4 8018F4B4 46128100 */  add.s       $ft0, $ft4, $ft5
/* E1EBE8 8018F4B8 0C063B0E */  jal         func_E16C50_8018EC38
/* E1EBEC 8018F4BC E424F984 */   swc1       $ft0, %lo(D_8015F984)($at)
/* E1EBF0 8018F4C0 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x5E8)
/* E1EBF4 8018F4C4 248445C8 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x5E8)
/* E1EBF8 8018F4C8 0C063B0E */  jal         func_E16C50_8018EC38
/* E1EBFC 8018F4CC 24050001 */   addiu      $a1, $zero, 0x1
/* E1EC00 8018F4D0 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x8DC)
/* E1EC04 8018F4D4 248448BC */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x8DC)
/* E1EC08 8018F4D8 0C063B0E */  jal         func_E16C50_8018EC38
/* E1EC0C 8018F4DC 24050002 */   addiu      $a1, $zero, 0x2
/* E1EC10 8018F4E0 3C048016 */  lui         $a0, %hi(gObjects2F4)
/* E1EC14 8018F4E4 0C063ACF */  jal         func_E16C50_8018EB3C
/* E1EC18 8018F4E8 24843FE0 */   addiu      $a0, $a0, %lo(gObjects2F4)
/* E1EC1C 8018F4EC 3C014396 */  lui         $at, (0x43960000 >> 16)
/* E1EC20 8018F4F0 44813000 */  mtc1        $at, $ft1
/* E1EC24 8018F4F4 44804000 */  mtc1        $zero, $ft2
/* E1EC28 8018F4F8 3C018017 */  lui         $at, %hi(D_80177A48 + 0x14)
/* E1EC2C 8018F4FC E4267A5C */  swc1        $ft1, %lo(D_80177A48 + 0x14)($at)
/* E1EC30 8018F500 3C018017 */  lui         $at, %hi(D_80177A48 + 0x10)
/* E1EC34 8018F504 E4287A58 */  swc1        $ft2, %lo(D_80177A48 + 0x10)($at)
/* E1EC38 8018F508 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E1EC3C 8018F50C 44815000 */  mtc1        $at, $ft3
/* E1EC40 8018F510 3C018017 */  lui         $at, %hi(D_80177A48 + 0x24)
/* E1EC44 8018F514 44802000 */  mtc1        $zero, $ft0
/* E1EC48 8018F518 E42A7A6C */  swc1        $ft3, %lo(D_80177A48 + 0x24)($at)
/* E1EC4C 8018F51C C6100074 */  lwc1        $ft4, 0x74($s0)
/* E1EC50 8018F520 3C018017 */  lui         $at, %hi(D_801779A0)
/* E1EC54 8018F524 E43079A0 */  swc1        $ft4, %lo(D_801779A0)($at)
/* E1EC58 8018F528 C43279A0 */  lwc1        $ft5, %lo(D_801779A0)($at)
/* E1EC5C 8018F52C 3C018017 */  lui         $at, %hi(D_801779B8)
/* E1EC60 8018F530 E612004C */  swc1        $ft5, 0x4C($s0)
/* E1EC64 8018F534 E42479B8 */  swc1        $ft0, %lo(D_801779B8)($at)
/* E1EC68 8018F538 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E1EC6C 8018F53C 44814000 */  mtc1        $at, $ft2
/* E1EC70 8018F540 C606007C */  lwc1        $ft1, 0x7C($s0)
/* E1EC74 8018F544 3C018017 */  lui         $at, %hi(D_80177D20)
/* E1EC78 8018F548 E6040050 */  swc1        $ft0, 0x50($s0)
/* E1EC7C 8018F54C 46083280 */  add.s       $ft3, $ft1, $ft2
/* E1EC80 8018F550 C4307D20 */  lwc1        $ft4, %lo(D_80177D20)($at)
/* E1EC84 8018F554 3C018017 */  lui         $at, %hi(D_801779C0)
/* E1EC88 8018F558 46105480 */  add.s       $ft5, $ft3, $ft4
/* E1EC8C 8018F55C E43279C0 */  swc1        $ft5, %lo(D_801779C0)($at)
/* E1EC90 8018F560 E6120054 */  swc1        $ft5, 0x54($s0)
.LE16C50_8018F564:
/* E1EC94 8018F564 3C0B8018 */  lui         $t3, %hi(D_80178340)
/* E1EC98 8018F568 8D6B8340 */  lw          $t3, %lo(D_80178340)($t3)
/* E1EC9C 8018F56C 3C018018 */  lui         $at, %hi(D_80178358)
/* E1ECA0 8018F570 240C0004 */  addiu       $t4, $zero, 0x4
/* E1ECA4 8018F574 11600005 */  beqz        $t3, .LE16C50_8018F58C
/* E1ECA8 8018F578 240D0003 */   addiu      $t5, $zero, 0x3
/* E1ECAC 8018F57C AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* E1ECB0 8018F580 3C018018 */  lui         $at, %hi(D_8017835C)
/* E1ECB4 8018F584 10000002 */  b           .LE16C50_8018F590
/* E1ECB8 8018F588 AC2C835C */   sw         $t4, %lo(D_8017835C)($at)
.LE16C50_8018F58C:
/* E1ECBC 8018F58C AE0D01D0 */  sw          $t5, 0x1D0($s0)
.LE16C50_8018F590:
/* E1ECC0 8018F590 3C01801C */  lui         $at, %hi(D_E16C50_801C0D48)
/* E1ECC4 8018F594 C4240D48 */  lwc1        $ft0, %lo(D_E16C50_801C0D48)($at)
/* E1ECC8 8018F598 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* E1ECCC 8018F59C 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* E1ECD0 8018F5A0 26040078 */  addiu       $a0, $s0, 0x78
/* E1ECD4 8018F5A4 24050000 */  addiu       $a1, $zero, 0x0
/* E1ECD8 8018F5A8 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E1ECDC 8018F5AC 0C026F0B */  jal         Math_SmoothStepToF
/* E1ECE0 8018F5B0 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1ECE4 8018F5B4 3C01801C */  lui         $at, %hi(D_E16C50_801C0D4C)
/* E1ECE8 8018F5B8 C4260D4C */  lwc1        $ft1, %lo(D_E16C50_801C0D4C)($at)
/* E1ECEC 8018F5BC 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x2FC)
/* E1ECF0 8018F5C0 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* E1ECF4 8018F5C4 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* E1ECF8 8018F5C8 248442DC */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x2FC)
/* E1ECFC 8018F5CC 3C054220 */  lui         $a1, (0x42200000 >> 16)
/* E1ED00 8018F5D0 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E1ED04 8018F5D4 0C026F0B */  jal         Math_SmoothStepToF
/* E1ED08 8018F5D8 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1ED0C 8018F5DC 3C01801C */  lui         $at, %hi(D_E16C50_801C0D50)
/* E1ED10 8018F5E0 C4280D50 */  lwc1        $ft2, %lo(D_E16C50_801C0D50)($at)
/* E1ED14 8018F5E4 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x5F0)
/* E1ED18 8018F5E8 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* E1ED1C 8018F5EC 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* E1ED20 8018F5F0 248445D0 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x5F0)
/* E1ED24 8018F5F4 3C054220 */  lui         $a1, (0x42200000 >> 16)
/* E1ED28 8018F5F8 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E1ED2C 8018F5FC 0C026F0B */  jal         Math_SmoothStepToF
/* E1ED30 8018F600 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1ED34 8018F604 3C01801C */  lui         $at, %hi(D_E16C50_801C0D54)
/* E1ED38 8018F608 C42A0D54 */  lwc1        $ft3, %lo(D_E16C50_801C0D54)($at)
/* E1ED3C 8018F60C 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x8E4)
/* E1ED40 8018F610 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* E1ED44 8018F614 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* E1ED48 8018F618 248448C4 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x8E4)
/* E1ED4C 8018F61C 3C0542B0 */  lui         $a1, (0x42B00000 >> 16)
/* E1ED50 8018F620 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E1ED54 8018F624 0C026F0B */  jal         Math_SmoothStepToF
/* E1ED58 8018F628 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E1ED5C 8018F62C 3C01801C */  lui         $at, %hi(D_E16C50_801C0D58)
/* E1ED60 8018F630 C4300D58 */  lwc1        $ft4, %lo(D_E16C50_801C0D58)($at)
/* E1ED64 8018F634 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x8)
/* E1ED68 8018F638 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* E1ED6C 8018F63C 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* E1ED70 8018F640 24843FE8 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x8)
/* E1ED74 8018F644 3C054270 */  lui         $a1, (0x42700000 >> 16)
/* E1ED78 8018F648 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E1ED7C 8018F64C 0C026F0B */  jal         Math_SmoothStepToF
/* E1ED80 8018F650 E7B00010 */   swc1       $ft4, 0x10($sp)
/* E1ED84 8018F654 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1ED88 8018F658 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E1ED8C 8018F65C 3C048017 */  lui         $a0, %hi(D_80177A48 + 0x24)
/* E1ED90 8018F660 24847A6C */  addiu       $a0, $a0, %lo(D_80177A48 + 0x24)
/* E1ED94 8018F664 28610435 */  slti        $at, $v1, 0x435
/* E1ED98 8018F668 10200007 */  beqz        $at, .LE16C50_8018F688
/* E1ED9C 8018F66C 24050000 */   addiu      $a1, $zero, 0x0
/* E1EDA0 8018F670 C6120074 */  lwc1        $ft5, 0x74($s0)
/* E1EDA4 8018F674 3C028017 */  lui         $v0, %hi(D_80177A48)
/* E1EDA8 8018F678 24427A48 */  addiu       $v0, $v0, %lo(D_80177A48)
/* E1EDAC 8018F67C E4520004 */  swc1        $ft5, 0x4($v0)
/* E1EDB0 8018F680 C604007C */  lwc1        $ft0, 0x7C($s0)
/* E1EDB4 8018F684 E444000C */  swc1        $ft0, 0xC($v0)
.LE16C50_8018F688:
/* E1EDB8 8018F688 3C028017 */  lui         $v0, %hi(D_80177A48)
/* E1EDBC 8018F68C 286103AC */  slti        $at, $v1, 0x3AC
/* E1EDC0 8018F690 1420000C */  bnez        $at, .LE16C50_8018F6C4
/* E1EDC4 8018F694 24427A48 */   addiu      $v0, $v0, %lo(D_80177A48)
/* E1EDC8 8018F698 3C01801C */  lui         $at, %hi(D_E16C50_801C0D5C)
/* E1EDCC 8018F69C C4260D5C */  lwc1        $ft1, %lo(D_E16C50_801C0D5C)($at)
/* E1EDD0 8018F6A0 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* E1EDD4 8018F6A4 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* E1EDD8 8018F6A8 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1EDDC 8018F6AC 0C026F0B */  jal         Math_SmoothStepToF
/* E1EDE0 8018F6B0 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1EDE4 8018F6B4 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1EDE8 8018F6B8 3C028017 */  lui         $v0, %hi(D_80177A48)
/* E1EDEC 8018F6BC 24427A48 */  addiu       $v0, $v0, %lo(D_80177A48)
/* E1EDF0 8018F6C0 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018F6C4:
/* E1EDF4 8018F6C4 28610435 */  slti        $at, $v1, 0x435
/* E1EDF8 8018F6C8 10200028 */  beqz        $at, .LE16C50_8018F76C
/* E1EDFC 8018F6CC 3C048017 */   lui        $a0, %hi(D_80177A48 + 0x10)
/* E1EE00 8018F6D0 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E1EE04 8018F6D4 44816000 */  mtc1        $at, $fa0
/* E1EE08 8018F6D8 3C01801C */  lui         $at, %hi(D_E16C50_801C0D60)
/* E1EE0C 8018F6DC C42A0D60 */  lwc1        $ft3, %lo(D_E16C50_801C0D60)($at)
/* E1EE10 8018F6E0 C4480010 */  lwc1        $ft2, 0x10($v0)
/* E1EE14 8018F6E4 44807000 */  mtc1        $zero, $fa1
/* E1EE18 8018F6E8 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E1EE1C 8018F6EC E4500010 */  swc1        $ft4, 0x10($v0)
/* E1EE20 8018F6F0 C4400010 */  lwc1        $fv0, 0x10($v0)
/* E1EE24 8018F6F4 4600603E */  c.le.s      $fa0, $fv0
/* E1EE28 8018F6F8 00000000 */  nop
/* E1EE2C 8018F6FC 45020005 */  bc1fl       .LE16C50_8018F714
/* E1EE30 8018F700 460E003C */   c.lt.s     $fv0, $fa1
/* E1EE34 8018F704 460C0481 */  sub.s       $ft5, $fv0, $fa0
/* E1EE38 8018F708 E4520010 */  swc1        $ft5, 0x10($v0)
/* E1EE3C 8018F70C C4400010 */  lwc1        $fv0, 0x10($v0)
/* E1EE40 8018F710 460E003C */  c.lt.s      $fv0, $fa1
.LE16C50_8018F714:
/* E1EE44 8018F714 00000000 */  nop
/* E1EE48 8018F718 45020004 */  bc1fl       .LE16C50_8018F72C
/* E1EE4C 8018F71C C6060074 */   lwc1       $ft1, 0x74($s0)
/* E1EE50 8018F720 460C0100 */  add.s       $ft0, $fv0, $fa0
/* E1EE54 8018F724 E4440010 */  swc1        $ft0, 0x10($v0)
/* E1EE58 8018F728 C6060074 */  lwc1        $ft1, 0x74($s0)
.LE16C50_8018F72C:
/* E1EE5C 8018F72C 3C018017 */  lui         $at, %hi(D_801779A0)
/* E1EE60 8018F730 E42679A0 */  swc1        $ft1, %lo(D_801779A0)($at)
/* E1EE64 8018F734 3C018017 */  lui         $at, %hi(D_801779B8)
/* E1EE68 8018F738 E42E79B8 */  swc1        $fa1, %lo(D_801779B8)($at)
/* E1EE6C 8018F73C C60A007C */  lwc1        $ft3, 0x7C($s0)
/* E1EE70 8018F740 C4480024 */  lwc1        $ft2, 0x24($v0)
/* E1EE74 8018F744 3C018017 */  lui         $at, %hi(D_80177D20)
/* E1EE78 8018F748 C4227D20 */  lwc1        $fv1, %lo(D_80177D20)($at)
/* E1EE7C 8018F74C 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E1EE80 8018F750 3C018017 */  lui         $at, %hi(D_801779C0)
/* E1EE84 8018F754 46028480 */  add.s       $ft5, $ft4, $fv1
/* E1EE88 8018F758 E43279C0 */  swc1        $ft5, %lo(D_801779C0)($at)
/* E1EE8C 8018F75C 3C01801C */  lui         $at, %hi(D_E16C50_801C0D64)
/* E1EE90 8018F760 C4240D64 */  lwc1        $ft0, %lo(D_E16C50_801C0D64)($at)
/* E1EE94 8018F764 10000039 */  b           .LE16C50_8018F84C
/* E1EE98 8018F768 E4440000 */   swc1       $ft0, 0x0($v0)
.LE16C50_8018F76C:
/* E1EE9C 8018F76C 3C01801C */  lui         $at, %hi(D_E16C50_801C0D68)
/* E1EEA0 8018F770 C4260D68 */  lwc1        $ft1, %lo(D_E16C50_801C0D68)($at)
/* E1EEA4 8018F774 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1EEA8 8018F778 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1EEAC 8018F77C 24847A58 */  addiu       $a0, $a0, %lo(D_80177A48 + 0x10)
/* E1EEB0 8018F780 24050000 */  addiu       $a1, $zero, 0x0
/* E1EEB4 8018F784 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E1EEB8 8018F788 0C026F4E */  jal         Math_SmoothStepToAngle
/* E1EEBC 8018F78C E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1EEC0 8018F790 3C01801C */  lui         $at, %hi(D_E16C50_801C0D6C)
/* E1EEC4 8018F794 C4280D6C */  lwc1        $ft2, %lo(D_E16C50_801C0D6C)($at)
/* E1EEC8 8018F798 3C048017 */  lui         $a0, %hi(D_80177A48 + 0x14)
/* E1EECC 8018F79C 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1EED0 8018F7A0 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1EED4 8018F7A4 24847A5C */  addiu       $a0, $a0, %lo(D_80177A48 + 0x14)
/* E1EED8 8018F7A8 24050000 */  addiu       $a1, $zero, 0x0
/* E1EEDC 8018F7AC 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1EEE0 8018F7B0 0C026F0B */  jal         Math_SmoothStepToF
/* E1EEE4 8018F7B4 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1EEE8 8018F7B8 3C018016 */  lui         $at, %hi(D_8015F984)
/* E1EEEC 8018F7BC C42AF984 */  lwc1        $ft3, %lo(D_8015F984)($at)
/* E1EEF0 8018F7C0 3C01801C */  lui         $at, %hi(D_E16C50_801C0D70)
/* E1EEF4 8018F7C4 C4300D70 */  lwc1        $ft4, %lo(D_E16C50_801C0D70)($at)
/* E1EEF8 8018F7C8 3C018016 */  lui         $at, %hi(D_8015F984)
/* E1EEFC 8018F7CC 3C028017 */  lui         $v0, %hi(D_801779A0)
/* E1EF00 8018F7D0 46105481 */  sub.s       $ft5, $ft3, $ft4
/* E1EF04 8018F7D4 244279A0 */  addiu       $v0, $v0, %lo(D_801779A0)
/* E1EF08 8018F7D8 44807000 */  mtc1        $zero, $fa1
/* E1EF0C 8018F7DC E432F984 */  swc1        $ft5, %lo(D_8015F984)($at)
/* E1EF10 8018F7E0 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E1EF14 8018F7E4 44813000 */  mtc1        $at, $ft1
/* E1EF18 8018F7E8 C4440000 */  lwc1        $ft0, 0x0($v0)
/* E1EF1C 8018F7EC 44809000 */  mtc1        $zero, $ft5
/* E1EF20 8018F7F0 3C018017 */  lui         $at, %hi(D_801779B8)
/* E1EF24 8018F7F4 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1EF28 8018F7F8 E4480000 */  swc1        $ft2, 0x0($v0)
/* E1EF2C 8018F7FC C60A0074 */  lwc1        $ft3, 0x74($s0)
/* E1EF30 8018F800 E44A0000 */  swc1        $ft3, 0x0($v0)
/* E1EF34 8018F804 C4500000 */  lwc1        $ft4, 0x0($v0)
/* E1EF38 8018F808 3C028017 */  lui         $v0, %hi(D_80177A48)
/* E1EF3C 8018F80C 24427A48 */  addiu       $v0, $v0, %lo(D_80177A48)
/* E1EF40 8018F810 E610004C */  swc1        $ft4, 0x4C($s0)
/* E1EF44 8018F814 E43279B8 */  swc1        $ft5, %lo(D_801779B8)($at)
/* E1EF48 8018F818 3C018017 */  lui         $at, %hi(D_80177A48 + 0x24)
/* E1EF4C 8018F81C E6120050 */  swc1        $ft5, 0x50($s0)
/* E1EF50 8018F820 C4247A6C */  lwc1        $ft0, %lo(D_80177A48 + 0x24)($at)
/* E1EF54 8018F824 C606007C */  lwc1        $ft1, 0x7C($s0)
/* E1EF58 8018F828 3C018017 */  lui         $at, %hi(D_80177D20)
/* E1EF5C 8018F82C C42A7D20 */  lwc1        $ft3, %lo(D_80177D20)($at)
/* E1EF60 8018F830 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1EF64 8018F834 3C018017 */  lui         $at, %hi(D_801779C0)
/* E1EF68 8018F838 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E1EF6C 8018F83C E43079C0 */  swc1        $ft4, %lo(D_801779C0)($at)
/* E1EF70 8018F840 E6100054 */  swc1        $ft4, 0x54($s0)
/* E1EF74 8018F844 3C018017 */  lui         $at, %hi(D_80177D20)
/* E1EF78 8018F848 C4227D20 */  lwc1        $fv1, %lo(D_80177D20)($at)
.LE16C50_8018F84C:
/* E1EF7C 8018F84C C444000C */  lwc1        $ft0, 0xC($v0)
/* E1EF80 8018F850 C4520014 */  lwc1        $ft5, 0x14($v0)
/* E1EF84 8018F854 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1EF88 8018F858 46022180 */  add.s       $ft1, $ft0, $fv1
/* E1EF8C 8018F85C 44067000 */  mfc1        $a2, $fa1
/* E1EF90 8018F860 E7AE0078 */  swc1        $fa1, 0x78($sp)
/* E1EF94 8018F864 E7AE007C */  swc1        $fa1, 0x7C($sp)
/* E1EF98 8018F868 44073000 */  mfc1        $a3, $ft1
/* E1EF9C 8018F86C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1EFA0 8018F870 8C450004 */  lw          $a1, 0x4($v0)
/* E1EFA4 8018F874 AFA00010 */  sw          $zero, 0x10($sp)
/* E1EFA8 8018F878 0C0016C0 */  jal         Matrix_Translate
/* E1EFAC 8018F87C E7B20080 */   swc1       $ft5, 0x80($sp)
/* E1EFB0 8018F880 3C018017 */  lui         $at, %hi(D_80177A48 + 0x10)
/* E1EFB4 8018F884 C4287A58 */  lwc1        $ft2, %lo(D_80177A48 + 0x10)($at)
/* E1EFB8 8018F888 3C01801C */  lui         $at, %hi(D_E16C50_801C0D74)
/* E1EFBC 8018F88C C42A0D74 */  lwc1        $ft3, %lo(D_E16C50_801C0D74)($at)
/* E1EFC0 8018F890 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1EFC4 8018F894 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1EFC8 8018F898 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E1EFCC 8018F89C 24060001 */  addiu       $a2, $zero, 0x1
/* E1EFD0 8018F8A0 46008487 */  neg.s       $ft5, $ft4
/* E1EFD4 8018F8A4 44059000 */  mfc1        $a1, $ft5
/* E1EFD8 8018F8A8 0C0017A4 */  jal         Matrix_RotateY
/* E1EFDC 8018F8AC 00000000 */   nop
/* E1EFE0 8018F8B0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1EFE4 8018F8B4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1EFE8 8018F8B8 27A50078 */  addiu       $a1, $sp, 0x78
/* E1EFEC 8018F8BC 0C001A5C */  jal         Matrix_MultVec3f
/* E1EFF0 8018F8C0 27A6006C */   addiu      $a2, $sp, 0x6C
/* E1EFF4 8018F8C4 C7A4006C */  lwc1        $ft0, 0x6C($sp)
/* E1EFF8 8018F8C8 3C018017 */  lui         $at, %hi(D_80177978)
/* E1EFFC 8018F8CC 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F000 8018F8D0 E4247978 */  swc1        $ft0, %lo(D_80177978)($at)
/* E1F004 8018F8D4 E6040040 */  swc1        $ft0, 0x40($s0)
/* E1F008 8018F8D8 C7A60070 */  lwc1        $ft1, 0x70($sp)
/* E1F00C 8018F8DC 3C018017 */  lui         $at, %hi(D_80177980)
/* E1F010 8018F8E0 3C048016 */  lui         $a0, %hi(gObjects2F4)
/* E1F014 8018F8E4 E4267980 */  swc1        $ft1, %lo(D_80177980)($at)
/* E1F018 8018F8E8 E6060044 */  swc1        $ft1, 0x44($s0)
/* E1F01C 8018F8EC C7A80074 */  lwc1        $ft2, 0x74($sp)
/* E1F020 8018F8F0 3C018017 */  lui         $at, %hi(D_80177988)
/* E1F024 8018F8F4 24843FE0 */  addiu       $a0, $a0, %lo(gObjects2F4)
/* E1F028 8018F8F8 E4287988 */  swc1        $ft2, %lo(D_80177988)($at)
/* E1F02C 8018F8FC E6080048 */  swc1        $ft2, 0x48($s0)
/* E1F030 8018F900 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E1F034 8018F904 24010434 */  addiu       $at, $zero, 0x434
/* E1F038 8018F908 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0x100)
/* E1F03C 8018F90C 54610017 */  bnel        $v1, $at, .LE16C50_8018F96C
/* E1F040 8018F910 28610442 */   slti       $at, $v1, 0x442
/* E1F044 8018F914 0C0183EF */  jal         Object_Kill
/* E1F048 8018F918 24A540E0 */   addiu      $a1, $a1, %lo(gObjects2F4 + 0x100)
/* E1F04C 8018F91C 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E1F050 8018F920 44815000 */  mtc1        $at, $ft3
/* E1F054 8018F924 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E1F058 8018F928 44818000 */  mtc1        $at, $ft4
/* E1F05C 8018F92C 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E1F060 8018F930 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E1F064 8018F934 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1F068 8018F938 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E1F06C 8018F93C 3C040900 */  lui         $a0, (0x9000002 >> 16)
/* E1F070 8018F940 E60A0190 */  swc1        $ft3, 0x190($s0)
/* E1F074 8018F944 E6100194 */  swc1        $ft4, 0x194($s0)
/* E1F078 8018F948 AFAE0014 */  sw          $t6, 0x14($sp)
/* E1F07C 8018F94C AFA70010 */  sw          $a3, 0x10($sp)
/* E1F080 8018F950 34840002 */  ori         $a0, $a0, (0x9000002 & 0xFFFF)
/* E1F084 8018F954 26050460 */  addiu       $a1, $s0, 0x460
/* E1F088 8018F958 0C006486 */  jal         Audio_PlaySfx
/* E1F08C 8018F95C 00003025 */   or         $a2, $zero, $zero
/* E1F090 8018F960 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F094 8018F964 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E1F098 8018F968 28610442 */  slti        $at, $v1, 0x442
.LE16C50_8018F96C:
/* E1F09C 8018F96C 1420004C */  bnez        $at, .LE16C50_8018FAA0
/* E1F0A0 8018F970 3C028018 */   lui        $v0, %hi(D_80178354)
/* E1F0A4 8018F974 3C048018 */  lui         $a0, %hi(D_80178350)
/* E1F0A8 8018F978 24848350 */  addiu       $a0, $a0, %lo(D_80178350)
/* E1F0AC 8018F97C 24428354 */  addiu       $v0, $v0, %lo(D_80178354)
/* E1F0B0 8018F980 AC400000 */  sw          $zero, 0x0($v0)
/* E1F0B4 8018F984 AC800000 */  sw          $zero, 0x0($a0)
/* E1F0B8 8018F988 3C018018 */  lui         $at, %hi(D_80178348)
/* E1F0BC 8018F98C AC208348 */  sw          $zero, %lo(D_80178348)($at)
/* E1F0C0 8018F990 3C098018 */  lui         $t1, %hi(D_80178340)
/* E1F0C4 8018F994 8D298340 */  lw          $t1, %lo(D_80178340)($t1)
/* E1F0C8 8018F998 240800FF */  addiu       $t0, $zero, 0xFF
/* E1F0CC 8018F99C 3C018018 */  lui         $at, %hi(D_80178358)
/* E1F0D0 8018F9A0 AC288358 */  sw          $t0, %lo(D_80178358)($at)
/* E1F0D4 8018F9A4 3C018018 */  lui         $at, %hi(D_8017835C)
/* E1F0D8 8018F9A8 24190008 */  addiu       $t9, $zero, 0x8
/* E1F0DC 8018F9AC 1509003C */  bne         $t0, $t1, .LE16C50_8018FAA0
/* E1F0E0 8018F9B0 AC39835C */   sw         $t9, %lo(D_8017835C)($at)
/* E1F0E4 8018F9B4 260A0460 */  addiu       $t2, $s0, 0x460
/* E1F0E8 8018F9B8 AFAA003C */  sw          $t2, 0x3C($sp)
/* E1F0EC 8018F9BC 0C028FD4 */  jal         Play_CheckMedalStatus
/* E1F0F0 8018F9C0 2404012C */   addiu      $a0, $zero, 0x12C
/* E1F0F4 8018F9C4 244B0001 */  addiu       $t3, $v0, 0x1
/* E1F0F8 8018F9C8 3C01800D */  lui         $at, %hi(D_800D3180 + 0x3)
/* E1F0FC 8018F9CC 3C038017 */  lui         $v1, %hi(D_80177C3C)
/* E1F100 8018F9D0 3C058017 */  lui         $a1, %hi(gTeamShields + 0x4)
/* E1F104 8018F9D4 3C068017 */  lui         $a2, %hi(D_801778F4)
/* E1F108 8018F9D8 3C048017 */  lui         $a0, %hi(gSavedTeamShields + 0x4)
/* E1F10C 8018F9DC 3C078017 */  lui         $a3, %hi(gVersusMode)
/* E1F110 8018F9E0 A02B3183 */  sb          $t3, %lo(D_800D3180 + 0x3)($at)
/* E1F114 8018F9E4 240800FF */  addiu       $t0, $zero, 0xFF
/* E1F118 8018F9E8 24E778E8 */  addiu       $a3, $a3, %lo(gVersusMode)
/* E1F11C 8018F9EC 248478D4 */  addiu       $a0, $a0, %lo(gSavedTeamShields + 0x4)
/* E1F120 8018F9F0 24C678F4 */  addiu       $a2, $a2, %lo(D_801778F4)
/* E1F124 8018F9F4 24A578B4 */  addiu       $a1, $a1, %lo(gTeamShields + 0x4)
/* E1F128 8018F9F8 24637C3C */  addiu       $v1, $v1, %lo(D_80177C3C)
.LE16C50_8018F9FC:
/* E1F12C 8018F9FC 8CA20000 */  lw          $v0, 0x0($a1)
/* E1F130 8018FA00 8C8C0000 */  lw          $t4, 0x0($a0)
/* E1F134 8018FA04 24840004 */  addiu       $a0, $a0, 0x4
/* E1F138 8018FA08 0087082B */  sltu        $at, $a0, $a3
/* E1F13C 8018FA0C 24630004 */  addiu       $v1, $v1, 0x4
/* E1F140 8018FA10 24A50004 */  addiu       $a1, $a1, 0x4
/* E1F144 8018FA14 24C60004 */  addiu       $a2, $a2, 0x4
/* E1F148 8018FA18 AC62FFFC */  sw          $v0, -0x4($v1)
/* E1F14C 8018FA1C AC82FFFC */  sw          $v0, -0x4($a0)
/* E1F150 8018FA20 1420FFF6 */  bnez        $at, .LE16C50_8018F9FC
/* E1F154 8018FA24 ACCCFFFC */   sw         $t4, -0x4($a2)
/* E1F158 8018FA28 3C038017 */  lui         $v1, %hi(D_80177C3C)
/* E1F15C 8018FA2C 3C028017 */  lui         $v0, %hi(D_80177C3C + 0xC)
/* E1F160 8018FA30 24427C48 */  addiu       $v0, $v0, %lo(D_80177C3C + 0xC)
/* E1F164 8018FA34 24637C3C */  addiu       $v1, $v1, %lo(D_80177C3C)
/* E1F168 8018FA38 8C6D0000 */  lw          $t5, 0x0($v1)
.LE16C50_8018FA3C:
/* E1F16C 8018FA3C 55A00003 */  bnel        $t5, $zero, .LE16C50_8018FA4C
/* E1F170 8018FA40 24630004 */   addiu      $v1, $v1, 0x4
/* E1F174 8018FA44 AC680000 */  sw          $t0, 0x0($v1)
/* E1F178 8018FA48 24630004 */  addiu       $v1, $v1, 0x4
.LE16C50_8018FA4C:
/* E1F17C 8018FA4C 5462FFFB */  bnel        $v1, $v0, .LE16C50_8018FA3C
/* E1F180 8018FA50 8C6D0000 */   lw         $t5, 0x0($v1)
/* E1F184 8018FA54 3C0E8016 */  lui         $t6, %hi(gGoldRingCount)
/* E1F188 8018FA58 91CE1A90 */  lbu         $t6, %lo(gGoldRingCount)($t6)
/* E1F18C 8018FA5C 3C018016 */  lui         $at, %hi(D_80161A94)
/* E1F190 8018FA60 00002025 */  or          $a0, $zero, $zero
/* E1F194 8018FA64 0C007289 */  jal         func_8001CA24
/* E1F198 8018FA68 A02E1A94 */   sb         $t6, %lo(D_80161A94)($at)
/* E1F19C 8018FA6C 0C006940 */  jal         Audio_KillSfx
/* E1F1A0 8018FA70 8FA4003C */   lw         $a0, 0x3C($sp)
/* E1F1A4 8018FA74 0C029852 */  jal         func_800A6148
/* E1F1A8 8018FA78 00000000 */   nop
/* E1F1AC 8018FA7C 240F0007 */  addiu       $t7, $zero, 0x7
/* E1F1B0 8018FA80 3C018016 */  lui         $at, %hi(gNextGameState)
/* E1F1B4 8018FA84 A42F1A32 */  sh          $t7, %lo(gNextGameState)($at)
/* E1F1B8 8018FA88 3C018016 */  lui         $at, %hi(gNextLevel)
/* E1F1BC 8018FA8C 24180013 */  addiu       $t8, $zero, 0x13
/* E1F1C0 8018FA90 0C022159 */  jal         func_80088564
/* E1F1C4 8018FA94 A4381A30 */   sh         $t8, %lo(gNextLevel)($at)
/* E1F1C8 8018FA98 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F1CC 8018FA9C 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018FAA0:
/* E1F1D0 8018FAA0 24010410 */  addiu       $at, $zero, 0x410
/* E1F1D4 8018FAA4 14610008 */  bne         $v1, $at, .LE16C50_8018FAC8
/* E1F1D8 8018FAA8 3C041050 */   lui        $a0, (0x105000FF >> 16)
/* E1F1DC 8018FAAC 0C0060BD */  jal         func_800182F4
/* E1F1E0 8018FAB0 348400FF */   ori        $a0, $a0, (0x105000FF & 0xFFFF)
/* E1F1E4 8018FAB4 3C041150 */  lui         $a0, (0x115000FF >> 16)
/* E1F1E8 8018FAB8 0C0060BD */  jal         func_800182F4
/* E1F1EC 8018FABC 348400FF */   ori        $a0, $a0, (0x115000FF & 0xFFFF)
/* E1F1F0 8018FAC0 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F1F4 8018FAC4 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018FAC8:
/* E1F1F8 8018FAC8 2401017C */  addiu       $at, $zero, 0x17C
/* E1F1FC 8018FACC 10610017 */  beq         $v1, $at, .LE16C50_8018FB2C
/* E1F200 8018FAD0 00601025 */   or         $v0, $v1, $zero
/* E1F204 8018FAD4 24010226 */  addiu       $at, $zero, 0x226
/* E1F208 8018FAD8 1061001C */  beq         $v1, $at, .LE16C50_8018FB4C
/* E1F20C 8018FADC 24190064 */   addiu      $t9, $zero, 0x64
/* E1F210 8018FAE0 240102BC */  addiu       $at, $zero, 0x2BC
/* E1F214 8018FAE4 1041001C */  beq         $v0, $at, .LE16C50_8018FB58
/* E1F218 8018FAE8 24090001 */   addiu      $t1, $zero, 0x1
/* E1F21C 8018FAEC 24010384 */  addiu       $at, $zero, 0x384
/* E1F220 8018FAF0 1041001C */  beq         $v0, $at, .LE16C50_8018FB64
/* E1F224 8018FAF4 240103AC */   addiu      $at, $zero, 0x3AC
/* E1F228 8018FAF8 1041001D */  beq         $v0, $at, .LE16C50_8018FB70
/* E1F22C 8018FAFC 3C048018 */   lui        $a0, %hi(gMsg_ID_7093)
/* E1F230 8018FB00 2401042E */  addiu       $at, $zero, 0x42E
/* E1F234 8018FB04 10410020 */  beq         $v0, $at, .LE16C50_8018FB88
/* E1F238 8018FB08 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E1F23C 8018FB0C 24010430 */  addiu       $at, $zero, 0x430
/* E1F240 8018FB10 1041002F */  beq         $v0, $at, .LE16C50_8018FBD0
/* E1F244 8018FB14 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E1F248 8018FB18 24010432 */  addiu       $at, $zero, 0x432
/* E1F24C 8018FB1C 1041003E */  beq         $v0, $at, .LE16C50_8018FC18
/* E1F250 8018FB20 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E1F254 8018FB24 1000004E */  b           .LE16C50_8018FC60
/* E1F258 8018FB28 2861042E */   slti       $at, $v1, 0x42E
.LE16C50_8018FB2C:
/* E1F25C 8018FB2C 00002025 */  or          $a0, $zero, $zero
/* E1F260 8018FB30 24050026 */  addiu       $a1, $zero, 0x26
/* E1F264 8018FB34 00003025 */  or          $a2, $zero, $zero
/* E1F268 8018FB38 0C007511 */  jal         func_8001D444
/* E1F26C 8018FB3C 240700FF */   addiu      $a3, $zero, 0xFF
/* E1F270 8018FB40 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F274 8018FB44 10000045 */  b           .LE16C50_8018FC5C
/* E1F278 8018FB48 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_8018FB4C:
/* E1F27C 8018FB4C 3C018017 */  lui         $at, %hi(D_80177840)
/* E1F280 8018FB50 10000042 */  b           .LE16C50_8018FC5C
/* E1F284 8018FB54 AC397840 */   sw         $t9, %lo(D_80177840)($at)
.LE16C50_8018FB58:
/* E1F288 8018FB58 3C018017 */  lui         $at, %hi(D_80177830)
/* E1F28C 8018FB5C 1000003F */  b           .LE16C50_8018FC5C
/* E1F290 8018FB60 A0297830 */   sb         $t1, %lo(D_80177830)($at)
.LE16C50_8018FB64:
/* E1F294 8018FB64 3C018017 */  lui         $at, %hi(D_80177830)
/* E1F298 8018FB68 1000003C */  b           .LE16C50_8018FC5C
/* E1F29C 8018FB6C A0207830 */   sb         $zero, %lo(D_80177830)($at)
.LE16C50_8018FB70:
/* E1F2A0 8018FB70 2484E07C */  addiu       $a0, $a0, %lo(gMsg_ID_7093)
/* E1F2A4 8018FB74 0C02EA02 */  jal         func_800BA808
/* E1F2A8 8018FB78 00002825 */   or         $a1, $zero, $zero
/* E1F2AC 8018FB7C 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F2B0 8018FB80 10000036 */  b           .LE16C50_8018FC5C
/* E1F2B4 8018FB84 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_8018FB88:
/* E1F2B8 8018FB88 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E1F2BC 8018FB8C 44819000 */  mtc1        $at, $ft5
/* E1F2C0 8018FB90 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E1F2C4 8018FB94 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1F2C8 8018FB98 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x47C)
/* E1F2CC 8018FB9C 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E1F2D0 8018FBA0 3C040900 */  lui         $a0, (0x9000002 >> 16)
/* E1F2D4 8018FBA4 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0x3F4)
/* E1F2D8 8018FBA8 24A543D4 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0x3F4)
/* E1F2DC 8018FBAC 34840002 */  ori         $a0, $a0, (0x9000002 & 0xFFFF)
/* E1F2E0 8018FBB0 AFAA0014 */  sw          $t2, 0x14($sp)
/* E1F2E4 8018FBB4 AFA70010 */  sw          $a3, 0x10($sp)
/* E1F2E8 8018FBB8 00003025 */  or          $a2, $zero, $zero
/* E1F2EC 8018FBBC 0C006486 */  jal         Audio_PlaySfx
/* E1F2F0 8018FBC0 E432445C */   swc1       $ft5, %lo(gObjects2F4 + 0x47C)($at)
/* E1F2F4 8018FBC4 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F2F8 8018FBC8 10000024 */  b           .LE16C50_8018FC5C
/* E1F2FC 8018FBCC 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_8018FBD0:
/* E1F300 8018FBD0 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E1F304 8018FBD4 44812000 */  mtc1        $at, $ft0
/* E1F308 8018FBD8 3C0B800C */  lui         $t3, %hi(D_800C5D3C)
/* E1F30C 8018FBDC 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1F310 8018FBE0 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x770)
/* E1F314 8018FBE4 256B5D3C */  addiu       $t3, $t3, %lo(D_800C5D3C)
/* E1F318 8018FBE8 3C040900 */  lui         $a0, (0x9000002 >> 16)
/* E1F31C 8018FBEC 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0x6E8)
/* E1F320 8018FBF0 24A546C8 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0x6E8)
/* E1F324 8018FBF4 34840002 */  ori         $a0, $a0, (0x9000002 & 0xFFFF)
/* E1F328 8018FBF8 AFAB0014 */  sw          $t3, 0x14($sp)
/* E1F32C 8018FBFC AFA70010 */  sw          $a3, 0x10($sp)
/* E1F330 8018FC00 00003025 */  or          $a2, $zero, $zero
/* E1F334 8018FC04 0C006486 */  jal         Audio_PlaySfx
/* E1F338 8018FC08 E4244750 */   swc1       $ft0, %lo(gObjects2F4 + 0x770)($at)
/* E1F33C 8018FC0C 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F340 8018FC10 10000012 */  b           .LE16C50_8018FC5C
/* E1F344 8018FC14 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_8018FC18:
/* E1F348 8018FC18 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E1F34C 8018FC1C 44813000 */  mtc1        $at, $ft1
/* E1F350 8018FC20 3C0C800C */  lui         $t4, %hi(D_800C5D3C)
/* E1F354 8018FC24 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E1F358 8018FC28 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xA64)
/* E1F35C 8018FC2C 258C5D3C */  addiu       $t4, $t4, %lo(D_800C5D3C)
/* E1F360 8018FC30 3C040900 */  lui         $a0, (0x9000002 >> 16)
/* E1F364 8018FC34 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0x9DC)
/* E1F368 8018FC38 24A549BC */  addiu       $a1, $a1, %lo(gObjects2F4 + 0x9DC)
/* E1F36C 8018FC3C 34840002 */  ori         $a0, $a0, (0x9000002 & 0xFFFF)
/* E1F370 8018FC40 AFAC0014 */  sw          $t4, 0x14($sp)
/* E1F374 8018FC44 AFA70010 */  sw          $a3, 0x10($sp)
/* E1F378 8018FC48 00003025 */  or          $a2, $zero, $zero
/* E1F37C 8018FC4C 0C006486 */  jal         Audio_PlaySfx
/* E1F380 8018FC50 E4264A44 */   swc1       $ft1, %lo(gObjects2F4 + 0xA64)($at)
/* E1F384 8018FC54 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F388 8018FC58 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018FC5C:
/* E1F38C 8018FC5C 2861042E */  slti        $at, $v1, 0x42E
.LE16C50_8018FC60:
/* E1F390 8018FC60 1420000C */  bnez        $at, .LE16C50_8018FC94
/* E1F394 8018FC64 3C01801C */   lui        $at, %hi(D_E16C50_801C0D78)
/* E1F398 8018FC68 C4280D78 */  lwc1        $ft2, %lo(D_E16C50_801C0D78)($at)
/* E1F39C 8018FC6C 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x408)
/* E1F3A0 8018FC70 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1F3A4 8018FC74 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1F3A8 8018FC78 248443E8 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x408)
/* E1F3AC 8018FC7C 3C054248 */  lui         $a1, (0x42480000 >> 16)
/* E1F3B0 8018FC80 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1F3B4 8018FC84 0C026F0B */  jal         Math_SmoothStepToF
/* E1F3B8 8018FC88 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1F3BC 8018FC8C 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F3C0 8018FC90 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018FC94:
/* E1F3C4 8018FC94 28610430 */  slti        $at, $v1, 0x430
/* E1F3C8 8018FC98 1420000C */  bnez        $at, .LE16C50_8018FCCC
/* E1F3CC 8018FC9C 3C01801C */   lui        $at, %hi(D_E16C50_801C0D7C)
/* E1F3D0 8018FCA0 C42A0D7C */  lwc1        $ft3, %lo(D_E16C50_801C0D7C)($at)
/* E1F3D4 8018FCA4 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x6FC)
/* E1F3D8 8018FCA8 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1F3DC 8018FCAC 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1F3E0 8018FCB0 248446DC */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x6FC)
/* E1F3E4 8018FCB4 3C054248 */  lui         $a1, (0x42480000 >> 16)
/* E1F3E8 8018FCB8 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1F3EC 8018FCBC 0C026F0B */  jal         Math_SmoothStepToF
/* E1F3F0 8018FCC0 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E1F3F4 8018FCC4 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F3F8 8018FCC8 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018FCCC:
/* E1F3FC 8018FCCC 28610432 */  slti        $at, $v1, 0x432
/* E1F400 8018FCD0 1420000C */  bnez        $at, .LE16C50_8018FD04
/* E1F404 8018FCD4 3C01801C */   lui        $at, %hi(D_E16C50_801C0D80)
/* E1F408 8018FCD8 C4300D80 */  lwc1        $ft4, %lo(D_E16C50_801C0D80)($at)
/* E1F40C 8018FCDC 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x9F0)
/* E1F410 8018FCE0 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1F414 8018FCE4 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1F418 8018FCE8 248449D0 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x9F0)
/* E1F41C 8018FCEC 3C054248 */  lui         $a1, (0x42480000 >> 16)
/* E1F420 8018FCF0 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1F424 8018FCF4 0C026F0B */  jal         Math_SmoothStepToF
/* E1F428 8018FCF8 E7B00010 */   swc1       $ft4, 0x10($sp)
/* E1F42C 8018FCFC 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E1F430 8018FD00 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_8018FD04:
/* E1F434 8018FD04 28610434 */  slti        $at, $v1, 0x434
/* E1F438 8018FD08 14200009 */  bnez        $at, .LE16C50_8018FD30
/* E1F43C 8018FD0C 260400D0 */   addiu      $a0, $s0, 0xD0
/* E1F440 8018FD10 3C01801C */  lui         $at, %hi(D_E16C50_801C0D84)
/* E1F444 8018FD14 C4320D84 */  lwc1        $ft5, %lo(D_E16C50_801C0D84)($at)
/* E1F448 8018FD18 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E1F44C 8018FD1C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E1F450 8018FD20 3C054248 */  lui         $a1, (0x42480000 >> 16)
/* E1F454 8018FD24 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* E1F458 8018FD28 0C026F0B */  jal         Math_SmoothStepToF
/* E1F45C 8018FD2C E7B20010 */   swc1       $ft5, 0x10($sp)
.LE16C50_8018FD30:
/* E1F460 8018FD30 C60400E8 */  lwc1        $ft0, 0xE8($s0)
/* E1F464 8018FD34 C6060114 */  lwc1        $ft1, 0x114($s0)
/* E1F468 8018FD38 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E1F46C 8018FD3C 44815000 */  mtc1        $at, $ft3
/* E1F470 8018FD40 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1F474 8018FD44 3C01801C */  lui         $at, %hi(D_E16C50_801C0D88)
/* E1F478 8018FD48 C4320D88 */  lwc1        $ft5, %lo(D_E16C50_801C0D88)($at)
/* E1F47C 8018FD4C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1F480 8018FD50 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E1F484 8018FD54 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1F488 8018FD58 00003025 */  or          $a2, $zero, $zero
/* E1F48C 8018FD5C 46128102 */  mul.s       $ft0, $ft4, $ft5
/* E1F490 8018FD60 44052000 */  mfc1        $a1, $ft0
/* E1F494 8018FD64 0C0017A4 */  jal         Matrix_RotateY
/* E1F498 8018FD68 00000000 */   nop
/* E1F49C 8018FD6C 3C01801C */  lui         $at, %hi(D_E16C50_801C0D8C)
/* E1F4A0 8018FD70 C4280D8C */  lwc1        $ft2, %lo(D_E16C50_801C0D8C)($at)
/* E1F4A4 8018FD74 C60600E4 */  lwc1        $ft1, 0xE4($s0)
/* E1F4A8 8018FD78 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1F4AC 8018FD7C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1F4B0 8018FD80 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E1F4B4 8018FD84 24060001 */  addiu       $a2, $zero, 0x1
/* E1F4B8 8018FD88 46005407 */  neg.s       $ft4, $ft3
/* E1F4BC 8018FD8C 44058000 */  mfc1        $a1, $ft4
/* E1F4C0 8018FD90 0C001751 */  jal         Matrix_RotateX
/* E1F4C4 8018FD94 00000000 */   nop
/* E1F4C8 8018FD98 44800000 */  mtc1        $zero, $fv0
/* E1F4CC 8018FD9C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E1F4D0 8018FDA0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E1F4D4 8018FDA4 E7A00078 */  swc1        $fv0, 0x78($sp)
/* E1F4D8 8018FDA8 E7A0007C */  swc1        $fv0, 0x7C($sp)
/* E1F4DC 8018FDAC C61200D0 */  lwc1        $ft5, 0xD0($s0)
/* E1F4E0 8018FDB0 27A50078 */  addiu       $a1, $sp, 0x78
/* E1F4E4 8018FDB4 27A6006C */  addiu       $a2, $sp, 0x6C
/* E1F4E8 8018FDB8 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E1F4EC 8018FDBC E7B20080 */   swc1       $ft5, 0x80($sp)
/* E1F4F0 8018FDC0 C7A4006C */  lwc1        $ft0, 0x6C($sp)
/* E1F4F4 8018FDC4 C60A0074 */  lwc1        $ft3, 0x74($s0)
/* E1F4F8 8018FDC8 3C01801C */  lui         $at, %hi(D_E16C50_801C0D90)
/* E1F4FC 8018FDCC E60400C0 */  swc1        $ft0, 0xC0($s0)
/* E1F500 8018FDD0 C7A60074 */  lwc1        $ft1, 0x74($sp)
/* E1F504 8018FDD4 C61000C0 */  lwc1        $ft4, 0xC0($s0)
/* E1F508 8018FDD8 C6040078 */  lwc1        $ft0, 0x78($s0)
/* E1F50C 8018FDDC E60600C8 */  swc1        $ft1, 0xC8($s0)
/* E1F510 8018FDE0 C7A80070 */  lwc1        $ft2, 0x70($sp)
/* E1F514 8018FDE4 46105480 */  add.s       $ft5, $ft3, $ft4
/* E1F518 8018FDE8 C61000C8 */  lwc1        $ft4, 0xC8($s0)
/* E1F51C 8018FDEC E60800C4 */  swc1        $ft2, 0xC4($s0)
/* E1F520 8018FDF0 C60600C4 */  lwc1        $ft1, 0xC4($s0)
/* E1F524 8018FDF4 C60A007C */  lwc1        $ft3, 0x7C($s0)
/* E1F528 8018FDF8 E6120074 */  swc1        $ft5, 0x74($s0)
/* E1F52C 8018FDFC 46062200 */  add.s       $ft2, $ft0, $ft1
/* E1F530 8018FE00 C60600EC */  lwc1        $ft1, 0xEC($s0)
/* E1F534 8018FE04 3C058017 */  lui         $a1, %hi(D_80177978)
/* E1F538 8018FE08 46105480 */  add.s       $ft5, $ft3, $ft4
/* E1F53C 8018FE0C E6080078 */  swc1        $ft2, 0x78($s0)
/* E1F540 8018FE10 C608012C */  lwc1        $ft2, 0x12C($s0)
/* E1F544 8018FE14 C6100130 */  lwc1        $ft4, 0x130($s0)
/* E1F548 8018FE18 E612007C */  swc1        $ft5, 0x7C($s0)
/* E1F54C 8018FE1C 46083280 */  add.s       $ft3, $ft1, $ft2
/* E1F550 8018FE20 C604007C */  lwc1        $ft0, 0x7C($s0)
/* E1F554 8018FE24 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E1F558 8018FE28 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1F55C 8018FE2C 46105480 */  add.s       $ft5, $ft3, $ft4
/* E1F560 8018FE30 E6040138 */  swc1        $ft0, 0x138($s0)
/* E1F564 8018FE34 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1F568 8018FE38 26040040 */  addiu       $a0, $s0, 0x40
/* E1F56C 8018FE3C E61200F8 */  swc1        $ft5, 0xF8($s0)
/* E1F570 8018FE40 C4240D90 */  lwc1        $ft0, %lo(D_E16C50_801C0D90)($at)
/* E1F574 8018FE44 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E1F578 8018FE48 8CA57978 */  lw          $a1, %lo(D_80177978)($a1)
/* E1F57C 8018FE4C 0C026F0B */  jal         Math_SmoothStepToF
/* E1F580 8018FE50 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E1F584 8018FE54 3C01801C */  lui         $at, %hi(D_E16C50_801C0D94)
/* E1F588 8018FE58 C4260D94 */  lwc1        $ft1, %lo(D_E16C50_801C0D94)($at)
/* E1F58C 8018FE5C 3C058017 */  lui         $a1, %hi(D_80177980)
/* E1F590 8018FE60 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E1F594 8018FE64 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1F598 8018FE68 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1F59C 8018FE6C 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E1F5A0 8018FE70 8CA57980 */  lw          $a1, %lo(D_80177980)($a1)
/* E1F5A4 8018FE74 26040044 */  addiu       $a0, $s0, 0x44
/* E1F5A8 8018FE78 0C026F0B */  jal         Math_SmoothStepToF
/* E1F5AC 8018FE7C E7A60010 */   swc1       $ft1, 0x10($sp)
/* E1F5B0 8018FE80 3C01801C */  lui         $at, %hi(D_E16C50_801C0D98)
/* E1F5B4 8018FE84 C4280D98 */  lwc1        $ft2, %lo(D_E16C50_801C0D98)($at)
/* E1F5B8 8018FE88 3C058017 */  lui         $a1, %hi(D_80177988)
/* E1F5BC 8018FE8C 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E1F5C0 8018FE90 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1F5C4 8018FE94 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1F5C8 8018FE98 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E1F5CC 8018FE9C 8CA57988 */  lw          $a1, %lo(D_80177988)($a1)
/* E1F5D0 8018FEA0 26040048 */  addiu       $a0, $s0, 0x48
/* E1F5D4 8018FEA4 0C026F0B */  jal         Math_SmoothStepToF
/* E1F5D8 8018FEA8 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E1F5DC 8018FEAC 3C01801C */  lui         $at, %hi(D_E16C50_801C0D9C)
/* E1F5E0 8018FEB0 C42A0D9C */  lwc1        $ft3, %lo(D_E16C50_801C0D9C)($at)
/* E1F5E4 8018FEB4 3C058017 */  lui         $a1, %hi(D_801779A0)
/* E1F5E8 8018FEB8 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E1F5EC 8018FEBC 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1F5F0 8018FEC0 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1F5F4 8018FEC4 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E1F5F8 8018FEC8 8CA579A0 */  lw          $a1, %lo(D_801779A0)($a1)
/* E1F5FC 8018FECC 2604004C */  addiu       $a0, $s0, 0x4C
/* E1F600 8018FED0 0C026F0B */  jal         Math_SmoothStepToF
/* E1F604 8018FED4 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E1F608 8018FED8 3C01801C */  lui         $at, %hi(D_E16C50_801C0DA0)
/* E1F60C 8018FEDC C4300DA0 */  lwc1        $ft4, %lo(D_E16C50_801C0DA0)($at)
/* E1F610 8018FEE0 3C058017 */  lui         $a1, %hi(D_801779B8)
/* E1F614 8018FEE4 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E1F618 8018FEE8 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1F61C 8018FEEC 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1F620 8018FEF0 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E1F624 8018FEF4 8CA579B8 */  lw          $a1, %lo(D_801779B8)($a1)
/* E1F628 8018FEF8 26040050 */  addiu       $a0, $s0, 0x50
/* E1F62C 8018FEFC 0C026F0B */  jal         Math_SmoothStepToF
/* E1F630 8018FF00 E7B00010 */   swc1       $ft4, 0x10($sp)
/* E1F634 8018FF04 3C01801C */  lui         $at, %hi(D_E16C50_801C0DA4)
/* E1F638 8018FF08 C4320DA4 */  lwc1        $ft5, %lo(D_E16C50_801C0DA4)($at)
/* E1F63C 8018FF0C 3C058017 */  lui         $a1, %hi(D_801779C0)
/* E1F640 8018FF10 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E1F644 8018FF14 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E1F648 8018FF18 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E1F64C 8018FF1C 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E1F650 8018FF20 8CA579C0 */  lw          $a1, %lo(D_801779C0)($a1)
/* E1F654 8018FF24 26040054 */  addiu       $a0, $s0, 0x54
/* E1F658 8018FF28 0C026F0B */  jal         Math_SmoothStepToF
/* E1F65C 8018FF2C E7B20010 */   swc1       $ft5, 0x10($sp)
/* E1F660 8018FF30 8FBF0024 */  lw          $ra, 0x24($sp)
/* E1F664 8018FF34 8FB00020 */  lw          $s0, 0x20($sp)
/* E1F668 8018FF38 27BD00A0 */  addiu       $sp, $sp, 0xA0
/* E1F66C 8018FF3C 03E00008 */  jr          $ra
/* E1F670 8018FF40 00000000 */   nop
/* E1F674 8018FF44 00000000 */  nop
/* E1F678 8018FF48 00000000 */  nop
/* E1F67C 8018FF4C 00000000 */  nop
