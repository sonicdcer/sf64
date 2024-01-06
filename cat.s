glabel func_E16C50_8019E7F0
/* E2DF20 8019E7F0 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* E2DF24 8019E7F4 AFB00018 */  sw          $s0, 0x18($sp)
/* E2DF28 8019E7F8 00808025 */  or          $s0, $a0, $zero
/* E2DF2C 8019E7FC AFBF001C */  sw          $ra, 0x1C($sp)
/* E2DF30 8019E800 AFA50024 */  sw          $a1, 0x24($sp)
/* E2DF34 8019E804 AFA60028 */  sw          $a2, 0x28($sp)
/* E2DF38 8019E808 AFA7002C */  sw          $a3, 0x2C($sp)
/* E2DF3C 8019E80C 0C01851D */  jal         Object_8C_Initialize
/* E2DF40 8019E810 02002025 */   or         $a0, $s0, $zero
/* E2DF44 8019E814 240E0002 */  addiu       $t6, $zero, 0x2
/* E2DF48 8019E818 240F0188 */  addiu       $t7, $zero, 0x188
/* E2DF4C 8019E81C 24180003 */  addiu       $t8, $zero, 0x3
/* E2DF50 8019E820 A20E0000 */  sb          $t6, 0x0($s0)
/* E2DF54 8019E824 A60F0002 */  sh          $t7, 0x2($s0)
/* E2DF58 8019E828 A618004E */  sh          $t8, 0x4E($s0)
/* E2DF5C 8019E82C C7A40024 */  lwc1        $ft0, 0x24($sp)
/* E2DF60 8019E830 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E2DF64 8019E834 44815000 */  mtc1        $at, $ft3
/* E2DF68 8019E838 E6040004 */  swc1        $ft0, 0x4($s0)
/* E2DF6C 8019E83C C7A60028 */  lwc1        $ft1, 0x28($sp)
/* E2DF70 8019E840 E6060008 */  swc1        $ft1, 0x8($s0)
/* E2DF74 8019E844 C7A8002C */  lwc1        $ft2, 0x2C($sp)
/* E2DF78 8019E848 E60A0018 */  swc1        $ft3, 0x18($s0)
/* E2DF7C 8019E84C 0C0013AC */  jal         Rand_ZeroOne
/* E2DF80 8019E850 E608000C */   swc1       $ft2, 0xC($s0)
/* E2DF84 8019E854 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E2DF88 8019E858 44818000 */  mtc1        $at, $ft4
/* E2DF8C 8019E85C 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E2DF90 8019E860 24190070 */  addiu       $t9, $zero, 0x70
/* E2DF94 8019E864 4610003C */  c.lt.s      $fv0, $ft4
/* E2DF98 8019E868 2604001C */  addiu       $a0, $s0, 0x1C
/* E2DF9C 8019E86C 45020005 */  bc1fl       .LE16C50_8019E884
/* E2DFA0 8019E870 A6190044 */   sh         $t9, 0x44($s0)
/* E2DFA4 8019E874 44819000 */  mtc1        $at, $ft5
/* E2DFA8 8019E878 00000000 */  nop
/* E2DFAC 8019E87C E6120014 */  swc1        $ft5, 0x14($s0)
/* E2DFB0 8019E880 A6190044 */  sh          $t9, 0x44($s0)
.LE16C50_8019E884:
/* E2DFB4 8019E884 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E2DFB8 8019E888 C7A40030 */  lwc1        $ft0, 0x30($sp)
/* E2DFBC 8019E88C 44813000 */  mtc1        $at, $ft1
/* E2DFC0 8019E890 96050002 */  lhu         $a1, 0x2($s0)
/* E2DFC4 8019E894 E6040070 */  swc1        $ft0, 0x70($s0)
/* E2DFC8 8019E898 0C0184AE */  jal         Object_SetInfo
/* E2DFCC 8019E89C E6060058 */   swc1       $ft1, 0x58($s0)
/* E2DFD0 8019E8A0 A6000030 */  sh          $zero, 0x30($s0)
/* E2DFD4 8019E8A4 8FBF001C */  lw          $ra, 0x1C($sp)
/* E2DFD8 8019E8A8 8FB00018 */  lw          $s0, 0x18($sp)
/* E2DFDC 8019E8AC 27BD0020 */  addiu       $sp, $sp, 0x20
/* E2DFE0 8019E8B0 03E00008 */  jr          $ra
/* E2DFE4 8019E8B4 00000000 */   nop
glabel func_E16C50_8019E8B8
/* E2DFE8 8019E8B8 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* E2DFEC 8019E8BC AFBF001C */  sw          $ra, 0x1C($sp)
/* E2DFF0 8019E8C0 AFA60028 */  sw          $a2, 0x28($sp)
/* E2DFF4 8019E8C4 AFA7002C */  sw          $a3, 0x2C($sp)
/* E2DFF8 8019E8C8 3C048017 */  lui         $a0, %hi(gObjects8C)
/* E2DFFC 8019E8CC 3C028017 */  lui         $v0, %hi(gItems)
/* E2E000 8019E8D0 244237E0 */  addiu       $v0, $v0, %lo(gItems)
/* E2E004 8019E8D4 24840130 */  addiu       $a0, $a0, %lo(gObjects8C)
/* E2E008 8019E8D8 908E0000 */  lbu         $t6, 0x0($a0)
.LE16C50_8019E8DC:
/* E2E00C 8019E8DC 55C0000A */  bnel        $t6, $zero, .LE16C50_8019E908
/* E2E010 8019E8E0 2484008C */   addiu      $a0, $a0, 0x8C
/* E2E014 8019E8E4 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E2E018 8019E8E8 44056000 */  mfc1        $a1, $fa0
/* E2E01C 8019E8EC 44067000 */  mfc1        $a2, $fa1
/* E2E020 8019E8F0 8FA70028 */  lw          $a3, 0x28($sp)
/* E2E024 8019E8F4 0C0679FC */  jal         func_E16C50_8019E7F0
/* E2E028 8019E8F8 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E2E02C 8019E8FC 10000005 */  b           .LE16C50_8019E914
/* E2E030 8019E900 8FBF001C */   lw         $ra, 0x1C($sp)
/* E2E034 8019E904 2484008C */  addiu       $a0, $a0, 0x8C
.LE16C50_8019E908:
/* E2E038 8019E908 5482FFF4 */  bnel        $a0, $v0, .LE16C50_8019E8DC
/* E2E03C 8019E90C 908E0000 */   lbu        $t6, 0x0($a0)
/* E2E040 8019E910 8FBF001C */  lw          $ra, 0x1C($sp)
.LE16C50_8019E914:
/* E2E044 8019E914 27BD0020 */  addiu       $sp, $sp, 0x20
/* E2E048 8019E918 03E00008 */  jr          $ra
/* E2E04C 8019E91C 00000000 */   nop
glabel func_E16C50_8019E920
/* E2E050 8019E920 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E2E054 8019E924 AFA60020 */  sw          $a2, 0x20($sp)
/* E2E058 8019E928 00803025 */  or          $a2, $a0, $zero
/* E2E05C 8019E92C AFBF0014 */  sw          $ra, 0x14($sp)
/* E2E060 8019E930 AFA40018 */  sw          $a0, 0x18($sp)
/* E2E064 8019E934 AFA5001C */  sw          $a1, 0x1C($sp)
/* E2E068 8019E938 AFA70024 */  sw          $a3, 0x24($sp)
/* E2E06C 8019E93C 00C02025 */  or          $a0, $a2, $zero
/* E2E070 8019E940 0C01851D */  jal         Object_8C_Initialize
/* E2E074 8019E944 AFA60018 */   sw         $a2, 0x18($sp)
/* E2E078 8019E948 8FA60018 */  lw          $a2, 0x18($sp)
/* E2E07C 8019E94C 8FA20038 */  lw          $v0, 0x38($sp)
/* E2E080 8019E950 240E0002 */  addiu       $t6, $zero, 0x2
/* E2E084 8019E954 240F0188 */  addiu       $t7, $zero, 0x188
/* E2E088 8019E958 24010002 */  addiu       $at, $zero, 0x2
/* E2E08C 8019E95C A0CE0000 */  sb          $t6, 0x0($a2)
/* E2E090 8019E960 A4CF0002 */  sh          $t7, 0x2($a2)
/* E2E094 8019E964 14410005 */  bne         $v0, $at, .LE16C50_8019E97C
/* E2E098 8019E968 A4C2004E */   sh         $v0, 0x4E($a2)
/* E2E09C 8019E96C 2418001E */  addiu       $t8, $zero, 0x1E
/* E2E0A0 8019E970 24190003 */  addiu       $t9, $zero, 0x3
/* E2E0A4 8019E974 A4D80050 */  sh          $t8, 0x50($a2)
/* E2E0A8 8019E978 A0D9004C */  sb          $t9, 0x4C($a2)
.LE16C50_8019E97C:
/* E2E0AC 8019E97C C7A4001C */  lwc1        $ft0, 0x1C($sp)
/* E2E0B0 8019E980 E4C40004 */  swc1        $ft0, 0x4($a2)
/* E2E0B4 8019E984 C7A60020 */  lwc1        $ft1, 0x20($sp)
/* E2E0B8 8019E988 E4C60008 */  swc1        $ft1, 0x8($a2)
/* E2E0BC 8019E98C C7A80024 */  lwc1        $ft2, 0x24($sp)
/* E2E0C0 8019E990 E4C8000C */  swc1        $ft2, 0xC($a2)
/* E2E0C4 8019E994 C7AA0028 */  lwc1        $ft3, 0x28($sp)
/* E2E0C8 8019E998 E4CA0054 */  swc1        $ft3, 0x54($a2)
/* E2E0CC 8019E99C C7B0002C */  lwc1        $ft4, 0x2C($sp)
/* E2E0D0 8019E9A0 E4D00058 */  swc1        $ft4, 0x58($a2)
/* E2E0D4 8019E9A4 C7B20030 */  lwc1        $ft5, 0x30($sp)
/* E2E0D8 8019E9A8 E4D2005C */  swc1        $ft5, 0x5C($a2)
/* E2E0DC 8019E9AC 0C0013AC */  jal         Rand_ZeroOne
/* E2E0E0 8019E9B0 AFA60018 */   sw         $a2, 0x18($sp)
/* E2E0E4 8019E9B4 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E2E0E8 8019E9B8 44812000 */  mtc1        $at, $ft0
/* E2E0EC 8019E9BC 8FA60018 */  lw          $a2, 0x18($sp)
/* E2E0F0 8019E9C0 240800B0 */  addiu       $t0, $zero, 0xB0
/* E2E0F4 8019E9C4 46040182 */  mul.s       $ft1, $fv0, $ft0
/* E2E0F8 8019E9C8 A4C80044 */  sh          $t0, 0x44($a2)
/* E2E0FC 8019E9CC 24C4001C */  addiu       $a0, $a2, 0x1C
/* E2E100 8019E9D0 94C50002 */  lhu         $a1, 0x2($a2)
/* E2E104 8019E9D4 E4C60018 */  swc1        $ft1, 0x18($a2)
/* E2E108 8019E9D8 C7A80034 */  lwc1        $ft2, 0x34($sp)
/* E2E10C 8019E9DC 0C0184AE */  jal         Object_SetInfo
/* E2E110 8019E9E0 E4C80070 */   swc1       $ft2, 0x70($a2)
/* E2E114 8019E9E4 8FBF0014 */  lw          $ra, 0x14($sp)
/* E2E118 8019E9E8 27BD0018 */  addiu       $sp, $sp, 0x18
/* E2E11C 8019E9EC 03E00008 */  jr          $ra
/* E2E120 8019E9F0 00000000 */   nop
glabel func_E16C50_8019E9F4
/* E2E124 8019E9F4 27BDFFD0 */  addiu       $sp, $sp, -0x30
/* E2E128 8019E9F8 AFBF002C */  sw          $ra, 0x2C($sp)
/* E2E12C 8019E9FC AFA60038 */  sw          $a2, 0x38($sp)
/* E2E130 8019EA00 AFA7003C */  sw          $a3, 0x3C($sp)
/* E2E134 8019EA04 3C048017 */  lui         $a0, %hi(gObjects8C + 0x3624)
/* E2E138 8019EA08 3C028017 */  lui         $v0, %hi(gObjects8C + 0x120C)
/* E2E13C 8019EA0C 2442133C */  addiu       $v0, $v0, %lo(gObjects8C + 0x120C)
/* E2E140 8019EA10 24843754 */  addiu       $a0, $a0, %lo(gObjects8C + 0x3624)
/* E2E144 8019EA14 908E0000 */  lbu         $t6, 0x0($a0)
.LE16C50_8019EA18:
/* E2E148 8019EA18 55C00012 */  bnel        $t6, $zero, .LE16C50_8019EA64
/* E2E14C 8019EA1C 2484FF74 */   addiu      $a0, $a0, -0x8C
/* E2E150 8019EA20 C7A4003C */  lwc1        $ft0, 0x3C($sp)
/* E2E154 8019EA24 C7A60040 */  lwc1        $ft1, 0x40($sp)
/* E2E158 8019EA28 C7A80044 */  lwc1        $ft2, 0x44($sp)
/* E2E15C 8019EA2C C7AA0048 */  lwc1        $ft3, 0x48($sp)
/* E2E160 8019EA30 8FAF004C */  lw          $t7, 0x4C($sp)
/* E2E164 8019EA34 44056000 */  mfc1        $a1, $fa0
/* E2E168 8019EA38 44067000 */  mfc1        $a2, $fa1
/* E2E16C 8019EA3C 8FA70038 */  lw          $a3, 0x38($sp)
/* E2E170 8019EA40 E7A40010 */  swc1        $ft0, 0x10($sp)
/* E2E174 8019EA44 E7A60014 */  swc1        $ft1, 0x14($sp)
/* E2E178 8019EA48 E7A80018 */  swc1        $ft2, 0x18($sp)
/* E2E17C 8019EA4C E7AA001C */  swc1        $ft3, 0x1C($sp)
/* E2E180 8019EA50 0C067A48 */  jal         func_E16C50_8019E920
/* E2E184 8019EA54 AFAF0020 */   sw         $t7, 0x20($sp)
/* E2E188 8019EA58 10000005 */  b           .LE16C50_8019EA70
/* E2E18C 8019EA5C 8FBF002C */   lw         $ra, 0x2C($sp)
/* E2E190 8019EA60 2484FF74 */  addiu       $a0, $a0, -0x8C
.LE16C50_8019EA64:
/* E2E194 8019EA64 5482FFEC */  bnel        $a0, $v0, .LE16C50_8019EA18
/* E2E198 8019EA68 908E0000 */   lbu        $t6, 0x0($a0)
/* E2E19C 8019EA6C 8FBF002C */  lw          $ra, 0x2C($sp)
.LE16C50_8019EA70:
/* E2E1A0 8019EA70 27BD0030 */  addiu       $sp, $sp, 0x30
/* E2E1A4 8019EA74 03E00008 */  jr          $ra
/* E2E1A8 8019EA78 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C14D0
/* E50C00 801C14D0 3F733333 */ .float 0.9499999881

dlabel D_E16C50_801C14D4
/* E50C04 801C14D4 3F666666 */ .float 0.8999999762

dlabel D_E16C50_801C14D8
/* E50C08 801C14D8 3F4CCCCD */ .float 0.8000000119

dlabel D_E16C50_801C14DC
/* E50C0C 801C14DC 3F266666 */ .float 0.6499999762

dlabel D_E16C50_801C14E0
/* E50C10 801C14E0 3EE66666 */ .float 0.4499999881

dlabel D_E16C50_801C14E4
/* E50C14 801C14E4 3E4CCCCD */ .float 0.200000003

dlabel D_E16C50_801C14E8
/* E50C18 801C14E8 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C14EC
/* E50C1C 801C14EC 3F266666 */ .float 0.6499999762

dlabel D_E16C50_801C14F0
/* E50C20 801C14F0 3F333333 */ .float 0.6999999881

dlabel D_E16C50_801C14F4
/* E50C24 801C14F4 3F19999A */ .float 0.6000000238

dlabel D_E16C50_801C14F8
/* E50C28 801C14F8 3F0CCCCD */ .float 0.5500000119

dlabel D_E16C50_801C14FC
/* E50C2C 801C14FC 3ECCCCCD */ .float 0.400000006

dlabel D_E16C50_801C1500
/* E50C30 801C1500 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C1504
/* E50C34 801C1504 3E4CCCCD */ .float 0.200000003

dlabel D_E16C50_801C1508
/* E50C38 801C1508 3DCCCCCD */ .float 0.1000000015


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8019EA7C
/* E2E1AC 8019EA7C 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* E2E1B0 8019EA80 AFB00020 */  sw          $s0, 0x20($sp)
/* E2E1B4 8019EA84 00808025 */  or          $s0, $a0, $zero
/* E2E1B8 8019EA88 AFBF0024 */  sw          $ra, 0x24($sp)
/* E2E1BC 8019EA8C 860200B8 */  lh          $v0, 0xB8($s0)
/* E2E1C0 8019EA90 3C018017 */  lui         $at, %hi(D_80177D08)
/* E2E1C4 8019EA94 5440000C */  bnel        $v0, $zero, .LE16C50_8019EAC8
/* E2E1C8 8019EA98 C6120118 */   lwc1       $ft5, 0x118($s0)
/* E2E1CC 8019EA9C 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E2E1D0 8019EAA0 44812000 */  mtc1        $at, $ft0
/* E2E1D4 8019EAA4 3C018017 */  lui         $at, %hi(D_80177D08)
/* E2E1D8 8019EAA8 C4267D08 */  lwc1        $ft1, %lo(D_80177D08)($at)
/* E2E1DC 8019EAAC 3C014140 */  lui         $at, (0x41400000 >> 16)
/* E2E1E0 8019EAB0 44815000 */  mtc1        $at, $ft3
/* E2E1E4 8019EAB4 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E2E1E8 8019EAB8 E60A0114 */  swc1        $ft3, 0x114($s0)
/* E2E1EC 8019EABC 10000017 */  b           .LE16C50_8019EB1C
/* E2E1F0 8019EAC0 E60800F0 */   swc1       $ft2, 0xF0($s0)
/* E2E1F4 8019EAC4 C6120118 */  lwc1        $ft5, 0x118($s0)
.LE16C50_8019EAC8:
/* E2E1F8 8019EAC8 C4247D08 */  lwc1        $ft0, %lo(D_80177D08)($at)
/* E2E1FC 8019EACC 24010002 */  addiu       $at, $zero, 0x2
/* E2E200 8019EAD0 26040004 */  addiu       $a0, $s0, 0x4
/* E2E204 8019EAD4 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E2E208 8019EAD8 3C0E8018 */  lui         $t6, %hi(gPlayer)
/* E2E20C 8019EADC 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E2E210 8019EAE0 1441000A */  bne         $v0, $at, .LE16C50_8019EB0C
/* E2E214 8019EAE4 E60600F0 */   swc1       $ft1, 0xF0($s0)
/* E2E218 8019EAE8 8DCE8280 */  lw          $t6, %lo(gPlayer)($t6)
/* E2E21C 8019EAEC 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E2E220 8019EAF0 44814000 */  mtc1        $at, $ft2
/* E2E224 8019EAF4 8DC50074 */  lw          $a1, 0x74($t6)
/* E2E228 8019EAF8 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* E2E22C 8019EAFC 0C026F0B */  jal         Math_SmoothStepToF
/* E2E230 8019EB00 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E2E234 8019EB04 10000006 */  b           .LE16C50_8019EB20
/* E2E238 8019EB08 86020046 */   lh         $v0, 0x46($s0)
.LE16C50_8019EB0C:
/* E2E23C 8019EB0C 3C014160 */  lui         $at, (0x41600000 >> 16)
/* E2E240 8019EB10 44815000 */  mtc1        $at, $ft3
/* E2E244 8019EB14 00000000 */  nop
/* E2E248 8019EB18 E60A0114 */  swc1        $ft3, 0x114($s0)
.LE16C50_8019EB1C:
/* E2E24C 8019EB1C 86020046 */  lh          $v0, 0x46($s0)
.LE16C50_8019EB20:
/* E2E250 8019EB20 24010001 */  addiu       $at, $zero, 0x1
/* E2E254 8019EB24 240F0003 */  addiu       $t7, $zero, 0x3
/* E2E258 8019EB28 10400003 */  beqz        $v0, .LE16C50_8019EB38
/* E2E25C 8019EB2C 26040100 */   addiu      $a0, $s0, 0x100
/* E2E260 8019EB30 54410011 */  bnel        $v0, $at, .LE16C50_8019EB78
/* E2E264 8019EB34 C612000C */   lwc1       $ft5, 0xC($s0)
.LE16C50_8019EB38:
/* E2E268 8019EB38 A60F0046 */  sh          $t7, 0x46($s0)
/* E2E26C 8019EB3C AFA40028 */  sw          $a0, 0x28($sp)
/* E2E270 8019EB40 0C017C3A */  jal         func_8005F0E8
/* E2E274 8019EB44 26050004 */   addiu      $a1, $s0, 0x4
/* E2E278 8019EB48 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E2E27C 8019EB4C 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E2E280 8019EB50 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E2E284 8019EB54 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E2E288 8019EB58 3C041100 */  lui         $a0, (0x11002052 >> 16)
/* E2E28C 8019EB5C 34842052 */  ori         $a0, $a0, (0x11002052 & 0xFFFF)
/* E2E290 8019EB60 AFB80014 */  sw          $t8, 0x14($sp)
/* E2E294 8019EB64 AFA70010 */  sw          $a3, 0x10($sp)
/* E2E298 8019EB68 8FA50028 */  lw          $a1, 0x28($sp)
/* E2E29C 8019EB6C 0C006486 */  jal         Audio_PlaySfx
/* E2E2A0 8019EB70 00003025 */   or         $a2, $zero, $zero
/* E2E2A4 8019EB74 C612000C */  lwc1        $ft5, 0xC($s0)
.LE16C50_8019EB78:
/* E2E2A8 8019EB78 8E060004 */  lw          $a2, 0x4($s0)
/* E2E2AC 8019EB7C 27A40034 */  addiu       $a0, $sp, 0x34
/* E2E2B0 8019EB80 27A50030 */  addiu       $a1, $sp, 0x30
/* E2E2B4 8019EB84 3C07C2C8 */  lui         $a3, (0xC2C80000 >> 16)
/* E2E2B8 8019EB88 0C029CF9 */  jal         func_800A73E4
/* E2E2BC 8019EB8C E7B20010 */   swc1       $ft5, 0x10($sp)
/* E2E2C0 8019EB90 104000D5 */  beqz        $v0, .LE16C50_8019EEE8
/* E2E2C4 8019EB94 3C01801C */   lui        $at, %hi(D_E16C50_801C14D0)
/* E2E2C8 8019EB98 3C028018 */  lui         $v0, %hi(D_801782EC)
/* E2E2CC 8019EB9C C42014D0 */  lwc1        $fv0, %lo(D_E16C50_801C14D0)($at)
/* E2E2D0 8019EBA0 8FA80030 */  lw          $t0, 0x30($sp)
/* E2E2D4 8019EBA4 244282EC */  addiu       $v0, $v0, %lo(D_801782EC)
/* E2E2D8 8019EBA8 8C590000 */  lw          $t9, 0x0($v0)
/* E2E2DC 8019EBAC 3C01801C */  lui         $at, %hi(D_E16C50_801C14D4)
/* E2E2E0 8019EBB0 C42214D4 */  lwc1        $fv1, %lo(D_E16C50_801C14D4)($at)
/* E2E2E4 8019EBB4 C6040114 */  lwc1        $ft0, 0x114($s0)
/* E2E2E8 8019EBB8 3C01801C */  lui         $at, %hi(D_E16C50_801C14D8)
/* E2E2EC 8019EBBC 00084880 */  sll         $t1, $t0, 2
/* E2E2F0 8019EBC0 C42C14D8 */  lwc1        $fa0, %lo(D_E16C50_801C14D8)($at)
/* E2E2F4 8019EBC4 03295021 */  addu        $t2, $t9, $t1
/* E2E2F8 8019EBC8 E5440000 */  swc1        $ft0, 0x0($t2)
/* E2E2FC 8019EBCC C6060114 */  lwc1        $ft1, 0x114($s0)
/* E2E300 8019EBD0 8C4B0000 */  lw          $t3, 0x0($v0)
/* E2E304 8019EBD4 00086080 */  sll         $t4, $t0, 2
/* E2E308 8019EBD8 46003202 */  mul.s       $ft2, $ft1, $fv0
/* E2E30C 8019EBDC 016C6821 */  addu        $t5, $t3, $t4
/* E2E310 8019EBE0 00087880 */  sll         $t7, $t0, 2
/* E2E314 8019EBE4 24010002 */  addiu       $at, $zero, 0x2
/* E2E318 8019EBE8 E5A80004 */  swc1        $ft2, 0x4($t5)
/* E2E31C 8019EBEC C60A0114 */  lwc1        $ft3, 0x114($s0)
/* E2E320 8019EBF0 8C4E0000 */  lw          $t6, 0x0($v0)
/* E2E324 8019EBF4 46005482 */  mul.s       $ft5, $ft3, $fv0
/* E2E328 8019EBF8 01CFC021 */  addu        $t8, $t6, $t7
/* E2E32C 8019EBFC E712FFFC */  swc1        $ft5, -0x4($t8)
/* E2E330 8019EC00 C6040114 */  lwc1        $ft0, 0x114($s0)
/* E2E334 8019EC04 8C590000 */  lw          $t9, 0x0($v0)
/* E2E338 8019EC08 46022182 */  mul.s       $ft1, $ft0, $fv1
/* E2E33C 8019EC0C 03295021 */  addu        $t2, $t9, $t1
/* E2E340 8019EC10 E5460008 */  swc1        $ft1, 0x8($t2)
/* E2E344 8019EC14 C6080114 */  lwc1        $ft2, 0x114($s0)
/* E2E348 8019EC18 8C4B0000 */  lw          $t3, 0x0($v0)
/* E2E34C 8019EC1C 46024282 */  mul.s       $ft3, $ft2, $fv1
/* E2E350 8019EC20 016C6821 */  addu        $t5, $t3, $t4
/* E2E354 8019EC24 E5AAFFF8 */  swc1        $ft3, -0x8($t5)
/* E2E358 8019EC28 C6120114 */  lwc1        $ft5, 0x114($s0)
/* E2E35C 8019EC2C 8C4E0000 */  lw          $t6, 0x0($v0)
/* E2E360 8019EC30 00086880 */  sll         $t5, $t0, 2
/* E2E364 8019EC34 460C9102 */  mul.s       $ft0, $ft5, $fa0
/* E2E368 8019EC38 01CFC021 */  addu        $t8, $t6, $t7
/* E2E36C 8019EC3C E704000C */  swc1        $ft0, 0xC($t8)
/* E2E370 8019EC40 C6060114 */  lwc1        $ft1, 0x114($s0)
/* E2E374 8019EC44 8C590000 */  lw          $t9, 0x0($v0)
/* E2E378 8019EC48 460C3202 */  mul.s       $ft2, $ft1, $fa0
/* E2E37C 8019EC4C 03295021 */  addu        $t2, $t9, $t1
/* E2E380 8019EC50 E548FFF4 */  swc1        $ft2, -0xC($t2)
/* E2E384 8019EC54 860B00B8 */  lh          $t3, 0xB8($s0)
/* E2E388 8019EC58 8FAA0030 */  lw          $t2, 0x30($sp)
/* E2E38C 8019EC5C 11610033 */  beq         $t3, $at, .LE16C50_8019ED2C
/* E2E390 8019EC60 3C01801C */   lui        $at, %hi(D_E16C50_801C14DC)
/* E2E394 8019EC64 C42014DC */  lwc1        $fv0, %lo(D_E16C50_801C14DC)($at)
/* E2E398 8019EC68 C60A0114 */  lwc1        $ft3, 0x114($s0)
/* E2E39C 8019EC6C 3C01801C */  lui         $at, %hi(D_E16C50_801C14E0)
/* E2E3A0 8019EC70 C42214E0 */  lwc1        $fv1, %lo(D_E16C50_801C14E0)($at)
/* E2E3A4 8019EC74 46005482 */  mul.s       $ft5, $ft3, $fv0
/* E2E3A8 8019EC78 8C4C0000 */  lw          $t4, 0x0($v0)
/* E2E3AC 8019EC7C 3C01801C */  lui         $at, %hi(D_E16C50_801C14E4)
/* E2E3B0 8019EC80 C42C14E4 */  lwc1        $fa0, %lo(D_E16C50_801C14E4)($at)
/* E2E3B4 8019EC84 3C01801C */  lui         $at, %hi(D_E16C50_801C14E8)
/* E2E3B8 8019EC88 C42E14E8 */  lwc1        $fa1, %lo(D_E16C50_801C14E8)($at)
/* E2E3BC 8019EC8C 018D7021 */  addu        $t6, $t4, $t5
/* E2E3C0 8019EC90 E5D20010 */  swc1        $ft5, 0x10($t6)
/* E2E3C4 8019EC94 C6040114 */  lwc1        $ft0, 0x114($s0)
/* E2E3C8 8019EC98 8C4F0000 */  lw          $t7, 0x0($v0)
/* E2E3CC 8019EC9C 0008C080 */  sll         $t8, $t0, 2
/* E2E3D0 8019ECA0 46002182 */  mul.s       $ft1, $ft0, $fv0
/* E2E3D4 8019ECA4 01F8C821 */  addu        $t9, $t7, $t8
/* E2E3D8 8019ECA8 00085080 */  sll         $t2, $t0, 2
/* E2E3DC 8019ECAC E726FFF0 */  swc1        $ft1, -0x10($t9)
/* E2E3E0 8019ECB0 C6080114 */  lwc1        $ft2, 0x114($s0)
/* E2E3E4 8019ECB4 8C490000 */  lw          $t1, 0x0($v0)
/* E2E3E8 8019ECB8 46024282 */  mul.s       $ft3, $ft2, $fv1
/* E2E3EC 8019ECBC 012A5821 */  addu        $t3, $t1, $t2
/* E2E3F0 8019ECC0 E56A0014 */  swc1        $ft3, 0x14($t3)
/* E2E3F4 8019ECC4 C6120114 */  lwc1        $ft5, 0x114($s0)
/* E2E3F8 8019ECC8 8C4C0000 */  lw          $t4, 0x0($v0)
/* E2E3FC 8019ECCC 46029102 */  mul.s       $ft0, $ft5, $fv1
/* E2E400 8019ECD0 018D7021 */  addu        $t6, $t4, $t5
/* E2E404 8019ECD4 E5C4FFEC */  swc1        $ft0, -0x14($t6)
/* E2E408 8019ECD8 C6060114 */  lwc1        $ft1, 0x114($s0)
/* E2E40C 8019ECDC 8C4F0000 */  lw          $t7, 0x0($v0)
/* E2E410 8019ECE0 460C3202 */  mul.s       $ft2, $ft1, $fa0
/* E2E414 8019ECE4 01F8C821 */  addu        $t9, $t7, $t8
/* E2E418 8019ECE8 E7280018 */  swc1        $ft2, 0x18($t9)
/* E2E41C 8019ECEC C60A0114 */  lwc1        $ft3, 0x114($s0)
/* E2E420 8019ECF0 8C490000 */  lw          $t1, 0x0($v0)
/* E2E424 8019ECF4 460C5482 */  mul.s       $ft5, $ft3, $fa0
/* E2E428 8019ECF8 012A5821 */  addu        $t3, $t1, $t2
/* E2E42C 8019ECFC E572FFE8 */  swc1        $ft5, -0x18($t3)
/* E2E430 8019ED00 C6040114 */  lwc1        $ft0, 0x114($s0)
/* E2E434 8019ED04 8C4C0000 */  lw          $t4, 0x0($v0)
/* E2E438 8019ED08 460E2182 */  mul.s       $ft1, $ft0, $fa1
/* E2E43C 8019ED0C 018D7021 */  addu        $t6, $t4, $t5
/* E2E440 8019ED10 E5C6001C */  swc1        $ft1, 0x1C($t6)
/* E2E444 8019ED14 C6080114 */  lwc1        $ft2, 0x114($s0)
/* E2E448 8019ED18 8C4F0000 */  lw          $t7, 0x0($v0)
/* E2E44C 8019ED1C 460E4282 */  mul.s       $ft3, $ft2, $fa1
/* E2E450 8019ED20 01F8C821 */  addu        $t9, $t7, $t8
/* E2E454 8019ED24 10000070 */  b           .LE16C50_8019EEE8
/* E2E458 8019ED28 E72AFFE4 */   swc1       $ft3, -0x1C($t9)
.LE16C50_8019ED2C:
/* E2E45C 8019ED2C 3C01801C */  lui         $at, %hi(D_E16C50_801C14EC)
/* E2E460 8019ED30 C42014EC */  lwc1        $fv0, %lo(D_E16C50_801C14EC)($at)
/* E2E464 8019ED34 3C013F40 */  lui         $at, (0x3F400000 >> 16)
/* E2E468 8019ED38 44811000 */  mtc1        $at, $fv1
/* E2E46C 8019ED3C C6120114 */  lwc1        $ft5, 0x114($s0)
/* E2E470 8019ED40 3C01801C */  lui         $at, %hi(D_E16C50_801C14F0)
/* E2E474 8019ED44 C42C14F0 */  lwc1        $fa0, %lo(D_E16C50_801C14F0)($at)
/* E2E478 8019ED48 46029102 */  mul.s       $ft0, $ft5, $fv1
/* E2E47C 8019ED4C 8C490000 */  lw          $t1, 0x0($v0)
/* E2E480 8019ED50 3C01801C */  lui         $at, %hi(D_E16C50_801C14F4)
/* E2E484 8019ED54 C42E14F4 */  lwc1        $fa1, %lo(D_E16C50_801C14F4)($at)
/* E2E488 8019ED58 3C01801C */  lui         $at, %hi(D_E16C50_801C14F8)
/* E2E48C 8019ED5C 000A5880 */  sll         $t3, $t2, 2
/* E2E490 8019ED60 C43014F8 */  lwc1        $ft4, %lo(D_E16C50_801C14F8)($at)
/* E2E494 8019ED64 012B6021 */  addu        $t4, $t1, $t3
/* E2E498 8019ED68 E5840010 */  swc1        $ft0, 0x10($t4)
/* E2E49C 8019ED6C C6060114 */  lwc1        $ft1, 0x114($s0)
/* E2E4A0 8019ED70 8C4D0000 */  lw          $t5, 0x0($v0)
/* E2E4A4 8019ED74 000A7080 */  sll         $t6, $t2, 2
/* E2E4A8 8019ED78 46023202 */  mul.s       $ft2, $ft1, $fv1
/* E2E4AC 8019ED7C 01AE4021 */  addu        $t0, $t5, $t6
/* E2E4B0 8019ED80 000AC080 */  sll         $t8, $t2, 2
/* E2E4B4 8019ED84 3C01801C */  lui         $at, %hi(D_E16C50_801C14FC)
/* E2E4B8 8019ED88 E508FFF0 */  swc1        $ft2, -0x10($t0)
/* E2E4BC 8019ED8C C60A0114 */  lwc1        $ft3, 0x114($s0)
/* E2E4C0 8019ED90 8C4F0000 */  lw          $t7, 0x0($v0)
/* E2E4C4 8019ED94 460C5482 */  mul.s       $ft5, $ft3, $fa0
/* E2E4C8 8019ED98 01F8C821 */  addu        $t9, $t7, $t8
/* E2E4CC 8019ED9C E7320014 */  swc1        $ft5, 0x14($t9)
/* E2E4D0 8019EDA0 C6040114 */  lwc1        $ft0, 0x114($s0)
/* E2E4D4 8019EDA4 8C490000 */  lw          $t1, 0x0($v0)
/* E2E4D8 8019EDA8 460C2182 */  mul.s       $ft1, $ft0, $fa0
/* E2E4DC 8019EDAC 012B6021 */  addu        $t4, $t1, $t3
/* E2E4E0 8019EDB0 E586FFEC */  swc1        $ft1, -0x14($t4)
/* E2E4E4 8019EDB4 C6080114 */  lwc1        $ft2, 0x114($s0)
/* E2E4E8 8019EDB8 8C4D0000 */  lw          $t5, 0x0($v0)
/* E2E4EC 8019EDBC 46004282 */  mul.s       $ft3, $ft2, $fv0
/* E2E4F0 8019EDC0 01AE4021 */  addu        $t0, $t5, $t6
/* E2E4F4 8019EDC4 E50A0018 */  swc1        $ft3, 0x18($t0)
/* E2E4F8 8019EDC8 C6120114 */  lwc1        $ft5, 0x114($s0)
/* E2E4FC 8019EDCC 8C4F0000 */  lw          $t7, 0x0($v0)
/* E2E500 8019EDD0 46009102 */  mul.s       $ft0, $ft5, $fv0
/* E2E504 8019EDD4 01F8C821 */  addu        $t9, $t7, $t8
/* E2E508 8019EDD8 E724FFE8 */  swc1        $ft0, -0x18($t9)
/* E2E50C 8019EDDC C6060114 */  lwc1        $ft1, 0x114($s0)
/* E2E510 8019EDE0 8C490000 */  lw          $t1, 0x0($v0)
/* E2E514 8019EDE4 460E3202 */  mul.s       $ft2, $ft1, $fa1
/* E2E518 8019EDE8 012B6021 */  addu        $t4, $t1, $t3
/* E2E51C 8019EDEC E588001C */  swc1        $ft2, 0x1C($t4)
/* E2E520 8019EDF0 C60A0114 */  lwc1        $ft3, 0x114($s0)
/* E2E524 8019EDF4 8C4D0000 */  lw          $t5, 0x0($v0)
/* E2E528 8019EDF8 460E5482 */  mul.s       $ft5, $ft3, $fa1
/* E2E52C 8019EDFC 01AE4021 */  addu        $t0, $t5, $t6
/* E2E530 8019EE00 E512FFE4 */  swc1        $ft5, -0x1C($t0)
/* E2E534 8019EE04 C6040114 */  lwc1        $ft0, 0x114($s0)
/* E2E538 8019EE08 8C4F0000 */  lw          $t7, 0x0($v0)
/* E2E53C 8019EE0C 46102182 */  mul.s       $ft1, $ft0, $ft4
/* E2E540 8019EE10 01F8C821 */  addu        $t9, $t7, $t8
/* E2E544 8019EE14 E7260020 */  swc1        $ft1, 0x20($t9)
/* E2E548 8019EE18 C6080114 */  lwc1        $ft2, 0x114($s0)
/* E2E54C 8019EE1C 8C490000 */  lw          $t1, 0x0($v0)
/* E2E550 8019EE20 46104282 */  mul.s       $ft3, $ft2, $ft4
/* E2E554 8019EE24 012B6021 */  addu        $t4, $t1, $t3
/* E2E558 8019EE28 E58AFFE0 */  swc1        $ft3, -0x20($t4)
/* E2E55C 8019EE2C C42014FC */  lwc1        $fv0, %lo(D_E16C50_801C14FC)($at)
/* E2E560 8019EE30 C6120114 */  lwc1        $ft5, 0x114($s0)
/* E2E564 8019EE34 3C01801C */  lui         $at, %hi(D_E16C50_801C1500)
/* E2E568 8019EE38 C4221500 */  lwc1        $fv1, %lo(D_E16C50_801C1500)($at)
/* E2E56C 8019EE3C 46009102 */  mul.s       $ft0, $ft5, $fv0
/* E2E570 8019EE40 8C4D0000 */  lw          $t5, 0x0($v0)
/* E2E574 8019EE44 3C01801C */  lui         $at, %hi(D_E16C50_801C1504)
/* E2E578 8019EE48 C42C1504 */  lwc1        $fa0, %lo(D_E16C50_801C1504)($at)
/* E2E57C 8019EE4C 3C01801C */  lui         $at, %hi(D_E16C50_801C1508)
/* E2E580 8019EE50 C42E1508 */  lwc1        $fa1, %lo(D_E16C50_801C1508)($at)
/* E2E584 8019EE54 01AE4021 */  addu        $t0, $t5, $t6
/* E2E588 8019EE58 E5040024 */  swc1        $ft0, 0x24($t0)
/* E2E58C 8019EE5C C6060114 */  lwc1        $ft1, 0x114($s0)
/* E2E590 8019EE60 8C4F0000 */  lw          $t7, 0x0($v0)
/* E2E594 8019EE64 46003202 */  mul.s       $ft2, $ft1, $fv0
/* E2E598 8019EE68 01F8C821 */  addu        $t9, $t7, $t8
/* E2E59C 8019EE6C E728FFDC */  swc1        $ft2, -0x24($t9)
/* E2E5A0 8019EE70 C60A0114 */  lwc1        $ft3, 0x114($s0)
/* E2E5A4 8019EE74 8C490000 */  lw          $t1, 0x0($v0)
/* E2E5A8 8019EE78 46025482 */  mul.s       $ft5, $ft3, $fv1
/* E2E5AC 8019EE7C 012B6021 */  addu        $t4, $t1, $t3
/* E2E5B0 8019EE80 E5920028 */  swc1        $ft5, 0x28($t4)
/* E2E5B4 8019EE84 C6040114 */  lwc1        $ft0, 0x114($s0)
/* E2E5B8 8019EE88 8C4D0000 */  lw          $t5, 0x0($v0)
/* E2E5BC 8019EE8C 46022182 */  mul.s       $ft1, $ft0, $fv1
/* E2E5C0 8019EE90 01AE4021 */  addu        $t0, $t5, $t6
/* E2E5C4 8019EE94 E506FFD8 */  swc1        $ft1, -0x28($t0)
/* E2E5C8 8019EE98 C6080114 */  lwc1        $ft2, 0x114($s0)
/* E2E5CC 8019EE9C 8C4F0000 */  lw          $t7, 0x0($v0)
/* E2E5D0 8019EEA0 460C4282 */  mul.s       $ft3, $ft2, $fa0
/* E2E5D4 8019EEA4 01F8C821 */  addu        $t9, $t7, $t8
/* E2E5D8 8019EEA8 E72A002C */  swc1        $ft3, 0x2C($t9)
/* E2E5DC 8019EEAC C6120114 */  lwc1        $ft5, 0x114($s0)
/* E2E5E0 8019EEB0 8C490000 */  lw          $t1, 0x0($v0)
/* E2E5E4 8019EEB4 460C9102 */  mul.s       $ft0, $ft5, $fa0
/* E2E5E8 8019EEB8 012B6021 */  addu        $t4, $t1, $t3
/* E2E5EC 8019EEBC E584FFD4 */  swc1        $ft0, -0x2C($t4)
/* E2E5F0 8019EEC0 C6060114 */  lwc1        $ft1, 0x114($s0)
/* E2E5F4 8019EEC4 8C4D0000 */  lw          $t5, 0x0($v0)
/* E2E5F8 8019EEC8 460E3202 */  mul.s       $ft2, $ft1, $fa1
/* E2E5FC 8019EECC 01AE4021 */  addu        $t0, $t5, $t6
/* E2E600 8019EED0 E5080030 */  swc1        $ft2, 0x30($t0)
/* E2E604 8019EED4 C60A0114 */  lwc1        $ft3, 0x114($s0)
/* E2E608 8019EED8 8C4F0000 */  lw          $t7, 0x0($v0)
/* E2E60C 8019EEDC 460E5482 */  mul.s       $ft5, $ft3, $fa1
/* E2E610 8019EEE0 01F8C821 */  addu        $t9, $t7, $t8
/* E2E614 8019EEE4 E732FFD0 */  swc1        $ft5, -0x30($t9)
.LE16C50_8019EEE8:
/* E2E618 8019EEE8 820200D0 */  lb          $v0, 0xD0($s0)
/* E2E61C 8019EEEC 24010002 */  addiu       $at, $zero, 0x2
/* E2E620 8019EEF0 10410007 */  beq         $v0, $at, .LE16C50_8019EF10
/* E2E624 8019EEF4 24010003 */   addiu      $at, $zero, 0x3
/* E2E628 8019EEF8 14410008 */  bne         $v0, $at, .LE16C50_8019EF1C
/* E2E62C 8019EEFC 26040004 */   addiu      $a0, $s0, 0x4
/* E2E630 8019EF00 3C051100 */  lui         $a1, (0x11002052 >> 16)
/* E2E634 8019EF04 34A52052 */  ori         $a1, $a1, (0x11002052 & 0xFFFF)
/* E2E638 8019EF08 0C06A36E */  jal         func_E16C50_801A8DB8
/* E2E63C 8019EF0C 8E0600F0 */   lw         $a2, 0xF0($s0)
.LE16C50_8019EF10:
/* E2E640 8019EF10 02002025 */  or          $a0, $s0, $zero
/* E2E644 8019EF14 0C0183EF */  jal         Object_Kill
/* E2E648 8019EF18 26050100 */   addiu      $a1, $s0, 0x100
.LE16C50_8019EF1C:
/* E2E64C 8019EF1C 8FBF0024 */  lw          $ra, 0x24($sp)
/* E2E650 8019EF20 8FB00020 */  lw          $s0, 0x20($sp)
/* E2E654 8019EF24 27BD0038 */  addiu       $sp, $sp, 0x38
/* E2E658 8019EF28 03E00008 */  jr          $ra
/* E2E65C 8019EF2C 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C150C
/* E50C3C 801C150C 3DCCCCCD */ .float 0.1000000015


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8019EF30
/* E2E660 8019EF30 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E2E664 8019EF34 AFB00020 */  sw          $s0, 0x20($sp)
/* E2E668 8019EF38 00808025 */  or          $s0, $a0, $zero
/* E2E66C 8019EF3C AFBF0024 */  sw          $ra, 0x24($sp)
/* E2E670 8019EF40 AFA5002C */  sw          $a1, 0x2C($sp)
/* E2E674 8019EF44 AFA60030 */  sw          $a2, 0x30($sp)
/* E2E678 8019EF48 AFA70034 */  sw          $a3, 0x34($sp)
/* E2E67C 8019EF4C 0C0184F1 */  jal         Object_2F4_Initialize
/* E2E680 8019EF50 02002025 */   or         $a0, $s0, $zero
/* E2E684 8019EF54 240E0002 */  addiu       $t6, $zero, 0x2
/* E2E688 8019EF58 240F0113 */  addiu       $t7, $zero, 0x113
/* E2E68C 8019EF5C A20E0000 */  sb          $t6, 0x0($s0)
/* E2E690 8019EF60 0C0013AC */  jal         Rand_ZeroOne
/* E2E694 8019EF64 A60F0002 */   sh         $t7, 0x2($s0)
/* E2E698 8019EF68 3C01801C */  lui         $at, %hi(D_E16C50_801C150C)
/* E2E69C 8019EF6C C424150C */  lwc1        $ft0, %lo(D_E16C50_801C150C)($at)
/* E2E6A0 8019EF70 24180114 */  addiu       $t8, $zero, 0x114
/* E2E6A4 8019EF74 4604003C */  c.lt.s      $fv0, $ft0
/* E2E6A8 8019EF78 00000000 */  nop
/* E2E6AC 8019EF7C 45020003 */  bc1fl       .LE16C50_8019EF8C
/* E2E6B0 8019EF80 C7A6002C */   lwc1       $ft1, 0x2C($sp)
/* E2E6B4 8019EF84 A6180002 */  sh          $t8, 0x2($s0)
/* E2E6B8 8019EF88 C7A6002C */  lwc1        $ft1, 0x2C($sp)
.LE16C50_8019EF8C:
/* E2E6BC 8019EF8C E6060004 */  swc1        $ft1, 0x4($s0)
/* E2E6C0 8019EF90 C7A80030 */  lwc1        $ft2, 0x30($sp)
/* E2E6C4 8019EF94 E6080008 */  swc1        $ft2, 0x8($s0)
/* E2E6C8 8019EF98 C7AA0034 */  lwc1        $ft3, 0x34($sp)
/* E2E6CC 8019EF9C 0C0013AC */  jal         Rand_ZeroOne
/* E2E6D0 8019EFA0 E60A000C */   swc1       $ft3, 0xC($s0)
/* E2E6D4 8019EFA4 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E2E6D8 8019EFA8 44818000 */  mtc1        $at, $ft4
/* E2E6DC 8019EFAC 24190002 */  addiu       $t9, $zero, 0x2
/* E2E6E0 8019EFB0 24080008 */  addiu       $t0, $zero, 0x8
/* E2E6E4 8019EFB4 46100482 */  mul.s       $ft5, $fv0, $ft4
/* E2E6E8 8019EFB8 2604001C */  addiu       $a0, $s0, 0x1C
/* E2E6EC 8019EFBC 96050002 */  lhu         $a1, 0x2($s0)
/* E2E6F0 8019EFC0 E61200F4 */  swc1        $ft5, 0xF4($s0)
/* E2E6F4 8019EFC4 C7A40038 */  lwc1        $ft0, 0x38($sp)
/* E2E6F8 8019EFC8 E60400E8 */  swc1        $ft0, 0xE8($s0)
/* E2E6FC 8019EFCC C7A6003C */  lwc1        $ft1, 0x3C($sp)
/* E2E700 8019EFD0 E60600EC */  swc1        $ft1, 0xEC($s0)
/* E2E704 8019EFD4 C7A80040 */  lwc1        $ft2, 0x40($sp)
/* E2E708 8019EFD8 A61900B8 */  sh          $t9, 0xB8($s0)
/* E2E70C 8019EFDC A60800C2 */  sh          $t0, 0xC2($s0)
/* E2E710 8019EFE0 0C0184AE */  jal         Object_SetInfo
/* E2E714 8019EFE4 E60800F0 */   swc1       $ft2, 0xF0($s0)
/* E2E718 8019EFE8 3C098018 */  lui         $t1, %hi(D_80178284)
/* E2E71C 8019EFEC 8D298284 */  lw          $t1, %lo(D_80178284)($t1)
/* E2E720 8019EFF0 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E2E724 8019EFF4 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E2E728 8019EFF8 11200002 */  beqz        $t1, .LE16C50_8019F004
/* E2E72C 8019EFFC 3C042900 */   lui        $a0, (0x29000071 >> 16)
/* E2E730 8019F000 A200003C */  sb          $zero, 0x3C($s0)
.LE16C50_8019F004:
/* E2E734 8019F004 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E2E738 8019F008 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E2E73C 8019F00C AFAA0014 */  sw          $t2, 0x14($sp)
/* E2E740 8019F010 34840071 */  ori         $a0, $a0, (0x29000071 & 0xFFFF)
/* E2E744 8019F014 26050100 */  addiu       $a1, $s0, 0x100
/* E2E748 8019F018 00003025 */  or          $a2, $zero, $zero
/* E2E74C 8019F01C 0C006486 */  jal         Audio_PlaySfx
/* E2E750 8019F020 AFA70010 */   sw         $a3, 0x10($sp)
/* E2E754 8019F024 8FBF0024 */  lw          $ra, 0x24($sp)
/* E2E758 8019F028 8FB00020 */  lw          $s0, 0x20($sp)
/* E2E75C 8019F02C 27BD0028 */  addiu       $sp, $sp, 0x28
/* E2E760 8019F030 03E00008 */  jr          $ra
/* E2E764 8019F034 00000000 */   nop
glabel func_E16C50_8019F038
/* E2E768 8019F038 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E2E76C 8019F03C AFBF0024 */  sw          $ra, 0x24($sp)
/* E2E770 8019F040 AFA60030 */  sw          $a2, 0x30($sp)
/* E2E774 8019F044 AFA70034 */  sw          $a3, 0x34($sp)
/* E2E778 8019F048 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xBD0)
/* E2E77C 8019F04C 3C028017 */  lui         $v0, %hi(gObjects408)
/* E2E780 8019F050 2442F110 */  addiu       $v0, $v0, %lo(gObjects408)
/* E2E784 8019F054 24844BB0 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0xBD0)
/* E2E788 8019F058 908E0000 */  lbu         $t6, 0x0($a0)
.LE16C50_8019F05C:
/* E2E78C 8019F05C 55C0000E */  bnel        $t6, $zero, .LE16C50_8019F098
/* E2E790 8019F060 248402F4 */   addiu      $a0, $a0, 0x2F4
/* E2E794 8019F064 C7A40034 */  lwc1        $ft0, 0x34($sp)
/* E2E798 8019F068 C7A60038 */  lwc1        $ft1, 0x38($sp)
/* E2E79C 8019F06C C7A8003C */  lwc1        $ft2, 0x3C($sp)
/* E2E7A0 8019F070 44056000 */  mfc1        $a1, $fa0
/* E2E7A4 8019F074 44067000 */  mfc1        $a2, $fa1
/* E2E7A8 8019F078 8FA70030 */  lw          $a3, 0x30($sp)
/* E2E7AC 8019F07C E7A40010 */  swc1        $ft0, 0x10($sp)
/* E2E7B0 8019F080 E7A60014 */  swc1        $ft1, 0x14($sp)
/* E2E7B4 8019F084 0C067BCC */  jal         func_E16C50_8019EF30
/* E2E7B8 8019F088 E7A80018 */   swc1       $ft2, 0x18($sp)
/* E2E7BC 8019F08C 10000005 */  b           .LE16C50_8019F0A4
/* E2E7C0 8019F090 8FBF0024 */   lw         $ra, 0x24($sp)
/* E2E7C4 8019F094 248402F4 */  addiu       $a0, $a0, 0x2F4
.LE16C50_8019F098:
/* E2E7C8 8019F098 5482FFF0 */  bnel        $a0, $v0, .LE16C50_8019F05C
/* E2E7CC 8019F09C 908E0000 */   lbu        $t6, 0x0($a0)
/* E2E7D0 8019F0A0 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_8019F0A4:
/* E2E7D4 8019F0A4 27BD0028 */  addiu       $sp, $sp, 0x28
/* E2E7D8 8019F0A8 03E00008 */  jr          $ra
/* E2E7DC 8019F0AC 00000000 */   nop
glabel func_E16C50_8019F0B0
/* E2E7E0 8019F0B0 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E2E7E4 8019F0B4 AFB00020 */  sw          $s0, 0x20($sp)
/* E2E7E8 8019F0B8 00808025 */  or          $s0, $a0, $zero
/* E2E7EC 8019F0BC AFBF0024 */  sw          $ra, 0x24($sp)
/* E2E7F0 8019F0C0 AFA5002C */  sw          $a1, 0x2C($sp)
/* E2E7F4 8019F0C4 AFA60030 */  sw          $a2, 0x30($sp)
/* E2E7F8 8019F0C8 AFA70034 */  sw          $a3, 0x34($sp)
/* E2E7FC 8019F0CC 0C0184F1 */  jal         Object_2F4_Initialize
/* E2E800 8019F0D0 02002025 */   or         $a0, $s0, $zero
/* E2E804 8019F0D4 240E0002 */  addiu       $t6, $zero, 0x2
/* E2E808 8019F0D8 240F0115 */  addiu       $t7, $zero, 0x115
/* E2E80C 8019F0DC A20E0000 */  sb          $t6, 0x0($s0)
/* E2E810 8019F0E0 A60F0002 */  sh          $t7, 0x2($s0)
/* E2E814 8019F0E4 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E2E818 8019F0E8 E6040004 */  swc1        $ft0, 0x4($s0)
/* E2E81C 8019F0EC C7A60030 */  lwc1        $ft1, 0x30($sp)
/* E2E820 8019F0F0 E6060008 */  swc1        $ft1, 0x8($s0)
/* E2E824 8019F0F4 C7A80034 */  lwc1        $ft2, 0x34($sp)
/* E2E828 8019F0F8 0C0013AC */  jal         Rand_ZeroOne
/* E2E82C 8019F0FC E608000C */   swc1       $ft2, 0xC($s0)
/* E2E830 8019F100 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E2E834 8019F104 44815000 */  mtc1        $at, $ft3
/* E2E838 8019F108 24180002 */  addiu       $t8, $zero, 0x2
/* E2E83C 8019F10C 24190008 */  addiu       $t9, $zero, 0x8
/* E2E840 8019F110 460A0402 */  mul.s       $ft4, $fv0, $ft3
/* E2E844 8019F114 2604001C */  addiu       $a0, $s0, 0x1C
/* E2E848 8019F118 96050002 */  lhu         $a1, 0x2($s0)
/* E2E84C 8019F11C E61000F4 */  swc1        $ft4, 0xF4($s0)
/* E2E850 8019F120 C7B20038 */  lwc1        $ft5, 0x38($sp)
/* E2E854 8019F124 E61200E8 */  swc1        $ft5, 0xE8($s0)
/* E2E858 8019F128 C7A4003C */  lwc1        $ft0, 0x3C($sp)
/* E2E85C 8019F12C E60400EC */  swc1        $ft0, 0xEC($s0)
/* E2E860 8019F130 C7A60040 */  lwc1        $ft1, 0x40($sp)
/* E2E864 8019F134 A61800B8 */  sh          $t8, 0xB8($s0)
/* E2E868 8019F138 A61900C2 */  sh          $t9, 0xC2($s0)
/* E2E86C 8019F13C 0C0184AE */  jal         Object_SetInfo
/* E2E870 8019F140 E60600F0 */   swc1       $ft1, 0xF0($s0)
/* E2E874 8019F144 3C088018 */  lui         $t0, %hi(D_80178284)
/* E2E878 8019F148 8D088284 */  lw          $t0, %lo(D_80178284)($t0)
/* E2E87C 8019F14C 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E2E880 8019F150 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E2E884 8019F154 11000002 */  beqz        $t0, .LE16C50_8019F160
/* E2E888 8019F158 3C042900 */   lui        $a0, (0x29000071 >> 16)
/* E2E88C 8019F15C A200003C */  sb          $zero, 0x3C($s0)
.LE16C50_8019F160:
/* E2E890 8019F160 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E2E894 8019F164 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E2E898 8019F168 AFA90014 */  sw          $t1, 0x14($sp)
/* E2E89C 8019F16C 34840071 */  ori         $a0, $a0, (0x29000071 & 0xFFFF)
/* E2E8A0 8019F170 26050100 */  addiu       $a1, $s0, 0x100
/* E2E8A4 8019F174 00003025 */  or          $a2, $zero, $zero
/* E2E8A8 8019F178 0C006486 */  jal         Audio_PlaySfx
/* E2E8AC 8019F17C AFA70010 */   sw         $a3, 0x10($sp)
/* E2E8B0 8019F180 8FBF0024 */  lw          $ra, 0x24($sp)
/* E2E8B4 8019F184 8FB00020 */  lw          $s0, 0x20($sp)
/* E2E8B8 8019F188 27BD0028 */  addiu       $sp, $sp, 0x28
/* E2E8BC 8019F18C 03E00008 */  jr          $ra
/* E2E8C0 8019F190 00000000 */   nop
glabel func_E16C50_8019F194
/* E2E8C4 8019F194 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E2E8C8 8019F198 AFBF0024 */  sw          $ra, 0x24($sp)
/* E2E8CC 8019F19C AFA60030 */  sw          $a2, 0x30($sp)
/* E2E8D0 8019F1A0 AFA70034 */  sw          $a3, 0x34($sp)
/* E2E8D4 8019F1A4 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xBD0)
/* E2E8D8 8019F1A8 3C028017 */  lui         $v0, %hi(gObjects408)
/* E2E8DC 8019F1AC 2442F110 */  addiu       $v0, $v0, %lo(gObjects408)
/* E2E8E0 8019F1B0 24844BB0 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0xBD0)
/* E2E8E4 8019F1B4 908E0000 */  lbu         $t6, 0x0($a0)
.LE16C50_8019F1B8:
/* E2E8E8 8019F1B8 55C0000E */  bnel        $t6, $zero, .LE16C50_8019F1F4
/* E2E8EC 8019F1BC 248402F4 */   addiu      $a0, $a0, 0x2F4
/* E2E8F0 8019F1C0 C7A40034 */  lwc1        $ft0, 0x34($sp)
/* E2E8F4 8019F1C4 C7A60038 */  lwc1        $ft1, 0x38($sp)
/* E2E8F8 8019F1C8 C7A8003C */  lwc1        $ft2, 0x3C($sp)
/* E2E8FC 8019F1CC 44056000 */  mfc1        $a1, $fa0
/* E2E900 8019F1D0 44067000 */  mfc1        $a2, $fa1
/* E2E904 8019F1D4 8FA70030 */  lw          $a3, 0x30($sp)
/* E2E908 8019F1D8 E7A40010 */  swc1        $ft0, 0x10($sp)
/* E2E90C 8019F1DC E7A60014 */  swc1        $ft1, 0x14($sp)
/* E2E910 8019F1E0 0C067C2C */  jal         func_E16C50_8019F0B0
/* E2E914 8019F1E4 E7A80018 */   swc1       $ft2, 0x18($sp)
/* E2E918 8019F1E8 10000005 */  b           .LE16C50_8019F200
/* E2E91C 8019F1EC 8FBF0024 */   lw         $ra, 0x24($sp)
/* E2E920 8019F1F0 248402F4 */  addiu       $a0, $a0, 0x2F4
.LE16C50_8019F1F4:
/* E2E924 8019F1F4 5482FFF0 */  bnel        $a0, $v0, .LE16C50_8019F1B8
/* E2E928 8019F1F8 908E0000 */   lbu        $t6, 0x0($a0)
/* E2E92C 8019F1FC 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_8019F200:
/* E2E930 8019F200 27BD0028 */  addiu       $sp, $sp, 0x28
/* E2E934 8019F204 03E00008 */  jr          $ra
/* E2E938 8019F208 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C1510
/* E50C40 801C1510 40D33333 */ .float 6.599999905

dlabel D_E16C50_801C1514
/* E50C44 801C1514 40533333 */ .float 3.299999952

dlabel D_E16C50_801C1518
/* E50C48 801C1518 3D4CCCCD */ .float 0.05000000075

dlabel D_E16C50_801C151C
/* E50C4C 801C151C 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C1520
/* E50C50 801C1520 40490FDB */ .float 3.141592741


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8019F20C
/* E2E93C 8019F20C 27BDFF70 */  addiu       $sp, $sp, -0x90
/* E2E940 8019F210 F7BE0050 */  sdc1        $fs5, 0x50($sp)
/* E2E944 8019F214 AFB20060 */  sw          $s2, 0x60($sp)
/* E2E948 8019F218 4480F000 */  mtc1        $zero, $fs5
/* E2E94C 8019F21C 00809025 */  or          $s2, $a0, $zero
/* E2E950 8019F220 AFBF0064 */  sw          $ra, 0x64($sp)
/* E2E954 8019F224 AFB1005C */  sw          $s1, 0x5C($sp)
/* E2E958 8019F228 AFB00058 */  sw          $s0, 0x58($sp)
/* E2E95C 8019F22C F7BC0048 */  sdc1        $fs4, 0x48($sp)
/* E2E960 8019F230 F7BA0040 */  sdc1        $fs3, 0x40($sp)
/* E2E964 8019F234 F7B80038 */  sdc1        $fs2, 0x38($sp)
/* E2E968 8019F238 F7B60030 */  sdc1        $fs1, 0x30($sp)
/* E2E96C 8019F23C F7B40028 */  sdc1        $fs0, 0x28($sp)
/* E2E970 8019F240 E7BE008C */  swc1        $fs5, 0x8C($sp)
/* E2E974 8019F244 96420002 */  lhu         $v0, 0x2($s2)
/* E2E978 8019F248 24010115 */  addiu       $at, $zero, 0x115
/* E2E97C 8019F24C 14410004 */  bne         $v0, $at, .LE16C50_8019F260
/* E2E980 8019F250 3C014000 */   lui        $at, (0x40000000 >> 16)
/* E2E984 8019F254 44812000 */  mtc1        $at, $ft0
/* E2E988 8019F258 96420002 */  lhu         $v0, 0x2($s2)
/* E2E98C 8019F25C E6440110 */  swc1        $ft0, 0x110($s2)
.LE16C50_8019F260:
/* E2E990 8019F260 24010114 */  addiu       $at, $zero, 0x114
/* E2E994 8019F264 1441000B */  bne         $v0, $at, .LE16C50_8019F294
/* E2E998 8019F268 3C01801C */   lui        $at, %hi(D_E16C50_801C1510)
/* E2E99C 8019F26C C4281510 */  lwc1        $ft2, %lo(D_E16C50_801C1510)($at)
/* E2E9A0 8019F270 3C014080 */  lui         $at, (0x40800000 >> 16)
/* E2E9A4 8019F274 C64600F4 */  lwc1        $ft1, 0xF4($s2)
/* E2E9A8 8019F278 44819000 */  mtc1        $at, $ft5
/* E2E9AC 8019F27C C65000F8 */  lwc1        $ft4, 0xF8($s2)
/* E2E9B0 8019F280 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E2E9B4 8019F284 46128101 */  sub.s       $ft0, $ft4, $ft5
/* E2E9B8 8019F288 E64A00F4 */  swc1        $ft3, 0xF4($s2)
/* E2E9BC 8019F28C 1000000B */  b           .LE16C50_8019F2BC
/* E2E9C0 8019F290 E64400F8 */   swc1       $ft0, 0xF8($s2)
.LE16C50_8019F294:
/* E2E9C4 8019F294 3C01801C */  lui         $at, %hi(D_E16C50_801C1514)
/* E2E9C8 8019F298 C4281514 */  lwc1        $ft2, %lo(D_E16C50_801C1514)($at)
/* E2E9CC 8019F29C 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E2E9D0 8019F2A0 C64600F4 */  lwc1        $ft1, 0xF4($s2)
/* E2E9D4 8019F2A4 44819000 */  mtc1        $at, $ft5
/* E2E9D8 8019F2A8 C65000F8 */  lwc1        $ft4, 0xF8($s2)
/* E2E9DC 8019F2AC 46083280 */  add.s       $ft3, $ft1, $ft2
/* E2E9E0 8019F2B0 46128100 */  add.s       $ft0, $ft4, $ft5
/* E2E9E4 8019F2B4 E64A00F4 */  swc1        $ft3, 0xF4($s2)
/* E2E9E8 8019F2B8 E64400F8 */  swc1        $ft0, 0xF8($s2)
.LE16C50_8019F2BC:
/* E2E9EC 8019F2BC 864200B8 */  lh          $v0, 0xB8($s2)
/* E2E9F0 8019F2C0 3C01801C */  lui         $at, %hi(D_E16C50_801C1518)
/* E2E9F4 8019F2C4 50400009 */  beql        $v0, $zero, .LE16C50_8019F2EC
/* E2E9F8 8019F2C8 C6460008 */   lwc1       $ft1, 0x8($s2)
/* E2E9FC 8019F2CC 24010001 */  addiu       $at, $zero, 0x1
/* E2EA00 8019F2D0 1041000C */  beq         $v0, $at, .LE16C50_8019F304
/* E2EA04 8019F2D4 24010002 */   addiu      $at, $zero, 0x2
/* E2EA08 8019F2D8 10410045 */  beq         $v0, $at, .LE16C50_8019F3F0
/* E2EA0C 8019F2DC 27A4008C */   addiu      $a0, $sp, 0x8C
/* E2EA10 8019F2E0 10000108 */  b           .LE16C50_8019F704
/* E2EA14 8019F2E4 00000000 */   nop
/* E2EA18 8019F2E8 C6460008 */  lwc1        $ft1, 0x8($s2)
.LE16C50_8019F2EC:
/* E2EA1C 8019F2EC C4281518 */  lwc1        $ft2, %lo(D_E16C50_801C1518)($at)
/* E2EA20 8019F2F0 3C01C2C8 */  lui         $at, (0xC2C80000 >> 16)
/* E2EA24 8019F2F4 44818000 */  mtc1        $at, $ft4
/* E2EA28 8019F2F8 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E2EA2C 8019F2FC E6500008 */  swc1        $ft4, 0x8($s2)
/* E2EA30 8019F300 E64A0114 */  swc1        $ft3, 0x114($s2)
.LE16C50_8019F304:
/* E2EA34 8019F304 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E2EA38 8019F308 44813000 */  mtc1        $at, $ft1
/* E2EA3C 8019F30C C6440008 */  lwc1        $ft0, 0x8($s2)
/* E2EA40 8019F310 C6520114 */  lwc1        $ft5, 0x114($s2)
/* E2EA44 8019F314 C64A000C */  lwc1        $ft3, 0xC($s2)
/* E2EA48 8019F318 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E2EA4C 8019F31C 240E0002 */  addiu       $t6, $zero, 0x2
/* E2EA50 8019F320 A64E00B8 */  sh          $t6, 0xB8($s2)
/* E2EA54 8019F324 8E460004 */  lw          $a2, 0x4($s2)
/* E2EA58 8019F328 44074000 */  mfc1        $a3, $ft2
/* E2EA5C 8019F32C E65200EC */  swc1        $ft5, 0xEC($s2)
/* E2EA60 8019F330 27A4008C */  addiu       $a0, $sp, 0x8C
/* E2EA64 8019F334 27A50088 */  addiu       $a1, $sp, 0x88
/* E2EA68 8019F338 0C029CF9 */  jal         func_800A73E4
/* E2EA6C 8019F33C E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E2EA70 8019F340 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E2EA74 8019F344 C7B0008C */  lwc1        $ft4, 0x8C($sp)
/* E2EA78 8019F348 4481D000 */  mtc1        $at, $fs3
/* E2EA7C 8019F34C 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E2EA80 8019F350 3C10801C */  lui         $s0, %hi(D_E16C50_801BF8E0)
/* E2EA84 8019F354 3C11801C */  lui         $s1, %hi(D_E16C50_801BF8F0)
/* E2EA88 8019F358 4481A000 */  mtc1        $at, $fs0
/* E2EA8C 8019F35C 2631F8F0 */  addiu       $s1, $s1, %lo(D_E16C50_801BF8F0)
/* E2EA90 8019F360 2610F8E0 */  addiu       $s0, $s0, %lo(D_E16C50_801BF8E0)
/* E2EA94 8019F364 E6500008 */  swc1        $ft4, 0x8($s2)
.LE16C50_8019F368:
/* E2EA98 8019F368 0C0013AC */  jal         Rand_ZeroOne
/* E2EA9C 8019F36C 00000000 */   nop
/* E2EAA0 8019F370 461A0482 */  mul.s       $ft5, $fv0, $fs3
/* E2EAA4 8019F374 C64C0004 */  lwc1        $fa0, 0x4($s2)
/* E2EAA8 8019F378 C64E0008 */  lwc1        $fa1, 0x8($s2)
/* E2EAAC 8019F37C 8E46000C */  lw          $a2, 0xC($s2)
/* E2EAB0 8019F380 E7BE0014 */  swc1        $fs5, 0x14($sp)
/* E2EAB4 8019F384 240F0001 */  addiu       $t7, $zero, 0x1
/* E2EAB8 8019F388 8E070000 */  lw          $a3, 0x0($s0)
/* E2EABC 8019F38C 461A9100 */  add.s       $ft0, $ft5, $fs3
/* E2EAC0 8019F390 E7A40010 */  swc1        $ft0, 0x10($sp)
/* E2EAC4 8019F394 C6460110 */  lwc1        $ft1, 0x110($s2)
/* E2EAC8 8019F398 AFAF001C */  sw          $t7, 0x1C($sp)
/* E2EACC 8019F39C 46143202 */  mul.s       $ft2, $ft1, $fs0
/* E2EAD0 8019F3A0 0C067A7D */  jal         func_E16C50_8019E9F4
/* E2EAD4 8019F3A4 E7A80018 */   swc1       $ft2, 0x18($sp)
/* E2EAD8 8019F3A8 26100004 */  addiu       $s0, $s0, 0x4
/* E2EADC 8019F3AC 1611FFEE */  bne         $s0, $s1, .LE16C50_8019F368
/* E2EAE0 8019F3B0 00000000 */   nop
/* E2EAE4 8019F3B4 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E2EAE8 8019F3B8 24180005 */  addiu       $t8, $zero, 0x5
/* E2EAEC 8019F3BC 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E2EAF0 8019F3C0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E2EAF4 8019F3C4 A65800C2 */  sh          $t8, 0xC2($s2)
/* E2EAF8 8019F3C8 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E2EAFC 8019F3CC 3C042900 */  lui         $a0, (0x29000071 >> 16)
/* E2EB00 8019F3D0 34840071 */  ori         $a0, $a0, (0x29000071 & 0xFFFF)
/* E2EB04 8019F3D4 AFB90014 */  sw          $t9, 0x14($sp)
/* E2EB08 8019F3D8 AFA70010 */  sw          $a3, 0x10($sp)
/* E2EB0C 8019F3DC 26450100 */  addiu       $a1, $s2, 0x100
/* E2EB10 8019F3E0 0C006486 */  jal         Audio_PlaySfx
/* E2EB14 8019F3E4 00003025 */   or         $a2, $zero, $zero
/* E2EB18 8019F3E8 100000C6 */  b           .LE16C50_8019F704
/* E2EB1C 8019F3EC 00000000 */   nop
.LE16C50_8019F3F0:
/* E2EB20 8019F3F0 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E2EB24 8019F3F4 4481E000 */  mtc1        $at, $fs4
/* E2EB28 8019F3F8 C64A000C */  lwc1        $ft3, 0xC($s2)
/* E2EB2C 8019F3FC 8E460004 */  lw          $a2, 0x4($s2)
/* E2EB30 8019F400 8E470008 */  lw          $a3, 0x8($s2)
/* E2EB34 8019F404 E65C010C */  swc1        $fs4, 0x10C($s2)
/* E2EB38 8019F408 27A50088 */  addiu       $a1, $sp, 0x88
/* E2EB3C 8019F40C 0C029CF9 */  jal         func_800A73E4
/* E2EB40 8019F410 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E2EB44 8019F414 10400022 */  beqz        $v0, .LE16C50_8019F4A0
/* E2EB48 8019F418 02402025 */   or         $a0, $s2, $zero
/* E2EB4C 8019F41C 0C0183EF */  jal         Object_Kill
/* E2EB50 8019F420 26450100 */   addiu      $a1, $s2, 0x100
/* E2EB54 8019F424 3C052900 */  lui         $a1, (0x29000072 >> 16)
/* E2EB58 8019F428 34A50072 */  ori         $a1, $a1, (0x29000072 & 0xFFFF)
/* E2EB5C 8019F42C 0C01E9BC */  jal         func_8007A6F0
/* E2EB60 8019F430 26440004 */   addiu      $a0, $s2, 0x4
/* E2EB64 8019F434 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E2EB68 8019F438 4481D000 */  mtc1        $at, $fs3
/* E2EB6C 8019F43C 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E2EB70 8019F440 3C10801C */  lui         $s0, %hi(D_E16C50_801BF8E0)
/* E2EB74 8019F444 3C11801C */  lui         $s1, %hi(D_E16C50_801BF8F0)
/* E2EB78 8019F448 4481A000 */  mtc1        $at, $fs0
/* E2EB7C 8019F44C 2631F8F0 */  addiu       $s1, $s1, %lo(D_E16C50_801BF8F0)
/* E2EB80 8019F450 2610F8E0 */  addiu       $s0, $s0, %lo(D_E16C50_801BF8E0)
.LE16C50_8019F454:
/* E2EB84 8019F454 0C0013AC */  jal         Rand_ZeroOne
/* E2EB88 8019F458 00000000 */   nop
/* E2EB8C 8019F45C 461A0402 */  mul.s       $ft4, $fv0, $fs3
/* E2EB90 8019F460 C64C0004 */  lwc1        $fa0, 0x4($s2)
/* E2EB94 8019F464 C64E0008 */  lwc1        $fa1, 0x8($s2)
/* E2EB98 8019F468 8E46000C */  lw          $a2, 0xC($s2)
/* E2EB9C 8019F46C E7BE0014 */  swc1        $fs5, 0x14($sp)
/* E2EBA0 8019F470 24080001 */  addiu       $t0, $zero, 0x1
/* E2EBA4 8019F474 8E070000 */  lw          $a3, 0x0($s0)
/* E2EBA8 8019F478 461A8480 */  add.s       $ft5, $ft4, $fs3
/* E2EBAC 8019F47C E7B20010 */  swc1        $ft5, 0x10($sp)
/* E2EBB0 8019F480 C6440110 */  lwc1        $ft0, 0x110($s2)
/* E2EBB4 8019F484 AFA8001C */  sw          $t0, 0x1C($sp)
/* E2EBB8 8019F488 46142182 */  mul.s       $ft1, $ft0, $fs0
/* E2EBBC 8019F48C 0C067A7D */  jal         func_E16C50_8019E9F4
/* E2EBC0 8019F490 E7A60018 */   swc1       $ft1, 0x18($sp)
/* E2EBC4 8019F494 26100004 */  addiu       $s0, $s0, 0x4
/* E2EBC8 8019F498 1611FFEE */  bne         $s0, $s1, .LE16C50_8019F454
/* E2EBCC 8019F49C 00000000 */   nop
.LE16C50_8019F4A0:
/* E2EBD0 8019F4A0 964900BC */  lhu         $t1, 0xBC($s2)
/* E2EBD4 8019F4A4 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E2EBD8 8019F4A8 4481D000 */  mtc1        $at, $fs3
/* E2EBDC 8019F4AC 15200010 */  bnez        $t1, .LE16C50_8019F4F0
/* E2EBE0 8019F4B0 240A0005 */   addiu      $t2, $zero, 0x5
/* E2EBE4 8019F4B4 A64A00BC */  sh          $t2, 0xBC($s2)
/* E2EBE8 8019F4B8 C64C0004 */  lwc1        $fa0, 0x4($s2)
/* E2EBEC 8019F4BC C64E0008 */  lwc1        $fa1, 0x8($s2)
/* E2EBF0 8019F4C0 8E46000C */  lw          $a2, 0xC($s2)
/* E2EBF4 8019F4C4 E7BE0014 */  swc1        $fs5, 0x14($sp)
/* E2EBF8 8019F4C8 E7BE0010 */  swc1        $fs5, 0x10($sp)
/* E2EBFC 8019F4CC 3C0140D0 */  lui         $at, (0x40D00000 >> 16)
/* E2EC00 8019F4D0 44815000 */  mtc1        $at, $ft3
/* E2EC04 8019F4D4 C6480110 */  lwc1        $ft2, 0x110($s2)
/* E2EC08 8019F4D8 4407F000 */  mfc1        $a3, $fs5
/* E2EC0C 8019F4DC 240B0002 */  addiu       $t3, $zero, 0x2
/* E2EC10 8019F4E0 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E2EC14 8019F4E4 AFAB001C */  sw          $t3, 0x1C($sp)
/* E2EC18 8019F4E8 0C067A7D */  jal         func_E16C50_8019E9F4
/* E2EC1C 8019F4EC E7B00018 */   swc1       $ft4, 0x18($sp)
.LE16C50_8019F4F0:
/* E2EC20 8019F4F0 824C00D0 */  lb          $t4, 0xD0($s2)
/* E2EC24 8019F4F4 5580000A */  bnel        $t4, $zero, .LE16C50_8019F520
/* E2EC28 8019F4F8 3C014080 */   lui        $at, (0x40800000 >> 16)
/* E2EC2C 8019F4FC 964D0002 */  lhu         $t5, 0x2($s2)
/* E2EC30 8019F500 24010115 */  addiu       $at, $zero, 0x115
/* E2EC34 8019F504 15A1007F */  bne         $t5, $at, .LE16C50_8019F704
/* E2EC38 8019F508 00000000 */   nop
/* E2EC3C 8019F50C C65200EC */  lwc1        $ft5, 0xEC($s2)
/* E2EC40 8019F510 461E903C */  c.lt.s      $ft5, $fs5
/* E2EC44 8019F514 00000000 */  nop
/* E2EC48 8019F518 4500007A */  bc1f        .LE16C50_8019F704
/* E2EC4C 8019F51C 3C014080 */   lui        $at, (0x40800000 >> 16)
.LE16C50_8019F520:
/* E2EC50 8019F520 44813000 */  mtc1        $at, $ft1
/* E2EC54 8019F524 C6440110 */  lwc1        $ft0, 0x110($s2)
/* E2EC58 8019F528 C64C0004 */  lwc1        $fa0, 0x4($s2)
/* E2EC5C 8019F52C C64E0008 */  lwc1        $fa1, 0x8($s2)
/* E2EC60 8019F530 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E2EC64 8019F534 8E46000C */  lw          $a2, 0xC($s2)
/* E2EC68 8019F538 264E0004 */  addiu       $t6, $s2, 0x4
/* E2EC6C 8019F53C AFAE006C */  sw          $t6, 0x6C($sp)
/* E2EC70 8019F540 26500100 */  addiu       $s0, $s2, 0x100
/* E2EC74 8019F544 44074000 */  mfc1        $a3, $ft2
/* E2EC78 8019F548 0C01F4B2 */  jal         func_8007D2C8
/* E2EC7C 8019F54C 00000000 */   nop
/* E2EC80 8019F550 02402025 */  or          $a0, $s2, $zero
/* E2EC84 8019F554 0C0183EF */  jal         Object_Kill
/* E2EC88 8019F558 02002825 */   or         $a1, $s0, $zero
/* E2EC8C 8019F55C 96420002 */  lhu         $v0, 0x2($s2)
/* E2EC90 8019F560 24010115 */  addiu       $at, $zero, 0x115
/* E2EC94 8019F564 3C10801C */  lui         $s0, %hi(D_E16C50_801BF8F0)
/* E2EC98 8019F568 14410023 */  bne         $v0, $at, .LE16C50_8019F5F8
/* E2EC9C 8019F56C 2610F8F0 */   addiu      $s0, $s0, %lo(D_E16C50_801BF8F0)
/* E2ECA0 8019F570 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E2ECA4 8019F574 3C11801C */  lui         $s1, %hi(D_E16C50_801BF920)
/* E2ECA8 8019F578 4481C000 */  mtc1        $at, $fs2
/* E2ECAC 8019F57C 2631F920 */  addiu       $s1, $s1, %lo(D_E16C50_801BF920)
.LE16C50_8019F580:
/* E2ECB0 8019F580 0C0013AC */  jal         Rand_ZeroOne
/* E2ECB4 8019F584 00000000 */   nop
/* E2ECB8 8019F588 0C0013AC */  jal         Rand_ZeroOne
/* E2ECBC 8019F58C 46000586 */   mov.s      $fs1, $fv0
/* E2ECC0 8019F590 0C0013AC */  jal         Rand_ZeroOne
/* E2ECC4 8019F594 46000506 */   mov.s      $fs0, $fv0
/* E2ECC8 8019F598 461CB281 */  sub.s       $ft3, $fs1, $fs4
/* E2ECCC 8019F59C C6120000 */  lwc1        $ft5, 0x0($s0)
/* E2ECD0 8019F5A0 3C01C120 */  lui         $at, (0xC1200000 >> 16)
/* E2ECD4 8019F5A4 461CA181 */  sub.s       $ft1, $fs0, $fs4
/* E2ECD8 8019F5A8 46185402 */  mul.s       $ft4, $ft3, $fs2
/* E2ECDC 8019F5AC C60A0004 */  lwc1        $ft3, 0x4($s0)
/* E2ECE0 8019F5B0 C64C0004 */  lwc1        $fa0, 0x4($s2)
/* E2ECE4 8019F5B4 46183202 */  mul.s       $ft2, $ft1, $fs2
/* E2ECE8 8019F5B8 C64E0008 */  lwc1        $fa1, 0x8($s2)
/* E2ECEC 8019F5BC 8E46000C */  lw          $a2, 0xC($s2)
/* E2ECF0 8019F5C0 46128100 */  add.s       $ft0, $ft4, $ft5
/* E2ECF4 8019F5C4 44819000 */  mtc1        $at, $ft5
/* E2ECF8 8019F5C8 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E2ECFC 8019F5CC 44072000 */  mfc1        $a3, $ft0
/* E2ED00 8019F5D0 46120102 */  mul.s       $ft0, $fv0, $ft5
/* E2ED04 8019F5D4 E7B00010 */  swc1        $ft4, 0x10($sp)
/* E2ED08 8019F5D8 461A2181 */  sub.s       $ft1, $ft0, $fs3
/* E2ED0C 8019F5DC 0C067C0E */  jal         func_E16C50_8019F038
/* E2ED10 8019F5E0 E7A60014 */   swc1       $ft1, 0x14($sp)
/* E2ED14 8019F5E4 2610000C */  addiu       $s0, $s0, 0xC
/* E2ED18 8019F5E8 1611FFE5 */  bne         $s0, $s1, .LE16C50_8019F580
/* E2ED1C 8019F5EC 00000000 */   nop
/* E2ED20 8019F5F0 10000011 */  b           .LE16C50_8019F638
/* E2ED24 8019F5F4 00000000 */   nop
.LE16C50_8019F5F8:
/* E2ED28 8019F5F8 24010113 */  addiu       $at, $zero, 0x113
/* E2ED2C 8019F5FC 14410003 */  bne         $v0, $at, .LE16C50_8019F60C
/* E2ED30 8019F600 240F0001 */   addiu      $t7, $zero, 0x1
/* E2ED34 8019F604 1000000C */  b           .LE16C50_8019F638
/* E2ED38 8019F608 A24F0044 */   sb         $t7, 0x44($s2)
.LE16C50_8019F60C:
/* E2ED3C 8019F60C 24010114 */  addiu       $at, $zero, 0x114
/* E2ED40 8019F610 14410009 */  bne         $v0, $at, .LE16C50_8019F638
/* E2ED44 8019F614 3C188016 */   lui        $t8, %hi(gGoldRingCount)
/* E2ED48 8019F618 93181A90 */  lbu         $t8, %lo(gGoldRingCount)($t8)
/* E2ED4C 8019F61C 24010004 */  addiu       $at, $zero, 0x4
/* E2ED50 8019F620 2419000E */  addiu       $t9, $zero, 0xE
/* E2ED54 8019F624 13010003 */  beq         $t8, $at, .LE16C50_8019F634
/* E2ED58 8019F628 24080019 */   addiu      $t0, $zero, 0x19
/* E2ED5C 8019F62C 10000002 */  b           .LE16C50_8019F638
/* E2ED60 8019F630 A2590044 */   sb         $t9, 0x44($s2)
.LE16C50_8019F634:
/* E2ED64 8019F634 A2480044 */  sb          $t0, 0x44($s2)
.LE16C50_8019F638:
/* E2ED68 8019F638 0C019895 */  jal         func_80066254
/* E2ED6C 8019F63C 02402025 */   or         $a0, $s2, $zero
/* E2ED70 8019F640 3C01801C */  lui         $at, %hi(D_E16C50_801C151C)
/* E2ED74 8019F644 C434151C */  lwc1        $fs0, %lo(D_E16C50_801C151C)($at)
/* E2ED78 8019F648 00008825 */  or          $s1, $zero, $zero
/* E2ED7C 8019F64C 4407A000 */  mfc1        $a3, $fs0
.LE16C50_8019F650:
/* E2ED80 8019F650 C64C0004 */  lwc1        $fa0, 0x4($s2)
/* E2ED84 8019F654 C64E0008 */  lwc1        $fa1, 0x8($s2)
/* E2ED88 8019F658 0C01E533 */  jal         func_800794CC
/* E2ED8C 8019F65C 8E46000C */   lw         $a2, 0xC($s2)
/* E2ED90 8019F660 26310001 */  addiu       $s1, $s1, 0x1
/* E2ED94 8019F664 2A210003 */  slti        $at, $s1, 0x3
/* E2ED98 8019F668 5420FFF9 */  bnel        $at, $zero, .LE16C50_8019F650
/* E2ED9C 8019F66C 4407A000 */   mfc1       $a3, $fs0
/* E2EDA0 8019F670 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E2EDA4 8019F674 4481C000 */  mtc1        $at, $fs2
/* E2EDA8 8019F678 00008825 */  or          $s1, $zero, $zero
/* E2EDAC 8019F67C 24100007 */  addiu       $s0, $zero, 0x7
.LE16C50_8019F680:
/* E2EDB0 8019F680 0C0013AC */  jal         Rand_ZeroOne
/* E2EDB4 8019F684 00000000 */   nop
/* E2EDB8 8019F688 0C0013AC */  jal         Rand_ZeroOne
/* E2EDBC 8019F68C 46000586 */   mov.s      $fs1, $fv0
/* E2EDC0 8019F690 0C0013AC */  jal         Rand_ZeroOne
/* E2EDC4 8019F694 46000506 */   mov.s      $fs0, $fv0
/* E2EDC8 8019F698 461CB201 */  sub.s       $ft2, $fs1, $fs4
/* E2EDCC 8019F69C 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E2EDD0 8019F6A0 44813000 */  mtc1        $at, $ft1
/* E2EDD4 8019F6A4 461CA401 */  sub.s       $ft4, $fs0, $fs4
/* E2EDD8 8019F6A8 46184282 */  mul.s       $ft3, $ft2, $fs2
/* E2EDDC 8019F6AC C64C0004 */  lwc1        $fa0, 0x4($s2)
/* E2EDE0 8019F6B0 46000100 */  add.s       $ft0, $fv0, $fv0
/* E2EDE4 8019F6B4 46188482 */  mul.s       $ft5, $ft4, $fs2
/* E2EDE8 8019F6B8 C64E0008 */  lwc1        $fa1, 0x8($s2)
/* E2EDEC 8019F6BC 8E46000C */  lw          $a2, 0xC($s2)
/* E2EDF0 8019F6C0 E7BE0014 */  swc1        $fs5, 0x14($sp)
/* E2EDF4 8019F6C4 44075000 */  mfc1        $a3, $ft3
/* E2EDF8 8019F6C8 46062200 */  add.s       $ft2, $ft0, $ft1
/* E2EDFC 8019F6CC 24090001 */  addiu       $t1, $zero, 0x1
/* E2EE00 8019F6D0 E7B20010 */  swc1        $ft5, 0x10($sp)
/* E2EE04 8019F6D4 C64A0110 */  lwc1        $ft3, 0x110($s2)
/* E2EE08 8019F6D8 AFA9001C */  sw          $t1, 0x1C($sp)
/* E2EE0C 8019F6DC 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E2EE10 8019F6E0 0C067A7D */  jal         func_E16C50_8019E9F4
/* E2EE14 8019F6E4 E7B00018 */   swc1       $ft4, 0x18($sp)
/* E2EE18 8019F6E8 26310001 */  addiu       $s1, $s1, 0x1
/* E2EE1C 8019F6EC 1630FFE4 */  bne         $s1, $s0, .LE16C50_8019F680
/* E2EE20 8019F6F0 00000000 */   nop
/* E2EE24 8019F6F4 3C052903 */  lui         $a1, (0x2903A008 >> 16)
/* E2EE28 8019F6F8 34A5A008 */  ori         $a1, $a1, (0x2903A008 & 0xFFFF)
/* E2EE2C 8019F6FC 0C01E9BC */  jal         func_8007A6F0
/* E2EE30 8019F700 8FA4006C */   lw         $a0, 0x6C($sp)
.LE16C50_8019F704:
/* E2EE34 8019F704 3C028018 */  lui         $v0, %hi(gPlayer)
/* E2EE38 8019F708 24428280 */  addiu       $v0, $v0, %lo(gPlayer)
/* E2EE3C 8019F70C 8C4A0000 */  lw          $t2, 0x0($v0)
/* E2EE40 8019F710 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E2EE44 8019F714 44810000 */  mtc1        $at, $fv0
/* E2EE48 8019F718 C5520058 */  lwc1        $ft5, 0x58($t2)
/* E2EE4C 8019F71C 3C01801C */  lui         $at, %hi(D_E16C50_801C1520)
/* E2EE50 8019F720 C4221520 */  lwc1        $fv1, %lo(D_E16C50_801C1520)($at)
/* E2EE54 8019F724 46009107 */  neg.s       $ft0, $ft5
/* E2EE58 8019F728 3C0C8017 */  lui         $t4, %hi(gFrameCount)
/* E2EE5C 8019F72C 46002182 */  mul.s       $ft1, $ft0, $fv0
/* E2EE60 8019F730 46023203 */  div.s       $ft2, $ft1, $fv1
/* E2EE64 8019F734 E6480014 */  swc1        $ft2, 0x14($s2)
/* E2EE68 8019F738 8C4B0000 */  lw          $t3, 0x0($v0)
/* E2EE6C 8019F73C C56A005C */  lwc1        $ft3, 0x5C($t3)
/* E2EE70 8019F740 46005402 */  mul.s       $ft4, $ft3, $fv0
/* E2EE74 8019F744 46028483 */  div.s       $ft5, $ft4, $fv1
/* E2EE78 8019F748 E6520010 */  swc1        $ft5, 0x10($s2)
/* E2EE7C 8019F74C 8D8C7DB0 */  lw          $t4, %lo(gFrameCount)($t4)
/* E2EE80 8019F750 318D0001 */  andi        $t5, $t4, 0x1
/* E2EE84 8019F754 55A0000A */  bnel        $t5, $zero, .LE16C50_8019F780
/* E2EE88 8019F758 8FBF0064 */   lw         $ra, 0x64($sp)
/* E2EE8C 8019F75C 864E00B6 */  lh          $t6, 0xB6($s2)
/* E2EE90 8019F760 25CF0001 */  addiu       $t7, $t6, 0x1
/* E2EE94 8019F764 A64F00B6 */  sh          $t7, 0xB6($s2)
/* E2EE98 8019F768 865800B6 */  lh          $t8, 0xB6($s2)
/* E2EE9C 8019F76C 2B010003 */  slti        $at, $t8, 0x3
/* E2EEA0 8019F770 54200003 */  bnel        $at, $zero, .LE16C50_8019F780
/* E2EEA4 8019F774 8FBF0064 */   lw         $ra, 0x64($sp)
/* E2EEA8 8019F778 A64000B6 */  sh          $zero, 0xB6($s2)
/* E2EEAC 8019F77C 8FBF0064 */  lw          $ra, 0x64($sp)
.LE16C50_8019F780:
/* E2EEB0 8019F780 D7B40028 */  ldc1        $fs0, 0x28($sp)
/* E2EEB4 8019F784 D7B60030 */  ldc1        $fs1, 0x30($sp)
/* E2EEB8 8019F788 D7B80038 */  ldc1        $fs2, 0x38($sp)
/* E2EEBC 8019F78C D7BA0040 */  ldc1        $fs3, 0x40($sp)
/* E2EEC0 8019F790 D7BC0048 */  ldc1        $fs4, 0x48($sp)
/* E2EEC4 8019F794 D7BE0050 */  ldc1        $fs5, 0x50($sp)
/* E2EEC8 8019F798 8FB00058 */  lw          $s0, 0x58($sp)
/* E2EECC 8019F79C 8FB1005C */  lw          $s1, 0x5C($sp)
/* E2EED0 8019F7A0 8FB20060 */  lw          $s2, 0x60($sp)
/* E2EED4 8019F7A4 03E00008 */  jr          $ra
/* E2EED8 8019F7A8 27BD0090 */   addiu      $sp, $sp, 0x90
.section .late_rodata
dlabel D_E16C50_801C1524
/* E50C54 801C1524 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1528
/* E50C58 801C1528 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8019F7AC
/* E2EEDC 8019F7AC 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* E2EEE0 8019F7B0 AFB10018 */  sw          $s1, 0x18($sp)
/* E2EEE4 8019F7B4 00808825 */  or          $s1, $a0, $zero
/* E2EEE8 8019F7B8 AFBF001C */  sw          $ra, 0x1C($sp)
/* E2EEEC 8019F7BC AFB00014 */  sw          $s0, 0x14($sp)
/* E2EEF0 8019F7C0 862E00B8 */  lh          $t6, 0xB8($s1)
/* E2EEF4 8019F7C4 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* E2EEF8 8019F7C8 51C00070 */  beql        $t6, $zero, .LE16C50_8019F98C
/* E2EEFC 8019F7CC 8FBF001C */   lw         $ra, 0x1C($sp)
/* E2EF00 8019F7D0 0C0015C2 */  jal         Matrix_Push
/* E2EF04 8019F7D4 2484B3C0 */   addiu      $a0, $a0, %lo(gGfxMatrix)
/* E2EF08 8019F7D8 3C01801C */  lui         $at, %hi(D_E16C50_801C1524)
/* E2EF0C 8019F7DC C4261524 */  lwc1        $ft1, %lo(D_E16C50_801C1524)($at)
/* E2EF10 8019F7E0 C62400F8 */  lwc1        $ft0, 0xF8($s1)
/* E2EF14 8019F7E4 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* E2EF18 8019F7E8 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* E2EF1C 8019F7EC 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E2EF20 8019F7F0 24060001 */  addiu       $a2, $zero, 0x1
/* E2EF24 8019F7F4 44054000 */  mfc1        $a1, $ft2
/* E2EF28 8019F7F8 0C0017A4 */  jal         Matrix_RotateY
/* E2EF2C 8019F7FC 00000000 */   nop
/* E2EF30 8019F800 3C01801C */  lui         $at, %hi(D_E16C50_801C1528)
/* E2EF34 8019F804 C4301528 */  lwc1        $ft4, %lo(D_E16C50_801C1528)($at)
/* E2EF38 8019F808 C62A00F4 */  lwc1        $ft3, 0xF4($s1)
/* E2EF3C 8019F80C 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* E2EF40 8019F810 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* E2EF44 8019F814 46105482 */  mul.s       $ft5, $ft3, $ft4
/* E2EF48 8019F818 24060001 */  addiu       $a2, $zero, 0x1
/* E2EF4C 8019F81C 44059000 */  mfc1        $a1, $ft5
/* E2EF50 8019F820 0C001751 */  jal         Matrix_RotateX
/* E2EF54 8019F824 00000000 */   nop
/* E2EF58 8019F828 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* E2EF5C 8019F82C 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* E2EF60 8019F830 0C001BAE */  jal         Matrix_SetGfxMtx
/* E2EF64 8019F834 02002025 */   or         $a0, $s0, $zero
/* E2EF68 8019F838 96220002 */  lhu         $v0, 0x2($s1)
/* E2EF6C 8019F83C 24010113 */  addiu       $at, $zero, 0x113
/* E2EF70 8019F840 3C180600 */  lui         $t8, (0x6000000 >> 16)
/* E2EF74 8019F844 10410008 */  beq         $v0, $at, .LE16C50_8019F868
/* E2EF78 8019F848 24010114 */   addiu      $at, $zero, 0x114
/* E2EF7C 8019F84C 1041000F */  beq         $v0, $at, .LE16C50_8019F88C
/* E2EF80 8019F850 3C088017 */   lui        $t0, %hi(gFrameCount)
/* E2EF84 8019F854 24010115 */  addiu       $at, $zero, 0x115
/* E2EF88 8019F858 10410025 */  beq         $v0, $at, .LE16C50_8019F8F0
/* E2EF8C 8019F85C 3C190600 */   lui        $t9, (0x6000000 >> 16)
/* E2EF90 8019F860 1000002A */  b           .LE16C50_8019F90C
/* E2EF94 8019F864 00000000 */   nop
.LE16C50_8019F868:
/* E2EF98 8019F868 8E020000 */  lw          $v0, 0x0($s0)
/* E2EF9C 8019F86C 3C190601 */  lui         $t9, %hi(D_6017370)
/* E2EFA0 8019F870 27397370 */  addiu       $t9, $t9, %lo(D_6017370)
/* E2EFA4 8019F874 244F0008 */  addiu       $t7, $v0, 0x8
/* E2EFA8 8019F878 AE0F0000 */  sw          $t7, 0x0($s0)
/* E2EFAC 8019F87C AC590004 */  sw          $t9, 0x4($v0)
/* E2EFB0 8019F880 AC580000 */  sw          $t8, 0x0($v0)
/* E2EFB4 8019F884 10000021 */  b           .LE16C50_8019F90C
/* E2EFB8 8019F888 00000000 */   nop
.LE16C50_8019F88C:
/* E2EFBC 8019F88C 8D087DB0 */  lw          $t0, %lo(gFrameCount)($t0)
/* E2EFC0 8019F890 02002025 */  or          $a0, $s0, $zero
/* E2EFC4 8019F894 31090001 */  andi        $t1, $t0, 0x1
/* E2EFC8 8019F898 5520000C */  bnel        $t1, $zero, .LE16C50_8019F8CC
/* E2EFCC 8019F89C 8E020000 */   lw         $v0, 0x0($s0)
/* E2EFD0 8019F8A0 0C02E374 */  jal         RCP_SetupDL
/* E2EFD4 8019F8A4 24050029 */   addiu      $a1, $zero, 0x29
/* E2EFD8 8019F8A8 8E020000 */  lw          $v0, 0x0($s0)
/* E2EFDC 8019F8AC 3C0CFFFF */  lui         $t4, (0xFFFF00FF >> 16)
/* E2EFE0 8019F8B0 358C00FF */  ori         $t4, $t4, (0xFFFF00FF & 0xFFFF)
/* E2EFE4 8019F8B4 244A0008 */  addiu       $t2, $v0, 0x8
/* E2EFE8 8019F8B8 AE0A0000 */  sw          $t2, 0x0($s0)
/* E2EFEC 8019F8BC 3C0BFA00 */  lui         $t3, (0xFA000000 >> 16)
/* E2EFF0 8019F8C0 AC4B0000 */  sw          $t3, 0x0($v0)
/* E2EFF4 8019F8C4 AC4C0004 */  sw          $t4, 0x4($v0)
/* E2EFF8 8019F8C8 8E020000 */  lw          $v0, 0x0($s0)
.LE16C50_8019F8CC:
/* E2EFFC 8019F8CC 3C0F0601 */  lui         $t7, %hi(D_6017090)
/* E2F000 8019F8D0 25EF7090 */  addiu       $t7, $t7, %lo(D_6017090)
/* E2F004 8019F8D4 244D0008 */  addiu       $t5, $v0, 0x8
/* E2F008 8019F8D8 AE0D0000 */  sw          $t5, 0x0($s0)
/* E2F00C 8019F8DC 3C0E0600 */  lui         $t6, (0x6000000 >> 16)
/* E2F010 8019F8E0 AC4E0000 */  sw          $t6, 0x0($v0)
/* E2F014 8019F8E4 AC4F0004 */  sw          $t7, 0x4($v0)
/* E2F018 8019F8E8 10000008 */  b           .LE16C50_8019F90C
/* E2F01C 8019F8EC 00000000 */   nop
.LE16C50_8019F8F0:
/* E2F020 8019F8F0 8E020000 */  lw          $v0, 0x0($s0)
/* E2F024 8019F8F4 3C080601 */  lui         $t0, %hi(D_6016CF0)
/* E2F028 8019F8F8 25086CF0 */  addiu       $t0, $t0, %lo(D_6016CF0)
/* E2F02C 8019F8FC 24580008 */  addiu       $t8, $v0, 0x8
/* E2F030 8019F900 AE180000 */  sw          $t8, 0x0($s0)
/* E2F034 8019F904 AC480004 */  sw          $t0, 0x4($v0)
/* E2F038 8019F908 AC590000 */  sw          $t9, 0x0($v0)
.LE16C50_8019F90C:
/* E2F03C 8019F90C 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* E2F040 8019F910 0C0015D0 */  jal         Matrix_Pop
/* E2F044 8019F914 2484B3C0 */   addiu      $a0, $a0, %lo(gGfxMatrix)
/* E2F048 8019F918 3C014060 */  lui         $at, (0x40600000 >> 16)
/* E2F04C 8019F91C 44813000 */  mtc1        $at, $ft1
/* E2F050 8019F920 C6240110 */  lwc1        $ft0, 0x110($s1)
/* E2F054 8019F924 46062302 */  mul.s       $fa0, $ft0, $ft1
/* E2F058 8019F928 0C016603 */  jal         Graphics_SetScaleMtx
/* E2F05C 8019F92C 00000000 */   nop
/* E2F060 8019F930 02002025 */  or          $a0, $s0, $zero
/* E2F064 8019F934 0C02E374 */  jal         RCP_SetupDL
/* E2F068 8019F938 24050040 */   addiu      $a1, $zero, 0x40
/* E2F06C 8019F93C 8E020000 */  lw          $v0, 0x0($s0)
/* E2F070 8019F940 3C0BFF80 */  lui         $t3, (0xFF8080A0 >> 16)
/* E2F074 8019F944 356B80A0 */  ori         $t3, $t3, (0xFF8080A0 & 0xFFFF)
/* E2F078 8019F948 24490008 */  addiu       $t1, $v0, 0x8
/* E2F07C 8019F94C AE090000 */  sw          $t1, 0x0($s0)
/* E2F080 8019F950 3C0AFA00 */  lui         $t2, (0xFA000000 >> 16)
/* E2F084 8019F954 AC4A0000 */  sw          $t2, 0x0($v0)
/* E2F088 8019F958 AC4B0004 */  sw          $t3, 0x4($v0)
/* E2F08C 8019F95C 8E020000 */  lw          $v0, 0x0($s0)
/* E2F090 8019F960 3C0D0600 */  lui         $t5, (0x6000000 >> 16)
/* E2F094 8019F964 3C18801C */  lui         $t8, %hi(D_E16C50_801BF92C)
/* E2F098 8019F968 244C0008 */  addiu       $t4, $v0, 0x8
/* E2F09C 8019F96C AE0C0000 */  sw          $t4, 0x0($s0)
/* E2F0A0 8019F970 AC4D0000 */  sw          $t5, 0x0($v0)
/* E2F0A4 8019F974 862E00B6 */  lh          $t6, 0xB6($s1)
/* E2F0A8 8019F978 000E7880 */  sll         $t7, $t6, 2
/* E2F0AC 8019F97C 030FC021 */  addu        $t8, $t8, $t7
/* E2F0B0 8019F980 8F18F92C */  lw          $t8, %lo(D_E16C50_801BF92C)($t8)
/* E2F0B4 8019F984 AC580004 */  sw          $t8, 0x4($v0)
/* E2F0B8 8019F988 8FBF001C */  lw          $ra, 0x1C($sp)
.LE16C50_8019F98C:
/* E2F0BC 8019F98C 8FB00014 */  lw          $s0, 0x14($sp)
/* E2F0C0 8019F990 8FB10018 */  lw          $s1, 0x18($sp)
/* E2F0C4 8019F994 03E00008 */  jr          $ra
/* E2F0C8 8019F998 27BD0020 */   addiu      $sp, $sp, 0x20
glabel func_E16C50_8019F99C
/* E2F0CC 8019F99C 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E2F0D0 8019F9A0 AFA60020 */  sw          $a2, 0x20($sp)
/* E2F0D4 8019F9A4 00A03025 */  or          $a2, $a1, $zero
/* E2F0D8 8019F9A8 AFBF0014 */  sw          $ra, 0x14($sp)
/* E2F0DC 8019F9AC AFA5001C */  sw          $a1, 0x1C($sp)
/* E2F0E0 8019F9B0 00803825 */  or          $a3, $a0, $zero
/* E2F0E4 8019F9B4 00C02025 */  or          $a0, $a2, $zero
/* E2F0E8 8019F9B8 AFA6001C */  sw          $a2, 0x1C($sp)
/* E2F0EC 8019F9BC 0C01851D */  jal         Object_8C_Initialize
/* E2F0F0 8019F9C0 AFA70018 */   sw         $a3, 0x18($sp)
/* E2F0F4 8019F9C4 8FA6001C */  lw          $a2, 0x1C($sp)
/* E2F0F8 8019F9C8 8FA70018 */  lw          $a3, 0x18($sp)
/* E2F0FC 8019F9CC 240E0002 */  addiu       $t6, $zero, 0x2
/* E2F100 8019F9D0 240F0188 */  addiu       $t7, $zero, 0x188
/* E2F104 8019F9D4 A0CE0000 */  sb          $t6, 0x0($a2)
/* E2F108 8019F9D8 A4CF0002 */  sh          $t7, 0x2($a2)
/* E2F10C 8019F9DC C4E00004 */  lwc1        $fv0, 0x4($a3)
/* E2F110 8019F9E0 3C01C4FA */  lui         $at, (0xC4FA0000 >> 16)
/* E2F114 8019F9E4 44812000 */  mtc1        $at, $ft0
/* E2F118 8019F9E8 E4C00054 */  swc1        $fv0, 0x54($a2)
/* E2F11C 8019F9EC E4C00004 */  swc1        $fv0, 0x4($a2)
/* E2F120 8019F9F0 E4C40008 */  swc1        $ft0, 0x8($a2)
/* E2F124 8019F9F4 C4E60008 */  lwc1        $ft1, 0x8($a3)
/* E2F128 8019F9F8 E4C60058 */  swc1        $ft1, 0x58($a2)
/* E2F12C 8019F9FC C4E0000C */  lwc1        $fv0, 0xC($a3)
/* E2F130 8019FA00 E4C0005C */  swc1        $fv0, 0x5C($a2)
/* E2F134 8019FA04 E4C0000C */  swc1        $fv0, 0xC($a2)
/* E2F138 8019FA08 C7A80020 */  lwc1        $ft2, 0x20($sp)
/* E2F13C 8019FA0C E4C8006C */  swc1        $ft2, 0x6C($a2)
/* E2F140 8019FA10 C4EA0014 */  lwc1        $ft3, 0x14($a3)
/* E2F144 8019FA14 0C0013AC */  jal         Rand_ZeroOne
/* E2F148 8019FA18 E4CA0064 */   swc1       $ft3, 0x64($a2)
/* E2F14C 8019FA1C 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E2F150 8019FA20 44818000 */  mtc1        $at, $ft4
/* E2F154 8019FA24 8FA6001C */  lw          $a2, 0x1C($sp)
/* E2F158 8019FA28 8FA70018 */  lw          $a3, 0x18($sp)
/* E2F15C 8019FA2C 46100482 */  mul.s       $ft5, $fv0, $ft4
/* E2F160 8019FA30 240800FF */  addiu       $t0, $zero, 0xFF
/* E2F164 8019FA34 E4D20018 */  swc1        $ft5, 0x18($a2)
/* E2F168 8019FA38 84F8004E */  lh          $t8, 0x4E($a3)
/* E2F16C 8019FA3C 0018C8C0 */  sll         $t9, $t8, 3
/* E2F170 8019FA40 01194823 */  subu        $t1, $t0, $t9
/* E2F174 8019FA44 A4C90044 */  sh          $t1, 0x44($a2)
/* E2F178 8019FA48 84CA0044 */  lh          $t2, 0x44($a2)
/* E2F17C 8019FA4C 05430003 */  bgezl       $t2, .LE16C50_8019FA5C
/* E2F180 8019FA50 84EB004E */   lh         $t3, 0x4E($a3)
/* E2F184 8019FA54 A4C00044 */  sh          $zero, 0x44($a2)
/* E2F188 8019FA58 84EB004E */  lh          $t3, 0x4E($a3)
.LE16C50_8019FA5C:
/* E2F18C 8019FA5C 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E2F190 8019FA60 44814000 */  mtc1        $at, $ft2
/* E2F194 8019FA64 448B2000 */  mtc1        $t3, $ft0
/* E2F198 8019FA68 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E2F19C 8019FA6C 44818000 */  mtc1        $at, $ft4
/* E2F1A0 8019FA70 468021A0 */  cvt.s.w     $ft1, $ft0
/* E2F1A4 8019FA74 240C0001 */  addiu       $t4, $zero, 0x1
/* E2F1A8 8019FA78 A4CC0048 */  sh          $t4, 0x48($a2)
/* E2F1AC 8019FA7C 24C4001C */  addiu       $a0, $a2, 0x1C
/* E2F1B0 8019FA80 94C50002 */  lhu         $a1, 0x2($a2)
/* E2F1B4 8019FA84 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E2F1B8 8019FA88 460A8481 */  sub.s       $ft5, $ft4, $ft3
/* E2F1BC 8019FA8C 0C0184AE */  jal         Object_SetInfo
/* E2F1C0 8019FA90 E4D20070 */   swc1       $ft5, 0x70($a2)
/* E2F1C4 8019FA94 8FBF0014 */  lw          $ra, 0x14($sp)
/* E2F1C8 8019FA98 27BD0018 */  addiu       $sp, $sp, 0x18
/* E2F1CC 8019FA9C 03E00008 */  jr          $ra
/* E2F1D0 8019FAA0 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C152C
/* E50C5C 801C152C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1530
/* E50C60 801C1530 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1534
/* E50C64 801C1534 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1538
/* E50C68 801C1538 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_8019FAA4
/* E2F1D4 8019FAA4 27BDFFB0 */  addiu       $sp, $sp, -0x50
/* E2F1D8 8019FAA8 AFB20020 */  sw          $s2, 0x20($sp)
/* E2F1DC 8019FAAC AFB00018 */  sw          $s0, 0x18($sp)
/* E2F1E0 8019FAB0 00A08025 */  or          $s0, $a1, $zero
/* E2F1E4 8019FAB4 00809025 */  or          $s2, $a0, $zero
/* E2F1E8 8019FAB8 AFBF0024 */  sw          $ra, 0x24($sp)
/* E2F1EC 8019FABC AFB1001C */  sw          $s1, 0x1C($sp)
/* E2F1F0 8019FAC0 AFA60058 */  sw          $a2, 0x58($sp)
/* E2F1F4 8019FAC4 AFA7005C */  sw          $a3, 0x5C($sp)
/* E2F1F8 8019FAC8 3C0F801C */  lui         $t7, %hi(D_E16C50_801BF920)
/* E2F1FC 8019FACC 25EFF920 */  addiu       $t7, $t7, %lo(D_E16C50_801BF920)
/* E2F200 8019FAD0 8DE10000 */  lw          $at, 0x0($t7)
/* E2F204 8019FAD4 27AE002C */  addiu       $t6, $sp, 0x2C
/* E2F208 8019FAD8 8DE80004 */  lw          $t0, 0x4($t7)
/* E2F20C 8019FADC ADC10000 */  sw          $at, 0x0($t6)
/* E2F210 8019FAE0 8DE10008 */  lw          $at, 0x8($t7)
/* E2F214 8019FAE4 02002025 */  or          $a0, $s0, $zero
/* E2F218 8019FAE8 ADC80004 */  sw          $t0, 0x4($t6)
/* E2F21C 8019FAEC 0C01851D */  jal         Object_8C_Initialize
/* E2F220 8019FAF0 ADC10008 */   sw         $at, 0x8($t6)
/* E2F224 8019FAF4 24090002 */  addiu       $t1, $zero, 0x2
/* E2F228 8019FAF8 240A0188 */  addiu       $t2, $zero, 0x188
/* E2F22C 8019FAFC A2090000 */  sb          $t1, 0x0($s0)
/* E2F230 8019FB00 A60A0002 */  sh          $t2, 0x2($s0)
/* E2F234 8019FB04 C7A40058 */  lwc1        $ft0, 0x58($sp)
/* E2F238 8019FB08 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E2F23C 8019FB0C 44800000 */  mtc1        $zero, $fv0
/* E2F240 8019FB10 E6040004 */  swc1        $ft0, 0x4($s0)
/* E2F244 8019FB14 C7A6005C */  lwc1        $ft1, 0x5C($sp)
/* E2F248 8019FB18 44818000 */  mtc1        $at, $ft4
/* E2F24C 8019FB1C 3C0B8017 */  lui         $t3, %hi(D_80177848)
/* E2F250 8019FB20 E6060008 */  swc1        $ft1, 0x8($s0)
/* E2F254 8019FB24 C7A80060 */  lwc1        $ft2, 0x60($sp)
/* E2F258 8019FB28 3C118017 */  lui         $s1, %hi(gObjects408)
/* E2F25C 8019FB2C 2631F110 */  addiu       $s1, $s1, %lo(gObjects408)
/* E2F260 8019FB30 E608000C */  swc1        $ft2, 0xC($s0)
/* E2F264 8019FB34 C7AA0064 */  lwc1        $ft3, 0x64($sp)
/* E2F268 8019FB38 E6000054 */  swc1        $fv0, 0x54($s0)
/* E2F26C 8019FB3C E6100070 */  swc1        $ft4, 0x70($s0)
/* E2F270 8019FB40 E60A0058 */  swc1        $ft3, 0x58($s0)
/* E2F274 8019FB44 8D6B7848 */  lw          $t3, %lo(D_80177848)($t3)
/* E2F278 8019FB48 11600079 */  beqz        $t3, .LE16C50_8019FD30
/* E2F27C 8019FB4C 00000000 */   nop
/* E2F280 8019FB50 C6320154 */  lwc1        $ft5, 0x154($s1)
/* E2F284 8019FB54 3C0E8018 */  lui         $t6, %hi(gPlayer)
/* E2F288 8019FB58 4612003C */  c.lt.s      $fv0, $ft5
/* E2F28C 8019FB5C 00000000 */  nop
/* E2F290 8019FB60 4500006F */  bc1f        .LE16C50_8019FD20
/* E2F294 8019FB64 00000000 */   nop
/* E2F298 8019FB68 862C0088 */  lh          $t4, 0x88($s1)
/* E2F29C 8019FB6C 24010007 */  addiu       $at, $zero, 0x7
/* E2F2A0 8019FB70 11810023 */  beq         $t4, $at, .LE16C50_8019FC00
/* E2F2A4 8019FB74 3C01801C */   lui        $at, %hi(D_E16C50_801C152C)
/* E2F2A8 8019FB78 C426152C */  lwc1        $ft1, %lo(D_E16C50_801C152C)($at)
/* E2F2AC 8019FB7C C6240014 */  lwc1        $ft0, 0x14($s1)
/* E2F2B0 8019FB80 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E2F2B4 8019FB84 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E2F2B8 8019FB88 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E2F2BC 8019FB8C 00003025 */  or          $a2, $zero, $zero
/* E2F2C0 8019FB90 44054000 */  mfc1        $a1, $ft2
/* E2F2C4 8019FB94 0C0017A4 */  jal         Matrix_RotateY
/* E2F2C8 8019FB98 00000000 */   nop
/* E2F2CC 8019FB9C 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E2F2D0 8019FBA0 44818000 */  mtc1        $at, $ft4
/* E2F2D4 8019FBA4 C62A0154 */  lwc1        $ft3, 0x154($s1)
/* E2F2D8 8019FBA8 44800000 */  mtc1        $zero, $fv0
/* E2F2DC 8019FBAC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E2F2E0 8019FBB0 46105482 */  mul.s       $ft5, $ft3, $ft4
/* E2F2E4 8019FBB4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E2F2E8 8019FBB8 27A50044 */  addiu       $a1, $sp, 0x44
/* E2F2EC 8019FBBC 27A60038 */  addiu       $a2, $sp, 0x38
/* E2F2F0 8019FBC0 E7A00048 */  swc1        $fv0, 0x48($sp)
/* E2F2F4 8019FBC4 E7A0004C */  swc1        $fv0, 0x4C($sp)
/* E2F2F8 8019FBC8 0C001A5C */  jal         Matrix_MultVec3f
/* E2F2FC 8019FBCC E7B20044 */   swc1       $ft5, 0x44($sp)
/* E2F300 8019FBD0 C7A00068 */  lwc1        $fv0, 0x68($sp)
/* E2F304 8019FBD4 C7A40038 */  lwc1        $ft0, 0x38($sp)
/* E2F308 8019FBD8 3C0D8018 */  lui         $t5, %hi(gPlayer)
/* E2F30C 8019FBDC 46002182 */  mul.s       $ft1, $ft0, $fv0
/* E2F310 8019FBE0 E6060054 */  swc1        $ft1, 0x54($s0)
/* E2F314 8019FBE4 C7AA0040 */  lwc1        $ft3, 0x40($sp)
/* E2F318 8019FBE8 8DAD8280 */  lw          $t5, %lo(gPlayer)($t5)
/* E2F31C 8019FBEC 46005402 */  mul.s       $ft4, $ft3, $fv0
/* E2F320 8019FBF0 C5A800C8 */  lwc1        $ft2, 0xC8($t5)
/* E2F324 8019FBF4 46104480 */  add.s       $ft5, $ft2, $ft4
/* E2F328 8019FBF8 1000005E */  b           .LE16C50_8019FD74
/* E2F32C 8019FBFC E612005C */   swc1       $ft5, 0x5C($s0)
.LE16C50_8019FC00:
/* E2F330 8019FC00 3C01801C */  lui         $at, %hi(D_E16C50_801C1530)
/* E2F334 8019FC04 C4261530 */  lwc1        $ft1, %lo(D_E16C50_801C1530)($at)
/* E2F338 8019FC08 C6440018 */  lwc1        $ft0, 0x18($s2)
/* E2F33C 8019FC0C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E2F340 8019FC10 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E2F344 8019FC14 46062282 */  mul.s       $ft3, $ft0, $ft1
/* E2F348 8019FC18 00003025 */  or          $a2, $zero, $zero
/* E2F34C 8019FC1C 44055000 */  mfc1        $a1, $ft3
/* E2F350 8019FC20 0C0017F8 */  jal         Matrix_RotateZ
/* E2F354 8019FC24 00000000 */   nop
/* E2F358 8019FC28 3C01801C */  lui         $at, %hi(D_E16C50_801C1534)
/* E2F35C 8019FC2C C4301534 */  lwc1        $ft4, %lo(D_E16C50_801C1534)($at)
/* E2F360 8019FC30 C6280010 */  lwc1        $ft2, 0x10($s1)
/* E2F364 8019FC34 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E2F368 8019FC38 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E2F36C 8019FC3C 46104482 */  mul.s       $ft5, $ft2, $ft4
/* E2F370 8019FC40 24060001 */  addiu       $a2, $zero, 0x1
/* E2F374 8019FC44 44059000 */  mfc1        $a1, $ft5
/* E2F378 8019FC48 0C001751 */  jal         Matrix_RotateX
/* E2F37C 8019FC4C 00000000 */   nop
/* E2F380 8019FC50 3C01801C */  lui         $at, %hi(D_E16C50_801C1538)
/* E2F384 8019FC54 C4261538 */  lwc1        $ft1, %lo(D_E16C50_801C1538)($at)
/* E2F388 8019FC58 C624007C */  lwc1        $ft0, 0x7C($s1)
/* E2F38C 8019FC5C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E2F390 8019FC60 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E2F394 8019FC64 46062282 */  mul.s       $ft3, $ft0, $ft1
/* E2F398 8019FC68 24060001 */  addiu       $a2, $zero, 0x1
/* E2F39C 8019FC6C 44055000 */  mfc1        $a1, $ft3
/* E2F3A0 8019FC70 0C0017A4 */  jal         Matrix_RotateY
/* E2F3A4 8019FC74 00000000 */   nop
/* E2F3A8 8019FC78 C6080004 */  lwc1        $ft2, 0x4($s0)
/* E2F3AC 8019FC7C C6500004 */  lwc1        $ft4, 0x4($s2)
/* E2F3B0 8019FC80 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E2F3B4 8019FC84 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E2F3B8 8019FC88 46104481 */  sub.s       $ft5, $ft2, $ft4
/* E2F3BC 8019FC8C 27A50044 */  addiu       $a1, $sp, 0x44
/* E2F3C0 8019FC90 27A60038 */  addiu       $a2, $sp, 0x38
/* E2F3C4 8019FC94 E7B20044 */  swc1        $ft5, 0x44($sp)
/* E2F3C8 8019FC98 C6460008 */  lwc1        $ft1, 0x8($s2)
/* E2F3CC 8019FC9C C6040008 */  lwc1        $ft0, 0x8($s0)
/* E2F3D0 8019FCA0 46062281 */  sub.s       $ft3, $ft0, $ft1
/* E2F3D4 8019FCA4 E7AA0048 */  swc1        $ft3, 0x48($sp)
/* E2F3D8 8019FCA8 C650000C */  lwc1        $ft4, 0xC($s2)
/* E2F3DC 8019FCAC C608000C */  lwc1        $ft2, 0xC($s0)
/* E2F3E0 8019FCB0 46104481 */  sub.s       $ft5, $ft2, $ft4
/* E2F3E4 8019FCB4 0C001A5C */  jal         Matrix_MultVec3f
/* E2F3E8 8019FCB8 E7B2004C */   swc1       $ft5, 0x4C($sp)
/* E2F3EC 8019FCBC C6440004 */  lwc1        $ft0, 0x4($s2)
/* E2F3F0 8019FCC0 C7A60038 */  lwc1        $ft1, 0x38($sp)
/* E2F3F4 8019FCC4 3C198018 */  lui         $t9, %hi(gPlayer)
/* E2F3F8 8019FCC8 46062280 */  add.s       $ft3, $ft0, $ft1
/* E2F3FC 8019FCCC E60A0004 */  swc1        $ft3, 0x4($s0)
/* E2F400 8019FCD0 C7B0003C */  lwc1        $ft4, 0x3C($sp)
/* E2F404 8019FCD4 C6480008 */  lwc1        $ft2, 0x8($s2)
/* E2F408 8019FCD8 46104480 */  add.s       $ft5, $ft2, $ft4
/* E2F40C 8019FCDC E6120008 */  swc1        $ft5, 0x8($s0)
/* E2F410 8019FCE0 C7A60040 */  lwc1        $ft1, 0x40($sp)
/* E2F414 8019FCE4 C644000C */  lwc1        $ft0, 0xC($s2)
/* E2F418 8019FCE8 46062280 */  add.s       $ft3, $ft0, $ft1
/* E2F41C 8019FCEC E60A000C */  swc1        $ft3, 0xC($s0)
/* E2F420 8019FCF0 8F398280 */  lw          $t9, %lo(gPlayer)($t9)
/* E2F424 8019FCF4 C72800C8 */  lwc1        $ft2, 0xC8($t9)
/* E2F428 8019FCF8 E608005C */  swc1        $ft2, 0x5C($s0)
/* E2F42C 8019FCFC C7B00064 */  lwc1        $ft4, 0x64($sp)
/* E2F430 8019FD00 E6100058 */  swc1        $ft4, 0x58($s0)
/* E2F434 8019FD04 8638004E */  lh          $t8, 0x4E($s1)
/* E2F438 8019FD08 2B010002 */  slti        $at, $t8, 0x2
/* E2F43C 8019FD0C 14200019 */  bnez        $at, .LE16C50_8019FD74
/* E2F440 8019FD10 3C014170 */   lui        $at, (0x41700000 >> 16)
/* E2F444 8019FD14 44819000 */  mtc1        $at, $ft5
/* E2F448 8019FD18 10000016 */  b           .LE16C50_8019FD74
/* E2F44C 8019FD1C E6120070 */   swc1       $ft5, 0x70($s0)
.LE16C50_8019FD20:
/* E2F450 8019FD20 8DCE8280 */  lw          $t6, %lo(gPlayer)($t6)
/* E2F454 8019FD24 C5C400C8 */  lwc1        $ft0, 0xC8($t6)
/* E2F458 8019FD28 10000012 */  b           .LE16C50_8019FD74
/* E2F45C 8019FD2C E604005C */   swc1       $ft0, 0x5C($s0)
.LE16C50_8019FD30:
/* E2F460 8019FD30 0C0013AC */  jal         Rand_ZeroOne
/* E2F464 8019FD34 00000000 */   nop
/* E2F468 8019FD38 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E2F46C 8019FD3C 44813000 */  mtc1        $at, $ft1
/* E2F470 8019FD40 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E2F474 8019FD44 44814000 */  mtc1        $at, $ft2
/* E2F478 8019FD48 46060281 */  sub.s       $ft3, $fv0, $ft1
/* E2F47C 8019FD4C 46085402 */  mul.s       $ft4, $ft3, $ft2
/* E2F480 8019FD50 0C0013AC */  jal         Rand_ZeroOne
/* E2F484 8019FD54 E6100054 */   swc1       $ft4, 0x54($s0)
/* E2F488 8019FD58 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E2F48C 8019FD5C 44819000 */  mtc1        $at, $ft5
/* E2F490 8019FD60 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E2F494 8019FD64 44813000 */  mtc1        $at, $ft1
/* E2F498 8019FD68 46120101 */  sub.s       $ft0, $fv0, $ft5
/* E2F49C 8019FD6C 46062282 */  mul.s       $ft3, $ft0, $ft1
/* E2F4A0 8019FD70 E60A005C */  swc1        $ft3, 0x5C($s0)
.LE16C50_8019FD74:
/* E2F4A4 8019FD74 C6520014 */  lwc1        $ft5, 0x14($s2)
/* E2F4A8 8019FD78 3C0142B4 */  lui         $at, (0x42B40000 >> 16)
/* E2F4AC 8019FD7C 44818000 */  mtc1        $at, $ft4
/* E2F4B0 8019FD80 E6120064 */  swc1        $ft5, 0x64($s0)
/* E2F4B4 8019FD84 0C0013AC */  jal         Rand_ZeroOne
/* E2F4B8 8019FD88 E6100060 */   swc1       $ft4, 0x60($s0)
/* E2F4BC 8019FD8C 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E2F4C0 8019FD90 44819000 */  mtc1        $at, $ft5
/* E2F4C4 8019FD94 240F00FF */  addiu       $t7, $zero, 0xFF
/* E2F4C8 8019FD98 24080001 */  addiu       $t0, $zero, 0x1
/* E2F4CC 8019FD9C 46120102 */  mul.s       $ft0, $fv0, $ft5
/* E2F4D0 8019FDA0 24090004 */  addiu       $t1, $zero, 0x4
/* E2F4D4 8019FDA4 240A0005 */  addiu       $t2, $zero, 0x5
/* E2F4D8 8019FDA8 A60F0044 */  sh          $t7, 0x44($s0)
/* E2F4DC 8019FDAC A6080048 */  sh          $t0, 0x48($s0)
/* E2F4E0 8019FDB0 A609004E */  sh          $t1, 0x4E($s0)
/* E2F4E4 8019FDB4 A20A004C */  sb          $t2, 0x4C($s0)
/* E2F4E8 8019FDB8 E6040018 */  swc1        $ft0, 0x18($s0)
/* E2F4EC 8019FDBC 2604001C */  addiu       $a0, $s0, 0x1C
/* E2F4F0 8019FDC0 0C0184AE */  jal         Object_SetInfo
/* E2F4F4 8019FDC4 96050002 */   lhu        $a1, 0x2($s0)
/* E2F4F8 8019FDC8 8FBF0024 */  lw          $ra, 0x24($sp)
/* E2F4FC 8019FDCC 8FB00018 */  lw          $s0, 0x18($sp)
/* E2F500 8019FDD0 8FB1001C */  lw          $s1, 0x1C($sp)
/* E2F504 8019FDD4 8FB20020 */  lw          $s2, 0x20($sp)
/* E2F508 8019FDD8 03E00008 */  jr          $ra
/* E2F50C 8019FDDC 27BD0050 */   addiu      $sp, $sp, 0x50
glabel func_E16C50_8019FDE0
/* E2F510 8019FDE0 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* E2F514 8019FDE4 AFB00018 */  sw          $s0, 0x18($sp)
/* E2F518 8019FDE8 00A08025 */  or          $s0, $a1, $zero
/* E2F51C 8019FDEC AFBF001C */  sw          $ra, 0x1C($sp)
/* E2F520 8019FDF0 AFA40020 */  sw          $a0, 0x20($sp)
/* E2F524 8019FDF4 AFA60028 */  sw          $a2, 0x28($sp)
/* E2F528 8019FDF8 AFA7002C */  sw          $a3, 0x2C($sp)
/* E2F52C 8019FDFC 0C01851D */  jal         Object_8C_Initialize
/* E2F530 8019FE00 02002025 */   or         $a0, $s0, $zero
/* E2F534 8019FE04 240E0002 */  addiu       $t6, $zero, 0x2
/* E2F538 8019FE08 240F0188 */  addiu       $t7, $zero, 0x188
/* E2F53C 8019FE0C A20E0000 */  sb          $t6, 0x0($s0)
/* E2F540 8019FE10 A60F0002 */  sh          $t7, 0x2($s0)
/* E2F544 8019FE14 C7A40028 */  lwc1        $ft0, 0x28($sp)
/* E2F548 8019FE18 3C198018 */  lui         $t9, %hi(gPlayer)
/* E2F54C 8019FE1C 3C088018 */  lui         $t0, %hi(gPlayer)
/* E2F550 8019FE20 E6040004 */  swc1        $ft0, 0x4($s0)
/* E2F554 8019FE24 C7A6002C */  lwc1        $ft1, 0x2C($sp)
/* E2F558 8019FE28 E6060008 */  swc1        $ft1, 0x8($s0)
/* E2F55C 8019FE2C C7A80030 */  lwc1        $ft2, 0x30($sp)
/* E2F560 8019FE30 E608000C */  swc1        $ft2, 0xC($s0)
/* E2F564 8019FE34 8FB80038 */  lw          $t8, 0x38($sp)
/* E2F568 8019FE38 13000008 */  beqz        $t8, .LE16C50_8019FE5C
/* E2F56C 8019FE3C 00000000 */   nop
/* E2F570 8019FE40 8F398280 */  lw          $t9, %lo(gPlayer)($t9)
/* E2F574 8019FE44 3C0142A0 */  lui         $at, (0x42A00000 >> 16)
/* E2F578 8019FE48 44818000 */  mtc1        $at, $ft4
/* E2F57C 8019FE4C C72A00C8 */  lwc1        $ft3, 0xC8($t9)
/* E2F580 8019FE50 46105480 */  add.s       $ft5, $ft3, $ft4
/* E2F584 8019FE54 10000007 */  b           .LE16C50_8019FE74
/* E2F588 8019FE58 E612005C */   swc1       $ft5, 0x5C($s0)
.LE16C50_8019FE5C:
/* E2F58C 8019FE5C 8D088280 */  lw          $t0, %lo(gPlayer)($t0)
/* E2F590 8019FE60 3C014170 */  lui         $at, (0x41700000 >> 16)
/* E2F594 8019FE64 44813000 */  mtc1        $at, $ft1
/* E2F598 8019FE68 C50400C8 */  lwc1        $ft0, 0xC8($t0)
/* E2F59C 8019FE6C 46062200 */  add.s       $ft2, $ft0, $ft1
/* E2F5A0 8019FE70 E608005C */  swc1        $ft2, 0x5C($s0)
.LE16C50_8019FE74:
/* E2F5A4 8019FE74 C7AA0034 */  lwc1        $ft3, 0x34($sp)
/* E2F5A8 8019FE78 44809000 */  mtc1        $zero, $ft5
/* E2F5AC 8019FE7C E60A0070 */  swc1        $ft3, 0x70($s0)
/* E2F5B0 8019FE80 8FA90020 */  lw          $t1, 0x20($sp)
/* E2F5B4 8019FE84 C5300014 */  lwc1        $ft4, 0x14($t1)
/* E2F5B8 8019FE88 E6120060 */  swc1        $ft5, 0x60($s0)
/* E2F5BC 8019FE8C 0C0013AC */  jal         Rand_ZeroOne
/* E2F5C0 8019FE90 E6100064 */   swc1       $ft4, 0x64($s0)
/* E2F5C4 8019FE94 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E2F5C8 8019FE98 44812000 */  mtc1        $at, $ft0
/* E2F5CC 8019FE9C 240A00FF */  addiu       $t2, $zero, 0xFF
/* E2F5D0 8019FEA0 240B0001 */  addiu       $t3, $zero, 0x1
/* E2F5D4 8019FEA4 46040182 */  mul.s       $ft1, $fv0, $ft0
/* E2F5D8 8019FEA8 A60A0044 */  sh          $t2, 0x44($s0)
/* E2F5DC 8019FEAC A60B0048 */  sh          $t3, 0x48($s0)
/* E2F5E0 8019FEB0 2604001C */  addiu       $a0, $s0, 0x1C
/* E2F5E4 8019FEB4 96050002 */  lhu         $a1, 0x2($s0)
/* E2F5E8 8019FEB8 E6060018 */  swc1        $ft1, 0x18($s0)
/* E2F5EC 8019FEBC 8FAC0038 */  lw          $t4, 0x38($sp)
/* E2F5F0 8019FEC0 258D0005 */  addiu       $t5, $t4, 0x5
/* E2F5F4 8019FEC4 0C0184AE */  jal         Object_SetInfo
/* E2F5F8 8019FEC8 A60D004E */   sh         $t5, 0x4E($s0)
/* E2F5FC 8019FECC 240E0028 */  addiu       $t6, $zero, 0x28
/* E2F600 8019FED0 A20E0034 */  sb          $t6, 0x34($s0)
/* E2F604 8019FED4 8FBF001C */  lw          $ra, 0x1C($sp)
/* E2F608 8019FED8 8FB00018 */  lw          $s0, 0x18($sp)
/* E2F60C 8019FEDC 27BD0020 */  addiu       $sp, $sp, 0x20
/* E2F610 8019FEE0 03E00008 */  jr          $ra
/* E2F614 8019FEE4 00000000 */   nop
glabel func_E16C50_8019FEE8
/* E2F618 8019FEE8 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E2F61C 8019FEEC 44856000 */  mtc1        $a1, $fa0
/* E2F620 8019FEF0 AFBF0014 */  sw          $ra, 0x14($sp)
/* E2F624 8019FEF4 3C058017 */  lui         $a1, %hi(gObjects8C + 0x2648)
/* E2F628 8019FEF8 3C028017 */  lui         $v0, %hi(gObjects8C)
/* E2F62C 8019FEFC 24420130 */  addiu       $v0, $v0, %lo(gObjects8C)
/* E2F630 8019FF00 24A52778 */  addiu       $a1, $a1, %lo(gObjects8C + 0x2648)
/* E2F634 8019FF04 90AE0000 */  lbu         $t6, 0x0($a1)
.LE16C50_8019FF08:
/* E2F638 8019FF08 55C00007 */  bnel        $t6, $zero, .LE16C50_8019FF28
/* E2F63C 8019FF0C 24A5FF74 */   addiu      $a1, $a1, -0x8C
/* E2F640 8019FF10 44066000 */  mfc1        $a2, $fa0
/* E2F644 8019FF14 0C067E67 */  jal         func_E16C50_8019F99C
/* E2F648 8019FF18 00000000 */   nop
/* E2F64C 8019FF1C 10000006 */  b           .LE16C50_8019FF38
/* E2F650 8019FF20 8FBF0014 */   lw         $ra, 0x14($sp)
/* E2F654 8019FF24 24A5FF74 */  addiu       $a1, $a1, -0x8C
.LE16C50_8019FF28:
/* E2F658 8019FF28 00A2082B */  sltu        $at, $a1, $v0
/* E2F65C 8019FF2C 5020FFF6 */  beql        $at, $zero, .LE16C50_8019FF08
/* E2F660 8019FF30 90AE0000 */   lbu        $t6, 0x0($a1)
/* E2F664 8019FF34 8FBF0014 */  lw          $ra, 0x14($sp)
.LE16C50_8019FF38:
/* E2F668 8019FF38 27BD0018 */  addiu       $sp, $sp, 0x18
/* E2F66C 8019FF3C 03E00008 */  jr          $ra
/* E2F670 8019FF40 00000000 */   nop
glabel func_E16C50_8019FF44
/* E2F674 8019FF44 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E2F678 8019FF48 44856000 */  mtc1        $a1, $fa0
/* E2F67C 8019FF4C 44867000 */  mtc1        $a2, $fa1
/* E2F680 8019FF50 AFBF0024 */  sw          $ra, 0x24($sp)
/* E2F684 8019FF54 AFA70034 */  sw          $a3, 0x34($sp)
/* E2F688 8019FF58 3C058017 */  lui         $a1, %hi(gObjects8C + 0x2648)
/* E2F68C 8019FF5C 3C028017 */  lui         $v0, %hi(gObjects8C)
/* E2F690 8019FF60 24420130 */  addiu       $v0, $v0, %lo(gObjects8C)
/* E2F694 8019FF64 24A52778 */  addiu       $a1, $a1, %lo(gObjects8C + 0x2648)
/* E2F698 8019FF68 90AE0000 */  lbu         $t6, 0x0($a1)
.LE16C50_8019FF6C:
/* E2F69C 8019FF6C 55C0000D */  bnel        $t6, $zero, .LE16C50_8019FFA4
/* E2F6A0 8019FF70 24A5FF74 */   addiu      $a1, $a1, -0x8C
/* E2F6A4 8019FF74 C7A40034 */  lwc1        $ft0, 0x34($sp)
/* E2F6A8 8019FF78 C7A60038 */  lwc1        $ft1, 0x38($sp)
/* E2F6AC 8019FF7C C7A8003C */  lwc1        $ft2, 0x3C($sp)
/* E2F6B0 8019FF80 44066000 */  mfc1        $a2, $fa0
/* E2F6B4 8019FF84 44077000 */  mfc1        $a3, $fa1
/* E2F6B8 8019FF88 E7A40010 */  swc1        $ft0, 0x10($sp)
/* E2F6BC 8019FF8C E7A60014 */  swc1        $ft1, 0x14($sp)
/* E2F6C0 8019FF90 0C067EA9 */  jal         func_E16C50_8019FAA4
/* E2F6C4 8019FF94 E7A80018 */   swc1       $ft2, 0x18($sp)
/* E2F6C8 8019FF98 10000006 */  b           .LE16C50_8019FFB4
/* E2F6CC 8019FF9C 8FBF0024 */   lw         $ra, 0x24($sp)
/* E2F6D0 8019FFA0 24A5FF74 */  addiu       $a1, $a1, -0x8C
.LE16C50_8019FFA4:
/* E2F6D4 8019FFA4 00A2082B */  sltu        $at, $a1, $v0
/* E2F6D8 8019FFA8 5020FFF0 */  beql        $at, $zero, .LE16C50_8019FF6C
/* E2F6DC 8019FFAC 90AE0000 */   lbu        $t6, 0x0($a1)
/* E2F6E0 8019FFB0 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_8019FFB4:
/* E2F6E4 8019FFB4 27BD0028 */  addiu       $sp, $sp, 0x28
/* E2F6E8 8019FFB8 03E00008 */  jr          $ra
/* E2F6EC 8019FFBC 00000000 */   nop
glabel func_E16C50_8019FFC0
/* E2F6F0 8019FFC0 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E2F6F4 8019FFC4 44856000 */  mtc1        $a1, $fa0
/* E2F6F8 8019FFC8 44867000 */  mtc1        $a2, $fa1
/* E2F6FC 8019FFCC AFBF0024 */  sw          $ra, 0x24($sp)
/* E2F700 8019FFD0 AFA70034 */  sw          $a3, 0x34($sp)
/* E2F704 8019FFD4 3C058017 */  lui         $a1, %hi(gObjects8C + 0x2648)
/* E2F708 8019FFD8 3C028017 */  lui         $v0, %hi(gObjects8C)
/* E2F70C 8019FFDC 24420130 */  addiu       $v0, $v0, %lo(gObjects8C)
/* E2F710 8019FFE0 24A52778 */  addiu       $a1, $a1, %lo(gObjects8C + 0x2648)
/* E2F714 8019FFE4 90AE0000 */  lbu         $t6, 0x0($a1)
.LE16C50_8019FFE8:
/* E2F718 8019FFE8 55C0000D */  bnel        $t6, $zero, .LE16C50_801A0020
/* E2F71C 8019FFEC 24A5FF74 */   addiu      $a1, $a1, -0x8C
/* E2F720 8019FFF0 C7A40034 */  lwc1        $ft0, 0x34($sp)
/* E2F724 8019FFF4 C7A60038 */  lwc1        $ft1, 0x38($sp)
/* E2F728 8019FFF8 8FAF003C */  lw          $t7, 0x3C($sp)
/* E2F72C 8019FFFC 44066000 */  mfc1        $a2, $fa0
/* E2F730 801A0000 44077000 */  mfc1        $a3, $fa1
/* E2F734 801A0004 E7A40010 */  swc1        $ft0, 0x10($sp)
/* E2F738 801A0008 E7A60014 */  swc1        $ft1, 0x14($sp)
/* E2F73C 801A000C 0C067F78 */  jal         func_E16C50_8019FDE0
/* E2F740 801A0010 AFAF0018 */   sw         $t7, 0x18($sp)
/* E2F744 801A0014 10000006 */  b           .LE16C50_801A0030
/* E2F748 801A0018 8FBF0024 */   lw         $ra, 0x24($sp)
/* E2F74C 801A001C 24A5FF74 */  addiu       $a1, $a1, -0x8C
.LE16C50_801A0020:
/* E2F750 801A0020 00A2082B */  sltu        $at, $a1, $v0
/* E2F754 801A0024 5020FFF0 */  beql        $at, $zero, .LE16C50_8019FFE8
/* E2F758 801A0028 90AE0000 */   lbu        $t6, 0x0($a1)
/* E2F75C 801A002C 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_801A0030:
/* E2F760 801A0030 27BD0028 */  addiu       $sp, $sp, 0x28
/* E2F764 801A0034 03E00008 */  jr          $ra
/* E2F768 801A0038 00000000 */   nop
glabel func_E16C50_801A003C
/* E2F76C 801A003C 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E2F770 801A0040 AFBF001C */  sw          $ra, 0x1C($sp)
/* E2F774 801A0044 00803025 */  or          $a2, $a0, $zero
/* E2F778 801A0048 84C200B8 */  lh          $v0, 0xB8($a2)
/* E2F77C 801A004C 24010001 */  addiu       $at, $zero, 0x1
/* E2F780 801A0050 50400006 */  beql        $v0, $zero, .LE16C50_801A006C
/* E2F784 801A0054 94CE00BE */   lhu        $t6, 0xBE($a2)
/* E2F788 801A0058 50410019 */  beql        $v0, $at, .LE16C50_801A00C0
/* E2F78C 801A005C 94CB00BE */   lhu        $t3, 0xBE($a2)
/* E2F790 801A0060 1000002C */  b           .LE16C50_801A0114
/* E2F794 801A0064 8FBF001C */   lw         $ra, 0x1C($sp)
/* E2F798 801A0068 94CE00BE */  lhu         $t6, 0xBE($a2)
.LE16C50_801A006C:
/* E2F79C 801A006C 240F0001 */  addiu       $t7, $zero, 0x1
/* E2F7A0 801A0070 24180032 */  addiu       $t8, $zero, 0x32
/* E2F7A4 801A0074 55C00005 */  bnel        $t6, $zero, .LE16C50_801A008C
/* E2F7A8 801A0078 94D900BC */   lhu        $t9, 0xBC($a2)
/* E2F7AC 801A007C A4CF00B8 */  sh          $t7, 0xB8($a2)
/* E2F7B0 801A0080 10000023 */  b           .LE16C50_801A0110
/* E2F7B4 801A0084 A4D800BE */   sh         $t8, 0xBE($a2)
/* E2F7B8 801A0088 94D900BC */  lhu         $t9, 0xBC($a2)
.LE16C50_801A008C:
/* E2F7BC 801A008C 24080002 */  addiu       $t0, $zero, 0x2
/* E2F7C0 801A0090 00C02025 */  or          $a0, $a2, $zero
/* E2F7C4 801A0094 1720001E */  bnez        $t9, .LE16C50_801A0110
/* E2F7C8 801A0098 3C05447A */   lui        $a1, (0x447A0000 >> 16)
/* E2F7CC 801A009C A4C800BC */  sh          $t0, 0xBC($a2)
/* E2F7D0 801A00A0 0C067FBA */  jal         func_E16C50_8019FEE8
/* E2F7D4 801A00A4 AFA60028 */   sw         $a2, 0x28($sp)
/* E2F7D8 801A00A8 8FA60028 */  lw          $a2, 0x28($sp)
/* E2F7DC 801A00AC 84C9004E */  lh          $t1, 0x4E($a2)
/* E2F7E0 801A00B0 252A0001 */  addiu       $t2, $t1, 0x1
/* E2F7E4 801A00B4 10000016 */  b           .LE16C50_801A0110
/* E2F7E8 801A00B8 A4CA004E */   sh         $t2, 0x4E($a2)
/* E2F7EC 801A00BC 94CB00BE */  lhu         $t3, 0xBE($a2)
.LE16C50_801A00C0:
/* E2F7F0 801A00C0 240C0032 */  addiu       $t4, $zero, 0x32
/* E2F7F4 801A00C4 24C40100 */  addiu       $a0, $a2, 0x100
/* E2F7F8 801A00C8 15600011 */  bnez        $t3, .LE16C50_801A0110
/* E2F7FC 801A00CC 24C50004 */   addiu      $a1, $a2, 0x4
/* E2F800 801A00D0 A4C000B8 */  sh          $zero, 0xB8($a2)
/* E2F804 801A00D4 A4CC00BE */  sh          $t4, 0xBE($a2)
/* E2F808 801A00D8 A4C0004E */  sh          $zero, 0x4E($a2)
/* E2F80C 801A00DC 0C017C3A */  jal         func_8005F0E8
/* E2F810 801A00E0 AFA40020 */   sw         $a0, 0x20($sp)
/* E2F814 801A00E4 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E2F818 801A00E8 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E2F81C 801A00EC 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E2F820 801A00F0 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E2F824 801A00F4 3C041903 */  lui         $a0, (0x19035053 >> 16)
/* E2F828 801A00F8 34845053 */  ori         $a0, $a0, (0x19035053 & 0xFFFF)
/* E2F82C 801A00FC AFAD0014 */  sw          $t5, 0x14($sp)
/* E2F830 801A0100 AFA70010 */  sw          $a3, 0x10($sp)
/* E2F834 801A0104 8FA50020 */  lw          $a1, 0x20($sp)
/* E2F838 801A0108 0C006486 */  jal         Audio_PlaySfx
/* E2F83C 801A010C 24060004 */   addiu      $a2, $zero, 0x4
.LE16C50_801A0110:
/* E2F840 801A0110 8FBF001C */  lw          $ra, 0x1C($sp)
.LE16C50_801A0114:
/* E2F844 801A0114 27BD0028 */  addiu       $sp, $sp, 0x28
/* E2F848 801A0118 03E00008 */  jr          $ra
/* E2F84C 801A011C 00000000 */   nop
.section .late_rodata
dlabel jtbl_E16C50_801C153C
/* E50C6C 801C153C 801A0160 */ .word .LE16C50_801A0160
/* E50C70 801C1540 801A03E4 */ .word .LE16C50_801A03E4
/* E50C74 801C1544 801A048C */ .word .LE16C50_801A048C
/* E50C78 801C1548 801A04F4 */ .word .LE16C50_801A04F4
/* E50C7C 801C154C 801A0550 */ .word .LE16C50_801A0550
/* E50C80 801C1550 801A0778 */ .word .LE16C50_801A0778
/* E50C84 801C1554 801A0948 */ .word .LE16C50_801A0948
/* E50C88 801C1558 801A0954 */ .word .LE16C50_801A0954

dlabel D_E16C50_801C155C
/* E50C8C 801C155C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1560
/* E50C90 801C1560 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1564
/* E50C94 801C1564 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C1568
/* E50C98 801C1568 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C156C
/* E50C9C 801C156C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1570
/* E50CA0 801C1570 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1574
/* E50CA4 801C1574 411CCCCD */ .float 9.800000191

dlabel D_E16C50_801C1578
/* E50CA8 801C1578 408CCCCD */ .float 4.400000095

dlabel D_E16C50_801C157C
/* E50CAC 801C157C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1580
/* E50CB0 801C1580 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1584
/* E50CB4 801C1584 411CCCCD */ .float 9.800000191

dlabel D_E16C50_801C1588
/* E50CB8 801C1588 408CCCCD */ .float 4.400000095


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A0120
/* E2F850 801A0120 27BDFFA0 */  addiu       $sp, $sp, -0x60
/* E2F854 801A0124 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E2F858 801A0128 AFB00028 */  sw          $s0, 0x28($sp)
/* E2F85C 801A012C 44811000 */  mtc1        $at, $fv1
/* E2F860 801A0130 00808025 */  or          $s0, $a0, $zero
/* E2F864 801A0134 AFBF002C */  sw          $ra, 0x2C($sp)
/* E2F868 801A0138 960E004E */  lhu         $t6, 0x4E($s0)
/* E2F86C 801A013C 46001386 */  mov.s       $fa1, $fv1
/* E2F870 801A0140 2DC10008 */  sltiu       $at, $t6, 0x8
/* E2F874 801A0144 10200265 */  beqz        $at, .LE16C50_801A0ADC
/* E2F878 801A0148 000E7080 */   sll        $t6, $t6, 2
/* E2F87C 801A014C 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C153C)
/* E2F880 801A0150 002E0821 */  addu        $at, $at, $t6
/* E2F884 801A0154 8C2E153C */  lw          $t6, %lo(jtbl_E16C50_801C153C)($at)
/* E2F888 801A0158 01C00008 */  jr          $t6
/* E2F88C 801A015C 00000000 */   nop
.LE16C50_801A0160:
/* E2F890 801A0160 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E2F894 801A0164 8E050054 */  lw          $a1, 0x54($s0)
/* E2F898 801A0168 8E060058 */  lw          $a2, 0x58($s0)
/* E2F89C 801A016C 8E07005C */  lw          $a3, 0x5C($s0)
/* E2F8A0 801A0170 AFA00010 */  sw          $zero, 0x10($sp)
/* E2F8A4 801A0174 0C0016C0 */  jal         Matrix_Translate
/* E2F8A8 801A0178 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E2F8AC 801A017C 3C01801C */  lui         $at, %hi(D_E16C50_801C155C)
/* E2F8B0 801A0180 C426155C */  lwc1        $ft1, %lo(D_E16C50_801C155C)($at)
/* E2F8B4 801A0184 C6040064 */  lwc1        $ft0, 0x64($s0)
/* E2F8B8 801A0188 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E2F8BC 801A018C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E2F8C0 801A0190 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E2F8C4 801A0194 24060001 */  addiu       $a2, $zero, 0x1
/* E2F8C8 801A0198 44054000 */  mfc1        $a1, $ft2
/* E2F8CC 801A019C 0C0017A4 */  jal         Matrix_RotateY
/* E2F8D0 801A01A0 00000000 */   nop
/* E2F8D4 801A01A4 3C01801C */  lui         $at, %hi(D_E16C50_801C1560)
/* E2F8D8 801A01A8 C4241560 */  lwc1        $ft0, %lo(D_E16C50_801C1560)($at)
/* E2F8DC 801A01AC C60A0060 */  lwc1        $ft3, 0x60($s0)
/* E2F8E0 801A01B0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E2F8E4 801A01B4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E2F8E8 801A01B8 46045182 */  mul.s       $ft1, $ft3, $ft0
/* E2F8EC 801A01BC 24060001 */  addiu       $a2, $zero, 0x1
/* E2F8F0 801A01C0 44053000 */  mfc1        $a1, $ft1
/* E2F8F4 801A01C4 0C001751 */  jal         Matrix_RotateX
/* E2F8F8 801A01C8 00000000 */   nop
/* E2F8FC 801A01CC 44800000 */  mtc1        $zero, $fv0
/* E2F900 801A01D0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E2F904 801A01D4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E2F908 801A01D8 E7A0003C */  swc1        $fv0, 0x3C($sp)
/* E2F90C 801A01DC E7A00040 */  swc1        $fv0, 0x40($sp)
/* E2F910 801A01E0 C608006C */  lwc1        $ft2, 0x6C($s0)
/* E2F914 801A01E4 27A5003C */  addiu       $a1, $sp, 0x3C
/* E2F918 801A01E8 26060004 */  addiu       $a2, $s0, 0x4
/* E2F91C 801A01EC 46004287 */  neg.s       $ft3, $ft2
/* E2F920 801A01F0 0C001A5C */  jal         Matrix_MultVec3f
/* E2F924 801A01F4 E7AA0044 */   swc1       $ft3, 0x44($sp)
/* E2F928 801A01F8 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E2F92C 801A01FC 44813000 */  mtc1        $at, $ft1
/* E2F930 801A0200 C6040060 */  lwc1        $ft0, 0x60($s0)
/* E2F934 801A0204 3C0F8017 */  lui         $t7, %hi(gFrameCount)
/* E2F938 801A0208 3C048018 */  lui         $a0, %hi(gPlayer)
/* E2F93C 801A020C 46062200 */  add.s       $ft2, $ft0, $ft1
/* E2F940 801A0210 E6080060 */  swc1        $ft2, 0x60($s0)
/* E2F944 801A0214 8DEF7DB0 */  lw          $t7, %lo(gFrameCount)($t7)
/* E2F948 801A0218 31F80001 */  andi        $t8, $t7, 0x1
/* E2F94C 801A021C 17000008 */  bnez        $t8, .LE16C50_801A0240
/* E2F950 801A0220 00000000 */   nop
/* E2F954 801A0224 9219004C */  lbu         $t9, 0x4C($s0)
/* E2F958 801A0228 27280001 */  addiu       $t0, $t9, 0x1
/* E2F95C 801A022C 310900FF */  andi        $t1, $t0, 0xFF
/* E2F960 801A0230 29210003 */  slti        $at, $t1, 0x3
/* E2F964 801A0234 14200002 */  bnez        $at, .LE16C50_801A0240
/* E2F968 801A0238 A208004C */   sb         $t0, 0x4C($s0)
/* E2F96C 801A023C A200004C */  sb          $zero, 0x4C($s0)
.LE16C50_801A0240:
/* E2F970 801A0240 8C848280 */  lw          $a0, %lo(gPlayer)($a0)
/* E2F974 801A0244 24010007 */  addiu       $at, $zero, 0x7
/* E2F978 801A0248 8C8A01C8 */  lw          $t2, 0x1C8($a0)
/* E2F97C 801A024C 11410008 */  beq         $t2, $at, .LE16C50_801A0270
/* E2F980 801A0250 3C014140 */   lui        $at, (0x41400000 >> 16)
/* E2F984 801A0254 44812000 */  mtc1        $at, $ft0
/* E2F988 801A0258 C60A0070 */  lwc1        $ft3, 0x70($s0)
/* E2F98C 801A025C 02002825 */  or          $a1, $s0, $zero
/* E2F990 801A0260 46045182 */  mul.s       $ft1, $ft3, $ft0
/* E2F994 801A0264 44063000 */  mfc1        $a2, $ft1
/* E2F998 801A0268 0C01E9DD */  jal         func_8007A774
/* E2F99C 801A026C 00000000 */   nop
.LE16C50_801A0270:
/* E2F9A0 801A0270 3C01433E */  lui         $at, (0x433E0000 >> 16)
/* E2F9A4 801A0274 44814000 */  mtc1        $at, $ft2
/* E2F9A8 801A0278 C60A0060 */  lwc1        $ft3, 0x60($s0)
/* E2F9AC 801A027C 02002025 */  or          $a0, $s0, $zero
/* E2F9B0 801A0280 460A403C */  c.lt.s      $ft2, $ft3
/* E2F9B4 801A0284 00000000 */  nop
/* E2F9B8 801A0288 45020004 */  bc1fl       .LE16C50_801A029C
/* E2F9BC 801A028C 860B0048 */   lh         $t3, 0x48($s0)
/* E2F9C0 801A0290 0C0183EF */  jal         Object_Kill
/* E2F9C4 801A0294 26050080 */   addiu      $a1, $s0, 0x80
/* E2F9C8 801A0298 860B0048 */  lh          $t3, 0x48($s0)
.LE16C50_801A029C:
/* E2F9CC 801A029C 27A4005C */  addiu       $a0, $sp, 0x5C
/* E2F9D0 801A02A0 27A5004C */  addiu       $a1, $sp, 0x4C
/* E2F9D4 801A02A4 AFAB0048 */  sw          $t3, 0x48($sp)
/* E2F9D8 801A02A8 C604000C */  lwc1        $ft0, 0xC($s0)
/* E2F9DC 801A02AC 8E070008 */  lw          $a3, 0x8($s0)
/* E2F9E0 801A02B0 8E060004 */  lw          $a2, 0x4($s0)
/* E2F9E4 801A02B4 0C029CF9 */  jal         func_800A73E4
/* E2F9E8 801A02B8 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E2F9EC 801A02BC 10400014 */  beqz        $v0, .LE16C50_801A0310
/* E2F9F0 801A02C0 3C0141A0 */   lui        $at, (0x41A00000 >> 16)
/* E2F9F4 801A02C4 44813000 */  mtc1        $at, $ft1
/* E2F9F8 801A02C8 C6080070 */  lwc1        $ft2, 0x70($s0)
/* E2F9FC 801A02CC 240C0001 */  addiu       $t4, $zero, 0x1
/* E2FA00 801A02D0 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E2FA04 801A02D4 46083032 */  c.eq.s      $ft1, $ft2
/* E2FA08 801A02D8 3C041903 */  lui         $a0, (0x19035054 >> 16)
/* E2FA0C 801A02DC A60C0048 */  sh          $t4, 0x48($s0)
/* E2FA10 801A02E0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E2FA14 801A02E4 4500000B */  bc1f        .LE16C50_801A0314
/* E2FA18 801A02E8 34845054 */   ori        $a0, $a0, (0x19035054 & 0xFFFF)
/* E2FA1C 801A02EC 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E2FA20 801A02F0 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E2FA24 801A02F4 AFAD0014 */  sw          $t5, 0x14($sp)
/* E2FA28 801A02F8 26050080 */  addiu       $a1, $s0, 0x80
/* E2FA2C 801A02FC 24060004 */  addiu       $a2, $zero, 0x4
/* E2FA30 801A0300 0C006486 */  jal         Audio_PlaySfx
/* E2FA34 801A0304 AFA70010 */   sw         $a3, 0x10($sp)
/* E2FA38 801A0308 10000003 */  b           .LE16C50_801A0318
/* E2FA3C 801A030C 86020048 */   lh         $v0, 0x48($s0)
.LE16C50_801A0310:
/* E2FA40 801A0310 A6000048 */  sh          $zero, 0x48($s0)
.LE16C50_801A0314:
/* E2FA44 801A0314 86020048 */  lh          $v0, 0x48($s0)
.LE16C50_801A0318:
/* E2FA48 801A0318 8FAE0048 */  lw          $t6, 0x48($sp)
/* E2FA4C 801A031C 51C201F0 */  beql        $t6, $v0, .LE16C50_801A0AE0
/* E2FA50 801A0320 8FBF002C */   lw         $ra, 0x2C($sp)
/* E2FA54 801A0324 10400005 */  beqz        $v0, .LE16C50_801A033C
/* E2FA58 801A0328 3C01C248 */   lui        $at, (0xC2480000 >> 16)
/* E2FA5C 801A032C 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E2FA60 801A0330 44819000 */  mtc1        $at, $ft5
/* E2FA64 801A0334 10000004 */  b           .LE16C50_801A0348
/* E2FA68 801A0338 8E0F0040 */   lw         $t7, 0x40($s0)
.LE16C50_801A033C:
/* E2FA6C 801A033C 44819000 */  mtc1        $at, $ft5
/* E2FA70 801A0340 00000000 */  nop
/* E2FA74 801A0344 8E0F0040 */  lw          $t7, 0x40($s0)
.LE16C50_801A0348:
/* E2FA78 801A0348 3C01C2C8 */  lui         $at, (0xC2C80000 >> 16)
/* E2FA7C 801A034C 31F80001 */  andi        $t8, $t7, 0x1
/* E2FA80 801A0350 53000006 */  beql        $t8, $zero, .LE16C50_801A036C
/* E2FA84 801A0354 44818000 */   mtc1       $at, $ft4
/* E2FA88 801A0358 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E2FA8C 801A035C 44818000 */  mtc1        $at, $ft4
/* E2FA90 801A0360 10000004 */  b           .LE16C50_801A0374
/* E2FA94 801A0364 E7B00058 */   swc1       $ft4, 0x58($sp)
/* E2FA98 801A0368 44818000 */  mtc1        $at, $ft4
.LE16C50_801A036C:
/* E2FA9C 801A036C 00000000 */  nop
/* E2FAA0 801A0370 E7B00058 */  swc1        $ft4, 0x58($sp)
.LE16C50_801A0374:
/* E2FAA4 801A0374 0C0013AC */  jal         Rand_ZeroOne
/* E2FAA8 801A0378 E7B20054 */   swc1       $ft5, 0x54($sp)
/* E2FAAC 801A037C 3C013E80 */  lui         $at, (0x3E800000 >> 16)
/* E2FAB0 801A0380 44813000 */  mtc1        $at, $ft1
/* E2FAB4 801A0384 C7B00058 */  lwc1        $ft4, 0x58($sp)
/* E2FAB8 801A0388 C60A0004 */  lwc1        $ft3, 0x4($s0)
/* E2FABC 801A038C 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E2FAC0 801A0390 46068082 */  mul.s       $fv1, $ft4, $ft1
/* E2FAC4 801A0394 44814000 */  mtc1        $at, $ft2
/* E2FAC8 801A0398 46105300 */  add.s       $fa0, $ft3, $ft4
/* E2FACC 801A039C C7B20054 */  lwc1        $ft5, 0x54($sp)
/* E2FAD0 801A03A0 46080282 */  mul.s       $ft3, $fv0, $ft2
/* E2FAD4 801A03A4 C6040008 */  lwc1        $ft0, 0x8($s0)
/* E2FAD8 801A03A8 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E2FADC 801A03AC 8E06000C */  lw          $a2, 0xC($s0)
/* E2FAE0 801A03B0 44814000 */  mtc1        $at, $ft2
/* E2FAE4 801A03B4 46122380 */  add.s       $fa1, $ft0, $ft5
/* E2FAE8 801A03B8 44812000 */  mtc1        $at, $ft0
/* E2FAEC 801A03BC 44071000 */  mfc1        $a3, $fv1
/* E2FAF0 801A03C0 24190001 */  addiu       $t9, $zero, 0x1
/* E2FAF4 801A03C4 46045180 */  add.s       $ft1, $ft3, $ft0
/* E2FAF8 801A03C8 AFB9001C */  sw          $t9, 0x1C($sp)
/* E2FAFC 801A03CC E7A20014 */  swc1        $fv1, 0x14($sp)
/* E2FB00 801A03D0 E7A80018 */  swc1        $ft2, 0x18($sp)
/* E2FB04 801A03D4 0C067A7D */  jal         func_E16C50_8019E9F4
/* E2FB08 801A03D8 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E2FB0C 801A03DC 100001C0 */  b           .LE16C50_801A0AE0
/* E2FB10 801A03E0 8FBF002C */   lw         $ra, 0x2C($sp)
.LE16C50_801A03E4:
/* E2FB14 801A03E4 96080050 */  lhu         $t0, 0x50($s0)
/* E2FB18 801A03E8 55000011 */  bnel        $t0, $zero, .LE16C50_801A0430
/* E2FB1C 801A03EC 3C014120 */   lui        $at, (0x41200000 >> 16)
/* E2FB20 801A03F0 920A004C */  lbu         $t2, 0x4C($s0)
/* E2FB24 801A03F4 24090004 */  addiu       $t1, $zero, 0x4
/* E2FB28 801A03F8 A6090050 */  sh          $t1, 0x50($s0)
/* E2FB2C 801A03FC 254B0001 */  addiu       $t3, $t2, 0x1
/* E2FB30 801A0400 316C00FF */  andi        $t4, $t3, 0xFF
/* E2FB34 801A0404 29810006 */  slti        $at, $t4, 0x6
/* E2FB38 801A0408 14200008 */  bnez        $at, .LE16C50_801A042C
/* E2FB3C 801A040C A20B004C */   sb         $t3, 0x4C($s0)
/* E2FB40 801A0410 A200004C */  sb          $zero, 0x4C($s0)
/* E2FB44 801A0414 02002025 */  or          $a0, $s0, $zero
/* E2FB48 801A0418 0C0183EF */  jal         Object_Kill
/* E2FB4C 801A041C 26050080 */   addiu      $a1, $s0, 0x80
/* E2FB50 801A0420 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E2FB54 801A0424 44811000 */  mtc1        $at, $fv1
/* E2FB58 801A0428 00000000 */  nop
.LE16C50_801A042C:
/* E2FB5C 801A042C 3C014120 */  lui         $at, (0x41200000 >> 16)
.LE16C50_801A0430:
/* E2FB60 801A0430 44815000 */  mtc1        $at, $ft3
/* E2FB64 801A0434 C6000070 */  lwc1        $fv0, 0x70($s0)
/* E2FB68 801A0438 3C014080 */  lui         $at, (0x40800000 >> 16)
/* E2FB6C 801A043C 4600503C */  c.lt.s      $ft3, $fv0
/* E2FB70 801A0440 00000000 */  nop
/* E2FB74 801A0444 45020008 */  bc1fl       .LE16C50_801A0468
/* E2FB78 801A0448 44815000 */   mtc1       $at, $ft3
/* E2FB7C 801A044C 3C014020 */  lui         $at, (0x40200000 >> 16)
/* E2FB80 801A0450 44813000 */  mtc1        $at, $ft1
/* E2FB84 801A0454 C6040058 */  lwc1        $ft0, 0x58($s0)
/* E2FB88 801A0458 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E2FB8C 801A045C 1000019F */  b           .LE16C50_801A0ADC
/* E2FB90 801A0460 E6080058 */   swc1       $ft2, 0x58($s0)
/* E2FB94 801A0464 44815000 */  mtc1        $at, $ft3
.LE16C50_801A0468:
/* E2FB98 801A0468 00000000 */  nop
/* E2FB9C 801A046C 4600503C */  c.lt.s      $ft3, $fv0
/* E2FBA0 801A0470 00000000 */  nop
/* E2FBA4 801A0474 4502019A */  bc1fl       .LE16C50_801A0AE0
/* E2FBA8 801A0478 8FBF002C */   lw         $ra, 0x2C($sp)
/* E2FBAC 801A047C C6040058 */  lwc1        $ft0, 0x58($s0)
/* E2FBB0 801A0480 46022181 */  sub.s       $ft1, $ft0, $fv1
/* E2FBB4 801A0484 10000195 */  b           .LE16C50_801A0ADC
/* E2FBB8 801A0488 E6060058 */   swc1       $ft1, 0x58($s0)
.LE16C50_801A048C:
/* E2FBBC 801A048C 960D0050 */  lhu         $t5, 0x50($s0)
/* E2FBC0 801A0490 02002025 */  or          $a0, $s0, $zero
/* E2FBC4 801A0494 55A00004 */  bnel        $t5, $zero, .LE16C50_801A04A8
/* E2FBC8 801A0498 44800000 */   mtc1       $zero, $fv0
/* E2FBCC 801A049C 0C0183EF */  jal         Object_Kill
/* E2FBD0 801A04A0 26050080 */   addiu      $a1, $s0, 0x80
/* E2FBD4 801A04A4 44800000 */  mtc1        $zero, $fv0
.LE16C50_801A04A8:
/* E2FBD8 801A04A8 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E2FBDC 801A04AC 3C073E4C */  lui         $a3, (0x3E4CCCCD >> 16)
/* E2FBE0 801A04B0 44050000 */  mfc1        $a1, $fv0
/* E2FBE4 801A04B4 34E7CCCD */  ori         $a3, $a3, (0x3E4CCCCD & 0xFFFF)
/* E2FBE8 801A04B8 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E2FBEC 801A04BC 26040070 */  addiu       $a0, $s0, 0x70
/* E2FBF0 801A04C0 0C026F0B */  jal         Math_SmoothStepToF
/* E2FBF4 801A04C4 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E2FBF8 801A04C8 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E2FBFC 801A04CC 44815000 */  mtc1        $at, $ft3
/* E2FC00 801A04D0 C6080018 */  lwc1        $ft2, 0x18($s0)
/* E2FC04 801A04D4 3C01801C */  lui         $at, %hi(D_E16C50_801C1564)
/* E2FC08 801A04D8 C6060058 */  lwc1        $ft1, 0x58($s0)
/* E2FC0C 801A04DC 460A4100 */  add.s       $ft0, $ft2, $ft3
/* E2FC10 801A04E0 E6040018 */  swc1        $ft0, 0x18($s0)
/* E2FC14 801A04E4 C4281564 */  lwc1        $ft2, %lo(D_E16C50_801C1564)($at)
/* E2FC18 801A04E8 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E2FC1C 801A04EC 1000017B */  b           .LE16C50_801A0ADC
/* E2FC20 801A04F0 E60A0058 */   swc1       $ft3, 0x58($s0)
.LE16C50_801A04F4:
/* E2FC24 801A04F4 44800000 */  mtc1        $zero, $fv0
/* E2FC28 801A04F8 44061000 */  mfc1        $a2, $fv1
/* E2FC2C 801A04FC 26040018 */  addiu       $a0, $s0, 0x18
/* E2FC30 801A0500 3C05C33E */  lui         $a1, (0xC33E0000 >> 16)
/* E2FC34 801A0504 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E2FC38 801A0508 0C026F0B */  jal         Math_SmoothStepToF
/* E2FC3C 801A050C E7A00010 */   swc1       $fv0, 0x10($sp)
/* E2FC40 801A0510 3C01801C */  lui         $at, %hi(D_E16C50_801C1568)
/* E2FC44 801A0514 C4261568 */  lwc1        $ft1, %lo(D_E16C50_801C1568)($at)
/* E2FC48 801A0518 C6040058 */  lwc1        $ft0, 0x58($s0)
/* E2FC4C 801A051C 3C01C334 */  lui         $at, (0xC3340000 >> 16)
/* E2FC50 801A0520 44815000 */  mtc1        $at, $ft3
/* E2FC54 801A0524 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E2FC58 801A0528 C6040018 */  lwc1        $ft0, 0x18($s0)
/* E2FC5C 801A052C 02002025 */  or          $a0, $s0, $zero
/* E2FC60 801A0530 460A203E */  c.le.s      $ft0, $ft3
/* E2FC64 801A0534 E6080058 */  swc1        $ft2, 0x58($s0)
/* E2FC68 801A0538 45020169 */  bc1fl       .LE16C50_801A0AE0
/* E2FC6C 801A053C 8FBF002C */   lw         $ra, 0x2C($sp)
/* E2FC70 801A0540 0C0183EF */  jal         Object_Kill
/* E2FC74 801A0544 26050080 */   addiu      $a1, $s0, 0x80
/* E2FC78 801A0548 10000165 */  b           .LE16C50_801A0AE0
/* E2FC7C 801A054C 8FBF002C */   lw         $ra, 0x2C($sp)
.LE16C50_801A0550:
/* E2FC80 801A0550 3C0E8017 */  lui         $t6, %hi(gObjects408 + 0x88)
/* E2FC84 801A0554 85CEF198 */  lh          $t6, %lo(gObjects408 + 0x88)($t6)
/* E2FC88 801A0558 24010007 */  addiu       $at, $zero, 0x7
/* E2FC8C 801A055C 3C0F8018 */  lui         $t7, %hi(gPlayer)
/* E2FC90 801A0560 11C10009 */  beq         $t6, $at, .LE16C50_801A0588
/* E2FC94 801A0564 26040058 */   addiu      $a0, $s0, 0x58
/* E2FC98 801A0568 44061000 */  mfc1        $a2, $fv1
/* E2FC9C 801A056C 44071000 */  mfc1        $a3, $fv1
/* E2FCA0 801A0570 26040058 */  addiu       $a0, $s0, 0x58
/* E2FCA4 801A0574 3C05C220 */  lui         $a1, (0xC2200000 >> 16)
/* E2FCA8 801A0578 0C026F0B */  jal         Math_SmoothStepToF
/* E2FCAC 801A057C E7A20010 */   swc1       $fv1, 0x10($sp)
/* E2FCB0 801A0580 1000000B */  b           .LE16C50_801A05B0
/* E2FCB4 801A0584 00000000 */   nop
.LE16C50_801A0588:
/* E2FCB8 801A0588 8DEF8280 */  lw          $t7, %lo(gPlayer)($t7)
/* E2FCBC 801A058C 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E2FCC0 801A0590 44814000 */  mtc1        $at, $ft2
/* E2FCC4 801A0594 C5E600C8 */  lwc1        $ft1, 0xC8($t7)
/* E2FCC8 801A0598 44071000 */  mfc1        $a3, $fv1
/* E2FCCC 801A059C 3C05C282 */  lui         $a1, (0xC2820000 >> 16)
/* E2FCD0 801A05A0 E606005C */  swc1        $ft1, 0x5C($s0)
/* E2FCD4 801A05A4 3C064000 */  lui         $a2, (0x40000000 >> 16)
/* E2FCD8 801A05A8 0C026F0B */  jal         Math_SmoothStepToF
/* E2FCDC 801A05AC E7A80010 */   swc1       $ft2, 0x10($sp)
.LE16C50_801A05B0:
/* E2FCE0 801A05B0 3C048018 */  lui         $a0, %hi(gPlayer)
/* E2FCE4 801A05B4 8C848280 */  lw          $a0, %lo(gPlayer)($a0)
/* E2FCE8 801A05B8 24010007 */  addiu       $at, $zero, 0x7
/* E2FCEC 801A05BC 8C9801C8 */  lw          $t8, 0x1C8($a0)
/* E2FCF0 801A05C0 13010008 */  beq         $t8, $at, .LE16C50_801A05E4
/* E2FCF4 801A05C4 3C014140 */   lui        $at, (0x41400000 >> 16)
/* E2FCF8 801A05C8 44812000 */  mtc1        $at, $ft0
/* E2FCFC 801A05CC C60A0070 */  lwc1        $ft3, 0x70($s0)
/* E2FD00 801A05D0 02002825 */  or          $a1, $s0, $zero
/* E2FD04 801A05D4 46045182 */  mul.s       $ft1, $ft3, $ft0
/* E2FD08 801A05D8 44063000 */  mfc1        $a2, $ft1
/* E2FD0C 801A05DC 0C01E9DD */  jal         func_8007A774
/* E2FD10 801A05E0 00000000 */   nop
.LE16C50_801A05E4:
/* E2FD14 801A05E4 3C01C1A0 */  lui         $at, (0xC1A00000 >> 16)
/* E2FD18 801A05E8 44815000 */  mtc1        $at, $ft3
/* E2FD1C 801A05EC C6080008 */  lwc1        $ft2, 0x8($s0)
/* E2FD20 801A05F0 02002025 */  or          $a0, $s0, $zero
/* E2FD24 801A05F4 460A403C */  c.lt.s      $ft2, $ft3
/* E2FD28 801A05F8 00000000 */  nop
/* E2FD2C 801A05FC 45020004 */  bc1fl       .LE16C50_801A0610
/* E2FD30 801A0600 3C0140C0 */   lui        $at, (0x40C00000 >> 16)
/* E2FD34 801A0604 0C0183EF */  jal         Object_Kill
/* E2FD38 801A0608 26050080 */   addiu      $a1, $s0, 0x80
/* E2FD3C 801A060C 3C0140C0 */  lui         $at, (0x40C00000 >> 16)
.LE16C50_801A0610:
/* E2FD40 801A0610 44813000 */  mtc1        $at, $ft1
/* E2FD44 801A0614 C6040018 */  lwc1        $ft0, 0x18($s0)
/* E2FD48 801A0618 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E2FD4C 801A061C 46062200 */  add.s       $ft2, $ft0, $ft1
/* E2FD50 801A0620 44812000 */  mtc1        $at, $ft0
/* E2FD54 801A0624 E6080018 */  swc1        $ft2, 0x18($s0)
/* E2FD58 801A0628 C60A0018 */  lwc1        $ft3, 0x18($s0)
/* E2FD5C 801A062C 460A203E */  c.le.s      $ft0, $ft3
/* E2FD60 801A0630 00000000 */  nop
/* E2FD64 801A0634 45020005 */  bc1fl       .LE16C50_801A064C
/* E2FD68 801A0638 86190048 */   lh         $t9, 0x48($s0)
/* E2FD6C 801A063C 44800000 */  mtc1        $zero, $fv0
/* E2FD70 801A0640 00000000 */  nop
/* E2FD74 801A0644 E6000018 */  swc1        $fv0, 0x18($s0)
/* E2FD78 801A0648 86190048 */  lh          $t9, 0x48($s0)
.LE16C50_801A064C:
/* E2FD7C 801A064C 27A4005C */  addiu       $a0, $sp, 0x5C
/* E2FD80 801A0650 27A5004C */  addiu       $a1, $sp, 0x4C
/* E2FD84 801A0654 AFB90048 */  sw          $t9, 0x48($sp)
/* E2FD88 801A0658 C606000C */  lwc1        $ft1, 0xC($s0)
/* E2FD8C 801A065C 8E070008 */  lw          $a3, 0x8($s0)
/* E2FD90 801A0660 8E060004 */  lw          $a2, 0x4($s0)
/* E2FD94 801A0664 0C029CF9 */  jal         func_800A73E4
/* E2FD98 801A0668 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E2FD9C 801A066C 10400014 */  beqz        $v0, .LE16C50_801A06C0
/* E2FDA0 801A0670 3C0141A0 */   lui        $at, (0x41A00000 >> 16)
/* E2FDA4 801A0674 44814000 */  mtc1        $at, $ft2
/* E2FDA8 801A0678 C60A0070 */  lwc1        $ft3, 0x70($s0)
/* E2FDAC 801A067C 24080001 */  addiu       $t0, $zero, 0x1
/* E2FDB0 801A0680 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E2FDB4 801A0684 460A4032 */  c.eq.s      $ft2, $ft3
/* E2FDB8 801A0688 3C041903 */  lui         $a0, (0x19035054 >> 16)
/* E2FDBC 801A068C A6080048 */  sh          $t0, 0x48($s0)
/* E2FDC0 801A0690 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E2FDC4 801A0694 4500000B */  bc1f        .LE16C50_801A06C4
/* E2FDC8 801A0698 34845054 */   ori        $a0, $a0, (0x19035054 & 0xFFFF)
/* E2FDCC 801A069C 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E2FDD0 801A06A0 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E2FDD4 801A06A4 AFA90014 */  sw          $t1, 0x14($sp)
/* E2FDD8 801A06A8 26050080 */  addiu       $a1, $s0, 0x80
/* E2FDDC 801A06AC 24060004 */  addiu       $a2, $zero, 0x4
/* E2FDE0 801A06B0 0C006486 */  jal         Audio_PlaySfx
/* E2FDE4 801A06B4 AFA70010 */   sw         $a3, 0x10($sp)
/* E2FDE8 801A06B8 10000003 */  b           .LE16C50_801A06C8
/* E2FDEC 801A06BC 86020048 */   lh         $v0, 0x48($s0)
.LE16C50_801A06C0:
/* E2FDF0 801A06C0 A6000048 */  sh          $zero, 0x48($s0)
.LE16C50_801A06C4:
/* E2FDF4 801A06C4 86020048 */  lh          $v0, 0x48($s0)
.LE16C50_801A06C8:
/* E2FDF8 801A06C8 8FAA0048 */  lw          $t2, 0x48($sp)
/* E2FDFC 801A06CC 51420104 */  beql        $t2, $v0, .LE16C50_801A0AE0
/* E2FE00 801A06D0 8FBF002C */   lw         $ra, 0x2C($sp)
/* E2FE04 801A06D4 50400102 */  beql        $v0, $zero, .LE16C50_801A0AE0
/* E2FE08 801A06D8 8FBF002C */   lw         $ra, 0x2C($sp)
/* E2FE0C 801A06DC 8E0B0040 */  lw          $t3, 0x40($s0)
/* E2FE10 801A06E0 3C01C2C8 */  lui         $at, (0xC2C80000 >> 16)
/* E2FE14 801A06E4 316C0001 */  andi        $t4, $t3, 0x1
/* E2FE18 801A06E8 51800006 */  beql        $t4, $zero, .LE16C50_801A0704
/* E2FE1C 801A06EC 44818000 */   mtc1       $at, $ft4
/* E2FE20 801A06F0 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E2FE24 801A06F4 44818000 */  mtc1        $at, $ft4
/* E2FE28 801A06F8 10000003 */  b           .LE16C50_801A0708
/* E2FE2C 801A06FC 00000000 */   nop
/* E2FE30 801A0700 44818000 */  mtc1        $at, $ft4
.LE16C50_801A0704:
/* E2FE34 801A0704 00000000 */  nop
.LE16C50_801A0708:
/* E2FE38 801A0708 0C0013AC */  jal         Rand_ZeroOne
/* E2FE3C 801A070C E7B00058 */   swc1       $ft4, 0x58($sp)
/* E2FE40 801A0710 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E2FE44 801A0714 44819000 */  mtc1        $at, $ft5
/* E2FE48 801A0718 3C01C248 */  lui         $at, (0xC2480000 >> 16)
/* E2FE4C 801A071C 44814000 */  mtc1        $at, $ft2
/* E2FE50 801A0720 C7B00058 */  lwc1        $ft4, 0x58($sp)
/* E2FE54 801A0724 C6040004 */  lwc1        $ft0, 0x4($s0)
/* E2FE58 801A0728 3C013E80 */  lui         $at, (0x3E800000 >> 16)
/* E2FE5C 801A072C 44815000 */  mtc1        $at, $ft3
/* E2FE60 801A0730 C6060008 */  lwc1        $ft1, 0x8($s0)
/* E2FE64 801A0734 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E2FE68 801A0738 46102300 */  add.s       $fa0, $ft0, $ft4
/* E2FE6C 801A073C 460A8082 */  mul.s       $fv1, $ft4, $ft3
/* E2FE70 801A0740 44812000 */  mtc1        $at, $ft0
/* E2FE74 801A0744 46083380 */  add.s       $fa1, $ft1, $ft2
/* E2FE78 801A0748 8E06000C */  lw          $a2, 0xC($s0)
/* E2FE7C 801A074C 46040182 */  mul.s       $ft1, $fv0, $ft0
/* E2FE80 801A0750 240D0001 */  addiu       $t5, $zero, 0x1
/* E2FE84 801A0754 AFAD001C */  sw          $t5, 0x1C($sp)
/* E2FE88 801A0758 44071000 */  mfc1        $a3, $fv1
/* E2FE8C 801A075C E7A20014 */  swc1        $fv1, 0x14($sp)
/* E2FE90 801A0760 E7B20018 */  swc1        $ft5, 0x18($sp)
/* E2FE94 801A0764 46123200 */  add.s       $ft2, $ft1, $ft5
/* E2FE98 801A0768 0C067A7D */  jal         func_E16C50_8019E9F4
/* E2FE9C 801A076C E7A80010 */   swc1       $ft2, 0x10($sp)
/* E2FEA0 801A0770 100000DB */  b           .LE16C50_801A0AE0
/* E2FEA4 801A0774 8FBF002C */   lw         $ra, 0x2C($sp)
.LE16C50_801A0778:
/* E2FEA8 801A0778 920E004C */  lbu         $t6, 0x4C($s0)
/* E2FEAC 801A077C 25CF0001 */  addiu       $t7, $t6, 0x1
/* E2FEB0 801A0780 31F800FF */  andi        $t8, $t7, 0xFF
/* E2FEB4 801A0784 2B010003 */  slti        $at, $t8, 0x3
/* E2FEB8 801A0788 14200002 */  bnez        $at, .LE16C50_801A0794
/* E2FEBC 801A078C A20F004C */   sb         $t7, 0x4C($s0)
/* E2FEC0 801A0790 A200004C */  sb          $zero, 0x4C($s0)
.LE16C50_801A0794:
/* E2FEC4 801A0794 3C0140F0 */  lui         $at, (0x40F00000 >> 16)
/* E2FEC8 801A0798 44815000 */  mtc1        $at, $ft3
/* E2FECC 801A079C C6000060 */  lwc1        $fv0, 0x60($s0)
/* E2FED0 801A07A0 3C013E80 */  lui         $at, (0x3E800000 >> 16)
/* E2FED4 801A07A4 460A003C */  c.lt.s      $fv0, $ft3
/* E2FED8 801A07A8 00000000 */  nop
/* E2FEDC 801A07AC 45020006 */  bc1fl       .LE16C50_801A07C8
/* E2FEE0 801A07B0 3C014120 */   lui        $at, (0x41200000 >> 16)
/* E2FEE4 801A07B4 44812000 */  mtc1        $at, $ft0
/* E2FEE8 801A07B8 00000000 */  nop
/* E2FEEC 801A07BC 46040180 */  add.s       $ft1, $fv0, $ft0
/* E2FEF0 801A07C0 E6060060 */  swc1        $ft1, 0x60($s0)
/* E2FEF4 801A07C4 3C014120 */  lui         $at, (0x41200000 >> 16)
.LE16C50_801A07C8:
/* E2FEF8 801A07C8 44815000 */  mtc1        $at, $ft3
/* E2FEFC 801A07CC C6080068 */  lwc1        $ft2, 0x68($s0)
/* E2FF00 801A07D0 3C01801C */  lui         $at, %hi(D_E16C50_801C156C)
/* E2FF04 801A07D4 460A4100 */  add.s       $ft0, $ft2, $ft3
/* E2FF08 801A07D8 E6040068 */  swc1        $ft0, 0x68($s0)
/* E2FF0C 801A07DC C428156C */  lwc1        $ft2, %lo(D_E16C50_801C156C)($at)
/* E2FF10 801A07E0 C6060068 */  lwc1        $ft1, 0x68($s0)
/* E2FF14 801A07E4 46083302 */  mul.s       $fa0, $ft1, $ft2
/* E2FF18 801A07E8 0C008C24 */  jal         __sinf
/* E2FF1C 801A07EC 00000000 */   nop
/* E2FF20 801A07F0 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E2FF24 801A07F4 44812000 */  mtc1        $at, $ft0
/* E2FF28 801A07F8 C60A0060 */  lwc1        $ft3, 0x60($s0)
/* E2FF2C 801A07FC 3C01801C */  lui         $at, %hi(D_E16C50_801C1570)
/* E2FF30 801A0800 46045182 */  mul.s       $ft1, $ft3, $ft0
/* E2FF34 801A0804 C60A0068 */  lwc1        $ft3, 0x68($s0)
/* E2FF38 801A0808 46060202 */  mul.s       $ft2, $fv0, $ft1
/* E2FF3C 801A080C E6080054 */  swc1        $ft2, 0x54($s0)
/* E2FF40 801A0810 C4241570 */  lwc1        $ft0, %lo(D_E16C50_801C1570)($at)
/* E2FF44 801A0814 46045302 */  mul.s       $fa0, $ft3, $ft0
/* E2FF48 801A0818 0C008C94 */  jal         __cosf
/* E2FF4C 801A081C 00000000 */   nop
/* E2FF50 801A0820 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E2FF54 801A0824 44814000 */  mtc1        $at, $ft2
/* E2FF58 801A0828 C6060060 */  lwc1        $ft1, 0x60($s0)
/* E2FF5C 801A082C 3C028018 */  lui         $v0, %hi(gPlayer)
/* E2FF60 801A0830 24428280 */  addiu       $v0, $v0, %lo(gPlayer)
/* E2FF64 801A0834 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E2FF68 801A0838 3C014170 */  lui         $at, (0x41700000 >> 16)
/* E2FF6C 801A083C 44814000 */  mtc1        $at, $ft2
/* E2FF70 801A0840 24010007 */  addiu       $at, $zero, 0x7
/* E2FF74 801A0844 460A0102 */  mul.s       $ft0, $fv0, $ft3
/* E2FF78 801A0848 E6040058 */  swc1        $ft0, 0x58($s0)
/* E2FF7C 801A084C 8C590000 */  lw          $t9, 0x0($v0)
/* E2FF80 801A0850 C72600C8 */  lwc1        $ft1, 0xC8($t9)
/* E2FF84 801A0854 46083280 */  add.s       $ft3, $ft1, $ft2
/* E2FF88 801A0858 E60A005C */  swc1        $ft3, 0x5C($s0)
/* E2FF8C 801A085C 8C440000 */  lw          $a0, 0x0($v0)
/* E2FF90 801A0860 8C8801C8 */  lw          $t0, 0x1C8($a0)
/* E2FF94 801A0864 11010022 */  beq         $t0, $at, .LE16C50_801A08F0
/* E2FF98 801A0868 3C014190 */   lui        $at, (0x41900000 >> 16)
/* E2FF9C 801A086C 44813000 */  mtc1        $at, $ft1
/* E2FFA0 801A0870 C6040070 */  lwc1        $ft0, 0x70($s0)
/* E2FFA4 801A0874 02002825 */  or          $a1, $s0, $zero
/* E2FFA8 801A0878 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E2FFAC 801A087C 44064000 */  mfc1        $a2, $ft2
/* E2FFB0 801A0880 0C01E9DD */  jal         func_8007A774
/* E2FFB4 801A0884 00000000 */   nop
/* E2FFB8 801A0888 9209004C */  lbu         $t1, 0x4C($s0)
/* E2FFBC 801A088C 3C01801C */  lui         $at, %hi(D_E16C50_801C1574)
/* E2FFC0 801A0890 55200093 */  bnel        $t1, $zero, .LE16C50_801A0AE0
/* E2FFC4 801A0894 8FBF002C */   lw         $ra, 0x2C($sp)
/* E2FFC8 801A0898 C6000070 */  lwc1        $fv0, 0x70($s0)
/* E2FFCC 801A089C C42A1574 */  lwc1        $ft3, %lo(D_E16C50_801C1574)($at)
/* E2FFD0 801A08A0 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E2FFD4 801A08A4 3C043103 */  lui         $a0, (0x31033078 >> 16)
/* E2FFD8 801A08A8 4600503E */  c.le.s      $ft3, $fv0
/* E2FFDC 801A08AC 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E2FFE0 801A08B0 3C01801C */  lui         $at, %hi(D_E16C50_801C1578)
/* E2FFE4 801A08B4 34843078 */  ori         $a0, $a0, (0x31033078 & 0xFFFF)
/* E2FFE8 801A08B8 45010005 */  bc1t        .LE16C50_801A08D0
/* E2FFEC 801A08BC 26050080 */   addiu      $a1, $s0, 0x80
/* E2FFF0 801A08C0 C4241578 */  lwc1        $ft0, %lo(D_E16C50_801C1578)($at)
/* E2FFF4 801A08C4 4604003E */  c.le.s      $fv0, $ft0
/* E2FFF8 801A08C8 00000000 */  nop
/* E2FFFC 801A08CC 45000083 */  bc1f        .LE16C50_801A0ADC
.LE16C50_801A08D0:
/* E30000 801A08D0 3C0A800C */   lui        $t2, %hi(D_800C5D3C)
/* E30004 801A08D4 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E30008 801A08D8 AFAA0014 */  sw          $t2, 0x14($sp)
/* E3000C 801A08DC 24060004 */  addiu       $a2, $zero, 0x4
/* E30010 801A08E0 0C006486 */  jal         Audio_PlaySfx
/* E30014 801A08E4 AFA70010 */   sw         $a3, 0x10($sp)
/* E30018 801A08E8 1000007D */  b           .LE16C50_801A0AE0
/* E3001C 801A08EC 8FBF002C */   lw         $ra, 0x2C($sp)
.LE16C50_801A08F0:
/* E30020 801A08F0 3C014282 */  lui         $at, (0x42820000 >> 16)
/* E30024 801A08F4 44814000 */  mtc1        $at, $ft2
/* E30028 801A08F8 C606005C */  lwc1        $ft1, 0x5C($s0)
/* E3002C 801A08FC 3C018017 */  lui         $at, %hi(gObjects408 + 0xC)
/* E30030 801A0900 26040080 */  addiu       $a0, $s0, 0x80
/* E30034 801A0904 46083280 */  add.s       $ft3, $ft1, $ft2
/* E30038 801A0908 C606000C */  lwc1        $ft1, 0xC($s0)
/* E3003C 801A090C 3C053103 */  lui         $a1, (0x31033078 >> 16)
/* E30040 801A0910 E60A005C */  swc1        $ft3, 0x5C($s0)
/* E30044 801A0914 C424F11C */  lwc1        $ft0, %lo(gObjects408 + 0xC)($at)
/* E30048 801A0918 3C0144FA */  lui         $at, (0x44FA0000 >> 16)
/* E3004C 801A091C 44814000 */  mtc1        $at, $ft2
/* E30050 801A0920 46062001 */  sub.s       $fv0, $ft0, $ft1
/* E30054 801A0924 46000005 */  abs.s       $fv0, $fv0
/* E30058 801A0928 4600403E */  c.le.s      $ft2, $fv0
/* E3005C 801A092C 00000000 */  nop
/* E30060 801A0930 4502006B */  bc1fl       .LE16C50_801A0AE0
/* E30064 801A0934 8FBF002C */   lw         $ra, 0x2C($sp)
/* E30068 801A0938 0C006957 */  jal         func_8001A55C
/* E3006C 801A093C 34A53078 */   ori        $a1, $a1, (0x31033078 & 0xFFFF)
/* E30070 801A0940 10000067 */  b           .LE16C50_801A0AE0
/* E30074 801A0944 8FBF002C */   lw         $ra, 0x2C($sp)
.LE16C50_801A0948:
/* E30078 801A0948 3C01BF80 */  lui         $at, (0xBF800000 >> 16)
/* E3007C 801A094C 44817000 */  mtc1        $at, $fa1
/* E30080 801A0950 00000000 */  nop
.LE16C50_801A0954:
/* E30084 801A0954 920B004C */  lbu         $t3, 0x4C($s0)
/* E30088 801A0958 256C0001 */  addiu       $t4, $t3, 0x1
/* E3008C 801A095C 318D00FF */  andi        $t5, $t4, 0xFF
/* E30090 801A0960 29A10003 */  slti        $at, $t5, 0x3
/* E30094 801A0964 14200002 */  bnez        $at, .LE16C50_801A0970
/* E30098 801A0968 A20C004C */   sb         $t4, 0x4C($s0)
/* E3009C 801A096C A200004C */  sb          $zero, 0x4C($s0)
.LE16C50_801A0970:
/* E300A0 801A0970 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E300A4 801A0974 44812000 */  mtc1        $at, $ft0
/* E300A8 801A0978 C60A0068 */  lwc1        $ft3, 0x68($s0)
/* E300AC 801A097C 3C01801C */  lui         $at, %hi(D_E16C50_801C157C)
/* E300B0 801A0980 46045180 */  add.s       $ft1, $ft3, $ft0
/* E300B4 801A0984 E6060068 */  swc1        $ft1, 0x68($s0)
/* E300B8 801A0988 C42A157C */  lwc1        $ft3, %lo(D_E16C50_801C157C)($at)
/* E300BC 801A098C C6080068 */  lwc1        $ft2, 0x68($s0)
/* E300C0 801A0990 E7AE0050 */  swc1        $fa1, 0x50($sp)
/* E300C4 801A0994 460A4302 */  mul.s       $fa0, $ft2, $ft3
/* E300C8 801A0998 0C008C24 */  jal         __sinf
/* E300CC 801A099C 00000000 */   nop
/* E300D0 801A09A0 C7AE0050 */  lwc1        $fa1, 0x50($sp)
/* E300D4 801A09A4 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E300D8 801A09A8 44813000 */  mtc1        $at, $ft1
/* E300DC 801A09AC 460E0102 */  mul.s       $ft0, $fv0, $fa1
/* E300E0 801A09B0 3C01801C */  lui         $at, %hi(D_E16C50_801C1580)
/* E300E4 801A09B4 C60A0068 */  lwc1        $ft3, 0x68($s0)
/* E300E8 801A09B8 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E300EC 801A09BC E6080054 */  swc1        $ft2, 0x54($s0)
/* E300F0 801A09C0 C4241580 */  lwc1        $ft0, %lo(D_E16C50_801C1580)($at)
/* E300F4 801A09C4 46045302 */  mul.s       $fa0, $ft3, $ft0
/* E300F8 801A09C8 0C008C94 */  jal         __cosf
/* E300FC 801A09CC 00000000 */   nop
/* E30100 801A09D0 C7AE0050 */  lwc1        $fa1, 0x50($sp)
/* E30104 801A09D4 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E30108 801A09D8 44814000 */  mtc1        $at, $ft2
/* E3010C 801A09DC 460E0182 */  mul.s       $ft1, $fv0, $fa1
/* E30110 801A09E0 3C028018 */  lui         $v0, %hi(gPlayer)
/* E30114 801A09E4 24428280 */  addiu       $v0, $v0, %lo(gPlayer)
/* E30118 801A09E8 3C0142A0 */  lui         $at, (0x42A00000 >> 16)
/* E3011C 801A09EC 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E30120 801A09F0 44813000 */  mtc1        $at, $ft1
/* E30124 801A09F4 24010007 */  addiu       $at, $zero, 0x7
/* E30128 801A09F8 E60A0058 */  swc1        $ft3, 0x58($s0)
/* E3012C 801A09FC 8C4E0000 */  lw          $t6, 0x0($v0)
/* E30130 801A0A00 C5C400C8 */  lwc1        $ft0, 0xC8($t6)
/* E30134 801A0A04 46062200 */  add.s       $ft2, $ft0, $ft1
/* E30138 801A0A08 E608005C */  swc1        $ft2, 0x5C($s0)
/* E3013C 801A0A0C 8C440000 */  lw          $a0, 0x0($v0)
/* E30140 801A0A10 8C8F01C8 */  lw          $t7, 0x1C8($a0)
/* E30144 801A0A14 11E10022 */  beq         $t7, $at, .LE16C50_801A0AA0
/* E30148 801A0A18 3C014190 */   lui        $at, (0x41900000 >> 16)
/* E3014C 801A0A1C 44812000 */  mtc1        $at, $ft0
/* E30150 801A0A20 C60A0070 */  lwc1        $ft3, 0x70($s0)
/* E30154 801A0A24 02002825 */  or          $a1, $s0, $zero
/* E30158 801A0A28 46045182 */  mul.s       $ft1, $ft3, $ft0
/* E3015C 801A0A2C 44063000 */  mfc1        $a2, $ft1
/* E30160 801A0A30 0C01E9DD */  jal         func_8007A774
/* E30164 801A0A34 00000000 */   nop
/* E30168 801A0A38 9218004C */  lbu         $t8, 0x4C($s0)
/* E3016C 801A0A3C 3C01801C */  lui         $at, %hi(D_E16C50_801C1584)
/* E30170 801A0A40 57000027 */  bnel        $t8, $zero, .LE16C50_801A0AE0
/* E30174 801A0A44 8FBF002C */   lw         $ra, 0x2C($sp)
/* E30178 801A0A48 C6000070 */  lwc1        $fv0, 0x70($s0)
/* E3017C 801A0A4C C4281584 */  lwc1        $ft2, %lo(D_E16C50_801C1584)($at)
/* E30180 801A0A50 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E30184 801A0A54 3C043103 */  lui         $a0, (0x31033078 >> 16)
/* E30188 801A0A58 4600403E */  c.le.s      $ft2, $fv0
/* E3018C 801A0A5C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E30190 801A0A60 3C01801C */  lui         $at, %hi(D_E16C50_801C1588)
/* E30194 801A0A64 34843078 */  ori         $a0, $a0, (0x31033078 & 0xFFFF)
/* E30198 801A0A68 45010005 */  bc1t        .LE16C50_801A0A80
/* E3019C 801A0A6C 26050080 */   addiu      $a1, $s0, 0x80
/* E301A0 801A0A70 C42A1588 */  lwc1        $ft3, %lo(D_E16C50_801C1588)($at)
/* E301A4 801A0A74 460A003E */  c.le.s      $fv0, $ft3
/* E301A8 801A0A78 00000000 */  nop
/* E301AC 801A0A7C 45000017 */  bc1f        .LE16C50_801A0ADC
.LE16C50_801A0A80:
/* E301B0 801A0A80 3C19800C */   lui        $t9, %hi(D_800C5D3C)
/* E301B4 801A0A84 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E301B8 801A0A88 AFB90014 */  sw          $t9, 0x14($sp)
/* E301BC 801A0A8C 24060004 */  addiu       $a2, $zero, 0x4
/* E301C0 801A0A90 0C006486 */  jal         Audio_PlaySfx
/* E301C4 801A0A94 AFA70010 */   sw         $a3, 0x10($sp)
/* E301C8 801A0A98 10000011 */  b           .LE16C50_801A0AE0
/* E301CC 801A0A9C 8FBF002C */   lw         $ra, 0x2C($sp)
.LE16C50_801A0AA0:
/* E301D0 801A0AA0 3C018017 */  lui         $at, %hi(gObjects408 + 0xC)
/* E301D4 801A0AA4 C424F11C */  lwc1        $ft0, %lo(gObjects408 + 0xC)($at)
/* E301D8 801A0AA8 C606000C */  lwc1        $ft1, 0xC($s0)
/* E301DC 801A0AAC 3C0144FA */  lui         $at, (0x44FA0000 >> 16)
/* E301E0 801A0AB0 44814000 */  mtc1        $at, $ft2
/* E301E4 801A0AB4 46062001 */  sub.s       $fv0, $ft0, $ft1
/* E301E8 801A0AB8 26040080 */  addiu       $a0, $s0, 0x80
/* E301EC 801A0ABC 3C053103 */  lui         $a1, (0x31033078 >> 16)
/* E301F0 801A0AC0 46000005 */  abs.s       $fv0, $fv0
/* E301F4 801A0AC4 4600403E */  c.le.s      $ft2, $fv0
/* E301F8 801A0AC8 00000000 */  nop
/* E301FC 801A0ACC 45020004 */  bc1fl       .LE16C50_801A0AE0
/* E30200 801A0AD0 8FBF002C */   lw         $ra, 0x2C($sp)
/* E30204 801A0AD4 0C006957 */  jal         func_8001A55C
/* E30208 801A0AD8 34A53078 */   ori        $a1, $a1, (0x31033078 & 0xFFFF)
.LE16C50_801A0ADC:
/* E3020C 801A0ADC 8FBF002C */  lw          $ra, 0x2C($sp)
.LE16C50_801A0AE0:
/* E30210 801A0AE0 8FB00028 */  lw          $s0, 0x28($sp)
/* E30214 801A0AE4 27BD0060 */  addiu       $sp, $sp, 0x60
/* E30218 801A0AE8 03E00008 */  jr          $ra
/* E3021C 801A0AEC 00000000 */   nop
.section .late_rodata
dlabel jtbl_E16C50_801C158C
/* E50CBC 801C158C 801A0B30 */ .word .LE16C50_801A0B30
/* E50CC0 801C1590 801A0B98 */ .word .LE16C50_801A0B98
/* E50CC4 801C1594 801A0B98 */ .word .LE16C50_801A0B98
/* E50CC8 801C1598 801A0C00 */ .word .LE16C50_801A0C00
/* E50CCC 801C159C 801A0C5C */ .word .LE16C50_801A0C5C
/* E50CD0 801C15A0 801A0C5C */ .word .LE16C50_801A0C5C
/* E50CD4 801C15A4 801A0C5C */ .word .LE16C50_801A0C5C
/* E50CD8 801C15A8 801A0C5C */ .word .LE16C50_801A0C5C


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A0AF0
/* E30220 801A0AF0 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E30224 801A0AF4 AFBF0014 */  sw          $ra, 0x14($sp)
/* E30228 801A0AF8 00803825 */  or          $a3, $a0, $zero
/* E3022C 801A0AFC C4EC0070 */  lwc1        $fa0, 0x70($a3)
/* E30230 801A0B00 0C016603 */  jal         Graphics_SetScaleMtx
/* E30234 801A0B04 AFA70018 */   sw         $a3, 0x18($sp)
/* E30238 801A0B08 8FA70018 */  lw          $a3, 0x18($sp)
/* E3023C 801A0B0C 94EE004E */  lhu         $t6, 0x4E($a3)
/* E30240 801A0B10 2DC10008 */  sltiu       $at, $t6, 0x8
/* E30244 801A0B14 10200071 */  beqz        $at, .LE16C50_801A0CDC
/* E30248 801A0B18 000E7080 */   sll        $t6, $t6, 2
/* E3024C 801A0B1C 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C158C)
/* E30250 801A0B20 002E0821 */  addu        $at, $at, $t6
/* E30254 801A0B24 8C2E158C */  lw          $t6, %lo(jtbl_E16C50_801C158C)($at)
/* E30258 801A0B28 01C00008 */  jr          $t6
/* E3025C 801A0B2C 00000000 */   nop
.LE16C50_801A0B30:
/* E30260 801A0B30 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* E30264 801A0B34 24847E64 */  addiu       $a0, $a0, %lo(gMasterDisp)
/* E30268 801A0B38 8C820000 */  lw          $v0, 0x0($a0)
/* E3026C 801A0B3C 3C18FA00 */  lui         $t8, (0xFA000000 >> 16)
/* E30270 801A0B40 3C01FF80 */  lui         $at, (0xFF808000 >> 16)
/* E30274 801A0B44 244F0008 */  addiu       $t7, $v0, 0x8
/* E30278 801A0B48 AC8F0000 */  sw          $t7, 0x0($a0)
/* E3027C 801A0B4C AC580000 */  sw          $t8, 0x0($v0)
/* E30280 801A0B50 84F90044 */  lh          $t9, 0x44($a3)
/* E30284 801A0B54 34218000 */  ori         $at, $at, (0xFF808000 & 0xFFFF)
/* E30288 801A0B58 332800FF */  andi        $t0, $t9, 0xFF
/* E3028C 801A0B5C 01014825 */  or          $t1, $t0, $at
/* E30290 801A0B60 AC490004 */  sw          $t1, 0x4($v0)
/* E30294 801A0B64 8C820000 */  lw          $v0, 0x0($a0)
/* E30298 801A0B68 3C0B0600 */  lui         $t3, (0x6000000 >> 16)
/* E3029C 801A0B6C 3C0E801C */  lui         $t6, %hi(D_E16C50_801BF92C)
/* E302A0 801A0B70 244A0008 */  addiu       $t2, $v0, 0x8
/* E302A4 801A0B74 AC8A0000 */  sw          $t2, 0x0($a0)
/* E302A8 801A0B78 AC4B0000 */  sw          $t3, 0x0($v0)
/* E302AC 801A0B7C 90EC004C */  lbu         $t4, 0x4C($a3)
/* E302B0 801A0B80 000C6880 */  sll         $t5, $t4, 2
/* E302B4 801A0B84 01CD7021 */  addu        $t6, $t6, $t5
/* E302B8 801A0B88 8DCEF92C */  lw          $t6, %lo(D_E16C50_801BF92C)($t6)
/* E302BC 801A0B8C AC4E0004 */  sw          $t6, 0x4($v0)
/* E302C0 801A0B90 10000053 */  b           .LE16C50_801A0CE0
/* E302C4 801A0B94 8FBF0014 */   lw         $ra, 0x14($sp)
.LE16C50_801A0B98:
/* E302C8 801A0B98 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* E302CC 801A0B9C 24847E64 */  addiu       $a0, $a0, %lo(gMasterDisp)
/* E302D0 801A0BA0 8C820000 */  lw          $v0, 0x0($a0)
/* E302D4 801A0BA4 3C18FA00 */  lui         $t8, (0xFA000000 >> 16)
/* E302D8 801A0BA8 3C01FF80 */  lui         $at, (0xFF808000 >> 16)
/* E302DC 801A0BAC 244F0008 */  addiu       $t7, $v0, 0x8
/* E302E0 801A0BB0 AC8F0000 */  sw          $t7, 0x0($a0)
/* E302E4 801A0BB4 AC580000 */  sw          $t8, 0x0($v0)
/* E302E8 801A0BB8 84F90044 */  lh          $t9, 0x44($a3)
/* E302EC 801A0BBC 34218000 */  ori         $at, $at, (0xFF808000 & 0xFFFF)
/* E302F0 801A0BC0 332800FF */  andi        $t0, $t9, 0xFF
/* E302F4 801A0BC4 01014825 */  or          $t1, $t0, $at
/* E302F8 801A0BC8 AC490004 */  sw          $t1, 0x4($v0)
/* E302FC 801A0BCC 8C820000 */  lw          $v0, 0x0($a0)
/* E30300 801A0BD0 3C0B0600 */  lui         $t3, (0x6000000 >> 16)
/* E30304 801A0BD4 3C0E801C */  lui         $t6, %hi(D_E16C50_801BF944)
/* E30308 801A0BD8 244A0008 */  addiu       $t2, $v0, 0x8
/* E3030C 801A0BDC AC8A0000 */  sw          $t2, 0x0($a0)
/* E30310 801A0BE0 AC4B0000 */  sw          $t3, 0x0($v0)
/* E30314 801A0BE4 90EC004C */  lbu         $t4, 0x4C($a3)
/* E30318 801A0BE8 000C6880 */  sll         $t5, $t4, 2
/* E3031C 801A0BEC 01CD7021 */  addu        $t6, $t6, $t5
/* E30320 801A0BF0 8DCEF944 */  lw          $t6, %lo(D_E16C50_801BF944)($t6)
/* E30324 801A0BF4 AC4E0004 */  sw          $t6, 0x4($v0)
/* E30328 801A0BF8 10000039 */  b           .LE16C50_801A0CE0
/* E3032C 801A0BFC 8FBF0014 */   lw         $ra, 0x14($sp)
.LE16C50_801A0C00:
/* E30330 801A0C00 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* E30334 801A0C04 24847E64 */  addiu       $a0, $a0, %lo(gMasterDisp)
/* E30338 801A0C08 8C820000 */  lw          $v0, 0x0($a0)
/* E3033C 801A0C0C 3C18FA00 */  lui         $t8, (0xFA000000 >> 16)
/* E30340 801A0C10 3C01FF80 */  lui         $at, (0xFF808000 >> 16)
/* E30344 801A0C14 244F0008 */  addiu       $t7, $v0, 0x8
/* E30348 801A0C18 AC8F0000 */  sw          $t7, 0x0($a0)
/* E3034C 801A0C1C AC580000 */  sw          $t8, 0x0($v0)
/* E30350 801A0C20 84F90044 */  lh          $t9, 0x44($a3)
/* E30354 801A0C24 34218000 */  ori         $at, $at, (0xFF808000 & 0xFFFF)
/* E30358 801A0C28 3C0B0600 */  lui         $t3, (0x6000000 >> 16)
/* E3035C 801A0C2C 332800FF */  andi        $t0, $t9, 0xFF
/* E30360 801A0C30 01014825 */  or          $t1, $t0, $at
/* E30364 801A0C34 AC490004 */  sw          $t1, 0x4($v0)
/* E30368 801A0C38 8C820000 */  lw          $v0, 0x0($a0)
/* E3036C 801A0C3C 3C0C0602 */  lui         $t4, %hi(D_601C820)
/* E30370 801A0C40 258CC820 */  addiu       $t4, $t4, %lo(D_601C820)
/* E30374 801A0C44 244A0008 */  addiu       $t2, $v0, 0x8
/* E30378 801A0C48 AC8A0000 */  sw          $t2, 0x0($a0)
/* E3037C 801A0C4C AC4C0004 */  sw          $t4, 0x4($v0)
/* E30380 801A0C50 AC4B0000 */  sw          $t3, 0x0($v0)
/* E30384 801A0C54 10000022 */  b           .LE16C50_801A0CE0
/* E30388 801A0C58 8FBF0014 */   lw         $ra, 0x14($sp)
.LE16C50_801A0C5C:
/* E3038C 801A0C5C 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* E30390 801A0C60 24847E64 */  addiu       $a0, $a0, %lo(gMasterDisp)
/* E30394 801A0C64 24050035 */  addiu       $a1, $zero, 0x35
/* E30398 801A0C68 0C02E374 */  jal         RCP_SetupDL
/* E3039C 801A0C6C AFA70018 */   sw         $a3, 0x18($sp)
/* E303A0 801A0C70 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* E303A4 801A0C74 24847E64 */  addiu       $a0, $a0, %lo(gMasterDisp)
/* E303A8 801A0C78 8FA70018 */  lw          $a3, 0x18($sp)
/* E303AC 801A0C7C 8C820000 */  lw          $v0, 0x0($a0)
/* E303B0 801A0C80 3C0EFA00 */  lui         $t6, (0xFA000000 >> 16)
/* E303B4 801A0C84 3C01FF80 */  lui         $at, (0xFF808000 >> 16)
/* E303B8 801A0C88 244D0008 */  addiu       $t5, $v0, 0x8
/* E303BC 801A0C8C AC8D0000 */  sw          $t5, 0x0($a0)
/* E303C0 801A0C90 AC4E0000 */  sw          $t6, 0x0($v0)
/* E303C4 801A0C94 84EF0044 */  lh          $t7, 0x44($a3)
/* E303C8 801A0C98 34218000 */  ori         $at, $at, (0xFF808000 & 0xFFFF)
/* E303CC 801A0C9C 31F800FF */  andi        $t8, $t7, 0xFF
/* E303D0 801A0CA0 0301C825 */  or          $t9, $t8, $at
/* E303D4 801A0CA4 AC590004 */  sw          $t9, 0x4($v0)
/* E303D8 801A0CA8 8C820000 */  lw          $v0, 0x0($a0)
/* E303DC 801A0CAC 3C090600 */  lui         $t1, (0x6000000 >> 16)
/* E303E0 801A0CB0 3C0C801C */  lui         $t4, %hi(D_E16C50_801BF92C)
/* E303E4 801A0CB4 24480008 */  addiu       $t0, $v0, 0x8
/* E303E8 801A0CB8 AC880000 */  sw          $t0, 0x0($a0)
/* E303EC 801A0CBC AC490000 */  sw          $t1, 0x0($v0)
/* E303F0 801A0CC0 90EA004C */  lbu         $t2, 0x4C($a3)
/* E303F4 801A0CC4 000A5880 */  sll         $t3, $t2, 2
/* E303F8 801A0CC8 018B6021 */  addu        $t4, $t4, $t3
/* E303FC 801A0CCC 8D8CF92C */  lw          $t4, %lo(D_E16C50_801BF92C)($t4)
/* E30400 801A0CD0 AC4C0004 */  sw          $t4, 0x4($v0)
/* E30404 801A0CD4 0C02E374 */  jal         RCP_SetupDL
/* E30408 801A0CD8 24050040 */   addiu      $a1, $zero, 0x40
.LE16C50_801A0CDC:
/* E3040C 801A0CDC 8FBF0014 */  lw          $ra, 0x14($sp)
.LE16C50_801A0CE0:
/* E30410 801A0CE0 27BD0018 */  addiu       $sp, $sp, 0x18
/* E30414 801A0CE4 03E00008 */  jr          $ra
/* E30418 801A0CE8 00000000 */   nop
glabel func_E16C50_801A0CEC
/* E3041C 801A0CEC 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E30420 801A0CF0 AFA60020 */  sw          $a2, 0x20($sp)
/* E30424 801A0CF4 00803025 */  or          $a2, $a0, $zero
/* E30428 801A0CF8 AFBF0014 */  sw          $ra, 0x14($sp)
/* E3042C 801A0CFC AFA40018 */  sw          $a0, 0x18($sp)
/* E30430 801A0D00 AFA5001C */  sw          $a1, 0x1C($sp)
/* E30434 801A0D04 AFA70024 */  sw          $a3, 0x24($sp)
/* E30438 801A0D08 00C02025 */  or          $a0, $a2, $zero
/* E3043C 801A0D0C 0C0184F1 */  jal         Object_2F4_Initialize
/* E30440 801A0D10 AFA60018 */   sw         $a2, 0x18($sp)
/* E30444 801A0D14 8FA60018 */  lw          $a2, 0x18($sp)
/* E30448 801A0D18 8FA20028 */  lw          $v0, 0x28($sp)
/* E3044C 801A0D1C C7A00024 */  lwc1        $fv0, 0x24($sp)
/* E30450 801A0D20 240E0002 */  addiu       $t6, $zero, 0x2
/* E30454 801A0D24 240F0116 */  addiu       $t7, $zero, 0x116
/* E30458 801A0D28 A0CE0000 */  sb          $t6, 0x0($a2)
/* E3045C 801A0D2C A4CF0002 */  sh          $t7, 0x2($a2)
/* E30460 801A0D30 C7A4001C */  lwc1        $ft0, 0x1C($sp)
/* E30464 801A0D34 24180001 */  addiu       $t8, $zero, 0x1
/* E30468 801A0D38 24010002 */  addiu       $at, $zero, 0x2
/* E3046C 801A0D3C E4C40004 */  swc1        $ft0, 0x4($a2)
/* E30470 801A0D40 C7A60020 */  lwc1        $ft1, 0x20($sp)
/* E30474 801A0D44 A4D80046 */  sh          $t8, 0x46($a2)
/* E30478 801A0D48 A4C200B8 */  sh          $v0, 0xB8($a2)
/* E3047C 801A0D4C E4C000F0 */  swc1        $fv0, 0xF0($a2)
/* E30480 801A0D50 E4C00118 */  swc1        $fv0, 0x118($a2)
/* E30484 801A0D54 14410005 */  bne         $v0, $at, .LE16C50_801A0D6C
/* E30488 801A0D58 E4C6000C */   swc1       $ft1, 0xC($a2)
/* E3048C 801A0D5C 3C014190 */  lui         $at, (0x41900000 >> 16)
/* E30490 801A0D60 44814000 */  mtc1        $at, $ft2
/* E30494 801A0D64 00000000 */  nop
/* E30498 801A0D68 E4C80114 */  swc1        $ft2, 0x114($a2)
.LE16C50_801A0D6C:
/* E3049C 801A0D6C 94C50002 */  lhu         $a1, 0x2($a2)
/* E304A0 801A0D70 AFA60018 */  sw          $a2, 0x18($sp)
/* E304A4 801A0D74 0C0184AE */  jal         Object_SetInfo
/* E304A8 801A0D78 24C4001C */   addiu      $a0, $a2, 0x1C
/* E304AC 801A0D7C 8FA60018 */  lw          $a2, 0x18($sp)
/* E304B0 801A0D80 A0C0003C */  sb          $zero, 0x3C($a2)
/* E304B4 801A0D84 8FBF0014 */  lw          $ra, 0x14($sp)
/* E304B8 801A0D88 03E00008 */  jr          $ra
/* E304BC 801A0D8C 27BD0018 */   addiu      $sp, $sp, 0x18
glabel func_E16C50_801A0D90
/* E304C0 801A0D90 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* E304C4 801A0D94 AFBF001C */  sw          $ra, 0x1C($sp)
/* E304C8 801A0D98 AFA60028 */  sw          $a2, 0x28($sp)
/* E304CC 801A0D9C AFA7002C */  sw          $a3, 0x2C($sp)
/* E304D0 801A0DA0 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xBD0)
/* E304D4 801A0DA4 3C028017 */  lui         $v0, %hi(gObjects408)
/* E304D8 801A0DA8 2442F110 */  addiu       $v0, $v0, %lo(gObjects408)
/* E304DC 801A0DAC 24844BB0 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0xBD0)
/* E304E0 801A0DB0 908E0000 */  lbu         $t6, 0x0($a0)
.LE16C50_801A0DB4:
/* E304E4 801A0DB4 55C0000A */  bnel        $t6, $zero, .LE16C50_801A0DE0
/* E304E8 801A0DB8 248402F4 */   addiu      $a0, $a0, 0x2F4
/* E304EC 801A0DBC 8FAF002C */  lw          $t7, 0x2C($sp)
/* E304F0 801A0DC0 44056000 */  mfc1        $a1, $fa0
/* E304F4 801A0DC4 44067000 */  mfc1        $a2, $fa1
/* E304F8 801A0DC8 8FA70028 */  lw          $a3, 0x28($sp)
/* E304FC 801A0DCC 0C06833B */  jal         func_E16C50_801A0CEC
/* E30500 801A0DD0 AFAF0010 */   sw         $t7, 0x10($sp)
/* E30504 801A0DD4 10000005 */  b           .LE16C50_801A0DEC
/* E30508 801A0DD8 8FBF001C */   lw         $ra, 0x1C($sp)
/* E3050C 801A0DDC 248402F4 */  addiu       $a0, $a0, 0x2F4
.LE16C50_801A0DE0:
/* E30510 801A0DE0 5482FFF4 */  bnel        $a0, $v0, .LE16C50_801A0DB4
/* E30514 801A0DE4 908E0000 */   lbu        $t6, 0x0($a0)
/* E30518 801A0DE8 8FBF001C */  lw          $ra, 0x1C($sp)
.LE16C50_801A0DEC:
/* E3051C 801A0DEC 27BD0020 */  addiu       $sp, $sp, 0x20
/* E30520 801A0DF0 03E00008 */  jr          $ra
/* E30524 801A0DF4 00000000 */   nop
.section .late_rodata
dlabel jtbl_E16C50_801C15AC
/* E50CDC 801C15AC 801A0E30 */ .word .LE16C50_801A0E30
/* E50CE0 801C15B0 801A0EA8 */ .word .LE16C50_801A0EA8
/* E50CE4 801C15B4 801A0EB4 */ .word .LE16C50_801A0EB4
/* E50CE8 801C15B8 801A0EC0 */ .word .LE16C50_801A0EC0
/* E50CEC 801C15BC 801A0EA8 */ .word .LE16C50_801A0EA8


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A0DF8
/* E30528 801A0DF8 27BDFFD0 */  addiu       $sp, $sp, -0x30
/* E3052C 801A0DFC AFBF001C */  sw          $ra, 0x1C($sp)
/* E30530 801A0E00 E7AC0030 */  swc1        $fa0, 0x30($sp)
/* E30534 801A0E04 E7AE0034 */  swc1        $fa1, 0x34($sp)
/* E30538 801A0E08 AFA60038 */  sw          $a2, 0x38($sp)
/* E3053C 801A0E0C 2CE10005 */  sltiu       $at, $a3, 0x5
/* E30540 801A0E10 1020002D */  beqz        $at, .LE16C50_801A0EC8
/* E30544 801A0E14 AFA70028 */   sw         $a3, 0x28($sp)
/* E30548 801A0E18 00077080 */  sll         $t6, $a3, 2
/* E3054C 801A0E1C 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C15AC)
/* E30550 801A0E20 002E0821 */  addu        $at, $at, $t6
/* E30554 801A0E24 8C2E15AC */  lw          $t6, %lo(jtbl_E16C50_801C15AC)($at)
/* E30558 801A0E28 01C00008 */  jr          $t6
/* E3055C 801A0E2C 00000000 */   nop
.LE16C50_801A0E30:
/* E30560 801A0E30 3C0F8017 */  lui         $t7, %hi(D_80177A10)
/* E30564 801A0E34 8DEF7A10 */  lw          $t7, %lo(D_80177A10)($t7)
/* E30568 801A0E38 24180005 */  addiu       $t8, $zero, 0x5
/* E3056C 801A0E3C 240A0004 */  addiu       $t2, $zero, 0x4
/* E30570 801A0E40 11E0000D */  beqz        $t7, .LE16C50_801A0E78
/* E30574 801A0E44 00000000 */   nop
/* E30578 801A0E48 0C0013AC */  jal         Rand_ZeroOne
/* E3057C 801A0E4C AFB8002C */   sw         $t8, 0x2C($sp)
/* E30580 801A0E50 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E30584 801A0E54 44812000 */  mtc1        $at, $ft0
/* E30588 801A0E58 3C018017 */  lui         $at, %hi(D_80177A10 + 0x4)
/* E3058C 801A0E5C 46040182 */  mul.s       $ft1, $fv0, $ft0
/* E30590 801A0E60 4600320D */  trunc.w.s   $ft2, $ft1
/* E30594 801A0E64 44084000 */  mfc1        $t0, $ft2
/* E30598 801A0E68 00000000 */  nop
/* E3059C 801A0E6C 25090080 */  addiu       $t1, $t0, 0x80
/* E305A0 801A0E70 10000015 */  b           .LE16C50_801A0EC8
/* E305A4 801A0E74 AC297A14 */   sw         $t1, %lo(D_80177A10 + 0x4)($at)
.LE16C50_801A0E78:
/* E305A8 801A0E78 0C0013AC */  jal         Rand_ZeroOne
/* E305AC 801A0E7C AFAA002C */   sw         $t2, 0x2C($sp)
/* E305B0 801A0E80 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E305B4 801A0E84 44815000 */  mtc1        $at, $ft3
/* E305B8 801A0E88 3C018017 */  lui         $at, %hi(D_80177A10)
/* E305BC 801A0E8C 460A0402 */  mul.s       $ft4, $fv0, $ft3
/* E305C0 801A0E90 4600848D */  trunc.w.s   $ft5, $ft4
/* E305C4 801A0E94 440C9000 */  mfc1        $t4, $ft5
/* E305C8 801A0E98 00000000 */  nop
/* E305CC 801A0E9C 258D0080 */  addiu       $t5, $t4, 0x80
/* E305D0 801A0EA0 10000009 */  b           .LE16C50_801A0EC8
/* E305D4 801A0EA4 AC2D7A10 */   sw         $t5, %lo(D_80177A10)($at)
.LE16C50_801A0EA8:
/* E305D8 801A0EA8 240E0006 */  addiu       $t6, $zero, 0x6
/* E305DC 801A0EAC 10000006 */  b           .LE16C50_801A0EC8
/* E305E0 801A0EB0 AFAE002C */   sw         $t6, 0x2C($sp)
.LE16C50_801A0EB4:
/* E305E4 801A0EB4 240F0004 */  addiu       $t7, $zero, 0x4
/* E305E8 801A0EB8 10000003 */  b           .LE16C50_801A0EC8
/* E305EC 801A0EBC AFAF002C */   sw         $t7, 0x2C($sp)
.LE16C50_801A0EC0:
/* E305F0 801A0EC0 24180005 */  addiu       $t8, $zero, 0x5
/* E305F4 801A0EC4 AFB8002C */  sw          $t8, 0x2C($sp)
.LE16C50_801A0EC8:
/* E305F8 801A0EC8 8FB9002C */  lw          $t9, 0x2C($sp)
/* E305FC 801A0ECC 3C098016 */  lui         $t1, %hi(gObjects2F4)
/* E30600 801A0ED0 25293FE0 */  addiu       $t1, $t1, %lo(gObjects2F4)
/* E30604 801A0ED4 00194080 */  sll         $t0, $t9, 2
/* E30608 801A0ED8 01194023 */  subu        $t0, $t0, $t9
/* E3060C 801A0EDC 00084100 */  sll         $t0, $t0, 4
/* E30610 801A0EE0 01194023 */  subu        $t0, $t0, $t9
/* E30614 801A0EE4 00084080 */  sll         $t0, $t0, 2
/* E30618 801A0EE8 01194021 */  addu        $t0, $t0, $t9
/* E3061C 801A0EEC 00084080 */  sll         $t0, $t0, 2
/* E30620 801A0EF0 01093021 */  addu        $a2, $t0, $t1
/* E30624 801A0EF4 00C02025 */  or          $a0, $a2, $zero
/* E30628 801A0EF8 0C0184F1 */  jal         Object_2F4_Initialize
/* E3062C 801A0EFC AFA60024 */   sw         $a2, 0x24($sp)
/* E30630 801A0F00 8FA60024 */  lw          $a2, 0x24($sp)
/* E30634 801A0F04 240A0002 */  addiu       $t2, $zero, 0x2
/* E30638 801A0F08 240B0117 */  addiu       $t3, $zero, 0x117
/* E3063C 801A0F0C 3165FFFF */  andi        $a1, $t3, 0xFFFF
/* E30640 801A0F10 A0CA0000 */  sb          $t2, 0x0($a2)
/* E30644 801A0F14 A4CB0002 */  sh          $t3, 0x2($a2)
/* E30648 801A0F18 0C0184AE */  jal         Object_SetInfo
/* E3064C 801A0F1C 24C4001C */   addiu      $a0, $a2, 0x1C
/* E30650 801A0F20 8FA60024 */  lw          $a2, 0x24($sp)
/* E30654 801A0F24 8FAC0028 */  lw          $t4, 0x28($sp)
/* E30658 801A0F28 C7A40030 */  lwc1        $ft0, 0x30($sp)
/* E3065C 801A0F2C C7A60034 */  lwc1        $ft1, 0x34($sp)
/* E30660 801A0F30 C7A80038 */  lwc1        $ft2, 0x38($sp)
/* E30664 801A0F34 24010004 */  addiu       $at, $zero, 0x4
/* E30668 801A0F38 A4C000B8 */  sh          $zero, 0xB8($a2)
/* E3066C 801A0F3C E4C40004 */  swc1        $ft0, 0x4($a2)
/* E30670 801A0F40 E4C6000C */  swc1        $ft1, 0xC($a2)
/* E30674 801A0F44 11810007 */  beq         $t4, $at, .LE16C50_801A0F64
/* E30678 801A0F48 E4C80014 */   swc1       $ft2, 0x14($a2)
/* E3067C 801A0F4C 3C01C2A0 */  lui         $at, (0xC2A00000 >> 16)
/* E30680 801A0F50 44815000 */  mtc1        $at, $ft3
/* E30684 801A0F54 C7B00040 */  lwc1        $ft4, 0x40($sp)
/* E30688 801A0F58 46105482 */  mul.s       $ft5, $ft3, $ft4
/* E3068C 801A0F5C 10000019 */  b           .LE16C50_801A0FC4
/* E30690 801A0F60 E4D20008 */   swc1       $ft5, 0x8($a2)
.LE16C50_801A0F64:
/* E30694 801A0F64 3C01BF80 */  lui         $at, (0xBF800000 >> 16)
/* E30698 801A0F68 44812000 */  mtc1        $at, $ft0
/* E3069C 801A0F6C C7A60040 */  lwc1        $ft1, 0x40($sp)
/* E306A0 801A0F70 240D0032 */  addiu       $t5, $zero, 0x32
/* E306A4 801A0F74 24C40100 */  addiu       $a0, $a2, 0x100
/* E306A8 801A0F78 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E306AC 801A0F7C A4C000BC */  sh          $zero, 0xBC($a2)
/* E306B0 801A0F80 A4CD00BE */  sh          $t5, 0xBE($a2)
/* E306B4 801A0F84 A4C0004E */  sh          $zero, 0x4E($a2)
/* E306B8 801A0F88 AFA40028 */  sw          $a0, 0x28($sp)
/* E306BC 801A0F8C 24C50004 */  addiu       $a1, $a2, 0x4
/* E306C0 801A0F90 0C017C3A */  jal         func_8005F0E8
/* E306C4 801A0F94 E4C80008 */   swc1       $ft2, 0x8($a2)
/* E306C8 801A0F98 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E306CC 801A0F9C 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E306D0 801A0FA0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E306D4 801A0FA4 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E306D8 801A0FA8 3C041903 */  lui         $a0, (0x19035053 >> 16)
/* E306DC 801A0FAC 34845053 */  ori         $a0, $a0, (0x19035053 & 0xFFFF)
/* E306E0 801A0FB0 AFAE0014 */  sw          $t6, 0x14($sp)
/* E306E4 801A0FB4 AFA70010 */  sw          $a3, 0x10($sp)
/* E306E8 801A0FB8 8FA50028 */  lw          $a1, 0x28($sp)
/* E306EC 801A0FBC 0C006486 */  jal         Audio_PlaySfx
/* E306F0 801A0FC0 24060004 */   addiu      $a2, $zero, 0x4
.LE16C50_801A0FC4:
/* E306F4 801A0FC4 8FBF001C */  lw          $ra, 0x1C($sp)
/* E306F8 801A0FC8 27BD0030 */  addiu       $sp, $sp, 0x30
/* E306FC 801A0FCC 03E00008 */  jr          $ra
/* E30700 801A0FD0 00000000 */   nop
glabel func_E16C50_801A0FD4
/* E30704 801A0FD4 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E30708 801A0FD8 AFB00020 */  sw          $s0, 0x20($sp)
/* E3070C 801A0FDC 00808025 */  or          $s0, $a0, $zero
/* E30710 801A0FE0 AFBF0024 */  sw          $ra, 0x24($sp)
/* E30714 801A0FE4 00A03025 */  or          $a2, $a1, $zero
/* E30718 801A0FE8 00067080 */  sll         $t6, $a2, 2
/* E3071C 801A0FEC 000E7823 */  negu        $t7, $t6
/* E30720 801A0FF0 3C188017 */  lui         $t8, %hi(gTeamShields + 0xC)
/* E30724 801A0FF4 030FC021 */  addu        $t8, $t8, $t7
/* E30728 801A0FF8 8F1878BC */  lw          $t8, %lo(gTeamShields + 0xC)($t8)
/* E3072C 801A0FFC 02002025 */  or          $a0, $s0, $zero
/* E30730 801A1000 5B000038 */  blezl       $t8, .LE16C50_801A10E4
/* E30734 801A1004 8FBF0024 */   lw         $ra, 0x24($sp)
/* E30738 801A1008 0C0184F1 */  jal         Object_2F4_Initialize
/* E3073C 801A100C AFA6002C */   sw         $a2, 0x2C($sp)
/* E30740 801A1010 8FA6002C */  lw          $a2, 0x2C($sp)
/* E30744 801A1014 3C038018 */  lui         $v1, %hi(gPlayer)
/* E30748 801A1018 24190002 */  addiu       $t9, $zero, 0x2
/* E3074C 801A101C 240800C3 */  addiu       $t0, $zero, 0xC3
/* E30750 801A1020 24638280 */  addiu       $v1, $v1, %lo(gPlayer)
/* E30754 801A1024 A2190000 */  sb          $t9, 0x0($s0)
/* E30758 801A1028 A6080002 */  sh          $t0, 0x2($s0)
/* E3075C 801A102C 00064880 */  sll         $t1, $a2, 2
/* E30760 801A1030 8C6B0000 */  lw          $t3, 0x0($v1)
/* E30764 801A1034 3C0A801C */  lui         $t2, %hi(D_E16C50_801BF95C)
/* E30768 801A1038 01264823 */  subu        $t1, $t1, $a2
/* E3076C 801A103C 00094880 */  sll         $t1, $t1, 2
/* E30770 801A1040 254AF95C */  addiu       $t2, $t2, %lo(D_E16C50_801BF95C)
/* E30774 801A1044 012A1021 */  addu        $v0, $t1, $t2
/* E30778 801A1048 C4460000 */  lwc1        $ft1, 0x0($v0)
/* E3077C 801A104C C5640074 */  lwc1        $ft0, 0x74($t3)
/* E30780 801A1050 44800000 */  mtc1        $zero, $fv0
/* E30784 801A1054 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E30788 801A1058 46062200 */  add.s       $ft2, $ft0, $ft1
/* E3078C 801A105C 240E0001 */  addiu       $t6, $zero, 0x1
/* E30790 801A1060 3105FFFF */  andi        $a1, $t0, 0xFFFF
/* E30794 801A1064 2604001C */  addiu       $a0, $s0, 0x1C
/* E30798 801A1068 E6080004 */  swc1        $ft2, 0x4($s0)
/* E3079C 801A106C 8C6C0000 */  lw          $t4, 0x0($v1)
/* E307A0 801A1070 C4500004 */  lwc1        $ft4, 0x4($v0)
/* E307A4 801A1074 C58A0078 */  lwc1        $ft3, 0x78($t4)
/* E307A8 801A1078 46105480 */  add.s       $ft5, $ft3, $ft4
/* E307AC 801A107C 44815000 */  mtc1        $at, $ft3
/* E307B0 801A1080 E6120008 */  swc1        $ft5, 0x8($s0)
/* E307B4 801A1084 8C6D0000 */  lw          $t5, 0x0($v1)
/* E307B8 801A1088 C4460008 */  lwc1        $ft1, 0x8($v0)
/* E307BC 801A108C C5A4007C */  lwc1        $ft0, 0x7C($t5)
/* E307C0 801A1090 A60000B8 */  sh          $zero, 0xB8($s0)
/* E307C4 801A1094 AE0E007C */  sw          $t6, 0x7C($s0)
/* E307C8 801A1098 46062200 */  add.s       $ft2, $ft0, $ft1
/* E307CC 801A109C E60000F0 */  swc1        $fv0, 0xF0($s0)
/* E307D0 801A10A0 E60000EC */  swc1        $fv0, 0xEC($s0)
/* E307D4 801A10A4 E6000010 */  swc1        $fv0, 0x10($s0)
/* E307D8 801A10A8 E608000C */  swc1        $ft2, 0xC($s0)
/* E307DC 801A10AC 0C0184AE */  jal         Object_SetInfo
/* E307E0 801A10B0 E60A0014 */   swc1       $ft3, 0x14($s0)
/* E307E4 801A10B4 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E307E8 801A10B8 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E307EC 801A10BC 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E307F0 801A10C0 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E307F4 801A10C4 3C043100 */  lui         $a0, (0x3100000C >> 16)
/* E307F8 801A10C8 3484000C */  ori         $a0, $a0, (0x3100000C & 0xFFFF)
/* E307FC 801A10CC AFAF0014 */  sw          $t7, 0x14($sp)
/* E30800 801A10D0 AFA70010 */  sw          $a3, 0x10($sp)
/* E30804 801A10D4 26050100 */  addiu       $a1, $s0, 0x100
/* E30808 801A10D8 0C006486 */  jal         Audio_PlaySfx
/* E3080C 801A10DC 24060004 */   addiu      $a2, $zero, 0x4
/* E30810 801A10E0 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_801A10E4:
/* E30814 801A10E4 8FB00020 */  lw          $s0, 0x20($sp)
/* E30818 801A10E8 27BD0028 */  addiu       $sp, $sp, 0x28
/* E3081C 801A10EC 03E00008 */  jr          $ra
/* E30820 801A10F0 00000000 */   nop
.section .late_rodata
dlabel jtbl_E16C50_801C15C0
/* E50CF0 801C15C0 801A1150 */ .word .LE16C50_801A1150
/* E50CF4 801C15C4 801A1284 */ .word .LE16C50_801A1284
/* E50CF8 801C15C8 801A1648 */ .word .LE16C50_801A1648
/* E50CFC 801C15CC 801A1788 */ .word .LE16C50_801A1788
/* E50D00 801C15D0 801A18D4 */ .word .LE16C50_801A18D4
/* E50D04 801C15D4 801A1AF4 */ .word .LE16C50_801A1AF4
/* E50D08 801C15D8 801A1AF4 */ .word .LE16C50_801A1AF4
/* E50D0C 801C15DC 801A1AF4 */ .word .LE16C50_801A1AF4
/* E50D10 801C15E0 801A1AF4 */ .word .LE16C50_801A1AF4
/* E50D14 801C15E4 801A1AF4 */ .word .LE16C50_801A1AF4
/* E50D18 801C15E8 801A1AD8 */ .word .LE16C50_801A1AD8

dlabel D_E16C50_801C15EC
/* E50D1C 801C15EC C50FC000 */ .float -2300

dlabel D_E16C50_801C15F0
/* E50D20 801C15F0 3B9374BC */ .float 0.004499999806

dlabel D_E16C50_801C15F4
/* E50D24 801C15F4 C43B8000 */ .float -750

dlabel D_E16C50_801C15F8
/* E50D28 801C15F8 C5228000 */ .float -2600

dlabel D_E16C50_801C15FC
/* E50D2C 801C15FC C4D84000 */ .float -1730

dlabel D_E16C50_801C1600
/* E50D30 801C1600 C50FC000 */ .float -2300

dlabel D_E16C50_801C1604
/* E50D34 801C1604 45BB8000 */ .float 6000

dlabel D_E16C50_801C1608
/* E50D38 801C1608 45BB8000 */ .float 6000

dlabel D_E16C50_801C160C
/* E50D3C 801C160C C51C4000 */ .float -2500

dlabel D_E16C50_801C1610
/* E50D40 801C1610 C53B8000 */ .float -3000

dlabel D_E16C50_801C1614
/* E50D44 801C1614 C5548000 */ .float -3400

dlabel D_E16C50_801C1618
/* E50D48 801C1618 3C23D70A */ .float 0.009999999776

dlabel D_E16C50_801C161C
/* E50D4C 801C161C C4BB8000 */ .float -1500

dlabel D_E16C50_801C1620
/* E50D50 801C1620 C51A1000 */ .float -2465

dlabel D_E16C50_801C1624
/* E50D54 801C1624 3D75C28F */ .float 0.05999999866

dlabel D_E16C50_801C1628
/* E50D58 801C1628 45BB8000 */ .float 6000

dlabel D_E16C50_801C162C
/* E50D5C 801C162C 44AC8000 */ .float 1380

dlabel D_E16C50_801C1630
/* E50D60 801C1630 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C1634
/* E50D64 801C1634 44898000 */ .float 1100

dlabel D_E16C50_801C1638
/* E50D68 801C1638 3CF5C28F */ .float 0.02999999933

dlabel D_E16C50_801C163C
/* E50D6C 801C163C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1640
/* E50D70 801C1640 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A10F4
/* E30824 801A10F4 27BDFFA0 */  addiu       $sp, $sp, -0x60
/* E30828 801A10F8 AFB00020 */  sw          $s0, 0x20($sp)
/* E3082C 801A10FC 3C038017 */  lui         $v1, %hi(D_80177A10)
/* E30830 801A1100 24637A10 */  addiu       $v1, $v1, %lo(D_80177A10)
/* E30834 801A1104 00808025 */  or          $s0, $a0, $zero
/* E30838 801A1108 AFBF0024 */  sw          $ra, 0x24($sp)
/* E3083C 801A110C 8C620000 */  lw          $v0, 0x0($v1)
/* E30840 801A1110 10400002 */  beqz        $v0, .LE16C50_801A111C
/* E30844 801A1114 244EFFFF */   addiu      $t6, $v0, -0x1
/* E30848 801A1118 AC6E0000 */  sw          $t6, 0x0($v1)
.LE16C50_801A111C:
/* E3084C 801A111C 8C620004 */  lw          $v0, 0x4($v1)
/* E30850 801A1120 10400002 */  beqz        $v0, .LE16C50_801A112C
/* E30854 801A1124 244FFFFF */   addiu      $t7, $v0, -0x1
/* E30858 801A1128 AC6F0004 */  sw          $t7, 0x4($v1)
.LE16C50_801A112C:
/* E3085C 801A112C 8E1801D0 */  lw          $t8, 0x1D0($s0)
/* E30860 801A1130 2F01000B */  sltiu       $at, $t8, 0xB
/* E30864 801A1134 1020026F */  beqz        $at, .LE16C50_801A1AF4
/* E30868 801A1138 0018C080 */   sll        $t8, $t8, 2
/* E3086C 801A113C 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C15C0)
/* E30870 801A1140 00380821 */  addu        $at, $at, $t8
/* E30874 801A1144 8C3815C0 */  lw          $t8, %lo(jtbl_E16C50_801C15C0)($at)
/* E30878 801A1148 03000008 */  jr          $t8
/* E3087C 801A114C 00000000 */   nop
.LE16C50_801A1150:
/* E30880 801A1150 3C018017 */  lui         $at, %hi(D_80177A80)
/* E30884 801A1154 AC207A80 */  sw          $zero, %lo(D_80177A80)($at)
/* E30888 801A1158 24040001 */  addiu       $a0, $zero, 0x1
/* E3088C 801A115C 240571AC */  addiu       $a1, $zero, 0x71AC
/* E30890 801A1160 0C0013F2 */  jal         Rand_SetSeed
/* E30894 801A1164 2406263A */   addiu      $a2, $zero, 0x263A
/* E30898 801A1168 3C01C52F */  lui         $at, (0xC52F0000 >> 16)
/* E3089C 801A116C 44810000 */  mtc1        $at, $fv0
/* E308A0 801A1170 3C01C4FA */  lui         $at, (0xC4FA0000 >> 16)
/* E308A4 801A1174 44812000 */  mtc1        $at, $ft0
/* E308A8 801A1178 24190001 */  addiu       $t9, $zero, 0x1
/* E308AC 801A117C AE1901D0 */  sw          $t9, 0x1D0($s0)
/* E308B0 801A1180 3C018017 */  lui         $at, %hi(D_80177978)
/* E308B4 801A1184 E6040040 */  swc1        $ft0, 0x40($s0)
/* E308B8 801A1188 E4207978 */  swc1        $fv0, %lo(D_80177978)($at)
/* E308BC 801A118C 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
/* E308C0 801A1190 44813000 */  mtc1        $at, $ft1
/* E308C4 801A1194 3C018017 */  lui         $at, %hi(D_80177980)
/* E308C8 801A1198 44801000 */  mtc1        $zero, $fv1
/* E308CC 801A119C E4267980 */  swc1        $ft1, %lo(D_80177980)($at)
/* E308D0 801A11A0 3C01C4E1 */  lui         $at, (0xC4E10000 >> 16)
/* E308D4 801A11A4 44814000 */  mtc1        $at, $ft2
/* E308D8 801A11A8 3C018017 */  lui         $at, %hi(D_80177988)
/* E308DC 801A11AC E6060044 */  swc1        $ft1, 0x44($s0)
/* E308E0 801A11B0 E6080048 */  swc1        $ft2, 0x48($s0)
/* E308E4 801A11B4 E4207988 */  swc1        $fv0, %lo(D_80177988)($at)
/* E308E8 801A11B8 3C01C47A */  lui         $at, (0xC47A0000 >> 16)
/* E308EC 801A11BC 44815000 */  mtc1        $at, $ft3
/* E308F0 801A11C0 3C018017 */  lui         $at, %hi(D_801779A0)
/* E308F4 801A11C4 240300FF */  addiu       $v1, $zero, 0xFF
/* E308F8 801A11C8 E42A79A0 */  swc1        $ft3, %lo(D_801779A0)($at)
/* E308FC 801A11CC 3C0144AF */  lui         $at, (0x44AF0000 >> 16)
/* E30900 801A11D0 44812000 */  mtc1        $at, $ft0
/* E30904 801A11D4 3C0143C8 */  lui         $at, (0x43C80000 >> 16)
/* E30908 801A11D8 44813000 */  mtc1        $at, $ft1
/* E3090C 801A11DC 3C018017 */  lui         $at, %hi(D_801779B8)
/* E30910 801A11E0 E60A004C */  swc1        $ft3, 0x4C($s0)
/* E30914 801A11E4 E6040050 */  swc1        $ft0, 0x50($s0)
/* E30918 801A11E8 E42679B8 */  swc1        $ft1, %lo(D_801779B8)($at)
/* E3091C 801A11EC 3C01801C */  lui         $at, %hi(D_E16C50_801C15EC)
/* E30920 801A11F0 C42815EC */  lwc1        $ft2, %lo(D_E16C50_801C15EC)($at)
/* E30924 801A11F4 3C018017 */  lui         $at, %hi(D_801779C0)
/* E30928 801A11F8 3C064396 */  lui         $a2, (0x43960000 >> 16)
/* E3092C 801A11FC E42879C0 */  swc1        $ft2, %lo(D_801779C0)($at)
/* E30930 801A1200 3C01801C */  lui         $at, %hi(D_E16C50_801C15F0)
/* E30934 801A1204 E6080054 */  swc1        $ft2, 0x54($s0)
/* E30938 801A1208 C42A15F0 */  lwc1        $ft3, %lo(D_E16C50_801C15F0)($at)
/* E3093C 801A120C 3C018017 */  lui         $at, %hi(D_80177A48)
/* E30940 801A1210 24070002 */  addiu       $a3, $zero, 0x2
/* E30944 801A1214 E42A7A48 */  swc1        $ft3, %lo(D_80177A48)($at)
/* E30948 801A1218 3C018018 */  lui         $at, %hi(D_80178340)
/* E3094C 801A121C E6020034 */  swc1        $fv1, 0x34($s0)
/* E30950 801A1220 E60200D0 */  swc1        $fv1, 0xD0($s0)
/* E30954 801A1224 AC238340 */  sw          $v1, %lo(D_80178340)($at)
/* E30958 801A1228 3C018018 */  lui         $at, %hi(D_80178358)
/* E3095C 801A122C AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* E30960 801A1230 3C01801C */  lui         $at, %hi(D_E16C50_801C15F4)
/* E30964 801A1234 C42C15F4 */  lwc1        $fa0, %lo(D_E16C50_801C15F4)($at)
/* E30968 801A1238 3C01801C */  lui         $at, %hi(D_E16C50_801C15F8)
/* E3096C 801A123C C42E15F8 */  lwc1        $fa1, %lo(D_E16C50_801C15F8)($at)
/* E30970 801A1240 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E30974 801A1244 44812000 */  mtc1        $at, $ft0
/* E30978 801A1248 0C06837E */  jal         func_E16C50_801A0DF8
/* E3097C 801A124C E7A40010 */   swc1       $ft0, 0x10($sp)
/* E30980 801A1250 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E30984 801A1254 3C08800C */  lui         $t0, %hi(D_800C5D3C)
/* E30988 801A1258 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E3098C 801A125C 25085D3C */  addiu       $t0, $t0, %lo(D_800C5D3C)
/* E30990 801A1260 3C043140 */  lui         $a0, (0x3140807E >> 16)
/* E30994 801A1264 3484807E */  ori         $a0, $a0, (0x3140807E & 0xFFFF)
/* E30998 801A1268 AFA80014 */  sw          $t0, 0x14($sp)
/* E3099C 801A126C AFA70010 */  sw          $a3, 0x10($sp)
/* E309A0 801A1270 26050460 */  addiu       $a1, $s0, 0x460
/* E309A4 801A1274 0C006486 */  jal         Audio_PlaySfx
/* E309A8 801A1278 00003025 */   or         $a2, $zero, $zero
/* E309AC 801A127C 1000021E */  b           .LE16C50_801A1AF8
/* E309B0 801A1280 44803000 */   mtc1       $zero, $ft1
.LE16C50_801A1284:
/* E309B4 801A1284 3C038017 */  lui         $v1, %hi(D_80177CE8)
/* E309B8 801A1288 24637CE8 */  addiu       $v1, $v1, %lo(D_80177CE8)
/* E309BC 801A128C 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E309C0 801A1290 44814000 */  mtc1        $at, $ft2
/* E309C4 801A1294 C4660000 */  lwc1        $ft1, 0x0($v1)
/* E309C8 801A1298 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E309CC 801A129C 2401008C */  addiu       $at, $zero, 0x8C
/* E309D0 801A12A0 46083280 */  add.s       $ft3, $ft1, $ft2
/* E309D4 801A12A4 3C064234 */  lui         $a2, (0x42340000 >> 16)
/* E309D8 801A12A8 E46A0000 */  swc1        $ft3, 0x0($v1)
/* E309DC 801A12AC 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
/* E309E0 801A12B0 1441000B */  bne         $v0, $at, .LE16C50_801A12E0
/* E309E4 801A12B4 3C01C3C8 */   lui        $at, (0xC3C80000 >> 16)
/* E309E8 801A12B8 44816000 */  mtc1        $at, $fa0
/* E309EC 801A12BC 3C01C4FA */  lui         $at, (0xC4FA0000 >> 16)
/* E309F0 801A12C0 44817000 */  mtc1        $at, $fa1
/* E309F4 801A12C4 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E309F8 801A12C8 44812000 */  mtc1        $at, $ft0
/* E309FC 801A12CC 24070003 */  addiu       $a3, $zero, 0x3
/* E30A00 801A12D0 0C06837E */  jal         func_E16C50_801A0DF8
/* E30A04 801A12D4 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E30A08 801A12D8 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E30A0C 801A12DC 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
.LE16C50_801A12E0:
/* E30A10 801A12E0 24010118 */  addiu       $at, $zero, 0x118
/* E30A14 801A12E4 1441000C */  bne         $v0, $at, .LE16C50_801A1318
/* E30A18 801A12E8 3C06437A */   lui        $a2, (0x437A0000 >> 16)
/* E30A1C 801A12EC 3C01801C */  lui         $at, %hi(D_E16C50_801C15FC)
/* E30A20 801A12F0 C42C15FC */  lwc1        $fa0, %lo(D_E16C50_801C15FC)($at)
/* E30A24 801A12F4 3C01801C */  lui         $at, %hi(D_E16C50_801C1600)
/* E30A28 801A12F8 C42E1600 */  lwc1        $fa1, %lo(D_E16C50_801C1600)($at)
/* E30A2C 801A12FC 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E30A30 801A1300 44813000 */  mtc1        $at, $ft1
/* E30A34 801A1304 24070001 */  addiu       $a3, $zero, 0x1
/* E30A38 801A1308 0C06837E */  jal         func_E16C50_801A0DF8
/* E30A3C 801A130C E7A60010 */   swc1       $ft1, 0x10($sp)
/* E30A40 801A1310 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E30A44 801A1314 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
.LE16C50_801A1318:
/* E30A48 801A1318 24010064 */  addiu       $at, $zero, 0x64
/* E30A4C 801A131C 14410007 */  bne         $v0, $at, .LE16C50_801A133C
/* E30A50 801A1320 3C048016 */   lui        $a0, %hi(gObjects2F4 + 0xBD0)
/* E30A54 801A1324 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0xCD0)
/* E30A58 801A1328 24A54CB0 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0xCD0)
/* E30A5C 801A132C 0C0183EF */  jal         Object_Kill
/* E30A60 801A1330 24844BB0 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xBD0)
/* E30A64 801A1334 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E30A68 801A1338 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
.LE16C50_801A133C:
/* E30A6C 801A133C 240100F0 */  addiu       $at, $zero, 0xF0
/* E30A70 801A1340 14410007 */  bne         $v0, $at, .LE16C50_801A1360
/* E30A74 801A1344 3C048016 */   lui        $a0, %hi(gObjects2F4 + 0xEC4)
/* E30A78 801A1348 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0xFC4)
/* E30A7C 801A134C 24A54FA4 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0xFC4)
/* E30A80 801A1350 0C0183EF */  jal         Object_Kill
/* E30A84 801A1354 24844EA4 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xEC4)
/* E30A88 801A1358 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E30A8C 801A135C 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
.LE16C50_801A1360:
/* E30A90 801A1360 2401017C */  addiu       $at, $zero, 0x17C
/* E30A94 801A1364 14410007 */  bne         $v0, $at, .LE16C50_801A1384
/* E30A98 801A1368 3C048016 */   lui        $a0, %hi(gObjects2F4 + 0x11B8)
/* E30A9C 801A136C 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0x12B8)
/* E30AA0 801A1370 24A55298 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0x12B8)
/* E30AA4 801A1374 0C0183EF */  jal         Object_Kill
/* E30AA8 801A1378 24845198 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0x11B8)
/* E30AAC 801A137C 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E30AB0 801A1380 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
.LE16C50_801A1384:
/* E30AB4 801A1384 28410003 */  slti        $at, $v0, 0x3
/* E30AB8 801A1388 10200004 */  beqz        $at, .LE16C50_801A139C
/* E30ABC 801A138C 3C0A8017 */   lui        $t2, %hi(gFrameCount)
/* E30AC0 801A1390 240300FF */  addiu       $v1, $zero, 0xFF
/* E30AC4 801A1394 3C018018 */  lui         $at, %hi(D_80178340)
/* E30AC8 801A1398 AC238340 */  sw          $v1, %lo(D_80178340)($at)
.LE16C50_801A139C:
/* E30ACC 801A139C 24010172 */  addiu       $at, $zero, 0x172
/* E30AD0 801A13A0 1441000E */  bne         $v0, $at, .LE16C50_801A13DC
/* E30AD4 801A13A4 240300FF */   addiu      $v1, $zero, 0xFF
/* E30AD8 801A13A8 3C018018 */  lui         $at, %hi(D_80178358)
/* E30ADC 801A13AC AC238358 */  sw          $v1, %lo(D_80178358)($at)
/* E30AE0 801A13B0 3C018018 */  lui         $at, %hi(D_80178348)
/* E30AE4 801A13B4 AC238348 */  sw          $v1, %lo(D_80178348)($at)
/* E30AE8 801A13B8 3C048018 */  lui         $a0, %hi(D_80178354)
/* E30AEC 801A13BC 3C058018 */  lui         $a1, %hi(D_80178350)
/* E30AF0 801A13C0 24A58350 */  addiu       $a1, $a1, %lo(D_80178350)
/* E30AF4 801A13C4 24848354 */  addiu       $a0, $a0, %lo(D_80178354)
/* E30AF8 801A13C8 ACA30000 */  sw          $v1, 0x0($a1)
/* E30AFC 801A13CC AC830000 */  sw          $v1, 0x0($a0)
/* E30B00 801A13D0 3C018018 */  lui         $at, %hi(D_8017835C)
/* E30B04 801A13D4 24090008 */  addiu       $t1, $zero, 0x8
/* E30B08 801A13D8 AC29835C */  sw          $t1, %lo(D_8017835C)($at)
.LE16C50_801A13DC:
/* E30B0C 801A13DC 8D4A7DB0 */  lw          $t2, %lo(gFrameCount)($t2)
/* E30B10 801A13E0 314B0007 */  andi        $t3, $t2, 0x7
/* E30B14 801A13E4 5560002D */  bnel        $t3, $zero, .LE16C50_801A149C
/* E30B18 801A13E8 2401017C */   addiu      $at, $zero, 0x17C
/* E30B1C 801A13EC 0C0013AC */  jal         Rand_ZeroOne
/* E30B20 801A13F0 00000000 */   nop
/* E30B24 801A13F4 0C0013AC */  jal         Rand_ZeroOne
/* E30B28 801A13F8 E7A00034 */   swc1       $fv0, 0x34($sp)
/* E30B2C 801A13FC 0C0013AC */  jal         Rand_ZeroOne
/* E30B30 801A1400 E7A00038 */   swc1       $fv0, 0x38($sp)
/* E30B34 801A1404 0C0013AC */  jal         Rand_ZeroOne
/* E30B38 801A1408 E7A0003C */   swc1       $fv0, 0x3C($sp)
/* E30B3C 801A140C 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E30B40 801A1410 44811000 */  mtc1        $at, $fv1
/* E30B44 801A1414 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E30B48 801A1418 44818000 */  mtc1        $at, $ft4
/* E30B4C 801A141C C7A80034 */  lwc1        $ft2, 0x34($sp)
/* E30B50 801A1420 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E30B54 801A1424 44819000 */  mtc1        $at, $ft5
/* E30B58 801A1428 46024281 */  sub.s       $ft3, $ft2, $fv1
/* E30B5C 801A142C C7A60038 */  lwc1        $ft1, 0x38($sp)
/* E30B60 801A1430 3C01801C */  lui         $at, %hi(D_E16C50_801C1604)
/* E30B64 801A1434 C4241604 */  lwc1        $ft0, %lo(D_E16C50_801C1604)($at)
/* E30B68 801A1438 46023201 */  sub.s       $ft2, $ft1, $fv1
/* E30B6C 801A143C 3C0142B4 */  lui         $at, (0x42B40000 >> 16)
/* E30B70 801A1440 46045302 */  mul.s       $fa0, $ft3, $ft0
/* E30B74 801A1444 44812000 */  mtc1        $at, $ft0
/* E30B78 801A1448 3C0144FA */  lui         $at, (0x44FA0000 >> 16)
/* E30B7C 801A144C 46124282 */  mul.s       $ft3, $ft2, $ft5
/* E30B80 801A1450 44814000 */  mtc1        $at, $ft2
/* E30B84 801A1454 C7A6003C */  lwc1        $ft1, 0x3C($sp)
/* E30B88 801A1458 3C01801C */  lui         $at, %hi(D_E16C50_801C1608)
/* E30B8C 801A145C 46045381 */  sub.s       $fa1, $ft3, $ft0
/* E30B90 801A1460 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E30B94 801A1464 C4241608 */  lwc1        $ft0, %lo(D_E16C50_801C1608)($at)
/* E30B98 801A1468 3C018017 */  lui         $at, %hi(D_80177D20)
/* E30B9C 801A146C C4287D20 */  lwc1        $ft2, %lo(D_80177D20)($at)
/* E30BA0 801A1470 46045181 */  sub.s       $ft1, $ft3, $ft0
/* E30BA4 801A1474 46100102 */  mul.s       $ft0, $fv0, $ft4
/* E30BA8 801A1478 46083280 */  add.s       $ft3, $ft1, $ft2
/* E30BAC 801A147C 46102180 */  add.s       $ft1, $ft0, $ft4
/* E30BB0 801A1480 44065000 */  mfc1        $a2, $ft3
/* E30BB4 801A1484 44073000 */  mfc1        $a3, $ft1
/* E30BB8 801A1488 0C067A2E */  jal         func_E16C50_8019E8B8
/* E30BBC 801A148C 00000000 */   nop
/* E30BC0 801A1490 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E30BC4 801A1494 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
/* E30BC8 801A1498 2401017C */  addiu       $at, $zero, 0x17C
.LE16C50_801A149C:
/* E30BCC 801A149C 1441001A */  bne         $v0, $at, .LE16C50_801A1508
/* E30BD0 801A14A0 3C048017 */   lui        $a0, %hi(gObjects8C)
/* E30BD4 801A14A4 3C058017 */  lui         $a1, %hi(gObjects8C + 0x80)
/* E30BD8 801A14A8 24A501B0 */  addiu       $a1, $a1, %lo(gObjects8C + 0x80)
/* E30BDC 801A14AC 24840130 */  addiu       $a0, $a0, %lo(gObjects8C)
.LE16C50_801A14B0:
/* E30BE0 801A14B0 AFA40030 */  sw          $a0, 0x30($sp)
/* E30BE4 801A14B4 0C0183EF */  jal         Object_Kill
/* E30BE8 801A14B8 AFA5002C */   sw         $a1, 0x2C($sp)
/* E30BEC 801A14BC 8FA5002C */  lw          $a1, 0x2C($sp)
/* E30BF0 801A14C0 8FA40030 */  lw          $a0, 0x30($sp)
/* E30BF4 801A14C4 3C0C8017 */  lui         $t4, %hi(gItems + 0x80)
/* E30BF8 801A14C8 258C3860 */  addiu       $t4, $t4, %lo(gItems + 0x80)
/* E30BFC 801A14CC 24A5008C */  addiu       $a1, $a1, 0x8C
/* E30C00 801A14D0 14ACFFF7 */  bne         $a1, $t4, .LE16C50_801A14B0
/* E30C04 801A14D4 2484008C */   addiu      $a0, $a0, 0x8C
/* E30C08 801A14D8 3C0143C8 */  lui         $at, (0x43C80000 >> 16)
/* E30C0C 801A14DC 44816000 */  mtc1        $at, $fa0
/* E30C10 801A14E0 3C01C52F */  lui         $at, (0xC52F0000 >> 16)
/* E30C14 801A14E4 44817000 */  mtc1        $at, $fa1
/* E30C18 801A14E8 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E30C1C 801A14EC 44814000 */  mtc1        $at, $ft2
/* E30C20 801A14F0 3C0643AA */  lui         $a2, (0x43AA0000 >> 16)
/* E30C24 801A14F4 24070001 */  addiu       $a3, $zero, 0x1
/* E30C28 801A14F8 0C06837E */  jal         func_E16C50_801A0DF8
/* E30C2C 801A14FC E7A80010 */   swc1       $ft2, 0x10($sp)
/* E30C30 801A1500 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E30C34 801A1504 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
.LE16C50_801A1508:
/* E30C38 801A1508 2401019A */  addiu       $at, $zero, 0x19A
/* E30C3C 801A150C 14410179 */  bne         $v0, $at, .LE16C50_801A1AF4
/* E30C40 801A1510 3C014348 */   lui        $at, (0x43480000 >> 16)
/* E30C44 801A1514 44810000 */  mtc1        $at, $fv0
/* E30C48 801A1518 3C01430C */  lui         $at, (0x430C0000 >> 16)
/* E30C4C 801A151C 44811000 */  mtc1        $at, $fv1
/* E30C50 801A1520 3C014496 */  lui         $at, (0x44960000 >> 16)
/* E30C54 801A1524 44816000 */  mtc1        $at, $fa0
/* E30C58 801A1528 8E0D01D0 */  lw          $t5, 0x1D0($s0)
/* E30C5C 801A152C 3C014448 */  lui         $at, (0x44480000 >> 16)
/* E30C60 801A1530 44815000 */  mtc1        $at, $ft3
/* E30C64 801A1534 25AE0001 */  addiu       $t6, $t5, 0x1
/* E30C68 801A1538 AE0E01D0 */  sw          $t6, 0x1D0($s0)
/* E30C6C 801A153C 3C018017 */  lui         $at, %hi(D_80177978)
/* E30C70 801A1540 E6000040 */  swc1        $fv0, 0x40($s0)
/* E30C74 801A1544 E42A7978 */  swc1        $ft3, %lo(D_80177978)($at)
/* E30C78 801A1548 C6040078 */  lwc1        $ft0, 0x78($s0)
/* E30C7C 801A154C 3C018017 */  lui         $at, %hi(D_80177980)
/* E30C80 801A1550 E6020044 */  swc1        $fv1, 0x44($s0)
/* E30C84 801A1554 46002180 */  add.s       $ft1, $ft0, $fv0
/* E30C88 801A1558 3C048016 */  lui         $a0, %hi(gObjects2F4)
/* E30C8C 801A155C 24843FE0 */  addiu       $a0, $a0, %lo(gObjects2F4)
/* E30C90 801A1560 00002825 */  or          $a1, $zero, $zero
/* E30C94 801A1564 E4267980 */  swc1        $ft1, %lo(D_80177980)($at)
/* E30C98 801A1568 3C0143C8 */  lui         $at, (0x43C80000 >> 16)
/* E30C9C 801A156C 44814000 */  mtc1        $at, $ft2
/* E30CA0 801A1570 3C018017 */  lui         $at, %hi(D_80177988)
/* E30CA4 801A1574 E4287988 */  swc1        $ft2, %lo(D_80177988)($at)
/* E30CA8 801A1578 3C0143C8 */  lui         $at, (0x43C80000 >> 16)
/* E30CAC 801A157C 44815000 */  mtc1        $at, $ft3
/* E30CB0 801A1580 3C018017 */  lui         $at, %hi(D_801779A0)
/* E30CB4 801A1584 E6080048 */  swc1        $ft2, 0x48($s0)
/* E30CB8 801A1588 E60A004C */  swc1        $ft3, 0x4C($s0)
/* E30CBC 801A158C E42079A0 */  swc1        $fv0, %lo(D_801779A0)($at)
/* E30CC0 801A1590 3C018017 */  lui         $at, %hi(D_801779B8)
/* E30CC4 801A1594 E6020050 */  swc1        $fv1, 0x50($s0)
/* E30CC8 801A1598 E42C79B8 */  swc1        $fa0, %lo(D_801779B8)($at)
/* E30CCC 801A159C 3C01C3FA */  lui         $at, (0xC3FA0000 >> 16)
/* E30CD0 801A15A0 44812000 */  mtc1        $at, $ft0
/* E30CD4 801A15A4 3C01801C */  lui         $at, %hi(D_E16C50_801C160C)
/* E30CD8 801A15A8 E60C0078 */  swc1        $fa0, 0x78($s0)
/* E30CDC 801A15AC E6040054 */  swc1        $ft0, 0x54($s0)
/* E30CE0 801A15B0 C426160C */  lwc1        $ft1, %lo(D_E16C50_801C160C)($at)
/* E30CE4 801A15B4 0C0683F5 */  jal         func_E16C50_801A0FD4
/* E30CE8 801A15B8 E606007C */   swc1       $ft1, 0x7C($s0)
/* E30CEC 801A15BC 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x2F4)
/* E30CF0 801A15C0 248442D4 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x2F4)
/* E30CF4 801A15C4 0C0683F5 */  jal         func_E16C50_801A0FD4
/* E30CF8 801A15C8 24050001 */   addiu      $a1, $zero, 0x1
/* E30CFC 801A15CC 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x5E8)
/* E30D00 801A15D0 248445C8 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x5E8)
/* E30D04 801A15D4 0C0683F5 */  jal         func_E16C50_801A0FD4
/* E30D08 801A15D8 24050002 */   addiu      $a1, $zero, 0x2
/* E30D0C 801A15DC 3C01801C */  lui         $at, %hi(D_E16C50_801C1610)
/* E30D10 801A15E0 C4281610 */  lwc1        $ft2, %lo(D_E16C50_801C1610)($at)
/* E30D14 801A15E4 3C018017 */  lui         $at, %hi(D_801779C0)
/* E30D18 801A15E8 3C053140 */  lui         $a1, (0x3140807E >> 16)
/* E30D1C 801A15EC E42879C0 */  swc1        $ft2, %lo(D_801779C0)($at)
/* E30D20 801A15F0 3C01801C */  lui         $at, %hi(D_E16C50_801C1614)
/* E30D24 801A15F4 C42A1614 */  lwc1        $ft3, %lo(D_E16C50_801C1614)($at)
/* E30D28 801A15F8 3C018017 */  lui         $at, %hi(D_80177988)
/* E30D2C 801A15FC 34A5807E */  ori         $a1, $a1, (0x3140807E & 0xFFFF)
/* E30D30 801A1600 26040460 */  addiu       $a0, $s0, 0x460
/* E30D34 801A1604 0C006957 */  jal         func_8001A55C
/* E30D38 801A1608 E42A7988 */   swc1       $ft3, %lo(D_80177988)($at)
/* E30D3C 801A160C 00002025 */  or          $a0, $zero, $zero
/* E30D40 801A1610 24050033 */  addiu       $a1, $zero, 0x33
/* E30D44 801A1614 00003025 */  or          $a2, $zero, $zero
/* E30D48 801A1618 0C007511 */  jal         func_8001D444
/* E30D4C 801A161C 240700FF */   addiu      $a3, $zero, 0xFF
/* E30D50 801A1620 0C015E05 */  jal         func_80057814
/* E30D54 801A1624 02002025 */   or         $a0, $s0, $zero
/* E30D58 801A1628 3C048017 */  lui         $a0, %hi(D_801778A3)
/* E30D5C 801A162C 0C00722E */  jal         func_8001C8B8
/* E30D60 801A1630 908478A3 */   lbu        $a0, %lo(D_801778A3)($a0)
/* E30D64 801A1634 3C01801C */  lui         $at, %hi(D_E16C50_801C1618)
/* E30D68 801A1638 C4241618 */  lwc1        $ft0, %lo(D_E16C50_801C1618)($at)
/* E30D6C 801A163C 3C018017 */  lui         $at, %hi(D_80177A48)
/* E30D70 801A1640 1000012C */  b           .LE16C50_801A1AF4
/* E30D74 801A1644 E4247A48 */   swc1       $ft0, %lo(D_80177A48)($at)
.LE16C50_801A1648:
/* E30D78 801A1648 3C038017 */  lui         $v1, %hi(D_80177CE8)
/* E30D7C 801A164C 24637CE8 */  addiu       $v1, $v1, %lo(D_80177CE8)
/* E30D80 801A1650 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E30D84 801A1654 44814000 */  mtc1        $at, $ft2
/* E30D88 801A1658 C4660000 */  lwc1        $ft1, 0x0($v1)
/* E30D8C 801A165C 3C018018 */  lui         $at, %hi(D_80178358)
/* E30D90 801A1660 44802000 */  mtc1        $zero, $ft0
/* E30D94 801A1664 46083280 */  add.s       $ft3, $ft1, $ft2
/* E30D98 801A1668 240F0008 */  addiu       $t7, $zero, 0x8
/* E30D9C 801A166C 3C048017 */  lui         $a0, %hi(D_80177A48)
/* E30DA0 801A1670 3C053CA3 */  lui         $a1, (0x3CA3D70A >> 16)
/* E30DA4 801A1674 E46A0000 */  swc1        $ft3, 0x0($v1)
/* E30DA8 801A1678 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* E30DAC 801A167C 3C018018 */  lui         $at, %hi(D_8017835C)
/* E30DB0 801A1680 3C0734A1 */  lui         $a3, (0x34A10FB0 >> 16)
/* E30DB4 801A1684 AC2F835C */  sw          $t7, %lo(D_8017835C)($at)
/* E30DB8 801A1688 34E70FB0 */  ori         $a3, $a3, (0x34A10FB0 & 0xFFFF)
/* E30DBC 801A168C 34A5D70A */  ori         $a1, $a1, (0x3CA3D70A & 0xFFFF)
/* E30DC0 801A1690 24847A48 */  addiu       $a0, $a0, %lo(D_80177A48)
/* E30DC4 801A1694 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E30DC8 801A1698 0C026F0B */  jal         Math_SmoothStepToF
/* E30DCC 801A169C E7A40010 */   swc1       $ft0, 0x10($sp)
/* E30DD0 801A16A0 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E30DD4 801A16A4 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
/* E30DD8 801A16A8 2401020D */  addiu       $at, $zero, 0x20D
/* E30DDC 801A16AC 3C048018 */  lui         $a0, %hi(gMsg_ID_10010)
/* E30DE0 801A16B0 14410005 */  bne         $v0, $at, .LE16C50_801A16C8
/* E30DE4 801A16B4 2484F94C */   addiu      $a0, $a0, %lo(gMsg_ID_10010)
/* E30DE8 801A16B8 0C02EA02 */  jal         func_800BA808
/* E30DEC 801A16BC 00002825 */   or         $a1, $zero, $zero
/* E30DF0 801A16C0 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E30DF4 801A16C4 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
.LE16C50_801A16C8:
/* E30DF8 801A16C8 24010226 */  addiu       $at, $zero, 0x226
/* E30DFC 801A16CC 1441000F */  bne         $v0, $at, .LE16C50_801A170C
/* E30E00 801A16D0 3C048016 */   lui        $a0, %hi(gObjects2F4 + 0xEC4)
/* E30E04 801A16D4 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0xFC4)
/* E30E08 801A16D8 24A54FA4 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0xFC4)
/* E30E0C 801A16DC 0C0183EF */  jal         Object_Kill
/* E30E10 801A16E0 24844EA4 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xEC4)
/* E30E14 801A16E4 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E30E18 801A16E8 44816000 */  mtc1        $at, $fa0
/* E30E1C 801A16EC 3C01801C */  lui         $at, %hi(D_E16C50_801C161C)
/* E30E20 801A16F0 C42E161C */  lwc1        $fa1, %lo(D_E16C50_801C161C)($at)
/* E30E24 801A16F4 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E30E28 801A16F8 44813000 */  mtc1        $at, $ft1
/* E30E2C 801A16FC 3C064320 */  lui         $a2, (0x43200000 >> 16)
/* E30E30 801A1700 24070003 */  addiu       $a3, $zero, 0x3
/* E30E34 801A1704 0C06837E */  jal         func_E16C50_801A0DF8
/* E30E38 801A1708 E7A60010 */   swc1       $ft1, 0x10($sp)
.LE16C50_801A170C:
/* E30E3C 801A170C 3C01801C */  lui         $at, %hi(D_E16C50_801C1620)
/* E30E40 801A1710 C4281620 */  lwc1        $ft2, %lo(D_E16C50_801C1620)($at)
/* E30E44 801A1714 C60A0048 */  lwc1        $ft3, 0x48($s0)
/* E30E48 801A1718 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E30E4C 801A171C 4608503E */  c.le.s      $ft3, $ft2
/* E30E50 801A1720 00000000 */  nop
/* E30E54 801A1724 450200F4 */  bc1fl       .LE16C50_801A1AF8
/* E30E58 801A1728 44803000 */   mtc1       $zero, $ft1
/* E30E5C 801A172C C6040078 */  lwc1        $ft0, 0x78($s0)
/* E30E60 801A1730 44813000 */  mtc1        $at, $ft1
/* E30E64 801A1734 8E1801D0 */  lw          $t8, 0x1D0($s0)
/* E30E68 801A1738 44805000 */  mtc1        $zero, $ft3
/* E30E6C 801A173C 46062200 */  add.s       $ft2, $ft0, $ft1
/* E30E70 801A1740 27190001 */  addiu       $t9, $t8, 0x1
/* E30E74 801A1744 AE1901D0 */  sw          $t9, 0x1D0($s0)
/* E30E78 801A1748 3C018017 */  lui         $at, %hi(D_80177980)
/* E30E7C 801A174C E4287980 */  swc1        $ft2, %lo(D_80177980)($at)
/* E30E80 801A1750 44802000 */  mtc1        $zero, $ft0
/* E30E84 801A1754 3C018017 */  lui         $at, %hi(D_801779A0)
/* E30E88 801A1758 E42A79A0 */  swc1        $ft3, %lo(D_801779A0)($at)
/* E30E8C 801A175C 3C018017 */  lui         $at, %hi(D_80177978)
/* E30E90 801A1760 E4247978 */  swc1        $ft0, %lo(D_80177978)($at)
/* E30E94 801A1764 3C01C52F */  lui         $at, (0xC52F0000 >> 16)
/* E30E98 801A1768 44813000 */  mtc1        $at, $ft1
/* E30E9C 801A176C 3C018017 */  lui         $at, %hi(D_801779C0)
/* E30EA0 801A1770 E42679C0 */  swc1        $ft1, %lo(D_801779C0)($at)
/* E30EA4 801A1774 3C01801C */  lui         $at, %hi(D_E16C50_801C1624)
/* E30EA8 801A1778 C4281624 */  lwc1        $ft2, %lo(D_E16C50_801C1624)($at)
/* E30EAC 801A177C 3C018017 */  lui         $at, %hi(D_80177A48)
/* E30EB0 801A1780 100000DC */  b           .LE16C50_801A1AF4
/* E30EB4 801A1784 E4287A48 */   swc1       $ft2, %lo(D_80177A48)($at)
.LE16C50_801A1788:
/* E30EB8 801A1788 3C038017 */  lui         $v1, %hi(D_80177CE8)
/* E30EBC 801A178C 24637CE8 */  addiu       $v1, $v1, %lo(D_80177CE8)
/* E30EC0 801A1790 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E30EC4 801A1794 44812000 */  mtc1        $at, $ft0
/* E30EC8 801A1798 C46A0000 */  lwc1        $ft3, 0x0($v1)
/* E30ECC 801A179C 3C088017 */  lui         $t0, %hi(gFrameCount)
/* E30ED0 801A17A0 46045180 */  add.s       $ft1, $ft3, $ft0
/* E30ED4 801A17A4 E4660000 */  swc1        $ft1, 0x0($v1)
/* E30ED8 801A17A8 8D087DB0 */  lw          $t0, %lo(gFrameCount)($t0)
/* E30EDC 801A17AC 31090003 */  andi        $t1, $t0, 0x3
/* E30EE0 801A17B0 1520002B */  bnez        $t1, .LE16C50_801A1860
/* E30EE4 801A17B4 00000000 */   nop
/* E30EE8 801A17B8 0C0013AC */  jal         Rand_ZeroOne
/* E30EEC 801A17BC 00000000 */   nop
/* E30EF0 801A17C0 0C0013AC */  jal         Rand_ZeroOne
/* E30EF4 801A17C4 E7A00038 */   swc1       $fv0, 0x38($sp)
/* E30EF8 801A17C8 0C0013AC */  jal         Rand_ZeroOne
/* E30EFC 801A17CC E7A0003C */   swc1       $fv0, 0x3C($sp)
/* E30F00 801A17D0 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E30F04 801A17D4 44811000 */  mtc1        $at, $fv1
/* E30F08 801A17D8 C7A80038 */  lwc1        $ft2, 0x38($sp)
/* E30F0C 801A17DC 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E30F10 801A17E0 44818000 */  mtc1        $at, $ft4
/* E30F14 801A17E4 3C01801C */  lui         $at, %hi(D_E16C50_801C1628)
/* E30F18 801A17E8 46024281 */  sub.s       $ft3, $ft2, $fv1
/* E30F1C 801A17EC C4241628 */  lwc1        $ft0, %lo(D_E16C50_801C1628)($at)
/* E30F20 801A17F0 3C01801C */  lui         $at, %hi(D_E16C50_801C162C)
/* E30F24 801A17F4 C428162C */  lwc1        $ft2, %lo(D_E16C50_801C162C)($at)
/* E30F28 801A17F8 C6060044 */  lwc1        $ft1, 0x44($s0)
/* E30F2C 801A17FC 46045302 */  mul.s       $fa0, $ft3, $ft0
/* E30F30 801A1800 3C01801C */  lui         $at, %hi(D_E16C50_801C1630)
/* E30F34 801A1804 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E30F38 801A1808 C4241630 */  lwc1        $ft0, %lo(D_E16C50_801C1630)($at)
/* E30F3C 801A180C 3C01C3C8 */  lui         $at, (0xC3C80000 >> 16)
/* E30F40 801A1810 44814000 */  mtc1        $at, $ft2
/* E30F44 801A1814 46045182 */  mul.s       $ft1, $ft3, $ft0
/* E30F48 801A1818 C7AA003C */  lwc1        $ft3, 0x3C($sp)
/* E30F4C 801A181C 3C0144FA */  lui         $at, (0x44FA0000 >> 16)
/* E30F50 801A1820 46025101 */  sub.s       $ft0, $ft3, $fv1
/* E30F54 801A1824 46064381 */  sub.s       $fa1, $ft2, $ft1
/* E30F58 801A1828 44814000 */  mtc1        $at, $ft2
/* E30F5C 801A182C 3C0143FA */  lui         $at, (0x43FA0000 >> 16)
/* E30F60 801A1830 44815000 */  mtc1        $at, $ft3
/* E30F64 801A1834 46082182 */  mul.s       $ft1, $ft0, $ft2
/* E30F68 801A1838 3C018017 */  lui         $at, %hi(D_80177D20)
/* E30F6C 801A183C C4287D20 */  lwc1        $ft2, %lo(D_80177D20)($at)
/* E30F70 801A1840 460A3100 */  add.s       $ft0, $ft1, $ft3
/* E30F74 801A1844 46100282 */  mul.s       $ft3, $fv0, $ft4
/* E30F78 801A1848 46082180 */  add.s       $ft1, $ft0, $ft2
/* E30F7C 801A184C 46105100 */  add.s       $ft0, $ft3, $ft4
/* E30F80 801A1850 44063000 */  mfc1        $a2, $ft1
/* E30F84 801A1854 44072000 */  mfc1        $a3, $ft0
/* E30F88 801A1858 0C067A2E */  jal         func_E16C50_8019E8B8
/* E30F8C 801A185C 00000000 */   nop
.LE16C50_801A1860:
/* E30F90 801A1860 3C0A8017 */  lui         $t2, %hi(D_80177A80)
/* E30F94 801A1864 8D4A7A80 */  lw          $t2, %lo(D_80177A80)($t2)
/* E30F98 801A1868 24010267 */  addiu       $at, $zero, 0x267
/* E30F9C 801A186C 26040460 */  addiu       $a0, $s0, 0x460
/* E30FA0 801A1870 154100A0 */  bne         $t2, $at, .LE16C50_801A1AF4
/* E30FA4 801A1874 3C050900 */   lui        $a1, (0x9000002 >> 16)
/* E30FA8 801A1878 0C02980A */  jal         func_800A6028
/* E30FAC 801A187C 34A50002 */   ori        $a1, $a1, (0x9000002 & 0xFFFF)
/* E30FB0 801A1880 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E30FB4 801A1884 44819000 */  mtc1        $at, $ft5
/* E30FB8 801A1888 3C048016 */  lui         $a0, %hi(gObjects2F4)
/* E30FBC 801A188C 24843FE0 */  addiu       $a0, $a0, %lo(gObjects2F4)
/* E30FC0 801A1890 E4920770 */  swc1        $ft5, 0x770($a0)
/* E30FC4 801A1894 C4800770 */  lwc1        $fv0, 0x770($a0)
/* E30FC8 801A1898 24020003 */  addiu       $v0, $zero, 0x3
/* E30FCC 801A189C 240B0002 */  addiu       $t3, $zero, 0x2
/* E30FD0 801A18A0 240C0001 */  addiu       $t4, $zero, 0x1
/* E30FD4 801A18A4 A48200B8 */  sh          $v0, 0xB8($a0)
/* E30FD8 801A18A8 A48B03AC */  sh          $t3, 0x3AC($a0)
/* E30FDC 801A18AC A48C06A0 */  sh          $t4, 0x6A0($a0)
/* E30FE0 801A18B0 E480047C */  swc1        $fv0, 0x47C($a0)
/* E30FE4 801A18B4 E4800188 */  swc1        $fv0, 0x188($a0)
/* E30FE8 801A18B8 8E0D01D0 */  lw          $t5, 0x1D0($s0)
/* E30FEC 801A18BC AE0201F8 */  sw          $v0, 0x1F8($s0)
/* E30FF0 801A18C0 E6120190 */  swc1        $ft5, 0x190($s0)
/* E30FF4 801A18C4 25AE0001 */  addiu       $t6, $t5, 0x1
/* E30FF8 801A18C8 AE0E01D0 */  sw          $t6, 0x1D0($s0)
/* E30FFC 801A18CC 10000089 */  b           .LE16C50_801A1AF4
/* E31000 801A18D0 E6120194 */   swc1       $ft5, 0x194($s0)
.LE16C50_801A18D4:
/* E31004 801A18D4 C6080074 */  lwc1        $ft2, 0x74($s0)
/* E31008 801A18D8 3C018017 */  lui         $at, %hi(D_80177978)
/* E3100C 801A18DC 3C0F8017 */  lui         $t7, %hi(gMainController)
/* E31010 801A18E0 E4287978 */  swc1        $ft2, %lo(D_80177978)($at)
/* E31014 801A18E4 C6060078 */  lwc1        $ft1, 0x78($s0)
/* E31018 801A18E8 3C018017 */  lui         $at, %hi(D_80177980)
/* E3101C 801A18EC 8DEF7AF8 */  lw          $t7, %lo(gMainController)($t7)
/* E31020 801A18F0 E4267980 */  swc1        $ft1, %lo(D_80177980)($at)
/* E31024 801A18F4 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E31028 801A18F8 44812000 */  mtc1        $at, $ft0
/* E3102C 801A18FC C60A0138 */  lwc1        $ft3, 0x138($s0)
/* E31030 801A1900 3C018017 */  lui         $at, %hi(D_80177988)
/* E31034 801A1904 000FC080 */  sll         $t8, $t7, 2
/* E31038 801A1908 46045200 */  add.s       $ft2, $ft3, $ft0
/* E3103C 801A190C 3C048018 */  lui         $a0, %hi(D_80178354)
/* E31040 801A1910 3C058018 */  lui         $a1, %hi(D_80178350)
/* E31044 801A1914 24A58350 */  addiu       $a1, $a1, %lo(D_80178350)
/* E31048 801A1918 E4287988 */  swc1        $ft2, %lo(D_80177988)($at)
/* E3104C 801A191C C6060074 */  lwc1        $ft1, 0x74($s0)
/* E31050 801A1920 3C018017 */  lui         $at, %hi(D_801779A0)
/* E31054 801A1924 24848354 */  addiu       $a0, $a0, %lo(D_80178354)
/* E31058 801A1928 E42679A0 */  swc1        $ft1, %lo(D_801779A0)($at)
/* E3105C 801A192C C60A0078 */  lwc1        $ft3, 0x78($s0)
/* E31060 801A1930 3C018017 */  lui         $at, %hi(D_801779B8)
/* E31064 801A1934 240300FF */  addiu       $v1, $zero, 0xFF
/* E31068 801A1938 E42A79B8 */  swc1        $ft3, %lo(D_801779B8)($at)
/* E3106C 801A193C 3C01801C */  lui         $at, %hi(D_E16C50_801C1634)
/* E31070 801A1940 C4281634 */  lwc1        $ft2, %lo(D_E16C50_801C1634)($at)
/* E31074 801A1944 C6040138 */  lwc1        $ft0, 0x138($s0)
/* E31078 801A1948 3C018017 */  lui         $at, %hi(D_801779C0)
/* E3107C 801A194C 24080018 */  addiu       $t0, $zero, 0x18
/* E31080 801A1950 46082180 */  add.s       $ft1, $ft0, $ft2
/* E31084 801A1954 3C0B8018 */  lui         $t3, %hi(D_80178340)
/* E31088 801A1958 00003025 */  or          $a2, $zero, $zero
/* E3108C 801A195C 240700FF */  addiu       $a3, $zero, 0xFF
/* E31090 801A1960 E42679C0 */  swc1        $ft1, %lo(D_801779C0)($at)
/* E31094 801A1964 3C01801C */  lui         $at, %hi(D_E16C50_801C1638)
/* E31098 801A1968 C42A1638 */  lwc1        $ft3, %lo(D_E16C50_801C1638)($at)
/* E3109C 801A196C 3C018017 */  lui         $at, %hi(D_80177A48)
/* E310A0 801A1970 E42A7A48 */  swc1        $ft3, %lo(D_80177A48)($at)
/* E310A4 801A1974 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E310A8 801A1978 44812000 */  mtc1        $at, $ft0
/* E310AC 801A197C 3C018017 */  lui         $at, %hi(D_801779A8)
/* E310B0 801A1980 00380821 */  addu        $at, $at, $t8
/* E310B4 801A1984 E42479A8 */  swc1        $ft0, %lo(D_801779A8)($at)
/* E310B8 801A1988 8E1901F8 */  lw          $t9, 0x1F8($s0)
/* E310BC 801A198C 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E310C0 801A1990 44814000 */  mtc1        $at, $ft2
/* E310C4 801A1994 3C018018 */  lui         $at, %hi(D_80178358)
/* E310C8 801A1998 17200008 */  bnez        $t9, .LE16C50_801A19BC
/* E310CC 801A199C E6080190 */   swc1       $ft2, 0x190($s0)
/* E310D0 801A19A0 AC238358 */  sw          $v1, %lo(D_80178358)($at)
/* E310D4 801A19A4 3C018018 */  lui         $at, %hi(D_8017835C)
/* E310D8 801A19A8 AC28835C */  sw          $t0, %lo(D_8017835C)($at)
/* E310DC 801A19AC ACA30000 */  sw          $v1, 0x0($a1)
/* E310E0 801A19B0 AC830000 */  sw          $v1, 0x0($a0)
/* E310E4 801A19B4 3C018018 */  lui         $at, %hi(D_80178348)
/* E310E8 801A19B8 AC238348 */  sw          $v1, %lo(D_80178348)($at)
.LE16C50_801A19BC:
/* E310EC 801A19BC 8D6B8340 */  lw          $t3, %lo(D_80178340)($t3)
/* E310F0 801A19C0 240300FF */  addiu       $v1, $zero, 0xFF
/* E310F4 801A19C4 00002025 */  or          $a0, $zero, $zero
/* E310F8 801A19C8 546B004B */  bnel        $v1, $t3, .LE16C50_801A1AF8
/* E310FC 801A19CC 44803000 */   mtc1       $zero, $ft1
/* E31100 801A19D0 0C007511 */  jal         func_8001D444
/* E31104 801A19D4 3405800B */   ori        $a1, $zero, 0x800B
/* E31108 801A19D8 44803000 */  mtc1        $zero, $ft1
/* E3110C 801A19DC 3C018016 */  lui         $at, %hi(D_80161A54)
/* E31110 801A19E0 E606007C */  swc1        $ft1, 0x7C($s0)
/* E31114 801A19E4 C42A1A54 */  lwc1        $ft3, %lo(D_80161A54)($at)
/* E31118 801A19E8 0C029852 */  jal         func_800A6148
/* E3111C 801A19EC E60A00D0 */   swc1       $ft3, 0xD0($s0)
/* E31120 801A19F0 3C0143AF */  lui         $at, (0x43AF0000 >> 16)
/* E31124 801A19F4 44816000 */  mtc1        $at, $fa0
/* E31128 801A19F8 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E3112C 801A19FC 44818000 */  mtc1        $at, $ft4
/* E31130 801A1A00 3C018017 */  lui         $at, %hi(D_80177838)
/* E31134 801A1A04 240C0032 */  addiu       $t4, $zero, 0x32
/* E31138 801A1A08 AC2C7838 */  sw          $t4, %lo(D_80177838)($at)
/* E3113C 801A1A0C C6040148 */  lwc1        $ft0, 0x148($s0)
/* E31140 801A1A10 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E31144 801A1A14 44814000 */  mtc1        $at, $ft2
/* E31148 801A1A18 46046082 */  mul.s       $fv1, $fa0, $ft0
/* E3114C 801A1A1C 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E31150 801A1A20 C6000074 */  lwc1        $fv0, 0x74($s0)
/* E31154 801A1A24 44815000 */  mtc1        $at, $ft3
/* E31158 801A1A28 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E3115C 801A1A2C 24020003 */  addiu       $v0, $zero, 0x3
/* E31160 801A1A30 AE0201C8 */  sw          $v0, 0x1C8($s0)
/* E31164 801A1A34 46081180 */  add.s       $ft1, $fv1, $ft2
/* E31168 801A1A38 C6080138 */  lwc1        $ft2, 0x138($s0)
/* E3116C 801A1A3C AE0001D0 */  sw          $zero, 0x1D0($s0)
/* E31170 801A1A40 46101100 */  add.s       $ft0, $fv1, $ft4
/* E31174 801A1A44 E6060044 */  swc1        $ft1, 0x44($s0)
/* E31178 801A1A48 44813000 */  mtc1        $at, $ft1
/* E3117C 801A1A4C 3C018017 */  lui         $at, %hi(D_80177950)
/* E31180 801A1A50 E6040050 */  swc1        $ft0, 0x50($s0)
/* E31184 801A1A54 E60C0078 */  swc1        $fa0, 0x78($s0)
/* E31188 801A1A58 E6000040 */  swc1        $fv0, 0x40($s0)
/* E3118C 801A1A5C E600004C */  swc1        $fv0, 0x4C($s0)
/* E31190 801A1A60 E60A0048 */  swc1        $ft3, 0x48($s0)
/* E31194 801A1A64 E6080054 */  swc1        $ft2, 0x54($s0)
/* E31198 801A1A68 240400FF */  addiu       $a0, $zero, 0xFF
/* E3119C 801A1A6C 24050003 */  addiu       $a1, $zero, 0x3
/* E311A0 801A1A70 0C007472 */  jal         func_8001D1C8
/* E311A4 801A1A74 E4267950 */   swc1       $ft1, %lo(D_80177950)($at)
/* E311A8 801A1A78 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E311AC 801A1A7C 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E311B0 801A1A80 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E311B4 801A1A84 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E311B8 801A1A88 3C044100 */  lui         $a0, (0x4100C023 >> 16)
/* E311BC 801A1A8C 3C05800C */  lui         $a1, %hi(D_800C5D28)
/* E311C0 801A1A90 24A55D28 */  addiu       $a1, $a1, %lo(D_800C5D28)
/* E311C4 801A1A94 3484C023 */  ori         $a0, $a0, (0x4100C023 & 0xFFFF)
/* E311C8 801A1A98 AFAD0014 */  sw          $t5, 0x14($sp)
/* E311CC 801A1A9C AFA70010 */  sw          $a3, 0x10($sp)
/* E311D0 801A1AA0 0C006486 */  jal         Audio_PlaySfx
/* E311D4 801A1AA4 24060004 */   addiu      $a2, $zero, 0x4
/* E311D8 801A1AA8 240E0001 */  addiu       $t6, $zero, 0x1
/* E311DC 801A1AAC 3C018018 */  lui         $at, %hi(D_80178488)
/* E311E0 801A1AB0 AC2E8488 */  sw          $t6, %lo(D_80178488)($at)
/* E311E4 801A1AB4 3C018018 */  lui         $at, %hi(D_80178358)
/* E311E8 801A1AB8 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* E311EC 801A1ABC 240F000F */  addiu       $t7, $zero, 0xF
/* E311F0 801A1AC0 AE0F01F8 */  sw          $t7, 0x1F8($s0)
/* E311F4 801A1AC4 3C188018 */  lui         $t8, %hi(gPlayer)
/* E311F8 801A1AC8 8F188280 */  lw          $t8, %lo(gPlayer)($t8)
/* E311FC 801A1ACC 240300FF */  addiu       $v1, $zero, 0xFF
/* E31200 801A1AD0 10000008 */  b           .LE16C50_801A1AF4
/* E31204 801A1AD4 AF030264 */   sw         $v1, 0x264($t8)
.LE16C50_801A1AD8:
/* E31208 801A1AD8 3C038017 */  lui         $v1, %hi(D_80177CE8)
/* E3120C 801A1ADC 24637CE8 */  addiu       $v1, $v1, %lo(D_80177CE8)
/* E31210 801A1AE0 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E31214 801A1AE4 44812000 */  mtc1        $at, $ft0
/* E31218 801A1AE8 C46A0000 */  lwc1        $ft3, 0x0($v1)
/* E3121C 801A1AEC 46045200 */  add.s       $ft2, $ft3, $ft0
/* E31220 801A1AF0 E4680000 */  swc1        $ft2, 0x0($v1)
.LE16C50_801A1AF4:
/* E31224 801A1AF4 44803000 */  mtc1        $zero, $ft1
.LE16C50_801A1AF8:
/* E31228 801A1AF8 3C058017 */  lui         $a1, %hi(D_80177978)
/* E3122C 801A1AFC 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E31230 801A1B00 3C07469C */  lui         $a3, (0x469C4000 >> 16)
/* E31234 801A1B04 34E74000 */  ori         $a3, $a3, (0x469C4000 & 0xFFFF)
/* E31238 801A1B08 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E3123C 801A1B0C 8CA57978 */  lw          $a1, %lo(D_80177978)($a1)
/* E31240 801A1B10 26040040 */  addiu       $a0, $s0, 0x40
/* E31244 801A1B14 0C026F0B */  jal         Math_SmoothStepToF
/* E31248 801A1B18 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E3124C 801A1B1C 44805000 */  mtc1        $zero, $ft3
/* E31250 801A1B20 3C058017 */  lui         $a1, %hi(D_80177980)
/* E31254 801A1B24 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E31258 801A1B28 3C07469C */  lui         $a3, (0x469C4000 >> 16)
/* E3125C 801A1B2C 34E74000 */  ori         $a3, $a3, (0x469C4000 & 0xFFFF)
/* E31260 801A1B30 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E31264 801A1B34 8CA57980 */  lw          $a1, %lo(D_80177980)($a1)
/* E31268 801A1B38 26040044 */  addiu       $a0, $s0, 0x44
/* E3126C 801A1B3C 0C026F0B */  jal         Math_SmoothStepToF
/* E31270 801A1B40 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E31274 801A1B44 44802000 */  mtc1        $zero, $ft0
/* E31278 801A1B48 3C058017 */  lui         $a1, %hi(D_80177988)
/* E3127C 801A1B4C 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E31280 801A1B50 3C07469C */  lui         $a3, (0x469C4000 >> 16)
/* E31284 801A1B54 34E74000 */  ori         $a3, $a3, (0x469C4000 & 0xFFFF)
/* E31288 801A1B58 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E3128C 801A1B5C 8CA57988 */  lw          $a1, %lo(D_80177988)($a1)
/* E31290 801A1B60 26040048 */  addiu       $a0, $s0, 0x48
/* E31294 801A1B64 0C026F0B */  jal         Math_SmoothStepToF
/* E31298 801A1B68 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E3129C 801A1B6C 44804000 */  mtc1        $zero, $ft2
/* E312A0 801A1B70 3C058017 */  lui         $a1, %hi(D_801779A0)
/* E312A4 801A1B74 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E312A8 801A1B78 3C07469C */  lui         $a3, (0x469C4000 >> 16)
/* E312AC 801A1B7C 34E74000 */  ori         $a3, $a3, (0x469C4000 & 0xFFFF)
/* E312B0 801A1B80 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E312B4 801A1B84 8CA579A0 */  lw          $a1, %lo(D_801779A0)($a1)
/* E312B8 801A1B88 2604004C */  addiu       $a0, $s0, 0x4C
/* E312BC 801A1B8C 0C026F0B */  jal         Math_SmoothStepToF
/* E312C0 801A1B90 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E312C4 801A1B94 44803000 */  mtc1        $zero, $ft1
/* E312C8 801A1B98 3C058017 */  lui         $a1, %hi(D_801779B8)
/* E312CC 801A1B9C 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E312D0 801A1BA0 3C07469C */  lui         $a3, (0x469C4000 >> 16)
/* E312D4 801A1BA4 34E74000 */  ori         $a3, $a3, (0x469C4000 & 0xFFFF)
/* E312D8 801A1BA8 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E312DC 801A1BAC 8CA579B8 */  lw          $a1, %lo(D_801779B8)($a1)
/* E312E0 801A1BB0 26040050 */  addiu       $a0, $s0, 0x50
/* E312E4 801A1BB4 0C026F0B */  jal         Math_SmoothStepToF
/* E312E8 801A1BB8 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E312EC 801A1BBC 44805000 */  mtc1        $zero, $ft3
/* E312F0 801A1BC0 3C058017 */  lui         $a1, %hi(D_801779C0)
/* E312F4 801A1BC4 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E312F8 801A1BC8 3C07469C */  lui         $a3, (0x469C4000 >> 16)
/* E312FC 801A1BCC 34E74000 */  ori         $a3, $a3, (0x469C4000 & 0xFFFF)
/* E31300 801A1BD0 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E31304 801A1BD4 8CA579C0 */  lw          $a1, %lo(D_801779C0)($a1)
/* E31308 801A1BD8 26040054 */  addiu       $a0, $s0, 0x54
/* E3130C 801A1BDC 0C026F0B */  jal         Math_SmoothStepToF
/* E31310 801A1BE0 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E31314 801A1BE4 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E31318 801A1BE8 44814000 */  mtc1        $at, $ft2
/* E3131C 801A1BEC C60400E8 */  lwc1        $ft0, 0xE8($s0)
/* E31320 801A1BF0 3C01801C */  lui         $at, %hi(D_E16C50_801C163C)
/* E31324 801A1BF4 C42A163C */  lwc1        $ft3, %lo(D_E16C50_801C163C)($at)
/* E31328 801A1BF8 46082180 */  add.s       $ft1, $ft0, $ft2
/* E3132C 801A1BFC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E31330 801A1C00 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E31334 801A1C04 00003025 */  or          $a2, $zero, $zero
/* E31338 801A1C08 460A3102 */  mul.s       $ft0, $ft1, $ft3
/* E3133C 801A1C0C 44052000 */  mfc1        $a1, $ft0
/* E31340 801A1C10 0C0017A4 */  jal         Matrix_RotateY
/* E31344 801A1C14 00000000 */   nop
/* E31348 801A1C18 3C01801C */  lui         $at, %hi(D_E16C50_801C1640)
/* E3134C 801A1C1C C4261640 */  lwc1        $ft1, %lo(D_E16C50_801C1640)($at)
/* E31350 801A1C20 C60800E4 */  lwc1        $ft2, 0xE4($s0)
/* E31354 801A1C24 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E31358 801A1C28 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E3135C 801A1C2C 46064282 */  mul.s       $ft3, $ft2, $ft1
/* E31360 801A1C30 24060001 */  addiu       $a2, $zero, 0x1
/* E31364 801A1C34 46005107 */  neg.s       $ft0, $ft3
/* E31368 801A1C38 44052000 */  mfc1        $a1, $ft0
/* E3136C 801A1C3C 0C001751 */  jal         Matrix_RotateX
/* E31370 801A1C40 00000000 */   nop
/* E31374 801A1C44 44804000 */  mtc1        $zero, $ft2
/* E31378 801A1C48 44803000 */  mtc1        $zero, $ft1
/* E3137C 801A1C4C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E31380 801A1C50 E7A80050 */  swc1        $ft2, 0x50($sp)
/* E31384 801A1C54 E7A60054 */  swc1        $ft1, 0x54($sp)
/* E31388 801A1C58 C60A00D0 */  lwc1        $ft3, 0xD0($s0)
/* E3138C 801A1C5C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E31390 801A1C60 27A50050 */  addiu       $a1, $sp, 0x50
/* E31394 801A1C64 27A60044 */  addiu       $a2, $sp, 0x44
/* E31398 801A1C68 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E3139C 801A1C6C E7AA0058 */   swc1       $ft3, 0x58($sp)
/* E313A0 801A1C70 C7A40044 */  lwc1        $ft0, 0x44($sp)
/* E313A4 801A1C74 C60A0074 */  lwc1        $ft3, 0x74($s0)
/* E313A8 801A1C78 E60400C0 */  swc1        $ft0, 0xC0($s0)
/* E313AC 801A1C7C C7A8004C */  lwc1        $ft2, 0x4C($sp)
/* E313B0 801A1C80 C60400C0 */  lwc1        $ft0, 0xC0($s0)
/* E313B4 801A1C84 E60800C8 */  swc1        $ft2, 0xC8($s0)
/* E313B8 801A1C88 C7A60048 */  lwc1        $ft1, 0x48($sp)
/* E313BC 801A1C8C 46045200 */  add.s       $ft2, $ft3, $ft0
/* E313C0 801A1C90 E60600C4 */  swc1        $ft1, 0xC4($s0)
/* E313C4 801A1C94 C60A00C4 */  lwc1        $ft3, 0xC4($s0)
/* E313C8 801A1C98 C6060078 */  lwc1        $ft1, 0x78($s0)
/* E313CC 801A1C9C E6080074 */  swc1        $ft2, 0x74($s0)
/* E313D0 801A1CA0 C608007C */  lwc1        $ft2, 0x7C($s0)
/* E313D4 801A1CA4 460A3100 */  add.s       $ft0, $ft1, $ft3
/* E313D8 801A1CA8 C60600C8 */  lwc1        $ft1, 0xC8($s0)
/* E313DC 801A1CAC 46064280 */  add.s       $ft3, $ft2, $ft1
/* E313E0 801A1CB0 E6040078 */  swc1        $ft0, 0x78($s0)
/* E313E4 801A1CB4 C608008C */  lwc1        $ft2, 0x8C($s0)
/* E313E8 801A1CB8 E60A007C */  swc1        $ft3, 0x7C($s0)
/* E313EC 801A1CBC C604007C */  lwc1        $ft0, 0x7C($s0)
/* E313F0 801A1CC0 46082180 */  add.s       $ft1, $ft0, $ft2
/* E313F4 801A1CC4 E6060138 */  swc1        $ft1, 0x138($s0)
/* E313F8 801A1CC8 8FBF0024 */  lw          $ra, 0x24($sp)
/* E313FC 801A1CCC 8FB00020 */  lw          $s0, 0x20($sp)
/* E31400 801A1CD0 03E00008 */  jr          $ra
/* E31404 801A1CD4 27BD0060 */   addiu      $sp, $sp, 0x60
glabel func_E16C50_801A1CD8
/* E31408 801A1CD8 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* E3140C 801A1CDC AFB00018 */  sw          $s0, 0x18($sp)
/* E31410 801A1CE0 00808025 */  or          $s0, $a0, $zero
/* E31414 801A1CE4 AFBF001C */  sw          $ra, 0x1C($sp)
/* E31418 801A1CE8 AFA50024 */  sw          $a1, 0x24($sp)
/* E3141C 801A1CEC AFA60028 */  sw          $a2, 0x28($sp)
/* E31420 801A1CF0 AFA7002C */  sw          $a3, 0x2C($sp)
/* E31424 801A1CF4 0C0184F1 */  jal         Object_2F4_Initialize
/* E31428 801A1CF8 02002025 */   or         $a0, $s0, $zero
/* E3142C 801A1CFC 240E0001 */  addiu       $t6, $zero, 0x1
/* E31430 801A1D00 240F00BD */  addiu       $t7, $zero, 0xBD
/* E31434 801A1D04 24180028 */  addiu       $t8, $zero, 0x28
/* E31438 801A1D08 A20E0000 */  sb          $t6, 0x0($s0)
/* E3143C 801A1D0C A60F0002 */  sh          $t7, 0x2($s0)
/* E31440 801A1D10 A61800B8 */  sh          $t8, 0xB8($s0)
/* E31444 801A1D14 8FB90048 */  lw          $t9, 0x48($sp)
/* E31448 801A1D18 24020003 */  addiu       $v0, $zero, 0x3
/* E3144C 801A1D1C A602004A */  sh          $v0, 0x4A($s0)
/* E31450 801A1D20 A6190046 */  sh          $t9, 0x46($s0)
/* E31454 801A1D24 C7A40024 */  lwc1        $ft0, 0x24($sp)
/* E31458 801A1D28 E6040004 */  swc1        $ft0, 0x4($s0)
/* E3145C 801A1D2C C7A60028 */  lwc1        $ft1, 0x28($sp)
/* E31460 801A1D30 E6060008 */  swc1        $ft1, 0x8($s0)
/* E31464 801A1D34 C7A8002C */  lwc1        $ft2, 0x2C($sp)
/* E31468 801A1D38 E608000C */  swc1        $ft2, 0xC($s0)
/* E3146C 801A1D3C C7AA0030 */  lwc1        $ft3, 0x30($sp)
/* E31470 801A1D40 E60A0010 */  swc1        $ft3, 0x10($s0)
/* E31474 801A1D44 C7B00034 */  lwc1        $ft4, 0x34($sp)
/* E31478 801A1D48 E6100014 */  swc1        $ft4, 0x14($s0)
/* E3147C 801A1D4C C7B20038 */  lwc1        $ft5, 0x38($sp)
/* E31480 801A1D50 E6120018 */  swc1        $ft5, 0x18($s0)
/* E31484 801A1D54 C7A4003C */  lwc1        $ft0, 0x3C($sp)
/* E31488 801A1D58 E60400E8 */  swc1        $ft0, 0xE8($s0)
/* E3148C 801A1D5C C7A60040 */  lwc1        $ft1, 0x40($sp)
/* E31490 801A1D60 E60600EC */  swc1        $ft1, 0xEC($s0)
/* E31494 801A1D64 C7A80044 */  lwc1        $ft2, 0x44($sp)
/* E31498 801A1D68 AE020050 */  sw          $v0, 0x50($s0)
/* E3149C 801A1D6C 0C0013AC */  jal         Rand_ZeroOne
/* E314A0 801A1D70 E60800F0 */   swc1       $ft2, 0xF0($s0)
/* E314A4 801A1D74 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E314A8 801A1D78 44815000 */  mtc1        $at, $ft3
/* E314AC 801A1D7C 3C0141C8 */  lui         $at, (0x41C80000 >> 16)
/* E314B0 801A1D80 44819000 */  mtc1        $at, $ft5
/* E314B4 801A1D84 460A0401 */  sub.s       $ft4, $fv0, $ft3
/* E314B8 801A1D88 46128102 */  mul.s       $ft0, $ft4, $ft5
/* E314BC 801A1D8C 0C0013AC */  jal         Rand_ZeroOne
/* E314C0 801A1D90 E6040114 */   swc1       $ft0, 0x114($s0)
/* E314C4 801A1D94 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E314C8 801A1D98 44813000 */  mtc1        $at, $ft1
/* E314CC 801A1D9C 3C0141C8 */  lui         $at, (0x41C80000 >> 16)
/* E314D0 801A1DA0 44815000 */  mtc1        $at, $ft3
/* E314D4 801A1DA4 46060201 */  sub.s       $ft2, $fv0, $ft1
/* E314D8 801A1DA8 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E314DC 801A1DAC 0C0013AC */  jal         Rand_ZeroOne
/* E314E0 801A1DB0 E6100118 */   swc1       $ft4, 0x118($s0)
/* E314E4 801A1DB4 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E314E8 801A1DB8 44819000 */  mtc1        $at, $ft5
/* E314EC 801A1DBC 3C0141C8 */  lui         $at, (0x41C80000 >> 16)
/* E314F0 801A1DC0 44813000 */  mtc1        $at, $ft1
/* E314F4 801A1DC4 46120101 */  sub.s       $ft0, $fv0, $ft5
/* E314F8 801A1DC8 3C0144FA */  lui         $at, (0x44FA0000 >> 16)
/* E314FC 801A1DCC 44815000 */  mtc1        $at, $ft3
/* E31500 801A1DD0 3C014060 */  lui         $at, (0x40600000 >> 16)
/* E31504 801A1DD4 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E31508 801A1DD8 44818000 */  mtc1        $at, $ft4
/* E3150C 801A1DDC 3C0140B0 */  lui         $at, (0x40B00000 >> 16)
/* E31510 801A1DE0 44819000 */  mtc1        $at, $ft5
/* E31514 801A1DE4 2604001C */  addiu       $a0, $s0, 0x1C
/* E31518 801A1DE8 96050002 */  lhu         $a1, 0x2($s0)
/* E3151C 801A1DEC E60A0128 */  swc1        $ft3, 0x128($s0)
/* E31520 801A1DF0 E608011C */  swc1        $ft2, 0x11C($s0)
/* E31524 801A1DF4 E610010C */  swc1        $ft4, 0x10C($s0)
/* E31528 801A1DF8 0C0184AE */  jal         Object_SetInfo
/* E3152C 801A1DFC E6120110 */   swc1       $ft5, 0x110($s0)
/* E31530 801A1E00 8FBF001C */  lw          $ra, 0x1C($sp)
/* E31534 801A1E04 8FB00018 */  lw          $s0, 0x18($sp)
/* E31538 801A1E08 27BD0020 */  addiu       $sp, $sp, 0x20
/* E3153C 801A1E0C 03E00008 */  jr          $ra
/* E31540 801A1E10 00000000 */   nop
glabel func_E16C50_801A1E14
/* E31544 801A1E14 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* E31548 801A1E18 AFBF0034 */  sw          $ra, 0x34($sp)
/* E3154C 801A1E1C AFA60040 */  sw          $a2, 0x40($sp)
/* E31550 801A1E20 AFA70044 */  sw          $a3, 0x44($sp)
/* E31554 801A1E24 3C048017 */  lui         $a0, %hi(gObjects2F4 + 0xAE3C)
/* E31558 801A1E28 3C028016 */  lui         $v0, %hi(gObjects2F4)
/* E3155C 801A1E2C 24423FE0 */  addiu       $v0, $v0, %lo(gObjects2F4)
/* E31560 801A1E30 2484EE1C */  addiu       $a0, $a0, %lo(gObjects2F4 + 0xAE3C)
/* E31564 801A1E34 908E0000 */  lbu         $t6, 0x0($a0)
.LE16C50_801A1E38:
/* E31568 801A1E38 55C00016 */  bnel        $t6, $zero, .LE16C50_801A1E94
/* E3156C 801A1E3C 2484FD0C */   addiu      $a0, $a0, -0x2F4
/* E31570 801A1E40 C7A40044 */  lwc1        $ft0, 0x44($sp)
/* E31574 801A1E44 C7A60048 */  lwc1        $ft1, 0x48($sp)
/* E31578 801A1E48 C7A8004C */  lwc1        $ft2, 0x4C($sp)
/* E3157C 801A1E4C C7AA0050 */  lwc1        $ft3, 0x50($sp)
/* E31580 801A1E50 C7B00054 */  lwc1        $ft4, 0x54($sp)
/* E31584 801A1E54 C7B20058 */  lwc1        $ft5, 0x58($sp)
/* E31588 801A1E58 8FAF005C */  lw          $t7, 0x5C($sp)
/* E3158C 801A1E5C 44056000 */  mfc1        $a1, $fa0
/* E31590 801A1E60 44067000 */  mfc1        $a2, $fa1
/* E31594 801A1E64 8FA70040 */  lw          $a3, 0x40($sp)
/* E31598 801A1E68 E7A40010 */  swc1        $ft0, 0x10($sp)
/* E3159C 801A1E6C E7A60014 */  swc1        $ft1, 0x14($sp)
/* E315A0 801A1E70 E7A80018 */  swc1        $ft2, 0x18($sp)
/* E315A4 801A1E74 E7AA001C */  swc1        $ft3, 0x1C($sp)
/* E315A8 801A1E78 E7B00020 */  swc1        $ft4, 0x20($sp)
/* E315AC 801A1E7C E7B20024 */  swc1        $ft5, 0x24($sp)
/* E315B0 801A1E80 0C068736 */  jal         func_E16C50_801A1CD8
/* E315B4 801A1E84 AFAF0028 */   sw         $t7, 0x28($sp)
/* E315B8 801A1E88 10000006 */  b           .LE16C50_801A1EA4
/* E315BC 801A1E8C 8FBF0034 */   lw         $ra, 0x34($sp)
/* E315C0 801A1E90 2484FD0C */  addiu       $a0, $a0, -0x2F4
.LE16C50_801A1E94:
/* E315C4 801A1E94 0082082B */  sltu        $at, $a0, $v0
/* E315C8 801A1E98 5020FFE7 */  beql        $at, $zero, .LE16C50_801A1E38
/* E315CC 801A1E9C 908E0000 */   lbu        $t6, 0x0($a0)
/* E315D0 801A1EA0 8FBF0034 */  lw          $ra, 0x34($sp)
.LE16C50_801A1EA4:
/* E315D4 801A1EA4 27BD0038 */  addiu       $sp, $sp, 0x38
/* E315D8 801A1EA8 03E00008 */  jr          $ra
/* E315DC 801A1EAC 00000000 */   nop
glabel func_E16C50_801A1EB0
/* E315E0 801A1EB0 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E315E4 801A1EB4 AFBF0024 */  sw          $ra, 0x24($sp)
/* E315E8 801A1EB8 AFA40028 */  sw          $a0, 0x28($sp)
/* E315EC 801A1EBC AFA5002C */  sw          $a1, 0x2C($sp)
/* E315F0 801A1EC0 AFA60030 */  sw          $a2, 0x30($sp)
/* E315F4 801A1EC4 AFA70034 */  sw          $a3, 0x34($sp)
/* E315F8 801A1EC8 0C0013AC */  jal         Rand_ZeroOne
/* E315FC 801A1ECC 00000000 */   nop
/* E31600 801A1ED0 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E31604 801A1ED4 44811000 */  mtc1        $at, $fv1
/* E31608 801A1ED8 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E3160C 801A1EDC 44814000 */  mtc1        $at, $ft2
/* E31610 801A1EE0 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E31614 801A1EE4 C7A60030 */  lwc1        $ft1, 0x30($sp)
/* E31618 801A1EE8 46080282 */  mul.s       $ft3, $fv0, $ft2
/* E3161C 801A1EEC 44809000 */  mtc1        $zero, $ft5
/* E31620 801A1EF0 240E0001 */  addiu       $t6, $zero, 0x1
/* E31624 801A1EF4 44071000 */  mfc1        $a3, $fv1
/* E31628 801A1EF8 AFAE001C */  sw          $t6, 0x1C($sp)
/* E3162C 801A1EFC C7AE0034 */  lwc1        $fa1, 0x34($sp)
/* E31630 801A1F00 8FA60038 */  lw          $a2, 0x38($sp)
/* E31634 801A1F04 46025400 */  add.s       $ft4, $ft3, $fv1
/* E31638 801A1F08 E7A20018 */  swc1        $fv1, 0x18($sp)
/* E3163C 801A1F0C E7B20014 */  swc1        $ft5, 0x14($sp)
/* E31640 801A1F10 46062300 */  add.s       $fa0, $ft0, $ft1
/* E31644 801A1F14 0C067A7D */  jal         func_E16C50_8019E9F4
/* E31648 801A1F18 E7B00010 */   swc1       $ft4, 0x10($sp)
/* E3164C 801A1F1C 0C0013AC */  jal         Rand_ZeroOne
/* E31650 801A1F20 00000000 */   nop
/* E31654 801A1F24 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E31658 801A1F28 44811000 */  mtc1        $at, $fv1
/* E3165C 801A1F2C 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E31660 801A1F30 44814000 */  mtc1        $at, $ft2
/* E31664 801A1F34 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E31668 801A1F38 C7A60030 */  lwc1        $ft1, 0x30($sp)
/* E3166C 801A1F3C 46080282 */  mul.s       $ft3, $fv0, $ft2
/* E31670 801A1F40 44809000 */  mtc1        $zero, $ft5
/* E31674 801A1F44 240F0001 */  addiu       $t7, $zero, 0x1
/* E31678 801A1F48 AFAF001C */  sw          $t7, 0x1C($sp)
/* E3167C 801A1F4C C7AE0034 */  lwc1        $fa1, 0x34($sp)
/* E31680 801A1F50 8FA60038 */  lw          $a2, 0x38($sp)
/* E31684 801A1F54 3C07C1A0 */  lui         $a3, (0xC1A00000 >> 16)
/* E31688 801A1F58 46025400 */  add.s       $ft4, $ft3, $fv1
/* E3168C 801A1F5C E7A20018 */  swc1        $fv1, 0x18($sp)
/* E31690 801A1F60 E7B20014 */  swc1        $ft5, 0x14($sp)
/* E31694 801A1F64 46062301 */  sub.s       $fa0, $ft0, $ft1
/* E31698 801A1F68 0C067A7D */  jal         func_E16C50_8019E9F4
/* E3169C 801A1F6C E7B00010 */   swc1       $ft4, 0x10($sp)
/* E316A0 801A1F70 8FBF0024 */  lw          $ra, 0x24($sp)
/* E316A4 801A1F74 27BD0028 */  addiu       $sp, $sp, 0x28
/* E316A8 801A1F78 03E00008 */  jr          $ra
/* E316AC 801A1F7C 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C1644
/* E50D74 801C1644 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1648
/* E50D78 801C1648 C53B8000 */ .float -3000

dlabel D_E16C50_801C164C
/* E50D7C 801C164C 43E9C000 */ .float 467.5

dlabel D_E16C50_801C1650
/* E50D80 801C1650 43778000 */ .float 247.5

dlabel D_E16C50_801C1654
/* E50D84 801C1654 4432C000 */ .float 715

dlabel D_E16C50_801C1658
/* E50D88 801C1658 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C165C
/* E50D8C 801C165C 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A1F80
/* E316B0 801A1F80 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E316B4 801A1F84 AFB00020 */  sw          $s0, 0x20($sp)
/* E316B8 801A1F88 00808025 */  or          $s0, $a0, $zero
/* E316BC 801A1F8C AFBF0024 */  sw          $ra, 0x24($sp)
/* E316C0 801A1F90 3C0E8018 */  lui         $t6, %hi(D_80178284)
/* E316C4 801A1F94 8DCE8284 */  lw          $t6, %lo(D_80178284)($t6)
/* E316C8 801A1F98 11C00004 */  beqz        $t6, .LE16C50_801A1FAC
/* E316CC 801A1F9C 3C0140B0 */   lui        $at, (0x40B00000 >> 16)
/* E316D0 801A1FA0 44812000 */  mtc1        $at, $ft0
/* E316D4 801A1FA4 00000000 */  nop
/* E316D8 801A1FA8 E60403F8 */  swc1        $ft0, 0x3F8($s0)
.LE16C50_801A1FAC:
/* E316DC 801A1FAC 860F0060 */  lh          $t7, 0x60($s0)
/* E316E0 801A1FB0 15E00089 */  bnez        $t7, .LE16C50_801A21D8
/* E316E4 801A1FB4 3C041014 */   lui        $a0, (0x101400FF >> 16)
/* E316E8 801A1FB8 0C0060BD */  jal         func_800182F4
/* E316EC 801A1FBC 348400FF */   ori        $a0, $a0, (0x101400FF & 0xFFFF)
/* E316F0 801A1FC0 3C041114 */  lui         $a0, (0x111400FF >> 16)
/* E316F4 801A1FC4 0C0060BD */  jal         func_800182F4
/* E316F8 801A1FC8 348400FF */   ori        $a0, $a0, (0x111400FF & 0xFFFF)
/* E316FC 801A1FCC 24180001 */  addiu       $t8, $zero, 0x1
/* E31700 801A1FD0 3C018018 */  lui         $at, %hi(D_80178284)
/* E31704 801A1FD4 AC388284 */  sw          $t8, %lo(D_80178284)($at)
/* E31708 801A1FD8 3C018016 */  lui         $at, %hi(D_801613A0)
/* E3170C 801A1FDC AC2013A0 */  sw          $zero, %lo(D_801613A0)($at)
/* E31710 801A1FE0 24190258 */  addiu       $t9, $zero, 0x258
/* E31714 801A1FE4 A6190060 */  sh          $t9, 0x60($s0)
/* E31718 801A1FE8 3C01801C */  lui         $at, %hi(D_E16C50_801C1644)
/* E3171C 801A1FEC C4261644 */  lwc1        $ft1, %lo(D_E16C50_801C1644)($at)
/* E31720 801A1FF0 24080190 */  addiu       $t0, $zero, 0x190
/* E31724 801A1FF4 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E31728 801A1FF8 A608008E */  sh          $t0, 0x8E($s0)
/* E3172C 801A1FFC 44814000 */  mtc1        $at, $ft2
/* E31730 801A2000 8609008E */  lh          $t1, 0x8E($s0)
/* E31734 801A2004 3C01801C */  lui         $at, %hi(D_E16C50_801C1648)
/* E31738 801A2008 E60603F8 */  swc1        $ft1, 0x3F8($s0)
/* E3173C 801A200C E60800D8 */  swc1        $ft2, 0xD8($s0)
/* E31740 801A2010 A609008C */  sh          $t1, 0x8C($s0)
/* E31744 801A2014 C42A1648 */  lwc1        $ft3, %lo(D_E16C50_801C1648)($at)
/* E31748 801A2018 3C0144FA */  lui         $at, (0x44FA0000 >> 16)
/* E3174C 801A201C 44819000 */  mtc1        $at, $ft5
/* E31750 801A2020 C610000C */  lwc1        $ft4, 0xC($s0)
/* E31754 801A2024 8E050004 */  lw          $a1, 0x4($s0)
/* E31758 801A2028 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1D88)
/* E3175C 801A202C 46128100 */  add.s       $ft0, $ft4, $ft5
/* E31760 801A2030 240A0001 */  addiu       $t2, $zero, 0x1
/* E31764 801A2034 E60A0008 */  swc1        $ft3, 0x8($s0)
/* E31768 801A2038 AFAA0010 */  sw          $t2, 0x10($sp)
/* E3176C 801A203C 44062000 */  mfc1        $a2, $ft0
/* E31770 801A2040 24845D68 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1D88)
/* E31774 801A2044 0C06833B */  jal         func_E16C50_801A0CEC
/* E31778 801A2048 3C0741A0 */   lui        $a3, (0x41A00000 >> 16)
/* E3177C 801A204C 3C0B8017 */  lui         $t3, %hi(gMainController)
/* E31780 801A2050 8D6B7AF8 */  lw          $t3, %lo(gMainController)($t3)
/* E31784 801A2054 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E31788 801A2058 44813000 */  mtc1        $at, $ft1
/* E3178C 801A205C 3C018017 */  lui         $at, %hi(D_801779A8)
/* E31790 801A2060 000B6080 */  sll         $t4, $t3, 2
/* E31794 801A2064 002C0821 */  addu        $at, $at, $t4
/* E31798 801A2068 E42679A8 */  swc1        $ft1, %lo(D_801779A8)($at)
/* E3179C 801A206C 3C018018 */  lui         $at, %hi(D_80178480)
/* E317A0 801A2070 240D0078 */  addiu       $t5, $zero, 0x78
/* E317A4 801A2074 AC2D8480 */  sw          $t5, %lo(D_80178480)($at)
/* E317A8 801A2078 3C020602 */  lui         $v0, %hi(D_60231A4)
/* E317AC 801A207C 3C014516 */  lui         $at, (0x45160000 >> 16)
/* E317B0 801A2080 244231A4 */  addiu       $v0, $v0, %lo(D_60231A4)
/* E317B4 801A2084 44814000 */  mtc1        $at, $ft2
/* E317B8 801A2088 00027100 */  sll         $t6, $v0, 4
/* E317BC 801A208C 000E7F02 */  srl         $t7, $t6, 28
/* E317C0 801A2090 000FC080 */  sll         $t8, $t7, 2
/* E317C4 801A2094 3C19800E */  lui         $t9, %hi(gSegments)
/* E317C8 801A2098 0338C821 */  addu        $t9, $t9, $t8
/* E317CC 801A209C 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* E317D0 801A20A0 E60800E4 */  swc1        $ft2, 0xE4($s0)
/* E317D4 801A20A4 8F391FD0 */  lw          $t9, %lo(gSegments)($t9)
/* E317D8 801A20A8 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* E317DC 801A20AC 00414024 */  and         $t0, $v0, $at
/* E317E0 801A20B0 3C018000 */  lui         $at, (0x80000000 >> 16)
/* E317E4 801A20B4 03284821 */  addu        $t1, $t9, $t0
/* E317E8 801A20B8 01215021 */  addu        $t2, $t1, $at
/* E317EC 801A20BC 3C01435C */  lui         $at, (0x435C0000 >> 16)
/* E317F0 801A20C0 44815000 */  mtc1        $at, $ft3
/* E317F4 801A20C4 AE0A0028 */  sw          $t2, 0x28($s0)
/* E317F8 801A20C8 A600004C */  sh          $zero, 0x4C($s0)
/* E317FC 801A20CC A600008A */  sh          $zero, 0x8A($s0)
/* E31800 801A20D0 E54A00A8 */  swc1        $ft3, 0xA8($t2)
/* E31804 801A20D4 8E030028 */  lw          $v1, 0x28($s0)
/* E31808 801A20D8 3C01801C */  lui         $at, %hi(D_E16C50_801C164C)
/* E3180C 801A20DC 3C02801C */  lui         $v0, %hi(D_E16C50_801C2768)
/* E31810 801A20E0 C46000A8 */  lwc1        $fv0, 0xA8($v1)
/* E31814 801A20E4 24422768 */  addiu       $v0, $v0, %lo(D_E16C50_801C2768)
/* E31818 801A20E8 3C04801C */  lui         $a0, %hi(D_E16C50_801C2740)
/* E3181C 801A20EC E4600098 */  swc1        $fv0, 0x98($v1)
/* E31820 801A20F0 8E0C0028 */  lw          $t4, 0x28($s0)
/* E31824 801A20F4 24842740 */  addiu       $a0, $a0, %lo(D_E16C50_801C2740)
/* E31828 801A20F8 240500FF */  addiu       $a1, $zero, 0xFF
/* E3182C 801A20FC E5800090 */  swc1        $fv0, 0x90($t4)
/* E31830 801A2100 8E0D0028 */  lw          $t5, 0x28($s0)
/* E31834 801A2104 E5A00080 */  swc1        $fv0, 0x80($t5)
/* E31838 801A2108 8E0E0028 */  lw          $t6, 0x28($s0)
/* E3183C 801A210C E5C00078 */  swc1        $fv0, 0x78($t6)
/* E31840 801A2110 8E0F0028 */  lw          $t7, 0x28($s0)
/* E31844 801A2114 E5E00068 */  swc1        $fv0, 0x68($t7)
/* E31848 801A2118 8E180028 */  lw          $t8, 0x28($s0)
/* E3184C 801A211C E7000060 */  swc1        $fv0, 0x60($t8)
/* E31850 801A2120 8E190028 */  lw          $t9, 0x28($s0)
/* E31854 801A2124 E7200050 */  swc1        $fv0, 0x50($t9)
/* E31858 801A2128 8E080028 */  lw          $t0, 0x28($s0)
/* E3185C 801A212C E5000048 */  swc1        $fv0, 0x48($t0)
/* E31860 801A2130 8E090028 */  lw          $t1, 0x28($s0)
/* E31864 801A2134 E5200038 */  swc1        $fv0, 0x38($t1)
/* E31868 801A2138 8E0A0028 */  lw          $t2, 0x28($s0)
/* E3186C 801A213C E5400030 */  swc1        $fv0, 0x30($t2)
/* E31870 801A2140 8E0B0028 */  lw          $t3, 0x28($s0)
/* E31874 801A2144 E5600020 */  swc1        $fv0, 0x20($t3)
/* E31878 801A2148 8E0C0028 */  lw          $t4, 0x28($s0)
/* E3187C 801A214C C430164C */  lwc1        $ft4, %lo(D_E16C50_801C164C)($at)
/* E31880 801A2150 3C01801C */  lui         $at, %hi(D_E16C50_801C1650)
/* E31884 801A2154 E5900070 */  swc1        $ft4, 0x70($t4)
/* E31888 801A2158 8E030028 */  lw          $v1, 0x28($s0)
/* E3188C 801A215C 44808000 */  mtc1        $zero, $ft4
/* E31890 801A2160 C4720070 */  lwc1        $ft5, 0x70($v1)
/* E31894 801A2164 E4720028 */  swc1        $ft5, 0x28($v1)
/* E31898 801A2168 8E0D0028 */  lw          $t5, 0x28($s0)
/* E3189C 801A216C C4241650 */  lwc1        $ft0, %lo(D_E16C50_801C1650)($at)
/* E318A0 801A2170 3C01801C */  lui         $at, %hi(D_E16C50_801C1654)
/* E318A4 801A2174 E5A40088 */  swc1        $ft0, 0x88($t5)
/* E318A8 801A2178 8E030028 */  lw          $v1, 0x28($s0)
/* E318AC 801A217C C4660088 */  lwc1        $ft1, 0x88($v1)
/* E318B0 801A2180 E4660040 */  swc1        $ft1, 0x40($v1)
/* E318B4 801A2184 8E0E0028 */  lw          $t6, 0x28($s0)
/* E318B8 801A2188 C4281654 */  lwc1        $ft2, %lo(D_E16C50_801C1654)($at)
/* E318BC 801A218C E5C800A0 */  swc1        $ft2, 0xA0($t6)
/* E318C0 801A2190 8E030028 */  lw          $v1, 0x28($s0)
/* E318C4 801A2194 C46A00A0 */  lwc1        $ft3, 0xA0($v1)
/* E318C8 801A2198 E46A0058 */  swc1        $ft3, 0x58($v1)
/* E318CC 801A219C E4500034 */  swc1        $ft4, 0x34($v0)
/* E318D0 801A21A0 C4400034 */  lwc1        $fv0, 0x34($v0)
/* E318D4 801A21A4 AC850000 */  sw          $a1, 0x0($a0)
/* E318D8 801A21A8 AC850004 */  sw          $a1, 0x4($a0)
/* E318DC 801A21AC E4400030 */  swc1        $fv0, 0x30($v0)
/* E318E0 801A21B0 E440002C */  swc1        $fv0, 0x2C($v0)
/* E318E4 801A21B4 E4400028 */  swc1        $fv0, 0x28($v0)
/* E318E8 801A21B8 E4400024 */  swc1        $fv0, 0x24($v0)
/* E318EC 801A21BC E4400020 */  swc1        $fv0, 0x20($v0)
/* E318F0 801A21C0 E440001C */  swc1        $fv0, 0x1C($v0)
/* E318F4 801A21C4 E4400018 */  swc1        $fv0, 0x18($v0)
/* E318F8 801A21C8 E4400014 */  swc1        $fv0, 0x14($v0)
/* E318FC 801A21CC E4400010 */  swc1        $fv0, 0x10($v0)
/* E31900 801A21D0 E4400008 */  swc1        $fv0, 0x8($v0)
/* E31904 801A21D4 E440000C */  swc1        $fv0, 0xC($v0)
.LE16C50_801A21D8:
/* E31908 801A21D8 3C0144FA */  lui         $at, (0x44FA0000 >> 16)
/* E3190C 801A21DC 44812000 */  mtc1        $at, $ft0
/* E31910 801A21E0 C612000C */  lwc1        $ft5, 0xC($s0)
/* E31914 801A21E4 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1D94)
/* E31918 801A21E8 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E3191C 801A21EC 46049180 */  add.s       $ft1, $ft5, $ft0
/* E31920 801A21F0 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E31924 801A21F4 26040008 */  addiu       $a0, $s0, 0x8
/* E31928 801A21F8 3C054334 */  lui         $a1, (0x43340000 >> 16)
/* E3192C 801A21FC E4265D74 */  swc1        $ft1, %lo(gObjects2F4 + 0x1D94)($at)
/* E31930 801A2200 3C01801C */  lui         $at, %hi(D_E16C50_801C1658)
/* E31934 801A2204 C4281658 */  lwc1        $ft2, %lo(D_E16C50_801C1658)($at)
/* E31938 801A2208 3C0741F0 */  lui         $a3, (0x41F00000 >> 16)
/* E3193C 801A220C 0C026F0B */  jal         Math_SmoothStepToF
/* E31940 801A2210 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E31944 801A2214 3C038018 */  lui         $v1, %hi(gFogRed)
/* E31948 801A2218 24638320 */  addiu       $v1, $v1, %lo(gFogRed)
/* E3194C 801A221C 8C620000 */  lw          $v0, 0x0($v1)
/* E31950 801A2220 28410061 */  slti        $at, $v0, 0x61
/* E31954 801A2224 14200002 */  bnez        $at, .LE16C50_801A2230
/* E31958 801A2228 244FFFFF */   addiu      $t7, $v0, -0x1
/* E3195C 801A222C AC6F0000 */  sw          $t7, 0x0($v1)
.LE16C50_801A2230:
/* E31960 801A2230 3C038018 */  lui         $v1, %hi(gFogGreen)
/* E31964 801A2234 24638328 */  addiu       $v1, $v1, %lo(gFogGreen)
/* E31968 801A2238 8C620000 */  lw          $v0, 0x0($v1)
/* E3196C 801A223C 00002025 */  or          $a0, $zero, $zero
/* E31970 801A2240 3405801B */  ori         $a1, $zero, 0x801B
/* E31974 801A2244 28410061 */  slti        $at, $v0, 0x61
/* E31978 801A2248 14200002 */  bnez        $at, .LE16C50_801A2254
/* E3197C 801A224C 2458FFFF */   addiu      $t8, $v0, -0x1
/* E31980 801A2250 AC780000 */  sw          $t8, 0x0($v1)
.LE16C50_801A2254:
/* E31984 801A2254 3C038018 */  lui         $v1, %hi(gFogBlue)
/* E31988 801A2258 24638330 */  addiu       $v1, $v1, %lo(gFogBlue)
/* E3198C 801A225C 8C620000 */  lw          $v0, 0x0($v1)
/* E31990 801A2260 00003025 */  or          $a2, $zero, $zero
/* E31994 801A2264 28410041 */  slti        $at, $v0, 0x41
/* E31998 801A2268 14200002 */  bnez        $at, .LE16C50_801A2274
/* E3199C 801A226C 2459FFFF */   addiu      $t9, $v0, -0x1
/* E319A0 801A2270 AC790000 */  sw          $t9, 0x0($v1)
.LE16C50_801A2274:
/* E319A4 801A2274 3C028016 */  lui         $v0, %hi(D_801613A0)
/* E319A8 801A2278 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
/* E319AC 801A227C 2401001E */  addiu       $at, $zero, 0x1E
/* E319B0 801A2280 54410006 */  bnel        $v0, $at, .LE16C50_801A229C
/* E319B4 801A2284 2841003D */   slti       $at, $v0, 0x3D
/* E319B8 801A2288 0C007511 */  jal         func_8001D444
/* E319BC 801A228C 240700FF */   addiu      $a3, $zero, 0xFF
/* E319C0 801A2290 3C028016 */  lui         $v0, %hi(D_801613A0)
/* E319C4 801A2294 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
/* E319C8 801A2298 2841003D */  slti        $at, $v0, 0x3D
.LE16C50_801A229C:
/* E319CC 801A229C 1020000E */  beqz        $at, .LE16C50_801A22D8
/* E319D0 801A22A0 3C088017 */   lui        $t0, %hi(gMainController)
/* E319D4 801A22A4 8D087AF8 */  lw          $t0, %lo(gMainController)($t0)
/* E319D8 801A22A8 44805000 */  mtc1        $zero, $ft3
/* E319DC 801A22AC 3C0A8017 */  lui         $t2, %hi(D_801779A8)
/* E319E0 801A22B0 254A79A8 */  addiu       $t2, $t2, %lo(D_801779A8)
/* E319E4 801A22B4 00084880 */  sll         $t1, $t0, 2
/* E319E8 801A22B8 012A2021 */  addu        $a0, $t1, $t2
/* E319EC 801A22BC 3C0542F0 */  lui         $a1, (0x42F00000 >> 16)
/* E319F0 801A22C0 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E319F4 801A22C4 3C074060 */  lui         $a3, (0x40600000 >> 16)
/* E319F8 801A22C8 0C026F0B */  jal         Math_SmoothStepToF
/* E319FC 801A22CC E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E31A00 801A22D0 3C028016 */  lui         $v0, %hi(D_801613A0)
/* E31A04 801A22D4 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
.LE16C50_801A22D8:
/* E31A08 801A22D8 2401003C */  addiu       $at, $zero, 0x3C
/* E31A0C 801A22DC 1441000E */  bne         $v0, $at, .LE16C50_801A2318
/* E31A10 801A22E0 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E31A14 801A22E4 3C0C800C */  lui         $t4, %hi(D_800C5D3C)
/* E31A18 801A22E8 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E31A1C 801A22EC 240B0003 */  addiu       $t3, $zero, 0x3
/* E31A20 801A22F0 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1E58)
/* E31A24 801A22F4 258C5D3C */  addiu       $t4, $t4, %lo(D_800C5D3C)
/* E31A28 801A22F8 3C041903 */  lui         $a0, (0x19036053 >> 16)
/* E31A2C 801A22FC A02B5E38 */  sb          $t3, %lo(gObjects2F4 + 0x1E58)($at)
/* E31A30 801A2300 34846053 */  ori         $a0, $a0, (0x19036053 & 0xFFFF)
/* E31A34 801A2304 AFAC0014 */  sw          $t4, 0x14($sp)
/* E31A38 801A2308 AFA70010 */  sw          $a3, 0x10($sp)
/* E31A3C 801A230C 260503FC */  addiu       $a1, $s0, 0x3FC
/* E31A40 801A2310 0C006486 */  jal         Audio_PlaySfx
/* E31A44 801A2314 24060004 */   addiu      $a2, $zero, 0x4
.LE16C50_801A2318:
/* E31A48 801A2318 860D0050 */  lh          $t5, 0x50($s0)
/* E31A4C 801A231C 24010064 */  addiu       $at, $zero, 0x64
/* E31A50 801A2320 240E0001 */  addiu       $t6, $zero, 0x1
/* E31A54 801A2324 15A10003 */  bne         $t5, $at, .LE16C50_801A2334
/* E31A58 801A2328 3C028016 */   lui        $v0, %hi(D_801613A0)
/* E31A5C 801A232C A600004C */  sh          $zero, 0x4C($s0)
/* E31A60 801A2330 A60E008A */  sh          $t6, 0x8A($s0)
.LE16C50_801A2334:
/* E31A64 801A2334 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
/* E31A68 801A2338 24010096 */  addiu       $at, $zero, 0x96
/* E31A6C 801A233C 54410009 */  bnel        $v0, $at, .LE16C50_801A2364
/* E31A70 801A2340 24010064 */   addiu      $at, $zero, 0x64
/* E31A74 801A2344 0C0688E7 */  jal         func_E16C50_801A239C
/* E31A78 801A2348 02002025 */   or         $a0, $s0, $zero
/* E31A7C 801A234C 3C01801C */  lui         $at, %hi(D_E16C50_801C165C)
/* E31A80 801A2350 C430165C */  lwc1        $ft4, %lo(D_E16C50_801C165C)($at)
/* E31A84 801A2354 3C028016 */  lui         $v0, %hi(D_801613A0)
/* E31A88 801A2358 E61000D8 */  swc1        $ft4, 0xD8($s0)
/* E31A8C 801A235C 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
/* E31A90 801A2360 24010064 */  addiu       $at, $zero, 0x64
.LE16C50_801A2364:
/* E31A94 801A2364 14410008 */  bne         $v0, $at, .LE16C50_801A2388
/* E31A98 801A2368 3C0F8017 */   lui        $t7, %hi(gTeamShields + 0xC)
/* E31A9C 801A236C 8DEF78BC */  lw          $t7, %lo(gTeamShields + 0xC)($t7)
/* E31AA0 801A2370 3C048018 */  lui         $a0, %hi(gMsg_ID_10300)
/* E31AA4 801A2374 2484FC40 */  addiu       $a0, $a0, %lo(gMsg_ID_10300)
/* E31AA8 801A2378 51E00004 */  beql        $t7, $zero, .LE16C50_801A238C
/* E31AAC 801A237C 8FBF0024 */   lw         $ra, 0x24($sp)
/* E31AB0 801A2380 0C02EA02 */  jal         func_800BA808
/* E31AB4 801A2384 2405001E */   addiu      $a1, $zero, 0x1E
.LE16C50_801A2388:
/* E31AB8 801A2388 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_801A238C:
/* E31ABC 801A238C 8FB00020 */  lw          $s0, 0x20($sp)
/* E31AC0 801A2390 27BD0028 */  addiu       $sp, $sp, 0x28
/* E31AC4 801A2394 03E00008 */  jr          $ra
/* E31AC8 801A2398 00000000 */   nop
glabel func_E16C50_801A239C
/* E31ACC 801A239C 848F008C */  lh          $t7, 0x8C($a0)
/* E31AD0 801A23A0 240E0001 */  addiu       $t6, $zero, 0x1
/* E31AD4 801A23A4 A48E0088 */  sh          $t6, 0x88($a0)
/* E31AD8 801A23A8 55E00006 */  bnel        $t7, $zero, .LE16C50_801A23C4
/* E31ADC 801A23AC 8499008E */   lh         $t9, 0x8E($a0)
/* E31AE0 801A23B0 8498008E */  lh          $t8, 0x8E($a0)
/* E31AE4 801A23B4 240A0007 */  addiu       $t2, $zero, 0x7
/* E31AE8 801A23B8 5300000B */  beql        $t8, $zero, .LE16C50_801A23E8
/* E31AEC 801A23BC A48A008A */   sh         $t2, 0x8A($a0)
/* E31AF0 801A23C0 8499008E */  lh          $t9, 0x8E($a0)
.LE16C50_801A23C4:
/* E31AF4 801A23C4 24080003 */  addiu       $t0, $zero, 0x3
/* E31AF8 801A23C8 24090004 */  addiu       $t1, $zero, 0x4
/* E31AFC 801A23CC 13200003 */  beqz        $t9, .LE16C50_801A23DC
/* E31B00 801A23D0 00000000 */   nop
/* E31B04 801A23D4 10000004 */  b           .LE16C50_801A23E8
/* E31B08 801A23D8 A488008A */   sh         $t0, 0x8A($a0)
.LE16C50_801A23DC:
/* E31B0C 801A23DC 10000002 */  b           .LE16C50_801A23E8
/* E31B10 801A23E0 A489008A */   sh         $t1, 0x8A($a0)
/* E31B14 801A23E4 A48A008A */  sh          $t2, 0x8A($a0)
.LE16C50_801A23E8:
/* E31B18 801A23E8 A480004C */  sh          $zero, 0x4C($a0)
/* E31B1C 801A23EC 03E00008 */  jr          $ra
/* E31B20 801A23F0 00000000 */   nop
.section .late_rodata
dlabel jtbl_E16C50_801C1660
/* E50D90 801C1660 801A2A60 */ .word .LE16C50_801A2A60
/* E50D94 801C1664 801A2430 */ .word .LE16C50_801A2430
/* E50D98 801C1668 801A25BC */ .word .LE16C50_801A25BC
/* E50D9C 801C166C 801A2700 */ .word .LE16C50_801A2700
/* E50DA0 801C1670 801A2C28 */ .word .LE16C50_801A2C28
/* E50DA4 801C1674 801A28DC */ .word .LE16C50_801A28DC

dlabel D_E16C50_801C1678
/* E50DA8 801C1678 4432C000 */ .float 715

dlabel D_E16C50_801C167C
/* E50DAC 801C167C 4432C000 */ .float 715

dlabel D_E16C50_801C1680
/* E50DB0 801C1680 4432C000 */ .float 715

dlabel D_E16C50_801C1684
/* E50DB4 801C1684 43898000 */ .float 275

dlabel D_E16C50_801C1688
/* E50DB8 801C1688 4432C000 */ .float 715

dlabel D_E16C50_801C168C
/* E50DBC 801C168C 45228000 */ .float 2600

dlabel D_E16C50_801C1690
/* E50DC0 801C1690 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1694
/* E50DC4 801C1694 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1698
/* E50DC8 801C1698 44898000 */ .float 1100

dlabel D_E16C50_801C169C
/* E50DCC 801C169C 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C16A0
/* E50DD0 801C16A0 4432C000 */ .float 715

dlabel D_E16C50_801C16A4
/* E50DD4 801C16A4 4432C000 */ .float 715


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A23F4
/* E31B24 801A23F4 27BDFF98 */  addiu       $sp, $sp, -0x68
/* E31B28 801A23F8 AFB10020 */  sw          $s1, 0x20($sp)
/* E31B2C 801A23FC 00808825 */  or          $s1, $a0, $zero
/* E31B30 801A2400 AFBF0024 */  sw          $ra, 0x24($sp)
/* E31B34 801A2404 AFB0001C */  sw          $s0, 0x1C($sp)
/* E31B38 801A2408 862E008A */  lh          $t6, 0x8A($s1)
/* E31B3C 801A240C 25CFFFFE */  addiu       $t7, $t6, -0x2
/* E31B40 801A2410 2DE10006 */  sltiu       $at, $t7, 0x6
/* E31B44 801A2414 10200204 */  beqz        $at, .LE16C50_801A2C28
/* E31B48 801A2418 000F7880 */   sll        $t7, $t7, 2
/* E31B4C 801A241C 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C1660)
/* E31B50 801A2420 002F0821 */  addu        $at, $at, $t7
/* E31B54 801A2424 8C2F1660 */  lw          $t7, %lo(jtbl_E16C50_801C1660)($at)
/* E31B58 801A2428 01E00008 */  jr          $t7
/* E31B5C 801A242C 00000000 */   nop
.LE16C50_801A2430:
/* E31B60 801A2430 8622004C */  lh          $v0, 0x4C($s1)
/* E31B64 801A2434 24010077 */  addiu       $at, $zero, 0x77
/* E31B68 801A2438 50410005 */  beql        $v0, $at, .LE16C50_801A2450
/* E31B6C 801A243C 8639008C */   lh         $t9, 0x8C($s1)
/* E31B70 801A2440 8638008E */  lh          $t8, 0x8E($s1)
/* E31B74 801A2444 57000022 */  bnel        $t8, $zero, .LE16C50_801A24D0
/* E31B78 801A2448 2841001C */   slti       $at, $v0, 0x1C
/* E31B7C 801A244C 8639008C */  lh          $t9, 0x8C($s1)
.LE16C50_801A2450:
/* E31B80 801A2450 A620004C */  sh          $zero, 0x4C($s1)
/* E31B84 801A2454 53200014 */  beql        $t9, $zero, .LE16C50_801A24A8
/* E31B88 801A2458 862A008E */   lh         $t2, 0x8E($s1)
/* E31B8C 801A245C 0C0013AC */  jal         Rand_ZeroOne
/* E31B90 801A2460 00000000 */   nop
/* E31B94 801A2464 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E31B98 801A2468 44812000 */  mtc1        $at, $ft0
/* E31B9C 801A246C 24080004 */  addiu       $t0, $zero, 0x4
/* E31BA0 801A2470 24090002 */  addiu       $t1, $zero, 0x2
/* E31BA4 801A2474 4600203E */  c.le.s      $ft0, $fv0
/* E31BA8 801A2478 00000000 */  nop
/* E31BAC 801A247C 45020004 */  bc1fl       .LE16C50_801A2490
/* E31BB0 801A2480 44803000 */   mtc1       $zero, $ft1
/* E31BB4 801A2484 10000005 */  b           .LE16C50_801A249C
/* E31BB8 801A2488 A628008A */   sh         $t0, 0x8A($s1)
/* E31BBC 801A248C 44803000 */  mtc1        $zero, $ft1
.LE16C50_801A2490:
/* E31BC0 801A2490 A629008A */  sh          $t1, 0x8A($s1)
/* E31BC4 801A2494 A620004E */  sh          $zero, 0x4E($s1)
/* E31BC8 801A2498 E626007C */  swc1        $ft1, 0x7C($s1)
.LE16C50_801A249C:
/* E31BCC 801A249C 1000000B */  b           .LE16C50_801A24CC
/* E31BD0 801A24A0 8622004C */   lh         $v0, 0x4C($s1)
/* E31BD4 801A24A4 862A008E */  lh          $t2, 0x8E($s1)
.LE16C50_801A24A8:
/* E31BD8 801A24A8 240B0007 */  addiu       $t3, $zero, 0x7
/* E31BDC 801A24AC 240C0005 */  addiu       $t4, $zero, 0x5
/* E31BE0 801A24B0 55400005 */  bnel        $t2, $zero, .LE16C50_801A24C8
/* E31BE4 801A24B4 A62C008A */   sh         $t4, 0x8A($s1)
/* E31BE8 801A24B8 A62B008A */  sh          $t3, 0x8A($s1)
/* E31BEC 801A24BC 10000003 */  b           .LE16C50_801A24CC
/* E31BF0 801A24C0 8622004C */   lh         $v0, 0x4C($s1)
/* E31BF4 801A24C4 A62C008A */  sh          $t4, 0x8A($s1)
.LE16C50_801A24C8:
/* E31BF8 801A24C8 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A24CC:
/* E31BFC 801A24CC 2841001C */  slti        $at, $v0, 0x1C
.LE16C50_801A24D0:
/* E31C00 801A24D0 1420000E */  bnez        $at, .LE16C50_801A250C
/* E31C04 801A24D4 263003FC */   addiu      $s0, $s1, 0x3FC
/* E31C08 801A24D8 3C01801C */  lui         $at, %hi(D_E16C50_801C1678)
/* E31C0C 801A24DC C4281678 */  lwc1        $ft2, %lo(D_E16C50_801C1678)($at)
/* E31C10 801A24E0 8E2D0028 */  lw          $t5, 0x28($s1)
/* E31C14 801A24E4 3C0143DC */  lui         $at, (0x43DC0000 >> 16)
/* E31C18 801A24E8 44815000 */  mtc1        $at, $ft3
/* E31C1C 801A24EC E5A80098 */  swc1        $ft2, 0x98($t5)
/* E31C20 801A24F0 8E2E0028 */  lw          $t6, 0x28($s1)
/* E31C24 801A24F4 3C0142DC */  lui         $at, (0x42DC0000 >> 16)
/* E31C28 801A24F8 44818000 */  mtc1        $at, $ft4
/* E31C2C 801A24FC E5CA00A0 */  swc1        $ft3, 0xA0($t6)
/* E31C30 801A2500 8E2F0028 */  lw          $t7, 0x28($s1)
/* E31C34 801A2504 E5F000A8 */  swc1        $ft4, 0xA8($t7)
/* E31C38 801A2508 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A250C:
/* E31C3C 801A250C 2401001D */  addiu       $at, $zero, 0x1D
/* E31C40 801A2510 1441000F */  bne         $v0, $at, .LE16C50_801A2550
/* E31C44 801A2514 02002025 */   or         $a0, $s0, $zero
/* E31C48 801A2518 0C017C3A */  jal         func_8005F0E8
/* E31C4C 801A251C 26250004 */   addiu      $a1, $s1, 0x4
/* E31C50 801A2520 3C18800C */  lui         $t8, %hi(D_800C5D34)
/* E31C54 801A2524 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E31C58 801A2528 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E31C5C 801A252C 27075D34 */  addiu       $a3, $t8, %lo(D_800C5D34)
/* E31C60 801A2530 3C041903 */  lui         $a0, (0x19035053 >> 16)
/* E31C64 801A2534 34845053 */  ori         $a0, $a0, (0x19035053 & 0xFFFF)
/* E31C68 801A2538 AFA70010 */  sw          $a3, 0x10($sp)
/* E31C6C 801A253C AFB90014 */  sw          $t9, 0x14($sp)
/* E31C70 801A2540 02002825 */  or          $a1, $s0, $zero
/* E31C74 801A2544 0C006486 */  jal         Audio_PlaySfx
/* E31C78 801A2548 24060004 */   addiu      $a2, $zero, 0x4
/* E31C7C 801A254C 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A2550:
/* E31C80 801A2550 24010050 */  addiu       $at, $zero, 0x50
/* E31C84 801A2554 1441000C */  bne         $v0, $at, .LE16C50_801A2588
/* E31C88 801A2558 3C042943 */   lui        $a0, (0x29432077 >> 16)
/* E31C8C 801A255C 3C08800C */  lui         $t0, %hi(D_800C5D34)
/* E31C90 801A2560 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E31C94 801A2564 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E31C98 801A2568 25075D34 */  addiu       $a3, $t0, %lo(D_800C5D34)
/* E31C9C 801A256C AFA70010 */  sw          $a3, 0x10($sp)
/* E31CA0 801A2570 AFA90014 */  sw          $t1, 0x14($sp)
/* E31CA4 801A2574 34842077 */  ori         $a0, $a0, (0x29432077 & 0xFFFF)
/* E31CA8 801A2578 262503FC */  addiu       $a1, $s1, 0x3FC
/* E31CAC 801A257C 0C006486 */  jal         Audio_PlaySfx
/* E31CB0 801A2580 24060004 */   addiu      $a2, $zero, 0x4
/* E31CB4 801A2584 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A2588:
/* E31CB8 801A2588 2841005E */  slti        $at, $v0, 0x5E
/* E31CBC 801A258C 142001A6 */  bnez        $at, .LE16C50_801A2C28
/* E31CC0 801A2590 3C01435C */   lui        $at, (0x435C0000 >> 16)
/* E31CC4 801A2594 44810000 */  mtc1        $at, $fv0
/* E31CC8 801A2598 8E2A0028 */  lw          $t2, 0x28($s1)
/* E31CCC 801A259C 3C01801C */  lui         $at, %hi(D_E16C50_801C167C)
/* E31CD0 801A25A0 E5400098 */  swc1        $fv0, 0x98($t2)
/* E31CD4 801A25A4 8E2B0028 */  lw          $t3, 0x28($s1)
/* E31CD8 801A25A8 C432167C */  lwc1        $ft5, %lo(D_E16C50_801C167C)($at)
/* E31CDC 801A25AC E57200A0 */  swc1        $ft5, 0xA0($t3)
/* E31CE0 801A25B0 8E2C0028 */  lw          $t4, 0x28($s1)
/* E31CE4 801A25B4 1000019C */  b           .LE16C50_801A2C28
/* E31CE8 801A25B8 E58000A8 */   swc1       $fv0, 0xA8($t4)
.LE16C50_801A25BC:
/* E31CEC 801A25BC 8622004C */  lh          $v0, 0x4C($s1)
/* E31CF0 801A25C0 24010063 */  addiu       $at, $zero, 0x63
/* E31CF4 801A25C4 263003FC */  addiu       $s0, $s1, 0x3FC
/* E31CF8 801A25C8 10410004 */  beq         $v0, $at, .LE16C50_801A25DC
/* E31CFC 801A25CC 02002025 */   or         $a0, $s0, $zero
/* E31D00 801A25D0 862D008C */  lh          $t5, 0x8C($s1)
/* E31D04 801A25D4 55A00010 */  bnel        $t5, $zero, .LE16C50_801A2618
/* E31D08 801A25D8 28410015 */   slti       $at, $v0, 0x15
.LE16C50_801A25DC:
/* E31D0C 801A25DC 862E008E */  lh          $t6, 0x8E($s1)
/* E31D10 801A25E0 A620004C */  sh          $zero, 0x4C($s1)
/* E31D14 801A25E4 24180005 */  addiu       $t8, $zero, 0x5
/* E31D18 801A25E8 55C00006 */  bnel        $t6, $zero, .LE16C50_801A2604
/* E31D1C 801A25EC A638008A */   sh         $t8, 0x8A($s1)
/* E31D20 801A25F0 862F008C */  lh          $t7, 0x8C($s1)
/* E31D24 801A25F4 24190007 */  addiu       $t9, $zero, 0x7
/* E31D28 801A25F8 51E00005 */  beql        $t7, $zero, .LE16C50_801A2610
/* E31D2C 801A25FC A639008A */   sh         $t9, 0x8A($s1)
/* E31D30 801A2600 A638008A */  sh          $t8, 0x8A($s1)
.LE16C50_801A2604:
/* E31D34 801A2604 10000003 */  b           .LE16C50_801A2614
/* E31D38 801A2608 8622004C */   lh         $v0, 0x4C($s1)
/* E31D3C 801A260C A639008A */  sh          $t9, 0x8A($s1)
.LE16C50_801A2610:
/* E31D40 801A2610 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A2614:
/* E31D44 801A2614 28410015 */  slti        $at, $v0, 0x15
.LE16C50_801A2618:
/* E31D48 801A2618 1420000D */  bnez        $at, .LE16C50_801A2650
/* E31D4C 801A261C 3C01801C */   lui        $at, %hi(D_E16C50_801C1680)
/* E31D50 801A2620 C4241680 */  lwc1        $ft0, %lo(D_E16C50_801C1680)($at)
/* E31D54 801A2624 8E280028 */  lw          $t0, 0x28($s1)
/* E31D58 801A2628 3C0142DC */  lui         $at, (0x42DC0000 >> 16)
/* E31D5C 801A262C 44813000 */  mtc1        $at, $ft1
/* E31D60 801A2630 E5040050 */  swc1        $ft0, 0x50($t0)
/* E31D64 801A2634 8E290028 */  lw          $t1, 0x28($s1)
/* E31D68 801A2638 3C01801C */  lui         $at, %hi(D_E16C50_801C1684)
/* E31D6C 801A263C E5260058 */  swc1        $ft1, 0x58($t1)
/* E31D70 801A2640 8E2A0028 */  lw          $t2, 0x28($s1)
/* E31D74 801A2644 C4281684 */  lwc1        $ft2, %lo(D_E16C50_801C1684)($at)
/* E31D78 801A2648 E5480060 */  swc1        $ft2, 0x60($t2)
/* E31D7C 801A264C 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A2650:
/* E31D80 801A2650 2401000A */  addiu       $at, $zero, 0xA
/* E31D84 801A2654 54410010 */  bnel        $v0, $at, .LE16C50_801A2698
/* E31D88 801A2658 24010032 */   addiu      $at, $zero, 0x32
/* E31D8C 801A265C 0C017C3A */  jal         func_8005F0E8
/* E31D90 801A2660 26250004 */   addiu      $a1, $s1, 0x4
/* E31D94 801A2664 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E31D98 801A2668 3C0B800C */  lui         $t3, %hi(D_800C5D3C)
/* E31D9C 801A266C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E31DA0 801A2670 256B5D3C */  addiu       $t3, $t3, %lo(D_800C5D3C)
/* E31DA4 801A2674 3C041903 */  lui         $a0, (0x19035053 >> 16)
/* E31DA8 801A2678 34845053 */  ori         $a0, $a0, (0x19035053 & 0xFFFF)
/* E31DAC 801A267C AFAB0014 */  sw          $t3, 0x14($sp)
/* E31DB0 801A2680 AFA70010 */  sw          $a3, 0x10($sp)
/* E31DB4 801A2684 02002825 */  or          $a1, $s0, $zero
/* E31DB8 801A2688 0C006486 */  jal         Audio_PlaySfx
/* E31DBC 801A268C 24060004 */   addiu      $a2, $zero, 0x4
/* E31DC0 801A2690 8622004C */  lh          $v0, 0x4C($s1)
/* E31DC4 801A2694 24010032 */  addiu       $at, $zero, 0x32
.LE16C50_801A2698:
/* E31DC8 801A2698 1441000C */  bne         $v0, $at, .LE16C50_801A26CC
/* E31DCC 801A269C 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E31DD0 801A26A0 3C0C800C */  lui         $t4, %hi(D_800C5D3C)
/* E31DD4 801A26A4 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E31DD8 801A26A8 258C5D3C */  addiu       $t4, $t4, %lo(D_800C5D3C)
/* E31DDC 801A26AC 3C042943 */  lui         $a0, (0x29432077 >> 16)
/* E31DE0 801A26B0 34842077 */  ori         $a0, $a0, (0x29432077 & 0xFFFF)
/* E31DE4 801A26B4 AFAC0014 */  sw          $t4, 0x14($sp)
/* E31DE8 801A26B8 AFA70010 */  sw          $a3, 0x10($sp)
/* E31DEC 801A26BC 262503FC */  addiu       $a1, $s1, 0x3FC
/* E31DF0 801A26C0 0C006486 */  jal         Audio_PlaySfx
/* E31DF4 801A26C4 24060004 */   addiu      $a2, $zero, 0x4
/* E31DF8 801A26C8 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A26CC:
/* E31DFC 801A26CC 28410055 */  slti        $at, $v0, 0x55
/* E31E00 801A26D0 14200155 */  bnez        $at, .LE16C50_801A2C28
/* E31E04 801A26D4 3C01435C */   lui        $at, (0x435C0000 >> 16)
/* E31E08 801A26D8 44810000 */  mtc1        $at, $fv0
/* E31E0C 801A26DC 8E2D0028 */  lw          $t5, 0x28($s1)
/* E31E10 801A26E0 3C01801C */  lui         $at, %hi(D_E16C50_801C1688)
/* E31E14 801A26E4 E5A00050 */  swc1        $fv0, 0x50($t5)
/* E31E18 801A26E8 8E2E0028 */  lw          $t6, 0x28($s1)
/* E31E1C 801A26EC C42A1688 */  lwc1        $ft3, %lo(D_E16C50_801C1688)($at)
/* E31E20 801A26F0 E5CA0058 */  swc1        $ft3, 0x58($t6)
/* E31E24 801A26F4 8E2F0028 */  lw          $t7, 0x28($s1)
/* E31E28 801A26F8 1000014B */  b           .LE16C50_801A2C28
/* E31E2C 801A26FC E5E00060 */   swc1       $fv0, 0x60($t7)
.LE16C50_801A2700:
/* E31E30 801A2700 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E31E34 801A2704 44810000 */  mtc1        $at, $fv0
/* E31E38 801A2708 3C01801C */  lui         $at, %hi(D_E16C50_801C168C)
/* E31E3C 801A270C C430168C */  lwc1        $ft4, %lo(D_E16C50_801C168C)($at)
/* E31E40 801A2710 44060000 */  mfc1        $a2, $fv0
/* E31E44 801A2714 26240014 */  addiu       $a0, $s1, 0x14
/* E31E48 801A2718 E63000E4 */  swc1        $ft4, 0xE4($s1)
/* E31E4C 801A271C 24050000 */  addiu       $a1, $zero, 0x0
/* E31E50 801A2720 3C073FC0 */  lui         $a3, (0x3FC00000 >> 16)
/* E31E54 801A2724 0C026F4E */  jal         Math_SmoothStepToAngle
/* E31E58 801A2728 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E31E5C 801A272C 8622004C */  lh          $v0, 0x4C($s1)
/* E31E60 801A2730 24010041 */  addiu       $at, $zero, 0x41
/* E31E64 801A2734 3C10801C */  lui         $s0, %hi(D_E16C50_801C2768)
/* E31E68 801A2738 14410057 */  bne         $v0, $at, .LE16C50_801A2898
/* E31E6C 801A273C 26102768 */   addiu      $s0, $s0, %lo(D_E16C50_801C2768)
/* E31E70 801A2740 3C01801C */  lui         $at, %hi(D_E16C50_801C1690)
/* E31E74 801A2744 C4241690 */  lwc1        $ft0, %lo(D_E16C50_801C1690)($at)
/* E31E78 801A2748 C6120000 */  lwc1        $ft5, 0x0($s0)
/* E31E7C 801A274C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E31E80 801A2750 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E31E84 801A2754 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E31E88 801A2758 00003025 */  or          $a2, $zero, $zero
/* E31E8C 801A275C 44053000 */  mfc1        $a1, $ft1
/* E31E90 801A2760 0C001751 */  jal         Matrix_RotateX
/* E31E94 801A2764 00000000 */   nop
/* E31E98 801A2768 3C01801C */  lui         $at, %hi(D_E16C50_801C1694)
/* E31E9C 801A276C C42A1694 */  lwc1        $ft3, %lo(D_E16C50_801C1694)($at)
/* E31EA0 801A2770 C6080004 */  lwc1        $ft2, 0x4($s0)
/* E31EA4 801A2774 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E31EA8 801A2778 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E31EAC 801A277C 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E31EB0 801A2780 24060001 */  addiu       $a2, $zero, 0x1
/* E31EB4 801A2784 44058000 */  mfc1        $a1, $ft4
/* E31EB8 801A2788 0C0017A4 */  jal         Matrix_RotateY
/* E31EBC 801A278C 00000000 */   nop
/* E31EC0 801A2790 3C01C348 */  lui         $at, (0xC3480000 >> 16)
/* E31EC4 801A2794 44812000 */  mtc1        $at, $ft0
/* E31EC8 801A2798 3C01801C */  lui         $at, %hi(D_E16C50_801C1698)
/* E31ECC 801A279C 44809000 */  mtc1        $zero, $ft5
/* E31ED0 801A27A0 C4261698 */  lwc1        $ft1, %lo(D_E16C50_801C1698)($at)
/* E31ED4 801A27A4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E31ED8 801A27A8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E31EDC 801A27AC 27A50040 */  addiu       $a1, $sp, 0x40
/* E31EE0 801A27B0 27A60034 */  addiu       $a2, $sp, 0x34
/* E31EE4 801A27B4 E7A40044 */  swc1        $ft0, 0x44($sp)
/* E31EE8 801A27B8 E7B20040 */  swc1        $ft5, 0x40($sp)
/* E31EEC 801A27BC 0C001A5C */  jal         Matrix_MultVec3f
/* E31EF0 801A27C0 E7A60048 */   swc1       $ft1, 0x48($sp)
/* E31EF4 801A27C4 3C10801C */  lui         $s0, %hi(D_E16C50_801BF8F0)
/* E31EF8 801A27C8 2610F8F0 */  addiu       $s0, $s0, %lo(D_E16C50_801BF8F0)
.LE16C50_801A27CC:
/* E31EFC 801A27CC 0C0013AC */  jal         Rand_ZeroOne
/* E31F00 801A27D0 00000000 */   nop
/* E31F04 801A27D4 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E31F08 801A27D8 44814000 */  mtc1        $at, $ft2
/* E31F0C 801A27DC C6100000 */  lwc1        $ft4, 0x0($s0)
/* E31F10 801A27E0 46080081 */  sub.s       $fv1, $fv0, $ft2
/* E31F14 801A27E4 46021280 */  add.s       $ft3, $fv1, $fv1
/* E31F18 801A27E8 46105480 */  add.s       $ft5, $ft3, $ft4
/* E31F1C 801A27EC 0C0013AC */  jal         Rand_ZeroOne
/* E31F20 801A27F0 E7B20058 */   swc1       $ft5, 0x58($sp)
/* E31F24 801A27F4 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E31F28 801A27F8 44812000 */  mtc1        $at, $ft0
/* E31F2C 801A27FC 00000000 */  nop
/* E31F30 801A2800 46040081 */  sub.s       $fv1, $fv0, $ft0
/* E31F34 801A2804 46021180 */  add.s       $ft1, $fv1, $fv1
/* E31F38 801A2808 0C0013AC */  jal         Rand_ZeroOne
/* E31F3C 801A280C E7A6005C */   swc1       $ft1, 0x5C($sp)
/* E31F40 801A2810 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E31F44 801A2814 44814000 */  mtc1        $at, $ft2
/* E31F48 801A2818 3C014020 */  lui         $at, (0x40200000 >> 16)
/* E31F4C 801A281C 44818000 */  mtc1        $at, $ft4
/* E31F50 801A2820 46080282 */  mul.s       $ft3, $fv0, $ft2
/* E31F54 801A2824 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E31F58 801A2828 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E31F5C 801A282C 27A50058 */  addiu       $a1, $sp, 0x58
/* E31F60 801A2830 27A6004C */  addiu       $a2, $sp, 0x4C
/* E31F64 801A2834 46105480 */  add.s       $ft5, $ft3, $ft4
/* E31F68 801A2838 0C001A5C */  jal         Matrix_MultVec3f
/* E31F6C 801A283C E7B20060 */   swc1       $ft5, 0x60($sp)
/* E31F70 801A2840 C63200F0 */  lwc1        $ft5, 0xF0($s1)
/* E31F74 801A2844 C7B0003C */  lwc1        $ft4, 0x3C($sp)
/* E31F78 801A2848 C62A00E8 */  lwc1        $ft3, 0xE8($s1)
/* E31F7C 801A284C C7A80034 */  lwc1        $ft2, 0x34($sp)
/* E31F80 801A2850 46109400 */  add.s       $ft4, $ft5, $ft4
/* E31F84 801A2854 C63200EC */  lwc1        $ft5, 0xEC($s1)
/* E31F88 801A2858 C7A60038 */  lwc1        $ft1, 0x38($sp)
/* E31F8C 801A285C 46085300 */  add.s       $fa0, $ft3, $ft2
/* E31F90 801A2860 44068000 */  mfc1        $a2, $ft4
/* E31F94 801A2864 C7B00050 */  lwc1        $ft4, 0x50($sp)
/* E31F98 801A2868 46069380 */  add.s       $fa1, $ft5, $ft1
/* E31F9C 801A286C C7A60054 */  lwc1        $ft1, 0x54($sp)
/* E31FA0 801A2870 E7B00010 */  swc1        $ft4, 0x10($sp)
/* E31FA4 801A2874 8FA7004C */  lw          $a3, 0x4C($sp)
/* E31FA8 801A2878 0C067C0E */  jal         func_E16C50_8019F038
/* E31FAC 801A287C E7A60014 */   swc1       $ft1, 0x14($sp)
/* E31FB0 801A2880 3C18801C */  lui         $t8, %hi(D_E16C50_801BF920)
/* E31FB4 801A2884 2718F920 */  addiu       $t8, $t8, %lo(D_E16C50_801BF920)
/* E31FB8 801A2888 2610000C */  addiu       $s0, $s0, 0xC
/* E31FBC 801A288C 1618FFCF */  bne         $s0, $t8, .LE16C50_801A27CC
/* E31FC0 801A2890 00000000 */   nop
/* E31FC4 801A2894 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A2898:
/* E31FC8 801A2898 24010063 */  addiu       $at, $zero, 0x63
/* E31FCC 801A289C 544100E3 */  bnel        $v0, $at, .LE16C50_801A2C2C
/* E31FD0 801A28A0 8FBF0024 */   lw         $ra, 0x24($sp)
/* E31FD4 801A28A4 8639008C */  lh          $t9, 0x8C($s1)
/* E31FD8 801A28A8 17200004 */  bnez        $t9, .LE16C50_801A28BC
/* E31FDC 801A28AC 00000000 */   nop
/* E31FE0 801A28B0 8628008E */  lh          $t0, 0x8E($s1)
/* E31FE4 801A28B4 11000005 */  beqz        $t0, .LE16C50_801A28CC
/* E31FE8 801A28B8 00000000 */   nop
.LE16C50_801A28BC:
/* E31FEC 801A28BC 0C068B0F */  jal         func_E16C50_801A2C3C
/* E31FF0 801A28C0 02202025 */   or         $a0, $s1, $zero
/* E31FF4 801A28C4 100000D9 */  b           .LE16C50_801A2C2C
/* E31FF8 801A28C8 8FBF0024 */   lw         $ra, 0x24($sp)
.LE16C50_801A28CC:
/* E31FFC 801A28CC 0C0693B0 */  jal         func_E16C50_801A4EC0
/* E32000 801A28D0 02202025 */   or         $a0, $s1, $zero
/* E32004 801A28D4 100000D5 */  b           .LE16C50_801A2C2C
/* E32008 801A28D8 8FBF0024 */   lw         $ra, 0x24($sp)
.LE16C50_801A28DC:
/* E3200C 801A28DC 8622004C */  lh          $v0, 0x4C($s1)
/* E32010 801A28E0 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E32014 801A28E4 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E32018 801A28E8 28410032 */  slti        $at, $v0, 0x32
/* E3201C 801A28EC 10200012 */  beqz        $at, .LE16C50_801A2938
/* E32020 801A28F0 3C043903 */   lui        $a0, (0x39033079 >> 16)
/* E32024 801A28F4 3C0141B0 */  lui         $at, (0x41B00000 >> 16)
/* E32028 801A28F8 44815000 */  mtc1        $at, $ft3
/* E3202C 801A28FC C6200154 */  lwc1        $fv0, 0x154($s1)
/* E32030 801A2900 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E32034 801A2904 460A003C */  c.lt.s      $fv0, $ft3
/* E32038 801A2908 00000000 */  nop
/* E3203C 801A290C 45020007 */  bc1fl       .LE16C50_801A292C
/* E32040 801A2910 C6240014 */   lwc1       $ft0, 0x14($s1)
/* E32044 801A2914 44818000 */  mtc1        $at, $ft4
/* E32048 801A2918 00000000 */  nop
/* E3204C 801A291C 46100480 */  add.s       $ft5, $fv0, $ft4
/* E32050 801A2920 E6320154 */  swc1        $ft5, 0x154($s1)
/* E32054 801A2924 C6200154 */  lwc1        $fv0, 0x154($s1)
/* E32058 801A2928 C6240014 */  lwc1        $ft0, 0x14($s1)
.LE16C50_801A292C:
/* E3205C 801A292C 8622004C */  lh          $v0, 0x4C($s1)
/* E32060 801A2930 46002180 */  add.s       $ft1, $ft0, $fv0
/* E32064 801A2934 E6260014 */  swc1        $ft1, 0x14($s1)
.LE16C50_801A2938:
/* E32068 801A2938 28410032 */  slti        $at, $v0, 0x32
/* E3206C 801A293C 14200013 */  bnez        $at, .LE16C50_801A298C
/* E32070 801A2940 34843079 */   ori        $a0, $a0, (0x39033079 & 0xFFFF)
/* E32074 801A2944 28410065 */  slti        $at, $v0, 0x65
/* E32078 801A2948 50200011 */  beql        $at, $zero, .LE16C50_801A2990
/* E3207C 801A294C 3C0143B4 */   lui        $at, (0x43B40000 >> 16)
/* E32080 801A2950 C6200154 */  lwc1        $fv0, 0x154($s1)
/* E32084 801A2954 44804000 */  mtc1        $zero, $ft2
/* E32088 801A2958 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E3208C 801A295C 4600403C */  c.lt.s      $ft2, $fv0
/* E32090 801A2960 00000000 */  nop
/* E32094 801A2964 45020007 */  bc1fl       .LE16C50_801A2984
/* E32098 801A2968 C6320014 */   lwc1       $ft5, 0x14($s1)
/* E3209C 801A296C 44815000 */  mtc1        $at, $ft3
/* E320A0 801A2970 00000000 */  nop
/* E320A4 801A2974 460A0401 */  sub.s       $ft4, $fv0, $ft3
/* E320A8 801A2978 E6300154 */  swc1        $ft4, 0x154($s1)
/* E320AC 801A297C C6200154 */  lwc1        $fv0, 0x154($s1)
/* E320B0 801A2980 C6320014 */  lwc1        $ft5, 0x14($s1)
.LE16C50_801A2984:
/* E320B4 801A2984 46009100 */  add.s       $ft0, $ft5, $fv0
/* E320B8 801A2988 E6240014 */  swc1        $ft0, 0x14($s1)
.LE16C50_801A298C:
/* E320BC 801A298C 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
.LE16C50_801A2990:
/* E320C0 801A2990 44811000 */  mtc1        $at, $fv1
/* E320C4 801A2994 C6200014 */  lwc1        $fv0, 0x14($s1)
/* E320C8 801A2998 262503FC */  addiu       $a1, $s1, 0x3FC
/* E320CC 801A299C 4600103E */  c.le.s      $fv1, $fv0
/* E320D0 801A29A0 00000000 */  nop
/* E320D4 801A29A4 4502000A */  bc1fl       .LE16C50_801A29D0
/* E320D8 801A29A8 8622004C */   lh         $v0, 0x4C($s1)
/* E320DC 801A29AC 46020181 */  sub.s       $ft1, $fv0, $fv1
/* E320E0 801A29B0 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E320E4 801A29B4 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E320E8 801A29B8 24060004 */  addiu       $a2, $zero, 0x4
/* E320EC 801A29BC E6260014 */  swc1        $ft1, 0x14($s1)
/* E320F0 801A29C0 AFA90014 */  sw          $t1, 0x14($sp)
/* E320F4 801A29C4 0C006486 */  jal         Audio_PlaySfx
/* E320F8 801A29C8 AFA70010 */   sw         $a3, 0x10($sp)
/* E320FC 801A29CC 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A29D0:
/* E32100 801A29D0 24010001 */  addiu       $at, $zero, 0x1
/* E32104 801A29D4 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E32108 801A29D8 1441000B */  bne         $v0, $at, .LE16C50_801A2A08
/* E3210C 801A29DC 24E75D34 */   addiu      $a3, $a3, %lo(D_800C5D34)
/* E32110 801A29E0 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E32114 801A29E4 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E32118 801A29E8 3C043903 */  lui         $a0, (0x39033079 >> 16)
/* E3211C 801A29EC 34843079 */  ori         $a0, $a0, (0x39033079 & 0xFFFF)
/* E32120 801A29F0 AFAA0014 */  sw          $t2, 0x14($sp)
/* E32124 801A29F4 262503FC */  addiu       $a1, $s1, 0x3FC
/* E32128 801A29F8 24060004 */  addiu       $a2, $zero, 0x4
/* E3212C 801A29FC 0C006486 */  jal         Audio_PlaySfx
/* E32130 801A2A00 AFA70010 */   sw         $a3, 0x10($sp)
/* E32134 801A2A04 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A2A08:
/* E32138 801A2A08 28410064 */  slti        $at, $v0, 0x64
/* E3213C 801A2A0C 1420000B */  bnez        $at, .LE16C50_801A2A3C
/* E32140 801A2A10 26240014 */   addiu      $a0, $s1, 0x14
/* E32144 801A2A14 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E32148 801A2A18 44810000 */  mtc1        $at, $fv0
/* E3214C 801A2A1C 24050000 */  addiu       $a1, $zero, 0x0
/* E32150 801A2A20 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E32154 801A2A24 44060000 */  mfc1        $a2, $fv0
/* E32158 801A2A28 0C026F4E */  jal         Math_SmoothStepToAngle
/* E3215C 801A2A2C E7A00010 */   swc1       $fv0, 0x10($sp)
/* E32160 801A2A30 44804000 */  mtc1        $zero, $ft2
/* E32164 801A2A34 8622004C */  lh          $v0, 0x4C($s1)
/* E32168 801A2A38 E6280154 */  swc1        $ft2, 0x154($s1)
.LE16C50_801A2A3C:
/* E3216C 801A2A3C 24010078 */  addiu       $at, $zero, 0x78
/* E32170 801A2A40 14410079 */  bne         $v0, $at, .LE16C50_801A2C28
/* E32174 801A2A44 240B0005 */   addiu      $t3, $zero, 0x5
/* E32178 801A2A48 A62B008A */  sh          $t3, 0x8A($s1)
/* E3217C 801A2A4C A620004C */  sh          $zero, 0x4C($s1)
/* E32180 801A2A50 3C01801C */  lui         $at, %hi(D_E16C50_801C169C)
/* E32184 801A2A54 C42A169C */  lwc1        $ft3, %lo(D_E16C50_801C169C)($at)
/* E32188 801A2A58 10000073 */  b           .LE16C50_801A2C28
/* E3218C 801A2A5C E62A00D8 */   swc1       $ft3, 0xD8($s1)
.LE16C50_801A2A60:
/* E32190 801A2A60 8622004C */  lh          $v0, 0x4C($s1)
/* E32194 801A2A64 24010059 */  addiu       $at, $zero, 0x59
/* E32198 801A2A68 26240014 */  addiu       $a0, $s1, 0x14
/* E3219C 801A2A6C 54410006 */  bnel        $v0, $at, .LE16C50_801A2A88
/* E321A0 801A2A70 862D008C */   lh         $t5, 0x8C($s1)
/* E321A4 801A2A74 862C004E */  lh          $t4, 0x4E($s1)
/* E321A8 801A2A78 24010002 */  addiu       $at, $zero, 0x2
/* E321AC 801A2A7C 51810005 */  beql        $t4, $at, .LE16C50_801A2A94
/* E321B0 801A2A80 862E008E */   lh         $t6, 0x8E($s1)
/* E321B4 801A2A84 862D008C */  lh          $t5, 0x8C($s1)
.LE16C50_801A2A88:
/* E321B8 801A2A88 55A00010 */  bnel        $t5, $zero, .LE16C50_801A2ACC
/* E321BC 801A2A8C 24010050 */   addiu      $at, $zero, 0x50
/* E321C0 801A2A90 862E008E */  lh          $t6, 0x8E($s1)
.LE16C50_801A2A94:
/* E321C4 801A2A94 A620004C */  sh          $zero, 0x4C($s1)
/* E321C8 801A2A98 24180005 */  addiu       $t8, $zero, 0x5
/* E321CC 801A2A9C 55C00006 */  bnel        $t6, $zero, .LE16C50_801A2AB8
/* E321D0 801A2AA0 A638008A */   sh         $t8, 0x8A($s1)
/* E321D4 801A2AA4 862F008C */  lh          $t7, 0x8C($s1)
/* E321D8 801A2AA8 24190007 */  addiu       $t9, $zero, 0x7
/* E321DC 801A2AAC 51E00005 */  beql        $t7, $zero, .LE16C50_801A2AC4
/* E321E0 801A2AB0 A639008A */   sh         $t9, 0x8A($s1)
/* E321E4 801A2AB4 A638008A */  sh          $t8, 0x8A($s1)
.LE16C50_801A2AB8:
/* E321E8 801A2AB8 10000003 */  b           .LE16C50_801A2AC8
/* E321EC 801A2ABC 8622004C */   lh         $v0, 0x4C($s1)
/* E321F0 801A2AC0 A639008A */  sh          $t9, 0x8A($s1)
.LE16C50_801A2AC4:
/* E321F4 801A2AC4 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A2AC8:
/* E321F8 801A2AC8 24010050 */  addiu       $at, $zero, 0x50
.LE16C50_801A2ACC:
/* E321FC 801A2ACC 14410012 */  bne         $v0, $at, .LE16C50_801A2B18
/* E32200 801A2AD0 3C014170 */   lui        $at, (0x41700000 >> 16)
/* E32204 801A2AD4 44819000 */  mtc1        $at, $ft5
/* E32208 801A2AD8 C630007C */  lwc1        $ft4, 0x7C($s1)
/* E3220C 801A2ADC 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E32210 801A2AE0 44814000 */  mtc1        $at, $ft2
/* E32214 801A2AE4 46128100 */  add.s       $ft0, $ft4, $ft5
/* E32218 801A2AE8 8628004E */  lh          $t0, 0x4E($s1)
/* E3221C 801A2AEC E624007C */  swc1        $ft0, 0x7C($s1)
/* E32220 801A2AF0 C626007C */  lwc1        $ft1, 0x7C($s1)
/* E32224 801A2AF4 25090001 */  addiu       $t1, $t0, 0x1
/* E32228 801A2AF8 A629004E */  sh          $t1, 0x4E($s1)
/* E3222C 801A2AFC 4606403E */  c.le.s      $ft2, $ft1
/* E32230 801A2B00 00000000 */  nop
/* E32234 801A2B04 45020005 */  bc1fl       .LE16C50_801A2B1C
/* E32238 801A2B08 3C013F80 */   lui        $at, (0x3F800000 >> 16)
/* E3223C 801A2B0C 44805000 */  mtc1        $zero, $ft3
/* E32240 801A2B10 00000000 */  nop
/* E32244 801A2B14 E62A007C */  swc1        $ft3, 0x7C($s1)
.LE16C50_801A2B18:
/* E32248 801A2B18 3C013F80 */  lui         $at, (0x3F800000 >> 16)
.LE16C50_801A2B1C:
/* E3224C 801A2B1C 44810000 */  mtc1        $at, $fv0
/* E32250 801A2B20 8E25007C */  lw          $a1, 0x7C($s1)
/* E32254 801A2B24 3C073FC0 */  lui         $a3, (0x3FC00000 >> 16)
/* E32258 801A2B28 44060000 */  mfc1        $a2, $fv0
/* E3225C 801A2B2C 0C026F4E */  jal         Math_SmoothStepToAngle
/* E32260 801A2B30 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E32264 801A2B34 8622004C */  lh          $v0, 0x4C($s1)
/* E32268 801A2B38 263003FC */  addiu       $s0, $s1, 0x3FC
/* E3226C 801A2B3C 02002025 */  or          $a0, $s0, $zero
/* E32270 801A2B40 28410013 */  slti        $at, $v0, 0x13
/* E32274 801A2B44 1420000D */  bnez        $at, .LE16C50_801A2B7C
/* E32278 801A2B48 3C01801C */   lui        $at, %hi(D_E16C50_801C16A0)
/* E3227C 801A2B4C C43016A0 */  lwc1        $ft4, %lo(D_E16C50_801C16A0)($at)
/* E32280 801A2B50 8E2A0028 */  lw          $t2, 0x28($s1)
/* E32284 801A2B54 3C0143DC */  lui         $at, (0x43DC0000 >> 16)
/* E32288 801A2B58 44819000 */  mtc1        $at, $ft5
/* E3228C 801A2B5C E5500050 */  swc1        $ft4, 0x50($t2)
/* E32290 801A2B60 8E2B0028 */  lw          $t3, 0x28($s1)
/* E32294 801A2B64 3C0142DC */  lui         $at, (0x42DC0000 >> 16)
/* E32298 801A2B68 44812000 */  mtc1        $at, $ft0
/* E3229C 801A2B6C E5720058 */  swc1        $ft5, 0x58($t3)
/* E322A0 801A2B70 8E2C0028 */  lw          $t4, 0x28($s1)
/* E322A4 801A2B74 E5840060 */  swc1        $ft0, 0x60($t4)
/* E322A8 801A2B78 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A2B7C:
/* E322AC 801A2B7C 24010005 */  addiu       $at, $zero, 0x5
/* E322B0 801A2B80 54410010 */  bnel        $v0, $at, .LE16C50_801A2BC4
/* E322B4 801A2B84 24010014 */   addiu      $at, $zero, 0x14
/* E322B8 801A2B88 0C017C3A */  jal         func_8005F0E8
/* E322BC 801A2B8C 26250004 */   addiu      $a1, $s1, 0x4
/* E322C0 801A2B90 3C0D800C */  lui         $t5, %hi(D_800C5D34)
/* E322C4 801A2B94 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E322C8 801A2B98 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E322CC 801A2B9C 25A75D34 */  addiu       $a3, $t5, %lo(D_800C5D34)
/* E322D0 801A2BA0 3C041903 */  lui         $a0, (0x19035053 >> 16)
/* E322D4 801A2BA4 34845053 */  ori         $a0, $a0, (0x19035053 & 0xFFFF)
/* E322D8 801A2BA8 AFA70010 */  sw          $a3, 0x10($sp)
/* E322DC 801A2BAC AFAE0014 */  sw          $t6, 0x14($sp)
/* E322E0 801A2BB0 02002825 */  or          $a1, $s0, $zero
/* E322E4 801A2BB4 0C006486 */  jal         Audio_PlaySfx
/* E322E8 801A2BB8 24060004 */   addiu      $a2, $zero, 0x4
/* E322EC 801A2BBC 8622004C */  lh          $v0, 0x4C($s1)
/* E322F0 801A2BC0 24010014 */  addiu       $at, $zero, 0x14
.LE16C50_801A2BC4:
/* E322F4 801A2BC4 1441000C */  bne         $v0, $at, .LE16C50_801A2BF8
/* E322F8 801A2BC8 3C042943 */   lui        $a0, (0x29432077 >> 16)
/* E322FC 801A2BCC 3C0F800C */  lui         $t7, %hi(D_800C5D34)
/* E32300 801A2BD0 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E32304 801A2BD4 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E32308 801A2BD8 25E75D34 */  addiu       $a3, $t7, %lo(D_800C5D34)
/* E3230C 801A2BDC AFA70010 */  sw          $a3, 0x10($sp)
/* E32310 801A2BE0 AFB80014 */  sw          $t8, 0x14($sp)
/* E32314 801A2BE4 34842077 */  ori         $a0, $a0, (0x29432077 & 0xFFFF)
/* E32318 801A2BE8 262503FC */  addiu       $a1, $s1, 0x3FC
/* E3231C 801A2BEC 0C006486 */  jal         Audio_PlaySfx
/* E32320 801A2BF0 24060004 */   addiu      $a2, $zero, 0x4
/* E32324 801A2BF4 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A2BF8:
/* E32328 801A2BF8 28410025 */  slti        $at, $v0, 0x25
/* E3232C 801A2BFC 1420000A */  bnez        $at, .LE16C50_801A2C28
/* E32330 801A2C00 3C01435C */   lui        $at, (0x435C0000 >> 16)
/* E32334 801A2C04 44810000 */  mtc1        $at, $fv0
/* E32338 801A2C08 8E390028 */  lw          $t9, 0x28($s1)
/* E3233C 801A2C0C 3C01801C */  lui         $at, %hi(D_E16C50_801C16A4)
/* E32340 801A2C10 E7200050 */  swc1        $fv0, 0x50($t9)
/* E32344 801A2C14 8E280028 */  lw          $t0, 0x28($s1)
/* E32348 801A2C18 C42616A4 */  lwc1        $ft1, %lo(D_E16C50_801C16A4)($at)
/* E3234C 801A2C1C E5060058 */  swc1        $ft1, 0x58($t0)
/* E32350 801A2C20 8E290028 */  lw          $t1, 0x28($s1)
/* E32354 801A2C24 E5200060 */  swc1        $fv0, 0x60($t1)
.LE16C50_801A2C28:
/* E32358 801A2C28 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_801A2C2C:
/* E3235C 801A2C2C 8FB0001C */  lw          $s0, 0x1C($sp)
/* E32360 801A2C30 8FB10020 */  lw          $s1, 0x20($sp)
/* E32364 801A2C34 03E00008 */  jr          $ra
/* E32368 801A2C38 27BD0068 */   addiu      $sp, $sp, 0x68
.section .late_rodata
dlabel D_E16C50_801C16A8
/* E50DD8 801C16A8 3D4CCCCD */ .float 0.05000000075


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A2C3C
/* E3236C 801A2C3C 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E32370 801A2C40 AFBF0014 */  sw          $ra, 0x14($sp)
/* E32374 801A2C44 00802825 */  or          $a1, $a0, $zero
/* E32378 801A2C48 240E0002 */  addiu       $t6, $zero, 0x2
/* E3237C 801A2C4C A4AE0088 */  sh          $t6, 0x88($a1)
/* E32380 801A2C50 A4A0008A */  sh          $zero, 0x8A($a1)
/* E32384 801A2C54 3C01801C */  lui         $at, %hi(D_E16C50_801C16A8)
/* E32388 801A2C58 C42416A8 */  lwc1        $ft0, %lo(D_E16C50_801C16A8)($at)
/* E3238C 801A2C5C 3C040601 */  lui         $a0, %hi(D_601388C)
/* E32390 801A2C60 2484388C */  addiu       $a0, $a0, %lo(D_601388C)
/* E32394 801A2C64 E4A400D8 */  swc1        $ft0, 0xD8($a1)
/* E32398 801A2C68 0C026B37 */  jal         Animation_GetFrameCount
/* E3239C 801A2C6C AFA50018 */   sw         $a1, 0x18($sp)
/* E323A0 801A2C70 8FA50018 */  lw          $a1, 0x18($sp)
/* E323A4 801A2C74 244FFFFE */  addiu       $t7, $v0, -0x2
/* E323A8 801A2C78 2418000F */  addiu       $t8, $zero, 0xF
/* E323AC 801A2C7C A4AF004C */  sh          $t7, 0x4C($a1)
/* E323B0 801A2C80 A4A0004E */  sh          $zero, 0x4E($a1)
/* E323B4 801A2C84 A4B8009E */  sh          $t8, 0x9E($a1)
/* E323B8 801A2C88 8FBF0014 */  lw          $ra, 0x14($sp)
/* E323BC 801A2C8C 27BD0018 */  addiu       $sp, $sp, 0x18
/* E323C0 801A2C90 03E00008 */  jr          $ra
/* E323C4 801A2C94 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C16AC
/* E50DDC 801C16AC 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C16B0
/* E50DE0 801C16B0 44898000 */ .float 1100

dlabel D_E16C50_801C16B4
/* E50DE4 801C16B4 3D4CCCCD */ .float 0.05000000075

dlabel D_E16C50_801C16B8
/* E50DE8 801C16B8 3DCCCCCD */ .float 0.1000000015


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A2C98
/* E323C8 801A2C98 27BDFFA8 */  addiu       $sp, $sp, -0x58
/* E323CC 801A2C9C AFB10050 */  sw          $s1, 0x50($sp)
/* E323D0 801A2CA0 00808825 */  or          $s1, $a0, $zero
/* E323D4 801A2CA4 AFBF0054 */  sw          $ra, 0x54($sp)
/* E323D8 801A2CA8 AFB0004C */  sw          $s0, 0x4C($sp)
/* E323DC 801A2CAC F7BE0040 */  sdc1        $fs5, 0x40($sp)
/* E323E0 801A2CB0 F7BC0038 */  sdc1        $fs4, 0x38($sp)
/* E323E4 801A2CB4 F7BA0030 */  sdc1        $fs3, 0x30($sp)
/* E323E8 801A2CB8 F7B80028 */  sdc1        $fs2, 0x28($sp)
/* E323EC 801A2CBC F7B60020 */  sdc1        $fs1, 0x20($sp)
/* E323F0 801A2CC0 F7B40018 */  sdc1        $fs0, 0x18($sp)
/* E323F4 801A2CC4 8622009E */  lh          $v0, 0x9E($s1)
/* E323F8 801A2CC8 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E323FC 801A2CCC 26240014 */  addiu       $a0, $s1, 0x14
/* E32400 801A2CD0 10400002 */  beqz        $v0, .LE16C50_801A2CDC
/* E32404 801A2CD4 244EFFFF */   addiu      $t6, $v0, -0x1
/* E32408 801A2CD8 A62E009E */  sh          $t6, 0x9E($s1)
.LE16C50_801A2CDC:
/* E3240C 801A2CDC 862F004E */  lh          $t7, 0x4E($s1)
/* E32410 801A2CE0 55E000AA */  bnel        $t7, $zero, .LE16C50_801A2F8C
/* E32414 801A2CE4 44811000 */   mtc1       $at, $fv1
/* E32418 801A2CE8 8638009E */  lh          $t8, 0x9E($s1)
/* E3241C 801A2CEC 3C01801C */  lui         $at, %hi(D_E16C50_801C16AC)
/* E32420 801A2CF0 3C05C47A */  lui         $a1, (0xC47A0000 >> 16)
/* E32424 801A2CF4 1700009F */  bnez        $t8, .LE16C50_801A2F74
/* E32428 801A2CF8 3C040601 */   lui        $a0, %hi(D_601388C)
/* E3242C 801A2CFC C42016AC */  lwc1        $fv0, %lo(D_E16C50_801C16AC)($at)
/* E32430 801A2D00 8639004C */  lh          $t9, 0x4C($s1)
/* E32434 801A2D04 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E32438 801A2D08 4481E000 */  mtc1        $at, $fs4
/* E3243C 801A2D0C 2728FFFE */  addiu       $t0, $t9, -0x2
/* E32440 801A2D10 A628004C */  sh          $t0, 0x4C($s1)
/* E32444 801A2D14 44060000 */  mfc1        $a2, $fv0
/* E32448 801A2D18 4407E000 */  mfc1        $a3, $fs4
/* E3244C 801A2D1C 26240008 */  addiu       $a0, $s1, 0x8
/* E32450 801A2D20 0C026F0B */  jal         Math_SmoothStepToF
/* E32454 801A2D24 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E32458 801A2D28 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E3245C 801A2D2C 44811000 */  mtc1        $at, $fv1
/* E32460 801A2D30 26240014 */  addiu       $a0, $s1, 0x14
/* E32464 801A2D34 3C054335 */  lui         $a1, (0x43350000 >> 16)
/* E32468 801A2D38 44061000 */  mfc1        $a2, $fv1
/* E3246C 801A2D3C 3C074040 */  lui         $a3, (0x40400000 >> 16)
/* E32470 801A2D40 0C026F4E */  jal         Math_SmoothStepToAngle
/* E32474 801A2D44 E7A20010 */   swc1       $fv1, 0x10($sp)
/* E32478 801A2D48 8623004C */  lh          $v1, 0x4C($s1)
/* E3247C 801A2D4C 24010032 */  addiu       $at, $zero, 0x32
/* E32480 801A2D50 14610018 */  bne         $v1, $at, .LE16C50_801A2DB4
/* E32484 801A2D54 3C01447A */   lui        $at, (0x447A0000 >> 16)
/* E32488 801A2D58 44813000 */  mtc1        $at, $ft1
/* E3248C 801A2D5C C624000C */  lwc1        $ft0, 0xC($s1)
/* E32490 801A2D60 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1D88)
/* E32494 801A2D64 8E250004 */  lw          $a1, 0x4($s1)
/* E32498 801A2D68 46062200 */  add.s       $ft2, $ft0, $ft1
/* E3249C 801A2D6C 24090001 */  addiu       $t1, $zero, 0x1
/* E324A0 801A2D70 AFA90010 */  sw          $t1, 0x10($sp)
/* E324A4 801A2D74 24845D68 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1D88)
/* E324A8 801A2D78 44064000 */  mfc1        $a2, $ft2
/* E324AC 801A2D7C 0C06833B */  jal         func_E16C50_801A0CEC
/* E324B0 801A2D80 3C0741A0 */   lui        $a3, (0x41A00000 >> 16)
/* E324B4 801A2D84 3C028017 */  lui         $v0, %hi(gMainController)
/* E324B8 801A2D88 8C427AF8 */  lw          $v0, %lo(gMainController)($v0)
/* E324BC 801A2D8C 3C018013 */  lui         $at, %hi(D_80137E84)
/* E324C0 801A2D90 240A0001 */  addiu       $t2, $zero, 0x1
/* E324C4 801A2D94 00220821 */  addu        $at, $at, $v0
/* E324C8 801A2D98 A02A7E84 */  sb          $t2, %lo(D_80137E84)($at)
/* E324CC 801A2D9C 3C018017 */  lui         $at, %hi(D_Timer_80177BD0)
/* E324D0 801A2DA0 00026040 */  sll         $t4, $v0, 1
/* E324D4 801A2DA4 002C0821 */  addu        $at, $at, $t4
/* E324D8 801A2DA8 240B0046 */  addiu       $t3, $zero, 0x46
/* E324DC 801A2DAC A42B7BD0 */  sh          $t3, %lo(D_Timer_80177BD0)($at)
/* E324E0 801A2DB0 8623004C */  lh          $v1, 0x4C($s1)
.LE16C50_801A2DB4:
/* E324E4 801A2DB4 2401003C */  addiu       $at, $zero, 0x3C
/* E324E8 801A2DB8 14610048 */  bne         $v1, $at, .LE16C50_801A2EDC
/* E324EC 801A2DBC 3C10801C */   lui        $s0, %hi(D_E16C50_801BF8F0)
/* E324F0 801A2DC0 3C01801C */  lui         $at, %hi(D_E16C50_801C16B0)
/* E324F4 801A2DC4 C43E16B0 */  lwc1        $fs5, %lo(D_E16C50_801C16B0)($at)
/* E324F8 801A2DC8 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E324FC 801A2DCC 4481D000 */  mtc1        $at, $fs3
/* E32500 801A2DD0 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E32504 801A2DD4 4481C000 */  mtc1        $at, $fs2
/* E32508 801A2DD8 2610F8F0 */  addiu       $s0, $s0, %lo(D_E16C50_801BF8F0)
.LE16C50_801A2DDC:
/* E3250C 801A2DDC 0C0013AC */  jal         Rand_ZeroOne
/* E32510 801A2DE0 00000000 */   nop
/* E32514 801A2DE4 0C0013AC */  jal         Rand_ZeroOne
/* E32518 801A2DE8 46000586 */   mov.s      $fs1, $fv0
/* E3251C 801A2DEC 0C0013AC */  jal         Rand_ZeroOne
/* E32520 801A2DF0 46000506 */   mov.s      $fs0, $fv0
/* E32524 801A2DF4 461AB081 */  sub.s       $fv1, $fs1, $fs3
/* E32528 801A2DF8 C62A0004 */  lwc1        $ft3, 0x4($s1)
/* E3252C 801A2DFC C632000C */  lwc1        $ft5, 0xC($s1)
/* E32530 801A2E00 C6080000 */  lwc1        $ft2, 0x0($s0)
/* E32534 801A2E04 46021180 */  add.s       $ft1, $fv1, $fv1
/* E32538 801A2E08 3C01C120 */  lui         $at, (0xC1200000 >> 16)
/* E3253C 801A2E0C 4600C386 */  mov.s       $fa1, $fs2
/* E32540 801A2E10 461E9100 */  add.s       $ft0, $ft5, $fs5
/* E32544 801A2E14 46185300 */  add.s       $fa0, $ft3, $fs2
/* E32548 801A2E18 44062000 */  mfc1        $a2, $ft0
/* E3254C 801A2E1C C6040004 */  lwc1        $ft0, 0x4($s0)
/* E32550 801A2E20 46083280 */  add.s       $ft3, $ft1, $ft2
/* E32554 801A2E24 461AA401 */  sub.s       $ft4, $fs0, $fs3
/* E32558 801A2E28 44075000 */  mfc1        $a3, $ft3
/* E3255C 801A2E2C 44815000 */  mtc1        $at, $ft3
/* E32560 801A2E30 461C2180 */  add.s       $ft1, $ft0, $fs4
/* E32564 801A2E34 460A0102 */  mul.s       $ft0, $fv0, $ft3
/* E32568 801A2E38 46108480 */  add.s       $ft5, $ft4, $ft4
/* E3256C 801A2E3C 46069200 */  add.s       $ft2, $ft5, $ft1
/* E32570 801A2E40 461C2481 */  sub.s       $ft5, $ft0, $fs4
/* E32574 801A2E44 E7A80010 */  swc1        $ft2, 0x10($sp)
/* E32578 801A2E48 0C067C0E */  jal         func_E16C50_8019F038
/* E3257C 801A2E4C E7B20014 */   swc1       $ft5, 0x14($sp)
/* E32580 801A2E50 0C0013AC */  jal         Rand_ZeroOne
/* E32584 801A2E54 00000000 */   nop
/* E32588 801A2E58 0C0013AC */  jal         Rand_ZeroOne
/* E3258C 801A2E5C 46000586 */   mov.s      $fs1, $fv0
/* E32590 801A2E60 0C0013AC */  jal         Rand_ZeroOne
/* E32594 801A2E64 46000506 */   mov.s      $fs0, $fv0
/* E32598 801A2E68 461AB081 */  sub.s       $fv1, $fs1, $fs3
/* E3259C 801A2E6C C6260004 */  lwc1        $ft1, 0x4($s1)
/* E325A0 801A2E70 C628000C */  lwc1        $ft2, 0xC($s1)
/* E325A4 801A2E74 C6120000 */  lwc1        $ft5, 0x0($s0)
/* E325A8 801A2E78 46021100 */  add.s       $ft0, $fv1, $fv1
/* E325AC 801A2E7C 3C01C120 */  lui         $at, (0xC1200000 >> 16)
/* E325B0 801A2E80 4600C386 */  mov.s       $fa1, $fs2
/* E325B4 801A2E84 461E4280 */  add.s       $ft3, $ft2, $fs5
/* E325B8 801A2E88 46183301 */  sub.s       $fa0, $ft1, $fs2
/* E325BC 801A2E8C 44065000 */  mfc1        $a2, $ft3
/* E325C0 801A2E90 C60A0004 */  lwc1        $ft3, 0x4($s0)
/* E325C4 801A2E94 46122180 */  add.s       $ft1, $ft0, $ft5
/* E325C8 801A2E98 461AA401 */  sub.s       $ft4, $fs0, $fs3
/* E325CC 801A2E9C 44073000 */  mfc1        $a3, $ft1
/* E325D0 801A2EA0 44813000 */  mtc1        $at, $ft1
/* E325D4 801A2EA4 461C5100 */  add.s       $ft0, $ft3, $fs4
/* E325D8 801A2EA8 46060282 */  mul.s       $ft3, $fv0, $ft1
/* E325DC 801A2EAC 46108200 */  add.s       $ft2, $ft4, $ft4
/* E325E0 801A2EB0 46044480 */  add.s       $ft5, $ft2, $ft0
/* E325E4 801A2EB4 461C5201 */  sub.s       $ft2, $ft3, $fs4
/* E325E8 801A2EB8 E7B20010 */  swc1        $ft5, 0x10($sp)
/* E325EC 801A2EBC 0C067C0E */  jal         func_E16C50_8019F038
/* E325F0 801A2EC0 E7A80014 */   swc1       $ft2, 0x14($sp)
/* E325F4 801A2EC4 3C0D801C */  lui         $t5, %hi(D_E16C50_801BF920)
/* E325F8 801A2EC8 25ADF920 */  addiu       $t5, $t5, %lo(D_E16C50_801BF920)
/* E325FC 801A2ECC 2610000C */  addiu       $s0, $s0, 0xC
/* E32600 801A2ED0 160DFFC2 */  bne         $s0, $t5, .LE16C50_801A2DDC
/* E32604 801A2ED4 00000000 */   nop
/* E32608 801A2ED8 8623004C */  lh          $v1, 0x4C($s1)
.LE16C50_801A2EDC:
/* E3260C 801A2EDC 24010014 */  addiu       $at, $zero, 0x14
/* E32610 801A2EE0 1461000F */  bne         $v1, $at, .LE16C50_801A2F20
/* E32614 801A2EE4 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E32618 801A2EE8 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E3261C 801A2EEC 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E32620 801A2EF0 240E0003 */  addiu       $t6, $zero, 0x3
/* E32624 801A2EF4 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1E58)
/* E32628 801A2EF8 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E3262C 801A2EFC 3C041903 */  lui         $a0, (0x19036054 >> 16)
/* E32630 801A2F00 A02E5E38 */  sb          $t6, %lo(gObjects2F4 + 0x1E58)($at)
/* E32634 801A2F04 34846054 */  ori         $a0, $a0, (0x19036054 & 0xFFFF)
/* E32638 801A2F08 AFAF0014 */  sw          $t7, 0x14($sp)
/* E3263C 801A2F0C AFA70010 */  sw          $a3, 0x10($sp)
/* E32640 801A2F10 262503FC */  addiu       $a1, $s1, 0x3FC
/* E32644 801A2F14 0C006486 */  jal         Audio_PlaySfx
/* E32648 801A2F18 24060004 */   addiu      $a2, $zero, 0x4
/* E3264C 801A2F1C 8623004C */  lh          $v1, 0x4C($s1)
.LE16C50_801A2F20:
/* E32650 801A2F20 1460005F */  bnez        $v1, .LE16C50_801A30A0
/* E32654 801A2F24 3C014596 */   lui        $at, (0x45960000 >> 16)
/* E32658 801A2F28 44810000 */  mtc1        $at, $fv0
/* E3265C 801A2F2C 8638004E */  lh          $t8, 0x4E($s1)
/* E32660 801A2F30 3C01C3FA */  lui         $at, (0xC3FA0000 >> 16)
/* E32664 801A2F34 44812000 */  mtc1        $at, $ft0
/* E32668 801A2F38 24080064 */  addiu       $t0, $zero, 0x64
/* E3266C 801A2F3C 27190001 */  addiu       $t9, $t8, 0x1
/* E32670 801A2F40 A639004E */  sh          $t9, 0x4E($s1)
/* E32674 801A2F44 A628009E */  sh          $t0, 0x9E($s1)
/* E32678 801A2F48 3C098018 */  lui         $t1, %hi(gPlayer)
/* E3267C 801A2F4C E62000E4 */  swc1        $fv0, 0xE4($s1)
/* E32680 801A2F50 E6240008 */  swc1        $ft0, 0x8($s1)
/* E32684 801A2F54 8D298280 */  lw          $t1, %lo(gPlayer)($t1)
/* E32688 801A2F58 C62A0014 */  lwc1        $ft3, 0x14($s1)
/* E3268C 801A2F5C C5320138 */  lwc1        $ft5, 0x138($t1)
/* E32690 801A2F60 46005207 */  neg.s       $ft2, $ft3
/* E32694 801A2F64 46009181 */  sub.s       $ft1, $ft5, $fv0
/* E32698 801A2F68 E6280014 */  swc1        $ft2, 0x14($s1)
/* E3269C 801A2F6C 1000004C */  b           .LE16C50_801A30A0
/* E326A0 801A2F70 E626000C */   swc1       $ft1, 0xC($s1)
.LE16C50_801A2F74:
/* E326A4 801A2F74 0C026B37 */  jal         Animation_GetFrameCount
/* E326A8 801A2F78 2484388C */   addiu      $a0, $a0, %lo(D_601388C)
/* E326AC 801A2F7C 244AFFFE */  addiu       $t2, $v0, -0x2
/* E326B0 801A2F80 10000047 */  b           .LE16C50_801A30A0
/* E326B4 801A2F84 A62A004C */   sh         $t2, 0x4C($s1)
/* E326B8 801A2F88 44811000 */  mtc1        $at, $fv1
.LE16C50_801A2F8C:
/* E326BC 801A2F8C 24050000 */  addiu       $a1, $zero, 0x0
/* E326C0 801A2F90 3C073FC0 */  lui         $a3, (0x3FC00000 >> 16)
/* E326C4 801A2F94 44061000 */  mfc1        $a2, $fv1
/* E326C8 801A2F98 0C026F4E */  jal         Math_SmoothStepToAngle
/* E326CC 801A2F9C E7A20010 */   swc1       $fv1, 0x10($sp)
/* E326D0 801A2FA0 8622009E */  lh          $v0, 0x9E($s1)
/* E326D4 801A2FA4 24010050 */  addiu       $at, $zero, 0x50
/* E326D8 801A2FA8 1441000D */  bne         $v0, $at, .LE16C50_801A2FE0
/* E326DC 801A2FAC 3C01447A */   lui        $at, (0x447A0000 >> 16)
/* E326E0 801A2FB0 44819000 */  mtc1        $at, $ft5
/* E326E4 801A2FB4 C624000C */  lwc1        $ft0, 0xC($s1)
/* E326E8 801A2FB8 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1A94)
/* E326EC 801A2FBC 8E250004 */  lw          $a1, 0x4($s1)
/* E326F0 801A2FC0 46122180 */  add.s       $ft1, $ft0, $ft5
/* E326F4 801A2FC4 240B0001 */  addiu       $t3, $zero, 0x1
/* E326F8 801A2FC8 AFAB0010 */  sw          $t3, 0x10($sp)
/* E326FC 801A2FCC 24845A74 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1A94)
/* E32700 801A2FD0 44063000 */  mfc1        $a2, $ft1
/* E32704 801A2FD4 0C06833B */  jal         func_E16C50_801A0CEC
/* E32708 801A2FD8 3C0741A0 */   lui        $a3, (0x41A00000 >> 16)
/* E3270C 801A2FDC 8622009E */  lh          $v0, 0x9E($s1)
.LE16C50_801A2FE0:
/* E32710 801A2FE0 14400004 */  bnez        $v0, .LE16C50_801A2FF4
/* E32714 801A2FE4 240100D2 */   addiu      $at, $zero, 0xD2
/* E32718 801A2FE8 240C00DC */  addiu       $t4, $zero, 0xDC
/* E3271C 801A2FEC A62C009E */  sh          $t4, 0x9E($s1)
/* E32720 801A2FF0 8622009E */  lh          $v0, 0x9E($s1)
.LE16C50_801A2FF4:
/* E32724 801A2FF4 14410007 */  bne         $v0, $at, .LE16C50_801A3014
/* E32728 801A2FF8 240D0001 */   addiu      $t5, $zero, 0x1
/* E3272C 801A2FFC A620004C */  sh          $zero, 0x4C($s1)
/* E32730 801A3000 A62D008A */  sh          $t5, 0x8A($s1)
/* E32734 801A3004 3C01801C */  lui         $at, %hi(D_E16C50_801C16B4)
/* E32738 801A3008 C42A16B4 */  lwc1        $ft3, %lo(D_E16C50_801C16B4)($at)
/* E3273C 801A300C 8622009E */  lh          $v0, 0x9E($s1)
/* E32740 801A3010 E62A00D8 */  swc1        $ft3, 0xD8($s1)
.LE16C50_801A3014:
/* E32744 801A3014 28410064 */  slti        $at, $v0, 0x64
/* E32748 801A3018 1420000B */  bnez        $at, .LE16C50_801A3048
/* E3274C 801A301C 26240008 */   addiu      $a0, $s1, 0x8
/* E32750 801A3020 3C01801C */  lui         $at, %hi(D_E16C50_801C16B8)
/* E32754 801A3024 C42016B8 */  lwc1        $fv0, %lo(D_E16C50_801C16B8)($at)
/* E32758 801A3028 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E3275C 801A302C 4481E000 */  mtc1        $at, $fs4
/* E32760 801A3030 44060000 */  mfc1        $a2, $fv0
/* E32764 801A3034 3C054334 */  lui         $a1, (0x43340000 >> 16)
/* E32768 801A3038 4407E000 */  mfc1        $a3, $fs4
/* E3276C 801A303C 0C026F0B */  jal         Math_SmoothStepToF
/* E32770 801A3040 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E32774 801A3044 8622009E */  lh          $v0, 0x9E($s1)
.LE16C50_801A3048:
/* E32778 801A3048 24010096 */  addiu       $at, $zero, 0x96
/* E3277C 801A304C 54410005 */  bnel        $v0, $at, .LE16C50_801A3064
/* E32780 801A3050 24010032 */   addiu      $at, $zero, 0x32
/* E32784 801A3054 0C068D1A */  jal         func_E16C50_801A3468
/* E32788 801A3058 02202025 */   or         $a0, $s1, $zero
/* E3278C 801A305C 8622009E */  lh          $v0, 0x9E($s1)
/* E32790 801A3060 24010032 */  addiu       $at, $zero, 0x32
.LE16C50_801A3064:
/* E32794 801A3064 1441000E */  bne         $v0, $at, .LE16C50_801A30A0
/* E32798 801A3068 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E3279C 801A306C 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E327A0 801A3070 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E327A4 801A3074 240E0003 */  addiu       $t6, $zero, 0x3
/* E327A8 801A3078 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1B64)
/* E327AC 801A307C 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E327B0 801A3080 3C041903 */  lui         $a0, (0x19036053 >> 16)
/* E327B4 801A3084 A02E5B44 */  sb          $t6, %lo(gObjects2F4 + 0x1B64)($at)
/* E327B8 801A3088 34846053 */  ori         $a0, $a0, (0x19036053 & 0xFFFF)
/* E327BC 801A308C AFAF0014 */  sw          $t7, 0x14($sp)
/* E327C0 801A3090 AFA70010 */  sw          $a3, 0x10($sp)
/* E327C4 801A3094 262503FC */  addiu       $a1, $s1, 0x3FC
/* E327C8 801A3098 0C006486 */  jal         Audio_PlaySfx
/* E327CC 801A309C 24060004 */   addiu      $a2, $zero, 0x4
.LE16C50_801A30A0:
/* E327D0 801A30A0 8FBF0054 */  lw          $ra, 0x54($sp)
/* E327D4 801A30A4 D7B40018 */  ldc1        $fs0, 0x18($sp)
/* E327D8 801A30A8 D7B60020 */  ldc1        $fs1, 0x20($sp)
/* E327DC 801A30AC D7B80028 */  ldc1        $fs2, 0x28($sp)
/* E327E0 801A30B0 D7BA0030 */  ldc1        $fs3, 0x30($sp)
/* E327E4 801A30B4 D7BC0038 */  ldc1        $fs4, 0x38($sp)
/* E327E8 801A30B8 D7BE0040 */  ldc1        $fs5, 0x40($sp)
/* E327EC 801A30BC 8FB0004C */  lw          $s0, 0x4C($sp)
/* E327F0 801A30C0 8FB10050 */  lw          $s1, 0x50($sp)
/* E327F4 801A30C4 03E00008 */  jr          $ra
/* E327F8 801A30C8 27BD0058 */   addiu      $sp, $sp, 0x58
.section .late_rodata
dlabel D_E16C50_801C16BC
/* E50DEC 801C16BC 3DCCCCCD */ .float 0.1000000015


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A30CC
/* E327FC 801A30CC 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E32800 801A30D0 AFBF0014 */  sw          $ra, 0x14($sp)
/* E32804 801A30D4 00802825 */  or          $a1, $a0, $zero
/* E32808 801A30D8 240E0003 */  addiu       $t6, $zero, 0x3
/* E3280C 801A30DC A4AE0088 */  sh          $t6, 0x88($a1)
/* E32810 801A30E0 A4A0008A */  sh          $zero, 0x8A($a1)
/* E32814 801A30E4 3C01801C */  lui         $at, %hi(D_E16C50_801C16BC)
/* E32818 801A30E8 C42416BC */  lwc1        $ft0, %lo(D_E16C50_801C16BC)($at)
/* E3281C 801A30EC 3C040601 */  lui         $a0, %hi(D_601388C)
/* E32820 801A30F0 2484388C */  addiu       $a0, $a0, %lo(D_601388C)
/* E32824 801A30F4 E4A400D8 */  swc1        $ft0, 0xD8($a1)
/* E32828 801A30F8 0C026B37 */  jal         Animation_GetFrameCount
/* E3282C 801A30FC AFA50018 */   sw         $a1, 0x18($sp)
/* E32830 801A3100 8FA50018 */  lw          $a1, 0x18($sp)
/* E32834 801A3104 244FFFFE */  addiu       $t7, $v0, -0x2
/* E32838 801A3108 2418000F */  addiu       $t8, $zero, 0xF
/* E3283C 801A310C A4AF004C */  sh          $t7, 0x4C($a1)
/* E32840 801A3110 A4A0004E */  sh          $zero, 0x4E($a1)
/* E32844 801A3114 A4B8009E */  sh          $t8, 0x9E($a1)
/* E32848 801A3118 8FBF0014 */  lw          $ra, 0x14($sp)
/* E3284C 801A311C 27BD0018 */  addiu       $sp, $sp, 0x18
/* E32850 801A3120 03E00008 */  jr          $ra
/* E32854 801A3124 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C16C0
/* E50DF0 801C16C0 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C16C4
/* E50DF4 801C16C4 45034000 */ .float 2100

dlabel D_E16C50_801C16C8
/* E50DF8 801C16C8 44548000 */ .float 850

dlabel D_E16C50_801C16CC
/* E50DFC 801C16CC 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C16D0
/* E50E00 801C16D0 3C23D70A */ .float 0.009999999776

dlabel D_E16C50_801C16D4
/* E50E04 801C16D4 3ECCCCCD */ .float 0.400000006


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A3128
/* E32858 801A3128 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E3285C 801A312C AFB00020 */  sw          $s0, 0x20($sp)
/* E32860 801A3130 00808025 */  or          $s0, $a0, $zero
/* E32864 801A3134 AFBF0024 */  sw          $ra, 0x24($sp)
/* E32868 801A3138 8602009E */  lh          $v0, 0x9E($s0)
/* E3286C 801A313C 24010050 */  addiu       $at, $zero, 0x50
/* E32870 801A3140 10400003 */  beqz        $v0, .LE16C50_801A3150
/* E32874 801A3144 244EFFFF */   addiu      $t6, $v0, -0x1
/* E32878 801A3148 A60E009E */  sh          $t6, 0x9E($s0)
/* E3287C 801A314C 8602009E */  lh          $v0, 0x9E($s0)
.LE16C50_801A3150:
/* E32880 801A3150 860F004E */  lh          $t7, 0x4E($s0)
/* E32884 801A3154 15E00048 */  bnez        $t7, .LE16C50_801A3278
/* E32888 801A3158 00000000 */   nop
/* E3288C 801A315C 14400041 */  bnez        $v0, .LE16C50_801A3264
/* E32890 801A3160 3C040601 */   lui        $a0, %hi(D_601388C)
/* E32894 801A3164 8618004C */  lh          $t8, 0x4C($s0)
/* E32898 801A3168 3C01801C */  lui         $at, %hi(D_E16C50_801C16C0)
/* E3289C 801A316C C42016C0 */  lwc1        $fv0, %lo(D_E16C50_801C16C0)($at)
/* E328A0 801A3170 2719FFFE */  addiu       $t9, $t8, -0x2
/* E328A4 801A3174 A619004C */  sh          $t9, 0x4C($s0)
/* E328A8 801A3178 44060000 */  mfc1        $a2, $fv0
/* E328AC 801A317C 26040008 */  addiu       $a0, $s0, 0x8
/* E328B0 801A3180 3C05C47A */  lui         $a1, (0xC47A0000 >> 16)
/* E328B4 801A3184 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E328B8 801A3188 0C026F0B */  jal         Math_SmoothStepToF
/* E328BC 801A318C E7A00010 */   swc1       $fv0, 0x10($sp)
/* E328C0 801A3190 8602004C */  lh          $v0, 0x4C($s0)
/* E328C4 801A3194 24010032 */  addiu       $at, $zero, 0x32
/* E328C8 801A3198 1441000D */  bne         $v0, $at, .LE16C50_801A31D0
/* E328CC 801A319C 3C0144FA */   lui        $at, (0x44FA0000 >> 16)
/* E328D0 801A31A0 44813000 */  mtc1        $at, $ft1
/* E328D4 801A31A4 C604000C */  lwc1        $ft0, 0xC($s0)
/* E328D8 801A31A8 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1D88)
/* E328DC 801A31AC 8E050004 */  lw          $a1, 0x4($s0)
/* E328E0 801A31B0 46062200 */  add.s       $ft2, $ft0, $ft1
/* E328E4 801A31B4 24080001 */  addiu       $t0, $zero, 0x1
/* E328E8 801A31B8 AFA80010 */  sw          $t0, 0x10($sp)
/* E328EC 801A31BC 24845D68 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1D88)
/* E328F0 801A31C0 44064000 */  mfc1        $a2, $ft2
/* E328F4 801A31C4 0C06833B */  jal         func_E16C50_801A0CEC
/* E328F8 801A31C8 3C074120 */   lui        $a3, (0x41200000 >> 16)
/* E328FC 801A31CC 8602004C */  lh          $v0, 0x4C($s0)
.LE16C50_801A31D0:
/* E32900 801A31D0 24010028 */  addiu       $at, $zero, 0x28
/* E32904 801A31D4 1441000F */  bne         $v0, $at, .LE16C50_801A3214
/* E32908 801A31D8 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E3290C 801A31DC 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E32910 801A31E0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E32914 801A31E4 24090003 */  addiu       $t1, $zero, 0x3
/* E32918 801A31E8 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1E58)
/* E3291C 801A31EC 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E32920 801A31F0 3C041903 */  lui         $a0, (0x19036054 >> 16)
/* E32924 801A31F4 A0295E38 */  sb          $t1, %lo(gObjects2F4 + 0x1E58)($at)
/* E32928 801A31F8 34846054 */  ori         $a0, $a0, (0x19036054 & 0xFFFF)
/* E3292C 801A31FC AFAA0014 */  sw          $t2, 0x14($sp)
/* E32930 801A3200 AFA70010 */  sw          $a3, 0x10($sp)
/* E32934 801A3204 260503FC */  addiu       $a1, $s0, 0x3FC
/* E32938 801A3208 0C006486 */  jal         Audio_PlaySfx
/* E3293C 801A320C 24060004 */   addiu      $a2, $zero, 0x4
/* E32940 801A3210 8602004C */  lh          $v0, 0x4C($s0)
.LE16C50_801A3214:
/* E32944 801A3214 1440008F */  bnez        $v0, .LE16C50_801A3454
/* E32948 801A3218 240D0064 */   addiu      $t5, $zero, 0x64
/* E3294C 801A321C 3C01C3FA */  lui         $at, (0xC3FA0000 >> 16)
/* E32950 801A3220 44815000 */  mtc1        $at, $ft3
/* E32954 801A3224 860B004E */  lh          $t3, 0x4E($s0)
/* E32958 801A3228 3C014516 */  lui         $at, (0x45160000 >> 16)
/* E3295C 801A322C 44818000 */  mtc1        $at, $ft4
/* E32960 801A3230 256C0001 */  addiu       $t4, $t3, 0x1
/* E32964 801A3234 A60C004E */  sh          $t4, 0x4E($s0)
/* E32968 801A3238 A60D009E */  sh          $t5, 0x9E($s0)
/* E3296C 801A323C 3C0E8018 */  lui         $t6, %hi(gPlayer)
/* E32970 801A3240 E60A0008 */  swc1        $ft3, 0x8($s0)
/* E32974 801A3244 E61000E4 */  swc1        $ft4, 0xE4($s0)
/* E32978 801A3248 8DCE8280 */  lw          $t6, %lo(gPlayer)($t6)
/* E3297C 801A324C 3C01801C */  lui         $at, %hi(D_E16C50_801C16C4)
/* E32980 801A3250 C42416C4 */  lwc1        $ft0, %lo(D_E16C50_801C16C4)($at)
/* E32984 801A3254 C5D20138 */  lwc1        $ft5, 0x138($t6)
/* E32988 801A3258 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E3298C 801A325C 1000007D */  b           .LE16C50_801A3454
/* E32990 801A3260 E606000C */   swc1       $ft1, 0xC($s0)
.LE16C50_801A3264:
/* E32994 801A3264 0C026B37 */  jal         Animation_GetFrameCount
/* E32998 801A3268 2484388C */   addiu      $a0, $a0, %lo(D_601388C)
/* E3299C 801A326C 244FFFFE */  addiu       $t7, $v0, -0x2
/* E329A0 801A3270 10000078 */  b           .LE16C50_801A3454
/* E329A4 801A3274 A60F004C */   sh         $t7, 0x4C($s0)
.LE16C50_801A3278:
/* E329A8 801A3278 14410032 */  bne         $v0, $at, .LE16C50_801A3344
/* E329AC 801A327C 3C01801C */   lui        $at, %hi(D_E16C50_801C16C8)
/* E329B0 801A3280 C42A16C8 */  lwc1        $ft3, %lo(D_E16C50_801C16C8)($at)
/* E329B4 801A3284 C608000C */  lwc1        $ft2, 0xC($s0)
/* E329B8 801A3288 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1A94)
/* E329BC 801A328C 8E050004 */  lw          $a1, 0x4($s0)
/* E329C0 801A3290 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E329C4 801A3294 24180001 */  addiu       $t8, $zero, 0x1
/* E329C8 801A3298 AFB80010 */  sw          $t8, 0x10($sp)
/* E329CC 801A329C 24845A74 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1A94)
/* E329D0 801A32A0 44068000 */  mfc1        $a2, $ft4
/* E329D4 801A32A4 0C06833B */  jal         func_E16C50_801A0CEC
/* E329D8 801A32A8 3C0741A0 */   lui        $a3, (0x41A00000 >> 16)
/* E329DC 801A32AC 3C028017 */  lui         $v0, %hi(gMainController)
/* E329E0 801A32B0 8C427AF8 */  lw          $v0, %lo(gMainController)($v0)
/* E329E4 801A32B4 3C018013 */  lui         $at, %hi(D_80137E84)
/* E329E8 801A32B8 24190001 */  addiu       $t9, $zero, 0x1
/* E329EC 801A32BC 00220821 */  addu        $at, $at, $v0
/* E329F0 801A32C0 A0397E84 */  sb          $t9, %lo(D_80137E84)($at)
/* E329F4 801A32C4 3C018017 */  lui         $at, %hi(D_Timer_80177BD0)
/* E329F8 801A32C8 00024840 */  sll         $t1, $v0, 1
/* E329FC 801A32CC 3C03801C */  lui         $v1, %hi(D_E16C50_801C2740)
/* E32A00 801A32D0 00290821 */  addu        $at, $at, $t1
/* E32A04 801A32D4 24080046 */  addiu       $t0, $zero, 0x46
/* E32A08 801A32D8 24632740 */  addiu       $v1, $v1, %lo(D_E16C50_801C2740)
/* E32A0C 801A32DC A4287BD0 */  sh          $t0, %lo(D_Timer_80177BD0)($at)
/* E32A10 801A32E0 8C6A0008 */  lw          $t2, 0x8($v1)
/* E32A14 801A32E4 254B0001 */  addiu       $t3, $t2, 0x1
/* E32A18 801A32E8 316C0001 */  andi        $t4, $t3, 0x1
/* E32A1C 801A32EC 11800015 */  beqz        $t4, .LE16C50_801A3344
/* E32A20 801A32F0 AC6B0008 */   sw         $t3, 0x8($v1)
/* E32A24 801A32F4 316D0002 */  andi        $t5, $t3, 0x2
/* E32A28 801A32F8 11A0000B */  beqz        $t5, .LE16C50_801A3328
/* E32A2C 801A32FC 3C0F8017 */   lui        $t7, %hi(gTeamShields + 0x4)
/* E32A30 801A3300 3C0E8017 */  lui         $t6, %hi(gTeamShields + 0xC)
/* E32A34 801A3304 8DCE78BC */  lw          $t6, %lo(gTeamShields + 0xC)($t6)
/* E32A38 801A3308 3C048018 */  lui         $a0, %hi(gMsg_ID_20317)
/* E32A3C 801A330C 248447F8 */  addiu       $a0, $a0, %lo(gMsg_ID_20317)
/* E32A40 801A3310 59C0000D */  blezl       $t6, .LE16C50_801A3348
/* E32A44 801A3314 8602009E */   lh         $v0, 0x9E($s0)
/* E32A48 801A3318 0C02EA02 */  jal         func_800BA808
/* E32A4C 801A331C 2405001E */   addiu      $a1, $zero, 0x1E
/* E32A50 801A3320 10000009 */  b           .LE16C50_801A3348
/* E32A54 801A3324 8602009E */   lh         $v0, 0x9E($s0)
.LE16C50_801A3328:
/* E32A58 801A3328 8DEF78B4 */  lw          $t7, %lo(gTeamShields + 0x4)($t7)
/* E32A5C 801A332C 3C048018 */  lui         $a0, %hi(gMsg_ID_20271)
/* E32A60 801A3330 24843E6C */  addiu       $a0, $a0, %lo(gMsg_ID_20271)
/* E32A64 801A3334 59E00004 */  blezl       $t7, .LE16C50_801A3348
/* E32A68 801A3338 8602009E */   lh         $v0, 0x9E($s0)
/* E32A6C 801A333C 0C02EA02 */  jal         func_800BA808
/* E32A70 801A3340 2405000A */   addiu      $a1, $zero, 0xA
.LE16C50_801A3344:
/* E32A74 801A3344 8602009E */  lh          $v0, 0x9E($s0)
.LE16C50_801A3348:
/* E32A78 801A3348 241800DC */  addiu       $t8, $zero, 0xDC
/* E32A7C 801A334C 240100D2 */  addiu       $at, $zero, 0xD2
/* E32A80 801A3350 14400003 */  bnez        $v0, .LE16C50_801A3360
/* E32A84 801A3354 24190001 */   addiu      $t9, $zero, 0x1
/* E32A88 801A3358 A618009E */  sh          $t8, 0x9E($s0)
/* E32A8C 801A335C 8602009E */  lh          $v0, 0x9E($s0)
.LE16C50_801A3360:
/* E32A90 801A3360 14410004 */  bne         $v0, $at, .LE16C50_801A3374
/* E32A94 801A3364 26040008 */   addiu      $a0, $s0, 0x8
/* E32A98 801A3368 A600004C */  sh          $zero, 0x4C($s0)
/* E32A9C 801A336C A619008A */  sh          $t9, 0x8A($s0)
/* E32AA0 801A3370 8602009E */  lh          $v0, 0x9E($s0)
.LE16C50_801A3374:
/* E32AA4 801A3374 28410064 */  slti        $at, $v0, 0x64
/* E32AA8 801A3378 14200008 */  bnez        $at, .LE16C50_801A339C
/* E32AAC 801A337C 3C01801C */   lui        $at, %hi(D_E16C50_801C16CC)
/* E32AB0 801A3380 C42016CC */  lwc1        $fv0, %lo(D_E16C50_801C16CC)($at)
/* E32AB4 801A3384 3C054334 */  lui         $a1, (0x43340000 >> 16)
/* E32AB8 801A3388 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E32ABC 801A338C 44060000 */  mfc1        $a2, $fv0
/* E32AC0 801A3390 0C026F0B */  jal         Math_SmoothStepToF
/* E32AC4 801A3394 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E32AC8 801A3398 8602009E */  lh          $v0, 0x9E($s0)
.LE16C50_801A339C:
/* E32ACC 801A339C 24010096 */  addiu       $at, $zero, 0x96
/* E32AD0 801A33A0 5441001C */  bnel        $v0, $at, .LE16C50_801A3414
/* E32AD4 801A33A4 860B009E */   lh         $t3, 0x9E($s0)
/* E32AD8 801A33A8 0C0688E7 */  jal         func_E16C50_801A239C
/* E32ADC 801A33AC 02002025 */   or         $a0, $s0, $zero
/* E32AE0 801A33B0 3C01801C */  lui         $at, %hi(D_E16C50_801C16D0)
/* E32AE4 801A33B4 C43216D0 */  lwc1        $ft5, %lo(D_E16C50_801C16D0)($at)
/* E32AE8 801A33B8 0C0013AC */  jal         Rand_ZeroOne
/* E32AEC 801A33BC E61200D8 */   swc1       $ft5, 0xD8($s0)
/* E32AF0 801A33C0 3C01801C */  lui         $at, %hi(D_E16C50_801C16D4)
/* E32AF4 801A33C4 C42416D4 */  lwc1        $ft0, %lo(D_E16C50_801C16D4)($at)
/* E32AF8 801A33C8 3C088017 */  lui         $t0, %hi(gTeamShields + 0xC)
/* E32AFC 801A33CC 4600203E */  c.le.s      $ft0, $fv0
/* E32B00 801A33D0 00000000 */  nop
/* E32B04 801A33D4 4502000F */  bc1fl       .LE16C50_801A3414
/* E32B08 801A33D8 860B009E */   lh         $t3, 0x9E($s0)
/* E32B0C 801A33DC 8D0878BC */  lw          $t0, %lo(gTeamShields + 0xC)($t0)
/* E32B10 801A33E0 5900000C */  blezl       $t0, .LE16C50_801A3414
/* E32B14 801A33E4 860B009E */   lh         $t3, 0x9E($s0)
/* E32B18 801A33E8 8609008C */  lh          $t1, 0x8C($s0)
/* E32B1C 801A33EC 51200009 */  beql        $t1, $zero, .LE16C50_801A3414
/* E32B20 801A33F0 860B009E */   lh         $t3, 0x9E($s0)
/* E32B24 801A33F4 860A008E */  lh          $t2, 0x8E($s0)
/* E32B28 801A33F8 3C048018 */  lui         $a0, %hi(gMsg_ID_10320)
/* E32B2C 801A33FC 2484FCC4 */  addiu       $a0, $a0, %lo(gMsg_ID_10320)
/* E32B30 801A3400 51400004 */  beql        $t2, $zero, .LE16C50_801A3414
/* E32B34 801A3404 860B009E */   lh         $t3, 0x9E($s0)
/* E32B38 801A3408 0C02EA02 */  jal         func_800BA808
/* E32B3C 801A340C 2405001E */   addiu      $a1, $zero, 0x1E
/* E32B40 801A3410 860B009E */  lh          $t3, 0x9E($s0)
.LE16C50_801A3414:
/* E32B44 801A3414 24010032 */  addiu       $at, $zero, 0x32
/* E32B48 801A3418 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E32B4C 801A341C 1561000D */  bne         $t3, $at, .LE16C50_801A3454
/* E32B50 801A3420 24E75D34 */   addiu      $a3, $a3, %lo(D_800C5D34)
/* E32B54 801A3424 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E32B58 801A3428 240C0003 */  addiu       $t4, $zero, 0x3
/* E32B5C 801A342C 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1B64)
/* E32B60 801A3430 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E32B64 801A3434 3C041903 */  lui         $a0, (0x19036053 >> 16)
/* E32B68 801A3438 A02C5B44 */  sb          $t4, %lo(gObjects2F4 + 0x1B64)($at)
/* E32B6C 801A343C 34846053 */  ori         $a0, $a0, (0x19036053 & 0xFFFF)
/* E32B70 801A3440 AFAD0014 */  sw          $t5, 0x14($sp)
/* E32B74 801A3444 260503FC */  addiu       $a1, $s0, 0x3FC
/* E32B78 801A3448 24060004 */  addiu       $a2, $zero, 0x4
/* E32B7C 801A344C 0C006486 */  jal         Audio_PlaySfx
/* E32B80 801A3450 AFA70010 */   sw         $a3, 0x10($sp)
.LE16C50_801A3454:
/* E32B84 801A3454 8FBF0024 */  lw          $ra, 0x24($sp)
/* E32B88 801A3458 8FB00020 */  lw          $s0, 0x20($sp)
/* E32B8C 801A345C 27BD0028 */  addiu       $sp, $sp, 0x28
/* E32B90 801A3460 03E00008 */  jr          $ra
/* E32B94 801A3464 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C16D8
/* E50E08 801C16D8 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A3468
/* E32B98 801A3468 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E32B9C 801A346C AFBF0014 */  sw          $ra, 0x14($sp)
/* E32BA0 801A3470 24020004 */  addiu       $v0, $zero, 0x4
/* E32BA4 801A3474 848E008C */  lh          $t6, 0x8C($a0)
/* E32BA8 801A3478 A4820088 */  sh          $v0, 0x88($a0)
/* E32BAC 801A347C A4800048 */  sh          $zero, 0x48($a0)
/* E32BB0 801A3480 55C00005 */  bnel        $t6, $zero, .LE16C50_801A3498
/* E32BB4 801A3484 8498008E */   lh         $t8, 0x8E($a0)
/* E32BB8 801A3488 848F008E */  lh          $t7, 0x8E($a0)
/* E32BBC 801A348C 11E00009 */  beqz        $t7, .LE16C50_801A34B4
/* E32BC0 801A3490 00000000 */   nop
/* E32BC4 801A3494 8498008E */  lh          $t8, 0x8E($a0)
.LE16C50_801A3498:
/* E32BC8 801A3498 24190003 */  addiu       $t9, $zero, 0x3
/* E32BCC 801A349C 13000003 */  beqz        $t8, .LE16C50_801A34AC
/* E32BD0 801A34A0 00000000 */   nop
/* E32BD4 801A34A4 10000013 */  b           .LE16C50_801A34F4
/* E32BD8 801A34A8 A499008A */   sh         $t9, 0x8A($a0)
.LE16C50_801A34AC:
/* E32BDC 801A34AC 10000011 */  b           .LE16C50_801A34F4
/* E32BE0 801A34B0 A482008A */   sh         $v0, 0x8A($a0)
.LE16C50_801A34B4:
/* E32BE4 801A34B4 0C0013AC */  jal         Rand_ZeroOne
/* E32BE8 801A34B8 AFA40018 */   sw         $a0, 0x18($sp)
/* E32BEC 801A34BC 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E32BF0 801A34C0 44812000 */  mtc1        $at, $ft0
/* E32BF4 801A34C4 8FA40018 */  lw          $a0, 0x18($sp)
/* E32BF8 801A34C8 24080001 */  addiu       $t0, $zero, 0x1
/* E32BFC 801A34CC 4600203E */  c.le.s      $ft0, $fv0
/* E32C00 801A34D0 24090005 */  addiu       $t1, $zero, 0x5
/* E32C04 801A34D4 240A0008 */  addiu       $t2, $zero, 0x8
/* E32C08 801A34D8 45020005 */  bc1fl       .LE16C50_801A34F0
/* E32C0C 801A34DC A4800050 */   sh         $zero, 0x50($a0)
/* E32C10 801A34E0 A4880048 */  sh          $t0, 0x48($a0)
/* E32C14 801A34E4 10000003 */  b           .LE16C50_801A34F4
/* E32C18 801A34E8 A489008A */   sh         $t1, 0x8A($a0)
/* E32C1C 801A34EC A4800050 */  sh          $zero, 0x50($a0)
.LE16C50_801A34F0:
/* E32C20 801A34F0 A48A008A */  sh          $t2, 0x8A($a0)
.LE16C50_801A34F4:
/* E32C24 801A34F4 A480004C */  sh          $zero, 0x4C($a0)
/* E32C28 801A34F8 3C01801C */  lui         $at, %hi(D_E16C50_801C16D8)
/* E32C2C 801A34FC C42616D8 */  lwc1        $ft1, %lo(D_E16C50_801C16D8)($at)
/* E32C30 801A3500 E48600D8 */  swc1        $ft1, 0xD8($a0)
/* E32C34 801A3504 8FBF0014 */  lw          $ra, 0x14($sp)
/* E32C38 801A3508 03E00008 */  jr          $ra
/* E32C3C 801A350C 27BD0018 */   addiu      $sp, $sp, 0x18
.section .late_rodata
dlabel jtbl_E16C50_801C16DC
/* E50E0C 801C16DC 801A354C */ .word .LE16C50_801A354C
/* E50E10 801C16E0 801A366C */ .word .LE16C50_801A366C
/* E50E14 801C16E4 801A378C */ .word .LE16C50_801A378C
/* E50E18 801C16E8 801A3BE8 */ .word .LE16C50_801A3BE8
/* E50E1C 801C16EC 801A3BE8 */ .word .LE16C50_801A3BE8
/* E50E20 801C16F0 801A38CC */ .word .LE16C50_801A38CC
/* E50E24 801C16F4 801A3A10 */ .word .LE16C50_801A3A10

dlabel D_E16C50_801C16F8
/* E50E28 801C16F8 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C16FC
/* E50E2C 801C16FC 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1700
/* E50E30 801C1700 3C23D70A */ .float 0.009999999776

dlabel D_E16C50_801C1704
/* E50E34 801C1704 3E4CCCCD */ .float 0.200000003

dlabel D_E16C50_801C1708
/* E50E38 801C1708 3E4CCCCD */ .float 0.200000003

dlabel D_E16C50_801C170C
/* E50E3C 801C170C 3E4CCCCD */ .float 0.200000003

dlabel D_E16C50_801C1710
/* E50E40 801C1710 3DCCCCCD */ .float 0.1000000015


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A3510
/* E32C40 801A3510 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* E32C44 801A3514 AFB10020 */  sw          $s1, 0x20($sp)
/* E32C48 801A3518 00808825 */  or          $s1, $a0, $zero
/* E32C4C 801A351C AFBF0024 */  sw          $ra, 0x24($sp)
/* E32C50 801A3520 AFB0001C */  sw          $s0, 0x1C($sp)
/* E32C54 801A3524 862E008A */  lh          $t6, 0x8A($s1)
/* E32C58 801A3528 25CFFFFD */  addiu       $t7, $t6, -0x3
/* E32C5C 801A352C 2DE10007 */  sltiu       $at, $t7, 0x7
/* E32C60 801A3530 102001AD */  beqz        $at, .LE16C50_801A3BE8
/* E32C64 801A3534 000F7880 */   sll        $t7, $t7, 2
/* E32C68 801A3538 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C16DC)
/* E32C6C 801A353C 002F0821 */  addu        $at, $at, $t7
/* E32C70 801A3540 8C2F16DC */  lw          $t7, %lo(jtbl_E16C50_801C16DC)($at)
/* E32C74 801A3544 01E00008 */  jr          $t7
/* E32C78 801A3548 00000000 */   nop
.LE16C50_801A354C:
/* E32C7C 801A354C 8622004C */  lh          $v0, 0x4C($s1)
/* E32C80 801A3550 24010077 */  addiu       $at, $zero, 0x77
/* E32C84 801A3554 263003FC */  addiu       $s0, $s1, 0x3FC
/* E32C88 801A3558 10410004 */  beq         $v0, $at, .LE16C50_801A356C
/* E32C8C 801A355C 02002025 */   or         $a0, $s0, $zero
/* E32C90 801A3560 8638008E */  lh          $t8, 0x8E($s1)
/* E32C94 801A3564 5700000C */  bnel        $t8, $zero, .LE16C50_801A3598
/* E32C98 801A3568 2401001D */   addiu      $at, $zero, 0x1D
.LE16C50_801A356C:
/* E32C9C 801A356C 8639008C */  lh          $t9, 0x8C($s1)
/* E32CA0 801A3570 A620004C */  sh          $zero, 0x4C($s1)
/* E32CA4 801A3574 24080004 */  addiu       $t0, $zero, 0x4
/* E32CA8 801A3578 13200004 */  beqz        $t9, .LE16C50_801A358C
/* E32CAC 801A357C 24090005 */   addiu      $t1, $zero, 0x5
/* E32CB0 801A3580 A628008A */  sh          $t0, 0x8A($s1)
/* E32CB4 801A3584 10000003 */  b           .LE16C50_801A3594
/* E32CB8 801A3588 8622004C */   lh         $v0, 0x4C($s1)
.LE16C50_801A358C:
/* E32CBC 801A358C A629008A */  sh          $t1, 0x8A($s1)
/* E32CC0 801A3590 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A3594:
/* E32CC4 801A3594 2401001D */  addiu       $at, $zero, 0x1D
.LE16C50_801A3598:
/* E32CC8 801A3598 1441000F */  bne         $v0, $at, .LE16C50_801A35D8
/* E32CCC 801A359C 00000000 */   nop
/* E32CD0 801A35A0 0C017C3A */  jal         func_8005F0E8
/* E32CD4 801A35A4 26250004 */   addiu      $a1, $s1, 0x4
/* E32CD8 801A35A8 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E32CDC 801A35AC 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E32CE0 801A35B0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E32CE4 801A35B4 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E32CE8 801A35B8 3C041903 */  lui         $a0, (0x19035053 >> 16)
/* E32CEC 801A35BC 34845053 */  ori         $a0, $a0, (0x19035053 & 0xFFFF)
/* E32CF0 801A35C0 AFAA0014 */  sw          $t2, 0x14($sp)
/* E32CF4 801A35C4 AFA70010 */  sw          $a3, 0x10($sp)
/* E32CF8 801A35C8 02002825 */  or          $a1, $s0, $zero
/* E32CFC 801A35CC 0C006486 */  jal         Audio_PlaySfx
/* E32D00 801A35D0 24060004 */   addiu      $a2, $zero, 0x4
/* E32D04 801A35D4 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A35D8:
/* E32D08 801A35D8 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E32D0C 801A35DC 24010050 */  addiu       $at, $zero, 0x50
/* E32D10 801A35E0 1441000B */  bne         $v0, $at, .LE16C50_801A3610
/* E32D14 801A35E4 24E75D34 */   addiu      $a3, $a3, %lo(D_800C5D34)
/* E32D18 801A35E8 3C0B800C */  lui         $t3, %hi(D_800C5D3C)
/* E32D1C 801A35EC 256B5D3C */  addiu       $t3, $t3, %lo(D_800C5D3C)
/* E32D20 801A35F0 3C042943 */  lui         $a0, (0x29432077 >> 16)
/* E32D24 801A35F4 34842077 */  ori         $a0, $a0, (0x29432077 & 0xFFFF)
/* E32D28 801A35F8 AFAB0014 */  sw          $t3, 0x14($sp)
/* E32D2C 801A35FC 262503FC */  addiu       $a1, $s1, 0x3FC
/* E32D30 801A3600 24060004 */  addiu       $a2, $zero, 0x4
/* E32D34 801A3604 0C006486 */  jal         Audio_PlaySfx
/* E32D38 801A3608 AFA70010 */   sw         $a3, 0x10($sp)
/* E32D3C 801A360C 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A3610:
/* E32D40 801A3610 2401005E */  addiu       $at, $zero, 0x5E
/* E32D44 801A3614 54410175 */  bnel        $v0, $at, .LE16C50_801A3BEC
/* E32D48 801A3618 862F0050 */   lh         $t7, 0x50($s1)
/* E32D4C 801A361C 0C0013AC */  jal         Rand_ZeroOne
/* E32D50 801A3620 00000000 */   nop
/* E32D54 801A3624 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E32D58 801A3628 44812000 */  mtc1        $at, $ft0
/* E32D5C 801A362C 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E32D60 801A3630 44814000 */  mtc1        $at, $ft2
/* E32D64 801A3634 46040181 */  sub.s       $ft1, $fv0, $ft0
/* E32D68 801A3638 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E32D6C 801A363C 44819000 */  mtc1        $at, $ft5
/* E32D70 801A3640 C62C010C */  lwc1        $fa0, 0x10C($s1)
/* E32D74 801A3644 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E32D78 801A3648 C62E0114 */  lwc1        $fa1, 0x114($s1)
/* E32D7C 801A364C 24070004 */  addiu       $a3, $zero, 0x4
/* E32D80 801A3650 E7B20010 */  swc1        $ft5, 0x10($sp)
/* E32D84 801A3654 44065000 */  mfc1        $a2, $ft3
/* E32D88 801A3658 0C06837E */  jal         func_E16C50_801A0DF8
/* E32D8C 801A365C 00000000 */   nop
/* E32D90 801A3660 240C005A */  addiu       $t4, $zero, 0x5A
/* E32D94 801A3664 10000160 */  b           .LE16C50_801A3BE8
/* E32D98 801A3668 A62C0050 */   sh         $t4, 0x50($s1)
.LE16C50_801A366C:
/* E32D9C 801A366C 862D004C */  lh          $t5, 0x4C($s1)
/* E32DA0 801A3670 24010063 */  addiu       $at, $zero, 0x63
/* E32DA4 801A3674 26240010 */  addiu       $a0, $s1, 0x10
/* E32DA8 801A3678 11A10003 */  beq         $t5, $at, .LE16C50_801A3688
/* E32DAC 801A367C 3C0541A0 */   lui        $a1, (0x41A00000 >> 16)
/* E32DB0 801A3680 862E008C */  lh          $t6, 0x8C($s1)
/* E32DB4 801A3684 15C00003 */  bnez        $t6, .LE16C50_801A3694
.LE16C50_801A3688:
/* E32DB8 801A3688 240F0005 */   addiu      $t7, $zero, 0x5
/* E32DBC 801A368C A620004C */  sh          $zero, 0x4C($s1)
/* E32DC0 801A3690 A62F008A */  sh          $t7, 0x8A($s1)
.LE16C50_801A3694:
/* E32DC4 801A3694 3C01801C */  lui         $at, %hi(D_E16C50_801C16F8)
/* E32DC8 801A3698 C42416F8 */  lwc1        $ft0, %lo(D_E16C50_801C16F8)($at)
/* E32DCC 801A369C 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E32DD0 801A36A0 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E32DD4 801A36A4 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E32DD8 801A36A8 0C026F4E */  jal         Math_SmoothStepToAngle
/* E32DDC 801A36AC E7A40010 */   swc1       $ft0, 0x10($sp)
/* E32DE0 801A36B0 8622004C */  lh          $v0, 0x4C($s1)
/* E32DE4 801A36B4 2401000A */  addiu       $at, $zero, 0xA
/* E32DE8 801A36B8 263003FC */  addiu       $s0, $s1, 0x3FC
/* E32DEC 801A36BC 1441000F */  bne         $v0, $at, .LE16C50_801A36FC
/* E32DF0 801A36C0 02002025 */   or         $a0, $s0, $zero
/* E32DF4 801A36C4 0C017C3A */  jal         func_8005F0E8
/* E32DF8 801A36C8 26250004 */   addiu      $a1, $s1, 0x4
/* E32DFC 801A36CC 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E32E00 801A36D0 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E32E04 801A36D4 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E32E08 801A36D8 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E32E0C 801A36DC 3C041903 */  lui         $a0, (0x19035053 >> 16)
/* E32E10 801A36E0 34845053 */  ori         $a0, $a0, (0x19035053 & 0xFFFF)
/* E32E14 801A36E4 AFB80014 */  sw          $t8, 0x14($sp)
/* E32E18 801A36E8 AFA70010 */  sw          $a3, 0x10($sp)
/* E32E1C 801A36EC 02002825 */  or          $a1, $s0, $zero
/* E32E20 801A36F0 0C006486 */  jal         Audio_PlaySfx
/* E32E24 801A36F4 24060004 */   addiu      $a2, $zero, 0x4
/* E32E28 801A36F8 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A36FC:
/* E32E2C 801A36FC 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E32E30 801A3700 24010032 */  addiu       $at, $zero, 0x32
/* E32E34 801A3704 1441000B */  bne         $v0, $at, .LE16C50_801A3734
/* E32E38 801A3708 24E75D34 */   addiu      $a3, $a3, %lo(D_800C5D34)
/* E32E3C 801A370C 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E32E40 801A3710 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E32E44 801A3714 3C042943 */  lui         $a0, (0x29432077 >> 16)
/* E32E48 801A3718 34842077 */  ori         $a0, $a0, (0x29432077 & 0xFFFF)
/* E32E4C 801A371C AFB90014 */  sw          $t9, 0x14($sp)
/* E32E50 801A3720 262503FC */  addiu       $a1, $s1, 0x3FC
/* E32E54 801A3724 24060004 */  addiu       $a2, $zero, 0x4
/* E32E58 801A3728 0C006486 */  jal         Audio_PlaySfx
/* E32E5C 801A372C AFA70010 */   sw         $a3, 0x10($sp)
/* E32E60 801A3730 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A3734:
/* E32E64 801A3734 2401003C */  addiu       $at, $zero, 0x3C
/* E32E68 801A3738 1441012B */  bne         $v0, $at, .LE16C50_801A3BE8
/* E32E6C 801A373C 3C0642A0 */   lui        $a2, (0x42A00000 >> 16)
/* E32E70 801A3740 3C0144C8 */  lui         $at, (0x44C80000 >> 16)
/* E32E74 801A3744 44814000 */  mtc1        $at, $ft2
/* E32E78 801A3748 C626000C */  lwc1        $ft1, 0xC($s1)
/* E32E7C 801A374C C62C0004 */  lwc1        $fa0, 0x4($s1)
/* E32E80 801A3750 24070002 */  addiu       $a3, $zero, 0x2
/* E32E84 801A3754 0C068364 */  jal         func_E16C50_801A0D90
/* E32E88 801A3758 46083380 */   add.s      $fa1, $ft1, $ft2
/* E32E8C 801A375C 3C028017 */  lui         $v0, %hi(gMainController)
/* E32E90 801A3760 8C427AF8 */  lw          $v0, %lo(gMainController)($v0)
/* E32E94 801A3764 3C018013 */  lui         $at, %hi(D_80137E84)
/* E32E98 801A3768 24080001 */  addiu       $t0, $zero, 0x1
/* E32E9C 801A376C 00220821 */  addu        $at, $at, $v0
/* E32EA0 801A3770 A0287E84 */  sb          $t0, %lo(D_80137E84)($at)
/* E32EA4 801A3774 3C018017 */  lui         $at, %hi(D_Timer_80177BD0)
/* E32EA8 801A3778 00025040 */  sll         $t2, $v0, 1
/* E32EAC 801A377C 002A0821 */  addu        $at, $at, $t2
/* E32EB0 801A3780 24090064 */  addiu       $t1, $zero, 0x64
/* E32EB4 801A3784 10000118 */  b           .LE16C50_801A3BE8
/* E32EB8 801A3788 A4297BD0 */   sh         $t1, %lo(D_Timer_80177BD0)($at)
.LE16C50_801A378C:
/* E32EBC 801A378C 3C01801C */  lui         $at, %hi(D_E16C50_801C16FC)
/* E32EC0 801A3790 C42016FC */  lwc1        $fv0, %lo(D_E16C50_801C16FC)($at)
/* E32EC4 801A3794 26240010 */  addiu       $a0, $s1, 0x10
/* E32EC8 801A3798 24050000 */  addiu       $a1, $zero, 0x0
/* E32ECC 801A379C 44060000 */  mfc1        $a2, $fv0
/* E32ED0 801A37A0 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E32ED4 801A37A4 0C026F4E */  jal         Math_SmoothStepToAngle
/* E32ED8 801A37A8 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E32EDC 801A37AC 8622004C */  lh          $v0, 0x4C($s1)
/* E32EE0 801A37B0 24100041 */  addiu       $s0, $zero, 0x41
/* E32EE4 801A37B4 16020031 */  bne         $s0, $v0, .LE16C50_801A387C
/* E32EE8 801A37B8 3C10801C */   lui        $s0, %hi(D_E16C50_801BF8F0)
/* E32EEC 801A37BC 2610F8F0 */  addiu       $s0, $s0, %lo(D_E16C50_801BF8F0)
.LE16C50_801A37C0:
/* E32EF0 801A37C0 0C0013AC */  jal         Rand_ZeroOne
/* E32EF4 801A37C4 00000000 */   nop
/* E32EF8 801A37C8 0C0013AC */  jal         Rand_ZeroOne
/* E32EFC 801A37CC E7A00028 */   swc1       $fv0, 0x28($sp)
/* E32F00 801A37D0 0C0013AC */  jal         Rand_ZeroOne
/* E32F04 801A37D4 E7A0002C */   swc1       $fv0, 0x2C($sp)
/* E32F08 801A37D8 3C013E80 */  lui         $at, (0x3E800000 >> 16)
/* E32F0C 801A37DC 44811000 */  mtc1        $at, $fv1
/* E32F10 801A37E0 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E32F14 801A37E4 44818000 */  mtc1        $at, $ft4
/* E32F18 801A37E8 3C014396 */  lui         $at, (0x43960000 >> 16)
/* E32F1C 801A37EC 44819000 */  mtc1        $at, $ft5
/* E32F20 801A37F0 C62A0008 */  lwc1        $ft3, 0x8($s1)
/* E32F24 801A37F4 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E32F28 801A37F8 44813000 */  mtc1        $at, $ft1
/* E32F2C 801A37FC 46125380 */  add.s       $fa1, $ft3, $ft5
/* E32F30 801A3800 C7AA0028 */  lwc1        $ft3, 0x28($sp)
/* E32F34 801A3804 C624000C */  lwc1        $ft0, 0xC($s1)
/* E32F38 801A3808 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E32F3C 801A380C 46105481 */  sub.s       $ft5, $ft3, $ft4
/* E32F40 801A3810 C7AA002C */  lwc1        $ft3, 0x2C($sp)
/* E32F44 801A3814 C62C0004 */  lwc1        $fa0, 0x4($s1)
/* E32F48 801A3818 46062200 */  add.s       $ft2, $ft0, $ft1
/* E32F4C 801A381C 46029102 */  mul.s       $ft0, $ft5, $fv1
/* E32F50 801A3820 C6060000 */  lwc1        $ft1, 0x0($s0)
/* E32F54 801A3824 46105481 */  sub.s       $ft5, $ft3, $ft4
/* E32F58 801A3828 44064000 */  mfc1        $a2, $ft2
/* E32F5C 801A382C 44815000 */  mtc1        $at, $ft3
/* E32F60 801A3830 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E32F64 801A3834 46062200 */  add.s       $ft2, $ft0, $ft1
/* E32F68 801A3838 46029102 */  mul.s       $ft0, $ft5, $fv1
/* E32F6C 801A383C C6060004 */  lwc1        $ft1, 0x4($s0)
/* E32F70 801A3840 460A0482 */  mul.s       $ft5, $fv0, $ft3
/* E32F74 801A3844 44074000 */  mfc1        $a3, $ft2
/* E32F78 801A3848 46062200 */  add.s       $ft2, $ft0, $ft1
/* E32F7C 801A384C 44812000 */  mtc1        $at, $ft0
/* E32F80 801A3850 00000000 */  nop
/* E32F84 801A3854 46049180 */  add.s       $ft1, $ft5, $ft0
/* E32F88 801A3858 E7A80010 */  swc1        $ft2, 0x10($sp)
/* E32F8C 801A385C 0C067C65 */  jal         func_E16C50_8019F194
/* E32F90 801A3860 E7A60014 */   swc1       $ft1, 0x14($sp)
/* E32F94 801A3864 3C0B801C */  lui         $t3, %hi(D_E16C50_801BF920)
/* E32F98 801A3868 256BF920 */  addiu       $t3, $t3, %lo(D_E16C50_801BF920)
/* E32F9C 801A386C 2610000C */  addiu       $s0, $s0, 0xC
/* E32FA0 801A3870 160BFFD3 */  bne         $s0, $t3, .LE16C50_801A37C0
/* E32FA4 801A3874 00000000 */   nop
/* E32FA8 801A3878 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A387C:
/* E32FAC 801A387C 862C0048 */  lh          $t4, 0x48($s1)
/* E32FB0 801A3880 24010044 */  addiu       $at, $zero, 0x44
/* E32FB4 801A3884 5180000B */  beql        $t4, $zero, .LE16C50_801A38B4
/* E32FB8 801A3888 24010063 */   addiu      $at, $zero, 0x63
/* E32FBC 801A388C 14410008 */  bne         $v0, $at, .LE16C50_801A38B0
/* E32FC0 801A3890 240D0009 */   addiu      $t5, $zero, 0x9
/* E32FC4 801A3894 A62D008A */  sh          $t5, 0x8A($s1)
/* E32FC8 801A3898 3C01801C */  lui         $at, %hi(D_E16C50_801C1700)
/* E32FCC 801A389C C4281700 */  lwc1        $ft2, %lo(D_E16C50_801C1700)($at)
/* E32FD0 801A38A0 240E0014 */  addiu       $t6, $zero, 0x14
/* E32FD4 801A38A4 A62E004C */  sh          $t6, 0x4C($s1)
/* E32FD8 801A38A8 8622004C */  lh          $v0, 0x4C($s1)
/* E32FDC 801A38AC E62800D8 */  swc1        $ft2, 0xD8($s1)
.LE16C50_801A38B0:
/* E32FE0 801A38B0 24010063 */  addiu       $at, $zero, 0x63
.LE16C50_801A38B4:
/* E32FE4 801A38B4 544100CD */  bnel        $v0, $at, .LE16C50_801A3BEC
/* E32FE8 801A38B8 862F0050 */   lh         $t7, 0x50($s1)
/* E32FEC 801A38BC 0C068C33 */  jal         func_E16C50_801A30CC
/* E32FF0 801A38C0 02202025 */   or         $a0, $s1, $zero
/* E32FF4 801A38C4 100000C9 */  b           .LE16C50_801A3BEC
/* E32FF8 801A38C8 862F0050 */   lh         $t7, 0x50($s1)
.LE16C50_801A38CC:
/* E32FFC 801A38CC 862F004C */  lh          $t7, 0x4C($s1)
/* E33000 801A38D0 24100041 */  addiu       $s0, $zero, 0x41
/* E33004 801A38D4 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E33008 801A38D8 160F000C */  bne         $s0, $t7, .LE16C50_801A390C
/* E3300C 801A38DC 24E75D34 */   addiu      $a3, $a3, %lo(D_800C5D34)
/* E33010 801A38E0 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E33014 801A38E4 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E33018 801A38E8 3C043103 */  lui         $a0, (0x31033078 >> 16)
/* E3301C 801A38EC 34843078 */  ori         $a0, $a0, (0x31033078 & 0xFFFF)
/* E33020 801A38F0 AFB80014 */  sw          $t8, 0x14($sp)
/* E33024 801A38F4 262503FC */  addiu       $a1, $s1, 0x3FC
/* E33028 801A38F8 24060004 */  addiu       $a2, $zero, 0x4
/* E3302C 801A38FC 0C006486 */  jal         Audio_PlaySfx
/* E33030 801A3900 AFA70010 */   sw         $a3, 0x10($sp)
/* E33034 801A3904 2419001E */  addiu       $t9, $zero, 0x1E
/* E33038 801A3908 A6390050 */  sh          $t9, 0x50($s1)
.LE16C50_801A390C:
/* E3303C 801A390C 86280050 */  lh          $t0, 0x50($s1)
/* E33040 801A3910 3C098017 */  lui         $t1, %hi(gFrameCount)
/* E33044 801A3914 51000003 */  beql        $t0, $zero, .LE16C50_801A3924
/* E33048 801A3918 8622004C */   lh         $v0, 0x4C($s1)
/* E3304C 801A391C A630004C */  sh          $s0, 0x4C($s1)
/* E33050 801A3920 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A3924:
/* E33054 801A3924 5602002E */  bnel        $s0, $v0, .LE16C50_801A39E0
/* E33058 801A3928 2401004B */   addiu      $at, $zero, 0x4B
/* E3305C 801A392C 8D297DB0 */  lw          $t1, %lo(gFrameCount)($t1)
/* E33060 801A3930 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E33064 801A3934 312A0001 */  andi        $t2, $t1, 0x1
/* E33068 801A3938 55400029 */  bnel        $t2, $zero, .LE16C50_801A39E0
/* E3306C 801A393C 2401004B */   addiu      $at, $zero, 0x4B
/* E33070 801A3940 C62A00EC */  lwc1        $ft3, 0xEC($s1)
/* E33074 801A3944 44819000 */  mtc1        $at, $ft5
/* E33078 801A3948 862B0050 */  lh          $t3, 0x50($s1)
/* E3307C 801A394C 3C014416 */  lui         $at, (0x44160000 >> 16)
/* E33080 801A3950 46125101 */  sub.s       $ft0, $ft3, $ft5
/* E33084 801A3954 448B9000 */  mtc1        $t3, $ft5
/* E33088 801A3958 44814000 */  mtc1        $at, $ft2
/* E3308C 801A395C C62600F0 */  lwc1        $ft1, 0xF0($s1)
/* E33090 801A3960 44062000 */  mfc1        $a2, $ft0
/* E33094 801A3964 46809120 */  cvt.s.w     $ft0, $ft5
/* E33098 801A3968 3C01801C */  lui         $at, %hi(D_E16C50_801C1704)
/* E3309C 801A396C 8E2500E8 */  lw          $a1, 0xE8($s1)
/* E330A0 801A3970 AFA00014 */  sw          $zero, 0x14($sp)
/* E330A4 801A3974 02202025 */  or          $a0, $s1, $zero
/* E330A8 801A3978 46083280 */  add.s       $ft3, $ft1, $ft2
/* E330AC 801A397C C4261704 */  lwc1        $ft1, %lo(D_E16C50_801C1704)($at)
/* E330B0 801A3980 3C014080 */  lui         $at, (0x40800000 >> 16)
/* E330B4 801A3984 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E330B8 801A3988 44075000 */  mfc1        $a3, $ft3
/* E330BC 801A398C 44815000 */  mtc1        $at, $ft3
/* E330C0 801A3990 00000000 */  nop
/* E330C4 801A3994 460A4480 */  add.s       $ft5, $ft2, $ft3
/* E330C8 801A3998 0C067FF0 */  jal         func_E16C50_8019FFC0
/* E330CC 801A399C E7B20010 */   swc1       $ft5, 0x10($sp)
/* E330D0 801A39A0 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E330D4 801A39A4 44813000 */  mtc1        $at, $ft1
/* E330D8 801A39A8 C62400EC */  lwc1        $ft0, 0xEC($s1)
/* E330DC 801A39AC 3C014396 */  lui         $at, (0x43960000 >> 16)
/* E330E0 801A39B0 44819000 */  mtc1        $at, $ft5
/* E330E4 801A39B4 C62A00F0 */  lwc1        $ft3, 0xF0($s1)
/* E330E8 801A39B8 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E330EC 801A39BC 8E2500E8 */  lw          $a1, 0xE8($s1)
/* E330F0 801A39C0 02202025 */  or          $a0, $s1, $zero
/* E330F4 801A39C4 46125100 */  add.s       $ft0, $ft3, $ft5
/* E330F8 801A39C8 44074000 */  mfc1        $a3, $ft2
/* E330FC 801A39CC 3C0641C8 */  lui         $a2, (0x41C80000 >> 16)
/* E33100 801A39D0 0C0687AC */  jal         func_E16C50_801A1EB0
/* E33104 801A39D4 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E33108 801A39D8 8622004C */  lh          $v0, 0x4C($s1)
/* E3310C 801A39DC 2401004B */  addiu       $at, $zero, 0x4B
.LE16C50_801A39E0:
/* E33110 801A39E0 14410005 */  bne         $v0, $at, .LE16C50_801A39F8
/* E33114 801A39E4 262403FC */   addiu      $a0, $s1, 0x3FC
/* E33118 801A39E8 3C053103 */  lui         $a1, (0x31033078 >> 16)
/* E3311C 801A39EC 0C006957 */  jal         func_8001A55C
/* E33120 801A39F0 34A53078 */   ori        $a1, $a1, (0x31033078 & 0xFFFF)
/* E33124 801A39F4 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A39F8:
/* E33128 801A39F8 24010063 */  addiu       $at, $zero, 0x63
/* E3312C 801A39FC 1441007A */  bne         $v0, $at, .LE16C50_801A3BE8
/* E33130 801A3A00 240C0005 */   addiu      $t4, $zero, 0x5
/* E33134 801A3A04 A62C008A */  sh          $t4, 0x8A($s1)
/* E33138 801A3A08 10000077 */  b           .LE16C50_801A3BE8
/* E3313C 801A3A0C A620004C */   sh         $zero, 0x4C($s1)
.LE16C50_801A3A10:
/* E33140 801A3A10 862D004C */  lh          $t5, 0x4C($s1)
/* E33144 801A3A14 24100042 */  addiu       $s0, $zero, 0x42
/* E33148 801A3A18 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E3314C 801A3A1C 25AE0001 */  addiu       $t6, $t5, 0x1
/* E33150 801A3A20 A62E004C */  sh          $t6, 0x4C($s1)
/* E33154 801A3A24 862F004C */  lh          $t7, 0x4C($s1)
/* E33158 801A3A28 3C043103 */  lui         $a0, (0x31033078 >> 16)
/* E3315C 801A3A2C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E33160 801A3A30 160F000A */  bne         $s0, $t7, .LE16C50_801A3A5C
/* E33164 801A3A34 34843078 */   ori        $a0, $a0, (0x31033078 & 0xFFFF)
/* E33168 801A3A38 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E3316C 801A3A3C 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E33170 801A3A40 AFB80014 */  sw          $t8, 0x14($sp)
/* E33174 801A3A44 262503FC */  addiu       $a1, $s1, 0x3FC
/* E33178 801A3A48 24060004 */  addiu       $a2, $zero, 0x4
/* E3317C 801A3A4C 0C006486 */  jal         Audio_PlaySfx
/* E33180 801A3A50 AFA70010 */   sw         $a3, 0x10($sp)
/* E33184 801A3A54 2419001E */  addiu       $t9, $zero, 0x1E
/* E33188 801A3A58 A6390050 */  sh          $t9, 0x50($s1)
.LE16C50_801A3A5C:
/* E3318C 801A3A5C 86280050 */  lh          $t0, 0x50($s1)
/* E33190 801A3A60 3C098017 */  lui         $t1, %hi(gFrameCount)
/* E33194 801A3A64 51000003 */  beql        $t0, $zero, .LE16C50_801A3A74
/* E33198 801A3A68 8622004C */   lh         $v0, 0x4C($s1)
/* E3319C 801A3A6C A630004C */  sh          $s0, 0x4C($s1)
/* E331A0 801A3A70 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A3A74:
/* E331A4 801A3A74 56020051 */  bnel        $s0, $v0, .LE16C50_801A3BBC
/* E331A8 801A3A78 2401004C */   addiu      $at, $zero, 0x4C
/* E331AC 801A3A7C 8D297DB0 */  lw          $t1, %lo(gFrameCount)($t1)
/* E331B0 801A3A80 3C0142FA */  lui         $at, (0x42FA0000 >> 16)
/* E331B4 801A3A84 312A0001 */  andi        $t2, $t1, 0x1
/* E331B8 801A3A88 5540004C */  bnel        $t2, $zero, .LE16C50_801A3BBC
/* E331BC 801A3A8C 2401004C */   addiu      $at, $zero, 0x4C
/* E331C0 801A3A90 44814000 */  mtc1        $at, $ft2
/* E331C4 801A3A94 C62600E8 */  lwc1        $ft1, 0xE8($s1)
/* E331C8 801A3A98 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E331CC 801A3A9C 44812000 */  mtc1        $at, $ft0
/* E331D0 801A3AA0 C63200EC */  lwc1        $ft5, 0xEC($s1)
/* E331D4 801A3AA4 46083280 */  add.s       $ft3, $ft1, $ft2
/* E331D8 801A3AA8 862B0050 */  lh          $t3, 0x50($s1)
/* E331DC 801A3AAC 3C014416 */  lui         $at, (0x44160000 >> 16)
/* E331E0 801A3AB0 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E331E4 801A3AB4 448B2000 */  mtc1        $t3, $ft0
/* E331E8 801A3AB8 44055000 */  mfc1        $a1, $ft3
/* E331EC 801A3ABC 44815000 */  mtc1        $at, $ft3
/* E331F0 801A3AC0 C62800F0 */  lwc1        $ft2, 0xF0($s1)
/* E331F4 801A3AC4 44063000 */  mfc1        $a2, $ft1
/* E331F8 801A3AC8 468021A0 */  cvt.s.w     $ft1, $ft0
/* E331FC 801A3ACC 3C01801C */  lui         $at, %hi(D_E16C50_801C1708)
/* E33200 801A3AD0 240C0001 */  addiu       $t4, $zero, 0x1
/* E33204 801A3AD4 AFAC0014 */  sw          $t4, 0x14($sp)
/* E33208 801A3AD8 02202025 */  or          $a0, $s1, $zero
/* E3320C 801A3ADC 460A4480 */  add.s       $ft5, $ft2, $ft3
/* E33210 801A3AE0 C4281708 */  lwc1        $ft2, %lo(D_E16C50_801C1708)($at)
/* E33214 801A3AE4 3C014080 */  lui         $at, (0x40800000 >> 16)
/* E33218 801A3AE8 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E3321C 801A3AEC 44079000 */  mfc1        $a3, $ft5
/* E33220 801A3AF0 44819000 */  mtc1        $at, $ft5
/* E33224 801A3AF4 00000000 */  nop
/* E33228 801A3AF8 46125100 */  add.s       $ft0, $ft3, $ft5
/* E3322C 801A3AFC 0C067FF0 */  jal         func_E16C50_8019FFC0
/* E33230 801A3B00 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E33234 801A3B04 3C0142FA */  lui         $at, (0x42FA0000 >> 16)
/* E33238 801A3B08 44814000 */  mtc1        $at, $ft2
/* E3323C 801A3B0C C62600E8 */  lwc1        $ft1, 0xE8($s1)
/* E33240 801A3B10 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E33244 801A3B14 44812000 */  mtc1        $at, $ft0
/* E33248 801A3B18 C63200EC */  lwc1        $ft5, 0xEC($s1)
/* E3324C 801A3B1C 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E33250 801A3B20 862D0050 */  lh          $t5, 0x50($s1)
/* E33254 801A3B24 3C014416 */  lui         $at, (0x44160000 >> 16)
/* E33258 801A3B28 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E3325C 801A3B2C 448D2000 */  mtc1        $t5, $ft0
/* E33260 801A3B30 44055000 */  mfc1        $a1, $ft3
/* E33264 801A3B34 44815000 */  mtc1        $at, $ft3
/* E33268 801A3B38 C62800F0 */  lwc1        $ft2, 0xF0($s1)
/* E3326C 801A3B3C 44063000 */  mfc1        $a2, $ft1
/* E33270 801A3B40 468021A0 */  cvt.s.w     $ft1, $ft0
/* E33274 801A3B44 3C01801C */  lui         $at, %hi(D_E16C50_801C170C)
/* E33278 801A3B48 240E0002 */  addiu       $t6, $zero, 0x2
/* E3327C 801A3B4C AFAE0014 */  sw          $t6, 0x14($sp)
/* E33280 801A3B50 02202025 */  or          $a0, $s1, $zero
/* E33284 801A3B54 460A4480 */  add.s       $ft5, $ft2, $ft3
/* E33288 801A3B58 C428170C */  lwc1        $ft2, %lo(D_E16C50_801C170C)($at)
/* E3328C 801A3B5C 3C014080 */  lui         $at, (0x40800000 >> 16)
/* E33290 801A3B60 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E33294 801A3B64 44079000 */  mfc1        $a3, $ft5
/* E33298 801A3B68 44819000 */  mtc1        $at, $ft5
/* E3329C 801A3B6C 00000000 */  nop
/* E332A0 801A3B70 46125100 */  add.s       $ft0, $ft3, $ft5
/* E332A4 801A3B74 0C067FF0 */  jal         func_E16C50_8019FFC0
/* E332A8 801A3B78 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E332AC 801A3B7C 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E332B0 801A3B80 44814000 */  mtc1        $at, $ft2
/* E332B4 801A3B84 C62600EC */  lwc1        $ft1, 0xEC($s1)
/* E332B8 801A3B88 3C014396 */  lui         $at, (0x43960000 >> 16)
/* E332BC 801A3B8C 44812000 */  mtc1        $at, $ft0
/* E332C0 801A3B90 C63200F0 */  lwc1        $ft5, 0xF0($s1)
/* E332C4 801A3B94 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E332C8 801A3B98 8E2500E8 */  lw          $a1, 0xE8($s1)
/* E332CC 801A3B9C 02202025 */  or          $a0, $s1, $zero
/* E332D0 801A3BA0 46049180 */  add.s       $ft1, $ft5, $ft0
/* E332D4 801A3BA4 44075000 */  mfc1        $a3, $ft3
/* E332D8 801A3BA8 3C0641C8 */  lui         $a2, (0x41C80000 >> 16)
/* E332DC 801A3BAC 0C0687AC */  jal         func_E16C50_801A1EB0
/* E332E0 801A3BB0 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E332E4 801A3BB4 8622004C */  lh          $v0, 0x4C($s1)
/* E332E8 801A3BB8 2401004C */  addiu       $at, $zero, 0x4C
.LE16C50_801A3BBC:
/* E332EC 801A3BBC 14410005 */  bne         $v0, $at, .LE16C50_801A3BD4
/* E332F0 801A3BC0 262403FC */   addiu      $a0, $s1, 0x3FC
/* E332F4 801A3BC4 3C053103 */  lui         $a1, (0x31033078 >> 16)
/* E332F8 801A3BC8 0C006957 */  jal         func_8001A55C
/* E332FC 801A3BCC 34A53078 */   ori        $a1, $a1, (0x31033078 & 0xFFFF)
/* E33300 801A3BD0 8622004C */  lh          $v0, 0x4C($s1)
.LE16C50_801A3BD4:
/* E33304 801A3BD4 28410063 */  slti        $at, $v0, 0x63
/* E33308 801A3BD8 54200004 */  bnel        $at, $zero, .LE16C50_801A3BEC
/* E3330C 801A3BDC 862F0050 */   lh         $t7, 0x50($s1)
/* E33310 801A3BE0 0C068C33 */  jal         func_E16C50_801A30CC
/* E33314 801A3BE4 02202025 */   or         $a0, $s1, $zero
.LE16C50_801A3BE8:
/* E33318 801A3BE8 862F0050 */  lh          $t7, 0x50($s1)
.LE16C50_801A3BEC:
/* E3331C 801A3BEC 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x11BC)
/* E33320 801A3BF0 3C01801C */  lui         $at, %hi(D_E16C50_801C1710)
/* E33324 801A3BF4 15E00008 */  bnez        $t7, .LE16C50_801A3C18
/* E33328 801A3BF8 2484519C */   addiu      $a0, $a0, %lo(gObjects2F4 + 0x11BC)
/* E3332C 801A3BFC 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x11B8)
/* E33330 801A3C00 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0x12B8)
/* E33334 801A3C04 24A55298 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0x12B8)
/* E33338 801A3C08 0C0183EF */  jal         Object_Kill
/* E3333C 801A3C0C 24845198 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0x11B8)
/* E33340 801A3C10 1000000A */  b           .LE16C50_801A3C3C
/* E33344 801A3C14 8FBF0024 */   lw         $ra, 0x24($sp)
.LE16C50_801A3C18:
/* E33348 801A3C18 3C188018 */  lui         $t8, %hi(gPlayer)
/* E3334C 801A3C1C C4201710 */  lwc1        $fv0, %lo(D_E16C50_801C1710)($at)
/* E33350 801A3C20 8F188280 */  lw          $t8, %lo(gPlayer)($t8)
/* E33354 801A3C24 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E33358 801A3C28 44060000 */  mfc1        $a2, $fv0
/* E3335C 801A3C2C 8F050074 */  lw          $a1, 0x74($t8)
/* E33360 801A3C30 0C026F0B */  jal         Math_SmoothStepToF
/* E33364 801A3C34 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E33368 801A3C38 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_801A3C3C:
/* E3336C 801A3C3C 8FB0001C */  lw          $s0, 0x1C($sp)
/* E33370 801A3C40 8FB10020 */  lw          $s1, 0x20($sp)
/* E33374 801A3C44 03E00008 */  jr          $ra
/* E33378 801A3C48 27BD0038 */   addiu      $sp, $sp, 0x38
.section .late_rodata
dlabel D_E16C50_801C1714
/* E50E44 801C1714 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A3C4C
/* E3337C 801A3C4C 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* E33380 801A3C50 AFB00020 */  sw          $s0, 0x20($sp)
/* E33384 801A3C54 00808025 */  or          $s0, $a0, $zero
/* E33388 801A3C58 AFBF0024 */  sw          $ra, 0x24($sp)
/* E3338C 801A3C5C 860E008C */  lh          $t6, 0x8C($s0)
/* E33390 801A3C60 55C00027 */  bnel        $t6, $zero, .LE16C50_801A3D00
/* E33394 801A3C64 86020066 */   lh         $v0, 0x66($s0)
/* E33398 801A3C68 860F008E */  lh          $t7, 0x8E($s0)
/* E3339C 801A3C6C 55E00024 */  bnel        $t7, $zero, .LE16C50_801A3D00
/* E333A0 801A3C70 86020066 */   lh         $v0, 0x66($s0)
/* E333A4 801A3C74 86020066 */  lh          $v0, 0x66($s0)
/* E333A8 801A3C78 24010008 */  addiu       $at, $zero, 0x8
/* E333AC 801A3C7C 10410003 */  beq         $v0, $at, .LE16C50_801A3C8C
/* E333B0 801A3C80 2401FFFF */   addiu      $at, $zero, -0x1
/* E333B4 801A3C84 5441001E */  bnel        $v0, $at, .LE16C50_801A3D00
/* E333B8 801A3C88 86020066 */   lh         $v0, 0x66($s0)
.LE16C50_801A3C8C:
/* E333BC 801A3C8C 86180060 */  lh          $t8, 0x60($s0)
/* E333C0 801A3C90 86190064 */  lh          $t9, 0x64($s0)
/* E333C4 801A3C94 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E333C8 801A3C98 3C042943 */  lui         $a0, (0x29433074 >> 16)
/* E333CC 801A3C9C 03194823 */  subu        $t1, $t8, $t9
/* E333D0 801A3CA0 A6090060 */  sh          $t1, 0x60($s0)
/* E333D4 801A3CA4 86020060 */  lh          $v0, 0x60($s0)
/* E333D8 801A3CA8 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E333DC 801A3CAC 34843074 */  ori         $a0, $a0, (0x29433074 & 0xFFFF)
/* E333E0 801A3CB0 04410003 */  bgez        $v0, .LE16C50_801A3CC0
/* E333E4 801A3CB4 260503FC */   addiu      $a1, $s0, 0x3FC
/* E333E8 801A3CB8 A6000060 */  sh          $zero, 0x60($s0)
/* E333EC 801A3CBC 86020060 */  lh          $v0, 0x60($s0)
.LE16C50_801A3CC0:
/* E333F0 801A3CC0 44822000 */  mtc1        $v0, $ft0
/* E333F4 801A3CC4 44801000 */  mtc1        $zero, $fv1
/* E333F8 801A3CC8 240A0014 */  addiu       $t2, $zero, 0x14
/* E333FC 801A3CCC 468021A0 */  cvt.s.w     $ft1, $ft0
/* E33400 801A3CD0 3C0B800C */  lui         $t3, %hi(D_800C5D3C)
/* E33404 801A3CD4 A60A009C */  sh          $t2, 0x9C($s0)
/* E33408 801A3CD8 256B5D3C */  addiu       $t3, $t3, %lo(D_800C5D3C)
/* E3340C 801A3CDC 24060004 */  addiu       $a2, $zero, 0x4
/* E33410 801A3CE0 4606103C */  c.lt.s      $fv1, $ft1
/* E33414 801A3CE4 00000000 */  nop
/* E33418 801A3CE8 45020005 */  bc1fl       .LE16C50_801A3D00
/* E3341C 801A3CEC 86020066 */   lh         $v0, 0x66($s0)
/* E33420 801A3CF0 AFA70010 */  sw          $a3, 0x10($sp)
/* E33424 801A3CF4 0C006486 */  jal         Audio_PlaySfx
/* E33428 801A3CF8 AFAB0014 */   sw         $t3, 0x14($sp)
/* E3342C 801A3CFC 86020066 */  lh          $v0, 0x66($s0)
.LE16C50_801A3D00:
/* E33430 801A3D00 240C0014 */  addiu       $t4, $zero, 0x14
/* E33434 801A3D04 A60C0058 */  sh          $t4, 0x58($s0)
/* E33438 801A3D08 1840005D */  blez        $v0, .LE16C50_801A3E80
/* E3343C 801A3D0C 28410004 */   slti       $at, $v0, 0x4
/* E33440 801A3D10 5020005C */  beql        $at, $zero, .LE16C50_801A3E84
/* E33444 801A3D14 28410004 */   slti       $at, $v0, 0x4
/* E33448 801A3D18 860D008C */  lh          $t5, 0x8C($s0)
/* E3344C 801A3D1C 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E33450 801A3D20 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E33454 801A3D24 11A00056 */  beqz        $t5, .LE16C50_801A3E80
/* E33458 801A3D28 3C042943 */   lui        $a0, (0x29433074 >> 16)
/* E3345C 801A3D2C 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E33460 801A3D30 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E33464 801A3D34 AFAE0014 */  sw          $t6, 0x14($sp)
/* E33468 801A3D38 34843074 */  ori         $a0, $a0, (0x29433074 & 0xFFFF)
/* E3346C 801A3D3C 260503FC */  addiu       $a1, $s0, 0x3FC
/* E33470 801A3D40 24060004 */  addiu       $a2, $zero, 0x4
/* E33474 801A3D44 0C006486 */  jal         Audio_PlaySfx
/* E33478 801A3D48 AFA70010 */   sw         $a3, 0x10($sp)
/* E3347C 801A3D4C 860F008C */  lh          $t7, 0x8C($s0)
/* E33480 801A3D50 86180064 */  lh          $t8, 0x64($s0)
/* E33484 801A3D54 44801000 */  mtc1        $zero, $fv1
/* E33488 801A3D58 01F8C823 */  subu        $t9, $t7, $t8
/* E3348C 801A3D5C A619008C */  sh          $t9, 0x8C($s0)
/* E33490 801A3D60 8602008C */  lh          $v0, 0x8C($s0)
/* E33494 801A3D64 24180014 */  addiu       $t8, $zero, 0x14
/* E33498 801A3D68 04410003 */  bgez        $v0, .LE16C50_801A3D78
/* E3349C 801A3D6C 00000000 */   nop
/* E334A0 801A3D70 A600008C */  sh          $zero, 0x8C($s0)
/* E334A4 801A3D74 8602008C */  lh          $v0, 0x8C($s0)
.LE16C50_801A3D78:
/* E334A8 801A3D78 54400040 */  bnel        $v0, $zero, .LE16C50_801A3E7C
/* E334AC 801A3D7C A6180098 */   sh         $t8, 0x98($s0)
/* E334B0 801A3D80 8E090028 */  lw          $t1, 0x28($s0)
/* E334B4 801A3D84 24040002 */  addiu       $a0, $zero, 0x2
/* E334B8 801A3D88 E522004C */  swc1        $fv1, 0x4C($t1)
/* E334BC 801A3D8C 8E020028 */  lw          $v0, 0x28($s0)
/* E334C0 801A3D90 C440004C */  lwc1        $fv0, 0x4C($v0)
/* E334C4 801A3D94 E4400034 */  swc1        $fv0, 0x34($v0)
/* E334C8 801A3D98 8E0A0028 */  lw          $t2, 0x28($s0)
/* E334CC 801A3D9C E540001C */  swc1        $fv0, 0x1C($t2)
/* E334D0 801A3DA0 8E0B0028 */  lw          $t3, 0x28($s0)
/* E334D4 801A3DA4 E5620050 */  swc1        $fv1, 0x50($t3)
/* E334D8 801A3DA8 8E020028 */  lw          $v0, 0x28($s0)
/* E334DC 801A3DAC C4400050 */  lwc1        $fv0, 0x50($v0)
/* E334E0 801A3DB0 E4400038 */  swc1        $fv0, 0x38($v0)
/* E334E4 801A3DB4 8E0C0028 */  lw          $t4, 0x28($s0)
/* E334E8 801A3DB8 00041080 */  sll         $v0, $a0, 2
/* E334EC 801A3DBC 02002025 */  or          $a0, $s0, $zero
/* E334F0 801A3DC0 E5800020 */  swc1        $fv0, 0x20($t4)
/* E334F4 801A3DC4 8E0D0028 */  lw          $t5, 0x28($s0)
/* E334F8 801A3DC8 01A27021 */  addu        $t6, $t5, $v0
/* E334FC 801A3DCC E5C2004C */  swc1        $fv1, 0x4C($t6)
/* E33500 801A3DD0 8E0F0028 */  lw          $t7, 0x28($s0)
/* E33504 801A3DD4 01E21821 */  addu        $v1, $t7, $v0
/* E33508 801A3DD8 C460004C */  lwc1        $fv0, 0x4C($v1)
/* E3350C 801A3DDC E4600034 */  swc1        $fv0, 0x34($v1)
/* E33510 801A3DE0 8E180028 */  lw          $t8, 0x28($s0)
/* E33514 801A3DE4 0302C821 */  addu        $t9, $t8, $v0
/* E33518 801A3DE8 E720001C */  swc1        $fv0, 0x1C($t9)
/* E3351C 801A3DEC 8E090028 */  lw          $t1, 0x28($s0)
/* E33520 801A3DF0 01225021 */  addu        $t2, $t1, $v0
/* E33524 801A3DF4 E5420050 */  swc1        $fv1, 0x50($t2)
/* E33528 801A3DF8 8E0B0028 */  lw          $t3, 0x28($s0)
/* E3352C 801A3DFC 01621821 */  addu        $v1, $t3, $v0
/* E33530 801A3E00 C4600050 */  lwc1        $fv0, 0x50($v1)
/* E33534 801A3E04 E4600038 */  swc1        $fv0, 0x38($v1)
/* E33538 801A3E08 8E0C0028 */  lw          $t4, 0x28($s0)
/* E3353C 801A3E0C 01826821 */  addu        $t5, $t4, $v0
/* E33540 801A3E10 E5A00020 */  swc1        $fv0, 0x20($t5)
/* E33544 801A3E14 8E0E0028 */  lw          $t6, 0x28($s0)
/* E33548 801A3E18 01C27821 */  addu        $t7, $t6, $v0
/* E3354C 801A3E1C E5E20054 */  swc1        $fv1, 0x54($t7)
/* E33550 801A3E20 8E180028 */  lw          $t8, 0x28($s0)
/* E33554 801A3E24 240FFFFF */  addiu       $t7, $zero, -0x1
/* E33558 801A3E28 03021821 */  addu        $v1, $t8, $v0
/* E3355C 801A3E2C C4600054 */  lwc1        $fv0, 0x54($v1)
/* E33560 801A3E30 E460003C */  swc1        $fv0, 0x3C($v1)
/* E33564 801A3E34 8E190028 */  lw          $t9, 0x28($s0)
/* E33568 801A3E38 03224821 */  addu        $t1, $t9, $v0
/* E3356C 801A3E3C E5200024 */  swc1        $fv0, 0x24($t1)
/* E33570 801A3E40 8E0A0028 */  lw          $t2, 0x28($s0)
/* E33574 801A3E44 01425821 */  addu        $t3, $t2, $v0
/* E33578 801A3E48 E5620058 */  swc1        $fv1, 0x58($t3)
/* E3357C 801A3E4C 8E0C0028 */  lw          $t4, 0x28($s0)
/* E33580 801A3E50 01821821 */  addu        $v1, $t4, $v0
/* E33584 801A3E54 C4600058 */  lwc1        $fv0, 0x58($v1)
/* E33588 801A3E58 E4600040 */  swc1        $fv0, 0x40($v1)
/* E3358C 801A3E5C 8E0D0028 */  lw          $t5, 0x28($s0)
/* E33590 801A3E60 01A27021 */  addu        $t6, $t5, $v0
/* E33594 801A3E64 E5C00028 */  swc1        $fv0, 0x28($t6)
/* E33598 801A3E68 0C06922E */  jal         func_E16C50_801A48B8
/* E3359C 801A3E6C A60F008C */   sh         $t7, 0x8C($s0)
/* E335A0 801A3E70 10000003 */  b           .LE16C50_801A3E80
/* E335A4 801A3E74 86020066 */   lh         $v0, 0x66($s0)
/* E335A8 801A3E78 A6180098 */  sh          $t8, 0x98($s0)
.LE16C50_801A3E7C:
/* E335AC 801A3E7C 86020066 */  lh          $v0, 0x66($s0)
.LE16C50_801A3E80:
/* E335B0 801A3E80 28410004 */  slti        $at, $v0, 0x4
.LE16C50_801A3E84:
/* E335B4 801A3E84 1420005C */  bnez        $at, .LE16C50_801A3FF8
/* E335B8 801A3E88 28410007 */   slti       $at, $v0, 0x7
/* E335BC 801A3E8C 5020005B */  beql        $at, $zero, .LE16C50_801A3FFC
/* E335C0 801A3E90 860D0060 */   lh         $t5, 0x60($s0)
/* E335C4 801A3E94 8619008E */  lh          $t9, 0x8E($s0)
/* E335C8 801A3E98 3C042943 */  lui         $a0, (0x29433074 >> 16)
/* E335CC 801A3E9C 34843074 */  ori         $a0, $a0, (0x29433074 & 0xFFFF)
/* E335D0 801A3EA0 13200055 */  beqz        $t9, .LE16C50_801A3FF8
/* E335D4 801A3EA4 260503FC */   addiu      $a1, $s0, 0x3FC
/* E335D8 801A3EA8 3C09800C */  lui         $t1, %hi(D_800C5D34)
/* E335DC 801A3EAC 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E335E0 801A3EB0 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E335E4 801A3EB4 25275D34 */  addiu       $a3, $t1, %lo(D_800C5D34)
/* E335E8 801A3EB8 AFA70010 */  sw          $a3, 0x10($sp)
/* E335EC 801A3EBC AFAA0014 */  sw          $t2, 0x14($sp)
/* E335F0 801A3EC0 0C006486 */  jal         Audio_PlaySfx
/* E335F4 801A3EC4 24060004 */   addiu      $a2, $zero, 0x4
/* E335F8 801A3EC8 860B008E */  lh          $t3, 0x8E($s0)
/* E335FC 801A3ECC 860C0064 */  lh          $t4, 0x64($s0)
/* E33600 801A3ED0 44801000 */  mtc1        $zero, $fv1
/* E33604 801A3ED4 016C6823 */  subu        $t5, $t3, $t4
/* E33608 801A3ED8 A60D008E */  sh          $t5, 0x8E($s0)
/* E3360C 801A3EDC 8602008E */  lh          $v0, 0x8E($s0)
/* E33610 801A3EE0 240C0014 */  addiu       $t4, $zero, 0x14
/* E33614 801A3EE4 04410003 */  bgez        $v0, .LE16C50_801A3EF4
/* E33618 801A3EE8 00000000 */   nop
/* E3361C 801A3EEC A600008E */  sh          $zero, 0x8E($s0)
/* E33620 801A3EF0 8602008E */  lh          $v0, 0x8E($s0)
.LE16C50_801A3EF4:
/* E33624 801A3EF4 54400040 */  bnel        $v0, $zero, .LE16C50_801A3FF8
/* E33628 801A3EF8 A60C009A */   sh         $t4, 0x9A($s0)
/* E3362C 801A3EFC 8E0E0028 */  lw          $t6, 0x28($s0)
/* E33630 801A3F00 24040002 */  addiu       $a0, $zero, 0x2
/* E33634 801A3F04 E5C20094 */  swc1        $fv1, 0x94($t6)
/* E33638 801A3F08 8E020028 */  lw          $v0, 0x28($s0)
/* E3363C 801A3F0C C4400094 */  lwc1        $fv0, 0x94($v0)
/* E33640 801A3F10 E440007C */  swc1        $fv0, 0x7C($v0)
/* E33644 801A3F14 8E0F0028 */  lw          $t7, 0x28($s0)
/* E33648 801A3F18 E5E00064 */  swc1        $fv0, 0x64($t7)
/* E3364C 801A3F1C 8E180028 */  lw          $t8, 0x28($s0)
/* E33650 801A3F20 E7020098 */  swc1        $fv1, 0x98($t8)
/* E33654 801A3F24 8E020028 */  lw          $v0, 0x28($s0)
/* E33658 801A3F28 C4400098 */  lwc1        $fv0, 0x98($v0)
/* E3365C 801A3F2C E4400080 */  swc1        $fv0, 0x80($v0)
/* E33660 801A3F30 8E190028 */  lw          $t9, 0x28($s0)
/* E33664 801A3F34 00041080 */  sll         $v0, $a0, 2
/* E33668 801A3F38 02002025 */  or          $a0, $s0, $zero
/* E3366C 801A3F3C E7200068 */  swc1        $fv0, 0x68($t9)
/* E33670 801A3F40 8E090028 */  lw          $t1, 0x28($s0)
/* E33674 801A3F44 01225021 */  addu        $t2, $t1, $v0
/* E33678 801A3F48 E5420094 */  swc1        $fv1, 0x94($t2)
/* E3367C 801A3F4C 8E0B0028 */  lw          $t3, 0x28($s0)
/* E33680 801A3F50 01621821 */  addu        $v1, $t3, $v0
/* E33684 801A3F54 C4600094 */  lwc1        $fv0, 0x94($v1)
/* E33688 801A3F58 E460007C */  swc1        $fv0, 0x7C($v1)
/* E3368C 801A3F5C 8E0C0028 */  lw          $t4, 0x28($s0)
/* E33690 801A3F60 01826821 */  addu        $t5, $t4, $v0
/* E33694 801A3F64 E5A00064 */  swc1        $fv0, 0x64($t5)
/* E33698 801A3F68 8E0E0028 */  lw          $t6, 0x28($s0)
/* E3369C 801A3F6C 01C27821 */  addu        $t7, $t6, $v0
/* E336A0 801A3F70 E5E20098 */  swc1        $fv1, 0x98($t7)
/* E336A4 801A3F74 8E180028 */  lw          $t8, 0x28($s0)
/* E336A8 801A3F78 03021821 */  addu        $v1, $t8, $v0
/* E336AC 801A3F7C C4600098 */  lwc1        $fv0, 0x98($v1)
/* E336B0 801A3F80 E4600080 */  swc1        $fv0, 0x80($v1)
/* E336B4 801A3F84 8E190028 */  lw          $t9, 0x28($s0)
/* E336B8 801A3F88 03224821 */  addu        $t1, $t9, $v0
/* E336BC 801A3F8C E5200068 */  swc1        $fv0, 0x68($t1)
/* E336C0 801A3F90 8E0A0028 */  lw          $t2, 0x28($s0)
/* E336C4 801A3F94 01425821 */  addu        $t3, $t2, $v0
/* E336C8 801A3F98 E562009C */  swc1        $fv1, 0x9C($t3)
/* E336CC 801A3F9C 8E0C0028 */  lw          $t4, 0x28($s0)
/* E336D0 801A3FA0 240BFFFF */  addiu       $t3, $zero, -0x1
/* E336D4 801A3FA4 01821821 */  addu        $v1, $t4, $v0
/* E336D8 801A3FA8 C460009C */  lwc1        $fv0, 0x9C($v1)
/* E336DC 801A3FAC E4600084 */  swc1        $fv0, 0x84($v1)
/* E336E0 801A3FB0 8E0D0028 */  lw          $t5, 0x28($s0)
/* E336E4 801A3FB4 01A27021 */  addu        $t6, $t5, $v0
/* E336E8 801A3FB8 E5C0006C */  swc1        $fv0, 0x6C($t6)
/* E336EC 801A3FBC 8E0F0028 */  lw          $t7, 0x28($s0)
/* E336F0 801A3FC0 01E2C021 */  addu        $t8, $t7, $v0
/* E336F4 801A3FC4 E70200A0 */  swc1        $fv1, 0xA0($t8)
/* E336F8 801A3FC8 8E190028 */  lw          $t9, 0x28($s0)
/* E336FC 801A3FCC 03221821 */  addu        $v1, $t9, $v0
/* E33700 801A3FD0 C46000A0 */  lwc1        $fv0, 0xA0($v1)
/* E33704 801A3FD4 E4600088 */  swc1        $fv0, 0x88($v1)
/* E33708 801A3FD8 8E090028 */  lw          $t1, 0x28($s0)
/* E3370C 801A3FDC 01225021 */  addu        $t2, $t1, $v0
/* E33710 801A3FE0 E5400070 */  swc1        $fv0, 0x70($t2)
/* E33714 801A3FE4 0C06922E */  jal         func_E16C50_801A48B8
/* E33718 801A3FE8 A60B008E */   sh         $t3, 0x8E($s0)
/* E3371C 801A3FEC 10000003 */  b           .LE16C50_801A3FFC
/* E33720 801A3FF0 860D0060 */   lh         $t5, 0x60($s0)
/* E33724 801A3FF4 A60C009A */  sh          $t4, 0x9A($s0)
.LE16C50_801A3FF8:
/* E33728 801A3FF8 860D0060 */  lh          $t5, 0x60($s0)
.LE16C50_801A3FFC:
/* E3372C 801A3FFC 3C058018 */  lui         $a1, %hi(D_80178340)
/* E33730 801A4000 24A58340 */  addiu       $a1, $a1, %lo(D_80178340)
/* E33734 801A4004 1DA0007E */  bgtz        $t5, .LE16C50_801A4200
/* E33738 801A4008 240600FF */   addiu      $a2, $zero, 0xFF
/* E3373C 801A400C 240E0015 */  addiu       $t6, $zero, 0x15
/* E33740 801A4010 240F0001 */  addiu       $t7, $zero, 0x1
/* E33744 801A4014 3C02800D */  lui         $v0, %hi(D_800CBF34)
/* E33748 801A4018 A60E004C */  sh          $t6, 0x4C($s0)
/* E3374C 801A401C A600004E */  sh          $zero, 0x4E($s0)
/* E33750 801A4020 A60F008A */  sh          $t7, 0x8A($s0)
/* E33754 801A4024 3C01801C */  lui         $at, %hi(D_E16C50_801C1714)
/* E33758 801A4028 2442BF34 */  addiu       $v0, $v0, %lo(D_800CBF34)
/* E3375C 801A402C C4281714 */  lwc1        $ft2, %lo(D_E16C50_801C1714)($at)
/* E33760 801A4030 0002C100 */  sll         $t8, $v0, 4
/* E33764 801A4034 0018CF02 */  srl         $t9, $t8, 28
/* E33768 801A4038 00194880 */  sll         $t1, $t9, 2
/* E3376C 801A403C 3C0A800E */  lui         $t2, %hi(gSegments)
/* E33770 801A4040 01495021 */  addu        $t2, $t2, $t1
/* E33774 801A4044 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* E33778 801A4048 E60800D8 */  swc1        $ft2, 0xD8($s0)
/* E3377C 801A404C 8D4A1FD0 */  lw          $t2, %lo(gSegments)($t2)
/* E33780 801A4050 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* E33784 801A4054 00415824 */  and         $t3, $v0, $at
/* E33788 801A4058 3C018000 */  lui         $at, (0x80000000 >> 16)
/* E3378C 801A405C 014B6021 */  addu        $t4, $t2, $t3
/* E33790 801A4060 01816821 */  addu        $t5, $t4, $at
/* E33794 801A4064 240E4E20 */  addiu       $t6, $zero, 0x4E20
/* E33798 801A4068 AE0D0028 */  sw          $t5, 0x28($s0)
/* E3379C 801A406C A60E0058 */  sh          $t6, 0x58($s0)
/* E337A0 801A4070 3C018017 */  lui         $at, %hi(D_8017796C)
/* E337A4 801A4074 240FFFFF */  addiu       $t7, $zero, -0x1
/* E337A8 801A4078 AC2F796C */  sw          $t7, %lo(D_8017796C)($at)
/* E337AC 801A407C 3C078018 */  lui         $a3, %hi(D_80178354)
/* E337B0 801A4080 3C088018 */  lui         $t0, %hi(D_80178350)
/* E337B4 801A4084 25088350 */  addiu       $t0, $t0, %lo(D_80178350)
/* E337B8 801A4088 24E78354 */  addiu       $a3, $a3, %lo(D_80178354)
/* E337BC 801A408C ACE60000 */  sw          $a2, 0x0($a3)
/* E337C0 801A4090 AD060000 */  sw          $a2, 0x0($t0)
/* E337C4 801A4094 ACA60000 */  sw          $a2, 0x0($a1)
/* E337C8 801A4098 3C018018 */  lui         $at, %hi(D_80178348)
/* E337CC 801A409C AC268348 */  sw          $a2, %lo(D_80178348)($at)
/* E337D0 801A40A0 3C018018 */  lui         $at, %hi(D_80178358)
/* E337D4 801A40A4 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* E337D8 801A40A8 3C018018 */  lui         $at, %hi(D_8017835C)
/* E337DC 801A40AC AC26835C */  sw          $a2, %lo(D_8017835C)($at)
/* E337E0 801A40B0 3C038017 */  lui         $v1, %hi(gMainController)
/* E337E4 801A40B4 8C637AF8 */  lw          $v1, %lo(gMainController)($v1)
/* E337E8 801A40B8 3C018017 */  lui         $at, %hi(D_80177A80)
/* E337EC 801A40BC AC207A80 */  sw          $zero, %lo(D_80177A80)($at)
/* E337F0 801A40C0 3C018013 */  lui         $at, %hi(D_80137E84)
/* E337F4 801A40C4 240A0001 */  addiu       $t2, $zero, 0x1
/* E337F8 801A40C8 00230821 */  addu        $at, $at, $v1
/* E337FC 801A40CC A02A7E84 */  sb          $t2, %lo(D_80137E84)($at)
/* E33800 801A40D0 3C018017 */  lui         $at, %hi(D_Timer_80177BD0)
/* E33804 801A40D4 00036040 */  sll         $t4, $v1, 1
/* E33808 801A40D8 002C0821 */  addu        $at, $at, $t4
/* E3380C 801A40DC 240B000A */  addiu       $t3, $zero, 0xA
/* E33810 801A40E0 260D03FC */  addiu       $t5, $s0, 0x3FC
/* E33814 801A40E4 3C041001 */  lui         $a0, (0x100100FF >> 16)
/* E33818 801A40E8 A42B7BD0 */  sh          $t3, %lo(D_Timer_80177BD0)($at)
/* E3381C 801A40EC 348400FF */  ori         $a0, $a0, (0x100100FF & 0xFFFF)
/* E33820 801A40F0 0C0060BD */  jal         func_800182F4
/* E33824 801A40F4 AFAD002C */   sw         $t5, 0x2C($sp)
/* E33828 801A40F8 3C041101 */  lui         $a0, (0x110100FF >> 16)
/* E3382C 801A40FC 0C0060BD */  jal         func_800182F4
/* E33830 801A4100 348400FF */   ori        $a0, $a0, (0x110100FF & 0xFFFF)
/* E33834 801A4104 3C044100 */  lui         $a0, (0x4100C023 >> 16)
/* E33838 801A4108 0C006A0E */  jal         func_8001A838
/* E3383C 801A410C 3484C023 */   ori        $a0, $a0, (0x4100C023 & 0xFFFF)
/* E33840 801A4110 3C0E800C */  lui         $t6, %hi(D_800C5D34)
/* E33844 801A4114 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E33848 801A4118 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E3384C 801A411C 25C75D34 */  addiu       $a3, $t6, %lo(D_800C5D34)
/* E33850 801A4120 3C042940 */  lui         $a0, (0x2940D09A >> 16)
/* E33854 801A4124 3484D09A */  ori         $a0, $a0, (0x2940D09A & 0xFFFF)
/* E33858 801A4128 AFA70010 */  sw          $a3, 0x10($sp)
/* E3385C 801A412C AFAF0014 */  sw          $t7, 0x14($sp)
/* E33860 801A4130 8FA5002C */  lw          $a1, 0x2C($sp)
/* E33864 801A4134 0C006486 */  jal         Audio_PlaySfx
/* E33868 801A4138 24060004 */   addiu      $a2, $zero, 0x4
/* E3386C 801A413C 3C038018 */  lui         $v1, %hi(gPlayer)
/* E33870 801A4140 24638280 */  addiu       $v1, $v1, %lo(gPlayer)
/* E33874 801A4144 8C620000 */  lw          $v0, 0x0($v1)
/* E33878 801A4148 44801000 */  mtc1        $zero, $fv1
/* E3387C 801A414C 24010003 */  addiu       $at, $zero, 0x3
/* E33880 801A4150 8C5801C8 */  lw          $t8, 0x1C8($v0)
/* E33884 801A4154 3C048018 */  lui         $a0, %hi(gMsg_ID_15252)
/* E33888 801A4158 24840FFC */  addiu       $a0, $a0, %lo(gMsg_ID_15252)
/* E3388C 801A415C 17010023 */  bne         $t8, $at, .LE16C50_801A41EC
/* E33890 801A4160 24050014 */   addiu      $a1, $zero, 0x14
/* E33894 801A4164 24190007 */  addiu       $t9, $zero, 0x7
/* E33898 801A4168 AC5901C8 */  sw          $t9, 0x1C8($v0)
/* E3389C 801A416C 8C690000 */  lw          $t1, 0x0($v1)
/* E338A0 801A4170 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E338A4 801A4174 44816000 */  mtc1        $at, $fa0
/* E338A8 801A4178 AD2001F8 */  sw          $zero, 0x1F8($t1)
/* E338AC 801A417C 8C620000 */  lw          $v0, 0x0($v1)
/* E338B0 801A4180 8C4A01F8 */  lw          $t2, 0x1F8($v0)
/* E338B4 801A4184 AC4A01D0 */  sw          $t2, 0x1D0($v0)
/* E338B8 801A4188 8C620000 */  lw          $v0, 0x0($v1)
/* E338BC 801A418C C44A00E8 */  lwc1        $ft3, 0xE8($v0)
/* E338C0 801A4190 C4500114 */  lwc1        $ft4, 0x114($v0)
/* E338C4 801A4194 46105480 */  add.s       $ft5, $ft3, $ft4
/* E338C8 801A4198 E45200E8 */  swc1        $ft5, 0xE8($v0)
/* E338CC 801A419C 8C620000 */  lw          $v0, 0x0($v1)
/* E338D0 801A41A0 C44000E8 */  lwc1        $fv0, 0xE8($v0)
/* E338D4 801A41A4 4600603C */  c.lt.s      $fa0, $fv0
/* E338D8 801A41A8 00000000 */  nop
/* E338DC 801A41AC 45020007 */  bc1fl       .LE16C50_801A41CC
/* E338E0 801A41B0 4602003C */   c.lt.s     $fv0, $fv1
/* E338E4 801A41B4 460C0101 */  sub.s       $ft0, $fv0, $fa0
/* E338E8 801A41B8 E44400E8 */  swc1        $ft0, 0xE8($v0)
/* E338EC 801A41BC 3C028018 */  lui         $v0, %hi(gPlayer)
/* E338F0 801A41C0 8C428280 */  lw          $v0, %lo(gPlayer)($v0)
/* E338F4 801A41C4 C44000E8 */  lwc1        $fv0, 0xE8($v0)
/* E338F8 801A41C8 4602003C */  c.lt.s      $fv0, $fv1
.LE16C50_801A41CC:
/* E338FC 801A41CC 00000000 */  nop
/* E33900 801A41D0 45020006 */  bc1fl       .LE16C50_801A41EC
/* E33904 801A41D4 E4420114 */   swc1       $fv1, 0x114($v0)
/* E33908 801A41D8 460C0180 */  add.s       $ft1, $fv0, $fa0
/* E3390C 801A41DC E44600E8 */  swc1        $ft1, 0xE8($v0)
/* E33910 801A41E0 3C028018 */  lui         $v0, %hi(gPlayer)
/* E33914 801A41E4 8C428280 */  lw          $v0, %lo(gPlayer)($v0)
/* E33918 801A41E8 E4420114 */  swc1        $fv1, 0x114($v0)
.LE16C50_801A41EC:
/* E3391C 801A41EC 3C014516 */  lui         $at, (0x45160000 >> 16)
/* E33920 801A41F0 44814000 */  mtc1        $at, $ft2
/* E33924 801A41F4 E6020154 */  swc1        $fv1, 0x154($s0)
/* E33928 801A41F8 0C02EA02 */  jal         func_800BA808
/* E3392C 801A41FC E60800E4 */   swc1       $ft2, 0xE4($s0)
.LE16C50_801A4200:
/* E33930 801A4200 8FBF0024 */  lw          $ra, 0x24($sp)
/* E33934 801A4204 8FB00020 */  lw          $s0, 0x20($sp)
/* E33938 801A4208 27BD0038 */  addiu       $sp, $sp, 0x38
/* E3393C 801A420C 03E00008 */  jr          $ra
/* E33940 801A4210 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C1718
/* E50E48 801C1718 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C171C
/* E50E4C 801C171C 3DCCCCCD */ .float 0.1000000015
/* E50E50 801C1720 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1724
/* E50E54 801C1724 3D4CCCCD */ .float 0.05000000075

dlabel D_E16C50_801C1728
/* E50E58 801C1728 3C8EFA35 */ .float 0.01745329238
/* E50E5C 801C172C 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1730
/* E50E60 801C1730 3C8EFA35 */ .float 0.01745329238
/* E50E64 801C1734 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1738
/* E50E68 801C1738 44898000 */ .float 1100

dlabel D_E16C50_801C173C
/* E50E6C 801C173C 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1740
/* E50E70 801C1740 3DCCCCCD */ .float 0.1000000015

dlabel jtbl_E16C50_801C1744
/* E50E74 801C1744 801A43B4 */ .word .LE16C50_801A43B4
/* E50E78 801C1748 801A4420 */ .word .LE16C50_801A4420
/* E50E7C 801C174C 801A457C */ .word .LE16C50_801A457C
/* E50E80 801C1750 801A45E8 */ .word .LE16C50_801A45E8
/* E50E84 801C1754 801A4870 */ .word .LE16C50_801A4870

dlabel D_E16C50_801C1758
/* E50E88 801C1758 3D4CCCCD */ .float 0.05000000075
/* E50E8C 801C175C 3DCCCCCD */ .float 0.1000000015
/* E50E90 801C1760 3DCCCCCD */ .float 0.1000000015
/* E50E94 801C1764 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1768
/* E50E98 801C1768 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C176C
/* E50E9C 801C176C 3E4CCCCD */ .float 0.200000003


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A4214
/* E33944 801A4214 27BDFFA0 */  addiu       $sp, $sp, -0x60
/* E33948 801A4218 AFB00030 */  sw          $s0, 0x30($sp)
/* E3394C 801A421C 00808025 */  or          $s0, $a0, $zero
/* E33950 801A4220 AFBF0034 */  sw          $ra, 0x34($sp)
/* E33954 801A4224 860E0060 */  lh          $t6, 0x60($s0)
/* E33958 801A4228 3C01801C */  lui         $at, %hi(D_E16C50_801C1718)
/* E3395C 801A422C 26040014 */  addiu       $a0, $s0, 0x14
/* E33960 801A4230 5DC0019D */  bgtzl       $t6, .LE16C50_801A48A8
/* E33964 801A4234 8FBF0034 */   lw         $ra, 0x34($sp)
/* E33968 801A4238 44800000 */  mtc1        $zero, $fv0
/* E3396C 801A423C C4221718 */  lwc1        $fv1, %lo(D_E16C50_801C1718)($at)
/* E33970 801A4240 3C074040 */  lui         $a3, (0x40400000 >> 16)
/* E33974 801A4244 44050000 */  mfc1        $a1, $fv0
/* E33978 801A4248 44061000 */  mfc1        $a2, $fv1
/* E3397C 801A424C 0C026F4E */  jal         Math_SmoothStepToAngle
/* E33980 801A4250 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E33984 801A4254 3C01801C */  lui         $at, %hi(D_E16C50_801C171C)
/* E33988 801A4258 C422171C */  lwc1        $fv1, %lo(D_E16C50_801C171C)($at)
/* E3398C 801A425C 44806000 */  mtc1        $zero, $fa0
/* E33990 801A4260 26040010 */  addiu       $a0, $s0, 0x10
/* E33994 801A4264 44061000 */  mfc1        $a2, $fv1
/* E33998 801A4268 44056000 */  mfc1        $a1, $fa0
/* E3399C 801A426C 3C074040 */  lui         $a3, (0x40400000 >> 16)
/* E339A0 801A4270 0C026F4E */  jal         Math_SmoothStepToAngle
/* E339A4 801A4274 E7AC0010 */   swc1       $fa0, 0x10($sp)
/* E339A8 801A4278 860F004C */  lh          $t7, 0x4C($s0)
/* E339AC 801A427C 24010034 */  addiu       $at, $zero, 0x34
/* E339B0 801A4280 15E1000A */  bne         $t7, $at, .LE16C50_801A42AC
/* E339B4 801A4284 00000000 */   nop
/* E339B8 801A4288 8618008A */  lh          $t8, 0x8A($s0)
/* E339BC 801A428C 24010005 */  addiu       $at, $zero, 0x5
/* E339C0 801A4290 24190026 */  addiu       $t9, $zero, 0x26
/* E339C4 801A4294 17010005 */  bne         $t8, $at, .LE16C50_801A42AC
/* E339C8 801A4298 00000000 */   nop
/* E339CC 801A429C A619004C */  sh          $t9, 0x4C($s0)
/* E339D0 801A42A0 3C01801C */  lui         $at, %hi(D_E16C50_801C1724)
/* E339D4 801A42A4 C4241724 */  lwc1        $ft0, %lo(D_E16C50_801C1724)($at)
/* E339D8 801A42A8 E60400D8 */  swc1        $ft0, 0xD8($s0)
.LE16C50_801A42AC:
/* E339DC 801A42AC 3C01801C */  lui         $at, %hi(D_E16C50_801C1728)
/* E339E0 801A42B0 C4281728 */  lwc1        $ft2, %lo(D_E16C50_801C1728)($at)
/* E339E4 801A42B4 C60600DC */  lwc1        $ft1, 0xDC($s0)
/* E339E8 801A42B8 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E339EC 801A42BC 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E339F0 801A42C0 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E339F4 801A42C4 00003025 */  or          $a2, $zero, $zero
/* E339F8 801A42C8 44055000 */  mfc1        $a1, $ft3
/* E339FC 801A42CC 0C001751 */  jal         Matrix_RotateX
/* E33A00 801A42D0 00000000 */   nop
/* E33A04 801A42D4 C61000E0 */  lwc1        $ft4, 0xE0($s0)
/* E33A08 801A42D8 3C01801C */  lui         $at, %hi(D_E16C50_801C1730)
/* E33A0C 801A42DC C4241730 */  lwc1        $ft0, %lo(D_E16C50_801C1730)($at)
/* E33A10 801A42E0 46008487 */  neg.s       $ft5, $ft4
/* E33A14 801A42E4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E33A18 801A42E8 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E33A1C 801A42EC 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E33A20 801A42F0 24060001 */  addiu       $a2, $zero, 0x1
/* E33A24 801A42F4 44053000 */  mfc1        $a1, $ft1
/* E33A28 801A42F8 0C0017A4 */  jal         Matrix_RotateY
/* E33A2C 801A42FC 00000000 */   nop
/* E33A30 801A4300 3C014348 */  lui         $at, (0x43480000 >> 16)
/* E33A34 801A4304 44815000 */  mtc1        $at, $ft3
/* E33A38 801A4308 3C01801C */  lui         $at, %hi(D_E16C50_801C1738)
/* E33A3C 801A430C 44804000 */  mtc1        $zero, $ft2
/* E33A40 801A4310 C4301738 */  lwc1        $ft4, %lo(D_E16C50_801C1738)($at)
/* E33A44 801A4314 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E33A48 801A4318 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E33A4C 801A431C 27A50050 */  addiu       $a1, $sp, 0x50
/* E33A50 801A4320 27A60044 */  addiu       $a2, $sp, 0x44
/* E33A54 801A4324 E7AA0054 */  swc1        $ft3, 0x54($sp)
/* E33A58 801A4328 E7A80050 */  swc1        $ft2, 0x50($sp)
/* E33A5C 801A432C 0C001A5C */  jal         Matrix_MultVec3f
/* E33A60 801A4330 E7B00058 */   swc1       $ft4, 0x58($sp)
/* E33A64 801A4334 8602004E */  lh          $v0, 0x4E($s0)
/* E33A68 801A4338 3C01801C */  lui         $at, %hi(D_E16C50_801C173C)
/* E33A6C 801A433C C422173C */  lwc1        $fv1, %lo(D_E16C50_801C173C)($at)
/* E33A70 801A4340 28410002 */  slti        $at, $v0, 0x2
/* E33A74 801A4344 14200011 */  bnez        $at, .LE16C50_801A438C
/* E33A78 801A4348 3C088017 */   lui        $t0, %hi(gMainController)
/* E33A7C 801A434C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E33A80 801A4350 44816000 */  mtc1        $at, $fa0
/* E33A84 801A4354 8D087AF8 */  lw          $t0, %lo(gMainController)($t0)
/* E33A88 801A4358 44809000 */  mtc1        $zero, $ft5
/* E33A8C 801A435C 3C0A8017 */  lui         $t2, %hi(D_801779A8)
/* E33A90 801A4360 254A79A8 */  addiu       $t2, $t2, %lo(D_801779A8)
/* E33A94 801A4364 00084880 */  sll         $t1, $t0, 2
/* E33A98 801A4368 44066000 */  mfc1        $a2, $fa0
/* E33A9C 801A436C 012A2021 */  addu        $a0, $t1, $t2
/* E33AA0 801A4370 3C0541F0 */  lui         $a1, (0x41F00000 >> 16)
/* E33AA4 801A4374 3C074020 */  lui         $a3, (0x40200000 >> 16)
/* E33AA8 801A4378 0C026F0B */  jal         Math_SmoothStepToF
/* E33AAC 801A437C E7B20010 */   swc1       $ft5, 0x10($sp)
/* E33AB0 801A4380 3C01801C */  lui         $at, %hi(D_E16C50_801C1740)
/* E33AB4 801A4384 C4221740 */  lwc1        $fv1, %lo(D_E16C50_801C1740)($at)
/* E33AB8 801A4388 8602004E */  lh          $v0, 0x4E($s0)
.LE16C50_801A438C:
/* E33ABC 801A438C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E33AC0 801A4390 44816000 */  mtc1        $at, $fa0
/* E33AC4 801A4394 2C410005 */  sltiu       $at, $v0, 0x5
/* E33AC8 801A4398 10200142 */  beqz        $at, .LE16C50_801A48A4
/* E33ACC 801A439C 00025880 */   sll        $t3, $v0, 2
/* E33AD0 801A43A0 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C1744)
/* E33AD4 801A43A4 002B0821 */  addu        $at, $at, $t3
/* E33AD8 801A43A8 8C2B1744 */  lw          $t3, %lo(jtbl_E16C50_801C1744)($at)
/* E33ADC 801A43AC 01600008 */  jr          $t3
/* E33AE0 801A43B0 00000000 */   nop
.LE16C50_801A43B4:
/* E33AE4 801A43B4 3C03801C */  lui         $v1, %hi(D_E16C50_801C2740)
/* E33AE8 801A43B8 24632740 */  addiu       $v1, $v1, %lo(D_E16C50_801C2740)
/* E33AEC 801A43BC 8C620000 */  lw          $v0, 0x0($v1)
/* E33AF0 801A43C0 44061000 */  mfc1        $a2, $fv1
/* E33AF4 801A43C4 26040008 */  addiu       $a0, $s0, 0x8
/* E33AF8 801A43C8 28410021 */  slti        $at, $v0, 0x21
/* E33AFC 801A43CC 14200003 */  bnez        $at, .LE16C50_801A43DC
/* E33B00 801A43D0 3C054334 */   lui        $a1, (0x43340000 >> 16)
/* E33B04 801A43D4 244CFFFD */  addiu       $t4, $v0, -0x3
/* E33B08 801A43D8 AC6C0000 */  sw          $t4, 0x0($v1)
.LE16C50_801A43DC:
/* E33B0C 801A43DC 860D0058 */  lh          $t5, 0x58($s0)
/* E33B10 801A43E0 24014DC6 */  addiu       $at, $zero, 0x4DC6
/* E33B14 801A43E4 24180005 */  addiu       $t8, $zero, 0x5
/* E33B18 801A43E8 15A10009 */  bne         $t5, $at, .LE16C50_801A4410
/* E33B1C 801A43EC 3C074120 */   lui        $a3, (0x41200000 >> 16)
/* E33B20 801A43F0 860E004E */  lh          $t6, 0x4E($s0)
/* E33B24 801A43F4 A618008A */  sh          $t8, 0x8A($s0)
/* E33B28 801A43F8 A600004C */  sh          $zero, 0x4C($s0)
/* E33B2C 801A43FC 25CF0001 */  addiu       $t7, $t6, 0x1
/* E33B30 801A4400 A60F004E */  sh          $t7, 0x4E($s0)
/* E33B34 801A4404 3C01801C */  lui         $at, %hi(D_E16C50_801C1758)
/* E33B38 801A4408 C4241758 */  lwc1        $ft0, %lo(D_E16C50_801C1758)($at)
/* E33B3C 801A440C E60400D8 */  swc1        $ft0, 0xD8($s0)
.LE16C50_801A4410:
/* E33B40 801A4410 0C026F0B */  jal         Math_SmoothStepToF
/* E33B44 801A4414 E7A20010 */   swc1       $fv1, 0x10($sp)
/* E33B48 801A4418 10000123 */  b           .LE16C50_801A48A8
/* E33B4C 801A441C 8FBF0034 */   lw         $ra, 0x34($sp)
.LE16C50_801A4420:
/* E33B50 801A4420 8619004C */  lh          $t9, 0x4C($s0)
/* E33B54 801A4424 24010033 */  addiu       $at, $zero, 0x33
/* E33B58 801A4428 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E33B5C 801A442C 1721011D */  bne         $t9, $at, .LE16C50_801A48A4
/* E33B60 801A4430 24E75D34 */   addiu      $a3, $a3, %lo(D_800C5D34)
/* E33B64 801A4434 24080032 */  addiu       $t0, $zero, 0x32
/* E33B68 801A4438 24490001 */  addiu       $t1, $v0, 0x1
/* E33B6C 801A443C A608004C */  sh          $t0, 0x4C($s0)
/* E33B70 801A4440 A609004E */  sh          $t1, 0x4E($s0)
/* E33B74 801A4444 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E33B78 801A4448 3C018016 */  lui         $at, %hi(D_80161734)
/* E33B7C 801A444C 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E33B80 801A4450 3C043943 */  lui         $a0, (0x39439076 >> 16)
/* E33B84 801A4454 AC201734 */  sw          $zero, %lo(D_80161734)($at)
/* E33B88 801A4458 34849076 */  ori         $a0, $a0, (0x39439076 & 0xFFFF)
/* E33B8C 801A445C AFAA0014 */  sw          $t2, 0x14($sp)
/* E33B90 801A4460 AFA70010 */  sw          $a3, 0x10($sp)
/* E33B94 801A4464 260503FC */  addiu       $a1, $s0, 0x3FC
/* E33B98 801A4468 0C006486 */  jal         Audio_PlaySfx
/* E33B9C 801A446C 24060004 */   addiu      $a2, $zero, 0x4
/* E33BA0 801A4470 0C0013AC */  jal         Rand_ZeroOne
/* E33BA4 801A4474 00000000 */   nop
/* E33BA8 801A4478 3C014396 */  lui         $at, (0x43960000 >> 16)
/* E33BAC 801A447C 44814000 */  mtc1        $at, $ft2
/* E33BB0 801A4480 3C014292 */  lui         $at, (0x42920000 >> 16)
/* E33BB4 801A4484 44818000 */  mtc1        $at, $ft4
/* E33BB8 801A4488 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E33BBC 801A448C 44819000 */  mtc1        $at, $ft5
/* E33BC0 801A4490 C60600EC */  lwc1        $ft1, 0xEC($s0)
/* E33BC4 801A4494 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E33BC8 801A4498 46120101 */  sub.s       $ft0, $fv0, $ft5
/* E33BCC 801A449C C60A00E0 */  lwc1        $ft3, 0xE0($s0)
/* E33BD0 801A44A0 C60C00E8 */  lwc1        $fa0, 0xE8($s0)
/* E33BD4 801A44A4 46083380 */  add.s       $fa1, $ft1, $ft2
/* E33BD8 801A44A8 44813000 */  mtc1        $at, $ft1
/* E33BDC 801A44AC 8E0600F0 */  lw          $a2, 0xF0($s0)
/* E33BE0 801A44B0 8E0700DC */  lw          $a3, 0xDC($s0)
/* E33BE4 801A44B4 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E33BE8 801A44B8 3C0142A0 */  lui         $at, (0x42A00000 >> 16)
/* E33BEC 801A44BC E7AA0010 */  swc1        $ft3, 0x10($sp)
/* E33BF0 801A44C0 44815000 */  mtc1        $at, $ft3
/* E33BF4 801A44C4 3C014220 */  lui         $at, (0x42200000 >> 16)
/* E33BF8 801A44C8 E7B00014 */  swc1        $ft4, 0x14($sp)
/* E33BFC 801A44CC 44818000 */  mtc1        $at, $ft4
/* E33C00 801A44D0 240B0008 */  addiu       $t3, $zero, 0x8
/* E33C04 801A44D4 AFAB0024 */  sw          $t3, 0x24($sp)
/* E33C08 801A44D8 E7A80018 */  swc1        $ft2, 0x18($sp)
/* E33C0C 801A44DC E7AA001C */  swc1        $ft3, 0x1C($sp)
/* E33C10 801A44E0 0C068785 */  jal         func_E16C50_801A1E14
/* E33C14 801A44E4 E7B00020 */   swc1       $ft4, 0x20($sp)
/* E33C18 801A44E8 3C0140C0 */  lui         $at, (0x40C00000 >> 16)
/* E33C1C 801A44EC 44819000 */  mtc1        $at, $ft5
/* E33C20 801A44F0 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E33C24 801A44F4 44812000 */  mtc1        $at, $ft0
/* E33C28 801A44F8 3C03801C */  lui         $v1, %hi(D_E16C50_801C2768)
/* E33C2C 801A44FC 24632768 */  addiu       $v1, $v1, %lo(D_E16C50_801C2768)
/* E33C30 801A4500 240200FF */  addiu       $v0, $zero, 0xFF
/* E33C34 801A4504 3C018018 */  lui         $at, %hi(D_80178340)
/* E33C38 801A4508 E472000C */  swc1        $ft5, 0xC($v1)
/* E33C3C 801A450C E4640008 */  swc1        $ft0, 0x8($v1)
/* E33C40 801A4510 AC228340 */  sw          $v0, %lo(D_80178340)($at)
/* E33C44 801A4514 3C018018 */  lui         $at, %hi(D_80178348)
/* E33C48 801A4518 AC228348 */  sw          $v0, %lo(D_80178348)($at)
/* E33C4C 801A451C 3C018018 */  lui         $at, %hi(D_80178350)
/* E33C50 801A4520 AC228350 */  sw          $v0, %lo(D_80178350)($at)
/* E33C54 801A4524 3C018018 */  lui         $at, %hi(D_80178354)
/* E33C58 801A4528 AC228354 */  sw          $v0, %lo(D_80178354)($at)
/* E33C5C 801A452C 3C018018 */  lui         $at, %hi(D_80178358)
/* E33C60 801A4530 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* E33C64 801A4534 3C018018 */  lui         $at, %hi(D_8017835C)
/* E33C68 801A4538 240C0004 */  addiu       $t4, $zero, 0x4
/* E33C6C 801A453C AC2C835C */  sw          $t4, %lo(D_8017835C)($at)
/* E33C70 801A4540 0C010BB0 */  jal         func_80042EC0
/* E33C74 801A4544 02002025 */   or         $a0, $s0, $zero
/* E33C78 801A4548 860D0090 */  lh          $t5, 0x90($s0)
/* E33C7C 801A454C 3C01801C */  lui         $at, %hi(D_E16C50_801C1768)
/* E33C80 801A4550 C4221768 */  lwc1        $fv1, %lo(D_E16C50_801C1768)($at)
/* E33C84 801A4554 25AE0001 */  addiu       $t6, $t5, 0x1
/* E33C88 801A4558 A60E0090 */  sh          $t6, 0x90($s0)
/* E33C8C 801A455C 44061000 */  mfc1        $a2, $fv1
/* E33C90 801A4560 26040008 */  addiu       $a0, $s0, 0x8
/* E33C94 801A4564 3C054334 */  lui         $a1, (0x43340000 >> 16)
/* E33C98 801A4568 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E33C9C 801A456C 0C026F0B */  jal         Math_SmoothStepToF
/* E33CA0 801A4570 E7A20010 */   swc1       $fv1, 0x10($sp)
/* E33CA4 801A4574 100000CC */  b           .LE16C50_801A48A8
/* E33CA8 801A4578 8FBF0034 */   lw         $ra, 0x34($sp)
.LE16C50_801A457C:
/* E33CAC 801A457C 3C03801C */  lui         $v1, %hi(D_E16C50_801C2740)
/* E33CB0 801A4580 24632740 */  addiu       $v1, $v1, %lo(D_E16C50_801C2740)
/* E33CB4 801A4584 8C620000 */  lw          $v0, 0x0($v1)
/* E33CB8 801A4588 26040008 */  addiu       $a0, $s0, 0x8
/* E33CBC 801A458C 3C054334 */  lui         $a1, (0x43340000 >> 16)
/* E33CC0 801A4590 28410021 */  slti        $at, $v0, 0x21
/* E33CC4 801A4594 14200002 */  bnez        $at, .LE16C50_801A45A0
/* E33CC8 801A4598 244FFFFD */   addiu      $t7, $v0, -0x3
/* E33CCC 801A459C AC6F0000 */  sw          $t7, 0x0($v1)
.LE16C50_801A45A0:
/* E33CD0 801A45A0 8C780004 */  lw          $t8, 0x4($v1)
/* E33CD4 801A45A4 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E33CD8 801A45A8 2B010021 */  slti        $at, $t8, 0x21
/* E33CDC 801A45AC 5420000B */  bnel        $at, $zero, .LE16C50_801A45DC
/* E33CE0 801A45B0 8609004E */   lh         $t1, 0x4E($s0)
/* E33CE4 801A45B4 44061000 */  mfc1        $a2, $fv1
/* E33CE8 801A45B8 0C026F0B */  jal         Math_SmoothStepToF
/* E33CEC 801A45BC E7A20010 */   swc1       $fv1, 0x10($sp)
/* E33CF0 801A45C0 3C03801C */  lui         $v1, %hi(D_E16C50_801C2740)
/* E33CF4 801A45C4 24632740 */  addiu       $v1, $v1, %lo(D_E16C50_801C2740)
/* E33CF8 801A45C8 8C790004 */  lw          $t9, 0x4($v1)
/* E33CFC 801A45CC 2728FFFC */  addiu       $t0, $t9, -0x4
/* E33D00 801A45D0 100000B4 */  b           .LE16C50_801A48A4
/* E33D04 801A45D4 AC680004 */   sw         $t0, 0x4($v1)
/* E33D08 801A45D8 8609004E */  lh          $t1, 0x4E($s0)
.LE16C50_801A45DC:
/* E33D0C 801A45DC 252A0001 */  addiu       $t2, $t1, 0x1
/* E33D10 801A45E0 100000B0 */  b           .LE16C50_801A48A4
/* E33D14 801A45E4 A60A004E */   sh         $t2, 0x4E($s0)
.LE16C50_801A45E8:
/* E33D18 801A45E8 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E33D1C 801A45EC 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
/* E33D20 801A45F0 284100CD */  slti        $at, $v0, 0xCD
/* E33D24 801A45F4 14200009 */  bnez        $at, .LE16C50_801A461C
/* E33D28 801A45F8 3C03801C */   lui        $v1, %hi(D_E16C50_801C2768)
/* E33D2C 801A45FC 24632768 */  addiu       $v1, $v1, %lo(D_E16C50_801C2768)
/* E33D30 801A4600 C4600014 */  lwc1        $fv0, 0x14($v1)
/* E33D34 801A4604 460C003C */  c.lt.s      $fv0, $fa0
/* E33D38 801A4608 00000000 */  nop
/* E33D3C 801A460C 45000003 */  bc1f        .LE16C50_801A461C
/* E33D40 801A4610 00000000 */   nop
/* E33D44 801A4614 46020180 */  add.s       $ft1, $fv0, $fv1
/* E33D48 801A4618 E4660014 */  swc1        $ft1, 0x14($v1)
.LE16C50_801A461C:
/* E33D4C 801A461C 3C03801C */  lui         $v1, %hi(D_E16C50_801C2768)
/* E33D50 801A4620 284100CF */  slti        $at, $v0, 0xCF
/* E33D54 801A4624 14200008 */  bnez        $at, .LE16C50_801A4648
/* E33D58 801A4628 24632768 */   addiu      $v1, $v1, %lo(D_E16C50_801C2768)
/* E33D5C 801A462C C4600024 */  lwc1        $fv0, 0x24($v1)
/* E33D60 801A4630 460C003C */  c.lt.s      $fv0, $fa0
/* E33D64 801A4634 00000000 */  nop
/* E33D68 801A4638 45020004 */  bc1fl       .LE16C50_801A464C
/* E33D6C 801A463C 284100D1 */   slti       $at, $v0, 0xD1
/* E33D70 801A4640 46020200 */  add.s       $ft2, $fv0, $fv1
/* E33D74 801A4644 E4680024 */  swc1        $ft2, 0x24($v1)
.LE16C50_801A4648:
/* E33D78 801A4648 284100D1 */  slti        $at, $v0, 0xD1
.LE16C50_801A464C:
/* E33D7C 801A464C 54200009 */  bnel        $at, $zero, .LE16C50_801A4674
/* E33D80 801A4650 284100D3 */   slti       $at, $v0, 0xD3
/* E33D84 801A4654 C4600028 */  lwc1        $fv0, 0x28($v1)
/* E33D88 801A4658 460C003C */  c.lt.s      $fv0, $fa0
/* E33D8C 801A465C 00000000 */  nop
/* E33D90 801A4660 45020004 */  bc1fl       .LE16C50_801A4674
/* E33D94 801A4664 284100D3 */   slti       $at, $v0, 0xD3
/* E33D98 801A4668 46020280 */  add.s       $ft3, $fv0, $fv1
/* E33D9C 801A466C E46A0028 */  swc1        $ft3, 0x28($v1)
/* E33DA0 801A4670 284100D3 */  slti        $at, $v0, 0xD3
.LE16C50_801A4674:
/* E33DA4 801A4674 54200009 */  bnel        $at, $zero, .LE16C50_801A469C
/* E33DA8 801A4678 284100D5 */   slti       $at, $v0, 0xD5
/* E33DAC 801A467C C460001C */  lwc1        $fv0, 0x1C($v1)
/* E33DB0 801A4680 460C003C */  c.lt.s      $fv0, $fa0
/* E33DB4 801A4684 00000000 */  nop
/* E33DB8 801A4688 45020004 */  bc1fl       .LE16C50_801A469C
/* E33DBC 801A468C 284100D5 */   slti       $at, $v0, 0xD5
/* E33DC0 801A4690 46020400 */  add.s       $ft4, $fv0, $fv1
/* E33DC4 801A4694 E470001C */  swc1        $ft4, 0x1C($v1)
/* E33DC8 801A4698 284100D5 */  slti        $at, $v0, 0xD5
.LE16C50_801A469C:
/* E33DCC 801A469C 54200009 */  bnel        $at, $zero, .LE16C50_801A46C4
/* E33DD0 801A46A0 284100D7 */   slti       $at, $v0, 0xD7
/* E33DD4 801A46A4 C4600020 */  lwc1        $fv0, 0x20($v1)
/* E33DD8 801A46A8 460C003C */  c.lt.s      $fv0, $fa0
/* E33DDC 801A46AC 00000000 */  nop
/* E33DE0 801A46B0 45020004 */  bc1fl       .LE16C50_801A46C4
/* E33DE4 801A46B4 284100D7 */   slti       $at, $v0, 0xD7
/* E33DE8 801A46B8 46020480 */  add.s       $ft5, $fv0, $fv1
/* E33DEC 801A46BC E4720020 */  swc1        $ft5, 0x20($v1)
/* E33DF0 801A46C0 284100D7 */  slti        $at, $v0, 0xD7
.LE16C50_801A46C4:
/* E33DF4 801A46C4 54200009 */  bnel        $at, $zero, .LE16C50_801A46EC
/* E33DF8 801A46C8 284100D9 */   slti       $at, $v0, 0xD9
/* E33DFC 801A46CC C460002C */  lwc1        $fv0, 0x2C($v1)
/* E33E00 801A46D0 460C003C */  c.lt.s      $fv0, $fa0
/* E33E04 801A46D4 00000000 */  nop
/* E33E08 801A46D8 45020004 */  bc1fl       .LE16C50_801A46EC
/* E33E0C 801A46DC 284100D9 */   slti       $at, $v0, 0xD9
/* E33E10 801A46E0 46020100 */  add.s       $ft0, $fv0, $fv1
/* E33E14 801A46E4 E464002C */  swc1        $ft0, 0x2C($v1)
/* E33E18 801A46E8 284100D9 */  slti        $at, $v0, 0xD9
.LE16C50_801A46EC:
/* E33E1C 801A46EC 54200009 */  bnel        $at, $zero, .LE16C50_801A4714
/* E33E20 801A46F0 284100DB */   slti       $at, $v0, 0xDB
/* E33E24 801A46F4 C4600030 */  lwc1        $fv0, 0x30($v1)
/* E33E28 801A46F8 460C003C */  c.lt.s      $fv0, $fa0
/* E33E2C 801A46FC 00000000 */  nop
/* E33E30 801A4700 45020004 */  bc1fl       .LE16C50_801A4714
/* E33E34 801A4704 284100DB */   slti       $at, $v0, 0xDB
/* E33E38 801A4708 46020180 */  add.s       $ft1, $fv0, $fv1
/* E33E3C 801A470C E4660030 */  swc1        $ft1, 0x30($v1)
/* E33E40 801A4710 284100DB */  slti        $at, $v0, 0xDB
.LE16C50_801A4714:
/* E33E44 801A4714 14200008 */  bnez        $at, .LE16C50_801A4738
/* E33E48 801A4718 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E33E4C 801A471C C4600010 */  lwc1        $fv0, 0x10($v1)
/* E33E50 801A4720 460C003C */  c.lt.s      $fv0, $fa0
/* E33E54 801A4724 00000000 */  nop
/* E33E58 801A4728 45020004 */  bc1fl       .LE16C50_801A473C
/* E33E5C 801A472C 284100DD */   slti       $at, $v0, 0xDD
/* E33E60 801A4730 46020200 */  add.s       $ft2, $fv0, $fv1
/* E33E64 801A4734 E4680010 */  swc1        $ft2, 0x10($v1)
.LE16C50_801A4738:
/* E33E68 801A4738 284100DD */  slti        $at, $v0, 0xDD
.LE16C50_801A473C:
/* E33E6C 801A473C 1420000A */  bnez        $at, .LE16C50_801A4768
/* E33E70 801A4740 24E75D34 */   addiu      $a3, $a3, %lo(D_800C5D34)
/* E33E74 801A4744 C4600018 */  lwc1        $fv0, 0x18($v1)
/* E33E78 801A4748 3C01801C */  lui         $at, %hi(D_E16C50_801C176C)
/* E33E7C 801A474C 460C003C */  c.lt.s      $fv0, $fa0
/* E33E80 801A4750 00000000 */  nop
/* E33E84 801A4754 45020005 */  bc1fl       .LE16C50_801A476C
/* E33E88 801A4758 284100E2 */   slti       $at, $v0, 0xE2
/* E33E8C 801A475C C42A176C */  lwc1        $ft3, %lo(D_E16C50_801C176C)($at)
/* E33E90 801A4760 460A0400 */  add.s       $ft4, $fv0, $ft3
/* E33E94 801A4764 E4700018 */  swc1        $ft4, 0x18($v1)
.LE16C50_801A4768:
/* E33E98 801A4768 284100E2 */  slti        $at, $v0, 0xE2
.LE16C50_801A476C:
/* E33E9C 801A476C 1420000D */  bnez        $at, .LE16C50_801A47A4
/* E33EA0 801A4770 3C042940 */   lui        $a0, (0x2940F026 >> 16)
/* E33EA4 801A4774 3C0143BE */  lui         $at, (0x43BE0000 >> 16)
/* E33EA8 801A4778 44819000 */  mtc1        $at, $ft5
/* E33EAC 801A477C C4600034 */  lwc1        $fv0, 0x34($v1)
/* E33EB0 801A4780 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E33EB4 801A4784 4612003C */  c.lt.s      $fv0, $ft5
/* E33EB8 801A4788 00000000 */  nop
/* E33EBC 801A478C 45020006 */  bc1fl       .LE16C50_801A47A8
/* E33EC0 801A4790 284100EE */   slti       $at, $v0, 0xEE
/* E33EC4 801A4794 44812000 */  mtc1        $at, $ft0
/* E33EC8 801A4798 00000000 */  nop
/* E33ECC 801A479C 46040180 */  add.s       $ft1, $fv0, $ft0
/* E33ED0 801A47A0 E4660034 */  swc1        $ft1, 0x34($v1)
.LE16C50_801A47A4:
/* E33ED4 801A47A4 284100EE */  slti        $at, $v0, 0xEE
.LE16C50_801A47A8:
/* E33ED8 801A47A8 14200004 */  bnez        $at, .LE16C50_801A47BC
/* E33EDC 801A47AC 3484F026 */   ori        $a0, $a0, (0x2940F026 & 0xFFFF)
/* E33EE0 801A47B0 44804000 */  mtc1        $zero, $ft2
/* E33EE4 801A47B4 00000000 */  nop
/* E33EE8 801A47B8 E4680034 */  swc1        $ft2, 0x34($v1)
.LE16C50_801A47BC:
/* E33EEC 801A47BC 240100E6 */  addiu       $at, $zero, 0xE6
/* E33EF0 801A47C0 14410012 */  bne         $v0, $at, .LE16C50_801A480C
/* E33EF4 801A47C4 3C058016 */   lui        $a1, %hi(gObjects2F4 + 0xFC4)
/* E33EF8 801A47C8 3C0B800C */  lui         $t3, %hi(D_800C5D3C)
/* E33EFC 801A47CC 256B5D3C */  addiu       $t3, $t3, %lo(D_800C5D3C)
/* E33F00 801A47D0 AFAB0014 */  sw          $t3, 0x14($sp)
/* E33F04 801A47D4 24A54FA4 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0xFC4)
/* E33F08 801A47D8 24060004 */  addiu       $a2, $zero, 0x4
/* E33F0C 801A47DC 0C006486 */  jal         Audio_PlaySfx
/* E33F10 801A47E0 AFA70010 */   sw         $a3, 0x10($sp)
/* E33F14 801A47E4 3C0C8017 */  lui         $t4, %hi(gMainController)
/* E33F18 801A47E8 8D8C7AF8 */  lw          $t4, %lo(gMainController)($t4)
/* E33F1C 801A47EC 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
/* E33F20 801A47F0 44815000 */  mtc1        $at, $ft3
/* E33F24 801A47F4 3C018017 */  lui         $at, %hi(D_801779A8)
/* E33F28 801A47F8 000C6880 */  sll         $t5, $t4, 2
/* E33F2C 801A47FC 002D0821 */  addu        $at, $at, $t5
/* E33F30 801A4800 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E33F34 801A4804 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
/* E33F38 801A4808 E42A79A8 */  swc1        $ft3, %lo(D_801779A8)($at)
.LE16C50_801A480C:
/* E33F3C 801A480C 240100FA */  addiu       $at, $zero, 0xFA
/* E33F40 801A4810 14410024 */  bne         $v0, $at, .LE16C50_801A48A4
/* E33F44 801A4814 3C048017 */   lui        $a0, %hi(gObjects8C)
/* E33F48 801A4818 860E004E */  lh          $t6, 0x4E($s0)
/* E33F4C 801A481C 3C01C4C8 */  lui         $at, (0xC4C80000 >> 16)
/* E33F50 801A4820 44818000 */  mtc1        $at, $ft4
/* E33F54 801A4824 25CF0001 */  addiu       $t7, $t6, 0x1
/* E33F58 801A4828 A60F004E */  sh          $t7, 0x4E($s0)
/* E33F5C 801A482C 24840130 */  addiu       $a0, $a0, %lo(gObjects8C)
/* E33F60 801A4830 E6100008 */  swc1        $ft4, 0x8($s0)
/* E33F64 801A4834 90980000 */  lbu         $t8, 0x0($a0)
.LE16C50_801A4838:
/* E33F68 801A4838 24850080 */  addiu       $a1, $a0, 0x80
/* E33F6C 801A483C 13000004 */  beqz        $t8, .LE16C50_801A4850
/* E33F70 801A4840 00000000 */   nop
/* E33F74 801A4844 0C0183EF */  jal         Object_Kill
/* E33F78 801A4848 AFA4003C */   sw         $a0, 0x3C($sp)
/* E33F7C 801A484C 8FA4003C */  lw          $a0, 0x3C($sp)
.LE16C50_801A4850:
/* E33F80 801A4850 3C198017 */  lui         $t9, %hi(gObjects8C + 0x118)
/* E33F84 801A4854 27390248 */  addiu       $t9, $t9, %lo(gObjects8C + 0x118)
/* E33F88 801A4858 2484008C */  addiu       $a0, $a0, 0x8C
/* E33F8C 801A485C 5499FFF6 */  bnel        $a0, $t9, .LE16C50_801A4838
/* E33F90 801A4860 90980000 */   lbu        $t8, 0x0($a0)
/* E33F94 801A4864 24080064 */  addiu       $t0, $zero, 0x64
/* E33F98 801A4868 1000000E */  b           .LE16C50_801A48A4
/* E33F9C 801A486C A6080058 */   sh         $t0, 0x58($s0)
.LE16C50_801A4870:
/* E33FA0 801A4870 86090058 */  lh          $t1, 0x58($s0)
/* E33FA4 801A4874 24010001 */  addiu       $at, $zero, 0x1
/* E33FA8 801A4878 3C041050 */  lui         $a0, (0x105000FF >> 16)
/* E33FAC 801A487C 5521000A */  bnel        $t1, $at, .LE16C50_801A48A8
/* E33FB0 801A4880 8FBF0034 */   lw         $ra, 0x34($sp)
/* E33FB4 801A4884 0C0060BD */  jal         func_800182F4
/* E33FB8 801A4888 348400FF */   ori        $a0, $a0, (0x105000FF & 0xFFFF)
/* E33FBC 801A488C 3C041150 */  lui         $a0, (0x115000FF >> 16)
/* E33FC0 801A4890 0C0060BD */  jal         func_800182F4
/* E33FC4 801A4894 348400FF */   ori        $a0, $a0, (0x115000FF & 0xFFFF)
/* E33FC8 801A4898 02002025 */  or          $a0, $s0, $zero
/* E33FCC 801A489C 0C0183EF */  jal         Object_Kill
/* E33FD0 801A48A0 260503FC */   addiu      $a1, $s0, 0x3FC
.LE16C50_801A48A4:
/* E33FD4 801A48A4 8FBF0034 */  lw          $ra, 0x34($sp)
.LE16C50_801A48A8:
/* E33FD8 801A48A8 8FB00030 */  lw          $s0, 0x30($sp)
/* E33FDC 801A48AC 27BD0060 */  addiu       $sp, $sp, 0x60
/* E33FE0 801A48B0 03E00008 */  jr          $ra
/* E33FE4 801A48B4 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C1770
/* E50EA0 801C1770 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A48B8
/* E33FE8 801A48B8 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E33FEC 801A48BC AFB00020 */  sw          $s0, 0x20($sp)
/* E33FF0 801A48C0 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E33FF4 801A48C4 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E33FF8 801A48C8 00808025 */  or          $s0, $a0, $zero
/* E33FFC 801A48CC AFBF0024 */  sw          $ra, 0x24($sp)
/* E34000 801A48D0 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E34004 801A48D4 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E34008 801A48D8 3C042943 */  lui         $a0, (0x29434075 >> 16)
/* E3400C 801A48DC 34844075 */  ori         $a0, $a0, (0x29434075 & 0xFFFF)
/* E34010 801A48E0 AFAE0014 */  sw          $t6, 0x14($sp)
/* E34014 801A48E4 260503FC */  addiu       $a1, $s0, 0x3FC
/* E34018 801A48E8 24060004 */  addiu       $a2, $zero, 0x4
/* E3401C 801A48EC 0C006486 */  jal         Audio_PlaySfx
/* E34020 801A48F0 AFA70010 */   sw         $a3, 0x10($sp)
/* E34024 801A48F4 3C028017 */  lui         $v0, %hi(gMainController)
/* E34028 801A48F8 8C427AF8 */  lw          $v0, %lo(gMainController)($v0)
/* E3402C 801A48FC 3C018013 */  lui         $at, %hi(D_80137E84)
/* E34030 801A4900 240F0001 */  addiu       $t7, $zero, 0x1
/* E34034 801A4904 00220821 */  addu        $at, $at, $v0
/* E34038 801A4908 A02F7E84 */  sb          $t7, %lo(D_80137E84)($at)
/* E3403C 801A490C 3C018017 */  lui         $at, %hi(D_Timer_80177BD0)
/* E34040 801A4910 0002C840 */  sll         $t9, $v0, 1
/* E34044 801A4914 00390821 */  addu        $at, $at, $t9
/* E34048 801A4918 2418000A */  addiu       $t8, $zero, 0xA
/* E3404C 801A491C A4387BD0 */  sh          $t8, %lo(D_Timer_80177BD0)($at)
/* E34050 801A4920 86030088 */  lh          $v1, 0x88($s0)
/* E34054 801A4924 24050006 */  addiu       $a1, $zero, 0x6
/* E34058 801A4928 24010004 */  addiu       $at, $zero, 0x4
/* E3405C 801A492C 10A30006 */  beq         $a1, $v1, .LE16C50_801A4948
/* E34060 801A4930 240C00FF */   addiu      $t4, $zero, 0xFF
/* E34064 801A4934 8608008A */  lh          $t0, 0x8A($s0)
/* E34068 801A4938 8609004C */  lh          $t1, 0x4C($s0)
/* E3406C 801A493C A6030092 */  sh          $v1, 0x92($s0)
/* E34070 801A4940 A6080094 */  sh          $t0, 0x94($s0)
/* E34074 801A4944 A6090096 */  sh          $t1, 0x96($s0)
.LE16C50_801A4948:
/* E34078 801A4948 14610013 */  bne         $v1, $at, .LE16C50_801A4998
/* E3407C 801A494C 24180040 */   addiu      $t8, $zero, 0x40
/* E34080 801A4950 8602004C */  lh          $v0, 0x4C($s0)
/* E34084 801A4954 2841003C */  slti        $at, $v0, 0x3C
/* E34088 801A4958 1420000F */  bnez        $at, .LE16C50_801A4998
/* E3408C 801A495C 28410043 */   slti       $at, $v0, 0x43
/* E34090 801A4960 1020000D */  beqz        $at, .LE16C50_801A4998
/* E34094 801A4964 3C028016 */   lui        $v0, %hi(gObjects2F4 + 0xBD0)
/* E34098 801A4968 3C048017 */  lui         $a0, %hi(gObjects408)
/* E3409C 801A496C 2484F110 */  addiu       $a0, $a0, %lo(gObjects408)
/* E340A0 801A4970 24424BB0 */  addiu       $v0, $v0, %lo(gObjects2F4 + 0xBD0)
/* E340A4 801A4974 24030116 */  addiu       $v1, $zero, 0x116
/* E340A8 801A4978 944A0002 */  lhu         $t2, 0x2($v0)
.LE16C50_801A497C:
/* E340AC 801A497C 146A0003 */  bne         $v1, $t2, .LE16C50_801A498C
/* E340B0 801A4980 240B0002 */   addiu      $t3, $zero, 0x2
/* E340B4 801A4984 10000004 */  b           .LE16C50_801A4998
/* E340B8 801A4988 A04B00D0 */   sb         $t3, 0xD0($v0)
.LE16C50_801A498C:
/* E340BC 801A498C 244202F4 */  addiu       $v0, $v0, 0x2F4
/* E340C0 801A4990 5444FFFA */  bnel        $v0, $a0, .LE16C50_801A497C
/* E340C4 801A4994 944A0002 */   lhu        $t2, 0x2($v0)
.LE16C50_801A4998:
/* E340C8 801A4998 3C028018 */  lui         $v0, %hi(D_80178340)
/* E340CC 801A499C 3C038018 */  lui         $v1, %hi(D_80178354)
/* E340D0 801A49A0 3C048018 */  lui         $a0, %hi(D_80178350)
/* E340D4 801A49A4 24848350 */  addiu       $a0, $a0, %lo(D_80178350)
/* E340D8 801A49A8 24638354 */  addiu       $v1, $v1, %lo(D_80178354)
/* E340DC 801A49AC 24428340 */  addiu       $v0, $v0, %lo(D_80178340)
/* E340E0 801A49B0 AC4C0000 */  sw          $t4, 0x0($v0)
/* E340E4 801A49B4 AC6C0000 */  sw          $t4, 0x0($v1)
/* E340E8 801A49B8 AC8C0000 */  sw          $t4, 0x0($a0)
/* E340EC 801A49BC 3C018018 */  lui         $at, %hi(D_80178348)
/* E340F0 801A49C0 AC2C8348 */  sw          $t4, %lo(D_80178348)($at)
/* E340F4 801A49C4 3C018018 */  lui         $at, %hi(D_80178358)
/* E340F8 801A49C8 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* E340FC 801A49CC 3C018018 */  lui         $at, %hi(D_8017835C)
/* E34100 801A49D0 AC38835C */  sw          $t8, %lo(D_8017835C)($at)
/* E34104 801A49D4 8619008C */  lh          $t9, 0x8C($s0)
/* E34108 801A49D8 A6050088 */  sh          $a1, 0x88($s0)
/* E3410C 801A49DC A605008A */  sh          $a1, 0x8A($s0)
/* E34110 801A49E0 A600004C */  sh          $zero, 0x4C($s0)
/* E34114 801A49E4 3C01801C */  lui         $at, %hi(D_E16C50_801C1770)
/* E34118 801A49E8 C4241770 */  lwc1        $ft0, %lo(D_E16C50_801C1770)($at)
/* E3411C 801A49EC 3C098017 */  lui         $t1, %hi(gTeamShields + 0x8)
/* E34120 801A49F0 1F200004 */  bgtz        $t9, .LE16C50_801A4A04
/* E34124 801A49F4 E60400D8 */   swc1       $ft0, 0xD8($s0)
/* E34128 801A49F8 8608008E */  lh          $t0, 0x8E($s0)
/* E3412C 801A49FC 59000009 */  blezl       $t0, .LE16C50_801A4A24
/* E34130 801A4A00 8FBF0024 */   lw         $ra, 0x24($sp)
.LE16C50_801A4A04:
/* E34134 801A4A04 8D2978B8 */  lw          $t1, %lo(gTeamShields + 0x8)($t1)
/* E34138 801A4A08 3C048018 */  lui         $a0, %hi(gMsg_ID_7086)
/* E3413C 801A4A0C 2484E014 */  addiu       $a0, $a0, %lo(gMsg_ID_7086)
/* E34140 801A4A10 59200004 */  blezl       $t1, .LE16C50_801A4A24
/* E34144 801A4A14 8FBF0024 */   lw         $ra, 0x24($sp)
/* E34148 801A4A18 0C02EA02 */  jal         func_800BA808
/* E3414C 801A4A1C 24050014 */   addiu      $a1, $zero, 0x14
/* E34150 801A4A20 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_801A4A24:
/* E34154 801A4A24 8FB00020 */  lw          $s0, 0x20($sp)
/* E34158 801A4A28 27BD0028 */  addiu       $sp, $sp, 0x28
/* E3415C 801A4A2C 03E00008 */  jr          $ra
/* E34160 801A4A30 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C1774
/* E50EA4 801C1774 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A4A34
/* E34164 801A4A34 27BDFFB0 */  addiu       $sp, $sp, -0x50
/* E34168 801A4A38 AFB00048 */  sw          $s0, 0x48($sp)
/* E3416C 801A4A3C 00808025 */  or          $s0, $a0, $zero
/* E34170 801A4A40 AFBF004C */  sw          $ra, 0x4C($sp)
/* E34174 801A4A44 F7B80040 */  sdc1        $fs2, 0x40($sp)
/* E34178 801A4A48 F7B60038 */  sdc1        $fs1, 0x38($sp)
/* E3417C 801A4A4C F7B40030 */  sdc1        $fs0, 0x30($sp)
/* E34180 801A4A50 860E008C */  lh          $t6, 0x8C($s0)
/* E34184 801A4A54 05C30072 */  bgezl       $t6, .LE16C50_801A4C20
/* E34188 801A4A58 8619008E */   lh         $t9, 0x8E($s0)
/* E3418C 801A4A5C 0C0013AC */  jal         Rand_ZeroOne
/* E34190 801A4A60 A600008C */   sh         $zero, 0x8C($s0)
/* E34194 801A4A64 0C0013AC */  jal         Rand_ZeroOne
/* E34198 801A4A68 46000586 */   mov.s      $fs1, $fv0
/* E3419C 801A4A6C 0C0013AC */  jal         Rand_ZeroOne
/* E341A0 801A4A70 46000506 */   mov.s      $fs0, $fv0
/* E341A4 801A4A74 3C0141C8 */  lui         $at, (0x41C80000 >> 16)
/* E341A8 801A4A78 4481C000 */  mtc1        $at, $fs2
/* E341AC 801A4A7C 3C01C1C8 */  lui         $at, (0xC1C80000 >> 16)
/* E341B0 801A4A80 44814000 */  mtc1        $at, $ft2
/* E341B4 801A4A84 C6040180 */  lwc1        $ft0, 0x180($s0)
/* E341B8 801A4A88 C60C0148 */  lwc1        $fa0, 0x148($s0)
/* E341BC 801A4A8C 4608B282 */  mul.s       $ft3, $fs1, $ft2
/* E341C0 801A4A90 C60E014C */  lwc1        $fa1, 0x14C($s0)
/* E341C4 801A4A94 8E060150 */  lw          $a2, 0x150($s0)
/* E341C8 801A4A98 8E07017C */  lw          $a3, 0x17C($s0)
/* E341CC 801A4A9C E7A40010 */  swc1        $ft0, 0x10($sp)
/* E341D0 801A4AA0 C6060184 */  lwc1        $ft1, 0x184($s0)
/* E341D4 801A4AA4 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E341D8 801A4AA8 44818000 */  mtc1        $at, $ft4
/* E341DC 801A4AAC 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E341E0 801A4AB0 E7A60014 */  swc1        $ft1, 0x14($sp)
/* E341E4 801A4AB4 44813000 */  mtc1        $at, $ft1
/* E341E8 801A4AB8 46105481 */  sub.s       $ft5, $ft3, $ft4
/* E341EC 801A4ABC 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E341F0 801A4AC0 44815000 */  mtc1        $at, $ft3
/* E341F4 801A4AC4 4618A102 */  mul.s       $ft0, $fs0, $fs2
/* E341F8 801A4AC8 E7B20018 */  swc1        $ft5, 0x18($sp)
/* E341FC 801A4ACC 460A0401 */  sub.s       $ft4, $fv0, $ft3
/* E34200 801A4AD0 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E34204 801A4AD4 AFA00024 */  sw          $zero, 0x24($sp)
/* E34208 801A4AD8 46188482 */  mul.s       $ft5, $ft4, $fs2
/* E3420C 801A4ADC 46062200 */  add.s       $ft2, $ft0, $ft1
/* E34210 801A4AE0 44812000 */  mtc1        $at, $ft0
/* E34214 801A4AE4 E7A8001C */  swc1        $ft2, 0x1C($sp)
/* E34218 801A4AE8 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E3421C 801A4AEC 0C068785 */  jal         func_E16C50_801A1E14
/* E34220 801A4AF0 E7A60020 */   swc1       $ft1, 0x20($sp)
/* E34224 801A4AF4 0C0013AC */  jal         Rand_ZeroOne
/* E34228 801A4AF8 00000000 */   nop
/* E3422C 801A4AFC 0C0013AC */  jal         Rand_ZeroOne
/* E34230 801A4B00 46000586 */   mov.s      $fs1, $fv0
/* E34234 801A4B04 0C0013AC */  jal         Rand_ZeroOne
/* E34238 801A4B08 46000506 */   mov.s      $fs0, $fv0
/* E3423C 801A4B0C 3C01C1C8 */  lui         $at, (0xC1C80000 >> 16)
/* E34240 801A4B10 44818000 */  mtc1        $at, $ft4
/* E34244 801A4B14 C6080198 */  lwc1        $ft2, 0x198($s0)
/* E34248 801A4B18 C60C0130 */  lwc1        $fa0, 0x130($s0)
/* E3424C 801A4B1C 4610B482 */  mul.s       $ft5, $fs1, $ft4
/* E34250 801A4B20 C60E0134 */  lwc1        $fa1, 0x134($s0)
/* E34254 801A4B24 8E060138 */  lw          $a2, 0x138($s0)
/* E34258 801A4B28 8E070194 */  lw          $a3, 0x194($s0)
/* E3425C 801A4B2C E7A80010 */  swc1        $ft2, 0x10($sp)
/* E34260 801A4B30 C60A019C */  lwc1        $ft3, 0x19C($s0)
/* E34264 801A4B34 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E34268 801A4B38 44812000 */  mtc1        $at, $ft0
/* E3426C 801A4B3C 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E34270 801A4B40 E7AA0014 */  swc1        $ft3, 0x14($sp)
/* E34274 801A4B44 44815000 */  mtc1        $at, $ft3
/* E34278 801A4B48 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E3427C 801A4B4C 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E34280 801A4B50 44819000 */  mtc1        $at, $ft5
/* E34284 801A4B54 4618A202 */  mul.s       $ft2, $fs0, $fs2
/* E34288 801A4B58 E7A60018 */  swc1        $ft1, 0x18($sp)
/* E3428C 801A4B5C 46120101 */  sub.s       $ft0, $fv0, $ft5
/* E34290 801A4B60 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E34294 801A4B64 240F0001 */  addiu       $t7, $zero, 0x1
/* E34298 801A4B68 AFAF0024 */  sw          $t7, 0x24($sp)
/* E3429C 801A4B6C 46182182 */  mul.s       $ft1, $ft0, $fs2
/* E342A0 801A4B70 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E342A4 801A4B74 44814000 */  mtc1        $at, $ft2
/* E342A8 801A4B78 E7B0001C */  swc1        $ft4, 0x1C($sp)
/* E342AC 801A4B7C 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E342B0 801A4B80 0C068785 */  jal         func_E16C50_801A1E14
/* E342B4 801A4B84 E7AA0020 */   swc1       $ft3, 0x20($sp)
/* E342B8 801A4B88 0C0013AC */  jal         Rand_ZeroOne
/* E342BC 801A4B8C 00000000 */   nop
/* E342C0 801A4B90 0C0013AC */  jal         Rand_ZeroOne
/* E342C4 801A4B94 46000586 */   mov.s      $fs1, $fv0
/* E342C8 801A4B98 0C0013AC */  jal         Rand_ZeroOne
/* E342CC 801A4B9C 46000506 */   mov.s      $fs0, $fv0
/* E342D0 801A4BA0 3C01C1C8 */  lui         $at, (0xC1C80000 >> 16)
/* E342D4 801A4BA4 44812000 */  mtc1        $at, $ft0
/* E342D8 801A4BA8 C6100168 */  lwc1        $ft4, 0x168($s0)
/* E342DC 801A4BAC C60C0100 */  lwc1        $fa0, 0x100($s0)
/* E342E0 801A4BB0 4604B182 */  mul.s       $ft1, $fs1, $ft0
/* E342E4 801A4BB4 C60E0104 */  lwc1        $fa1, 0x104($s0)
/* E342E8 801A4BB8 8E060108 */  lw          $a2, 0x108($s0)
/* E342EC 801A4BBC 8E070164 */  lw          $a3, 0x164($s0)
/* E342F0 801A4BC0 E7B00010 */  swc1        $ft4, 0x10($sp)
/* E342F4 801A4BC4 C612016C */  lwc1        $ft5, 0x16C($s0)
/* E342F8 801A4BC8 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E342FC 801A4BCC 44814000 */  mtc1        $at, $ft2
/* E34300 801A4BD0 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E34304 801A4BD4 E7B20014 */  swc1        $ft5, 0x14($sp)
/* E34308 801A4BD8 44819000 */  mtc1        $at, $ft5
/* E3430C 801A4BDC 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E34310 801A4BE0 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E34314 801A4BE4 44813000 */  mtc1        $at, $ft1
/* E34318 801A4BE8 4618A402 */  mul.s       $ft4, $fs0, $fs2
/* E3431C 801A4BEC E7AA0018 */  swc1        $ft3, 0x18($sp)
/* E34320 801A4BF0 46060201 */  sub.s       $ft2, $fv0, $ft1
/* E34324 801A4BF4 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E34328 801A4BF8 24180002 */  addiu       $t8, $zero, 0x2
/* E3432C 801A4BFC AFB80024 */  sw          $t8, 0x24($sp)
/* E34330 801A4C00 46184282 */  mul.s       $ft3, $ft2, $fs2
/* E34334 801A4C04 46128100 */  add.s       $ft0, $ft4, $ft5
/* E34338 801A4C08 44818000 */  mtc1        $at, $ft4
/* E3433C 801A4C0C E7A4001C */  swc1        $ft0, 0x1C($sp)
/* E34340 801A4C10 46105481 */  sub.s       $ft5, $ft3, $ft4
/* E34344 801A4C14 0C068785 */  jal         func_E16C50_801A1E14
/* E34348 801A4C18 E7B20020 */   swc1       $ft5, 0x20($sp)
/* E3434C 801A4C1C 8619008E */  lh          $t9, 0x8E($s0)
.LE16C50_801A4C20:
/* E34350 801A4C20 3C0141C8 */  lui         $at, (0x41C80000 >> 16)
/* E34354 801A4C24 4481C000 */  mtc1        $at, $fs2
/* E34358 801A4C28 0723006B */  bgezl       $t9, .LE16C50_801A4DD8
/* E3435C 801A4C2C 8603004C */   lh         $v1, 0x4C($s0)
/* E34360 801A4C30 0C0013AC */  jal         Rand_ZeroOne
/* E34364 801A4C34 A600008E */   sh         $zero, 0x8E($s0)
/* E34368 801A4C38 0C0013AC */  jal         Rand_ZeroOne
/* E3436C 801A4C3C 46000586 */   mov.s      $fs1, $fv0
/* E34370 801A4C40 0C0013AC */  jal         Rand_ZeroOne
/* E34374 801A4C44 46000506 */   mov.s      $fs0, $fv0
/* E34378 801A4C48 4618B202 */  mul.s       $ft2, $fs1, $fs2
/* E3437C 801A4C4C C6040174 */  lwc1        $ft0, 0x174($s0)
/* E34380 801A4C50 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E34384 801A4C54 44815000 */  mtc1        $at, $ft3
/* E34388 801A4C58 C60C013C */  lwc1        $fa0, 0x13C($s0)
/* E3438C 801A4C5C C60E0140 */  lwc1        $fa1, 0x140($s0)
/* E34390 801A4C60 8E060144 */  lw          $a2, 0x144($s0)
/* E34394 801A4C64 8E070170 */  lw          $a3, 0x170($s0)
/* E34398 801A4C68 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E3439C 801A4C6C E7A40010 */  swc1        $ft0, 0x10($sp)
/* E343A0 801A4C70 44812000 */  mtc1        $at, $ft0
/* E343A4 801A4C74 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E343A8 801A4C78 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E343AC 801A4C7C 44814000 */  mtc1        $at, $ft2
/* E343B0 801A4C80 4618A482 */  mul.s       $ft5, $fs0, $fs2
/* E343B4 801A4C84 C6060178 */  lwc1        $ft1, 0x178($s0)
/* E343B8 801A4C88 46080281 */  sub.s       $ft3, $fv0, $ft2
/* E343BC 801A4C8C E7B00018 */  swc1        $ft4, 0x18($sp)
/* E343C0 801A4C90 E7A60014 */  swc1        $ft1, 0x14($sp)
/* E343C4 801A4C94 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E343C8 801A4C98 46185402 */  mul.s       $ft4, $ft3, $fs2
/* E343CC 801A4C9C 46049180 */  add.s       $ft1, $ft5, $ft0
/* E343D0 801A4CA0 44819000 */  mtc1        $at, $ft5
/* E343D4 801A4CA4 24080005 */  addiu       $t0, $zero, 0x5
/* E343D8 801A4CA8 AFA80024 */  sw          $t0, 0x24($sp)
/* E343DC 801A4CAC E7A6001C */  swc1        $ft1, 0x1C($sp)
/* E343E0 801A4CB0 46128101 */  sub.s       $ft0, $ft4, $ft5
/* E343E4 801A4CB4 0C068785 */  jal         func_E16C50_801A1E14
/* E343E8 801A4CB8 E7A40020 */   swc1       $ft0, 0x20($sp)
/* E343EC 801A4CBC 0C0013AC */  jal         Rand_ZeroOne
/* E343F0 801A4CC0 00000000 */   nop
/* E343F4 801A4CC4 0C0013AC */  jal         Rand_ZeroOne
/* E343F8 801A4CC8 46000586 */   mov.s      $fs1, $fv0
/* E343FC 801A4CCC 0C0013AC */  jal         Rand_ZeroOne
/* E34400 801A4CD0 46000506 */   mov.s      $fs0, $fv0
/* E34404 801A4CD4 4618B282 */  mul.s       $ft3, $fs1, $fs2
/* E34408 801A4CD8 C606018C */  lwc1        $ft1, 0x18C($s0)
/* E3440C 801A4CDC 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E34410 801A4CE0 44818000 */  mtc1        $at, $ft4
/* E34414 801A4CE4 C60C0124 */  lwc1        $fa0, 0x124($s0)
/* E34418 801A4CE8 C60E0128 */  lwc1        $fa1, 0x128($s0)
/* E3441C 801A4CEC 8E06012C */  lw          $a2, 0x12C($s0)
/* E34420 801A4CF0 8E070188 */  lw          $a3, 0x188($s0)
/* E34424 801A4CF4 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E34428 801A4CF8 E7A60010 */  swc1        $ft1, 0x10($sp)
/* E3442C 801A4CFC 44813000 */  mtc1        $at, $ft1
/* E34430 801A4D00 46105480 */  add.s       $ft5, $ft3, $ft4
/* E34434 801A4D04 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E34438 801A4D08 44815000 */  mtc1        $at, $ft3
/* E3443C 801A4D0C 4618A102 */  mul.s       $ft0, $fs0, $fs2
/* E34440 801A4D10 C6080190 */  lwc1        $ft2, 0x190($s0)
/* E34444 801A4D14 460A0401 */  sub.s       $ft4, $fv0, $ft3
/* E34448 801A4D18 E7B20018 */  swc1        $ft5, 0x18($sp)
/* E3444C 801A4D1C E7A80014 */  swc1        $ft2, 0x14($sp)
/* E34450 801A4D20 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E34454 801A4D24 46188482 */  mul.s       $ft5, $ft4, $fs2
/* E34458 801A4D28 46062200 */  add.s       $ft2, $ft0, $ft1
/* E3445C 801A4D2C 44812000 */  mtc1        $at, $ft0
/* E34460 801A4D30 24090004 */  addiu       $t1, $zero, 0x4
/* E34464 801A4D34 AFA90024 */  sw          $t1, 0x24($sp)
/* E34468 801A4D38 E7A8001C */  swc1        $ft2, 0x1C($sp)
/* E3446C 801A4D3C 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E34470 801A4D40 0C068785 */  jal         func_E16C50_801A1E14
/* E34474 801A4D44 E7A60020 */   swc1       $ft1, 0x20($sp)
/* E34478 801A4D48 0C0013AC */  jal         Rand_ZeroOne
/* E3447C 801A4D4C 00000000 */   nop
/* E34480 801A4D50 0C0013AC */  jal         Rand_ZeroOne
/* E34484 801A4D54 46000586 */   mov.s      $fs1, $fv0
/* E34488 801A4D58 0C0013AC */  jal         Rand_ZeroOne
/* E3448C 801A4D5C 46000506 */   mov.s      $fs0, $fv0
/* E34490 801A4D60 4618B402 */  mul.s       $ft4, $fs1, $fs2
/* E34494 801A4D64 C608015C */  lwc1        $ft2, 0x15C($s0)
/* E34498 801A4D68 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E3449C 801A4D6C 44819000 */  mtc1        $at, $ft5
/* E344A0 801A4D70 C60C00F4 */  lwc1        $fa0, 0xF4($s0)
/* E344A4 801A4D74 C60E00F8 */  lwc1        $fa1, 0xF8($s0)
/* E344A8 801A4D78 8E0600FC */  lw          $a2, 0xFC($s0)
/* E344AC 801A4D7C 8E070158 */  lw          $a3, 0x158($s0)
/* E344B0 801A4D80 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E344B4 801A4D84 E7A80010 */  swc1        $ft2, 0x10($sp)
/* E344B8 801A4D88 44814000 */  mtc1        $at, $ft2
/* E344BC 801A4D8C 46128100 */  add.s       $ft0, $ft4, $ft5
/* E344C0 801A4D90 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E344C4 801A4D94 44818000 */  mtc1        $at, $ft4
/* E344C8 801A4D98 4618A182 */  mul.s       $ft1, $fs0, $fs2
/* E344CC 801A4D9C C60A0160 */  lwc1        $ft3, 0x160($s0)
/* E344D0 801A4DA0 46100481 */  sub.s       $ft5, $fv0, $ft4
/* E344D4 801A4DA4 E7A40018 */  swc1        $ft0, 0x18($sp)
/* E344D8 801A4DA8 E7AA0014 */  swc1        $ft3, 0x14($sp)
/* E344DC 801A4DAC 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E344E0 801A4DB0 46189102 */  mul.s       $ft0, $ft5, $fs2
/* E344E4 801A4DB4 46083280 */  add.s       $ft3, $ft1, $ft2
/* E344E8 801A4DB8 44813000 */  mtc1        $at, $ft1
/* E344EC 801A4DBC 240A0003 */  addiu       $t2, $zero, 0x3
/* E344F0 801A4DC0 AFAA0024 */  sw          $t2, 0x24($sp)
/* E344F4 801A4DC4 E7AA001C */  swc1        $ft3, 0x1C($sp)
/* E344F8 801A4DC8 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E344FC 801A4DCC 0C068785 */  jal         func_E16C50_801A1E14
/* E34500 801A4DD0 E7A80020 */   swc1       $ft2, 0x20($sp)
/* E34504 801A4DD4 8603004C */  lh          $v1, 0x4C($s0)
.LE16C50_801A4DD8:
/* E34508 801A4DD8 2401001E */  addiu       $at, $zero, 0x1E
/* E3450C 801A4DDC 3C042943 */  lui         $a0, (0x29433074 >> 16)
/* E34510 801A4DE0 10610008 */  beq         $v1, $at, .LE16C50_801A4E04
/* E34514 801A4DE4 34843074 */   ori        $a0, $a0, (0x29433074 & 0xFFFF)
/* E34518 801A4DE8 24010023 */  addiu       $at, $zero, 0x23
/* E3451C 801A4DEC 1061000E */  beq         $v1, $at, .LE16C50_801A4E28
/* E34520 801A4DF0 24010061 */   addiu      $at, $zero, 0x61
/* E34524 801A4DF4 1061000C */  beq         $v1, $at, .LE16C50_801A4E28
/* E34528 801A4DF8 00000000 */   nop
/* E3452C 801A4DFC 10000017 */  b           .LE16C50_801A4E5C
/* E34530 801A4E00 24010077 */   addiu      $at, $zero, 0x77
.LE16C50_801A4E04:
/* E34534 801A4E04 3C0B800C */  lui         $t3, %hi(D_800C5D34)
/* E34538 801A4E08 3C0C800C */  lui         $t4, %hi(D_800C5D3C)
/* E3453C 801A4E0C 258C5D3C */  addiu       $t4, $t4, %lo(D_800C5D3C)
/* E34540 801A4E10 25675D34 */  addiu       $a3, $t3, %lo(D_800C5D34)
/* E34544 801A4E14 AFA70010 */  sw          $a3, 0x10($sp)
/* E34548 801A4E18 AFAC0014 */  sw          $t4, 0x14($sp)
/* E3454C 801A4E1C 260503FC */  addiu       $a1, $s0, 0x3FC
/* E34550 801A4E20 0C006486 */  jal         Audio_PlaySfx
/* E34554 801A4E24 24060004 */   addiu      $a2, $zero, 0x4
.LE16C50_801A4E28:
/* E34558 801A4E28 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E3455C 801A4E2C 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E34560 801A4E30 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E34564 801A4E34 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E34568 801A4E38 3C042943 */  lui         $a0, (0x29434075 >> 16)
/* E3456C 801A4E3C 34844075 */  ori         $a0, $a0, (0x29434075 & 0xFFFF)
/* E34570 801A4E40 AFAD0014 */  sw          $t5, 0x14($sp)
/* E34574 801A4E44 AFA70010 */  sw          $a3, 0x10($sp)
/* E34578 801A4E48 260503FC */  addiu       $a1, $s0, 0x3FC
/* E3457C 801A4E4C 0C006486 */  jal         Audio_PlaySfx
/* E34580 801A4E50 24060004 */   addiu      $a2, $zero, 0x4
/* E34584 801A4E54 8603004C */  lh          $v1, 0x4C($s0)
/* E34588 801A4E58 24010077 */  addiu       $at, $zero, 0x77
.LE16C50_801A4E5C:
/* E3458C 801A4E5C 54610012 */  bnel        $v1, $at, .LE16C50_801A4EA8
/* E34590 801A4E60 8FBF004C */   lw         $ra, 0x4C($sp)
/* E34594 801A4E64 86020092 */  lh          $v0, 0x92($s0)
/* E34598 801A4E68 860E0094 */  lh          $t6, 0x94($s0)
/* E3459C 801A4E6C 24010002 */  addiu       $at, $zero, 0x2
/* E345A0 801A4E70 A6020088 */  sh          $v0, 0x88($s0)
/* E345A4 801A4E74 10410004 */  beq         $v0, $at, .LE16C50_801A4E88
/* E345A8 801A4E78 A60E008A */   sh         $t6, 0x8A($s0)
/* E345AC 801A4E7C 24010003 */  addiu       $at, $zero, 0x3
/* E345B0 801A4E80 54410005 */  bnel        $v0, $at, .LE16C50_801A4E98
/* E345B4 801A4E84 A600004C */   sh         $zero, 0x4C($s0)
.LE16C50_801A4E88:
/* E345B8 801A4E88 860F0096 */  lh          $t7, 0x96($s0)
/* E345BC 801A4E8C 10000002 */  b           .LE16C50_801A4E98
/* E345C0 801A4E90 A60F004C */   sh         $t7, 0x4C($s0)
/* E345C4 801A4E94 A600004C */  sh          $zero, 0x4C($s0)
.LE16C50_801A4E98:
/* E345C8 801A4E98 3C01801C */  lui         $at, %hi(D_E16C50_801C1774)
/* E345CC 801A4E9C C42A1774 */  lwc1        $ft3, %lo(D_E16C50_801C1774)($at)
/* E345D0 801A4EA0 E60A00D8 */  swc1        $ft3, 0xD8($s0)
/* E345D4 801A4EA4 8FBF004C */  lw          $ra, 0x4C($sp)
.LE16C50_801A4EA8:
/* E345D8 801A4EA8 D7B40030 */  ldc1        $fs0, 0x30($sp)
/* E345DC 801A4EAC D7B60038 */  ldc1        $fs1, 0x38($sp)
/* E345E0 801A4EB0 D7B80040 */  ldc1        $fs2, 0x40($sp)
/* E345E4 801A4EB4 8FB00048 */  lw          $s0, 0x48($sp)
/* E345E8 801A4EB8 03E00008 */  jr          $ra
/* E345EC 801A4EBC 27BD0050 */   addiu      $sp, $sp, 0x50
.section .late_rodata
dlabel D_E16C50_801C1778
/* E50EA8 801C1778 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A4EC0
/* E345F0 801A4EC0 44800000 */  mtc1        $zero, $fv0
/* E345F4 801A4EC4 240E0007 */  addiu       $t6, $zero, 0x7
/* E345F8 801A4EC8 240F0005 */  addiu       $t7, $zero, 0x5
/* E345FC 801A4ECC A48E0088 */  sh          $t6, 0x88($a0)
/* E34600 801A4ED0 A48F008A */  sh          $t7, 0x8A($a0)
/* E34604 801A4ED4 3C01801C */  lui         $at, %hi(D_E16C50_801C1778)
/* E34608 801A4ED8 C4241778 */  lwc1        $ft0, %lo(D_E16C50_801C1778)($at)
/* E3460C 801A4EDC A480004C */  sh          $zero, 0x4C($a0)
/* E34610 801A4EE0 A480004E */  sh          $zero, 0x4E($a0)
/* E34614 801A4EE4 E4800154 */  swc1        $fv0, 0x154($a0)
/* E34618 801A4EE8 E4800014 */  swc1        $fv0, 0x14($a0)
/* E3461C 801A4EEC E48400D8 */  swc1        $ft0, 0xD8($a0)
/* E34620 801A4EF0 03E00008 */  jr          $ra
/* E34624 801A4EF4 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C177C
/* E50EAC 801C177C 3C23D70A */ .float 0.009999999776

dlabel D_E16C50_801C1780
/* E50EB0 801C1780 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1784
/* E50EB4 801C1784 44898000 */ .float 1100

dlabel D_E16C50_801C1788
/* E50EB8 801C1788 C4BB8000 */ .float -1500

dlabel D_E16C50_801C178C
/* E50EBC 801C178C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1790
/* E50EC0 801C1790 C4BB8000 */ .float -1500

dlabel D_E16C50_801C1794
/* E50EC4 801C1794 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1798
/* E50EC8 801C1798 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A4EF8
/* E34628 801A4EF8 27BDFFA8 */  addiu       $sp, $sp, -0x58
/* E3462C 801A4EFC AFB10050 */  sw          $s1, 0x50($sp)
/* E34630 801A4F00 00808825 */  or          $s1, $a0, $zero
/* E34634 801A4F04 AFBF0054 */  sw          $ra, 0x54($sp)
/* E34638 801A4F08 AFB0004C */  sw          $s0, 0x4C($sp)
/* E3463C 801A4F0C F7BE0040 */  sdc1        $fs5, 0x40($sp)
/* E34640 801A4F10 F7BC0038 */  sdc1        $fs4, 0x38($sp)
/* E34644 801A4F14 F7BA0030 */  sdc1        $fs3, 0x30($sp)
/* E34648 801A4F18 F7B80028 */  sdc1        $fs2, 0x28($sp)
/* E3464C 801A4F1C F7B60020 */  sdc1        $fs1, 0x20($sp)
/* E34650 801A4F20 F7B40018 */  sdc1        $fs0, 0x18($sp)
/* E34654 801A4F24 8623009E */  lh          $v1, 0x9E($s1)
/* E34658 801A4F28 24100001 */  addiu       $s0, $zero, 0x1
/* E3465C 801A4F2C 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E34660 801A4F30 10600002 */  beqz        $v1, .LE16C50_801A4F3C
/* E34664 801A4F34 246EFFFF */   addiu      $t6, $v1, -0x1
/* E34668 801A4F38 A62E009E */  sh          $t6, 0x9E($s1)
.LE16C50_801A4F3C:
/* E3466C 801A4F3C 8622004E */  lh          $v0, 0x4E($s1)
/* E34670 801A4F40 5040000A */  beql        $v0, $zero, .LE16C50_801A4F6C
/* E34674 801A4F44 44812000 */   mtc1       $at, $ft0
/* E34678 801A4F48 10500047 */  beq         $v0, $s0, .LE16C50_801A5068
/* E3467C 801A4F4C 24010002 */   addiu      $at, $zero, 0x2
/* E34680 801A4F50 104100F2 */  beq         $v0, $at, .LE16C50_801A531C
/* E34684 801A4F54 24010003 */   addiu      $at, $zero, 0x3
/* E34688 801A4F58 10410190 */  beq         $v0, $at, .LE16C50_801A559C
/* E3468C 801A4F5C 26240014 */   addiu      $a0, $s1, 0x14
/* E34690 801A4F60 100001CB */  b           .LE16C50_801A5690
/* E34694 801A4F64 8FBF0054 */   lw         $ra, 0x54($sp)
/* E34698 801A4F68 44812000 */  mtc1        $at, $ft0
.LE16C50_801A4F6C:
/* E3469C 801A4F6C C6260154 */  lwc1        $ft1, 0x154($s1)
/* E346A0 801A4F70 44800000 */  mtc1        $zero, $fv0
/* E346A4 801A4F74 3C10800C */  lui         $s0, %hi(D_800C5D34)
/* E346A8 801A4F78 4606203C */  c.lt.s      $ft0, $ft1
/* E346AC 801A4F7C A620004C */  sh          $zero, 0x4C($s1)
/* E346B0 801A4F80 2419006C */  addiu       $t9, $zero, 0x6C
/* E346B4 801A4F84 26075D34 */  addiu       $a3, $s0, %lo(D_800C5D34)
/* E346B8 801A4F88 4500000A */  bc1f        .LE16C50_801A4FB4
/* E346BC 801A4F8C 3C043903 */   lui        $a0, (0x39033079 >> 16)
/* E346C0 801A4F90 862F004E */  lh          $t7, 0x4E($s1)
/* E346C4 801A4F94 A639009E */  sh          $t9, 0x9E($s1)
/* E346C8 801A4F98 3C01801C */  lui         $at, %hi(D_E16C50_801C177C)
/* E346CC 801A4F9C 25F80001 */  addiu       $t8, $t7, 0x1
/* E346D0 801A4FA0 A638004E */  sh          $t8, 0x4E($s1)
/* E346D4 801A4FA4 C428177C */  lwc1        $ft2, %lo(D_E16C50_801C177C)($at)
/* E346D8 801A4FA8 24080038 */  addiu       $t0, $zero, 0x38
/* E346DC 801A4FAC A628004C */  sh          $t0, 0x4C($s1)
/* E346E0 801A4FB0 E62800D8 */  swc1        $ft2, 0xD8($s1)
.LE16C50_801A4FB4:
/* E346E4 801A4FB4 C6340014 */  lwc1        $fs0, 0x14($s1)
/* E346E8 801A4FB8 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E346EC 801A4FBC 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E346F0 801A4FC0 46140032 */  c.eq.s      $fv0, $fs0
/* E346F4 801A4FC4 34843079 */  ori         $a0, $a0, (0x39033079 & 0xFFFF)
/* E346F8 801A4FC8 262503FC */  addiu       $a1, $s1, 0x3FC
/* E346FC 801A4FCC 24060004 */  addiu       $a2, $zero, 0x4
/* E34700 801A4FD0 45020006 */  bc1fl       .LE16C50_801A4FEC
/* E34704 801A4FD4 3C0143B4 */   lui        $at, (0x43B40000 >> 16)
/* E34708 801A4FD8 AFA70010 */  sw          $a3, 0x10($sp)
/* E3470C 801A4FDC 0C006486 */  jal         Audio_PlaySfx
/* E34710 801A4FE0 AFA90014 */   sw         $t1, 0x14($sp)
/* E34714 801A4FE4 C6340014 */  lwc1        $fs0, 0x14($s1)
/* E34718 801A4FE8 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
.LE16C50_801A4FEC:
/* E3471C 801A4FEC 44810000 */  mtc1        $at, $fv0
/* E34720 801A4FF0 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E34724 801A4FF4 4481E000 */  mtc1        $at, $fs4
/* E34728 801A4FF8 C62A0154 */  lwc1        $ft3, 0x154($s1)
/* E3472C 801A4FFC 3C10800C */  lui         $s0, %hi(D_800C5D34)
/* E34730 801A5000 3C043903 */  lui         $a0, (0x39033079 >> 16)
/* E34734 801A5004 461C5480 */  add.s       $ft5, $ft3, $fs4
/* E34738 801A5008 26105D34 */  addiu       $s0, $s0, %lo(D_800C5D34)
/* E3473C 801A500C 34843079 */  ori         $a0, $a0, (0x39033079 & 0xFFFF)
/* E34740 801A5010 262503FC */  addiu       $a1, $s1, 0x3FC
/* E34744 801A5014 E6320154 */  swc1        $ft5, 0x154($s1)
/* E34748 801A5018 C6240154 */  lwc1        $ft0, 0x154($s1)
/* E3474C 801A501C 24060004 */  addiu       $a2, $zero, 0x4
/* E34750 801A5020 4604A180 */  add.s       $ft1, $fs0, $ft0
/* E34754 801A5024 E6260014 */  swc1        $ft1, 0x14($s1)
/* E34758 801A5028 C6340014 */  lwc1        $fs0, 0x14($s1)
/* E3475C 801A502C 4614003E */  c.le.s      $fv0, $fs0
/* E34760 801A5030 00000000 */  nop
/* E34764 801A5034 4500000A */  bc1f        .LE16C50_801A5060
/* E34768 801A5038 00000000 */   nop
/* E3476C 801A503C 4600A201 */  sub.s       $ft2, $fs0, $fv0
/* E34770 801A5040 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E34774 801A5044 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E34778 801A5048 02003825 */  or          $a3, $s0, $zero
/* E3477C 801A504C E6280014 */  swc1        $ft2, 0x14($s1)
/* E34780 801A5050 AFAA0014 */  sw          $t2, 0x14($sp)
/* E34784 801A5054 0C006486 */  jal         Audio_PlaySfx
/* E34788 801A5058 AFB00010 */   sw         $s0, 0x10($sp)
/* E3478C 801A505C C6340014 */  lwc1        $fs0, 0x14($s1)
.LE16C50_801A5060:
/* E34790 801A5060 1000018A */  b           .LE16C50_801A568C
/* E34794 801A5064 E634007C */   swc1       $fs0, 0x7C($s1)
.LE16C50_801A5068:
/* E34798 801A5068 C62A0014 */  lwc1        $ft3, 0x14($s1)
/* E3479C 801A506C C6320154 */  lwc1        $ft5, 0x154($s1)
/* E347A0 801A5070 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E347A4 801A5074 44810000 */  mtc1        $at, $fv0
/* E347A8 801A5078 46125100 */  add.s       $ft0, $ft3, $ft5
/* E347AC 801A507C 240B0038 */  addiu       $t3, $zero, 0x38
/* E347B0 801A5080 3C10800C */  lui         $s0, %hi(D_800C5D34)
/* E347B4 801A5084 3C043903 */  lui         $a0, (0x39033079 >> 16)
/* E347B8 801A5088 E6240014 */  swc1        $ft0, 0x14($s1)
/* E347BC 801A508C C6340014 */  lwc1        $fs0, 0x14($s1)
/* E347C0 801A5090 A62B004C */  sh          $t3, 0x4C($s1)
/* E347C4 801A5094 26075D34 */  addiu       $a3, $s0, %lo(D_800C5D34)
/* E347C8 801A5098 4614003E */  c.le.s      $fv0, $fs0
/* E347CC 801A509C 34843079 */  ori         $a0, $a0, (0x39033079 & 0xFFFF)
/* E347D0 801A50A0 262503FC */  addiu       $a1, $s1, 0x3FC
/* E347D4 801A50A4 4502000A */  bc1fl       .LE16C50_801A50D0
/* E347D8 801A50A8 8623009E */   lh         $v1, 0x9E($s1)
/* E347DC 801A50AC 4600A181 */  sub.s       $ft1, $fs0, $fv0
/* E347E0 801A50B0 3C0C800C */  lui         $t4, %hi(D_800C5D3C)
/* E347E4 801A50B4 258C5D3C */  addiu       $t4, $t4, %lo(D_800C5D3C)
/* E347E8 801A50B8 24060004 */  addiu       $a2, $zero, 0x4
/* E347EC 801A50BC E6260014 */  swc1        $ft1, 0x14($s1)
/* E347F0 801A50C0 AFAC0014 */  sw          $t4, 0x14($sp)
/* E347F4 801A50C4 0C006486 */  jal         Audio_PlaySfx
/* E347F8 801A50C8 AFA70010 */   sw         $a3, 0x10($sp)
/* E347FC 801A50CC 8623009E */  lh          $v1, 0x9E($s1)
.LE16C50_801A50D0:
/* E34800 801A50D0 26240008 */  addiu       $a0, $s1, 0x8
/* E34804 801A50D4 2861002E */  slti        $at, $v1, 0x2E
/* E34808 801A50D8 10200008 */  beqz        $at, .LE16C50_801A50FC
/* E3480C 801A50DC 3C01801C */   lui        $at, %hi(D_E16C50_801C1780)
/* E34810 801A50E0 C4201780 */  lwc1        $fv0, %lo(D_E16C50_801C1780)($at)
/* E34814 801A50E4 3C05C47A */  lui         $a1, (0xC47A0000 >> 16)
/* E34818 801A50E8 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E3481C 801A50EC 44060000 */  mfc1        $a2, $fv0
/* E34820 801A50F0 0C026F0B */  jal         Math_SmoothStepToF
/* E34824 801A50F4 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E34828 801A50F8 8623009E */  lh          $v1, 0x9E($s1)
.LE16C50_801A50FC:
/* E3482C 801A50FC 2401001E */  addiu       $at, $zero, 0x1E
/* E34830 801A5100 14610061 */  bne         $v1, $at, .LE16C50_801A5288
/* E34834 801A5104 3C01447A */   lui        $at, (0x447A0000 >> 16)
/* E34838 801A5108 44815000 */  mtc1        $at, $ft3
/* E3483C 801A510C C628000C */  lwc1        $ft2, 0xC($s1)
/* E34840 801A5110 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1D88)
/* E34844 801A5114 8E250004 */  lw          $a1, 0x4($s1)
/* E34848 801A5118 460A4480 */  add.s       $ft5, $ft2, $ft3
/* E3484C 801A511C 240D0001 */  addiu       $t5, $zero, 0x1
/* E34850 801A5120 AFAD0010 */  sw          $t5, 0x10($sp)
/* E34854 801A5124 24845D68 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1D88)
/* E34858 801A5128 44069000 */  mfc1        $a2, $ft5
/* E3485C 801A512C 0C06833B */  jal         func_E16C50_801A0CEC
/* E34860 801A5130 3C0741A0 */   lui        $a3, (0x41A00000 >> 16)
/* E34864 801A5134 3C028017 */  lui         $v0, %hi(gMainController)
/* E34868 801A5138 8C427AF8 */  lw          $v0, %lo(gMainController)($v0)
/* E3486C 801A513C 3C018013 */  lui         $at, %hi(D_80137E84)
/* E34870 801A5140 240E0001 */  addiu       $t6, $zero, 0x1
/* E34874 801A5144 00220821 */  addu        $at, $at, $v0
/* E34878 801A5148 A02E7E84 */  sb          $t6, %lo(D_80137E84)($at)
/* E3487C 801A514C 3C018017 */  lui         $at, %hi(D_Timer_80177BD0)
/* E34880 801A5150 0002C040 */  sll         $t8, $v0, 1
/* E34884 801A5154 00380821 */  addu        $at, $at, $t8
/* E34888 801A5158 240F0046 */  addiu       $t7, $zero, 0x46
/* E3488C 801A515C A42F7BD0 */  sh          $t7, %lo(D_Timer_80177BD0)($at)
/* E34890 801A5160 3C01801C */  lui         $at, %hi(D_E16C50_801C1784)
/* E34894 801A5164 C43E1784 */  lwc1        $fs5, %lo(D_E16C50_801C1784)($at)
/* E34898 801A5168 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E3489C 801A516C 4481E000 */  mtc1        $at, $fs4
/* E348A0 801A5170 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E348A4 801A5174 4481D000 */  mtc1        $at, $fs3
/* E348A8 801A5178 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E348AC 801A517C 3C10801C */  lui         $s0, %hi(D_E16C50_801BF8F0)
/* E348B0 801A5180 4481C000 */  mtc1        $at, $fs2
/* E348B4 801A5184 2610F8F0 */  addiu       $s0, $s0, %lo(D_E16C50_801BF8F0)
.LE16C50_801A5188:
/* E348B8 801A5188 0C0013AC */  jal         Rand_ZeroOne
/* E348BC 801A518C 00000000 */   nop
/* E348C0 801A5190 0C0013AC */  jal         Rand_ZeroOne
/* E348C4 801A5194 46000586 */   mov.s      $fs1, $fv0
/* E348C8 801A5198 0C0013AC */  jal         Rand_ZeroOne
/* E348CC 801A519C 46000506 */   mov.s      $fs0, $fv0
/* E348D0 801A51A0 461CB081 */  sub.s       $fv1, $fs1, $fs4
/* E348D4 801A51A4 C6240004 */  lwc1        $ft0, 0x4($s1)
/* E348D8 801A51A8 C626000C */  lwc1        $ft1, 0xC($s1)
/* E348DC 801A51AC C6120000 */  lwc1        $ft5, 0x0($s0)
/* E348E0 801A51B0 46021280 */  add.s       $ft3, $fv1, $fv1
/* E348E4 801A51B4 3C01C120 */  lui         $at, (0xC1200000 >> 16)
/* E348E8 801A51B8 4600C386 */  mov.s       $fa1, $fs2
/* E348EC 801A51BC 461E3200 */  add.s       $ft2, $ft1, $fs5
/* E348F0 801A51C0 46182300 */  add.s       $fa0, $ft0, $fs2
/* E348F4 801A51C4 44064000 */  mfc1        $a2, $ft2
/* E348F8 801A51C8 C6080004 */  lwc1        $ft2, 0x4($s0)
/* E348FC 801A51CC 46125100 */  add.s       $ft0, $ft3, $ft5
/* E34900 801A51D0 461CA401 */  sub.s       $ft4, $fs0, $fs4
/* E34904 801A51D4 44072000 */  mfc1        $a3, $ft0
/* E34908 801A51D8 44812000 */  mtc1        $at, $ft0
/* E3490C 801A51DC 461A4280 */  add.s       $ft3, $ft2, $fs3
/* E34910 801A51E0 46040202 */  mul.s       $ft2, $fv0, $ft0
/* E34914 801A51E4 46108180 */  add.s       $ft1, $ft4, $ft4
/* E34918 801A51E8 460A3480 */  add.s       $ft5, $ft1, $ft3
/* E3491C 801A51EC 461A4181 */  sub.s       $ft1, $ft2, $fs3
/* E34920 801A51F0 E7B20010 */  swc1        $ft5, 0x10($sp)
/* E34924 801A51F4 0C067C0E */  jal         func_E16C50_8019F038
/* E34928 801A51F8 E7A60014 */   swc1       $ft1, 0x14($sp)
/* E3492C 801A51FC 0C0013AC */  jal         Rand_ZeroOne
/* E34930 801A5200 00000000 */   nop
/* E34934 801A5204 0C0013AC */  jal         Rand_ZeroOne
/* E34938 801A5208 46000586 */   mov.s      $fs1, $fv0
/* E3493C 801A520C 0C0013AC */  jal         Rand_ZeroOne
/* E34940 801A5210 46000506 */   mov.s      $fs0, $fv0
/* E34944 801A5214 461CB081 */  sub.s       $fv1, $fs1, $fs4
/* E34948 801A5218 C62A0004 */  lwc1        $ft3, 0x4($s1)
/* E3494C 801A521C C632000C */  lwc1        $ft5, 0xC($s1)
/* E34950 801A5220 C6060000 */  lwc1        $ft1, 0x0($s0)
/* E34954 801A5224 46021200 */  add.s       $ft2, $fv1, $fv1
/* E34958 801A5228 3C01C120 */  lui         $at, (0xC1200000 >> 16)
/* E3495C 801A522C 4600C386 */  mov.s       $fa1, $fs2
/* E34960 801A5230 461E9100 */  add.s       $ft0, $ft5, $fs5
/* E34964 801A5234 46185301 */  sub.s       $fa0, $ft3, $fs2
/* E34968 801A5238 44062000 */  mfc1        $a2, $ft0
/* E3496C 801A523C C6040004 */  lwc1        $ft0, 0x4($s0)
/* E34970 801A5240 46064280 */  add.s       $ft3, $ft2, $ft1
/* E34974 801A5244 461CA401 */  sub.s       $ft4, $fs0, $fs4
/* E34978 801A5248 44075000 */  mfc1        $a3, $ft3
/* E3497C 801A524C 44815000 */  mtc1        $at, $ft3
/* E34980 801A5250 461A2200 */  add.s       $ft2, $ft0, $fs3
/* E34984 801A5254 460A0102 */  mul.s       $ft0, $fv0, $ft3
/* E34988 801A5258 46108480 */  add.s       $ft5, $ft4, $ft4
/* E3498C 801A525C 46089180 */  add.s       $ft1, $ft5, $ft2
/* E34990 801A5260 461A2481 */  sub.s       $ft5, $ft0, $fs3
/* E34994 801A5264 E7A60010 */  swc1        $ft1, 0x10($sp)
/* E34998 801A5268 0C067C0E */  jal         func_E16C50_8019F038
/* E3499C 801A526C E7B20014 */   swc1       $ft5, 0x14($sp)
/* E349A0 801A5270 3C19801C */  lui         $t9, %hi(D_E16C50_801BF920)
/* E349A4 801A5274 2739F920 */  addiu       $t9, $t9, %lo(D_E16C50_801BF920)
/* E349A8 801A5278 2610000C */  addiu       $s0, $s0, 0xC
/* E349AC 801A527C 1619FFC2 */  bne         $s0, $t9, .LE16C50_801A5188
/* E349B0 801A5280 00000000 */   nop
/* E349B4 801A5284 8623009E */  lh          $v1, 0x9E($s1)
.LE16C50_801A5288:
/* E349B8 801A5288 24010010 */  addiu       $at, $zero, 0x10
/* E349BC 801A528C 14610003 */  bne         $v1, $at, .LE16C50_801A529C
/* E349C0 801A5290 24080002 */   addiu      $t0, $zero, 0x2
/* E349C4 801A5294 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1E58)
/* E349C8 801A5298 A0285E38 */  sb          $t0, %lo(gObjects2F4 + 0x1E58)($at)
.LE16C50_801A529C:
/* E349CC 801A529C 3C01C461 */  lui         $at, (0xC4610000 >> 16)
/* E349D0 801A52A0 44814000 */  mtc1        $at, $ft2
/* E349D4 801A52A4 C6260008 */  lwc1        $ft1, 0x8($s1)
/* E349D8 801A52A8 3C014596 */  lui         $at, (0x45960000 >> 16)
/* E349DC 801A52AC 240B01F4 */  addiu       $t3, $zero, 0x1F4
/* E349E0 801A52B0 4608303E */  c.le.s      $ft1, $ft2
/* E349E4 801A52B4 00000000 */  nop
/* E349E8 801A52B8 45020016 */  bc1fl       .LE16C50_801A5314
/* E349EC 801A52BC C6280014 */   lwc1       $ft2, 0x14($s1)
/* E349F0 801A52C0 8629004E */  lh          $t1, 0x4E($s1)
/* E349F4 801A52C4 44811000 */  mtc1        $at, $fv1
/* E349F8 801A52C8 A62B009E */  sh          $t3, 0x9E($s1)
/* E349FC 801A52CC 252A0001 */  addiu       $t2, $t1, 0x1
/* E34A00 801A52D0 A62A004E */  sh          $t2, 0x4E($s1)
/* E34A04 801A52D4 3C01801C */  lui         $at, %hi(D_E16C50_801C1788)
/* E34A08 801A52D8 C42A1788 */  lwc1        $ft3, %lo(D_E16C50_801C1788)($at)
/* E34A0C 801A52DC 3C0C8018 */  lui         $t4, %hi(gPlayer)
/* E34A10 801A52E0 E62200E4 */  swc1        $fv1, 0xE4($s1)
/* E34A14 801A52E4 E62A0008 */  swc1        $ft3, 0x8($s1)
/* E34A18 801A52E8 8D8C8280 */  lw          $t4, %lo(gPlayer)($t4)
/* E34A1C 801A52EC 44800000 */  mtc1        $zero, $fv0
/* E34A20 801A52F0 C5840138 */  lwc1        $ft0, 0x138($t4)
/* E34A24 801A52F4 A620008A */  sh          $zero, 0x8A($s1)
/* E34A28 801A52F8 E620007C */  swc1        $fv0, 0x7C($s1)
/* E34A2C 801A52FC 46022481 */  sub.s       $ft5, $ft0, $fv1
/* E34A30 801A5300 E6200014 */  swc1        $fv0, 0x14($s1)
/* E34A34 801A5304 E6200070 */  swc1        $fv0, 0x70($s1)
/* E34A38 801A5308 E6200010 */  swc1        $fv0, 0x10($s1)
/* E34A3C 801A530C E632000C */  swc1        $ft5, 0xC($s1)
/* E34A40 801A5310 C6280014 */  lwc1        $ft2, 0x14($s1)
.LE16C50_801A5314:
/* E34A44 801A5314 100000DD */  b           .LE16C50_801A568C
/* E34A48 801A5318 E628007C */   swc1       $ft2, 0x7C($s1)
.LE16C50_801A531C:
/* E34A4C 801A531C 8623009E */  lh          $v1, 0x9E($s1)
/* E34A50 801A5320 2401012C */  addiu       $at, $zero, 0x12C
/* E34A54 801A5324 A620004C */  sh          $zero, 0x4C($s1)
/* E34A58 801A5328 1461000F */  bne         $v1, $at, .LE16C50_801A5368
/* E34A5C 801A532C 3C028017 */   lui        $v0, %hi(gMainController)
/* E34A60 801A5330 8C427AF8 */  lw          $v0, %lo(gMainController)($v0)
/* E34A64 801A5334 3C018013 */  lui         $at, %hi(D_80137E84)
/* E34A68 801A5338 240D0001 */  addiu       $t5, $zero, 0x1
/* E34A6C 801A533C 00220821 */  addu        $at, $at, $v0
/* E34A70 801A5340 A02D7E84 */  sb          $t5, %lo(D_80137E84)($at)
/* E34A74 801A5344 3C018017 */  lui         $at, %hi(D_Timer_80177BD0)
/* E34A78 801A5348 00027840 */  sll         $t7, $v0, 1
/* E34A7C 801A534C 002F0821 */  addu        $at, $at, $t7
/* E34A80 801A5350 240E00AA */  addiu       $t6, $zero, 0xAA
/* E34A84 801A5354 A42E7BD0 */  sh          $t6, %lo(D_Timer_80177BD0)($at)
/* E34A88 801A5358 3C018018 */  lui         $at, %hi(D_80178480)
/* E34A8C 801A535C 24180082 */  addiu       $t8, $zero, 0x82
/* E34A90 801A5360 AC388480 */  sw          $t8, %lo(D_80178480)($at)
/* E34A94 801A5364 8623009E */  lh          $v1, 0x9E($s1)
.LE16C50_801A5368:
/* E34A98 801A5368 240100C8 */  addiu       $at, $zero, 0xC8
/* E34A9C 801A536C 1461000D */  bne         $v1, $at, .LE16C50_801A53A4
/* E34AA0 801A5370 3C01447A */   lui        $at, (0x447A0000 >> 16)
/* E34AA4 801A5374 44815000 */  mtc1        $at, $ft3
/* E34AA8 801A5378 C626000C */  lwc1        $ft1, 0xC($s1)
/* E34AAC 801A537C 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1A94)
/* E34AB0 801A5380 8E250004 */  lw          $a1, 0x4($s1)
/* E34AB4 801A5384 460A3100 */  add.s       $ft0, $ft1, $ft3
/* E34AB8 801A5388 24190001 */  addiu       $t9, $zero, 0x1
/* E34ABC 801A538C AFB90010 */  sw          $t9, 0x10($sp)
/* E34AC0 801A5390 24845A74 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1A94)
/* E34AC4 801A5394 44062000 */  mfc1        $a2, $ft0
/* E34AC8 801A5398 0C06833B */  jal         func_E16C50_801A0CEC
/* E34ACC 801A539C 3C0741A0 */   lui        $a3, (0x41A00000 >> 16)
/* E34AD0 801A53A0 8623009E */  lh          $v1, 0x9E($s1)
.LE16C50_801A53A4:
/* E34AD4 801A53A4 286100C8 */  slti        $at, $v1, 0xC8
/* E34AD8 801A53A8 502000B9 */  beql        $at, $zero, .LE16C50_801A5690
/* E34ADC 801A53AC 8FBF0054 */   lw         $ra, 0x54($sp)
/* E34AE0 801A53B0 C632007C */  lwc1        $ft5, 0x7C($s1)
/* E34AE4 801A53B4 C6280154 */  lwc1        $ft2, 0x154($s1)
/* E34AE8 801A53B8 24080062 */  addiu       $t0, $zero, 0x62
/* E34AEC 801A53BC 240100AA */  addiu       $at, $zero, 0xAA
/* E34AF0 801A53C0 46089180 */  add.s       $ft1, $ft5, $ft2
/* E34AF4 801A53C4 A628004C */  sh          $t0, 0x4C($s1)
/* E34AF8 801A53C8 3C10800C */  lui         $s0, %hi(D_800C5D34)
/* E34AFC 801A53CC 14610012 */  bne         $v1, $at, .LE16C50_801A5418
/* E34B00 801A53D0 E626007C */   swc1       $ft1, 0x7C($s1)
/* E34B04 801A53D4 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E34B08 801A53D8 26075D34 */  addiu       $a3, $s0, %lo(D_800C5D34)
/* E34B0C 801A53DC 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E34B10 801A53E0 3C042943 */  lui         $a0, (0x29432073 >> 16)
/* E34B14 801A53E4 34842073 */  ori         $a0, $a0, (0x29432073 & 0xFFFF)
/* E34B18 801A53E8 AFA90014 */  sw          $t1, 0x14($sp)
/* E34B1C 801A53EC AFA70010 */  sw          $a3, 0x10($sp)
/* E34B20 801A53F0 262503FC */  addiu       $a1, $s1, 0x3FC
/* E34B24 801A53F4 0C006486 */  jal         Audio_PlaySfx
/* E34B28 801A53F8 24060004 */   addiu      $a2, $zero, 0x4
/* E34B2C 801A53FC 3C01C3FA */  lui         $at, (0xC3FA0000 >> 16)
/* E34B30 801A5400 44815000 */  mtc1        $at, $ft3
/* E34B34 801A5404 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1B64)
/* E34B38 801A5408 240A0002 */  addiu       $t2, $zero, 0x2
/* E34B3C 801A540C E62A0008 */  swc1        $ft3, 0x8($s1)
/* E34B40 801A5410 A02A5B44 */  sb          $t2, %lo(gObjects2F4 + 0x1B64)($at)
/* E34B44 801A5414 8623009E */  lh          $v1, 0x9E($s1)
.LE16C50_801A5418:
/* E34B48 801A5418 286100AB */  slti        $at, $v1, 0xAB
/* E34B4C 801A541C 10200016 */  beqz        $at, .LE16C50_801A5478
/* E34B50 801A5420 3C01801C */   lui        $at, %hi(D_E16C50_801C178C)
/* E34B54 801A5424 C434178C */  lwc1        $fs0, %lo(D_E16C50_801C178C)($at)
/* E34B58 801A5428 C6240010 */  lwc1        $ft0, 0x10($s1)
/* E34B5C 801A542C 46142302 */  mul.s       $fa0, $ft0, $fs0
/* E34B60 801A5430 0C008C94 */  jal         __cosf
/* E34B64 801A5434 00000000 */   nop
/* E34B68 801A5438 3C0142A0 */  lui         $at, (0x42A00000 >> 16)
/* E34B6C 801A543C 44819000 */  mtc1        $at, $ft5
/* E34B70 801A5440 C6260010 */  lwc1        $ft1, 0x10($s1)
/* E34B74 801A5444 46120202 */  mul.s       $ft2, $fv0, $ft5
/* E34B78 801A5448 E6280070 */  swc1        $ft2, 0x70($s1)
/* E34B7C 801A544C 46143302 */  mul.s       $fa0, $ft1, $fs0
/* E34B80 801A5450 0C008C24 */  jal         __sinf
/* E34B84 801A5454 00000000 */   nop
/* E34B88 801A5458 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E34B8C 801A545C 44812000 */  mtc1        $at, $ft0
/* E34B90 801A5460 3C0B8018 */  lui         $t3, %hi(gPlayer)
/* E34B94 801A5464 8D6B8280 */  lw          $t3, %lo(gPlayer)($t3)
/* E34B98 801A5468 46040482 */  mul.s       $ft5, $fv0, $ft0
/* E34B9C 801A546C C56A00C8 */  lwc1        $ft3, 0xC8($t3)
/* E34BA0 801A5470 46125200 */  add.s       $ft2, $ft3, $ft5
/* E34BA4 801A5474 E6280074 */  swc1        $ft2, 0x74($s1)
.LE16C50_801A5478:
/* E34BA8 801A5478 3C01433E */  lui         $at, (0x433E0000 >> 16)
/* E34BAC 801A547C 44813000 */  mtc1        $at, $ft1
/* E34BB0 801A5480 C6200010 */  lwc1        $fv0, 0x10($s1)
/* E34BB4 801A5484 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E34BB8 801A5488 4606003C */  c.lt.s      $fv0, $ft1
/* E34BBC 801A548C 00000000 */  nop
/* E34BC0 801A5490 45020006 */  bc1fl       .LE16C50_801A54AC
/* E34BC4 801A5494 862C009E */   lh         $t4, 0x9E($s1)
/* E34BC8 801A5498 44811000 */  mtc1        $at, $fv1
/* E34BCC 801A549C 00000000 */  nop
/* E34BD0 801A54A0 46020100 */  add.s       $ft0, $fv0, $fv1
/* E34BD4 801A54A4 E6240010 */  swc1        $ft0, 0x10($s1)
/* E34BD8 801A54A8 862C009E */  lh          $t4, 0x9E($s1)
.LE16C50_801A54AC:
/* E34BDC 801A54AC 24010032 */  addiu       $at, $zero, 0x32
/* E34BE0 801A54B0 1581001A */  bne         $t4, $at, .LE16C50_801A551C
/* E34BE4 801A54B4 3C01447A */   lui        $at, (0x447A0000 >> 16)
/* E34BE8 801A54B8 44819000 */  mtc1        $at, $ft5
/* E34BEC 801A54BC C62A000C */  lwc1        $ft3, 0xC($s1)
/* E34BF0 801A54C0 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1D88)
/* E34BF4 801A54C4 8E250004 */  lw          $a1, 0x4($s1)
/* E34BF8 801A54C8 46125200 */  add.s       $ft2, $ft3, $ft5
/* E34BFC 801A54CC 240D0002 */  addiu       $t5, $zero, 0x2
/* E34C00 801A54D0 AFAD0010 */  sw          $t5, 0x10($sp)
/* E34C04 801A54D4 24845D68 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1D88)
/* E34C08 801A54D8 44064000 */  mfc1        $a2, $ft2
/* E34C0C 801A54DC 0C06833B */  jal         func_E16C50_801A0CEC
/* E34C10 801A54E0 3C0742A0 */   lui        $a3, (0x42A00000 >> 16)
/* E34C14 801A54E4 3C028017 */  lui         $v0, %hi(gMainController)
/* E34C18 801A54E8 8C427AF8 */  lw          $v0, %lo(gMainController)($v0)
/* E34C1C 801A54EC 3C018013 */  lui         $at, %hi(D_80137E84)
/* E34C20 801A54F0 240E0001 */  addiu       $t6, $zero, 0x1
/* E34C24 801A54F4 00220821 */  addu        $at, $at, $v0
/* E34C28 801A54F8 A02E7E84 */  sb          $t6, %lo(D_80137E84)($at)
/* E34C2C 801A54FC 3C018017 */  lui         $at, %hi(D_Timer_80177BD0)
/* E34C30 801A5500 0002C040 */  sll         $t8, $v0, 1
/* E34C34 801A5504 00380821 */  addu        $at, $at, $t8
/* E34C38 801A5508 240F0064 */  addiu       $t7, $zero, 0x64
/* E34C3C 801A550C A42F7BD0 */  sh          $t7, %lo(D_Timer_80177BD0)($at)
/* E34C40 801A5510 3C018018 */  lui         $at, %hi(D_80178480)
/* E34C44 801A5514 2419000A */  addiu       $t9, $zero, 0xA
/* E34C48 801A5518 AC398480 */  sw          $t9, %lo(D_80178480)($at)
.LE16C50_801A551C:
/* E34C4C 801A551C 3C01801C */  lui         $at, %hi(D_E16C50_801C1790)
/* E34C50 801A5520 C4241790 */  lwc1        $ft0, %lo(D_E16C50_801C1790)($at)
/* E34C54 801A5524 C6260008 */  lwc1        $ft1, 0x8($s1)
/* E34C58 801A5528 3C014596 */  lui         $at, (0x45960000 >> 16)
/* E34C5C 801A552C 240A0064 */  addiu       $t2, $zero, 0x64
/* E34C60 801A5530 4604303C */  c.lt.s      $ft1, $ft0
/* E34C64 801A5534 3C0B8018 */  lui         $t3, %hi(gPlayer)
/* E34C68 801A5538 45020055 */  bc1fl       .LE16C50_801A5690
/* E34C6C 801A553C 8FBF0054 */   lw         $ra, 0x54($sp)
/* E34C70 801A5540 44811000 */  mtc1        $at, $fv1
/* E34C74 801A5544 8628004E */  lh          $t0, 0x4E($s1)
/* E34C78 801A5548 3C01C3FA */  lui         $at, (0xC3FA0000 >> 16)
/* E34C7C 801A554C 44815000 */  mtc1        $at, $ft3
/* E34C80 801A5550 25090001 */  addiu       $t1, $t0, 0x1
/* E34C84 801A5554 A629004E */  sh          $t1, 0x4E($s1)
/* E34C88 801A5558 A62A009E */  sh          $t2, 0x9E($s1)
/* E34C8C 801A555C E62200E4 */  swc1        $fv1, 0xE4($s1)
/* E34C90 801A5560 E62A0008 */  swc1        $ft3, 0x8($s1)
/* E34C94 801A5564 8D6B8280 */  lw          $t3, %lo(gPlayer)($t3)
/* E34C98 801A5568 44800000 */  mtc1        $zero, $fv0
/* E34C9C 801A556C 3C0143A5 */  lui         $at, (0x43A50000 >> 16)
/* E34CA0 801A5570 C5720138 */  lwc1        $ft5, 0x138($t3)
/* E34CA4 801A5574 44813000 */  mtc1        $at, $ft1
/* E34CA8 801A5578 A620004C */  sh          $zero, 0x4C($s1)
/* E34CAC 801A557C 46029201 */  sub.s       $ft2, $ft5, $fv1
/* E34CB0 801A5580 E6200010 */  swc1        $fv0, 0x10($s1)
/* E34CB4 801A5584 E6200154 */  swc1        $fv0, 0x154($s1)
/* E34CB8 801A5588 E6200070 */  swc1        $fv0, 0x70($s1)
/* E34CBC 801A558C E628000C */  swc1        $ft2, 0xC($s1)
/* E34CC0 801A5590 E6200074 */  swc1        $fv0, 0x74($s1)
/* E34CC4 801A5594 1000003D */  b           .LE16C50_801A568C
/* E34CC8 801A5598 E6260014 */   swc1       $ft1, 0x14($s1)
.LE16C50_801A559C:
/* E34CCC 801A559C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E34CD0 801A55A0 44811000 */  mtc1        $at, $fv1
/* E34CD4 801A55A4 44800000 */  mtc1        $zero, $fv0
/* E34CD8 801A55A8 3C073FC0 */  lui         $a3, (0x3FC00000 >> 16)
/* E34CDC 801A55AC 44061000 */  mfc1        $a2, $fv1
/* E34CE0 801A55B0 44050000 */  mfc1        $a1, $fv0
/* E34CE4 801A55B4 0C026F4E */  jal         Math_SmoothStepToAngle
/* E34CE8 801A55B8 E7A20010 */   swc1       $fv1, 0x10($sp)
/* E34CEC 801A55BC 8623009E */  lh          $v1, 0x9E($s1)
/* E34CF0 801A55C0 24010041 */  addiu       $at, $zero, 0x41
/* E34CF4 801A55C4 1461000D */  bne         $v1, $at, .LE16C50_801A55FC
/* E34CF8 801A55C8 3C01447A */   lui        $at, (0x447A0000 >> 16)
/* E34CFC 801A55CC 44815000 */  mtc1        $at, $ft3
/* E34D00 801A55D0 C624000C */  lwc1        $ft0, 0xC($s1)
/* E34D04 801A55D4 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1A94)
/* E34D08 801A55D8 8E250004 */  lw          $a1, 0x4($s1)
/* E34D0C 801A55DC 460A2480 */  add.s       $ft5, $ft0, $ft3
/* E34D10 801A55E0 AFB00010 */  sw          $s0, 0x10($sp)
/* E34D14 801A55E4 24845A74 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1A94)
/* E34D18 801A55E8 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E34D1C 801A55EC 44069000 */  mfc1        $a2, $ft5
/* E34D20 801A55F0 0C06833B */  jal         func_E16C50_801A0CEC
/* E34D24 801A55F4 00000000 */   nop
/* E34D28 801A55F8 8623009E */  lh          $v1, 0x9E($s1)
.LE16C50_801A55FC:
/* E34D2C 801A55FC 14600004 */  bnez        $v1, .LE16C50_801A5610
/* E34D30 801A5600 240100D2 */   addiu      $at, $zero, 0xD2
/* E34D34 801A5604 240C00DC */  addiu       $t4, $zero, 0xDC
/* E34D38 801A5608 A62C009E */  sh          $t4, 0x9E($s1)
/* E34D3C 801A560C 8623009E */  lh          $v1, 0x9E($s1)
.LE16C50_801A5610:
/* E34D40 801A5610 14610004 */  bne         $v1, $at, .LE16C50_801A5624
/* E34D44 801A5614 26240008 */   addiu      $a0, $s1, 0x8
/* E34D48 801A5618 A620004C */  sh          $zero, 0x4C($s1)
/* E34D4C 801A561C A630008A */  sh          $s0, 0x8A($s1)
/* E34D50 801A5620 8623009E */  lh          $v1, 0x9E($s1)
.LE16C50_801A5624:
/* E34D54 801A5624 28610064 */  slti        $at, $v1, 0x64
/* E34D58 801A5628 1420000A */  bnez        $at, .LE16C50_801A5654
/* E34D5C 801A562C 3C01801C */   lui        $at, %hi(D_E16C50_801C1794)
/* E34D60 801A5630 C4201794 */  lwc1        $fv0, %lo(D_E16C50_801C1794)($at)
/* E34D64 801A5634 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E34D68 801A5638 4481D000 */  mtc1        $at, $fs3
/* E34D6C 801A563C 44060000 */  mfc1        $a2, $fv0
/* E34D70 801A5640 3C054334 */  lui         $a1, (0x43340000 >> 16)
/* E34D74 801A5644 4407D000 */  mfc1        $a3, $fs3
/* E34D78 801A5648 0C026F0B */  jal         Math_SmoothStepToF
/* E34D7C 801A564C E7A00010 */   swc1       $fv0, 0x10($sp)
/* E34D80 801A5650 8623009E */  lh          $v1, 0x9E($s1)
.LE16C50_801A5654:
/* E34D84 801A5654 24010096 */  addiu       $at, $zero, 0x96
/* E34D88 801A5658 54610008 */  bnel        $v1, $at, .LE16C50_801A567C
/* E34D8C 801A565C 24010032 */   addiu      $at, $zero, 0x32
/* E34D90 801A5660 0C068D1A */  jal         func_E16C50_801A3468
/* E34D94 801A5664 02202025 */   or         $a0, $s1, $zero
/* E34D98 801A5668 3C01801C */  lui         $at, %hi(D_E16C50_801C1798)
/* E34D9C 801A566C C4281798 */  lwc1        $ft2, %lo(D_E16C50_801C1798)($at)
/* E34DA0 801A5670 8623009E */  lh          $v1, 0x9E($s1)
/* E34DA4 801A5674 E62800D8 */  swc1        $ft2, 0xD8($s1)
/* E34DA8 801A5678 24010032 */  addiu       $at, $zero, 0x32
.LE16C50_801A567C:
/* E34DAC 801A567C 14610003 */  bne         $v1, $at, .LE16C50_801A568C
/* E34DB0 801A5680 240D0002 */   addiu      $t5, $zero, 0x2
/* E34DB4 801A5684 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x1B64)
/* E34DB8 801A5688 A02D5B44 */  sb          $t5, %lo(gObjects2F4 + 0x1B64)($at)
.LE16C50_801A568C:
/* E34DBC 801A568C 8FBF0054 */  lw          $ra, 0x54($sp)
.LE16C50_801A5690:
/* E34DC0 801A5690 D7B40018 */  ldc1        $fs0, 0x18($sp)
/* E34DC4 801A5694 D7B60020 */  ldc1        $fs1, 0x20($sp)
/* E34DC8 801A5698 D7B80028 */  ldc1        $fs2, 0x28($sp)
/* E34DCC 801A569C D7BA0030 */  ldc1        $fs3, 0x30($sp)
/* E34DD0 801A56A0 D7BC0038 */  ldc1        $fs4, 0x38($sp)
/* E34DD4 801A56A4 D7BE0040 */  ldc1        $fs5, 0x40($sp)
/* E34DD8 801A56A8 8FB0004C */  lw          $s0, 0x4C($sp)
/* E34DDC 801A56AC 8FB10050 */  lw          $s1, 0x50($sp)
/* E34DE0 801A56B0 03E00008 */  jr          $ra
/* E34DE4 801A56B4 27BD0058 */   addiu      $sp, $sp, 0x58
.section .late_rodata
dlabel D_E16C50_801C179C
/* E50ECC 801C179C 4432C000 */ .float 715

dlabel D_E16C50_801C17A0
/* E50ED0 801C17A0 4432C000 */ .float 715

dlabel D_E16C50_801C17A4
/* E50ED4 801C17A4 4432C000 */ .float 715

dlabel D_E16C50_801C17A8
/* E50ED8 801C17A8 43898000 */ .float 275

dlabel D_E16C50_801C17AC
/* E50EDC 801C17AC 4432C000 */ .float 715

dlabel D_E16C50_801C17B0
/* E50EE0 801C17B0 3E4CCCCD */ .float 0.200000003

dlabel D_E16C50_801C17B4
/* E50EE4 801C17B4 3E4CCCCD */ .float 0.200000003

dlabel D_E16C50_801C17B8
/* E50EE8 801C17B8 3DCCCCCD */ .float 0.1000000015


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A56B8
/* E34DE8 801A56B8 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E34DEC 801A56BC AFB00020 */  sw          $s0, 0x20($sp)
/* E34DF0 801A56C0 00808025 */  or          $s0, $a0, $zero
/* E34DF4 801A56C4 AFBF0024 */  sw          $ra, 0x24($sp)
/* E34DF8 801A56C8 24030002 */  addiu       $v1, $zero, 0x2
/* E34DFC 801A56CC 8602008A */  lh          $v0, 0x8A($s0)
/* E34E00 801A56D0 24010004 */  addiu       $at, $zero, 0x4
/* E34E04 801A56D4 3C074040 */  lui         $a3, (0x40400000 >> 16)
/* E34E08 801A56D8 5043000A */  beql        $v0, $v1, .LE16C50_801A5704
/* E34E0C 801A56DC 8602004C */   lh         $v0, 0x4C($s0)
/* E34E10 801A56E0 10410044 */  beq         $v0, $at, .LE16C50_801A57F4
/* E34E14 801A56E4 24010005 */   addiu      $at, $zero, 0x5
/* E34E18 801A56E8 10410073 */  beq         $v0, $at, .LE16C50_801A58B8
/* E34E1C 801A56EC 24010007 */   addiu      $at, $zero, 0x7
/* E34E20 801A56F0 504100D0 */  beql        $v0, $at, .LE16C50_801A5A34
/* E34E24 801A56F4 8602004C */   lh         $v0, 0x4C($s0)
/* E34E28 801A56F8 1000010C */  b           .LE16C50_801A5B2C
/* E34E2C 801A56FC 8FBF0024 */   lw         $ra, 0x24($sp)
/* E34E30 801A5700 8602004C */  lh          $v0, 0x4C($s0)
.LE16C50_801A5704:
/* E34E34 801A5704 24040059 */  addiu       $a0, $zero, 0x59
/* E34E38 801A5708 3C014170 */  lui         $at, (0x41700000 >> 16)
/* E34E3C 801A570C 54820005 */  bnel        $a0, $v0, .LE16C50_801A5724
/* E34E40 801A5710 860F008C */   lh         $t7, 0x8C($s0)
/* E34E44 801A5714 860E004E */  lh          $t6, 0x4E($s0)
/* E34E48 801A5718 506E0005 */  beql        $v1, $t6, .LE16C50_801A5730
/* E34E4C 801A571C 44802000 */   mtc1       $zero, $ft0
/* E34E50 801A5720 860F008C */  lh          $t7, 0x8C($s0)
.LE16C50_801A5724:
/* E34E54 801A5724 15E00006 */  bnez        $t7, .LE16C50_801A5740
/* E34E58 801A5728 00000000 */   nop
/* E34E5C 801A572C 44802000 */  mtc1        $zero, $ft0
.LE16C50_801A5730:
/* E34E60 801A5730 A600004C */  sh          $zero, 0x4C($s0)
/* E34E64 801A5734 A600004E */  sh          $zero, 0x4E($s0)
/* E34E68 801A5738 8602004C */  lh          $v0, 0x4C($s0)
/* E34E6C 801A573C E604007C */  swc1        $ft0, 0x7C($s0)
.LE16C50_801A5740:
/* E34E70 801A5740 54820009 */  bnel        $a0, $v0, .LE16C50_801A5768
/* E34E74 801A5744 3C013F80 */   lui        $at, (0x3F800000 >> 16)
/* E34E78 801A5748 C606007C */  lwc1        $ft1, 0x7C($s0)
/* E34E7C 801A574C 44814000 */  mtc1        $at, $ft2
/* E34E80 801A5750 8618004E */  lh          $t8, 0x4E($s0)
/* E34E84 801A5754 46083280 */  add.s       $ft3, $ft1, $ft2
/* E34E88 801A5758 27190001 */  addiu       $t9, $t8, 0x1
/* E34E8C 801A575C A619004E */  sh          $t9, 0x4E($s0)
/* E34E90 801A5760 E60A007C */  swc1        $ft3, 0x7C($s0)
/* E34E94 801A5764 3C013F80 */  lui         $at, (0x3F800000 >> 16)
.LE16C50_801A5768:
/* E34E98 801A5768 44810000 */  mtc1        $at, $fv0
/* E34E9C 801A576C 8E05007C */  lw          $a1, 0x7C($s0)
/* E34EA0 801A5770 26040014 */  addiu       $a0, $s0, 0x14
/* E34EA4 801A5774 44060000 */  mfc1        $a2, $fv0
/* E34EA8 801A5778 0C026F4E */  jal         Math_SmoothStepToAngle
/* E34EAC 801A577C E7A00010 */   swc1       $fv0, 0x10($sp)
/* E34EB0 801A5780 8602004C */  lh          $v0, 0x4C($s0)
/* E34EB4 801A5784 28410013 */  slti        $at, $v0, 0x13
/* E34EB8 801A5788 1420000D */  bnez        $at, .LE16C50_801A57C0
/* E34EBC 801A578C 3C01801C */   lui        $at, %hi(D_E16C50_801C179C)
/* E34EC0 801A5790 C430179C */  lwc1        $ft4, %lo(D_E16C50_801C179C)($at)
/* E34EC4 801A5794 8E080028 */  lw          $t0, 0x28($s0)
/* E34EC8 801A5798 3C0143DC */  lui         $at, (0x43DC0000 >> 16)
/* E34ECC 801A579C 44819000 */  mtc1        $at, $ft5
/* E34ED0 801A57A0 E5100050 */  swc1        $ft4, 0x50($t0)
/* E34ED4 801A57A4 8E090028 */  lw          $t1, 0x28($s0)
/* E34ED8 801A57A8 3C0142DC */  lui         $at, (0x42DC0000 >> 16)
/* E34EDC 801A57AC 44812000 */  mtc1        $at, $ft0
/* E34EE0 801A57B0 E5320058 */  swc1        $ft5, 0x58($t1)
/* E34EE4 801A57B4 8E0A0028 */  lw          $t2, 0x28($s0)
/* E34EE8 801A57B8 E5440060 */  swc1        $ft0, 0x60($t2)
/* E34EEC 801A57BC 8602004C */  lh          $v0, 0x4C($s0)
.LE16C50_801A57C0:
/* E34EF0 801A57C0 28410025 */  slti        $at, $v0, 0x25
/* E34EF4 801A57C4 142000D8 */  bnez        $at, .LE16C50_801A5B28
/* E34EF8 801A57C8 3C01435C */   lui        $at, (0x435C0000 >> 16)
/* E34EFC 801A57CC 44810000 */  mtc1        $at, $fv0
/* E34F00 801A57D0 8E0B0028 */  lw          $t3, 0x28($s0)
/* E34F04 801A57D4 3C01801C */  lui         $at, %hi(D_E16C50_801C17A0)
/* E34F08 801A57D8 E5600050 */  swc1        $fv0, 0x50($t3)
/* E34F0C 801A57DC 8E0C0028 */  lw          $t4, 0x28($s0)
/* E34F10 801A57E0 C42617A0 */  lwc1        $ft1, %lo(D_E16C50_801C17A0)($at)
/* E34F14 801A57E4 E5860058 */  swc1        $ft1, 0x58($t4)
/* E34F18 801A57E8 8E0D0028 */  lw          $t5, 0x28($s0)
/* E34F1C 801A57EC 100000CE */  b           .LE16C50_801A5B28
/* E34F20 801A57F0 E5A00060 */   swc1       $fv0, 0x60($t5)
.LE16C50_801A57F4:
/* E34F24 801A57F4 8602004C */  lh          $v0, 0x4C($s0)
/* E34F28 801A57F8 24010063 */  addiu       $at, $zero, 0x63
/* E34F2C 801A57FC 50410005 */  beql        $v0, $at, .LE16C50_801A5814
/* E34F30 801A5800 860F008E */   lh         $t7, 0x8E($s0)
/* E34F34 801A5804 860E008C */  lh          $t6, 0x8C($s0)
/* E34F38 801A5808 55C00010 */  bnel        $t6, $zero, .LE16C50_801A584C
/* E34F3C 801A580C 28410015 */   slti       $at, $v0, 0x15
/* E34F40 801A5810 860F008E */  lh          $t7, 0x8E($s0)
.LE16C50_801A5814:
/* E34F44 801A5814 A600004C */  sh          $zero, 0x4C($s0)
/* E34F48 801A5818 24190005 */  addiu       $t9, $zero, 0x5
/* E34F4C 801A581C 55E00006 */  bnel        $t7, $zero, .LE16C50_801A5838
/* E34F50 801A5820 A619008A */   sh         $t9, 0x8A($s0)
/* E34F54 801A5824 8618008C */  lh          $t8, 0x8C($s0)
/* E34F58 801A5828 24080007 */  addiu       $t0, $zero, 0x7
/* E34F5C 801A582C 53000005 */  beql        $t8, $zero, .LE16C50_801A5844
/* E34F60 801A5830 A608008A */   sh         $t0, 0x8A($s0)
/* E34F64 801A5834 A619008A */  sh          $t9, 0x8A($s0)
.LE16C50_801A5838:
/* E34F68 801A5838 10000003 */  b           .LE16C50_801A5848
/* E34F6C 801A583C 8602004C */   lh         $v0, 0x4C($s0)
/* E34F70 801A5840 A608008A */  sh          $t0, 0x8A($s0)
.LE16C50_801A5844:
/* E34F74 801A5844 8602004C */  lh          $v0, 0x4C($s0)
.LE16C50_801A5848:
/* E34F78 801A5848 28410015 */  slti        $at, $v0, 0x15
.LE16C50_801A584C:
/* E34F7C 801A584C 1420000D */  bnez        $at, .LE16C50_801A5884
/* E34F80 801A5850 3C01801C */   lui        $at, %hi(D_E16C50_801C17A4)
/* E34F84 801A5854 C42817A4 */  lwc1        $ft2, %lo(D_E16C50_801C17A4)($at)
/* E34F88 801A5858 8E090028 */  lw          $t1, 0x28($s0)
/* E34F8C 801A585C 3C0142DC */  lui         $at, (0x42DC0000 >> 16)
/* E34F90 801A5860 44815000 */  mtc1        $at, $ft3
/* E34F94 801A5864 E5280050 */  swc1        $ft2, 0x50($t1)
/* E34F98 801A5868 8E0A0028 */  lw          $t2, 0x28($s0)
/* E34F9C 801A586C 3C01801C */  lui         $at, %hi(D_E16C50_801C17A8)
/* E34FA0 801A5870 E54A0058 */  swc1        $ft3, 0x58($t2)
/* E34FA4 801A5874 8E0B0028 */  lw          $t3, 0x28($s0)
/* E34FA8 801A5878 C43017A8 */  lwc1        $ft4, %lo(D_E16C50_801C17A8)($at)
/* E34FAC 801A587C E5700060 */  swc1        $ft4, 0x60($t3)
/* E34FB0 801A5880 8602004C */  lh          $v0, 0x4C($s0)
.LE16C50_801A5884:
/* E34FB4 801A5884 28410055 */  slti        $at, $v0, 0x55
/* E34FB8 801A5888 142000A7 */  bnez        $at, .LE16C50_801A5B28
/* E34FBC 801A588C 3C01435C */   lui        $at, (0x435C0000 >> 16)
/* E34FC0 801A5890 44810000 */  mtc1        $at, $fv0
/* E34FC4 801A5894 8E0C0028 */  lw          $t4, 0x28($s0)
/* E34FC8 801A5898 3C01801C */  lui         $at, %hi(D_E16C50_801C17AC)
/* E34FCC 801A589C E5800050 */  swc1        $fv0, 0x50($t4)
/* E34FD0 801A58A0 8E0D0028 */  lw          $t5, 0x28($s0)
/* E34FD4 801A58A4 C43217AC */  lwc1        $ft5, %lo(D_E16C50_801C17AC)($at)
/* E34FD8 801A58A8 E5B20058 */  swc1        $ft5, 0x58($t5)
/* E34FDC 801A58AC 8E0E0028 */  lw          $t6, 0x28($s0)
/* E34FE0 801A58B0 1000009D */  b           .LE16C50_801A5B28
/* E34FE4 801A58B4 E5C00060 */   swc1       $fv0, 0x60($t6)
.LE16C50_801A58B8:
/* E34FE8 801A58B8 860F004C */  lh          $t7, 0x4C($s0)
/* E34FEC 801A58BC 3C014596 */  lui         $at, (0x45960000 >> 16)
/* E34FF0 801A58C0 44812000 */  mtc1        $at, $ft0
/* E34FF4 801A58C4 24020041 */  addiu       $v0, $zero, 0x41
/* E34FF8 801A58C8 144F0003 */  bne         $v0, $t7, .LE16C50_801A58D8
/* E34FFC 801A58CC E60400E4 */   swc1       $ft0, 0xE4($s0)
/* E35000 801A58D0 2418001E */  addiu       $t8, $zero, 0x1E
/* E35004 801A58D4 A6180050 */  sh          $t8, 0x50($s0)
.LE16C50_801A58D8:
/* E35008 801A58D8 86190050 */  lh          $t9, 0x50($s0)
/* E3500C 801A58DC 3C098017 */  lui         $t1, %hi(gFrameCount)
/* E35010 801A58E0 53200003 */  beql        $t9, $zero, .LE16C50_801A58F0
/* E35014 801A58E4 8608004C */   lh         $t0, 0x4C($s0)
/* E35018 801A58E8 A602004C */  sh          $v0, 0x4C($s0)
/* E3501C 801A58EC 8608004C */  lh          $t0, 0x4C($s0)
.LE16C50_801A58F0:
/* E35020 801A58F0 5448008E */  bnel        $v0, $t0, .LE16C50_801A5B2C
/* E35024 801A58F4 8FBF0024 */   lw         $ra, 0x24($sp)
/* E35028 801A58F8 8D297DB0 */  lw          $t1, %lo(gFrameCount)($t1)
/* E3502C 801A58FC 3C0142FA */  lui         $at, (0x42FA0000 >> 16)
/* E35030 801A5900 312A0003 */  andi        $t2, $t1, 0x3
/* E35034 801A5904 55400089 */  bnel        $t2, $zero, .LE16C50_801A5B2C
/* E35038 801A5908 8FBF0024 */   lw         $ra, 0x24($sp)
/* E3503C 801A590C 44814000 */  mtc1        $at, $ft2
/* E35040 801A5910 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E35044 801A5914 44819000 */  mtc1        $at, $ft5
/* E35048 801A5918 C61000EC */  lwc1        $ft4, 0xEC($s0)
/* E3504C 801A591C 860B0050 */  lh          $t3, 0x50($s0)
/* E35050 801A5920 C60600E8 */  lwc1        $ft1, 0xE8($s0)
/* E35054 801A5924 46128101 */  sub.s       $ft0, $ft4, $ft5
/* E35058 801A5928 448B8000 */  mtc1        $t3, $ft4
/* E3505C 801A592C 3C014416 */  lui         $at, (0x44160000 >> 16)
/* E35060 801A5930 46083280 */  add.s       $ft3, $ft1, $ft2
/* E35064 801A5934 44814000 */  mtc1        $at, $ft2
/* E35068 801A5938 C60600F0 */  lwc1        $ft1, 0xF0($s0)
/* E3506C 801A593C 468084A0 */  cvt.s.w     $ft5, $ft4
/* E35070 801A5940 3C01801C */  lui         $at, %hi(D_E16C50_801C17B0)
/* E35074 801A5944 44062000 */  mfc1        $a2, $ft0
/* E35078 801A5948 C42417B0 */  lwc1        $ft0, %lo(D_E16C50_801C17B0)($at)
/* E3507C 801A594C 44055000 */  mfc1        $a1, $ft3
/* E35080 801A5950 46083280 */  add.s       $ft3, $ft1, $ft2
/* E35084 801A5954 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E35088 801A5958 3C014080 */  lui         $at, (0x40800000 >> 16)
/* E3508C 801A595C 44814000 */  mtc1        $at, $ft2
/* E35090 801A5960 44075000 */  mfc1        $a3, $ft3
/* E35094 801A5964 240C0001 */  addiu       $t4, $zero, 0x1
/* E35098 801A5968 AFAC0014 */  sw          $t4, 0x14($sp)
/* E3509C 801A596C 02002025 */  or          $a0, $s0, $zero
/* E350A0 801A5970 46083280 */  add.s       $ft3, $ft1, $ft2
/* E350A4 801A5974 0C067FF0 */  jal         func_E16C50_8019FFC0
/* E350A8 801A5978 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E350AC 801A597C 3C0142FA */  lui         $at, (0x42FA0000 >> 16)
/* E350B0 801A5980 44819000 */  mtc1        $at, $ft5
/* E350B4 801A5984 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E350B8 801A5988 44814000 */  mtc1        $at, $ft2
/* E350BC 801A598C C60600EC */  lwc1        $ft1, 0xEC($s0)
/* E350C0 801A5990 860D0050 */  lh          $t5, 0x50($s0)
/* E350C4 801A5994 C61000E8 */  lwc1        $ft4, 0xE8($s0)
/* E350C8 801A5998 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E350CC 801A599C 448D3000 */  mtc1        $t5, $ft1
/* E350D0 801A59A0 3C014416 */  lui         $at, (0x44160000 >> 16)
/* E350D4 801A59A4 46128101 */  sub.s       $ft0, $ft4, $ft5
/* E350D8 801A59A8 44819000 */  mtc1        $at, $ft5
/* E350DC 801A59AC C61000F0 */  lwc1        $ft4, 0xF0($s0)
/* E350E0 801A59B0 46803220 */  cvt.s.w     $ft2, $ft1
/* E350E4 801A59B4 3C01801C */  lui         $at, %hi(D_E16C50_801C17B4)
/* E350E8 801A59B8 44065000 */  mfc1        $a2, $ft3
/* E350EC 801A59BC C42A17B4 */  lwc1        $ft3, %lo(D_E16C50_801C17B4)($at)
/* E350F0 801A59C0 44052000 */  mfc1        $a1, $ft0
/* E350F4 801A59C4 46128100 */  add.s       $ft0, $ft4, $ft5
/* E350F8 801A59C8 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E350FC 801A59CC 3C014080 */  lui         $at, (0x40800000 >> 16)
/* E35100 801A59D0 44819000 */  mtc1        $at, $ft5
/* E35104 801A59D4 44072000 */  mfc1        $a3, $ft0
/* E35108 801A59D8 240E0002 */  addiu       $t6, $zero, 0x2
/* E3510C 801A59DC AFAE0014 */  sw          $t6, 0x14($sp)
/* E35110 801A59E0 02002025 */  or          $a0, $s0, $zero
/* E35114 801A59E4 46128100 */  add.s       $ft0, $ft4, $ft5
/* E35118 801A59E8 0C067FF0 */  jal         func_E16C50_8019FFC0
/* E3511C 801A59EC E7A40010 */   swc1       $ft0, 0x10($sp)
/* E35120 801A59F0 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E35124 801A59F4 44814000 */  mtc1        $at, $ft2
/* E35128 801A59F8 C60600EC */  lwc1        $ft1, 0xEC($s0)
/* E3512C 801A59FC 3C014396 */  lui         $at, (0x43960000 >> 16)
/* E35130 801A5A00 44819000 */  mtc1        $at, $ft5
/* E35134 801A5A04 C61000F0 */  lwc1        $ft4, 0xF0($s0)
/* E35138 801A5A08 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E3513C 801A5A0C 8E0500E8 */  lw          $a1, 0xE8($s0)
/* E35140 801A5A10 02002025 */  or          $a0, $s0, $zero
/* E35144 801A5A14 46128100 */  add.s       $ft0, $ft4, $ft5
/* E35148 801A5A18 44075000 */  mfc1        $a3, $ft3
/* E3514C 801A5A1C 3C0641C8 */  lui         $a2, (0x41C80000 >> 16)
/* E35150 801A5A20 0C0687AC */  jal         func_E16C50_801A1EB0
/* E35154 801A5A24 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E35158 801A5A28 10000040 */  b           .LE16C50_801A5B2C
/* E3515C 801A5A2C 8FBF0024 */   lw         $ra, 0x24($sp)
/* E35160 801A5A30 8602004C */  lh          $v0, 0x4C($s0)
.LE16C50_801A5A34:
/* E35164 801A5A34 26040014 */  addiu       $a0, $s0, 0x14
/* E35168 801A5A38 28410032 */  slti        $at, $v0, 0x32
/* E3516C 801A5A3C 10200011 */  beqz        $at, .LE16C50_801A5A84
/* E35170 801A5A40 3C0141B0 */   lui        $at, (0x41B00000 >> 16)
/* E35174 801A5A44 44813000 */  mtc1        $at, $ft1
/* E35178 801A5A48 C6000154 */  lwc1        $fv0, 0x154($s0)
/* E3517C 801A5A4C 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E35180 801A5A50 4606003C */  c.lt.s      $fv0, $ft1
/* E35184 801A5A54 00000000 */  nop
/* E35188 801A5A58 45020007 */  bc1fl       .LE16C50_801A5A78
/* E3518C 801A5A5C C6100014 */   lwc1       $ft4, 0x14($s0)
/* E35190 801A5A60 44814000 */  mtc1        $at, $ft2
/* E35194 801A5A64 00000000 */  nop
/* E35198 801A5A68 46080280 */  add.s       $ft3, $fv0, $ft2
/* E3519C 801A5A6C E60A0154 */  swc1        $ft3, 0x154($s0)
/* E351A0 801A5A70 C6000154 */  lwc1        $fv0, 0x154($s0)
/* E351A4 801A5A74 C6100014 */  lwc1        $ft4, 0x14($s0)
.LE16C50_801A5A78:
/* E351A8 801A5A78 8602004C */  lh          $v0, 0x4C($s0)
/* E351AC 801A5A7C 46008480 */  add.s       $ft5, $ft4, $fv0
/* E351B0 801A5A80 E6120014 */  swc1        $ft5, 0x14($s0)
.LE16C50_801A5A84:
/* E351B4 801A5A84 28410032 */  slti        $at, $v0, 0x32
/* E351B8 801A5A88 14200013 */  bnez        $at, .LE16C50_801A5AD8
/* E351BC 801A5A8C 28410065 */   slti       $at, $v0, 0x65
/* E351C0 801A5A90 50200012 */  beql        $at, $zero, .LE16C50_801A5ADC
/* E351C4 801A5A94 28410064 */   slti       $at, $v0, 0x64
/* E351C8 801A5A98 C6000154 */  lwc1        $fv0, 0x154($s0)
/* E351CC 801A5A9C 44802000 */  mtc1        $zero, $ft0
/* E351D0 801A5AA0 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E351D4 801A5AA4 4600203C */  c.lt.s      $ft0, $fv0
/* E351D8 801A5AA8 00000000 */  nop
/* E351DC 801A5AAC 45020007 */  bc1fl       .LE16C50_801A5ACC
/* E351E0 801A5AB0 C60A0014 */   lwc1       $ft3, 0x14($s0)
/* E351E4 801A5AB4 44813000 */  mtc1        $at, $ft1
/* E351E8 801A5AB8 00000000 */  nop
/* E351EC 801A5ABC 46060201 */  sub.s       $ft2, $fv0, $ft1
/* E351F0 801A5AC0 E6080154 */  swc1        $ft2, 0x154($s0)
/* E351F4 801A5AC4 C6000154 */  lwc1        $fv0, 0x154($s0)
/* E351F8 801A5AC8 C60A0014 */  lwc1        $ft3, 0x14($s0)
.LE16C50_801A5ACC:
/* E351FC 801A5ACC 8602004C */  lh          $v0, 0x4C($s0)
/* E35200 801A5AD0 46005400 */  add.s       $ft4, $ft3, $fv0
/* E35204 801A5AD4 E6100014 */  swc1        $ft4, 0x14($s0)
.LE16C50_801A5AD8:
/* E35208 801A5AD8 28410064 */  slti        $at, $v0, 0x64
.LE16C50_801A5ADC:
/* E3520C 801A5ADC 1420000A */  bnez        $at, .LE16C50_801A5B08
/* E35210 801A5AE0 3C013F80 */   lui        $at, (0x3F800000 >> 16)
/* E35214 801A5AE4 44810000 */  mtc1        $at, $fv0
/* E35218 801A5AE8 24050000 */  addiu       $a1, $zero, 0x0
/* E3521C 801A5AEC 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E35220 801A5AF0 44060000 */  mfc1        $a2, $fv0
/* E35224 801A5AF4 0C026F4E */  jal         Math_SmoothStepToAngle
/* E35228 801A5AF8 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E3522C 801A5AFC 44809000 */  mtc1        $zero, $ft5
/* E35230 801A5B00 8602004C */  lh          $v0, 0x4C($s0)
/* E35234 801A5B04 E6120154 */  swc1        $ft5, 0x154($s0)
.LE16C50_801A5B08:
/* E35238 801A5B08 24010078 */  addiu       $at, $zero, 0x78
/* E3523C 801A5B0C 14410006 */  bne         $v0, $at, .LE16C50_801A5B28
/* E35240 801A5B10 240F0005 */   addiu      $t7, $zero, 0x5
/* E35244 801A5B14 A60F008A */  sh          $t7, 0x8A($s0)
/* E35248 801A5B18 A600004C */  sh          $zero, 0x4C($s0)
/* E3524C 801A5B1C 3C01801C */  lui         $at, %hi(D_E16C50_801C17B8)
/* E35250 801A5B20 C42417B8 */  lwc1        $ft0, %lo(D_E16C50_801C17B8)($at)
/* E35254 801A5B24 E60400D8 */  swc1        $ft0, 0xD8($s0)
.LE16C50_801A5B28:
/* E35258 801A5B28 8FBF0024 */  lw          $ra, 0x24($sp)
.LE16C50_801A5B2C:
/* E3525C 801A5B2C 8FB00020 */  lw          $s0, 0x20($sp)
/* E35260 801A5B30 27BD0028 */  addiu       $sp, $sp, 0x28
/* E35264 801A5B34 03E00008 */  jr          $ra
/* E35268 801A5B38 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C17BC
/* E50EEC 801C17BC 45228000 */ .float 2600

dlabel D_E16C50_801C17C0
/* E50EF0 801C17C0 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C17C4
/* E50EF4 801C17C4 3C23D70A */ .float 0.009999999776

dlabel jtbl_E16C50_801C17C8
/* E50EF8 801C17C8 801A6160 */ .word .LE16C50_801A6160
/* E50EFC 801C17CC 801A6220 */ .word .LE16C50_801A6220
/* E50F00 801C17D0 801A6268 */ .word .LE16C50_801A6268
/* E50F04 801C17D4 801A62B0 */ .word .LE16C50_801A62B0
/* E50F08 801C17D8 801A62F8 */ .word .LE16C50_801A62F8
/* E50F0C 801C17DC 801A6340 */ .word .LE16C50_801A6340
/* E50F10 801C17E0 801A63CC */ .word .LE16C50_801A63CC
/* E50F14 801C17E4 801A6414 */ .word .LE16C50_801A6414
/* E50F18 801C17E8 801A6340 */ .word .LE16C50_801A6340
/* E50F1C 801C17EC 801A6340 */ .word .LE16C50_801A6340

dlabel D_E16C50_801C17F0
/* E50F20 801C17F0 3C23D70A */ .float 0.009999999776

dlabel D_E16C50_801C17F4
/* E50F24 801C17F4 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C17F8
/* E50F28 801C17F8 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C17FC
/* E50F2C 801C17FC 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1800
/* E50F30 801C1800 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1804
/* E50F34 801C1804 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1808
/* E50F38 801C1808 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C180C
/* E50F3C 801C180C 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1810
/* E50F40 801C1810 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1814
/* E50F44 801C1814 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1818
/* E50F48 801C1818 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C181C
/* E50F4C 801C181C 3E3A83A8 */ .float 0.1821428537


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A5B3C
/* E3526C 801A5B3C 27BDFE30 */  addiu       $sp, $sp, -0x1D0
/* E35270 801A5B40 AFB00028 */  sw          $s0, 0x28($sp)
/* E35274 801A5B44 00808025 */  or          $s0, $a0, $zero
/* E35278 801A5B48 AFBF002C */  sw          $ra, 0x2C($sp)
/* E3527C 801A5B4C 3C0E8016 */  lui         $t6, %hi(D_801613A0)
/* E35280 801A5B50 8DCE13A0 */  lw          $t6, %lo(D_801613A0)($t6)
/* E35284 801A5B54 3C018016 */  lui         $at, %hi(D_801613A0)
/* E35288 801A5B58 25CF0001 */  addiu       $t7, $t6, 0x1
/* E3528C 801A5B5C AC2F13A0 */  sw          $t7, %lo(D_801613A0)($at)
/* E35290 801A5B60 8602009A */  lh          $v0, 0x9A($s0)
/* E35294 801A5B64 10400002 */  beqz        $v0, .LE16C50_801A5B70
/* E35298 801A5B68 2458FFFF */   addiu      $t8, $v0, -0x1
/* E3529C 801A5B6C A618009A */  sh          $t8, 0x9A($s0)
.LE16C50_801A5B70:
/* E352A0 801A5B70 86020098 */  lh          $v0, 0x98($s0)
/* E352A4 801A5B74 10400002 */  beqz        $v0, .LE16C50_801A5B80
/* E352A8 801A5B78 2459FFFF */   addiu      $t9, $v0, -0x1
/* E352AC 801A5B7C A6190098 */  sh          $t9, 0x98($s0)
.LE16C50_801A5B80:
/* E352B0 801A5B80 8602009C */  lh          $v0, 0x9C($s0)
/* E352B4 801A5B84 10400002 */  beqz        $v0, .LE16C50_801A5B90
/* E352B8 801A5B88 2448FFFF */   addiu      $t0, $v0, -0x1
/* E352BC 801A5B8C A608009C */  sh          $t0, 0x9C($s0)
.LE16C50_801A5B90:
/* E352C0 801A5B90 3C028016 */  lui         $v0, %hi(D_801613A0)
/* E352C4 801A5B94 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
/* E352C8 801A5B98 240100C8 */  addiu       $at, $zero, 0xC8
/* E352CC 801A5B9C 1441000A */  bne         $v0, $at, .LE16C50_801A5BC8
/* E352D0 801A5BA0 3C098017 */   lui        $t1, %hi(gTeamShields + 0x4)
/* E352D4 801A5BA4 8D2978B4 */  lw          $t1, %lo(gTeamShields + 0x4)($t1)
/* E352D8 801A5BA8 3C048018 */  lui         $a0, %hi(gMsg_ID_10310)
/* E352DC 801A5BAC 2484FC88 */  addiu       $a0, $a0, %lo(gMsg_ID_10310)
/* E352E0 801A5BB0 51200006 */  beql        $t1, $zero, .LE16C50_801A5BCC
/* E352E4 801A5BB4 2401012C */   addiu      $at, $zero, 0x12C
/* E352E8 801A5BB8 0C02EA02 */  jal         func_800BA808
/* E352EC 801A5BBC 2405000A */   addiu      $a1, $zero, 0xA
/* E352F0 801A5BC0 3C028016 */  lui         $v0, %hi(D_801613A0)
/* E352F4 801A5BC4 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
.LE16C50_801A5BC8:
/* E352F8 801A5BC8 2401012C */  addiu       $at, $zero, 0x12C
.LE16C50_801A5BCC:
/* E352FC 801A5BCC 1441000A */  bne         $v0, $at, .LE16C50_801A5BF8
/* E35300 801A5BD0 3C0A8017 */   lui        $t2, %hi(gTeamShields + 0x8)
/* E35304 801A5BD4 8D4A78B8 */  lw          $t2, %lo(gTeamShields + 0x8)($t2)
/* E35308 801A5BD8 3C048018 */  lui         $a0, %hi(gMsg_ID_4092)
/* E3530C 801A5BDC 2484C3A8 */  addiu       $a0, $a0, %lo(gMsg_ID_4092)
/* E35310 801A5BE0 51400006 */  beql        $t2, $zero, .LE16C50_801A5BFC
/* E35314 801A5BE4 240101C2 */   addiu      $at, $zero, 0x1C2
/* E35318 801A5BE8 0C02EA02 */  jal         func_800BA808
/* E3531C 801A5BEC 24050014 */   addiu      $a1, $zero, 0x14
/* E35320 801A5BF0 3C028016 */  lui         $v0, %hi(D_801613A0)
/* E35324 801A5BF4 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
.LE16C50_801A5BF8:
/* E35328 801A5BF8 240101C2 */  addiu       $at, $zero, 0x1C2
.LE16C50_801A5BFC:
/* E3532C 801A5BFC 14410008 */  bne         $v0, $at, .LE16C50_801A5C20
/* E35330 801A5C00 3C0B8017 */   lui        $t3, %hi(gTeamShields + 0xC)
/* E35334 801A5C04 8D6B78BC */  lw          $t3, %lo(gTeamShields + 0xC)($t3)
/* E35338 801A5C08 3C048018 */  lui         $a0, %hi(gMsg_ID_10320)
/* E3533C 801A5C0C 2484FCC4 */  addiu       $a0, $a0, %lo(gMsg_ID_10320)
/* E35340 801A5C10 51600004 */  beql        $t3, $zero, .LE16C50_801A5C24
/* E35344 801A5C14 860C0060 */   lh         $t4, 0x60($s0)
/* E35348 801A5C18 0C02EA02 */  jal         func_800BA808
/* E3534C 801A5C1C 2405001E */   addiu      $a1, $zero, 0x1E
.LE16C50_801A5C20:
/* E35350 801A5C20 860C0060 */  lh          $t4, 0x60($s0)
.LE16C50_801A5C24:
/* E35354 801A5C24 11800010 */  beqz        $t4, .LE16C50_801A5C68
/* E35358 801A5C28 3C0D8018 */   lui        $t5, %hi(gPlayer)
/* E3535C 801A5C2C 8DAD8280 */  lw          $t5, %lo(gPlayer)($t5)
/* E35360 801A5C30 C60600E4 */  lwc1        $ft1, 0xE4($s0)
/* E35364 801A5C34 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E35368 801A5C38 C5A40138 */  lwc1        $ft0, 0x138($t5)
/* E3536C 801A5C3C 44810000 */  mtc1        $at, $fv0
/* E35370 801A5C40 2604000C */  addiu       $a0, $s0, 0xC
/* E35374 801A5C44 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E35378 801A5C48 44060000 */  mfc1        $a2, $fv0
/* E3537C 801A5C4C 3C074270 */  lui         $a3, (0x42700000 >> 16)
/* E35380 801A5C50 E7A00010 */  swc1        $fv0, 0x10($sp)
/* E35384 801A5C54 44054000 */  mfc1        $a1, $ft2
/* E35388 801A5C58 0C026F0B */  jal         Math_SmoothStepToF
/* E3538C 801A5C5C 00000000 */   nop
/* E35390 801A5C60 10000011 */  b           .LE16C50_801A5CA8
/* E35394 801A5C64 860E008C */   lh         $t6, 0x8C($s0)
.LE16C50_801A5C68:
/* E35398 801A5C68 3C018017 */  lui         $at, %hi(D_80177D20)
/* E3539C 801A5C6C C42A7D20 */  lwc1        $ft3, %lo(D_80177D20)($at)
/* E353A0 801A5C70 3C01801C */  lui         $at, %hi(D_E16C50_801C17BC)
/* E353A4 801A5C74 C42417BC */  lwc1        $ft0, %lo(D_E16C50_801C17BC)($at)
/* E353A8 801A5C78 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E353AC 801A5C7C 2604000C */  addiu       $a0, $s0, 0xC
/* E353B0 801A5C80 46045180 */  add.s       $ft1, $ft3, $ft0
/* E353B4 801A5C84 44815000 */  mtc1        $at, $ft3
/* E353B8 801A5C88 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E353BC 801A5C8C 3C074220 */  lui         $a3, (0x42200000 >> 16)
/* E353C0 801A5C90 46003207 */  neg.s       $ft2, $ft1
/* E353C4 801A5C94 E7AA0010 */  swc1        $ft3, 0x10($sp)
/* E353C8 801A5C98 44054000 */  mfc1        $a1, $ft2
/* E353CC 801A5C9C 0C026F0B */  jal         Math_SmoothStepToF
/* E353D0 801A5CA0 00000000 */   nop
/* E353D4 801A5CA4 860E008C */  lh          $t6, 0x8C($s0)
.LE16C50_801A5CA8:
/* E353D8 801A5CA8 51C00045 */  beql        $t6, $zero, .LE16C50_801A5DC0
/* E353DC 801A5CAC 860E008E */   lh         $t6, 0x8E($s0)
/* E353E0 801A5CB0 C6040108 */  lwc1        $ft0, 0x108($s0)
/* E353E4 801A5CB4 C606000C */  lwc1        $ft1, 0xC($s0)
/* E353E8 801A5CB8 8E0F0028 */  lw          $t7, 0x28($s0)
/* E353EC 801A5CBC 3C01801C */  lui         $at, %hi(D_E16C50_801C17C0)
/* E353F0 801A5CC0 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E353F4 801A5CC4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E353F8 801A5CC8 00003025 */  or          $a2, $zero, $zero
/* E353FC 801A5CCC E5E8001C */  swc1        $ft2, 0x1C($t7)
/* E35400 801A5CD0 C6040008 */  lwc1        $ft0, 0x8($s0)
/* E35404 801A5CD4 C60A0104 */  lwc1        $ft3, 0x104($s0)
/* E35408 801A5CD8 8E180028 */  lw          $t8, 0x28($s0)
/* E3540C 801A5CDC 46045181 */  sub.s       $ft1, $ft3, $ft0
/* E35410 801A5CE0 E7060024 */  swc1        $ft1, 0x24($t8)
/* E35414 801A5CE4 C60A0004 */  lwc1        $ft3, 0x4($s0)
/* E35418 801A5CE8 C6080100 */  lwc1        $ft2, 0x100($s0)
/* E3541C 801A5CEC 8E190028 */  lw          $t9, 0x28($s0)
/* E35420 801A5CF0 460A4101 */  sub.s       $ft0, $ft2, $ft3
/* E35424 801A5CF4 E724002C */  swc1        $ft0, 0x2C($t9)
/* E35428 801A5CF8 C608000C */  lwc1        $ft2, 0xC($s0)
/* E3542C 801A5CFC C6060138 */  lwc1        $ft1, 0x138($s0)
/* E35430 801A5D00 8E080028 */  lw          $t0, 0x28($s0)
/* E35434 801A5D04 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E35438 801A5D08 E50A0034 */  swc1        $ft3, 0x34($t0)
/* E3543C 801A5D0C C6060008 */  lwc1        $ft1, 0x8($s0)
/* E35440 801A5D10 C6040134 */  lwc1        $ft0, 0x134($s0)
/* E35444 801A5D14 8E090028 */  lw          $t1, 0x28($s0)
/* E35448 801A5D18 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E3544C 801A5D1C E528003C */  swc1        $ft2, 0x3C($t1)
/* E35450 801A5D20 C6040004 */  lwc1        $ft0, 0x4($s0)
/* E35454 801A5D24 C60A0130 */  lwc1        $ft3, 0x130($s0)
/* E35458 801A5D28 8E0A0028 */  lw          $t2, 0x28($s0)
/* E3545C 801A5D2C 46045181 */  sub.s       $ft1, $ft3, $ft0
/* E35460 801A5D30 E5460044 */  swc1        $ft1, 0x44($t2)
/* E35464 801A5D34 C6080014 */  lwc1        $ft2, 0x14($s0)
/* E35468 801A5D38 C42417C0 */  lwc1        $ft0, %lo(D_E16C50_801C17C0)($at)
/* E3546C 801A5D3C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E35470 801A5D40 46004287 */  neg.s       $ft3, $ft2
/* E35474 801A5D44 46045182 */  mul.s       $ft1, $ft3, $ft0
/* E35478 801A5D48 44053000 */  mfc1        $a1, $ft1
/* E3547C 801A5D4C 0C0017A4 */  jal         Matrix_RotateY
/* E35480 801A5D50 00000000 */   nop
/* E35484 801A5D54 C6080148 */  lwc1        $ft2, 0x148($s0)
/* E35488 801A5D58 C60A0004 */  lwc1        $ft3, 0x4($s0)
/* E3548C 801A5D5C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E35490 801A5D60 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E35494 801A5D64 460A4101 */  sub.s       $ft0, $ft2, $ft3
/* E35498 801A5D68 27A50044 */  addiu       $a1, $sp, 0x44
/* E3549C 801A5D6C 27A60038 */  addiu       $a2, $sp, 0x38
/* E354A0 801A5D70 E7A40044 */  swc1        $ft0, 0x44($sp)
/* E354A4 801A5D74 C6080008 */  lwc1        $ft2, 0x8($s0)
/* E354A8 801A5D78 C606014C */  lwc1        $ft1, 0x14C($s0)
/* E354AC 801A5D7C 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E354B0 801A5D80 E7AA0048 */  swc1        $ft3, 0x48($sp)
/* E354B4 801A5D84 C606000C */  lwc1        $ft1, 0xC($s0)
/* E354B8 801A5D88 C6040150 */  lwc1        $ft0, 0x150($s0)
/* E354BC 801A5D8C 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E354C0 801A5D90 0C001A5C */  jal         Matrix_MultVec3f
/* E354C4 801A5D94 E7A8004C */   swc1       $ft2, 0x4C($sp)
/* E354C8 801A5D98 C7AA0040 */  lwc1        $ft3, 0x40($sp)
/* E354CC 801A5D9C 8E0B0028 */  lw          $t3, 0x28($s0)
/* E354D0 801A5DA0 E56A004C */  swc1        $ft3, 0x4C($t3)
/* E354D4 801A5DA4 8E0C0028 */  lw          $t4, 0x28($s0)
/* E354D8 801A5DA8 C7A4003C */  lwc1        $ft0, 0x3C($sp)
/* E354DC 801A5DAC E5840054 */  swc1        $ft0, 0x54($t4)
/* E354E0 801A5DB0 8E0D0028 */  lw          $t5, 0x28($s0)
/* E354E4 801A5DB4 C7A60038 */  lwc1        $ft1, 0x38($sp)
/* E354E8 801A5DB8 E5A6005C */  swc1        $ft1, 0x5C($t5)
/* E354EC 801A5DBC 860E008E */  lh          $t6, 0x8E($s0)
.LE16C50_801A5DC0:
/* E354F0 801A5DC0 11C0002E */  beqz        $t6, .LE16C50_801A5E7C
/* E354F4 801A5DC4 00000000 */   nop
/* E354F8 801A5DC8 C60800FC */  lwc1        $ft2, 0xFC($s0)
/* E354FC 801A5DCC C60A000C */  lwc1        $ft3, 0xC($s0)
/* E35500 801A5DD0 8E0F0028 */  lw          $t7, 0x28($s0)
/* E35504 801A5DD4 460A4101 */  sub.s       $ft0, $ft2, $ft3
/* E35508 801A5DD8 E5E40064 */  swc1        $ft0, 0x64($t7)
/* E3550C 801A5DDC C6080008 */  lwc1        $ft2, 0x8($s0)
/* E35510 801A5DE0 C60600F8 */  lwc1        $ft1, 0xF8($s0)
/* E35514 801A5DE4 8E180028 */  lw          $t8, 0x28($s0)
/* E35518 801A5DE8 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E3551C 801A5DEC E70A006C */  swc1        $ft3, 0x6C($t8)
/* E35520 801A5DF0 C6060004 */  lwc1        $ft1, 0x4($s0)
/* E35524 801A5DF4 C60400F4 */  lwc1        $ft0, 0xF4($s0)
/* E35528 801A5DF8 8E190028 */  lw          $t9, 0x28($s0)
/* E3552C 801A5DFC 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E35530 801A5E00 E7280074 */  swc1        $ft2, 0x74($t9)
/* E35534 801A5E04 C604000C */  lwc1        $ft0, 0xC($s0)
/* E35538 801A5E08 C60A012C */  lwc1        $ft3, 0x12C($s0)
/* E3553C 801A5E0C 8E080028 */  lw          $t0, 0x28($s0)
/* E35540 801A5E10 46045181 */  sub.s       $ft1, $ft3, $ft0
/* E35544 801A5E14 E506007C */  swc1        $ft1, 0x7C($t0)
/* E35548 801A5E18 C60A0008 */  lwc1        $ft3, 0x8($s0)
/* E3554C 801A5E1C C6080128 */  lwc1        $ft2, 0x128($s0)
/* E35550 801A5E20 8E090028 */  lw          $t1, 0x28($s0)
/* E35554 801A5E24 460A4101 */  sub.s       $ft0, $ft2, $ft3
/* E35558 801A5E28 E5240084 */  swc1        $ft0, 0x84($t1)
/* E3555C 801A5E2C C6080004 */  lwc1        $ft2, 0x4($s0)
/* E35560 801A5E30 C6060124 */  lwc1        $ft1, 0x124($s0)
/* E35564 801A5E34 8E0A0028 */  lw          $t2, 0x28($s0)
/* E35568 801A5E38 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E3556C 801A5E3C E54A008C */  swc1        $ft3, 0x8C($t2)
/* E35570 801A5E40 C606000C */  lwc1        $ft1, 0xC($s0)
/* E35574 801A5E44 C6040144 */  lwc1        $ft0, 0x144($s0)
/* E35578 801A5E48 8E0B0028 */  lw          $t3, 0x28($s0)
/* E3557C 801A5E4C 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E35580 801A5E50 E5680094 */  swc1        $ft2, 0x94($t3)
/* E35584 801A5E54 C6040008 */  lwc1        $ft0, 0x8($s0)
/* E35588 801A5E58 C60A0140 */  lwc1        $ft3, 0x140($s0)
/* E3558C 801A5E5C 8E0C0028 */  lw          $t4, 0x28($s0)
/* E35590 801A5E60 46045181 */  sub.s       $ft1, $ft3, $ft0
/* E35594 801A5E64 E586009C */  swc1        $ft1, 0x9C($t4)
/* E35598 801A5E68 C60A0004 */  lwc1        $ft3, 0x4($s0)
/* E3559C 801A5E6C C608013C */  lwc1        $ft2, 0x13C($s0)
/* E355A0 801A5E70 8E0D0028 */  lw          $t5, 0x28($s0)
/* E355A4 801A5E74 460A4101 */  sub.s       $ft0, $ft2, $ft3
/* E355A8 801A5E78 E5A400A4 */  swc1        $ft0, 0xA4($t5)
.LE16C50_801A5E7C:
/* E355AC 801A5E7C 3C0E8017 */  lui         $t6, %hi(gFrameCount)
/* E355B0 801A5E80 8DCE7DB0 */  lw          $t6, %lo(gFrameCount)($t6)
/* E355B4 801A5E84 31CF0007 */  andi        $t7, $t6, 0x7
/* E355B8 801A5E88 15E00052 */  bnez        $t7, .LE16C50_801A5FD4
/* E355BC 801A5E8C 3C014596 */   lui        $at, (0x45960000 >> 16)
/* E355C0 801A5E90 44814000 */  mtc1        $at, $ft2
/* E355C4 801A5E94 C60600E4 */  lwc1        $ft1, 0xE4($s0)
/* E355C8 801A5E98 3C014320 */  lui         $at, (0x43200000 >> 16)
/* E355CC 801A5E9C 4608303C */  c.lt.s      $ft1, $ft2
/* E355D0 801A5EA0 00000000 */  nop
/* E355D4 801A5EA4 4500004B */  bc1f        .LE16C50_801A5FD4
/* E355D8 801A5EA8 00000000 */   nop
/* E355DC 801A5EAC C60A0008 */  lwc1        $ft3, 0x8($s0)
/* E355E0 801A5EB0 44812000 */  mtc1        $at, $ft0
/* E355E4 801A5EB4 C608000C */  lwc1        $ft2, 0xC($s0)
/* E355E8 801A5EB8 8E060004 */  lw          $a2, 0x4($s0)
/* E355EC 801A5EBC 46045181 */  sub.s       $ft1, $ft3, $ft0
/* E355F0 801A5EC0 27A401C0 */  addiu       $a0, $sp, 0x1C0
/* E355F4 801A5EC4 27A501B8 */  addiu       $a1, $sp, 0x1B8
/* E355F8 801A5EC8 E7A80010 */  swc1        $ft2, 0x10($sp)
/* E355FC 801A5ECC 44073000 */  mfc1        $a3, $ft1
/* E35600 801A5ED0 0C029CF9 */  jal         func_800A73E4
/* E35604 801A5ED4 00000000 */   nop
/* E35608 801A5ED8 1040000E */  beqz        $v0, .LE16C50_801A5F14
/* E3560C 801A5EDC C7AA01C0 */   lwc1       $ft3, 0x1C0($sp)
/* E35610 801A5EE0 3C01432A */  lui         $at, (0x432A0000 >> 16)
/* E35614 801A5EE4 44812000 */  mtc1        $at, $ft0
/* E35618 801A5EE8 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E3561C 801A5EEC C608000C */  lwc1        $ft2, 0xC($s0)
/* E35620 801A5EF0 46045181 */  sub.s       $ft1, $ft3, $ft0
/* E35624 801A5EF4 44815000 */  mtc1        $at, $ft3
/* E35628 801A5EF8 8E050004 */  lw          $a1, 0x4($s0)
/* E3562C 801A5EFC 02002025 */  or          $a0, $s0, $zero
/* E35630 801A5F00 460A4100 */  add.s       $ft0, $ft2, $ft3
/* E35634 801A5F04 44073000 */  mfc1        $a3, $ft1
/* E35638 801A5F08 3C064248 */  lui         $a2, (0x42480000 >> 16)
/* E3563C 801A5F0C 0C0687AC */  jal         func_E16C50_801A1EB0
/* E35640 801A5F10 E7A40010 */   swc1       $ft0, 0x10($sp)
.LE16C50_801A5F14:
/* E35644 801A5F14 8618008C */  lh          $t8, 0x8C($s0)
/* E35648 801A5F18 27A401C0 */  addiu       $a0, $sp, 0x1C0
/* E3564C 801A5F1C 27A501B8 */  addiu       $a1, $sp, 0x1B8
/* E35650 801A5F20 53000015 */  beql        $t8, $zero, .LE16C50_801A5F78
/* E35654 801A5F24 8619008E */   lh         $t9, 0x8E($s0)
/* E35658 801A5F28 C6060120 */  lwc1        $ft1, 0x120($s0)
/* E3565C 801A5F2C 8E060118 */  lw          $a2, 0x118($s0)
/* E35660 801A5F30 8E07011C */  lw          $a3, 0x11C($s0)
/* E35664 801A5F34 0C029CF9 */  jal         func_800A73E4
/* E35668 801A5F38 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E3566C 801A5F3C 1040000D */  beqz        $v0, .LE16C50_801A5F74
/* E35670 801A5F40 C7A801C0 */   lwc1       $ft2, 0x1C0($sp)
/* E35674 801A5F44 3C014316 */  lui         $at, (0x43160000 >> 16)
/* E35678 801A5F48 44815000 */  mtc1        $at, $ft3
/* E3567C 801A5F4C C6060120 */  lwc1        $ft1, 0x120($s0)
/* E35680 801A5F50 8E050118 */  lw          $a1, 0x118($s0)
/* E35684 801A5F54 460A4101 */  sub.s       $ft0, $ft2, $ft3
/* E35688 801A5F58 44814000 */  mtc1        $at, $ft2
/* E3568C 801A5F5C 02002025 */  or          $a0, $s0, $zero
/* E35690 801A5F60 3C064248 */  lui         $a2, (0x42480000 >> 16)
/* E35694 801A5F64 46083280 */  add.s       $ft3, $ft1, $ft2
/* E35698 801A5F68 44072000 */  mfc1        $a3, $ft0
/* E3569C 801A5F6C 0C0687AC */  jal         func_E16C50_801A1EB0
/* E356A0 801A5F70 E7AA0010 */   swc1       $ft3, 0x10($sp)
.LE16C50_801A5F74:
/* E356A4 801A5F74 8619008E */  lh          $t9, 0x8E($s0)
.LE16C50_801A5F78:
/* E356A8 801A5F78 27A401C0 */  addiu       $a0, $sp, 0x1C0
/* E356AC 801A5F7C 27A501B8 */  addiu       $a1, $sp, 0x1B8
/* E356B0 801A5F80 13200014 */  beqz        $t9, .LE16C50_801A5FD4
/* E356B4 801A5F84 00000000 */   nop
/* E356B8 801A5F88 C6040114 */  lwc1        $ft0, 0x114($s0)
/* E356BC 801A5F8C 8E06010C */  lw          $a2, 0x10C($s0)
/* E356C0 801A5F90 8E070110 */  lw          $a3, 0x110($s0)
/* E356C4 801A5F94 0C029CF9 */  jal         func_800A73E4
/* E356C8 801A5F98 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E356CC 801A5F9C 1040000D */  beqz        $v0, .LE16C50_801A5FD4
/* E356D0 801A5FA0 C7A601C0 */   lwc1       $ft1, 0x1C0($sp)
/* E356D4 801A5FA4 3C014316 */  lui         $at, (0x43160000 >> 16)
/* E356D8 801A5FA8 44814000 */  mtc1        $at, $ft2
/* E356DC 801A5FAC C6040114 */  lwc1        $ft0, 0x114($s0)
/* E356E0 801A5FB0 8E05010C */  lw          $a1, 0x10C($s0)
/* E356E4 801A5FB4 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E356E8 801A5FB8 44813000 */  mtc1        $at, $ft1
/* E356EC 801A5FBC 02002025 */  or          $a0, $s0, $zero
/* E356F0 801A5FC0 3C064248 */  lui         $a2, (0x42480000 >> 16)
/* E356F4 801A5FC4 46062200 */  add.s       $ft2, $ft0, $ft1
/* E356F8 801A5FC8 44075000 */  mfc1        $a3, $ft3
/* E356FC 801A5FCC 0C0687AC */  jal         func_E16C50_801A1EB0
/* E35700 801A5FD0 E7A80010 */   swc1       $ft2, 0x10($sp)
.LE16C50_801A5FD4:
/* E35704 801A5FD4 3C028017 */  lui         $v0, %hi(gFrameCount)
/* E35708 801A5FD8 8C427DB0 */  lw          $v0, %lo(gFrameCount)($v0)
/* E3570C 801A5FDC 30480003 */  andi        $t0, $v0, 0x3
/* E35710 801A5FE0 51000008 */  beql        $t0, $zero, .LE16C50_801A6004
/* E35714 801A5FE4 86090088 */   lh         $t1, 0x88($s0)
/* E35718 801A5FE8 44805000 */  mtc1        $zero, $ft3
/* E3571C 801A5FEC C6040154 */  lwc1        $ft0, 0x154($s0)
/* E35720 801A5FF0 46045032 */  c.eq.s      $ft3, $ft0
/* E35724 801A5FF4 00000000 */  nop
/* E35728 801A5FF8 45010034 */  bc1t        .LE16C50_801A60CC
/* E3572C 801A5FFC 00000000 */   nop
/* E35730 801A6000 86090088 */  lh          $t1, 0x88($s0)
.LE16C50_801A6004:
/* E35734 801A6004 24010007 */  addiu       $at, $zero, 0x7
/* E35738 801A6008 304A0001 */  andi        $t2, $v0, 0x1
/* E3573C 801A600C 55210004 */  bnel        $t1, $at, .LE16C50_801A6020
/* E35740 801A6010 860B008C */   lh         $t3, 0x8C($s0)
/* E35744 801A6014 1540002D */  bnez        $t2, .LE16C50_801A60CC
/* E35748 801A6018 00000000 */   nop
/* E3574C 801A601C 860B008C */  lh          $t3, 0x8C($s0)
.LE16C50_801A6020:
/* E35750 801A6020 55600015 */  bnel        $t3, $zero, .LE16C50_801A6078
/* E35754 801A6024 860E008E */   lh         $t6, 0x8E($s0)
/* E35758 801A6028 860C0060 */  lh          $t4, 0x60($s0)
/* E3575C 801A602C 02002025 */  or          $a0, $s0, $zero
/* E35760 801A6030 5D800005 */  bgtzl       $t4, .LE16C50_801A6048
/* E35764 801A6034 3C0141A0 */   lui        $at, (0x41A00000 >> 16)
/* E35768 801A6038 860D004E */  lh          $t5, 0x4E($s0)
/* E3576C 801A603C 29A10002 */  slti        $at, $t5, 0x2
/* E35770 801A6040 1020000C */  beqz        $at, .LE16C50_801A6074
/* E35774 801A6044 3C0141A0 */   lui        $at, (0x41A00000 >> 16)
.LE16C50_801A6048:
/* E35778 801A6048 44814000 */  mtc1        $at, $ft2
/* E3577C 801A604C C6060154 */  lwc1        $ft1, 0x154($s0)
/* E35780 801A6050 3C01BF80 */  lui         $at, (0xBF800000 >> 16)
/* E35784 801A6054 44812000 */  mtc1        $at, $ft0
/* E35788 801A6058 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E3578C 801A605C 8E050100 */  lw          $a1, 0x100($s0)
/* E35790 801A6060 8E060104 */  lw          $a2, 0x104($s0)
/* E35794 801A6064 8E070108 */  lw          $a3, 0x108($s0)
/* E35798 801A6068 E7AA0010 */  swc1        $ft3, 0x10($sp)
/* E3579C 801A606C 0C067FD1 */  jal         func_E16C50_8019FF44
/* E357A0 801A6070 E7A40014 */   swc1       $ft0, 0x14($sp)
.LE16C50_801A6074:
/* E357A4 801A6074 860E008E */  lh          $t6, 0x8E($s0)
.LE16C50_801A6078:
/* E357A8 801A6078 15C00014 */  bnez        $t6, .LE16C50_801A60CC
/* E357AC 801A607C 00000000 */   nop
/* E357B0 801A6080 860F0060 */  lh          $t7, 0x60($s0)
/* E357B4 801A6084 02002025 */  or          $a0, $s0, $zero
/* E357B8 801A6088 5DE00005 */  bgtzl       $t7, .LE16C50_801A60A0
/* E357BC 801A608C 3C0141A0 */   lui        $at, (0x41A00000 >> 16)
/* E357C0 801A6090 8618004E */  lh          $t8, 0x4E($s0)
/* E357C4 801A6094 2B010002 */  slti        $at, $t8, 0x2
/* E357C8 801A6098 1020000C */  beqz        $at, .LE16C50_801A60CC
/* E357CC 801A609C 3C0141A0 */   lui        $at, (0x41A00000 >> 16)
.LE16C50_801A60A0:
/* E357D0 801A60A0 44814000 */  mtc1        $at, $ft2
/* E357D4 801A60A4 C6060154 */  lwc1        $ft1, 0x154($s0)
/* E357D8 801A60A8 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E357DC 801A60AC 44812000 */  mtc1        $at, $ft0
/* E357E0 801A60B0 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E357E4 801A60B4 8E0500F4 */  lw          $a1, 0xF4($s0)
/* E357E8 801A60B8 8E0600F8 */  lw          $a2, 0xF8($s0)
/* E357EC 801A60BC 8E0700FC */  lw          $a3, 0xFC($s0)
/* E357F0 801A60C0 E7AA0010 */  swc1        $ft3, 0x10($sp)
/* E357F4 801A60C4 0C067FD1 */  jal         func_E16C50_8019FF44
/* E357F8 801A60C8 E7A40014 */   swc1       $ft0, 0x14($sp)
.LE16C50_801A60CC:
/* E357FC 801A60CC 3C01801C */  lui         $at, %hi(D_E16C50_801C17C4)
/* E35800 801A60D0 C42017C4 */  lwc1        $fv0, %lo(D_E16C50_801C17C4)($at)
/* E35804 801A60D4 44803000 */  mtc1        $zero, $ft1
/* E35808 801A60D8 260400D8 */  addiu       $a0, $s0, 0xD8
/* E3580C 801A60DC 44060000 */  mfc1        $a2, $fv0
/* E35810 801A60E0 44070000 */  mfc1        $a3, $fv0
/* E35814 801A60E4 3C053F80 */  lui         $a1, (0x3F800000 >> 16)
/* E35818 801A60E8 0C026F0B */  jal         Math_SmoothStepToF
/* E3581C 801A60EC E7A60010 */   swc1       $ft1, 0x10($sp)
/* E35820 801A60F0 86190060 */  lh          $t9, 0x60($s0)
/* E35824 801A60F4 5F200005 */  bgtzl       $t9, .LE16C50_801A610C
/* E35828 801A60F8 86090088 */   lh         $t1, 0x88($s0)
/* E3582C 801A60FC 86080088 */  lh          $t0, 0x88($s0)
/* E35830 801A6100 5500000A */  bnel        $t0, $zero, .LE16C50_801A612C
/* E35834 801A6104 860B0058 */   lh         $t3, 0x58($s0)
/* E35838 801A6108 86090088 */  lh          $t1, 0x88($s0)
.LE16C50_801A610C:
/* E3583C 801A610C 3C19801C */  lui         $t9, %hi(D_E16C50_801BF980)
/* E35840 801A6110 02002025 */  or          $a0, $s0, $zero
/* E35844 801A6114 00095080 */  sll         $t2, $t1, 2
/* E35848 801A6118 032AC821 */  addu        $t9, $t9, $t2
/* E3584C 801A611C 8F39F980 */  lw          $t9, %lo(D_E16C50_801BF980)($t9)
/* E35850 801A6120 0320F809 */  jalr        $t9
/* E35854 801A6124 00000000 */   nop
/* E35858 801A6128 860B0058 */  lh          $t3, 0x58($s0)
.LE16C50_801A612C:
/* E3585C 801A612C 51600004 */  beql        $t3, $zero, .LE16C50_801A6140
/* E35860 801A6130 960C008A */   lhu        $t4, 0x8A($s0)
/* E35864 801A6134 0C069085 */  jal         func_E16C50_801A4214
/* E35868 801A6138 02002025 */   or         $a0, $s0, $zero
/* E3586C 801A613C 960C008A */  lhu         $t4, 0x8A($s0)
.LE16C50_801A6140:
/* E35870 801A6140 2D81000A */  sltiu       $at, $t4, 0xA
/* E35874 801A6144 102000C4 */  beqz        $at, .LE16C50_801A6458
/* E35878 801A6148 000C6080 */   sll        $t4, $t4, 2
/* E3587C 801A614C 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C17C8)
/* E35880 801A6150 002C0821 */  addu        $at, $at, $t4
/* E35884 801A6154 8C2C17C8 */  lw          $t4, %lo(jtbl_E16C50_801C17C8)($at)
/* E35888 801A6158 01800008 */  jr          $t4
/* E3588C 801A615C 00000000 */   nop
.LE16C50_801A6160:
/* E35890 801A6160 860D004C */  lh          $t5, 0x4C($s0)
/* E35894 801A6164 2401004B */  addiu       $at, $zero, 0x4B
/* E35898 801A6168 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E3589C 801A616C 25AE0001 */  addiu       $t6, $t5, 0x1
/* E358A0 801A6170 A60E004C */  sh          $t6, 0x4C($s0)
/* E358A4 801A6174 860F004C */  lh          $t7, 0x4C($s0)
/* E358A8 801A6178 3C042943 */  lui         $a0, (0x29432073 >> 16)
/* E358AC 801A617C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E358B0 801A6180 15E10008 */  bne         $t7, $at, .LE16C50_801A61A4
/* E358B4 801A6184 34842073 */   ori        $a0, $a0, (0x29432073 & 0xFFFF)
/* E358B8 801A6188 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E358BC 801A618C 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E358C0 801A6190 AFB80014 */  sw          $t8, 0x14($sp)
/* E358C4 801A6194 260503FC */  addiu       $a1, $s0, 0x3FC
/* E358C8 801A6198 24060004 */  addiu       $a2, $zero, 0x4
/* E358CC 801A619C 0C006486 */  jal         Audio_PlaySfx
/* E358D0 801A61A0 AFA70010 */   sw         $a3, 0x10($sp)
.LE16C50_801A61A4:
/* E358D4 801A61A4 3C040601 */  lui         $a0, %hi(D_601388C)
/* E358D8 801A61A8 0C026B37 */  jal         Animation_GetFrameCount
/* E358DC 801A61AC 2484388C */   addiu      $a0, $a0, %lo(D_601388C)
/* E358E0 801A61B0 8605004C */  lh          $a1, 0x4C($s0)
/* E358E4 801A61B4 00A2082A */  slt         $at, $a1, $v0
/* E358E8 801A61B8 14200013 */  bnez        $at, .LE16C50_801A6208
/* E358EC 801A61BC 00000000 */   nop
/* E358F0 801A61C0 86080060 */  lh          $t0, 0x60($s0)
/* E358F4 801A61C4 3C040601 */  lui         $a0, %hi(D_601388C)
/* E358F8 801A61C8 1100000A */  beqz        $t0, .LE16C50_801A61F4
/* E358FC 801A61CC 00000000 */   nop
/* E35900 801A61D0 8609008A */  lh          $t1, 0x8A($s0)
/* E35904 801A61D4 A600004C */  sh          $zero, 0x4C($s0)
/* E35908 801A61D8 3C01801C */  lui         $at, %hi(D_E16C50_801C17F0)
/* E3590C 801A61DC 252A0001 */  addiu       $t2, $t1, 0x1
/* E35910 801A61E0 A60A008A */  sh          $t2, 0x8A($s0)
/* E35914 801A61E4 C42817F0 */  lwc1        $ft2, %lo(D_E16C50_801C17F0)($at)
/* E35918 801A61E8 8605004C */  lh          $a1, 0x4C($s0)
/* E3591C 801A61EC 10000006 */  b           .LE16C50_801A6208
/* E35920 801A61F0 E60800D8 */   swc1       $ft2, 0xD8($s0)
.LE16C50_801A61F4:
/* E35924 801A61F4 0C026B37 */  jal         Animation_GetFrameCount
/* E35928 801A61F8 2484388C */   addiu      $a0, $a0, %lo(D_601388C)
/* E3592C 801A61FC 2459FFFF */  addiu       $t9, $v0, -0x1
/* E35930 801A6200 A619004C */  sh          $t9, 0x4C($s0)
/* E35934 801A6204 8605004C */  lh          $a1, 0x4C($s0)
.LE16C50_801A6208:
/* E35938 801A6208 3C040601 */  lui         $a0, %hi(D_601388C)
/* E3593C 801A620C 2484388C */  addiu       $a0, $a0, %lo(D_601388C)
/* E35940 801A6210 0C026A88 */  jal         Animation_GetFrameData
/* E35944 801A6214 27A60050 */   addiu      $a2, $sp, 0x50
/* E35948 801A6218 1000008F */  b           .LE16C50_801A6458
/* E3594C 801A621C AFA201BC */   sw         $v0, 0x1BC($sp)
.LE16C50_801A6220:
/* E35950 801A6220 860B004C */  lh          $t3, 0x4C($s0)
/* E35954 801A6224 3C040601 */  lui         $a0, %hi(D_600D3DC)
/* E35958 801A6228 2484D3DC */  addiu       $a0, $a0, %lo(D_600D3DC)
/* E3595C 801A622C 256C0001 */  addiu       $t4, $t3, 0x1
/* E35960 801A6230 0C026B37 */  jal         Animation_GetFrameCount
/* E35964 801A6234 A60C004C */   sh         $t4, 0x4C($s0)
/* E35968 801A6238 8605004C */  lh          $a1, 0x4C($s0)
/* E3596C 801A623C 3C040601 */  lui         $a0, %hi(D_600D3DC)
/* E35970 801A6240 2484D3DC */  addiu       $a0, $a0, %lo(D_600D3DC)
/* E35974 801A6244 00A2082A */  slt         $at, $a1, $v0
/* E35978 801A6248 14200003 */  bnez        $at, .LE16C50_801A6258
/* E3597C 801A624C 00000000 */   nop
/* E35980 801A6250 A600004C */  sh          $zero, 0x4C($s0)
/* E35984 801A6254 8605004C */  lh          $a1, 0x4C($s0)
.LE16C50_801A6258:
/* E35988 801A6258 0C026A88 */  jal         Animation_GetFrameData
/* E3598C 801A625C 27A60050 */   addiu      $a2, $sp, 0x50
/* E35990 801A6260 1000007D */  b           .LE16C50_801A6458
/* E35994 801A6264 AFA201BC */   sw         $v0, 0x1BC($sp)
.LE16C50_801A6268:
/* E35998 801A6268 860D004C */  lh          $t5, 0x4C($s0)
/* E3599C 801A626C 3C040601 */  lui         $a0, %hi(D_600E2C4)
/* E359A0 801A6270 2484E2C4 */  addiu       $a0, $a0, %lo(D_600E2C4)
/* E359A4 801A6274 25AE0001 */  addiu       $t6, $t5, 0x1
/* E359A8 801A6278 0C026B37 */  jal         Animation_GetFrameCount
/* E359AC 801A627C A60E004C */   sh         $t6, 0x4C($s0)
/* E359B0 801A6280 8605004C */  lh          $a1, 0x4C($s0)
/* E359B4 801A6284 3C040601 */  lui         $a0, %hi(D_600E2C4)
/* E359B8 801A6288 2484E2C4 */  addiu       $a0, $a0, %lo(D_600E2C4)
/* E359BC 801A628C 00A2082A */  slt         $at, $a1, $v0
/* E359C0 801A6290 14200003 */  bnez        $at, .LE16C50_801A62A0
/* E359C4 801A6294 00000000 */   nop
/* E359C8 801A6298 A600004C */  sh          $zero, 0x4C($s0)
/* E359CC 801A629C 8605004C */  lh          $a1, 0x4C($s0)
.LE16C50_801A62A0:
/* E359D0 801A62A0 0C026A88 */  jal         Animation_GetFrameData
/* E359D4 801A62A4 27A60050 */   addiu      $a2, $sp, 0x50
/* E359D8 801A62A8 1000006B */  b           .LE16C50_801A6458
/* E359DC 801A62AC AFA201BC */   sw         $v0, 0x1BC($sp)
.LE16C50_801A62B0:
/* E359E0 801A62B0 860F004C */  lh          $t7, 0x4C($s0)
/* E359E4 801A62B4 3C040601 */  lui         $a0, %hi(D_600F744)
/* E359E8 801A62B8 2484F744 */  addiu       $a0, $a0, %lo(D_600F744)
/* E359EC 801A62BC 25F80001 */  addiu       $t8, $t7, 0x1
/* E359F0 801A62C0 0C026B37 */  jal         Animation_GetFrameCount
/* E359F4 801A62C4 A618004C */   sh         $t8, 0x4C($s0)
/* E359F8 801A62C8 8605004C */  lh          $a1, 0x4C($s0)
/* E359FC 801A62CC 3C040601 */  lui         $a0, %hi(D_600F744)
/* E35A00 801A62D0 2484F744 */  addiu       $a0, $a0, %lo(D_600F744)
/* E35A04 801A62D4 00A2082A */  slt         $at, $a1, $v0
/* E35A08 801A62D8 14200003 */  bnez        $at, .LE16C50_801A62E8
/* E35A0C 801A62DC 00000000 */   nop
/* E35A10 801A62E0 A600004C */  sh          $zero, 0x4C($s0)
/* E35A14 801A62E4 8605004C */  lh          $a1, 0x4C($s0)
.LE16C50_801A62E8:
/* E35A18 801A62E8 0C026A88 */  jal         Animation_GetFrameData
/* E35A1C 801A62EC 27A60050 */   addiu      $a2, $sp, 0x50
/* E35A20 801A62F0 10000059 */  b           .LE16C50_801A6458
/* E35A24 801A62F4 AFA201BC */   sw         $v0, 0x1BC($sp)
.LE16C50_801A62F8:
/* E35A28 801A62F8 8608004C */  lh          $t0, 0x4C($s0)
/* E35A2C 801A62FC 3C040601 */  lui         $a0, %hi(D_600C15C)
/* E35A30 801A6300 2484C15C */  addiu       $a0, $a0, %lo(D_600C15C)
/* E35A34 801A6304 25090001 */  addiu       $t1, $t0, 0x1
/* E35A38 801A6308 0C026B37 */  jal         Animation_GetFrameCount
/* E35A3C 801A630C A609004C */   sh         $t1, 0x4C($s0)
/* E35A40 801A6310 8605004C */  lh          $a1, 0x4C($s0)
/* E35A44 801A6314 3C040601 */  lui         $a0, %hi(D_600C15C)
/* E35A48 801A6318 2484C15C */  addiu       $a0, $a0, %lo(D_600C15C)
/* E35A4C 801A631C 00A2082A */  slt         $at, $a1, $v0
/* E35A50 801A6320 14200003 */  bnez        $at, .LE16C50_801A6330
/* E35A54 801A6324 00000000 */   nop
/* E35A58 801A6328 A600004C */  sh          $zero, 0x4C($s0)
/* E35A5C 801A632C 8605004C */  lh          $a1, 0x4C($s0)
.LE16C50_801A6330:
/* E35A60 801A6330 0C026A88 */  jal         Animation_GetFrameData
/* E35A64 801A6334 27A60050 */   addiu      $a2, $sp, 0x50
/* E35A68 801A6338 10000047 */  b           .LE16C50_801A6458
/* E35A6C 801A633C AFA201BC */   sw         $v0, 0x1BC($sp)
.LE16C50_801A6340:
/* E35A70 801A6340 860A004C */  lh          $t2, 0x4C($s0)
/* E35A74 801A6344 2401002D */  addiu       $at, $zero, 0x2D
/* E35A78 801A6348 25590001 */  addiu       $t9, $t2, 0x1
/* E35A7C 801A634C A619004C */  sh          $t9, 0x4C($s0)
/* E35A80 801A6350 860B004C */  lh          $t3, 0x4C($s0)
/* E35A84 801A6354 1561000E */  bne         $t3, $at, .LE16C50_801A6390
/* E35A88 801A6358 00000000 */   nop
/* E35A8C 801A635C 860C0060 */  lh          $t4, 0x60($s0)
/* E35A90 801A6360 3C042943 */  lui         $a0, (0x29432073 >> 16)
/* E35A94 801A6364 34842073 */  ori         $a0, $a0, (0x29432073 & 0xFFFF)
/* E35A98 801A6368 11800009 */  beqz        $t4, .LE16C50_801A6390
/* E35A9C 801A636C 260503FC */   addiu      $a1, $s0, 0x3FC
/* E35AA0 801A6370 3C0D800C */  lui         $t5, %hi(D_800C5D34)
/* E35AA4 801A6374 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E35AA8 801A6378 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E35AAC 801A637C 25A75D34 */  addiu       $a3, $t5, %lo(D_800C5D34)
/* E35AB0 801A6380 AFA70010 */  sw          $a3, 0x10($sp)
/* E35AB4 801A6384 AFAE0014 */  sw          $t6, 0x14($sp)
/* E35AB8 801A6388 0C006486 */  jal         Audio_PlaySfx
/* E35ABC 801A638C 24060004 */   addiu      $a2, $zero, 0x4
.LE16C50_801A6390:
/* E35AC0 801A6390 3C040601 */  lui         $a0, %hi(D_6012C00)
/* E35AC4 801A6394 0C026B37 */  jal         Animation_GetFrameCount
/* E35AC8 801A6398 24842C00 */   addiu      $a0, $a0, %lo(D_6012C00)
/* E35ACC 801A639C 8605004C */  lh          $a1, 0x4C($s0)
/* E35AD0 801A63A0 3C040601 */  lui         $a0, %hi(D_6012C00)
/* E35AD4 801A63A4 24842C00 */  addiu       $a0, $a0, %lo(D_6012C00)
/* E35AD8 801A63A8 00A2082A */  slt         $at, $a1, $v0
/* E35ADC 801A63AC 14200003 */  bnez        $at, .LE16C50_801A63BC
/* E35AE0 801A63B0 00000000 */   nop
/* E35AE4 801A63B4 A600004C */  sh          $zero, 0x4C($s0)
/* E35AE8 801A63B8 8605004C */  lh          $a1, 0x4C($s0)
.LE16C50_801A63BC:
/* E35AEC 801A63BC 0C026A88 */  jal         Animation_GetFrameData
/* E35AF0 801A63C0 27A60050 */   addiu      $a2, $sp, 0x50
/* E35AF4 801A63C4 10000024 */  b           .LE16C50_801A6458
/* E35AF8 801A63C8 AFA201BC */   sw         $v0, 0x1BC($sp)
.LE16C50_801A63CC:
/* E35AFC 801A63CC 860F004C */  lh          $t7, 0x4C($s0)
/* E35B00 801A63D0 3C040601 */  lui         $a0, %hi(D_600B1B4)
/* E35B04 801A63D4 2484B1B4 */  addiu       $a0, $a0, %lo(D_600B1B4)
/* E35B08 801A63D8 25F80001 */  addiu       $t8, $t7, 0x1
/* E35B0C 801A63DC 0C026B37 */  jal         Animation_GetFrameCount
/* E35B10 801A63E0 A618004C */   sh         $t8, 0x4C($s0)
/* E35B14 801A63E4 8605004C */  lh          $a1, 0x4C($s0)
/* E35B18 801A63E8 3C040601 */  lui         $a0, %hi(D_600B1B4)
/* E35B1C 801A63EC 2484B1B4 */  addiu       $a0, $a0, %lo(D_600B1B4)
/* E35B20 801A63F0 00A2082A */  slt         $at, $a1, $v0
/* E35B24 801A63F4 14200003 */  bnez        $at, .LE16C50_801A6404
/* E35B28 801A63F8 00000000 */   nop
/* E35B2C 801A63FC A600004C */  sh          $zero, 0x4C($s0)
/* E35B30 801A6400 8605004C */  lh          $a1, 0x4C($s0)
.LE16C50_801A6404:
/* E35B34 801A6404 0C026A88 */  jal         Animation_GetFrameData
/* E35B38 801A6408 27A60050 */   addiu      $a2, $sp, 0x50
/* E35B3C 801A640C 10000012 */  b           .LE16C50_801A6458
/* E35B40 801A6410 AFA201BC */   sw         $v0, 0x1BC($sp)
.LE16C50_801A6414:
/* E35B44 801A6414 8608004C */  lh          $t0, 0x4C($s0)
/* E35B48 801A6418 3C040601 */  lui         $a0, %hi(D_6009D30)
/* E35B4C 801A641C 24849D30 */  addiu       $a0, $a0, %lo(D_6009D30)
/* E35B50 801A6420 25090001 */  addiu       $t1, $t0, 0x1
/* E35B54 801A6424 0C026B37 */  jal         Animation_GetFrameCount
/* E35B58 801A6428 A609004C */   sh         $t1, 0x4C($s0)
/* E35B5C 801A642C 8605004C */  lh          $a1, 0x4C($s0)
/* E35B60 801A6430 3C040601 */  lui         $a0, %hi(D_6009D30)
/* E35B64 801A6434 24849D30 */  addiu       $a0, $a0, %lo(D_6009D30)
/* E35B68 801A6438 00A2082A */  slt         $at, $a1, $v0
/* E35B6C 801A643C 14200003 */  bnez        $at, .LE16C50_801A644C
/* E35B70 801A6440 00000000 */   nop
/* E35B74 801A6444 A600004C */  sh          $zero, 0x4C($s0)
/* E35B78 801A6448 8605004C */  lh          $a1, 0x4C($s0)
.LE16C50_801A644C:
/* E35B7C 801A644C 0C026A88 */  jal         Animation_GetFrameData
/* E35B80 801A6450 27A60050 */   addiu      $a2, $sp, 0x50
/* E35B84 801A6454 AFA201BC */  sw          $v0, 0x1BC($sp)
.LE16C50_801A6458:
/* E35B88 801A6458 C60A0304 */  lwc1        $ft3, 0x304($s0)
/* E35B8C 801A645C 3C01801C */  lui         $at, %hi(D_E16C50_801C17F4)
/* E35B90 801A6460 C42617F4 */  lwc1        $ft1, %lo(D_E16C50_801C17F4)($at)
/* E35B94 801A6464 46005107 */  neg.s       $ft0, $ft3
/* E35B98 801A6468 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E35B9C 801A646C 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E35BA0 801A6470 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E35BA4 801A6474 00003025 */  or          $a2, $zero, $zero
/* E35BA8 801A6478 44054000 */  mfc1        $a1, $ft2
/* E35BAC 801A647C 0C0017F8 */  jal         Matrix_RotateZ
/* E35BB0 801A6480 00000000 */   nop
/* E35BB4 801A6484 C60A02FC */  lwc1        $ft3, 0x2FC($s0)
/* E35BB8 801A6488 3C01801C */  lui         $at, %hi(D_E16C50_801C17F8)
/* E35BBC 801A648C C42617F8 */  lwc1        $ft1, %lo(D_E16C50_801C17F8)($at)
/* E35BC0 801A6490 46005107 */  neg.s       $ft0, $ft3
/* E35BC4 801A6494 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E35BC8 801A6498 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E35BCC 801A649C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E35BD0 801A64A0 24060001 */  addiu       $a2, $zero, 0x1
/* E35BD4 801A64A4 44054000 */  mfc1        $a1, $ft2
/* E35BD8 801A64A8 0C001751 */  jal         Matrix_RotateX
/* E35BDC 801A64AC 00000000 */   nop
/* E35BE0 801A64B0 C60A0300 */  lwc1        $ft3, 0x300($s0)
/* E35BE4 801A64B4 3C01801C */  lui         $at, %hi(D_E16C50_801C17FC)
/* E35BE8 801A64B8 C42617FC */  lwc1        $ft1, %lo(D_E16C50_801C17FC)($at)
/* E35BEC 801A64BC 46005107 */  neg.s       $ft0, $ft3
/* E35BF0 801A64C0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E35BF4 801A64C4 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E35BF8 801A64C8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E35BFC 801A64CC 24060001 */  addiu       $a2, $zero, 0x1
/* E35C00 801A64D0 44054000 */  mfc1        $a1, $ft2
/* E35C04 801A64D4 0C0017A4 */  jal         Matrix_RotateY
/* E35C08 801A64D8 00000000 */   nop
/* E35C0C 801A64DC C60A0018 */  lwc1        $ft3, 0x18($s0)
/* E35C10 801A64E0 3C01801C */  lui         $at, %hi(D_E16C50_801C1800)
/* E35C14 801A64E4 C4261800 */  lwc1        $ft1, %lo(D_E16C50_801C1800)($at)
/* E35C18 801A64E8 46005107 */  neg.s       $ft0, $ft3
/* E35C1C 801A64EC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E35C20 801A64F0 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E35C24 801A64F4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E35C28 801A64F8 24060001 */  addiu       $a2, $zero, 0x1
/* E35C2C 801A64FC 44054000 */  mfc1        $a1, $ft2
/* E35C30 801A6500 0C0017F8 */  jal         Matrix_RotateZ
/* E35C34 801A6504 00000000 */   nop
/* E35C38 801A6508 C60A0010 */  lwc1        $ft3, 0x10($s0)
/* E35C3C 801A650C 3C01801C */  lui         $at, %hi(D_E16C50_801C1804)
/* E35C40 801A6510 C4261804 */  lwc1        $ft1, %lo(D_E16C50_801C1804)($at)
/* E35C44 801A6514 46005107 */  neg.s       $ft0, $ft3
/* E35C48 801A6518 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E35C4C 801A651C 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E35C50 801A6520 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E35C54 801A6524 24060001 */  addiu       $a2, $zero, 0x1
/* E35C58 801A6528 44054000 */  mfc1        $a1, $ft2
/* E35C5C 801A652C 0C001751 */  jal         Matrix_RotateX
/* E35C60 801A6530 00000000 */   nop
/* E35C64 801A6534 C60A0014 */  lwc1        $ft3, 0x14($s0)
/* E35C68 801A6538 3C01801C */  lui         $at, %hi(D_E16C50_801C1808)
/* E35C6C 801A653C C4261808 */  lwc1        $ft1, %lo(D_E16C50_801C1808)($at)
/* E35C70 801A6540 46005107 */  neg.s       $ft0, $ft3
/* E35C74 801A6544 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E35C78 801A6548 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E35C7C 801A654C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E35C80 801A6550 24060001 */  addiu       $a2, $zero, 0x1
/* E35C84 801A6554 44054000 */  mfc1        $a1, $ft2
/* E35C88 801A6558 0C0017A4 */  jal         Matrix_RotateY
/* E35C8C 801A655C 00000000 */   nop
/* E35C90 801A6560 860A0060 */  lh          $t2, 0x60($s0)
/* E35C94 801A6564 3C04801C */  lui         $a0, %hi(D_E16C50_801C2768 + 0x4)
/* E35C98 801A6568 2484276C */  addiu       $a0, $a0, %lo(D_E16C50_801C2768 + 0x4)
/* E35C9C 801A656C 19400071 */  blez        $t2, .LE16C50_801A6734
/* E35CA0 801A6570 24050000 */   addiu      $a1, $zero, 0x0
/* E35CA4 801A6574 86190088 */  lh          $t9, 0x88($s0)
/* E35CA8 801A6578 24010001 */  addiu       $at, $zero, 0x1
/* E35CAC 801A657C 3C028018 */  lui         $v0, %hi(gPlayer)
/* E35CB0 801A6580 1721006C */  bne         $t9, $at, .LE16C50_801A6734
/* E35CB4 801A6584 00000000 */   nop
/* E35CB8 801A6588 8C428280 */  lw          $v0, %lo(gPlayer)($v0)
/* E35CBC 801A658C C6040004 */  lwc1        $ft0, 0x4($s0)
/* E35CC0 801A6590 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E35CC4 801A6594 C44A0074 */  lwc1        $ft3, 0x74($v0)
/* E35CC8 801A6598 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E35CCC 801A659C 27A50044 */  addiu       $a1, $sp, 0x44
/* E35CD0 801A65A0 46045181 */  sub.s       $ft1, $ft3, $ft0
/* E35CD4 801A65A4 27A60038 */  addiu       $a2, $sp, 0x38
/* E35CD8 801A65A8 E7A60044 */  swc1        $ft1, 0x44($sp)
/* E35CDC 801A65AC C60A0008 */  lwc1        $ft3, 0x8($s0)
/* E35CE0 801A65B0 C4480078 */  lwc1        $ft2, 0x78($v0)
/* E35CE4 801A65B4 460A4101 */  sub.s       $ft0, $ft2, $ft3
/* E35CE8 801A65B8 E7A40048 */  swc1        $ft0, 0x48($sp)
/* E35CEC 801A65BC C608000C */  lwc1        $ft2, 0xC($s0)
/* E35CF0 801A65C0 C446007C */  lwc1        $ft1, 0x7C($v0)
/* E35CF4 801A65C4 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E35CF8 801A65C8 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E35CFC 801A65CC E7AA004C */   swc1       $ft3, 0x4C($sp)
/* E35D00 801A65D0 C7AC0038 */  lwc1        $fa0, 0x38($sp)
/* E35D04 801A65D4 0C001440 */  jal         Math_Atan2F
/* E35D08 801A65D8 C7AE0040 */   lwc1       $fa1, 0x40($sp)
/* E35D0C 801A65DC 0C027DDA */  jal         Math_RadToDeg
/* E35D10 801A65E0 46000306 */   mov.s      $fa0, $fv0
/* E35D14 801A65E4 C7B20038 */  lwc1        $ft5, 0x38($sp)
/* E35D18 801A65E8 C7B00040 */  lwc1        $ft4, 0x40($sp)
/* E35D1C 801A65EC 46000086 */  mov.s       $fv1, $fv0
/* E35D20 801A65F0 46129102 */  mul.s       $ft0, $ft5, $ft5
/* E35D24 801A65F4 E7A201C4 */  swc1        $fv1, 0x1C4($sp)
/* E35D28 801A65F8 C7AC003C */  lwc1        $fa0, 0x3C($sp)
/* E35D2C 801A65FC 46108182 */  mul.s       $ft1, $ft4, $ft4
/* E35D30 801A6600 46062000 */  add.s       $fv0, $ft0, $ft1
/* E35D34 801A6604 0C001440 */  jal         Math_Atan2F
/* E35D38 801A6608 46000384 */   sqrt.s     $fa1, $fv0
/* E35D3C 801A660C 0C027DDA */  jal         Math_RadToDeg
/* E35D40 801A6610 46000307 */   neg.s      $fa0, $fv0
/* E35D44 801A6614 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E35D48 801A6618 44817000 */  mtc1        $at, $fa1
/* E35D4C 801A661C 3C04801C */  lui         $a0, %hi(D_E16C50_801C2768 + 0x4)
/* E35D50 801A6620 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* E35D54 801A6624 4600703C */  c.lt.s      $fa1, $fv0
/* E35D58 801A6628 C7A201C4 */  lwc1        $fv1, 0x1C4($sp)
/* E35D5C 801A662C 46000306 */  mov.s       $fa0, $fv0
/* E35D60 801A6630 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* E35D64 801A6634 45000009 */  bc1f        .LE16C50_801A665C
/* E35D68 801A6638 2484276C */   addiu      $a0, $a0, %lo(D_E16C50_801C2768 + 0x4)
/* E35D6C 801A663C 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E35D70 801A6640 44818000 */  mtc1        $at, $ft4
/* E35D74 801A6644 00000000 */  nop
/* E35D78 801A6648 4610003E */  c.le.s      $fv0, $ft4
/* E35D7C 801A664C 00000000 */  nop
/* E35D80 801A6650 45020003 */  bc1fl       .LE16C50_801A6660
/* E35D84 801A6654 3C0143A5 */   lui        $at, (0x43A50000 >> 16)
/* E35D88 801A6658 46007306 */  mov.s       $fa0, $fa1
.LE16C50_801A665C:
/* E35D8C 801A665C 3C0143A5 */  lui         $at, (0x43A50000 >> 16)
.LE16C50_801A6660:
/* E35D90 801A6660 44810000 */  mtc1        $at, $fv0
/* E35D94 801A6664 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E35D98 801A6668 44818000 */  mtc1        $at, $ft4
/* E35D9C 801A666C 4600603C */  c.lt.s      $fa0, $fv0
/* E35DA0 801A6670 3C014220 */  lui         $at, (0x42200000 >> 16)
/* E35DA4 801A6674 3C074080 */  lui         $a3, (0x40800000 >> 16)
/* E35DA8 801A6678 45020007 */  bc1fl       .LE16C50_801A6698
/* E35DAC 801A667C 44810000 */   mtc1       $at, $fv0
/* E35DB0 801A6680 460C803C */  c.lt.s      $ft4, $fa0
/* E35DB4 801A6684 00000000 */  nop
/* E35DB8 801A6688 45020003 */  bc1fl       .LE16C50_801A6698
/* E35DBC 801A668C 44810000 */   mtc1       $at, $fv0
/* E35DC0 801A6690 46000306 */  mov.s       $fa0, $fv0
/* E35DC4 801A6694 44810000 */  mtc1        $at, $fv0
.LE16C50_801A6698:
/* E35DC8 801A6698 3C0143A0 */  lui         $at, (0x43A00000 >> 16)
/* E35DCC 801A669C 4602003C */  c.lt.s      $fv0, $fv1
/* E35DD0 801A66A0 00000000 */  nop
/* E35DD4 801A66A4 45020007 */  bc1fl       .LE16C50_801A66C4
/* E35DD8 801A66A8 44810000 */   mtc1       $at, $fv0
/* E35DDC 801A66AC 4610103E */  c.le.s      $fv1, $ft4
/* E35DE0 801A66B0 00000000 */  nop
/* E35DE4 801A66B4 45020003 */  bc1fl       .LE16C50_801A66C4
/* E35DE8 801A66B8 44810000 */   mtc1       $at, $fv0
/* E35DEC 801A66BC 46000086 */  mov.s       $fv1, $fv0
/* E35DF0 801A66C0 44810000 */  mtc1        $at, $fv0
.LE16C50_801A66C4:
/* E35DF4 801A66C4 3C01801C */  lui         $at, %hi(D_E16C50_801C180C)
/* E35DF8 801A66C8 4600103C */  c.lt.s      $fv1, $fv0
/* E35DFC 801A66CC 00000000 */  nop
/* E35E00 801A66D0 45000006 */  bc1f        .LE16C50_801A66EC
/* E35E04 801A66D4 00000000 */   nop
/* E35E08 801A66D8 4602803C */  c.lt.s      $ft4, $fv1
/* E35E0C 801A66DC 00000000 */  nop
/* E35E10 801A66E0 45000002 */  bc1f        .LE16C50_801A66EC
/* E35E14 801A66E4 00000000 */   nop
/* E35E18 801A66E8 46000086 */  mov.s       $fv1, $fv0
.LE16C50_801A66EC:
/* E35E1C 801A66EC C428180C */  lwc1        $ft2, %lo(D_E16C50_801C180C)($at)
/* E35E20 801A66F0 44051000 */  mfc1        $a1, $fv1
/* E35E24 801A66F4 E7AC01C8 */  swc1        $fa0, 0x1C8($sp)
/* E35E28 801A66F8 0C026F4E */  jal         Math_SmoothStepToAngle
/* E35E2C 801A66FC E7A80010 */   swc1       $ft2, 0x10($sp)
/* E35E30 801A6700 C7AC01C8 */  lwc1        $fa0, 0x1C8($sp)
/* E35E34 801A6704 3C01801C */  lui         $at, %hi(D_E16C50_801C1810)
/* E35E38 801A6708 C42A1810 */  lwc1        $ft3, %lo(D_E16C50_801C1810)($at)
/* E35E3C 801A670C 3C04801C */  lui         $a0, %hi(D_E16C50_801C2768)
/* E35E40 801A6710 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* E35E44 801A6714 44056000 */  mfc1        $a1, $fa0
/* E35E48 801A6718 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* E35E4C 801A671C 24842768 */  addiu       $a0, $a0, %lo(D_E16C50_801C2768)
/* E35E50 801A6720 3C074080 */  lui         $a3, (0x40800000 >> 16)
/* E35E54 801A6724 0C026F4E */  jal         Math_SmoothStepToAngle
/* E35E58 801A6728 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E35E5C 801A672C 10000013 */  b           .LE16C50_801A677C
/* E35E60 801A6730 3C0142C8 */   lui        $at, (0x42C80000 >> 16)
.LE16C50_801A6734:
/* E35E64 801A6734 3C01801C */  lui         $at, %hi(D_E16C50_801C1814)
/* E35E68 801A6738 C4241814 */  lwc1        $ft0, %lo(D_E16C50_801C1814)($at)
/* E35E6C 801A673C 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* E35E70 801A6740 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* E35E74 801A6744 3C074080 */  lui         $a3, (0x40800000 >> 16)
/* E35E78 801A6748 0C026F4E */  jal         Math_SmoothStepToAngle
/* E35E7C 801A674C E7A40010 */   swc1       $ft0, 0x10($sp)
/* E35E80 801A6750 3C01801C */  lui         $at, %hi(D_E16C50_801C1818)
/* E35E84 801A6754 C4261818 */  lwc1        $ft1, %lo(D_E16C50_801C1818)($at)
/* E35E88 801A6758 3C04801C */  lui         $a0, %hi(D_E16C50_801C2768)
/* E35E8C 801A675C 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* E35E90 801A6760 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* E35E94 801A6764 24842768 */  addiu       $a0, $a0, %lo(D_E16C50_801C2768)
/* E35E98 801A6768 24050000 */  addiu       $a1, $zero, 0x0
/* E35E9C 801A676C 3C074080 */  lui         $a3, (0x40800000 >> 16)
/* E35EA0 801A6770 0C026F4E */  jal         Math_SmoothStepToAngle
/* E35EA4 801A6774 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E35EA8 801A6778 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
.LE16C50_801A677C:
/* E35EAC 801A677C 44815000 */  mtc1        $at, $ft3
/* E35EB0 801A6780 C60800D8 */  lwc1        $ft2, 0xD8($s0)
/* E35EB4 801A6784 44802000 */  mtc1        $zero, $ft0
/* E35EB8 801A6788 27A40050 */  addiu       $a0, $sp, 0x50
/* E35EBC 801A678C 260501A0 */  addiu       $a1, $s0, 0x1A0
/* E35EC0 801A6790 24060001 */  addiu       $a2, $zero, 0x1
/* E35EC4 801A6794 8FA701BC */  lw          $a3, 0x1BC($sp)
/* E35EC8 801A6798 E7A80010 */  swc1        $ft2, 0x10($sp)
/* E35ECC 801A679C E7AA0014 */  swc1        $ft3, 0x14($sp)
/* E35ED0 801A67A0 0C026FBB */  jal         Math_SmoothStepToVec3fArray
/* E35ED4 801A67A4 E7A40018 */   swc1       $ft0, 0x18($sp)
/* E35ED8 801A67A8 820B0062 */  lb          $t3, 0x62($s0)
/* E35EDC 801A67AC 11600020 */  beqz        $t3, .LE16C50_801A6830
/* E35EE0 801A67B0 00000000 */   nop
/* E35EE4 801A67B4 860C0060 */  lh          $t4, 0x60($s0)
/* E35EE8 801A67B8 3C042912 */  lui         $a0, (0x29121007 >> 16)
/* E35EEC 801A67BC 34841007 */  ori         $a0, $a0, (0x29121007 & 0xFFFF)
/* E35EF0 801A67C0 1980001B */  blez        $t4, .LE16C50_801A6830
/* E35EF4 801A67C4 260503FC */   addiu      $a1, $s0, 0x3FC
/* E35EF8 801A67C8 3C0D800C */  lui         $t5, %hi(D_800C5D34)
/* E35EFC 801A67CC 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E35F00 801A67D0 A2000062 */  sb          $zero, 0x62($s0)
/* E35F04 801A67D4 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E35F08 801A67D8 25A75D34 */  addiu       $a3, $t5, %lo(D_800C5D34)
/* E35F0C 801A67DC AFA70010 */  sw          $a3, 0x10($sp)
/* E35F10 801A67E0 AFAE0014 */  sw          $t6, 0x14($sp)
/* E35F14 801A67E4 0C006486 */  jal         Audio_PlaySfx
/* E35F18 801A67E8 24060004 */   addiu      $a2, $zero, 0x4
/* E35F1C 801A67EC 86020088 */  lh          $v0, 0x88($s0)
/* E35F20 801A67F0 24030002 */  addiu       $v1, $zero, 0x2
/* E35F24 801A67F4 1040000E */  beqz        $v0, .LE16C50_801A6830
/* E35F28 801A67F8 00000000 */   nop
/* E35F2C 801A67FC 1062000C */  beq         $v1, $v0, .LE16C50_801A6830
/* E35F30 801A6800 24010003 */   addiu      $at, $zero, 0x3
/* E35F34 801A6804 1041000A */  beq         $v0, $at, .LE16C50_801A6830
/* E35F38 801A6808 24010006 */   addiu      $at, $zero, 0x6
/* E35F3C 801A680C 10410008 */  beq         $v0, $at, .LE16C50_801A6830
/* E35F40 801A6810 24010007 */   addiu      $at, $zero, 0x7
/* E35F44 801A6814 14410004 */  bne         $v0, $at, .LE16C50_801A6828
/* E35F48 801A6818 00000000 */   nop
/* E35F4C 801A681C 860F004E */  lh          $t7, 0x4E($s0)
/* E35F50 801A6820 106F0003 */  beq         $v1, $t7, .LE16C50_801A6830
/* E35F54 801A6824 00000000 */   nop
.LE16C50_801A6828:
/* E35F58 801A6828 0C068F13 */  jal         func_E16C50_801A3C4C
/* E35F5C 801A682C 02002025 */   or         $a0, $s0, $zero
.LE16C50_801A6830:
/* E35F60 801A6830 3C028016 */  lui         $v0, %hi(D_801613A0)
/* E35F64 801A6834 8C4213A0 */  lw          $v0, %lo(D_801613A0)($v0)
/* E35F68 801A6838 24010190 */  addiu       $at, $zero, 0x190
/* E35F6C 801A683C 24180001 */  addiu       $t8, $zero, 0x1
/* E35F70 801A6840 14410002 */  bne         $v0, $at, .LE16C50_801A684C
/* E35F74 801A6844 3C018016 */   lui        $at, %hi(D_80161734)
/* E35F78 801A6848 AC381734 */  sw          $t8, %lo(D_80161734)($at)
.LE16C50_801A684C:
/* E35F7C 801A684C 28410190 */  slti        $at, $v0, 0x190
/* E35F80 801A6850 54200011 */  bnel        $at, $zero, .LE16C50_801A6898
/* E35F84 801A6854 8FBF002C */   lw         $ra, 0x2C($sp)
/* E35F88 801A6858 8608008E */  lh          $t0, 0x8E($s0)
/* E35F8C 801A685C 86090060 */  lh          $t1, 0x60($s0)
/* E35F90 801A6860 8619008C */  lh          $t9, 0x8C($s0)
/* E35F94 801A6864 3C01801C */  lui         $at, %hi(D_E16C50_801C181C)
/* E35F98 801A6868 01095021 */  addu        $t2, $t0, $t1
/* E35F9C 801A686C 01595821 */  addu        $t3, $t2, $t9
/* E35FA0 801A6870 448B3000 */  mtc1        $t3, $ft1
/* E35FA4 801A6874 C42A181C */  lwc1        $ft3, %lo(D_E16C50_801C181C)($at)
/* E35FA8 801A6878 3C018017 */  lui         $at, %hi(D_80177848)
/* E35FAC 801A687C 46803220 */  cvt.s.w     $ft2, $ft1
/* E35FB0 801A6880 460A4102 */  mul.s       $ft0, $ft2, $ft3
/* E35FB4 801A6884 4600218D */  trunc.w.s   $ft1, $ft0
/* E35FB8 801A6888 440D3000 */  mfc1        $t5, $ft1
/* E35FBC 801A688C 00000000 */  nop
/* E35FC0 801A6890 AC2D7848 */  sw          $t5, %lo(D_80177848)($at)
/* E35FC4 801A6894 8FBF002C */  lw          $ra, 0x2C($sp)
.LE16C50_801A6898:
/* E35FC8 801A6898 8FB00028 */  lw          $s0, 0x28($sp)
/* E35FCC 801A689C 27BD01D0 */  addiu       $sp, $sp, 0x1D0
/* E35FD0 801A68A0 03E00008 */  jr          $ra
/* E35FD4 801A68A4 00000000 */   nop
.section .late_rodata
dlabel jtbl_E16C50_801C1820
/* E50F50 801C1820 801A6A6C */ .word .LE16C50_801A6A6C
/* E50F54 801C1824 801A6AE0 */ .word .LE16C50_801A6AE0
/* E50F58 801C1828 801A6AE0 */ .word .LE16C50_801A6AE0
/* E50F5C 801C182C 801A6AE0 */ .word .LE16C50_801A6AE0
/* E50F60 801C1830 801A6B54 */ .word .LE16C50_801A6B54
/* E50F64 801C1834 801A6B54 */ .word .LE16C50_801A6B54
/* E50F68 801C1838 801A6B54 */ .word .LE16C50_801A6B54
/* E50F6C 801C183C 801A6BC4 */ .word .LE16C50_801A6BC4
/* E50F70 801C1840 801A6BC4 */ .word .LE16C50_801A6BC4
/* E50F74 801C1844 801A6BC4 */ .word .LE16C50_801A6BC4
/* E50F78 801C1848 801A6A44 */ .word .LE16C50_801A6A44


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A68A8
/* E35FD8 801A68A8 27BDFF98 */  addiu       $sp, $sp, -0x68
/* E35FDC 801A68AC AFB10020 */  sw          $s1, 0x20($sp)
/* E35FE0 801A68B0 AFB0001C */  sw          $s0, 0x1C($sp)
/* E35FE4 801A68B4 3C088013 */  lui         $t0, %hi(gMasterDisp)
/* E35FE8 801A68B8 3C09801C */  lui         $t1, %hi(D_E16C50_801C2740)
/* E35FEC 801A68BC 25292740 */  addiu       $t1, $t1, %lo(D_E16C50_801C2740)
/* E35FF0 801A68C0 25087E64 */  addiu       $t0, $t0, %lo(gMasterDisp)
/* E35FF4 801A68C4 00E08025 */  or          $s0, $a3, $zero
/* E35FF8 801A68C8 8FB10078 */  lw          $s1, 0x78($sp)
/* E35FFC 801A68CC AFBF0024 */  sw          $ra, 0x24($sp)
/* E36000 801A68D0 AFA40068 */  sw          $a0, 0x68($sp)
/* E36004 801A68D4 AFA5006C */  sw          $a1, 0x6C($sp)
/* E36008 801A68D8 AFA60070 */  sw          $a2, 0x70($sp)
/* E3600C 801A68DC 3C0AFA00 */  lui         $t2, (0xFA000000 >> 16)
/* E36010 801A68E0 3C0F801C */  lui         $t7, %hi(D_E16C50_801BF9A4)
/* E36014 801A68E4 25EFF9A4 */  addiu       $t7, $t7, %lo(D_E16C50_801BF9A4)
/* E36018 801A68E8 8DE10000 */  lw          $at, 0x0($t7)
/* E3601C 801A68EC 27AE0058 */  addiu       $t6, $sp, 0x58
/* E36020 801A68F0 8DEB0004 */  lw          $t3, 0x4($t7)
/* E36024 801A68F4 ADC10000 */  sw          $at, 0x0($t6)
/* E36028 801A68F8 8DE10008 */  lw          $at, 0x8($t7)
/* E3602C 801A68FC 3C0D801C */  lui         $t5, %hi(D_E16C50_801BF9B0)
/* E36030 801A6900 25ADF9B0 */  addiu       $t5, $t5, %lo(D_E16C50_801BF9B0)
/* E36034 801A6904 ADCB0004 */  sw          $t3, 0x4($t6)
/* E36038 801A6908 ADC10008 */  sw          $at, 0x8($t6)
/* E3603C 801A690C 8DA10000 */  lw          $at, 0x0($t5)
/* E36040 801A6910 27AC004C */  addiu       $t4, $sp, 0x4C
/* E36044 801A6914 8DAE0004 */  lw          $t6, 0x4($t5)
/* E36048 801A6918 AD810000 */  sw          $at, 0x0($t4)
/* E3604C 801A691C 8DA10008 */  lw          $at, 0x8($t5)
/* E36050 801A6920 3C0B801C */  lui         $t3, %hi(D_E16C50_801BF9BC)
/* E36054 801A6924 256BF9BC */  addiu       $t3, $t3, %lo(D_E16C50_801BF9BC)
/* E36058 801A6928 AD8E0004 */  sw          $t6, 0x4($t4)
/* E3605C 801A692C AD810008 */  sw          $at, 0x8($t4)
/* E36060 801A6930 8D610000 */  lw          $at, 0x0($t3)
/* E36064 801A6934 27AF0040 */  addiu       $t7, $sp, 0x40
/* E36068 801A6938 8D6C0004 */  lw          $t4, 0x4($t3)
/* E3606C 801A693C ADE10000 */  sw          $at, 0x0($t7)
/* E36070 801A6940 8D610008 */  lw          $at, 0x8($t3)
/* E36074 801A6944 24040010 */  addiu       $a0, $zero, 0x10
/* E36078 801A6948 ADEC0004 */  sw          $t4, 0x4($t7)
/* E3607C 801A694C ADE10008 */  sw          $at, 0x8($t7)
/* E36080 801A6950 8D020000 */  lw          $v0, 0x0($t0)
/* E36084 801A6954 3C014596 */  lui         $at, (0x45960000 >> 16)
/* E36088 801A6958 44813000 */  mtc1        $at, $ft1
/* E3608C 801A695C 244D0008 */  addiu       $t5, $v0, 0x8
/* E36090 801A6960 AD0D0000 */  sw          $t5, 0x0($t0)
/* E36094 801A6964 AC4A0000 */  sw          $t2, 0x0($v0)
/* E36098 801A6968 8D260000 */  lw          $a2, 0x0($t1)
/* E3609C 801A696C 8D2F0004 */  lw          $t7, 0x4($t1)
/* E360A0 801A6970 24050010 */  addiu       $a1, $zero, 0x10
/* E360A4 801A6974 30CE00FF */  andi        $t6, $a2, 0xFF
/* E360A8 801A6978 000ECA00 */  sll         $t9, $t6, 8
/* E360AC 801A697C 000F5E00 */  sll         $t3, $t7, 24
/* E360B0 801A6980 032B6025 */  or          $t4, $t9, $t3
/* E360B4 801A6984 000E6C00 */  sll         $t5, $t6, 16
/* E360B8 801A6988 018D7025 */  or          $t6, $t4, $t5
/* E360BC 801A698C 35D800FF */  ori         $t8, $t6, 0xFF
/* E360C0 801A6990 AC580004 */  sw          $t8, 0x4($v0)
/* E360C4 801A6994 C62400E4 */  lwc1        $ft0, 0xE4($s1)
/* E360C8 801A6998 3C0F8018 */  lui         $t7, %hi(gFogNear)
/* E360CC 801A699C 3C198018 */  lui         $t9, %hi(gFogFar)
/* E360D0 801A69A0 4606203C */  c.lt.s      $ft0, $ft1
/* E360D4 801A69A4 24060010 */  addiu       $a2, $zero, 0x10
/* E360D8 801A69A8 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* E360DC 801A69AC 3C0B8018 */  lui         $t3, %hi(gFogNear)
/* E360E0 801A69B0 45000010 */  bc1f        .LE16C50_801A69F4
/* E360E4 801A69B4 3C0C8018 */   lui        $t4, %hi(gFogFar)
/* E360E8 801A69B8 8DEF83D8 */  lw          $t7, %lo(gFogNear)($t7)
/* E360EC 801A69BC 8F3983DC */  lw          $t9, %lo(gFogFar)($t9)
/* E360F0 801A69C0 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* E360F4 801A69C4 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* E360F8 801A69C8 24040040 */  addiu       $a0, $zero, 0x40
/* E360FC 801A69CC 24050020 */  addiu       $a1, $zero, 0x20
/* E36100 801A69D0 24060020 */  addiu       $a2, $zero, 0x20
/* E36104 801A69D4 AFAF0010 */  sw          $t7, 0x10($sp)
/* E36108 801A69D8 0C02E8BA */  jal         RCP_SetupDL_30
/* E3610C 801A69DC AFB90014 */   sw         $t9, 0x14($sp)
/* E36110 801A69E0 3C088013 */  lui         $t0, %hi(gMasterDisp)
/* E36114 801A69E4 25087E64 */  addiu       $t0, $t0, %lo(gMasterDisp)
/* E36118 801A69E8 8FA3006C */  lw          $v1, 0x6C($sp)
/* E3611C 801A69EC 1000000B */  b           .LE16C50_801A6A1C
/* E36120 801A69F0 3C0AFA00 */   lui        $t2, (0xFA000000 >> 16)
.LE16C50_801A69F4:
/* E36124 801A69F4 8D6B83D8 */  lw          $t3, %lo(gFogNear)($t3)
/* E36128 801A69F8 8D8C83DC */  lw          $t4, %lo(gFogFar)($t4)
/* E3612C 801A69FC 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* E36130 801A6A00 AFAB0010 */  sw          $t3, 0x10($sp)
/* E36134 801A6A04 0C02E8BA */  jal         RCP_SetupDL_30
/* E36138 801A6A08 AFAC0014 */   sw         $t4, 0x14($sp)
/* E3613C 801A6A0C 3C088013 */  lui         $t0, %hi(gMasterDisp)
/* E36140 801A6A10 25087E64 */  addiu       $t0, $t0, %lo(gMasterDisp)
/* E36144 801A6A14 8FA3006C */  lw          $v1, 0x6C($sp)
/* E36148 801A6A18 3C0AFA00 */  lui         $t2, (0xFA000000 >> 16)
.LE16C50_801A6A1C:
/* E3614C 801A6A1C 8FAD0068 */  lw          $t5, 0x68($sp)
/* E36150 801A6A20 25AEFFFF */  addiu       $t6, $t5, -0x1
/* E36154 801A6A24 2DC1000B */  sltiu       $at, $t6, 0xB
/* E36158 801A6A28 10200066 */  beqz        $at, .LE16C50_801A6BC4
/* E3615C 801A6A2C 000E7080 */   sll        $t6, $t6, 2
/* E36160 801A6A30 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C1820)
/* E36164 801A6A34 002E0821 */  addu        $at, $at, $t6
/* E36168 801A6A38 8C2E1820 */  lw          $t6, %lo(jtbl_E16C50_801C1820)($at)
/* E3616C 801A6A3C 01C00008 */  jr          $t6
/* E36170 801A6A40 00000000 */   nop
.LE16C50_801A6A44:
/* E36174 801A6A44 3C02801C */  lui         $v0, %hi(D_E16C50_801C2768)
/* E36178 801A6A48 24422768 */  addiu       $v0, $v0, %lo(D_E16C50_801C2768)
/* E3617C 801A6A4C C44A0004 */  lwc1        $ft3, 0x4($v0)
/* E36180 801A6A50 C6080004 */  lwc1        $ft2, 0x4($s0)
/* E36184 801A6A54 C6120008 */  lwc1        $ft5, 0x8($s0)
/* E36188 801A6A58 460A4401 */  sub.s       $ft4, $ft2, $ft3
/* E3618C 801A6A5C E6100004 */  swc1        $ft4, 0x4($s0)
/* E36190 801A6A60 C4440000 */  lwc1        $ft0, 0x0($v0)
/* E36194 801A6A64 46049180 */  add.s       $ft1, $ft5, $ft0
/* E36198 801A6A68 E6060008 */  swc1        $ft1, 0x8($s0)
.LE16C50_801A6A6C:
/* E3619C 801A6A6C 86380090 */  lh          $t8, 0x90($s1)
/* E361A0 801A6A70 53000004 */  beql        $t8, $zero, .LE16C50_801A6A84
/* E361A4 801A6A74 8622009C */   lh         $v0, 0x9C($s1)
/* E361A8 801A6A78 10000052 */  b           .LE16C50_801A6BC4
/* E361AC 801A6A7C AC600000 */   sw         $zero, 0x0($v1)
/* E361B0 801A6A80 8622009C */  lh          $v0, 0x9C($s1)
.LE16C50_801A6A84:
/* E361B4 801A6A84 1040004F */  beqz        $v0, .LE16C50_801A6BC4
/* E361B8 801A6A88 304F0001 */   andi       $t7, $v0, 0x1
/* E361BC 801A6A8C 11E0000E */  beqz        $t7, .LE16C50_801A6AC8
/* E361C0 801A6A90 3C014040 */   lui        $at, (0x40400000 >> 16)
/* E361C4 801A6A94 8D020000 */  lw          $v0, 0x0($t0)
/* E361C8 801A6A98 3C0B2020 */  lui         $t3, (0x202080FF >> 16)
/* E361CC 801A6A9C 356B80FF */  ori         $t3, $t3, (0x202080FF & 0xFFFF)
/* E361D0 801A6AA0 24590008 */  addiu       $t9, $v0, 0x8
/* E361D4 801A6AA4 AD190000 */  sw          $t9, 0x0($t0)
/* E361D8 801A6AA8 AC4B0004 */  sw          $t3, 0x4($v0)
/* E361DC 801A6AAC AC4A0000 */  sw          $t2, 0x0($v0)
/* E361E0 801A6AB0 C6080008 */  lwc1        $ft2, 0x8($s0)
/* E361E4 801A6AB4 44815000 */  mtc1        $at, $ft3
/* E361E8 801A6AB8 00000000 */  nop
/* E361EC 801A6ABC 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E361F0 801A6AC0 10000040 */  b           .LE16C50_801A6BC4
/* E361F4 801A6AC4 E6100008 */   swc1       $ft4, 0x8($s0)
.LE16C50_801A6AC8:
/* E361F8 801A6AC8 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E361FC 801A6ACC 44812000 */  mtc1        $at, $ft0
/* E36200 801A6AD0 C6120008 */  lwc1        $ft5, 0x8($s0)
/* E36204 801A6AD4 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E36208 801A6AD8 1000003A */  b           .LE16C50_801A6BC4
/* E3620C 801A6ADC E6060008 */   swc1       $ft1, 0x8($s0)
.LE16C50_801A6AE0:
/* E36210 801A6AE0 862C008C */  lh          $t4, 0x8C($s1)
/* E36214 801A6AE4 55800003 */  bnel        $t4, $zero, .LE16C50_801A6AF4
/* E36218 801A6AE8 86220098 */   lh         $v0, 0x98($s1)
/* E3621C 801A6AEC AC600000 */  sw          $zero, 0x0($v1)
/* E36220 801A6AF0 86220098 */  lh          $v0, 0x98($s1)
.LE16C50_801A6AF4:
/* E36224 801A6AF4 304D0001 */  andi        $t5, $v0, 0x1
/* E36228 801A6AF8 51A00033 */  beql        $t5, $zero, .LE16C50_801A6BC8
/* E3622C 801A6AFC 00001025 */   or         $v0, $zero, $zero
/* E36230 801A6B00 11A0000E */  beqz        $t5, .LE16C50_801A6B3C
/* E36234 801A6B04 3C014040 */   lui        $at, (0x40400000 >> 16)
/* E36238 801A6B08 8D020000 */  lw          $v0, 0x0($t0)
/* E3623C 801A6B0C 3C182020 */  lui         $t8, (0x202080FF >> 16)
/* E36240 801A6B10 371880FF */  ori         $t8, $t8, (0x202080FF & 0xFFFF)
/* E36244 801A6B14 244E0008 */  addiu       $t6, $v0, 0x8
/* E36248 801A6B18 AD0E0000 */  sw          $t6, 0x0($t0)
/* E3624C 801A6B1C AC580004 */  sw          $t8, 0x4($v0)
/* E36250 801A6B20 AC4A0000 */  sw          $t2, 0x0($v0)
/* E36254 801A6B24 C6080004 */  lwc1        $ft2, 0x4($s0)
/* E36258 801A6B28 44815000 */  mtc1        $at, $ft3
/* E3625C 801A6B2C 00000000 */  nop
/* E36260 801A6B30 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E36264 801A6B34 10000023 */  b           .LE16C50_801A6BC4
/* E36268 801A6B38 E6100004 */   swc1       $ft4, 0x4($s0)
.LE16C50_801A6B3C:
/* E3626C 801A6B3C 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E36270 801A6B40 44812000 */  mtc1        $at, $ft0
/* E36274 801A6B44 C6120004 */  lwc1        $ft5, 0x4($s0)
/* E36278 801A6B48 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E3627C 801A6B4C 1000001D */  b           .LE16C50_801A6BC4
/* E36280 801A6B50 E6060004 */   swc1       $ft1, 0x4($s0)
.LE16C50_801A6B54:
/* E36284 801A6B54 862F008E */  lh          $t7, 0x8E($s1)
/* E36288 801A6B58 55E00003 */  bnel        $t7, $zero, .LE16C50_801A6B68
/* E3628C 801A6B5C 8622009A */   lh         $v0, 0x9A($s1)
/* E36290 801A6B60 AC600000 */  sw          $zero, 0x0($v1)
/* E36294 801A6B64 8622009A */  lh          $v0, 0x9A($s1)
.LE16C50_801A6B68:
/* E36298 801A6B68 30590001 */  andi        $t9, $v0, 0x1
/* E3629C 801A6B6C 53200016 */  beql        $t9, $zero, .LE16C50_801A6BC8
/* E362A0 801A6B70 00001025 */   or         $v0, $zero, $zero
/* E362A4 801A6B74 1320000E */  beqz        $t9, .LE16C50_801A6BB0
/* E362A8 801A6B78 3C014040 */   lui        $at, (0x40400000 >> 16)
/* E362AC 801A6B7C 8D020000 */  lw          $v0, 0x0($t0)
/* E362B0 801A6B80 3C0C2020 */  lui         $t4, (0x202080FF >> 16)
/* E362B4 801A6B84 358C80FF */  ori         $t4, $t4, (0x202080FF & 0xFFFF)
/* E362B8 801A6B88 244B0008 */  addiu       $t3, $v0, 0x8
/* E362BC 801A6B8C AD0B0000 */  sw          $t3, 0x0($t0)
/* E362C0 801A6B90 AC4C0004 */  sw          $t4, 0x4($v0)
/* E362C4 801A6B94 AC4A0000 */  sw          $t2, 0x0($v0)
/* E362C8 801A6B98 C6080004 */  lwc1        $ft2, 0x4($s0)
/* E362CC 801A6B9C 44815000 */  mtc1        $at, $ft3
/* E362D0 801A6BA0 00000000 */  nop
/* E362D4 801A6BA4 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E362D8 801A6BA8 10000006 */  b           .LE16C50_801A6BC4
/* E362DC 801A6BAC E6100004 */   swc1       $ft4, 0x4($s0)
.LE16C50_801A6BB0:
/* E362E0 801A6BB0 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E362E4 801A6BB4 44812000 */  mtc1        $at, $ft0
/* E362E8 801A6BB8 C6120004 */  lwc1        $ft5, 0x4($s0)
/* E362EC 801A6BBC 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E362F0 801A6BC0 E6060004 */  swc1        $ft1, 0x4($s0)
.LE16C50_801A6BC4:
/* E362F4 801A6BC4 00001025 */  or          $v0, $zero, $zero
.LE16C50_801A6BC8:
/* E362F8 801A6BC8 8FBF0024 */  lw          $ra, 0x24($sp)
/* E362FC 801A6BCC 8FB0001C */  lw          $s0, 0x1C($sp)
/* E36300 801A6BD0 8FB10020 */  lw          $s1, 0x20($sp)
/* E36304 801A6BD4 03E00008 */  jr          $ra
/* E36308 801A6BD8 27BD0068 */   addiu      $sp, $sp, 0x68
.section .late_rodata
dlabel jtbl_E16C50_801C184C
/* E50F7C 801C184C 801A6DCC */ .word .LE16C50_801A6DCC
/* E50F80 801C1850 801A6E94 */ .word .LE16C50_801A6E94
/* E50F84 801C1854 801A6F14 */ .word .LE16C50_801A6F14
/* E50F88 801C1858 801A6FBC */ .word .LE16C50_801A6FBC
/* E50F8C 801C185C 801A7080 */ .word .LE16C50_801A7080
/* E50F90 801C1860 801A7100 */ .word .LE16C50_801A7100
/* E50F94 801C1864 801A71A4 */ .word .LE16C50_801A71A4
/* E50F98 801C1868 801A71A4 */ .word .LE16C50_801A71A4
/* E50F9C 801C186C 801A71A4 */ .word .LE16C50_801A71A4
/* E50FA0 801C1870 801A6D7C */ .word .LE16C50_801A6D7C


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A6BDC
/* E3630C 801A6BDC 27BDFF50 */  addiu       $sp, $sp, -0xB0
/* E36310 801A6BE0 AFB00018 */  sw          $s0, 0x18($sp)
/* E36314 801A6BE4 AFA500B4 */  sw          $a1, 0xB4($sp)
/* E36318 801A6BE8 27A5007C */  addiu       $a1, $sp, 0x7C
/* E3631C 801A6BEC 00C08025 */  or          $s0, $a2, $zero
/* E36320 801A6BF0 AFBF001C */  sw          $ra, 0x1C($sp)
/* E36324 801A6BF4 27A70070 */  addiu       $a3, $sp, 0x70
/* E36328 801A6BF8 3C0F801C */  lui         $t7, %hi(D_E16C50_801BF9C8)
/* E3632C 801A6BFC 25EFF9C8 */  addiu       $t7, $t7, %lo(D_E16C50_801BF9C8)
/* E36330 801A6C00 8DE10000 */  lw          $at, 0x0($t7)
/* E36334 801A6C04 27AE00A0 */  addiu       $t6, $sp, 0xA0
/* E36338 801A6C08 8DE80004 */  lw          $t0, 0x4($t7)
/* E3633C 801A6C0C ADC10000 */  sw          $at, 0x0($t6)
/* E36340 801A6C10 8DE10008 */  lw          $at, 0x8($t7)
/* E36344 801A6C14 3C0A801C */  lui         $t2, %hi(D_E16C50_801BF9D4)
/* E36348 801A6C18 254AF9D4 */  addiu       $t2, $t2, %lo(D_E16C50_801BF9D4)
/* E3634C 801A6C1C ADC80004 */  sw          $t0, 0x4($t6)
/* E36350 801A6C20 ADC10008 */  sw          $at, 0x8($t6)
/* E36354 801A6C24 8D410000 */  lw          $at, 0x0($t2)
/* E36358 801A6C28 27A90094 */  addiu       $t1, $sp, 0x94
/* E3635C 801A6C2C 8D4D0004 */  lw          $t5, 0x4($t2)
/* E36360 801A6C30 AD210000 */  sw          $at, 0x0($t1)
/* E36364 801A6C34 8D410008 */  lw          $at, 0x8($t2)
/* E36368 801A6C38 3C18801C */  lui         $t8, %hi(D_E16C50_801BF9E0)
/* E3636C 801A6C3C 2718F9E0 */  addiu       $t8, $t8, %lo(D_E16C50_801BF9E0)
/* E36370 801A6C40 AD2D0004 */  sw          $t5, 0x4($t1)
/* E36374 801A6C44 AD210008 */  sw          $at, 0x8($t1)
/* E36378 801A6C48 8F010000 */  lw          $at, 0x0($t8)
/* E3637C 801A6C4C 27B90088 */  addiu       $t9, $sp, 0x88
/* E36380 801A6C50 8F080004 */  lw          $t0, 0x4($t8)
/* E36384 801A6C54 AF210000 */  sw          $at, 0x0($t9)
/* E36388 801A6C58 8F010008 */  lw          $at, 0x8($t8)
/* E3638C 801A6C5C 3C0C801C */  lui         $t4, %hi(D_E16C50_801BF9EC)
/* E36390 801A6C60 258CF9EC */  addiu       $t4, $t4, %lo(D_E16C50_801BF9EC)
/* E36394 801A6C64 AF280004 */  sw          $t0, 0x4($t9)
/* E36398 801A6C68 AF210008 */  sw          $at, 0x8($t9)
/* E3639C 801A6C6C 8D810000 */  lw          $at, 0x0($t4)
/* E363A0 801A6C70 3C0D801C */  lui         $t5, %hi(D_E16C50_801BF9F8)
/* E363A4 801A6C74 25ADF9F8 */  addiu       $t5, $t5, %lo(D_E16C50_801BF9F8)
/* E363A8 801A6C78 ACA10000 */  sw          $at, 0x0($a1)
/* E363AC 801A6C7C 8D8A0004 */  lw          $t2, 0x4($t4)
/* E363B0 801A6C80 3C08801C */  lui         $t0, %hi(D_E16C50_801BFA04)
/* E363B4 801A6C84 2508FA04 */  addiu       $t0, $t0, %lo(D_E16C50_801BFA04)
/* E363B8 801A6C88 ACAA0004 */  sw          $t2, 0x4($a1)
/* E363BC 801A6C8C 8D810008 */  lw          $at, 0x8($t4)
/* E363C0 801A6C90 27B80064 */  addiu       $t8, $sp, 0x64
/* E363C4 801A6C94 3C0E801C */  lui         $t6, %hi(D_E16C50_801BFA10)
/* E363C8 801A6C98 ACA10008 */  sw          $at, 0x8($a1)
/* E363CC 801A6C9C 8DA10000 */  lw          $at, 0x0($t5)
/* E363D0 801A6CA0 25CEFA10 */  addiu       $t6, $t6, %lo(D_E16C50_801BFA10)
/* E363D4 801A6CA4 27AA0058 */  addiu       $t2, $sp, 0x58
/* E363D8 801A6CA8 ACE10000 */  sw          $at, 0x0($a3)
/* E363DC 801A6CAC 8DB90004 */  lw          $t9, 0x4($t5)
/* E363E0 801A6CB0 3C09801C */  lui         $t1, %hi(D_E16C50_801BFA1C)
/* E363E4 801A6CB4 2529FA1C */  addiu       $t1, $t1, %lo(D_E16C50_801BFA1C)
/* E363E8 801A6CB8 ACF90004 */  sw          $t9, 0x4($a3)
/* E363EC 801A6CBC 8DA10008 */  lw          $at, 0x8($t5)
/* E363F0 801A6CC0 27AB004C */  addiu       $t3, $sp, 0x4C
/* E363F4 801A6CC4 3C0F801C */  lui         $t7, %hi(D_E16C50_801BFA28)
/* E363F8 801A6CC8 ACE10008 */  sw          $at, 0x8($a3)
/* E363FC 801A6CCC 8D010000 */  lw          $at, 0x0($t0)
/* E36400 801A6CD0 8D0C0004 */  lw          $t4, 0x4($t0)
/* E36404 801A6CD4 25EFFA28 */  addiu       $t7, $t7, %lo(D_E16C50_801BFA28)
/* E36408 801A6CD8 AF010000 */  sw          $at, 0x0($t8)
/* E3640C 801A6CDC 8D010008 */  lw          $at, 0x8($t0)
/* E36410 801A6CE0 AF0C0004 */  sw          $t4, 0x4($t8)
/* E36414 801A6CE4 27AD0040 */  addiu       $t5, $sp, 0x40
/* E36418 801A6CE8 AF010008 */  sw          $at, 0x8($t8)
/* E3641C 801A6CEC 8DC10000 */  lw          $at, 0x0($t6)
/* E36420 801A6CF0 8DD90004 */  lw          $t9, 0x4($t6)
/* E36424 801A6CF4 3C18801C */  lui         $t8, %hi(D_E16C50_801BFA34)
/* E36428 801A6CF8 AD410000 */  sw          $at, 0x0($t2)
/* E3642C 801A6CFC 8DC10008 */  lw          $at, 0x8($t6)
/* E36430 801A6D00 AD590004 */  sw          $t9, 0x4($t2)
/* E36434 801A6D04 2718FA34 */  addiu       $t8, $t8, %lo(D_E16C50_801BFA34)
/* E36438 801A6D08 AD410008 */  sw          $at, 0x8($t2)
/* E3643C 801A6D0C 8D210000 */  lw          $at, 0x0($t1)
/* E36440 801A6D10 8D2C0004 */  lw          $t4, 0x4($t1)
/* E36444 801A6D14 27A80034 */  addiu       $t0, $sp, 0x34
/* E36448 801A6D18 AD610000 */  sw          $at, 0x0($t3)
/* E3644C 801A6D1C 8D210008 */  lw          $at, 0x8($t1)
/* E36450 801A6D20 AD6C0004 */  sw          $t4, 0x4($t3)
/* E36454 801A6D24 248EFFFE */  addiu       $t6, $a0, -0x2
/* E36458 801A6D28 AD610008 */  sw          $at, 0x8($t3)
/* E3645C 801A6D2C 8DE10000 */  lw          $at, 0x0($t7)
/* E36460 801A6D30 8DF90004 */  lw          $t9, 0x4($t7)
/* E36464 801A6D34 ADA10000 */  sw          $at, 0x0($t5)
/* E36468 801A6D38 8DE10008 */  lw          $at, 0x8($t7)
/* E3646C 801A6D3C ADB90004 */  sw          $t9, 0x4($t5)
/* E36470 801A6D40 ADA10008 */  sw          $at, 0x8($t5)
/* E36474 801A6D44 8F010000 */  lw          $at, 0x0($t8)
/* E36478 801A6D48 8F0C0004 */  lw          $t4, 0x4($t8)
/* E3647C 801A6D4C AD010000 */  sw          $at, 0x0($t0)
/* E36480 801A6D50 8F010008 */  lw          $at, 0x8($t8)
/* E36484 801A6D54 AD0C0004 */  sw          $t4, 0x4($t0)
/* E36488 801A6D58 AD010008 */  sw          $at, 0x8($t0)
/* E3648C 801A6D5C 2DC1000A */  sltiu       $at, $t6, 0xA
/* E36490 801A6D60 10200110 */  beqz        $at, .LE16C50_801A71A4
/* E36494 801A6D64 000E7080 */   sll        $t6, $t6, 2
/* E36498 801A6D68 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C184C)
/* E3649C 801A6D6C 002E0821 */  addu        $at, $at, $t6
/* E364A0 801A6D70 8C2E184C */  lw          $t6, %lo(jtbl_E16C50_801C184C)($at)
/* E364A4 801A6D74 01C00008 */  jr          $t6
/* E364A8 801A6D78 00000000 */   nop
.LE16C50_801A6D7C:
/* E364AC 801A6D7C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E364B0 801A6D80 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E364B4 801A6D84 27A50034 */  addiu       $a1, $sp, 0x34
/* E364B8 801A6D88 0C001A5C */  jal         Matrix_MultVec3f
/* E364BC 801A6D8C 27A60028 */   addiu      $a2, $sp, 0x28
/* E364C0 801A6D90 C7A40028 */  lwc1        $ft0, 0x28($sp)
/* E364C4 801A6D94 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E364C8 801A6D98 27A50028 */  addiu       $a1, $sp, 0x28
/* E364CC 801A6D9C E60400E8 */  swc1        $ft0, 0xE8($s0)
/* E364D0 801A6DA0 C7A6002C */  lwc1        $ft1, 0x2C($sp)
/* E364D4 801A6DA4 E60600EC */  swc1        $ft1, 0xEC($s0)
/* E364D8 801A6DA8 C7A80030 */  lwc1        $ft2, 0x30($sp)
/* E364DC 801A6DAC E60800F0 */  swc1        $ft2, 0xF0($s0)
/* E364E0 801A6DB0 0C001AAE */  jal         Matrix_GetYRPAngles
/* E364E4 801A6DB4 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E364E8 801A6DB8 C7AA0028 */  lwc1        $ft3, 0x28($sp)
/* E364EC 801A6DBC E60A00DC */  swc1        $ft3, 0xDC($s0)
/* E364F0 801A6DC0 C7B0002C */  lwc1        $ft4, 0x2C($sp)
/* E364F4 801A6DC4 100000F7 */  b           .LE16C50_801A71A4
/* E364F8 801A6DC8 E61000E0 */   swc1       $ft4, 0xE0($s0)
.LE16C50_801A6DCC:
/* E364FC 801A6DCC 8602008C */  lh          $v0, 0x8C($s0)
/* E36500 801A6DD0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36504 801A6DD4 1840001D */  blez        $v0, .LE16C50_801A6E4C
/* E36508 801A6DD8 00000000 */   nop
/* E3650C 801A6DDC 0C0015C2 */  jal         Matrix_Push
/* E36510 801A6DE0 2484BBC8 */   addiu      $a0, $a0, %lo(gCalcMatrix)
/* E36514 801A6DE4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36518 801A6DE8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E3651C 801A6DEC 27A50088 */  addiu       $a1, $sp, 0x88
/* E36520 801A6DF0 0C001A5C */  jal         Matrix_MultVec3f
/* E36524 801A6DF4 27A60028 */   addiu      $a2, $sp, 0x28
/* E36528 801A6DF8 C7B20028 */  lwc1        $ft5, 0x28($sp)
/* E3652C 801A6DFC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36530 801A6E00 2484BBC8 */  addiu       $a0, $a0, %lo(gCalcMatrix)
/* E36534 801A6E04 E6120148 */  swc1        $ft5, 0x148($s0)
/* E36538 801A6E08 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E3653C 801A6E0C E604014C */  swc1        $ft0, 0x14C($s0)
/* E36540 801A6E10 C7A60030 */  lwc1        $ft1, 0x30($sp)
/* E36544 801A6E14 0C0015D0 */  jal         Matrix_Pop
/* E36548 801A6E18 E6060150 */   swc1       $ft1, 0x150($s0)
/* E3654C 801A6E1C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36550 801A6E20 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E36554 801A6E24 27A500A0 */  addiu       $a1, $sp, 0xA0
/* E36558 801A6E28 0C001A5C */  jal         Matrix_MultVec3f
/* E3655C 801A6E2C 27A60028 */   addiu      $a2, $sp, 0x28
/* E36560 801A6E30 C7A80028 */  lwc1        $ft2, 0x28($sp)
/* E36564 801A6E34 8602008C */  lh          $v0, 0x8C($s0)
/* E36568 801A6E38 E6080118 */  swc1        $ft2, 0x118($s0)
/* E3656C 801A6E3C C7AA002C */  lwc1        $ft3, 0x2C($sp)
/* E36570 801A6E40 E60A011C */  swc1        $ft3, 0x11C($s0)
/* E36574 801A6E44 C7B00030 */  lwc1        $ft4, 0x30($sp)
/* E36578 801A6E48 E6100120 */  swc1        $ft4, 0x120($s0)
.LE16C50_801A6E4C:
/* E3657C 801A6E4C 044100D5 */  bgez        $v0, .LE16C50_801A71A4
/* E36580 801A6E50 3C048014 */   lui        $a0, %hi(gCalcMatrix)
/* E36584 801A6E54 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E36588 801A6E58 27A50034 */  addiu       $a1, $sp, 0x34
/* E3658C 801A6E5C 0C001A5C */  jal         Matrix_MultVec3f
/* E36590 801A6E60 27A60028 */   addiu      $a2, $sp, 0x28
/* E36594 801A6E64 C7B20028 */  lwc1        $ft5, 0x28($sp)
/* E36598 801A6E68 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E3659C 801A6E6C 2605017C */  addiu       $a1, $s0, 0x17C
/* E365A0 801A6E70 E6120148 */  swc1        $ft5, 0x148($s0)
/* E365A4 801A6E74 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E365A8 801A6E78 E604014C */  swc1        $ft0, 0x14C($s0)
/* E365AC 801A6E7C C7A60030 */  lwc1        $ft1, 0x30($sp)
/* E365B0 801A6E80 E6060150 */  swc1        $ft1, 0x150($s0)
/* E365B4 801A6E84 0C001AAE */  jal         Matrix_GetYRPAngles
/* E365B8 801A6E88 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E365BC 801A6E8C 100000C6 */  b           .LE16C50_801A71A8
/* E365C0 801A6E90 8FBF001C */   lw         $ra, 0x1C($sp)
.LE16C50_801A6E94:
/* E365C4 801A6E94 8602008C */  lh          $v0, 0x8C($s0)
/* E365C8 801A6E98 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E365CC 801A6E9C 27A60028 */  addiu       $a2, $sp, 0x28
/* E365D0 801A6EA0 1840000A */  blez        $v0, .LE16C50_801A6ECC
/* E365D4 801A6EA4 00000000 */   nop
/* E365D8 801A6EA8 0C001A5C */  jal         Matrix_MultVec3f
/* E365DC 801A6EAC 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E365E0 801A6EB0 C7A80028 */  lwc1        $ft2, 0x28($sp)
/* E365E4 801A6EB4 8602008C */  lh          $v0, 0x8C($s0)
/* E365E8 801A6EB8 E6080130 */  swc1        $ft2, 0x130($s0)
/* E365EC 801A6EBC C7AA002C */  lwc1        $ft3, 0x2C($sp)
/* E365F0 801A6EC0 E60A0134 */  swc1        $ft3, 0x134($s0)
/* E365F4 801A6EC4 C7B00030 */  lwc1        $ft4, 0x30($sp)
/* E365F8 801A6EC8 E6100138 */  swc1        $ft4, 0x138($s0)
.LE16C50_801A6ECC:
/* E365FC 801A6ECC 044100B5 */  bgez        $v0, .LE16C50_801A71A4
/* E36600 801A6ED0 3C048014 */   lui        $a0, %hi(gCalcMatrix)
/* E36604 801A6ED4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E36608 801A6ED8 27A50034 */  addiu       $a1, $sp, 0x34
/* E3660C 801A6EDC 0C001A5C */  jal         Matrix_MultVec3f
/* E36610 801A6EE0 27A60028 */   addiu      $a2, $sp, 0x28
/* E36614 801A6EE4 C7B20028 */  lwc1        $ft5, 0x28($sp)
/* E36618 801A6EE8 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E3661C 801A6EEC 26050194 */  addiu       $a1, $s0, 0x194
/* E36620 801A6EF0 E6120130 */  swc1        $ft5, 0x130($s0)
/* E36624 801A6EF4 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E36628 801A6EF8 E6040134 */  swc1        $ft0, 0x134($s0)
/* E3662C 801A6EFC C7A60030 */  lwc1        $ft1, 0x30($sp)
/* E36630 801A6F00 E6060138 */  swc1        $ft1, 0x138($s0)
/* E36634 801A6F04 0C001AAE */  jal         Matrix_GetYRPAngles
/* E36638 801A6F08 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E3663C 801A6F0C 100000A6 */  b           .LE16C50_801A71A8
/* E36640 801A6F10 8FBF001C */   lw         $ra, 0x1C($sp)
.LE16C50_801A6F14:
/* E36644 801A6F14 860A008C */  lh          $t2, 0x8C($s0)
/* E36648 801A6F18 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E3664C 801A6F1C 00E02825 */  or          $a1, $a3, $zero
/* E36650 801A6F20 19400010 */  blez        $t2, .LE16C50_801A6F64
/* E36654 801A6F24 3C0D8017 */   lui        $t5, %hi(gObjects408 + 0x88)
/* E36658 801A6F28 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E3665C 801A6F2C 0C001A5C */  jal         Matrix_MultVec3f
/* E36660 801A6F30 27A60028 */   addiu      $a2, $sp, 0x28
/* E36664 801A6F34 C7A80028 */  lwc1        $ft2, 0x28($sp)
/* E36668 801A6F38 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E3666C 801A6F3C 26050164 */  addiu       $a1, $s0, 0x164
/* E36670 801A6F40 E6080100 */  swc1        $ft2, 0x100($s0)
/* E36674 801A6F44 C7AA002C */  lwc1        $ft3, 0x2C($sp)
/* E36678 801A6F48 E60A0104 */  swc1        $ft3, 0x104($s0)
/* E3667C 801A6F4C C7B00030 */  lwc1        $ft4, 0x30($sp)
/* E36680 801A6F50 E6100108 */  swc1        $ft4, 0x108($s0)
/* E36684 801A6F54 0C001AAE */  jal         Matrix_GetYRPAngles
/* E36688 801A6F58 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E3668C 801A6F5C 10000092 */  b           .LE16C50_801A71A8
/* E36690 801A6F60 8FBF001C */   lw         $ra, 0x1C($sp)
.LE16C50_801A6F64:
/* E36694 801A6F64 85ADF198 */  lh          $t5, %lo(gObjects408 + 0x88)($t5)
/* E36698 801A6F68 24010007 */  addiu       $at, $zero, 0x7
/* E3669C 801A6F6C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E366A0 801A6F70 11A10008 */  beq         $t5, $at, .LE16C50_801A6F94
/* E366A4 801A6F74 27A5004C */   addiu      $a1, $sp, 0x4C
/* E366A8 801A6F78 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E366AC 801A6F7C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E366B0 801A6F80 27A50064 */  addiu       $a1, $sp, 0x64
/* E366B4 801A6F84 0C001A5C */  jal         Matrix_MultVec3f
/* E366B8 801A6F88 27A60028 */   addiu      $a2, $sp, 0x28
/* E366BC 801A6F8C 10000005 */  b           .LE16C50_801A6FA4
/* E366C0 801A6F90 C7B20028 */   lwc1       $ft5, 0x28($sp)
.LE16C50_801A6F94:
/* E366C4 801A6F94 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E366C8 801A6F98 0C001A5C */  jal         Matrix_MultVec3f
/* E366CC 801A6F9C 27A60028 */   addiu      $a2, $sp, 0x28
/* E366D0 801A6FA0 C7B20028 */  lwc1        $ft5, 0x28($sp)
.LE16C50_801A6FA4:
/* E366D4 801A6FA4 E6120100 */  swc1        $ft5, 0x100($s0)
/* E366D8 801A6FA8 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E366DC 801A6FAC E6040104 */  swc1        $ft0, 0x104($s0)
/* E366E0 801A6FB0 C7A60030 */  lwc1        $ft1, 0x30($sp)
/* E366E4 801A6FB4 1000007B */  b           .LE16C50_801A71A4
/* E366E8 801A6FB8 E6060108 */   swc1       $ft1, 0x108($s0)
.LE16C50_801A6FBC:
/* E366EC 801A6FBC 8602008E */  lh          $v0, 0x8E($s0)
/* E366F0 801A6FC0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E366F4 801A6FC4 18400021 */  blez        $v0, .LE16C50_801A704C
/* E366F8 801A6FC8 00000000 */   nop
/* E366FC 801A6FCC 0C0015C2 */  jal         Matrix_Push
/* E36700 801A6FD0 2484BBC8 */   addiu      $a0, $a0, %lo(gCalcMatrix)
/* E36704 801A6FD4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36708 801A6FD8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E3670C 801A6FDC 27A50088 */  addiu       $a1, $sp, 0x88
/* E36710 801A6FE0 0C001A5C */  jal         Matrix_MultVec3f
/* E36714 801A6FE4 27A60028 */   addiu      $a2, $sp, 0x28
/* E36718 801A6FE8 C7A80028 */  lwc1        $ft2, 0x28($sp)
/* E3671C 801A6FEC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36720 801A6FF0 2484BBC8 */  addiu       $a0, $a0, %lo(gCalcMatrix)
/* E36724 801A6FF4 E608013C */  swc1        $ft2, 0x13C($s0)
/* E36728 801A6FF8 C7AA002C */  lwc1        $ft3, 0x2C($sp)
/* E3672C 801A6FFC E60A0140 */  swc1        $ft3, 0x140($s0)
/* E36730 801A7000 C7B00030 */  lwc1        $ft4, 0x30($sp)
/* E36734 801A7004 0C0015D0 */  jal         Matrix_Pop
/* E36738 801A7008 E6100144 */   swc1       $ft4, 0x144($s0)
/* E3673C 801A700C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36740 801A7010 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E36744 801A7014 27A500A0 */  addiu       $a1, $sp, 0xA0
/* E36748 801A7018 0C001A5C */  jal         Matrix_MultVec3f
/* E3674C 801A701C 27A60028 */   addiu      $a2, $sp, 0x28
/* E36750 801A7020 C7B20028 */  lwc1        $ft5, 0x28($sp)
/* E36754 801A7024 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36758 801A7028 26050170 */  addiu       $a1, $s0, 0x170
/* E3675C 801A702C E612010C */  swc1        $ft5, 0x10C($s0)
/* E36760 801A7030 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E36764 801A7034 E6040110 */  swc1        $ft0, 0x110($s0)
/* E36768 801A7038 C7A60030 */  lwc1        $ft1, 0x30($sp)
/* E3676C 801A703C E6060114 */  swc1        $ft1, 0x114($s0)
/* E36770 801A7040 0C001AAE */  jal         Matrix_GetYRPAngles
/* E36774 801A7044 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E36778 801A7048 8602008E */  lh          $v0, 0x8E($s0)
.LE16C50_801A704C:
/* E3677C 801A704C 04410055 */  bgez        $v0, .LE16C50_801A71A4
/* E36780 801A7050 3C048014 */   lui        $a0, %hi(gCalcMatrix)
/* E36784 801A7054 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E36788 801A7058 27A50034 */  addiu       $a1, $sp, 0x34
/* E3678C 801A705C 0C001A5C */  jal         Matrix_MultVec3f
/* E36790 801A7060 27A60028 */   addiu      $a2, $sp, 0x28
/* E36794 801A7064 C7A80028 */  lwc1        $ft2, 0x28($sp)
/* E36798 801A7068 E608013C */  swc1        $ft2, 0x13C($s0)
/* E3679C 801A706C C7AA002C */  lwc1        $ft3, 0x2C($sp)
/* E367A0 801A7070 E60A0140 */  swc1        $ft3, 0x140($s0)
/* E367A4 801A7074 C7B00030 */  lwc1        $ft4, 0x30($sp)
/* E367A8 801A7078 1000004A */  b           .LE16C50_801A71A4
/* E367AC 801A707C E6100144 */   swc1       $ft4, 0x144($s0)
.LE16C50_801A7080:
/* E367B0 801A7080 8602008E */  lh          $v0, 0x8E($s0)
/* E367B4 801A7084 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E367B8 801A7088 27A60028 */  addiu       $a2, $sp, 0x28
/* E367BC 801A708C 1840000A */  blez        $v0, .LE16C50_801A70B8
/* E367C0 801A7090 00000000 */   nop
/* E367C4 801A7094 0C001A5C */  jal         Matrix_MultVec3f
/* E367C8 801A7098 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E367CC 801A709C C7B20028 */  lwc1        $ft5, 0x28($sp)
/* E367D0 801A70A0 8602008E */  lh          $v0, 0x8E($s0)
/* E367D4 801A70A4 E6120124 */  swc1        $ft5, 0x124($s0)
/* E367D8 801A70A8 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E367DC 801A70AC E6040128 */  swc1        $ft0, 0x128($s0)
/* E367E0 801A70B0 C7A60030 */  lwc1        $ft1, 0x30($sp)
/* E367E4 801A70B4 E606012C */  swc1        $ft1, 0x12C($s0)
.LE16C50_801A70B8:
/* E367E8 801A70B8 0441003A */  bgez        $v0, .LE16C50_801A71A4
/* E367EC 801A70BC 3C048014 */   lui        $a0, %hi(gCalcMatrix)
/* E367F0 801A70C0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E367F4 801A70C4 27A50034 */  addiu       $a1, $sp, 0x34
/* E367F8 801A70C8 0C001A5C */  jal         Matrix_MultVec3f
/* E367FC 801A70CC 27A60028 */   addiu      $a2, $sp, 0x28
/* E36800 801A70D0 C7A80028 */  lwc1        $ft2, 0x28($sp)
/* E36804 801A70D4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36808 801A70D8 26050188 */  addiu       $a1, $s0, 0x188
/* E3680C 801A70DC E6080124 */  swc1        $ft2, 0x124($s0)
/* E36810 801A70E0 C7AA002C */  lwc1        $ft3, 0x2C($sp)
/* E36814 801A70E4 E60A0128 */  swc1        $ft3, 0x128($s0)
/* E36818 801A70E8 C7B00030 */  lwc1        $ft4, 0x30($sp)
/* E3681C 801A70EC E610012C */  swc1        $ft4, 0x12C($s0)
/* E36820 801A70F0 0C001AAE */  jal         Matrix_GetYRPAngles
/* E36824 801A70F4 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E36828 801A70F8 1000002B */  b           .LE16C50_801A71A8
/* E3682C 801A70FC 8FBF001C */   lw         $ra, 0x1C($sp)
.LE16C50_801A7100:
/* E36830 801A7100 860F008E */  lh          $t7, 0x8E($s0)
/* E36834 801A7104 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36838 801A7108 00E02825 */  or          $a1, $a3, $zero
/* E3683C 801A710C 19E00010 */  blez        $t7, .LE16C50_801A7150
/* E36840 801A7110 3C198017 */   lui        $t9, %hi(gObjects408 + 0x88)
/* E36844 801A7114 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E36848 801A7118 0C001A5C */  jal         Matrix_MultVec3f
/* E3684C 801A711C 27A60028 */   addiu      $a2, $sp, 0x28
/* E36850 801A7120 C7B20028 */  lwc1        $ft5, 0x28($sp)
/* E36854 801A7124 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36858 801A7128 26050158 */  addiu       $a1, $s0, 0x158
/* E3685C 801A712C E61200F4 */  swc1        $ft5, 0xF4($s0)
/* E36860 801A7130 C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* E36864 801A7134 E60400F8 */  swc1        $ft0, 0xF8($s0)
/* E36868 801A7138 C7A60030 */  lwc1        $ft1, 0x30($sp)
/* E3686C 801A713C E60600FC */  swc1        $ft1, 0xFC($s0)
/* E36870 801A7140 0C001AAE */  jal         Matrix_GetYRPAngles
/* E36874 801A7144 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E36878 801A7148 10000017 */  b           .LE16C50_801A71A8
/* E3687C 801A714C 8FBF001C */   lw         $ra, 0x1C($sp)
.LE16C50_801A7150:
/* E36880 801A7150 8739F198 */  lh          $t9, %lo(gObjects408 + 0x88)($t9)
/* E36884 801A7154 24010007 */  addiu       $at, $zero, 0x7
/* E36888 801A7158 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E3688C 801A715C 13210008 */  beq         $t9, $at, .LE16C50_801A7180
/* E36890 801A7160 27A50040 */   addiu      $a1, $sp, 0x40
/* E36894 801A7164 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E36898 801A7168 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E3689C 801A716C 27A50058 */  addiu       $a1, $sp, 0x58
/* E368A0 801A7170 0C001A5C */  jal         Matrix_MultVec3f
/* E368A4 801A7174 27A60028 */   addiu      $a2, $sp, 0x28
/* E368A8 801A7178 10000005 */  b           .LE16C50_801A7190
/* E368AC 801A717C C7A80028 */   lwc1       $ft2, 0x28($sp)
.LE16C50_801A7180:
/* E368B0 801A7180 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E368B4 801A7184 0C001A5C */  jal         Matrix_MultVec3f
/* E368B8 801A7188 27A60028 */   addiu      $a2, $sp, 0x28
/* E368BC 801A718C C7A80028 */  lwc1        $ft2, 0x28($sp)
.LE16C50_801A7190:
/* E368C0 801A7190 E60800F4 */  swc1        $ft2, 0xF4($s0)
/* E368C4 801A7194 C7AA002C */  lwc1        $ft3, 0x2C($sp)
/* E368C8 801A7198 E60A00F8 */  swc1        $ft3, 0xF8($s0)
/* E368CC 801A719C C7B00030 */  lwc1        $ft4, 0x30($sp)
/* E368D0 801A71A0 E61000FC */  swc1        $ft4, 0xFC($s0)
.LE16C50_801A71A4:
/* E368D4 801A71A4 8FBF001C */  lw          $ra, 0x1C($sp)
.LE16C50_801A71A8:
/* E368D8 801A71A8 8FB00018 */  lw          $s0, 0x18($sp)
/* E368DC 801A71AC 27BD00B0 */  addiu       $sp, $sp, 0xB0
/* E368E0 801A71B0 03E00008 */  jr          $ra
/* E368E4 801A71B4 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C1874
/* E50FA4 801C1874 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1878
/* E50FA8 801C1878 3F19999A */ .float 0.6000000238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A71B8
/* E368E8 801A71B8 27BDFEA8 */  addiu       $sp, $sp, -0x158
/* E368EC 801A71BC AFB00038 */  sw          $s0, 0x38($sp)
/* E368F0 801A71C0 3C108014 */  lui         $s0, %hi(gCalcMatrix)
/* E368F4 801A71C4 AFB60050 */  sw          $s6, 0x50($sp)
/* E368F8 801A71C8 0080B025 */  or          $s6, $a0, $zero
/* E368FC 801A71CC 2610BBC8 */  addiu       $s0, $s0, %lo(gCalcMatrix)
/* E36900 801A71D0 AFBF005C */  sw          $ra, 0x5C($sp)
/* E36904 801A71D4 AFBE0058 */  sw          $fp, 0x58($sp)
/* E36908 801A71D8 AFB70054 */  sw          $s7, 0x54($sp)
/* E3690C 801A71DC AFB5004C */  sw          $s5, 0x4C($sp)
/* E36910 801A71E0 AFB40048 */  sw          $s4, 0x48($sp)
/* E36914 801A71E4 AFB30044 */  sw          $s3, 0x44($sp)
/* E36918 801A71E8 AFB20040 */  sw          $s2, 0x40($sp)
/* E3691C 801A71EC AFB1003C */  sw          $s1, 0x3C($sp)
/* E36920 801A71F0 F7B60030 */  sdc1        $fs1, 0x30($sp)
/* E36924 801A71F4 F7B40028 */  sdc1        $fs0, 0x28($sp)
/* E36928 801A71F8 3C0F801C */  lui         $t7, %hi(D_E16C50_801BFA40)
/* E3692C 801A71FC 25EFFA40 */  addiu       $t7, $t7, %lo(D_E16C50_801BFA40)
/* E36930 801A7200 25E8006C */  addiu       $t0, $t7, 0x6C
/* E36934 801A7204 27AE00E8 */  addiu       $t6, $sp, 0xE8
.LE16C50_801A7208:
/* E36938 801A7208 8DE10000 */  lw          $at, 0x0($t7)
/* E3693C 801A720C 25EF000C */  addiu       $t7, $t7, 0xC
/* E36940 801A7210 25CE000C */  addiu       $t6, $t6, 0xC
/* E36944 801A7214 ADC1FFF4 */  sw          $at, -0xC($t6)
/* E36948 801A7218 8DE1FFF8 */  lw          $at, -0x8($t7)
/* E3694C 801A721C ADC1FFF8 */  sw          $at, -0x8($t6)
/* E36950 801A7220 8DE1FFFC */  lw          $at, -0x4($t7)
/* E36954 801A7224 15E8FFF8 */  bne         $t7, $t0, .LE16C50_801A7208
/* E36958 801A7228 ADC1FFFC */   sw         $at, -0x4($t6)
/* E3695C 801A722C 3C0A801C */  lui         $t2, %hi(D_E16C50_801BFAAC)
/* E36960 801A7230 254AFAAC */  addiu       $t2, $t2, %lo(D_E16C50_801BFAAC)
/* E36964 801A7234 254D0024 */  addiu       $t5, $t2, 0x24
/* E36968 801A7238 27A900C4 */  addiu       $t1, $sp, 0xC4
.LE16C50_801A723C:
/* E3696C 801A723C 8D410000 */  lw          $at, 0x0($t2)
/* E36970 801A7240 254A000C */  addiu       $t2, $t2, 0xC
/* E36974 801A7244 2529000C */  addiu       $t1, $t1, 0xC
/* E36978 801A7248 AD21FFF4 */  sw          $at, -0xC($t1)
/* E3697C 801A724C 8D41FFF8 */  lw          $at, -0x8($t2)
/* E36980 801A7250 AD21FFF8 */  sw          $at, -0x8($t1)
/* E36984 801A7254 8D41FFFC */  lw          $at, -0x4($t2)
/* E36988 801A7258 154DFFF8 */  bne         $t2, $t5, .LE16C50_801A723C
/* E3698C 801A725C AD21FFFC */   sw         $at, -0x4($t1)
/* E36990 801A7260 3C18801C */  lui         $t8, %hi(D_E16C50_801BFAD0)
/* E36994 801A7264 2718FAD0 */  addiu       $t8, $t8, %lo(D_E16C50_801BFAD0)
/* E36998 801A7268 270E0024 */  addiu       $t6, $t8, 0x24
/* E3699C 801A726C 27B900A0 */  addiu       $t9, $sp, 0xA0
.LE16C50_801A7270:
/* E369A0 801A7270 8F010000 */  lw          $at, 0x0($t8)
/* E369A4 801A7274 2718000C */  addiu       $t8, $t8, 0xC
/* E369A8 801A7278 2739000C */  addiu       $t9, $t9, 0xC
/* E369AC 801A727C AF21FFF4 */  sw          $at, -0xC($t9)
/* E369B0 801A7280 8F01FFF8 */  lw          $at, -0x8($t8)
/* E369B4 801A7284 AF21FFF8 */  sw          $at, -0x8($t9)
/* E369B8 801A7288 8F01FFFC */  lw          $at, -0x4($t8)
/* E369BC 801A728C 170EFFF8 */  bne         $t8, $t6, .LE16C50_801A7270
/* E369C0 801A7290 AF21FFFC */   sw         $at, -0x4($t9)
/* E369C4 801A7294 C6C003F8 */  lwc1        $fv0, 0x3F8($s6)
/* E369C8 801A7298 240C0001 */  addiu       $t4, $zero, 0x1
/* E369CC 801A729C AFAC0010 */  sw          $t4, 0x10($sp)
/* E369D0 801A72A0 44050000 */  mfc1        $a1, $fv0
/* E369D4 801A72A4 44060000 */  mfc1        $a2, $fv0
/* E369D8 801A72A8 44070000 */  mfc1        $a3, $fv0
/* E369DC 801A72AC 0C00170D */  jal         Matrix_Scale
/* E369E0 801A72B0 8E040000 */   lw         $a0, 0x0($s0)
/* E369E4 801A72B4 3C0B8018 */  lui         $t3, %hi(D_80178284)
/* E369E8 801A72B8 8D6B8284 */  lw          $t3, %lo(D_80178284)($t3)
/* E369EC 801A72BC 3C050601 */  lui         $a1, %hi(D_600E470)
/* E369F0 801A72C0 24A5E470 */  addiu       $a1, $a1, %lo(D_600E470)
/* E369F4 801A72C4 1160000B */  beqz        $t3, .LE16C50_801A72F4
/* E369F8 801A72C8 24040002 */   addiu      $a0, $zero, 0x2
/* E369FC 801A72CC 8E0A0000 */  lw          $t2, 0x0($s0)
/* E36A00 801A72D0 3C0D801A */  lui         $t5, %hi(func_E16C50_801A6BDC)
/* E36A04 801A72D4 25AD6BDC */  addiu       $t5, $t5, %lo(func_E16C50_801A6BDC)
/* E36A08 801A72D8 3C07801A */  lui         $a3, %hi(func_E16C50_801A68A8)
/* E36A0C 801A72DC 24E768A8 */  addiu       $a3, $a3, %lo(func_E16C50_801A68A8)
/* E36A10 801A72E0 AFAD0010 */  sw          $t5, 0x10($sp)
/* E36A14 801A72E4 26C601A0 */  addiu       $a2, $s6, 0x1A0
/* E36A18 801A72E8 AFB60014 */  sw          $s6, 0x14($sp)
/* E36A1C 801A72EC 0C0269CB */  jal         Animation_DrawSkeleton
/* E36A20 801A72F0 AFAA0018 */   sw         $t2, 0x18($sp)
.LE16C50_801A72F4:
/* E36A24 801A72F4 86C90060 */  lh          $t1, 0x60($s6)
/* E36A28 801A72F8 5D200108 */  bgtzl       $t1, .LE16C50_801A771C
/* E36A2C 801A72FC 8FBF005C */   lw         $ra, 0x5C($sp)
/* E36A30 801A7300 0C02E96C */  jal         RCP_SetupDL_49
/* E36A34 801A7304 00000000 */   nop
/* E36A38 801A7308 3C148014 */  lui         $s4, %hi(gGfxMatrix)
/* E36A3C 801A730C 3C158013 */  lui         $s5, %hi(gMasterDisp)
/* E36A40 801A7310 26B57E64 */  addiu       $s5, $s5, %lo(gMasterDisp)
/* E36A44 801A7314 2694B3C0 */  addiu       $s4, $s4, %lo(gGfxMatrix)
/* E36A48 801A7318 8EA30000 */  lw          $v1, 0x0($s5)
/* E36A4C 801A731C 3C08FA00 */  lui         $t0, (0xFA000000 >> 16)
/* E36A50 801A7320 240EFFFF */  addiu       $t6, $zero, -0x1
/* E36A54 801A7324 246F0008 */  addiu       $t7, $v1, 0x8
/* E36A58 801A7328 AEAF0000 */  sw          $t7, 0x0($s5)
/* E36A5C 801A732C AC6E0004 */  sw          $t6, 0x4($v1)
/* E36A60 801A7330 AC680000 */  sw          $t0, 0x0($v1)
/* E36A64 801A7334 8EA30000 */  lw          $v1, 0x0($s5)
/* E36A68 801A7338 3C0CFFC0 */  lui         $t4, (0xFFC000FF >> 16)
/* E36A6C 801A733C 358C00FF */  ori         $t4, $t4, (0xFFC000FF & 0xFFFF)
/* E36A70 801A7340 24780008 */  addiu       $t8, $v1, 0x8
/* E36A74 801A7344 AEB80000 */  sw          $t8, 0x0($s5)
/* E36A78 801A7348 3C19FB00 */  lui         $t9, (0xFB000000 >> 16)
/* E36A7C 801A734C AC790000 */  sw          $t9, 0x0($v1)
/* E36A80 801A7350 AC6C0004 */  sw          $t4, 0x4($v1)
/* E36A84 801A7354 0C0015D0 */  jal         Matrix_Pop
/* E36A88 801A7358 02802025 */   or         $a0, $s4, $zero
/* E36A8C 801A735C 0C0015C2 */  jal         Matrix_Push
/* E36A90 801A7360 02802025 */   or         $a0, $s4, $zero
/* E36A94 801A7364 3C0143FA */  lui         $at, (0x43FA0000 >> 16)
/* E36A98 801A7368 44813000 */  mtc1        $at, $ft1
/* E36A9C 801A736C C6C4000C */  lwc1        $ft0, 0xC($s6)
/* E36AA0 801A7370 3C018017 */  lui         $at, %hi(D_80177D20)
/* E36AA4 801A7374 C42A7D20 */  lwc1        $ft3, %lo(D_80177D20)($at)
/* E36AA8 801A7378 46062201 */  sub.s       $ft2, $ft0, $ft1
/* E36AAC 801A737C 8EC50004 */  lw          $a1, 0x4($s6)
/* E36AB0 801A7380 8EC60008 */  lw          $a2, 0x8($s6)
/* E36AB4 801A7384 240B0001 */  addiu       $t3, $zero, 0x1
/* E36AB8 801A7388 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E36ABC 801A738C AFAB0010 */  sw          $t3, 0x10($sp)
/* E36AC0 801A7390 8E840000 */  lw          $a0, 0x0($s4)
/* E36AC4 801A7394 44078000 */  mfc1        $a3, $ft4
/* E36AC8 801A7398 0C0016C0 */  jal         Matrix_Translate
/* E36ACC 801A739C 00000000 */   nop
/* E36AD0 801A73A0 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E36AD4 801A73A4 4481B000 */  mtc1        $at, $fs1
/* E36AD8 801A73A8 3C02801C */  lui         $v0, %hi(D_E16C50_801C2768)
/* E36ADC 801A73AC 24422768 */  addiu       $v0, $v0, %lo(D_E16C50_801C2768)
/* E36AE0 801A73B0 240D0001 */  addiu       $t5, $zero, 0x1
/* E36AE4 801A73B4 4407B000 */  mfc1        $a3, $fs1
/* E36AE8 801A73B8 AFAD0010 */  sw          $t5, 0x10($sp)
/* E36AEC 801A73BC 8C45000C */  lw          $a1, 0xC($v0)
/* E36AF0 801A73C0 8C460008 */  lw          $a2, 0x8($v0)
/* E36AF4 801A73C4 0C00170D */  jal         Matrix_Scale
/* E36AF8 801A73C8 8E840000 */   lw         $a0, 0x0($s4)
/* E36AFC 801A73CC 0C001BAE */  jal         Matrix_SetGfxMtx
/* E36B00 801A73D0 02A02025 */   or         $a0, $s5, $zero
/* E36B04 801A73D4 3C1E0600 */  lui         $fp, (0x6000000 >> 16)
/* E36B08 801A73D8 8EA30000 */  lw          $v1, 0x0($s5)
/* E36B0C 801A73DC 3C170102 */  lui         $s7, %hi(D_1024AC0)
/* E36B10 801A73E0 26F74AC0 */  addiu       $s7, $s7, %lo(D_1024AC0)
/* E36B14 801A73E4 246A0008 */  addiu       $t2, $v1, 0x8
/* E36B18 801A73E8 AEAA0000 */  sw          $t2, 0x0($s5)
/* E36B1C 801A73EC AC770004 */  sw          $s7, 0x4($v1)
/* E36B20 801A73F0 AC7E0000 */  sw          $fp, 0x0($v1)
/* E36B24 801A73F4 3C11801C */  lui         $s1, %hi(D_E16C50_801C2768)
/* E36B28 801A73F8 3C01801C */  lui         $at, %hi(D_E16C50_801C1874)
/* E36B2C 801A73FC C4341874 */  lwc1        $fs0, %lo(D_E16C50_801C1874)($at)
/* E36B30 801A7400 26312768 */  addiu       $s1, $s1, %lo(D_E16C50_801C2768)
/* E36B34 801A7404 27B000E8 */  addiu       $s0, $sp, 0xE8
/* E36B38 801A7408 27B200C4 */  addiu       $s2, $sp, 0xC4
/* E36B3C 801A740C 27B300A0 */  addiu       $s3, $sp, 0xA0
.LE16C50_801A7410:
/* E36B40 801A7410 0C0015D0 */  jal         Matrix_Pop
/* E36B44 801A7414 02802025 */   or         $a0, $s4, $zero
/* E36B48 801A7418 0C0015C2 */  jal         Matrix_Push
/* E36B4C 801A741C 02802025 */   or         $a0, $s4, $zero
/* E36B50 801A7420 C6120000 */  lwc1        $ft5, 0x0($s0)
/* E36B54 801A7424 C6C40004 */  lwc1        $ft0, 0x4($s6)
/* E36B58 801A7428 3C018017 */  lui         $at, %hi(D_80177D20)
/* E36B5C 801A742C C6080004 */  lwc1        $ft2, 0x4($s0)
/* E36B60 801A7430 46049180 */  add.s       $ft1, $ft5, $ft0
/* E36B64 801A7434 C4247D20 */  lwc1        $ft0, %lo(D_80177D20)($at)
/* E36B68 801A7438 C6D2000C */  lwc1        $ft5, 0xC($s6)
/* E36B6C 801A743C C6CA0008 */  lwc1        $ft3, 0x8($s6)
/* E36B70 801A7440 44053000 */  mfc1        $a1, $ft1
/* E36B74 801A7444 46049180 */  add.s       $ft1, $ft5, $ft0
/* E36B78 801A7448 24090001 */  addiu       $t1, $zero, 0x1
/* E36B7C 801A744C 8E840000 */  lw          $a0, 0x0($s4)
/* E36B80 801A7450 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E36B84 801A7454 C6080008 */  lwc1        $ft2, 0x8($s0)
/* E36B88 801A7458 AFA90010 */  sw          $t1, 0x10($sp)
/* E36B8C 801A745C 46064280 */  add.s       $ft3, $ft2, $ft1
/* E36B90 801A7460 44068000 */  mfc1        $a2, $ft4
/* E36B94 801A7464 44075000 */  mfc1        $a3, $ft3
/* E36B98 801A7468 0C0016C0 */  jal         Matrix_Translate
/* E36B9C 801A746C 00000000 */   nop
/* E36BA0 801A7470 C6500000 */  lwc1        $ft4, 0x0($s2)
/* E36BA4 801A7474 8E840000 */  lw          $a0, 0x0($s4)
/* E36BA8 801A7478 24060001 */  addiu       $a2, $zero, 0x1
/* E36BAC 801A747C 46148482 */  mul.s       $ft5, $ft4, $fs0
/* E36BB0 801A7480 44059000 */  mfc1        $a1, $ft5
/* E36BB4 801A7484 0C0017A4 */  jal         Matrix_RotateY
/* E36BB8 801A7488 00000000 */   nop
/* E36BBC 801A748C C6640000 */  lwc1        $ft0, 0x0($s3)
/* E36BC0 801A7490 8E840000 */  lw          $a0, 0x0($s4)
/* E36BC4 801A7494 24060001 */  addiu       $a2, $zero, 0x1
/* E36BC8 801A7498 46142202 */  mul.s       $ft2, $ft0, $fs0
/* E36BCC 801A749C 44054000 */  mfc1        $a1, $ft2
/* E36BD0 801A74A0 0C001751 */  jal         Matrix_RotateX
/* E36BD4 801A74A4 00000000 */   nop
/* E36BD8 801A74A8 4407B000 */  mfc1        $a3, $fs1
/* E36BDC 801A74AC 240F0001 */  addiu       $t7, $zero, 0x1
/* E36BE0 801A74B0 AFAF0010 */  sw          $t7, 0x10($sp)
/* E36BE4 801A74B4 8E840000 */  lw          $a0, 0x0($s4)
/* E36BE8 801A74B8 8E250010 */  lw          $a1, 0x10($s1)
/* E36BEC 801A74BC 0C00170D */  jal         Matrix_Scale
/* E36BF0 801A74C0 3C0642C8 */   lui        $a2, (0x42C80000 >> 16)
/* E36BF4 801A74C4 0C001BAE */  jal         Matrix_SetGfxMtx
/* E36BF8 801A74C8 02A02025 */   or         $a0, $s5, $zero
/* E36BFC 801A74CC 8EA30000 */  lw          $v1, 0x0($s5)
/* E36C00 801A74D0 2610000C */  addiu       $s0, $s0, 0xC
/* E36C04 801A74D4 26520004 */  addiu       $s2, $s2, 0x4
/* E36C08 801A74D8 24680008 */  addiu       $t0, $v1, 0x8
/* E36C0C 801A74DC AEA80000 */  sw          $t0, 0x0($s5)
/* E36C10 801A74E0 AC770004 */  sw          $s7, 0x4($v1)
/* E36C14 801A74E4 AC7E0000 */  sw          $fp, 0x0($v1)
/* E36C18 801A74E8 3C0E801C */  lui         $t6, %hi(D_E16C50_801C2768 + 0x24)
/* E36C1C 801A74EC 25CE278C */  addiu       $t6, $t6, %lo(D_E16C50_801C2768 + 0x24)
/* E36C20 801A74F0 26310004 */  addiu       $s1, $s1, 0x4
/* E36C24 801A74F4 162EFFC6 */  bne         $s1, $t6, .LE16C50_801A7410
/* E36C28 801A74F8 26730004 */   addiu      $s3, $s3, 0x4
/* E36C2C 801A74FC 3C01801C */  lui         $at, %hi(D_E16C50_801C2768 + 0x34)
/* E36C30 801A7500 C42A279C */  lwc1        $ft3, %lo(D_E16C50_801C2768 + 0x34)($at)
/* E36C34 801A7504 44803000 */  mtc1        $zero, $ft1
/* E36C38 801A7508 3C19FA00 */  lui         $t9, (0xFA000000 >> 16)
/* E36C3C 801A750C 460A303C */  c.lt.s      $ft1, $ft3
/* E36C40 801A7510 00000000 */  nop
/* E36C44 801A7514 45020081 */  bc1fl       .LE16C50_801A771C
/* E36C48 801A7518 8FBF005C */   lw         $ra, 0x5C($sp)
/* E36C4C 801A751C 8EA30000 */  lw          $v1, 0x0($s5)
/* E36C50 801A7520 3C0CFFC0 */  lui         $t4, (0xFFC040FF >> 16)
/* E36C54 801A7524 358C40FF */  ori         $t4, $t4, (0xFFC040FF & 0xFFFF)
/* E36C58 801A7528 24780008 */  addiu       $t8, $v1, 0x8
/* E36C5C 801A752C AEB80000 */  sw          $t8, 0x0($s5)
/* E36C60 801A7530 AC6C0004 */  sw          $t4, 0x4($v1)
/* E36C64 801A7534 AC790000 */  sw          $t9, 0x0($v1)
/* E36C68 801A7538 0C0015D0 */  jal         Matrix_Pop
/* E36C6C 801A753C 02802025 */   or         $a0, $s4, $zero
/* E36C70 801A7540 0C0015C2 */  jal         Matrix_Push
/* E36C74 801A7544 02802025 */   or         $a0, $s4, $zero
/* E36C78 801A7548 3C014366 */  lui         $at, (0x43660000 >> 16)
/* E36C7C 801A754C 44819000 */  mtc1        $at, $ft5
/* E36C80 801A7550 3C014396 */  lui         $at, (0x43960000 >> 16)
/* E36C84 801A7554 44813000 */  mtc1        $at, $ft1
/* E36C88 801A7558 C6D00008 */  lwc1        $ft4, 0x8($s6)
/* E36C8C 801A755C C6C8000C */  lwc1        $ft2, 0xC($s6)
/* E36C90 801A7560 3C018017 */  lui         $at, %hi(D_80177D20)
/* E36C94 801A7564 46128100 */  add.s       $ft0, $ft4, $ft5
/* E36C98 801A7568 C4307D20 */  lwc1        $ft4, %lo(D_80177D20)($at)
/* E36C9C 801A756C 8EC50004 */  lw          $a1, 0x4($s6)
/* E36CA0 801A7570 46064281 */  sub.s       $ft3, $ft2, $ft1
/* E36CA4 801A7574 44062000 */  mfc1        $a2, $ft0
/* E36CA8 801A7578 240B0001 */  addiu       $t3, $zero, 0x1
/* E36CAC 801A757C AFAB0010 */  sw          $t3, 0x10($sp)
/* E36CB0 801A7580 46105480 */  add.s       $ft5, $ft3, $ft4
/* E36CB4 801A7584 8E840000 */  lw          $a0, 0x0($s4)
/* E36CB8 801A7588 44079000 */  mfc1        $a3, $ft5
/* E36CBC 801A758C 0C0016C0 */  jal         Matrix_Translate
/* E36CC0 801A7590 00000000 */   nop
/* E36CC4 801A7594 3C053DB2 */  lui         $a1, (0x3DB2B8C2 >> 16)
/* E36CC8 801A7598 34A5B8C2 */  ori         $a1, $a1, (0x3DB2B8C2 & 0xFFFF)
/* E36CCC 801A759C 8E840000 */  lw          $a0, 0x0($s4)
/* E36CD0 801A75A0 0C001751 */  jal         Matrix_RotateX
/* E36CD4 801A75A4 24060001 */   addiu      $a2, $zero, 0x1
/* E36CD8 801A75A8 3C01801C */  lui         $at, %hi(D_E16C50_801C2768 + 0x34)
/* E36CDC 801A75AC C420279C */  lwc1        $fv0, %lo(D_E16C50_801C2768 + 0x34)($at)
/* E36CE0 801A75B0 4406B000 */  mfc1        $a2, $fs1
/* E36CE4 801A75B4 240D0001 */  addiu       $t5, $zero, 0x1
/* E36CE8 801A75B8 44050000 */  mfc1        $a1, $fv0
/* E36CEC 801A75BC 44070000 */  mfc1        $a3, $fv0
/* E36CF0 801A75C0 AFAD0010 */  sw          $t5, 0x10($sp)
/* E36CF4 801A75C4 0C00170D */  jal         Matrix_Scale
/* E36CF8 801A75C8 8E840000 */   lw         $a0, 0x0($s4)
/* E36CFC 801A75CC 0C001BAE */  jal         Matrix_SetGfxMtx
/* E36D00 801A75D0 02A02025 */   or         $a0, $s5, $zero
/* E36D04 801A75D4 3C01801C */  lui         $at, %hi(D_E16C50_801C1878)
/* E36D08 801A75D8 C4341878 */  lwc1        $fs0, %lo(D_E16C50_801C1878)($at)
/* E36D0C 801A75DC 8EA30000 */  lw          $v1, 0x0($s5)
/* E36D10 801A75E0 3C100201 */  lui         $s0, %hi(D_20112C0)
/* E36D14 801A75E4 261012C0 */  addiu       $s0, $s0, %lo(D_20112C0)
/* E36D18 801A75E8 246A0008 */  addiu       $t2, $v1, 0x8
/* E36D1C 801A75EC AEAA0000 */  sw          $t2, 0x0($s5)
/* E36D20 801A75F0 AC700004 */  sw          $s0, 0x4($v1)
/* E36D24 801A75F4 AC7E0000 */  sw          $fp, 0x0($v1)
/* E36D28 801A75F8 4405A000 */  mfc1        $a1, $fs0
/* E36D2C 801A75FC 4406B000 */  mfc1        $a2, $fs1
/* E36D30 801A7600 4407A000 */  mfc1        $a3, $fs0
/* E36D34 801A7604 24090001 */  addiu       $t1, $zero, 0x1
/* E36D38 801A7608 AFA90010 */  sw          $t1, 0x10($sp)
/* E36D3C 801A760C 0C00170D */  jal         Matrix_Scale
/* E36D40 801A7610 8E840000 */   lw         $a0, 0x0($s4)
/* E36D44 801A7614 0C001BAE */  jal         Matrix_SetGfxMtx
/* E36D48 801A7618 02A02025 */   or         $a0, $s5, $zero
/* E36D4C 801A761C 8EA30000 */  lw          $v1, 0x0($s5)
/* E36D50 801A7620 246F0008 */  addiu       $t7, $v1, 0x8
/* E36D54 801A7624 AEAF0000 */  sw          $t7, 0x0($s5)
/* E36D58 801A7628 AC700004 */  sw          $s0, 0x4($v1)
/* E36D5C 801A762C AC7E0000 */  sw          $fp, 0x0($v1)
/* E36D60 801A7630 0C0015D0 */  jal         Matrix_Pop
/* E36D64 801A7634 02802025 */   or         $a0, $s4, $zero
/* E36D68 801A7638 0C0015C2 */  jal         Matrix_Push
/* E36D6C 801A763C 02802025 */   or         $a0, $s4, $zero
/* E36D70 801A7640 3C014387 */  lui         $at, (0x43870000 >> 16)
/* E36D74 801A7644 44814000 */  mtc1        $at, $ft2
/* E36D78 801A7648 3C014396 */  lui         $at, (0x43960000 >> 16)
/* E36D7C 801A764C 44818000 */  mtc1        $at, $ft4
/* E36D80 801A7650 C6C40008 */  lwc1        $ft0, 0x8($s6)
/* E36D84 801A7654 C6CA000C */  lwc1        $ft3, 0xC($s6)
/* E36D88 801A7658 3C018017 */  lui         $at, %hi(D_80177D20)
/* E36D8C 801A765C 46082180 */  add.s       $ft1, $ft0, $ft2
/* E36D90 801A7660 C4247D20 */  lwc1        $ft0, %lo(D_80177D20)($at)
/* E36D94 801A7664 8EC50004 */  lw          $a1, 0x4($s6)
/* E36D98 801A7668 46105481 */  sub.s       $ft5, $ft3, $ft4
/* E36D9C 801A766C 44063000 */  mfc1        $a2, $ft1
/* E36DA0 801A7670 24080001 */  addiu       $t0, $zero, 0x1
/* E36DA4 801A7674 AFA80010 */  sw          $t0, 0x10($sp)
/* E36DA8 801A7678 46049200 */  add.s       $ft2, $ft5, $ft0
/* E36DAC 801A767C 8E840000 */  lw          $a0, 0x0($s4)
/* E36DB0 801A7680 44074000 */  mfc1        $a3, $ft2
/* E36DB4 801A7684 0C0016C0 */  jal         Matrix_Translate
/* E36DB8 801A7688 00000000 */   nop
/* E36DBC 801A768C 3C05BD56 */  lui         $a1, (0xBD567750 >> 16)
/* E36DC0 801A7690 34A57750 */  ori         $a1, $a1, (0xBD567750 & 0xFFFF)
/* E36DC4 801A7694 8E840000 */  lw          $a0, 0x0($s4)
/* E36DC8 801A7698 0C001751 */  jal         Matrix_RotateX
/* E36DCC 801A769C 24060001 */   addiu      $a2, $zero, 0x1
/* E36DD0 801A76A0 3C01801C */  lui         $at, %hi(D_E16C50_801C2768 + 0x34)
/* E36DD4 801A76A4 C420279C */  lwc1        $fv0, %lo(D_E16C50_801C2768 + 0x34)($at)
/* E36DD8 801A76A8 4406B000 */  mfc1        $a2, $fs1
/* E36DDC 801A76AC 240E0001 */  addiu       $t6, $zero, 0x1
/* E36DE0 801A76B0 44050000 */  mfc1        $a1, $fv0
/* E36DE4 801A76B4 44070000 */  mfc1        $a3, $fv0
/* E36DE8 801A76B8 AFAE0010 */  sw          $t6, 0x10($sp)
/* E36DEC 801A76BC 0C00170D */  jal         Matrix_Scale
/* E36DF0 801A76C0 8E840000 */   lw         $a0, 0x0($s4)
/* E36DF4 801A76C4 0C001BAE */  jal         Matrix_SetGfxMtx
/* E36DF8 801A76C8 02A02025 */   or         $a0, $s5, $zero
/* E36DFC 801A76CC 8EA30000 */  lw          $v1, 0x0($s5)
/* E36E00 801A76D0 4405A000 */  mfc1        $a1, $fs0
/* E36E04 801A76D4 4406B000 */  mfc1        $a2, $fs1
/* E36E08 801A76D8 24780008 */  addiu       $t8, $v1, 0x8
/* E36E0C 801A76DC AEB80000 */  sw          $t8, 0x0($s5)
/* E36E10 801A76E0 AC700004 */  sw          $s0, 0x4($v1)
/* E36E14 801A76E4 AC7E0000 */  sw          $fp, 0x0($v1)
/* E36E18 801A76E8 4407A000 */  mfc1        $a3, $fs0
/* E36E1C 801A76EC 24190001 */  addiu       $t9, $zero, 0x1
/* E36E20 801A76F0 AFB90010 */  sw          $t9, 0x10($sp)
/* E36E24 801A76F4 0C00170D */  jal         Matrix_Scale
/* E36E28 801A76F8 8E840000 */   lw         $a0, 0x0($s4)
/* E36E2C 801A76FC 0C001BAE */  jal         Matrix_SetGfxMtx
/* E36E30 801A7700 02A02025 */   or         $a0, $s5, $zero
/* E36E34 801A7704 8EA30000 */  lw          $v1, 0x0($s5)
/* E36E38 801A7708 246C0008 */  addiu       $t4, $v1, 0x8
/* E36E3C 801A770C AEAC0000 */  sw          $t4, 0x0($s5)
/* E36E40 801A7710 AC700004 */  sw          $s0, 0x4($v1)
/* E36E44 801A7714 AC7E0000 */  sw          $fp, 0x0($v1)
/* E36E48 801A7718 8FBF005C */  lw          $ra, 0x5C($sp)
.LE16C50_801A771C:
/* E36E4C 801A771C D7B40028 */  ldc1        $fs0, 0x28($sp)
/* E36E50 801A7720 D7B60030 */  ldc1        $fs1, 0x30($sp)
/* E36E54 801A7724 8FB00038 */  lw          $s0, 0x38($sp)
/* E36E58 801A7728 8FB1003C */  lw          $s1, 0x3C($sp)
/* E36E5C 801A772C 8FB20040 */  lw          $s2, 0x40($sp)
/* E36E60 801A7730 8FB30044 */  lw          $s3, 0x44($sp)
/* E36E64 801A7734 8FB40048 */  lw          $s4, 0x48($sp)
/* E36E68 801A7738 8FB5004C */  lw          $s5, 0x4C($sp)
/* E36E6C 801A773C 8FB60050 */  lw          $s6, 0x50($sp)
/* E36E70 801A7740 8FB70054 */  lw          $s7, 0x54($sp)
/* E36E74 801A7744 8FBE0058 */  lw          $fp, 0x58($sp)
/* E36E78 801A7748 03E00008 */  jr          $ra
/* E36E7C 801A774C 27BD0158 */   addiu      $sp, $sp, 0x158
glabel func_E16C50_801A7750
/* E36E80 801A7750 27BDFFA8 */  addiu       $sp, $sp, -0x58
/* E36E84 801A7754 AFBF0054 */  sw          $ra, 0x54($sp)
/* E36E88 801A7758 AFBE0050 */  sw          $fp, 0x50($sp)
/* E36E8C 801A775C AFB7004C */  sw          $s7, 0x4C($sp)
/* E36E90 801A7760 AFB60048 */  sw          $s6, 0x48($sp)
/* E36E94 801A7764 AFB50044 */  sw          $s5, 0x44($sp)
/* E36E98 801A7768 AFB40040 */  sw          $s4, 0x40($sp)
/* E36E9C 801A776C AFB3003C */  sw          $s3, 0x3C($sp)
/* E36EA0 801A7770 AFB20038 */  sw          $s2, 0x38($sp)
/* E36EA4 801A7774 AFB10034 */  sw          $s1, 0x34($sp)
/* E36EA8 801A7778 AFB00030 */  sw          $s0, 0x30($sp)
/* E36EAC 801A777C F7B60028 */  sdc1        $fs1, 0x28($sp)
/* E36EB0 801A7780 F7B40020 */  sdc1        $fs0, 0x20($sp)
/* E36EB4 801A7784 3C108016 */  lui         $s0, %hi(gObjects2F4)
/* E36EB8 801A7788 26103FE0 */  addiu       $s0, $s0, %lo(gObjects2F4)
/* E36EBC 801A778C 24040001 */  addiu       $a0, $zero, 0x1
/* E36EC0 801A7790 240571AC */  addiu       $a1, $zero, 0x71AC
/* E36EC4 801A7794 0C0013F2 */  jal         Rand_SetSeed
/* E36EC8 801A7798 2406263A */   addiu      $a2, $zero, 0x263A
/* E36ECC 801A779C 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E36ED0 801A77A0 3C16800C */  lui         $s6, %hi(D_800C5D34)
/* E36ED4 801A77A4 3C158018 */  lui         $s5, %hi(gPlayer)
/* E36ED8 801A77A8 3C138017 */  lui         $s3, %hi(gTeamShields)
/* E36EDC 801A77AC 4481B000 */  mtc1        $at, $fs1
/* E36EE0 801A77B0 4480A000 */  mtc1        $zero, $fs0
/* E36EE4 801A77B4 267378B0 */  addiu       $s3, $s3, %lo(gTeamShields)
/* E36EE8 801A77B8 26B58280 */  addiu       $s5, $s5, %lo(gPlayer)
/* E36EEC 801A77BC 26D65D34 */  addiu       $s6, $s6, %lo(D_800C5D34)
/* E36EF0 801A77C0 00009025 */  or          $s2, $zero, $zero
/* E36EF4 801A77C4 241E0002 */  addiu       $fp, $zero, 0x2
/* E36EF8 801A77C8 24170003 */  addiu       $s7, $zero, 0x3
/* E36EFC 801A77CC 24140001 */  addiu       $s4, $zero, 0x1
.LE16C50_801A77D0:
/* E36F00 801A77D0 16400009 */  bnez        $s2, .LE16C50_801A77F8
/* E36F04 801A77D4 00000000 */   nop
/* E36F08 801A77D8 8E6E000C */  lw          $t6, 0xC($s3)
/* E36F0C 801A77DC 448E2000 */  mtc1        $t6, $ft0
/* E36F10 801A77E0 00000000 */  nop
/* E36F14 801A77E4 468021A0 */  cvt.s.w     $ft1, $ft0
/* E36F18 801A77E8 4614303E */  c.le.s      $ft1, $fs0
/* E36F1C 801A77EC 00000000 */  nop
/* E36F20 801A77F0 4503003F */  bc1tl       .LE16C50_801A78F0
/* E36F24 801A77F4 26520001 */   addiu      $s2, $s2, 0x1
.LE16C50_801A77F8:
/* E36F28 801A77F8 16540009 */  bne         $s2, $s4, .LE16C50_801A7820
/* E36F2C 801A77FC 00000000 */   nop
/* E36F30 801A7800 8E6F0008 */  lw          $t7, 0x8($s3)
/* E36F34 801A7804 448F4000 */  mtc1        $t7, $ft2
/* E36F38 801A7808 00000000 */  nop
/* E36F3C 801A780C 468042A0 */  cvt.s.w     $ft3, $ft2
/* E36F40 801A7810 4614503E */  c.le.s      $ft3, $fs0
/* E36F44 801A7814 00000000 */  nop
/* E36F48 801A7818 45030035 */  bc1tl       .LE16C50_801A78F0
/* E36F4C 801A781C 26520001 */   addiu      $s2, $s2, 0x1
.LE16C50_801A7820:
/* E36F50 801A7820 165E0008 */  bne         $s2, $fp, .LE16C50_801A7844
/* E36F54 801A7824 02002025 */   or         $a0, $s0, $zero
/* E36F58 801A7828 8E780004 */  lw          $t8, 0x4($s3)
/* E36F5C 801A782C 44988000 */  mtc1        $t8, $ft4
/* E36F60 801A7830 00000000 */  nop
/* E36F64 801A7834 468084A0 */  cvt.s.w     $ft5, $ft4
/* E36F68 801A7838 4614903E */  c.le.s      $ft5, $fs0
/* E36F6C 801A783C 00000000 */  nop
/* E36F70 801A7840 4501002A */  bc1t        .LE16C50_801A78EC
.LE16C50_801A7844:
/* E36F74 801A7844 0012C880 */   sll        $t9, $s2, 2
/* E36F78 801A7848 0332C823 */  subu        $t9, $t9, $s2
/* E36F7C 801A784C 3C08801C */  lui         $t0, %hi(D_E16C50_801BFB30)
/* E36F80 801A7850 2508FB30 */  addiu       $t0, $t0, %lo(D_E16C50_801BFB30)
/* E36F84 801A7854 0019C880 */  sll         $t9, $t9, 2
/* E36F88 801A7858 0C0184F1 */  jal         Object_2F4_Initialize
/* E36F8C 801A785C 03288821 */   addu       $s1, $t9, $t0
/* E36F90 801A7860 24090001 */  addiu       $t1, $zero, 0x1
/* E36F94 801A7864 240A00C3 */  addiu       $t2, $zero, 0xC3
/* E36F98 801A7868 A2090000 */  sb          $t1, 0x0($s0)
/* E36F9C 801A786C A60A0002 */  sh          $t2, 0x2($s0)
/* E36FA0 801A7870 C6260000 */  lwc1        $ft1, 0x0($s1)
/* E36FA4 801A7874 8EAB0000 */  lw          $t3, 0x0($s5)
/* E36FA8 801A7878 3145FFFF */  andi        $a1, $t2, 0xFFFF
/* E36FAC 801A787C 46163202 */  mul.s       $ft2, $ft1, $fs1
/* E36FB0 801A7880 C5640074 */  lwc1        $ft0, 0x74($t3)
/* E36FB4 801A7884 2604001C */  addiu       $a0, $s0, 0x1C
/* E36FB8 801A7888 46082280 */  add.s       $ft3, $ft0, $ft2
/* E36FBC 801A788C E60A0004 */  swc1        $ft3, 0x4($s0)
/* E36FC0 801A7890 8EAC0000 */  lw          $t4, 0x0($s5)
/* E36FC4 801A7894 C6320004 */  lwc1        $ft5, 0x4($s1)
/* E36FC8 801A7898 C5900078 */  lwc1        $ft4, 0x78($t4)
/* E36FCC 801A789C 46128180 */  add.s       $ft1, $ft4, $ft5
/* E36FD0 801A78A0 E6060008 */  swc1        $ft1, 0x8($s0)
/* E36FD4 801A78A4 8EAD0000 */  lw          $t5, 0x0($s5)
/* E36FD8 801A78A8 C6280008 */  lwc1        $ft2, 0x8($s1)
/* E36FDC 801A78AC C5A4007C */  lwc1        $ft0, 0x7C($t5)
/* E36FE0 801A78B0 A61400B8 */  sh          $s4, 0xB8($s0)
/* E36FE4 801A78B4 46082280 */  add.s       $ft3, $ft0, $ft2
/* E36FE8 801A78B8 0C0184AE */  jal         Object_SetInfo
/* E36FEC 801A78BC E60A000C */   swc1       $ft3, 0xC($s0)
/* E36FF0 801A78C0 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E36FF4 801A78C4 AE14007C */  sw          $s4, 0x7C($s0)
/* E36FF8 801A78C8 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E36FFC 801A78CC 3C043100 */  lui         $a0, (0x3100000C >> 16)
/* E37000 801A78D0 3484000C */  ori         $a0, $a0, (0x3100000C & 0xFFFF)
/* E37004 801A78D4 AFAE0014 */  sw          $t6, 0x14($sp)
/* E37008 801A78D8 AFB60010 */  sw          $s6, 0x10($sp)
/* E3700C 801A78DC 26050100 */  addiu       $a1, $s0, 0x100
/* E37010 801A78E0 24060004 */  addiu       $a2, $zero, 0x4
/* E37014 801A78E4 0C006486 */  jal         Audio_PlaySfx
/* E37018 801A78E8 02C03825 */   or         $a3, $s6, $zero
.LE16C50_801A78EC:
/* E3701C 801A78EC 26520001 */  addiu       $s2, $s2, 0x1
.LE16C50_801A78F0:
/* E37020 801A78F0 1657FFB7 */  bne         $s2, $s7, .LE16C50_801A77D0
/* E37024 801A78F4 261002F4 */   addiu      $s0, $s0, 0x2F4
/* E37028 801A78F8 8FBF0054 */  lw          $ra, 0x54($sp)
/* E3702C 801A78FC D7B40020 */  ldc1        $fs0, 0x20($sp)
/* E37030 801A7900 D7B60028 */  ldc1        $fs1, 0x28($sp)
/* E37034 801A7904 8FB00030 */  lw          $s0, 0x30($sp)
/* E37038 801A7908 8FB10034 */  lw          $s1, 0x34($sp)
/* E3703C 801A790C 8FB20038 */  lw          $s2, 0x38($sp)
/* E37040 801A7910 8FB3003C */  lw          $s3, 0x3C($sp)
/* E37044 801A7914 8FB40040 */  lw          $s4, 0x40($sp)
/* E37048 801A7918 8FB50044 */  lw          $s5, 0x44($sp)
/* E3704C 801A791C 8FB60048 */  lw          $s6, 0x48($sp)
/* E37050 801A7920 8FB7004C */  lw          $s7, 0x4C($sp)
/* E37054 801A7924 8FBE0050 */  lw          $fp, 0x50($sp)
/* E37058 801A7928 03E00008 */  jr          $ra
/* E3705C 801A792C 27BD0058 */   addiu      $sp, $sp, 0x58
.section .late_rodata
dlabel jtbl_E16C50_801C187C
/* E50FAC 801C187C 801A7964 */ .word .LE16C50_801A7964
/* E50FB0 801C1880 801A7AE0 */ .word .LE16C50_801A7AE0
/* E50FB4 801C1884 801A7D78 */ .word .LE16C50_801A7D78
/* E50FB8 801C1888 801A7EF8 */ .word .LE16C50_801A7EF8
/* E50FBC 801C188C 801A8348 */ .word .LE16C50_801A8348

dlabel D_E16C50_801C1890
/* E50FC0 801C1890 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C1894
/* E50FC4 801C1894 3D4CCCCD */ .float 0.05000000075

dlabel D_E16C50_801C1898
/* E50FC8 801C1898 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C189C
/* E50FCC 801C189C 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C18A0
/* E50FD0 801C18A0 45992000 */ .float 4900

dlabel D_E16C50_801C18A4
/* E50FD4 801C18A4 451C4000 */ .float 2500

dlabel D_E16C50_801C18A8
/* E50FD8 801C18A8 454B2000 */ .float 3250

dlabel D_E16C50_801C18AC
/* E50FDC 801C18AC 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C18B0
/* E50FE0 801C18B0 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C18B4
/* E50FE4 801C18B4 3DCCCCCD */ .float 0.1000000015

dlabel D_E16C50_801C18B8
/* E50FE8 801C18B8 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C18BC
/* E50FEC 801C18BC 4587F000 */ .float 4350

dlabel D_E16C50_801C18C0
/* E50FF0 801C18C0 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C18C4
/* E50FF4 801C18C4 3F4CCCCD */ .float 0.8000000119

dlabel D_E16C50_801C18C8
/* E50FF8 801C18C8 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C18CC
/* E50FFC 801C18CC 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C18D0
/* E51000 801C18D0 38D1B717 */ .float 9.999999747e-05

dlabel D_E16C50_801C18D4
/* E51004 801C18D4 3E4CCCCD */ .float 0.200000003

dlabel jtbl_E16C50_801C18D8
/* E51008 801C18D8 801A88BC */ .word .LE16C50_801A88BC
/* E5100C 801C18DC 801A8984 */ .word .LE16C50_801A8984
/* E51010 801C18E0 801A8984 */ .word .LE16C50_801A8984
/* E51014 801C18E4 801A8984 */ .word .LE16C50_801A8984
/* E51018 801C18E8 801A8984 */ .word .LE16C50_801A8984
/* E5101C 801C18EC 801A8984 */ .word .LE16C50_801A8984
/* E51020 801C18F0 801A8984 */ .word .LE16C50_801A8984
/* E51024 801C18F4 801A8984 */ .word .LE16C50_801A8984
/* E51028 801C18F8 801A8984 */ .word .LE16C50_801A8984
/* E5102C 801C18FC 801A8984 */ .word .LE16C50_801A8984
/* E51030 801C1900 801A8984 */ .word .LE16C50_801A8984
/* E51034 801C1904 801A8984 */ .word .LE16C50_801A8984
/* E51038 801C1908 801A8984 */ .word .LE16C50_801A8984
/* E5103C 801C190C 801A8984 */ .word .LE16C50_801A8984
/* E51040 801C1910 801A890C */ .word .LE16C50_801A890C
/* E51044 801C1914 801A8984 */ .word .LE16C50_801A8984
/* E51048 801C1918 801A8984 */ .word .LE16C50_801A8984
/* E5104C 801C191C 801A8984 */ .word .LE16C50_801A8984
/* E51050 801C1920 801A8984 */ .word .LE16C50_801A8984
/* E51054 801C1924 801A8984 */ .word .LE16C50_801A8984
/* E51058 801C1928 801A8984 */ .word .LE16C50_801A8984
/* E5105C 801C192C 801A8984 */ .word .LE16C50_801A8984
/* E51060 801C1930 801A8984 */ .word .LE16C50_801A8984
/* E51064 801C1934 801A8984 */ .word .LE16C50_801A8984
/* E51068 801C1938 801A8984 */ .word .LE16C50_801A8984
/* E5106C 801C193C 801A8984 */ .word .LE16C50_801A8984
/* E51070 801C1940 801A8984 */ .word .LE16C50_801A8984
/* E51074 801C1944 801A8984 */ .word .LE16C50_801A8984
/* E51078 801C1948 801A8984 */ .word .LE16C50_801A8984
/* E5107C 801C194C 801A8984 */ .word .LE16C50_801A8984
/* E51080 801C1950 801A8984 */ .word .LE16C50_801A8984
/* E51084 801C1954 801A8984 */ .word .LE16C50_801A8984
/* E51088 801C1958 801A8984 */ .word .LE16C50_801A8984
/* E5108C 801C195C 801A8984 */ .word .LE16C50_801A8984
/* E51090 801C1960 801A8948 */ .word .LE16C50_801A8948
/* E51094 801C1964 801A8984 */ .word .LE16C50_801A8984
/* E51098 801C1968 801A8984 */ .word .LE16C50_801A8984
/* E5109C 801C196C 801A8984 */ .word .LE16C50_801A8984
/* E510A0 801C1970 801A8984 */ .word .LE16C50_801A8984
/* E510A4 801C1974 801A8984 */ .word .LE16C50_801A8984
/* E510A8 801C1978 801A8984 */ .word .LE16C50_801A8984
/* E510AC 801C197C 801A8984 */ .word .LE16C50_801A8984
/* E510B0 801C1980 801A8984 */ .word .LE16C50_801A8984
/* E510B4 801C1984 801A8984 */ .word .LE16C50_801A8984
/* E510B8 801C1988 801A8984 */ .word .LE16C50_801A8984
/* E510BC 801C198C 801A8984 */ .word .LE16C50_801A8984
/* E510C0 801C1990 801A8984 */ .word .LE16C50_801A8984
/* E510C4 801C1994 801A8984 */ .word .LE16C50_801A8984
/* E510C8 801C1998 801A8984 */ .word .LE16C50_801A8984
/* E510CC 801C199C 801A8984 */ .word .LE16C50_801A8984
/* E510D0 801C19A0 801A8984 */ .word .LE16C50_801A8984
/* E510D4 801C19A4 801A8984 */ .word .LE16C50_801A8984
/* E510D8 801C19A8 801A8984 */ .word .LE16C50_801A8984
/* E510DC 801C19AC 801A8984 */ .word .LE16C50_801A8984
/* E510E0 801C19B0 801A8968 */ .word .LE16C50_801A8968
/* E510E4 801C19B4 801A8984 */ .word .LE16C50_801A8984
/* E510E8 801C19B8 801A8984 */ .word .LE16C50_801A8984
/* E510EC 801C19BC 801A8984 */ .word .LE16C50_801A8984
/* E510F0 801C19C0 801A8984 */ .word .LE16C50_801A8984
/* E510F4 801C19C4 801A8984 */ .word .LE16C50_801A8984
/* E510F8 801C19C8 801A8984 */ .word .LE16C50_801A8984
/* E510FC 801C19CC 801A8984 */ .word .LE16C50_801A8984
/* E51100 801C19D0 801A8984 */ .word .LE16C50_801A8984
/* E51104 801C19D4 801A8984 */ .word .LE16C50_801A8984
/* E51108 801C19D8 801A8984 */ .word .LE16C50_801A8984
/* E5110C 801C19DC 801A8984 */ .word .LE16C50_801A8984
/* E51110 801C19E0 801A8984 */ .word .LE16C50_801A8984
/* E51114 801C19E4 801A8984 */ .word .LE16C50_801A8984
/* E51118 801C19E8 801A8984 */ .word .LE16C50_801A8984
/* E5111C 801C19EC 801A8984 */ .word .LE16C50_801A8984
/* E51120 801C19F0 801A8984 */ .word .LE16C50_801A8984
/* E51124 801C19F4 801A8984 */ .word .LE16C50_801A8984
/* E51128 801C19F8 801A8984 */ .word .LE16C50_801A8984
/* E5112C 801C19FC 801A8984 */ .word .LE16C50_801A8984
/* E51130 801C1A00 801A88C8 */ .word .LE16C50_801A88C8

dlabel D_E16C50_801C1A04
/* E51134 801C1A04 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1A08
/* E51138 801C1A08 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1A0C
/* E5113C 801C1A0C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1A10
/* E51140 801C1A10 3E99999A */ .float 0.3000000119

dlabel D_E16C50_801C1A14
/* E51144 801C1A14 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A7930
/* E37060 801A7930 27BDFF80 */  addiu       $sp, $sp, -0x80
/* E37064 801A7934 AFB00020 */  sw          $s0, 0x20($sp)
/* E37068 801A7938 00808025 */  or          $s0, $a0, $zero
/* E3706C 801A793C AFBF0024 */  sw          $ra, 0x24($sp)
/* E37070 801A7940 8E0E01D0 */  lw          $t6, 0x1D0($s0)
/* E37074 801A7944 2DC10005 */  sltiu       $at, $t6, 0x5
/* E37078 801A7948 10200362 */  beqz        $at, .LE16C50_801A86D4
/* E3707C 801A794C 000E7080 */   sll        $t6, $t6, 2
/* E37080 801A7950 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C187C)
/* E37084 801A7954 002E0821 */  addu        $at, $at, $t6
/* E37088 801A7958 8C2E187C */  lw          $t6, %lo(jtbl_E16C50_801C187C)($at)
/* E3708C 801A795C 01C00008 */  jr          $t6
/* E37090 801A7960 00000000 */   nop
.LE16C50_801A7964:
/* E37094 801A7964 3C018017 */  lui         $at, %hi(D_80177A80)
/* E37098 801A7968 AC207A80 */  sw          $zero, %lo(D_80177A80)($at)
/* E3709C 801A796C 3C014220 */  lui         $at, (0x42200000 >> 16)
/* E370A0 801A7970 44802000 */  mtc1        $zero, $ft0
/* E370A4 801A7974 44803000 */  mtc1        $zero, $ft1
/* E370A8 801A7978 44814000 */  mtc1        $at, $ft2
/* E370AC 801A797C 44805000 */  mtc1        $zero, $ft3
/* E370B0 801A7980 44808000 */  mtc1        $zero, $ft4
/* E370B4 801A7984 E60404D8 */  swc1        $ft0, 0x4D8($s0)
/* E370B8 801A7988 E6060034 */  swc1        $ft1, 0x34($s0)
/* E370BC 801A798C E60800D0 */  swc1        $ft2, 0xD0($s0)
/* E370C0 801A7990 E60A0110 */  swc1        $ft3, 0x110($s0)
/* E370C4 801A7994 44805000 */  mtc1        $zero, $ft3
/* E370C8 801A7998 44804000 */  mtc1        $zero, $ft2
/* E370CC 801A799C 44803000 */  mtc1        $zero, $ft1
/* E370D0 801A79A0 44802000 */  mtc1        $zero, $ft0
/* E370D4 801A79A4 44809000 */  mtc1        $zero, $ft5
/* E370D8 801A79A8 E610012C */  swc1        $ft4, 0x12C($s0)
/* E370DC 801A79AC C6100040 */  lwc1        $ft4, 0x40($s0)
/* E370E0 801A79B0 240F0001 */  addiu       $t7, $zero, 0x1
/* E370E4 801A79B4 AE0F0234 */  sw          $t7, 0x234($s0)
/* E370E8 801A79B8 3C018017 */  lui         $at, %hi(D_80177978)
/* E370EC 801A79BC E60A04A0 */  swc1        $ft3, 0x4A0($s0)
/* E370F0 801A79C0 E60804A8 */  swc1        $ft2, 0x4A8($s0)
/* E370F4 801A79C4 E60604A4 */  swc1        $ft1, 0x4A4($s0)
/* E370F8 801A79C8 E60404AC */  swc1        $ft0, 0x4AC($s0)
/* E370FC 801A79CC E6120130 */  swc1        $ft5, 0x130($s0)
/* E37100 801A79D0 E4307978 */  swc1        $ft4, %lo(D_80177978)($at)
/* E37104 801A79D4 C6120044 */  lwc1        $ft5, 0x44($s0)
/* E37108 801A79D8 3C018017 */  lui         $at, %hi(D_80177980)
/* E3710C 801A79DC 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x1D88)
/* E37110 801A79E0 E4327980 */  swc1        $ft5, %lo(D_80177980)($at)
/* E37114 801A79E4 C6040048 */  lwc1        $ft0, 0x48($s0)
/* E37118 801A79E8 3C018017 */  lui         $at, %hi(D_80177988)
/* E3711C 801A79EC 24845D68 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0x1D88)
/* E37120 801A79F0 E4247988 */  swc1        $ft0, %lo(D_80177988)($at)
/* E37124 801A79F4 C606004C */  lwc1        $ft1, 0x4C($s0)
/* E37128 801A79F8 3C018017 */  lui         $at, %hi(D_801779A0)
/* E3712C 801A79FC E42679A0 */  swc1        $ft1, %lo(D_801779A0)($at)
/* E37130 801A7A00 C6080050 */  lwc1        $ft2, 0x50($s0)
/* E37134 801A7A04 3C018017 */  lui         $at, %hi(D_801779B8)
/* E37138 801A7A08 E42879B8 */  swc1        $ft2, %lo(D_801779B8)($at)
/* E3713C 801A7A0C C60A0054 */  lwc1        $ft3, 0x54($s0)
/* E37140 801A7A10 3C018017 */  lui         $at, %hi(D_801779C0)
/* E37144 801A7A14 E42A79C0 */  swc1        $ft3, %lo(D_801779C0)($at)
/* E37148 801A7A18 849800B6 */  lh          $t8, 0xB6($a0)
.LE16C50_801A7A1C:
/* E3714C 801A7A1C 24850100 */  addiu       $a1, $a0, 0x100
/* E37150 801A7A20 17000004 */  bnez        $t8, .LE16C50_801A7A34
/* E37154 801A7A24 00000000 */   nop
/* E37158 801A7A28 0C0183EF */  jal         Object_Kill
/* E3715C 801A7A2C AFA40034 */   sw         $a0, 0x34($sp)
/* E37160 801A7A30 8FA40034 */  lw          $a0, 0x34($sp)
.LE16C50_801A7A34:
/* E37164 801A7A34 3C198017 */  lui         $t9, %hi(gObjects408)
/* E37168 801A7A38 2739F110 */  addiu       $t9, $t9, %lo(gObjects408)
/* E3716C 801A7A3C 248402F4 */  addiu       $a0, $a0, 0x2F4
/* E37170 801A7A40 5499FFF6 */  bnel        $a0, $t9, .LE16C50_801A7A1C
/* E37174 801A7A44 849800B6 */   lh         $t8, 0xB6($a0)
/* E37178 801A7A48 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x5E8)
/* E3717C 801A7A4C 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0x6E8)
/* E37180 801A7A50 24A546C8 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0x6E8)
/* E37184 801A7A54 0C0183EF */  jal         Object_Kill
/* E37188 801A7A58 248445C8 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0x5E8)
/* E3718C 801A7A5C 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0x8DC)
/* E37190 801A7A60 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0x9DC)
/* E37194 801A7A64 24A549BC */  addiu       $a1, $a1, %lo(gObjects2F4 + 0x9DC)
/* E37198 801A7A68 0C0183EF */  jal         Object_Kill
/* E3719C 801A7A6C 248448BC */   addiu      $a0, $a0, %lo(gObjects2F4 + 0x8DC)
/* E371A0 801A7A70 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xBD0)
/* E371A4 801A7A74 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0xCD0)
/* E371A8 801A7A78 24A54CB0 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0xCD0)
/* E371AC 801A7A7C 0C0183EF */  jal         Object_Kill
/* E371B0 801A7A80 24844BB0 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xBD0)
/* E371B4 801A7A84 24080001 */  addiu       $t0, $zero, 0x1
/* E371B8 801A7A88 AE0801D0 */  sw          $t0, 0x1D0($s0)
/* E371BC 801A7A8C 3C01801C */  lui         $at, %hi(D_E16C50_801C1890)
/* E371C0 801A7A90 C4301890 */  lwc1        $ft4, %lo(D_E16C50_801C1890)($at)
/* E371C4 801A7A94 3C018017 */  lui         $at, %hi(D_80177A48)
/* E371C8 801A7A98 0C0013AC */  jal         Rand_ZeroOne
/* E371CC 801A7A9C E4307A48 */   swc1       $ft4, %lo(D_80177A48)($at)
/* E371D0 801A7AA0 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E371D4 801A7AA4 44819000 */  mtc1        $at, $ft5
/* E371D8 801A7AA8 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E371DC 801A7AAC 4600903C */  c.lt.s      $ft5, $fv0
/* E371E0 801A7AB0 00000000 */  nop
/* E371E4 801A7AB4 45020007 */  bc1fl       .LE16C50_801A7AD4
/* E371E8 801A7AB8 44813000 */   mtc1       $at, $ft1
/* E371EC 801A7ABC 3C01BF80 */  lui         $at, (0xBF800000 >> 16)
/* E371F0 801A7AC0 44812000 */  mtc1        $at, $ft0
/* E371F4 801A7AC4 3C018017 */  lui         $at, %hi(D_80177A48 + 0x24)
/* E371F8 801A7AC8 10000302 */  b           .LE16C50_801A86D4
/* E371FC 801A7ACC E4247A6C */   swc1       $ft0, %lo(D_80177A48 + 0x24)($at)
/* E37200 801A7AD0 44813000 */  mtc1        $at, $ft1
.LE16C50_801A7AD4:
/* E37204 801A7AD4 3C018017 */  lui         $at, %hi(D_80177A48 + 0x24)
/* E37208 801A7AD8 100002FE */  b           .LE16C50_801A86D4
/* E3720C 801A7ADC E4267A6C */   swc1       $ft1, %lo(D_80177A48 + 0x24)($at)
.LE16C50_801A7AE0:
/* E37210 801A7AE0 3C028017 */  lui         $v0, %hi(D_80177CE8)
/* E37214 801A7AE4 24427CE8 */  addiu       $v0, $v0, %lo(D_80177CE8)
/* E37218 801A7AE8 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E3721C 801A7AEC 44815000 */  mtc1        $at, $ft3
/* E37220 801A7AF0 C4480000 */  lwc1        $ft2, 0x0($v0)
/* E37224 801A7AF4 44800000 */  mtc1        $zero, $fv0
/* E37228 801A7AF8 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E3722C 801A7AFC 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E37230 801A7B00 44050000 */  mfc1        $a1, $fv0
/* E37234 801A7B04 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E37238 801A7B08 260400E4 */  addiu       $a0, $s0, 0xE4
/* E3723C 801A7B0C E4500000 */  swc1        $ft4, 0x0($v0)
/* E37240 801A7B10 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E37244 801A7B14 0C026F0B */  jal         Math_SmoothStepToF
/* E37248 801A7B18 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E3724C 801A7B1C 44809000 */  mtc1        $zero, $ft5
/* E37250 801A7B20 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* E37254 801A7B24 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* E37258 801A7B28 26040078 */  addiu       $a0, $s0, 0x78
/* E3725C 801A7B2C 3C054348 */  lui         $a1, (0x43480000 >> 16)
/* E37260 801A7B30 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E37264 801A7B34 0C026F0B */  jal         Math_SmoothStepToF
/* E37268 801A7B38 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E3726C 801A7B3C 3C018017 */  lui         $at, %hi(gObjects408 + 0x4)
/* E37270 801A7B40 C426F114 */  lwc1        $ft1, %lo(gObjects408 + 0x4)($at)
/* E37274 801A7B44 3C018017 */  lui         $at, %hi(gObjects408 + 0xC)
/* E37278 801A7B48 C42AF11C */  lwc1        $ft3, %lo(gObjects408 + 0xC)($at)
/* E3727C 801A7B4C C608007C */  lwc1        $ft2, 0x7C($s0)
/* E37280 801A7B50 3C01801C */  lui         $at, %hi(D_E16C50_801C1894)
/* E37284 801A7B54 C4321894 */  lwc1        $ft5, %lo(D_E16C50_801C1894)($at)
/* E37288 801A7B58 460A4401 */  sub.s       $ft4, $ft2, $ft3
/* E3728C 801A7B5C C6040074 */  lwc1        $ft0, 0x74($s0)
/* E37290 801A7B60 46128382 */  mul.s       $fa1, $ft4, $ft5
/* E37294 801A7B64 0C001440 */  jal         Math_Atan2F
/* E37298 801A7B68 46062301 */   sub.s      $fa0, $ft0, $ft1
/* E3729C 801A7B6C 0C027DDA */  jal         Math_RadToDeg
/* E372A0 801A7B70 46000307 */   neg.s      $fa0, $fv0
/* E372A4 801A7B74 44802000 */  mtc1        $zero, $ft0
/* E372A8 801A7B78 3C048017 */  lui         $a0, %hi(D_80177980)
/* E372AC 801A7B7C E7A00078 */  swc1        $fv0, 0x78($sp)
/* E372B0 801A7B80 24847980 */  addiu       $a0, $a0, %lo(D_80177980)
/* E372B4 801A7B84 3C054396 */  lui         $a1, (0x43960000 >> 16)
/* E372B8 801A7B88 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E372BC 801A7B8C 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E372C0 801A7B90 0C026F0B */  jal         Math_SmoothStepToF
/* E372C4 801A7B94 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E372C8 801A7B98 44803000 */  mtc1        $zero, $ft1
/* E372CC 801A7B9C 3C048017 */  lui         $a0, %hi(D_801779B8)
/* E372D0 801A7BA0 248479B8 */  addiu       $a0, $a0, %lo(D_801779B8)
/* E372D4 801A7BA4 3C054391 */  lui         $a1, (0x43910000 >> 16)
/* E372D8 801A7BA8 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E372DC 801A7BAC 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E372E0 801A7BB0 0C026F0B */  jal         Math_SmoothStepToF
/* E372E4 801A7BB4 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E372E8 801A7BB8 3C01801C */  lui         $at, %hi(D_E16C50_801C1898)
/* E372EC 801A7BBC C4281898 */  lwc1        $ft2, %lo(D_E16C50_801C1898)($at)
/* E372F0 801A7BC0 260400E8 */  addiu       $a0, $s0, 0xE8
/* E372F4 801A7BC4 8FA50078 */  lw          $a1, 0x78($sp)
/* E372F8 801A7BC8 3C063F00 */  lui         $a2, (0x3F000000 >> 16)
/* E372FC 801A7BCC 3C074000 */  lui         $a3, (0x40000000 >> 16)
/* E37300 801A7BD0 0C026F4E */  jal         Math_SmoothStepToAngle
/* E37304 801A7BD4 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E37308 801A7BD8 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E3730C 801A7BDC 44817000 */  mtc1        $at, $fa1
/* E37310 801A7BE0 3C098017 */  lui         $t1, %hi(D_80177A80)
/* E37314 801A7BE4 8D297A80 */  lw          $t1, %lo(D_80177A80)($t1)
/* E37318 801A7BE8 460E0082 */  mul.s       $fv1, $fv0, $fa1
/* E3731C 801A7BEC 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E37320 801A7BF0 2921000E */  slti        $at, $t1, 0xE
/* E37324 801A7BF4 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E37328 801A7BF8 260400EC */  addiu       $a0, $s0, 0xEC
/* E3732C 801A7BFC 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E37330 801A7C00 1420000D */  bnez        $at, .LE16C50_801A7C38
/* E37334 801A7C04 46001306 */   mov.s      $fa0, $fv1
/* E37338 801A7C08 3C01801C */  lui         $at, %hi(D_E16C50_801C189C)
/* E3733C 801A7C0C C42A189C */  lwc1        $ft3, %lo(D_E16C50_801C189C)($at)
/* E37340 801A7C10 44056000 */  mfc1        $a1, $fa0
/* E37344 801A7C14 0C026F4E */  jal         Math_SmoothStepToAngle
/* E37348 801A7C18 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E3734C 801A7C1C 44808000 */  mtc1        $zero, $ft4
/* E37350 801A7C20 3C018017 */  lui         $at, %hi(D_801779A0)
/* E37354 801A7C24 44809000 */  mtc1        $zero, $ft5
/* E37358 801A7C28 E43079A0 */  swc1        $ft4, %lo(D_801779A0)($at)
/* E3735C 801A7C2C 3C018017 */  lui         $at, %hi(D_80177978)
/* E37360 801A7C30 1000000E */  b           .LE16C50_801A7C6C
/* E37364 801A7C34 E4327978 */   swc1       $ft5, %lo(D_80177978)($at)
.LE16C50_801A7C38:
/* E37368 801A7C38 44802000 */  mtc1        $zero, $ft0
/* E3736C 801A7C3C 00000000 */  nop
/* E37370 801A7C40 4604103C */  c.lt.s      $fv1, $ft0
/* E37374 801A7C44 00000000 */  nop
/* E37378 801A7C48 45020006 */  bc1fl       .LE16C50_801A7C64
/* E3737C 801A7C4C C60A00EC */   lwc1       $ft3, 0xEC($s0)
/* E37380 801A7C50 C60600EC */  lwc1        $ft1, 0xEC($s0)
/* E37384 801A7C54 460E3201 */  sub.s       $ft2, $ft1, $fa1
/* E37388 801A7C58 10000004 */  b           .LE16C50_801A7C6C
/* E3738C 801A7C5C E60800EC */   swc1       $ft2, 0xEC($s0)
/* E37390 801A7C60 C60A00EC */  lwc1        $ft3, 0xEC($s0)
.LE16C50_801A7C64:
/* E37394 801A7C64 460E5400 */  add.s       $ft4, $ft3, $fa1
/* E37398 801A7C68 E61000EC */  swc1        $ft4, 0xEC($s0)
.LE16C50_801A7C6C:
/* E3739C 801A7C6C 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E373A0 801A7C70 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E373A4 801A7C74 3C048018 */  lui         $a0, %hi(D_80178354)
/* E373A8 801A7C78 24848354 */  addiu       $a0, $a0, %lo(D_80178354)
/* E373AC 801A7C7C 286100C8 */  slti        $at, $v1, 0xC8
/* E373B0 801A7C80 14200010 */  bnez        $at, .LE16C50_801A7CC4
/* E373B4 801A7C84 240200FF */   addiu      $v0, $zero, 0xFF
/* E373B8 801A7C88 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E373BC 801A7C8C 44812000 */  mtc1        $at, $ft0
/* E373C0 801A7C90 C61200E4 */  lwc1        $ft5, 0xE4($s0)
/* E373C4 801A7C94 44815000 */  mtc1        $at, $ft3
/* E373C8 801A7C98 C60800E8 */  lwc1        $ft2, 0xE8($s0)
/* E373CC 801A7C9C 46049180 */  add.s       $ft1, $ft5, $ft0
/* E373D0 801A7CA0 44812000 */  mtc1        $at, $ft0
/* E373D4 801A7CA4 C61200EC */  lwc1        $ft5, 0xEC($s0)
/* E373D8 801A7CA8 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E373DC 801A7CAC E60600E4 */  swc1        $ft1, 0xE4($s0)
/* E373E0 801A7CB0 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E373E4 801A7CB4 46049180 */  add.s       $ft1, $ft5, $ft0
/* E373E8 801A7CB8 E61000E8 */  swc1        $ft4, 0xE8($s0)
/* E373EC 801A7CBC E60600EC */  swc1        $ft1, 0xEC($s0)
/* E373F0 801A7CC0 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_801A7CC4:
/* E373F4 801A7CC4 286100E6 */  slti        $at, $v1, 0xE6
/* E373F8 801A7CC8 14200008 */  bnez        $at, .LE16C50_801A7CEC
/* E373FC 801A7CCC 3C058018 */   lui        $a1, %hi(D_80178350)
/* E37400 801A7CD0 3C018018 */  lui         $at, %hi(D_80178358)
/* E37404 801A7CD4 AC228358 */  sw          $v0, %lo(D_80178358)($at)
/* E37408 801A7CD8 24A58350 */  addiu       $a1, $a1, %lo(D_80178350)
/* E3740C 801A7CDC ACA20000 */  sw          $v0, 0x0($a1)
/* E37410 801A7CE0 AC820000 */  sw          $v0, 0x0($a0)
/* E37414 801A7CE4 3C018018 */  lui         $at, %hi(D_80178348)
/* E37418 801A7CE8 AC228348 */  sw          $v0, %lo(D_80178348)($at)
.LE16C50_801A7CEC:
/* E3741C 801A7CEC 240100E6 */  addiu       $at, $zero, 0xE6
/* E37420 801A7CF0 14610008 */  bne         $v1, $at, .LE16C50_801A7D14
/* E37424 801A7CF4 3C041032 */   lui        $a0, (0x103200FF >> 16)
/* E37428 801A7CF8 0C0060BD */  jal         func_800182F4
/* E3742C 801A7CFC 348400FF */   ori        $a0, $a0, (0x103200FF & 0xFFFF)
/* E37430 801A7D00 3C041132 */  lui         $a0, (0x113200FF >> 16)
/* E37434 801A7D04 0C0060BD */  jal         func_800182F4
/* E37438 801A7D08 348400FF */   ori        $a0, $a0, (0x113200FF & 0xFFFF)
/* E3743C 801A7D0C 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37440 801A7D10 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_801A7D14:
/* E37444 801A7D14 24010190 */  addiu       $at, $zero, 0x190
/* E37448 801A7D18 1461026E */  bne         $v1, $at, .LE16C50_801A86D4
/* E3744C 801A7D1C 00000000 */   nop
/* E37450 801A7D20 8E0C01D0 */  lw          $t4, 0x1D0($s0)
/* E37454 801A7D24 258D0001 */  addiu       $t5, $t4, 0x1
/* E37458 801A7D28 0C029852 */  jal         func_800A6148
/* E3745C 801A7D2C AE0D01D0 */   sw         $t5, 0x1D0($s0)
/* E37460 801A7D30 0C007289 */  jal         func_8001CA24
/* E37464 801A7D34 00002025 */   or         $a0, $zero, $zero
/* E37468 801A7D38 0C006940 */  jal         Audio_KillSfx
/* E3746C 801A7D3C 26040460 */   addiu      $a0, $s0, 0x460
/* E37470 801A7D40 240E00FA */  addiu       $t6, $zero, 0xFA
/* E37474 801A7D44 3C018018 */  lui         $at, %hi(D_80178340)
/* E37478 801A7D48 AC2E8340 */  sw          $t6, %lo(D_80178340)($at)
/* E3747C 801A7D4C 44804000 */  mtc1        $zero, $ft2
/* E37480 801A7D50 44805000 */  mtc1        $zero, $ft3
/* E37484 801A7D54 44808000 */  mtc1        $zero, $ft4
/* E37488 801A7D58 44809000 */  mtc1        $zero, $ft5
/* E3748C 801A7D5C 240F0014 */  addiu       $t7, $zero, 0x14
/* E37490 801A7D60 AE0F01F8 */  sw          $t7, 0x1F8($s0)
/* E37494 801A7D64 E60800D0 */  swc1        $ft2, 0xD0($s0)
/* E37498 801A7D68 E60A00E4 */  swc1        $ft3, 0xE4($s0)
/* E3749C 801A7D6C E61000E8 */  swc1        $ft4, 0xE8($s0)
/* E374A0 801A7D70 10000258 */  b           .LE16C50_801A86D4
/* E374A4 801A7D74 E61200EC */   swc1       $ft5, 0xEC($s0)
.LE16C50_801A7D78:
/* E374A8 801A7D78 3C028017 */  lui         $v0, %hi(D_80177CE8)
/* E374AC 801A7D7C 24427CE8 */  addiu       $v0, $v0, %lo(D_80177CE8)
/* E374B0 801A7D80 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E374B4 801A7D84 44813000 */  mtc1        $at, $ft1
/* E374B8 801A7D88 C4440000 */  lwc1        $ft0, 0x0($v0)
/* E374BC 801A7D8C 3C014348 */  lui         $at, (0x43480000 >> 16)
/* E374C0 801A7D90 24090001 */  addiu       $t1, $zero, 0x1
/* E374C4 801A7D94 46062200 */  add.s       $ft2, $ft0, $ft1
/* E374C8 801A7D98 E4480000 */  swc1        $ft2, 0x0($v0)
/* E374CC 801A7D9C 8E1801F8 */  lw          $t8, 0x1F8($s0)
/* E374D0 801A7DA0 1700024C */  bnez        $t8, .LE16C50_801A86D4
/* E374D4 801A7DA4 00000000 */   nop
/* E374D8 801A7DA8 44805000 */  mtc1        $zero, $ft3
/* E374DC 801A7DAC 44818000 */  mtc1        $at, $ft4
/* E374E0 801A7DB0 3C018017 */  lui         $at, %hi(D_80177D20)
/* E374E4 801A7DB4 E60A0074 */  swc1        $ft3, 0x74($s0)
/* E374E8 801A7DB8 E6100078 */  swc1        $ft4, 0x78($s0)
/* E374EC 801A7DBC C4327D20 */  lwc1        $ft5, %lo(D_80177D20)($at)
/* E374F0 801A7DC0 3C0143FA */  lui         $at, (0x43FA0000 >> 16)
/* E374F4 801A7DC4 44812000 */  mtc1        $at, $ft0
/* E374F8 801A7DC8 8E1901D0 */  lw          $t9, 0x1D0($s0)
/* E374FC 801A7DCC A20904C8 */  sb          $t1, 0x4C8($s0)
/* E37500 801A7DD0 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E37504 801A7DD4 27280001 */  addiu       $t0, $t9, 0x1
/* E37508 801A7DD8 AE0801D0 */  sw          $t0, 0x1D0($s0)
/* E3750C 801A7DDC 00002025 */  or          $a0, $zero, $zero
/* E37510 801A7DE0 46003207 */  neg.s       $ft2, $ft1
/* E37514 801A7DE4 0C00722E */  jal         func_8001C8B8
/* E37518 801A7DE8 E608007C */   swc1       $ft2, 0x7C($s0)
/* E3751C 801A7DEC 00002025 */  or          $a0, $zero, $zero
/* E37520 801A7DF0 24050026 */  addiu       $a1, $zero, 0x26
/* E37524 801A7DF4 00003025 */  or          $a2, $zero, $zero
/* E37528 801A7DF8 0C007511 */  jal         func_8001D444
/* E3752C 801A7DFC 240700FF */   addiu      $a3, $zero, 0xFF
/* E37530 801A7E00 240A0001 */  addiu       $t2, $zero, 0x1
/* E37534 801A7E04 3C018017 */  lui         $at, %hi(D_80177A98)
/* E37538 801A7E08 0C029852 */  jal         func_800A6148
/* E3753C 801A7E0C A02A7A98 */   sb         $t2, %lo(D_80177A98)($at)
/* E37540 801A7E10 44801000 */  mtc1        $zero, $fv1
/* E37544 801A7E14 3C018017 */  lui         $at, %hi(D_80177A48 + 0x4)
/* E37548 801A7E18 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xBD0)
/* E3754C 801A7E1C E4227A4C */  swc1        $fv1, %lo(D_80177A48 + 0x4)($at)
/* E37550 801A7E20 3C018017 */  lui         $at, %hi(D_80177A48 + 0x8)
/* E37554 801A7E24 E4227A50 */  swc1        $fv1, %lo(D_80177A48 + 0x8)($at)
/* E37558 801A7E28 3C0142A0 */  lui         $at, (0x42A00000 >> 16)
/* E3755C 801A7E2C 44818000 */  mtc1        $at, $ft4
/* E37560 801A7E30 C60A0078 */  lwc1        $ft3, 0x78($s0)
/* E37564 801A7E34 3C018017 */  lui         $at, %hi(D_80177D20)
/* E37568 801A7E38 E6020040 */  swc1        $fv1, 0x40($s0)
/* E3756C 801A7E3C 46105480 */  add.s       $ft5, $ft3, $ft4
/* E37570 801A7E40 C600007C */  lwc1        $fv0, 0x7C($s0)
/* E37574 801A7E44 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0xCD0)
/* E37578 801A7E48 24A54CB0 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0xCD0)
/* E3757C 801A7E4C E6120044 */  swc1        $ft5, 0x44($s0)
/* E37580 801A7E50 C4247D20 */  lwc1        $ft0, %lo(D_80177D20)($at)
/* E37584 801A7E54 3C01457A */  lui         $at, (0x457A0000 >> 16)
/* E37588 801A7E58 44814000 */  mtc1        $at, $ft2
/* E3758C 801A7E5C 46040180 */  add.s       $ft1, $fv0, $ft0
/* E37590 801A7E60 3C018017 */  lui         $at, %hi(D_80177D20)
/* E37594 801A7E64 24844BB0 */  addiu       $a0, $a0, %lo(gObjects2F4 + 0xBD0)
/* E37598 801A7E68 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E3759C 801A7E6C E60A0048 */  swc1        $ft3, 0x48($s0)
/* E375A0 801A7E70 C4307D20 */  lwc1        $ft4, %lo(D_80177D20)($at)
/* E375A4 801A7E74 3C01801C */  lui         $at, %hi(D_E16C50_801C18A0)
/* E375A8 801A7E78 C42418A0 */  lwc1        $ft0, %lo(D_E16C50_801C18A0)($at)
/* E375AC 801A7E7C 46100480 */  add.s       $ft5, $fv0, $ft4
/* E375B0 801A7E80 3C018017 */  lui         $at, %hi(D_80177988)
/* E375B4 801A7E84 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E375B8 801A7E88 E4267988 */  swc1        $ft1, %lo(D_80177988)($at)
/* E375BC 801A7E8C 3C018017 */  lui         $at, %hi(D_801779A0)
/* E375C0 801A7E90 E42279A0 */  swc1        $fv1, %lo(D_801779A0)($at)
/* E375C4 801A7E94 C42879A0 */  lwc1        $ft2, %lo(D_801779A0)($at)
/* E375C8 801A7E98 3C014348 */  lui         $at, (0x43480000 >> 16)
/* E375CC 801A7E9C 44815000 */  mtc1        $at, $ft3
/* E375D0 801A7EA0 3C018017 */  lui         $at, %hi(D_801779B8)
/* E375D4 801A7EA4 E608004C */  swc1        $ft2, 0x4C($s0)
/* E375D8 801A7EA8 E42A79B8 */  swc1        $ft3, %lo(D_801779B8)($at)
/* E375DC 801A7EAC 3C018017 */  lui         $at, %hi(D_80177D20)
/* E375E0 801A7EB0 E60A0050 */  swc1        $ft3, 0x50($s0)
/* E375E4 801A7EB4 C4327D20 */  lwc1        $ft5, %lo(D_80177D20)($at)
/* E375E8 801A7EB8 C610007C */  lwc1        $ft4, 0x7C($s0)
/* E375EC 801A7EBC 3C018017 */  lui         $at, %hi(D_801779C0)
/* E375F0 801A7EC0 46128100 */  add.s       $ft0, $ft4, $ft5
/* E375F4 801A7EC4 E42479C0 */  swc1        $ft0, %lo(D_801779C0)($at)
/* E375F8 801A7EC8 C42679C0 */  lwc1        $ft1, %lo(D_801779C0)($at)
/* E375FC 801A7ECC 3C018017 */  lui         $at, %hi(D_80177A48)
/* E37600 801A7ED0 E6060054 */  swc1        $ft1, 0x54($s0)
/* E37604 801A7ED4 0C0183EF */  jal         Object_Kill
/* E37608 801A7ED8 E4227A48 */   swc1       $fv1, %lo(D_80177A48)($at)
/* E3760C 801A7EDC 3C048016 */  lui         $a0, %hi(gObjects2F4 + 0xEC4)
/* E37610 801A7EE0 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0xFC4)
/* E37614 801A7EE4 24A54FA4 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0xFC4)
/* E37618 801A7EE8 0C0183EF */  jal         Object_Kill
/* E3761C 801A7EEC 24844EA4 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xEC4)
/* E37620 801A7EF0 100001F8 */  b           .LE16C50_801A86D4
/* E37624 801A7EF4 00000000 */   nop
.LE16C50_801A7EF8:
/* E37628 801A7EF8 3C028017 */  lui         $v0, %hi(D_80177CE8)
/* E3762C 801A7EFC 24427CE8 */  addiu       $v0, $v0, %lo(D_80177CE8)
/* E37630 801A7F00 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E37634 801A7F04 44815000 */  mtc1        $at, $ft3
/* E37638 801A7F08 C4480000 */  lwc1        $ft2, 0x0($v0)
/* E3763C 801A7F0C 3C0C8018 */  lui         $t4, %hi(D_801782F8)
/* E37640 801A7F10 3C018018 */  lui         $at, %hi(D_80178358)
/* E37644 801A7F14 460A4400 */  add.s       $ft4, $ft2, $ft3
/* E37648 801A7F18 240B0004 */  addiu       $t3, $zero, 0x4
/* E3764C 801A7F1C 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37650 801A7F20 E4500000 */  swc1        $ft4, 0x0($v0)
/* E37654 801A7F24 8D8C82F8 */  lw          $t4, %lo(D_801782F8)($t4)
/* E37658 801A7F28 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* E3765C 801A7F2C 3C018018 */  lui         $at, %hi(D_8017835C)
/* E37660 801A7F30 1180000B */  beqz        $t4, .LE16C50_801A7F60
/* E37664 801A7F34 AC2B835C */   sw         $t3, %lo(D_8017835C)($at)
/* E37668 801A7F38 3C0D8017 */  lui         $t5, %hi(gFrameCount)
/* E3766C 801A7F3C 8DAD7DB0 */  lw          $t5, %lo(gFrameCount)($t5)
/* E37670 801A7F40 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E37674 801A7F44 44813000 */  mtc1        $at, $ft1
/* E37678 801A7F48 31AE0001 */  andi        $t6, $t5, 0x1
/* E3767C 801A7F4C 448E9000 */  mtc1        $t6, $ft5
/* E37680 801A7F50 00000000 */  nop
/* E37684 801A7F54 46809120 */  cvt.s.w     $ft0, $ft5
/* E37688 801A7F58 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E3768C 801A7F5C E60804CC */  swc1        $ft2, 0x4CC($s0)
.LE16C50_801A7F60:
/* E37690 801A7F60 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E37694 801A7F64 240101C2 */  addiu       $at, $zero, 0x1C2
/* E37698 801A7F68 1061000E */  beq         $v1, $at, .LE16C50_801A7FA4
/* E3769C 801A7F6C 24010221 */   addiu      $at, $zero, 0x221
/* E376A0 801A7F70 1061001D */  beq         $v1, $at, .LE16C50_801A7FE8
/* E376A4 801A7F74 3C06C2B4 */   lui        $a2, (0xC2B40000 >> 16)
/* E376A8 801A7F78 24010226 */  addiu       $at, $zero, 0x226
/* E376AC 801A7F7C 1061002A */  beq         $v1, $at, .LE16C50_801A8028
/* E376B0 801A7F80 3C048016 */   lui        $a0, %hi(gObjects2F4 + 0xBD0)
/* E376B4 801A7F84 24010285 */  addiu       $at, $zero, 0x285
/* E376B8 801A7F88 1061002E */  beq         $v1, $at, .LE16C50_801A8044
/* E376BC 801A7F8C 3C048016 */   lui        $a0, %hi(gObjects2F4 + 0xEC4)
/* E376C0 801A7F90 240102BC */  addiu       $at, $zero, 0x2BC
/* E376C4 801A7F94 50610033 */  beql        $v1, $at, .LE16C50_801A8064
/* E376C8 801A7F98 8E0F01D0 */   lw         $t7, 0x1D0($s0)
/* E376CC 801A7F9C 1000003B */  b           .LE16C50_801A808C
/* E376D0 801A7FA0 28610208 */   slti       $at, $v1, 0x208
.LE16C50_801A7FA4:
/* E376D4 801A7FA4 3C01C496 */  lui         $at, (0xC4960000 >> 16)
/* E376D8 801A7FA8 44816000 */  mtc1        $at, $fa0
/* E376DC 801A7FAC 3C018017 */  lui         $at, %hi(D_80177D20)
/* E376E0 801A7FB0 C42A7D20 */  lwc1        $ft3, %lo(D_80177D20)($at)
/* E376E4 801A7FB4 3C01801C */  lui         $at, %hi(D_E16C50_801C18A4)
/* E376E8 801A7FB8 C43018A4 */  lwc1        $ft4, %lo(D_E16C50_801C18A4)($at)
/* E376EC 801A7FBC 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E376F0 801A7FC0 44819000 */  mtc1        $at, $ft5
/* E376F4 801A7FC4 46105380 */  add.s       $fa1, $ft3, $ft4
/* E376F8 801A7FC8 3C0642B4 */  lui         $a2, (0x42B40000 >> 16)
/* E376FC 801A7FCC 24070002 */  addiu       $a3, $zero, 0x2
/* E37700 801A7FD0 E7B20010 */  swc1        $ft5, 0x10($sp)
/* E37704 801A7FD4 0C06837E */  jal         func_E16C50_801A0DF8
/* E37708 801A7FD8 46007387 */   neg.s      $fa1, $fa1
/* E3770C 801A7FDC 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37710 801A7FE0 10000029 */  b           .LE16C50_801A8088
/* E37714 801A7FE4 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_801A7FE8:
/* E37718 801A7FE8 3C0144AF */  lui         $at, (0x44AF0000 >> 16)
/* E3771C 801A7FEC 44816000 */  mtc1        $at, $fa0
/* E37720 801A7FF0 3C018017 */  lui         $at, %hi(D_80177D20)
/* E37724 801A7FF4 C4247D20 */  lwc1        $ft0, %lo(D_80177D20)($at)
/* E37728 801A7FF8 3C01801C */  lui         $at, %hi(D_E16C50_801C18A8)
/* E3772C 801A7FFC C42618A8 */  lwc1        $ft1, %lo(D_E16C50_801C18A8)($at)
/* E37730 801A8000 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E37734 801A8004 44814000 */  mtc1        $at, $ft2
/* E37738 801A8008 46062380 */  add.s       $fa1, $ft0, $ft1
/* E3773C 801A800C 24070003 */  addiu       $a3, $zero, 0x3
/* E37740 801A8010 E7A80010 */  swc1        $ft2, 0x10($sp)
/* E37744 801A8014 0C06837E */  jal         func_E16C50_801A0DF8
/* E37748 801A8018 46007387 */   neg.s      $fa1, $fa1
/* E3774C 801A801C 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37750 801A8020 10000019 */  b           .LE16C50_801A8088
/* E37754 801A8024 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_801A8028:
/* E37758 801A8028 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0xCD0)
/* E3775C 801A802C 24A54CB0 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0xCD0)
/* E37760 801A8030 0C0183EF */  jal         Object_Kill
/* E37764 801A8034 24844BB0 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xBD0)
/* E37768 801A8038 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E3776C 801A803C 10000012 */  b           .LE16C50_801A8088
/* E37770 801A8040 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
.LE16C50_801A8044:
/* E37774 801A8044 3C058016 */  lui         $a1, %hi(gObjects2F4 + 0xFC4)
/* E37778 801A8048 24A54FA4 */  addiu       $a1, $a1, %lo(gObjects2F4 + 0xFC4)
/* E3777C 801A804C 0C0183EF */  jal         Object_Kill
/* E37780 801A8050 24844EA4 */   addiu      $a0, $a0, %lo(gObjects2F4 + 0xEC4)
/* E37784 801A8054 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37788 801A8058 1000000B */  b           .LE16C50_801A8088
/* E3778C 801A805C 8C637A80 */   lw         $v1, %lo(D_80177A80)($v1)
/* E37790 801A8060 8E0F01D0 */  lw          $t7, 0x1D0($s0)
.LE16C50_801A8064:
/* E37794 801A8064 25F80001 */  addiu       $t8, $t7, 0x1
/* E37798 801A8068 0C069DD4 */  jal         func_E16C50_801A7750
/* E3779C 801A806C AE1801D0 */   sw         $t8, 0x1D0($s0)
/* E377A0 801A8070 3C01447A */  lui         $at, (0x447A0000 >> 16)
/* E377A4 801A8074 44815000 */  mtc1        $at, $ft3
/* E377A8 801A8078 3C01801C */  lui         $at, %hi(D_E16C50_801C2768 + 0xC)
/* E377AC 801A807C 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E377B0 801A8080 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E377B4 801A8084 E42A2774 */  swc1        $ft3, %lo(D_E16C50_801C2768 + 0xC)($at)
.LE16C50_801A8088:
/* E377B8 801A8088 28610208 */  slti        $at, $v1, 0x208
.LE16C50_801A808C:
/* E377BC 801A808C 1420000C */  bnez        $at, .LE16C50_801A80C0
/* E377C0 801A8090 2861025D */   slti       $at, $v1, 0x25D
/* E377C4 801A8094 1020000A */  beqz        $at, .LE16C50_801A80C0
/* E377C8 801A8098 26040074 */   addiu      $a0, $s0, 0x74
/* E377CC 801A809C 3C01801C */  lui         $at, %hi(D_E16C50_801C18AC)
/* E377D0 801A80A0 C42018AC */  lwc1        $fv0, %lo(D_E16C50_801C18AC)($at)
/* E377D4 801A80A4 3C0543C8 */  lui         $a1, (0x43C80000 >> 16)
/* E377D8 801A80A8 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E377DC 801A80AC 44060000 */  mfc1        $a2, $fv0
/* E377E0 801A80B0 0C026F0B */  jal         Math_SmoothStepToF
/* E377E4 801A80B4 E7A00010 */   swc1       $fv0, 0x10($sp)
/* E377E8 801A80B8 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E377EC 801A80BC 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_801A80C0:
/* E377F0 801A80C0 28610208 */  slti        $at, $v1, 0x208
/* E377F4 801A80C4 1420000C */  bnez        $at, .LE16C50_801A80F8
/* E377F8 801A80C8 2861023A */   slti       $at, $v1, 0x23A
/* E377FC 801A80CC 1020000A */  beqz        $at, .LE16C50_801A80F8
/* E37800 801A80D0 260400EC */   addiu      $a0, $s0, 0xEC
/* E37804 801A80D4 3C01801C */  lui         $at, %hi(D_E16C50_801C18B0)
/* E37808 801A80D8 C42018B0 */  lwc1        $fv0, %lo(D_E16C50_801C18B0)($at)
/* E3780C 801A80DC 3C05C1F0 */  lui         $a1, (0xC1F00000 >> 16)
/* E37810 801A80E0 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E37814 801A80E4 44060000 */  mfc1        $a2, $fv0
/* E37818 801A80E8 0C026F4E */  jal         Math_SmoothStepToAngle
/* E3781C 801A80EC E7A00010 */   swc1       $fv0, 0x10($sp)
/* E37820 801A80F0 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37824 801A80F4 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_801A80F8:
/* E37828 801A80F8 2861023A */  slti        $at, $v1, 0x23A
/* E3782C 801A80FC 1420000D */  bnez        $at, .LE16C50_801A8134
/* E37830 801A8100 2861025D */   slti       $at, $v1, 0x25D
/* E37834 801A8104 1020000B */  beqz        $at, .LE16C50_801A8134
/* E37838 801A8108 260400EC */   addiu      $a0, $s0, 0xEC
/* E3783C 801A810C 3C01801C */  lui         $at, %hi(D_E16C50_801C18B4)
/* E37840 801A8110 C43018B4 */  lwc1        $ft4, %lo(D_E16C50_801C18B4)($at)
/* E37844 801A8114 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E37848 801A8118 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E3784C 801A811C 24050000 */  addiu       $a1, $zero, 0x0
/* E37850 801A8120 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E37854 801A8124 0C026F4E */  jal         Math_SmoothStepToAngle
/* E37858 801A8128 E7B00010 */   swc1       $ft4, 0x10($sp)
/* E3785C 801A812C 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37860 801A8130 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_801A8134:
/* E37864 801A8134 2861025D */  slti        $at, $v1, 0x25D
/* E37868 801A8138 14200009 */  bnez        $at, .LE16C50_801A8160
/* E3786C 801A813C 2861026C */   slti       $at, $v1, 0x26C
/* E37870 801A8140 10200007 */  beqz        $at, .LE16C50_801A8160
/* E37874 801A8144 3C0141F0 */   lui        $at, (0x41F00000 >> 16)
/* E37878 801A8148 44812000 */  mtc1        $at, $ft0
/* E3787C 801A814C C61200EC */  lwc1        $ft5, 0xEC($s0)
/* E37880 801A8150 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37884 801A8154 46049180 */  add.s       $ft1, $ft5, $ft0
/* E37888 801A8158 E60600EC */  swc1        $ft1, 0xEC($s0)
/* E3788C 801A815C 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_801A8160:
/* E37890 801A8160 2861026C */  slti        $at, $v1, 0x26C
/* E37894 801A8164 1420000C */  bnez        $at, .LE16C50_801A8198
/* E37898 801A8168 28610280 */   slti       $at, $v1, 0x280
/* E3789C 801A816C 1020000A */  beqz        $at, .LE16C50_801A8198
/* E378A0 801A8170 260400EC */   addiu      $a0, $s0, 0xEC
/* E378A4 801A8174 44804000 */  mtc1        $zero, $ft2
/* E378A8 801A8178 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E378AC 801A817C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E378B0 801A8180 3C054234 */  lui         $a1, (0x42340000 >> 16)
/* E378B4 801A8184 3C0740A0 */  lui         $a3, (0x40A00000 >> 16)
/* E378B8 801A8188 0C026F4E */  jal         Math_SmoothStepToAngle
/* E378BC 801A818C E7A80010 */   swc1       $ft2, 0x10($sp)
/* E378C0 801A8190 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E378C4 801A8194 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_801A8198:
/* E378C8 801A8198 28610280 */  slti        $at, $v1, 0x280
/* E378CC 801A819C 1420000A */  bnez        $at, .LE16C50_801A81C8
/* E378D0 801A81A0 260400EC */   addiu      $a0, $s0, 0xEC
/* E378D4 801A81A4 44800000 */  mtc1        $zero, $fv0
/* E378D8 801A81A8 3C063E99 */  lui         $a2, (0x3E99999A >> 16)
/* E378DC 801A81AC 34C6999A */  ori         $a2, $a2, (0x3E99999A & 0xFFFF)
/* E378E0 801A81B0 44050000 */  mfc1        $a1, $fv0
/* E378E4 801A81B4 3C0740E0 */  lui         $a3, (0x40E00000 >> 16)
/* E378E8 801A81B8 0C026F4E */  jal         Math_SmoothStepToAngle
/* E378EC 801A81BC E7A00010 */   swc1       $fv0, 0x10($sp)
/* E378F0 801A81C0 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E378F4 801A81C4 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_801A81C8:
/* E378F8 801A81C8 28610249 */  slti        $at, $v1, 0x249
/* E378FC 801A81CC 1420000A */  bnez        $at, .LE16C50_801A81F8
/* E37900 801A81D0 26040074 */   addiu      $a0, $s0, 0x74
/* E37904 801A81D4 44805000 */  mtc1        $zero, $ft3
/* E37908 801A81D8 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* E3790C 801A81DC 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* E37910 801A81E0 24050000 */  addiu       $a1, $zero, 0x0
/* E37914 801A81E4 3C074110 */  lui         $a3, (0x41100000 >> 16)
/* E37918 801A81E8 0C026F0B */  jal         Math_SmoothStepToF
/* E3791C 801A81EC E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E37920 801A81F0 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37924 801A81F4 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
.LE16C50_801A81F8:
/* E37928 801A81F8 28610258 */  slti        $at, $v1, 0x258
/* E3792C 801A81FC 1420000A */  bnez        $at, .LE16C50_801A8228
/* E37930 801A8200 26040078 */   addiu      $a0, $s0, 0x78
/* E37934 801A8204 3C01801C */  lui         $at, %hi(D_E16C50_801C18B8)
/* E37938 801A8208 C43018B8 */  lwc1        $ft4, %lo(D_E16C50_801C18B8)($at)
/* E3793C 801A820C 3C05446D */  lui         $a1, (0x446D8000 >> 16)
/* E37940 801A8210 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E37944 801A8214 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E37948 801A8218 34A58000 */  ori         $a1, $a1, (0x446D8000 & 0xFFFF)
/* E3794C 801A821C 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E37950 801A8220 0C026F0B */  jal         Math_SmoothStepToF
/* E37954 801A8224 E7B00010 */   swc1       $ft4, 0x10($sp)
.LE16C50_801A8228:
/* E37958 801A8228 3C018017 */  lui         $at, %hi(D_80177D20)
/* E3795C 801A822C C4327D20 */  lwc1        $ft5, %lo(D_80177D20)($at)
/* E37960 801A8230 3C01801C */  lui         $at, %hi(D_E16C50_801C18BC)
/* E37964 801A8234 C42418BC */  lwc1        $ft0, %lo(D_E16C50_801C18BC)($at)
/* E37968 801A8238 3C01801C */  lui         $at, %hi(D_E16C50_801C18C0)
/* E3796C 801A823C C42A18C0 */  lwc1        $ft3, %lo(D_E16C50_801C18C0)($at)
/* E37970 801A8240 46049180 */  add.s       $ft1, $ft5, $ft0
/* E37974 801A8244 2604007C */  addiu       $a0, $s0, 0x7C
/* E37978 801A8248 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E3797C 801A824C 3C0741A0 */  lui         $a3, (0x41A00000 >> 16)
/* E37980 801A8250 46003207 */  neg.s       $ft2, $ft1
/* E37984 801A8254 E7AA0010 */  swc1        $ft3, 0x10($sp)
/* E37988 801A8258 44054000 */  mfc1        $a1, $ft2
/* E3798C 801A825C 0C026F0B */  jal         Math_SmoothStepToF
/* E37990 801A8260 00000000 */   nop
/* E37994 801A8264 3C198017 */  lui         $t9, %hi(D_80177A80)
/* E37998 801A8268 8F397A80 */  lw          $t9, %lo(D_80177A80)($t9)
/* E3799C 801A826C 26040040 */  addiu       $a0, $s0, 0x40
/* E379A0 801A8270 24050000 */  addiu       $a1, $zero, 0x0
/* E379A4 801A8274 2B21026C */  slti        $at, $t9, 0x26C
/* E379A8 801A8278 14200020 */  bnez        $at, .LE16C50_801A82FC
/* E379AC 801A827C 3C063F80 */   lui        $a2, (0x3F800000 >> 16)
/* E379B0 801A8280 44808000 */  mtc1        $zero, $ft4
/* E379B4 801A8284 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E379B8 801A8288 0C026F0B */  jal         Math_SmoothStepToF
/* E379BC 801A828C E7B00010 */   swc1       $ft4, 0x10($sp)
/* E379C0 801A8290 3C014250 */  lui         $at, (0x42500000 >> 16)
/* E379C4 801A8294 44812000 */  mtc1        $at, $ft0
/* E379C8 801A8298 C6120078 */  lwc1        $ft5, 0x78($s0)
/* E379CC 801A829C 44804000 */  mtc1        $zero, $ft2
/* E379D0 801A82A0 26040044 */  addiu       $a0, $s0, 0x44
/* E379D4 801A82A4 46049180 */  add.s       $ft1, $ft5, $ft0
/* E379D8 801A82A8 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E379DC 801A82AC 3C074180 */  lui         $a3, (0x41800000 >> 16)
/* E379E0 801A82B0 E7A80010 */  swc1        $ft2, 0x10($sp)
/* E379E4 801A82B4 44053000 */  mfc1        $a1, $ft1
/* E379E8 801A82B8 0C026F0B */  jal         Math_SmoothStepToF
/* E379EC 801A82BC 00000000 */   nop
/* E379F0 801A82C0 3C018017 */  lui         $at, %hi(D_80177D20)
/* E379F4 801A82C4 C4307D20 */  lwc1        $ft4, %lo(D_80177D20)($at)
/* E379F8 801A82C8 C60A007C */  lwc1        $ft3, 0x7C($s0)
/* E379FC 801A82CC 3C014248 */  lui         $at, (0x42480000 >> 16)
/* E37A00 801A82D0 44812000 */  mtc1        $at, $ft0
/* E37A04 801A82D4 46105480 */  add.s       $ft5, $ft3, $ft4
/* E37A08 801A82D8 44804000 */  mtc1        $zero, $ft2
/* E37A0C 801A82DC 26040048 */  addiu       $a0, $s0, 0x48
/* E37A10 801A82E0 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E37A14 801A82E4 46049181 */  sub.s       $ft1, $ft5, $ft0
/* E37A18 801A82E8 3C0741AC */  lui         $a3, (0x41AC0000 >> 16)
/* E37A1C 801A82EC E7A80010 */  swc1        $ft2, 0x10($sp)
/* E37A20 801A82F0 44053000 */  mfc1        $a1, $ft1
/* E37A24 801A82F4 0C026F0B */  jal         Math_SmoothStepToF
/* E37A28 801A82F8 00000000 */   nop
.LE16C50_801A82FC:
/* E37A2C 801A82FC C60A0074 */  lwc1        $ft3, 0x74($s0)
/* E37A30 801A8300 3C018017 */  lui         $at, %hi(D_801779A0)
/* E37A34 801A8304 E42A79A0 */  swc1        $ft3, %lo(D_801779A0)($at)
/* E37A38 801A8308 C43079A0 */  lwc1        $ft4, %lo(D_801779A0)($at)
/* E37A3C 801A830C C6120078 */  lwc1        $ft5, 0x78($s0)
/* E37A40 801A8310 3C018017 */  lui         $at, %hi(D_801779B8)
/* E37A44 801A8314 E610004C */  swc1        $ft4, 0x4C($s0)
/* E37A48 801A8318 E43279B8 */  swc1        $ft5, %lo(D_801779B8)($at)
/* E37A4C 801A831C C42479B8 */  lwc1        $ft0, %lo(D_801779B8)($at)
/* E37A50 801A8320 3C018017 */  lui         $at, %hi(D_80177D20)
/* E37A54 801A8324 C606007C */  lwc1        $ft1, 0x7C($s0)
/* E37A58 801A8328 E6040050 */  swc1        $ft0, 0x50($s0)
/* E37A5C 801A832C C4287D20 */  lwc1        $ft2, %lo(D_80177D20)($at)
/* E37A60 801A8330 3C018017 */  lui         $at, %hi(D_801779C0)
/* E37A64 801A8334 46083280 */  add.s       $ft3, $ft1, $ft2
/* E37A68 801A8338 E42A79C0 */  swc1        $ft3, %lo(D_801779C0)($at)
/* E37A6C 801A833C C43079C0 */  lwc1        $ft4, %lo(D_801779C0)($at)
/* E37A70 801A8340 100000E4 */  b           .LE16C50_801A86D4
/* E37A74 801A8344 E6100054 */   swc1       $ft4, 0x54($s0)
.LE16C50_801A8348:
/* E37A78 801A8348 3C028017 */  lui         $v0, %hi(D_80177CE8)
/* E37A7C 801A834C 24427CE8 */  addiu       $v0, $v0, %lo(D_80177CE8)
/* E37A80 801A8350 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E37A84 801A8354 44812000 */  mtc1        $at, $ft0
/* E37A88 801A8358 C4520000 */  lwc1        $ft5, 0x0($v0)
/* E37A8C 801A835C 3C018018 */  lui         $at, %hi(D_80178358)
/* E37A90 801A8360 24080004 */  addiu       $t0, $zero, 0x4
/* E37A94 801A8364 46049180 */  add.s       $ft1, $ft5, $ft0
/* E37A98 801A8368 3C038017 */  lui         $v1, %hi(D_80177A48)
/* E37A9C 801A836C 24637A48 */  addiu       $v1, $v1, %lo(D_80177A48)
/* E37AA0 801A8370 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E37AA4 801A8374 E4460000 */  swc1        $ft1, 0x0($v0)
/* E37AA8 801A8378 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* E37AAC 801A837C 3C018018 */  lui         $at, %hi(D_8017835C)
/* E37AB0 801A8380 AC28835C */  sw          $t0, %lo(D_8017835C)($at)
/* E37AB4 801A8384 3C01801C */  lui         $at, %hi(D_E16C50_801C18C4)
/* E37AB8 801A8388 C42A18C4 */  lwc1        $ft3, %lo(D_E16C50_801C18C4)($at)
/* E37ABC 801A838C C4680008 */  lwc1        $ft2, 0x8($v1)
/* E37AC0 801A8390 C4720004 */  lwc1        $ft5, 0x4($v1)
/* E37AC4 801A8394 3C01801C */  lui         $at, %hi(D_E16C50_801C18C8)
/* E37AC8 801A8398 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E37ACC 801A839C 00003025 */  or          $a2, $zero, $zero
/* E37AD0 801A83A0 46109100 */  add.s       $ft0, $ft5, $ft4
/* E37AD4 801A83A4 E4640004 */  swc1        $ft0, 0x4($v1)
/* E37AD8 801A83A8 C42818C8 */  lwc1        $ft2, %lo(D_E16C50_801C18C8)($at)
/* E37ADC 801A83AC C4660004 */  lwc1        $ft1, 0x4($v1)
/* E37AE0 801A83B0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E37AE4 801A83B4 46083282 */  mul.s       $ft3, $ft1, $ft2
/* E37AE8 801A83B8 44055000 */  mfc1        $a1, $ft3
/* E37AEC 801A83BC 0C0017A4 */  jal         Matrix_RotateY
/* E37AF0 801A83C0 00000000 */   nop
/* E37AF4 801A83C4 44800000 */  mtc1        $zero, $fv0
/* E37AF8 801A83C8 3C01C42F */  lui         $at, (0xC42F0000 >> 16)
/* E37AFC 801A83CC 44819000 */  mtc1        $at, $ft5
/* E37B00 801A83D0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E37B04 801A83D4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E37B08 801A83D8 27A50060 */  addiu       $a1, $sp, 0x60
/* E37B0C 801A83DC 27A60054 */  addiu       $a2, $sp, 0x54
/* E37B10 801A83E0 E7A00060 */  swc1        $fv0, 0x60($sp)
/* E37B14 801A83E4 E7A00064 */  swc1        $fv0, 0x64($sp)
/* E37B18 801A83E8 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E37B1C 801A83EC E7B20068 */   swc1       $ft5, 0x68($sp)
/* E37B20 801A83F0 3C098017 */  lui         $t1, %hi(D_80177A80)
/* E37B24 801A83F4 8D297A80 */  lw          $t1, %lo(D_80177A80)($t1)
/* E37B28 801A83F8 C7B00054 */  lwc1        $ft4, 0x54($sp)
/* E37B2C 801A83FC 292105A0 */  slti        $at, $t1, 0x5A0
/* E37B30 801A8400 10200039 */  beqz        $at, .LE16C50_801A84E8
/* E37B34 801A8404 3C018017 */   lui        $at, %hi(D_80177978)
/* E37B38 801A8408 E4307978 */  swc1        $ft4, %lo(D_80177978)($at)
/* E37B3C 801A840C 3C01801C */  lui         $at, %hi(D_E16C50_801C2768 + 0xC)
/* E37B40 801A8410 C4242774 */  lwc1        $ft0, %lo(D_E16C50_801C2768 + 0xC)($at)
/* E37B44 801A8414 C7A60058 */  lwc1        $ft1, 0x58($sp)
/* E37B48 801A8418 3C018017 */  lui         $at, %hi(D_80177980)
/* E37B4C 801A841C 3C04801C */  lui         $a0, %hi(D_E16C50_801C2768 + 0xC)
/* E37B50 801A8420 46062200 */  add.s       $ft2, $ft0, $ft1
/* E37B54 801A8424 C7A4005C */  lwc1        $ft0, 0x5C($sp)
/* E37B58 801A8428 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E37B5C 801A842C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E37B60 801A8430 E4287980 */  swc1        $ft2, %lo(D_80177980)($at)
/* E37B64 801A8434 3C018017 */  lui         $at, %hi(D_80177D20)
/* E37B68 801A8438 C4327D20 */  lwc1        $ft5, %lo(D_80177D20)($at)
/* E37B6C 801A843C C60A007C */  lwc1        $ft3, 0x7C($s0)
/* E37B70 801A8440 44804000 */  mtc1        $zero, $ft2
/* E37B74 801A8444 3C018017 */  lui         $at, %hi(D_80177988)
/* E37B78 801A8448 46125400 */  add.s       $ft4, $ft3, $ft5
/* E37B7C 801A844C 24842774 */  addiu       $a0, $a0, %lo(D_E16C50_801C2768 + 0xC)
/* E37B80 801A8450 3C0543FA */  lui         $a1, (0x43FA0000 >> 16)
/* E37B84 801A8454 3C073F80 */  lui         $a3, (0x3F800000 >> 16)
/* E37B88 801A8458 46048180 */  add.s       $ft1, $ft4, $ft0
/* E37B8C 801A845C E4267988 */  swc1        $ft1, %lo(D_80177988)($at)
/* E37B90 801A8460 3C018017 */  lui         $at, %hi(D_801779A0)
/* E37B94 801A8464 E42879A0 */  swc1        $ft2, %lo(D_801779A0)($at)
/* E37B98 801A8468 3C014296 */  lui         $at, (0x42960000 >> 16)
/* E37B9C 801A846C 44819000 */  mtc1        $at, $ft5
/* E37BA0 801A8470 C60A0078 */  lwc1        $ft3, 0x78($s0)
/* E37BA4 801A8474 3C018017 */  lui         $at, %hi(D_801779B8)
/* E37BA8 801A8478 46125400 */  add.s       $ft4, $ft3, $ft5
/* E37BAC 801A847C E43079B8 */  swc1        $ft4, %lo(D_801779B8)($at)
/* E37BB0 801A8480 3C01801C */  lui         $at, %hi(D_E16C50_801C18CC)
/* E37BB4 801A8484 C42418CC */  lwc1        $ft0, %lo(D_E16C50_801C18CC)($at)
/* E37BB8 801A8488 0C026F0B */  jal         Math_SmoothStepToF
/* E37BBC 801A848C E7A40010 */   swc1       $ft0, 0x10($sp)
/* E37BC0 801A8490 3C018017 */  lui         $at, %hi(D_80177D20)
/* E37BC4 801A8494 C4287D20 */  lwc1        $ft2, %lo(D_80177D20)($at)
/* E37BC8 801A8498 C606007C */  lwc1        $ft1, 0x7C($s0)
/* E37BCC 801A849C 3C014348 */  lui         $at, (0x43480000 >> 16)
/* E37BD0 801A84A0 44819000 */  mtc1        $at, $ft5
/* E37BD4 801A84A4 46083280 */  add.s       $ft3, $ft1, $ft2
/* E37BD8 801A84A8 3C028017 */  lui         $v0, %hi(D_801779C0)
/* E37BDC 801A84AC 244279C0 */  addiu       $v0, $v0, %lo(D_801779C0)
/* E37BE0 801A84B0 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37BE4 801A84B4 46125400 */  add.s       $ft4, $ft3, $ft5
/* E37BE8 801A84B8 E4500000 */  swc1        $ft4, 0x0($v0)
/* E37BEC 801A84BC 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E37BF0 801A84C0 28610578 */  slti        $at, $v1, 0x578
/* E37BF4 801A84C4 1420002B */  bnez        $at, .LE16C50_801A8574
/* E37BF8 801A84C8 000350C0 */   sll        $t2, $v1, 3
/* E37BFC 801A84CC 254BD440 */  addiu       $t3, $t2, -0x2BC0
/* E37C00 801A84D0 448B3000 */  mtc1        $t3, $ft1
/* E37C04 801A84D4 C4440000 */  lwc1        $ft0, 0x0($v0)
/* E37C08 801A84D8 46803220 */  cvt.s.w     $ft2, $ft1
/* E37C0C 801A84DC 46082281 */  sub.s       $ft3, $ft0, $ft2
/* E37C10 801A84E0 10000024 */  b           .LE16C50_801A8574
/* E37C14 801A84E4 E44A0000 */   swc1       $ft3, 0x0($v0)
.LE16C50_801A84E8:
/* E37C18 801A84E8 3C01801C */  lui         $at, %hi(D_E16C50_801C18D0)
/* E37C1C 801A84EC C43218D0 */  lwc1        $ft5, %lo(D_E16C50_801C18D0)($at)
/* E37C20 801A84F0 3C048017 */  lui         $a0, %hi(D_80177978)
/* E37C24 801A84F4 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E37C28 801A84F8 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E37C2C 801A84FC 24847978 */  addiu       $a0, $a0, %lo(D_80177978)
/* E37C30 801A8500 24050000 */  addiu       $a1, $zero, 0x0
/* E37C34 801A8504 3C073F80 */  lui         $a3, (0x3F800000 >> 16)
/* E37C38 801A8508 0C026F0B */  jal         Math_SmoothStepToF
/* E37C3C 801A850C E7B20010 */   swc1       $ft5, 0x10($sp)
/* E37C40 801A8510 44808000 */  mtc1        $zero, $ft4
/* E37C44 801A8514 3C018017 */  lui         $at, %hi(D_801779A0)
/* E37C48 801A8518 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37C4C 801A851C E43079A0 */  swc1        $ft4, %lo(D_801779A0)($at)
/* E37C50 801A8520 3C014296 */  lui         $at, (0x42960000 >> 16)
/* E37C54 801A8524 44812000 */  mtc1        $at, $ft0
/* E37C58 801A8528 C6060078 */  lwc1        $ft1, 0x78($s0)
/* E37C5C 801A852C 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E37C60 801A8530 3C018017 */  lui         $at, %hi(D_801779B8)
/* E37C64 801A8534 46043200 */  add.s       $ft2, $ft1, $ft0
/* E37C68 801A8538 000360C0 */  sll         $t4, $v1, 3
/* E37C6C 801A853C 258DD440 */  addiu       $t5, $t4, -0x2BC0
/* E37C70 801A8540 E42879B8 */  swc1        $ft2, %lo(D_801779B8)($at)
/* E37C74 801A8544 3C018017 */  lui         $at, %hi(D_80177D20)
/* E37C78 801A8548 C4327D20 */  lwc1        $ft5, %lo(D_80177D20)($at)
/* E37C7C 801A854C C60A007C */  lwc1        $ft3, 0x7C($s0)
/* E37C80 801A8550 448D4000 */  mtc1        $t5, $ft2
/* E37C84 801A8554 3C014348 */  lui         $at, (0x43480000 >> 16)
/* E37C88 801A8558 46125400 */  add.s       $ft4, $ft3, $ft5
/* E37C8C 801A855C 44813000 */  mtc1        $at, $ft1
/* E37C90 801A8560 3C018017 */  lui         $at, %hi(D_801779C0)
/* E37C94 801A8564 468042A0 */  cvt.s.w     $ft3, $ft2
/* E37C98 801A8568 46068100 */  add.s       $ft0, $ft4, $ft1
/* E37C9C 801A856C 460A2481 */  sub.s       $ft5, $ft0, $ft3
/* E37CA0 801A8570 E43279C0 */  swc1        $ft5, %lo(D_801779C0)($at)
.LE16C50_801A8574:
/* E37CA4 801A8574 286105B5 */  slti        $at, $v1, 0x5B5
/* E37CA8 801A8578 14200018 */  bnez        $at, .LE16C50_801A85DC
/* E37CAC 801A857C 3C048017 */   lui        $a0, %hi(D_80177A48 + 0x8)
/* E37CB0 801A8580 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E37CB4 801A8584 44813000 */  mtc1        $at, $ft1
/* E37CB8 801A8588 C61000D0 */  lwc1        $ft4, 0xD0($s0)
/* E37CBC 801A858C 3C01801C */  lui         $at, %hi(D_E16C50_801C18D4)
/* E37CC0 801A8590 C60400E4 */  lwc1        $ft0, 0xE4($s0)
/* E37CC4 801A8594 46068200 */  add.s       $ft2, $ft4, $ft1
/* E37CC8 801A8598 44808000 */  mtc1        $zero, $ft4
/* E37CCC 801A859C 3C048017 */  lui         $a0, %hi(D_80177A48 + 0x8)
/* E37CD0 801A85A0 3C073A83 */  lui         $a3, (0x3A83126F >> 16)
/* E37CD4 801A85A4 E60800D0 */  swc1        $ft2, 0xD0($s0)
/* E37CD8 801A85A8 C42A18D4 */  lwc1        $ft3, %lo(D_E16C50_801C18D4)($at)
/* E37CDC 801A85AC 34E7126F */  ori         $a3, $a3, (0x3A83126F & 0xFFFF)
/* E37CE0 801A85B0 24847A50 */  addiu       $a0, $a0, %lo(D_80177A48 + 0x8)
/* E37CE4 801A85B4 460A2480 */  add.s       $ft5, $ft0, $ft3
/* E37CE8 801A85B8 24050000 */  addiu       $a1, $zero, 0x0
/* E37CEC 801A85BC 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E37CF0 801A85C0 E61200E4 */  swc1        $ft5, 0xE4($s0)
/* E37CF4 801A85C4 0C026F0B */  jal         Math_SmoothStepToF
/* E37CF8 801A85C8 E7B00010 */   swc1       $ft4, 0x10($sp)
/* E37CFC 801A85CC 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E37D00 801A85D0 44813000 */  mtc1        $at, $ft1
/* E37D04 801A85D4 10000014 */  b           .LE16C50_801A8628
/* E37D08 801A85D8 E6060190 */   swc1       $ft1, 0x190($s0)
.LE16C50_801A85DC:
/* E37D0C 801A85DC 44804000 */  mtc1        $zero, $ft2
/* E37D10 801A85E0 3C053E6B */  lui         $a1, (0x3E6B851F >> 16)
/* E37D14 801A85E4 3C073A83 */  lui         $a3, (0x3A83126F >> 16)
/* E37D18 801A85E8 34E7126F */  ori         $a3, $a3, (0x3A83126F & 0xFFFF)
/* E37D1C 801A85EC 34A5851F */  ori         $a1, $a1, (0x3E6B851F & 0xFFFF)
/* E37D20 801A85F0 24847A50 */  addiu       $a0, $a0, %lo(D_80177A48 + 0x8)
/* E37D24 801A85F4 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E37D28 801A85F8 0C026F0B */  jal         Math_SmoothStepToF
/* E37D2C 801A85FC E7A80010 */   swc1       $ft2, 0x10($sp)
/* E37D30 801A8600 44802000 */  mtc1        $zero, $ft0
/* E37D34 801A8604 3C048017 */  lui         $a0, %hi(D_80177A48)
/* E37D38 801A8608 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E37D3C 801A860C 3C073A03 */  lui         $a3, (0x3A03126F >> 16)
/* E37D40 801A8610 34E7126F */  ori         $a3, $a3, (0x3A03126F & 0xFFFF)
/* E37D44 801A8614 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E37D48 801A8618 24847A48 */  addiu       $a0, $a0, %lo(D_80177A48)
/* E37D4C 801A861C 3C053F00 */  lui         $a1, (0x3F000000 >> 16)
/* E37D50 801A8620 0C026F0B */  jal         Math_SmoothStepToF
/* E37D54 801A8624 E7A40010 */   swc1       $ft0, 0x10($sp)
.LE16C50_801A8628:
/* E37D58 801A8628 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37D5C 801A862C 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E37D60 801A8630 24010618 */  addiu       $at, $zero, 0x618
/* E37D64 801A8634 54610006 */  bnel        $v1, $at, .LE16C50_801A8650
/* E37D68 801A8638 286105FB */   slti       $at, $v1, 0x5FB
/* E37D6C 801A863C 0C029852 */  jal         func_800A6148
/* E37D70 801A8640 00000000 */   nop
/* E37D74 801A8644 3C038017 */  lui         $v1, %hi(D_80177A80)
/* E37D78 801A8648 8C637A80 */  lw          $v1, %lo(D_80177A80)($v1)
/* E37D7C 801A864C 286105FB */  slti        $at, $v1, 0x5FB
.LE16C50_801A8650:
/* E37D80 801A8650 14200020 */  bnez        $at, .LE16C50_801A86D4
/* E37D84 801A8654 240200FF */   addiu      $v0, $zero, 0xFF
/* E37D88 801A8658 3C018018 */  lui         $at, %hi(D_80178358)
/* E37D8C 801A865C 3C048018 */  lui         $a0, %hi(D_80178354)
/* E37D90 801A8660 3C058018 */  lui         $a1, %hi(D_80178350)
/* E37D94 801A8664 AC228358 */  sw          $v0, %lo(D_80178358)($at)
/* E37D98 801A8668 24A58350 */  addiu       $a1, $a1, %lo(D_80178350)
/* E37D9C 801A866C 24848354 */  addiu       $a0, $a0, %lo(D_80178354)
/* E37DA0 801A8670 AC800000 */  sw          $zero, 0x0($a0)
/* E37DA4 801A8674 ACA00000 */  sw          $zero, 0x0($a1)
/* E37DA8 801A8678 3C198018 */  lui         $t9, %hi(D_80178340)
/* E37DAC 801A867C 8F398340 */  lw          $t9, %lo(D_80178340)($t9)
/* E37DB0 801A8680 3C018018 */  lui         $at, %hi(D_80178348)
/* E37DB4 801A8684 AC208348 */  sw          $zero, %lo(D_80178348)($at)
/* E37DB8 801A8688 3C018018 */  lui         $at, %hi(D_8017835C)
/* E37DBC 801A868C 24180008 */  addiu       $t8, $zero, 0x8
/* E37DC0 801A8690 14590010 */  bne         $v0, $t9, .LE16C50_801A86D4
/* E37DC4 801A8694 AC38835C */   sw         $t8, %lo(D_8017835C)($at)
/* E37DC8 801A8698 0C007289 */  jal         func_8001CA24
/* E37DCC 801A869C 00002025 */   or         $a0, $zero, $zero
/* E37DD0 801A86A0 0C0076F4 */  jal         func_8001DBD0
/* E37DD4 801A86A4 2404000A */   addiu      $a0, $zero, 0xA
/* E37DD8 801A86A8 24080006 */  addiu       $t0, $zero, 0x6
/* E37DDC 801A86AC AE0801C8 */  sw          $t0, 0x1C8($s0)
/* E37DE0 801A86B0 AE0001F8 */  sw          $zero, 0x1F8($s0)
/* E37DE4 801A86B4 24090004 */  addiu       $t1, $zero, 0x4
/* E37DE8 801A86B8 3C018018 */  lui         $at, %hi(D_8017837C)
/* E37DEC 801A86BC AC29837C */  sw          $t1, %lo(D_8017837C)($at)
/* E37DF0 801A86C0 0C028FD4 */  jal         Play_CheckMedalStatus
/* E37DF4 801A86C4 24040064 */   addiu      $a0, $zero, 0x64
/* E37DF8 801A86C8 244A0001 */  addiu       $t2, $v0, 0x1
/* E37DFC 801A86CC 3C01800D */  lui         $at, %hi(D_800D3180 + 0x7)
/* E37E00 801A86D0 A02A3187 */  sb          $t2, %lo(D_800D3180 + 0x7)($at)
.LE16C50_801A86D4:
/* E37E04 801A86D4 3C028017 */  lui         $v0, %hi(D_80177A80)
/* E37E08 801A86D8 8C427A80 */  lw          $v0, %lo(D_80177A80)($v0)
/* E37E0C 801A86DC 260B0040 */  addiu       $t3, $s0, 0x40
/* E37E10 801A86E0 260C0044 */  addiu       $t4, $s0, 0x44
/* E37E14 801A86E4 260D0048 */  addiu       $t5, $s0, 0x48
/* E37E18 801A86E8 2841036C */  slti        $at, $v0, 0x36C
/* E37E1C 801A86EC AFAD002C */  sw          $t5, 0x2C($sp)
/* E37E20 801A86F0 AFAC0030 */  sw          $t4, 0x30($sp)
/* E37E24 801A86F4 1420001A */  bnez        $at, .LE16C50_801A8760
/* E37E28 801A86F8 AFAB0034 */   sw         $t3, 0x34($sp)
/* E37E2C 801A86FC 284104A3 */  slti        $at, $v0, 0x4A3
/* E37E30 801A8700 14200010 */  bnez        $at, .LE16C50_801A8744
/* E37E34 801A8704 284105B5 */   slti       $at, $v0, 0x5B5
/* E37E38 801A8708 14200006 */  bnez        $at, .LE16C50_801A8724
/* E37E3C 801A870C 244EFA96 */   addiu      $t6, $v0, -0x56A
/* E37E40 801A8710 240105DC */  addiu       $at, $zero, 0x5DC
/* E37E44 801A8714 10410085 */  beq         $v0, $at, .LE16C50_801A892C
/* E37E48 801A8718 3C041032 */   lui        $a0, (0x103200FF >> 16)
/* E37E4C 801A871C 1000009A */  b           .LE16C50_801A8988
/* E37E50 801A8720 C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A8724:
/* E37E54 801A8724 2DC1004B */  sltiu       $at, $t6, 0x4B
/* E37E58 801A8728 10200096 */  beqz        $at, .LE16C50_801A8984
/* E37E5C 801A872C 000E7080 */   sll        $t6, $t6, 2
/* E37E60 801A8730 3C01801C */  lui         $at, %hi(jtbl_E16C50_801C18D8)
/* E37E64 801A8734 002E0821 */  addu        $at, $at, $t6
/* E37E68 801A8738 8C2E18D8 */  lw          $t6, %lo(jtbl_E16C50_801C18D8)($at)
/* E37E6C 801A873C 01C00008 */  jr          $t6
/* E37E70 801A8740 00000000 */   nop
.LE16C50_801A8744:
/* E37E74 801A8744 240103FD */  addiu       $at, $zero, 0x3FD
/* E37E78 801A8748 10410044 */  beq         $v0, $at, .LE16C50_801A885C
/* E37E7C 801A874C 240104A2 */   addiu      $at, $zero, 0x4A2
/* E37E80 801A8750 10410057 */  beq         $v0, $at, .LE16C50_801A88B0
/* E37E84 801A8754 24180001 */   addiu      $t8, $zero, 0x1
/* E37E88 801A8758 1000008B */  b           .LE16C50_801A8988
/* E37E8C 801A875C C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A8760:
/* E37E90 801A8760 240101B8 */  addiu       $at, $zero, 0x1B8
/* E37E94 801A8764 1041000B */  beq         $v0, $at, .LE16C50_801A8794
/* E37E98 801A8768 240F0064 */   addiu      $t7, $zero, 0x64
/* E37E9C 801A876C 24010280 */  addiu       $at, $zero, 0x280
/* E37EA0 801A8770 1041000B */  beq         $v0, $at, .LE16C50_801A87A0
/* E37EA4 801A8774 3C048018 */   lui        $a0, %hi(gMsg_ID_20010)
/* E37EA8 801A8778 240102D8 */  addiu       $at, $zero, 0x2D8
/* E37EAC 801A877C 1041000D */  beq         $v0, $at, .LE16C50_801A87B4
/* E37EB0 801A8780 2401036B */   addiu      $at, $zero, 0x36B
/* E37EB4 801A8784 10410020 */  beq         $v0, $at, .LE16C50_801A8808
/* E37EB8 801A8788 00000000 */   nop
/* E37EBC 801A878C 1000007E */  b           .LE16C50_801A8988
/* E37EC0 801A8790 C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A8794:
/* E37EC4 801A8794 3C018017 */  lui         $at, %hi(D_80177840)
/* E37EC8 801A8798 1000007A */  b           .LE16C50_801A8984
/* E37ECC 801A879C AC2F7840 */   sw         $t7, %lo(D_80177840)($at)
.LE16C50_801A87A0:
/* E37ED0 801A87A0 248433C0 */  addiu       $a0, $a0, %lo(gMsg_ID_20010)
/* E37ED4 801A87A4 0C02EA02 */  jal         func_800BA808
/* E37ED8 801A87A8 00002825 */   or         $a1, $zero, $zero
/* E37EDC 801A87AC 10000076 */  b           .LE16C50_801A8988
/* E37EE0 801A87B0 C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A87B4:
/* E37EE4 801A87B4 3C028017 */  lui         $v0, %hi(gTeamShields + 0x8)
/* E37EE8 801A87B8 8C4278B8 */  lw          $v0, %lo(gTeamShields + 0x8)($v0)
/* E37EEC 801A87BC 2401FFFF */  addiu       $at, $zero, -0x1
/* E37EF0 801A87C0 3C048018 */  lui         $a0, %hi(gMsg_ID_20339)
/* E37EF4 801A87C4 10410008 */  beq         $v0, $at, .LE16C50_801A87E8
/* E37EF8 801A87C8 24844B2C */   addiu      $a0, $a0, %lo(gMsg_ID_20339)
/* E37EFC 801A87CC 1440000A */  bnez        $v0, .LE16C50_801A87F8
/* E37F00 801A87D0 3C048018 */   lui        $a0, %hi(gMsg_ID_20345)
/* E37F04 801A87D4 24844C68 */  addiu       $a0, $a0, %lo(gMsg_ID_20345)
/* E37F08 801A87D8 0C02EA02 */  jal         func_800BA808
/* E37F0C 801A87DC 2405005A */   addiu      $a1, $zero, 0x5A
/* E37F10 801A87E0 10000069 */  b           .LE16C50_801A8988
/* E37F14 801A87E4 C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A87E8:
/* E37F18 801A87E8 0C02EA02 */  jal         func_800BA808
/* E37F1C 801A87EC 2405005A */   addiu      $a1, $zero, 0x5A
/* E37F20 801A87F0 10000065 */  b           .LE16C50_801A8988
/* E37F24 801A87F4 C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A87F8:
/* E37F28 801A87F8 0C0122B0 */  jal         func_80048AC0
/* E37F2C 801A87FC 24040002 */   addiu      $a0, $zero, 0x2
/* E37F30 801A8800 10000061 */  b           .LE16C50_801A8988
/* E37F34 801A8804 C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A8808:
/* E37F38 801A8808 3C028017 */  lui         $v0, %hi(gTeamShields + 0xC)
/* E37F3C 801A880C 8C4278BC */  lw          $v0, %lo(gTeamShields + 0xC)($v0)
/* E37F40 801A8810 2401FFFF */  addiu       $at, $zero, -0x1
/* E37F44 801A8814 3C048018 */  lui         $a0, %hi(gMsg_ID_20338)
/* E37F48 801A8818 10410008 */  beq         $v0, $at, .LE16C50_801A883C
/* E37F4C 801A881C 24844AE0 */   addiu      $a0, $a0, %lo(gMsg_ID_20338)
/* E37F50 801A8820 1440000A */  bnez        $v0, .LE16C50_801A884C
/* E37F54 801A8824 3C048018 */   lui        $a0, %hi(gMsg_ID_20344)
/* E37F58 801A8828 24844C1C */  addiu       $a0, $a0, %lo(gMsg_ID_20344)
/* E37F5C 801A882C 0C02EA02 */  jal         func_800BA808
/* E37F60 801A8830 2405005A */   addiu      $a1, $zero, 0x5A
/* E37F64 801A8834 10000054 */  b           .LE16C50_801A8988
/* E37F68 801A8838 C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A883C:
/* E37F6C 801A883C 0C02EA02 */  jal         func_800BA808
/* E37F70 801A8840 2405005A */   addiu      $a1, $zero, 0x5A
/* E37F74 801A8844 10000050 */  b           .LE16C50_801A8988
/* E37F78 801A8848 C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A884C:
/* E37F7C 801A884C 0C0122B0 */  jal         func_80048AC0
/* E37F80 801A8850 24040003 */   addiu      $a0, $zero, 0x3
/* E37F84 801A8854 1000004C */  b           .LE16C50_801A8988
/* E37F88 801A8858 C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A885C:
/* E37F8C 801A885C 3C028017 */  lui         $v0, %hi(gTeamShields + 0x4)
/* E37F90 801A8860 8C4278B4 */  lw          $v0, %lo(gTeamShields + 0x4)($v0)
/* E37F94 801A8864 2401FFFF */  addiu       $at, $zero, -0x1
/* E37F98 801A8868 3C048018 */  lui         $a0, %hi(gMsg_ID_20337)
/* E37F9C 801A886C 10410008 */  beq         $v0, $at, .LE16C50_801A8890
/* E37FA0 801A8870 24844A94 */   addiu      $a0, $a0, %lo(gMsg_ID_20337)
/* E37FA4 801A8874 1440000A */  bnez        $v0, .LE16C50_801A88A0
/* E37FA8 801A8878 3C048018 */   lui        $a0, %hi(gMsg_ID_20343)
/* E37FAC 801A887C 24844BD0 */  addiu       $a0, $a0, %lo(gMsg_ID_20343)
/* E37FB0 801A8880 0C02EA02 */  jal         func_800BA808
/* E37FB4 801A8884 2405005A */   addiu      $a1, $zero, 0x5A
/* E37FB8 801A8888 1000003F */  b           .LE16C50_801A8988
/* E37FBC 801A888C C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A8890:
/* E37FC0 801A8890 0C02EA02 */  jal         func_800BA808
/* E37FC4 801A8894 2405005A */   addiu      $a1, $zero, 0x5A
/* E37FC8 801A8898 1000003B */  b           .LE16C50_801A8988
/* E37FCC 801A889C C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A88A0:
/* E37FD0 801A88A0 0C0122B0 */  jal         func_80048AC0
/* E37FD4 801A88A4 24040001 */   addiu      $a0, $zero, 0x1
/* E37FD8 801A88A8 10000037 */  b           .LE16C50_801A8988
/* E37FDC 801A88AC C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A88B0:
/* E37FE0 801A88B0 3C018017 */  lui         $at, %hi(D_80177830)
/* E37FE4 801A88B4 10000033 */  b           .LE16C50_801A8984
/* E37FE8 801A88B8 A0387830 */   sb         $t8, %lo(D_80177830)($at)
.LE16C50_801A88BC:
/* E37FEC 801A88BC 3C018017 */  lui         $at, %hi(D_80177830)
/* E37FF0 801A88C0 10000030 */  b           .LE16C50_801A8984
/* E37FF4 801A88C4 A0207830 */   sb         $zero, %lo(D_80177830)($at)
.LE16C50_801A88C8:
/* E37FF8 801A88C8 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E37FFC 801A88CC 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E38000 801A88D0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E38004 801A88D4 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E38008 801A88D8 3C040900 */  lui         $a0, (0x9000002 >> 16)
/* E3800C 801A88DC 34840002 */  ori         $a0, $a0, (0x9000002 & 0xFFFF)
/* E38010 801A88E0 AFB90014 */  sw          $t9, 0x14($sp)
/* E38014 801A88E4 AFA70010 */  sw          $a3, 0x10($sp)
/* E38018 801A88E8 26050460 */  addiu       $a1, $s0, 0x460
/* E3801C 801A88EC 0C006486 */  jal         Audio_PlaySfx
/* E38020 801A88F0 00003025 */   or         $a2, $zero, $zero
/* E38024 801A88F4 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E38028 801A88F8 44810000 */  mtc1        $at, $fv0
/* E3802C 801A88FC 00000000 */  nop
/* E38030 801A8900 E6000194 */  swc1        $fv0, 0x194($s0)
/* E38034 801A8904 1000001F */  b           .LE16C50_801A8984
/* E38038 801A8908 E6000190 */   swc1       $fv0, 0x190($s0)
.LE16C50_801A890C:
/* E3803C 801A890C 3C088017 */  lui         $t0, %hi(gTeamShields + 0xC)
/* E38040 801A8910 8D0878BC */  lw          $t0, %lo(gTeamShields + 0xC)($t0)
/* E38044 801A8914 24090002 */  addiu       $t1, $zero, 0x2
/* E38048 801A8918 3C018016 */  lui         $at, %hi(gObjects2F4 + 0xB8)
/* E3804C 801A891C 5900001A */  blezl       $t0, .LE16C50_801A8988
/* E38050 801A8920 C60A0114 */   lwc1       $ft3, 0x114($s0)
/* E38054 801A8924 10000017 */  b           .LE16C50_801A8984
/* E38058 801A8928 A4294098 */   sh         $t1, %lo(gObjects2F4 + 0xB8)($at)
.LE16C50_801A892C:
/* E3805C 801A892C 0C0060BD */  jal         func_800182F4
/* E38060 801A8930 348400FF */   ori        $a0, $a0, (0x103200FF & 0xFFFF)
/* E38064 801A8934 3C041132 */  lui         $a0, (0x113200FF >> 16)
/* E38068 801A8938 0C0060BD */  jal         func_800182F4
/* E3806C 801A893C 348400FF */   ori        $a0, $a0, (0x113200FF & 0xFFFF)
/* E38070 801A8940 10000011 */  b           .LE16C50_801A8988
/* E38074 801A8944 C60A0114 */   lwc1       $ft3, 0x114($s0)
.LE16C50_801A8948:
/* E38078 801A8948 3C0A8017 */  lui         $t2, %hi(gTeamShields + 0x8)
/* E3807C 801A894C 8D4A78B8 */  lw          $t2, %lo(gTeamShields + 0x8)($t2)
/* E38080 801A8950 240B0002 */  addiu       $t3, $zero, 0x2
/* E38084 801A8954 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x3AC)
/* E38088 801A8958 5940000B */  blezl       $t2, .LE16C50_801A8988
/* E3808C 801A895C C60A0114 */   lwc1       $ft3, 0x114($s0)
/* E38090 801A8960 10000008 */  b           .LE16C50_801A8984
/* E38094 801A8964 A42B438C */   sh         $t3, %lo(gObjects2F4 + 0x3AC)($at)
.LE16C50_801A8968:
/* E38098 801A8968 3C0C8017 */  lui         $t4, %hi(gTeamShields + 0x4)
/* E3809C 801A896C 8D8C78B4 */  lw          $t4, %lo(gTeamShields + 0x4)($t4)
/* E380A0 801A8970 240D0002 */  addiu       $t5, $zero, 0x2
/* E380A4 801A8974 3C018016 */  lui         $at, %hi(gObjects2F4 + 0x6A0)
/* E380A8 801A8978 59800003 */  blezl       $t4, .LE16C50_801A8988
/* E380AC 801A897C C60A0114 */   lwc1       $ft3, 0x114($s0)
/* E380B0 801A8980 A42D4680 */  sh          $t5, %lo(gObjects2F4 + 0x6A0)($at)
.LE16C50_801A8984:
/* E380B4 801A8984 C60A0114 */  lwc1        $ft3, 0x114($s0)
.LE16C50_801A8988:
/* E380B8 801A8988 C61200E8 */  lwc1        $ft5, 0xE8($s0)
/* E380BC 801A898C 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E380C0 801A8990 44813000 */  mtc1        $at, $ft1
/* E380C4 801A8994 46125400 */  add.s       $ft4, $ft3, $ft5
/* E380C8 801A8998 3C01801C */  lui         $at, %hi(D_E16C50_801C1A04)
/* E380CC 801A899C C4241A04 */  lwc1        $ft0, %lo(D_E16C50_801C1A04)($at)
/* E380D0 801A89A0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E380D4 801A89A4 46068200 */  add.s       $ft2, $ft4, $ft1
/* E380D8 801A89A8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E380DC 801A89AC 00003025 */  or          $a2, $zero, $zero
/* E380E0 801A89B0 46044282 */  mul.s       $ft3, $ft2, $ft0
/* E380E4 801A89B4 44055000 */  mfc1        $a1, $ft3
/* E380E8 801A89B8 0C0017A4 */  jal         Matrix_RotateY
/* E380EC 801A89BC 00000000 */   nop
/* E380F0 801A89C0 C6120120 */  lwc1        $ft5, 0x120($s0)
/* E380F4 801A89C4 C61000E4 */  lwc1        $ft4, 0xE4($s0)
/* E380F8 801A89C8 3C01801C */  lui         $at, %hi(D_E16C50_801C1A08)
/* E380FC 801A89CC C4281A08 */  lwc1        $ft2, %lo(D_E16C50_801C1A08)($at)
/* E38100 801A89D0 46109180 */  add.s       $ft1, $ft5, $ft4
/* E38104 801A89D4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E38108 801A89D8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E3810C 801A89DC 24060001 */  addiu       $a2, $zero, 0x1
/* E38110 801A89E0 46083102 */  mul.s       $ft0, $ft1, $ft2
/* E38114 801A89E4 46002287 */  neg.s       $ft3, $ft0
/* E38118 801A89E8 44055000 */  mfc1        $a1, $ft3
/* E3811C 801A89EC 0C001751 */  jal         Matrix_RotateX
/* E38120 801A89F0 00000000 */   nop
/* E38124 801A89F4 44800000 */  mtc1        $zero, $fv0
/* E38128 801A89F8 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E3812C 801A89FC 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E38130 801A8A00 E7A00060 */  swc1        $fv0, 0x60($sp)
/* E38134 801A8A04 E7A00064 */  swc1        $fv0, 0x64($sp)
/* E38138 801A8A08 C61200D0 */  lwc1        $ft5, 0xD0($s0)
/* E3813C 801A8A0C 27A50060 */  addiu       $a1, $sp, 0x60
/* E38140 801A8A10 27A60054 */  addiu       $a2, $sp, 0x54
/* E38144 801A8A14 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E38148 801A8A18 E7B20068 */   swc1       $ft5, 0x68($sp)
/* E3814C 801A8A1C C7B00054 */  lwc1        $ft4, 0x54($sp)
/* E38150 801A8A20 C6040074 */  lwc1        $ft0, 0x74($s0)
/* E38154 801A8A24 3C058017 */  lui         $a1, %hi(D_80177978)
/* E38158 801A8A28 E61000C0 */  swc1        $ft4, 0xC0($s0)
/* E3815C 801A8A2C C7A6005C */  lwc1        $ft1, 0x5C($sp)
/* E38160 801A8A30 C60A00C0 */  lwc1        $ft3, 0xC0($s0)
/* E38164 801A8A34 C6100078 */  lwc1        $ft4, 0x78($s0)
/* E38168 801A8A38 E60600C8 */  swc1        $ft1, 0xC8($s0)
/* E3816C 801A8A3C 460A2480 */  add.s       $ft5, $ft0, $ft3
/* E38170 801A8A40 C7A80058 */  lwc1        $ft2, 0x58($sp)
/* E38174 801A8A44 C60A00C8 */  lwc1        $ft3, 0xC8($s0)
/* E38178 801A8A48 C604007C */  lwc1        $ft0, 0x7C($s0)
/* E3817C 801A8A4C E60800C4 */  swc1        $ft2, 0xC4($s0)
/* E38180 801A8A50 C60600C4 */  lwc1        $ft1, 0xC4($s0)
/* E38184 801A8A54 E6120074 */  swc1        $ft5, 0x74($s0)
/* E38188 801A8A58 460A2480 */  add.s       $ft5, $ft0, $ft3
/* E3818C 801A8A5C 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E38190 801A8A60 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E38194 801A8A64 46068200 */  add.s       $ft2, $ft4, $ft1
/* E38198 801A8A68 E612007C */  swc1        $ft5, 0x7C($s0)
/* E3819C 801A8A6C C610007C */  lwc1        $ft4, 0x7C($s0)
/* E381A0 801A8A70 C60600EC */  lwc1        $ft1, 0xEC($s0)
/* E381A4 801A8A74 E6080078 */  swc1        $ft2, 0x78($s0)
/* E381A8 801A8A78 E6100138 */  swc1        $ft4, 0x138($s0)
/* E381AC 801A8A7C E60600F8 */  swc1        $ft1, 0xF8($s0)
/* E381B0 801A8A80 44804000 */  mtc1        $zero, $ft2
/* E381B4 801A8A84 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E381B8 801A8A88 8CA57978 */  lw          $a1, %lo(D_80177978)($a1)
/* E381BC 801A8A8C 8FA40034 */  lw          $a0, 0x34($sp)
/* E381C0 801A8A90 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E381C4 801A8A94 0C026F0B */  jal         Math_SmoothStepToF
/* E381C8 801A8A98 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E381CC 801A8A9C 44802000 */  mtc1        $zero, $ft0
/* E381D0 801A8AA0 3C058017 */  lui         $a1, %hi(D_80177980)
/* E381D4 801A8AA4 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E381D8 801A8AA8 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E381DC 801A8AAC 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E381E0 801A8AB0 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E381E4 801A8AB4 8CA57980 */  lw          $a1, %lo(D_80177980)($a1)
/* E381E8 801A8AB8 8FA40030 */  lw          $a0, 0x30($sp)
/* E381EC 801A8ABC 0C026F0B */  jal         Math_SmoothStepToF
/* E381F0 801A8AC0 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E381F4 801A8AC4 44805000 */  mtc1        $zero, $ft3
/* E381F8 801A8AC8 3C058017 */  lui         $a1, %hi(D_80177988)
/* E381FC 801A8ACC 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E38200 801A8AD0 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E38204 801A8AD4 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E38208 801A8AD8 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E3820C 801A8ADC 8CA57988 */  lw          $a1, %lo(D_80177988)($a1)
/* E38210 801A8AE0 8FA4002C */  lw          $a0, 0x2C($sp)
/* E38214 801A8AE4 0C026F0B */  jal         Math_SmoothStepToF
/* E38218 801A8AE8 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E3821C 801A8AEC 44809000 */  mtc1        $zero, $ft5
/* E38220 801A8AF0 3C058017 */  lui         $a1, %hi(D_801779A0)
/* E38224 801A8AF4 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E38228 801A8AF8 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E3822C 801A8AFC 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E38230 801A8B00 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E38234 801A8B04 8CA579A0 */  lw          $a1, %lo(D_801779A0)($a1)
/* E38238 801A8B08 2604004C */  addiu       $a0, $s0, 0x4C
/* E3823C 801A8B0C 0C026F0B */  jal         Math_SmoothStepToF
/* E38240 801A8B10 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E38244 801A8B14 44808000 */  mtc1        $zero, $ft4
/* E38248 801A8B18 3C058017 */  lui         $a1, %hi(D_801779B8)
/* E3824C 801A8B1C 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E38250 801A8B20 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E38254 801A8B24 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E38258 801A8B28 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E3825C 801A8B2C 8CA579B8 */  lw          $a1, %lo(D_801779B8)($a1)
/* E38260 801A8B30 26040050 */  addiu       $a0, $s0, 0x50
/* E38264 801A8B34 0C026F0B */  jal         Math_SmoothStepToF
/* E38268 801A8B38 E7B00010 */   swc1       $ft4, 0x10($sp)
/* E3826C 801A8B3C 44803000 */  mtc1        $zero, $ft1
/* E38270 801A8B40 3C058017 */  lui         $a1, %hi(D_801779C0)
/* E38274 801A8B44 3C068017 */  lui         $a2, %hi(D_80177A48)
/* E38278 801A8B48 3C074743 */  lui         $a3, (0x47435000 >> 16)
/* E3827C 801A8B4C 34E75000 */  ori         $a3, $a3, (0x47435000 & 0xFFFF)
/* E38280 801A8B50 8CC67A48 */  lw          $a2, %lo(D_80177A48)($a2)
/* E38284 801A8B54 8CA579C0 */  lw          $a1, %lo(D_801779C0)($a1)
/* E38288 801A8B58 26040054 */  addiu       $a0, $s0, 0x54
/* E3828C 801A8B5C 0C026F0B */  jal         Math_SmoothStepToF
/* E38290 801A8B60 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E38294 801A8B64 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E38298 801A8B68 44812000 */  mtc1        $at, $ft0
/* E3829C 801A8B6C C6080088 */  lwc1        $ft2, 0x88($s0)
/* E382A0 801A8B70 3C01801C */  lui         $at, %hi(D_E16C50_801C1A0C)
/* E382A4 801A8B74 46044280 */  add.s       $ft3, $ft2, $ft0
/* E382A8 801A8B78 E60A0088 */  swc1        $ft3, 0x88($s0)
/* E382AC 801A8B7C C4301A0C */  lwc1        $ft4, %lo(D_E16C50_801C1A0C)($at)
/* E382B0 801A8B80 C6120088 */  lwc1        $ft5, 0x88($s0)
/* E382B4 801A8B84 46109302 */  mul.s       $fa0, $ft5, $ft4
/* E382B8 801A8B88 0C008C24 */  jal         __sinf
/* E382BC 801A8B8C 00000000 */   nop
/* E382C0 801A8B90 3C01801C */  lui         $at, %hi(D_E16C50_801C1A10)
/* E382C4 801A8B94 C4281A10 */  lwc1        $ft2, %lo(D_E16C50_801C1A10)($at)
/* E382C8 801A8B98 46000187 */  neg.s       $ft1, $fv0
/* E382CC 801A8B9C 3C014100 */  lui         $at, (0x41000000 >> 16)
/* E382D0 801A8BA0 44819000 */  mtc1        $at, $ft5
/* E382D4 801A8BA4 C60A00F4 */  lwc1        $ft3, 0xF4($s0)
/* E382D8 801A8BA8 46083102 */  mul.s       $ft0, $ft1, $ft2
/* E382DC 801A8BAC 3C01801C */  lui         $at, %hi(D_E16C50_801C1A14)
/* E382E0 801A8BB0 46125400 */  add.s       $ft4, $ft3, $ft5
/* E382E4 801A8BB4 E61000F4 */  swc1        $ft4, 0xF4($s0)
/* E382E8 801A8BB8 E6040080 */  swc1        $ft0, 0x80($s0)
/* E382EC 801A8BBC C4281A14 */  lwc1        $ft2, %lo(D_E16C50_801C1A14)($at)
/* E382F0 801A8BC0 C60600F4 */  lwc1        $ft1, 0xF4($s0)
/* E382F4 801A8BC4 46083302 */  mul.s       $fa0, $ft1, $ft2
/* E382F8 801A8BC8 0C008C24 */  jal         __sinf
/* E382FC 801A8BCC 00000000 */   nop
/* E38300 801A8BD0 E60000F0 */  swc1        $fv0, 0xF0($s0)
/* E38304 801A8BD4 8FBF0024 */  lw          $ra, 0x24($sp)
/* E38308 801A8BD8 8FB00020 */  lw          $s0, 0x20($sp)
/* E3830C 801A8BDC 27BD0080 */  addiu       $sp, $sp, 0x80
/* E38310 801A8BE0 03E00008 */  jr          $ra
/* E38314 801A8BE4 00000000 */   nop
.section .late_rodata
dlabel D_E16C50_801C1A18
/* E51148 801C1A18 3E4CCCCD */ .float 0.200000003

dlabel D_E16C50_801C1A1C
/* E5114C 801C1A1C 3C8EFA35 */ .float 0.01745329238

dlabel D_E16C50_801C1A20
/* E51150 801C1A20 3C8EFA35 */ .float 0.01745329238
/* E51154 801C1A24 00000000 */ .float 0
/* E51158 801C1A28 00000000 */ .float 0
/* E5115C 801C1A2C 00000000 */ .float 0


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_E16C50_801A8BE8
/* E38318 801A8BE8 27BDFFB8 */  addiu       $sp, $sp, -0x48
/* E3831C 801A8BEC AFB00020 */  sw          $s0, 0x20($sp)
/* E38320 801A8BF0 00808025 */  or          $s0, $a0, $zero
/* E38324 801A8BF4 AFBF0024 */  sw          $ra, 0x24($sp)
/* E38328 801A8BF8 860200B8 */  lh          $v0, 0xB8($s0)
/* E3832C 801A8BFC 24010001 */  addiu       $at, $zero, 0x1
/* E38330 801A8C00 1041000A */  beq         $v0, $at, .LE16C50_801A8C2C
/* E38334 801A8C04 24010002 */   addiu      $at, $zero, 0x2
/* E38338 801A8C08 10410018 */  beq         $v0, $at, .LE16C50_801A8C6C
/* E3833C 801A8C0C 3C07800C */   lui        $a3, %hi(D_800C5D34)
/* E38340 801A8C10 24010003 */  addiu       $at, $zero, 0x3
/* E38344 801A8C14 10410025 */  beq         $v0, $at, .LE16C50_801A8CAC
/* E38348 801A8C18 24010004 */   addiu      $at, $zero, 0x4
/* E3834C 801A8C1C 50410030 */  beql        $v0, $at, .LE16C50_801A8CE0
/* E38350 801A8C20 3C014334 */   lui        $at, (0x43340000 >> 16)
/* E38354 801A8C24 1000002E */  b           .LE16C50_801A8CE0
/* E38358 801A8C28 3C014334 */   lui        $at, (0x43340000 >> 16)
.LE16C50_801A8C2C:
/* E3835C 801A8C2C 860E00B6 */  lh          $t6, 0xB6($s0)
/* E38360 801A8C30 51C0002B */  beql        $t6, $zero, .LE16C50_801A8CE0
/* E38364 801A8C34 3C014334 */   lui        $at, (0x43340000 >> 16)
/* E38368 801A8C38 8E180040 */  lw          $t8, 0x40($s0)
/* E3836C 801A8C3C 3C0F8017 */  lui         $t7, %hi(D_80177A80)
/* E38370 801A8C40 8DEF7A80 */  lw          $t7, %lo(D_80177A80)($t7)
/* E38374 801A8C44 33190007 */  andi        $t9, $t8, 0x7
/* E38378 801A8C48 00194080 */  sll         $t0, $t9, 2
/* E3837C 801A8C4C 01194021 */  addu        $t0, $t0, $t9
/* E38380 801A8C50 00084040 */  sll         $t0, $t0, 1
/* E38384 801A8C54 25090406 */  addiu       $t1, $t0, 0x406
/* E38388 801A8C58 012F082A */  slt         $at, $t1, $t7
/* E3838C 801A8C5C 1020001F */  beqz        $at, .LE16C50_801A8CDC
/* E38390 801A8C60 240A0004 */   addiu      $t2, $zero, 0x4
/* E38394 801A8C64 1000001D */  b           .LE16C50_801A8CDC
/* E38398 801A8C68 A60A00B8 */   sh         $t2, 0xB8($s0)
.LE16C50_801A8C6C:
/* E3839C 801A8C6C 240B0003 */  addiu       $t3, $zero, 0x3
/* E383A0 801A8C70 3C0C800C */  lui         $t4, %hi(D_800C5D3C)
/* E383A4 801A8C74 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E383A8 801A8C78 A60B00B8 */  sh          $t3, 0xB8($s0)
/* E383AC 801A8C7C 258C5D3C */  addiu       $t4, $t4, %lo(D_800C5D3C)
/* E383B0 801A8C80 3C040900 */  lui         $a0, (0x9000002 >> 16)
/* E383B4 801A8C84 34840002 */  ori         $a0, $a0, (0x9000002 & 0xFFFF)
/* E383B8 801A8C88 AFAC0014 */  sw          $t4, 0x14($sp)
/* E383BC 801A8C8C AFA70010 */  sw          $a3, 0x10($sp)
/* E383C0 801A8C90 26050100 */  addiu       $a1, $s0, 0x100
/* E383C4 801A8C94 0C006486 */  jal         Audio_PlaySfx
/* E383C8 801A8C98 00003025 */   or         $a2, $zero, $zero
/* E383CC 801A8C9C 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E383D0 801A8CA0 44812000 */  mtc1        $at, $ft0
/* E383D4 801A8CA4 00000000 */  nop
/* E383D8 801A8CA8 E6040188 */  swc1        $ft0, 0x188($s0)
.LE16C50_801A8CAC:
/* E383DC 801A8CAC 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E383E0 801A8CB0 44814000 */  mtc1        $at, $ft2
/* E383E4 801A8CB4 C6060114 */  lwc1        $ft1, 0x114($s0)
/* E383E8 801A8CB8 240D0002 */  addiu       $t5, $zero, 0x2
/* E383EC 801A8CBC AE0D007C */  sw          $t5, 0x7C($s0)
/* E383F0 801A8CC0 46083280 */  add.s       $ft3, $ft1, $ft2
/* E383F4 801A8CC4 3C01801C */  lui         $at, %hi(D_E16C50_801C1A18)
/* E383F8 801A8CC8 C61000F4 */  lwc1        $ft4, 0xF4($s0)
/* E383FC 801A8CCC E60A0114 */  swc1        $ft3, 0x114($s0)
/* E38400 801A8CD0 C4321A18 */  lwc1        $ft5, %lo(D_E16C50_801C1A18)($at)
/* E38404 801A8CD4 46128100 */  add.s       $ft0, $ft4, $ft5
/* E38408 801A8CD8 E60400F4 */  swc1        $ft0, 0xF4($s0)
.LE16C50_801A8CDC:
/* E3840C 801A8CDC 3C014334 */  lui         $at, (0x43340000 >> 16)
.LE16C50_801A8CE0:
/* E38410 801A8CE0 44814000 */  mtc1        $at, $ft2
/* E38414 801A8CE4 C60600F8 */  lwc1        $ft1, 0xF8($s0)
/* E38418 801A8CE8 3C01801C */  lui         $at, %hi(D_E16C50_801C1A1C)
/* E3841C 801A8CEC C4301A1C */  lwc1        $ft4, %lo(D_E16C50_801C1A1C)($at)
/* E38420 801A8CF0 46083280 */  add.s       $ft3, $ft1, $ft2
/* E38424 801A8CF4 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E38428 801A8CF8 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E3842C 801A8CFC 00003025 */  or          $a2, $zero, $zero
/* E38430 801A8D00 46105482 */  mul.s       $ft5, $ft3, $ft4
/* E38434 801A8D04 44059000 */  mfc1        $a1, $ft5
/* E38438 801A8D08 0C0017A4 */  jal         Matrix_RotateY
/* E3843C 801A8D0C 00000000 */   nop
/* E38440 801A8D10 3C01801C */  lui         $at, %hi(D_E16C50_801C1A20)
/* E38444 801A8D14 C4261A20 */  lwc1        $ft1, %lo(D_E16C50_801C1A20)($at)
/* E38448 801A8D18 C60400F4 */  lwc1        $ft0, 0xF4($s0)
/* E3844C 801A8D1C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E38450 801A8D20 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E38454 801A8D24 46062202 */  mul.s       $ft2, $ft0, $ft1
/* E38458 801A8D28 24060001 */  addiu       $a2, $zero, 0x1
/* E3845C 801A8D2C 46004287 */  neg.s       $ft3, $ft2
/* E38460 801A8D30 44055000 */  mfc1        $a1, $ft3
/* E38464 801A8D34 0C001751 */  jal         Matrix_RotateX
/* E38468 801A8D38 00000000 */   nop
/* E3846C 801A8D3C 44800000 */  mtc1        $zero, $fv0
/* E38470 801A8D40 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E38474 801A8D44 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E38478 801A8D48 E7A0003C */  swc1        $fv0, 0x3C($sp)
/* E3847C 801A8D4C E7A00040 */  swc1        $fv0, 0x40($sp)
/* E38480 801A8D50 C6100114 */  lwc1        $ft4, 0x114($s0)
/* E38484 801A8D54 27A5003C */  addiu       $a1, $sp, 0x3C
/* E38488 801A8D58 27A60030 */  addiu       $a2, $sp, 0x30
/* E3848C 801A8D5C 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E38490 801A8D60 E7B00044 */   swc1       $ft4, 0x44($sp)
/* E38494 801A8D64 C7B20030 */  lwc1        $ft5, 0x30($sp)
/* E38498 801A8D68 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E3849C 801A8D6C C61000F8 */  lwc1        $ft4, 0xF8($s0)
/* E384A0 801A8D70 E61200E8 */  swc1        $ft5, 0xE8($s0)
/* E384A4 801A8D74 C7A40034 */  lwc1        $ft0, 0x34($sp)
/* E384A8 801A8D78 44819000 */  mtc1        $at, $ft5
/* E384AC 801A8D7C C60800F4 */  lwc1        $ft2, 0xF4($s0)
/* E384B0 801A8D80 E60400EC */  swc1        $ft0, 0xEC($s0)
/* E384B4 801A8D84 C7A60038 */  lwc1        $ft1, 0x38($sp)
/* E384B8 801A8D88 46128100 */  add.s       $ft0, $ft4, $ft5
/* E384BC 801A8D8C E60600F0 */  swc1        $ft1, 0xF0($s0)
/* E384C0 801A8D90 C60600FC */  lwc1        $ft1, 0xFC($s0)
/* E384C4 801A8D94 46004287 */  neg.s       $ft3, $ft2
/* E384C8 801A8D98 E6040014 */  swc1        $ft0, 0x14($s0)
/* E384CC 801A8D9C 46003207 */  neg.s       $ft2, $ft1
/* E384D0 801A8DA0 E60A0010 */  swc1        $ft3, 0x10($s0)
/* E384D4 801A8DA4 E6080018 */  swc1        $ft2, 0x18($s0)
/* E384D8 801A8DA8 8FBF0024 */  lw          $ra, 0x24($sp)
/* E384DC 801A8DAC 8FB00020 */  lw          $s0, 0x20($sp)
/* E384E0 801A8DB0 03E00008 */  jr          $ra
/* E384E4 801A8DB4 27BD0048 */   addiu      $sp, $sp, 0x48
glabel func_E16C50_801A8DB8
/* E384E8 801A8DB8 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* E384EC 801A8DBC AFA60028 */  sw          $a2, 0x28($sp)
/* E384F0 801A8DC0 00A03025 */  or          $a2, $a1, $zero
/* E384F4 801A8DC4 AFBF0014 */  sw          $ra, 0x14($sp)
/* E384F8 801A8DC8 AFA40020 */  sw          $a0, 0x20($sp)
/* E384FC 801A8DCC AFA50024 */  sw          $a1, 0x24($sp)
/* E38500 801A8DD0 3C078017 */  lui         $a3, %hi(gObjects8C)
/* E38504 801A8DD4 3C028017 */  lui         $v0, %hi(gItems)
/* E38508 801A8DD8 244237E0 */  addiu       $v0, $v0, %lo(gItems)
/* E3850C 801A8DDC 24E70130 */  addiu       $a3, $a3, %lo(gObjects8C)
/* E38510 801A8DE0 90EE0000 */  lbu         $t6, 0x0($a3)
.LE16C50_801A8DE4:
/* E38514 801A8DE4 15C00008 */  bnez        $t6, .LE16C50_801A8E08
/* E38518 801A8DE8 00E02025 */   or         $a0, $a3, $zero
/* E3851C 801A8DEC 8FA50020 */  lw          $a1, 0x20($sp)
/* E38520 801A8DF0 0C01E97E */  jal         func_8007A5F8
/* E38524 801A8DF4 AFA70018 */   sw         $a3, 0x18($sp)
/* E38528 801A8DF8 8FA70018 */  lw          $a3, 0x18($sp)
/* E3852C 801A8DFC C7A40028 */  lwc1        $ft0, 0x28($sp)
/* E38530 801A8E00 10000004 */  b           .LE16C50_801A8E14
/* E38534 801A8E04 E4E4005C */   swc1       $ft0, 0x5C($a3)
.LE16C50_801A8E08:
/* E38538 801A8E08 24E7008C */  addiu       $a3, $a3, 0x8C
/* E3853C 801A8E0C 54E2FFF5 */  bnel        $a3, $v0, .LE16C50_801A8DE4
/* E38540 801A8E10 90EE0000 */   lbu        $t6, 0x0($a3)
.LE16C50_801A8E14:
/* E38544 801A8E14 8FBF0014 */  lw          $ra, 0x14($sp)
/* E38548 801A8E18 27BD0020 */  addiu       $sp, $sp, 0x20
/* E3854C 801A8E1C 03E00008 */  jr          $ra
/* E38550 801A8E20 00000000 */   nop
/* E38554 801A8E24 00000000 */  nop
/* E38558 801A8E28 00000000 */  nop
/* E3855C 801A8E2C 00000000 */  nop
