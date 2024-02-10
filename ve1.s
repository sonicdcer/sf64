glabel func_i1_801920F0
/* DFEE30 801920F0 3C014334 */  lui         $at, (0x43340000 >> 16)
/* DFEE34 801920F4 44856000 */  mtc1        $a1, $fa0
/* DFEE38 801920F8 44817000 */  mtc1        $at, $fa1
/* DFEE3C 801920FC 8FA50014 */  lw          $a1, 0x14($sp)
/* DFEE40 80192100 AFA60008 */  sw          $a2, 0x8($sp)
/* DFEE44 80192104 AFA7000C */  sw          $a3, 0xC($sp)
/* DFEE48 80192108 C4840000 */  lwc1        $ft0, 0x0($a0)
/* DFEE4C 8019210C 44809000 */  mtc1        $zero, $ft5
/* DFEE50 80192110 3C01C334 */  lui         $at, (0xC3340000 >> 16)
/* DFEE54 80192114 46046181 */  sub.s       $ft1, $fa0, $ft0
/* DFEE58 80192118 E4A60000 */  swc1        $ft1, 0x0($a1)
/* DFEE5C 8019211C C4A20000 */  lwc1        $fv1, 0x0($a1)
/* DFEE60 80192120 4602703C */  c.lt.s      $fa1, $fv1
/* DFEE64 80192124 00000000 */  nop
/* DFEE68 80192128 4502000E */  bc1fl       .Li1_80192164
/* DFEE6C 8019212C 44817000 */   mtc1       $at, $fa1
/* DFEE70 80192130 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* DFEE74 80192134 44810000 */  mtc1        $at, $fv0
/* DFEE78 80192138 00000000 */  nop
/* DFEE7C 8019213C 46001201 */  sub.s       $ft2, $fv1, $fv0
.Li1_80192140:
/* DFEE80 80192140 E4A80000 */  swc1        $ft2, 0x0($a1)
/* DFEE84 80192144 C4A20000 */  lwc1        $fv1, 0x0($a1)
/* DFEE88 80192148 4602703C */  c.lt.s      $fa1, $fv1
/* DFEE8C 8019214C 00000000 */  nop
/* DFEE90 80192150 4503FFFB */  bc1tl       .Li1_80192140
/* DFEE94 80192154 46001201 */   sub.s      $ft2, $fv1, $fv0
/* DFEE98 80192158 10000011 */  b           .Li1_801921A0
/* DFEE9C 8019215C 46121032 */   c.eq.s     $fv1, $ft5
/* DFEEA0 80192160 44817000 */  mtc1        $at, $fa1
.Li1_80192164:
/* DFEEA4 80192164 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* DFEEA8 80192168 460E103C */  c.lt.s      $fv1, $fa1
/* DFEEAC 8019216C 00000000 */  nop
/* DFEEB0 80192170 4502000B */  bc1fl       .Li1_801921A0
/* DFEEB4 80192174 46121032 */   c.eq.s     $fv1, $ft5
/* DFEEB8 80192178 44810000 */  mtc1        $at, $fv0
/* DFEEBC 8019217C 00000000 */  nop
/* DFEEC0 80192180 46001280 */  add.s       $ft3, $fv1, $fv0
.Li1_80192184:
/* DFEEC4 80192184 E4AA0000 */  swc1        $ft3, 0x0($a1)
/* DFEEC8 80192188 C4A20000 */  lwc1        $fv1, 0x0($a1)
/* DFEECC 8019218C 460E103C */  c.lt.s      $fv1, $fa1
/* DFEED0 80192190 00000000 */  nop
/* DFEED4 80192194 4503FFFB */  bc1tl       .Li1_80192184
/* DFEED8 80192198 46001280 */   add.s      $ft3, $fv1, $fv0
/* DFEEDC 8019219C 46121032 */  c.eq.s      $fv1, $ft5
.Li1_801921A0:
/* DFEEE0 801921A0 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* DFEEE4 801921A4 44810000 */  mtc1        $at, $fv0
/* DFEEE8 801921A8 46001386 */  mov.s       $fa1, $fv1
/* DFEEEC 801921AC 4501003A */  bc1t        .Li1_80192298
/* DFEEF0 801921B0 C7A40008 */   lwc1       $ft0, 0x8($sp)
/* DFEEF4 801921B4 46047382 */  mul.s       $fa1, $fa1, $ft0
/* DFEEF8 801921B8 C7A20010 */  lwc1        $fv1, 0x10($sp)
/* DFEEFC 801921BC C7A6000C */  lwc1        $ft1, 0xC($sp)
/* DFEF00 801921C0 460E103E */  c.le.s      $fv1, $fa1
/* DFEF04 801921C4 00000000 */  nop
/* DFEF08 801921C8 45030007 */  bc1tl       .Li1_801921E8
/* DFEF0C 801921CC 460E303C */   c.lt.s     $ft1, $fa1
/* DFEF10 801921D0 46001407 */  neg.s       $ft4, $fv1
/* DFEF14 801921D4 4610703E */  c.le.s      $fa1, $ft4
/* DFEF18 801921D8 00000000 */  nop
/* DFEF1C 801921DC 45020012 */  bc1fl       .Li1_80192228
/* DFEF20 801921E0 4602703C */   c.lt.s     $fa1, $fv1
/* DFEF24 801921E4 460E303C */  c.lt.s      $ft1, $fa1
.Li1_801921E8:
/* DFEF28 801921E8 C7A2000C */  lwc1        $fv1, 0xC($sp)
/* DFEF2C 801921EC 45020004 */  bc1fl       .Li1_80192200
/* DFEF30 801921F0 46001087 */   neg.s      $fv1, $fv1
/* DFEF34 801921F4 10000007 */  b           .Li1_80192214
/* DFEF38 801921F8 46003386 */   mov.s      $fa1, $ft1
/* DFEF3C 801921FC 46001087 */  neg.s       $fv1, $fv1
.Li1_80192200:
/* DFEF40 80192200 4602703C */  c.lt.s      $fa1, $fv1
/* DFEF44 80192204 00000000 */  nop
/* DFEF48 80192208 45020003 */  bc1fl       .Li1_80192218
/* DFEF4C 8019220C C4880000 */   lwc1       $ft2, 0x0($a0)
/* DFEF50 80192210 46001386 */  mov.s       $fa1, $fv1
.Li1_80192214:
/* DFEF54 80192214 C4880000 */  lwc1        $ft2, 0x0($a0)
.Li1_80192218:
/* DFEF58 80192218 460E4280 */  add.s       $ft3, $ft2, $fa1
/* DFEF5C 8019221C 1000001E */  b           .Li1_80192298
/* DFEF60 80192220 E48A0000 */   swc1       $ft3, 0x0($a0)
/* DFEF64 80192224 4602703C */  c.lt.s      $fa1, $fv1
.Li1_80192228:
/* DFEF68 80192228 00000000 */  nop
/* DFEF6C 8019222C 4502000D */  bc1fl       .Li1_80192264
/* DFEF70 80192230 460E803C */   c.lt.s     $ft4, $fa1
/* DFEF74 80192234 C4840000 */  lwc1        $ft0, 0x0($a0)
/* DFEF78 80192238 46001386 */  mov.s       $fa1, $fv1
/* DFEF7C 8019223C 46022180 */  add.s       $ft1, $ft0, $fv1
/* DFEF80 80192240 E4860000 */  swc1        $ft1, 0x0($a0)
/* DFEF84 80192244 C4880000 */  lwc1        $ft2, 0x0($a0)
/* DFEF88 80192248 4608603C */  c.lt.s      $fa0, $ft2
/* DFEF8C 8019224C 00000000 */  nop
/* DFEF90 80192250 45020012 */  bc1fl       .Li1_8019229C
/* DFEF94 80192254 C4820000 */   lwc1       $fv1, 0x0($a0)
/* DFEF98 80192258 1000000F */  b           .Li1_80192298
/* DFEF9C 8019225C E48C0000 */   swc1       $fa0, 0x0($a0)
/* DFEFA0 80192260 460E803C */  c.lt.s      $ft4, $fa1
.Li1_80192264:
/* DFEFA4 80192264 00000000 */  nop
/* DFEFA8 80192268 4502000C */  bc1fl       .Li1_8019229C
/* DFEFAC 8019226C C4820000 */   lwc1       $fv1, 0x0($a0)
/* DFEFB0 80192270 C48A0000 */  lwc1        $ft3, 0x0($a0)
/* DFEFB4 80192274 46008386 */  mov.s       $fa1, $ft4
/* DFEFB8 80192278 46105100 */  add.s       $ft0, $ft3, $ft4
/* DFEFBC 8019227C E4840000 */  swc1        $ft0, 0x0($a0)
/* DFEFC0 80192280 C4860000 */  lwc1        $ft1, 0x0($a0)
/* DFEFC4 80192284 460C303C */  c.lt.s      $ft1, $fa0
/* DFEFC8 80192288 00000000 */  nop
/* DFEFCC 8019228C 45020003 */  bc1fl       .Li1_8019229C
/* DFEFD0 80192290 C4820000 */   lwc1       $fv1, 0x0($a0)
/* DFEFD4 80192294 E48C0000 */  swc1        $fa0, 0x0($a0)
.Li1_80192298:
/* DFEFD8 80192298 C4820000 */  lwc1        $fv1, 0x0($a0)
.Li1_8019229C:
/* DFEFDC 8019229C 4602003E */  c.le.s      $fv0, $fv1
/* DFEFE0 801922A0 00000000 */  nop
/* DFEFE4 801922A4 45020005 */  bc1fl       .Li1_801922BC
/* DFEFE8 801922A8 4612103C */   c.lt.s     $fv1, $ft5
/* DFEFEC 801922AC 46001201 */  sub.s       $ft2, $fv1, $fv0
/* DFEFF0 801922B0 10000007 */  b           .Li1_801922D0
/* DFEFF4 801922B4 E4880000 */   swc1       $ft2, 0x0($a0)
/* DFEFF8 801922B8 4612103C */  c.lt.s      $fv1, $ft5
.Li1_801922BC:
/* DFEFFC 801922BC 00000000 */  nop
/* DFF000 801922C0 45020004 */  bc1fl       .Li1_801922D4
/* DFF004 801922C4 46007006 */   mov.s      $fv0, $fa1
/* DFF008 801922C8 46001280 */  add.s       $ft3, $fv1, $fv0
/* DFF00C 801922CC E48A0000 */  swc1        $ft3, 0x0($a0)
.Li1_801922D0:
/* DFF010 801922D0 46007006 */  mov.s       $fv0, $fa1
.Li1_801922D4:
/* DFF014 801922D4 03E00008 */  jr          $ra
/* DFF018 801922D8 00000000 */   nop
glabel func_i1_801922DC
/* DFF01C 801922DC 3C028017 */  lui         $v0, %hi(gBosses)
/* DFF020 801922E0 2442F110 */  addiu       $v0, $v0, %lo(gBosses)
/* DFF024 801922E4 00001825 */  or          $v1, $zero, $zero
/* DFF028 801922E8 24060004 */  addiu       $a2, $zero, 0x4
/* DFF02C 801922EC 2405013F */  addiu       $a1, $zero, 0x13F
.Li1_801922F0:
/* DFF030 801922F0 904E0000 */  lbu         $t6, 0x0($v0)
/* DFF034 801922F4 24630001 */  addiu       $v1, $v1, 0x1
/* DFF038 801922F8 11C00013 */  beqz        $t6, .Li1_80192348
/* DFF03C 801922FC 00000000 */   nop
/* DFF040 80192300 944F0002 */  lhu         $t7, 0x2($v0)
/* DFF044 80192304 14AF0010 */  bne         $a1, $t7, .Li1_80192348
/* DFF048 80192308 00000000 */   nop
/* DFF04C 8019230C C484000C */  lwc1        $ft0, 0xC($a0)
/* DFF050 80192310 C446000C */  lwc1        $ft1, 0xC($v0)
/* DFF054 80192314 4604303E */  c.le.s      $ft1, $ft0
/* DFF058 80192318 00000000 */  nop
/* DFF05C 8019231C 4500000C */  bc1f        .Li1_80192350
/* DFF060 80192320 00000000 */   nop
/* DFF064 80192324 C4880010 */  lwc1        $ft2, 0x10($a0)
/* DFF068 80192328 3C01801A */  lui         $at, %hi(D_i1_8019C0B8)
/* DFF06C 8019232C 4600428D */  trunc.w.s   $ft3, $ft2
/* DFF070 80192330 44195000 */  mfc1        $t9, $ft3
/* DFF074 80192334 00000000 */  nop
/* DFF078 80192338 27280001 */  addiu       $t0, $t9, 0x1
/* DFF07C 8019233C AC28C0B8 */  sw          $t0, %lo(D_i1_8019C0B8)($at)
/* DFF080 80192340 03E00008 */  jr          $ra
/* DFF084 80192344 A0800000 */   sb         $zero, 0x0($a0)
.Li1_80192348:
/* DFF088 80192348 1466FFE9 */  bne         $v1, $a2, .Li1_801922F0
/* DFF08C 8019234C 24420408 */   addiu      $v0, $v0, 0x408
.Li1_80192350:
/* DFF090 80192350 03E00008 */  jr          $ra
/* DFF094 80192354 00000000 */   nop
glabel func_i1_80192358
/* DFF098 80192358 3C028017 */  lui         $v0, %hi(gBosses)
/* DFF09C 8019235C 2442F110 */  addiu       $v0, $v0, %lo(gBosses)
/* DFF0A0 80192360 00001825 */  or          $v1, $zero, $zero
/* DFF0A4 80192364 24060004 */  addiu       $a2, $zero, 0x4
/* DFF0A8 80192368 2405013F */  addiu       $a1, $zero, 0x13F
.Li1_8019236C:
/* DFF0AC 8019236C 904E0000 */  lbu         $t6, 0x0($v0)
/* DFF0B0 80192370 24630001 */  addiu       $v1, $v1, 0x1
/* DFF0B4 80192374 11C0000E */  beqz        $t6, .Li1_801923B0
/* DFF0B8 80192378 00000000 */   nop
/* DFF0BC 8019237C 944F0002 */  lhu         $t7, 0x2($v0)
/* DFF0C0 80192380 14AF000B */  bne         $a1, $t7, .Li1_801923B0
/* DFF0C4 80192384 00000000 */   nop
/* DFF0C8 80192388 C484000C */  lwc1        $ft0, 0xC($a0)
/* DFF0CC 8019238C C446000C */  lwc1        $ft1, 0xC($v0)
/* DFF0D0 80192390 3C01801A */  lui         $at, %hi(D_i1_8019C0B8)
/* DFF0D4 80192394 4604303E */  c.le.s      $ft1, $ft0
/* DFF0D8 80192398 00000000 */  nop
/* DFF0DC 8019239C 45000006 */  bc1f        .Li1_801923B8
/* DFF0E0 801923A0 00000000 */   nop
/* DFF0E4 801923A4 AC20C0B8 */  sw          $zero, %lo(D_i1_8019C0B8)($at)
/* DFF0E8 801923A8 03E00008 */  jr          $ra
/* DFF0EC 801923AC A0800000 */   sb         $zero, 0x0($a0)
.Li1_801923B0:
/* DFF0F0 801923B0 1466FFEE */  bne         $v1, $a2, .Li1_8019236C
/* DFF0F4 801923B4 24420408 */   addiu      $v0, $v0, 0x408
.Li1_801923B8:
/* DFF0F8 801923B8 03E00008 */  jr          $ra
/* DFF0FC 801923BC 00000000 */   nop
glabel func_i1_801923C0
/* DFF100 801923C0 3C028017 */  lui         $v0, %hi(gBosses)
/* DFF104 801923C4 2442F110 */  addiu       $v0, $v0, %lo(gBosses)
/* DFF108 801923C8 00001825 */  or          $v1, $zero, $zero
/* DFF10C 801923CC 24060004 */  addiu       $a2, $zero, 0x4
/* DFF110 801923D0 2405013F */  addiu       $a1, $zero, 0x13F
.Li1_801923D4:
/* DFF114 801923D4 904E0000 */  lbu         $t6, 0x0($v0)
/* DFF118 801923D8 24630001 */  addiu       $v1, $v1, 0x1
/* DFF11C 801923DC 11C00013 */  beqz        $t6, .Li1_8019242C
/* DFF120 801923E0 00000000 */   nop
/* DFF124 801923E4 944F0002 */  lhu         $t7, 0x2($v0)
/* DFF128 801923E8 14AF0010 */  bne         $a1, $t7, .Li1_8019242C
/* DFF12C 801923EC 00000000 */   nop
/* DFF130 801923F0 C484000C */  lwc1        $ft0, 0xC($a0)
/* DFF134 801923F4 C446000C */  lwc1        $ft1, 0xC($v0)
/* DFF138 801923F8 4604303E */  c.le.s      $ft1, $ft0
/* DFF13C 801923FC 00000000 */  nop
/* DFF140 80192400 4500000C */  bc1f        .Li1_80192434
/* DFF144 80192404 00000000 */   nop
/* DFF148 80192408 C4880010 */  lwc1        $ft2, 0x10($a0)
/* DFF14C 8019240C 3C01801A */  lui         $at, %hi(D_i1_8019C0BC)
/* DFF150 80192410 4600428D */  trunc.w.s   $ft3, $ft2
/* DFF154 80192414 44195000 */  mfc1        $t9, $ft3
/* DFF158 80192418 00000000 */  nop
/* DFF15C 8019241C 27280001 */  addiu       $t0, $t9, 0x1
/* DFF160 80192420 AC28C0BC */  sw          $t0, %lo(D_i1_8019C0BC)($at)
/* DFF164 80192424 03E00008 */  jr          $ra
/* DFF168 80192428 A0800000 */   sb         $zero, 0x0($a0)
.Li1_8019242C:
/* DFF16C 8019242C 1466FFE9 */  bne         $v1, $a2, .Li1_801923D4
/* DFF170 80192430 24420408 */   addiu      $v0, $v0, 0x408
.Li1_80192434:
/* DFF174 80192434 03E00008 */  jr          $ra
/* DFF178 80192438 00000000 */   nop
glabel func_i1_8019243C
/* DFF17C 8019243C 3C028017 */  lui         $v0, %hi(gBosses)
/* DFF180 80192440 2442F110 */  addiu       $v0, $v0, %lo(gBosses)
/* DFF184 80192444 00001825 */  or          $v1, $zero, $zero
/* DFF188 80192448 24060004 */  addiu       $a2, $zero, 0x4
/* DFF18C 8019244C 2405013F */  addiu       $a1, $zero, 0x13F
.Li1_80192450:
/* DFF190 80192450 904E0000 */  lbu         $t6, 0x0($v0)
/* DFF194 80192454 24630001 */  addiu       $v1, $v1, 0x1
/* DFF198 80192458 11C0000F */  beqz        $t6, .Li1_80192498
/* DFF19C 8019245C 00000000 */   nop
/* DFF1A0 80192460 944F0002 */  lhu         $t7, 0x2($v0)
/* DFF1A4 80192464 14AF000C */  bne         $a1, $t7, .Li1_80192498
/* DFF1A8 80192468 00000000 */   nop
/* DFF1AC 8019246C C484000C */  lwc1        $ft0, 0xC($a0)
/* DFF1B0 80192470 C446000C */  lwc1        $ft1, 0xC($v0)
/* DFF1B4 80192474 24180001 */  addiu       $t8, $zero, 0x1
/* DFF1B8 80192478 3C01801A */  lui         $at, %hi(D_i1_8019C0C0)
/* DFF1BC 8019247C 4604303E */  c.le.s      $ft1, $ft0
/* DFF1C0 80192480 00000000 */  nop
/* DFF1C4 80192484 45000006 */  bc1f        .Li1_801924A0
/* DFF1C8 80192488 00000000 */   nop
/* DFF1CC 8019248C AC38C0C0 */  sw          $t8, %lo(D_i1_8019C0C0)($at)
/* DFF1D0 80192490 03E00008 */  jr          $ra
/* DFF1D4 80192494 A0800000 */   sb         $zero, 0x0($a0)
.Li1_80192498:
/* DFF1D8 80192498 1466FFED */  bne         $v1, $a2, .Li1_80192450
/* DFF1DC 8019249C 24420408 */   addiu      $v0, $v0, 0x408
.Li1_801924A0:
/* DFF1E0 801924A0 03E00008 */  jr          $ra
/* DFF1E4 801924A4 00000000 */   nop
glabel func_i1_801924A8
/* DFF1E8 801924A8 8C820048 */  lw          $v0, 0x48($a0)
/* DFF1EC 801924AC 24010001 */  addiu       $at, $zero, 0x1
/* DFF1F0 801924B0 3C0E8018 */  lui         $t6, %hi(gPlayer)
/* DFF1F4 801924B4 10400005 */  beqz        $v0, .Li1_801924CC
/* DFF1F8 801924B8 00000000 */   nop
/* DFF1FC 801924BC 10410011 */  beq         $v0, $at, .Li1_80192504
/* DFF200 801924C0 00000000 */   nop
/* DFF204 801924C4 03E00008 */  jr          $ra
/* DFF208 801924C8 00000000 */   nop
.Li1_801924CC:
/* DFF20C 801924CC 8DCE8280 */  lw          $t6, %lo(gPlayer)($t6)
/* DFF210 801924D0 C486000C */  lwc1        $ft1, 0xC($a0)
/* DFF214 801924D4 3C018017 */  lui         $at, %hi(D_80177AB0)
/* DFF218 801924D8 C5C4007C */  lwc1        $ft0, 0x7C($t6)
/* DFF21C 801924DC 4606203C */  c.lt.s      $ft0, $ft1
/* DFF220 801924E0 00000000 */  nop
/* DFF224 801924E4 45000007 */  bc1f        .Li1_80192504
/* DFF228 801924E8 00000000 */   nop
/* DFF22C 801924EC A0207AB0 */  sb          $zero, %lo(D_80177AB0)($at)
/* DFF230 801924F0 3C018017 */  lui         $at, %hi(D_80177A98)
/* DFF234 801924F4 A0207A98 */  sb          $zero, %lo(D_80177A98)($at)
/* DFF238 801924F8 8C8F0048 */  lw          $t7, 0x48($a0)
/* DFF23C 801924FC 25F80001 */  addiu       $t8, $t7, 0x1
/* DFF240 80192500 AC980048 */  sw          $t8, 0x48($a0)
.Li1_80192504:
/* DFF244 80192504 03E00008 */  jr          $ra
/* DFF248 80192508 00000000 */   nop
glabel func_i1_8019250C
/* DFF24C 8019250C AFA40000 */  sw          $a0, 0x0($sp)
/* DFF250 80192510 03E00008 */  jr          $ra
/* DFF254 80192514 00000000 */   nop
.section .late_rodata
dlabel D_i1_8019B2EC
/* E0802C 8019B2EC 3C8EFA35 */ .float 0.01745329238

dlabel D_i1_8019B2F0
/* E08030 8019B2F0 3C8EFA35 */ .float 0.01745329238

dlabel D_i1_8019B2F4
/* E08034 8019B2F4 3C8EFA35 */ .float 0.01745329238

dlabel jtbl_i1_8019B2F8
/* E08038 8019B2F8 80192A88 */ .word .Li1_80192A88
/* E0803C 8019B2FC 80192600 */ .word .Li1_80192600
/* E08040 8019B300 80192754 */ .word .Li1_80192754
/* E08044 8019B304 801929C4 */ .word .Li1_801929C4
/* E08048 8019B308 80192A88 */ .word .Li1_80192A88

dlabel D_i1_8019B30C
/* E0804C 8019B30C 45098000 */ .float 2200

dlabel D_i1_8019B310
/* E08050 8019B310 44898000 */ .float 1100

dlabel D_i1_8019B314
/* E08054 8019B314 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B318
/* E08058 8019B318 40490FDB */ .float 3.141592741


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_i1_80192518
/* DFF258 80192518 27BDFF98 */  addiu       $sp, $sp, -0x68
/* DFF25C 8019251C AFB00020 */  sw          $s0, 0x20($sp)
/* DFF260 80192520 00808025 */  or          $s0, $a0, $zero
/* DFF264 80192524 AFBF0024 */  sw          $ra, 0x24($sp)
/* DFF268 80192528 820E00D0 */  lb          $t6, 0xD0($s0)
/* DFF26C 8019252C 24010001 */  addiu       $at, $zero, 0x1
/* DFF270 80192530 26040004 */  addiu       $a0, $s0, 0x4
/* DFF274 80192534 15C10004 */  bne         $t6, $at, .Li1_80192548
/* DFF278 80192538 3C052912 */   lui        $a1, (0x29121007 >> 16)
/* DFF27C 8019253C A20000D0 */  sb          $zero, 0xD0($s0)
/* DFF280 80192540 0C01E9BC */  jal         func_8007A6F0
/* DFF284 80192544 34A51007 */   ori        $a1, $a1, (0x29121007 & 0xFFFF)
.Li1_80192548:
/* DFF288 80192548 860200B8 */  lh          $v0, 0xB8($s0)
/* DFF28C 8019254C 24010001 */  addiu       $at, $zero, 0x1
/* DFF290 80192550 10410004 */  beq         $v0, $at, .Li1_80192564
/* DFF294 80192554 24010002 */   addiu      $at, $zero, 0x2
/* DFF298 80192558 10410002 */  beq         $v0, $at, .Li1_80192564
/* DFF29C 8019255C 24010003 */   addiu      $at, $zero, 0x3
/* DFF2A0 80192560 1441001F */  bne         $v0, $at, .Li1_801925E0
.Li1_80192564:
/* DFF2A4 80192564 3C01801A */   lui        $at, %hi(D_i1_8019B2EC)
/* DFF2A8 80192568 C426B2EC */  lwc1        $ft1, %lo(D_i1_8019B2EC)($at)
/* DFF2AC 8019256C C6040014 */  lwc1        $ft0, 0x14($s0)
/* DFF2B0 80192570 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* DFF2B4 80192574 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* DFF2B8 80192578 46062202 */  mul.s       $ft2, $ft0, $ft1
/* DFF2BC 8019257C 00003025 */  or          $a2, $zero, $zero
/* DFF2C0 80192580 44054000 */  mfc1        $a1, $ft2
/* DFF2C4 80192584 0C0017A4 */  jal         Matrix_RotateY
/* DFF2C8 80192588 00000000 */   nop
/* DFF2CC 8019258C 3C01801A */  lui         $at, %hi(D_i1_8019B2F0)
/* DFF2D0 80192590 C424B2F0 */  lwc1        $ft0, %lo(D_i1_8019B2F0)($at)
/* DFF2D4 80192594 C60A0010 */  lwc1        $ft3, 0x10($s0)
/* DFF2D8 80192598 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* DFF2DC 8019259C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* DFF2E0 801925A0 46045182 */  mul.s       $ft1, $ft3, $ft0
/* DFF2E4 801925A4 24060001 */  addiu       $a2, $zero, 0x1
/* DFF2E8 801925A8 44053000 */  mfc1        $a1, $ft1
/* DFF2EC 801925AC 0C001751 */  jal         Matrix_RotateX
/* DFF2F0 801925B0 00000000 */   nop
/* DFF2F4 801925B4 3C01801A */  lui         $at, %hi(D_i1_8019B2F4)
/* DFF2F8 801925B8 C42AB2F4 */  lwc1        $ft3, %lo(D_i1_8019B2F4)($at)
/* DFF2FC 801925BC C6080018 */  lwc1        $ft2, 0x18($s0)
/* DFF300 801925C0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* DFF304 801925C4 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* DFF308 801925C8 460A4102 */  mul.s       $ft0, $ft2, $ft3
/* DFF30C 801925CC 24060001 */  addiu       $a2, $zero, 0x1
/* DFF310 801925D0 44052000 */  mfc1        $a1, $ft0
/* DFF314 801925D4 0C0017F8 */  jal         Matrix_RotateZ
/* DFF318 801925D8 00000000 */   nop
/* DFF31C 801925DC 860200B8 */  lh          $v0, 0xB8($s0)
.Li1_801925E0:
/* DFF320 801925E0 2C410005 */  sltiu       $at, $v0, 0x5
/* DFF324 801925E4 10200128 */  beqz        $at, .Li1_80192A88
/* DFF328 801925E8 00027880 */   sll        $t7, $v0, 2
/* DFF32C 801925EC 3C01801A */  lui         $at, %hi(jtbl_i1_8019B2F8)
/* DFF330 801925F0 002F0821 */  addu        $at, $at, $t7
/* DFF334 801925F4 8C2FB2F8 */  lw          $t7, %lo(jtbl_i1_8019B2F8)($at)
/* DFF338 801925F8 01E00008 */  jr          $t7
/* DFF33C 801925FC 00000000 */   nop
.Li1_80192600:
/* DFF340 80192600 3C0143E1 */  lui         $at, (0x43E10000 >> 16)
/* DFF344 80192604 44819000 */  mtc1        $at, $ft5
/* DFF348 80192608 3C01801A */  lui         $at, %hi(D_i1_8019B30C)
/* DFF34C 8019260C C42EB30C */  lwc1        $fa1, %lo(D_i1_8019B30C)($at)
/* DFF350 80192610 3C048016 */  lui         $a0, %hi(gObjects80)
/* DFF354 80192614 3C01801A */  lui         $at, %hi(D_i1_8019B310)
/* DFF358 80192618 44808000 */  mtc1        $zero, $ft4
/* DFF35C 8019261C 24841B00 */  addiu       $a0, $a0, %lo(gObjects80)
/* DFF360 80192620 C42CB310 */  lwc1        $fa0, %lo(D_i1_8019B310)($at)
/* DFF364 80192624 00001825 */  or          $v1, $zero, $zero
/* DFF368 80192628 24080082 */  addiu       $t0, $zero, 0x82
/* DFF36C 8019262C 24070032 */  addiu       $a3, $zero, 0x32
/* DFF370 80192630 24060081 */  addiu       $a2, $zero, 0x81
/* DFF374 80192634 24050080 */  addiu       $a1, $zero, 0x80
.Li1_80192638:
/* DFF378 80192638 94820002 */  lhu         $v0, 0x2($a0)
/* DFF37C 8019263C 50A20006 */  beql        $a1, $v0, .Li1_80192658
/* DFF380 80192640 C606000C */   lwc1       $ft1, 0xC($s0)
/* DFF384 80192644 50C20004 */  beql        $a2, $v0, .Li1_80192658
/* DFF388 80192648 C606000C */   lwc1       $ft1, 0xC($s0)
/* DFF38C 8019264C 5502001A */  bnel        $t0, $v0, .Li1_801926B8
/* DFF390 80192650 24630001 */   addiu      $v1, $v1, 0x1
/* DFF394 80192654 C606000C */  lwc1        $ft1, 0xC($s0)
.Li1_80192658:
/* DFF398 80192658 C482000C */  lwc1        $fv1, 0xC($a0)
/* DFF39C 8019265C 460C3000 */  add.s       $fv0, $ft1, $fa0
/* DFF3A0 80192660 46020201 */  sub.s       $ft2, $fv0, $fv1
/* DFF3A4 80192664 460E403C */  c.lt.s      $ft2, $fa1
/* DFF3A8 80192668 00000000 */  nop
/* DFF3AC 8019266C 45020012 */  bc1fl       .Li1_801926B8
/* DFF3B0 80192670 24630001 */   addiu      $v1, $v1, 0x1
/* DFF3B4 80192674 4600103C */  c.lt.s      $fv1, $fv0
/* DFF3B8 80192678 00000000 */  nop
/* DFF3BC 8019267C 4502000E */  bc1fl       .Li1_801926B8
/* DFF3C0 80192680 24630001 */   addiu      $v1, $v1, 0x1
/* DFF3C4 80192684 10450009 */  beq         $v0, $a1, .Li1_801926AC
/* DFF3C8 80192688 00000000 */   nop
/* DFF3CC 8019268C 10460005 */  beq         $v0, $a2, .Li1_801926A4
/* DFF3D0 80192690 3C014416 */   lui        $at, (0x44160000 >> 16)
/* DFF3D4 80192694 10480005 */  beq         $v0, $t0, .Li1_801926AC
/* DFF3D8 80192698 00000000 */   nop
/* DFF3DC 8019269C 10000003 */  b           .Li1_801926AC
/* DFF3E0 801926A0 00000000 */   nop
.Li1_801926A4:
/* DFF3E4 801926A4 44819000 */  mtc1        $at, $ft5
/* DFF3E8 801926A8 00000000 */  nop
.Li1_801926AC:
/* DFF3EC 801926AC 10000004 */  b           .Li1_801926C0
/* DFF3F0 801926B0 C4900004 */   lwc1       $ft4, 0x4($a0)
/* DFF3F4 801926B4 24630001 */  addiu       $v1, $v1, 0x1
.Li1_801926B8:
/* DFF3F8 801926B8 1467FFDF */  bne         $v1, $a3, .Li1_80192638
/* DFF3FC 801926BC 24840080 */   addiu      $a0, $a0, 0x80
.Li1_801926C0:
/* DFF400 801926C0 C6020004 */  lwc1        $fv1, 0x4($s0)
/* DFF404 801926C4 44803000 */  mtc1        $zero, $ft1
/* DFF408 801926C8 44805000 */  mtc1        $zero, $ft3
/* DFF40C 801926CC 46101100 */  add.s       $ft0, $fv1, $ft4
/* DFF410 801926D0 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* DFF414 801926D4 3C041903 */  lui         $a0, (0x1903205B >> 16)
/* DFF418 801926D8 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* DFF41C 801926DC 4606203C */  c.lt.s      $ft0, $ft1
/* DFF420 801926E0 3484205B */  ori         $a0, $a0, (0x1903205B & 0xFFFF)
/* DFF424 801926E4 26050100 */  addiu       $a1, $s0, 0x100
/* DFF428 801926E8 00003025 */  or          $a2, $zero, $zero
/* DFF42C 801926EC 45000009 */  bc1f        .Li1_80192714
/* DFF430 801926F0 E60A0114 */   swc1       $ft3, 0x114($s0)
/* DFF434 801926F4 46128001 */  sub.s       $fv0, $ft4, $ft5
/* DFF438 801926F8 3C014460 */  lui         $at, (0x44600000 >> 16)
/* DFF43C 801926FC 44814000 */  mtc1        $at, $ft2
/* DFF440 80192700 46020281 */  sub.s       $ft3, $fv0, $fv1
/* DFF444 80192704 E6000004 */  swc1        $fv0, 0x4($s0)
/* DFF448 80192708 460A4101 */  sub.s       $ft0, $ft2, $ft3
/* DFF44C 8019270C 10000008 */  b           .Li1_80192730
/* DFF450 80192710 E6040118 */   swc1       $ft0, 0x118($s0)
.Li1_80192714:
/* DFF454 80192714 46128000 */  add.s       $fv0, $ft4, $ft5
/* DFF458 80192718 3C014460 */  lui         $at, (0x44600000 >> 16)
/* DFF45C 8019271C 44814000 */  mtc1        $at, $ft2
/* DFF460 80192720 46020181 */  sub.s       $ft1, $fv0, $fv1
/* DFF464 80192724 E6000004 */  swc1        $fv0, 0x4($s0)
/* DFF468 80192728 46083280 */  add.s       $ft3, $ft1, $ft2
/* DFF46C 8019272C E60A0118 */  swc1        $ft3, 0x118($s0)
.Li1_80192730:
/* DFF470 80192730 8E180058 */  lw          $t8, 0x58($s0)
/* DFF474 80192734 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* DFF478 80192738 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* DFF47C 8019273C A61800BC */  sh          $t8, 0xBC($s0)
/* DFF480 80192740 AFB90014 */  sw          $t9, 0x14($sp)
/* DFF484 80192744 0C006486 */  jal         Audio_PlaySfx
/* DFF488 80192748 AFA70010 */   sw         $a3, 0x10($sp)
/* DFF48C 8019274C 24090002 */  addiu       $t1, $zero, 0x2
/* DFF490 80192750 A60900B8 */  sh          $t1, 0xB8($s0)
.Li1_80192754:
/* DFF494 80192754 960A00BC */  lhu         $t2, 0xBC($s0)
/* DFF498 80192758 3C063F33 */  lui         $a2, (0x3F333333 >> 16)
/* DFF49C 8019275C 34C63333 */  ori         $a2, $a2, (0x3F333333 & 0xFFFF)
/* DFF4A0 80192760 154000C9 */  bnez        $t2, .Li1_80192A88
/* DFF4A4 80192764 26040114 */   addiu      $a0, $s0, 0x114
/* DFF4A8 80192768 3C01801A */  lui         $at, %hi(D_i1_8019B314)
/* DFF4AC 8019276C C424B314 */  lwc1        $ft0, %lo(D_i1_8019B314)($at)
/* DFF4B0 80192770 8E050118 */  lw          $a1, 0x118($s0)
/* DFF4B4 80192774 3C0742A0 */  lui         $a3, (0x42A00000 >> 16)
/* DFF4B8 80192778 0C026F0B */  jal         Math_SmoothStepToF
/* DFF4BC 8019277C E7A40010 */   swc1       $ft0, 0x10($sp)
/* DFF4C0 80192780 44801000 */  mtc1        $zero, $fv1
/* DFF4C4 80192784 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* DFF4C8 80192788 E7A0003C */  swc1        $fv0, 0x3C($sp)
/* DFF4CC 8019278C E7A0004C */  swc1        $fv0, 0x4C($sp)
/* DFF4D0 80192790 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* DFF4D4 80192794 27A5004C */  addiu       $a1, $sp, 0x4C
/* DFF4D8 80192798 27A60040 */  addiu       $a2, $sp, 0x40
/* DFF4DC 8019279C E7A20050 */  swc1        $fv1, 0x50($sp)
/* DFF4E0 801927A0 0C001A5C */  jal         Matrix_MultVec3f
/* DFF4E4 801927A4 E7A20054 */   swc1       $fv1, 0x54($sp)
/* DFF4E8 801927A8 C6060004 */  lwc1        $ft1, 0x4($s0)
/* DFF4EC 801927AC C7A80040 */  lwc1        $ft2, 0x40($sp)
/* DFF4F0 801927B0 C6040008 */  lwc1        $ft0, 0x8($s0)
/* DFF4F4 801927B4 2404018A */  addiu       $a0, $zero, 0x18A
/* DFF4F8 801927B8 46083280 */  add.s       $ft3, $ft1, $ft2
/* DFF4FC 801927BC E60A0004 */  swc1        $ft3, 0x4($s0)
/* DFF500 801927C0 C7A60044 */  lwc1        $ft1, 0x44($sp)
/* DFF504 801927C4 C60A000C */  lwc1        $ft3, 0xC($s0)
/* DFF508 801927C8 46062200 */  add.s       $ft2, $ft0, $ft1
/* DFF50C 801927CC E6080008 */  swc1        $ft2, 0x8($s0)
/* DFF510 801927D0 C7A40048 */  lwc1        $ft0, 0x48($sp)
/* DFF514 801927D4 46045180 */  add.s       $ft1, $ft3, $ft0
/* DFF518 801927D8 0C01DE0F */  jal         func_8007783C
/* DFF51C 801927DC E606000C */   swc1       $ft1, 0xC($s0)
/* DFF520 801927E0 10400062 */  beqz        $v0, .Li1_8019296C
/* DFF524 801927E4 240B000B */   addiu      $t3, $zero, 0xB
/* DFF528 801927E8 A44B007A */  sh          $t3, 0x7A($v0)
/* DFF52C 801927EC 844C007A */  lh          $t4, 0x7A($v0)
/* DFF530 801927F0 240D0002 */  addiu       $t5, $zero, 0x2
/* DFF534 801927F4 A04D0000 */  sb          $t5, 0x0($v0)
/* DFF538 801927F8 A44C0078 */  sh          $t4, 0x78($v0)
/* DFF53C 801927FC 0C0013AC */  jal         Rand_ZeroOne
/* DFF540 80192800 AFA20038 */   sw         $v0, 0x38($sp)
/* DFF544 80192804 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFF548 80192808 44814000 */  mtc1        $at, $ft2
/* DFF54C 8019280C 3C014040 */  lui         $at, (0x40400000 >> 16)
/* DFF550 80192810 44812000 */  mtc1        $at, $ft0
/* DFF554 80192814 46080281 */  sub.s       $ft3, $fv0, $ft2
/* DFF558 80192818 C6080004 */  lwc1        $ft2, 0x4($s0)
/* DFF55C 8019281C 8FA30038 */  lw          $v1, 0x38($sp)
/* DFF560 80192820 46045182 */  mul.s       $ft1, $ft3, $ft0
/* DFF564 80192824 46083280 */  add.s       $ft3, $ft1, $ft2
/* DFF568 80192828 0C0013AC */  jal         Rand_ZeroOne
/* DFF56C 8019282C E46A0004 */   swc1       $ft3, 0x4($v1)
/* DFF570 80192830 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFF574 80192834 44812000 */  mtc1        $at, $ft0
/* DFF578 80192838 3C014040 */  lui         $at, (0x40400000 >> 16)
/* DFF57C 8019283C 44814000 */  mtc1        $at, $ft2
/* DFF580 80192840 46040181 */  sub.s       $ft1, $fv0, $ft0
/* DFF584 80192844 C6040008 */  lwc1        $ft0, 0x8($s0)
/* DFF588 80192848 8FA30038 */  lw          $v1, 0x38($sp)
/* DFF58C 8019284C 46083282 */  mul.s       $ft3, $ft1, $ft2
/* DFF590 80192850 46045180 */  add.s       $ft1, $ft3, $ft0
/* DFF594 80192854 0C0013AC */  jal         Rand_ZeroOne
/* DFF598 80192858 E4660008 */   swc1       $ft1, 0x8($v1)
/* DFF59C 8019285C 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFF5A0 80192860 44814000 */  mtc1        $at, $ft2
/* DFF5A4 80192864 3C014040 */  lui         $at, (0x40400000 >> 16)
/* DFF5A8 80192868 44812000 */  mtc1        $at, $ft0
/* DFF5AC 8019286C 46080281 */  sub.s       $ft3, $fv0, $ft2
/* DFF5B0 80192870 C608000C */  lwc1        $ft2, 0xC($s0)
/* DFF5B4 80192874 3C0142A0 */  lui         $at, (0x42A00000 >> 16)
/* DFF5B8 80192878 8FA30038 */  lw          $v1, 0x38($sp)
/* DFF5BC 8019287C 46045182 */  mul.s       $ft1, $ft3, $ft0
/* DFF5C0 80192880 44812000 */  mtc1        $at, $ft0
/* DFF5C4 80192884 3C014100 */  lui         $at, (0x41000000 >> 16)
/* DFF5C8 80192888 46083280 */  add.s       $ft3, $ft1, $ft2
/* DFF5CC 8019288C 44814000 */  mtc1        $at, $ft2
/* DFF5D0 80192890 46045180 */  add.s       $ft1, $ft3, $ft0
/* DFF5D4 80192894 E4680070 */  swc1        $ft2, 0x70($v1)
/* DFF5D8 80192898 0C0013AC */  jal         Rand_ZeroOne
/* DFF5DC 8019289C E466000C */   swc1       $ft1, 0xC($v1)
/* DFF5E0 801928A0 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* DFF5E4 801928A4 44815000 */  mtc1        $at, $ft3
/* DFF5E8 801928A8 8FA30038 */  lw          $v1, 0x38($sp)
/* DFF5EC 801928AC 460A0102 */  mul.s       $ft0, $fv0, $ft3
/* DFF5F0 801928B0 0C0013AC */  jal         Rand_ZeroOne
/* DFF5F4 801928B4 E4640018 */   swc1       $ft0, 0x18($v1)
/* DFF5F8 801928B8 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFF5FC 801928BC 44813000 */  mtc1        $at, $ft1
/* DFF600 801928C0 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* DFF604 801928C4 44815000 */  mtc1        $at, $ft3
/* DFF608 801928C8 46060201 */  sub.s       $ft2, $fv0, $ft1
/* DFF60C 801928CC 8FA30038 */  lw          $v1, 0x38($sp)
/* DFF610 801928D0 460A4102 */  mul.s       $ft0, $ft2, $ft3
/* DFF614 801928D4 0C0013AC */  jal         Rand_ZeroOne
/* DFF618 801928D8 E4640054 */   swc1       $ft0, 0x54($v1)
/* DFF61C 801928DC 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFF620 801928E0 44813000 */  mtc1        $at, $ft1
/* DFF624 801928E4 3C014040 */  lui         $at, (0x40400000 >> 16)
/* DFF628 801928E8 44815000 */  mtc1        $at, $ft3
/* DFF62C 801928EC 46060201 */  sub.s       $ft2, $fv0, $ft1
/* DFF630 801928F0 3C014120 */  lui         $at, (0x41200000 >> 16)
/* DFF634 801928F4 44813000 */  mtc1        $at, $ft1
/* DFF638 801928F8 8FA30038 */  lw          $v1, 0x38($sp)
/* DFF63C 801928FC 460A4102 */  mul.s       $ft0, $ft2, $ft3
/* DFF640 80192900 3C014040 */  lui         $at, (0x40400000 >> 16)
/* DFF644 80192904 44815000 */  mtc1        $at, $ft3
/* DFF648 80192908 240E0064 */  addiu       $t6, $zero, 0x64
/* DFF64C 8019290C 240FFFFB */  addiu       $t7, $zero, -0x5
/* DFF650 80192910 A46E0044 */  sh          $t6, 0x44($v1)
/* DFF654 80192914 A46F0046 */  sh          $t7, 0x46($v1)
/* DFF658 80192918 46062200 */  add.s       $ft2, $ft0, $ft1
/* DFF65C 8019291C E46A0068 */  swc1        $ft3, 0x68($v1)
/* DFF660 80192920 0C0013AC */  jal         Rand_ZeroOne
/* DFF664 80192924 E4680058 */   swc1       $ft2, 0x58($v1)
/* DFF668 80192928 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFF66C 8019292C 44812000 */  mtc1        $at, $ft0
/* DFF670 80192930 8FA30038 */  lw          $v1, 0x38($sp)
/* DFF674 80192934 4604003C */  c.lt.s      $fv0, $ft0
/* DFF678 80192938 00000000 */  nop
/* DFF67C 8019293C 45020005 */  bc1fl       .Li1_80192954
/* DFF680 80192940 8E180050 */   lw         $t8, 0x50($s0)
/* DFF684 80192944 C4660068 */  lwc1        $ft1, 0x68($v1)
/* DFF688 80192948 46003207 */  neg.s       $ft2, $ft1
/* DFF68C 8019294C E4680068 */  swc1        $ft2, 0x68($v1)
/* DFF690 80192950 8E180050 */  lw          $t8, 0x50($s0)
.Li1_80192954:
/* DFF694 80192954 33190001 */  andi        $t9, $t8, 0x1
/* DFF698 80192958 53200005 */  beql        $t9, $zero, .Li1_80192970
/* DFF69C 8019295C C7A6003C */   lwc1       $ft1, 0x3C($sp)
/* DFF6A0 80192960 C46A0058 */  lwc1        $ft3, 0x58($v1)
/* DFF6A4 80192964 46005107 */  neg.s       $ft0, $ft3
/* DFF6A8 80192968 E4640058 */  swc1        $ft0, 0x58($v1)
.Li1_8019296C:
/* DFF6AC 8019296C C7A6003C */  lwc1        $ft1, 0x3C($sp)
.Li1_80192970:
/* DFF6B0 80192970 3C014014 */  lui         $at, (0x40140000 >> 16)
/* DFF6B4 80192974 44814800 */  mtc1        $at, $ft2f
/* DFF6B8 80192978 46003021 */  cvt.d.s     $fv0, $ft1
/* DFF6BC 8019297C 44804000 */  mtc1        $zero, $ft2
/* DFF6C0 80192980 46200005 */  abs.d       $fv0, $fv0
/* DFF6C4 80192984 2409001E */  addiu       $t1, $zero, 0x1E
/* DFF6C8 80192988 4628003E */  c.le.d      $fv0, $ft2
/* DFF6CC 8019298C 00000000 */  nop
/* DFF6D0 80192990 4502003E */  bc1fl       .Li1_80192A8C
/* DFF6D4 80192994 8E0A0050 */   lw         $t2, 0x50($s0)
/* DFF6D8 80192998 860A00B8 */  lh          $t2, 0xB8($s0)
/* DFF6DC 8019299C C60A0004 */  lwc1        $ft3, 0x4($s0)
/* DFF6E0 801929A0 C6040008 */  lwc1        $ft0, 0x8($s0)
/* DFF6E4 801929A4 C606000C */  lwc1        $ft1, 0xC($s0)
/* DFF6E8 801929A8 254B0001 */  addiu       $t3, $t2, 0x1
/* DFF6EC 801929AC A60900BE */  sh          $t1, 0xBE($s0)
/* DFF6F0 801929B0 A60B00B8 */  sh          $t3, 0xB8($s0)
/* DFF6F4 801929B4 E60A011C */  swc1        $ft3, 0x11C($s0)
/* DFF6F8 801929B8 E6040120 */  swc1        $ft0, 0x120($s0)
/* DFF6FC 801929BC 10000032 */  b           .Li1_80192A88
/* DFF700 801929C0 E6060124 */   swc1       $ft1, 0x124($s0)
.Li1_801929C4:
/* DFF704 801929C4 960C00BE */  lhu         $t4, 0xBE($s0)
/* DFF708 801929C8 240D001E */  addiu       $t5, $zero, 0x1E
/* DFF70C 801929CC 2401000A */  addiu       $at, $zero, 0xA
/* DFF710 801929D0 01AC7023 */  subu        $t6, $t5, $t4
/* DFF714 801929D4 01C1001A */  div         $zero, $t6, $at
/* DFF718 801929D8 00007810 */  mfhi        $t7
/* DFF71C 801929DC 448F4000 */  mtc1        $t7, $ft2
/* DFF720 801929E0 3C014120 */  lui         $at, (0x41200000 >> 16)
/* DFF724 801929E4 44812000 */  mtc1        $at, $ft0
/* DFF728 801929E8 468042A0 */  cvt.s.w     $ft3, $ft2
/* DFF72C 801929EC 3C01801A */  lui         $at, %hi(D_i1_8019B318)
/* DFF730 801929F0 C428B318 */  lwc1        $ft2, %lo(D_i1_8019B318)($at)
/* DFF734 801929F4 3C014000 */  lui         $at, (0x40000000 >> 16)
/* DFF738 801929F8 46045183 */  div.s       $ft1, $ft3, $ft0
/* DFF73C 801929FC 44812000 */  mtc1        $at, $ft0
/* DFF740 80192A00 46083282 */  mul.s       $ft3, $ft1, $ft2
/* DFF744 80192A04 00000000 */  nop
/* DFF748 80192A08 46045302 */  mul.s       $fa0, $ft3, $ft0
/* DFF74C 80192A0C 0C008C24 */  jal         __sinf
/* DFF750 80192A10 00000000 */   nop
/* DFF754 80192A14 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* DFF758 80192A18 44813000 */  mtc1        $at, $ft1
/* DFF75C 80192A1C 44801000 */  mtc1        $zero, $fv1
/* DFF760 80192A20 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* DFF764 80192A24 46060202 */  mul.s       $ft2, $fv0, $ft1
/* DFF768 80192A28 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* DFF76C 80192A2C 27A5004C */  addiu       $a1, $sp, 0x4C
/* DFF770 80192A30 27A60040 */  addiu       $a2, $sp, 0x40
/* DFF774 80192A34 E7A20050 */  swc1        $fv1, 0x50($sp)
/* DFF778 80192A38 E7A20054 */  swc1        $fv1, 0x54($sp)
/* DFF77C 80192A3C 0C001A5C */  jal         Matrix_MultVec3f
/* DFF780 80192A40 E7A8004C */   swc1       $ft2, 0x4C($sp)
/* DFF784 80192A44 C60A011C */  lwc1        $ft3, 0x11C($s0)
/* DFF788 80192A48 C7A40040 */  lwc1        $ft0, 0x40($sp)
/* DFF78C 80192A4C C6080120 */  lwc1        $ft2, 0x120($s0)
/* DFF790 80192A50 961800BE */  lhu         $t8, 0xBE($s0)
/* DFF794 80192A54 46045180 */  add.s       $ft1, $ft3, $ft0
/* DFF798 80192A58 E6060004 */  swc1        $ft1, 0x4($s0)
/* DFF79C 80192A5C C7AA0044 */  lwc1        $ft3, 0x44($sp)
/* DFF7A0 80192A60 C6060124 */  lwc1        $ft1, 0x124($s0)
/* DFF7A4 80192A64 460A4100 */  add.s       $ft0, $ft2, $ft3
/* DFF7A8 80192A68 E6040008 */  swc1        $ft0, 0x8($s0)
/* DFF7AC 80192A6C C7A80048 */  lwc1        $ft2, 0x48($sp)
/* DFF7B0 80192A70 46083280 */  add.s       $ft3, $ft1, $ft2
/* DFF7B4 80192A74 17000004 */  bnez        $t8, .Li1_80192A88
/* DFF7B8 80192A78 E60A000C */   swc1       $ft3, 0xC($s0)
/* DFF7BC 80192A7C 861900B8 */  lh          $t9, 0xB8($s0)
/* DFF7C0 80192A80 27290001 */  addiu       $t1, $t9, 0x1
/* DFF7C4 80192A84 A60900B8 */  sh          $t1, 0xB8($s0)
.Li1_80192A88:
/* DFF7C8 80192A88 8E0A0050 */  lw          $t2, 0x50($s0)
.Li1_80192A8C:
/* DFF7CC 80192A8C 254B0001 */  addiu       $t3, $t2, 0x1
/* DFF7D0 80192A90 AE0B0050 */  sw          $t3, 0x50($s0)
/* DFF7D4 80192A94 8FBF0024 */  lw          $ra, 0x24($sp)
/* DFF7D8 80192A98 8FB00020 */  lw          $s0, 0x20($sp)
/* DFF7DC 80192A9C 03E00008 */  jr          $ra
/* DFF7E0 80192AA0 27BD0068 */   addiu      $sp, $sp, 0x68
.section .late_rodata
dlabel D_i1_8019B31C
/* E0805C 8019B31C 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_i1_80192AA4
/* DFF7E4 80192AA4 27BDFF98 */  addiu       $sp, $sp, -0x68
/* DFF7E8 80192AA8 AFB00034 */  sw          $s0, 0x34($sp)
/* DFF7EC 80192AAC 3C108014 */  lui         $s0, %hi(gCalcMatrix)
/* DFF7F0 80192AB0 AFB2003C */  sw          $s2, 0x3C($sp)
/* DFF7F4 80192AB4 F7B60018 */  sdc1        $fs1, 0x18($sp)
/* DFF7F8 80192AB8 3C01801A */  lui         $at, %hi(D_i1_8019B31C)
/* DFF7FC 80192ABC C436B31C */  lwc1        $fs1, %lo(D_i1_8019B31C)($at)
/* DFF800 80192AC0 00809025 */  or          $s2, $a0, $zero
/* DFF804 80192AC4 2610BBC8 */  addiu       $s0, $s0, %lo(gCalcMatrix)
/* DFF808 80192AC8 AFBF0044 */  sw          $ra, 0x44($sp)
/* DFF80C 80192ACC AFB30040 */  sw          $s3, 0x40($sp)
/* DFF810 80192AD0 AFB10038 */  sw          $s1, 0x38($sp)
/* DFF814 80192AD4 F7BA0028 */  sdc1        $fs3, 0x28($sp)
/* DFF818 80192AD8 F7B80020 */  sdc1        $fs2, 0x20($sp)
/* DFF81C 80192ADC F7B40010 */  sdc1        $fs0, 0x10($sp)
/* DFF820 80192AE0 C6440014 */  lwc1        $ft0, 0x14($s2)
/* DFF824 80192AE4 8E040000 */  lw          $a0, 0x0($s0)
/* DFF828 80192AE8 00003025 */  or          $a2, $zero, $zero
/* DFF82C 80192AEC 46162182 */  mul.s       $ft1, $ft0, $fs1
/* DFF830 80192AF0 44053000 */  mfc1        $a1, $ft1
/* DFF834 80192AF4 0C0017A4 */  jal         Matrix_RotateY
/* DFF838 80192AF8 00000000 */   nop
/* DFF83C 80192AFC C6480010 */  lwc1        $ft2, 0x10($s2)
/* DFF840 80192B00 8E040000 */  lw          $a0, 0x0($s0)
/* DFF844 80192B04 24060001 */  addiu       $a2, $zero, 0x1
/* DFF848 80192B08 46164282 */  mul.s       $ft3, $ft2, $fs1
/* DFF84C 80192B0C 44055000 */  mfc1        $a1, $ft3
/* DFF850 80192B10 0C001751 */  jal         Matrix_RotateX
/* DFF854 80192B14 00000000 */   nop
/* DFF858 80192B18 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* DFF85C 80192B1C 44818000 */  mtc1        $at, $ft4
/* DFF860 80192B20 C6400014 */  lwc1        $fv0, 0x14($s2)
/* DFF864 80192B24 3C0143A5 */  lui         $at, (0x43A50000 >> 16)
/* DFF868 80192B28 4610003E */  c.le.s      $fv0, $ft4
/* DFF86C 80192B2C 00000000 */  nop
/* DFF870 80192B30 45030008 */  bc1tl       .Li1_80192B54
/* DFF874 80192B34 3C01C2A0 */   lui        $at, (0xC2A00000 >> 16)
/* DFF878 80192B38 44819000 */  mtc1        $at, $ft5
/* DFF87C 80192B3C 3C01C2A0 */  lui         $at, (0xC2A00000 >> 16)
/* DFF880 80192B40 4600903E */  c.le.s      $ft5, $fv0
/* DFF884 80192B44 00000000 */  nop
/* DFF888 80192B48 4502001D */  bc1fl       .Li1_80192BC0
/* DFF88C 80192B4C 44800000 */   mtc1       $zero, $fv0
/* DFF890 80192B50 3C01C2A0 */  lui         $at, (0xC2A00000 >> 16)
.Li1_80192B54:
/* DFF894 80192B54 44810000 */  mtc1        $at, $fv0
/* DFF898 80192B58 3C0142A0 */  lui         $at, (0x42A00000 >> 16)
/* DFF89C 80192B5C 4481A000 */  mtc1        $at, $fs0
/* DFF8A0 80192B60 3C01801A */  lui         $at, %hi(D_i1_80199FFC)
/* DFF8A4 80192B64 3C12801A */  lui         $s2, %hi(D_i1_80199FFC)
/* DFF8A8 80192B68 4614003E */  c.le.s      $fv0, $fs0
/* DFF8AC 80192B6C E4209FFC */  swc1        $fv0, %lo(D_i1_80199FFC)($at)
/* DFF8B0 80192B70 3C014220 */  lui         $at, (0x42200000 >> 16)
/* DFF8B4 80192B74 26529FFC */  addiu       $s2, $s2, %lo(D_i1_80199FFC)
/* DFF8B8 80192B78 45020043 */  bc1fl       .Li1_80192C88
/* DFF8BC 80192B7C 8FBF0044 */   lw         $ra, 0x44($sp)
/* DFF8C0 80192B80 4481B000 */  mtc1        $at, $fs1
/* DFF8C4 80192B84 27B10050 */  addiu       $s1, $sp, 0x50
/* DFF8C8 80192B88 8E040000 */  lw          $a0, 0x0($s0)
.Li1_80192B8C:
/* DFF8CC 80192B8C 02402825 */  or          $a1, $s2, $zero
/* DFF8D0 80192B90 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* DFF8D4 80192B94 02203025 */   or         $a2, $s1, $zero
/* DFF8D8 80192B98 3C01801A */  lui         $at, %hi(D_i1_80199FFC)
/* DFF8DC 80192B9C C4209FFC */  lwc1        $fv0, %lo(D_i1_80199FFC)($at)
/* DFF8E0 80192BA0 46160000 */  add.s       $fv0, $fv0, $fs1
/* DFF8E4 80192BA4 4614003E */  c.le.s      $fv0, $fs0
/* DFF8E8 80192BA8 E4209FFC */  swc1        $fv0, %lo(D_i1_80199FFC)($at)
/* DFF8EC 80192BAC 4503FFF7 */  bc1tl       .Li1_80192B8C
/* DFF8F0 80192BB0 8E040000 */   lw         $a0, 0x0($s0)
/* DFF8F4 80192BB4 10000034 */  b           .Li1_80192C88
/* DFF8F8 80192BB8 8FBF0044 */   lw         $ra, 0x44($sp)
/* DFF8FC 80192BBC 44800000 */  mtc1        $zero, $fv0
.Li1_80192BC0:
/* DFF900 80192BC0 44811000 */  mtc1        $at, $fv1
/* DFF904 80192BC4 3C0142B4 */  lui         $at, (0x42B40000 >> 16)
/* DFF908 80192BC8 E7A00064 */  swc1        $fv0, 0x64($sp)
/* DFF90C 80192BCC E7A2005C */  swc1        $fv1, 0x5C($sp)
/* DFF910 80192BD0 C6460014 */  lwc1        $ft1, 0x14($s2)
/* DFF914 80192BD4 44812000 */  mtc1        $at, $ft0
/* DFF918 80192BD8 3C0142A0 */  lui         $at, (0x42A00000 >> 16)
/* DFF91C 80192BDC 27B3005C */  addiu       $s3, $sp, 0x5C
/* DFF920 80192BE0 4606203C */  c.lt.s      $ft0, $ft1
/* DFF924 80192BE4 00000000 */  nop
/* DFF928 80192BE8 45020005 */  bc1fl       .Li1_80192C00
/* DFF92C 80192BEC 3C0143E1 */   lui        $at, (0x43E10000 >> 16)
/* DFF930 80192BF0 4481A000 */  mtc1        $at, $fs0
/* DFF934 80192BF4 00000000 */  nop
/* DFF938 80192BF8 E7B4005C */  swc1        $fs0, 0x5C($sp)
/* DFF93C 80192BFC 3C0143E1 */  lui         $at, (0x43E10000 >> 16)
.Li1_80192C00:
/* DFF940 80192C00 4481D000 */  mtc1        $at, $fs3
/* DFF944 80192C04 3C014248 */  lui         $at, (0x42480000 >> 16)
/* DFF948 80192C08 46000506 */  mov.s       $fs0, $fv0
/* DFF94C 80192C0C 461A003E */  c.le.s      $fv0, $fs3
/* DFF950 80192C10 00000000 */  nop
/* DFF954 80192C14 4502001C */  bc1fl       .Li1_80192C88
/* DFF958 80192C18 8FBF0044 */   lw         $ra, 0x44($sp)
/* DFF95C 80192C1C 4481C000 */  mtc1        $at, $fs2
/* DFF960 80192C20 27B10050 */  addiu       $s1, $sp, 0x50
/* DFF964 80192C24 C6480014 */  lwc1        $ft2, 0x14($s2)
.Li1_80192C28:
/* DFF968 80192C28 8E040000 */  lw          $a0, 0x0($s0)
/* DFF96C 80192C2C 00003025 */  or          $a2, $zero, $zero
/* DFF970 80192C30 46164282 */  mul.s       $ft3, $ft2, $fs1
/* DFF974 80192C34 44055000 */  mfc1        $a1, $ft3
/* DFF978 80192C38 0C0017A4 */  jal         Matrix_RotateY
/* DFF97C 80192C3C 00000000 */   nop
/* DFF980 80192C40 C6500010 */  lwc1        $ft4, 0x10($s2)
/* DFF984 80192C44 8E040000 */  lw          $a0, 0x0($s0)
/* DFF988 80192C48 24060001 */  addiu       $a2, $zero, 0x1
/* DFF98C 80192C4C 46168482 */  mul.s       $ft5, $ft4, $fs1
/* DFF990 80192C50 44059000 */  mfc1        $a1, $ft5
/* DFF994 80192C54 0C001751 */  jal         Matrix_RotateX
/* DFF998 80192C58 00000000 */   nop
/* DFF99C 80192C5C E7B40060 */  swc1        $fs0, 0x60($sp)
/* DFF9A0 80192C60 8E040000 */  lw          $a0, 0x0($s0)
/* DFF9A4 80192C64 02602825 */  or          $a1, $s3, $zero
/* DFF9A8 80192C68 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* DFF9AC 80192C6C 02203025 */   or         $a2, $s1, $zero
/* DFF9B0 80192C70 4618A500 */  add.s       $fs0, $fs0, $fs2
/* DFF9B4 80192C74 461AA03E */  c.le.s      $fs0, $fs3
/* DFF9B8 80192C78 00000000 */  nop
/* DFF9BC 80192C7C 4503FFEA */  bc1tl       .Li1_80192C28
/* DFF9C0 80192C80 C6480014 */   lwc1       $ft2, 0x14($s2)
/* DFF9C4 80192C84 8FBF0044 */  lw          $ra, 0x44($sp)
.Li1_80192C88:
/* DFF9C8 80192C88 D7B40010 */  ldc1        $fs0, 0x10($sp)
/* DFF9CC 80192C8C D7B60018 */  ldc1        $fs1, 0x18($sp)
/* DFF9D0 80192C90 D7B80020 */  ldc1        $fs2, 0x20($sp)
/* DFF9D4 80192C94 D7BA0028 */  ldc1        $fs3, 0x28($sp)
/* DFF9D8 80192C98 8FB00034 */  lw          $s0, 0x34($sp)
/* DFF9DC 80192C9C 8FB10038 */  lw          $s1, 0x38($sp)
/* DFF9E0 80192CA0 8FB2003C */  lw          $s2, 0x3C($sp)
/* DFF9E4 80192CA4 8FB30040 */  lw          $s3, 0x40($sp)
/* DFF9E8 80192CA8 03E00008 */  jr          $ra
/* DFF9EC 80192CAC 27BD0068 */   addiu      $sp, $sp, 0x68
glabel func_i1_80192CB0
/* DFF9F0 80192CB0 C4840010 */  lwc1        $ft0, 0x10($a0)
/* DFF9F4 80192CB4 44804000 */  mtc1        $zero, $ft2
/* DFF9F8 80192CB8 4600218D */  trunc.w.s   $ft1, $ft0
/* DFF9FC 80192CBC E4880010 */  swc1        $ft2, 0x10($a0)
/* DFFA00 80192CC0 440F3000 */  mfc1        $t7, $ft1
/* DFFA04 80192CC4 00000000 */  nop
/* DFFA08 80192CC8 AC8F0050 */  sw          $t7, 0x50($a0)
/* DFFA0C 80192CCC 03E00008 */  jr          $ra
/* DFFA10 80192CD0 00000000 */   nop
.section .late_rodata
dlabel jtbl_i1_8019B320
/* E08060 8019B320 80192E18 */ .word .Li1_80192E18
/* E08064 8019B324 80192D4C */ .word .Li1_80192D4C
/* E08068 8019B328 80192D54 */ .word .Li1_80192D54
/* E0806C 8019B32C 80192D70 */ .word .Li1_80192D70
/* E08070 8019B330 80192D78 */ .word .Li1_80192D78
/* E08074 8019B334 80192E18 */ .word .Li1_80192E18

dlabel D_i1_8019B338
/* E08078 8019B338 3D4CCCCD */ .float 0.05000000075


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_i1_80192CD4
/* DFFA14 80192CD4 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* DFFA18 80192CD8 AFB00020 */  sw          $s0, 0x20($sp)
/* DFFA1C 80192CDC 00808025 */  or          $s0, $a0, $zero
/* DFFA20 80192CE0 AFBF0024 */  sw          $ra, 0x24($sp)
/* DFFA24 80192CE4 820E00D0 */  lb          $t6, 0xD0($s0)
/* DFFA28 80192CE8 24010001 */  addiu       $at, $zero, 0x1
/* DFFA2C 80192CEC 26040004 */  addiu       $a0, $s0, 0x4
/* DFFA30 80192CF0 15C10004 */  bne         $t6, $at, .Li1_80192D04
/* DFFA34 80192CF4 3C052912 */   lui        $a1, (0x29121007 >> 16)
/* DFFA38 80192CF8 A20000D0 */  sb          $zero, 0xD0($s0)
/* DFFA3C 80192CFC 0C01E9BC */  jal         func_8007A6F0
/* DFFA40 80192D00 34A51007 */   ori        $a1, $a1, (0x29121007 & 0xFFFF)
.Li1_80192D04:
/* DFFA44 80192D04 8E0F0054 */  lw          $t7, 0x54($s0)
/* DFFA48 80192D08 24180001 */  addiu       $t8, $zero, 0x1
/* DFFA4C 80192D0C 3C018013 */  lui         $at, %hi(D_80137E84)
/* DFFA50 80192D10 59E00006 */  blezl       $t7, .Li1_80192D2C
/* DFFA54 80192D14 860200B8 */   lh         $v0, 0xB8($s0)
/* DFFA58 80192D18 A0387E84 */  sb          $t8, %lo(D_80137E84)($at)
/* DFFA5C 80192D1C 8E190054 */  lw          $t9, 0x54($s0)
/* DFFA60 80192D20 2728FFFF */  addiu       $t0, $t9, -0x1
/* DFFA64 80192D24 AE080054 */  sw          $t0, 0x54($s0)
/* DFFA68 80192D28 860200B8 */  lh          $v0, 0xB8($s0)
.Li1_80192D2C:
/* DFFA6C 80192D2C 2C410006 */  sltiu       $at, $v0, 0x6
/* DFFA70 80192D30 10200039 */  beqz        $at, .Li1_80192E18
/* DFFA74 80192D34 00024880 */   sll        $t1, $v0, 2
/* DFFA78 80192D38 3C01801A */  lui         $at, %hi(jtbl_i1_8019B320)
/* DFFA7C 80192D3C 00290821 */  addu        $at, $at, $t1
/* DFFA80 80192D40 8C29B320 */  lw          $t1, %lo(jtbl_i1_8019B320)($at)
/* DFFA84 80192D44 01200008 */  jr          $t1
/* DFFA88 80192D48 00000000 */   nop
.Li1_80192D4C:
/* DFFA8C 80192D4C 8E0A0050 */  lw          $t2, 0x50($s0)
/* DFFA90 80192D50 A60A00BC */  sh          $t2, 0xBC($s0)
.Li1_80192D54:
/* DFFA94 80192D54 960B00BC */  lhu         $t3, 0xBC($s0)
/* DFFA98 80192D58 5D600030 */  bgtzl       $t3, .Li1_80192E1C
/* DFFA9C 80192D5C 8FBF0024 */   lw         $ra, 0x24($sp)
/* DFFAA0 80192D60 860C00B8 */  lh          $t4, 0xB8($s0)
/* DFFAA4 80192D64 258D0001 */  addiu       $t5, $t4, 0x1
/* DFFAA8 80192D68 1000002B */  b           .Li1_80192E18
/* DFFAAC 80192D6C A60D00B8 */   sh         $t5, 0xB8($s0)
.Li1_80192D70:
/* DFFAB0 80192D70 244E0001 */  addiu       $t6, $v0, 0x1
/* DFFAB4 80192D74 A60E00B8 */  sh          $t6, 0xB8($s0)
.Li1_80192D78:
/* DFFAB8 80192D78 3C01801A */  lui         $at, %hi(D_i1_8019B338)
/* DFFABC 80192D7C C426B338 */  lwc1        $ft1, %lo(D_i1_8019B338)($at)
/* DFFAC0 80192D80 C6040114 */  lwc1        $ft0, 0x114($s0)
/* DFFAC4 80192D84 C60A0010 */  lwc1        $ft3, 0x10($s0)
/* DFFAC8 80192D88 3C0142B4 */  lui         $at, (0x42B40000 >> 16)
/* DFFACC 80192D8C 46062200 */  add.s       $ft2, $ft0, $ft1
/* DFFAD0 80192D90 44813000 */  mtc1        $at, $ft1
/* DFFAD4 80192D94 3C018018 */  lui         $at, %hi(D_80178480)
/* DFFAD8 80192D98 240F000C */  addiu       $t7, $zero, 0xC
/* DFFADC 80192D9C E6080114 */  swc1        $ft2, 0x114($s0)
/* DFFAE0 80192DA0 C6100114 */  lwc1        $ft4, 0x114($s0)
/* DFFAE4 80192DA4 02002025 */  or          $a0, $s0, $zero
/* DFFAE8 80192DA8 46105480 */  add.s       $ft5, $ft3, $ft4
/* DFFAEC 80192DAC E6120010 */  swc1        $ft5, 0x10($s0)
/* DFFAF0 80192DB0 C6040010 */  lwc1        $ft0, 0x10($s0)
/* DFFAF4 80192DB4 4604303E */  c.le.s      $ft1, $ft0
/* DFFAF8 80192DB8 00000000 */  nop
/* DFFAFC 80192DBC 45020017 */  bc1fl       .Li1_80192E1C
/* DFFB00 80192DC0 8FBF0024 */   lw         $ra, 0x24($sp)
/* DFFB04 80192DC4 0C064AA9 */  jal         func_i1_80192AA4
/* DFFB08 80192DC8 AC2F8480 */   sw         $t7, %lo(D_80178480)($at)
/* DFFB0C 80192DCC 3C0142B4 */  lui         $at, (0x42B40000 >> 16)
/* DFFB10 80192DD0 44814000 */  mtc1        $at, $ft2
/* DFFB14 80192DD4 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* DFFB18 80192DD8 24180005 */  addiu       $t8, $zero, 0x5
/* DFFB1C 80192DDC 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* DFFB20 80192DE0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* DFFB24 80192DE4 AE180054 */  sw          $t8, 0x54($s0)
/* DFFB28 80192DE8 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* DFFB2C 80192DEC 3C041903 */  lui         $a0, (0x1903205C >> 16)
/* DFFB30 80192DF0 E6080010 */  swc1        $ft2, 0x10($s0)
/* DFFB34 80192DF4 AFB90014 */  sw          $t9, 0x14($sp)
/* DFFB38 80192DF8 AFA70010 */  sw          $a3, 0x10($sp)
/* DFFB3C 80192DFC 3484205C */  ori         $a0, $a0, (0x1903205C & 0xFFFF)
/* DFFB40 80192E00 26050100 */  addiu       $a1, $s0, 0x100
/* DFFB44 80192E04 0C006486 */  jal         Audio_PlaySfx
/* DFFB48 80192E08 00003025 */   or         $a2, $zero, $zero
/* DFFB4C 80192E0C 860800B8 */  lh          $t0, 0xB8($s0)
/* DFFB50 80192E10 25090001 */  addiu       $t1, $t0, 0x1
/* DFFB54 80192E14 A60900B8 */  sh          $t1, 0xB8($s0)
.Li1_80192E18:
/* DFFB58 80192E18 8FBF0024 */  lw          $ra, 0x24($sp)
.Li1_80192E1C:
/* DFFB5C 80192E1C 8FB00020 */  lw          $s0, 0x20($sp)
/* DFFB60 80192E20 27BD0028 */  addiu       $sp, $sp, 0x28
/* DFFB64 80192E24 03E00008 */  jr          $ra
/* DFFB68 80192E28 00000000 */   nop
glabel func_i1_80192E2C
/* DFFB6C 80192E2C 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* DFFB70 80192E30 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* DFFB74 80192E34 44810000 */  mtc1        $at, $fv0
/* DFFB78 80192E38 AFBF001C */  sw          $ra, 0x1C($sp)
/* DFFB7C 80192E3C AFA40020 */  sw          $a0, 0x20($sp)
/* DFFB80 80192E40 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* DFFB84 80192E44 44050000 */  mfc1        $a1, $fv0
/* DFFB88 80192E48 44070000 */  mfc1        $a3, $fv0
/* DFFB8C 80192E4C 240E0001 */  addiu       $t6, $zero, 0x1
/* DFFB90 80192E50 AFAE0010 */  sw          $t6, 0x10($sp)
/* DFFB94 80192E54 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* DFFB98 80192E58 0C00170D */  jal         Matrix_Scale
/* DFFB9C 80192E5C 3C063F00 */   lui        $a2, (0x3F000000 >> 16)
/* DFFBA0 80192E60 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* DFFBA4 80192E64 0C001BAE */  jal         Matrix_SetGfxMtx
/* DFFBA8 80192E68 24847E64 */   addiu      $a0, $a0, %lo(gMasterDisp)
/* DFFBAC 80192E6C 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* DFFBB0 80192E70 24847E64 */  addiu       $a0, $a0, %lo(gMasterDisp)
/* DFFBB4 80192E74 8C830000 */  lw          $v1, 0x0($a0)
/* DFFBB8 80192E78 3C190902 */  lui         $t9, %hi(D_901DA50)
/* DFFBBC 80192E7C 2739DA50 */  addiu       $t9, $t9, %lo(D_901DA50)
/* DFFBC0 80192E80 246F0008 */  addiu       $t7, $v1, 0x8
/* DFFBC4 80192E84 AC8F0000 */  sw          $t7, 0x0($a0)
/* DFFBC8 80192E88 3C180600 */  lui         $t8, (0x6000000 >> 16)
/* DFFBCC 80192E8C AC780000 */  sw          $t8, 0x0($v1)
/* DFFBD0 80192E90 AC790004 */  sw          $t9, 0x4($v1)
/* DFFBD4 80192E94 8FBF001C */  lw          $ra, 0x1C($sp)
/* DFFBD8 80192E98 27BD0020 */  addiu       $sp, $sp, 0x20
/* DFFBDC 80192E9C 03E00008 */  jr          $ra
/* DFFBE0 80192EA0 00000000 */   nop
glabel func_i1_80192EA4
/* DFFBE4 80192EA4 AFA40000 */  sw          $a0, 0x0($sp)
/* DFFBE8 80192EA8 03E00008 */  jr          $ra
/* DFFBEC 80192EAC 00000000 */   nop
.section .late_rodata
dlabel D_i1_8019B33C
/* E0807C 8019B33C 3C8EFA35 */ .float 0.01745329238

dlabel D_i1_8019B340
/* E08080 8019B340 3C8EFA35 */ .float 0.01745329238

dlabel D_i1_8019B344
/* E08084 8019B344 3C8EFA35 */ .float 0.01745329238

dlabel jtbl_i1_8019B348
/* E08088 8019B348 80193374 */ .word .Li1_80193374
/* E0808C 8019B34C 80192F5C */ .word .Li1_80192F5C
/* E08090 8019B350 80193058 */ .word .Li1_80193058
/* E08094 8019B354 801932B0 */ .word .Li1_801932B0
/* E08098 8019B358 80193374 */ .word .Li1_80193374

dlabel D_i1_8019B35C
/* E0809C 8019B35C 45098000 */ .float 2200

dlabel D_i1_8019B360
/* E080A0 8019B360 44898000 */ .float 1100

dlabel D_i1_8019B364
/* E080A4 8019B364 449AA000 */ .float 1237

dlabel D_i1_8019B368
/* E080A8 8019B368 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B36C
/* E080AC 8019B36C 40490FDB */ .float 3.141592741


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_i1_80192EB0
/* DFFBF0 80192EB0 27BDFFA0 */  addiu       $sp, $sp, -0x60
/* DFFBF4 80192EB4 AFB0001C */  sw          $s0, 0x1C($sp)
/* DFFBF8 80192EB8 3C108014 */  lui         $s0, %hi(gCalcMatrix)
/* DFFBFC 80192EBC AFB10020 */  sw          $s1, 0x20($sp)
/* DFFC00 80192EC0 00808825 */  or          $s1, $a0, $zero
/* DFFC04 80192EC4 2610BBC8 */  addiu       $s0, $s0, %lo(gCalcMatrix)
/* DFFC08 80192EC8 AFBF0024 */  sw          $ra, 0x24($sp)
/* DFFC0C 80192ECC 3C01801A */  lui         $at, %hi(D_i1_8019B33C)
/* DFFC10 80192ED0 C426B33C */  lwc1        $ft1, %lo(D_i1_8019B33C)($at)
/* DFFC14 80192ED4 C6240014 */  lwc1        $ft0, 0x14($s1)
/* DFFC18 80192ED8 8E040000 */  lw          $a0, 0x0($s0)
/* DFFC1C 80192EDC 00003025 */  or          $a2, $zero, $zero
/* DFFC20 80192EE0 46062202 */  mul.s       $ft2, $ft0, $ft1
/* DFFC24 80192EE4 44054000 */  mfc1        $a1, $ft2
/* DFFC28 80192EE8 0C0017A4 */  jal         Matrix_RotateY
/* DFFC2C 80192EEC 00000000 */   nop
/* DFFC30 80192EF0 3C01801A */  lui         $at, %hi(D_i1_8019B340)
/* DFFC34 80192EF4 C432B340 */  lwc1        $ft5, %lo(D_i1_8019B340)($at)
/* DFFC38 80192EF8 C62A0010 */  lwc1        $ft3, 0x10($s1)
/* DFFC3C 80192EFC 8E040000 */  lw          $a0, 0x0($s0)
/* DFFC40 80192F00 24060001 */  addiu       $a2, $zero, 0x1
/* DFFC44 80192F04 46125102 */  mul.s       $ft0, $ft3, $ft5
/* DFFC48 80192F08 44052000 */  mfc1        $a1, $ft0
/* DFFC4C 80192F0C 0C001751 */  jal         Matrix_RotateX
/* DFFC50 80192F10 00000000 */   nop
/* DFFC54 80192F14 3C01801A */  lui         $at, %hi(D_i1_8019B344)
/* DFFC58 80192F18 C428B344 */  lwc1        $ft2, %lo(D_i1_8019B344)($at)
/* DFFC5C 80192F1C C6260018 */  lwc1        $ft1, 0x18($s1)
/* DFFC60 80192F20 8E040000 */  lw          $a0, 0x0($s0)
/* DFFC64 80192F24 24060001 */  addiu       $a2, $zero, 0x1
/* DFFC68 80192F28 46083282 */  mul.s       $ft3, $ft1, $ft2
/* DFFC6C 80192F2C 44055000 */  mfc1        $a1, $ft3
/* DFFC70 80192F30 0C0017F8 */  jal         Matrix_RotateZ
/* DFFC74 80192F34 00000000 */   nop
/* DFFC78 80192F38 962E00B8 */  lhu         $t6, 0xB8($s1)
/* DFFC7C 80192F3C 2DC10005 */  sltiu       $at, $t6, 0x5
/* DFFC80 80192F40 1020010C */  beqz        $at, .Li1_80193374
/* DFFC84 80192F44 000E7080 */   sll        $t6, $t6, 2
/* DFFC88 80192F48 3C01801A */  lui         $at, %hi(jtbl_i1_8019B348)
/* DFFC8C 80192F4C 002E0821 */  addu        $at, $at, $t6
/* DFFC90 80192F50 8C2EB348 */  lw          $t6, %lo(jtbl_i1_8019B348)($at)
/* DFFC94 80192F54 01C00008 */  jr          $t6
/* DFFC98 80192F58 00000000 */   nop
.Li1_80192F5C:
/* DFFC9C 80192F5C 3C01801A */  lui         $at, %hi(D_i1_8019B35C)
/* DFFCA0 80192F60 C42EB35C */  lwc1        $fa1, %lo(D_i1_8019B35C)($at)
/* DFFCA4 80192F64 3C038016 */  lui         $v1, %hi(gObjects80)
/* DFFCA8 80192F68 3C01801A */  lui         $at, %hi(D_i1_8019B360)
/* DFFCAC 80192F6C 44808000 */  mtc1        $zero, $ft4
/* DFFCB0 80192F70 24631B00 */  addiu       $v1, $v1, %lo(gObjects80)
/* DFFCB4 80192F74 C42CB360 */  lwc1        $fa0, %lo(D_i1_8019B360)($at)
/* DFFCB8 80192F78 00002025 */  or          $a0, $zero, $zero
/* DFFCBC 80192F7C 24080032 */  addiu       $t0, $zero, 0x32
/* DFFCC0 80192F80 24070082 */  addiu       $a3, $zero, 0x82
/* DFFCC4 80192F84 24060081 */  addiu       $a2, $zero, 0x81
/* DFFCC8 80192F88 24050080 */  addiu       $a1, $zero, 0x80
.Li1_80192F8C:
/* DFFCCC 80192F8C 94620002 */  lhu         $v0, 0x2($v1)
/* DFFCD0 80192F90 50A20006 */  beql        $a1, $v0, .Li1_80192FAC
/* DFFCD4 80192F94 C632000C */   lwc1       $ft5, 0xC($s1)
/* DFFCD8 80192F98 50C20004 */  beql        $a2, $v0, .Li1_80192FAC
/* DFFCDC 80192F9C C632000C */   lwc1       $ft5, 0xC($s1)
/* DFFCE0 80192FA0 54E20010 */  bnel        $a3, $v0, .Li1_80192FE4
/* DFFCE4 80192FA4 24840001 */   addiu      $a0, $a0, 0x1
/* DFFCE8 80192FA8 C632000C */  lwc1        $ft5, 0xC($s1)
.Li1_80192FAC:
/* DFFCEC 80192FAC C462000C */  lwc1        $fv1, 0xC($v1)
/* DFFCF0 80192FB0 460C9000 */  add.s       $fv0, $ft5, $fa0
/* DFFCF4 80192FB4 46020101 */  sub.s       $ft0, $fv0, $fv1
/* DFFCF8 80192FB8 460E203C */  c.lt.s      $ft0, $fa1
/* DFFCFC 80192FBC 00000000 */  nop
/* DFFD00 80192FC0 45020008 */  bc1fl       .Li1_80192FE4
/* DFFD04 80192FC4 24840001 */   addiu      $a0, $a0, 0x1
/* DFFD08 80192FC8 4600103C */  c.lt.s      $fv1, $fv0
/* DFFD0C 80192FCC 00000000 */  nop
/* DFFD10 80192FD0 45020004 */  bc1fl       .Li1_80192FE4
/* DFFD14 80192FD4 24840001 */   addiu      $a0, $a0, 0x1
/* DFFD18 80192FD8 10000004 */  b           .Li1_80192FEC
/* DFFD1C 80192FDC C4700008 */   lwc1       $ft4, 0x8($v1)
/* DFFD20 80192FE0 24840001 */  addiu       $a0, $a0, 0x1
.Li1_80192FE4:
/* DFFD24 80192FE4 1488FFE9 */  bne         $a0, $t0, .Li1_80192F8C
/* DFFD28 80192FE8 24630080 */   addiu      $v1, $v1, 0x80
.Li1_80192FEC:
/* DFFD2C 80192FEC 44803000 */  mtc1        $zero, $ft1
/* DFFD30 80192FF0 C62A0008 */  lwc1        $ft3, 0x8($s1)
/* DFFD34 80192FF4 3C01801A */  lui         $at, %hi(D_i1_8019B364)
/* DFFD38 80192FF8 E6260114 */  swc1        $ft1, 0x114($s1)
/* DFFD3C 80192FFC C428B364 */  lwc1        $ft2, %lo(D_i1_8019B364)($at)
/* DFFD40 80193000 460A8481 */  sub.s       $ft5, $ft4, $ft3
/* DFFD44 80193004 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* DFFD48 80193008 44813000 */  mtc1        $at, $ft1
/* DFFD4C 8019300C 8E2F0054 */  lw          $t7, 0x54($s1)
/* DFFD50 80193010 46124101 */  sub.s       $ft0, $ft2, $ft5
/* DFFD54 80193014 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* DFFD58 80193018 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* DFFD5C 8019301C 46068280 */  add.s       $ft3, $ft4, $ft1
/* DFFD60 80193020 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* DFFD64 80193024 E6240118 */  swc1        $ft0, 0x118($s1)
/* DFFD68 80193028 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* DFFD6C 8019302C E62A0008 */  swc1        $ft3, 0x8($s1)
/* DFFD70 80193030 3C041903 */  lui         $a0, (0x1903205B >> 16)
/* DFFD74 80193034 A62F00BC */  sh          $t7, 0xBC($s1)
/* DFFD78 80193038 AFB80014 */  sw          $t8, 0x14($sp)
/* DFFD7C 8019303C AFA70010 */  sw          $a3, 0x10($sp)
/* DFFD80 80193040 3484205B */  ori         $a0, $a0, (0x1903205B & 0xFFFF)
/* DFFD84 80193044 26250100 */  addiu       $a1, $s1, 0x100
/* DFFD88 80193048 0C006486 */  jal         Audio_PlaySfx
/* DFFD8C 8019304C 00003025 */   or         $a2, $zero, $zero
/* DFFD90 80193050 24190002 */  addiu       $t9, $zero, 0x2
/* DFFD94 80193054 A63900B8 */  sh          $t9, 0xB8($s1)
.Li1_80193058:
/* DFFD98 80193058 962900BC */  lhu         $t1, 0xBC($s1)
/* DFFD9C 8019305C 3C063F33 */  lui         $a2, (0x3F333333 >> 16)
/* DFFDA0 80193060 34C63333 */  ori         $a2, $a2, (0x3F333333 & 0xFFFF)
/* DFFDA4 80193064 152000C3 */  bnez        $t1, .Li1_80193374
/* DFFDA8 80193068 26240114 */   addiu      $a0, $s1, 0x114
/* DFFDAC 8019306C 3C01801A */  lui         $at, %hi(D_i1_8019B368)
/* DFFDB0 80193070 C428B368 */  lwc1        $ft2, %lo(D_i1_8019B368)($at)
/* DFFDB4 80193074 8E250118 */  lw          $a1, 0x118($s1)
/* DFFDB8 80193078 3C0742A0 */  lui         $a3, (0x42A00000 >> 16)
/* DFFDBC 8019307C 0C026F0B */  jal         Math_SmoothStepToF
/* DFFDC0 80193080 E7A80010 */   swc1       $ft2, 0x10($sp)
/* DFFDC4 80193084 44801000 */  mtc1        $zero, $fv1
/* DFFDC8 80193088 E7A00040 */  swc1        $fv0, 0x40($sp)
/* DFFDCC 8019308C E7A00054 */  swc1        $fv0, 0x54($sp)
/* DFFDD0 80193090 8E040000 */  lw          $a0, 0x0($s0)
/* DFFDD4 80193094 27A50050 */  addiu       $a1, $sp, 0x50
/* DFFDD8 80193098 27A60044 */  addiu       $a2, $sp, 0x44
/* DFFDDC 8019309C E7A20050 */  swc1        $fv1, 0x50($sp)
/* DFFDE0 801930A0 0C001A5C */  jal         Matrix_MultVec3f
/* DFFDE4 801930A4 E7A20058 */   swc1       $fv1, 0x58($sp)
/* DFFDE8 801930A8 C6320004 */  lwc1        $ft5, 0x4($s1)
/* DFFDEC 801930AC C7A40044 */  lwc1        $ft0, 0x44($sp)
/* DFFDF0 801930B0 C62A0008 */  lwc1        $ft3, 0x8($s1)
/* DFFDF4 801930B4 2404018A */  addiu       $a0, $zero, 0x18A
/* DFFDF8 801930B8 46049180 */  add.s       $ft1, $ft5, $ft0
/* DFFDFC 801930BC C624000C */  lwc1        $ft0, 0xC($s1)
/* DFFE00 801930C0 E6260004 */  swc1        $ft1, 0x4($s1)
/* DFFE04 801930C4 C7A80048 */  lwc1        $ft2, 0x48($sp)
/* DFFE08 801930C8 46085480 */  add.s       $ft5, $ft3, $ft2
/* DFFE0C 801930CC E6320008 */  swc1        $ft5, 0x8($s1)
/* DFFE10 801930D0 C7A6004C */  lwc1        $ft1, 0x4C($sp)
/* DFFE14 801930D4 46062280 */  add.s       $ft3, $ft0, $ft1
/* DFFE18 801930D8 0C01DE0F */  jal         func_8007783C
/* DFFE1C 801930DC E62A000C */   swc1       $ft3, 0xC($s1)
/* DFFE20 801930E0 1040005D */  beqz        $v0, .Li1_80193258
/* DFFE24 801930E4 00408025 */   or         $s0, $v0, $zero
/* DFFE28 801930E8 240A000B */  addiu       $t2, $zero, 0xB
/* DFFE2C 801930EC A44A007A */  sh          $t2, 0x7A($v0)
/* DFFE30 801930F0 844B007A */  lh          $t3, 0x7A($v0)
/* DFFE34 801930F4 240C0002 */  addiu       $t4, $zero, 0x2
/* DFFE38 801930F8 A04C0000 */  sb          $t4, 0x0($v0)
/* DFFE3C 801930FC 0C0013AC */  jal         Rand_ZeroOne
/* DFFE40 80193100 A44B0078 */   sh         $t3, 0x78($v0)
/* DFFE44 80193104 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFFE48 80193108 44814000 */  mtc1        $at, $ft2
/* DFFE4C 8019310C 3C014040 */  lui         $at, (0x40400000 >> 16)
/* DFFE50 80193110 44812000 */  mtc1        $at, $ft0
/* DFFE54 80193114 46080481 */  sub.s       $ft5, $fv0, $ft2
/* DFFE58 80193118 C62A0004 */  lwc1        $ft3, 0x4($s1)
/* DFFE5C 8019311C 46049182 */  mul.s       $ft1, $ft5, $ft0
/* DFFE60 80193120 460A3200 */  add.s       $ft2, $ft1, $ft3
/* DFFE64 80193124 0C0013AC */  jal         Rand_ZeroOne
/* DFFE68 80193128 E6080004 */   swc1       $ft2, 0x4($s0)
/* DFFE6C 8019312C 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFFE70 80193130 44819000 */  mtc1        $at, $ft5
/* DFFE74 80193134 3C014040 */  lui         $at, (0x40400000 >> 16)
/* DFFE78 80193138 44813000 */  mtc1        $at, $ft1
/* DFFE7C 8019313C 46120101 */  sub.s       $ft0, $fv0, $ft5
/* DFFE80 80193140 C6280008 */  lwc1        $ft2, 0x8($s1)
/* DFFE84 80193144 46062282 */  mul.s       $ft3, $ft0, $ft1
/* DFFE88 80193148 46085480 */  add.s       $ft5, $ft3, $ft2
/* DFFE8C 8019314C 0C0013AC */  jal         Rand_ZeroOne
/* DFFE90 80193150 E6120008 */   swc1       $ft5, 0x8($s0)
/* DFFE94 80193154 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFFE98 80193158 44812000 */  mtc1        $at, $ft0
/* DFFE9C 8019315C 3C014040 */  lui         $at, (0x40400000 >> 16)
/* DFFEA0 80193160 44815000 */  mtc1        $at, $ft3
/* DFFEA4 80193164 46040181 */  sub.s       $ft1, $fv0, $ft0
/* DFFEA8 80193168 C632000C */  lwc1        $ft5, 0xC($s1)
/* DFFEAC 8019316C 3C0142A0 */  lui         $at, (0x42A00000 >> 16)
/* DFFEB0 80193170 460A3202 */  mul.s       $ft2, $ft1, $ft3
/* DFFEB4 80193174 44813000 */  mtc1        $at, $ft1
/* DFFEB8 80193178 3C014100 */  lui         $at, (0x41000000 >> 16)
/* DFFEBC 8019317C 46124100 */  add.s       $ft0, $ft2, $ft5
/* DFFEC0 80193180 44814000 */  mtc1        $at, $ft2
/* DFFEC4 80193184 46062280 */  add.s       $ft3, $ft0, $ft1
/* DFFEC8 80193188 E6080070 */  swc1        $ft2, 0x70($s0)
/* DFFECC 8019318C 0C0013AC */  jal         Rand_ZeroOne
/* DFFED0 80193190 E60A000C */   swc1       $ft3, 0xC($s0)
/* DFFED4 80193194 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* DFFED8 80193198 44819000 */  mtc1        $at, $ft5
/* DFFEDC 8019319C 00000000 */  nop
/* DFFEE0 801931A0 46120102 */  mul.s       $ft0, $fv0, $ft5
/* DFFEE4 801931A4 0C0013AC */  jal         Rand_ZeroOne
/* DFFEE8 801931A8 E6040018 */   swc1       $ft0, 0x18($s0)
/* DFFEEC 801931AC 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFFEF0 801931B0 44813000 */  mtc1        $at, $ft1
/* DFFEF4 801931B4 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* DFFEF8 801931B8 44814000 */  mtc1        $at, $ft2
/* DFFEFC 801931BC 46060281 */  sub.s       $ft3, $fv0, $ft1
/* DFFF00 801931C0 46085482 */  mul.s       $ft5, $ft3, $ft2
/* DFFF04 801931C4 0C0013AC */  jal         Rand_ZeroOne
/* DFFF08 801931C8 E6120054 */   swc1       $ft5, 0x54($s0)
/* DFFF0C 801931CC 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFFF10 801931D0 44812000 */  mtc1        $at, $ft0
/* DFFF14 801931D4 3C014040 */  lui         $at, (0x40400000 >> 16)
/* DFFF18 801931D8 44815000 */  mtc1        $at, $ft3
/* DFFF1C 801931DC 46040181 */  sub.s       $ft1, $fv0, $ft0
/* DFFF20 801931E0 3C014120 */  lui         $at, (0x41200000 >> 16)
/* DFFF24 801931E4 44819000 */  mtc1        $at, $ft5
/* DFFF28 801931E8 3C014040 */  lui         $at, (0x40400000 >> 16)
/* DFFF2C 801931EC 460A3202 */  mul.s       $ft2, $ft1, $ft3
/* DFFF30 801931F0 44813000 */  mtc1        $at, $ft1
/* DFFF34 801931F4 240D0064 */  addiu       $t5, $zero, 0x64
/* DFFF38 801931F8 240EFFFB */  addiu       $t6, $zero, -0x5
/* DFFF3C 801931FC A60D0044 */  sh          $t5, 0x44($s0)
/* DFFF40 80193200 A60E0046 */  sh          $t6, 0x46($s0)
/* DFFF44 80193204 E6060068 */  swc1        $ft1, 0x68($s0)
/* DFFF48 80193208 46124100 */  add.s       $ft0, $ft2, $ft5
/* DFFF4C 8019320C 0C0013AC */  jal         Rand_ZeroOne
/* DFFF50 80193210 E6040058 */   swc1       $ft0, 0x58($s0)
/* DFFF54 80193214 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* DFFF58 80193218 44815000 */  mtc1        $at, $ft3
/* DFFF5C 8019321C 00000000 */  nop
/* DFFF60 80193220 460A003C */  c.lt.s      $fv0, $ft3
/* DFFF64 80193224 00000000 */  nop
/* DFFF68 80193228 45020005 */  bc1fl       .Li1_80193240
/* DFFF6C 8019322C 8E2F0050 */   lw         $t7, 0x50($s1)
/* DFFF70 80193230 C6080068 */  lwc1        $ft2, 0x68($s0)
/* DFFF74 80193234 46004487 */  neg.s       $ft5, $ft2
/* DFFF78 80193238 E6120068 */  swc1        $ft5, 0x68($s0)
/* DFFF7C 8019323C 8E2F0050 */  lw          $t7, 0x50($s1)
.Li1_80193240:
/* DFFF80 80193240 31F80001 */  andi        $t8, $t7, 0x1
/* DFFF84 80193244 53000005 */  beql        $t8, $zero, .Li1_8019325C
/* DFFF88 80193248 C7AA0040 */   lwc1       $ft3, 0x40($sp)
/* DFFF8C 8019324C C6040058 */  lwc1        $ft0, 0x58($s0)
/* DFFF90 80193250 46002187 */  neg.s       $ft1, $ft0
/* DFFF94 80193254 E6060058 */  swc1        $ft1, 0x58($s0)
.Li1_80193258:
/* DFFF98 80193258 C7AA0040 */  lwc1        $ft3, 0x40($sp)
.Li1_8019325C:
/* DFFF9C 8019325C 3C014014 */  lui         $at, (0x40140000 >> 16)
/* DFFFA0 80193260 44814800 */  mtc1        $at, $ft2f
/* DFFFA4 80193264 46005021 */  cvt.d.s     $fv0, $ft3
/* DFFFA8 80193268 44804000 */  mtc1        $zero, $ft2
/* DFFFAC 8019326C 46200005 */  abs.d       $fv0, $fv0
/* DFFFB0 80193270 2419001E */  addiu       $t9, $zero, 0x1E
/* DFFFB4 80193274 4628003E */  c.le.d      $fv0, $ft2
/* DFFFB8 80193278 00000000 */  nop
/* DFFFBC 8019327C 4502003E */  bc1fl       .Li1_80193378
/* DFFFC0 80193280 822900D0 */   lb         $t1, 0xD0($s1)
/* DFFFC4 80193284 862900B8 */  lh          $t1, 0xB8($s1)
/* DFFFC8 80193288 C6320004 */  lwc1        $ft5, 0x4($s1)
/* DFFFCC 8019328C C6240008 */  lwc1        $ft0, 0x8($s1)
/* DFFFD0 80193290 C626000C */  lwc1        $ft1, 0xC($s1)
/* DFFFD4 80193294 252A0001 */  addiu       $t2, $t1, 0x1
/* DFFFD8 80193298 A63900BE */  sh          $t9, 0xBE($s1)
/* DFFFDC 8019329C A62A00B8 */  sh          $t2, 0xB8($s1)
/* DFFFE0 801932A0 E632011C */  swc1        $ft5, 0x11C($s1)
/* DFFFE4 801932A4 E6240120 */  swc1        $ft0, 0x120($s1)
/* DFFFE8 801932A8 10000032 */  b           .Li1_80193374
/* DFFFEC 801932AC E6260124 */   swc1       $ft1, 0x124($s1)
.Li1_801932B0:
/* DFFFF0 801932B0 44805000 */  mtc1        $zero, $ft3
/* DFFFF4 801932B4 240C001E */  addiu       $t4, $zero, 0x1E
/* DFFFF8 801932B8 2401000A */  addiu       $at, $zero, 0xA
/* DFFFFC 801932BC E7AA0050 */  swc1        $ft3, 0x50($sp)
/* E00000 801932C0 962B00BE */  lhu         $t3, 0xBE($s1)
/* E00004 801932C4 018B6823 */  subu        $t5, $t4, $t3
/* E00008 801932C8 01A1001A */  div         $zero, $t5, $at
/* E0000C 801932CC 00007010 */  mfhi        $t6
/* E00010 801932D0 448E4000 */  mtc1        $t6, $ft2
/* E00014 801932D4 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E00018 801932D8 44812000 */  mtc1        $at, $ft0
/* E0001C 801932DC 468044A0 */  cvt.s.w     $ft5, $ft2
/* E00020 801932E0 3C01801A */  lui         $at, %hi(D_i1_8019B36C)
/* E00024 801932E4 C42AB36C */  lwc1        $ft3, %lo(D_i1_8019B36C)($at)
/* E00028 801932E8 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E0002C 801932EC 46049183 */  div.s       $ft1, $ft5, $ft0
/* E00030 801932F0 44819000 */  mtc1        $at, $ft5
/* E00034 801932F4 460A3202 */  mul.s       $ft2, $ft1, $ft3
/* E00038 801932F8 00000000 */  nop
/* E0003C 801932FC 46124302 */  mul.s       $fa0, $ft2, $ft5
/* E00040 80193300 0C008C24 */  jal         __sinf
/* E00044 80193304 00000000 */   nop
/* E00048 80193308 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E0004C 8019330C 44812000 */  mtc1        $at, $ft0
/* E00050 80193310 44805000 */  mtc1        $zero, $ft3
/* E00054 80193314 8E040000 */  lw          $a0, 0x0($s0)
/* E00058 80193318 46040182 */  mul.s       $ft1, $fv0, $ft0
/* E0005C 8019331C 27A50050 */  addiu       $a1, $sp, 0x50
/* E00060 80193320 27A60044 */  addiu       $a2, $sp, 0x44
/* E00064 80193324 E7AA0058 */  swc1        $ft3, 0x58($sp)
/* E00068 80193328 0C001A5C */  jal         Matrix_MultVec3f
/* E0006C 8019332C E7A60054 */   swc1       $ft1, 0x54($sp)
/* E00070 80193330 C628011C */  lwc1        $ft2, 0x11C($s1)
/* E00074 80193334 C7B20044 */  lwc1        $ft5, 0x44($sp)
/* E00078 80193338 C6260120 */  lwc1        $ft1, 0x120($s1)
/* E0007C 8019333C 962F00BE */  lhu         $t7, 0xBE($s1)
/* E00080 80193340 46124100 */  add.s       $ft0, $ft2, $ft5
/* E00084 80193344 C6320124 */  lwc1        $ft5, 0x124($s1)
/* E00088 80193348 E6240004 */  swc1        $ft0, 0x4($s1)
/* E0008C 8019334C C7AA0048 */  lwc1        $ft3, 0x48($sp)
/* E00090 80193350 460A3200 */  add.s       $ft2, $ft1, $ft3
/* E00094 80193354 E6280008 */  swc1        $ft2, 0x8($s1)
/* E00098 80193358 C7A4004C */  lwc1        $ft0, 0x4C($sp)
/* E0009C 8019335C 46049180 */  add.s       $ft1, $ft5, $ft0
/* E000A0 80193360 15E00004 */  bnez        $t7, .Li1_80193374
/* E000A4 80193364 E626000C */   swc1       $ft1, 0xC($s1)
/* E000A8 80193368 863800B8 */  lh          $t8, 0xB8($s1)
/* E000AC 8019336C 27190001 */  addiu       $t9, $t8, 0x1
/* E000B0 80193370 A63900B8 */  sh          $t9, 0xB8($s1)
.Li1_80193374:
/* E000B4 80193374 822900D0 */  lb          $t1, 0xD0($s1)
.Li1_80193378:
/* E000B8 80193378 24010001 */  addiu       $at, $zero, 0x1
/* E000BC 8019337C 15210005 */  bne         $t1, $at, .Li1_80193394
/* E000C0 80193380 3C052912 */   lui        $a1, (0x29121007 >> 16)
/* E000C4 80193384 A22000D0 */  sb          $zero, 0xD0($s1)
/* E000C8 80193388 34A51007 */  ori         $a1, $a1, (0x29121007 & 0xFFFF)
/* E000CC 8019338C 0C01E9BC */  jal         func_8007A6F0
/* E000D0 80193390 26240004 */   addiu      $a0, $s1, 0x4
.Li1_80193394:
/* E000D4 80193394 8E2A0050 */  lw          $t2, 0x50($s1)
/* E000D8 80193398 254C0001 */  addiu       $t4, $t2, 0x1
/* E000DC 8019339C AE2C0050 */  sw          $t4, 0x50($s1)
/* E000E0 801933A0 8FBF0024 */  lw          $ra, 0x24($sp)
/* E000E4 801933A4 8FB0001C */  lw          $s0, 0x1C($sp)
/* E000E8 801933A8 8FB10020 */  lw          $s1, 0x20($sp)
/* E000EC 801933AC 03E00008 */  jr          $ra
/* E000F0 801933B0 27BD0060 */   addiu      $sp, $sp, 0x60
glabel func_i1_801933B4
/* E000F4 801933B4 3C01BF80 */  lui         $at, (0xBF800000 >> 16)
/* E000F8 801933B8 44812000 */  mtc1        $at, $ft0
/* E000FC 801933BC 3C0143F4 */  lui         $at, (0x43F40000 >> 16)
/* E00100 801933C0 44814000 */  mtc1        $at, $ft2
/* E00104 801933C4 C4860008 */  lwc1        $ft1, 0x8($a0)
/* E00108 801933C8 E4840110 */  swc1        $ft0, 0x110($a0)
/* E0010C 801933CC 46083280 */  add.s       $ft3, $ft1, $ft2
/* E00110 801933D0 E48A0008 */  swc1        $ft3, 0x8($a0)
/* E00114 801933D4 03E00008 */  jr          $ra
/* E00118 801933D8 00000000 */   nop
glabel func_i1_801933DC
/* E0011C 801933DC 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E00120 801933E0 AFB00020 */  sw          $s0, 0x20($sp)
/* E00124 801933E4 00808025 */  or          $s0, $a0, $zero
/* E00128 801933E8 AFBF0024 */  sw          $ra, 0x24($sp)
/* E0012C 801933EC 820E00D0 */  lb          $t6, 0xD0($s0)
/* E00130 801933F0 24010001 */  addiu       $at, $zero, 0x1
/* E00134 801933F4 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E00138 801933F8 15C1000B */  bne         $t6, $at, .Li1_80193428
/* E0013C 801933FC 24E75D34 */   addiu      $a3, $a3, %lo(D_800C5D34)
/* E00140 80193400 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E00144 80193404 A20000D0 */  sb          $zero, 0xD0($s0)
/* E00148 80193408 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E0014C 8019340C 3C042912 */  lui         $a0, (0x29121007 >> 16)
/* E00150 80193410 34841007 */  ori         $a0, $a0, (0x29121007 & 0xFFFF)
/* E00154 80193414 AFAF0014 */  sw          $t7, 0x14($sp)
/* E00158 80193418 AFA70010 */  sw          $a3, 0x10($sp)
/* E0015C 8019341C 26050100 */  addiu       $a1, $s0, 0x100
/* E00160 80193420 0C006486 */  jal         Audio_PlaySfx
/* E00164 80193424 00003025 */   or         $a2, $zero, $zero
.Li1_80193428:
/* E00168 80193428 860500B6 */  lh          $a1, 0xB6($s0)
/* E0016C 8019342C 24010026 */  addiu       $at, $zero, 0x26
/* E00170 80193430 3C041903 */  lui         $a0, (0x1903005A >> 16)
/* E00174 80193434 10A10003 */  beq         $a1, $at, .Li1_80193444
/* E00178 80193438 3484005A */   ori        $a0, $a0, (0x1903005A & 0xFFFF)
/* E0017C 8019343C 2401003A */  addiu       $at, $zero, 0x3A
/* E00180 80193440 14A1000A */  bne         $a1, $at, .Li1_8019346C
.Li1_80193444:
/* E00184 80193444 3C18800C */   lui        $t8, %hi(D_800C5D34)
/* E00188 80193448 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E0018C 8019344C 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E00190 80193450 27075D34 */  addiu       $a3, $t8, %lo(D_800C5D34)
/* E00194 80193454 AFA70010 */  sw          $a3, 0x10($sp)
/* E00198 80193458 AFB90014 */  sw          $t9, 0x14($sp)
/* E0019C 8019345C 26050100 */  addiu       $a1, $s0, 0x100
/* E001A0 80193460 0C006486 */  jal         Audio_PlaySfx
/* E001A4 80193464 00003025 */   or         $a2, $zero, $zero
/* E001A8 80193468 860500B6 */  lh          $a1, 0xB6($s0)
.Li1_8019346C:
/* E001AC 8019346C 3C040901 */  lui         $a0, %hi(D_900D098)
/* E001B0 80193470 2484D098 */  addiu       $a0, $a0, %lo(D_900D098)
/* E001B4 80193474 0C026A88 */  jal         Animation_GetFrameData
/* E001B8 80193478 2606018C */   addiu      $a2, $s0, 0x18C
/* E001BC 8019347C 3C040901 */  lui         $a0, %hi(D_900D098)
/* E001C0 80193480 0C026B37 */  jal         Animation_GetFrameCount
/* E001C4 80193484 2484D098 */   addiu      $a0, $a0, %lo(D_900D098)
/* E001C8 80193488 860500B6 */  lh          $a1, 0xB6($s0)
/* E001CC 8019348C 2448FFFF */  addiu       $t0, $v0, -0x1
/* E001D0 80193490 00A8082A */  slt         $at, $a1, $t0
/* E001D4 80193494 10200003 */  beqz        $at, .Li1_801934A4
/* E001D8 80193498 24A90001 */   addiu      $t1, $a1, 0x1
/* E001DC 8019349C 10000002 */  b           .Li1_801934A8
/* E001E0 801934A0 A60900B6 */   sh         $t1, 0xB6($s0)
.Li1_801934A4:
/* E001E4 801934A4 A60000B6 */  sh          $zero, 0xB6($s0)
.Li1_801934A8:
/* E001E8 801934A8 8E020028 */  lw          $v0, 0x28($s0)
/* E001EC 801934AC C60401B4 */  lwc1        $ft0, 0x1B4($s0)
/* E001F0 801934B0 E4440020 */  swc1        $ft0, 0x20($v0)
/* E001F4 801934B4 C60601A8 */  lwc1        $ft1, 0x1A8($s0)
/* E001F8 801934B8 46003207 */  neg.s       $ft2, $ft1
/* E001FC 801934BC E4480048 */  swc1        $ft2, 0x48($v0)
/* E00200 801934C0 8FBF0024 */  lw          $ra, 0x24($sp)
/* E00204 801934C4 8FB00020 */  lw          $s0, 0x20($sp)
/* E00208 801934C8 03E00008 */  jr          $ra
/* E0020C 801934CC 27BD0028 */   addiu      $sp, $sp, 0x28
glabel func_i1_801934D0
/* E00210 801934D0 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E00214 801934D4 44800000 */  mtc1        $zero, $fv0
/* E00218 801934D8 AFBF0024 */  sw          $ra, 0x24($sp)
/* E0021C 801934DC AFA40028 */  sw          $a0, 0x28($sp)
/* E00220 801934E0 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* E00224 801934E4 44050000 */  mfc1        $a1, $fv0
/* E00228 801934E8 44070000 */  mfc1        $a3, $fv0
/* E0022C 801934EC 240E0001 */  addiu       $t6, $zero, 0x1
/* E00230 801934F0 AFAE0010 */  sw          $t6, 0x10($sp)
/* E00234 801934F4 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* E00238 801934F8 0C0016C0 */  jal         Matrix_Translate
/* E0023C 801934FC 3C06C3F4 */   lui        $a2, (0xC3F40000 >> 16)
/* E00240 80193500 8FA20028 */  lw          $v0, 0x28($sp)
/* E00244 80193504 3C0F800C */  lui         $t7, %hi(gIdentityMatrix)
/* E00248 80193508 25EF4660 */  addiu       $t7, $t7, %lo(gIdentityMatrix)
/* E0024C 8019350C 3C050901 */  lui         $a1, %hi(D_900D164)
/* E00250 80193510 24A5D164 */  addiu       $a1, $a1, %lo(D_900D164)
/* E00254 80193514 AFAF0018 */  sw          $t7, 0x18($sp)
/* E00258 80193518 00002025 */  or          $a0, $zero, $zero
/* E0025C 8019351C 00003825 */  or          $a3, $zero, $zero
/* E00260 80193520 AFA00010 */  sw          $zero, 0x10($sp)
/* E00264 80193524 2446018C */  addiu       $a2, $v0, 0x18C
/* E00268 80193528 0C0269CB */  jal         Animation_DrawSkeleton
/* E0026C 8019352C AFA20014 */   sw         $v0, 0x14($sp)
/* E00270 80193530 8FBF0024 */  lw          $ra, 0x24($sp)
/* E00274 80193534 27BD0028 */  addiu       $sp, $sp, 0x28
/* E00278 80193538 03E00008 */  jr          $ra
/* E0027C 8019353C 00000000 */   nop
.section .late_rodata
dlabel D_i1_8019B370
/* E080B0 8019B370 455AC000 */ .float 3500

dlabel D_i1_8019B374
/* E080B4 8019B374 3E4CCCCD */ .float 0.200000003


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_i1_80193540
/* E00280 80193540 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E00284 80193544 AFBF0024 */  sw          $ra, 0x24($sp)
/* E00288 80193548 3C0E8018 */  lui         $t6, %hi(gPlayer)
/* E0028C 8019354C 8DCE8280 */  lw          $t6, %lo(gPlayer)($t6)
/* E00290 80193550 C482000C */  lwc1        $fv1, 0xC($a0)
/* E00294 80193554 3C01801A */  lui         $at, %hi(D_i1_8019B370)
/* E00298 80193558 C5C60138 */  lwc1        $ft1, 0x138($t6)
/* E0029C 8019355C C424B370 */  lwc1        $ft0, %lo(D_i1_8019B370)($at)
/* E002A0 80193560 3C0F8017 */  lui         $t7, %hi(gGameFrameCount)
/* E002A4 80193564 46023201 */  sub.s       $ft2, $ft1, $fv1
/* E002A8 80193568 4604403E */  c.le.s      $ft2, $ft0
/* E002AC 8019356C 00000000 */  nop
/* E002B0 80193570 45020013 */  bc1fl       .Li1_801935C0
/* E002B4 80193574 8FBF0024 */   lw         $ra, 0x24($sp)
/* E002B8 80193578 8DEF7DB0 */  lw          $t7, %lo(gGameFrameCount)($t7)
/* E002BC 8019357C 3C01801A */  lui         $at, %hi(D_i1_8019B374)
/* E002C0 80193580 2419000A */  addiu       $t9, $zero, 0xA
/* E002C4 80193584 31F80003 */  andi        $t8, $t7, 0x3
/* E002C8 80193588 5700000D */  bnel        $t8, $zero, .Li1_801935C0
/* E002CC 8019358C 8FBF0024 */   lw         $ra, 0x24($sp)
/* E002D0 80193590 44800000 */  mtc1        $zero, $fv0
/* E002D4 80193594 C48C0004 */  lwc1        $fa0, 0x4($a0)
/* E002D8 80193598 C48E0008 */  lwc1        $fa1, 0x8($a0)
/* E002DC 8019359C C42AB374 */  lwc1        $ft3, %lo(D_i1_8019B374)($at)
/* E002E0 801935A0 44061000 */  mfc1        $a2, $fv1
/* E002E4 801935A4 44070000 */  mfc1        $a3, $fv0
/* E002E8 801935A8 AFB9001C */  sw          $t9, 0x1C($sp)
/* E002EC 801935AC E7A00014 */  swc1        $fv0, 0x14($sp)
/* E002F0 801935B0 E7A00010 */  swc1        $fv0, 0x10($sp)
/* E002F4 801935B4 0C01F048 */  jal         func_8007C120
/* E002F8 801935B8 E7AA0018 */   swc1       $ft3, 0x18($sp)
/* E002FC 801935BC 8FBF0024 */  lw          $ra, 0x24($sp)
.Li1_801935C0:
/* E00300 801935C0 27BD0028 */  addiu       $sp, $sp, 0x28
/* E00304 801935C4 03E00008 */  jr          $ra
/* E00308 801935C8 00000000 */   nop
glabel func_i1_801935CC
/* E0030C 801935CC 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* E00310 801935D0 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E00314 801935D4 AFB00018 */  sw          $s0, 0x18($sp)
/* E00318 801935D8 44816000 */  mtc1        $at, $fa0
/* E0031C 801935DC 44800000 */  mtc1        $zero, $fv0
/* E00320 801935E0 00808025 */  or          $s0, $a0, $zero
/* E00324 801935E4 AFBF001C */  sw          $ra, 0x1C($sp)
/* E00328 801935E8 24090001 */  addiu       $t1, $zero, 0x1
/* E0032C 801935EC 3C018018 */  lui         $at, %hi(D_8017812C)
/* E00330 801935F0 AC29812C */  sw          $t1, %lo(D_8017812C)($at)
/* E00334 801935F4 3C01801A */  lui         $at, %hi(D_i1_8019C0B8)
/* E00338 801935F8 AC20C0B8 */  sw          $zero, %lo(D_i1_8019C0B8)($at)
/* E0033C 801935FC 3C01801A */  lui         $at, %hi(D_i1_8019C0BC)
/* E00340 80193600 AC20C0BC */  sw          $zero, %lo(D_i1_8019C0BC)($at)
/* E00344 80193604 3C01801A */  lui         $at, %hi(D_i1_8019C0C0)
/* E00348 80193608 AC20C0C0 */  sw          $zero, %lo(D_i1_8019C0C0)($at)
/* E0034C 8019360C 3C018018 */  lui         $at, %hi(gBossActive)
/* E00350 80193610 AC298284 */  sw          $t1, %lo(gBossActive)($at)
/* E00354 80193614 860F00A2 */  lh          $t7, 0xA2($s0)
/* E00358 80193618 3C19801A */  lui         $t9, %hi(D_i1_8019A04C)
/* E0035C 8019361C 240E0001 */  addiu       $t6, $zero, 0x1
/* E00360 80193620 2739A04C */  addiu       $t9, $t9, %lo(D_i1_8019A04C)
/* E00364 80193624 000FC080 */  sll         $t8, $t7, 2
/* E00368 80193628 A20E005E */  sb          $t6, 0x5E($s0)
/* E0036C 8019362C 03191021 */  addu        $v0, $t8, $t9
/* E00370 80193630 844A0000 */  lh          $t2, 0x0($v0)
/* E00374 80193634 240C0064 */  addiu       $t4, $zero, 0x64
/* E00378 80193638 3C01801A */  lui         $at, %hi(D_i1_8019AE00)
/* E0037C 8019363C 448A2000 */  mtc1        $t2, $ft0
/* E00380 80193640 C6100014 */  lwc1        $ft4, 0x14($s0)
/* E00384 80193644 3C0E801A */  lui         $t6, %hi(D_i1_8019B838)
/* E00388 80193648 468021A0 */  cvt.s.w     $ft1, $ft0
/* E0038C 8019364C 25C8B838 */  addiu       $t0, $t6, %lo(D_i1_8019B838)
/* E00390 80193650 3C05801A */  lui         $a1, %hi(D_i1_8019A820)
/* E00394 80193654 24A5A820 */  addiu       $a1, $a1, %lo(D_i1_8019A820)
/* E00398 80193658 01003025 */  or          $a2, $t0, $zero
/* E0039C 8019365C 00003825 */  or          $a3, $zero, $zero
/* E003A0 80193660 E60600E0 */  swc1        $ft1, 0xE0($s0)
/* E003A4 80193664 844B0002 */  lh          $t3, 0x2($v0)
/* E003A8 80193668 A60000B2 */  sh          $zero, 0xB2($s0)
/* E003AC 8019366C 860300B2 */  lh          $v1, 0xB2($s0)
/* E003B0 80193670 448B4000 */  mtc1        $t3, $ft2
/* E003B4 80193674 A60C0060 */  sh          $t4, 0x60($s0)
/* E003B8 80193678 000368C0 */  sll         $t5, $v1, 3
/* E003BC 8019367C 468042A0 */  cvt.s.w     $ft3, $ft2
/* E003C0 80193680 E60C00FC */  swc1        $fa0, 0xFC($s0)
/* E003C4 80193684 002D0821 */  addu        $at, $at, $t5
/* E003C8 80193688 A60300B4 */  sh          $v1, 0xB4($s0)
/* E003CC 8019368C 24040003 */  addiu       $a0, $zero, 0x3
/* E003D0 80193690 E60A0110 */  swc1        $ft3, 0x110($s0)
/* E003D4 80193694 C422AE00 */  lwc1        $fv1, %lo(D_i1_8019AE00)($at)
/* E003D8 80193698 E6000014 */  swc1        $fv0, 0x14($s0)
/* E003DC 8019369C E610011C */  swc1        $ft4, 0x11C($s0)
/* E003E0 801936A0 E60200F0 */  swc1        $fv1, 0xF0($s0)
/* E003E4 801936A4 E6020108 */  swc1        $fv1, 0x108($s0)
/* E003E8 801936A8 E602010C */  swc1        $fv1, 0x10C($s0)
.Li1_801936AC:
/* E003EC 801936AC 84AF0002 */  lh          $t7, 0x2($a1)
/* E003F0 801936B0 A4C00002 */  sh          $zero, 0x2($a2)
/* E003F4 801936B4 00001825 */  or          $v1, $zero, $zero
/* E003F8 801936B8 01001025 */  or          $v0, $t0, $zero
/* E003FC 801936BC A4CF0000 */  sh          $t7, 0x0($a2)
.Li1_801936C0:
/* E00400 801936C0 24630001 */  addiu       $v1, $v1, 0x1
/* E00404 801936C4 28610005 */  slti        $at, $v1, 0x5
/* E00408 801936C8 24420002 */  addiu       $v0, $v0, 0x2
/* E0040C 801936CC 1420FFFC */  bnez        $at, .Li1_801936C0
/* E00410 801936D0 A4400000 */   sh         $zero, 0x0($v0)
/* E00414 801936D4 00001825 */  or          $v1, $zero, $zero
/* E00418 801936D8 01001025 */  or          $v0, $t0, $zero
.Li1_801936DC:
/* E0041C 801936DC 24630001 */  addiu       $v1, $v1, 0x1
/* E00420 801936E0 28610003 */  slti        $at, $v1, 0x3
/* E00424 801936E4 2442000C */  addiu       $v0, $v0, 0xC
/* E00428 801936E8 E4400008 */  swc1        $fv0, 0x8($v0)
/* E0042C 801936EC E4400004 */  swc1        $fv0, 0x4($v0)
/* E00430 801936F0 1420FFFA */  bnez        $at, .Li1_801936DC
/* E00434 801936F4 E4400000 */   swc1       $fv0, 0x0($v0)
/* E00438 801936F8 00001825 */  or          $v1, $zero, $zero
/* E0043C 801936FC 01001025 */  or          $v0, $t0, $zero
.Li1_80193700:
/* E00440 80193700 24630001 */  addiu       $v1, $v1, 0x1
/* E00444 80193704 2442000C */  addiu       $v0, $v0, 0xC
/* E00448 80193708 E440002C */  swc1        $fv0, 0x2C($v0)
/* E0044C 8019370C E4400028 */  swc1        $fv0, 0x28($v0)
/* E00450 80193710 1464FFFB */  bne         $v1, $a0, .Li1_80193700
/* E00454 80193714 E4400024 */   swc1       $fv0, 0x24($v0)
/* E00458 80193718 24E70001 */  addiu       $a3, $a3, 0x1
/* E0045C 8019371C 2CE10011 */  sltiu       $at, $a3, 0x11
/* E00460 80193720 24C60080 */  addiu       $a2, $a2, 0x80
/* E00464 80193724 24A50018 */  addiu       $a1, $a1, 0x18
/* E00468 80193728 25080080 */  addiu       $t0, $t0, 0x80
/* E0046C 8019372C E4C0FFF8 */  swc1        $fv0, -0x8($a2)
/* E00470 80193730 E4C0FFF4 */  swc1        $fv0, -0xC($a2)
/* E00474 80193734 1420FFDD */  bnez        $at, .Li1_801936AC
/* E00478 80193738 A4C0FFFC */   sh         $zero, -0x4($a2)
/* E0047C 8019373C 3C02801A */  lui         $v0, %hi(D_i1_8019B7F0)
/* E00480 80193740 E60C0104 */  swc1        $fa0, 0x104($s0)
/* E00484 80193744 2442B7F0 */  addiu       $v0, $v0, %lo(D_i1_8019B7F0)
/* E00488 80193748 00003825 */  or          $a3, $zero, $zero
.Li1_8019374C:
/* E0048C 8019374C 24E70001 */  addiu       $a3, $a3, 0x1
/* E00490 80193750 2CE10021 */  sltiu       $at, $a3, 0x21
/* E00494 80193754 24420002 */  addiu       $v0, $v0, 0x2
/* E00498 80193758 1420FFFC */  bnez        $at, .Li1_8019374C
/* E0049C 8019375C A440FFFE */   sh         $zero, -0x2($v0)
/* E004A0 80193760 3C02801A */  lui         $v0, %hi(D_i1_8019A820 + 0x2)
/* E004A4 80193764 3C05801A */  lui         $a1, %hi(D_i1_8019A820 + 0x18)
/* E004A8 80193768 3C03801A */  lui         $v1, %hi(D_i1_8019A9B8)
/* E004AC 8019376C 2463A9B8 */  addiu       $v1, $v1, %lo(D_i1_8019A9B8)
/* E004B0 80193770 24A5A838 */  addiu       $a1, $a1, %lo(D_i1_8019A820 + 0x18)
/* E004B4 80193774 8442A822 */  lh          $v0, %lo(D_i1_8019A820 + 0x2)($v0)
.Li1_80193778:
/* E004B8 80193778 84B80002 */  lh          $t8, 0x2($a1)
/* E004BC 8019377C 84B9001A */  lh          $t9, 0x1A($a1)
/* E004C0 80193780 84AA0032 */  lh          $t2, 0x32($a1)
/* E004C4 80193784 00581021 */  addu        $v0, $v0, $t8
/* E004C8 80193788 84AB004A */  lh          $t3, 0x4A($a1)
/* E004CC 8019378C 00591021 */  addu        $v0, $v0, $t9
/* E004D0 80193790 24A50060 */  addiu       $a1, $a1, 0x60
/* E004D4 80193794 004A1021 */  addu        $v0, $v0, $t2
/* E004D8 80193798 14A3FFF7 */  bne         $a1, $v1, .Li1_80193778
/* E004DC 8019379C 004B1021 */   addu       $v0, $v0, $t3
/* E004E0 801937A0 860C0092 */  lh          $t4, 0x92($s0)
/* E004E4 801937A4 24430064 */  addiu       $v1, $v0, 0x64
/* E004E8 801937A8 3C04801A */  lui         $a0, %hi(D_i1_8019ACD4)
/* E004EC 801937AC 000C6880 */  sll         $t5, $t4, 2
/* E004F0 801937B0 A60300C4 */  sh          $v1, 0xC4($s0)
/* E004F4 801937B4 A60300C2 */  sh          $v1, 0xC2($s0)
/* E004F8 801937B8 008D2021 */  addu        $a0, $a0, $t5
/* E004FC 801937BC 8C84ACD4 */  lw          $a0, %lo(D_i1_8019ACD4)($a0)
/* E00500 801937C0 00002825 */  or          $a1, $zero, $zero
/* E00504 801937C4 0C026A88 */  jal         Animation_GetFrameData
/* E00508 801937C8 260601A0 */   addiu      $a2, $s0, 0x1A0
/* E0050C 801937CC 00002025 */  or          $a0, $zero, $zero
/* E00510 801937D0 34058018 */  ori         $a1, $zero, 0x8018
/* E00514 801937D4 00003025 */  or          $a2, $zero, $zero
/* E00518 801937D8 0C007511 */  jal         func_8001D444
/* E0051C 801937DC 240700FF */   addiu      $a3, $zero, 0xFF
/* E00520 801937E0 8FBF001C */  lw          $ra, 0x1C($sp)
/* E00524 801937E4 8FB00018 */  lw          $s0, 0x18($sp)
/* E00528 801937E8 27BD0020 */  addiu       $sp, $sp, 0x20
/* E0052C 801937EC 03E00008 */  jr          $ra
/* E00530 801937F0 00000000 */   nop
.section .late_rodata
dlabel D_i1_8019B378
/* E080B8 8019B378 3C8EFA35 */ .float 0.01745329238

dlabel D_i1_8019B37C
/* E080BC 8019B37C 3C8EFA35 */ .float 0.01745329238

dlabel D_i1_8019B380
/* E080C0 8019B380 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_i1_801937F4
/* E00534 801937F4 27BDFF88 */  addiu       $sp, $sp, -0x78
/* E00538 801937F8 AFB00020 */  sw          $s0, 0x20($sp)
/* E0053C 801937FC 00E08025 */  or          $s0, $a3, $zero
/* E00540 80193800 AFBF0024 */  sw          $ra, 0x24($sp)
/* E00544 80193804 AFA5007C */  sw          $a1, 0x7C($sp)
/* E00548 80193808 AFA60080 */  sw          $a2, 0x80($sp)
/* E0054C 8019380C 14800007 */  bnez        $a0, .Li1_8019382C
/* E00550 80193810 00002825 */   or         $a1, $zero, $zero
/* E00554 80193814 8FAE0088 */  lw          $t6, 0x88($sp)
/* E00558 80193818 C6040004 */  lwc1        $ft0, 0x4($s0)
/* E0055C 8019381C C5C6011C */  lwc1        $ft1, 0x11C($t6)
/* E00560 80193820 46062200 */  add.s       $ft2, $ft0, $ft1
/* E00564 80193824 10000026 */  b           .Li1_801938C0
/* E00568 80193828 E6080004 */   swc1       $ft2, 0x4($s0)
.Li1_8019382C:
/* E0056C 8019382C 24010014 */  addiu       $at, $zero, 0x14
/* E00570 80193830 14810023 */  bne         $a0, $at, .Li1_801938C0
/* E00574 80193834 8FAF0088 */   lw         $t7, 0x88($sp)
/* E00578 80193838 C60A0000 */  lwc1        $ft3, 0x0($s0)
/* E0057C 8019383C C5F000F0 */  lwc1        $ft4, 0xF0($t7)
/* E00580 80193840 44806000 */  mtc1        $zero, $fa0
/* E00584 80193844 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E00588 80193848 46105480 */  add.s       $ft5, $ft3, $ft4
/* E0058C 8019384C E6120000 */  swc1        $ft5, 0x0($s0)
/* E00590 80193850 C6000000 */  lwc1        $fv0, 0x0($s0)
/* E00594 80193854 460C003C */  c.lt.s      $fv0, $fa0
/* E00598 80193858 00000000 */  nop
/* E0059C 8019385C 4502000B */  bc1fl       .Li1_8019388C
/* E005A0 80193860 3C0143B4 */   lui        $at, (0x43B40000 >> 16)
/* E005A4 80193864 44811000 */  mtc1        $at, $fv1
/* E005A8 80193868 00000000 */  nop
/* E005AC 8019386C 46020100 */  add.s       $ft0, $fv0, $fv1
.Li1_80193870:
/* E005B0 80193870 E6040000 */  swc1        $ft0, 0x0($s0)
/* E005B4 80193874 C6000000 */  lwc1        $fv0, 0x0($s0)
/* E005B8 80193878 460C003C */  c.lt.s      $fv0, $fa0
/* E005BC 8019387C 00000000 */  nop
/* E005C0 80193880 4503FFFB */  bc1tl       .Li1_80193870
/* E005C4 80193884 46020100 */   add.s      $ft0, $fv0, $fv1
/* E005C8 80193888 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
.Li1_8019388C:
/* E005CC 8019388C 44811000 */  mtc1        $at, $fv1
/* E005D0 80193890 00000000 */  nop
/* E005D4 80193894 4600103E */  c.le.s      $fv1, $fv0
/* E005D8 80193898 00000000 */  nop
/* E005DC 8019389C 45000008 */  bc1f        .Li1_801938C0
/* E005E0 801938A0 00000000 */   nop
/* E005E4 801938A4 46020181 */  sub.s       $ft1, $fv0, $fv1
.Li1_801938A8:
/* E005E8 801938A8 E6060000 */  swc1        $ft1, 0x0($s0)
/* E005EC 801938AC C6000000 */  lwc1        $fv0, 0x0($s0)
/* E005F0 801938B0 4600103E */  c.le.s      $fv1, $fv0
/* E005F4 801938B4 00000000 */  nop
/* E005F8 801938B8 4503FFFB */  bc1tl       .Li1_801938A8
/* E005FC 801938BC 46020181 */   sub.s      $ft1, $fv0, $fv1
.Li1_801938C0:
/* E00600 801938C0 3C03801A */  lui         $v1, %hi(D_i1_8019A748)
/* E00604 801938C4 3C02801A */  lui         $v0, %hi(D_i1_8019A820)
/* E00608 801938C8 2442A820 */  addiu       $v0, $v0, %lo(D_i1_8019A820)
/* E0060C 801938CC 2463A748 */  addiu       $v1, $v1, %lo(D_i1_8019A748)
/* E00610 801938D0 84780000 */  lh          $t8, 0x0($v1)
.Li1_801938D4:
/* E00614 801938D4 5498011B */  bnel        $a0, $t8, .Li1_80193D44
/* E00618 801938D8 2463000C */   addiu      $v1, $v1, 0xC
/* E0061C 801938DC 8FB90080 */  lw          $t9, 0x80($sp)
/* E00620 801938E0 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E00624 801938E4 240C0001 */  addiu       $t4, $zero, 0x1
/* E00628 801938E8 8F250000 */  lw          $a1, 0x0($t9)
/* E0062C 801938EC 8F260004 */  lw          $a2, 0x4($t9)
/* E00630 801938F0 8F270008 */  lw          $a3, 0x8($t9)
/* E00634 801938F4 AFA30028 */  sw          $v1, 0x28($sp)
/* E00638 801938F8 AFAC0010 */  sw          $t4, 0x10($sp)
/* E0063C 801938FC 0C0016C0 */  jal         Matrix_Translate
/* E00640 80193900 8C84BBC8 */   lw         $a0, %lo(gCalcMatrix)($a0)
/* E00644 80193904 3C01801A */  lui         $at, %hi(D_i1_8019B378)
/* E00648 80193908 C42AB378 */  lwc1        $ft3, %lo(D_i1_8019B378)($at)
/* E0064C 8019390C C6080008 */  lwc1        $ft2, 0x8($s0)
/* E00650 80193910 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E00654 80193914 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E00658 80193918 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E0065C 8019391C 24060001 */  addiu       $a2, $zero, 0x1
/* E00660 80193920 44058000 */  mfc1        $a1, $ft4
/* E00664 80193924 0C0017F8 */  jal         Matrix_RotateZ
/* E00668 80193928 00000000 */   nop
/* E0066C 8019392C 3C01801A */  lui         $at, %hi(D_i1_8019B37C)
/* E00670 80193930 C424B37C */  lwc1        $ft0, %lo(D_i1_8019B37C)($at)
/* E00674 80193934 C6120004 */  lwc1        $ft5, 0x4($s0)
/* E00678 80193938 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E0067C 8019393C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E00680 80193940 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E00684 80193944 24060001 */  addiu       $a2, $zero, 0x1
/* E00688 80193948 44053000 */  mfc1        $a1, $ft1
/* E0068C 8019394C 0C0017A4 */  jal         Matrix_RotateY
/* E00690 80193950 00000000 */   nop
/* E00694 80193954 3C01801A */  lui         $at, %hi(D_i1_8019B380)
/* E00698 80193958 C42AB380 */  lwc1        $ft3, %lo(D_i1_8019B380)($at)
/* E0069C 8019395C C6080000 */  lwc1        $ft2, 0x0($s0)
/* E006A0 80193960 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E006A4 80193964 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E006A8 80193968 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E006AC 8019396C 24060001 */  addiu       $a2, $zero, 0x1
/* E006B0 80193970 44058000 */  mfc1        $a1, $ft4
/* E006B4 80193974 0C001751 */  jal         Matrix_RotateX
/* E006B8 80193978 00000000 */   nop
/* E006BC 8019397C 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* E006C0 80193980 3C058014 */  lui         $a1, %hi(gCalcMatrix)
/* E006C4 80193984 8CA5BBC8 */  lw          $a1, %lo(gCalcMatrix)($a1)
/* E006C8 80193988 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* E006CC 8019398C 0C0015D5 */  jal         Matrix_Mult
/* E006D0 80193990 24060001 */   addiu      $a2, $zero, 0x1
/* E006D4 80193994 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* E006D8 80193998 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* E006DC 8019399C 0C001BAE */  jal         Matrix_SetGfxMtx
/* E006E0 801939A0 02002025 */   or         $a0, $s0, $zero
/* E006E4 801939A4 8FA30028 */  lw          $v1, 0x28($sp)
/* E006E8 801939A8 3C0F801A */  lui         $t7, %hi(D_i1_8019B838)
/* E006EC 801939AC 25EFB838 */  addiu       $t7, $t7, %lo(D_i1_8019B838)
/* E006F0 801939B0 846D0008 */  lh          $t5, 0x8($v1)
/* E006F4 801939B4 000D71C0 */  sll         $t6, $t5, 7
/* E006F8 801939B8 01CF1021 */  addu        $v0, $t6, $t7
/* E006FC 801939BC 9458007C */  lhu         $t8, 0x7C($v0)
/* E00700 801939C0 33190001 */  andi        $t9, $t8, 0x1
/* E00704 801939C4 172000DC */  bnez        $t9, .Li1_80193D38
/* E00708 801939C8 00000000 */   nop
/* E0070C 801939CC 844C0000 */  lh          $t4, 0x0($v0)
/* E00710 801939D0 59800058 */  blezl       $t4, .Li1_80193B34
/* E00714 801939D4 846C000A */   lh         $t4, 0xA($v1)
/* E00718 801939D8 844D0006 */  lh          $t5, 0x6($v0)
/* E0071C 801939DC 24010002 */  addiu       $at, $zero, 0x2
/* E00720 801939E0 3C18801A */  lui         $t8, %hi(D_i1_8019A748 + 0xB4)
/* E00724 801939E4 31AE0002 */  andi        $t6, $t5, 0x2
/* E00728 801939E8 15C1001C */  bne         $t6, $at, .Li1_80193A5C
/* E0072C 801939EC 2718A7FC */   addiu      $t8, $t8, %lo(D_i1_8019A748 + 0xB4)
/* E00730 801939F0 02002025 */  or          $a0, $s0, $zero
/* E00734 801939F4 0C02E374 */  jal         RCP_SetupDL
/* E00738 801939F8 2405001E */   addiu      $a1, $zero, 0x1E
/* E0073C 801939FC 8FA4007C */  lw          $a0, 0x7C($sp)
/* E00740 80193A00 8E020000 */  lw          $v0, 0x0($s0)
/* E00744 80193A04 3C19FF00 */  lui         $t9, (0xFF0000FF >> 16)
/* E00748 80193A08 373900FF */  ori         $t9, $t9, (0xFF0000FF & 0xFFFF)
/* E0074C 80193A0C 244F0008 */  addiu       $t7, $v0, 0x8
/* E00750 80193A10 AE0F0000 */  sw          $t7, 0x0($s0)
/* E00754 80193A14 3C18FA00 */  lui         $t8, (0xFA000000 >> 16)
/* E00758 80193A18 AC580000 */  sw          $t8, 0x0($v0)
/* E0075C 80193A1C AC590004 */  sw          $t9, 0x4($v0)
/* E00760 80193A20 8C8C0000 */  lw          $t4, 0x0($a0)
/* E00764 80193A24 2405001D */  addiu       $a1, $zero, 0x1D
/* E00768 80193A28 11800008 */  beqz        $t4, .Li1_80193A4C
/* E0076C 80193A2C 00000000 */   nop
/* E00770 80193A30 8E020000 */  lw          $v0, 0x0($s0)
/* E00774 80193A34 3C0E0600 */  lui         $t6, (0x6000000 >> 16)
/* E00778 80193A38 244D0008 */  addiu       $t5, $v0, 0x8
/* E0077C 80193A3C AE0D0000 */  sw          $t5, 0x0($s0)
/* E00780 80193A40 AC4E0000 */  sw          $t6, 0x0($v0)
/* E00784 80193A44 8C8F0000 */  lw          $t7, 0x0($a0)
/* E00788 80193A48 AC4F0004 */  sw          $t7, 0x4($v0)
.Li1_80193A4C:
/* E0078C 80193A4C 0C02E374 */  jal         RCP_SetupDL
/* E00790 80193A50 02002025 */   or         $a0, $s0, $zero
/* E00794 80193A54 100000BD */  b           .Li1_80193D4C
/* E00798 80193A58 24050001 */   addiu      $a1, $zero, 0x1
.Li1_80193A5C:
/* E0079C 80193A5C 14780028 */  bne         $v1, $t8, .Li1_80193B00
/* E007A0 80193A60 8FA4007C */   lw         $a0, 0x7C($sp)
/* E007A4 80193A64 02002025 */  or          $a0, $s0, $zero
/* E007A8 80193A68 0C02E374 */  jal         RCP_SetupDL
/* E007AC 80193A6C 2405001E */   addiu      $a1, $zero, 0x1E
/* E007B0 80193A70 8FB90088 */  lw          $t9, 0x88($sp)
/* E007B4 80193A74 240E00FF */  addiu       $t6, $zero, 0xFF
/* E007B8 80193A78 8FA5007C */  lw          $a1, 0x7C($sp)
/* E007BC 80193A7C C7320118 */  lwc1        $ft5, 0x118($t9)
/* E007C0 80193A80 3C18FA00 */  lui         $t8, (0xFA000000 >> 16)
/* E007C4 80193A84 3C01FF00 */  lui         $at, (0xFF0000FF >> 16)
/* E007C8 80193A88 4600910D */  trunc.w.s   $ft0, $ft5
/* E007CC 80193A8C 440D2000 */  mfc1        $t5, $ft0
/* E007D0 80193A90 00000000 */  nop
/* E007D4 80193A94 01CD4823 */  subu        $t1, $t6, $t5
/* E007D8 80193A98 8E020000 */  lw          $v0, 0x0($s0)
/* E007DC 80193A9C 312400FF */  andi        $a0, $t1, 0xFF
/* E007E0 80193AA0 0004CC00 */  sll         $t9, $a0, 16
/* E007E4 80193AA4 244F0008 */  addiu       $t7, $v0, 0x8
/* E007E8 80193AA8 AE0F0000 */  sw          $t7, 0x0($s0)
/* E007EC 80193AAC 03216025 */  or          $t4, $t9, $at
/* E007F0 80193AB0 00047200 */  sll         $t6, $a0, 8
/* E007F4 80193AB4 018E6825 */  or          $t5, $t4, $t6
/* E007F8 80193AB8 35AF00FF */  ori         $t7, $t5, (0xFF0000FF & 0xFFFF)
/* E007FC 80193ABC AC4F0004 */  sw          $t7, 0x4($v0)
/* E00800 80193AC0 AC580000 */  sw          $t8, 0x0($v0)
/* E00804 80193AC4 8CB80000 */  lw          $t8, 0x0($a1)
/* E00808 80193AC8 02002025 */  or          $a0, $s0, $zero
/* E0080C 80193ACC 13000008 */  beqz        $t8, .Li1_80193AF0
/* E00810 80193AD0 00000000 */   nop
/* E00814 80193AD4 8E020000 */  lw          $v0, 0x0($s0)
/* E00818 80193AD8 3C0C0600 */  lui         $t4, (0x6000000 >> 16)
/* E0081C 80193ADC 24590008 */  addiu       $t9, $v0, 0x8
/* E00820 80193AE0 AE190000 */  sw          $t9, 0x0($s0)
/* E00824 80193AE4 AC4C0000 */  sw          $t4, 0x0($v0)
/* E00828 80193AE8 8CAE0000 */  lw          $t6, 0x0($a1)
/* E0082C 80193AEC AC4E0004 */  sw          $t6, 0x4($v0)
.Li1_80193AF0:
/* E00830 80193AF0 0C02E374 */  jal         RCP_SetupDL
/* E00834 80193AF4 2405001D */   addiu      $a1, $zero, 0x1D
/* E00838 80193AF8 10000094 */  b           .Li1_80193D4C
/* E0083C 80193AFC 24050001 */   addiu      $a1, $zero, 0x1
.Li1_80193B00:
/* E00840 80193B00 8C8D0000 */  lw          $t5, 0x0($a0)
/* E00844 80193B04 11A0008C */  beqz        $t5, .Li1_80193D38
/* E00848 80193B08 00000000 */   nop
/* E0084C 80193B0C 8E020000 */  lw          $v0, 0x0($s0)
/* E00850 80193B10 3C180600 */  lui         $t8, (0x6000000 >> 16)
/* E00854 80193B14 244F0008 */  addiu       $t7, $v0, 0x8
/* E00858 80193B18 AE0F0000 */  sw          $t7, 0x0($s0)
/* E0085C 80193B1C AC580000 */  sw          $t8, 0x0($v0)
/* E00860 80193B20 8C990000 */  lw          $t9, 0x0($a0)
/* E00864 80193B24 AC590004 */  sw          $t9, 0x4($v0)
/* E00868 80193B28 10000088 */  b           .Li1_80193D4C
/* E0086C 80193B2C 24050001 */   addiu      $a1, $zero, 0x1
/* E00870 80193B30 846C000A */  lh          $t4, 0xA($v1)
.Li1_80193B34:
/* E00874 80193B34 02002025 */  or          $a0, $s0, $zero
/* E00878 80193B38 24050022 */  addiu       $a1, $zero, 0x22
/* E0087C 80193B3C 1580005C */  bnez        $t4, .Li1_80193CB0
/* E00880 80193B40 00000000 */   nop
/* E00884 80193B44 C4460074 */  lwc1        $ft1, 0x74($v0)
/* E00888 80193B48 3C0D8017 */  lui         $t5, %hi(gGameFrameCount)
/* E0088C 80193B4C 4600320D */  trunc.w.s   $ft2, $ft1
/* E00890 80193B50 44094000 */  mfc1        $t1, $ft2
/* E00894 80193B54 00000000 */  nop
/* E00898 80193B58 51200046 */  beql        $t1, $zero, .Li1_80193C74
/* E0089C 80193B5C 8E020000 */   lw         $v0, 0x0($s0)
/* E008A0 80193B60 8DAD7DB0 */  lw          $t5, %lo(gGameFrameCount)($t5)
/* E008A4 80193B64 24010002 */  addiu       $at, $zero, 0x2
/* E008A8 80193B68 31AF0002 */  andi        $t7, $t5, 0x2
/* E008AC 80193B6C 55E10041 */  bnel        $t7, $at, .Li1_80193C74
/* E008B0 80193B70 8E020000 */   lw         $v0, 0x0($s0)
/* E008B4 80193B74 C44A006C */  lwc1        $ft3, 0x6C($v0)
/* E008B8 80193B78 C4520064 */  lwc1        $ft5, 0x64($v0)
/* E008BC 80193B7C 8FAC007C */  lw          $t4, 0x7C($sp)
/* E008C0 80193B80 4600540D */  trunc.w.s   $ft4, $ft3
/* E008C4 80193B84 02002025 */  or          $a0, $s0, $zero
/* E008C8 80193B88 8D8E0000 */  lw          $t6, 0x0($t4)
/* E008CC 80193B8C 4600910D */  trunc.w.s   $ft0, $ft5
/* E008D0 80193B90 440A8000 */  mfc1        $t2, $ft4
/* E008D4 80193B94 2405001F */  addiu       $a1, $zero, 0x1F
/* E008D8 80193B98 440B2000 */  mfc1        $t3, $ft0
/* E008DC 80193B9C 11C00066 */  beqz        $t6, .Li1_80193D38
/* E008E0 80193BA0 00000000 */   nop
/* E008E4 80193BA4 AFA30028 */  sw          $v1, 0x28($sp)
/* E008E8 80193BA8 AFA90064 */  sw          $t1, 0x64($sp)
/* E008EC 80193BAC AFAA0060 */  sw          $t2, 0x60($sp)
/* E008F0 80193BB0 0C02E374 */  jal         RCP_SetupDL
/* E008F4 80193BB4 AFAB005C */   sw         $t3, 0x5C($sp)
/* E008F8 80193BB8 8FA90064 */  lw          $t1, 0x64($sp)
/* E008FC 80193BBC 8FA30028 */  lw          $v1, 0x28($sp)
/* E00900 80193BC0 8FAA0060 */  lw          $t2, 0x60($sp)
/* E00904 80193BC4 29210081 */  slti        $at, $t1, 0x81
/* E00908 80193BC8 14200002 */  bnez        $at, .Li1_80193BD4
/* E0090C 80193BCC 8FAB005C */   lw         $t3, 0x5C($sp)
/* E00910 80193BD0 24090080 */  addiu       $t1, $zero, 0x80
.Li1_80193BD4:
/* E00914 80193BD4 29410081 */  slti        $at, $t2, 0x81
/* E00918 80193BD8 14200002 */  bnez        $at, .Li1_80193BE4
/* E0091C 80193BDC 3C0FFA00 */   lui        $t7, (0xFA000000 >> 16)
/* E00920 80193BE0 240A0080 */  addiu       $t2, $zero, 0x80
.Li1_80193BE4:
/* E00924 80193BE4 29610081 */  slti        $at, $t3, 0x81
/* E00928 80193BE8 14200002 */  bnez        $at, .Li1_80193BF4
/* E0092C 80193BEC 314C00FF */   andi       $t4, $t2, 0xFF
/* E00930 80193BF0 240B0080 */  addiu       $t3, $zero, 0x80
.Li1_80193BF4:
/* E00934 80193BF4 8E020000 */  lw          $v0, 0x0($s0)
/* E00938 80193BF8 000BCE00 */  sll         $t9, $t3, 24
/* E0093C 80193BFC 000C7400 */  sll         $t6, $t4, 16
/* E00940 80193C00 244D0008 */  addiu       $t5, $v0, 0x8
/* E00944 80193C04 AE0D0000 */  sw          $t5, 0x0($s0)
/* E00948 80193C08 AC4F0000 */  sw          $t7, 0x0($v0)
/* E0094C 80193C0C 312F00FF */  andi        $t7, $t1, 0xFF
/* E00950 80193C10 000FC200 */  sll         $t8, $t7, 8
/* E00954 80193C14 032E6825 */  or          $t5, $t9, $t6
/* E00958 80193C18 01B86025 */  or          $t4, $t5, $t8
/* E0095C 80193C1C 359900FF */  ori         $t9, $t4, 0xFF
/* E00960 80193C20 AC590004 */  sw          $t9, 0x4($v0)
/* E00964 80193C24 8E020000 */  lw          $v0, 0x0($s0)
/* E00968 80193C28 3C0FFB00 */  lui         $t7, (0xFB000000 >> 16)
/* E0096C 80193C2C 240DFF00 */  addiu       $t5, $zero, -0x100
/* E00970 80193C30 244E0008 */  addiu       $t6, $v0, 0x8
/* E00974 80193C34 AE0E0000 */  sw          $t6, 0x0($s0)
/* E00978 80193C38 AC4D0004 */  sw          $t5, 0x4($v0)
/* E0097C 80193C3C AC4F0000 */  sw          $t7, 0x0($v0)
/* E00980 80193C40 8E020000 */  lw          $v0, 0x0($s0)
/* E00984 80193C44 3C0C0600 */  lui         $t4, (0x6000000 >> 16)
/* E00988 80193C48 02002025 */  or          $a0, $s0, $zero
/* E0098C 80193C4C 24580008 */  addiu       $t8, $v0, 0x8
/* E00990 80193C50 AE180000 */  sw          $t8, 0x0($s0)
/* E00994 80193C54 AC4C0000 */  sw          $t4, 0x0($v0)
/* E00998 80193C58 8C790004 */  lw          $t9, 0x4($v1)
/* E0099C 80193C5C AC590004 */  sw          $t9, 0x4($v0)
/* E009A0 80193C60 0C02E374 */  jal         RCP_SetupDL
/* E009A4 80193C64 2405001D */   addiu      $a1, $zero, 0x1D
/* E009A8 80193C68 10000038 */  b           .Li1_80193D4C
/* E009AC 80193C6C 24050001 */   addiu      $a1, $zero, 0x1
/* E009B0 80193C70 8E020000 */  lw          $v0, 0x0($s0)
.Li1_80193C74:
/* E009B4 80193C74 3C0FFA00 */  lui         $t7, (0xFA000000 >> 16)
/* E009B8 80193C78 240DFFFF */  addiu       $t5, $zero, -0x1
/* E009BC 80193C7C 244E0008 */  addiu       $t6, $v0, 0x8
/* E009C0 80193C80 AE0E0000 */  sw          $t6, 0x0($s0)
/* E009C4 80193C84 AC4D0004 */  sw          $t5, 0x4($v0)
/* E009C8 80193C88 AC4F0000 */  sw          $t7, 0x0($v0)
/* E009CC 80193C8C 8E020000 */  lw          $v0, 0x0($s0)
/* E009D0 80193C90 3C0C0600 */  lui         $t4, (0x6000000 >> 16)
/* E009D4 80193C94 24580008 */  addiu       $t8, $v0, 0x8
/* E009D8 80193C98 AE180000 */  sw          $t8, 0x0($s0)
/* E009DC 80193C9C AC4C0000 */  sw          $t4, 0x0($v0)
/* E009E0 80193CA0 8C790004 */  lw          $t9, 0x4($v1)
/* E009E4 80193CA4 AC590004 */  sw          $t9, 0x4($v0)
/* E009E8 80193CA8 10000028 */  b           .Li1_80193D4C
/* E009EC 80193CAC 24050001 */   addiu      $a1, $zero, 0x1
.Li1_80193CB0:
/* E009F0 80193CB0 0C02E374 */  jal         RCP_SetupDL
/* E009F4 80193CB4 AFA30028 */   sw         $v1, 0x28($sp)
/* E009F8 80193CB8 8FAE0088 */  lw          $t6, 0x88($sp)
/* E009FC 80193CBC 3C09801A */  lui         $t1, %hi(D_i1_8019AD68)
/* E00A00 80193CC0 8FA30028 */  lw          $v1, 0x28($sp)
/* E00A04 80193CC4 C5C600F8 */  lwc1        $ft1, 0xF8($t6)
/* E00A08 80193CC8 3C0CFA00 */  lui         $t4, (0xFA000000 >> 16)
/* E00A0C 80193CCC 02002025 */  or          $a0, $s0, $zero
/* E00A10 80193CD0 4600320D */  trunc.w.s   $ft2, $ft1
/* E00A14 80193CD4 440D4000 */  mfc1        $t5, $ft2
/* E00A18 80193CD8 00000000 */  nop
/* E00A1C 80193CDC 012D4821 */  addu        $t1, $t1, $t5
/* E00A20 80193CE0 9129AD68 */  lbu         $t1, %lo(D_i1_8019AD68)($t1)
/* E00A24 80193CE4 8E020000 */  lw          $v0, 0x0($s0)
/* E00A28 80193CE8 312600FF */  andi        $a2, $t1, 0xFF
/* E00A2C 80193CEC 0006CE00 */  sll         $t9, $a2, 24
/* E00A30 80193CF0 24580008 */  addiu       $t8, $v0, 0x8
/* E00A34 80193CF4 AE180000 */  sw          $t8, 0x0($s0)
/* E00A38 80193CF8 00067400 */  sll         $t6, $a2, 16
/* E00A3C 80193CFC 032E7825 */  or          $t7, $t9, $t6
/* E00A40 80193D00 00066A00 */  sll         $t5, $a2, 8
/* E00A44 80193D04 01EDC025 */  or          $t8, $t7, $t5
/* E00A48 80193D08 AC4C0000 */  sw          $t4, 0x0($v0)
/* E00A4C 80193D0C 370C00FF */  ori         $t4, $t8, 0xFF
/* E00A50 80193D10 AC4C0004 */  sw          $t4, 0x4($v0)
/* E00A54 80193D14 8E020000 */  lw          $v0, 0x0($s0)
/* E00A58 80193D18 3C0E0600 */  lui         $t6, (0x6000000 >> 16)
/* E00A5C 80193D1C 24590008 */  addiu       $t9, $v0, 0x8
/* E00A60 80193D20 AE190000 */  sw          $t9, 0x0($s0)
/* E00A64 80193D24 AC4E0000 */  sw          $t6, 0x0($v0)
/* E00A68 80193D28 8C6F0004 */  lw          $t7, 0x4($v1)
/* E00A6C 80193D2C AC4F0004 */  sw          $t7, 0x4($v0)
/* E00A70 80193D30 0C02E374 */  jal         RCP_SetupDL
/* E00A74 80193D34 2405001D */   addiu      $a1, $zero, 0x1D
.Li1_80193D38:
/* E00A78 80193D38 10000004 */  b           .Li1_80193D4C
/* E00A7C 80193D3C 24050001 */   addiu      $a1, $zero, 0x1
/* E00A80 80193D40 2463000C */  addiu       $v1, $v1, 0xC
.Li1_80193D44:
/* E00A84 80193D44 5462FEE3 */  bnel        $v1, $v0, .Li1_801938D4
/* E00A88 80193D48 84780000 */   lh         $t8, 0x0($v1)
.Li1_80193D4C:
/* E00A8C 80193D4C 00A01025 */  or          $v0, $a1, $zero
/* E00A90 80193D50 8FBF0024 */  lw          $ra, 0x24($sp)
/* E00A94 80193D54 8FB00020 */  lw          $s0, 0x20($sp)
/* E00A98 80193D58 27BD0078 */  addiu       $sp, $sp, 0x78
/* E00A9C 80193D5C 03E00008 */  jr          $ra
/* E00AA0 80193D60 00000000 */   nop
.section .late_rodata
dlabel D_i1_8019B384
/* E080C4 8019B384 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_i1_80193D64
/* E00AA4 80193D64 27BDFF40 */  addiu       $sp, $sp, -0xC0
/* E00AA8 80193D68 AFBF0064 */  sw          $ra, 0x64($sp)
/* E00AAC 80193D6C AFBE0060 */  sw          $fp, 0x60($sp)
/* E00AB0 80193D70 AFB7005C */  sw          $s7, 0x5C($sp)
/* E00AB4 80193D74 AFB60058 */  sw          $s6, 0x58($sp)
/* E00AB8 80193D78 AFB50054 */  sw          $s5, 0x54($sp)
/* E00ABC 80193D7C AFB40050 */  sw          $s4, 0x50($sp)
/* E00AC0 80193D80 AFB3004C */  sw          $s3, 0x4C($sp)
/* E00AC4 80193D84 AFB20048 */  sw          $s2, 0x48($sp)
/* E00AC8 80193D88 AFB10044 */  sw          $s1, 0x44($sp)
/* E00ACC 80193D8C AFB00040 */  sw          $s0, 0x40($sp)
/* E00AD0 80193D90 F7BA0038 */  sdc1        $fs3, 0x38($sp)
/* E00AD4 80193D94 F7B80030 */  sdc1        $fs2, 0x30($sp)
/* E00AD8 80193D98 F7B60028 */  sdc1        $fs1, 0x28($sp)
/* E00ADC 80193D9C F7B40020 */  sdc1        $fs0, 0x20($sp)
/* E00AE0 80193DA0 AFA500C4 */  sw          $a1, 0xC4($sp)
/* E00AE4 80193DA4 AFA600C8 */  sw          $a2, 0xC8($sp)
/* E00AE8 80193DA8 00803825 */  or          $a3, $a0, $zero
/* E00AEC 80193DAC 8FAE00C8 */  lw          $t6, 0xC8($sp)
/* E00AF0 80193DB0 3C014204 */  lui         $at, (0x42040000 >> 16)
/* E00AF4 80193DB4 44812000 */  mtc1        $at, $ft0
/* E00AF8 80193DB8 8DD00028 */  lw          $s0, 0x28($t6)
/* E00AFC 80193DBC 3C02801A */  lui         $v0, %hi(D_i1_8019A478)
/* E00B00 80193DC0 2442A478 */  addiu       $v0, $v0, %lo(D_i1_8019A478)
/* E00B04 80193DC4 E6040000 */  swc1        $ft0, 0x0($s0)
/* E00B08 80193DC8 AFA000BC */  sw          $zero, 0xBC($sp)
/* E00B0C 80193DCC 26100004 */  addiu       $s0, $s0, 0x4
.Li1_80193DD0:
/* E00B10 80193DD0 844F0000 */  lh          $t7, 0x0($v0)
/* E00B14 80193DD4 84530004 */  lh          $s3, 0x4($v0)
/* E00B18 80193DD8 54EF0032 */  bnel        $a3, $t7, .Li1_80193EA4
/* E00B1C 80193DDC 8FB900BC */   lw         $t9, 0xBC($sp)
/* E00B20 80193DE0 8FB800BC */  lw          $t8, 0xBC($sp)
/* E00B24 80193DE4 3C03801A */  lui         $v1, %hi(D_i1_8019B838)
/* E00B28 80193DE8 84440002 */  lh          $a0, 0x2($v0)
/* E00B2C 80193DEC 0018C9C0 */  sll         $t9, $t8, 7
/* E00B30 80193DF0 00791821 */  addu        $v1, $v1, $t9
/* E00B34 80193DF4 8463B838 */  lh          $v1, %lo(D_i1_8019B838)($v1)
/* E00B38 80193DF8 AFA000BC */  sw          $zero, 0xBC($sp)
/* E00B3C 80193DFC 3C0C801A */  lui         $t4, %hi(D_i1_8019A268)
/* E00B40 80193E00 0003402A */  slt         $t0, $zero, $v1
/* E00B44 80193E04 11000006 */  beqz        $t0, .Li1_80193E20
/* E00B48 80193E08 00045900 */   sll        $t3, $a0, 4
/* E00B4C 80193E0C 3C0A801A */  lui         $t2, %hi(D_i1_8019A058)
/* E00B50 80193E10 254AA058 */  addiu       $t2, $t2, %lo(D_i1_8019A058)
/* E00B54 80193E14 00044900 */  sll         $t1, $a0, 4
/* E00B58 80193E18 10000003 */  b           .Li1_80193E28
/* E00B5C 80193E1C 012A8821 */   addu       $s1, $t1, $t2
.Li1_80193E20:
/* E00B60 80193E20 258CA268 */  addiu       $t4, $t4, %lo(D_i1_8019A268)
/* E00B64 80193E24 016C8821 */  addu        $s1, $t3, $t4
.Li1_80193E28:
/* E00B68 80193E28 1A60001A */  blez        $s3, .Li1_80193E94
/* E00B6C 80193E2C 0000A025 */   or         $s4, $zero, $zero
/* E00B70 80193E30 3C128014 */  lui         $s2, %hi(gCalcMatrix)
/* E00B74 80193E34 2652BBC8 */  addiu       $s2, $s2, %lo(gCalcMatrix)
/* E00B78 80193E38 AFA700C0 */  sw          $a3, 0xC0($sp)
/* E00B7C 80193E3C 27B500AC */  addiu       $s5, $sp, 0xAC
.Li1_80193E40:
/* E00B80 80193E40 8E440000 */  lw          $a0, 0x0($s2)
/* E00B84 80193E44 02202825 */  or          $a1, $s1, $zero
/* E00B88 80193E48 0C001A5C */  jal         Matrix_MultVec3f
/* E00B8C 80193E4C 02A03025 */   or         $a2, $s5, $zero
/* E00B90 80193E50 C7A600B4 */  lwc1        $ft1, 0xB4($sp)
/* E00B94 80193E54 26940001 */  addiu       $s4, $s4, 0x1
/* E00B98 80193E58 26100018 */  addiu       $s0, $s0, 0x18
/* E00B9C 80193E5C E606FFE8 */  swc1        $ft1, -0x18($s0)
/* E00BA0 80193E60 C628000C */  lwc1        $ft2, 0xC($s1)
/* E00BA4 80193E64 26310010 */  addiu       $s1, $s1, 0x10
/* E00BA8 80193E68 E608FFEC */  swc1        $ft2, -0x14($s0)
/* E00BAC 80193E6C C7AA00B0 */  lwc1        $ft3, 0xB0($sp)
/* E00BB0 80193E70 E60AFFF0 */  swc1        $ft3, -0x10($s0)
/* E00BB4 80193E74 C630FFFC */  lwc1        $ft4, -0x4($s1)
/* E00BB8 80193E78 E610FFF4 */  swc1        $ft4, -0xC($s0)
/* E00BBC 80193E7C C7B200AC */  lwc1        $ft5, 0xAC($sp)
/* E00BC0 80193E80 E612FFF8 */  swc1        $ft5, -0x8($s0)
/* E00BC4 80193E84 C624FFFC */  lwc1        $ft0, -0x4($s1)
/* E00BC8 80193E88 1693FFED */  bne         $s4, $s3, .Li1_80193E40
/* E00BCC 80193E8C E604FFFC */   swc1       $ft0, -0x4($s0)
/* E00BD0 80193E90 8FA700C0 */  lw          $a3, 0xC0($sp)
.Li1_80193E94:
/* E00BD4 80193E94 3C128014 */  lui         $s2, %hi(gCalcMatrix)
/* E00BD8 80193E98 1000000F */  b           .Li1_80193ED8
/* E00BDC 80193E9C 2652BBC8 */   addiu      $s2, $s2, %lo(gCalcMatrix)
/* E00BE0 80193EA0 8FB900BC */  lw          $t9, 0xBC($sp)
.Li1_80193EA4:
/* E00BE4 80193EA4 00136840 */  sll         $t5, $s3, 1
/* E00BE8 80193EA8 00137080 */  sll         $t6, $s3, 2
/* E00BEC 80193EAC 01AE7821 */  addu        $t7, $t5, $t6
/* E00BF0 80193EB0 24010011 */  addiu       $at, $zero, 0x11
/* E00BF4 80193EB4 000FC080 */  sll         $t8, $t7, 2
/* E00BF8 80193EB8 27280001 */  addiu       $t0, $t9, 0x1
/* E00BFC 80193EBC AFA800BC */  sw          $t0, 0xBC($sp)
/* E00C00 80193EC0 24420008 */  addiu       $v0, $v0, 0x8
/* E00C04 80193EC4 1501FFC2 */  bne         $t0, $at, .Li1_80193DD0
/* E00C08 80193EC8 02188021 */   addu       $s0, $s0, $t8
/* E00C0C 80193ECC 3C128014 */  lui         $s2, %hi(gCalcMatrix)
/* E00C10 80193ED0 2652BBC8 */  addiu       $s2, $s2, %lo(gCalcMatrix)
/* E00C14 80193ED4 AFA000BC */  sw          $zero, 0xBC($sp)
.Li1_80193ED8:
/* E00C18 80193ED8 3C16801A */  lui         $s6, %hi(D_i1_8019A820)
/* E00C1C 80193EDC 3C17801A */  lui         $s7, %hi(D_i1_8019B838)
/* E00C20 80193EE0 3C13800D */  lui         $s3, %hi(D_800C9F2C)
/* E00C24 80193EE4 26D6A820 */  addiu       $s6, $s6, %lo(D_i1_8019A820)
/* E00C28 80193EE8 26F7B838 */  addiu       $s7, $s7, %lo(D_i1_8019B838)
/* E00C2C 80193EEC 26739F2C */  addiu       $s3, $s3, %lo(D_800C9F2C)
/* E00C30 80193EF0 AFA700C0 */  sw          $a3, 0xC0($sp)
/* E00C34 80193EF4 241EFFDF */  addiu       $fp, $zero, -0x21
/* E00C38 80193EF8 2415FFF7 */  addiu       $s5, $zero, -0x9
.Li1_80193EFC:
/* E00C3C 80193EFC 8FAA00C0 */  lw          $t2, 0xC0($sp)
/* E00C40 80193F00 86CB0000 */  lh          $t3, 0x0($s6)
/* E00C44 80193F04 554B0042 */  bnel        $t2, $t3, .Li1_80194010
/* E00C48 80193F08 8FAE00BC */   lw         $t6, 0xBC($sp)
/* E00C4C 80193F0C 96E2007C */  lhu         $v0, 0x7C($s7)
/* E00C50 80193F10 304C0008 */  andi        $t4, $v0, 0x8
/* E00C54 80193F14 5180001D */  beql        $t4, $zero, .Li1_80193F8C
/* E00C58 80193F18 304A0020 */   andi       $t2, $v0, 0x20
/* E00C5C 80193F1C 86CD0006 */  lh          $t5, 0x6($s6)
/* E00C60 80193F20 86C30004 */  lh          $v1, 0x4($s6)
/* E00C64 80193F24 0000A025 */  or          $s4, $zero, $zero
/* E00C68 80193F28 19A00012 */  blez        $t5, .Li1_80193F74
/* E00C6C 80193F2C 00037080 */   sll        $t6, $v1, 2
/* E00C70 80193F30 01C37023 */  subu        $t6, $t6, $v1
/* E00C74 80193F34 3C0F801A */  lui         $t7, %hi(D_i1_8019A544)
/* E00C78 80193F38 25EFA544 */  addiu       $t7, $t7, %lo(D_i1_8019A544)
/* E00C7C 80193F3C 000E7080 */  sll         $t6, $t6, 2
/* E00C80 80193F40 01CF8821 */  addu        $s1, $t6, $t7
/* E00C84 80193F44 26F0000C */  addiu       $s0, $s7, 0xC
.Li1_80193F48:
/* E00C88 80193F48 8E440000 */  lw          $a0, 0x0($s2)
/* E00C8C 80193F4C 02202825 */  or          $a1, $s1, $zero
/* E00C90 80193F50 0C001A5C */  jal         Matrix_MultVec3f
/* E00C94 80193F54 02003025 */   or         $a2, $s0, $zero
/* E00C98 80193F58 86D80006 */  lh          $t8, 0x6($s6)
/* E00C9C 80193F5C 26940001 */  addiu       $s4, $s4, 0x1
/* E00CA0 80193F60 2631000C */  addiu       $s1, $s1, 0xC
/* E00CA4 80193F64 0298082A */  slt         $at, $s4, $t8
/* E00CA8 80193F68 1420FFF7 */  bnez        $at, .Li1_80193F48
/* E00CAC 80193F6C 2610000C */   addiu      $s0, $s0, 0xC
/* E00CB0 80193F70 96E2007C */  lhu         $v0, 0x7C($s7)
.Li1_80193F74:
/* E00CB4 80193F74 00554024 */  and         $t0, $v0, $s5
/* E00CB8 80193F78 35090010 */  ori         $t1, $t0, 0x10
/* E00CBC 80193F7C A6E8007C */  sh          $t0, 0x7C($s7)
/* E00CC0 80193F80 A6E9007C */  sh          $t1, 0x7C($s7)
/* E00CC4 80193F84 3122FFFF */  andi        $v0, $t1, 0xFFFF
/* E00CC8 80193F88 304A0020 */  andi        $t2, $v0, 0x20
.Li1_80193F8C:
/* E00CCC 80193F8C 1140000D */  beqz        $t2, .Li1_80193FC4
/* E00CD0 80193F90 02602825 */   or         $a1, $s3, $zero
/* E00CD4 80193F94 8E440000 */  lw          $a0, 0x0($s2)
/* E00CD8 80193F98 0C001A5C */  jal         Matrix_MultVec3f
/* E00CDC 80193F9C 26E6000C */   addiu      $a2, $s7, 0xC
/* E00CE0 80193FA0 8E440000 */  lw          $a0, 0x0($s2)
/* E00CE4 80193FA4 0C001AAE */  jal         Matrix_GetYRPAngles
/* E00CE8 80193FA8 26E50030 */   addiu      $a1, $s7, 0x30
/* E00CEC 80193FAC 96EB007C */  lhu         $t3, 0x7C($s7)
/* E00CF0 80193FB0 017E6824 */  and         $t5, $t3, $fp
/* E00CF4 80193FB4 35AE0040 */  ori         $t6, $t5, 0x40
/* E00CF8 80193FB8 A6ED007C */  sh          $t5, 0x7C($s7)
/* E00CFC 80193FBC A6EE007C */  sh          $t6, 0x7C($s7)
/* E00D00 80193FC0 31C2FFFF */  andi        $v0, $t6, 0xFFFF
.Li1_80193FC4:
/* E00D04 80193FC4 304F0100 */  andi        $t7, $v0, 0x100
/* E00D08 80193FC8 11E00005 */  beqz        $t7, .Li1_80193FE0
/* E00D0C 80193FCC 3059FEFF */   andi       $t9, $v0, 0xFEFF
/* E00D10 80193FD0 37280200 */  ori         $t0, $t9, 0x200
/* E00D14 80193FD4 A6F9007C */  sh          $t9, 0x7C($s7)
/* E00D18 80193FD8 A6E8007C */  sh          $t0, 0x7C($s7)
/* E00D1C 80193FDC 3102FFFF */  andi        $v0, $t0, 0xFFFF
.Li1_80193FE0:
/* E00D20 80193FE0 30490800 */  andi        $t1, $v0, 0x800
/* E00D24 80193FE4 11200009 */  beqz        $t1, .Li1_8019400C
/* E00D28 80193FE8 02602825 */   or         $a1, $s3, $zero
/* E00D2C 80193FEC 8E440000 */  lw          $a0, 0x0($s2)
/* E00D30 80193FF0 0C001A5C */  jal         Matrix_MultVec3f
/* E00D34 80193FF4 26E60018 */   addiu      $a2, $s7, 0x18
/* E00D38 80193FF8 96EA007C */  lhu         $t2, 0x7C($s7)
/* E00D3C 80193FFC 314CF7FF */  andi        $t4, $t2, 0xF7FF
/* E00D40 80194000 A6EC007C */  sh          $t4, 0x7C($s7)
/* E00D44 80194004 358D1000 */  ori         $t5, $t4, 0x1000
/* E00D48 80194008 A6ED007C */  sh          $t5, 0x7C($s7)
.Li1_8019400C:
/* E00D4C 8019400C 8FAE00BC */  lw          $t6, 0xBC($sp)
.Li1_80194010:
/* E00D50 80194010 26D60018 */  addiu       $s6, $s6, 0x18
/* E00D54 80194014 26F70080 */  addiu       $s7, $s7, 0x80
/* E00D58 80194018 25CF0001 */  addiu       $t7, $t6, 0x1
/* E00D5C 8019401C 2DE10011 */  sltiu       $at, $t7, 0x11
/* E00D60 80194020 1420FFB6 */  bnez        $at, .Li1_80193EFC
/* E00D64 80194024 AFAF00BC */   sw         $t7, 0xBC($sp)
/* E00D68 80194028 8FB900C0 */  lw          $t9, 0xC0($sp)
/* E00D6C 8019402C 24010007 */  addiu       $at, $zero, 0x7
/* E00D70 80194030 13210008 */  beq         $t9, $at, .Li1_80194054
/* E00D74 80194034 2401000A */   addiu      $at, $zero, 0xA
/* E00D78 80194038 13210015 */  beq         $t9, $at, .Li1_80194090
/* E00D7C 8019403C 8FAE00C8 */   lw         $t6, 0xC8($sp)
/* E00D80 80194040 24010015 */  addiu       $at, $zero, 0x15
/* E00D84 80194044 1321001F */  beq         $t9, $at, .Li1_801940C4
/* E00D88 80194048 8FA200C8 */   lw         $v0, 0xC8($sp)
/* E00D8C 8019404C 10000029 */  b           .Li1_801940F4
/* E00D90 80194050 00000000 */   nop
.Li1_80194054:
/* E00D94 80194054 8FA800C8 */  lw          $t0, 0xC8($sp)
/* E00D98 80194058 3C05801A */  lui         $a1, %hi(D_i1_8019AD5C)
/* E00D9C 8019405C 24A5AD5C */  addiu       $a1, $a1, %lo(D_i1_8019AD5C)
/* E00DA0 80194060 8509009E */  lh          $t1, 0x9E($t0)
/* E00DA4 80194064 250600E4 */  addiu       $a2, $t0, 0xE4
/* E00DA8 80194068 312A0001 */  andi        $t2, $t1, 0x1
/* E00DAC 8019406C 11400021 */  beqz        $t2, .Li1_801940F4
/* E00DB0 80194070 00000000 */   nop
/* E00DB4 80194074 0C001A5C */  jal         Matrix_MultVec3f
/* E00DB8 80194078 8E440000 */   lw         $a0, 0x0($s2)
/* E00DBC 8019407C 8FAB00C8 */  lw          $t3, 0xC8($sp)
/* E00DC0 80194080 856C009E */  lh          $t4, 0x9E($t3)
/* E00DC4 80194084 318DFFFE */  andi        $t5, $t4, 0xFFFE
/* E00DC8 80194088 1000001A */  b           .Li1_801940F4
/* E00DCC 8019408C A56D009E */   sh         $t5, 0x9E($t3)
.Li1_80194090:
/* E00DD0 80194090 85CF009E */  lh          $t7, 0x9E($t6)
/* E00DD4 80194094 3C05801A */  lui         $a1, %hi(D_i1_8019AD5C)
/* E00DD8 80194098 24A5AD5C */  addiu       $a1, $a1, %lo(D_i1_8019AD5C)
/* E00DDC 8019409C 31F80002 */  andi        $t8, $t7, 0x2
/* E00DE0 801940A0 13000014 */  beqz        $t8, .Li1_801940F4
/* E00DE4 801940A4 25C600E4 */   addiu      $a2, $t6, 0xE4
/* E00DE8 801940A8 0C001A5C */  jal         Matrix_MultVec3f
/* E00DEC 801940AC 8E440000 */   lw         $a0, 0x0($s2)
/* E00DF0 801940B0 8FB900C8 */  lw          $t9, 0xC8($sp)
/* E00DF4 801940B4 8729009E */  lh          $t1, 0x9E($t9)
/* E00DF8 801940B8 312AFFFD */  andi        $t2, $t1, 0xFFFD
/* E00DFC 801940BC 1000000D */  b           .Li1_801940F4
/* E00E00 801940C0 A72A009E */   sh         $t2, 0x9E($t9)
.Li1_801940C4:
/* E00E04 801940C4 8448009E */  lh          $t0, 0x9E($v0)
/* E00E08 801940C8 3C05801A */  lui         $a1, %hi(D_i1_8019AE38)
/* E00E0C 801940CC 24A5AE38 */  addiu       $a1, $a1, %lo(D_i1_8019AE38)
/* E00E10 801940D0 310C0004 */  andi        $t4, $t0, 0x4
/* E00E14 801940D4 11800007 */  beqz        $t4, .Li1_801940F4
/* E00E18 801940D8 244600E4 */   addiu      $a2, $v0, 0xE4
/* E00E1C 801940DC 0C001A5C */  jal         Matrix_MultVec3f
/* E00E20 801940E0 8E440000 */   lw         $a0, 0x0($s2)
/* E00E24 801940E4 8FAD00C8 */  lw          $t5, 0xC8($sp)
/* E00E28 801940E8 85AB009E */  lh          $t3, 0x9E($t5)
/* E00E2C 801940EC 316FFFFB */  andi        $t7, $t3, 0xFFFB
/* E00E30 801940F0 A5AF009E */  sh          $t7, 0x9E($t5)
.Li1_801940F4:
/* E00E34 801940F4 3C138013 */  lui         $s3, %hi(gMasterDisp)
/* E00E38 801940F8 26737E64 */  addiu       $s3, $s3, %lo(gMasterDisp)
/* E00E3C 801940FC 02602025 */  or          $a0, $s3, $zero
/* E00E40 80194100 0C02E374 */  jal         RCP_SetupDL
/* E00E44 80194104 24050040 */   addiu      $a1, $zero, 0x40
/* E00E48 80194108 8E620000 */  lw          $v0, 0x0($s3)
/* E00E4C 8019410C 3C0EB600 */  lui         $t6, (0xB6000000 >> 16)
/* E00E50 80194110 24092000 */  addiu       $t1, $zero, 0x2000
/* E00E54 80194114 24580008 */  addiu       $t8, $v0, 0x8
/* E00E58 80194118 AE780000 */  sw          $t8, 0x0($s3)
/* E00E5C 8019411C AC490004 */  sw          $t1, 0x4($v0)
/* E00E60 80194120 AC4E0000 */  sw          $t6, 0x0($v0)
/* E00E64 80194124 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E00E68 80194128 4481D000 */  mtc1        $at, $fs3
/* E00E6C 8019412C 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E00E70 80194130 4481C000 */  mtc1        $at, $fs2
/* E00E74 80194134 3C014080 */  lui         $at, (0x40800000 >> 16)
/* E00E78 80194138 4481B000 */  mtc1        $at, $fs1
/* E00E7C 8019413C 3C16801A */  lui         $s6, %hi(D_i1_8019A820)
/* E00E80 80194140 3C17801A */  lui         $s7, %hi(D_i1_8019B838)
/* E00E84 80194144 3C01801A */  lui         $at, %hi(D_i1_8019B384)
/* E00E88 80194148 3C128014 */  lui         $s2, %hi(gGfxMatrix)
/* E00E8C 8019414C 26D6A820 */  addiu       $s6, $s6, %lo(D_i1_8019A820)
/* E00E90 80194150 26F7B838 */  addiu       $s7, $s7, %lo(D_i1_8019B838)
/* E00E94 80194154 2652B3C0 */  addiu       $s2, $s2, %lo(gGfxMatrix)
/* E00E98 80194158 C434B384 */  lwc1        $fs0, %lo(D_i1_8019B384)($at)
/* E00E9C 8019415C AFA000BC */  sw          $zero, 0xBC($sp)
/* E00EA0 80194160 3C15FA00 */  lui         $s5, (0xFA000000 >> 16)
.Li1_80194164:
/* E00EA4 80194164 8FAA00C0 */  lw          $t2, 0xC0($sp)
/* E00EA8 80194168 86D90000 */  lh          $t9, 0x0($s6)
/* E00EAC 8019416C 55590071 */  bnel        $t2, $t9, .Li1_80194334
/* E00EB0 80194170 8FAC00BC */   lw         $t4, 0xBC($sp)
/* E00EB4 80194174 96E8007C */  lhu         $t0, 0x7C($s7)
/* E00EB8 80194178 3C0B8017 */  lui         $t3, %hi(gGameFrameCount)
/* E00EBC 8019417C 8FAF00BC */  lw          $t7, 0xBC($sp)
/* E00EC0 80194180 310C0200 */  andi        $t4, $t0, 0x200
/* E00EC4 80194184 5180006B */  beql        $t4, $zero, .Li1_80194334
/* E00EC8 80194188 8FAC00BC */   lw         $t4, 0xBC($sp)
/* E00ECC 8019418C 8D6B7DB0 */  lw          $t3, %lo(gGameFrameCount)($t3)
/* E00ED0 80194190 016F6821 */  addu        $t5, $t3, $t7
/* E00ED4 80194194 31B80002 */  andi        $t8, $t5, 0x2
/* E00ED8 80194198 57000066 */  bnel        $t8, $zero, .Li1_80194334
/* E00EDC 8019419C 8FAC00BC */   lw         $t4, 0xBC($sp)
/* E00EE0 801941A0 86CE0006 */  lh          $t6, 0x6($s6)
/* E00EE4 801941A4 86C30004 */  lh          $v1, 0x4($s6)
/* E00EE8 801941A8 0000A025 */  or          $s4, $zero, $zero
/* E00EEC 801941AC 19C00060 */  blez        $t6, .Li1_80194330
/* E00EF0 801941B0 00034880 */   sll        $t1, $v1, 2
/* E00EF4 801941B4 01234823 */  subu        $t1, $t1, $v1
/* E00EF8 801941B8 3C0A801A */  lui         $t2, %hi(D_i1_8019A544)
/* E00EFC 801941BC 254AA544 */  addiu       $t2, $t2, %lo(D_i1_8019A544)
/* E00F00 801941C0 00094880 */  sll         $t1, $t1, 2
/* E00F04 801941C4 3C1E0901 */  lui         $fp, %hi(D_900DF20)
/* E00F08 801941C8 27DEDF20 */  addiu       $fp, $fp, %lo(D_900DF20)
/* E00F0C 801941CC 012A8821 */  addu        $s1, $t1, $t2
/* E00F10 801941D0 02E08025 */  or          $s0, $s7, $zero
.Li1_801941D4:
/* E00F14 801941D4 0C0015C2 */  jal         Matrix_Push
/* E00F18 801941D8 02402025 */   or         $a0, $s2, $zero
/* E00F1C 801941DC C606000C */  lwc1        $ft1, 0xC($s0)
/* E00F20 801941E0 C6280000 */  lwc1        $ft2, 0x0($s1)
/* E00F24 801941E4 C6100010 */  lwc1        $ft4, 0x10($s0)
/* E00F28 801941E8 C6320004 */  lwc1        $ft5, 0x4($s1)
/* E00F2C 801941EC 46083280 */  add.s       $ft3, $ft1, $ft2
/* E00F30 801941F0 C6280008 */  lwc1        $ft2, 0x8($s1)
/* E00F34 801941F4 C6060014 */  lwc1        $ft1, 0x14($s0)
/* E00F38 801941F8 46128100 */  add.s       $ft0, $ft4, $ft5
/* E00F3C 801941FC 44055000 */  mfc1        $a1, $ft3
/* E00F40 80194200 24190001 */  addiu       $t9, $zero, 0x1
/* E00F44 80194204 46083280 */  add.s       $ft3, $ft1, $ft2
/* E00F48 80194208 44062000 */  mfc1        $a2, $ft0
/* E00F4C 8019420C AFB90010 */  sw          $t9, 0x10($sp)
/* E00F50 80194210 8E440000 */  lw          $a0, 0x0($s2)
/* E00F54 80194214 44075000 */  mfc1        $a3, $ft3
/* E00F58 80194218 0C0016C0 */  jal         Matrix_Translate
/* E00F5C 8019421C 00000000 */   nop
/* E00F60 80194220 0C016603 */  jal         Graphics_SetScaleMtx
/* E00F64 80194224 4600C306 */   mov.s      $fa0, $fs2
/* E00F68 80194228 C6100034 */  lwc1        $ft4, 0x34($s0)
/* E00F6C 8019422C 8E440000 */  lw          $a0, 0x0($s2)
/* E00F70 80194230 24060001 */  addiu       $a2, $zero, 0x1
/* E00F74 80194234 46148482 */  mul.s       $ft5, $ft4, $fs0
/* E00F78 80194238 44059000 */  mfc1        $a1, $ft5
/* E00F7C 8019423C 0C0017A4 */  jal         Matrix_RotateY
/* E00F80 80194240 00000000 */   nop
/* E00F84 80194244 C6040030 */  lwc1        $ft0, 0x30($s0)
/* E00F88 80194248 8E440000 */  lw          $a0, 0x0($s2)
/* E00F8C 8019424C 24060001 */  addiu       $a2, $zero, 0x1
/* E00F90 80194250 46142182 */  mul.s       $ft1, $ft0, $fs0
/* E00F94 80194254 44053000 */  mfc1        $a1, $ft1
/* E00F98 80194258 0C001751 */  jal         Matrix_RotateX
/* E00F9C 8019425C 00000000 */   nop
/* E00FA0 80194260 C6080038 */  lwc1        $ft2, 0x38($s0)
/* E00FA4 80194264 8E440000 */  lw          $a0, 0x0($s2)
/* E00FA8 80194268 24060001 */  addiu       $a2, $zero, 0x1
/* E00FAC 8019426C 46144282 */  mul.s       $ft3, $ft2, $fs0
/* E00FB0 80194270 44055000 */  mfc1        $a1, $ft3
/* E00FB4 80194274 0C0017F8 */  jal         Matrix_RotateZ
/* E00FB8 80194278 00000000 */   nop
/* E00FBC 8019427C C6100038 */  lwc1        $ft4, 0x38($s0)
/* E00FC0 80194280 4405B000 */  mfc1        $a1, $fs1
/* E00FC4 80194284 4406B000 */  mfc1        $a2, $fs1
/* E00FC8 80194288 4600848D */  trunc.w.s   $ft5, $ft4
/* E00FCC 8019428C 4407D000 */  mfc1        $a3, $fs3
/* E00FD0 80194290 24090001 */  addiu       $t1, $zero, 0x1
/* E00FD4 80194294 440C9000 */  mfc1        $t4, $ft5
/* E00FD8 80194298 00000000 */  nop
/* E00FDC 8019429C 318B0001 */  andi        $t3, $t4, 0x1
/* E00FE0 801942A0 5160000A */  beql        $t3, $zero, .Li1_801942CC
/* E00FE4 801942A4 8E620000 */   lw         $v0, 0x0($s3)
/* E00FE8 801942A8 8E620000 */  lw          $v0, 0x0($s3)
/* E00FEC 801942AC 240DFFFF */  addiu       $t5, $zero, -0x1
/* E00FF0 801942B0 244F0008 */  addiu       $t7, $v0, 0x8
/* E00FF4 801942B4 AE6F0000 */  sw          $t7, 0x0($s3)
/* E00FF8 801942B8 AC4D0004 */  sw          $t5, 0x4($v0)
/* E00FFC 801942BC AC550000 */  sw          $s5, 0x0($v0)
/* E01000 801942C0 10000009 */  b           .Li1_801942E8
/* E01004 801942C4 8E440000 */   lw         $a0, 0x0($s2)
/* E01008 801942C8 8E620000 */  lw          $v0, 0x0($s3)
.Li1_801942CC:
/* E0100C 801942CC 3C0E6060 */  lui         $t6, (0x6060FFFF >> 16)
/* E01010 801942D0 35CEFFFF */  ori         $t6, $t6, (0x6060FFFF & 0xFFFF)
/* E01014 801942D4 24580008 */  addiu       $t8, $v0, 0x8
/* E01018 801942D8 AE780000 */  sw          $t8, 0x0($s3)
/* E0101C 801942DC AC4E0004 */  sw          $t6, 0x4($v0)
/* E01020 801942E0 AC550000 */  sw          $s5, 0x0($v0)
/* E01024 801942E4 8E440000 */  lw          $a0, 0x0($s2)
.Li1_801942E8:
/* E01028 801942E8 0C00170D */  jal         Matrix_Scale
/* E0102C 801942EC AFA90010 */   sw         $t1, 0x10($sp)
/* E01030 801942F0 0C001BAE */  jal         Matrix_SetGfxMtx
/* E01034 801942F4 02602025 */   or         $a0, $s3, $zero
/* E01038 801942F8 8E620000 */  lw          $v0, 0x0($s3)
/* E0103C 801942FC 3C190600 */  lui         $t9, (0x6000000 >> 16)
/* E01040 80194300 244A0008 */  addiu       $t2, $v0, 0x8
/* E01044 80194304 AE6A0000 */  sw          $t2, 0x0($s3)
/* E01048 80194308 AC5E0004 */  sw          $fp, 0x4($v0)
/* E0104C 8019430C AC590000 */  sw          $t9, 0x0($v0)
/* E01050 80194310 0C0015D0 */  jal         Matrix_Pop
/* E01054 80194314 02402025 */   or         $a0, $s2, $zero
/* E01058 80194318 86C80006 */  lh          $t0, 0x6($s6)
/* E0105C 8019431C 26940001 */  addiu       $s4, $s4, 0x1
/* E01060 80194320 2631000C */  addiu       $s1, $s1, 0xC
/* E01064 80194324 0288082A */  slt         $at, $s4, $t0
/* E01068 80194328 1420FFAA */  bnez        $at, .Li1_801941D4
/* E0106C 8019432C 2610000C */   addiu      $s0, $s0, 0xC
.Li1_80194330:
/* E01070 80194330 8FAC00BC */  lw          $t4, 0xBC($sp)
.Li1_80194334:
/* E01074 80194334 24010011 */  addiu       $at, $zero, 0x11
/* E01078 80194338 26D60018 */  addiu       $s6, $s6, 0x18
/* E0107C 8019433C 258B0001 */  addiu       $t3, $t4, 0x1
/* E01080 80194340 AFAB00BC */  sw          $t3, 0xBC($sp)
/* E01084 80194344 1561FF87 */  bne         $t3, $at, .Li1_80194164
/* E01088 80194348 26F70080 */   addiu      $s7, $s7, 0x80
/* E0108C 8019434C 02602025 */  or          $a0, $s3, $zero
/* E01090 80194350 0C02E374 */  jal         RCP_SetupDL
/* E01094 80194354 2405001D */   addiu      $a1, $zero, 0x1D
/* E01098 80194358 8FBF0064 */  lw          $ra, 0x64($sp)
/* E0109C 8019435C D7B40020 */  ldc1        $fs0, 0x20($sp)
/* E010A0 80194360 D7B60028 */  ldc1        $fs1, 0x28($sp)
/* E010A4 80194364 D7B80030 */  ldc1        $fs2, 0x30($sp)
/* E010A8 80194368 D7BA0038 */  ldc1        $fs3, 0x38($sp)
/* E010AC 8019436C 8FB00040 */  lw          $s0, 0x40($sp)
/* E010B0 80194370 8FB10044 */  lw          $s1, 0x44($sp)
/* E010B4 80194374 8FB20048 */  lw          $s2, 0x48($sp)
/* E010B8 80194378 8FB3004C */  lw          $s3, 0x4C($sp)
/* E010BC 8019437C 8FB40050 */  lw          $s4, 0x50($sp)
/* E010C0 80194380 8FB50054 */  lw          $s5, 0x54($sp)
/* E010C4 80194384 8FB60058 */  lw          $s6, 0x58($sp)
/* E010C8 80194388 8FB7005C */  lw          $s7, 0x5C($sp)
/* E010CC 8019438C 8FBE0060 */  lw          $fp, 0x60($sp)
/* E010D0 80194390 03E00008 */  jr          $ra
/* E010D4 80194394 27BD00C0 */   addiu      $sp, $sp, 0xC0
.section .late_rodata
dlabel D_i1_8019B388
/* E080C8 8019B388 449C4000 */ .float 1250

dlabel jtbl_i1_8019B38C
/* E080CC 8019B38C 801948B8 */ .word .Li1_801948B8
/* E080D0 8019B390 801948C0 */ .word .Li1_801948C0
/* E080D4 8019B394 801948E8 */ .word .Li1_801948E8
/* E080D8 8019B398 801948F8 */ .word .Li1_801948F8
/* E080DC 8019B39C 801949E8 */ .word .Li1_801949E8

dlabel D_i1_8019B3A0
/* E080E0 8019B3A0 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3A4
/* E080E4 8019B3A4 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3A8
/* E080E8 8019B3A8 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3AC
/* E080EC 8019B3AC 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3B0
/* E080F0 8019B3B0 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3B4
/* E080F4 8019B3B4 3C8EFA35 */ .float 0.01745329238

dlabel D_i1_8019B3B8
/* E080F8 8019B3B8 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3BC
/* E080FC 8019B3BC 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3C0
/* E08100 8019B3C0 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3C4
/* E08104 8019B3C4 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3C8
/* E08108 8019B3C8 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3CC
/* E0810C 8019B3CC 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B3D0
/* E08110 8019B3D0 40490FDB */ .float 3.141592741

dlabel D_i1_8019B3D4
/* E08114 8019B3D4 40490FDB */ .float 3.141592741

dlabel jtbl_i1_8019B3D8
/* E08118 8019B3D8 80196324 */ .word .Li1_80196324
/* E0811C 8019B3DC 80196358 */ .word .Li1_80196358
/* E08120 8019B3E0 801963B0 */ .word .Li1_801963B0
/* E08124 8019B3E4 8019640C */ .word .Li1_8019640C
/* E08128 8019B3E8 8019640C */ .word .Li1_8019640C

dlabel D_i1_8019B3EC
/* E0812C 8019B3EC 3C23D70A */ .float 0.009999999776

dlabel jtbl_i1_8019B3F0
/* E08130 8019B3F0 80196430 */ .word .Li1_80196430
/* E08134 8019B3F4 80196634 */ .word .Li1_80196634
/* E08138 8019B3F8 80196714 */ .word .Li1_80196714
/* E0813C 8019B3FC 801968C0 */ .word .Li1_801968C0
/* E08140 8019B400 8019672C */ .word .Li1_8019672C
/* E08144 8019B404 801968A4 */ .word .Li1_801968A4
/* E08148 8019B408 801968E4 */ .word .Li1_801968E4

dlabel D_i1_8019B40C
/* E0814C 8019B40C 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B410
/* E08150 8019B410 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B414
/* E08154 8019B414 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B418
/* E08158 8019B418 3F4CCCCD */ .float 0.8000000119

dlabel D_i1_8019B41C
/* E0815C 8019B41C 3F333333 */ .float 0.6999999881

dlabel D_i1_8019B420
/* E08160 8019B420 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B424
/* E08164 8019B424 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B428
/* E08168 8019B428 3F4CCCCD */ .float 0.8000000119

dlabel D_i1_8019B42C
/* E0816C 8019B42C 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B430
/* E08170 8019B430 3F333333 */ .float 0.6999999881

dlabel jtbl_i1_8019B434
/* E08174 8019B434 80196928 */ .word .Li1_80196928
/* E08178 8019B438 80196928 */ .word .Li1_80196928
/* E0817C 8019B43C 80196928 */ .word .Li1_80196928
/* E08180 8019B440 80196928 */ .word .Li1_80196928
/* E08184 8019B444 80196928 */ .word .Li1_80196928
/* E08188 8019B448 80196928 */ .word .Li1_80196928
/* E0818C 8019B44C 80196928 */ .word .Li1_80196928
/* E08190 8019B450 80196928 */ .word .Li1_80196928
/* E08194 8019B454 80196958 */ .word .Li1_80196958

dlabel jtbl_i1_8019B458
/* E08198 8019B458 80197280 */ .word .Li1_80197280
/* E0819C 8019B45C 80197280 */ .word .Li1_80197280
/* E081A0 8019B460 801970E0 */ .word .Li1_801970E0
/* E081A4 8019B464 80197280 */ .word .Li1_80197280
/* E081A8 8019B468 80197280 */ .word .Li1_80197280
/* E081AC 8019B46C 80197280 */ .word .Li1_80197280
/* E081B0 8019B470 80197280 */ .word .Li1_80197280
/* E081B4 8019B474 80196A90 */ .word .Li1_80196A90

dlabel jtbl_i1_8019B478
/* E081B8 8019B478 80196FEC */ .word .Li1_80196FEC
/* E081BC 8019B47C 80196F50 */ .word .Li1_80196F50
/* E081C0 8019B480 80197280 */ .word .Li1_80197280
/* E081C4 8019B484 80197280 */ .word .Li1_80197280
/* E081C8 8019B488 80197280 */ .word .Li1_80197280
/* E081CC 8019B48C 80197280 */ .word .Li1_80197280
/* E081D0 8019B490 80197280 */ .word .Li1_80197280
/* E081D4 8019B494 80197280 */ .word .Li1_80197280
/* E081D8 8019B498 80197280 */ .word .Li1_80197280
/* E081DC 8019B49C 80196F34 */ .word .Li1_80196F34
/* E081E0 8019B4A0 80196EF0 */ .word .Li1_80196EF0
/* E081E4 8019B4A4 80196E48 */ .word .Li1_80196E48
/* E081E8 8019B4A8 80196E30 */ .word .Li1_80196E30
/* E081EC 8019B4AC 80196E18 */ .word .Li1_80196E18
/* E081F0 8019B4B0 80196E00 */ .word .Li1_80196E00
/* E081F4 8019B4B4 80197280 */ .word .Li1_80197280
/* E081F8 8019B4B8 80196DE8 */ .word .Li1_80196DE8
/* E081FC 8019B4BC 80196D94 */ .word .Li1_80196D94
/* E08200 8019B4C0 80197280 */ .word .Li1_80197280
/* E08204 8019B4C4 80197280 */ .word .Li1_80197280
/* E08208 8019B4C8 80196D7C */ .word .Li1_80196D7C
/* E0820C 8019B4CC 80197280 */ .word .Li1_80197280
/* E08210 8019B4D0 80197280 */ .word .Li1_80197280
/* E08214 8019B4D4 80197280 */ .word .Li1_80197280
/* E08218 8019B4D8 80197280 */ .word .Li1_80197280
/* E0821C 8019B4DC 80197280 */ .word .Li1_80197280
/* E08220 8019B4E0 80197280 */ .word .Li1_80197280
/* E08224 8019B4E4 80197280 */ .word .Li1_80197280
/* E08228 8019B4E8 80197280 */ .word .Li1_80197280
/* E0822C 8019B4EC 80196D14 */ .word .Li1_80196D14
/* E08230 8019B4F0 80197280 */ .word .Li1_80197280
/* E08234 8019B4F4 80197280 */ .word .Li1_80197280
/* E08238 8019B4F8 80197280 */ .word .Li1_80197280
/* E0823C 8019B4FC 80197280 */ .word .Li1_80197280
/* E08240 8019B500 80197280 */ .word .Li1_80197280
/* E08244 8019B504 80197280 */ .word .Li1_80197280
/* E08248 8019B508 80197280 */ .word .Li1_80197280
/* E0824C 8019B50C 80197280 */ .word .Li1_80197280
/* E08250 8019B510 80197280 */ .word .Li1_80197280
/* E08254 8019B514 80197280 */ .word .Li1_80197280
/* E08258 8019B518 80197280 */ .word .Li1_80197280
/* E0825C 8019B51C 80197280 */ .word .Li1_80197280
/* E08260 8019B520 80196CD4 */ .word .Li1_80196CD4
/* E08264 8019B524 80197280 */ .word .Li1_80197280
/* E08268 8019B528 80197280 */ .word .Li1_80197280
/* E0826C 8019B52C 80197280 */ .word .Li1_80197280
/* E08270 8019B530 80197280 */ .word .Li1_80197280
/* E08274 8019B534 80197280 */ .word .Li1_80197280
/* E08278 8019B538 80197280 */ .word .Li1_80197280
/* E0827C 8019B53C 80197280 */ .word .Li1_80197280
/* E08280 8019B540 80197280 */ .word .Li1_80197280
/* E08284 8019B544 80197280 */ .word .Li1_80197280
/* E08288 8019B548 80197280 */ .word .Li1_80197280
/* E0828C 8019B54C 80197280 */ .word .Li1_80197280
/* E08290 8019B550 80197280 */ .word .Li1_80197280
/* E08294 8019B554 80197280 */ .word .Li1_80197280
/* E08298 8019B558 80197280 */ .word .Li1_80197280
/* E0829C 8019B55C 80197280 */ .word .Li1_80197280
/* E082A0 8019B560 80197280 */ .word .Li1_80197280
/* E082A4 8019B564 80197280 */ .word .Li1_80197280
/* E082A8 8019B568 80197280 */ .word .Li1_80197280
/* E082AC 8019B56C 80197280 */ .word .Li1_80197280
/* E082B0 8019B570 80197280 */ .word .Li1_80197280
/* E082B4 8019B574 80197280 */ .word .Li1_80197280
/* E082B8 8019B578 80197280 */ .word .Li1_80197280
/* E082BC 8019B57C 80197280 */ .word .Li1_80197280
/* E082C0 8019B580 80196CBC */ .word .Li1_80196CBC
/* E082C4 8019B584 80197280 */ .word .Li1_80197280
/* E082C8 8019B588 80197280 */ .word .Li1_80197280
/* E082CC 8019B58C 80196C54 */ .word .Li1_80196C54
/* E082D0 8019B590 80196C3C */ .word .Li1_80196C3C
/* E082D4 8019B594 80197280 */ .word .Li1_80197280
/* E082D8 8019B598 80196C18 */ .word .Li1_80196C18
/* E082DC 8019B59C 80196BA8 */ .word .Li1_80196BA8
/* E082E0 8019B5A0 80196B90 */ .word .Li1_80196B90
/* E082E4 8019B5A4 80197280 */ .word .Li1_80197280
/* E082E8 8019B5A8 80197280 */ .word .Li1_80197280
/* E082EC 8019B5AC 80196B6C */ .word .Li1_80196B6C

dlabel D_i1_8019B5B0
/* E082F0 8019B5B0 3F666666 */ .float 0.8999999762

dlabel D_i1_8019B5B4
/* E082F4 8019B5B4 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B5B8
/* E082F8 8019B5B8 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B5BC
/* E082FC 8019B5BC 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B5C0
/* E08300 8019B5C0 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B5C4
/* E08304 8019B5C4 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B5C8
/* E08308 8019B5C8 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B5CC
/* E0830C 8019B5CC 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B5D0
/* E08310 8019B5D0 3C23D70A */ .float 0.009999999776

dlabel jtbl_i1_8019B5D4
/* E08314 8019B5D4 80197480 */ .word .Li1_80197480
/* E08318 8019B5D8 80197480 */ .word .Li1_80197480
/* E0831C 8019B5DC 80197480 */ .word .Li1_80197480
/* E08320 8019B5E0 80197480 */ .word .Li1_80197480
/* E08324 8019B5E4 801974CC */ .word .Li1_801974CC
/* E08328 8019B5E8 8019758C */ .word .Li1_8019758C
/* E0832C 8019B5EC 80197480 */ .word .Li1_80197480
/* E08330 8019B5F0 8019760C */ .word .Li1_8019760C
/* E08334 8019B5F4 801976A8 */ .word .Li1_801976A8

dlabel D_i1_8019B5F8
/* E08338 8019B5F8 3C23D70A */ .float 0.009999999776

dlabel D_i1_8019B5FC
/* E0833C 8019B5FC 459C4000 */ .float 5000

dlabel D_i1_8019B600
/* E08340 8019B600 459C4000 */ .float 5000

dlabel jtbl_i1_8019B604
/* E08344 8019B604 80197A40 */ .word .Li1_80197A40
/* E08348 8019B608 80197A40 */ .word .Li1_80197A40
/* E0834C 8019B60C 801979E8 */ .word .Li1_801979E8
/* E08350 8019B610 80197A14 */ .word .Li1_80197A14
/* E08354 8019B614 80197A70 */ .word .Li1_80197A70
/* E08358 8019B618 80197AC4 */ .word .Li1_80197AC4
/* E0835C 8019B61C 80197B04 */ .word .Li1_80197B04
/* E08360 8019B620 80197B10 */ .word .Li1_80197B10

dlabel D_i1_8019B624
/* E08364 8019B624 C4BB8000 */ .float -1500

dlabel D_i1_8019B628
/* E08368 8019B628 C4BB8000 */ .float -1500

dlabel D_i1_8019B62C
/* E0836C 8019B62C C4BB8000 */ .float -1500


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_i1_80194398
/* E010D8 80194398 27BDFDA0 */  addiu       $sp, $sp, -0x260
/* E010DC 8019439C AFB00058 */  sw          $s0, 0x58($sp)
/* E010E0 801943A0 3C028016 */  lui         $v0, %hi(gBossFrameCount)
/* E010E4 801943A4 244213A0 */  addiu       $v0, $v0, %lo(gBossFrameCount)
/* E010E8 801943A8 00808025 */  or          $s0, $a0, $zero
/* E010EC 801943AC AFBF007C */  sw          $ra, 0x7C($sp)
/* E010F0 801943B0 AFBE0078 */  sw          $fp, 0x78($sp)
/* E010F4 801943B4 AFB70074 */  sw          $s7, 0x74($sp)
/* E010F8 801943B8 AFB60070 */  sw          $s6, 0x70($sp)
/* E010FC 801943BC AFB5006C */  sw          $s5, 0x6C($sp)
/* E01100 801943C0 AFB40068 */  sw          $s4, 0x68($sp)
/* E01104 801943C4 AFB30064 */  sw          $s3, 0x64($sp)
/* E01108 801943C8 AFB20060 */  sw          $s2, 0x60($sp)
/* E0110C 801943CC AFB1005C */  sw          $s1, 0x5C($sp)
/* E01110 801943D0 F7BE0050 */  sdc1        $fs5, 0x50($sp)
/* E01114 801943D4 F7BC0048 */  sdc1        $fs4, 0x48($sp)
/* E01118 801943D8 F7BA0040 */  sdc1        $fs3, 0x40($sp)
/* E0111C 801943DC F7B80038 */  sdc1        $fs2, 0x38($sp)
/* E01120 801943E0 F7B60030 */  sdc1        $fs1, 0x30($sp)
/* E01124 801943E4 F7B40028 */  sdc1        $fs0, 0x28($sp)
/* E01128 801943E8 8C4E0000 */  lw          $t6, 0x0($v0)
/* E0112C 801943EC AFA000E8 */  sw          $zero, 0xE8($sp)
/* E01130 801943F0 AFA000E4 */  sw          $zero, 0xE4($sp)
/* E01134 801943F4 25CF0001 */  addiu       $t7, $t6, 0x1
/* E01138 801943F8 AFA000B8 */  sw          $zero, 0xB8($sp)
/* E0113C 801943FC AFA000B4 */  sw          $zero, 0xB4($sp)
/* E01140 80194400 AC4F0000 */  sw          $t7, 0x0($v0)
/* E01144 80194404 8618004E */  lh          $t8, 0x4E($s0)
/* E01148 80194408 2B010003 */  slti        $at, $t8, 0x3
/* E0114C 8019440C 14200004 */  bnez        $at, .Li1_80194420
/* E01150 80194410 3C01801A */   lui        $at, %hi(D_i1_8019C0B8)
/* E01154 80194414 AC20C0B8 */  sw          $zero, %lo(D_i1_8019C0B8)($at)
/* E01158 80194418 3C01801A */  lui         $at, %hi(D_i1_8019C0BC)
/* E0115C 8019441C AC20C0BC */  sw          $zero, %lo(D_i1_8019C0BC)($at)
.Li1_80194420:
/* E01160 80194420 861900C8 */  lh          $t9, 0xC8($s0)
/* E01164 80194424 860900C6 */  lh          $t1, 0xC6($s0)
/* E01168 80194428 27280001 */  addiu       $t0, $t9, 0x1
/* E0116C 8019442C 15200023 */  bnez        $t1, .Li1_801944BC
/* E01170 80194430 A60800C8 */   sh         $t0, 0xC8($s0)
/* E01174 80194434 860400C8 */  lh          $a0, 0xC8($s0)
/* E01178 80194438 24010385 */  addiu       $at, $zero, 0x385
/* E0117C 8019443C 10810005 */  beq         $a0, $at, .Li1_80194454
/* E01180 80194440 240103E9 */   addiu      $at, $zero, 0x3E9
/* E01184 80194444 10810010 */  beq         $a0, $at, .Li1_80194488
/* E01188 80194448 00000000 */   nop
/* E0118C 8019444C 1000001B */  b           .Li1_801944BC
/* E01190 80194450 00000000 */   nop
.Li1_80194454:
/* E01194 80194454 3C0A8017 */  lui         $t2, %hi(gTeamShields + 0x8)
/* E01198 80194458 8D4A78B8 */  lw          $t2, %lo(gTeamShields + 0x8)($t2)
/* E0119C 8019445C 19400017 */  blez        $t2, .Li1_801944BC
/* E011A0 80194460 3C0B8018 */   lui        $t3, %hi(gRadioState)
/* E011A4 80194464 8D6B829C */  lw          $t3, %lo(gRadioState)($t3)
/* E011A8 80194468 15600014 */  bnez        $t3, .Li1_801944BC
/* E011AC 8019446C 3C048018 */   lui        $a0, %hi(gMsg_ID_4092)
/* E011B0 80194470 2484C3A8 */  addiu       $a0, $a0, %lo(gMsg_ID_4092)
/* E011B4 80194474 24050014 */  addiu       $a1, $zero, 0x14
/* E011B8 80194478 0C02EA02 */  jal         Radio_PlayMessage
/* E011BC 8019447C AFB00260 */   sw         $s0, 0x260($sp)
/* E011C0 80194480 1000000E */  b           .Li1_801944BC
/* E011C4 80194484 8FB00260 */   lw         $s0, 0x260($sp)
.Li1_80194488:
/* E011C8 80194488 3C0C8017 */  lui         $t4, %hi(gTeamShields + 0x8)
/* E011CC 8019448C 8D8C78B8 */  lw          $t4, %lo(gTeamShields + 0x8)($t4)
/* E011D0 80194490 1980000A */  blez        $t4, .Li1_801944BC
/* E011D4 80194494 240D0001 */   addiu      $t5, $zero, 0x1
/* E011D8 80194498 3C018016 */  lui         $at, %hi(gShowBossHealth)
/* E011DC 8019449C AC2D1734 */  sw          $t5, %lo(gShowBossHealth)($at)
/* E011E0 801944A0 3C018017 */  lui         $at, %hi(gBossHealthBar)
/* E011E4 801944A4 240E00FF */  addiu       $t6, $zero, 0xFF
/* E011E8 801944A8 AC2E7848 */  sw          $t6, %lo(gBossHealthBar)($at)
/* E011EC 801944AC 860F00C6 */  lh          $t7, 0xC6($s0)
/* E011F0 801944B0 A60000C8 */  sh          $zero, 0xC8($s0)
/* E011F4 801944B4 25F80001 */  addiu       $t8, $t7, 0x1
/* E011F8 801944B8 A61800C6 */  sh          $t8, 0xC6($s0)
.Li1_801944BC:
/* E011FC 801944BC 3C16801A */  lui         $s6, %hi(D_i1_8019B838)
/* E01200 801944C0 26D6B838 */  addiu       $s6, $s6, %lo(D_i1_8019B838)
/* E01204 801944C4 00001025 */  or          $v0, $zero, $zero
.Li1_801944C8:
/* E01208 801944C8 86C30006 */  lh          $v1, 0x6($s6)
/* E0120C 801944CC 18600002 */  blez        $v1, .Li1_801944D8
/* E01210 801944D0 2479FFFF */   addiu      $t9, $v1, -0x1
/* E01214 801944D4 A6D90006 */  sh          $t9, 0x6($s6)
.Li1_801944D8:
/* E01218 801944D8 24420001 */  addiu       $v0, $v0, 0x1
/* E0121C 801944DC 2C410011 */  sltiu       $at, $v0, 0x11
/* E01220 801944E0 1420FFF9 */  bnez        $at, .Li1_801944C8
/* E01224 801944E4 26D60080 */   addiu      $s6, $s6, 0x80
/* E01228 801944E8 8602009C */  lh          $v0, 0x9C($s0)
/* E0122C 801944EC 18400002 */  blez        $v0, .Li1_801944F8
/* E01230 801944F0 2448FFFF */   addiu      $t0, $v0, -0x1
/* E01234 801944F4 A608009C */  sh          $t0, 0x9C($s0)
.Li1_801944F8:
/* E01238 801944F8 860900C0 */  lh          $t1, 0xC0($s0)
/* E0123C 801944FC 19200006 */  blez        $t1, .Li1_80194518
/* E01240 80194500 240A0001 */   addiu      $t2, $zero, 0x1
/* E01244 80194504 3C018013 */  lui         $at, %hi(D_80137E84)
/* E01248 80194508 A02A7E84 */  sb          $t2, %lo(D_80137E84)($at)
/* E0124C 8019450C 860B00C0 */  lh          $t3, 0xC0($s0)
/* E01250 80194510 256CFFFF */  addiu       $t4, $t3, -0x1
/* E01254 80194514 A60C00C0 */  sh          $t4, 0xC0($s0)
.Li1_80194518:
/* E01258 80194518 860200A8 */  lh          $v0, 0xA8($s0)
/* E0125C 8019451C 18400003 */  blez        $v0, .Li1_8019452C
/* E01260 80194520 244DFFFF */   addiu      $t5, $v0, -0x1
/* E01264 80194524 A60D00A8 */  sh          $t5, 0xA8($s0)
/* E01268 80194528 860200A8 */  lh          $v0, 0xA8($s0)
.Li1_8019452C:
/* E0126C 8019452C 304E0003 */  andi        $t6, $v0, 0x3
/* E01270 80194530 24010001 */  addiu       $at, $zero, 0x1
/* E01274 80194534 15C1005E */  bne         $t6, $at, .Li1_801946B0
/* E01278 80194538 AFB00260 */   sw         $s0, 0x260($sp)
/* E0127C 8019453C AFA000F4 */  sw          $zero, 0xF4($sp)
/* E01280 80194540 0C0013AC */  jal         Rand_ZeroOne
/* E01284 80194544 AFB00260 */   sw         $s0, 0x260($sp)
/* E01288 80194548 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E0128C 8019454C 4481E000 */  mtc1        $at, $fs4
/* E01290 80194550 00000000 */  nop
/* E01294 80194554 461C0102 */  mul.s       $ft0, $fv0, $fs4
/* E01298 80194558 4600218D */  trunc.w.s   $ft1, $ft0
/* E0129C 8019455C 44183000 */  mfc1        $t8, $ft1
/* E012A0 80194560 00000000 */  nop
/* E012A4 80194564 27190002 */  addiu       $t9, $t8, 0x2
/* E012A8 80194568 1B200051 */  blez        $t9, .Li1_801946B0
/* E012AC 8019456C 3C0143B4 */   lui        $at, (0x43B40000 >> 16)
/* E012B0 80194570 4481F000 */  mtc1        $at, $fs5
/* E012B4 80194574 3C01801A */  lui         $at, %hi(D_i1_8019B388)
/* E012B8 80194578 C438B388 */  lwc1        $fs2, %lo(D_i1_8019B388)($at)
/* E012BC 8019457C 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E012C0 80194580 4481B000 */  mtc1        $at, $fs1
/* E012C4 80194584 3C0143C8 */  lui         $at, (0x43C80000 >> 16)
/* E012C8 80194588 4481A000 */  mtc1        $at, $fs0
/* E012CC 8019458C 00000000 */  nop
.Li1_80194590:
/* E012D0 80194590 0C01DE0F */  jal         func_8007783C
/* E012D4 80194594 2404018A */   addiu      $a0, $zero, 0x18A
/* E012D8 80194598 10400038 */  beqz        $v0, .Li1_8019467C
/* E012DC 8019459C 00408025 */   or         $s0, $v0, $zero
/* E012E0 801945A0 0C0013AC */  jal         Rand_ZeroOne
/* E012E4 801945A4 00000000 */   nop
/* E012E8 801945A8 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E012EC 801945AC 8FA20260 */  lw          $v0, 0x260($sp)
/* E012F0 801945B0 46144282 */  mul.s       $ft3, $ft2, $fs0
/* E012F4 801945B4 C4500004 */  lwc1        $ft4, 0x4($v0)
/* E012F8 801945B8 46105480 */  add.s       $ft5, $ft3, $ft4
/* E012FC 801945BC E6120004 */  swc1        $ft5, 0x4($s0)
/* E01300 801945C0 C4440008 */  lwc1        $ft0, 0x8($v0)
/* E01304 801945C4 46182180 */  add.s       $ft1, $ft0, $fs2
/* E01308 801945C8 0C0013AC */  jal         Rand_ZeroOne
/* E0130C 801945CC E6060008 */   swc1       $ft1, 0x8($s0)
/* E01310 801945D0 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E01314 801945D4 8FA80260 */  lw          $t0, 0x260($sp)
/* E01318 801945D8 46144282 */  mul.s       $ft3, $ft2, $fs0
/* E0131C 801945DC C510000C */  lwc1        $ft4, 0xC($t0)
/* E01320 801945E0 46105480 */  add.s       $ft5, $ft3, $ft4
/* E01324 801945E4 0C0013AC */  jal         Rand_ZeroOne
/* E01328 801945E8 E612000C */   swc1       $ft5, 0xC($s0)
/* E0132C 801945EC 461E0102 */  mul.s       $ft0, $fv0, $fs5
/* E01330 801945F0 0C0013AC */  jal         Rand_ZeroOne
/* E01334 801945F4 E6040010 */   swc1       $ft0, 0x10($s0)
/* E01338 801945F8 461E0182 */  mul.s       $ft1, $fv0, $fs5
/* E0133C 801945FC 0C0013AC */  jal         Rand_ZeroOne
/* E01340 80194600 E6060014 */   swc1       $ft1, 0x14($s0)
/* E01344 80194604 461E0202 */  mul.s       $ft2, $fv0, $fs5
/* E01348 80194608 0C0013AC */  jal         Rand_ZeroOne
/* E0134C 8019460C E6080018 */   swc1       $ft2, 0x18($s0)
/* E01350 80194610 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E01354 80194614 461C5402 */  mul.s       $ft4, $ft3, $fs4
/* E01358 80194618 0C0013AC */  jal         Rand_ZeroOne
/* E0135C 8019461C E6100054 */   swc1       $ft4, 0x54($s0)
/* E01360 80194620 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E01364 80194624 461C9102 */  mul.s       $ft0, $ft5, $fs4
/* E01368 80194628 0C0013AC */  jal         Rand_ZeroOne
/* E0136C 8019462C E6040058 */   swc1       $ft0, 0x58($s0)
/* E01370 80194630 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E01374 80194634 461C3202 */  mul.s       $ft2, $ft1, $fs4
/* E01378 80194638 0C0013AC */  jal         Rand_ZeroOne
/* E0137C 8019463C E608005C */   swc1       $ft2, 0x5C($s0)
/* E01380 80194640 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E01384 80194644 461C5400 */  add.s       $ft4, $ft3, $fs4
/* E01388 80194648 0C0013AC */  jal         Rand_ZeroOne
/* E0138C 8019464C E6100060 */   swc1       $ft4, 0x60($s0)
/* E01390 80194650 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E01394 80194654 461C9100 */  add.s       $ft0, $ft5, $fs4
/* E01398 80194658 0C0013AC */  jal         Rand_ZeroOne
/* E0139C 8019465C E6040064 */   swc1       $ft0, 0x64($s0)
/* E013A0 80194660 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E013A4 80194664 2409000C */  addiu       $t1, $zero, 0xC
/* E013A8 80194668 240A000C */  addiu       $t2, $zero, 0xC
/* E013AC 8019466C A6090078 */  sh          $t1, 0x78($s0)
/* E013B0 80194670 461C3200 */  add.s       $ft2, $ft1, $fs4
/* E013B4 80194674 A60A007A */  sh          $t2, 0x7A($s0)
/* E013B8 80194678 E6080068 */  swc1        $ft2, 0x68($s0)
.Li1_8019467C:
/* E013BC 8019467C 8FAB00F4 */  lw          $t3, 0xF4($sp)
/* E013C0 80194680 256C0001 */  addiu       $t4, $t3, 0x1
/* E013C4 80194684 0C0013AC */  jal         Rand_ZeroOne
/* E013C8 80194688 AFAC00F4 */   sw         $t4, 0xF4($sp)
/* E013CC 8019468C 461C0282 */  mul.s       $ft3, $fv0, $fs4
/* E013D0 80194690 8FAD00F4 */  lw          $t5, 0xF4($sp)
/* E013D4 80194694 4600540D */  trunc.w.s   $ft4, $ft3
/* E013D8 80194698 440F8000 */  mfc1        $t7, $ft4
/* E013DC 8019469C 00000000 */  nop
/* E013E0 801946A0 25F80002 */  addiu       $t8, $t7, 0x2
/* E013E4 801946A4 01B8082A */  slt         $at, $t5, $t8
/* E013E8 801946A8 1420FFB9 */  bnez        $at, .Li1_80194590
/* E013EC 801946AC 00000000 */   nop
.Li1_801946B0:
/* E013F0 801946B0 8FB00260 */  lw          $s0, 0x260($sp)
/* E013F4 801946B4 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* E013F8 801946B8 4481B000 */  mtc1        $at, $fs1
/* E013FC 801946BC AFA000F4 */  sw          $zero, 0xF4($sp)
/* E01400 801946C0 8619009C */  lh          $t9, 0x9C($s0)
/* E01404 801946C4 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* E01408 801946C8 4481E000 */  mtc1        $at, $fs4
/* E0140C 801946CC 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* E01410 801946D0 4481F000 */  mtc1        $at, $fs5
/* E01414 801946D4 33280002 */  andi        $t0, $t9, 0x2
/* E01418 801946D8 11000068 */  beqz        $t0, .Li1_8019487C
/* E0141C 801946DC 2404018A */   addiu      $a0, $zero, 0x18A
/* E01420 801946E0 0C01DE0F */  jal         func_8007783C
/* E01424 801946E4 AFB00260 */   sw         $s0, 0x260($sp)
/* E01428 801946E8 1040002F */  beqz        $v0, .Li1_801947A8
/* E0142C 801946EC 00408025 */   or         $s0, $v0, $zero
/* E01430 801946F0 8FA20260 */  lw          $v0, 0x260($sp)
/* E01434 801946F4 2409000B */  addiu       $t1, $zero, 0xB
/* E01438 801946F8 A609007A */  sh          $t1, 0x7A($s0)
/* E0143C 801946FC 860A007A */  lh          $t2, 0x7A($s0)
/* E01440 80194700 240B0002 */  addiu       $t3, $zero, 0x2
/* E01444 80194704 A20B0000 */  sb          $t3, 0x0($s0)
/* E01448 80194708 3C0142FA */  lui         $at, (0x42FA0000 >> 16)
/* E0144C 8019470C A60A0078 */  sh          $t2, 0x78($s0)
/* E01450 80194710 44812000 */  mtc1        $at, $ft0
/* E01454 80194714 C4520004 */  lwc1        $ft5, 0x4($v0)
/* E01458 80194718 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E0145C 8019471C 44818000 */  mtc1        $at, $ft4
/* E01460 80194720 46049180 */  add.s       $ft1, $ft5, $ft0
/* E01464 80194724 E6060004 */  swc1        $ft1, 0x4($s0)
/* E01468 80194728 C4480008 */  lwc1        $ft2, 0x8($v0)
/* E0146C 8019472C E6080008 */  swc1        $ft2, 0x8($s0)
/* E01470 80194730 C44A000C */  lwc1        $ft3, 0xC($v0)
/* E01474 80194734 E6100070 */  swc1        $ft4, 0x70($s0)
/* E01478 80194738 0C0013AC */  jal         Rand_ZeroOne
/* E0147C 8019473C E60A000C */   swc1       $ft3, 0xC($s0)
/* E01480 80194740 461E0482 */  mul.s       $ft5, $fv0, $fs5
/* E01484 80194744 0C0013AC */  jal         Rand_ZeroOne
/* E01488 80194748 E6120018 */   swc1       $ft5, 0x18($s0)
/* E0148C 8019474C 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E01490 80194750 461C2182 */  mul.s       $ft1, $ft0, $fs4
/* E01494 80194754 0C0013AC */  jal         Rand_ZeroOne
/* E01498 80194758 E6060054 */   swc1       $ft1, 0x54($s0)
/* E0149C 8019475C 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E014A0 80194760 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E014A4 80194764 44815000 */  mtc1        $at, $ft3
/* E014A8 80194768 44819000 */  mtc1        $at, $ft5
/* E014AC 8019476C 240C0064 */  addiu       $t4, $zero, 0x64
/* E014B0 80194770 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* E014B4 80194774 240EFFFD */  addiu       $t6, $zero, -0x3
/* E014B8 80194778 A60C0044 */  sh          $t4, 0x44($s0)
/* E014BC 8019477C A60E0046 */  sh          $t6, 0x46($s0)
/* E014C0 80194780 E6120068 */  swc1        $ft5, 0x68($s0)
/* E014C4 80194784 0C0013AC */  jal         Rand_ZeroOne
/* E014C8 80194788 E6100058 */   swc1       $ft4, 0x58($s0)
/* E014CC 8019478C 4616003C */  c.lt.s      $fv0, $fs1
/* E014D0 80194790 00000000 */  nop
/* E014D4 80194794 45000004 */  bc1f        .Li1_801947A8
/* E014D8 80194798 00000000 */   nop
/* E014DC 8019479C C6040068 */  lwc1        $ft0, 0x68($s0)
/* E014E0 801947A0 46002187 */  neg.s       $ft1, $ft0
/* E014E4 801947A4 E6060068 */  swc1        $ft1, 0x68($s0)
.Li1_801947A8:
/* E014E8 801947A8 0C01DE0F */  jal         func_8007783C
/* E014EC 801947AC 2404018A */   addiu      $a0, $zero, 0x18A
/* E014F0 801947B0 10400032 */  beqz        $v0, .Li1_8019487C
/* E014F4 801947B4 00408025 */   or         $s0, $v0, $zero
/* E014F8 801947B8 8FA20260 */  lw          $v0, 0x260($sp)
/* E014FC 801947BC 240F000B */  addiu       $t7, $zero, 0xB
/* E01500 801947C0 A60F007A */  sh          $t7, 0x7A($s0)
/* E01504 801947C4 860D007A */  lh          $t5, 0x7A($s0)
/* E01508 801947C8 24180002 */  addiu       $t8, $zero, 0x2
/* E0150C 801947CC A2180000 */  sb          $t8, 0x0($s0)
/* E01510 801947D0 3C0142FA */  lui         $at, (0x42FA0000 >> 16)
/* E01514 801947D4 A60D0078 */  sh          $t5, 0x78($s0)
/* E01518 801947D8 44815000 */  mtc1        $at, $ft3
/* E0151C 801947DC C4480004 */  lwc1        $ft2, 0x4($v0)
/* E01520 801947E0 460A4401 */  sub.s       $ft4, $ft2, $ft3
/* E01524 801947E4 E6100004 */  swc1        $ft4, 0x4($s0)
/* E01528 801947E8 C4520008 */  lwc1        $ft5, 0x8($v0)
/* E0152C 801947EC E6120008 */  swc1        $ft5, 0x8($s0)
/* E01530 801947F0 C444000C */  lwc1        $ft0, 0xC($v0)
/* E01534 801947F4 0C0013AC */  jal         Rand_ZeroOne
/* E01538 801947F8 E604000C */   swc1       $ft0, 0xC($s0)
/* E0153C 801947FC 461E0182 */  mul.s       $ft1, $fv0, $fs5
/* E01540 80194800 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E01544 80194804 44814000 */  mtc1        $at, $ft2
/* E01548 80194808 00000000 */  nop
/* E0154C 8019480C E6080070 */  swc1        $ft2, 0x70($s0)
/* E01550 80194810 0C0013AC */  jal         Rand_ZeroOne
/* E01554 80194814 E6060018 */   swc1       $ft1, 0x18($s0)
/* E01558 80194818 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E0155C 8019481C 461C5402 */  mul.s       $ft4, $ft3, $fs4
/* E01560 80194820 0C0013AC */  jal         Rand_ZeroOne
/* E01564 80194824 E6100054 */   swc1       $ft4, 0x54($s0)
/* E01568 80194828 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E0156C 8019482C 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E01570 80194830 44812000 */  mtc1        $at, $ft0
/* E01574 80194834 44814000 */  mtc1        $at, $ft2
/* E01578 80194838 24190064 */  addiu       $t9, $zero, 0x64
/* E0157C 8019483C 46049182 */  mul.s       $ft1, $ft5, $ft0
/* E01580 80194840 2408FFFD */  addiu       $t0, $zero, -0x3
/* E01584 80194844 A6190044 */  sh          $t9, 0x44($s0)
/* E01588 80194848 A6080046 */  sh          $t0, 0x46($s0)
/* E0158C 8019484C E6080068 */  swc1        $ft2, 0x68($s0)
/* E01590 80194850 0C0013AC */  jal         Rand_ZeroOne
/* E01594 80194854 E6060058 */   swc1       $ft1, 0x58($s0)
/* E01598 80194858 4616003C */  c.lt.s      $fv0, $fs1
/* E0159C 8019485C 00000000 */  nop
/* E015A0 80194860 45020005 */  bc1fl       .Li1_80194878
/* E015A4 80194864 24150032 */   addiu      $s5, $zero, 0x32
/* E015A8 80194868 86090048 */  lh          $t1, 0x48($s0)
/* E015AC 8019486C 00095023 */  negu        $t2, $t1
/* E015B0 80194870 A60A0048 */  sh          $t2, 0x48($s0)
/* E015B4 80194874 24150032 */  addiu       $s5, $zero, 0x32
.Li1_80194878:
/* E015B8 80194878 A615004A */  sh          $s5, 0x4A($s0)
.Li1_8019487C:
/* E015BC 8019487C 8FB00260 */  lw          $s0, 0x260($sp)
/* E015C0 80194880 24150032 */  addiu       $s5, $zero, 0x32
/* E015C4 80194884 860B004E */  lh          $t3, 0x4E($s0)
/* E015C8 80194888 5D60007F */  bgtzl       $t3, .Li1_80194A88
/* E015CC 8019488C 8FB00260 */   lw         $s0, 0x260($sp)
/* E015D0 80194890 860300B0 */  lh          $v1, 0xB0($s0)
/* E015D4 80194894 AFB00260 */  sw          $s0, 0x260($sp)
/* E015D8 80194898 2C610005 */  sltiu       $at, $v1, 0x5
/* E015DC 8019489C 10200079 */  beqz        $at, .Li1_80194A84
/* E015E0 801948A0 00036080 */   sll        $t4, $v1, 2
/* E015E4 801948A4 3C01801A */  lui         $at, %hi(jtbl_i1_8019B38C)
/* E015E8 801948A8 002C0821 */  addu        $at, $at, $t4
/* E015EC 801948AC 8C2CB38C */  lw          $t4, %lo(jtbl_i1_8019B38C)($at)
/* E015F0 801948B0 01800008 */  jr          $t4
/* E015F4 801948B4 00000000 */   nop
.Li1_801948B8:
/* E015F8 801948B8 10000072 */  b           .Li1_80194A84
/* E015FC 801948BC AFB00260 */   sw         $s0, 0x260($sp)
.Li1_801948C0:
/* E01600 801948C0 860200B2 */  lh          $v0, 0xB2($s0)
/* E01604 801948C4 3C01801A */  lui         $at, %hi(D_i1_8019AE00)
/* E01608 801948C8 246F0001 */  addiu       $t7, $v1, 0x1
/* E0160C 801948CC 000270C0 */  sll         $t6, $v0, 3
/* E01610 801948D0 002E0821 */  addu        $at, $at, $t6
/* E01614 801948D4 C42AAE00 */  lwc1        $ft3, %lo(D_i1_8019AE00)($at)
/* E01618 801948D8 A60F00B0 */  sh          $t7, 0xB0($s0)
/* E0161C 801948DC 860300B0 */  lh          $v1, 0xB0($s0)
/* E01620 801948E0 A60200B4 */  sh          $v0, 0xB4($s0)
/* E01624 801948E4 E60A010C */  swc1        $ft3, 0x10C($s0)
.Li1_801948E8:
/* E01628 801948E8 44808000 */  mtc1        $zero, $ft4
/* E0162C 801948EC 246D0001 */  addiu       $t5, $v1, 0x1
/* E01630 801948F0 A60D00B0 */  sh          $t5, 0xB0($s0)
/* E01634 801948F4 E6100110 */  swc1        $ft4, 0x110($s0)
.Li1_801948F8:
/* E01638 801948F8 3C01801A */  lui         $at, %hi(D_i1_8019B3A0)
/* E0163C 801948FC C432B3A0 */  lwc1        $ft5, %lo(D_i1_8019B3A0)($at)
/* E01640 80194900 26040110 */  addiu       $a0, $s0, 0x110
/* E01644 80194904 3C054140 */  lui         $a1, (0x41400000 >> 16)
/* E01648 80194908 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E0164C 8019490C 3C073F80 */  lui         $a3, (0x3F800000 >> 16)
/* E01650 80194910 AFB00260 */  sw          $s0, 0x260($sp)
/* E01654 80194914 0C026F0B */  jal         Math_SmoothStepToF
/* E01658 80194918 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E0165C 8019491C 8FB80260 */  lw          $t8, 0x260($sp)
/* E01660 80194920 3C01801A */  lui         $at, %hi(D_i1_8019B3A4)
/* E01664 80194924 C424B3A4 */  lwc1        $ft0, %lo(D_i1_8019B3A4)($at)
/* E01668 80194928 27B900CC */  addiu       $t9, $sp, 0xCC
/* E0166C 8019492C 8F05010C */  lw          $a1, 0x10C($t8)
/* E01670 80194930 8F070110 */  lw          $a3, 0x110($t8)
/* E01674 80194934 AFB90014 */  sw          $t9, 0x14($sp)
/* E01678 80194938 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E0167C 8019493C 270400F0 */  addiu       $a0, $t8, 0xF0
/* E01680 80194940 0C06483C */  jal         func_i1_801920F0
/* E01684 80194944 E7A40010 */   swc1       $ft0, 0x10($sp)
/* E01688 80194948 C7A200CC */  lwc1        $fv1, 0xCC($sp)
/* E0168C 8019494C 3C014234 */  lui         $at, (0x42340000 >> 16)
/* E01690 80194950 44813000 */  mtc1        $at, $ft1
/* E01694 80194954 46001005 */  abs.s       $fv0, $fv1
/* E01698 80194958 4606003E */  c.le.s      $fv0, $ft1
/* E0169C 8019495C 00000000 */  nop
/* E016A0 80194960 4500001F */  bc1f        .Li1_801949E0
/* E016A4 80194964 00000000 */   nop
/* E016A8 80194968 44804000 */  mtc1        $zero, $ft2
/* E016AC 8019496C 00000000 */  nop
/* E016B0 80194970 4602403C */  c.lt.s      $ft2, $fv1
/* E016B4 80194974 00000000 */  nop
/* E016B8 80194978 45020004 */  bc1fl       .Li1_8019498C
/* E016BC 8019497C 44805000 */   mtc1       $zero, $ft3
/* E016C0 80194980 1000000B */  b           .Li1_801949B0
/* E016C4 80194984 24040001 */   addiu      $a0, $zero, 0x1
/* E016C8 80194988 44805000 */  mtc1        $zero, $ft3
.Li1_8019498C:
/* E016CC 8019498C 00000000 */  nop
/* E016D0 80194990 460A1032 */  c.eq.s      $fv1, $ft3
/* E016D4 80194994 00000000 */  nop
/* E016D8 80194998 45020004 */  bc1fl       .Li1_801949AC
/* E016DC 8019499C 2402FFFF */   addiu      $v0, $zero, -0x1
/* E016E0 801949A0 10000002 */  b           .Li1_801949AC
/* E016E4 801949A4 00001025 */   or         $v0, $zero, $zero
/* E016E8 801949A8 2402FFFF */  addiu       $v0, $zero, -0x1
.Li1_801949AC:
/* E016EC 801949AC 00402025 */  or          $a0, $v0, $zero
.Li1_801949B0:
/* E016F0 801949B0 44848000 */  mtc1        $a0, $ft4
/* E016F4 801949B4 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E016F8 801949B8 4481D000 */  mtc1        $at, $fs3
/* E016FC 801949BC 468084A0 */  cvt.s.w     $ft5, $ft4
/* E01700 801949C0 8FA80260 */  lw          $t0, 0x260($sp)
/* E01704 801949C4 C506010C */  lwc1        $ft1, 0x10C($t0)
/* E01708 801949C8 850900B0 */  lh          $t1, 0xB0($t0)
/* E0170C 801949CC 461A9102 */  mul.s       $ft0, $ft5, $fs3
/* E01710 801949D0 252A0001 */  addiu       $t2, $t1, 0x1
/* E01714 801949D4 A50A00B0 */  sh          $t2, 0xB0($t0)
/* E01718 801949D8 46062200 */  add.s       $ft2, $ft0, $ft1
/* E0171C 801949DC E5080108 */  swc1        $ft2, 0x108($t0)
.Li1_801949E0:
/* E01720 801949E0 10000029 */  b           .Li1_80194A88
/* E01724 801949E4 8FB00260 */   lw         $s0, 0x260($sp)
.Li1_801949E8:
/* E01728 801949E8 3C01801A */  lui         $at, %hi(D_i1_8019B3A8)
/* E0172C 801949EC C42AB3A8 */  lwc1        $ft3, %lo(D_i1_8019B3A8)($at)
/* E01730 801949F0 26040110 */  addiu       $a0, $s0, 0x110
/* E01734 801949F4 3C054140 */  lui         $a1, (0x41400000 >> 16)
/* E01738 801949F8 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E0173C 801949FC 3C073F80 */  lui         $a3, (0x3F800000 >> 16)
/* E01740 80194A00 AFB00260 */  sw          $s0, 0x260($sp)
/* E01744 80194A04 0C026F0B */  jal         Math_SmoothStepToF
/* E01748 80194A08 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E0174C 80194A0C 8FAB0260 */  lw          $t3, 0x260($sp)
/* E01750 80194A10 3C01801A */  lui         $at, %hi(D_i1_8019B3AC)
/* E01754 80194A14 C424B3AC */  lwc1        $ft0, %lo(D_i1_8019B3AC)($at)
/* E01758 80194A18 C5700110 */  lwc1        $ft4, 0x110($t3)
/* E0175C 80194A1C 8D65010C */  lw          $a1, 0x10C($t3)
/* E01760 80194A20 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E01764 80194A24 461C8483 */  div.s       $ft5, $ft4, $fs4
/* E01768 80194A28 25640108 */  addiu       $a0, $t3, 0x108
/* E0176C 80194A2C E7A40010 */  swc1        $ft0, 0x10($sp)
/* E01770 80194A30 44079000 */  mfc1        $a3, $ft5
/* E01774 80194A34 0C026F4E */  jal         Math_SmoothStepToAngle
/* E01778 80194A38 00000000 */   nop
/* E0177C 80194A3C 8FAC0260 */  lw          $t4, 0x260($sp)
/* E01780 80194A40 3C01801A */  lui         $at, %hi(D_i1_8019B3B0)
/* E01784 80194A44 C426B3B0 */  lwc1        $ft1, %lo(D_i1_8019B3B0)($at)
/* E01788 80194A48 8D850108 */  lw          $a1, 0x108($t4)
/* E0178C 80194A4C 8D870110 */  lw          $a3, 0x110($t4)
/* E01790 80194A50 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E01794 80194A54 258400F0 */  addiu       $a0, $t4, 0xF0
/* E01798 80194A58 0C026F4E */  jal         Math_SmoothStepToAngle
/* E0179C 80194A5C E7A60010 */   swc1       $ft1, 0x10($sp)
/* E017A0 80194A60 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E017A4 80194A64 44814000 */  mtc1        $at, $ft2
/* E017A8 80194A68 46000005 */  abs.s       $fv0, $fv0
/* E017AC 80194A6C 4608003C */  c.lt.s      $fv0, $ft2
/* E017B0 80194A70 00000000 */  nop
/* E017B4 80194A74 45020004 */  bc1fl       .Li1_80194A88
/* E017B8 80194A78 8FB00260 */   lw         $s0, 0x260($sp)
/* E017BC 80194A7C 8FAE0260 */  lw          $t6, 0x260($sp)
/* E017C0 80194A80 A5C000B0 */  sh          $zero, 0xB0($t6)
.Li1_80194A84:
/* E017C4 80194A84 8FB00260 */  lw          $s0, 0x260($sp)
.Li1_80194A88:
/* E017C8 80194A88 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* E017CC 80194A8C 4481D000 */  mtc1        $at, $fs3
/* E017D0 80194A90 3C01801A */  lui         $at, %hi(D_i1_8019B3B4)
/* E017D4 80194A94 C430B3B4 */  lwc1        $ft4, %lo(D_i1_8019B3B4)($at)
/* E017D8 80194A98 C60A0014 */  lwc1        $ft3, 0x14($s0)
/* E017DC 80194A9C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E017E0 80194AA0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E017E4 80194AA4 46105482 */  mul.s       $ft5, $ft3, $ft4
/* E017E8 80194AA8 00003025 */  or          $a2, $zero, $zero
/* E017EC 80194AAC 44059000 */  mfc1        $a1, $ft5
/* E017F0 80194AB0 0C0017A4 */  jal         Matrix_RotateY
/* E017F4 80194AB4 00000000 */   nop
/* E017F8 80194AB8 3C0F801A */  lui         $t7, %hi(D_i1_8019B838 + 0x74)
/* E017FC 80194ABC 3C0D801A */  lui         $t5, %hi(D_i1_8019B838 + 0x64)
/* E01800 80194AC0 3C18801A */  lui         $t8, %hi(D_i1_8019B838 + 0x6C)
/* E01804 80194AC4 3C014270 */  lui         $at, (0x42700000 >> 16)
/* E01808 80194AC8 2718B8A4 */  addiu       $t8, $t8, %lo(D_i1_8019B838 + 0x6C)
/* E0180C 80194ACC 25ADB89C */  addiu       $t5, $t5, %lo(D_i1_8019B838 + 0x64)
/* E01810 80194AD0 25EFB8AC */  addiu       $t7, $t7, %lo(D_i1_8019B838 + 0x74)
/* E01814 80194AD4 3C16801A */  lui         $s6, %hi(D_i1_8019B838)
/* E01818 80194AD8 4481C000 */  mtc1        $at, $fs2
/* E0181C 80194ADC 26D6B838 */  addiu       $s6, $s6, %lo(D_i1_8019B838)
/* E01820 80194AE0 AFAF0098 */  sw          $t7, 0x98($sp)
/* E01824 80194AE4 AFAD0094 */  sw          $t5, 0x94($sp)
/* E01828 80194AE8 AFB80090 */  sw          $t8, 0x90($sp)
/* E0182C 80194AEC 241E000E */  addiu       $fp, $zero, 0xE
.Li1_80194AF0:
/* E01830 80194AF0 C6C00078 */  lwc1        $fv0, 0x78($s6)
/* E01834 80194AF4 C6C40074 */  lwc1        $ft0, 0x74($s6)
/* E01838 80194AF8 4600203C */  c.lt.s      $ft0, $fv0
/* E0183C 80194AFC 00000000 */  nop
/* E01840 80194B00 4500000A */  bc1f        .Li1_80194B2C
/* E01844 80194B04 3C01801A */   lui        $at, %hi(D_i1_8019B3B8)
/* E01848 80194B08 C426B3B8 */  lwc1        $ft1, %lo(D_i1_8019B3B8)($at)
/* E0184C 80194B0C 44050000 */  mfc1        $a1, $fv0
/* E01850 80194B10 8FA40098 */  lw          $a0, 0x98($sp)
/* E01854 80194B14 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E01858 80194B18 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E0185C 80194B1C 0C026F0B */  jal         Math_SmoothStepToF
/* E01860 80194B20 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E01864 80194B24 1000000A */  b           .Li1_80194B50
/* E01868 80194B28 C6C00068 */   lwc1       $fv0, 0x68($s6)
.Li1_80194B2C:
/* E0186C 80194B2C 3C01801A */  lui         $at, %hi(D_i1_8019B3BC)
/* E01870 80194B30 C428B3BC */  lwc1        $ft2, %lo(D_i1_8019B3BC)($at)
/* E01874 80194B34 44050000 */  mfc1        $a1, $fv0
/* E01878 80194B38 8FA40098 */  lw          $a0, 0x98($sp)
/* E0187C 80194B3C 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E01880 80194B40 3C074080 */  lui         $a3, (0x40800000 >> 16)
/* E01884 80194B44 0C026F0B */  jal         Math_SmoothStepToF
/* E01888 80194B48 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E0188C 80194B4C C6C00068 */  lwc1        $fv0, 0x68($s6)
.Li1_80194B50:
/* E01890 80194B50 C6CA0064 */  lwc1        $ft3, 0x64($s6)
/* E01894 80194B54 4600503C */  c.lt.s      $ft3, $fv0
/* E01898 80194B58 00000000 */  nop
/* E0189C 80194B5C 4500000A */  bc1f        .Li1_80194B88
/* E018A0 80194B60 3C01801A */   lui        $at, %hi(D_i1_8019B3C0)
/* E018A4 80194B64 C430B3C0 */  lwc1        $ft4, %lo(D_i1_8019B3C0)($at)
/* E018A8 80194B68 44050000 */  mfc1        $a1, $fv0
/* E018AC 80194B6C 8FA40094 */  lw          $a0, 0x94($sp)
/* E018B0 80194B70 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E018B4 80194B74 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E018B8 80194B78 0C026F0B */  jal         Math_SmoothStepToF
/* E018BC 80194B7C E7B00010 */   swc1       $ft4, 0x10($sp)
/* E018C0 80194B80 1000000A */  b           .Li1_80194BAC
/* E018C4 80194B84 C6C00070 */   lwc1       $fv0, 0x70($s6)
.Li1_80194B88:
/* E018C8 80194B88 3C01801A */  lui         $at, %hi(D_i1_8019B3C4)
/* E018CC 80194B8C C432B3C4 */  lwc1        $ft5, %lo(D_i1_8019B3C4)($at)
/* E018D0 80194B90 44050000 */  mfc1        $a1, $fv0
/* E018D4 80194B94 8FA40094 */  lw          $a0, 0x94($sp)
/* E018D8 80194B98 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E018DC 80194B9C 3C074080 */  lui         $a3, (0x40800000 >> 16)
/* E018E0 80194BA0 0C026F0B */  jal         Math_SmoothStepToF
/* E018E4 80194BA4 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E018E8 80194BA8 C6C00070 */  lwc1        $fv0, 0x70($s6)
.Li1_80194BAC:
/* E018EC 80194BAC C6C4006C */  lwc1        $ft0, 0x6C($s6)
/* E018F0 80194BB0 4600203C */  c.lt.s      $ft0, $fv0
/* E018F4 80194BB4 00000000 */  nop
/* E018F8 80194BB8 4500000A */  bc1f        .Li1_80194BE4
/* E018FC 80194BBC 3C01801A */   lui        $at, %hi(D_i1_8019B3C8)
/* E01900 80194BC0 C426B3C8 */  lwc1        $ft1, %lo(D_i1_8019B3C8)($at)
/* E01904 80194BC4 44050000 */  mfc1        $a1, $fv0
/* E01908 80194BC8 8FA40090 */  lw          $a0, 0x90($sp)
/* E0190C 80194BCC 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E01910 80194BD0 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E01914 80194BD4 0C026F0B */  jal         Math_SmoothStepToF
/* E01918 80194BD8 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E0191C 80194BDC 1000000A */  b           .Li1_80194C08
/* E01920 80194BE0 96C2007C */   lhu        $v0, 0x7C($s6)
.Li1_80194BE4:
/* E01924 80194BE4 3C01801A */  lui         $at, %hi(D_i1_8019B3CC)
/* E01928 80194BE8 C428B3CC */  lwc1        $ft2, %lo(D_i1_8019B3CC)($at)
/* E0192C 80194BEC 44050000 */  mfc1        $a1, $fv0
/* E01930 80194BF0 8FA40090 */  lw          $a0, 0x90($sp)
/* E01934 80194BF4 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E01938 80194BF8 3C074080 */  lui         $a3, (0x40800000 >> 16)
/* E0193C 80194BFC 0C026F0B */  jal         Math_SmoothStepToF
/* E01940 80194C00 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E01944 80194C04 96C2007C */  lhu         $v0, 0x7C($s6)
.Li1_80194C08:
/* E01948 80194C08 30590004 */  andi        $t9, $v0, 0x4
/* E0194C 80194C0C 5320005F */  beql        $t9, $zero, .Li1_80194D8C
/* E01950 80194C10 30480010 */   andi       $t0, $v0, 0x10
/* E01954 80194C14 86C30004 */  lh          $v1, 0x4($s6)
/* E01958 80194C18 5C600059 */  bgtzl       $v1, .Li1_80194D80
/* E0195C 80194C1C 246AFFFF */   addiu      $t2, $v1, -0x1
/* E01960 80194C20 86CA0002 */  lh          $t2, 0x2($s6)
/* E01964 80194C24 34490008 */  ori         $t1, $v0, 0x8
/* E01968 80194C28 24010008 */  addiu       $at, $zero, 0x8
/* E0196C 80194C2C 15410048 */  bne         $t2, $at, .Li1_80194D50
/* E01970 80194C30 A6C9007C */   sh         $t1, 0x7C($s6)
/* E01974 80194C34 8FA800F4 */  lw          $t0, 0xF4($sp)
/* E01978 80194C38 3C0C801A */  lui         $t4, %hi(D_i1_8019A820)
/* E0197C 80194C3C 258CA820 */  addiu       $t4, $t4, %lo(D_i1_8019A820)
/* E01980 80194C40 00085880 */  sll         $t3, $t0, 2
/* E01984 80194C44 01685823 */  subu        $t3, $t3, $t0
/* E01988 80194C48 000B58C0 */  sll         $t3, $t3, 3
/* E0198C 80194C4C 016C1021 */  addu        $v0, $t3, $t4
/* E01990 80194C50 84540008 */  lh          $s4, 0x8($v0)
/* E01994 80194C54 2401FFFF */  addiu       $at, $zero, -0x1
/* E01998 80194C58 AFA2008C */  sw          $v0, 0x8C($sp)
/* E0199C 80194C5C 12810027 */  beq         $s4, $at, .Li1_80194CFC
/* E019A0 80194C60 3C0F801A */   lui        $t7, %hi(D_i1_8019B838)
/* E019A4 80194C64 25EFB838 */  addiu       $t7, $t7, %lo(D_i1_8019B838)
/* E019A8 80194C68 001471C0 */  sll         $t6, $s4, 7
/* E019AC 80194C6C 01CF8021 */  addu        $s0, $t6, $t7
/* E019B0 80194C70 860D0000 */  lh          $t5, 0x0($s0)
/* E019B4 80194C74 19A00021 */  blez        $t5, .Li1_80194CFC
/* E019B8 80194C78 2418FFFF */   addiu      $t8, $zero, -0x1
/* E019BC 80194C7C 24190010 */  addiu       $t9, $zero, 0x10
/* E019C0 80194C80 9608007C */  lhu         $t0, 0x7C($s0)
/* E019C4 80194C84 8FB20260 */  lw          $s2, 0x260($sp)
/* E019C8 80194C88 A6180000 */  sh          $t8, 0x0($s0)
/* E019CC 80194C8C A6190002 */  sh          $t9, 0x2($s0)
/* E019D0 80194C90 844A000C */  lh          $t2, 0xC($v0)
/* E019D4 80194C94 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E019D8 80194C98 3C0C800C */  lui         $t4, %hi(D_800C5D3C)
/* E019DC 80194C9C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E019E0 80194CA0 258C5D3C */  addiu       $t4, $t4, %lo(D_800C5D3C)
/* E019E4 80194CA4 3C042903 */  lui         $a0, (0x2903A008 >> 16)
/* E019E8 80194CA8 350B0004 */  ori         $t3, $t0, 0x4
/* E019EC 80194CAC 265203FC */  addiu       $s2, $s2, 0x3FC
/* E019F0 80194CB0 A60B007C */  sh          $t3, 0x7C($s0)
/* E019F4 80194CB4 02402825 */  or          $a1, $s2, $zero
/* E019F8 80194CB8 3484A008 */  ori         $a0, $a0, (0x2903A008 & 0xFFFF)
/* E019FC 80194CBC AFAC0014 */  sw          $t4, 0x14($sp)
/* E01A00 80194CC0 AFA70010 */  sw          $a3, 0x10($sp)
/* E01A04 80194CC4 24060004 */  addiu       $a2, $zero, 0x4
/* E01A08 80194CC8 0C006486 */  jal         Audio_PlaySfx
/* E01A0C 80194CCC A60A0004 */   sh         $t2, 0x4($s0)
/* E01A10 80194CD0 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E01A14 80194CD4 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E01A18 80194CD8 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E01A1C 80194CDC 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E01A20 80194CE0 3C041903 */  lui         $a0, (0x19030059 >> 16)
/* E01A24 80194CE4 34840059 */  ori         $a0, $a0, (0x19030059 & 0xFFFF)
/* E01A28 80194CE8 AFAE0014 */  sw          $t6, 0x14($sp)
/* E01A2C 80194CEC AFA70010 */  sw          $a3, 0x10($sp)
/* E01A30 80194CF0 02402825 */  or          $a1, $s2, $zero
/* E01A34 80194CF4 0C006486 */  jal         Audio_PlaySfx
/* E01A38 80194CF8 24060004 */   addiu      $a2, $zero, 0x4
.Li1_80194CFC:
/* E01A3C 80194CFC 8FAF008C */  lw          $t7, 0x8C($sp)
/* E01A40 80194D00 2401FFFF */  addiu       $at, $zero, -0x1
/* E01A44 80194D04 85F4000A */  lh          $s4, 0xA($t7)
/* E01A48 80194D08 12810011 */  beq         $s4, $at, .Li1_80194D50
/* E01A4C 80194D0C 3C18801A */   lui        $t8, %hi(D_i1_8019B838)
/* E01A50 80194D10 2718B838 */  addiu       $t8, $t8, %lo(D_i1_8019B838)
/* E01A54 80194D14 001469C0 */  sll         $t5, $s4, 7
/* E01A58 80194D18 01B88021 */  addu        $s0, $t5, $t8
/* E01A5C 80194D1C 86190000 */  lh          $t9, 0x0($s0)
/* E01A60 80194D20 5B20000C */  blezl       $t9, .Li1_80194D54
/* E01A64 80194D24 86CF0002 */   lh         $t7, 0x2($s6)
/* E01A68 80194D28 8FA8008C */  lw          $t0, 0x8C($sp)
/* E01A6C 80194D2C 2409FFFF */  addiu       $t1, $zero, -0x1
/* E01A70 80194D30 240A0010 */  addiu       $t2, $zero, 0x10
/* E01A74 80194D34 960C007C */  lhu         $t4, 0x7C($s0)
/* E01A78 80194D38 A6090000 */  sh          $t1, 0x0($s0)
/* E01A7C 80194D3C A60A0002 */  sh          $t2, 0x2($s0)
/* E01A80 80194D40 850B000C */  lh          $t3, 0xC($t0)
/* E01A84 80194D44 358E0004 */  ori         $t6, $t4, 0x4
/* E01A88 80194D48 A60E007C */  sh          $t6, 0x7C($s0)
/* E01A8C 80194D4C A60B0004 */  sh          $t3, 0x4($s0)
.Li1_80194D50:
/* E01A90 80194D50 86CF0002 */  lh          $t7, 0x2($s6)
.Li1_80194D54:
/* E01A94 80194D54 25EDFFFF */  addiu       $t5, $t7, -0x1
/* E01A98 80194D58 A6CD0002 */  sh          $t5, 0x2($s6)
/* E01A9C 80194D5C 86D80002 */  lh          $t8, 0x2($s6)
/* E01AA0 80194D60 1F000004 */  bgtz        $t8, .Li1_80194D74
/* E01AA4 80194D64 00000000 */   nop
/* E01AA8 80194D68 96D9007C */  lhu         $t9, 0x7C($s6)
/* E01AAC 80194D6C 3329FFFB */  andi        $t1, $t9, 0xFFFB
/* E01AB0 80194D70 A6C9007C */  sh          $t1, 0x7C($s6)
.Li1_80194D74:
/* E01AB4 80194D74 10000004 */  b           .Li1_80194D88
/* E01AB8 80194D78 96C2007C */   lhu        $v0, 0x7C($s6)
/* E01ABC 80194D7C 246AFFFF */  addiu       $t2, $v1, -0x1
.Li1_80194D80:
/* E01AC0 80194D80 A6CA0004 */  sh          $t2, 0x4($s6)
/* E01AC4 80194D84 96C2007C */  lhu         $v0, 0x7C($s6)
.Li1_80194D88:
/* E01AC8 80194D88 30480010 */  andi        $t0, $v0, 0x10
.Li1_80194D8C:
/* E01ACC 80194D8C 5100015D */  beql        $t0, $zero, .Li1_80195304
/* E01AD0 80194D90 304E0040 */   andi       $t6, $v0, 0x40
/* E01AD4 80194D94 8FA300F4 */  lw          $v1, 0xF4($sp)
/* E01AD8 80194D98 3C0C801A */  lui         $t4, %hi(D_i1_8019A820)
/* E01ADC 80194D9C 258CA820 */  addiu       $t4, $t4, %lo(D_i1_8019A820)
/* E01AE0 80194DA0 00035880 */  sll         $t3, $v1, 2
/* E01AE4 80194DA4 01635823 */  subu        $t3, $t3, $v1
/* E01AE8 80194DA8 000B58C0 */  sll         $t3, $t3, 3
/* E01AEC 80194DAC 016C7021 */  addu        $t6, $t3, $t4
/* E01AF0 80194DB0 AFAE008C */  sw          $t6, 0x8C($sp)
/* E01AF4 80194DB4 147E0004 */  bne         $v1, $fp, .Li1_80194DC8
/* E01AF8 80194DB8 0000B825 */   or         $s7, $zero, $zero
/* E01AFC 80194DBC 86CF0000 */  lh          $t7, 0x0($s6)
/* E01B00 80194DC0 5DE000DB */  bgtzl       $t7, .Li1_80195130
/* E01B04 80194DC4 8FA9008C */   lw         $t1, 0x8C($sp)
.Li1_80194DC8:
/* E01B08 80194DC8 8FAD008C */  lw          $t5, 0x8C($sp)
/* E01B0C 80194DCC 86D40002 */  lh          $s4, 0x2($s6)
/* E01B10 80194DD0 85B80006 */  lh          $t8, 0x6($t5)
/* E01B14 80194DD4 5B000148 */  blezl       $t8, .Li1_801952F8
/* E01B18 80194DD8 304CFFEF */   andi       $t4, $v0, 0xFFEF
/* E01B1C 80194DDC 8FB900F4 */  lw          $t9, 0xF4($sp)
/* E01B20 80194DE0 3C08801A */  lui         $t0, %hi(D_i1_8019B838)
/* E01B24 80194DE4 2508B838 */  addiu       $t0, $t0, %lo(D_i1_8019B838)
/* E01B28 80194DE8 001949C0 */  sll         $t1, $t9, 7
/* E01B2C 80194DEC 252A000C */  addiu       $t2, $t1, 0xC
/* E01B30 80194DF0 01485821 */  addu        $t3, $t2, $t0
/* E01B34 80194DF4 001460C0 */  sll         $t4, $s4, 3
/* E01B38 80194DF8 3C0E801A */  lui         $t6, %hi(D_i1_8019AD80)
/* E01B3C 80194DFC 25CEAD80 */  addiu       $t6, $t6, %lo(D_i1_8019AD80)
/* E01B40 80194E00 018E9021 */  addu        $s2, $t4, $t6
/* E01B44 80194E04 0160A025 */  or          $s4, $t3, $zero
/* E01B48 80194E08 AFAB00A0 */  sw          $t3, 0xA0($sp)
.Li1_80194E0C:
/* E01B4C 80194E0C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E01B50 80194E10 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E01B54 80194E14 02802825 */  or          $a1, $s4, $zero
/* E01B58 80194E18 27A600F8 */  addiu       $a2, $sp, 0xF8
/* E01B5C 80194E1C 0C001A5C */  jal         Matrix_MultVec3f
/* E01B60 80194E20 00008825 */   or         $s1, $zero, $zero
/* E01B64 80194E24 0C0013AC */  jal         Rand_ZeroOne
/* E01B68 80194E28 00000000 */   nop
/* E01B6C 80194E2C 46160401 */  sub.s       $ft4, $fv0, $fs1
/* E01B70 80194E30 8FAF0260 */  lw          $t7, 0x260($sp)
/* E01B74 80194E34 C7A600F8 */  lwc1        $ft1, 0xF8($sp)
/* E01B78 80194E38 46188482 */  mul.s       $ft5, $ft4, $fs2
/* E01B7C 80194E3C C5EA0004 */  lwc1        $ft3, 0x4($t7)
/* E01B80 80194E40 46125100 */  add.s       $ft0, $ft3, $ft5
/* E01B84 80194E44 46043200 */  add.s       $ft2, $ft1, $ft0
/* E01B88 80194E48 0C0013AC */  jal         Rand_ZeroOne
/* E01B8C 80194E4C E7A800F8 */   swc1       $ft2, 0xF8($sp)
/* E01B90 80194E50 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E01B94 80194E54 8FA20260 */  lw          $v0, 0x260($sp)
/* E01B98 80194E58 C7A400FC */  lwc1        $ft0, 0xFC($sp)
/* E01B9C 80194E5C 86530004 */  lh          $s3, 0x4($s2)
/* E01BA0 80194E60 46185482 */  mul.s       $ft5, $ft3, $fs2
/* E01BA4 80194E64 C4500008 */  lwc1        $ft4, 0x8($v0)
/* E01BA8 80194E68 C7AA0100 */  lwc1        $ft3, 0x100($sp)
/* E01BAC 80194E6C 46128180 */  add.s       $ft1, $ft4, $ft5
/* E01BB0 80194E70 46062200 */  add.s       $ft2, $ft0, $ft1
/* E01BB4 80194E74 E7A800FC */  swc1        $ft2, 0xFC($sp)
/* E01BB8 80194E78 C450000C */  lwc1        $ft4, 0xC($v0)
/* E01BBC 80194E7C 46105480 */  add.s       $ft5, $ft3, $ft4
/* E01BC0 80194E80 1A600009 */  blez        $s3, .Li1_80194EA8
/* E01BC4 80194E84 E7B20100 */   swc1       $ft5, 0x100($sp)
/* E01BC8 80194E88 44932000 */  mtc1        $s3, $ft0
/* E01BCC 80194E8C 44069000 */  mfc1        $a2, $ft5
/* E01BD0 80194E90 C7AC00F8 */  lwc1        $fa0, 0xF8($sp)
/* E01BD4 80194E94 46802120 */  cvt.s.w     $ft0, $ft0
/* E01BD8 80194E98 46004386 */  mov.s       $fa1, $ft2
/* E01BDC 80194E9C 44072000 */  mfc1        $a3, $ft0
/* E01BE0 80194EA0 0C01F4B2 */  jal         func_8007D2C8
/* E01BE4 80194EA4 00000000 */   nop
.Li1_80194EA8:
/* E01BE8 80194EA8 864D0000 */  lh          $t5, 0x0($s2)
/* E01BEC 80194EAC 59A0004A */  blezl       $t5, .Li1_80194FD8
/* E01BF0 80194EB0 86480002 */   lh         $t0, 0x2($s2)
.Li1_80194EB4:
/* E01BF4 80194EB4 0C028D82 */  jal         func_800A3608
/* E01BF8 80194EB8 240400BD */   addiu      $a0, $zero, 0xBD
/* E01BFC 80194EBC 1040003F */  beqz        $v0, .Li1_80194FBC
/* E01C00 80194EC0 00408025 */   or         $s0, $v0, $zero
/* E01C04 80194EC4 24180002 */  addiu       $t8, $zero, 0x2
/* E01C08 80194EC8 0C0013AC */  jal         Rand_ZeroOne
/* E01C0C 80194ECC A0580000 */   sb         $t8, 0x0($v0)
/* E01C10 80194ED0 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E01C14 80194ED4 C7B000F8 */  lwc1        $ft4, 0xF8($sp)
/* E01C18 80194ED8 46183282 */  mul.s       $ft3, $ft1, $fs2
/* E01C1C 80194EDC 46105200 */  add.s       $ft2, $ft3, $ft4
/* E01C20 80194EE0 0C0013AC */  jal         Rand_ZeroOne
/* E01C24 80194EE4 E6080004 */   swc1       $ft2, 0x4($s0)
/* E01C28 80194EE8 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E01C2C 80194EEC C7A600FC */  lwc1        $ft1, 0xFC($sp)
/* E01C30 80194EF0 46189102 */  mul.s       $ft0, $ft5, $fs2
/* E01C34 80194EF4 46062280 */  add.s       $ft3, $ft0, $ft1
/* E01C38 80194EF8 E60A0008 */  swc1        $ft3, 0x8($s0)
/* E01C3C 80194EFC C7B00100 */  lwc1        $ft4, 0x100($sp)
/* E01C40 80194F00 0C0013AC */  jal         Rand_ZeroOne
/* E01C44 80194F04 E610000C */   swc1       $ft4, 0xC($s0)
/* E01C48 80194F08 461E0202 */  mul.s       $ft2, $fv0, $fs5
/* E01C4C 80194F0C 0C0013AC */  jal         Rand_ZeroOne
/* E01C50 80194F10 E6080010 */   swc1       $ft2, 0x10($s0)
/* E01C54 80194F14 461E0482 */  mul.s       $ft5, $fv0, $fs5
/* E01C58 80194F18 0C0013AC */  jal         Rand_ZeroOne
/* E01C5C 80194F1C E6120014 */   swc1       $ft5, 0x14($s0)
/* E01C60 80194F20 461E0102 */  mul.s       $ft0, $fv0, $fs5
/* E01C64 80194F24 A61500B8 */  sh          $s5, 0xB8($s0)
/* E01C68 80194F28 AE000050 */  sw          $zero, 0x50($s0)
/* E01C6C 80194F2C E6040018 */  swc1        $ft0, 0x18($s0)
/* E01C70 80194F30 8FB900F4 */  lw          $t9, 0xF4($sp)
/* E01C74 80194F34 173E0003 */  bne         $t9, $fp, .Li1_80194F44
/* E01C78 80194F38 24090001 */   addiu      $t1, $zero, 0x1
/* E01C7C 80194F3C 10000002 */  b           .Li1_80194F48
/* E01C80 80194F40 AE090054 */   sw         $t1, 0x54($s0)
.Li1_80194F44:
/* E01C84 80194F44 AE000054 */  sw          $zero, 0x54($s0)
.Li1_80194F48:
/* E01C88 80194F48 0C0013AC */  jal         Rand_ZeroOne
/* E01C8C 80194F4C 00000000 */   nop
/* E01C90 80194F50 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E01C94 80194F54 461C3282 */  mul.s       $ft3, $ft1, $fs4
/* E01C98 80194F58 0C0013AC */  jal         Rand_ZeroOne
/* E01C9C 80194F5C E60A00E8 */   swc1       $ft3, 0xE8($s0)
/* E01CA0 80194F60 46160501 */  sub.s       $fs0, $fv0, $fs1
/* E01CA4 80194F64 4614A400 */  add.s       $ft4, $fs0, $fs0
/* E01CA8 80194F68 0C0013AC */  jal         Rand_ZeroOne
/* E01CAC 80194F6C E61000EC */   swc1       $ft4, 0xEC($s0)
/* E01CB0 80194F70 46160501 */  sub.s       $fs0, $fv0, $fs1
/* E01CB4 80194F74 4614A200 */  add.s       $ft2, $fs0, $fs0
/* E01CB8 80194F78 461A4480 */  add.s       $ft5, $ft2, $fs3
/* E01CBC 80194F7C 0C0013AC */  jal         Rand_ZeroOne
/* E01CC0 80194F80 E61200F0 */   swc1       $ft5, 0xF0($s0)
/* E01CC4 80194F84 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E01CC8 80194F88 461C2180 */  add.s       $ft1, $ft0, $fs4
/* E01CCC 80194F8C 0C0013AC */  jal         Rand_ZeroOne
/* E01CD0 80194F90 E6060114 */   swc1       $ft1, 0x114($s0)
/* E01CD4 80194F94 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E01CD8 80194F98 461C5400 */  add.s       $ft4, $ft3, $fs4
/* E01CDC 80194F9C 0C0013AC */  jal         Rand_ZeroOne
/* E01CE0 80194FA0 E6100118 */   swc1       $ft4, 0x118($s0)
/* E01CE4 80194FA4 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E01CE8 80194FA8 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E01CEC 80194FAC 44812000 */  mtc1        $at, $ft0
/* E01CF0 80194FB0 461C4480 */  add.s       $ft5, $ft2, $fs4
/* E01CF4 80194FB4 E604010C */  swc1        $ft0, 0x10C($s0)
/* E01CF8 80194FB8 E612011C */  swc1        $ft5, 0x11C($s0)
.Li1_80194FBC:
/* E01CFC 80194FBC 864A0000 */  lh          $t2, 0x0($s2)
/* E01D00 80194FC0 26310001 */  addiu       $s1, $s1, 0x1
/* E01D04 80194FC4 022A082A */  slt         $at, $s1, $t2
/* E01D08 80194FC8 1420FFBA */  bnez        $at, .Li1_80194EB4
/* E01D0C 80194FCC 00000000 */   nop
/* E01D10 80194FD0 00008825 */  or          $s1, $zero, $zero
/* E01D14 80194FD4 86480002 */  lh          $t0, 0x2($s2)
.Li1_80194FD8:
/* E01D18 80194FD8 5900004B */  blezl       $t0, .Li1_80195108
/* E01D1C 80194FDC 8FB8008C */   lw         $t8, 0x8C($sp)
.Li1_80194FE0:
/* E01D20 80194FE0 0C028D82 */  jal         func_800A3608
/* E01D24 80194FE4 240400BD */   addiu      $a0, $zero, 0xBD
/* E01D28 80194FE8 10400041 */  beqz        $v0, .Li1_801950F0
/* E01D2C 80194FEC 00408025 */   or         $s0, $v0, $zero
/* E01D30 80194FF0 240C0002 */  addiu       $t4, $zero, 0x2
/* E01D34 80194FF4 0C0013AC */  jal         Rand_ZeroOne
/* E01D38 80194FF8 A04C0000 */   sb         $t4, 0x0($v0)
/* E01D3C 80194FFC 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E01D40 80195000 C7B000F8 */  lwc1        $ft4, 0xF8($sp)
/* E01D44 80195004 46183282 */  mul.s       $ft3, $ft1, $fs2
/* E01D48 80195008 46105200 */  add.s       $ft2, $ft3, $ft4
/* E01D4C 8019500C 0C0013AC */  jal         Rand_ZeroOne
/* E01D50 80195010 E6080004 */   swc1       $ft2, 0x4($s0)
/* E01D54 80195014 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E01D58 80195018 C7A600FC */  lwc1        $ft1, 0xFC($sp)
/* E01D5C 8019501C 46189102 */  mul.s       $ft0, $ft5, $fs2
/* E01D60 80195020 46062280 */  add.s       $ft3, $ft0, $ft1
/* E01D64 80195024 E60A0008 */  swc1        $ft3, 0x8($s0)
/* E01D68 80195028 C7B00100 */  lwc1        $ft4, 0x100($sp)
/* E01D6C 8019502C 0C0013AC */  jal         Rand_ZeroOne
/* E01D70 80195030 E610000C */   swc1       $ft4, 0xC($s0)
/* E01D74 80195034 461E0202 */  mul.s       $ft2, $fv0, $fs5
/* E01D78 80195038 0C0013AC */  jal         Rand_ZeroOne
/* E01D7C 8019503C E6080010 */   swc1       $ft2, 0x10($s0)
/* E01D80 80195040 461E0482 */  mul.s       $ft5, $fv0, $fs5
/* E01D84 80195044 0C0013AC */  jal         Rand_ZeroOne
/* E01D88 80195048 E6120014 */   swc1       $ft5, 0x14($s0)
/* E01D8C 8019504C 461E0102 */  mul.s       $ft0, $fv0, $fs5
/* E01D90 80195050 240E0001 */  addiu       $t6, $zero, 0x1
/* E01D94 80195054 A61500B8 */  sh          $s5, 0xB8($s0)
/* E01D98 80195058 AE0E0050 */  sw          $t6, 0x50($s0)
/* E01D9C 8019505C E6040018 */  swc1        $ft0, 0x18($s0)
/* E01DA0 80195060 8FAB00F4 */  lw          $t3, 0xF4($sp)
/* E01DA4 80195064 157E0003 */  bne         $t3, $fp, .Li1_80195074
/* E01DA8 80195068 240F0001 */   addiu      $t7, $zero, 0x1
/* E01DAC 8019506C 10000002 */  b           .Li1_80195078
/* E01DB0 80195070 AE0F0054 */   sw         $t7, 0x54($s0)
.Li1_80195074:
/* E01DB4 80195074 AE000054 */  sw          $zero, 0x54($s0)
.Li1_80195078:
/* E01DB8 80195078 0C0013AC */  jal         Rand_ZeroOne
/* E01DBC 8019507C 00000000 */   nop
/* E01DC0 80195080 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E01DC4 80195084 461A3282 */  mul.s       $ft3, $ft1, $fs3
/* E01DC8 80195088 0C0013AC */  jal         Rand_ZeroOne
/* E01DCC 8019508C E60A00E8 */   swc1       $ft3, 0xE8($s0)
/* E01DD0 80195090 46160401 */  sub.s       $ft4, $fv0, $fs1
/* E01DD4 80195094 461A8202 */  mul.s       $ft2, $ft4, $fs3
/* E01DD8 80195098 461C4480 */  add.s       $ft5, $ft2, $fs4
/* E01DDC 8019509C 0C0013AC */  jal         Rand_ZeroOne
/* E01DE0 801950A0 E61200EC */   swc1       $ft5, 0xEC($s0)
/* E01DE4 801950A4 46160501 */  sub.s       $fs0, $fv0, $fs1
/* E01DE8 801950A8 4614A100 */  add.s       $ft0, $fs0, $fs0
/* E01DEC 801950AC 461A2180 */  add.s       $ft1, $ft0, $fs3
/* E01DF0 801950B0 0C0013AC */  jal         Rand_ZeroOne
/* E01DF4 801950B4 E60600F0 */   swc1       $ft1, 0xF0($s0)
/* E01DF8 801950B8 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E01DFC 801950BC 461C5400 */  add.s       $ft4, $ft3, $fs4
/* E01E00 801950C0 0C0013AC */  jal         Rand_ZeroOne
/* E01E04 801950C4 E6100114 */   swc1       $ft4, 0x114($s0)
/* E01E08 801950C8 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E01E0C 801950CC 461C4480 */  add.s       $ft5, $ft2, $fs4
/* E01E10 801950D0 0C0013AC */  jal         Rand_ZeroOne
/* E01E14 801950D4 E6120118 */   swc1       $ft5, 0x118($s0)
/* E01E18 801950D8 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E01E1C 801950DC 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E01E20 801950E0 44815000 */  mtc1        $at, $ft3
/* E01E24 801950E4 461C2180 */  add.s       $ft1, $ft0, $fs4
/* E01E28 801950E8 E60A010C */  swc1        $ft3, 0x10C($s0)
/* E01E2C 801950EC E606011C */  swc1        $ft1, 0x11C($s0)
.Li1_801950F0:
/* E01E30 801950F0 864D0002 */  lh          $t5, 0x2($s2)
/* E01E34 801950F4 26310001 */  addiu       $s1, $s1, 0x1
/* E01E38 801950F8 022D082A */  slt         $at, $s1, $t5
/* E01E3C 801950FC 1420FFB8 */  bnez        $at, .Li1_80194FE0
/* E01E40 80195100 00000000 */   nop
/* E01E44 80195104 8FB8008C */  lw          $t8, 0x8C($sp)
.Li1_80195108:
/* E01E48 80195108 26F70001 */  addiu       $s7, $s7, 0x1
/* E01E4C 8019510C 2694000C */  addiu       $s4, $s4, 0xC
/* E01E50 80195110 87190006 */  lh          $t9, 0x6($t8)
/* E01E54 80195114 02F9082A */  slt         $at, $s7, $t9
/* E01E58 80195118 1420FF3C */  bnez        $at, .Li1_80194E0C
/* E01E5C 8019511C 00000000 */   nop
/* E01E60 80195120 AFB400A0 */  sw          $s4, 0xA0($sp)
/* E01E64 80195124 10000073 */  b           .Li1_801952F4
/* E01E68 80195128 96C2007C */   lhu        $v0, 0x7C($s6)
/* E01E6C 8019512C 8FA9008C */  lw          $t1, 0x8C($sp)
.Li1_80195130:
/* E01E70 80195130 852A0006 */  lh          $t2, 0x6($t1)
/* E01E74 80195134 59400070 */  blezl       $t2, .Li1_801952F8
/* E01E78 80195138 304CFFEF */   andi       $t4, $v0, 0xFFEF
/* E01E7C 8019513C 8FA800F4 */  lw          $t0, 0xF4($sp)
/* E01E80 80195140 3C0B801A */  lui         $t3, %hi(D_i1_8019B838)
/* E01E84 80195144 256BB838 */  addiu       $t3, $t3, %lo(D_i1_8019B838)
/* E01E88 80195148 000861C0 */  sll         $t4, $t0, 7
/* E01E8C 8019514C 258E000C */  addiu       $t6, $t4, 0xC
/* E01E90 80195150 01CBA021 */  addu        $s4, $t6, $t3
.Li1_80195154:
/* E01E94 80195154 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E01E98 80195158 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E01E9C 8019515C 02802825 */  or          $a1, $s4, $zero
/* E01EA0 80195160 27A600F8 */  addiu       $a2, $sp, 0xF8
/* E01EA4 80195164 0C001A5C */  jal         Matrix_MultVec3f
/* E01EA8 80195168 00008825 */   or         $s1, $zero, $zero
/* E01EAC 8019516C 0C0013AC */  jal         Rand_ZeroOne
/* E01EB0 80195170 00000000 */   nop
/* E01EB4 80195174 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E01EB8 80195178 8FAF0260 */  lw          $t7, 0x260($sp)
/* E01EBC 8019517C C7A600F8 */  lwc1        $ft1, 0xF8($sp)
/* E01EC0 80195180 46184482 */  mul.s       $ft5, $ft2, $fs2
/* E01EC4 80195184 C5F00004 */  lwc1        $ft4, 0x4($t7)
/* E01EC8 80195188 46128100 */  add.s       $ft0, $ft4, $ft5
/* E01ECC 8019518C 46043280 */  add.s       $ft3, $ft1, $ft0
/* E01ED0 80195190 0C0013AC */  jal         Rand_ZeroOne
/* E01ED4 80195194 E7AA00F8 */   swc1       $ft3, 0xF8($sp)
/* E01ED8 80195198 46160401 */  sub.s       $ft4, $fv0, $fs1
/* E01EDC 8019519C 8FAD0260 */  lw          $t5, 0x260($sp)
/* E01EE0 801951A0 C7A400FC */  lwc1        $ft0, 0xFC($sp)
/* E01EE4 801951A4 46188482 */  mul.s       $ft5, $ft4, $fs2
/* E01EE8 801951A8 C5A80008 */  lwc1        $ft2, 0x8($t5)
/* E01EEC 801951AC C7B00100 */  lwc1        $ft4, 0x100($sp)
/* E01EF0 801951B0 46124180 */  add.s       $ft1, $ft2, $ft5
/* E01EF4 801951B4 46062280 */  add.s       $ft3, $ft0, $ft1
/* E01EF8 801951B8 E7AA00FC */  swc1        $ft3, 0xFC($sp)
/* E01EFC 801951BC C5A8000C */  lwc1        $ft2, 0xC($t5)
/* E01F00 801951C0 46088480 */  add.s       $ft5, $ft4, $ft2
/* E01F04 801951C4 E7B20100 */  swc1        $ft5, 0x100($sp)
.Li1_801951C8:
/* E01F08 801951C8 0C028D82 */  jal         func_800A3608
/* E01F0C 801951CC 240400BD */   addiu      $a0, $zero, 0xBD
/* E01F10 801951D0 1040003C */  beqz        $v0, .Li1_801952C4
/* E01F14 801951D4 00408025 */   or         $s0, $v0, $zero
/* E01F18 801951D8 24180002 */  addiu       $t8, $zero, 0x2
/* E01F1C 801951DC 0C0013AC */  jal         Rand_ZeroOne
/* E01F20 801951E0 A0580000 */   sb         $t8, 0x0($v0)
/* E01F24 801951E4 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E01F28 801951E8 C7AA00F8 */  lwc1        $ft3, 0xF8($sp)
/* E01F2C 801951EC 46182182 */  mul.s       $ft1, $ft0, $fs2
/* E01F30 801951F0 460A3400 */  add.s       $ft4, $ft1, $ft3
/* E01F34 801951F4 0C0013AC */  jal         Rand_ZeroOne
/* E01F38 801951F8 E6100004 */   swc1       $ft4, 0x4($s0)
/* E01F3C 801951FC 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E01F40 80195200 C7A400FC */  lwc1        $ft0, 0xFC($sp)
/* E01F44 80195204 46184482 */  mul.s       $ft5, $ft2, $fs2
/* E01F48 80195208 46049180 */  add.s       $ft1, $ft5, $ft0
/* E01F4C 8019520C E6060008 */  swc1        $ft1, 0x8($s0)
/* E01F50 80195210 C7AA0100 */  lwc1        $ft3, 0x100($sp)
/* E01F54 80195214 0C0013AC */  jal         Rand_ZeroOne
/* E01F58 80195218 E60A000C */   swc1       $ft3, 0xC($s0)
/* E01F5C 8019521C 461E0402 */  mul.s       $ft4, $fv0, $fs5
/* E01F60 80195220 0C0013AC */  jal         Rand_ZeroOne
/* E01F64 80195224 E6100010 */   swc1       $ft4, 0x10($s0)
/* E01F68 80195228 461E0202 */  mul.s       $ft2, $fv0, $fs5
/* E01F6C 8019522C 0C0013AC */  jal         Rand_ZeroOne
/* E01F70 80195230 E6080014 */   swc1       $ft2, 0x14($s0)
/* E01F74 80195234 461E0482 */  mul.s       $ft5, $fv0, $fs5
/* E01F78 80195238 24190001 */  addiu       $t9, $zero, 0x1
/* E01F7C 8019523C 24090001 */  addiu       $t1, $zero, 0x1
/* E01F80 80195240 A61500B8 */  sh          $s5, 0xB8($s0)
/* E01F84 80195244 AE190050 */  sw          $t9, 0x50($s0)
/* E01F88 80195248 AE090054 */  sw          $t1, 0x54($s0)
/* E01F8C 8019524C 0C0013AC */  jal         Rand_ZeroOne
/* E01F90 80195250 E6120018 */   swc1       $ft5, 0x18($s0)
/* E01F94 80195254 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E01F98 80195258 461A2182 */  mul.s       $ft1, $ft0, $fs3
/* E01F9C 8019525C 0C0013AC */  jal         Rand_ZeroOne
/* E01FA0 80195260 E60600E8 */   swc1       $ft1, 0xE8($s0)
/* E01FA4 80195264 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E01FA8 80195268 461A5402 */  mul.s       $ft4, $ft3, $fs3
/* E01FAC 8019526C 461C8200 */  add.s       $ft2, $ft4, $fs4
/* E01FB0 80195270 0C0013AC */  jal         Rand_ZeroOne
/* E01FB4 80195274 E60800EC */   swc1       $ft2, 0xEC($s0)
/* E01FB8 80195278 46160501 */  sub.s       $fs0, $fv0, $fs1
/* E01FBC 8019527C 4614A480 */  add.s       $ft5, $fs0, $fs0
/* E01FC0 80195280 461A9100 */  add.s       $ft0, $ft5, $fs3
/* E01FC4 80195284 0C0013AC */  jal         Rand_ZeroOne
/* E01FC8 80195288 E60400F0 */   swc1       $ft0, 0xF0($s0)
/* E01FCC 8019528C 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E01FD0 80195290 461C3280 */  add.s       $ft3, $ft1, $fs4
/* E01FD4 80195294 0C0013AC */  jal         Rand_ZeroOne
/* E01FD8 80195298 E60A0114 */   swc1       $ft3, 0x114($s0)
/* E01FDC 8019529C 46160401 */  sub.s       $ft4, $fv0, $fs1
/* E01FE0 801952A0 461C8200 */  add.s       $ft2, $ft4, $fs4
/* E01FE4 801952A4 0C0013AC */  jal         Rand_ZeroOne
/* E01FE8 801952A8 E6080118 */   swc1       $ft2, 0x118($s0)
/* E01FEC 801952AC 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E01FF0 801952B0 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E01FF4 801952B4 44813000 */  mtc1        $at, $ft1
/* E01FF8 801952B8 461C9100 */  add.s       $ft0, $ft5, $fs4
/* E01FFC 801952BC E606010C */  swc1        $ft1, 0x10C($s0)
/* E02000 801952C0 E604011C */  swc1        $ft0, 0x11C($s0)
.Li1_801952C4:
/* E02004 801952C4 26310001 */  addiu       $s1, $s1, 0x1
/* E02008 801952C8 24010005 */  addiu       $at, $zero, 0x5
/* E0200C 801952CC 1621FFBE */  bne         $s1, $at, .Li1_801951C8
/* E02010 801952D0 00000000 */   nop
/* E02014 801952D4 8FAA008C */  lw          $t2, 0x8C($sp)
/* E02018 801952D8 26F70001 */  addiu       $s7, $s7, 0x1
/* E0201C 801952DC 2694000C */  addiu       $s4, $s4, 0xC
/* E02020 801952E0 85480006 */  lh          $t0, 0x6($t2)
/* E02024 801952E4 02E8082A */  slt         $at, $s7, $t0
/* E02028 801952E8 1420FF9A */  bnez        $at, .Li1_80195154
/* E0202C 801952EC 00000000 */   nop
/* E02030 801952F0 96C2007C */  lhu         $v0, 0x7C($s6)
.Li1_801952F4:
/* E02034 801952F4 304CFFEF */  andi        $t4, $v0, 0xFFEF
.Li1_801952F8:
/* E02038 801952F8 A6CC007C */  sh          $t4, 0x7C($s6)
/* E0203C 801952FC 3182FFFF */  andi        $v0, $t4, 0xFFFF
/* E02040 80195300 304E0040 */  andi        $t6, $v0, 0x40
.Li1_80195304:
/* E02044 80195304 11C00110 */  beqz        $t6, .Li1_80195748
/* E02048 80195308 240400BD */   addiu      $a0, $zero, 0xBD
/* E0204C 8019530C 0C028D82 */  jal         func_800A3608
/* E02050 80195310 00008825 */   or         $s1, $zero, $zero
/* E02054 80195314 1040007A */  beqz        $v0, .Li1_80195500
/* E02058 80195318 00408025 */   or         $s0, $v0, $zero
/* E0205C 8019531C 8FA30260 */  lw          $v1, 0x260($sp)
/* E02060 80195320 240B0002 */  addiu       $t3, $zero, 0x2
/* E02064 80195324 A04B0000 */  sb          $t3, 0x0($v0)
/* E02068 80195328 C6CA000C */  lwc1        $ft3, 0xC($s6)
/* E0206C 8019532C C4700004 */  lwc1        $ft4, 0x4($v1)
/* E02070 80195330 240F0039 */  addiu       $t7, $zero, 0x39
/* E02074 80195334 46105200 */  add.s       $ft2, $ft3, $ft4
/* E02078 80195338 E4480004 */  swc1        $ft2, 0x4($v0)
/* E0207C 8019533C C6D20010 */  lwc1        $ft5, 0x10($s6)
/* E02080 80195340 C4640008 */  lwc1        $ft0, 0x8($v1)
/* E02084 80195344 46049180 */  add.s       $ft1, $ft5, $ft0
/* E02088 80195348 E4460008 */  swc1        $ft1, 0x8($v0)
/* E0208C 8019534C C6CA0014 */  lwc1        $ft3, 0x14($s6)
/* E02090 80195350 C470000C */  lwc1        $ft4, 0xC($v1)
/* E02094 80195354 46105200 */  add.s       $ft2, $ft3, $ft4
/* E02098 80195358 E448000C */  swc1        $ft2, 0xC($v0)
/* E0209C 8019535C C6D20030 */  lwc1        $ft5, 0x30($s6)
/* E020A0 80195360 E4520010 */  swc1        $ft5, 0x10($v0)
/* E020A4 80195364 C6C40034 */  lwc1        $ft0, 0x34($s6)
/* E020A8 80195368 E4440014 */  swc1        $ft0, 0x14($v0)
/* E020AC 8019536C C6C60038 */  lwc1        $ft1, 0x38($s6)
/* E020B0 80195370 A44F00B8 */  sh          $t7, 0xB8($v0)
/* E020B4 80195374 AC400050 */  sw          $zero, 0x50($v0)
/* E020B8 80195378 E4460018 */  swc1        $ft1, 0x18($v0)
/* E020BC 8019537C 8FAD00F4 */  lw          $t5, 0xF4($sp)
/* E020C0 80195380 A44D0048 */  sh          $t5, 0x48($v0)
/* E020C4 80195384 8FB80260 */  lw          $t8, 0x260($sp)
/* E020C8 80195388 871900BA */  lh          $t9, 0xBA($t8)
/* E020CC 8019538C 17200021 */  bnez        $t9, .Li1_80195414
/* E020D0 80195390 00000000 */   nop
/* E020D4 80195394 0C0013AC */  jal         Rand_ZeroOne
/* E020D8 80195398 00000000 */   nop
/* E020DC 8019539C 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E020E0 801953A0 461C5402 */  mul.s       $ft4, $ft3, $fs4
/* E020E4 801953A4 0C0013AC */  jal         Rand_ZeroOne
/* E020E8 801953A8 E61000E8 */   swc1       $ft4, 0xE8($s0)
/* E020EC 801953AC 46160501 */  sub.s       $fs0, $fv0, $fs1
/* E020F0 801953B0 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E020F4 801953B4 44819000 */  mtc1        $at, $ft5
/* E020F8 801953B8 4614A200 */  add.s       $ft2, $fs0, $fs0
/* E020FC 801953BC 46124100 */  add.s       $ft0, $ft2, $ft5
/* E02100 801953C0 0C0013AC */  jal         Rand_ZeroOne
/* E02104 801953C4 E60400EC */   swc1       $ft0, 0xEC($s0)
/* E02108 801953C8 46160501 */  sub.s       $fs0, $fv0, $fs1
/* E0210C 801953CC 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E02110 801953D0 44815000 */  mtc1        $at, $ft3
/* E02114 801953D4 4614A180 */  add.s       $ft1, $fs0, $fs0
/* E02118 801953D8 460A3400 */  add.s       $ft4, $ft1, $ft3
/* E0211C 801953DC 0C0013AC */  jal         Rand_ZeroOne
/* E02120 801953E0 E61000F0 */   swc1       $ft4, 0xF0($s0)
/* E02124 801953E4 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E02128 801953E8 461C4480 */  add.s       $ft5, $ft2, $fs4
/* E0212C 801953EC 0C0013AC */  jal         Rand_ZeroOne
/* E02130 801953F0 E6120114 */   swc1       $ft5, 0x114($s0)
/* E02134 801953F4 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E02138 801953F8 461C2180 */  add.s       $ft1, $ft0, $fs4
/* E0213C 801953FC 0C0013AC */  jal         Rand_ZeroOne
/* E02140 80195400 E6060118 */   swc1       $ft1, 0x118($s0)
/* E02144 80195404 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E02148 80195408 461C5400 */  add.s       $ft4, $ft3, $fs4
/* E0214C 8019540C 10000038 */  b           .Li1_801954F0
/* E02150 80195410 E610011C */   swc1       $ft4, 0x11C($s0)
.Li1_80195414:
/* E02154 80195414 0C0013AC */  jal         Rand_ZeroOne
/* E02158 80195418 00000000 */   nop
/* E0215C 8019541C 46000200 */  add.s       $ft2, $fv0, $fv0
/* E02160 80195420 3C01801A */  lui         $at, %hi(D_i1_8019B3D0)
/* E02164 80195424 C432B3D0 */  lwc1        $ft5, %lo(D_i1_8019B3D0)($at)
/* E02168 80195428 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E0216C 8019542C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E02170 80195430 46124102 */  mul.s       $ft0, $ft2, $ft5
/* E02174 80195434 00003025 */  or          $a2, $zero, $zero
/* E02178 80195438 44052000 */  mfc1        $a1, $ft0
/* E0217C 8019543C 0C0017A4 */  jal         Matrix_RotateY
/* E02180 80195440 00000000 */   nop
/* E02184 80195444 0C0013AC */  jal         Rand_ZeroOne
/* E02188 80195448 00000000 */   nop
/* E0218C 8019544C 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E02190 80195450 44813000 */  mtc1        $at, $ft1
/* E02194 80195454 3C014170 */  lui         $at, (0x41700000 >> 16)
/* E02198 80195458 44818000 */  mtc1        $at, $ft4
/* E0219C 8019545C 46060282 */  mul.s       $ft3, $fv0, $ft1
/* E021A0 80195460 44809000 */  mtc1        $zero, $ft5
/* E021A4 80195464 44802000 */  mtc1        $zero, $ft0
/* E021A8 80195468 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E021AC 8019546C 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E021B0 80195470 27A50104 */  addiu       $a1, $sp, 0x104
/* E021B4 80195474 27A600F8 */  addiu       $a2, $sp, 0xF8
/* E021B8 80195478 46105200 */  add.s       $ft2, $ft3, $ft4
/* E021BC 8019547C E7B2010C */  swc1        $ft5, 0x10C($sp)
/* E021C0 80195480 E7A40108 */  swc1        $ft0, 0x108($sp)
/* E021C4 80195484 0C001A5C */  jal         Matrix_MultVec3f
/* E021C8 80195488 E7A80104 */   swc1       $ft2, 0x104($sp)
/* E021CC 8019548C C7A600F8 */  lwc1        $ft1, 0xF8($sp)
/* E021D0 80195490 0C0013AC */  jal         Rand_ZeroOne
/* E021D4 80195494 E60600E8 */   swc1       $ft1, 0xE8($s0)
/* E021D8 80195498 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E021DC 8019549C 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E021E0 801954A0 44818000 */  mtc1        $at, $ft4
/* E021E4 801954A4 3C014170 */  lui         $at, (0x41700000 >> 16)
/* E021E8 801954A8 44819000 */  mtc1        $at, $ft5
/* E021EC 801954AC 46105202 */  mul.s       $ft2, $ft3, $ft4
/* E021F0 801954B0 46124100 */  add.s       $ft0, $ft2, $ft5
/* E021F4 801954B4 E60400EC */  swc1        $ft0, 0xEC($s0)
/* E021F8 801954B8 C7A60100 */  lwc1        $ft1, 0x100($sp)
/* E021FC 801954BC 0C0013AC */  jal         Rand_ZeroOne
/* E02200 801954C0 E60600F0 */   swc1       $ft1, 0xF0($s0)
/* E02204 801954C4 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E02208 801954C8 461A5400 */  add.s       $ft4, $ft3, $fs3
/* E0220C 801954CC 0C0013AC */  jal         Rand_ZeroOne
/* E02210 801954D0 E6100114 */   swc1       $ft4, 0x114($s0)
/* E02214 801954D4 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E02218 801954D8 461A4480 */  add.s       $ft5, $ft2, $fs3
/* E0221C 801954DC 0C0013AC */  jal         Rand_ZeroOne
/* E02220 801954E0 E6120118 */   swc1       $ft5, 0x118($s0)
/* E02224 801954E4 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E02228 801954E8 461A2180 */  add.s       $ft1, $ft0, $fs3
/* E0222C 801954EC E606011C */  swc1        $ft1, 0x11C($s0)
.Li1_801954F0:
/* E02230 801954F0 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E02234 801954F4 44815000 */  mtc1        $at, $ft3
/* E02238 801954F8 00000000 */  nop
/* E0223C 801954FC E60A010C */  swc1        $ft3, 0x10C($s0)
.Li1_80195500:
/* E02240 80195500 0C028D82 */  jal         func_800A3608
/* E02244 80195504 240400BD */   addiu      $a0, $zero, 0xBD
/* E02248 80195508 10400085 */  beqz        $v0, .Li1_80195720
/* E0224C 8019550C 00408025 */   or         $s0, $v0, $zero
/* E02250 80195510 8FA20260 */  lw          $v0, 0x260($sp)
/* E02254 80195514 24090002 */  addiu       $t1, $zero, 0x2
/* E02258 80195518 A2090000 */  sb          $t1, 0x0($s0)
/* E0225C 8019551C C6D0000C */  lwc1        $ft4, 0xC($s6)
/* E02260 80195520 C4480004 */  lwc1        $ft2, 0x4($v0)
/* E02264 80195524 46088480 */  add.s       $ft5, $ft4, $ft2
/* E02268 80195528 E6120004 */  swc1        $ft5, 0x4($s0)
/* E0226C 8019552C C6C40010 */  lwc1        $ft0, 0x10($s6)
/* E02270 80195530 C4460008 */  lwc1        $ft1, 0x8($v0)
/* E02274 80195534 46062280 */  add.s       $ft3, $ft0, $ft1
/* E02278 80195538 E60A0008 */  swc1        $ft3, 0x8($s0)
/* E0227C 8019553C C6D00014 */  lwc1        $ft4, 0x14($s6)
/* E02280 80195540 C448000C */  lwc1        $ft2, 0xC($v0)
/* E02284 80195544 46088480 */  add.s       $ft5, $ft4, $ft2
/* E02288 80195548 0C0013AC */  jal         Rand_ZeroOne
/* E0228C 8019554C E612000C */   swc1       $ft5, 0xC($s0)
/* E02290 80195550 461E0102 */  mul.s       $ft0, $fv0, $fs5
/* E02294 80195554 0C0013AC */  jal         Rand_ZeroOne
/* E02298 80195558 E6040010 */   swc1       $ft0, 0x10($s0)
/* E0229C 8019555C 461E0182 */  mul.s       $ft1, $fv0, $fs5
/* E022A0 80195560 0C0013AC */  jal         Rand_ZeroOne
/* E022A4 80195564 E6060014 */   swc1       $ft1, 0x14($s0)
/* E022A8 80195568 461E0282 */  mul.s       $ft3, $fv0, $fs5
/* E022AC 8019556C A61500B8 */  sh          $s5, 0xB8($s0)
/* E022B0 80195570 0C0013AC */  jal         Rand_ZeroOne
/* E022B4 80195574 E60A0018 */   swc1       $ft3, 0x18($s0)
/* E022B8 80195578 3C014000 */  lui         $at, (0x40000000 >> 16)
/* E022BC 8019557C 44818000 */  mtc1        $at, $ft4
/* E022C0 80195580 00000000 */  nop
/* E022C4 80195584 46100202 */  mul.s       $ft2, $fv0, $ft4
/* E022C8 80195588 4600448D */  trunc.w.s   $ft5, $ft2
/* E022CC 8019558C 44089000 */  mfc1        $t0, $ft5
/* E022D0 80195590 00000000 */  nop
/* E022D4 80195594 250C0002 */  addiu       $t4, $t0, 0x2
/* E022D8 80195598 AE0C0050 */  sw          $t4, 0x50($s0)
/* E022DC 8019559C 8FAE0260 */  lw          $t6, 0x260($sp)
/* E022E0 801955A0 85CB00BA */  lh          $t3, 0xBA($t6)
/* E022E4 801955A4 15600024 */  bnez        $t3, .Li1_80195638
/* E022E8 801955A8 00000000 */   nop
/* E022EC 801955AC 0C0013AC */  jal         Rand_ZeroOne
/* E022F0 801955B0 00000000 */   nop
/* E022F4 801955B4 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E022F8 801955B8 3C0140C0 */  lui         $at, (0x40C00000 >> 16)
/* E022FC 801955BC 44813000 */  mtc1        $at, $ft1
/* E02300 801955C0 00000000 */  nop
/* E02304 801955C4 46062282 */  mul.s       $ft3, $ft0, $ft1
/* E02308 801955C8 0C0013AC */  jal         Rand_ZeroOne
/* E0230C 801955CC E60A00E8 */   swc1       $ft3, 0xE8($s0)
/* E02310 801955D0 46160401 */  sub.s       $ft4, $fv0, $fs1
/* E02314 801955D4 3C0140C0 */  lui         $at, (0x40C00000 >> 16)
/* E02318 801955D8 44814000 */  mtc1        $at, $ft2
/* E0231C 801955DC 00000000 */  nop
/* E02320 801955E0 46088482 */  mul.s       $ft5, $ft4, $ft2
/* E02324 801955E4 0C0013AC */  jal         Rand_ZeroOne
/* E02328 801955E8 E61200EC */   swc1       $ft5, 0xEC($s0)
/* E0232C 801955EC 46160501 */  sub.s       $fs0, $fv0, $fs1
/* E02330 801955F0 3C014220 */  lui         $at, (0x42200000 >> 16)
/* E02334 801955F4 44813000 */  mtc1        $at, $ft1
/* E02338 801955F8 4614A100 */  add.s       $ft0, $fs0, $fs0
/* E0233C 801955FC 46062280 */  add.s       $ft3, $ft0, $ft1
/* E02340 80195600 0C0013AC */  jal         Rand_ZeroOne
/* E02344 80195604 E60A00F0 */   swc1       $ft3, 0xF0($s0)
/* E02348 80195608 46160401 */  sub.s       $ft4, $fv0, $fs1
/* E0234C 8019560C 461C8200 */  add.s       $ft2, $ft4, $fs4
/* E02350 80195610 0C0013AC */  jal         Rand_ZeroOne
/* E02354 80195614 E6080114 */   swc1       $ft2, 0x114($s0)
/* E02358 80195618 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E0235C 8019561C 461C9100 */  add.s       $ft0, $ft5, $fs4
/* E02360 80195620 0C0013AC */  jal         Rand_ZeroOne
/* E02364 80195624 E6040118 */   swc1       $ft0, 0x118($s0)
/* E02368 80195628 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E0236C 8019562C 461C3280 */  add.s       $ft3, $ft1, $fs4
/* E02370 80195630 1000003B */  b           .Li1_80195720
/* E02374 80195634 E60A011C */   swc1       $ft3, 0x11C($s0)
.Li1_80195638:
/* E02378 80195638 0C0013AC */  jal         Rand_ZeroOne
/* E0237C 8019563C 00000000 */   nop
/* E02380 80195640 46000400 */  add.s       $ft4, $fv0, $fv0
/* E02384 80195644 3C01801A */  lui         $at, %hi(D_i1_8019B3D4)
/* E02388 80195648 C428B3D4 */  lwc1        $ft2, %lo(D_i1_8019B3D4)($at)
/* E0238C 8019564C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E02390 80195650 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E02394 80195654 46088482 */  mul.s       $ft5, $ft4, $ft2
/* E02398 80195658 00003025 */  or          $a2, $zero, $zero
/* E0239C 8019565C 44059000 */  mfc1        $a1, $ft5
/* E023A0 80195660 0C0017A4 */  jal         Matrix_RotateY
/* E023A4 80195664 00000000 */   nop
/* E023A8 80195668 0C0013AC */  jal         Rand_ZeroOne
/* E023AC 8019566C 00000000 */   nop
/* E023B0 80195670 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E023B4 80195674 44812000 */  mtc1        $at, $ft0
/* E023B8 80195678 3C014170 */  lui         $at, (0x41700000 >> 16)
/* E023BC 8019567C 44815000 */  mtc1        $at, $ft3
/* E023C0 80195680 46040182 */  mul.s       $ft1, $fv0, $ft0
/* E023C4 80195684 44804000 */  mtc1        $zero, $ft2
/* E023C8 80195688 44809000 */  mtc1        $zero, $ft5
/* E023CC 8019568C 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E023D0 80195690 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E023D4 80195694 27A50104 */  addiu       $a1, $sp, 0x104
/* E023D8 80195698 27A600F8 */  addiu       $a2, $sp, 0xF8
/* E023DC 8019569C 460A3400 */  add.s       $ft4, $ft1, $ft3
/* E023E0 801956A0 E7A8010C */  swc1        $ft2, 0x10C($sp)
/* E023E4 801956A4 E7B20108 */  swc1        $ft5, 0x108($sp)
/* E023E8 801956A8 0C001A5C */  jal         Matrix_MultVec3f
/* E023EC 801956AC E7B00104 */   swc1       $ft4, 0x104($sp)
/* E023F0 801956B0 C7A400F8 */  lwc1        $ft0, 0xF8($sp)
/* E023F4 801956B4 0C0013AC */  jal         Rand_ZeroOne
/* E023F8 801956B8 E60400E8 */   swc1       $ft0, 0xE8($s0)
/* E023FC 801956BC 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E02400 801956C0 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E02404 801956C4 44815000 */  mtc1        $at, $ft3
/* E02408 801956C8 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E0240C 801956CC 44814000 */  mtc1        $at, $ft2
/* E02410 801956D0 460A3402 */  mul.s       $ft4, $ft1, $ft3
/* E02414 801956D4 46088480 */  add.s       $ft5, $ft4, $ft2
/* E02418 801956D8 E61200EC */  swc1        $ft5, 0xEC($s0)
/* E0241C 801956DC C7A40100 */  lwc1        $ft0, 0x100($sp)
/* E02420 801956E0 0C0013AC */  jal         Rand_ZeroOne
/* E02424 801956E4 E60400F0 */   swc1       $ft0, 0xF0($s0)
/* E02428 801956E8 46160181 */  sub.s       $ft1, $fv0, $fs1
/* E0242C 801956EC 461A3280 */  add.s       $ft3, $ft1, $fs3
/* E02430 801956F0 0C0013AC */  jal         Rand_ZeroOne
/* E02434 801956F4 E60A0114 */   swc1       $ft3, 0x114($s0)
/* E02438 801956F8 46160401 */  sub.s       $ft4, $fv0, $fs1
/* E0243C 801956FC 461A8200 */  add.s       $ft2, $ft4, $fs3
/* E02440 80195700 0C0013AC */  jal         Rand_ZeroOne
/* E02444 80195704 E6080118 */   swc1       $ft2, 0x118($s0)
/* E02448 80195708 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E0244C 8019570C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E02450 80195710 44813000 */  mtc1        $at, $ft1
/* E02454 80195714 461A9100 */  add.s       $ft0, $ft5, $fs3
/* E02458 80195718 E606010C */  swc1        $ft1, 0x10C($s0)
/* E0245C 8019571C E604011C */  swc1        $ft0, 0x11C($s0)
.Li1_80195720:
/* E02460 80195720 26310001 */  addiu       $s1, $s1, 0x1
/* E02464 80195724 24010006 */  addiu       $at, $zero, 0x6
/* E02468 80195728 1621FF75 */  bne         $s1, $at, .Li1_80195500
/* E0246C 8019572C 00000000 */   nop
/* E02470 80195730 96CF007C */  lhu         $t7, 0x7C($s6)
/* E02474 80195734 31F8FFBF */  andi        $t8, $t7, 0xFFBF
/* E02478 80195738 37190001 */  ori         $t9, $t8, 0x1
/* E0247C 8019573C A6D8007C */  sh          $t8, 0x7C($s6)
/* E02480 80195740 A6D9007C */  sh          $t9, 0x7C($s6)
/* E02484 80195744 3322FFFF */  andi        $v0, $t9, 0xFFFF
.Li1_80195748:
/* E02488 80195748 30490080 */  andi        $t1, $v0, 0x80
/* E0248C 8019574C 512000AC */  beql        $t1, $zero, .Li1_80195A00
/* E02490 80195750 304E0200 */   andi       $t6, $v0, 0x200
/* E02494 80195754 86C3000A */  lh          $v1, 0xA($s6)
/* E02498 80195758 5C6000A6 */  bgtzl       $v1, .Li1_801959F4
/* E0249C 8019575C 246FFFFF */   addiu      $t7, $v1, -0x1
/* E024A0 80195760 8FA800F4 */  lw          $t0, 0xF4($sp)
/* E024A4 80195764 3C014300 */  lui         $at, (0x43000000 >> 16)
/* E024A8 80195768 44815000 */  mtc1        $at, $ft3
/* E024AC 8019576C 3C014180 */  lui         $at, (0x41800000 >> 16)
/* E024B0 80195770 00086080 */  sll         $t4, $t0, 2
/* E024B4 80195774 44818000 */  mtc1        $at, $ft4
/* E024B8 80195778 44814000 */  mtc1        $at, $ft2
/* E024BC 8019577C 86CB0008 */  lh          $t3, 0x8($s6)
/* E024C0 80195780 3C0E801A */  lui         $t6, %hi(D_i1_8019A820)
/* E024C4 80195784 01886023 */  subu        $t4, $t4, $t0
/* E024C8 80195788 000C60C0 */  sll         $t4, $t4, 3
/* E024CC 8019578C 25CEA820 */  addiu       $t6, $t6, %lo(D_i1_8019A820)
/* E024D0 80195790 344A0100 */  ori         $t2, $v0, 0x100
/* E024D4 80195794 018E1821 */  addu        $v1, $t4, $t6
/* E024D8 80195798 24010007 */  addiu       $at, $zero, 0x7
/* E024DC 8019579C A6CA007C */  sh          $t2, 0x7C($s6)
/* E024E0 801957A0 84650006 */  lh          $a1, 0x6($v1)
/* E024E4 801957A4 AFA3008C */  sw          $v1, 0x8C($sp)
/* E024E8 801957A8 E6CA0078 */  swc1        $ft3, 0x78($s6)
/* E024EC 801957AC E6D00070 */  swc1        $ft4, 0x70($s6)
/* E024F0 801957B0 15610041 */  bne         $t3, $at, .Li1_801958B8
/* E024F4 801957B4 E6C80068 */   swc1       $ft2, 0x68($s6)
/* E024F8 801957B8 00087880 */  sll         $t7, $t0, 2
/* E024FC 801957BC 01E87823 */  subu        $t7, $t7, $t0
/* E02500 801957C0 000F78C0 */  sll         $t7, $t7, 3
/* E02504 801957C4 01EE2021 */  addu        $a0, $t7, $t6
/* E02508 801957C8 8483000E */  lh          $v1, 0xE($a0)
/* E0250C 801957CC 2401FFFF */  addiu       $at, $zero, -0x1
/* E02510 801957D0 1061000C */  beq         $v1, $at, .Li1_80195804
/* E02514 801957D4 3C18801A */   lui        $t8, %hi(D_i1_8019B838)
/* E02518 801957D8 2718B838 */  addiu       $t8, $t8, %lo(D_i1_8019B838)
/* E0251C 801957DC 000369C0 */  sll         $t5, $v1, 7
/* E02520 801957E0 8FA9008C */  lw          $t1, 0x8C($sp)
/* E02524 801957E4 01B81021 */  addu        $v0, $t5, $t8
/* E02528 801957E8 24190008 */  addiu       $t9, $zero, 0x8
/* E0252C 801957EC 944C007C */  lhu         $t4, 0x7C($v0)
/* E02530 801957F0 A4590008 */  sh          $t9, 0x8($v0)
/* E02534 801957F4 852A0016 */  lh          $t2, 0x16($t1)
/* E02538 801957F8 358B0080 */  ori         $t3, $t4, 0x80
/* E0253C 801957FC A44B007C */  sh          $t3, 0x7C($v0)
/* E02540 80195800 A44A000A */  sh          $t2, 0xA($v0)
.Li1_80195804:
/* E02544 80195804 84940010 */  lh          $s4, 0x10($a0)
/* E02548 80195808 2401FFFF */  addiu       $at, $zero, -0x1
/* E0254C 8019580C 1281000C */  beq         $s4, $at, .Li1_80195840
/* E02550 80195810 3C0F801A */   lui        $t7, %hi(D_i1_8019B838)
/* E02554 80195814 25EFB838 */  addiu       $t7, $t7, %lo(D_i1_8019B838)
/* E02558 80195818 001441C0 */  sll         $t0, $s4, 7
/* E0255C 8019581C 8FAD008C */  lw          $t5, 0x8C($sp)
/* E02560 80195820 010F8021 */  addu        $s0, $t0, $t7
/* E02564 80195824 240E0008 */  addiu       $t6, $zero, 0x8
/* E02568 80195828 9619007C */  lhu         $t9, 0x7C($s0)
/* E0256C 8019582C A60E0008 */  sh          $t6, 0x8($s0)
/* E02570 80195830 85B80016 */  lh          $t8, 0x16($t5)
/* E02574 80195834 37290080 */  ori         $t1, $t9, 0x80
/* E02578 80195838 A609007C */  sh          $t1, 0x7C($s0)
/* E0257C 8019583C A618000A */  sh          $t8, 0xA($s0)
.Li1_80195840:
/* E02580 80195840 84940012 */  lh          $s4, 0x12($a0)
/* E02584 80195844 2401FFFF */  addiu       $at, $zero, -0x1
/* E02588 80195848 1281000C */  beq         $s4, $at, .Li1_8019587C
/* E0258C 8019584C 3C0C801A */   lui        $t4, %hi(D_i1_8019B838)
/* E02590 80195850 258CB838 */  addiu       $t4, $t4, %lo(D_i1_8019B838)
/* E02594 80195854 001451C0 */  sll         $t2, $s4, 7
/* E02598 80195858 8FA8008C */  lw          $t0, 0x8C($sp)
/* E0259C 8019585C 014C8021 */  addu        $s0, $t2, $t4
/* E025A0 80195860 240B0008 */  addiu       $t3, $zero, 0x8
/* E025A4 80195864 960E007C */  lhu         $t6, 0x7C($s0)
/* E025A8 80195868 A60B0008 */  sh          $t3, 0x8($s0)
/* E025AC 8019586C 850F0016 */  lh          $t7, 0x16($t0)
/* E025B0 80195870 35CD0080 */  ori         $t5, $t6, 0x80
/* E025B4 80195874 A60D007C */  sh          $t5, 0x7C($s0)
/* E025B8 80195878 A60F000A */  sh          $t7, 0xA($s0)
.Li1_8019587C:
/* E025BC 8019587C 84940014 */  lh          $s4, 0x14($a0)
/* E025C0 80195880 2401FFFF */  addiu       $at, $zero, -0x1
/* E025C4 80195884 1281000C */  beq         $s4, $at, .Li1_801958B8
/* E025C8 80195888 3C19801A */   lui        $t9, %hi(D_i1_8019B838)
/* E025CC 8019588C 2739B838 */  addiu       $t9, $t9, %lo(D_i1_8019B838)
/* E025D0 80195890 0014C1C0 */  sll         $t8, $s4, 7
/* E025D4 80195894 8FAA008C */  lw          $t2, 0x8C($sp)
/* E025D8 80195898 03198021 */  addu        $s0, $t8, $t9
/* E025DC 8019589C 24090008 */  addiu       $t1, $zero, 0x8
/* E025E0 801958A0 960B007C */  lhu         $t3, 0x7C($s0)
/* E025E4 801958A4 A6090008 */  sh          $t1, 0x8($s0)
/* E025E8 801958A8 854C0016 */  lh          $t4, 0x16($t2)
/* E025EC 801958AC 35680080 */  ori         $t0, $t3, 0x80
/* E025F0 801958B0 A608007C */  sh          $t0, 0x7C($s0)
/* E025F4 801958B4 A60C000A */  sh          $t4, 0xA($s0)
.Li1_801958B8:
/* E025F8 801958B8 18A0003E */  blez        $a1, .Li1_801959B4
/* E025FC 801958BC 0000B825 */   or         $s7, $zero, $zero
/* E02600 801958C0 8FAF00F4 */  lw          $t7, 0xF4($sp)
/* E02604 801958C4 3C0D801A */  lui         $t5, %hi(D_i1_8019B838)
/* E02608 801958C8 25ADB838 */  addiu       $t5, $t5, %lo(D_i1_8019B838)
/* E0260C 801958CC 000F71C0 */  sll         $t6, $t7, 7
/* E02610 801958D0 01CD8021 */  addu        $s0, $t6, $t5
.Li1_801958D4:
/* E02614 801958D4 0C0013AC */  jal         Rand_ZeroOne
/* E02618 801958D8 00000000 */   nop
/* E0261C 801958DC 3C013FE0 */  lui         $at, (0x3FE00000 >> 16)
/* E02620 801958E0 44812800 */  mtc1        $at, $ft0f
/* E02624 801958E4 44802000 */  mtc1        $zero, $ft0
/* E02628 801958E8 460004A1 */  cvt.d.s     $ft5, $fv0
/* E0262C 801958EC 3C014010 */  lui         $at, (0x40100000 >> 16)
/* E02630 801958F0 46249181 */  sub.d       $ft1, $ft5, $ft0
/* E02634 801958F4 44815800 */  mtc1        $at, $ft3f
/* E02638 801958F8 44805000 */  mtc1        $zero, $ft3
/* E0263C 801958FC 00000000 */  nop
/* E02640 80195900 462A3402 */  mul.d       $ft4, $ft1, $ft3
/* E02644 80195904 46208220 */  cvt.s.d     $ft2, $ft4
/* E02648 80195908 0C0013AC */  jal         Rand_ZeroOne
/* E0264C 8019590C E608000C */   swc1       $ft2, 0xC($s0)
/* E02650 80195910 3C013FE0 */  lui         $at, (0x3FE00000 >> 16)
/* E02654 80195914 44812800 */  mtc1        $at, $ft0f
/* E02658 80195918 44802000 */  mtc1        $zero, $ft0
/* E0265C 8019591C 460004A1 */  cvt.d.s     $ft5, $fv0
/* E02660 80195920 3C014010 */  lui         $at, (0x40100000 >> 16)
/* E02664 80195924 46249181 */  sub.d       $ft1, $ft5, $ft0
/* E02668 80195928 44815800 */  mtc1        $at, $ft3f
/* E0266C 8019592C 44805000 */  mtc1        $zero, $ft3
/* E02670 80195930 00000000 */  nop
/* E02674 80195934 462A3402 */  mul.d       $ft4, $ft1, $ft3
/* E02678 80195938 46208220 */  cvt.s.d     $ft2, $ft4
/* E0267C 8019593C 0C0013AC */  jal         Rand_ZeroOne
/* E02680 80195940 E6080010 */   swc1       $ft2, 0x10($s0)
/* E02684 80195944 3C013FE0 */  lui         $at, (0x3FE00000 >> 16)
/* E02688 80195948 44812800 */  mtc1        $at, $ft0f
/* E0268C 8019594C 44802000 */  mtc1        $zero, $ft0
/* E02690 80195950 460004A1 */  cvt.d.s     $ft5, $fv0
/* E02694 80195954 3C014010 */  lui         $at, (0x40100000 >> 16)
/* E02698 80195958 46249181 */  sub.d       $ft1, $ft5, $ft0
/* E0269C 8019595C 44815800 */  mtc1        $at, $ft3f
/* E026A0 80195960 44805000 */  mtc1        $zero, $ft3
/* E026A4 80195964 00000000 */  nop
/* E026A8 80195968 462A3402 */  mul.d       $ft4, $ft1, $ft3
/* E026AC 8019596C 46208220 */  cvt.s.d     $ft2, $ft4
/* E026B0 80195970 0C0013AC */  jal         Rand_ZeroOne
/* E026B4 80195974 E6080014 */   swc1       $ft2, 0x14($s0)
/* E026B8 80195978 461E0482 */  mul.s       $ft5, $fv0, $fs5
/* E026BC 8019597C 0C0013AC */  jal         Rand_ZeroOne
/* E026C0 80195980 E6120030 */   swc1       $ft5, 0x30($s0)
/* E026C4 80195984 461E0102 */  mul.s       $ft0, $fv0, $fs5
/* E026C8 80195988 0C0013AC */  jal         Rand_ZeroOne
/* E026CC 8019598C E6040034 */   swc1       $ft0, 0x34($s0)
/* E026D0 80195990 461E0182 */  mul.s       $ft1, $fv0, $fs5
/* E026D4 80195994 8FB8008C */  lw          $t8, 0x8C($sp)
/* E026D8 80195998 26F70001 */  addiu       $s7, $s7, 0x1
/* E026DC 8019599C 2610000C */  addiu       $s0, $s0, 0xC
/* E026E0 801959A0 E606002C */  swc1        $ft1, 0x2C($s0)
/* E026E4 801959A4 87190006 */  lh          $t9, 0x6($t8)
/* E026E8 801959A8 02F9082A */  slt         $at, $s7, $t9
/* E026EC 801959AC 1420FFC9 */  bnez        $at, .Li1_801958D4
/* E026F0 801959B0 00000000 */   nop
.Li1_801959B4:
/* E026F4 801959B4 86C90008 */  lh          $t1, 0x8($s6)
/* E026F8 801959B8 252AFFFF */  addiu       $t2, $t1, -0x1
/* E026FC 801959BC A6CA0008 */  sh          $t2, 0x8($s6)
/* E02700 801959C0 86CC0008 */  lh          $t4, 0x8($s6)
/* E02704 801959C4 1D800008 */  bgtz        $t4, .Li1_801959E8
/* E02708 801959C8 00000000 */   nop
/* E0270C 801959CC 44800000 */  mtc1        $zero, $fv0
/* E02710 801959D0 96CB007C */  lhu         $t3, 0x7C($s6)
/* E02714 801959D4 E6C00078 */  swc1        $fv0, 0x78($s6)
/* E02718 801959D8 3168FF7F */  andi        $t0, $t3, 0xFF7F
/* E0271C 801959DC A6C8007C */  sh          $t0, 0x7C($s6)
/* E02720 801959E0 E6C00070 */  swc1        $fv0, 0x70($s6)
/* E02724 801959E4 E6C00068 */  swc1        $fv0, 0x68($s6)
.Li1_801959E8:
/* E02728 801959E8 10000004 */  b           .Li1_801959FC
/* E0272C 801959EC 96C2007C */   lhu        $v0, 0x7C($s6)
/* E02730 801959F0 246FFFFF */  addiu       $t7, $v1, -0x1
.Li1_801959F4:
/* E02734 801959F4 A6CF000A */  sh          $t7, 0xA($s6)
/* E02738 801959F8 96C2007C */  lhu         $v0, 0x7C($s6)
.Li1_801959FC:
/* E0273C 801959FC 304E0200 */  andi        $t6, $v0, 0x200
.Li1_80195A00:
/* E02740 80195A00 11C00003 */  beqz        $t6, .Li1_80195A10
/* E02744 80195A04 304DFDFF */   andi       $t5, $v0, 0xFDFF
/* E02748 80195A08 A6CD007C */  sh          $t5, 0x7C($s6)
/* E0274C 80195A0C 31A2FFFF */  andi        $v0, $t5, 0xFFFF
.Li1_80195A10:
/* E02750 80195A10 30581000 */  andi        $t8, $v0, 0x1000
/* E02754 80195A14 1300002A */  beqz        $t8, .Li1_80195AC0
/* E02758 80195A18 3C048014 */   lui        $a0, %hi(gCalcMatrix)
/* E0275C 80195A1C 3C05800D */  lui         $a1, %hi(D_800C9F2C)
/* E02760 80195A20 24A59F2C */  addiu       $a1, $a1, %lo(D_800C9F2C)
/* E02764 80195A24 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E02768 80195A28 0C001A5C */  jal         Matrix_MultVec3f
/* E0276C 80195A2C 27A600F8 */   addiu      $a2, $sp, 0xF8
/* E02770 80195A30 0C0013AC */  jal         Rand_ZeroOne
/* E02774 80195A34 00000000 */   nop
/* E02778 80195A38 46160481 */  sub.s       $ft5, $fv0, $fs1
/* E0277C 80195A3C 8FB90260 */  lw          $t9, 0x260($sp)
/* E02780 80195A40 C6D00018 */  lwc1        $ft4, 0x18($s6)
/* E02784 80195A44 46189102 */  mul.s       $ft0, $ft5, $fs2
/* E02788 80195A48 C72A0004 */  lwc1        $ft3, 0x4($t9)
/* E0278C 80195A4C 46105200 */  add.s       $ft2, $ft3, $ft4
/* E02790 80195A50 C7AA00F8 */  lwc1        $ft3, 0xF8($sp)
/* E02794 80195A54 46044180 */  add.s       $ft1, $ft2, $ft0
/* E02798 80195A58 46065400 */  add.s       $ft4, $ft3, $ft1
/* E0279C 80195A5C 0C0013AC */  jal         Rand_ZeroOne
/* E027A0 80195A60 E7B000F8 */   swc1       $ft4, 0xF8($sp)
/* E027A4 80195A64 46160281 */  sub.s       $ft3, $fv0, $fs1
/* E027A8 80195A68 8FA20260 */  lw          $v0, 0x260($sp)
/* E027AC 80195A6C C6C8001C */  lwc1        $ft2, 0x1C($s6)
/* E027B0 80195A70 C7AC00F8 */  lwc1        $fa0, 0xF8($sp)
/* E027B4 80195A74 46185182 */  mul.s       $ft1, $ft3, $fs2
/* E027B8 80195A78 C4520008 */  lwc1        $ft5, 0x8($v0)
/* E027BC 80195A7C 8EC70060 */  lw          $a3, 0x60($s6)
/* E027C0 80195A80 46089100 */  add.s       $ft0, $ft5, $ft2
/* E027C4 80195A84 C7B200FC */  lwc1        $ft5, 0xFC($sp)
/* E027C8 80195A88 46062400 */  add.s       $ft4, $ft0, $ft1
/* E027CC 80195A8C C6C40020 */  lwc1        $ft0, 0x20($s6)
/* E027D0 80195A90 46109380 */  add.s       $fa1, $ft5, $ft4
/* E027D4 80195A94 C7B20100 */  lwc1        $ft5, 0x100($sp)
/* E027D8 80195A98 E7AE00FC */  swc1        $fa1, 0xFC($sp)
/* E027DC 80195A9C C44A000C */  lwc1        $ft3, 0xC($v0)
/* E027E0 80195AA0 46045180 */  add.s       $ft1, $ft3, $ft0
/* E027E4 80195AA4 46069400 */  add.s       $ft4, $ft5, $ft1
/* E027E8 80195AA8 44068000 */  mfc1        $a2, $ft4
/* E027EC 80195AAC 0C01F4B2 */  jal         func_8007D2C8
/* E027F0 80195AB0 E7B00100 */   swc1       $ft4, 0x100($sp)
/* E027F4 80195AB4 96C9007C */  lhu         $t1, 0x7C($s6)
/* E027F8 80195AB8 312AEFFF */  andi        $t2, $t1, 0xEFFF
/* E027FC 80195ABC A6CA007C */  sh          $t2, 0x7C($s6)
.Li1_80195AC0:
/* E02800 80195AC0 8FAC00F4 */  lw          $t4, 0xF4($sp)
/* E02804 80195AC4 8FA80098 */  lw          $t0, 0x98($sp)
/* E02808 80195AC8 8FAE0094 */  lw          $t6, 0x94($sp)
/* E0280C 80195ACC 8FB80090 */  lw          $t8, 0x90($sp)
/* E02810 80195AD0 258B0001 */  addiu       $t3, $t4, 0x1
/* E02814 80195AD4 2D610011 */  sltiu       $at, $t3, 0x11
/* E02818 80195AD8 250F0080 */  addiu       $t7, $t0, 0x80
/* E0281C 80195ADC 25CD0080 */  addiu       $t5, $t6, 0x80
/* E02820 80195AE0 27190080 */  addiu       $t9, $t8, 0x80
/* E02824 80195AE4 AFB90090 */  sw          $t9, 0x90($sp)
/* E02828 80195AE8 AFAD0094 */  sw          $t5, 0x94($sp)
/* E0282C 80195AEC AFAF0098 */  sw          $t7, 0x98($sp)
/* E02830 80195AF0 AFAB00F4 */  sw          $t3, 0xF4($sp)
/* E02834 80195AF4 1420FBFE */  bnez        $at, .Li1_80194AF0
/* E02838 80195AF8 26D60080 */   addiu      $s6, $s6, 0x80
/* E0283C 80195AFC 8FA30260 */  lw          $v1, 0x260($sp)
/* E02840 80195B00 8465004E */  lh          $a1, 0x4E($v1)
/* E02844 80195B04 10A00003 */  beqz        $a1, .Li1_80195B14
/* E02848 80195B08 00A02025 */   or         $a0, $a1, $zero
/* E0284C 80195B0C 24010001 */  addiu       $at, $zero, 0x1
/* E02850 80195B10 1481005F */  bne         $a0, $at, .Li1_80195C90
.Li1_80195B14:
/* E02854 80195B14 3C0A801A */   lui        $t2, %hi(D_i1_8019B838)
/* E02858 80195B18 854AB838 */  lh          $t2, %lo(D_i1_8019B838)($t2)
/* E0285C 80195B1C 0000A025 */  or          $s4, $zero, $zero
/* E02860 80195B20 1D400002 */  bgtz        $t2, .Li1_80195B2C
/* E02864 80195B24 00000000 */   nop
/* E02868 80195B28 24140001 */  addiu       $s4, $zero, 0x1
.Li1_80195B2C:
/* E0286C 80195B2C 3C16801A */  lui         $s6, %hi(D_i1_8019B838 + 0x80)
/* E02870 80195B30 3C02801A */  lui         $v0, %hi(D_i1_8019C0B8)
/* E02874 80195B34 2442C0B8 */  addiu       $v0, $v0, %lo(D_i1_8019C0B8)
/* E02878 80195B38 26D6B8B8 */  addiu       $s6, $s6, %lo(D_i1_8019B838 + 0x80)
/* E0287C 80195B3C 86CC0000 */  lh          $t4, 0x0($s6)
.Li1_80195B40:
/* E02880 80195B40 5D800003 */  bgtzl       $t4, .Li1_80195B50
/* E02884 80195B44 86CB0080 */   lh         $t3, 0x80($s6)
/* E02888 80195B48 26940001 */  addiu       $s4, $s4, 0x1
/* E0288C 80195B4C 86CB0080 */  lh          $t3, 0x80($s6)
.Li1_80195B50:
/* E02890 80195B50 5D600003 */  bgtzl       $t3, .Li1_80195B60
/* E02894 80195B54 86C80100 */   lh         $t0, 0x100($s6)
/* E02898 80195B58 26940001 */  addiu       $s4, $s4, 0x1
/* E0289C 80195B5C 86C80100 */  lh          $t0, 0x100($s6)
.Li1_80195B60:
/* E028A0 80195B60 5D000003 */  bgtzl       $t0, .Li1_80195B70
/* E028A4 80195B64 86CF0180 */   lh         $t7, 0x180($s6)
/* E028A8 80195B68 26940001 */  addiu       $s4, $s4, 0x1
/* E028AC 80195B6C 86CF0180 */  lh          $t7, 0x180($s6)
.Li1_80195B70:
/* E028B0 80195B70 5DE00003 */  bgtzl       $t7, .Li1_80195B80
/* E028B4 80195B74 26D60200 */   addiu      $s6, $s6, 0x200
/* E028B8 80195B78 26940001 */  addiu       $s4, $s4, 0x1
/* E028BC 80195B7C 26D60200 */  addiu       $s6, $s6, 0x200
.Li1_80195B80:
/* E028C0 80195B80 56C2FFEF */  bnel        $s6, $v0, .Li1_80195B40
/* E028C4 80195B84 86CC0000 */   lh         $t4, 0x0($s6)
/* E028C8 80195B88 54A00020 */  bnel        $a1, $zero, .Li1_80195C0C
/* E028CC 80195B8C 24010011 */   addiu      $at, $zero, 0x11
/* E028D0 80195B90 8FAE0260 */  lw          $t6, 0x260($sp)
/* E028D4 80195B94 85CD00B0 */  lh          $t5, 0xB0($t6)
/* E028D8 80195B98 55A0001C */  bnel        $t5, $zero, .Li1_80195C0C
/* E028DC 80195B9C 24010011 */   addiu      $at, $zero, 0x11
/* E028E0 80195BA0 1A80000A */  blez        $s4, .Li1_80195BCC
/* E028E4 80195BA4 2682FFFF */   addiu      $v0, $s4, -0x1
/* E028E8 80195BA8 24010005 */  addiu       $at, $zero, 0x5
/* E028EC 80195BAC 0041001A */  div         $zero, $v0, $at
/* E028F0 80195BB0 85D900B2 */  lh          $t9, 0xB2($t6)
/* E028F4 80195BB4 0000C012 */  mflo        $t8
/* E028F8 80195BB8 0338082A */  slt         $at, $t9, $t8
/* E028FC 80195BBC 10200003 */  beqz        $at, .Li1_80195BCC
/* E02900 80195BC0 24090001 */   addiu      $t1, $zero, 0x1
/* E02904 80195BC4 A5D800B2 */  sh          $t8, 0xB2($t6)
/* E02908 80195BC8 A5C900B0 */  sh          $t1, 0xB0($t6)
.Li1_80195BCC:
/* E0290C 80195BCC 3C03801A */  lui         $v1, %hi(D_i1_8019C0C0)
/* E02910 80195BD0 2463C0C0 */  addiu       $v1, $v1, %lo(D_i1_8019C0C0)
/* E02914 80195BD4 8C6A0000 */  lw          $t2, 0x0($v1)
/* E02918 80195BD8 24010001 */  addiu       $at, $zero, 0x1
/* E0291C 80195BDC 5541000B */  bnel        $t2, $at, .Li1_80195C0C
/* E02920 80195BE0 24010011 */   addiu      $at, $zero, 0x11
/* E02924 80195BE4 8FAC0260 */  lw          $t4, 0x260($sp)
/* E02928 80195BE8 AC600000 */  sw          $zero, 0x0($v1)
/* E0292C 80195BEC 858200B2 */  lh          $v0, 0xB2($t4)
/* E02930 80195BF0 28410005 */  slti        $at, $v0, 0x5
/* E02934 80195BF4 10200004 */  beqz        $at, .Li1_80195C08
/* E02938 80195BF8 244B0001 */   addiu      $t3, $v0, 0x1
/* E0293C 80195BFC 24080001 */  addiu       $t0, $zero, 0x1
/* E02940 80195C00 A58B00B2 */  sh          $t3, 0xB2($t4)
/* E02944 80195C04 A58800B0 */  sh          $t0, 0xB0($t4)
.Li1_80195C08:
/* E02948 80195C08 24010011 */  addiu       $at, $zero, 0x11
.Li1_80195C0C:
/* E0294C 80195C0C 5681000E */  bnel        $s4, $at, .Li1_80195C48
/* E02950 80195C10 24010010 */   addiu      $at, $zero, 0x10
/* E02954 80195C14 8FAD0260 */  lw          $t5, 0x260($sp)
/* E02958 80195C18 44805000 */  mtc1        $zero, $ft3
/* E0295C 80195C1C 44802000 */  mtc1        $zero, $ft0
/* E02960 80195C20 44809000 */  mtc1        $zero, $ft5
/* E02964 80195C24 240F0002 */  addiu       $t7, $zero, 0x2
/* E02968 80195C28 24180004 */  addiu       $t8, $zero, 0x4
/* E0296C 80195C2C A5AF009A */  sh          $t7, 0x9A($t5)
/* E02970 80195C30 A5B800B4 */  sh          $t8, 0xB4($t5)
/* E02974 80195C34 E5AA010C */  swc1        $ft3, 0x10C($t5)
/* E02978 80195C38 E5A40108 */  swc1        $ft0, 0x108($t5)
/* E0297C 80195C3C 10000014 */  b           .Li1_80195C90
/* E02980 80195C40 E5B200F0 */   swc1       $ft5, 0xF0($t5)
/* E02984 80195C44 24010010 */  addiu       $at, $zero, 0x10
.Li1_80195C48:
/* E02988 80195C48 56810012 */  bnel        $s4, $at, .Li1_80195C94
/* E0298C 80195C4C 8FA30260 */   lw         $v1, 0x260($sp)
/* E02990 80195C50 8FB90260 */  lw          $t9, 0x260($sp)
/* E02994 80195C54 8729004E */  lh          $t1, 0x4E($t9)
/* E02998 80195C58 5520000E */  bnel        $t1, $zero, .Li1_80195C94
/* E0299C 80195C5C 8FA30260 */   lw         $v1, 0x260($sp)
/* E029A0 80195C60 872A00B4 */  lh          $t2, 0xB4($t9)
/* E029A4 80195C64 3C01437F */  lui         $at, (0x437F0000 >> 16)
/* E029A8 80195C68 44814000 */  mtc1        $at, $ft2
/* E029AC 80195C6C 44803000 */  mtc1        $zero, $ft1
/* E029B0 80195C70 240E0001 */  addiu       $t6, $zero, 0x1
/* E029B4 80195C74 29410003 */  slti        $at, $t2, 0x3
/* E029B8 80195C78 A72E009A */  sh          $t6, 0x9A($t9)
/* E029BC 80195C7C E7280114 */  swc1        $ft2, 0x114($t9)
/* E029C0 80195C80 10200003 */  beqz        $at, .Li1_80195C90
/* E029C4 80195C84 E7260118 */   swc1       $ft1, 0x118($t9)
/* E029C8 80195C88 240B0003 */  addiu       $t3, $zero, 0x3
/* E029CC 80195C8C A72B00B4 */  sh          $t3, 0xB4($t9)
.Li1_80195C90:
/* E029D0 80195C90 8FA30260 */  lw          $v1, 0x260($sp)
.Li1_80195C94:
/* E029D4 80195C94 24010001 */  addiu       $at, $zero, 0x1
/* E029D8 80195C98 80680062 */  lb          $t0, 0x62($v1)
/* E029DC 80195C9C 8465004E */  lh          $a1, 0x4E($v1)
/* E029E0 80195CA0 150100C0 */  bne         $t0, $at, .Li1_80195FA4
/* E029E4 80195CA4 00A02025 */   or         $a0, $a1, $zero
/* E029E8 80195CA8 10A00008 */  beqz        $a1, .Li1_80195CCC
/* E029EC 80195CAC A0600062 */   sb         $zero, 0x62($v1)
/* E029F0 80195CB0 24010001 */  addiu       $at, $zero, 0x1
/* E029F4 80195CB4 10810005 */  beq         $a0, $at, .Li1_80195CCC
/* E029F8 80195CB8 24010002 */   addiu      $at, $zero, 0x2
/* E029FC 80195CBC 5081006C */  beql        $a0, $at, .Li1_80195E70
/* E02A00 80195CC0 8FA80260 */   lw         $t0, 0x260($sp)
/* E02A04 80195CC4 100000B8 */  b           .Li1_80195FA8
/* E02A08 80195CC8 3C163103 */   lui        $s6, (0x31034064 >> 16)
.Li1_80195CCC:
/* E02A0C 80195CCC 8FAC0260 */  lw          $t4, 0x260($sp)
/* E02A10 80195CD0 3C14801A */  lui         $s4, %hi(D_i1_8019A500)
/* E02A14 80195CD4 3C09801A */  lui         $t1, %hi(D_i1_8019B838)
/* E02A18 80195CD8 858F0066 */  lh          $t7, 0x66($t4)
/* E02A1C 80195CDC 2529B838 */  addiu       $t1, $t1, %lo(D_i1_8019B838)
/* E02A20 80195CE0 259203FC */  addiu       $s2, $t4, 0x3FC
/* E02A24 80195CE4 000FC040 */  sll         $t8, $t7, 1
/* E02A28 80195CE8 0298A021 */  addu        $s4, $s4, $t8
/* E02A2C 80195CEC 8694A500 */  lh          $s4, %lo(D_i1_8019A500)($s4)
/* E02A30 80195CF0 001469C0 */  sll         $t5, $s4, 7
/* E02A34 80195CF4 01A98021 */  addu        $s0, $t5, $t1
/* E02A38 80195CF8 86030000 */  lh          $v1, 0x0($s0)
/* E02A3C 80195CFC 1860004D */  blez        $v1, .Li1_80195E34
/* E02A40 80195D00 3C0E801A */   lui        $t6, %hi(D_i1_8019B838 + 0x700)
/* E02A44 80195D04 25CEBF38 */  addiu       $t6, $t6, %lo(D_i1_8019B838 + 0x700)
/* E02A48 80195D08 560E0004 */  bnel        $s0, $t6, .Li1_80195D1C
/* E02A4C 80195D0C 8FAA0260 */   lw         $t2, 0x260($sp)
/* E02A50 80195D10 10A0003B */  beqz        $a1, .Li1_80195E00
/* E02A54 80195D14 00000000 */   nop
/* E02A58 80195D18 8FAA0260 */  lw          $t2, 0x260($sp)
.Li1_80195D1C:
/* E02A5C 80195D1C 2408000F */  addiu       $t0, $zero, 0xF
/* E02A60 80195D20 854B0064 */  lh          $t3, 0x64($t2)
/* E02A64 80195D24 A6080006 */  sh          $t0, 0x6($s0)
/* E02A68 80195D28 006BC823 */  subu        $t9, $v1, $t3
/* E02A6C 80195D2C A6190000 */  sh          $t9, 0x0($s0)
/* E02A70 80195D30 860F0000 */  lh          $t7, 0x0($s0)
/* E02A74 80195D34 1DE0001F */  bgtz        $t7, .Li1_80195DB4
/* E02A78 80195D38 3C18800C */   lui        $t8, %hi(D_800C5D34)
/* E02A7C 80195D3C 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E02A80 80195D40 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E02A84 80195D44 27075D34 */  addiu       $a3, $t8, %lo(D_800C5D34)
/* E02A88 80195D48 3C042903 */  lui         $a0, (0x2903A008 >> 16)
/* E02A8C 80195D4C 3484A008 */  ori         $a0, $a0, (0x2903A008 & 0xFFFF)
/* E02A90 80195D50 AFA70010 */  sw          $a3, 0x10($sp)
/* E02A94 80195D54 AFAD0014 */  sw          $t5, 0x14($sp)
/* E02A98 80195D58 02402825 */  or          $a1, $s2, $zero
/* E02A9C 80195D5C 0C006486 */  jal         Audio_PlaySfx
/* E02AA0 80195D60 24060004 */   addiu      $a2, $zero, 0x4
/* E02AA4 80195D64 3C09800C */  lui         $t1, %hi(D_800C5D34)
/* E02AA8 80195D68 3C0C800C */  lui         $t4, %hi(D_800C5D3C)
/* E02AAC 80195D6C 258C5D3C */  addiu       $t4, $t4, %lo(D_800C5D3C)
/* E02AB0 80195D70 25275D34 */  addiu       $a3, $t1, %lo(D_800C5D34)
/* E02AB4 80195D74 3C041903 */  lui         $a0, (0x19030059 >> 16)
/* E02AB8 80195D78 34840059 */  ori         $a0, $a0, (0x19030059 & 0xFFFF)
/* E02ABC 80195D7C AFA70010 */  sw          $a3, 0x10($sp)
/* E02AC0 80195D80 AFAC0014 */  sw          $t4, 0x14($sp)
/* E02AC4 80195D84 02402825 */  or          $a1, $s2, $zero
/* E02AC8 80195D88 0C006486 */  jal         Audio_PlaySfx
/* E02ACC 80195D8C 24060004 */   addiu      $a2, $zero, 0x4
/* E02AD0 80195D90 960B007C */  lhu         $t3, 0x7C($s0)
/* E02AD4 80195D94 240EFFFF */  addiu       $t6, $zero, -0x1
/* E02AD8 80195D98 240A0010 */  addiu       $t2, $zero, 0x10
/* E02ADC 80195D9C 3579000C */  ori         $t9, $t3, 0xC
/* E02AE0 80195DA0 A60E0000 */  sh          $t6, 0x0($s0)
/* E02AE4 80195DA4 A60A0002 */  sh          $t2, 0x2($s0)
/* E02AE8 80195DA8 A6000004 */  sh          $zero, 0x4($s0)
/* E02AEC 80195DAC 1000002C */  b           .Li1_80195E60
/* E02AF0 80195DB0 A619007C */   sh         $t9, 0x7C($s0)
.Li1_80195DB4:
/* E02AF4 80195DB4 3C08800C */  lui         $t0, %hi(D_800C5D34)
/* E02AF8 80195DB8 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E02AFC 80195DBC 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E02B00 80195DC0 25075D34 */  addiu       $a3, $t0, %lo(D_800C5D34)
/* E02B04 80195DC4 3C042903 */  lui         $a0, (0x2903300E >> 16)
/* E02B08 80195DC8 3484300E */  ori         $a0, $a0, (0x2903300E & 0xFFFF)
/* E02B0C 80195DCC AFA70010 */  sw          $a3, 0x10($sp)
/* E02B10 80195DD0 AFAF0014 */  sw          $t7, 0x14($sp)
/* E02B14 80195DD4 02402825 */  or          $a1, $s2, $zero
/* E02B18 80195DD8 0C006486 */  jal         Audio_PlaySfx
/* E02B1C 80195DDC 24060004 */   addiu      $a2, $zero, 0x4
/* E02B20 80195DE0 3C18801A */  lui         $t8, %hi(D_i1_8019B838 + 0x700)
/* E02B24 80195DE4 2718BF38 */  addiu       $t8, $t8, %lo(D_i1_8019B838 + 0x700)
/* E02B28 80195DE8 5618001E */  bnel        $s0, $t8, .Li1_80195E64
/* E02B2C 80195DEC 8FB90260 */   lw         $t9, 0x260($sp)
/* E02B30 80195DF0 960D007C */  lhu         $t5, 0x7C($s0)
/* E02B34 80195DF4 35A90008 */  ori         $t1, $t5, 0x8
/* E02B38 80195DF8 10000019 */  b           .Li1_80195E60
/* E02B3C 80195DFC A609007C */   sh         $t1, 0x7C($s0)
.Li1_80195E00:
/* E02B40 80195E00 3C0C800C */  lui         $t4, %hi(D_800C5D34)
/* E02B44 80195E04 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E02B48 80195E08 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E02B4C 80195E0C 25875D34 */  addiu       $a3, $t4, %lo(D_800C5D34)
/* E02B50 80195E10 3C042912 */  lui         $a0, (0x29121007 >> 16)
/* E02B54 80195E14 34841007 */  ori         $a0, $a0, (0x29121007 & 0xFFFF)
/* E02B58 80195E18 AFA70010 */  sw          $a3, 0x10($sp)
/* E02B5C 80195E1C AFAE0014 */  sw          $t6, 0x14($sp)
/* E02B60 80195E20 02402825 */  or          $a1, $s2, $zero
/* E02B64 80195E24 0C006486 */  jal         Audio_PlaySfx
/* E02B68 80195E28 24060004 */   addiu      $a2, $zero, 0x4
/* E02B6C 80195E2C 1000000D */  b           .Li1_80195E64
/* E02B70 80195E30 8FB90260 */   lw         $t9, 0x260($sp)
.Li1_80195E34:
/* E02B74 80195E34 3C0A800C */  lui         $t2, %hi(D_800C5D34)
/* E02B78 80195E38 3C0B800C */  lui         $t3, %hi(D_800C5D3C)
/* E02B7C 80195E3C 256B5D3C */  addiu       $t3, $t3, %lo(D_800C5D3C)
/* E02B80 80195E40 25475D34 */  addiu       $a3, $t2, %lo(D_800C5D34)
/* E02B84 80195E44 3C042912 */  lui         $a0, (0x29121007 >> 16)
/* E02B88 80195E48 34841007 */  ori         $a0, $a0, (0x29121007 & 0xFFFF)
/* E02B8C 80195E4C AFA70010 */  sw          $a3, 0x10($sp)
/* E02B90 80195E50 AFAB0014 */  sw          $t3, 0x14($sp)
/* E02B94 80195E54 02402825 */  or          $a1, $s2, $zero
/* E02B98 80195E58 0C006486 */  jal         Audio_PlaySfx
/* E02B9C 80195E5C 24060004 */   addiu      $a2, $zero, 0x4
.Li1_80195E60:
/* E02BA0 80195E60 8FB90260 */  lw          $t9, 0x260($sp)
.Li1_80195E64:
/* E02BA4 80195E64 1000004F */  b           .Li1_80195FA4
/* E02BA8 80195E68 8724004E */   lh         $a0, 0x4E($t9)
/* E02BAC 80195E6C 8FA80260 */  lw          $t0, 0x260($sp)
.Li1_80195E70:
/* E02BB0 80195E70 3C14801A */  lui         $s4, %hi(D_i1_8019A500)
/* E02BB4 80195E74 2401000F */  addiu       $at, $zero, 0xF
/* E02BB8 80195E78 850F0066 */  lh          $t7, 0x66($t0)
/* E02BBC 80195E7C 251203FC */  addiu       $s2, $t0, 0x3FC
/* E02BC0 80195E80 000FC040 */  sll         $t8, $t7, 1
/* E02BC4 80195E84 0298A021 */  addu        $s4, $s4, $t8
/* E02BC8 80195E88 8694A500 */  lh          $s4, %lo(D_i1_8019A500)($s4)
/* E02BCC 80195E8C 16810038 */  bne         $s4, $at, .Li1_80195F70
/* E02BD0 80195E90 3C0D800C */   lui        $t5, %hi(D_800C5D34)
/* E02BD4 80195E94 3C09800C */  lui         $t1, %hi(D_800C5D3C)
/* E02BD8 80195E98 3C163103 */  lui         $s6, (0x31034064 >> 16)
/* E02BDC 80195E9C 25295D3C */  addiu       $t1, $t1, %lo(D_800C5D3C)
/* E02BE0 80195EA0 25A75D34 */  addiu       $a3, $t5, %lo(D_800C5D34)
/* E02BE4 80195EA4 36C44064 */  ori         $a0, $s6, (0x31034064 & 0xFFFF)
/* E02BE8 80195EA8 AFA70010 */  sw          $a3, 0x10($sp)
/* E02BEC 80195EAC AFA90014 */  sw          $t1, 0x14($sp)
/* E02BF0 80195EB0 02402825 */  or          $a1, $s2, $zero
/* E02BF4 80195EB4 0C006486 */  jal         Audio_PlaySfx
/* E02BF8 80195EB8 24060004 */   addiu      $a2, $zero, 0x4
/* E02BFC 80195EBC 3C01801A */  lui         $at, %hi(D_i1_8019B838 + 0x788)
/* E02C00 80195EC0 240C000A */  addiu       $t4, $zero, 0xA
/* E02C04 80195EC4 A42CBFC0 */  sh          $t4, %lo(D_i1_8019B838 + 0x788)($at)
/* E02C08 80195EC8 A420BFC2 */  sh          $zero, %lo(D_i1_8019B838 + 0x78A)($at)
/* E02C0C 80195ECC 3C0E801A */  lui         $t6, %hi(D_i1_8019B838 + 0x7FC)
/* E02C10 80195ED0 95CEC034 */  lhu         $t6, %lo(D_i1_8019B838 + 0x7FC)($t6)
/* E02C14 80195ED4 8FAB0260 */  lw          $t3, 0x260($sp)
/* E02C18 80195ED8 3C01801A */  lui         $at, %hi(D_i1_8019B838 + 0x7FC)
/* E02C1C 80195EDC 35CA0080 */  ori         $t2, $t6, 0x80
/* E02C20 80195EE0 A42AC034 */  sh          $t2, %lo(D_i1_8019B838 + 0x7FC)($at)
/* E02C24 80195EE4 85630060 */  lh          $v1, 0x60($t3)
/* E02C28 80195EE8 1860001F */  blez        $v1, .Li1_80195F68
/* E02C2C 80195EEC 00000000 */   nop
/* E02C30 80195EF0 85790064 */  lh          $t9, 0x64($t3)
/* E02C34 80195EF4 24180012 */  addiu       $t8, $zero, 0x12
/* E02C38 80195EF8 A578005A */  sh          $t8, 0x5A($t3)
/* E02C3C 80195EFC 00797823 */  subu        $t7, $v1, $t9
/* E02C40 80195F00 A56F0060 */  sh          $t7, 0x60($t3)
/* E02C44 80195F04 85680060 */  lh          $t0, 0x60($t3)
/* E02C48 80195F08 1D000017 */  bgtz        $t0, .Li1_80195F68
/* E02C4C 80195F0C 3C178016 */   lui        $s7, %hi(D_Timer_80161A60)
/* E02C50 80195F10 26F71A60 */  addiu       $s7, $s7, %lo(D_Timer_80161A60)
/* E02C54 80195F14 241E0008 */  addiu       $fp, $zero, 0x8
/* E02C58 80195F18 A6FE0000 */  sh          $fp, 0x0($s7)
/* E02C5C 80195F1C 240DFFFF */  addiu       $t5, $zero, -0x1
/* E02C60 80195F20 3C018017 */  lui         $at, %hi(D_8017796C)
/* E02C64 80195F24 AC2D796C */  sw          $t5, %lo(D_8017796C)($at)
/* E02C68 80195F28 3C0C800C */  lui         $t4, %hi(D_800C5D34)
/* E02C6C 80195F2C 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E02C70 80195F30 3C018018 */  lui         $at, %hi(D_8017828C)
/* E02C74 80195F34 24090001 */  addiu       $t1, $zero, 0x1
/* E02C78 80195F38 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E02C7C 80195F3C 25875D34 */  addiu       $a3, $t4, %lo(D_800C5D34)
/* E02C80 80195F40 3C042940 */  lui         $a0, (0x2940D09A >> 16)
/* E02C84 80195F44 AC29828C */  sw          $t1, %lo(D_8017828C)($at)
/* E02C88 80195F48 3484D09A */  ori         $a0, $a0, (0x2940D09A & 0xFFFF)
/* E02C8C 80195F4C AFA70010 */  sw          $a3, 0x10($sp)
/* E02C90 80195F50 AFAE0014 */  sw          $t6, 0x14($sp)
/* E02C94 80195F54 02402825 */  or          $a1, $s2, $zero
/* E02C98 80195F58 0C006486 */  jal         Audio_PlaySfx
/* E02C9C 80195F5C 24060004 */   addiu      $a2, $zero, 0x4
/* E02CA0 80195F60 8FAA0260 */  lw          $t2, 0x260($sp)
/* E02CA4 80195F64 A5400060 */  sh          $zero, 0x60($t2)
.Li1_80195F68:
/* E02CA8 80195F68 1000000D */  b           .Li1_80195FA0
/* E02CAC 80195F6C 8FB80260 */   lw         $t8, 0x260($sp)
.Li1_80195F70:
/* E02CB0 80195F70 3C19800C */  lui         $t9, %hi(D_800C5D34)
/* E02CB4 80195F74 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E02CB8 80195F78 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E02CBC 80195F7C 27275D34 */  addiu       $a3, $t9, %lo(D_800C5D34)
/* E02CC0 80195F80 3C042912 */  lui         $a0, (0x29121007 >> 16)
/* E02CC4 80195F84 34841007 */  ori         $a0, $a0, (0x29121007 & 0xFFFF)
/* E02CC8 80195F88 AFA70010 */  sw          $a3, 0x10($sp)
/* E02CCC 80195F8C AFAF0014 */  sw          $t7, 0x14($sp)
/* E02CD0 80195F90 02402825 */  or          $a1, $s2, $zero
/* E02CD4 80195F94 0C006486 */  jal         Audio_PlaySfx
/* E02CD8 80195F98 24060004 */   addiu      $a2, $zero, 0x4
/* E02CDC 80195F9C 8FB80260 */  lw          $t8, 0x260($sp)
.Li1_80195FA0:
/* E02CE0 80195FA0 8704004E */  lh          $a0, 0x4E($t8)
.Li1_80195FA4:
/* E02CE4 80195FA4 3C163103 */  lui         $s6, (0x31034064 >> 16)
.Li1_80195FA8:
/* E02CE8 80195FA8 3C178016 */  lui         $s7, %hi(D_Timer_80161A60)
/* E02CEC 80195FAC 26F71A60 */  addiu       $s7, $s7, %lo(D_Timer_80161A60)
/* E02CF0 80195FB0 36D64064 */  ori         $s6, $s6, (0x31034064 & 0xFFFF)
/* E02CF4 80195FB4 1080000A */  beqz        $a0, .Li1_80195FE0
/* E02CF8 80195FB8 241E0008 */   addiu      $fp, $zero, 0x8
/* E02CFC 80195FBC 24010001 */  addiu       $at, $zero, 0x1
/* E02D00 80195FC0 10810007 */  beq         $a0, $at, .Li1_80195FE0
/* E02D04 80195FC4 24010002 */   addiu      $at, $zero, 0x2
/* E02D08 80195FC8 1081005A */  beq         $a0, $at, .Li1_80196134
/* E02D0C 80195FCC 00000000 */   nop
/* E02D10 80195FD0 8FAB0260 */  lw          $t3, 0x260($sp)
/* E02D14 80195FD4 0000A025 */  or          $s4, $zero, $zero
/* E02D18 80195FD8 100000A6 */  b           .Li1_80196274
/* E02D1C 80195FDC 85630060 */   lh         $v1, 0x60($t3)
.Li1_80195FE0:
/* E02D20 80195FE0 3C08801A */  lui         $t0, %hi(D_i1_8019B838 + 0x700)
/* E02D24 80195FE4 2516BF38 */  addiu       $s6, $t0, %lo(D_i1_8019B838 + 0x700)
/* E02D28 80195FE8 3C15801A */  lui         $s5, %hi(D_i1_8019B7F0)
/* E02D2C 80195FEC 3C138017 */  lui         $s3, %hi(gGameFrameCount)
/* E02D30 80195FF0 26737DB0 */  addiu       $s3, $s3, %lo(gGameFrameCount)
/* E02D34 80195FF4 26B5B7F0 */  addiu       $s5, $s5, %lo(D_i1_8019B7F0)
/* E02D38 80195FF8 02C0F025 */  or          $fp, $s6, $zero
/* E02D3C 80195FFC 00001025 */  or          $v0, $zero, $zero
/* E02D40 80196000 24170021 */  addiu       $s7, $zero, 0x21
/* E02D44 80196004 8E6D0000 */  lw          $t5, 0x0($s3)
.Li1_80196008:
/* E02D48 80196008 AFA200F4 */  sw          $v0, 0xF4($sp)
/* E02D4C 8019600C 31A90003 */  andi        $t1, $t5, 0x3
/* E02D50 80196010 15200040 */  bnez        $t1, .Li1_80196114
/* E02D54 80196014 00026040 */   sll        $t4, $v0, 1
/* E02D58 80196018 02AC8821 */  addu        $s1, $s5, $t4
/* E02D5C 8019601C 862E0000 */  lh          $t6, 0x0($s1)
/* E02D60 80196020 11C0003C */  beqz        $t6, .Li1_80196114
/* E02D64 80196024 3C14801A */   lui        $s4, %hi(D_i1_8019A500)
/* E02D68 80196028 028CA021 */  addu        $s4, $s4, $t4
/* E02D6C 8019602C 8694A500 */  lh          $s4, %lo(D_i1_8019A500)($s4)
/* E02D70 80196030 3C19801A */  lui         $t9, %hi(D_i1_8019B838)
/* E02D74 80196034 2739B838 */  addiu       $t9, $t9, %lo(D_i1_8019B838)
/* E02D78 80196038 001451C0 */  sll         $t2, $s4, 7
/* E02D7C 8019603C 01598021 */  addu        $s0, $t2, $t9
/* E02D80 80196040 86030000 */  lh          $v1, 0x0($s0)
/* E02D84 80196044 58600033 */  blezl       $v1, .Li1_80196114
/* E02D88 80196048 A6200000 */   sh         $zero, 0x0($s1)
/* E02D8C 8019604C 56160005 */  bnel        $s0, $s6, .Li1_80196064
/* E02D90 80196050 246BFFFE */   addiu      $t3, $v1, -0x2
/* E02D94 80196054 8FAF0260 */  lw          $t7, 0x260($sp)
/* E02D98 80196058 85F8004E */  lh          $t8, 0x4E($t7)
/* E02D9C 8019605C 1300002C */  beqz        $t8, .Li1_80196110
/* E02DA0 80196060 246BFFFE */   addiu      $t3, $v1, -0x2
.Li1_80196064:
/* E02DA4 80196064 A60B0000 */  sh          $t3, 0x0($s0)
/* E02DA8 80196068 86080000 */  lh          $t0, 0x0($s0)
/* E02DAC 8019606C 1D000023 */  bgtz        $t0, .Li1_801960FC
/* E02DB0 80196070 00000000 */   nop
/* E02DB4 80196074 960C007C */  lhu         $t4, 0x7C($s0)
/* E02DB8 80196078 8FB20260 */  lw          $s2, 0x260($sp)
/* E02DBC 8019607C 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E02DC0 80196080 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E02DC4 80196084 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E02DC8 80196088 240DFFFF */  addiu       $t5, $zero, -0x1
/* E02DCC 8019608C 24090010 */  addiu       $t1, $zero, 0x10
/* E02DD0 80196090 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E02DD4 80196094 3C042903 */  lui         $a0, (0x2903A008 >> 16)
/* E02DD8 80196098 358E000C */  ori         $t6, $t4, 0xC
/* E02DDC 8019609C 265203FC */  addiu       $s2, $s2, 0x3FC
/* E02DE0 801960A0 A60D0000 */  sh          $t5, 0x0($s0)
/* E02DE4 801960A4 A6090002 */  sh          $t1, 0x2($s0)
/* E02DE8 801960A8 A6000004 */  sh          $zero, 0x4($s0)
/* E02DEC 801960AC A60E007C */  sh          $t6, 0x7C($s0)
/* E02DF0 801960B0 02402825 */  or          $a1, $s2, $zero
/* E02DF4 801960B4 3484A008 */  ori         $a0, $a0, (0x2903A008 & 0xFFFF)
/* E02DF8 801960B8 AFAA0014 */  sw          $t2, 0x14($sp)
/* E02DFC 801960BC AFA70010 */  sw          $a3, 0x10($sp)
/* E02E00 801960C0 0C006486 */  jal         Audio_PlaySfx
/* E02E04 801960C4 24060004 */   addiu      $a2, $zero, 0x4
/* E02E08 801960C8 3C19800C */  lui         $t9, %hi(D_800C5D34)
/* E02E0C 801960CC 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E02E10 801960D0 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E02E14 801960D4 27275D34 */  addiu       $a3, $t9, %lo(D_800C5D34)
/* E02E18 801960D8 3C041903 */  lui         $a0, (0x19030059 >> 16)
/* E02E1C 801960DC 34840059 */  ori         $a0, $a0, (0x19030059 & 0xFFFF)
/* E02E20 801960E0 AFA70010 */  sw          $a3, 0x10($sp)
/* E02E24 801960E4 AFAF0014 */  sw          $t7, 0x14($sp)
/* E02E28 801960E8 02402825 */  or          $a1, $s2, $zero
/* E02E2C 801960EC 0C006486 */  jal         Audio_PlaySfx
/* E02E30 801960F0 24060004 */   addiu      $a2, $zero, 0x4
/* E02E34 801960F4 10000007 */  b           .Li1_80196114
/* E02E38 801960F8 A6200000 */   sh         $zero, 0x0($s1)
.Li1_801960FC:
/* E02E3C 801960FC 561E0005 */  bnel        $s0, $fp, .Li1_80196114
/* E02E40 80196100 A6200000 */   sh         $zero, 0x0($s1)
/* E02E44 80196104 9618007C */  lhu         $t8, 0x7C($s0)
/* E02E48 80196108 370B0008 */  ori         $t3, $t8, 0x8
/* E02E4C 8019610C A60B007C */  sh          $t3, 0x7C($s0)
.Li1_80196110:
/* E02E50 80196110 A6200000 */  sh          $zero, 0x0($s1)
.Li1_80196114:
/* E02E54 80196114 8FA200F4 */  lw          $v0, 0xF4($sp)
/* E02E58 80196118 24420001 */  addiu       $v0, $v0, 0x1
/* E02E5C 8019611C 5457FFBA */  bnel        $v0, $s7, .Li1_80196008
/* E02E60 80196120 8E6D0000 */   lw         $t5, 0x0($s3)
/* E02E64 80196124 8FA80260 */  lw          $t0, 0x260($sp)
/* E02E68 80196128 0000A025 */  or          $s4, $zero, $zero
/* E02E6C 8019612C 10000051 */  b           .Li1_80196274
/* E02E70 80196130 85030060 */   lh         $v1, 0x60($t0)
.Li1_80196134:
/* E02E74 80196134 3C138017 */  lui         $s3, %hi(gGameFrameCount)
/* E02E78 80196138 26737DB0 */  addiu       $s3, $s3, %lo(gGameFrameCount)
/* E02E7C 8019613C 8E6D0000 */  lw          $t5, 0x0($s3)
/* E02E80 80196140 31A90003 */  andi        $t1, $t5, 0x3
/* E02E84 80196144 55200049 */  bnel        $t1, $zero, .Li1_8019626C
/* E02E88 80196148 8FAF0260 */   lw         $t7, 0x260($sp)
/* E02E8C 8019614C 8FAC0260 */  lw          $t4, 0x260($sp)
/* E02E90 80196150 858E005A */  lh          $t6, 0x5A($t4)
/* E02E94 80196154 55C00045 */  bnel        $t6, $zero, .Li1_8019626C
/* E02E98 80196158 8FAF0260 */   lw         $t7, 0x260($sp)
/* E02E9C 8019615C 3C11801A */  lui         $s1, %hi(D_i1_8019B7F0)
/* E02EA0 80196160 3C10801A */  lui         $s0, %hi(D_i1_8019A500)
/* E02EA4 80196164 3C15801A */  lui         $s5, %hi(D_i1_8019A500 + 0x42)
/* E02EA8 80196168 26B5A542 */  addiu       $s5, $s5, %lo(D_i1_8019A500 + 0x42)
/* E02EAC 8019616C 2610A500 */  addiu       $s0, $s0, %lo(D_i1_8019A500)
/* E02EB0 80196170 2631B7F0 */  addiu       $s1, $s1, %lo(D_i1_8019B7F0)
/* E02EB4 80196174 24130023 */  addiu       $s3, $zero, 0x23
.Li1_80196178:
/* E02EB8 80196178 86140000 */  lh          $s4, 0x0($s0)
/* E02EBC 8019617C 2401000F */  addiu       $at, $zero, 0xF
/* E02EC0 80196180 56810036 */  bnel        $s4, $at, .Li1_8019625C
/* E02EC4 80196184 26100002 */   addiu      $s0, $s0, 0x2
/* E02EC8 80196188 862A0000 */  lh          $t2, 0x0($s1)
/* E02ECC 8019618C 51400033 */  beql        $t2, $zero, .Li1_8019625C
/* E02ED0 80196190 26100002 */   addiu      $s0, $s0, 0x2
/* E02ED4 80196194 8FB20260 */  lw          $s2, 0x260($sp)
/* E02ED8 80196198 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E02EDC 8019619C 3C19800C */  lui         $t9, %hi(D_800C5D3C)
/* E02EE0 801961A0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E02EE4 801961A4 27395D3C */  addiu       $t9, $t9, %lo(D_800C5D3C)
/* E02EE8 801961A8 265203FC */  addiu       $s2, $s2, 0x3FC
/* E02EEC 801961AC 02402825 */  or          $a1, $s2, $zero
/* E02EF0 801961B0 AFB90014 */  sw          $t9, 0x14($sp)
/* E02EF4 801961B4 AFA70010 */  sw          $a3, 0x10($sp)
/* E02EF8 801961B8 02C02025 */  or          $a0, $s6, $zero
/* E02EFC 801961BC 0C006486 */  jal         Audio_PlaySfx
/* E02F00 801961C0 24060004 */   addiu      $a2, $zero, 0x4
/* E02F04 801961C4 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E02F08 801961C8 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E02F0C 801961CC 945807FC */  lhu         $t8, 0x7FC($v0)
/* E02F10 801961D0 8FA80260 */  lw          $t0, 0x260($sp)
/* E02F14 801961D4 240F000A */  addiu       $t7, $zero, 0xA
/* E02F18 801961D8 370B0080 */  ori         $t3, $t8, 0x80
/* E02F1C 801961DC A44F0788 */  sh          $t7, 0x788($v0)
/* E02F20 801961E0 A440078A */  sh          $zero, 0x78A($v0)
/* E02F24 801961E4 A44B07FC */  sh          $t3, 0x7FC($v0)
/* E02F28 801961E8 85030060 */  lh          $v1, 0x60($t0)
/* E02F2C 801961EC 1860001A */  blez        $v1, .Li1_80196258
/* E02F30 801961F0 246DFFF6 */   addiu      $t5, $v1, -0xA
/* E02F34 801961F4 A50D0060 */  sh          $t5, 0x60($t0)
/* E02F38 801961F8 85090060 */  lh          $t1, 0x60($t0)
/* E02F3C 801961FC A513005A */  sh          $s3, 0x5A($t0)
/* E02F40 80196200 5D200016 */  bgtzl       $t1, .Li1_8019625C
/* E02F44 80196204 26100002 */   addiu      $s0, $s0, 0x2
/* E02F48 80196208 A6FE0000 */  sh          $fp, 0x0($s7)
/* E02F4C 8019620C 240CFFFF */  addiu       $t4, $zero, -0x1
/* E02F50 80196210 3C018017 */  lui         $at, %hi(D_8017796C)
/* E02F54 80196214 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E02F58 80196218 AC2C796C */  sw          $t4, %lo(D_8017796C)($at)
/* E02F5C 8019621C 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E02F60 80196220 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E02F64 80196224 3C018018 */  lui         $at, %hi(D_8017828C)
/* E02F68 80196228 240E0001 */  addiu       $t6, $zero, 0x1
/* E02F6C 8019622C 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E02F70 80196230 3C042940 */  lui         $a0, (0x2940D09A >> 16)
/* E02F74 80196234 AC2E828C */  sw          $t6, %lo(D_8017828C)($at)
/* E02F78 80196238 3484D09A */  ori         $a0, $a0, (0x2940D09A & 0xFFFF)
/* E02F7C 8019623C AFAA0014 */  sw          $t2, 0x14($sp)
/* E02F80 80196240 AFA70010 */  sw          $a3, 0x10($sp)
/* E02F84 80196244 02402825 */  or          $a1, $s2, $zero
/* E02F88 80196248 0C006486 */  jal         Audio_PlaySfx
/* E02F8C 8019624C 24060004 */   addiu      $a2, $zero, 0x4
/* E02F90 80196250 8FB90260 */  lw          $t9, 0x260($sp)
/* E02F94 80196254 A7200060 */  sh          $zero, 0x60($t9)
.Li1_80196258:
/* E02F98 80196258 26100002 */  addiu       $s0, $s0, 0x2
.Li1_8019625C:
/* E02F9C 8019625C 26310002 */  addiu       $s1, $s1, 0x2
/* E02FA0 80196260 1615FFC5 */  bne         $s0, $s5, .Li1_80196178
/* E02FA4 80196264 A620FFFE */   sh         $zero, -0x2($s1)
/* E02FA8 80196268 8FAF0260 */  lw          $t7, 0x260($sp)
.Li1_8019626C:
/* E02FAC 8019626C 0000A025 */  or          $s4, $zero, $zero
/* E02FB0 80196270 85E30060 */  lh          $v1, 0x60($t7)
.Li1_80196274:
/* E02FB4 80196274 3C16801A */  lui         $s6, %hi(D_i1_8019B838)
/* E02FB8 80196278 26D6B838 */  addiu       $s6, $s6, %lo(D_i1_8019B838)
/* E02FBC 8019627C AFA000F4 */  sw          $zero, 0xF4($sp)
.Li1_80196280:
/* E02FC0 80196280 86C20000 */  lh          $v0, 0x0($s6)
/* E02FC4 80196284 04430004 */  bgezl       $v0, .Li1_80196298
/* E02FC8 80196288 00402025 */   or         $a0, $v0, $zero
/* E02FCC 8019628C 10000002 */  b           .Li1_80196298
/* E02FD0 80196290 00002025 */   or         $a0, $zero, $zero
/* E02FD4 80196294 00402025 */  or          $a0, $v0, $zero
.Li1_80196298:
/* E02FD8 80196298 8FB800F4 */  lw          $t8, 0xF4($sp)
/* E02FDC 8019629C 26D60080 */  addiu       $s6, $s6, 0x80
/* E02FE0 801962A0 0284A021 */  addu        $s4, $s4, $a0
/* E02FE4 801962A4 270B0001 */  addiu       $t3, $t8, 0x1
/* E02FE8 801962A8 2D610011 */  sltiu       $at, $t3, 0x11
/* E02FEC 801962AC 1420FFF4 */  bnez        $at, .Li1_80196280
/* E02FF0 801962B0 AFAB00F4 */   sw         $t3, 0xF4($sp)
/* E02FF4 801962B4 8FA20260 */  lw          $v0, 0x260($sp)
/* E02FF8 801962B8 00744021 */  addu        $t0, $v1, $s4
/* E02FFC 801962BC 3C01437F */  lui         $at, (0x437F0000 >> 16)
/* E03000 801962C0 A44800C4 */  sh          $t0, 0xC4($v0)
/* E03004 801962C4 844900C4 */  lh          $t1, 0xC4($v0)
/* E03008 801962C8 844C00C2 */  lh          $t4, 0xC2($v0)
/* E0300C 801962CC 44818000 */  mtc1        $at, $ft4
/* E03010 801962D0 44895000 */  mtc1        $t1, $ft3
/* E03014 801962D4 448C3000 */  mtc1        $t4, $ft1
/* E03018 801962D8 3C018017 */  lui         $at, %hi(gBossHealthBar)
/* E0301C 801962DC 46805120 */  cvt.s.w     $ft0, $ft3
/* E03020 801962E0 46803220 */  cvt.s.w     $ft2, $ft1
/* E03024 801962E4 46048482 */  mul.s       $ft5, $ft4, $ft0
/* E03028 801962E8 46089283 */  div.s       $ft3, $ft5, $ft2
/* E0302C 801962EC 4600540D */  trunc.w.s   $ft4, $ft3
/* E03030 801962F0 440A8000 */  mfc1        $t2, $ft4
/* E03034 801962F4 00000000 */  nop
/* E03038 801962F8 AC2A7848 */  sw          $t2, %lo(gBossHealthBar)($at)
/* E0303C 801962FC 8459004E */  lh          $t9, 0x4E($v0)
/* E03040 80196300 272FFFFF */  addiu       $t7, $t9, -0x1
/* E03044 80196304 2DE10005 */  sltiu       $at, $t7, 0x5
/* E03048 80196308 10200040 */  beqz        $at, .Li1_8019640C
/* E0304C 8019630C 000F7880 */   sll        $t7, $t7, 2
/* E03050 80196310 3C01801A */  lui         $at, %hi(jtbl_i1_8019B3D8)
/* E03054 80196314 002F0821 */  addu        $at, $at, $t7
/* E03058 80196318 8C2FB3D8 */  lw          $t7, %lo(jtbl_i1_8019B3D8)($at)
/* E0305C 8019631C 01E00008 */  jr          $t7
/* E03060 80196320 00000000 */   nop
.Li1_80196324:
/* E03064 80196324 C44400F0 */  lwc1        $ft0, 0xF0($v0)
/* E03068 80196328 3C01801A */  lui         $at, %hi(D_i1_8019B3EC)
/* E0306C 8019632C 8C450114 */  lw          $a1, 0x114($v0)
/* E03070 80196330 461C2180 */  add.s       $ft1, $ft0, $fs4
/* E03074 80196334 24440118 */  addiu       $a0, $v0, 0x118
/* E03078 80196338 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* E0307C 8019633C 3C074080 */  lui         $a3, (0x40800000 >> 16)
/* E03080 80196340 E44600F0 */  swc1        $ft1, 0xF0($v0)
/* E03084 80196344 C432B3EC */  lwc1        $ft5, %lo(D_i1_8019B3EC)($at)
/* E03088 80196348 0C026F0B */  jal         Math_SmoothStepToF
/* E0308C 8019634C E7B20010 */   swc1       $ft5, 0x10($sp)
/* E03090 80196350 1000002E */  b           .Li1_8019640C
/* E03094 80196354 8FA20260 */   lw         $v0, 0x260($sp)
.Li1_80196358:
/* E03098 80196358 84580060 */  lh          $t8, 0x60($v0)
/* E0309C 8019635C 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E030A0 80196360 44818000 */  mtc1        $at, $ft4
/* E030A4 80196364 44984000 */  mtc1        $t8, $ft2
/* E030A8 80196368 3C014348 */  lui         $at, (0x43480000 >> 16)
/* E030AC 8019636C 44813000 */  mtc1        $at, $ft1
/* E030B0 80196370 468042A0 */  cvt.s.w     $ft3, $ft2
/* E030B4 80196374 C45200F8 */  lwc1        $ft5, 0xF8($v0)
/* E030B8 80196378 46105100 */  add.s       $ft0, $ft3, $ft4
/* E030BC 8019637C 44808000 */  mtc1        $zero, $ft4
/* E030C0 80196380 46043003 */  div.s       $fv0, $ft1, $ft0
/* E030C4 80196384 46009201 */  sub.s       $ft2, $ft5, $fv0
/* E030C8 80196388 E44000FC */  swc1        $fv0, 0xFC($v0)
/* E030CC 8019638C E44800F8 */  swc1        $ft2, 0xF8($v0)
/* E030D0 80196390 C44A00F8 */  lwc1        $ft3, 0xF8($v0)
/* E030D4 80196394 4610503C */  c.lt.s      $ft3, $ft4
/* E030D8 80196398 00000000 */  nop
/* E030DC 8019639C 4500001B */  bc1f        .Li1_8019640C
/* E030E0 801963A0 3C0141B0 */   lui        $at, (0x41B00000 >> 16)
/* E030E4 801963A4 44813000 */  mtc1        $at, $ft1
/* E030E8 801963A8 10000018 */  b           .Li1_8019640C
/* E030EC 801963AC E44600F8 */   swc1       $ft1, 0xF8($v0)
.Li1_801963B0:
/* E030F0 801963B0 844B0060 */  lh          $t3, 0x60($v0)
/* E030F4 801963B4 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E030F8 801963B8 44814000 */  mtc1        $at, $ft2
/* E030FC 801963BC 448B2000 */  mtc1        $t3, $ft0
/* E03100 801963C0 3C014348 */  lui         $at, (0x43480000 >> 16)
/* E03104 801963C4 44818000 */  mtc1        $at, $ft4
/* E03108 801963C8 46802020 */  cvt.s.w     $fv0, $ft0
/* E0310C 801963CC C44600F8 */  lwc1        $ft1, 0xF8($v0)
/* E03110 801963D0 46000480 */  add.s       $ft5, $fv0, $fv0
/* E03114 801963D4 46089280 */  add.s       $ft3, $ft5, $ft2
/* E03118 801963D8 44809000 */  mtc1        $zero, $ft5
/* E0311C 801963DC 460A8083 */  div.s       $fv1, $ft4, $ft3
/* E03120 801963E0 46023101 */  sub.s       $ft0, $ft1, $fv1
/* E03124 801963E4 E44200FC */  swc1        $fv1, 0xFC($v0)
/* E03128 801963E8 E44400F8 */  swc1        $ft0, 0xF8($v0)
/* E0312C 801963EC C44800F8 */  lwc1        $ft2, 0xF8($v0)
/* E03130 801963F0 4612403E */  c.le.s      $ft2, $ft5
/* E03134 801963F4 00000000 */  nop
/* E03138 801963F8 45000004 */  bc1f        .Li1_8019640C
/* E0313C 801963FC 3C0141B0 */   lui        $at, (0x41B00000 >> 16)
/* E03140 80196400 44818000 */  mtc1        $at, $ft4
/* E03144 80196404 00000000 */  nop
/* E03148 80196408 E45000F8 */  swc1        $ft4, 0xF8($v0)
.Li1_8019640C:
/* E0314C 8019640C 944D0094 */  lhu         $t5, 0x94($v0)
/* E03150 80196410 2DA10007 */  sltiu       $at, $t5, 0x7
/* E03154 80196414 10200133 */  beqz        $at, .Li1_801968E4
/* E03158 80196418 000D6880 */   sll        $t5, $t5, 2
/* E0315C 8019641C 3C01801A */  lui         $at, %hi(jtbl_i1_8019B3F0)
/* E03160 80196420 002D0821 */  addu        $at, $at, $t5
/* E03164 80196424 8C2DB3F0 */  lw          $t5, %lo(jtbl_i1_8019B3F0)($at)
/* E03168 80196428 01A00008 */  jr          $t5
/* E0316C 8019642C 00000000 */   nop
.Li1_80196430:
/* E03170 80196430 3C178018 */  lui         $s7, %hi(gPlayer)
/* E03174 80196434 8FA30260 */  lw          $v1, 0x260($sp)
/* E03178 80196438 26F78280 */  addiu       $s7, $s7, %lo(gPlayer)
/* E0317C 8019643C 8EE20000 */  lw          $v0, 0x0($s7)
/* E03180 80196440 846800A6 */  lh          $t0, 0xA6($v1)
/* E03184 80196444 C46A00E0 */  lwc1        $ft3, 0xE0($v1)
/* E03188 80196448 C4400138 */  lwc1        $fv0, 0x138($v0)
/* E0318C 8019644C 15000048 */  bnez        $t0, .Li1_80196570
/* E03190 80196450 46005500 */   add.s      $fs0, $ft3, $fv0
/* E03194 80196454 C462000C */  lwc1        $fv1, 0xC($v1)
/* E03198 80196458 4602A03E */  c.le.s      $fs0, $fv1
/* E0319C 8019645C 00000000 */  nop
/* E031A0 80196460 4500001C */  bc1f        .Li1_801964D4
/* E031A4 80196464 3C014348 */   lui        $at, (0x43480000 >> 16)
/* E031A8 80196468 44813000 */  mtc1        $at, $ft1
/* E031AC 8019646C 00000000 */  nop
/* E031B0 80196470 46060101 */  sub.s       $ft0, $fv0, $ft1
/* E031B4 80196474 4602203C */  c.lt.s      $ft0, $fv1
/* E031B8 80196478 00000000 */  nop
/* E031BC 8019647C 4500000A */  bc1f        .Li1_801964A8
/* E031C0 80196480 3C01801A */   lui        $at, %hi(D_i1_8019B40C)
/* E031C4 80196484 C432B40C */  lwc1        $ft5, %lo(D_i1_8019B40C)($at)
/* E031C8 80196488 4405A000 */  mfc1        $a1, $fs0
/* E031CC 8019648C 4406B000 */  mfc1        $a2, $fs1
/* E031D0 80196490 2464000C */  addiu       $a0, $v1, 0xC
/* E031D4 80196494 3C07420C */  lui         $a3, (0x420C0000 >> 16)
/* E031D8 80196498 0C026F0B */  jal         Math_SmoothStepToF
/* E031DC 8019649C E7B20010 */   swc1       $ft5, 0x10($sp)
/* E031E0 801964A0 10000016 */  b           .Li1_801964FC
/* E031E4 801964A4 46000606 */   mov.s      $fs2, $fv0
.Li1_801964A8:
/* E031E8 801964A8 3C01801A */  lui         $at, %hi(D_i1_8019B410)
/* E031EC 801964AC C428B410 */  lwc1        $ft2, %lo(D_i1_8019B410)($at)
/* E031F0 801964B0 4405A000 */  mfc1        $a1, $fs0
/* E031F4 801964B4 3C063ECC */  lui         $a2, (0x3ECCCCCD >> 16)
/* E031F8 801964B8 34C6CCCD */  ori         $a2, $a2, (0x3ECCCCCD & 0xFFFF)
/* E031FC 801964BC 2464000C */  addiu       $a0, $v1, 0xC
/* E03200 801964C0 3C074120 */  lui         $a3, (0x41200000 >> 16)
/* E03204 801964C4 0C026F0B */  jal         Math_SmoothStepToF
/* E03208 801964C8 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E0320C 801964CC 1000000B */  b           .Li1_801964FC
/* E03210 801964D0 46000606 */   mov.s      $fs2, $fv0
.Li1_801964D4:
/* E03214 801964D4 3C01801A */  lui         $at, %hi(D_i1_8019B414)
/* E03218 801964D8 C430B414 */  lwc1        $ft4, %lo(D_i1_8019B414)($at)
/* E0321C 801964DC 4405A000 */  mfc1        $a1, $fs0
/* E03220 801964E0 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* E03224 801964E4 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* E03228 801964E8 2464000C */  addiu       $a0, $v1, 0xC
/* E0322C 801964EC 3C0741C8 */  lui         $a3, (0x41C80000 >> 16)
/* E03230 801964F0 0C026F0B */  jal         Math_SmoothStepToF
/* E03234 801964F4 E7B00010 */   swc1       $ft4, 0x10($sp)
/* E03238 801964F8 46000606 */  mov.s       $fs2, $fv0
.Li1_801964FC:
/* E0323C 801964FC 3C01801A */  lui         $at, %hi(D_i1_8019B418)
/* E03240 80196500 C42CB418 */  lwc1        $fa0, %lo(D_i1_8019B418)($at)
/* E03244 80196504 3C01C220 */  lui         $at, (0xC2200000 >> 16)
/* E03248 80196508 44817000 */  mtc1        $at, $fa1
/* E0324C 8019650C 8FA20260 */  lw          $v0, 0x260($sp)
/* E03250 80196510 46007280 */  add.s       $ft3, $fa1, $fv0
/* E03254 80196514 460E5083 */  div.s       $fv1, $ft3, $fa1
/* E03258 80196518 460C103C */  c.lt.s      $fv1, $fa0
/* E0325C 8019651C E4420104 */  swc1        $fv1, 0x104($v0)
/* E03260 80196520 45020003 */  bc1fl       .Li1_80196530
/* E03264 80196524 3C014000 */   lui        $at, (0x40000000 >> 16)
/* E03268 80196528 E44C0104 */  swc1        $fa0, 0x104($v0)
/* E0326C 8019652C 3C014000 */  lui         $at, (0x40000000 >> 16)
.Li1_80196530:
/* E03270 80196530 44813000 */  mtc1        $at, $ft1
/* E03274 80196534 4600C005 */  abs.s       $fv0, $fs2
/* E03278 80196538 4606003E */  c.le.s      $fv0, $ft1
/* E0327C 8019653C 00000000 */  nop
/* E03280 80196540 45000009 */  bc1f        .Li1_80196568
/* E03284 80196544 00000000 */   nop
/* E03288 80196548 844C00A2 */  lh          $t4, 0xA2($v0)
/* E0328C 8019654C 24090001 */  addiu       $t1, $zero, 0x1
/* E03290 80196550 3C0A801A */  lui         $t2, %hi(D_i1_8019A04C + 0x2)
/* E03294 80196554 000C7080 */  sll         $t6, $t4, 2
/* E03298 80196558 A44900A6 */  sh          $t1, 0xA6($v0)
/* E0329C 8019655C 014E5021 */  addu        $t2, $t2, $t6
/* E032A0 80196560 854AA04E */  lh          $t2, %lo(D_i1_8019A04C + 0x2)($t2)
/* E032A4 80196564 A44A00A4 */  sh          $t2, 0xA4($v0)
.Li1_80196568:
/* E032A8 80196568 10000030 */  b           .Li1_8019662C
/* E032AC 8019656C 8FA30260 */   lw         $v1, 0x260($sp)
.Li1_80196570:
/* E032B0 80196570 C444007C */  lwc1        $ft0, 0x7C($v0)
/* E032B4 80196574 C472000C */  lwc1        $ft5, 0xC($v1)
/* E032B8 80196578 3C0143FA */  lui         $at, (0x43FA0000 >> 16)
/* E032BC 8019657C 44814000 */  mtc1        $at, $ft2
/* E032C0 80196580 46122001 */  sub.s       $fv0, $ft0, $ft5
/* E032C4 80196584 4608003C */  c.lt.s      $fv0, $ft2
/* E032C8 80196588 00000000 */  nop
/* E032CC 8019658C 45010007 */  bc1t        .Li1_801965AC
/* E032D0 80196590 3C0145FA */   lui        $at, (0x45FA0000 >> 16)
/* E032D4 80196594 44818000 */  mtc1        $at, $ft4
/* E032D8 80196598 00000000 */  nop
/* E032DC 8019659C 4600803C */  c.lt.s      $ft4, $fv0
/* E032E0 801965A0 00000000 */  nop
/* E032E4 801965A4 45020003 */  bc1fl       .Li1_801965B4
/* E032E8 801965A8 846200A4 */   lh         $v0, 0xA4($v1)
.Li1_801965AC:
/* E032EC 801965AC A46000A4 */  sh          $zero, 0xA4($v1)
/* E032F0 801965B0 846200A4 */  lh          $v0, 0xA4($v1)
.Li1_801965B4:
/* E032F4 801965B4 5C40001A */  bgtzl       $v0, .Li1_80196620
/* E032F8 801965B8 3C01C220 */   lui        $at, (0xC2200000 >> 16)
/* E032FC 801965BC 847900A2 */  lh          $t9, 0xA2($v1)
/* E03300 801965C0 A46000A6 */  sh          $zero, 0xA6($v1)
/* E03304 801965C4 272F0001 */  addiu       $t7, $t9, 0x1
/* E03308 801965C8 A46F00A2 */  sh          $t7, 0xA2($v1)
/* E0330C 801965CC 846400A2 */  lh          $a0, 0xA2($v1)
/* E03310 801965D0 2C810003 */  sltiu       $at, $a0, 0x3
/* E03314 801965D4 14200003 */  bnez        $at, .Li1_801965E4
/* E03318 801965D8 00000000 */   nop
/* E0331C 801965DC A46000A2 */  sh          $zero, 0xA2($v1)
/* E03320 801965E0 846400A2 */  lh          $a0, 0xA2($v1)
.Li1_801965E4:
/* E03324 801965E4 3C0B801A */  lui         $t3, %hi(D_i1_8019A04C)
/* E03328 801965E8 256BA04C */  addiu       $t3, $t3, %lo(D_i1_8019A04C)
/* E0332C 801965EC 0004C080 */  sll         $t8, $a0, 2
/* E03330 801965F0 030B1021 */  addu        $v0, $t8, $t3
/* E03334 801965F4 844D0000 */  lh          $t5, 0x0($v0)
/* E03338 801965F8 3C01C220 */  lui         $at, (0xC2200000 >> 16)
/* E0333C 801965FC 44817000 */  mtc1        $at, $fa1
/* E03340 80196600 448D5000 */  mtc1        $t5, $ft3
/* E03344 80196604 00000000 */  nop
/* E03348 80196608 468051A0 */  cvt.s.w     $ft1, $ft3
/* E0334C 8019660C E46600E0 */  swc1        $ft1, 0xE0($v1)
/* E03350 80196610 84480002 */  lh          $t0, 0x2($v0)
/* E03354 80196614 10000005 */  b           .Li1_8019662C
/* E03358 80196618 A46800A4 */   sh         $t0, 0xA4($v1)
/* E0335C 8019661C 3C01C220 */  lui         $at, (0xC2200000 >> 16)
.Li1_80196620:
/* E03360 80196620 2449FFFF */  addiu       $t1, $v0, -0x1
/* E03364 80196624 44817000 */  mtc1        $at, $fa1
/* E03368 80196628 A46900A4 */  sh          $t1, 0xA4($v1)
.Li1_8019662C:
/* E0336C 8019662C 100000AD */  b           .Li1_801968E4
/* E03370 80196630 E46E0074 */   swc1       $fa1, 0x74($v1)
.Li1_80196634:
/* E03374 80196634 3C01C120 */  lui         $at, (0xC1200000 >> 16)
/* E03378 80196638 44812000 */  mtc1        $at, $ft0
/* E0337C 8019663C C4520070 */  lwc1        $ft5, 0x70($v0)
/* E03380 80196640 4604903E */  c.le.s      $ft5, $ft0
/* E03384 80196644 00000000 */  nop
/* E03388 80196648 45020007 */  bc1fl       .Li1_80196668
/* E0338C 8019664C 44800000 */   mtc1       $zero, $fv0
/* E03390 80196650 844C0092 */  lh          $t4, 0x92($v0)
/* E03394 80196654 24010005 */  addiu       $at, $zero, 0x5
/* E03398 80196658 11810002 */  beq         $t4, $at, .Li1_80196664
/* E0339C 8019665C 240E0001 */   addiu      $t6, $zero, 0x1
/* E033A0 80196660 AFAE00E8 */  sw          $t6, 0xE8($sp)
.Li1_80196664:
/* E033A4 80196664 44800000 */  mtc1        $zero, $fv0
.Li1_80196668:
/* E033A8 80196668 C4480008 */  lwc1        $ft2, 0x8($v0)
/* E033AC 8019666C 4600403C */  c.lt.s      $ft2, $fv0
/* E033B0 80196670 00000000 */  nop
/* E033B4 80196674 45000025 */  bc1f        .Li1_8019670C
/* E033B8 80196678 00000000 */   nop
/* E033BC 8019667C 8FA20260 */  lw          $v0, 0x260($sp)
/* E033C0 80196680 3C118018 */  lui         $s1, %hi(D_80178480)
/* E033C4 80196684 240A0002 */  addiu       $t2, $zero, 0x2
/* E033C8 80196688 24190010 */  addiu       $t9, $zero, 0x10
/* E033CC 8019668C 26318480 */  addiu       $s1, $s1, %lo(D_80178480)
/* E033D0 80196690 24140028 */  addiu       $s4, $zero, 0x28
/* E033D4 80196694 E4400008 */  swc1        $fv0, 0x8($v0)
/* E033D8 80196698 E4400070 */  swc1        $fv0, 0x70($v0)
/* E033DC 8019669C E4400084 */  swc1        $fv0, 0x84($v0)
/* E033E0 801966A0 A44A0094 */  sh          $t2, 0x94($v0)
/* E033E4 801966A4 A459009C */  sh          $t9, 0x9C($v0)
/* E033E8 801966A8 AE340000 */  sw          $s4, 0x0($s1)
/* E033EC 801966AC 0C0013AC */  jal         Rand_ZeroOne
/* E033F0 801966B0 245203FC */   addiu      $s2, $v0, 0x3FC
/* E033F4 801966B4 461C0402 */  mul.s       $ft4, $fv0, $fs4
/* E033F8 801966B8 8FAB0260 */  lw          $t3, 0x260($sp)
/* E033FC 801966BC 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E03400 801966C0 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E03404 801966C4 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E03408 801966C8 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E0340C 801966CC 3C042903 */  lui         $a0, (0x29034082 >> 16)
/* E03410 801966D0 4600828D */  trunc.w.s   $ft3, $ft4
/* E03414 801966D4 34844082 */  ori         $a0, $a0, (0x29034082 & 0xFFFF)
/* E03418 801966D8 02402825 */  or          $a1, $s2, $zero
/* E0341C 801966DC 24060004 */  addiu       $a2, $zero, 0x4
/* E03420 801966E0 44185000 */  mfc1        $t8, $ft3
/* E03424 801966E4 00000000 */  nop
/* E03428 801966E8 A57800B6 */  sh          $t8, 0xB6($t3)
/* E0342C 801966EC AFAD0014 */  sw          $t5, 0x14($sp)
/* E03430 801966F0 0C006486 */  jal         Audio_PlaySfx
/* E03434 801966F4 AFA70010 */   sw         $a3, 0x10($sp)
/* E03438 801966F8 8FAC0260 */  lw          $t4, 0x260($sp)
/* E0343C 801966FC 24080003 */  addiu       $t0, $zero, 0x3
/* E03440 80196700 AFA800B8 */  sw          $t0, 0xB8($sp)
/* E03444 80196704 24090005 */  addiu       $t1, $zero, 0x5
/* E03448 80196708 A58900C0 */  sh          $t1, 0xC0($t4)
.Li1_8019670C:
/* E0344C 8019670C 10000076 */  b           .Li1_801968E8
/* E03450 80196710 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_80196714:
/* E03454 80196714 3C01801A */  lui         $at, %hi(D_i1_8019B41C)
/* E03458 80196718 C434B41C */  lwc1        $fs0, %lo(D_i1_8019B41C)($at)
/* E0345C 8019671C C4460074 */  lwc1        $ft1, 0x74($v0)
/* E03460 80196720 46143102 */  mul.s       $ft0, $ft1, $fs0
/* E03464 80196724 1000006F */  b           .Li1_801968E4
/* E03468 80196728 E4440074 */   swc1       $ft0, 0x74($v0)
.Li1_8019672C:
/* E0346C 8019672C 3C178018 */  lui         $s7, %hi(gPlayer)
/* E03470 80196730 26F78280 */  addiu       $s7, $s7, %lo(gPlayer)
/* E03474 80196734 8FA20260 */  lw          $v0, 0x260($sp)
/* E03478 80196738 8EEE0000 */  lw          $t6, 0x0($s7)
/* E0347C 8019673C C45200E0 */  lwc1        $ft5, 0xE0($v0)
/* E03480 80196740 C5C8007C */  lwc1        $ft2, 0x7C($t6)
/* E03484 80196744 C450000C */  lwc1        $ft4, 0xC($v0)
/* E03488 80196748 46089500 */  add.s       $fs0, $ft5, $ft2
/* E0348C 8019674C 4610A03E */  c.le.s      $fs0, $ft4
/* E03490 80196750 00000000 */  nop
/* E03494 80196754 4500000B */  bc1f        .Li1_80196784
/* E03498 80196758 3C01801A */   lui        $at, %hi(D_i1_8019B420)
/* E0349C 8019675C C42AB420 */  lwc1        $ft3, %lo(D_i1_8019B420)($at)
/* E034A0 80196760 4405A000 */  mfc1        $a1, $fs0
/* E034A4 80196764 3C063ECC */  lui         $a2, (0x3ECCCCCD >> 16)
/* E034A8 80196768 4407D000 */  mfc1        $a3, $fs3
/* E034AC 8019676C 34C6CCCD */  ori         $a2, $a2, (0x3ECCCCCD & 0xFFFF)
/* E034B0 80196770 2444000C */  addiu       $a0, $v0, 0xC
/* E034B4 80196774 0C026F0B */  jal         Math_SmoothStepToF
/* E034B8 80196778 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* E034BC 8019677C 1000000B */  b           .Li1_801967AC
/* E034C0 80196780 8FA30260 */   lw         $v1, 0x260($sp)
.Li1_80196784:
/* E034C4 80196784 3C01801A */  lui         $at, %hi(D_i1_8019B424)
/* E034C8 80196788 C426B424 */  lwc1        $ft1, %lo(D_i1_8019B424)($at)
/* E034CC 8019678C 4405A000 */  mfc1        $a1, $fs0
/* E034D0 80196790 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* E034D4 80196794 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* E034D8 80196798 2444000C */  addiu       $a0, $v0, 0xC
/* E034DC 8019679C 3C0741F0 */  lui         $a3, (0x41F00000 >> 16)
/* E034E0 801967A0 0C026F0B */  jal         Math_SmoothStepToF
/* E034E4 801967A4 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E034E8 801967A8 8FA30260 */  lw          $v1, 0x260($sp)
.Li1_801967AC:
/* E034EC 801967AC 846A004E */  lh          $t2, 0x4E($v1)
/* E034F0 801967B0 29410004 */  slti        $at, $t2, 0x4
/* E034F4 801967B4 1020000C */  beqz        $at, .Li1_801967E8
/* E034F8 801967B8 3C01801A */   lui        $at, %hi(D_i1_8019B428)
/* E034FC 801967BC C42CB428 */  lwc1        $fa0, %lo(D_i1_8019B428)($at)
/* E03500 801967C0 3C01C220 */  lui         $at, (0xC2200000 >> 16)
/* E03504 801967C4 44817000 */  mtc1        $at, $fa1
/* E03508 801967C8 00000000 */  nop
/* E0350C 801967CC 46007100 */  add.s       $ft0, $fa1, $fv0
/* E03510 801967D0 460E2083 */  div.s       $fv1, $ft0, $fa1
/* E03514 801967D4 460C103C */  c.lt.s      $fv1, $fa0
/* E03518 801967D8 E4620104 */  swc1        $fv1, 0x104($v1)
/* E0351C 801967DC 45020003 */  bc1fl       .Li1_801967EC
/* E03520 801967E0 8EF90000 */   lw         $t9, 0x0($s7)
/* E03524 801967E4 E46C0104 */  swc1        $fa0, 0x104($v1)
.Li1_801967E8:
/* E03528 801967E8 8EF90000 */  lw          $t9, 0x0($s7)
.Li1_801967EC:
/* E0352C 801967EC C47200E0 */  lwc1        $ft5, 0xE0($v1)
/* E03530 801967F0 C46A000C */  lwc1        $ft3, 0xC($v1)
/* E03534 801967F4 C7280138 */  lwc1        $ft2, 0x138($t9)
/* E03538 801967F8 3C01C220 */  lui         $at, (0xC2200000 >> 16)
/* E0353C 801967FC 44817000 */  mtc1        $at, $fa1
/* E03540 80196800 46089400 */  add.s       $ft4, $ft5, $ft2
/* E03544 80196804 3C01428C */  lui         $at, (0x428C0000 >> 16)
/* E03548 80196808 44813000 */  mtc1        $at, $ft1
/* E0354C 8019680C 460A8501 */  sub.s       $fs0, $ft4, $ft3
/* E03550 80196810 4600A005 */  abs.s       $fv0, $fs0
/* E03554 80196814 4606003E */  c.le.s      $fv0, $ft1
/* E03558 80196818 00000000 */  nop
/* E0355C 8019681C 4500001F */  bc1f        .Li1_8019689C
/* E03560 80196820 00000000 */   nop
/* E03564 80196824 846F004E */  lh          $t7, 0x4E($v1)
/* E03568 80196828 24010003 */  addiu       $at, $zero, 0x3
/* E0356C 8019682C 15E1001B */  bne         $t7, $at, .Li1_8019689C
/* E03570 80196830 00000000 */   nop
/* E03574 80196834 3C02801A */  lui         $v0, %hi(D_i1_8019AD2C + 0x20)
/* E03578 80196838 8C42AD4C */  lw          $v0, %lo(D_i1_8019AD2C + 0x20)($v0)
/* E0357C 8019683C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E03580 80196840 84710090 */  lh          $s1, 0x90($v1)
/* E03584 80196844 84520000 */  lh          $s2, 0x0($v0)
/* E03588 80196848 44802000 */  mtc1        $zero, $ft0
/* E0358C 8019684C 44809000 */  mtc1        $zero, $ft5
/* E03590 80196850 44814000 */  mtc1        $at, $ft2
/* E03594 80196854 24180002 */  addiu       $t8, $zero, 0x2
/* E03598 80196858 240B0004 */  addiu       $t3, $zero, 0x4
/* E0359C 8019685C 240D0004 */  addiu       $t5, $zero, 0x4
/* E035A0 80196860 24080005 */  addiu       $t0, $zero, 0x5
/* E035A4 80196864 24090003 */  addiu       $t1, $zero, 0x3
/* E035A8 80196868 240C0096 */  addiu       $t4, $zero, 0x96
/* E035AC 8019686C A4780096 */  sh          $t8, 0x96($v1)
/* E035B0 80196870 A46B009A */  sh          $t3, 0x9A($v1)
/* E035B4 80196874 A46D008A */  sh          $t5, 0x8A($v1)
/* E035B8 80196878 A460008C */  sh          $zero, 0x8C($v1)
/* E035BC 8019687C A4680094 */  sh          $t0, 0x94($v1)
/* E035C0 80196880 A4690050 */  sh          $t1, 0x50($v1)
/* E035C4 80196884 A46C0052 */  sh          $t4, 0x52($v1)
/* E035C8 80196888 A4710090 */  sh          $s1, 0x90($v1)
/* E035CC 8019688C A4720092 */  sh          $s2, 0x92($v1)
/* E035D0 80196890 E46400D8 */  swc1        $ft0, 0xD8($v1)
/* E035D4 80196894 E4720100 */  swc1        $ft5, 0x100($v1)
/* E035D8 80196898 E4680104 */  swc1        $ft2, 0x104($v1)
.Li1_8019689C:
/* E035DC 8019689C 10000011 */  b           .Li1_801968E4
/* E035E0 801968A0 E46E0074 */   swc1       $fa1, 0x74($v1)
.Li1_801968A4:
/* E035E4 801968A4 3C178018 */  lui         $s7, %hi(gPlayer)
/* E035E8 801968A8 26F78280 */  addiu       $s7, $s7, %lo(gPlayer)
/* E035EC 801968AC 8EEE0000 */  lw          $t6, 0x0($s7)
/* E035F0 801968B0 8FAA0260 */  lw          $t2, 0x260($sp)
/* E035F4 801968B4 C5D000C8 */  lwc1        $ft4, 0xC8($t6)
/* E035F8 801968B8 1000000A */  b           .Li1_801968E4
/* E035FC 801968BC E5500074 */   swc1       $ft4, 0x74($t2)
.Li1_801968C0:
/* E03600 801968C0 3C01801A */  lui         $at, %hi(D_i1_8019B42C)
/* E03604 801968C4 C42AB42C */  lwc1        $ft3, %lo(D_i1_8019B42C)($at)
/* E03608 801968C8 4406B000 */  mfc1        $a2, $fs1
/* E0360C 801968CC 3C073E99 */  lui         $a3, (0x3E99999A >> 16)
/* E03610 801968D0 34E7999A */  ori         $a3, $a3, (0x3E99999A & 0xFFFF)
/* E03614 801968D4 24440074 */  addiu       $a0, $v0, 0x74
/* E03618 801968D8 24050000 */  addiu       $a1, $zero, 0x0
/* E0361C 801968DC 0C026F0B */  jal         Math_SmoothStepToF
/* E03620 801968E0 E7AA0010 */   swc1       $ft3, 0x10($sp)
.Li1_801968E4:
/* E03624 801968E4 8FA70260 */  lw          $a3, 0x260($sp)
.Li1_801968E8:
/* E03628 801968E8 3C01801A */  lui         $at, %hi(D_i1_8019B430)
/* E0362C 801968EC C434B430 */  lwc1        $fs0, %lo(D_i1_8019B430)($at)
/* E03630 801968F0 84F00092 */  lh          $s0, 0x92($a3)
/* E03634 801968F4 3C118018 */  lui         $s1, %hi(D_80178480)
/* E03638 801968F8 3C178018 */  lui         $s7, %hi(gPlayer)
/* E0363C 801968FC 2E010009 */  sltiu       $at, $s0, 0x9
/* E03640 80196900 26F78280 */  addiu       $s7, $s7, %lo(gPlayer)
/* E03644 80196904 26318480 */  addiu       $s1, $s1, %lo(D_80178480)
/* E03648 80196908 10200013 */  beqz        $at, .Li1_80196958
/* E0364C 8019690C 24140028 */   addiu      $s4, $zero, 0x28
/* E03650 80196910 0010C880 */  sll         $t9, $s0, 2
/* E03654 80196914 3C01801A */  lui         $at, %hi(jtbl_i1_8019B434)
/* E03658 80196918 00390821 */  addu        $at, $at, $t9
/* E0365C 8019691C 8C39B434 */  lw          $t9, %lo(jtbl_i1_8019B434)($at)
/* E03660 80196920 03200008 */  jr          $t9
/* E03664 80196924 00000000 */   nop
.Li1_80196928:
/* E03668 80196928 C4E60100 */  lwc1        $ft1, 0x100($a3)
/* E0366C 8019692C 3C1E801A */  lui         $fp, %hi(D_i1_8019ACD4)
/* E03670 80196930 27DEACD4 */  addiu       $fp, $fp, %lo(D_i1_8019ACD4)
/* E03674 80196934 4600310D */  trunc.w.s   $ft0, $ft1
/* E03678 80196938 00107880 */  sll         $t7, $s0, 2
/* E0367C 8019693C 03CFC021 */  addu        $t8, $fp, $t7
/* E03680 80196940 27A60118 */  addiu       $a2, $sp, 0x118
/* E03684 80196944 44052000 */  mfc1        $a1, $ft0
/* E03688 80196948 0C026A88 */  jal         Animation_GetFrameData
/* E0368C 8019694C 8F040000 */   lw         $a0, 0x0($t8)
/* E03690 80196950 8FA70260 */  lw          $a3, 0x260($sp)
/* E03694 80196954 84F00092 */  lh          $s0, 0x92($a3)
.Li1_80196958:
/* E03698 80196958 3C1E801A */  lui         $fp, %hi(D_i1_8019ACD4)
/* E0369C 8019695C 27DEACD4 */  addiu       $fp, $fp, %lo(D_i1_8019ACD4)
/* E036A0 80196960 27B30118 */  addiu       $s3, $sp, 0x118
/* E036A4 80196964 12000006 */  beqz        $s0, .Li1_80196980
/* E036A8 80196968 02002025 */   or         $a0, $s0, $zero
/* E036AC 8019696C 24010001 */  addiu       $at, $zero, 0x1
/* E036B0 80196970 10810003 */  beq         $a0, $at, .Li1_80196980
/* E036B4 80196974 24010003 */   addiu      $at, $zero, 0x3
/* E036B8 80196978 5481003E */  bnel        $a0, $at, .Li1_80196A74
/* E036BC 8019697C 2E010008 */   sltiu      $at, $s0, 0x8
.Li1_80196980:
/* E036C0 80196980 84E400BE */  lh          $a0, 0xBE($a3)
/* E036C4 80196984 10800007 */  beqz        $a0, .Li1_801969A4
/* E036C8 80196988 24010001 */   addiu      $at, $zero, 0x1
/* E036CC 8019698C 1081001F */  beq         $a0, $at, .Li1_80196A0C
/* E036D0 80196990 24010002 */   addiu      $at, $zero, 0x2
/* E036D4 80196994 50810037 */  beql        $a0, $at, .Li1_80196A74
/* E036D8 80196998 2E010008 */   sltiu      $at, $s0, 0x8
/* E036DC 8019699C 10000035 */  b           .Li1_80196A74
/* E036E0 801969A0 2E010008 */   sltiu      $at, $s0, 0x8
.Li1_801969A4:
/* E036E4 801969A4 3C014160 */  lui         $at, (0x41600000 >> 16)
/* E036E8 801969A8 44819000 */  mtc1        $at, $ft5
/* E036EC 801969AC C4E80100 */  lwc1        $ft2, 0x100($a3)
/* E036F0 801969B0 4608903C */  c.lt.s      $ft5, $ft2
/* E036F4 801969B4 00000000 */  nop
/* E036F8 801969B8 4502002E */  bc1fl       .Li1_80196A74
/* E036FC 801969BC 2E010008 */   sltiu      $at, $s0, 0x8
/* E03700 801969C0 8FA50260 */  lw          $a1, 0x260($sp)
/* E03704 801969C4 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E03708 801969C8 3C08800C */  lui         $t0, %hi(D_800C5D3C)
/* E0370C 801969CC 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E03710 801969D0 25085D3C */  addiu       $t0, $t0, %lo(D_800C5D3C)
/* E03714 801969D4 3C042903 */  lui         $a0, (0x29032080 >> 16)
/* E03718 801969D8 34842080 */  ori         $a0, $a0, (0x29032080 & 0xFFFF)
/* E0371C 801969DC AFA80014 */  sw          $t0, 0x14($sp)
/* E03720 801969E0 AFA70010 */  sw          $a3, 0x10($sp)
/* E03724 801969E4 24060004 */  addiu       $a2, $zero, 0x4
/* E03728 801969E8 0C006486 */  jal         Audio_PlaySfx
/* E0372C 801969EC 24A503FC */   addiu      $a1, $a1, 0x3FC
/* E03730 801969F0 8FA20260 */  lw          $v0, 0x260($sp)
/* E03734 801969F4 844900BE */  lh          $t1, 0xBE($v0)
/* E03738 801969F8 84500092 */  lh          $s0, 0x92($v0)
/* E0373C 801969FC 252C0001 */  addiu       $t4, $t1, 0x1
/* E03740 80196A00 A44C00BE */  sh          $t4, 0xBE($v0)
/* E03744 80196A04 1000001A */  b           .Li1_80196A70
/* E03748 80196A08 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_80196A0C:
/* E0374C 80196A0C 3C014234 */  lui         $at, (0x42340000 >> 16)
/* E03750 80196A10 44818000 */  mtc1        $at, $ft4
/* E03754 80196A14 C4EA0100 */  lwc1        $ft3, 0x100($a3)
/* E03758 80196A18 460A803C */  c.lt.s      $ft4, $ft3
/* E0375C 80196A1C 00000000 */  nop
/* E03760 80196A20 45020014 */  bc1fl       .Li1_80196A74
/* E03764 80196A24 2E010008 */   sltiu      $at, $s0, 0x8
/* E03768 80196A28 8FA50260 */  lw          $a1, 0x260($sp)
/* E0376C 80196A2C 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E03770 80196A30 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E03774 80196A34 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E03778 80196A38 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E0377C 80196A3C 3C042903 */  lui         $a0, (0x29032080 >> 16)
/* E03780 80196A40 34842080 */  ori         $a0, $a0, (0x29032080 & 0xFFFF)
/* E03784 80196A44 AFAE0014 */  sw          $t6, 0x14($sp)
/* E03788 80196A48 AFA70010 */  sw          $a3, 0x10($sp)
/* E0378C 80196A4C 24060004 */  addiu       $a2, $zero, 0x4
/* E03790 80196A50 0C006486 */  jal         Audio_PlaySfx
/* E03794 80196A54 24A503FC */   addiu      $a1, $a1, 0x3FC
/* E03798 80196A58 8FA20260 */  lw          $v0, 0x260($sp)
/* E0379C 80196A5C 844A00BE */  lh          $t2, 0xBE($v0)
/* E037A0 80196A60 84500092 */  lh          $s0, 0x92($v0)
/* E037A4 80196A64 25590001 */  addiu       $t9, $t2, 0x1
/* E037A8 80196A68 A45900BE */  sh          $t9, 0xBE($v0)
/* E037AC 80196A6C 8FA70260 */  lw          $a3, 0x260($sp)
.Li1_80196A70:
/* E037B0 80196A70 2E010008 */  sltiu       $at, $s0, 0x8
.Li1_80196A74:
/* E037B4 80196A74 10200202 */  beqz        $at, .Li1_80197280
/* E037B8 80196A78 00107880 */   sll        $t7, $s0, 2
/* E037BC 80196A7C 3C01801A */  lui         $at, %hi(jtbl_i1_8019B458)
/* E037C0 80196A80 002F0821 */  addu        $at, $at, $t7
/* E037C4 80196A84 8C2FB458 */  lw          $t7, %lo(jtbl_i1_8019B458)($at)
/* E037C8 80196A88 01E00008 */  jr          $t7
/* E037CC 80196A8C 00000000 */   nop
.Li1_80196A90:
/* E037D0 80196A90 84E20052 */  lh          $v0, 0x52($a3)
/* E037D4 80196A94 28410025 */  slti        $at, $v0, 0x25
/* E037D8 80196A98 54200024 */  bnel        $at, $zero, .Li1_80196B2C
/* E037DC 80196A9C 2841000D */   slti       $at, $v0, 0xD
/* E037E0 80196AA0 84E30050 */  lh          $v1, 0x50($a3)
/* E037E4 80196AA4 24010001 */  addiu       $at, $zero, 0x1
/* E037E8 80196AA8 14610006 */  bne         $v1, $at, .Li1_80196AC4
/* E037EC 80196AAC 00000000 */   nop
/* E037F0 80196AB0 84F8009E */  lh          $t8, 0x9E($a3)
/* E037F4 80196AB4 84E20052 */  lh          $v0, 0x52($a3)
/* E037F8 80196AB8 370B0004 */  ori         $t3, $t8, 0x4
/* E037FC 80196ABC 1000001A */  b           .Li1_80196B28
/* E03800 80196AC0 A4EB009E */   sh         $t3, 0x9E($a3)
.Li1_80196AC4:
/* E03804 80196AC4 54600019 */  bnel        $v1, $zero, .Li1_80196B2C
/* E03808 80196AC8 2841000D */   slti       $at, $v0, 0xD
/* E0380C 80196ACC 8FA20260 */  lw          $v0, 0x260($sp)
/* E03810 80196AD0 4407E000 */  mfc1        $a3, $fs4
/* E03814 80196AD4 C44600E4 */  lwc1        $ft1, 0xE4($v0)
/* E03818 80196AD8 C4440004 */  lwc1        $ft0, 0x4($v0)
/* E0381C 80196ADC 46043480 */  add.s       $ft5, $ft1, $ft0
/* E03820 80196AE0 E7B200F8 */  swc1        $ft5, 0xF8($sp)
/* E03824 80196AE4 C4500008 */  lwc1        $ft4, 0x8($v0)
/* E03828 80196AE8 C44800E8 */  lwc1        $ft2, 0xE8($v0)
/* E0382C 80196AEC C7AC00F8 */  lwc1        $fa0, 0xF8($sp)
/* E03830 80196AF0 46104280 */  add.s       $ft3, $ft2, $ft4
/* E03834 80196AF4 E7AA00FC */  swc1        $ft3, 0xFC($sp)
/* E03838 80196AF8 C444000C */  lwc1        $ft0, 0xC($v0)
/* E0383C 80196AFC C44600EC */  lwc1        $ft1, 0xEC($v0)
/* E03840 80196B00 C7AE00FC */  lwc1        $fa1, 0xFC($sp)
/* E03844 80196B04 46043480 */  add.s       $ft5, $ft1, $ft0
/* E03848 80196B08 E7B20100 */  swc1        $ft5, 0x100($sp)
/* E0384C 80196B0C 0C01F4B2 */  jal         func_8007D2C8
/* E03850 80196B10 8FA60100 */   lw         $a2, 0x100($sp)
/* E03854 80196B14 8FA30260 */  lw          $v1, 0x260($sp)
/* E03858 80196B18 240D0003 */  addiu       $t5, $zero, 0x3
/* E0385C 80196B1C A46D0050 */  sh          $t5, 0x50($v1)
/* E03860 80196B20 8FA70260 */  lw          $a3, 0x260($sp)
/* E03864 80196B24 84620052 */  lh          $v0, 0x52($v1)
.Li1_80196B28:
/* E03868 80196B28 2841000D */  slti        $at, $v0, 0xD
.Li1_80196B2C:
/* E0386C 80196B2C 1420000A */  bnez        $at, .Li1_80196B58
/* E03870 80196B30 00402025 */   or         $a0, $v0, $zero
/* E03874 80196B34 2488FFCF */  addiu       $t0, $a0, -0x31
/* E03878 80196B38 2D01004E */  sltiu       $at, $t0, 0x4E
/* E0387C 80196B3C 102001D0 */  beqz        $at, .Li1_80197280
/* E03880 80196B40 00084080 */   sll        $t0, $t0, 2
/* E03884 80196B44 3C01801A */  lui         $at, %hi(jtbl_i1_8019B478)
/* E03888 80196B48 00280821 */  addu        $at, $at, $t0
/* E0388C 80196B4C 8C28B478 */  lw          $t0, %lo(jtbl_i1_8019B478)($at)
/* E03890 80196B50 01000008 */  jr          $t0
/* E03894 80196B54 00000000 */   nop
.Li1_80196B58:
/* E03898 80196B58 2401000C */  addiu       $at, $zero, 0xC
/* E0389C 80196B5C 10810148 */  beq         $a0, $at, .Li1_80197080
/* E038A0 80196B60 00000000 */   nop
/* E038A4 80196B64 100001C7 */  b           .Li1_80197284
/* E038A8 80196B68 84E40096 */   lh         $a0, 0x96($a3)
.Li1_80196B6C:
/* E038AC 80196B6C 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E038B0 80196B70 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E038B4 80196B74 9449037C */  lhu         $t1, 0x37C($v0)
/* E038B8 80196B78 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E038BC 80196B7C 44814000 */  mtc1        $at, $ft2
/* E038C0 80196B80 352C0800 */  ori         $t4, $t1, 0x800
/* E038C4 80196B84 A44C037C */  sh          $t4, 0x37C($v0)
/* E038C8 80196B88 100001BD */  b           .Li1_80197280
/* E038CC 80196B8C E4480360 */   swc1       $ft2, 0x360($v0)
.Li1_80196B90:
/* E038D0 80196B90 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E038D4 80196B94 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E038D8 80196B98 944E037C */  lhu         $t6, 0x37C($v0)
/* E038DC 80196B9C 35CA0020 */  ori         $t2, $t6, 0x20
/* E038E0 80196BA0 100001B7 */  b           .Li1_80197280
/* E038E4 80196BA4 A44A037C */   sh         $t2, 0x37C($v0)
.Li1_80196BA8:
/* E038E8 80196BA8 8FA20260 */  lw          $v0, 0x260($sp)
/* E038EC 80196BAC 24190014 */  addiu       $t9, $zero, 0x14
/* E038F0 80196BB0 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E038F4 80196BB4 AE390000 */  sw          $t9, 0x0($s1)
/* E038F8 80196BB8 240F0007 */  addiu       $t7, $zero, 0x7
/* E038FC 80196BBC 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E03900 80196BC0 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E03904 80196BC4 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E03908 80196BC8 3C042940 */  lui         $a0, (0x29405084 >> 16)
/* E0390C 80196BCC A44F00C0 */  sh          $t7, 0xC0($v0)
/* E03910 80196BD0 AFB80014 */  sw          $t8, 0x14($sp)
/* E03914 80196BD4 AFA70010 */  sw          $a3, 0x10($sp)
/* E03918 80196BD8 34845084 */  ori         $a0, $a0, (0x29405084 & 0xFFFF)
/* E0391C 80196BDC 24060004 */  addiu       $a2, $zero, 0x4
/* E03920 80196BE0 0C006486 */  jal         Audio_PlaySfx
/* E03924 80196BE4 244503FC */   addiu      $a1, $v0, 0x3FC
/* E03928 80196BE8 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E0392C 80196BEC 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03930 80196BF0 944B017C */  lhu         $t3, 0x17C($v0)
/* E03934 80196BF4 944802FC */  lhu         $t0, 0x2FC($v0)
/* E03938 80196BF8 E45C0160 */  swc1        $fs4, 0x160($v0)
/* E0393C 80196BFC 356D0800 */  ori         $t5, $t3, 0x800
/* E03940 80196C00 35090800 */  ori         $t1, $t0, 0x800
/* E03944 80196C04 A44D017C */  sh          $t5, 0x17C($v0)
/* E03948 80196C08 A44902FC */  sh          $t1, 0x2FC($v0)
/* E0394C 80196C0C E45C02E0 */  swc1        $fs4, 0x2E0($v0)
/* E03950 80196C10 1000019B */  b           .Li1_80197280
/* E03954 80196C14 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_80196C18:
/* E03958 80196C18 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E0395C 80196C1C 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03960 80196C20 944C047C */  lhu         $t4, 0x47C($v0)
/* E03964 80196C24 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E03968 80196C28 44818000 */  mtc1        $at, $ft4
/* E0396C 80196C2C 358E0800 */  ori         $t6, $t4, 0x800
/* E03970 80196C30 A44E047C */  sh          $t6, 0x47C($v0)
/* E03974 80196C34 10000192 */  b           .Li1_80197280
/* E03978 80196C38 E4500460 */   swc1       $ft4, 0x460($v0)
.Li1_80196C3C:
/* E0397C 80196C3C 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E03980 80196C40 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03984 80196C44 944A047C */  lhu         $t2, 0x47C($v0)
/* E03988 80196C48 35590020 */  ori         $t9, $t2, 0x20
/* E0398C 80196C4C 1000018C */  b           .Li1_80197280
/* E03990 80196C50 A459047C */   sh         $t9, 0x47C($v0)
.Li1_80196C54:
/* E03994 80196C54 8FA20260 */  lw          $v0, 0x260($sp)
/* E03998 80196C58 240F001E */  addiu       $t7, $zero, 0x1E
/* E0399C 80196C5C 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E039A0 80196C60 AE2F0000 */  sw          $t7, 0x0($s1)
/* E039A4 80196C64 24180007 */  addiu       $t8, $zero, 0x7
/* E039A8 80196C68 3C0B800C */  lui         $t3, %hi(D_800C5D3C)
/* E039AC 80196C6C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E039B0 80196C70 256B5D3C */  addiu       $t3, $t3, %lo(D_800C5D3C)
/* E039B4 80196C74 3C042940 */  lui         $a0, (0x29405084 >> 16)
/* E039B8 80196C78 A45800C0 */  sh          $t8, 0xC0($v0)
/* E039BC 80196C7C AFAB0014 */  sw          $t3, 0x14($sp)
/* E039C0 80196C80 AFA70010 */  sw          $a3, 0x10($sp)
/* E039C4 80196C84 34845084 */  ori         $a0, $a0, (0x29405084 & 0xFFFF)
/* E039C8 80196C88 24060004 */  addiu       $a2, $zero, 0x4
/* E039CC 80196C8C 0C006486 */  jal         Audio_PlaySfx
/* E039D0 80196C90 244503FC */   addiu      $a1, $v0, 0x3FC
/* E039D4 80196C94 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E039D8 80196C98 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E039DC 80196C9C 944D047C */  lhu         $t5, 0x47C($v0)
/* E039E0 80196CA0 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E039E4 80196CA4 44815000 */  mtc1        $at, $ft3
/* E039E8 80196CA8 35A80800 */  ori         $t0, $t5, 0x800
/* E039EC 80196CAC A448047C */  sh          $t0, 0x47C($v0)
/* E039F0 80196CB0 8FA70260 */  lw          $a3, 0x260($sp)
/* E039F4 80196CB4 10000172 */  b           .Li1_80197280
/* E039F8 80196CB8 E44A0460 */   swc1       $ft3, 0x460($v0)
.Li1_80196CBC:
/* E039FC 80196CBC 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E03A00 80196CC0 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03A04 80196CC4 944903FC */  lhu         $t1, 0x3FC($v0)
/* E03A08 80196CC8 352C0020 */  ori         $t4, $t1, 0x20
/* E03A0C 80196CCC 1000016C */  b           .Li1_80197280
/* E03A10 80196CD0 A44C03FC */   sh         $t4, 0x3FC($v0)
.Li1_80196CD4:
/* E03A14 80196CD4 8FA20260 */  lw          $v0, 0x260($sp)
/* E03A18 80196CD8 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E03A1C 80196CDC 240E0007 */  addiu       $t6, $zero, 0x7
/* E03A20 80196CE0 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E03A24 80196CE4 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E03A28 80196CE8 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E03A2C 80196CEC 3C042940 */  lui         $a0, (0x29405084 >> 16)
/* E03A30 80196CF0 A44E00C0 */  sh          $t6, 0xC0($v0)
/* E03A34 80196CF4 AFAA0014 */  sw          $t2, 0x14($sp)
/* E03A38 80196CF8 AFA70010 */  sw          $a3, 0x10($sp)
/* E03A3C 80196CFC 34845084 */  ori         $a0, $a0, (0x29405084 & 0xFFFF)
/* E03A40 80196D00 24060004 */  addiu       $a2, $zero, 0x4
/* E03A44 80196D04 0C006486 */  jal         Audio_PlaySfx
/* E03A48 80196D08 244503FC */   addiu      $a1, $v0, 0x3FC
/* E03A4C 80196D0C 1000015C */  b           .Li1_80197280
/* E03A50 80196D10 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_80196D14:
/* E03A54 80196D14 8FA20260 */  lw          $v0, 0x260($sp)
/* E03A58 80196D18 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E03A5C 80196D1C 24190007 */  addiu       $t9, $zero, 0x7
/* E03A60 80196D20 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* E03A64 80196D24 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E03A68 80196D28 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* E03A6C 80196D2C 3C042940 */  lui         $a0, (0x29405084 >> 16)
/* E03A70 80196D30 A45900C0 */  sh          $t9, 0xC0($v0)
/* E03A74 80196D34 AFAF0014 */  sw          $t7, 0x14($sp)
/* E03A78 80196D38 AFA70010 */  sw          $a3, 0x10($sp)
/* E03A7C 80196D3C 34845084 */  ori         $a0, $a0, (0x29405084 & 0xFFFF)
/* E03A80 80196D40 24060004 */  addiu       $a2, $zero, 0x4
/* E03A84 80196D44 0C006486 */  jal         Audio_PlaySfx
/* E03A88 80196D48 244503FC */   addiu      $a1, $v0, 0x3FC
/* E03A8C 80196D4C 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E03A90 80196D50 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03A94 80196D54 944B057C */  lhu         $t3, 0x57C($v0)
/* E03A98 80196D58 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E03A9C 80196D5C 44813000 */  mtc1        $at, $ft1
/* E03AA0 80196D60 24180014 */  addiu       $t8, $zero, 0x14
/* E03AA4 80196D64 356D0800 */  ori         $t5, $t3, 0x800
/* E03AA8 80196D68 AE380000 */  sw          $t8, 0x0($s1)
/* E03AAC 80196D6C A44D057C */  sh          $t5, 0x57C($v0)
/* E03AB0 80196D70 8FA70260 */  lw          $a3, 0x260($sp)
/* E03AB4 80196D74 10000142 */  b           .Li1_80197280
/* E03AB8 80196D78 E4460560 */   swc1       $ft1, 0x560($v0)
.Li1_80196D7C:
/* E03ABC 80196D7C 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E03AC0 80196D80 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03AC4 80196D84 944804FC */  lhu         $t0, 0x4FC($v0)
/* E03AC8 80196D88 35090020 */  ori         $t1, $t0, 0x20
/* E03ACC 80196D8C 1000013C */  b           .Li1_80197280
/* E03AD0 80196D90 A44904FC */   sh         $t1, 0x4FC($v0)
.Li1_80196D94:
/* E03AD4 80196D94 8FA20260 */  lw          $v0, 0x260($sp)
/* E03AD8 80196D98 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E03ADC 80196D9C 240C0007 */  addiu       $t4, $zero, 0x7
/* E03AE0 80196DA0 3C0E800C */  lui         $t6, %hi(D_800C5D3C)
/* E03AE4 80196DA4 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E03AE8 80196DA8 25CE5D3C */  addiu       $t6, $t6, %lo(D_800C5D3C)
/* E03AEC 80196DAC 3C042940 */  lui         $a0, (0x29405084 >> 16)
/* E03AF0 80196DB0 A44C00C0 */  sh          $t4, 0xC0($v0)
/* E03AF4 80196DB4 AFAE0014 */  sw          $t6, 0x14($sp)
/* E03AF8 80196DB8 AFA70010 */  sw          $a3, 0x10($sp)
/* E03AFC 80196DBC 34845084 */  ori         $a0, $a0, (0x29405084 & 0xFFFF)
/* E03B00 80196DC0 24060004 */  addiu       $a2, $zero, 0x4
/* E03B04 80196DC4 0C006486 */  jal         Audio_PlaySfx
/* E03B08 80196DC8 244503FC */   addiu      $a1, $v0, 0x3FC
/* E03B0C 80196DCC 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E03B10 80196DD0 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03B14 80196DD4 944A05FC */  lhu         $t2, 0x5FC($v0)
/* E03B18 80196DD8 8FA70260 */  lw          $a3, 0x260($sp)
/* E03B1C 80196DDC 35590020 */  ori         $t9, $t2, 0x20
/* E03B20 80196DE0 10000127 */  b           .Li1_80197280
/* E03B24 80196DE4 A45905FC */   sh         $t9, 0x5FC($v0)
.Li1_80196DE8:
/* E03B28 80196DE8 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E03B2C 80196DEC 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03B30 80196DF0 944F017C */  lhu         $t7, 0x17C($v0)
/* E03B34 80196DF4 35F80020 */  ori         $t8, $t7, 0x20
/* E03B38 80196DF8 10000121 */  b           .Li1_80197280
/* E03B3C 80196DFC A458017C */   sh         $t8, 0x17C($v0)
.Li1_80196E00:
/* E03B40 80196E00 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E03B44 80196E04 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03B48 80196E08 944B057C */  lhu         $t3, 0x57C($v0)
/* E03B4C 80196E0C 356D0020 */  ori         $t5, $t3, 0x20
/* E03B50 80196E10 1000011B */  b           .Li1_80197280
/* E03B54 80196E14 A44D057C */   sh         $t5, 0x57C($v0)
.Li1_80196E18:
/* E03B58 80196E18 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E03B5C 80196E1C 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03B60 80196E20 944800FC */  lhu         $t0, 0xFC($v0)
/* E03B64 80196E24 35090020 */  ori         $t1, $t0, 0x20
/* E03B68 80196E28 10000115 */  b           .Li1_80197280
/* E03B6C 80196E2C A44900FC */   sh         $t1, 0xFC($v0)
.Li1_80196E30:
/* E03B70 80196E30 3C02801A */  lui         $v0, %hi(D_i1_8019B838)
/* E03B74 80196E34 2442B838 */  addiu       $v0, $v0, %lo(D_i1_8019B838)
/* E03B78 80196E38 944C007C */  lhu         $t4, 0x7C($v0)
/* E03B7C 80196E3C 358E0020 */  ori         $t6, $t4, 0x20
/* E03B80 80196E40 1000010F */  b           .Li1_80197280
/* E03B84 80196E44 A44E007C */   sh         $t6, 0x7C($v0)
.Li1_80196E48:
/* E03B88 80196E48 8FA20260 */  lw          $v0, 0x260($sp)
/* E03B8C 80196E4C 44800000 */  mtc1        $zero, $fv0
/* E03B90 80196E50 3C0141C8 */  lui         $at, (0x41C80000 >> 16)
/* E03B94 80196E54 C44400E4 */  lwc1        $ft0, 0xE4($v0)
/* E03B98 80196E58 C4520004 */  lwc1        $ft5, 0x4($v0)
/* E03B9C 80196E5C 240A0005 */  addiu       $t2, $zero, 0x5
/* E03BA0 80196E60 44070000 */  mfc1        $a3, $fv0
/* E03BA4 80196E64 46122200 */  add.s       $ft2, $ft0, $ft5
/* E03BA8 80196E68 E7A800F8 */  swc1        $ft2, 0xF8($sp)
/* E03BAC 80196E6C C44A0008 */  lwc1        $ft3, 0x8($v0)
/* E03BB0 80196E70 C45000E8 */  lwc1        $ft4, 0xE8($v0)
/* E03BB4 80196E74 C7AC00F8 */  lwc1        $fa0, 0xF8($sp)
/* E03BB8 80196E78 460A8180 */  add.s       $ft1, $ft4, $ft3
/* E03BBC 80196E7C 44818000 */  mtc1        $at, $ft4
/* E03BC0 80196E80 E7A600FC */  swc1        $ft1, 0xFC($sp)
/* E03BC4 80196E84 C452000C */  lwc1        $ft5, 0xC($v0)
/* E03BC8 80196E88 C44400EC */  lwc1        $ft0, 0xEC($v0)
/* E03BCC 80196E8C AFAA001C */  sw          $t2, 0x1C($sp)
/* E03BD0 80196E90 C7AE00FC */  lwc1        $fa1, 0xFC($sp)
/* E03BD4 80196E94 46122200 */  add.s       $ft2, $ft0, $ft5
/* E03BD8 80196E98 E7A00014 */  swc1        $fv0, 0x14($sp)
/* E03BDC 80196E9C E7A00010 */  swc1        $fv0, 0x10($sp)
/* E03BE0 80196EA0 E7B00018 */  swc1        $ft4, 0x18($sp)
/* E03BE4 80196EA4 E7A80100 */  swc1        $ft2, 0x100($sp)
/* E03BE8 80196EA8 0C01EFFF */  jal         func_8007BFFC
/* E03BEC 80196EAC 8FA60100 */   lw         $a2, 0x100($sp)
/* E03BF0 80196EB0 3C028018 */  lui         $v0, %hi(D_80178354)
/* E03BF4 80196EB4 3C038018 */  lui         $v1, %hi(D_80178350)
/* E03BF8 80196EB8 241800FF */  addiu       $t8, $zero, 0xFF
/* E03BFC 80196EBC 24638350 */  addiu       $v1, $v1, %lo(D_80178350)
/* E03C00 80196EC0 24428354 */  addiu       $v0, $v0, %lo(D_80178354)
/* E03C04 80196EC4 AC580000 */  sw          $t8, 0x0($v0)
/* E03C08 80196EC8 AC780000 */  sw          $t8, 0x0($v1)
/* E03C0C 80196ECC 3C018018 */  lui         $at, %hi(D_80178348)
/* E03C10 80196ED0 3C048018 */  lui         $a0, %hi(D_80178358)
/* E03C14 80196ED4 AC388348 */  sw          $t8, %lo(D_80178348)($at)
/* E03C18 80196ED8 24848358 */  addiu       $a0, $a0, %lo(D_80178358)
/* E03C1C 80196EDC AC980000 */  sw          $t8, 0x0($a0)
/* E03C20 80196EE0 3C018018 */  lui         $at, %hi(D_80178340)
/* E03C24 80196EE4 AC388340 */  sw          $t8, %lo(D_80178340)($at)
/* E03C28 80196EE8 100000E5 */  b           .Li1_80197280
/* E03C2C 80196EEC 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_80196EF0:
/* E03C30 80196EF0 3C028018 */  lui         $v0, %hi(D_80178354)
/* E03C34 80196EF4 3C038018 */  lui         $v1, %hi(D_80178350)
/* E03C38 80196EF8 240B00FF */  addiu       $t3, $zero, 0xFF
/* E03C3C 80196EFC 24638350 */  addiu       $v1, $v1, %lo(D_80178350)
/* E03C40 80196F00 24428354 */  addiu       $v0, $v0, %lo(D_80178354)
/* E03C44 80196F04 AC4B0000 */  sw          $t3, 0x0($v0)
/* E03C48 80196F08 AC6B0000 */  sw          $t3, 0x0($v1)
/* E03C4C 80196F0C 3C018018 */  lui         $at, %hi(D_80178348)
/* E03C50 80196F10 3C048018 */  lui         $a0, %hi(D_80178358)
/* E03C54 80196F14 AC2B8348 */  sw          $t3, %lo(D_80178348)($at)
/* E03C58 80196F18 24848358 */  addiu       $a0, $a0, %lo(D_80178358)
/* E03C5C 80196F1C 24090080 */  addiu       $t1, $zero, 0x80
/* E03C60 80196F20 AC890000 */  sw          $t1, 0x0($a0)
/* E03C64 80196F24 3C018018 */  lui         $at, %hi(D_80178340)
/* E03C68 80196F28 AC298340 */  sw          $t1, %lo(D_80178340)($at)
/* E03C6C 80196F2C 100000D4 */  b           .Li1_80197280
/* E03C70 80196F30 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_80196F34:
/* E03C74 80196F34 3C048018 */  lui         $a0, %hi(D_80178358)
/* E03C78 80196F38 24848358 */  addiu       $a0, $a0, %lo(D_80178358)
/* E03C7C 80196F3C AC800000 */  sw          $zero, 0x0($a0)
/* E03C80 80196F40 3C018018 */  lui         $at, %hi(D_80178340)
/* E03C84 80196F44 AC208340 */  sw          $zero, %lo(D_80178340)($at)
/* E03C88 80196F48 100000CD */  b           .Li1_80197280
/* E03C8C 80196F4C 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_80196F50:
/* E03C90 80196F50 240A0001 */  addiu       $t2, $zero, 0x1
/* E03C94 80196F54 A4EA00BA */  sh          $t2, 0xBA($a3)
/* E03C98 80196F58 3C03801A */  lui         $v1, %hi(D_i1_8019B838 + 0x7C)
/* E03C9C 80196F5C 9463B8B4 */  lhu         $v1, %lo(D_i1_8019B838 + 0x7C)($v1)
/* E03CA0 80196F60 30790001 */  andi        $t9, $v1, 0x1
/* E03CA4 80196F64 17200003 */  bnez        $t9, .Li1_80196F74
/* E03CA8 80196F68 346F0020 */   ori        $t7, $v1, 0x20
/* E03CAC 80196F6C 3C01801A */  lui         $at, %hi(D_i1_8019B838 + 0x7C)
/* E03CB0 80196F70 A42FB8B4 */  sh          $t7, %lo(D_i1_8019B838 + 0x7C)($at)
.Li1_80196F74:
/* E03CB4 80196F74 3C16801A */  lui         $s6, %hi(D_i1_8019B838 + 0x80)
/* E03CB8 80196F78 3C03801A */  lui         $v1, %hi(D_i1_8019C0B8)
/* E03CBC 80196F7C 2463C0B8 */  addiu       $v1, $v1, %lo(D_i1_8019C0B8)
/* E03CC0 80196F80 26D6B8B8 */  addiu       $s6, $s6, %lo(D_i1_8019B838 + 0x80)
/* E03CC4 80196F84 96C2007C */  lhu         $v0, 0x7C($s6)
.Li1_80196F88:
/* E03CC8 80196F88 30580001 */  andi        $t8, $v0, 0x1
/* E03CCC 80196F8C 57000004 */  bnel        $t8, $zero, .Li1_80196FA0
/* E03CD0 80196F90 96C200FC */   lhu        $v0, 0xFC($s6)
/* E03CD4 80196F94 344B0020 */  ori         $t3, $v0, 0x20
/* E03CD8 80196F98 A6CB007C */  sh          $t3, 0x7C($s6)
/* E03CDC 80196F9C 96C200FC */  lhu         $v0, 0xFC($s6)
.Li1_80196FA0:
/* E03CE0 80196FA0 304D0001 */  andi        $t5, $v0, 0x1
/* E03CE4 80196FA4 15A00002 */  bnez        $t5, .Li1_80196FB0
/* E03CE8 80196FA8 34480020 */   ori        $t0, $v0, 0x20
/* E03CEC 80196FAC A6C800FC */  sh          $t0, 0xFC($s6)
.Li1_80196FB0:
/* E03CF0 80196FB0 96C2017C */  lhu         $v0, 0x17C($s6)
/* E03CF4 80196FB4 30490001 */  andi        $t1, $v0, 0x1
/* E03CF8 80196FB8 15200002 */  bnez        $t1, .Li1_80196FC4
/* E03CFC 80196FBC 344C0020 */   ori        $t4, $v0, 0x20
/* E03D00 80196FC0 A6CC017C */  sh          $t4, 0x17C($s6)
.Li1_80196FC4:
/* E03D04 80196FC4 96C201FC */  lhu         $v0, 0x1FC($s6)
/* E03D08 80196FC8 304E0001 */  andi        $t6, $v0, 0x1
/* E03D0C 80196FCC 15C00002 */  bnez        $t6, .Li1_80196FD8
/* E03D10 80196FD0 344A0020 */   ori        $t2, $v0, 0x20
/* E03D14 80196FD4 A6CA01FC */  sh          $t2, 0x1FC($s6)
.Li1_80196FD8:
/* E03D18 80196FD8 26D60200 */  addiu       $s6, $s6, 0x200
/* E03D1C 80196FDC 56C3FFEA */  bnel        $s6, $v1, .Li1_80196F88
/* E03D20 80196FE0 96C2007C */   lhu        $v0, 0x7C($s6)
/* E03D24 80196FE4 100000A6 */  b           .Li1_80197280
/* E03D28 80196FE8 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_80196FEC:
/* E03D2C 80196FEC 8FA40260 */  lw          $a0, 0x260($sp)
/* E03D30 80196FF0 0C010BB0 */  jal         func_80042EC0
/* E03D34 80196FF4 249203FC */   addiu      $s2, $a0, 0x3FC
/* E03D38 80196FF8 8FAF0260 */  lw          $t7, 0x260($sp)
/* E03D3C 80196FFC 3C018016 */  lui         $at, %hi(gShowBossHealth)
/* E03D40 80197000 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E03D44 80197004 AC201734 */  sw          $zero, %lo(gShowBossHealth)($at)
/* E03D48 80197008 24190009 */  addiu       $t9, $zero, 0x9
/* E03D4C 8019700C 3C18800C */  lui         $t8, %hi(D_800C5D3C)
/* E03D50 80197010 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E03D54 80197014 27185D3C */  addiu       $t8, $t8, %lo(D_800C5D3C)
/* E03D58 80197018 3C042940 */  lui         $a0, (0x29405084 >> 16)
/* E03D5C 8019701C A5F900C0 */  sh          $t9, 0xC0($t7)
/* E03D60 80197020 AFB80014 */  sw          $t8, 0x14($sp)
/* E03D64 80197024 AFA70010 */  sw          $a3, 0x10($sp)
/* E03D68 80197028 34845084 */  ori         $a0, $a0, (0x29405084 & 0xFFFF)
/* E03D6C 8019702C 02402825 */  or          $a1, $s2, $zero
/* E03D70 80197030 0C006486 */  jal         Audio_PlaySfx
/* E03D74 80197034 24060004 */   addiu      $a2, $zero, 0x4
/* E03D78 80197038 8FA20260 */  lw          $v0, 0x260($sp)
/* E03D7C 8019703C 3C014120 */  lui         $at, (0x41200000 >> 16)
/* E03D80 80197040 44813000 */  mtc1        $at, $ft1
/* E03D84 80197044 C44A0008 */  lwc1        $ft3, 0x8($v0)
/* E03D88 80197048 3C0D800D */  lui         $t5, %hi(D_800CBF34)
/* E03D8C 8019704C 240B0001 */  addiu       $t3, $zero, 0x1
/* E03D90 80197050 25ADBF34 */  addiu       $t5, $t5, %lo(D_800CBF34)
/* E03D94 80197054 3C074220 */  lui         $a3, (0x42200000 >> 16)
/* E03D98 80197058 A44B00BC */  sh          $t3, 0xBC($v0)
/* E03D9C 8019705C AC4D0028 */  sw          $t5, 0x28($v0)
/* E03DA0 80197060 A040005E */  sb          $zero, 0x5E($v0)
/* E03DA4 80197064 C44C0004 */  lwc1        $fa0, 0x4($v0)
/* E03DA8 80197068 8C46000C */  lw          $a2, 0xC($v0)
/* E03DAC 8019706C 0C01E95A */  jal         func_8007A568
/* E03DB0 80197070 46065380 */   add.s      $fa1, $ft3, $ft1
/* E03DB4 80197074 AE340000 */  sw          $s4, 0x0($s1)
/* E03DB8 80197078 10000081 */  b           .Li1_80197280
/* E03DBC 8019707C 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_80197080:
/* E03DC0 80197080 3C028018 */  lui         $v0, %hi(D_80178354)
/* E03DC4 80197084 3C038018 */  lui         $v1, %hi(D_80178350)
/* E03DC8 80197088 240600FF */  addiu       $a2, $zero, 0xFF
/* E03DCC 8019708C 24638350 */  addiu       $v1, $v1, %lo(D_80178350)
/* E03DD0 80197090 24428354 */  addiu       $v0, $v0, %lo(D_80178354)
/* E03DD4 80197094 AC460000 */  sw          $a2, 0x0($v0)
/* E03DD8 80197098 AC660000 */  sw          $a2, 0x0($v1)
/* E03DDC 8019709C 3C018018 */  lui         $at, %hi(D_80178348)
/* E03DE0 801970A0 AC268348 */  sw          $a2, %lo(D_80178348)($at)
/* E03DE4 801970A4 3C018018 */  lui         $at, %hi(D_80178340)
/* E03DE8 801970A8 3C048018 */  lui         $a0, %hi(D_80178358)
/* E03DEC 801970AC AC208340 */  sw          $zero, %lo(D_80178340)($at)
/* E03DF0 801970B0 8FA50260 */  lw          $a1, 0x260($sp)
/* E03DF4 801970B4 24848358 */  addiu       $a0, $a0, %lo(D_80178358)
/* E03DF8 801970B8 AC860000 */  sw          $a2, 0x0($a0)
/* E03DFC 801970BC 3C018018 */  lui         $at, %hi(D_8017835C)
/* E03E00 801970C0 240C0005 */  addiu       $t4, $zero, 0x5
/* E03E04 801970C4 AC2C835C */  sw          $t4, %lo(D_8017835C)($at)
/* E03E08 801970C8 240E0003 */  addiu       $t6, $zero, 0x3
/* E03E0C 801970CC 240A0050 */  addiu       $t2, $zero, 0x50
/* E03E10 801970D0 A0AE0000 */  sb          $t6, 0x0($a1)
/* E03E14 801970D4 A4AA0052 */  sh          $t2, 0x52($a1)
/* E03E18 801970D8 10000069 */  b           .Li1_80197280
/* E03E1C 801970DC 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_801970E0:
/* E03E20 801970E0 3C014180 */  lui         $at, (0x41800000 >> 16)
/* E03E24 801970E4 44812000 */  mtc1        $at, $ft0
/* E03E28 801970E8 C4E00100 */  lwc1        $fv0, 0x100($a3)
/* E03E2C 801970EC 4600203E */  c.le.s      $ft0, $fv0
/* E03E30 801970F0 00000000 */  nop
/* E03E34 801970F4 45020030 */  bc1fl       .Li1_801971B8
/* E03E38 801970F8 3C01422C */   lui        $at, (0x422C0000 >> 16)
/* E03E3C 801970FC 8FB90260 */  lw          $t9, 0x260($sp)
/* E03E40 80197100 872200AC */  lh          $v0, 0xAC($t9)
/* E03E44 80197104 03201825 */  or          $v1, $t9, $zero
/* E03E48 80197108 10400008 */  beqz        $v0, .Li1_8019712C
/* E03E4C 8019710C 00402025 */   or         $a0, $v0, $zero
/* E03E50 80197110 24010001 */  addiu       $at, $zero, 0x1
/* E03E54 80197114 1081000D */  beq         $a0, $at, .Li1_8019714C
/* E03E58 80197118 24010002 */   addiu      $at, $zero, 0x2
/* E03E5C 8019711C 50810025 */  beql        $a0, $at, .Li1_801971B4
/* E03E60 80197120 8FA70260 */   lw         $a3, 0x260($sp)
/* E03E64 80197124 10000023 */  b           .Li1_801971B4
/* E03E68 80197128 03203825 */   or         $a3, $t9, $zero
.Li1_8019712C:
/* E03E6C 8019712C 846F009E */  lh          $t7, 0x9E($v1)
/* E03E70 80197130 244B0001 */  addiu       $t3, $v0, 0x1
/* E03E74 80197134 A46B00AC */  sh          $t3, 0xAC($v1)
/* E03E78 80197138 35F80001 */  ori         $t8, $t7, 0x1
/* E03E7C 8019713C A478009E */  sh          $t8, 0x9E($v1)
/* E03E80 80197140 8FA70260 */  lw          $a3, 0x260($sp)
/* E03E84 80197144 1000001B */  b           .Li1_801971B4
/* E03E88 80197148 C4600100 */   lwc1       $fv0, 0x100($v1)
.Li1_8019714C:
/* E03E8C 8019714C 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E03E90 80197150 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E03E94 80197154 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E03E98 80197158 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E03E9C 8019715C 3C043103 */  lui         $a0, (0x31030083 >> 16)
/* E03EA0 80197160 34840083 */  ori         $a0, $a0, (0x31030083 & 0xFFFF)
/* E03EA4 80197164 AFAD0014 */  sw          $t5, 0x14($sp)
/* E03EA8 80197168 AFA70010 */  sw          $a3, 0x10($sp)
/* E03EAC 8019716C 246503FC */  addiu       $a1, $v1, 0x3FC
/* E03EB0 80197170 0C006486 */  jal         Audio_PlaySfx
/* E03EB4 80197174 24060004 */   addiu      $a2, $zero, 0x4
/* E03EB8 80197178 8FA20260 */  lw          $v0, 0x260($sp)
/* E03EBC 8019717C AE340000 */  sw          $s4, 0x0($s1)
/* E03EC0 80197180 24080005 */  addiu       $t0, $zero, 0x5
/* E03EC4 80197184 A44800C0 */  sh          $t0, 0xC0($v0)
/* E03EC8 80197188 24090001 */  addiu       $t1, $zero, 0x1
/* E03ECC 8019718C 240C0001 */  addiu       $t4, $zero, 0x1
/* E03ED0 80197190 AFA900B8 */  sw          $t1, 0xB8($sp)
/* E03ED4 80197194 AFAC00B4 */  sw          $t4, 0xB4($sp)
/* E03ED8 80197198 844E00AC */  lh          $t6, 0xAC($v0)
/* E03EDC 8019719C C4400100 */  lwc1        $fv0, 0x100($v0)
/* E03EE0 801971A0 25CA0001 */  addiu       $t2, $t6, 0x1
/* E03EE4 801971A4 A44A00AC */  sh          $t2, 0xAC($v0)
/* E03EE8 801971A8 10000002 */  b           .Li1_801971B4
/* E03EEC 801971AC 8FA70260 */   lw         $a3, 0x260($sp)
/* E03EF0 801971B0 8FA70260 */  lw          $a3, 0x260($sp)
.Li1_801971B4:
/* E03EF4 801971B4 3C01422C */  lui         $at, (0x422C0000 >> 16)
.Li1_801971B8:
/* E03EF8 801971B8 44819000 */  mtc1        $at, $ft5
/* E03EFC 801971BC 00000000 */  nop
/* E03F00 801971C0 4600903E */  c.le.s      $ft5, $fv0
/* E03F04 801971C4 00000000 */  nop
/* E03F08 801971C8 4502002E */  bc1fl       .Li1_80197284
/* E03F0C 801971CC 84E40096 */   lh         $a0, 0x96($a3)
/* E03F10 801971D0 8FB90260 */  lw          $t9, 0x260($sp)
/* E03F14 801971D4 872200AE */  lh          $v0, 0xAE($t9)
/* E03F18 801971D8 03201825 */  or          $v1, $t9, $zero
/* E03F1C 801971DC 10400008 */  beqz        $v0, .Li1_80197200
/* E03F20 801971E0 00402025 */   or         $a0, $v0, $zero
/* E03F24 801971E4 24010001 */  addiu       $at, $zero, 0x1
/* E03F28 801971E8 1081000C */  beq         $a0, $at, .Li1_8019721C
/* E03F2C 801971EC 24010002 */   addiu      $at, $zero, 0x2
/* E03F30 801971F0 50810023 */  beql        $a0, $at, .Li1_80197280
/* E03F34 801971F4 8FA70260 */   lw         $a3, 0x260($sp)
/* E03F38 801971F8 10000021 */  b           .Li1_80197280
/* E03F3C 801971FC 03203825 */   or         $a3, $t9, $zero
.Li1_80197200:
/* E03F40 80197200 846F009E */  lh          $t7, 0x9E($v1)
/* E03F44 80197204 244B0001 */  addiu       $t3, $v0, 0x1
/* E03F48 80197208 A46B00AE */  sh          $t3, 0xAE($v1)
/* E03F4C 8019720C 35F80002 */  ori         $t8, $t7, 0x2
/* E03F50 80197210 A478009E */  sh          $t8, 0x9E($v1)
/* E03F54 80197214 1000001A */  b           .Li1_80197280
/* E03F58 80197218 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_8019721C:
/* E03F5C 8019721C 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E03F60 80197220 3C0D800C */  lui         $t5, %hi(D_800C5D3C)
/* E03F64 80197224 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E03F68 80197228 25AD5D3C */  addiu       $t5, $t5, %lo(D_800C5D3C)
/* E03F6C 8019722C 3C043103 */  lui         $a0, (0x31030083 >> 16)
/* E03F70 80197230 24080001 */  addiu       $t0, $zero, 0x1
/* E03F74 80197234 AFA800B4 */  sw          $t0, 0xB4($sp)
/* E03F78 80197238 34840083 */  ori         $a0, $a0, (0x31030083 & 0xFFFF)
/* E03F7C 8019723C AFAD0014 */  sw          $t5, 0x14($sp)
/* E03F80 80197240 AFA70010 */  sw          $a3, 0x10($sp)
/* E03F84 80197244 246503FC */  addiu       $a1, $v1, 0x3FC
/* E03F88 80197248 0C006486 */  jal         Audio_PlaySfx
/* E03F8C 8019724C 24060004 */   addiu      $a2, $zero, 0x4
/* E03F90 80197250 8FA20260 */  lw          $v0, 0x260($sp)
/* E03F94 80197254 AE340000 */  sw          $s4, 0x0($s1)
/* E03F98 80197258 24090005 */  addiu       $t1, $zero, 0x5
/* E03F9C 8019725C 240C0002 */  addiu       $t4, $zero, 0x2
/* E03FA0 80197260 A44900C0 */  sh          $t1, 0xC0($v0)
/* E03FA4 80197264 AFAC00B8 */  sw          $t4, 0xB8($sp)
/* E03FA8 80197268 844E00AE */  lh          $t6, 0xAE($v0)
/* E03FAC 8019726C 25CA0001 */  addiu       $t2, $t6, 0x1
/* E03FB0 80197270 A44A00AE */  sh          $t2, 0xAE($v0)
/* E03FB4 80197274 10000002 */  b           .Li1_80197280
/* E03FB8 80197278 8FA70260 */   lw         $a3, 0x260($sp)
/* E03FBC 8019727C 8FA70260 */  lw          $a3, 0x260($sp)
.Li1_80197280:
/* E03FC0 80197280 84E40096 */  lh          $a0, 0x96($a3)
.Li1_80197284:
/* E03FC4 80197284 10800007 */  beqz        $a0, .Li1_801972A4
/* E03FC8 80197288 24010001 */   addiu      $at, $zero, 0x1
/* E03FCC 8019728C 1081003D */  beq         $a0, $at, .Li1_80197384
/* E03FD0 80197290 24010002 */   addiu      $at, $zero, 0x2
/* E03FD4 80197294 10810055 */  beq         $a0, $at, .Li1_801973EC
/* E03FD8 80197298 00000000 */   nop
/* E03FDC 8019729C 1000006F */  b           .Li1_8019745C
/* E03FE0 801972A0 84F00092 */   lh         $s0, 0x92($a3)
.Li1_801972A4:
/* E03FE4 801972A4 3C01801A */  lui         $at, %hi(D_i1_8019B5B0)
/* E03FE8 801972A8 C430B5B0 */  lwc1        $ft4, %lo(D_i1_8019B5B0)($at)
/* E03FEC 801972AC C4E80104 */  lwc1        $ft2, 0x104($a3)
/* E03FF0 801972B0 4610403C */  c.lt.s      $ft2, $ft4
/* E03FF4 801972B4 00000000 */  nop
/* E03FF8 801972B8 45000019 */  bc1f        .Li1_80197320
/* E03FFC 801972BC 3C01801A */   lui        $at, %hi(D_i1_8019B5B4)
/* E04000 801972C0 C42AB5B4 */  lwc1        $ft3, %lo(D_i1_8019B5B4)($at)
/* E04004 801972C4 8FA40260 */  lw          $a0, 0x260($sp)
/* E04008 801972C8 3C053E4C */  lui         $a1, (0x3E4CCCCD >> 16)
/* E0400C 801972CC 4406B000 */  mfc1        $a2, $fs1
/* E04010 801972D0 3C073D4C */  lui         $a3, (0x3D4CCCCD >> 16)
/* E04014 801972D4 34E7CCCD */  ori         $a3, $a3, (0x3D4CCCCD & 0xFFFF)
/* E04018 801972D8 34A5CCCD */  ori         $a1, $a1, (0x3E4CCCCD & 0xFFFF)
/* E0401C 801972DC E7AA0010 */  swc1        $ft3, 0x10($sp)
/* E04020 801972E0 0C026F0B */  jal         Math_SmoothStepToF
/* E04024 801972E4 248400D8 */   addiu      $a0, $a0, 0xD8
/* E04028 801972E8 8FA20260 */  lw          $v0, 0x260($sp)
/* E0402C 801972EC 3C01801A */  lui         $at, %hi(D_i1_8019B5B8)
/* E04030 801972F0 C424B5B8 */  lwc1        $ft0, %lo(D_i1_8019B5B8)($at)
/* E04034 801972F4 C44600D8 */  lwc1        $ft1, 0xD8($v0)
/* E04038 801972F8 E7BE0014 */  swc1        $fs5, 0x14($sp)
/* E0403C 801972FC 02602025 */  or          $a0, $s3, $zero
/* E04040 80197300 24060001 */  addiu       $a2, $zero, 0x1
/* E04044 80197304 2407001B */  addiu       $a3, $zero, 0x1B
/* E04048 80197308 244501A0 */  addiu       $a1, $v0, 0x1A0
/* E0404C 8019730C E7A40018 */  swc1        $ft0, 0x18($sp)
/* E04050 80197310 0C026FBB */  jal         Math_SmoothStepToVec3fArray
/* E04054 80197314 E7A60010 */   swc1       $ft1, 0x10($sp)
/* E04058 80197318 10000018 */  b           .Li1_8019737C
/* E0405C 8019731C 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_80197320:
/* E04060 80197320 3C01801A */  lui         $at, %hi(D_i1_8019B5BC)
/* E04064 80197324 C432B5BC */  lwc1        $ft5, %lo(D_i1_8019B5BC)($at)
/* E04068 80197328 8FA40260 */  lw          $a0, 0x260($sp)
/* E0406C 8019732C 4406B000 */  mfc1        $a2, $fs1
/* E04070 80197330 3C073D4C */  lui         $a3, (0x3D4CCCCD >> 16)
/* E04074 80197334 34E7CCCD */  ori         $a3, $a3, (0x3D4CCCCD & 0xFFFF)
/* E04078 80197338 3C053F80 */  lui         $a1, (0x3F800000 >> 16)
/* E0407C 8019733C E7B20010 */  swc1        $ft5, 0x10($sp)
/* E04080 80197340 0C026F0B */  jal         Math_SmoothStepToF
/* E04084 80197344 248400D8 */   addiu      $a0, $a0, 0xD8
/* E04088 80197348 8FA20260 */  lw          $v0, 0x260($sp)
/* E0408C 8019734C 3C01801A */  lui         $at, %hi(D_i1_8019B5C0)
/* E04090 80197350 C430B5C0 */  lwc1        $ft4, %lo(D_i1_8019B5C0)($at)
/* E04094 80197354 C44800D8 */  lwc1        $ft2, 0xD8($v0)
/* E04098 80197358 E7BE0014 */  swc1        $fs5, 0x14($sp)
/* E0409C 8019735C 02602025 */  or          $a0, $s3, $zero
/* E040A0 80197360 24060001 */  addiu       $a2, $zero, 0x1
/* E040A4 80197364 2407001B */  addiu       $a3, $zero, 0x1B
/* E040A8 80197368 244501A0 */  addiu       $a1, $v0, 0x1A0
/* E040AC 8019736C E7B00018 */  swc1        $ft4, 0x18($sp)
/* E040B0 80197370 0C026FBB */  jal         Math_SmoothStepToVec3fArray
/* E040B4 80197374 E7A80010 */   swc1       $ft2, 0x10($sp)
/* E040B8 80197378 8FA70260 */  lw          $a3, 0x260($sp)
.Li1_8019737C:
/* E040BC 8019737C 10000037 */  b           .Li1_8019745C
/* E040C0 80197380 84F00092 */   lh         $s0, 0x92($a3)
.Li1_80197384:
/* E040C4 80197384 3C01801A */  lui         $at, %hi(D_i1_8019B5C4)
/* E040C8 80197388 C42AB5C4 */  lwc1        $ft3, %lo(D_i1_8019B5C4)($at)
/* E040CC 8019738C 8FA40260 */  lw          $a0, 0x260($sp)
/* E040D0 80197390 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* E040D4 80197394 3C073D4C */  lui         $a3, (0x3D4CCCCD >> 16)
/* E040D8 80197398 34E7CCCD */  ori         $a3, $a3, (0x3D4CCCCD & 0xFFFF)
/* E040DC 8019739C 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* E040E0 801973A0 3C053F80 */  lui         $a1, (0x3F800000 >> 16)
/* E040E4 801973A4 E7AA0010 */  swc1        $ft3, 0x10($sp)
/* E040E8 801973A8 0C026F0B */  jal         Math_SmoothStepToF
/* E040EC 801973AC 248400D8 */   addiu      $a0, $a0, 0xD8
/* E040F0 801973B0 8FA20260 */  lw          $v0, 0x260($sp)
/* E040F4 801973B4 3C01801A */  lui         $at, %hi(D_i1_8019B5C8)
/* E040F8 801973B8 C424B5C8 */  lwc1        $ft0, %lo(D_i1_8019B5C8)($at)
/* E040FC 801973BC C44600D8 */  lwc1        $ft1, 0xD8($v0)
/* E04100 801973C0 E7BE0014 */  swc1        $fs5, 0x14($sp)
/* E04104 801973C4 02602025 */  or          $a0, $s3, $zero
/* E04108 801973C8 24060001 */  addiu       $a2, $zero, 0x1
/* E0410C 801973CC 2407001B */  addiu       $a3, $zero, 0x1B
/* E04110 801973D0 244501A0 */  addiu       $a1, $v0, 0x1A0
/* E04114 801973D4 E7A40018 */  swc1        $ft0, 0x18($sp)
/* E04118 801973D8 0C026FBB */  jal         Math_SmoothStepToVec3fArray
/* E0411C 801973DC E7A60010 */   swc1       $ft1, 0x10($sp)
/* E04120 801973E0 8FA70260 */  lw          $a3, 0x260($sp)
/* E04124 801973E4 1000001D */  b           .Li1_8019745C
/* E04128 801973E8 84F00092 */   lh         $s0, 0x92($a3)
.Li1_801973EC:
/* E0412C 801973EC 3C01801A */  lui         $at, %hi(D_i1_8019B5CC)
/* E04130 801973F0 C432B5CC */  lwc1        $ft5, %lo(D_i1_8019B5CC)($at)
/* E04134 801973F4 8FA40260 */  lw          $a0, 0x260($sp)
/* E04138 801973F8 4405A000 */  mfc1        $a1, $fs0
/* E0413C 801973FC 3C063D8F */  lui         $a2, (0x3D8F5C29 >> 16)
/* E04140 80197400 3C073D4C */  lui         $a3, (0x3D4CCCCD >> 16)
/* E04144 80197404 34E7CCCD */  ori         $a3, $a3, (0x3D4CCCCD & 0xFFFF)
/* E04148 80197408 34C65C29 */  ori         $a2, $a2, (0x3D8F5C29 & 0xFFFF)
/* E0414C 8019740C E7B20010 */  swc1        $ft5, 0x10($sp)
/* E04150 80197410 0C026F0B */  jal         Math_SmoothStepToF
/* E04154 80197414 248400D8 */   addiu      $a0, $a0, 0xD8
/* E04158 80197418 8FA20260 */  lw          $v0, 0x260($sp)
/* E0415C 8019741C 3C014234 */  lui         $at, (0x42340000 >> 16)
/* E04160 80197420 44818000 */  mtc1        $at, $ft4
/* E04164 80197424 3C01801A */  lui         $at, %hi(D_i1_8019B5D0)
/* E04168 80197428 C42AB5D0 */  lwc1        $ft3, %lo(D_i1_8019B5D0)($at)
/* E0416C 8019742C C44800D8 */  lwc1        $ft2, 0xD8($v0)
/* E04170 80197430 02602025 */  or          $a0, $s3, $zero
/* E04174 80197434 24060001 */  addiu       $a2, $zero, 0x1
/* E04178 80197438 2407001B */  addiu       $a3, $zero, 0x1B
/* E0417C 8019743C 244501A0 */  addiu       $a1, $v0, 0x1A0
/* E04180 80197440 E7B00014 */  swc1        $ft4, 0x14($sp)
/* E04184 80197444 E7AA0018 */  swc1        $ft3, 0x18($sp)
/* E04188 80197448 0C026FBB */  jal         Math_SmoothStepToVec3fArray
/* E0418C 8019744C E7A80010 */   swc1       $ft2, 0x10($sp)
/* E04190 80197450 8FB80260 */  lw          $t8, 0x260($sp)
/* E04194 80197454 87100092 */  lh          $s0, 0x92($t8)
/* E04198 80197458 03003825 */  or          $a3, $t8, $zero
.Li1_8019745C:
/* E0419C 8019745C 2E010009 */  sltiu       $at, $s0, 0x9
/* E041A0 80197460 50200092 */  beql        $at, $zero, .Li1_801976AC
/* E041A4 80197464 8EED0000 */   lw         $t5, 0x0($s7)
/* E041A8 80197468 00105880 */  sll         $t3, $s0, 2
/* E041AC 8019746C 3C01801A */  lui         $at, %hi(jtbl_i1_8019B5D4)
/* E041B0 80197470 002B0821 */  addu        $at, $at, $t3
/* E041B4 80197474 8C2BB5D4 */  lw          $t3, %lo(jtbl_i1_8019B5D4)($at)
/* E041B8 80197478 01600008 */  jr          $t3
/* E041BC 8019747C 00000000 */   nop
.Li1_80197480:
/* E041C0 80197480 C4E60100 */  lwc1        $ft1, 0x100($a3)
/* E041C4 80197484 C4E40104 */  lwc1        $ft0, 0x104($a3)
/* E041C8 80197488 00106880 */  sll         $t5, $s0, 2
/* E041CC 8019748C 03CD4021 */  addu        $t0, $fp, $t5
/* E041D0 80197490 46043480 */  add.s       $ft5, $ft1, $ft0
/* E041D4 80197494 E4F20100 */  swc1        $ft5, 0x100($a3)
/* E041D8 80197498 0C026B37 */  jal         Animation_GetFrameCount
/* E041DC 8019749C 8D040000 */   lw         $a0, 0x0($t0)
/* E041E0 801974A0 8FA90260 */  lw          $t1, 0x260($sp)
/* E041E4 801974A4 C5280100 */  lwc1        $ft2, 0x100($t1)
/* E041E8 801974A8 4600440D */  trunc.w.s   $ft4, $ft2
/* E041EC 801974AC 440E8000 */  mfc1        $t6, $ft4
/* E041F0 801974B0 00000000 */  nop
/* E041F4 801974B4 01C2082A */  slt         $at, $t6, $v0
/* E041F8 801974B8 14200002 */  bnez        $at, .Li1_801974C4
/* E041FC 801974BC 24050001 */   addiu      $a1, $zero, 0x1
/* E04200 801974C0 AFA500E8 */  sw          $a1, 0xE8($sp)
.Li1_801974C4:
/* E04204 801974C4 10000078 */  b           .Li1_801976A8
/* E04208 801974C8 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_801974CC:
/* E0420C 801974CC C4EA0100 */  lwc1        $ft3, 0x100($a3)
/* E04210 801974D0 24010011 */  addiu       $at, $zero, 0x11
/* E04214 801974D4 4600518D */  trunc.w.s   $ft1, $ft3
/* E04218 801974D8 44193000 */  mfc1        $t9, $ft1
/* E0421C 801974DC 00000000 */  nop
/* E04220 801974E0 57210018 */  bnel        $t9, $at, .Li1_80197544
/* E04224 801974E4 00105880 */   sll        $t3, $s0, 2
/* E04228 801974E8 8EEF0000 */  lw          $t7, 0x0($s7)
/* E0422C 801974EC 44802000 */  mtc1        $zero, $ft0
/* E04230 801974F0 C5E000C8 */  lwc1        $fv0, 0xC8($t7)
/* E04234 801974F4 4604003C */  c.lt.s      $fv0, $ft0
/* E04238 801974F8 00000000 */  nop
/* E0423C 801974FC 45020005 */  bc1fl       .Li1_80197514
/* E04240 80197500 44804000 */   mtc1       $zero, $ft2
/* E04244 80197504 46000480 */  add.s       $ft5, $fv0, $fv0
/* E04248 80197508 10000004 */  b           .Li1_8019751C
/* E0424C 8019750C E4F20074 */   swc1       $ft5, 0x74($a3)
/* E04250 80197510 44804000 */  mtc1        $zero, $ft2
.Li1_80197514:
/* E04254 80197514 00000000 */  nop
/* E04258 80197518 E4E80074 */  swc1        $ft2, 0x74($a3)
.Li1_8019751C:
/* E0425C 8019751C 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E04260 80197520 44818000 */  mtc1        $at, $ft4
/* E04264 80197524 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E04268 80197528 44815000 */  mtc1        $at, $ft3
/* E0426C 8019752C 24180001 */  addiu       $t8, $zero, 0x1
/* E04270 80197530 A4F80094 */  sh          $t8, 0x94($a3)
/* E04274 80197534 84F00092 */  lh          $s0, 0x92($a3)
/* E04278 80197538 E4F00084 */  swc1        $ft4, 0x84($a3)
/* E0427C 8019753C E4EA0070 */  swc1        $ft3, 0x70($a3)
/* E04280 80197540 00105880 */  sll         $t3, $s0, 2
.Li1_80197544:
/* E04284 80197544 03CB6821 */  addu        $t5, $fp, $t3
/* E04288 80197548 0C026B37 */  jal         Animation_GetFrameCount
/* E0428C 8019754C 8DA40000 */   lw         $a0, 0x0($t5)
/* E04290 80197550 2448FFFF */  addiu       $t0, $v0, -0x1
/* E04294 80197554 44883000 */  mtc1        $t0, $ft1
/* E04298 80197558 8FA30260 */  lw          $v1, 0x260($sp)
/* E0429C 8019755C 46803120 */  cvt.s.w     $ft0, $ft1
/* E042A0 80197560 C4600100 */  lwc1        $fv0, 0x100($v1)
/* E042A4 80197564 4604003C */  c.lt.s      $fv0, $ft0
/* E042A8 80197568 00000000 */  nop
/* E042AC 8019756C 45000005 */  bc1f        .Li1_80197584
/* E042B0 80197570 3C013F80 */   lui        $at, (0x3F800000 >> 16)
/* E042B4 80197574 44819000 */  mtc1        $at, $ft5
/* E042B8 80197578 00000000 */  nop
/* E042BC 8019757C 46120200 */  add.s       $ft2, $fv0, $ft5
/* E042C0 80197580 E4680100 */  swc1        $ft2, 0x100($v1)
.Li1_80197584:
/* E042C4 80197584 10000048 */  b           .Li1_801976A8
/* E042C8 80197588 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_8019758C:
/* E042CC 8019758C C4E00100 */  lwc1        $fv0, 0x100($a3)
/* E042D0 80197590 24010002 */  addiu       $at, $zero, 0x2
/* E042D4 80197594 4600040D */  trunc.w.s   $ft4, $fv0
/* E042D8 80197598 440C8000 */  mfc1        $t4, $ft4
/* E042DC 8019759C 00000000 */  nop
/* E042E0 801975A0 15810003 */  bne         $t4, $at, .Li1_801975B0
/* E042E4 801975A4 240E0005 */   addiu      $t6, $zero, 0x5
/* E042E8 801975A8 A4EE00AA */  sh          $t6, 0xAA($a3)
/* E042EC 801975AC C4E00100 */  lwc1        $fv0, 0x100($a3)
.Li1_801975B0:
/* E042F0 801975B0 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E042F4 801975B4 44815000 */  mtc1        $at, $ft3
/* E042F8 801975B8 00000000 */  nop
/* E042FC 801975BC 4600503C */  c.lt.s      $ft3, $fv0
/* E04300 801975C0 00000000 */  nop
/* E04304 801975C4 45000006 */  bc1f        .Li1_801975E0
/* E04308 801975C8 3C01BF80 */   lui        $at, (0xBF800000 >> 16)
/* E0430C 801975CC 44813000 */  mtc1        $at, $ft1
/* E04310 801975D0 00000000 */  nop
/* E04314 801975D4 46060100 */  add.s       $ft0, $fv0, $ft1
/* E04318 801975D8 10000033 */  b           .Li1_801976A8
/* E0431C 801975DC E4E40100 */   swc1       $ft0, 0x100($a3)
.Li1_801975E0:
/* E04320 801975E0 8FA30260 */  lw          $v1, 0x260($sp)
/* E04324 801975E4 846200AA */  lh          $v0, 0xAA($v1)
/* E04328 801975E8 18400004 */  blez        $v0, .Li1_801975FC
/* E0432C 801975EC 244AFFFF */   addiu      $t2, $v0, -0x1
/* E04330 801975F0 A46A00AA */  sh          $t2, 0xAA($v1)
/* E04334 801975F4 1000002C */  b           .Li1_801976A8
/* E04338 801975F8 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_801975FC:
/* E0433C 801975FC 24190001 */  addiu       $t9, $zero, 0x1
/* E04340 80197600 AFB900E8 */  sw          $t9, 0xE8($sp)
/* E04344 80197604 10000028 */  b           .Li1_801976A8
/* E04348 80197608 8FA70260 */   lw         $a3, 0x260($sp)
.Li1_8019760C:
/* E0434C 8019760C 00107880 */  sll         $t7, $s0, 2
/* E04350 80197610 03CFC021 */  addu        $t8, $fp, $t7
/* E04354 80197614 0C026B37 */  jal         Animation_GetFrameCount
/* E04358 80197618 8F040000 */   lw         $a0, 0x0($t8)
/* E0435C 8019761C 44829000 */  mtc1        $v0, $ft5
/* E04360 80197620 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E04364 80197624 44818000 */  mtc1        $at, $ft4
/* E04368 80197628 46809220 */  cvt.s.w     $ft2, $ft5
/* E0436C 8019762C 8FA30260 */  lw          $v1, 0x260($sp)
/* E04370 80197630 C4600100 */  lwc1        $fv0, 0x100($v1)
/* E04374 80197634 46104281 */  sub.s       $ft3, $ft2, $ft4
/* E04378 80197638 460A003C */  c.lt.s      $fv0, $ft3
/* E0437C 8019763C 00000000 */  nop
/* E04380 80197640 45020017 */  bc1fl       .Li1_801976A0
/* E04384 80197644 240B0005 */   addiu      $t3, $zero, 0x5
/* E04388 80197648 C4660104 */  lwc1        $ft1, 0x104($v1)
/* E0438C 8019764C 3C01801A */  lui         $at, %hi(D_i1_8019B5F8)
/* E04390 80197650 4405B000 */  mfc1        $a1, $fs1
/* E04394 80197654 46060100 */  add.s       $ft0, $fv0, $ft1
/* E04398 80197658 4406A000 */  mfc1        $a2, $fs0
/* E0439C 8019765C 3C073CA3 */  lui         $a3, (0x3CA3D70A >> 16)
/* E043A0 80197660 34E7D70A */  ori         $a3, $a3, (0x3CA3D70A & 0xFFFF)
/* E043A4 80197664 E4640100 */  swc1        $ft0, 0x100($v1)
/* E043A8 80197668 C432B5F8 */  lwc1        $ft5, %lo(D_i1_8019B5F8)($at)
/* E043AC 8019766C 24640104 */  addiu       $a0, $v1, 0x104
/* E043B0 80197670 0C026F0B */  jal         Math_SmoothStepToF
/* E043B4 80197674 E7B20010 */   swc1       $ft5, 0x10($sp)
/* E043B8 80197678 8FA20260 */  lw          $v0, 0x260($sp)
/* E043BC 8019767C C4480104 */  lwc1        $ft2, 0x104($v0)
/* E043C0 80197680 4614403C */  c.lt.s      $ft2, $fs0
/* E043C4 80197684 00000000 */  nop
/* E043C8 80197688 45000002 */  bc1f        .Li1_80197694
/* E043CC 8019768C 00000000 */   nop
/* E043D0 80197690 E4540104 */  swc1        $fs0, 0x104($v0)
.Li1_80197694:
/* E043D4 80197694 10000004 */  b           .Li1_801976A8
/* E043D8 80197698 8FA70260 */   lw         $a3, 0x260($sp)
/* E043DC 8019769C 240B0005 */  addiu       $t3, $zero, 0x5
.Li1_801976A0:
/* E043E0 801976A0 A46B009A */  sh          $t3, 0x9A($v1)
/* E043E4 801976A4 8FA70260 */  lw          $a3, 0x260($sp)
.Li1_801976A8:
/* E043E8 801976A8 8EED0000 */  lw          $t5, 0x0($s7)
.Li1_801976AC:
/* E043EC 801976AC 8FA500E8 */  lw          $a1, 0xE8($sp)
/* E043F0 801976B0 C4EA000C */  lwc1        $ft3, 0xC($a3)
/* E043F4 801976B4 C5B0007C */  lwc1        $ft4, 0x7C($t5)
/* E043F8 801976B8 10A00016 */  beqz        $a1, .Li1_80197714
/* E043FC 801976BC 460A8081 */   sub.s      $fv1, $ft4, $ft3
/* E04400 801976C0 8FA30260 */  lw          $v1, 0x260($sp)
/* E04404 801976C4 3C02801A */  lui         $v0, %hi(D_i1_8019AD2C)
/* E04408 801976C8 8468008A */  lh          $t0, 0x8A($v1)
/* E0440C 801976CC 846C008C */  lh          $t4, 0x8C($v1)
/* E04410 801976D0 000848C0 */  sll         $t1, $t0, 3
/* E04414 801976D4 00491021 */  addu        $v0, $v0, $t1
/* E04418 801976D8 8C42AD2C */  lw          $v0, %lo(D_i1_8019AD2C)($v0)
/* E0441C 801976DC 000C7080 */  sll         $t6, $t4, 2
/* E04420 801976E0 01C25021 */  addu        $t2, $t6, $v0
/* E04424 801976E4 91590002 */  lbu         $t9, 0x2($t2)
/* E04428 801976E8 332F0001 */  andi        $t7, $t9, 0x1
/* E0442C 801976EC 11E00009 */  beqz        $t7, .Li1_80197714
/* E04430 801976F0 00000000 */   nop
/* E04434 801976F4 8462008E */  lh          $v0, 0x8E($v1)
/* E04438 801976F8 10400006 */  beqz        $v0, .Li1_80197714
/* E0443C 801976FC 00000000 */   nop
/* E04440 80197700 24180001 */  addiu       $t8, $zero, 0x1
/* E04444 80197704 18400003 */  blez        $v0, .Li1_80197714
/* E04448 80197708 AFB800E4 */   sw         $t8, 0xE4($sp)
/* E0444C 8019770C 244BFFFF */  addiu       $t3, $v0, -0x1
/* E04450 80197710 A46B008E */  sh          $t3, 0x8E($v1)
.Li1_80197714:
/* E04454 80197714 3C06801A */  lui         $a2, %hi(D_i1_8019C0BC)
/* E04458 80197718 24C6C0BC */  addiu       $a2, $a2, %lo(D_i1_8019C0BC)
/* E0445C 8019771C 8CC40000 */  lw          $a0, 0x0($a2)
/* E04460 80197720 8FA30260 */  lw          $v1, 0x260($sp)
/* E04464 80197724 10800007 */  beqz        $a0, .Li1_80197744
/* E04468 80197728 00000000 */   nop
/* E0446C 8019772C 846D004E */  lh          $t5, 0x4E($v1)
/* E04470 80197730 29A10003 */  slti        $at, $t5, 0x3
/* E04474 80197734 14200003 */  bnez        $at, .Li1_80197744
/* E04478 80197738 00000000 */   nop
/* E0447C 8019773C ACC00000 */  sw          $zero, 0x0($a2)
/* E04480 80197740 00002025 */  or          $a0, $zero, $zero
.Li1_80197744:
/* E04484 80197744 1080000C */  beqz        $a0, .Li1_80197778
/* E04488 80197748 00000000 */   nop
/* E0448C 8019774C 8468008A */  lh          $t0, 0x8A($v1)
/* E04490 80197750 24010002 */  addiu       $at, $zero, 0x2
/* E04494 80197754 11010008 */  beq         $t0, $at, .Li1_80197778
/* E04498 80197758 00000000 */   nop
/* E0449C 8019775C 8469004E */  lh          $t1, 0x4E($v1)
/* E044A0 80197760 29210003 */  slti        $at, $t1, 0x3
/* E044A4 80197764 10200004 */  beqz        $at, .Li1_80197778
/* E044A8 80197768 34AC0002 */   ori        $t4, $a1, 0x2
/* E044AC 8019776C 240E0001 */  addiu       $t6, $zero, 0x1
/* E044B0 80197770 01802825 */  or          $a1, $t4, $zero
/* E044B4 80197774 AFAE00E4 */  sw          $t6, 0xE4($sp)
.Li1_80197778:
/* E044B8 80197778 50A000EA */  beql        $a1, $zero, .Li1_80197B24
/* E044BC 8019777C 84690060 */   lh         $t1, 0x60($v1)
/* E044C0 80197780 8470008A */  lh          $s0, 0x8A($v1)
/* E044C4 80197784 8479008C */  lh          $t9, 0x8C($v1)
/* E044C8 80197788 8FAF00E4 */  lw          $t7, 0xE4($sp)
/* E044CC 8019778C 3C02801A */  lui         $v0, %hi(D_i1_8019AD2C)
/* E044D0 80197790 001050C0 */  sll         $t2, $s0, 3
/* E044D4 80197794 004A1021 */  addu        $v0, $v0, $t2
/* E044D8 80197798 032FA823 */  subu        $s5, $t9, $t7
/* E044DC 8019779C 8C42AD2C */  lw          $v0, %lo(D_i1_8019AD2C)($v0)
/* E044E0 801977A0 26B50001 */  addiu       $s5, $s5, 0x1
/* E044E4 801977A4 10800012 */  beqz        $a0, .Li1_801977F0
/* E044E8 801977A8 84710090 */   lh         $s1, 0x90($v1)
/* E044EC 801977AC 3C01801A */  lui         $at, %hi(D_i1_8019B5FC)
/* E044F0 801977B0 C420B5FC */  lwc1        $fv0, %lo(D_i1_8019B5FC)($at)
/* E044F4 801977B4 4600103C */  c.lt.s      $fv1, $fv0
/* E044F8 801977B8 00000000 */  nop
/* E044FC 801977BC 45020009 */  bc1fl       .Li1_801977E4
/* E04500 801977C0 2401FFFD */   addiu      $at, $zero, -0x3
/* E04504 801977C4 2498FFFF */  addiu       $t8, $a0, -0x1
/* E04508 801977C8 A47800B8 */  sh          $t8, 0xB8($v1)
/* E0450C 801977CC 3C02801A */  lui         $v0, %hi(D_i1_8019AD2C + 0x10)
/* E04510 801977D0 0000A825 */  or          $s5, $zero, $zero
/* E04514 801977D4 24100002 */  addiu       $s0, $zero, 0x2
/* E04518 801977D8 10000004 */  b           .Li1_801977EC
/* E0451C 801977DC 8C42AD3C */   lw         $v0, %lo(D_i1_8019AD2C + 0x10)($v0)
/* E04520 801977E0 2401FFFD */  addiu       $at, $zero, -0x3
.Li1_801977E4:
/* E04524 801977E4 00A15824 */  and         $t3, $a1, $at
/* E04528 801977E8 01602825 */  or          $a1, $t3, $zero
.Li1_801977EC:
/* E0452C 801977EC ACC00000 */  sw          $zero, 0x0($a2)
.Li1_801977F0:
/* E04530 801977F0 3C01801A */  lui         $at, %hi(D_i1_8019B600)
/* E04534 801977F4 C420B600 */  lwc1        $fv0, %lo(D_i1_8019B600)($at)
/* E04538 801977F8 24010001 */  addiu       $at, $zero, 0x1
/* E0453C 801977FC 30AD0001 */  andi        $t5, $a1, 0x1
/* E04540 80197800 15A10068 */  bne         $t5, $at, .Li1_801979A4
/* E04544 80197804 00154080 */   sll        $t0, $s5, 2
/* E04548 80197808 01024821 */  addu        $t1, $t0, $v0
/* E0454C 8019780C 852C0000 */  lh          $t4, 0x0($t1)
/* E04550 80197810 2401FFFF */  addiu       $at, $zero, -0x1
/* E04554 80197814 55810064 */  bnel        $t4, $at, .Li1_801979A8
/* E04558 80197818 0010C8C0 */   sll        $t9, $s0, 3
/* E0455C 8019781C AFA500E8 */  sw          $a1, 0xE8($sp)
/* E04560 80197820 3C05801A */  lui         $a1, %hi(D_i1_8019AD54)
/* E04564 80197824 24A5AD54 */  addiu       $a1, $a1, %lo(D_i1_8019AD54)
/* E04568 80197828 0000A825 */  or          $s5, $zero, $zero
/* E0456C 8019782C 24070002 */  addiu       $a3, $zero, 0x2
/* E04570 80197830 8FA40260 */  lw          $a0, 0x260($sp)
/* E04574 80197834 84910090 */  lh          $s1, 0x90($a0)
.Li1_80197838:
/* E04578 80197838 2401FFFF */  addiu       $at, $zero, -0x1
/* E0457C 8019783C 0000A025 */  or          $s4, $zero, $zero
/* E04580 80197840 26310001 */  addiu       $s1, $s1, 0x1
/* E04584 80197844 00117040 */  sll         $t6, $s1, 1
/* E04588 80197848 00AE5021 */  addu        $t2, $a1, $t6
/* E0458C 8019784C 85420000 */  lh          $v0, 0x0($t2)
/* E04590 80197850 14410005 */  bne         $v0, $at, .Li1_80197868
/* E04594 80197854 00000000 */   nop
/* E04598 80197858 3C19801A */  lui         $t9, %hi(D_i1_8019AD54)
/* E0459C 8019785C 2739AD54 */  addiu       $t9, $t9, %lo(D_i1_8019AD54)
/* E045A0 80197860 87220000 */  lh          $v0, 0x0($t9)
/* E045A4 80197864 00008825 */  or          $s1, $zero, $zero
.Li1_80197868:
/* E045A8 80197868 14470004 */  bne         $v0, $a3, .Li1_8019787C
/* E045AC 8019786C 00408025 */   or         $s0, $v0, $zero
/* E045B0 80197870 4600103C */  c.lt.s      $fv1, $fv0
/* E045B4 80197874 00000000 */  nop
/* E045B8 80197878 4501000A */  bc1t        .Li1_801978A4
.Li1_8019787C:
/* E045BC 8019787C 3C03801A */   lui        $v1, %hi(D_i1_8019C0B8)
/* E045C0 80197880 24010001 */  addiu       $at, $zero, 0x1
/* E045C4 80197884 16010003 */  bne         $s0, $at, .Li1_80197894
/* E045C8 80197888 8C63C0B8 */   lw         $v1, %lo(D_i1_8019C0B8)($v1)
/* E045CC 8019788C 50600006 */  beql        $v1, $zero, .Li1_801978A8
/* E045D0 80197890 A4910090 */   sh         $s1, 0x90($a0)
.Li1_80197894:
/* E045D4 80197894 16000007 */  bnez        $s0, .Li1_801978B4
/* E045D8 80197898 24010001 */   addiu      $at, $zero, 0x1
/* E045DC 8019789C 54610006 */  bnel        $v1, $at, .Li1_801978B8
/* E045E0 801978A0 28610002 */   slti       $at, $v1, 0x2
.Li1_801978A4:
/* E045E4 801978A4 A4910090 */  sh          $s1, 0x90($a0)
.Li1_801978A8:
/* E045E8 801978A8 3C03801A */  lui         $v1, %hi(D_i1_8019C0B8)
/* E045EC 801978AC 8C63C0B8 */  lw          $v1, %lo(D_i1_8019C0B8)($v1)
/* E045F0 801978B0 24140001 */  addiu       $s4, $zero, 0x1
.Li1_801978B4:
/* E045F4 801978B4 28610002 */  slti        $at, $v1, 0x2
.Li1_801978B8:
/* E045F8 801978B8 1420002F */  bnez        $at, .Li1_80197978
/* E045FC 801978BC 2406000A */   addiu      $a2, $zero, 0xA
/* E04600 801978C0 2462FFFF */  addiu       $v0, $v1, -0x1
/* E04604 801978C4 0046001A */  div         $zero, $v0, $a2
/* E04608 801978C8 00009812 */  mflo        $s3
/* E0460C 801978CC 00002010 */  mfhi        $a0
/* E04610 801978D0 14C00002 */  bnez        $a2, .Li1_801978DC
/* E04614 801978D4 00000000 */   nop
/* E04618 801978D8 0007000D */  break       7
.Li1_801978DC:
/* E0461C 801978DC 2401FFFF */  addiu       $at, $zero, -0x1
/* E04620 801978E0 14C10004 */  bne         $a2, $at, .Li1_801978F4
/* E04624 801978E4 3C018000 */   lui        $at, (0x80000000 >> 16)
/* E04628 801978E8 14410002 */  bne         $v0, $at, .Li1_801978F4
/* E0462C 801978EC 00000000 */   nop
/* E04630 801978F0 0006000D */  break       6
.Li1_801978F4:
/* E04634 801978F4 12000012 */  beqz        $s0, .Li1_80197940
/* E04638 801978F8 24010001 */   addiu      $at, $zero, 0x1
/* E0463C 801978FC 12010005 */  beq         $s0, $at, .Li1_80197914
/* E04640 80197900 24010003 */   addiu      $at, $zero, 0x3
/* E04644 80197904 5201001A */  beql        $s0, $at, .Li1_80197970
/* E04648 80197908 8FA40260 */   lw         $a0, 0x260($sp)
/* E0464C 8019790C 1000001A */  b           .Li1_80197978
/* E04650 80197910 8FA40260 */   lw         $a0, 0x260($sp)
.Li1_80197914:
/* E04654 80197914 5A600006 */  blezl       $s3, .Li1_80197930
/* E04658 80197918 8FAB0260 */   lw         $t3, 0x260($sp)
/* E0465C 8019791C 8FB80260 */  lw          $t8, 0x260($sp)
/* E04660 80197920 266FFFFF */  addiu       $t7, $s3, -0x1
/* E04664 80197924 10000004 */  b           .Li1_80197938
/* E04668 80197928 A70F008E */   sh         $t7, 0x8E($t8)
/* E0466C 8019792C 8FAB0260 */  lw          $t3, 0x260($sp)
.Li1_80197930:
/* E04670 80197930 24140001 */  addiu       $s4, $zero, 0x1
/* E04674 80197934 A5710090 */  sh          $s1, 0x90($t3)
.Li1_80197938:
/* E04678 80197938 1000000F */  b           .Li1_80197978
/* E0467C 8019793C 8FA40260 */   lw         $a0, 0x260($sp)
.Li1_80197940:
/* E04680 80197940 58800006 */  blezl       $a0, .Li1_8019795C
/* E04684 80197944 8FA90260 */   lw         $t1, 0x260($sp)
/* E04688 80197948 8FA80260 */  lw          $t0, 0x260($sp)
/* E0468C 8019794C 248DFFFF */  addiu       $t5, $a0, -0x1
/* E04690 80197950 10000004 */  b           .Li1_80197964
/* E04694 80197954 A50D008E */   sh         $t5, 0x8E($t0)
/* E04698 80197958 8FA90260 */  lw          $t1, 0x260($sp)
.Li1_8019795C:
/* E0469C 8019795C 24140001 */  addiu       $s4, $zero, 0x1
/* E046A0 80197960 A5310090 */  sh          $s1, 0x90($t1)
.Li1_80197964:
/* E046A4 80197964 10000004 */  b           .Li1_80197978
/* E046A8 80197968 8FA40260 */   lw         $a0, 0x260($sp)
/* E046AC 8019796C 8FA40260 */  lw          $a0, 0x260($sp)
.Li1_80197970:
/* E046B0 80197970 240CFFFF */  addiu       $t4, $zero, -0x1
/* E046B4 80197974 A48C008E */  sh          $t4, 0x8E($a0)
.Li1_80197978:
/* E046B8 80197978 16000006 */  bnez        $s0, .Li1_80197994
/* E046BC 8019797C 3C0A801A */   lui        $t2, %hi(D_i1_8019C0B8)
/* E046C0 80197980 8D4AC0B8 */  lw          $t2, %lo(D_i1_8019C0B8)($t2)
/* E046C4 80197984 24010001 */  addiu       $at, $zero, 0x1
/* E046C8 80197988 15410002 */  bne         $t2, $at, .Li1_80197994
/* E046CC 8019798C 3C01801A */   lui        $at, %hi(D_i1_8019C0B8)
/* E046D0 80197990 AC20C0B8 */  sw          $zero, %lo(D_i1_8019C0B8)($at)
.Li1_80197994:
/* E046D4 80197994 5680FFA8 */  bnel        $s4, $zero, .Li1_80197838
/* E046D8 80197998 84910090 */   lh         $s1, 0x90($a0)
/* E046DC 8019799C 8FA500E8 */  lw          $a1, 0xE8($sp)
/* E046E0 801979A0 8FA30260 */  lw          $v1, 0x260($sp)
.Li1_801979A4:
/* E046E4 801979A4 0010C8C0 */  sll         $t9, $s0, 3
.Li1_801979A8:
/* E046E8 801979A8 3C02801A */  lui         $v0, %hi(D_i1_8019AD2C)
/* E046EC 801979AC 00591021 */  addu        $v0, $v0, $t9
/* E046F0 801979B0 8C42AD2C */  lw          $v0, %lo(D_i1_8019AD2C)($v0)
/* E046F4 801979B4 00157880 */  sll         $t7, $s5, 2
/* E046F8 801979B8 01E2C021 */  addu        $t8, $t7, $v0
/* E046FC 801979BC 10A00058 */  beqz        $a1, .Li1_80197B20
/* E04700 801979C0 87120000 */   lh         $s2, 0x0($t8)
/* E04704 801979C4 2E410008 */  sltiu       $at, $s2, 0x8
/* E04708 801979C8 10200051 */  beqz        $at, .Li1_80197B10
/* E0470C 801979CC A46000BE */   sh         $zero, 0xBE($v1)
/* E04710 801979D0 00125880 */  sll         $t3, $s2, 2
/* E04714 801979D4 3C01801A */  lui         $at, %hi(jtbl_i1_8019B604)
/* E04718 801979D8 002B0821 */  addu        $at, $at, $t3
/* E0471C 801979DC 8C2BB604 */  lw          $t3, %lo(jtbl_i1_8019B604)($at)
/* E04720 801979E0 01600008 */  jr          $t3
/* E04724 801979E4 00000000 */   nop
.Li1_801979E8:
/* E04728 801979E8 0C0013AC */  jal         Rand_ZeroOne
/* E0472C 801979EC 00000000 */   nop
/* E04730 801979F0 46000180 */  add.s       $ft1, $fv0, $fv0
/* E04734 801979F4 8FA20260 */  lw          $v0, 0x260($sp)
/* E04738 801979F8 4600310D */  trunc.w.s   $ft0, $ft1
/* E0473C 801979FC A44000AC */  sh          $zero, 0xAC($v0)
/* E04740 80197A00 A44000AE */  sh          $zero, 0xAE($v0)
/* E04744 80197A04 44082000 */  mfc1        $t0, $ft0
/* E04748 80197A08 00000000 */  nop
/* E0474C 80197A0C A44800B6 */  sh          $t0, 0xB6($v0)
/* E04750 80197A10 8FA30260 */  lw          $v1, 0x260($sp)
.Li1_80197A14:
/* E04754 80197A14 24010003 */  addiu       $at, $zero, 0x3
/* E04758 80197A18 16410009 */  bne         $s2, $at, .Li1_80197A40
/* E0475C 80197A1C 3C09801A */   lui        $t1, %hi(D_i1_8019C0B8)
/* E04760 80197A20 8D29C0B8 */  lw          $t1, %lo(D_i1_8019C0B8)($t1)
/* E04764 80197A24 24010002 */  addiu       $at, $zero, 0x2
/* E04768 80197A28 55210006 */  bnel        $t1, $at, .Li1_80197A44
/* E0476C 80197A2C 846C0092 */   lh         $t4, 0x92($v1)
/* E04770 80197A30 24120002 */  addiu       $s2, $zero, 0x2
/* E04774 80197A34 26B5FFFF */  addiu       $s5, $s5, -0x1
/* E04778 80197A38 A46000AC */  sh          $zero, 0xAC($v1)
/* E0477C 80197A3C A46000AE */  sh          $zero, 0xAE($v1)
.Li1_80197A40:
/* E04780 80197A40 846C0092 */  lh          $t4, 0x92($v1)
.Li1_80197A44:
/* E04784 80197A44 44800000 */  mtc1        $zero, $fv0
/* E04788 80197A48 24010005 */  addiu       $at, $zero, 0x5
/* E0478C 80197A4C A4600094 */  sh          $zero, 0x94($v1)
/* E04790 80197A50 15810005 */  bne         $t4, $at, .Li1_80197A68
/* E04794 80197A54 E4600100 */   swc1       $fv0, 0x100($v1)
/* E04798 80197A58 240E0001 */  addiu       $t6, $zero, 0x1
/* E0479C 80197A5C E46000D8 */  swc1        $fv0, 0xD8($v1)
/* E047A0 80197A60 1000002B */  b           .Li1_80197B10
/* E047A4 80197A64 A46E0096 */   sh         $t6, 0x96($v1)
.Li1_80197A68:
/* E047A8 80197A68 10000029 */  b           .Li1_80197B10
/* E047AC 80197A6C A4600096 */   sh         $zero, 0x96($v1)
.Li1_80197A70:
/* E047B0 80197A70 8FA50260 */  lw          $a1, 0x260($sp)
/* E047B4 80197A74 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* E047B8 80197A78 3C0A800C */  lui         $t2, %hi(D_800C5D3C)
/* E047BC 80197A7C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* E047C0 80197A80 254A5D3C */  addiu       $t2, $t2, %lo(D_800C5D3C)
/* E047C4 80197A84 3C042903 */  lui         $a0, (0x29033081 >> 16)
/* E047C8 80197A88 34843081 */  ori         $a0, $a0, (0x29033081 & 0xFFFF)
/* E047CC 80197A8C AFAA0014 */  sw          $t2, 0x14($sp)
/* E047D0 80197A90 AFA70010 */  sw          $a3, 0x10($sp)
/* E047D4 80197A94 24060004 */  addiu       $a2, $zero, 0x4
/* E047D8 80197A98 0C006486 */  jal         Audio_PlaySfx
/* E047DC 80197A9C 24A503FC */   addiu      $a1, $a1, 0x3FC
/* E047E0 80197AA0 8FA20260 */  lw          $v0, 0x260($sp)
/* E047E4 80197AA4 44800000 */  mtc1        $zero, $fv0
/* E047E8 80197AA8 24190001 */  addiu       $t9, $zero, 0x1
/* E047EC 80197AAC A4590096 */  sh          $t9, 0x96($v0)
/* E047F0 80197AB0 E4400100 */  swc1        $fv0, 0x100($v0)
/* E047F4 80197AB4 E4400084 */  swc1        $fv0, 0x84($v0)
/* E047F8 80197AB8 E44000D8 */  swc1        $fv0, 0xD8($v0)
/* E047FC 80197ABC 10000014 */  b           .Li1_80197B10
/* E04800 80197AC0 8FA30260 */   lw         $v1, 0x260($sp)
.Li1_80197AC4:
/* E04804 80197AC4 846F0092 */  lh          $t7, 0x92($v1)
/* E04808 80197AC8 000FC080 */  sll         $t8, $t7, 2
/* E0480C 80197ACC 03D85821 */  addu        $t3, $fp, $t8
/* E04810 80197AD0 0C026B37 */  jal         Animation_GetFrameCount
/* E04814 80197AD4 8D640000 */   lw         $a0, 0x0($t3)
/* E04818 80197AD8 244DFFFF */  addiu       $t5, $v0, -0x1
/* E0481C 80197ADC 448D9000 */  mtc1        $t5, $ft5
/* E04820 80197AE0 8FA30260 */  lw          $v1, 0x260($sp)
/* E04824 80197AE4 44800000 */  mtc1        $zero, $fv0
/* E04828 80197AE8 46809220 */  cvt.s.w     $ft2, $ft5
/* E0482C 80197AEC 24080001 */  addiu       $t0, $zero, 0x1
/* E04830 80197AF0 A4680096 */  sh          $t0, 0x96($v1)
/* E04834 80197AF4 E4600084 */  swc1        $fv0, 0x84($v1)
/* E04838 80197AF8 E46000D8 */  swc1        $fv0, 0xD8($v1)
/* E0483C 80197AFC 10000004 */  b           .Li1_80197B10
/* E04840 80197B00 E4680100 */   swc1       $ft2, 0x100($v1)
.Li1_80197B04:
/* E04844 80197B04 44808000 */  mtc1        $zero, $ft4
/* E04848 80197B08 00000000 */  nop
/* E0484C 80197B0C E4700100 */  swc1        $ft4, 0x100($v1)
.Li1_80197B10:
/* E04850 80197B10 A4710090 */  sh          $s1, 0x90($v1)
/* E04854 80197B14 A470008A */  sh          $s0, 0x8A($v1)
/* E04858 80197B18 A475008C */  sh          $s5, 0x8C($v1)
/* E0485C 80197B1C A4720092 */  sh          $s2, 0x92($v1)
.Li1_80197B20:
/* E04860 80197B20 84690060 */  lh          $t1, 0x60($v1)
.Li1_80197B24:
/* E04864 80197B24 44800000 */  mtc1        $zero, $fv0
/* E04868 80197B28 5D20002C */  bgtzl       $t1, .Li1_80197BDC
/* E0486C 80197B2C 8FAB00B4 */   lw         $t3, 0xB4($sp)
/* E04870 80197B30 846C004E */  lh          $t4, 0x4E($v1)
/* E04874 80197B34 24010002 */  addiu       $at, $zero, 0x2
/* E04878 80197B38 55810028 */  bnel        $t4, $at, .Li1_80197BDC
/* E0487C 80197B3C 8FAB00B4 */   lw         $t3, 0xB4($sp)
/* E04880 80197B40 846E008A */  lh          $t6, 0x8A($v1)
/* E04884 80197B44 24010002 */  addiu       $at, $zero, 0x2
/* E04888 80197B48 51C10024 */  beql        $t6, $at, .Li1_80197BDC
/* E0488C 80197B4C 8FAB00B4 */   lw         $t3, 0xB4($sp)
/* E04890 80197B50 C46A0008 */  lwc1        $ft3, 0x8($v1)
/* E04894 80197B54 4600503E */  c.le.s      $ft3, $fv0
/* E04898 80197B58 00000000 */  nop
/* E0489C 80197B5C 4500001E */  bc1f        .Li1_80197BD8
/* E048A0 80197B60 3C02801A */   lui        $v0, %hi(D_i1_8019AD2C + 0x18)
/* E048A4 80197B64 8C42AD44 */  lw          $v0, %lo(D_i1_8019AD2C + 0x18)($v0)
/* E048A8 80197B68 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* E048AC 80197B6C 44813000 */  mtc1        $at, $ft1
/* E048B0 80197B70 84520000 */  lh          $s2, 0x0($v0)
/* E048B4 80197B74 3C01C4FA */  lui         $at, (0xC4FA0000 >> 16)
/* E048B8 80197B78 84710090 */  lh          $s1, 0x90($v1)
/* E048BC 80197B7C 44812000 */  mtc1        $at, $ft0
/* E048C0 80197B80 240A0003 */  addiu       $t2, $zero, 0x3
/* E048C4 80197B84 2419FFFF */  addiu       $t9, $zero, -0x1
/* E048C8 80197B88 240F0003 */  addiu       $t7, $zero, 0x3
/* E048CC 80197B8C 24180004 */  addiu       $t8, $zero, 0x4
/* E048D0 80197B90 3C041000 */  lui         $a0, (0x100000FF >> 16)
/* E048D4 80197B94 A46A009A */  sh          $t2, 0x9A($v1)
/* E048D8 80197B98 A479008E */  sh          $t9, 0x8E($v1)
/* E048DC 80197B9C E4600100 */  swc1        $fv0, 0x100($v1)
/* E048E0 80197BA0 A4600096 */  sh          $zero, 0x96($v1)
/* E048E4 80197BA4 A46F008A */  sh          $t7, 0x8A($v1)
/* E048E8 80197BA8 A460008C */  sh          $zero, 0x8C($v1)
/* E048EC 80197BAC A4780094 */  sh          $t8, 0x94($v1)
/* E048F0 80197BB0 348400FF */  ori         $a0, $a0, (0x100000FF & 0xFFFF)
/* E048F4 80197BB4 E4660104 */  swc1        $ft1, 0x104($v1)
/* E048F8 80197BB8 A4720092 */  sh          $s2, 0x92($v1)
/* E048FC 80197BBC A4710090 */  sh          $s1, 0x90($v1)
/* E04900 80197BC0 0C0060BD */  jal         func_800182F4
/* E04904 80197BC4 E46400E0 */   swc1       $ft0, 0xE0($v1)
/* E04908 80197BC8 3C041100 */  lui         $a0, (0x110000FF >> 16)
/* E0490C 80197BCC 0C0060BD */  jal         func_800182F4
/* E04910 80197BD0 348400FF */   ori        $a0, $a0, (0x110000FF & 0xFFFF)
/* E04914 80197BD4 8FA30260 */  lw          $v1, 0x260($sp)
.Li1_80197BD8:
/* E04918 80197BD8 8FAB00B4 */  lw          $t3, 0xB4($sp)
.Li1_80197BDC:
/* E0491C 80197BDC 24010001 */  addiu       $at, $zero, 0x1
/* E04920 80197BE0 11610003 */  beq         $t3, $at, .Li1_80197BF0
/* E04924 80197BE4 24010002 */   addiu      $at, $zero, 0x2
/* E04928 80197BE8 55610041 */  bnel        $t3, $at, .Li1_80197CF0
/* E0492C 80197BEC 8FAE00B8 */   lw         $t6, 0xB8($sp)
.Li1_80197BF0:
/* E04930 80197BF0 0C01DE0F */  jal         func_8007783C
/* E04934 80197BF4 2404018A */   addiu      $a0, $zero, 0x18A
/* E04938 80197BF8 1040003B */  beqz        $v0, .Li1_80197CE8
/* E0493C 80197BFC 00408025 */   or         $s0, $v0, $zero
/* E04940 80197C00 8FA50260 */  lw          $a1, 0x260($sp)
/* E04944 80197C04 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* E04948 80197C08 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* E0494C 80197C0C 27A600F8 */  addiu       $a2, $sp, 0xF8
/* E04950 80197C10 0C001A5C */  jal         Matrix_MultVec3f
/* E04954 80197C14 24A500E4 */   addiu      $a1, $a1, 0xE4
/* E04958 80197C18 8FA20260 */  lw          $v0, 0x260($sp)
/* E0495C 80197C1C 240D000B */  addiu       $t5, $zero, 0xB
/* E04960 80197C20 A60D007A */  sh          $t5, 0x7A($s0)
/* E04964 80197C24 8608007A */  lh          $t0, 0x7A($s0)
/* E04968 80197C28 3C014100 */  lui         $at, (0x41000000 >> 16)
/* E0496C 80197C2C A6080078 */  sh          $t0, 0x78($s0)
/* E04970 80197C30 C7A800F8 */  lwc1        $ft2, 0xF8($sp)
/* E04974 80197C34 C4520004 */  lwc1        $ft5, 0x4($v0)
/* E04978 80197C38 46089400 */  add.s       $ft4, $ft5, $ft2
/* E0497C 80197C3C E6100004 */  swc1        $ft4, 0x4($s0)
/* E04980 80197C40 C7A600FC */  lwc1        $ft1, 0xFC($sp)
/* E04984 80197C44 C44A0008 */  lwc1        $ft3, 0x8($v0)
/* E04988 80197C48 46065100 */  add.s       $ft0, $ft3, $ft1
/* E0498C 80197C4C 44815000 */  mtc1        $at, $ft3
/* E04990 80197C50 E6040008 */  swc1        $ft0, 0x8($s0)
/* E04994 80197C54 C7A80100 */  lwc1        $ft2, 0x100($sp)
/* E04998 80197C58 C452000C */  lwc1        $ft5, 0xC($v0)
/* E0499C 80197C5C E60A0070 */  swc1        $ft3, 0x70($s0)
/* E049A0 80197C60 46089400 */  add.s       $ft4, $ft5, $ft2
/* E049A4 80197C64 0C0013AC */  jal         Rand_ZeroOne
/* E049A8 80197C68 E610000C */   swc1       $ft4, 0xC($s0)
/* E049AC 80197C6C 461E0182 */  mul.s       $ft1, $fv0, $fs5
/* E049B0 80197C70 0C0013AC */  jal         Rand_ZeroOne
/* E049B4 80197C74 E6060018 */   swc1       $ft1, 0x18($s0)
/* E049B8 80197C78 46160101 */  sub.s       $ft0, $fv0, $fs1
/* E049BC 80197C7C 461C2482 */  mul.s       $ft5, $ft0, $fs4
/* E049C0 80197C80 0C0013AC */  jal         Rand_ZeroOne
/* E049C4 80197C84 E6120054 */   swc1       $ft5, 0x54($s0)
/* E049C8 80197C88 46160201 */  sub.s       $ft2, $fv0, $fs1
/* E049CC 80197C8C 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E049D0 80197C90 44818000 */  mtc1        $at, $ft4
/* E049D4 80197C94 00000000 */  nop
/* E049D8 80197C98 46104282 */  mul.s       $ft3, $ft2, $ft4
/* E049DC 80197C9C 0C0013AC */  jal         Rand_ZeroOne
/* E049E0 80197CA0 E60A0058 */   swc1       $ft3, 0x58($s0)
/* E049E4 80197CA4 46000180 */  add.s       $ft1, $fv0, $fv0
/* E049E8 80197CA8 3C014040 */  lui         $at, (0x40400000 >> 16)
/* E049EC 80197CAC 44812000 */  mtc1        $at, $ft0
/* E049F0 80197CB0 24090064 */  addiu       $t1, $zero, 0x64
/* E049F4 80197CB4 240CFFFB */  addiu       $t4, $zero, -0x5
/* E049F8 80197CB8 46043480 */  add.s       $ft5, $ft1, $ft0
/* E049FC 80197CBC A6090044 */  sh          $t1, 0x44($s0)
/* E04A00 80197CC0 A60C0046 */  sh          $t4, 0x46($s0)
/* E04A04 80197CC4 0C0013AC */  jal         Rand_ZeroOne
/* E04A08 80197CC8 E6120068 */   swc1       $ft5, 0x68($s0)
/* E04A0C 80197CCC 4616003C */  c.lt.s      $fv0, $fs1
/* E04A10 80197CD0 00000000 */  nop
/* E04A14 80197CD4 45020005 */  bc1fl       .Li1_80197CEC
/* E04A18 80197CD8 8FA30260 */   lw         $v1, 0x260($sp)
/* E04A1C 80197CDC C6080068 */  lwc1        $ft2, 0x68($s0)
/* E04A20 80197CE0 46004407 */  neg.s       $ft4, $ft2
/* E04A24 80197CE4 E6100068 */  swc1        $ft4, 0x68($s0)
.Li1_80197CE8:
/* E04A28 80197CE8 8FA30260 */  lw          $v1, 0x260($sp)
.Li1_80197CEC:
/* E04A2C 80197CEC 8FAE00B8 */  lw          $t6, 0xB8($sp)
.Li1_80197CF0:
/* E04A30 80197CF0 24010001 */  addiu       $at, $zero, 0x1
/* E04A34 80197CF4 11C10007 */  beq         $t6, $at, .Li1_80197D14
/* E04A38 80197CF8 24010002 */   addiu      $at, $zero, 0x2
/* E04A3C 80197CFC 11C1005C */  beq         $t6, $at, .Li1_80197E70
/* E04A40 80197D00 24010003 */   addiu      $at, $zero, 0x3
/* E04A44 80197D04 51C100B4 */  beql        $t6, $at, .Li1_80197FD8
/* E04A48 80197D08 846800B8 */   lh         $t0, 0xB8($v1)
/* E04A4C 80197D0C 1000016F */  b           .Li1_801982CC
/* E04A50 80197D10 8FBF007C */   lw         $ra, 0x7C($sp)
.Li1_80197D14:
/* E04A54 80197D14 8FA30260 */  lw          $v1, 0x260($sp)
/* E04A58 80197D18 3C01801A */  lui         $at, %hi(D_i1_8019B624)
/* E04A5C 80197D1C C436B624 */  lwc1        $fs1, %lo(D_i1_8019B624)($at)
/* E04A60 80197D20 3C108016 */  lui         $s0, %hi(gActors)
/* E04A64 80197D24 3C12801A */  lui         $s2, %hi(D_i1_80199CD0)
/* E04A68 80197D28 00009825 */  or          $s3, $zero, $zero
/* E04A6C 80197D2C 26103FE0 */  addiu       $s0, $s0, %lo(gActors)
/* E04A70 80197D30 26529CD0 */  addiu       $s2, $s2, %lo(D_i1_80199CD0)
/* E04A74 80197D34 00002825 */  or          $a1, $zero, $zero
/* E04A78 80197D38 24150118 */  addiu       $s5, $zero, 0x118
/* E04A7C 80197D3C 847400B6 */  lh          $s4, 0xB6($v1)
/* E04A80 80197D40 C474000C */  lwc1        $fs0, 0xC($v1)
/* E04A84 80197D44 4600B606 */  mov.s       $fs2, $fs1
.Li1_80197D48:
/* E04A88 80197D48 920A0000 */  lbu         $t2, 0x0($s0)
/* E04A8C 80197D4C 55400041 */  bnel        $t2, $zero, .Li1_80197E54
/* E04A90 80197D50 24A50001 */   addiu      $a1, $a1, 0x1
/* E04A94 80197D54 846200B4 */  lh          $v0, 0xB4($v1)
/* E04A98 80197D58 0053082A */  slt         $at, $v0, $s3
/* E04A9C 80197D5C 1420001A */  bnez        $at, .Li1_80197DC8
/* E04AA0 80197D60 0014C880 */   sll        $t9, $s4, 2
/* E04AA4 80197D64 0334C821 */  addu        $t9, $t9, $s4
/* E04AA8 80197D68 8EEB0000 */  lw          $t3, 0x0($s7)
/* E04AAC 80197D6C 0019C900 */  sll         $t9, $t9, 4
/* E04AB0 80197D70 02597821 */  addu        $t7, $s2, $t9
/* E04AB4 80197D74 0013C100 */  sll         $t8, $s3, 4
/* E04AB8 80197D78 01F88821 */  addu        $s1, $t7, $t8
/* E04ABC 80197D7C C62A0008 */  lwc1        $ft3, 0x8($s1)
/* E04AC0 80197D80 C5600138 */  lwc1        $fv0, 0x138($t3)
/* E04AC4 80197D84 460AA180 */  add.s       $ft1, $fs0, $ft3
/* E04AC8 80197D88 46160100 */  add.s       $ft0, $fv0, $fs1
/* E04ACC 80197D8C 4606203E */  c.le.s      $ft0, $ft1
/* E04AD0 80197D90 00000000 */  nop
/* E04AD4 80197D94 4502000D */  bc1fl       .Li1_80197DCC
/* E04AD8 80197D98 0053082A */   slt        $at, $v0, $s3
/* E04ADC 80197D9C 26730001 */  addiu       $s3, $s3, 0x1
.Li1_80197DA0:
/* E04AE0 80197DA0 0053082A */  slt         $at, $v0, $s3
/* E04AE4 80197DA4 14200008 */  bnez        $at, .Li1_80197DC8
/* E04AE8 80197DA8 26310010 */   addiu      $s1, $s1, 0x10
/* E04AEC 80197DAC C6320008 */  lwc1        $ft5, 0x8($s1)
/* E04AF0 80197DB0 46180400 */  add.s       $ft4, $fv0, $fs2
/* E04AF4 80197DB4 4612A200 */  add.s       $ft2, $fs0, $ft5
/* E04AF8 80197DB8 4608803E */  c.le.s      $ft4, $ft2
/* E04AFC 80197DBC 00000000 */  nop
/* E04B00 80197DC0 4503FFF7 */  bc1tl       .Li1_80197DA0
/* E04B04 80197DC4 26730001 */   addiu      $s3, $s3, 0x1
.Li1_80197DC8:
/* E04B08 80197DC8 0053082A */  slt         $at, $v0, $s3
.Li1_80197DCC:
/* E04B0C 80197DCC 1420001D */  bnez        $at, .Li1_80197E44
/* E04B10 80197DD0 00146880 */   sll        $t5, $s4, 2
/* E04B14 80197DD4 01B46821 */  addu        $t5, $t5, $s4
/* E04B18 80197DD8 000D6900 */  sll         $t5, $t5, 4
/* E04B1C 80197DDC 024D4021 */  addu        $t0, $s2, $t5
/* E04B20 80197DE0 00134900 */  sll         $t1, $s3, 4
/* E04B24 80197DE4 01098821 */  addu        $s1, $t0, $t1
/* E04B28 80197DE8 02002025 */  or          $a0, $s0, $zero
/* E04B2C 80197DEC 0C0184F1 */  jal         Actor_Initialize
/* E04B30 80197DF0 AFA500F4 */   sw         $a1, 0xF4($sp)
/* E04B34 80197DF4 240C0002 */  addiu       $t4, $zero, 0x2
/* E04B38 80197DF8 A20C0000 */  sb          $t4, 0x0($s0)
/* E04B3C 80197DFC A6150002 */  sh          $s5, 0x2($s0)
/* E04B40 80197E00 C62A0000 */  lwc1        $ft3, 0x0($s1)
/* E04B44 80197E04 240A0001 */  addiu       $t2, $zero, 0x1
/* E04B48 80197E08 2604001C */  addiu       $a0, $s0, 0x1C
/* E04B4C 80197E0C E60A0004 */  swc1        $ft3, 0x4($s0)
/* E04B50 80197E10 C6260004 */  lwc1        $ft1, 0x4($s1)
/* E04B54 80197E14 32A5FFFF */  andi        $a1, $s5, 0xFFFF
/* E04B58 80197E18 E6060008 */  swc1        $ft1, 0x8($s0)
/* E04B5C 80197E1C 8FAE0260 */  lw          $t6, 0x260($sp)
/* E04B60 80197E20 C6240008 */  lwc1        $ft0, 0x8($s1)
/* E04B64 80197E24 C5D2000C */  lwc1        $ft5, 0xC($t6)
/* E04B68 80197E28 A60A00B8 */  sh          $t2, 0xB8($s0)
/* E04B6C 80197E2C 46122200 */  add.s       $ft2, $ft0, $ft5
/* E04B70 80197E30 0C0184AE */  jal         Object_SetInfo
/* E04B74 80197E34 E608000C */   swc1       $ft2, 0xC($s0)
/* E04B78 80197E38 8FA30260 */  lw          $v1, 0x260($sp)
/* E04B7C 80197E3C 8FA500F4 */  lw          $a1, 0xF4($sp)
/* E04B80 80197E40 846200B4 */  lh          $v0, 0xB4($v1)
.Li1_80197E44:
/* E04B84 80197E44 26730001 */  addiu       $s3, $s3, 0x1
/* E04B88 80197E48 0053082A */  slt         $at, $v0, $s3
/* E04B8C 80197E4C 1420011E */  bnez        $at, .Li1_801982C8
/* E04B90 80197E50 24A50001 */   addiu      $a1, $a1, 0x1
.Li1_80197E54:
/* E04B94 80197E54 28A1003C */  slti        $at, $a1, 0x3C
/* E04B98 80197E58 240F0008 */  addiu       $t7, $zero, 0x8
/* E04B9C 80197E5C 261002F4 */  addiu       $s0, $s0, 0x2F4
/* E04BA0 80197E60 1420FFB9 */  bnez        $at, .Li1_80197D48
/* E04BA4 80197E64 A46F00A8 */   sh         $t7, 0xA8($v1)
/* E04BA8 80197E68 10000118 */  b           .Li1_801982CC
/* E04BAC 80197E6C 8FBF007C */   lw         $ra, 0x7C($sp)
.Li1_80197E70:
/* E04BB0 80197E70 3C01801A */  lui         $at, %hi(D_i1_8019B628)
/* E04BB4 80197E74 C436B628 */  lwc1        $fs1, %lo(D_i1_8019B628)($at)
/* E04BB8 80197E78 8FA50260 */  lw          $a1, 0x260($sp)
/* E04BBC 80197E7C 3C014334 */  lui         $at, (0x43340000 >> 16)
/* E04BC0 80197E80 3C108016 */  lui         $s0, %hi(gActors)
/* E04BC4 80197E84 3C12801A */  lui         $s2, %hi(D_i1_80199B40)
/* E04BC8 80197E88 4481D000 */  mtc1        $at, $fs3
/* E04BCC 80197E8C 00009825 */  or          $s3, $zero, $zero
/* E04BD0 80197E90 26103FE0 */  addiu       $s0, $s0, %lo(gActors)
/* E04BD4 80197E94 26529B40 */  addiu       $s2, $s2, %lo(D_i1_80199B40)
/* E04BD8 80197E98 00001825 */  or          $v1, $zero, $zero
/* E04BDC 80197E9C 24150118 */  addiu       $s5, $zero, 0x118
/* E04BE0 80197EA0 4600B606 */  mov.s       $fs2, $fs1
/* E04BE4 80197EA4 84B400B6 */  lh          $s4, 0xB6($a1)
/* E04BE8 80197EA8 C4B4000C */  lwc1        $fs0, 0xC($a1)
.Li1_80197EAC:
/* E04BEC 80197EAC 92180000 */  lbu         $t8, 0x0($s0)
/* E04BF0 80197EB0 57000042 */  bnel        $t8, $zero, .Li1_80197FBC
/* E04BF4 80197EB4 24630001 */   addiu      $v1, $v1, 0x1
/* E04BF8 80197EB8 84A200B4 */  lh          $v0, 0xB4($a1)
/* E04BFC 80197EBC 0262082A */  slt         $at, $s3, $v0
/* E04C00 80197EC0 1020001A */  beqz        $at, .Li1_80197F2C
/* E04C04 80197EC4 00145880 */   sll        $t3, $s4, 2
/* E04C08 80197EC8 01745821 */  addu        $t3, $t3, $s4
/* E04C0C 80197ECC 8EE90000 */  lw          $t1, 0x0($s7)
/* E04C10 80197ED0 000B5900 */  sll         $t3, $t3, 4
/* E04C14 80197ED4 024B6821 */  addu        $t5, $s2, $t3
/* E04C18 80197ED8 00134100 */  sll         $t0, $s3, 4
/* E04C1C 80197EDC 01A88821 */  addu        $s1, $t5, $t0
/* E04C20 80197EE0 C6300008 */  lwc1        $ft4, 0x8($s1)
/* E04C24 80197EE4 C520007C */  lwc1        $fv0, 0x7C($t1)
/* E04C28 80197EE8 46148280 */  add.s       $ft3, $ft4, $fs0
/* E04C2C 80197EEC 46160180 */  add.s       $ft1, $fv0, $fs1
/* E04C30 80197EF0 460A303E */  c.le.s      $ft1, $ft3
/* E04C34 80197EF4 00000000 */  nop
/* E04C38 80197EF8 4502000D */  bc1fl       .Li1_80197F30
/* E04C3C 80197EFC 0053082A */   slt        $at, $v0, $s3
/* E04C40 80197F00 26730001 */  addiu       $s3, $s3, 0x1
.Li1_80197F04:
/* E04C44 80197F04 0262082A */  slt         $at, $s3, $v0
/* E04C48 80197F08 10200008 */  beqz        $at, .Li1_80197F2C
/* E04C4C 80197F0C 26310010 */   addiu      $s1, $s1, 0x10
/* E04C50 80197F10 C6240008 */  lwc1        $ft0, 0x8($s1)
/* E04C54 80197F14 46180200 */  add.s       $ft2, $fv0, $fs2
/* E04C58 80197F18 46142480 */  add.s       $ft5, $ft0, $fs0
/* E04C5C 80197F1C 4612403E */  c.le.s      $ft2, $ft5
/* E04C60 80197F20 00000000 */  nop
/* E04C64 80197F24 4503FFF7 */  bc1tl       .Li1_80197F04
/* E04C68 80197F28 26730001 */   addiu      $s3, $s3, 0x1
.Li1_80197F2C:
/* E04C6C 80197F2C 0053082A */  slt         $at, $v0, $s3
.Li1_80197F30:
/* E04C70 80197F30 1420001E */  bnez        $at, .Li1_80197FAC
/* E04C74 80197F34 00146080 */   sll        $t4, $s4, 2
/* E04C78 80197F38 01946021 */  addu        $t4, $t4, $s4
/* E04C7C 80197F3C 000C6100 */  sll         $t4, $t4, 4
/* E04C80 80197F40 024C7021 */  addu        $t6, $s2, $t4
/* E04C84 80197F44 00135100 */  sll         $t2, $s3, 4
/* E04C88 80197F48 01CA8821 */  addu        $s1, $t6, $t2
/* E04C8C 80197F4C 02002025 */  or          $a0, $s0, $zero
/* E04C90 80197F50 0C0184F1 */  jal         Actor_Initialize
/* E04C94 80197F54 AFA300F4 */   sw         $v1, 0xF4($sp)
/* E04C98 80197F58 24190002 */  addiu       $t9, $zero, 0x2
/* E04C9C 80197F5C A2190000 */  sb          $t9, 0x0($s0)
/* E04CA0 80197F60 A6150002 */  sh          $s5, 0x2($s0)
/* E04CA4 80197F64 C6300000 */  lwc1        $ft4, 0x0($s1)
/* E04CA8 80197F68 24180001 */  addiu       $t8, $zero, 0x1
/* E04CAC 80197F6C 2604001C */  addiu       $a0, $s0, 0x1C
/* E04CB0 80197F70 E6100004 */  swc1        $ft4, 0x4($s0)
/* E04CB4 80197F74 C62A0004 */  lwc1        $ft3, 0x4($s1)
/* E04CB8 80197F78 32A5FFFF */  andi        $a1, $s5, 0xFFFF
/* E04CBC 80197F7C E60A0008 */  swc1        $ft3, 0x8($s0)
/* E04CC0 80197F80 8FAF0260 */  lw          $t7, 0x260($sp)
/* E04CC4 80197F84 C6260008 */  lwc1        $ft1, 0x8($s1)
/* E04CC8 80197F88 C5E4000C */  lwc1        $ft0, 0xC($t7)
/* E04CCC 80197F8C E61A0014 */  swc1        $fs3, 0x14($s0)
/* E04CD0 80197F90 A61800B8 */  sh          $t8, 0xB8($s0)
/* E04CD4 80197F94 46043480 */  add.s       $ft5, $ft1, $ft0
/* E04CD8 80197F98 0C0184AE */  jal         Object_SetInfo
/* E04CDC 80197F9C E612000C */   swc1       $ft5, 0xC($s0)
/* E04CE0 80197FA0 8FA50260 */  lw          $a1, 0x260($sp)
/* E04CE4 80197FA4 8FA300F4 */  lw          $v1, 0xF4($sp)
/* E04CE8 80197FA8 84A200B4 */  lh          $v0, 0xB4($a1)
.Li1_80197FAC:
/* E04CEC 80197FAC 26730001 */  addiu       $s3, $s3, 0x1
/* E04CF0 80197FB0 0053082A */  slt         $at, $v0, $s3
/* E04CF4 80197FB4 14200004 */  bnez        $at, .Li1_80197FC8
/* E04CF8 80197FB8 24630001 */   addiu      $v1, $v1, 0x1
.Li1_80197FBC:
/* E04CFC 80197FBC 2861003C */  slti        $at, $v1, 0x3C
/* E04D00 80197FC0 1420FFBA */  bnez        $at, .Li1_80197EAC
/* E04D04 80197FC4 261002F4 */   addiu      $s0, $s0, 0x2F4
.Li1_80197FC8:
/* E04D08 80197FC8 240D0008 */  addiu       $t5, $zero, 0x8
/* E04D0C 80197FCC 100000BE */  b           .Li1_801982C8
/* E04D10 80197FD0 A4AD00A8 */   sh         $t5, 0xA8($a1)
/* E04D14 80197FD4 846800B8 */  lh          $t0, 0xB8($v1)
.Li1_80197FD8:
/* E04D18 80197FD8 24010001 */  addiu       $at, $zero, 0x1
/* E04D1C 80197FDC 55010059 */  bnel        $t0, $at, .Li1_80198144
/* E04D20 80197FE0 3C014516 */   lui        $at, (0x45160000 >> 16)
/* E04D24 80197FE4 8EEC0000 */  lw          $t4, 0x0($s7)
/* E04D28 80197FE8 8FA90260 */  lw          $t1, 0x260($sp)
/* E04D2C 80197FEC 3C01801A */  lui         $at, %hi(D_i1_8019B62C)
/* E04D30 80197FF0 C436B62C */  lwc1        $fs1, %lo(D_i1_8019B62C)($at)
/* E04D34 80197FF4 C588007C */  lwc1        $ft2, 0x7C($t4)
/* E04D38 80197FF8 3C108016 */  lui         $s0, %hi(gActors)
/* E04D3C 80197FFC 3C16801A */  lui         $s6, %hi(D_i1_80199E6C)
/* E04D40 80198000 3C15801A */  lui         $s5, %hi(D_i1_80199E60)
/* E04D44 80198004 00009825 */  or          $s3, $zero, $zero
/* E04D48 80198008 26103FE0 */  addiu       $s0, $s0, %lo(gActors)
/* E04D4C 8019800C 26B59E60 */  addiu       $s5, $s5, %lo(D_i1_80199E60)
/* E04D50 80198010 26D69E6C */  addiu       $s6, $s6, %lo(D_i1_80199E6C)
/* E04D54 80198014 2417011B */  addiu       $s7, $zero, 0x11B
/* E04D58 80198018 00001825 */  or          $v1, $zero, $zero
/* E04D5C 8019801C 241E003C */  addiu       $fp, $zero, 0x3C
/* E04D60 80198020 853400B6 */  lh          $s4, 0xB6($t1)
/* E04D64 80198024 C534000C */  lwc1        $fs0, 0xC($t1)
/* E04D68 80198028 46164600 */  add.s       $fs2, $ft2, $fs1
.Li1_8019802C:
/* E04D6C 8019802C 920E0000 */  lbu         $t6, 0x0($s0)
/* E04D70 80198030 15C0003F */  bnez        $t6, .Li1_80198130
/* E04D74 80198034 00145040 */   sll        $t2, $s4, 1
/* E04D78 80198038 02AA9021 */  addu        $s2, $s5, $t2
/* E04D7C 8019803C 86420000 */  lh          $v0, 0x0($s2)
/* E04D80 80198040 0262082A */  slt         $at, $s3, $v0
/* E04D84 80198044 10200016 */  beqz        $at, .Li1_801980A0
/* E04D88 80198048 0014C880 */   sll        $t9, $s4, 2
/* E04D8C 8019804C 0334C821 */  addu        $t9, $t9, $s4
/* E04D90 80198050 0019C900 */  sll         $t9, $t9, 4
/* E04D94 80198054 02D97821 */  addu        $t7, $s6, $t9
/* E04D98 80198058 0013C100 */  sll         $t8, $s3, 4
/* E04D9C 8019805C 01F88821 */  addu        $s1, $t7, $t8
/* E04DA0 80198060 C6300008 */  lwc1        $ft4, 0x8($s1)
/* E04DA4 80198064 46148280 */  add.s       $ft3, $ft4, $fs0
/* E04DA8 80198068 460AC03E */  c.le.s      $fs2, $ft3
/* E04DAC 8019806C 00000000 */  nop
/* E04DB0 80198070 4502000C */  bc1fl       .Li1_801980A4
/* E04DB4 80198074 0053082A */   slt        $at, $v0, $s3
/* E04DB8 80198078 26730001 */  addiu       $s3, $s3, 0x1
.Li1_8019807C:
/* E04DBC 8019807C 0262082A */  slt         $at, $s3, $v0
/* E04DC0 80198080 10200007 */  beqz        $at, .Li1_801980A0
/* E04DC4 80198084 26310010 */   addiu      $s1, $s1, 0x10
/* E04DC8 80198088 C6260008 */  lwc1        $ft1, 0x8($s1)
/* E04DCC 8019808C 46143100 */  add.s       $ft0, $ft1, $fs0
/* E04DD0 80198090 4604C03E */  c.le.s      $fs2, $ft0
/* E04DD4 80198094 00000000 */  nop
/* E04DD8 80198098 4503FFF8 */  bc1tl       .Li1_8019807C
/* E04DDC 8019809C 26730001 */   addiu      $s3, $s3, 0x1
.Li1_801980A0:
/* E04DE0 801980A0 0053082A */  slt         $at, $v0, $s3
.Li1_801980A4:
/* E04DE4 801980A4 1420001C */  bnez        $at, .Li1_80198118
/* E04DE8 801980A8 00145880 */   sll        $t3, $s4, 2
/* E04DEC 801980AC 01745821 */  addu        $t3, $t3, $s4
/* E04DF0 801980B0 000B5900 */  sll         $t3, $t3, 4
/* E04DF4 801980B4 02CB6821 */  addu        $t5, $s6, $t3
/* E04DF8 801980B8 00134100 */  sll         $t0, $s3, 4
/* E04DFC 801980BC 01A88821 */  addu        $s1, $t5, $t0
/* E04E00 801980C0 02002025 */  or          $a0, $s0, $zero
/* E04E04 801980C4 0C0184F1 */  jal         Actor_Initialize
/* E04E08 801980C8 AFA300F4 */   sw         $v1, 0xF4($sp)
/* E04E0C 801980CC 24090002 */  addiu       $t1, $zero, 0x2
/* E04E10 801980D0 A2090000 */  sb          $t1, 0x0($s0)
/* E04E14 801980D4 A6170002 */  sh          $s7, 0x2($s0)
/* E04E18 801980D8 C6320000 */  lwc1        $ft5, 0x0($s1)
/* E04E1C 801980DC 240E0001 */  addiu       $t6, $zero, 0x1
/* E04E20 801980E0 2604001C */  addiu       $a0, $s0, 0x1C
/* E04E24 801980E4 E6120004 */  swc1        $ft5, 0x4($s0)
/* E04E28 801980E8 C6280004 */  lwc1        $ft2, 0x4($s1)
/* E04E2C 801980EC 32E5FFFF */  andi        $a1, $s7, 0xFFFF
/* E04E30 801980F0 E6080008 */  swc1        $ft2, 0x8($s0)
/* E04E34 801980F4 8FAC0260 */  lw          $t4, 0x260($sp)
/* E04E38 801980F8 C6300008 */  lwc1        $ft4, 0x8($s1)
/* E04E3C 801980FC C58A000C */  lwc1        $ft3, 0xC($t4)
/* E04E40 80198100 A60E00B8 */  sh          $t6, 0xB8($s0)
/* E04E44 80198104 460A8180 */  add.s       $ft1, $ft4, $ft3
/* E04E48 80198108 0C0184AE */  jal         Object_SetInfo
/* E04E4C 8019810C E606000C */   swc1       $ft1, 0xC($s0)
/* E04E50 80198110 86420000 */  lh          $v0, 0x0($s2)
/* E04E54 80198114 8FA300F4 */  lw          $v1, 0xF4($sp)
.Li1_80198118:
/* E04E58 80198118 26730001 */  addiu       $s3, $s3, 0x1
/* E04E5C 8019811C 0053082A */  slt         $at, $v0, $s3
/* E04E60 80198120 50200004 */  beql        $at, $zero, .Li1_80198134
/* E04E64 80198124 24630001 */   addiu      $v1, $v1, 0x1
/* E04E68 80198128 10000005 */  b           .Li1_80198140
/* E04E6C 8019812C 8FA30260 */   lw         $v1, 0x260($sp)
.Li1_80198130:
/* E04E70 80198130 24630001 */  addiu       $v1, $v1, 0x1
.Li1_80198134:
/* E04E74 80198134 147EFFBD */  bne         $v1, $fp, .Li1_8019802C
/* E04E78 80198138 261002F4 */   addiu      $s0, $s0, 0x2F4
/* E04E7C 8019813C 8FA30260 */  lw          $v1, 0x260($sp)
.Li1_80198140:
/* E04E80 80198140 3C014516 */  lui         $at, (0x45160000 >> 16)
.Li1_80198144:
/* E04E84 80198144 44816000 */  mtc1        $at, $fa0
/* E04E88 80198148 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* E04E8C 8019814C 3C108016 */  lui         $s0, %hi(gActors)
/* E04E90 80198150 44811000 */  mtc1        $at, $fv1
/* E04E94 80198154 241E003C */  addiu       $fp, $zero, 0x3C
/* E04E98 80198158 26103FE0 */  addiu       $s0, $s0, %lo(gActors)
/* E04E9C 8019815C 00003025 */  or          $a2, $zero, $zero
/* E04EA0 80198160 2405011A */  addiu       $a1, $zero, 0x11A
/* E04EA4 80198164 24040119 */  addiu       $a0, $zero, 0x119
.Li1_80198168:
/* E04EA8 80198168 96020002 */  lhu         $v0, 0x2($s0)
/* E04EAC 8019816C 50820004 */  beql        $a0, $v0, .Li1_80198180
/* E04EB0 80198170 860A00B8 */   lh         $t2, 0xB8($s0)
/* E04EB4 80198174 54A20011 */  bnel        $a1, $v0, .Li1_801981BC
/* E04EB8 80198178 960202F6 */   lhu        $v0, 0x2F6($s0)
/* E04EBC 8019817C 860A00B8 */  lh          $t2, 0xB8($s0)
.Li1_80198180:
/* E04EC0 80198180 5540000E */  bnel        $t2, $zero, .Li1_801981BC
/* E04EC4 80198184 960202F6 */   lhu        $v0, 0x2F6($s0)
/* E04EC8 80198188 C604000C */  lwc1        $ft0, 0xC($s0)
/* E04ECC 8019818C C472000C */  lwc1        $ft5, 0xC($v1)
/* E04ED0 80198190 46122001 */  sub.s       $fv0, $ft0, $ft5
/* E04ED4 80198194 4600103E */  c.le.s      $fv1, $fv0
/* E04ED8 80198198 00000000 */  nop
/* E04EDC 8019819C 45020007 */  bc1fl       .Li1_801981BC
/* E04EE0 801981A0 960202F6 */   lhu        $v0, 0x2F6($s0)
/* E04EE4 801981A4 460C003E */  c.le.s      $fv0, $fa0
/* E04EE8 801981A8 00000000 */  nop
/* E04EEC 801981AC 45000002 */  bc1f        .Li1_801981B8
/* E04EF0 801981B0 24190001 */   addiu      $t9, $zero, 0x1
/* E04EF4 801981B4 A61900B8 */  sh          $t9, 0xB8($s0)
.Li1_801981B8:
/* E04EF8 801981B8 960202F6 */  lhu         $v0, 0x2F6($s0)
.Li1_801981BC:
/* E04EFC 801981BC 261002F4 */  addiu       $s0, $s0, 0x2F4
/* E04F00 801981C0 50820004 */  beql        $a0, $v0, .Li1_801981D4
/* E04F04 801981C4 860F00B8 */   lh         $t7, 0xB8($s0)
/* E04F08 801981C8 54A20011 */  bnel        $a1, $v0, .Li1_80198210
/* E04F0C 801981CC 960202F6 */   lhu        $v0, 0x2F6($s0)
/* E04F10 801981D0 860F00B8 */  lh          $t7, 0xB8($s0)
.Li1_801981D4:
/* E04F14 801981D4 55E0000E */  bnel        $t7, $zero, .Li1_80198210
/* E04F18 801981D8 960202F6 */   lhu        $v0, 0x2F6($s0)
/* E04F1C 801981DC C608000C */  lwc1        $ft2, 0xC($s0)
/* E04F20 801981E0 C470000C */  lwc1        $ft4, 0xC($v1)
/* E04F24 801981E4 46104001 */  sub.s       $fv0, $ft2, $ft4
/* E04F28 801981E8 4600103E */  c.le.s      $fv1, $fv0
/* E04F2C 801981EC 00000000 */  nop
/* E04F30 801981F0 45020007 */  bc1fl       .Li1_80198210
/* E04F34 801981F4 960202F6 */   lhu        $v0, 0x2F6($s0)
/* E04F38 801981F8 460C003E */  c.le.s      $fv0, $fa0
/* E04F3C 801981FC 00000000 */  nop
/* E04F40 80198200 45000002 */  bc1f        .Li1_8019820C
/* E04F44 80198204 24180001 */   addiu      $t8, $zero, 0x1
/* E04F48 80198208 A61800B8 */  sh          $t8, 0xB8($s0)
.Li1_8019820C:
/* E04F4C 8019820C 960202F6 */  lhu         $v0, 0x2F6($s0)
.Li1_80198210:
/* E04F50 80198210 261002F4 */  addiu       $s0, $s0, 0x2F4
/* E04F54 80198214 50820004 */  beql        $a0, $v0, .Li1_80198228
/* E04F58 80198218 860B00B8 */   lh         $t3, 0xB8($s0)
/* E04F5C 8019821C 54A20011 */  bnel        $a1, $v0, .Li1_80198264
/* E04F60 80198220 960202F6 */   lhu        $v0, 0x2F6($s0)
/* E04F64 80198224 860B00B8 */  lh          $t3, 0xB8($s0)
.Li1_80198228:
/* E04F68 80198228 5560000E */  bnel        $t3, $zero, .Li1_80198264
/* E04F6C 8019822C 960202F6 */   lhu        $v0, 0x2F6($s0)
/* E04F70 80198230 C60A000C */  lwc1        $ft3, 0xC($s0)
/* E04F74 80198234 C466000C */  lwc1        $ft1, 0xC($v1)
/* E04F78 80198238 46065001 */  sub.s       $fv0, $ft3, $ft1
/* E04F7C 8019823C 4600103E */  c.le.s      $fv1, $fv0
/* E04F80 80198240 00000000 */  nop
/* E04F84 80198244 45020007 */  bc1fl       .Li1_80198264
/* E04F88 80198248 960202F6 */   lhu        $v0, 0x2F6($s0)
/* E04F8C 8019824C 460C003E */  c.le.s      $fv0, $fa0
/* E04F90 80198250 00000000 */  nop
/* E04F94 80198254 45000002 */  bc1f        .Li1_80198260
/* E04F98 80198258 240D0001 */   addiu      $t5, $zero, 0x1
/* E04F9C 8019825C A60D00B8 */  sh          $t5, 0xB8($s0)
.Li1_80198260:
/* E04FA0 80198260 960202F6 */  lhu         $v0, 0x2F6($s0)
.Li1_80198264:
/* E04FA4 80198264 261002F4 */  addiu       $s0, $s0, 0x2F4
/* E04FA8 80198268 50820004 */  beql        $a0, $v0, .Li1_8019827C
/* E04FAC 8019826C 860800B8 */   lh         $t0, 0xB8($s0)
/* E04FB0 80198270 54A20011 */  bnel        $a1, $v0, .Li1_801982B8
/* E04FB4 80198274 24C60004 */   addiu      $a2, $a2, 0x4
/* E04FB8 80198278 860800B8 */  lh          $t0, 0xB8($s0)
.Li1_8019827C:
/* E04FBC 8019827C 5500000E */  bnel        $t0, $zero, .Li1_801982B8
/* E04FC0 80198280 24C60004 */   addiu      $a2, $a2, 0x4
/* E04FC4 80198284 C604000C */  lwc1        $ft0, 0xC($s0)
/* E04FC8 80198288 C472000C */  lwc1        $ft5, 0xC($v1)
/* E04FCC 8019828C 46122001 */  sub.s       $fv0, $ft0, $ft5
/* E04FD0 80198290 4600103E */  c.le.s      $fv1, $fv0
/* E04FD4 80198294 00000000 */  nop
/* E04FD8 80198298 45020007 */  bc1fl       .Li1_801982B8
/* E04FDC 8019829C 24C60004 */   addiu      $a2, $a2, 0x4
/* E04FE0 801982A0 460C003E */  c.le.s      $fv0, $fa0
/* E04FE4 801982A4 00000000 */  nop
/* E04FE8 801982A8 45000002 */  bc1f        .Li1_801982B4
/* E04FEC 801982AC 24090001 */   addiu      $t1, $zero, 0x1
/* E04FF0 801982B0 A60900B8 */  sh          $t1, 0xB8($s0)
.Li1_801982B4:
/* E04FF4 801982B4 24C60004 */  addiu       $a2, $a2, 0x4
.Li1_801982B8:
/* E04FF8 801982B8 14DEFFAB */  bne         $a2, $fp, .Li1_80198168
/* E04FFC 801982BC 261002F4 */   addiu      $s0, $s0, 0x2F4
/* E05000 801982C0 240C0008 */  addiu       $t4, $zero, 0x8
/* E05004 801982C4 A46C00A8 */  sh          $t4, 0xA8($v1)
.Li1_801982C8:
/* E05008 801982C8 8FBF007C */  lw          $ra, 0x7C($sp)
.Li1_801982CC:
/* E0500C 801982CC D7B40028 */  ldc1        $fs0, 0x28($sp)
/* E05010 801982D0 D7B60030 */  ldc1        $fs1, 0x30($sp)
/* E05014 801982D4 D7B80038 */  ldc1        $fs2, 0x38($sp)
/* E05018 801982D8 D7BA0040 */  ldc1        $fs3, 0x40($sp)
/* E0501C 801982DC D7BC0048 */  ldc1        $fs4, 0x48($sp)
/* E05020 801982E0 D7BE0050 */  ldc1        $fs5, 0x50($sp)
/* E05024 801982E4 8FB00058 */  lw          $s0, 0x58($sp)
/* E05028 801982E8 8FB1005C */  lw          $s1, 0x5C($sp)
/* E0502C 801982EC 8FB20060 */  lw          $s2, 0x60($sp)
/* E05030 801982F0 8FB30064 */  lw          $s3, 0x64($sp)
/* E05034 801982F4 8FB40068 */  lw          $s4, 0x68($sp)
/* E05038 801982F8 8FB5006C */  lw          $s5, 0x6C($sp)
/* E0503C 801982FC 8FB60070 */  lw          $s6, 0x70($sp)
/* E05040 80198300 8FB70074 */  lw          $s7, 0x74($sp)
/* E05044 80198304 8FBE0078 */  lw          $fp, 0x78($sp)
/* E05048 80198308 03E00008 */  jr          $ra
/* E0504C 8019830C 27BD0260 */   addiu      $sp, $sp, 0x260
glabel func_i1_80198310
/* E05050 80198310 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* E05054 80198314 AFB00020 */  sw          $s0, 0x20($sp)
/* E05058 80198318 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* E0505C 8019831C 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* E05060 80198320 AFBF0024 */  sw          $ra, 0x24($sp)
/* E05064 80198324 AFA40028 */  sw          $a0, 0x28($sp)
/* E05068 80198328 02002025 */  or          $a0, $s0, $zero
/* E0506C 8019832C 0C02E374 */  jal         RCP_SetupDL
/* E05070 80198330 24050041 */   addiu      $a1, $zero, 0x41
/* E05074 80198334 44800000 */  mtc1        $zero, $fv0
/* E05078 80198338 3C01C0A0 */  lui         $at, (0xC0A00000 >> 16)
/* E0507C 8019833C 8E020000 */  lw          $v0, 0x0($s0)
/* E05080 80198340 3C0FFA00 */  lui         $t7, (0xFA000000 >> 16)
/* E05084 80198344 241800FF */  addiu       $t8, $zero, 0xFF
/* E05088 80198348 244E0008 */  addiu       $t6, $v0, 0x8
/* E0508C 8019834C AE0E0000 */  sw          $t6, 0x0($s0)
/* E05090 80198350 AC580004 */  sw          $t8, 0x4($v0)
/* E05094 80198354 AC4F0000 */  sw          $t7, 0x0($v0)
/* E05098 80198358 8E020000 */  lw          $v0, 0x0($s0)
/* E0509C 8019835C 3C09FB00 */  lui         $t1, (0xFB000000 >> 16)
/* E050A0 80198360 44812000 */  mtc1        $at, $ft0
/* E050A4 80198364 24590008 */  addiu       $t9, $v0, 0x8
/* E050A8 80198368 AE190000 */  sw          $t9, 0x0($s0)
/* E050AC 8019836C AC400004 */  sw          $zero, 0x4($v0)
/* E050B0 80198370 AC490000 */  sw          $t1, 0x0($v0)
/* E050B4 80198374 3C018018 */  lui         $at, %hi(D_8017847C)
/* E050B8 80198378 C426847C */  lwc1        $ft1, %lo(D_8017847C)($at)
/* E050BC 8019837C 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* E050C0 80198380 44050000 */  mfc1        $a1, $fv0
/* E050C4 80198384 46062200 */  add.s       $ft2, $ft0, $ft1
/* E050C8 80198388 44070000 */  mfc1        $a3, $fv0
/* E050CC 8019838C 240A0001 */  addiu       $t2, $zero, 0x1
/* E050D0 80198390 AFAA0010 */  sw          $t2, 0x10($sp)
/* E050D4 80198394 44064000 */  mfc1        $a2, $ft2
/* E050D8 80198398 0C0016C0 */  jal         Matrix_Translate
/* E050DC 8019839C 8C84B3C0 */   lw         $a0, %lo(gGfxMatrix)($a0)
/* E050E0 801983A0 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* E050E4 801983A4 240B0001 */  addiu       $t3, $zero, 0x1
/* E050E8 801983A8 AFAB0010 */  sw          $t3, 0x10($sp)
/* E050EC 801983AC 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* E050F0 801983B0 3C054120 */  lui         $a1, (0x41200000 >> 16)
/* E050F4 801983B4 24060000 */  addiu       $a2, $zero, 0x0
/* E050F8 801983B8 0C00170D */  jal         Matrix_Scale
/* E050FC 801983BC 3C074100 */   lui        $a3, (0x41000000 >> 16)
/* E05100 801983C0 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* E05104 801983C4 3C05BFC9 */  lui         $a1, (0xBFC90FDB >> 16)
/* E05108 801983C8 34A50FDB */  ori         $a1, $a1, (0xBFC90FDB & 0xFFFF)
/* E0510C 801983CC 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* E05110 801983D0 0C001751 */  jal         Matrix_RotateX
/* E05114 801983D4 24060001 */   addiu      $a2, $zero, 0x1
/* E05118 801983D8 0C001BAE */  jal         Matrix_SetGfxMtx
/* E0511C 801983DC 02002025 */   or         $a0, $s0, $zero
/* E05120 801983E0 8E020000 */  lw          $v0, 0x0($s0)
/* E05124 801983E4 3C0E0102 */  lui         $t6, %hi(D_1024AC0)
/* E05128 801983E8 25CE4AC0 */  addiu       $t6, $t6, %lo(D_1024AC0)
/* E0512C 801983EC 244C0008 */  addiu       $t4, $v0, 0x8
/* E05130 801983F0 AE0C0000 */  sw          $t4, 0x0($s0)
/* E05134 801983F4 3C0D0600 */  lui         $t5, (0x6000000 >> 16)
/* E05138 801983F8 AC4D0000 */  sw          $t5, 0x0($v0)
/* E0513C 801983FC AC4E0004 */  sw          $t6, 0x4($v0)
/* E05140 80198400 8FBF0024 */  lw          $ra, 0x24($sp)
/* E05144 80198404 8FB00020 */  lw          $s0, 0x20($sp)
/* E05148 80198408 27BD0028 */  addiu       $sp, $sp, 0x28
/* E0514C 8019840C 03E00008 */  jr          $ra
/* E05150 80198410 00000000 */   nop
glabel func_i1_80198414
/* E05154 80198414 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E05158 80198418 AFBF0014 */  sw          $ra, 0x14($sp)
/* E0515C 8019841C 3C028017 */  lui         $v0, %hi(gSavedTeamShields + 0x4)
/* E05160 80198420 8C4278D4 */  lw          $v0, %lo(gSavedTeamShields + 0x4)($v0)
/* E05164 80198424 3C018017 */  lui         $at, %hi(D_80177C3C)
/* E05168 80198428 240B0002 */  addiu       $t3, $zero, 0x2
/* E0516C 8019842C AC227C3C */  sw          $v0, %lo(D_80177C3C)($at)
/* E05170 80198430 3C018017 */  lui         $at, %hi(D_801778F4)
/* E05174 80198434 AC2278F4 */  sw          $v0, %lo(D_801778F4)($at)
/* E05178 80198438 3C028017 */  lui         $v0, %hi(gTeamShields + 0x4)
/* E0517C 8019843C 8C4278B4 */  lw          $v0, %lo(gTeamShields + 0x4)($v0)
/* E05180 80198440 3C018017 */  lui         $at, %hi(gSavedTeamShields + 0x4)
/* E05184 80198444 3C0F8017 */  lui         $t7, %hi(gSavedTeamShields)
/* E05188 80198448 AC2278D4 */  sw          $v0, %lo(gSavedTeamShields + 0x4)($at)
/* E0518C 8019844C 25EF78D0 */  addiu       $t7, $t7, %lo(gSavedTeamShields)
/* E05190 80198450 000B1880 */  sll         $v1, $t3, 2
/* E05194 80198454 006F1021 */  addu        $v0, $v1, $t7
/* E05198 80198458 3C198017 */  lui         $t9, %hi(gTeamShields)
/* E0519C 8019845C 273978B0 */  addiu       $t9, $t9, %lo(gTeamShields)
/* E051A0 80198460 3C0E8017 */  lui         $t6, %hi(D_80177C38)
/* E051A4 80198464 3C188017 */  lui         $t8, %hi(D_801778F0)
/* E051A8 80198468 00793021 */  addu        $a2, $v1, $t9
/* E051AC 8019846C 25CE7C38 */  addiu       $t6, $t6, %lo(D_80177C38)
/* E051B0 80198470 271878F0 */  addiu       $t8, $t8, %lo(D_801778F0)
/* E051B4 80198474 006E2021 */  addu        $a0, $v1, $t6
/* E051B8 80198478 00782821 */  addu        $a1, $v1, $t8
/* E051BC 8019847C 8CCE0008 */  lw          $t6, 0x8($a2)
/* E051C0 80198480 8CCD0004 */  lw          $t5, 0x4($a2)
/* E051C4 80198484 8C480004 */  lw          $t0, 0x4($v0)
/* E051C8 80198488 8C490008 */  lw          $t1, 0x8($v0)
/* E051CC 8019848C 8C4A000C */  lw          $t2, 0xC($v0)
/* E051D0 80198490 8C470000 */  lw          $a3, 0x0($v0)
/* E051D4 80198494 8CCC0000 */  lw          $t4, 0x0($a2)
/* E051D8 80198498 8CCF000C */  lw          $t7, 0xC($a2)
/* E051DC 8019849C AC4E0008 */  sw          $t6, 0x8($v0)
/* E051E0 801984A0 AC4D0004 */  sw          $t5, 0x4($v0)
/* E051E4 801984A4 AC4C0000 */  sw          $t4, 0x0($v0)
/* E051E8 801984A8 3418FFFF */  ori         $t8, $zero, 0xFFFF
/* E051EC 801984AC 3C018016 */  lui         $at, %hi(gBgColor)
/* E051F0 801984B0 AC880004 */  sw          $t0, 0x4($a0)
/* E051F4 801984B4 ACA80004 */  sw          $t0, 0x4($a1)
/* E051F8 801984B8 AC890008 */  sw          $t1, 0x8($a0)
/* E051FC 801984BC ACA90008 */  sw          $t1, 0x8($a1)
/* E05200 801984C0 AC8A000C */  sw          $t2, 0xC($a0)
/* E05204 801984C4 ACAA000C */  sw          $t2, 0xC($a1)
/* E05208 801984C8 AC870000 */  sw          $a3, 0x0($a0)
/* E0520C 801984CC ACA70000 */  sw          $a3, 0x0($a1)
/* E05210 801984D0 AC4F000C */  sw          $t7, 0xC($v0)
/* E05214 801984D4 A4381A36 */  sh          $t8, %lo(gBgColor)($at)
/* E05218 801984D8 3C018016 */  lui         $at, %hi(gNextGameState)
/* E0521C 801984DC 24190007 */  addiu       $t9, $zero, 0x7
/* E05220 801984E0 A4391A32 */  sh          $t9, %lo(gNextGameState)($at)
/* E05224 801984E4 3C018016 */  lui         $at, %hi(gNextLevel)
/* E05228 801984E8 240C0013 */  addiu       $t4, $zero, 0x13
/* E0522C 801984EC A42C1A30 */  sh          $t4, %lo(gNextLevel)($at)
/* E05230 801984F0 3C0E8016 */  lui         $t6, %hi(gGoldRingCount)
/* E05234 801984F4 91CE1A90 */  lbu         $t6, %lo(gGoldRingCount)($t6)
/* E05238 801984F8 3C018016 */  lui         $at, %hi(D_80161A2E)
/* E0523C 801984FC 240D0002 */  addiu       $t5, $zero, 0x2
/* E05240 80198500 3C028018 */  lui         $v0, %hi(gPlayer)
/* E05244 80198504 8C428280 */  lw          $v0, %lo(gPlayer)($v0)
/* E05248 80198508 A42D1A2E */  sh          $t5, %lo(D_80161A2E)($at)
/* E0524C 8019850C 3C018017 */  lui         $at, %hi(D_80177C94)
/* E05250 80198510 AC2E7C94 */  sw          $t6, %lo(D_80177C94)($at)
/* E05254 80198514 8C4F0264 */  lw          $t7, 0x264($v0)
/* E05258 80198518 3C198016 */  lui         $t9, %hi(gHitCount)
/* E0525C 8019851C 8F391A98 */  lw          $t9, %lo(gHitCount)($t9)
/* E05260 80198520 3C018017 */  lui         $at, %hi(D_80177C9C)
/* E05264 80198524 25F80001 */  addiu       $t8, $t7, 0x1
/* E05268 80198528 AC387C9C */  sw          $t8, %lo(D_80177C9C)($at)
/* E0526C 8019852C 3C018017 */  lui         $at, %hi(D_80177CA4)
/* E05270 80198530 AC397CA4 */  sw          $t9, %lo(D_80177CA4)($at)
/* E05274 80198534 904C049C */  lbu         $t4, 0x49C($v0)
/* E05278 80198538 3C018017 */  lui         $at, %hi(D_80177CAC)
/* E0527C 8019853C 3C0E8017 */  lui         $t6, %hi(gRightWingHealth)
/* E05280 80198540 AC2C7CAC */  sw          $t4, %lo(D_80177CAC)($at)
/* E05284 80198544 904D049D */  lbu         $t5, 0x49D($v0)
/* E05288 80198548 8DCE7D10 */  lw          $t6, %lo(gRightWingHealth)($t6)
/* E0528C 8019854C 3C018017 */  lui         $at, %hi(D_80177CB4)
/* E05290 80198550 AC2D7CB4 */  sw          $t5, %lo(D_80177CB4)($at)
/* E05294 80198554 3C018017 */  lui         $at, %hi(D_80177CBC)
/* E05298 80198558 3C0F8017 */  lui         $t7, %hi(gLeftWingHealth)
/* E0529C 8019855C 8DEF7D28 */  lw          $t7, %lo(gLeftWingHealth)($t7)
/* E052A0 80198560 AC2E7CBC */  sw          $t6, %lo(D_80177CBC)($at)
/* E052A4 80198564 3C018017 */  lui         $at, %hi(D_80177CC4)
/* E052A8 80198568 00002025 */  or          $a0, $zero, $zero
/* E052AC 8019856C 0C007289 */  jal         func_8001CA24
/* E052B0 80198570 AC2F7CC4 */   sw         $t7, %lo(D_80177CC4)($at)
/* E052B4 80198574 3C048018 */  lui         $a0, %hi(gPlayer)
/* E052B8 80198578 8C848280 */  lw          $a0, %lo(gPlayer)($a0)
/* E052BC 8019857C 0C006940 */  jal         Audio_KillSfx
/* E052C0 80198580 24840460 */   addiu      $a0, $a0, 0x460
/* E052C4 80198584 8FBF0014 */  lw          $ra, 0x14($sp)
/* E052C8 80198588 27BD0018 */  addiu       $sp, $sp, 0x18
/* E052CC 8019858C 03E00008 */  jr          $ra
/* E052D0 80198590 00000000 */   nop
glabel func_i1_80198594
/* E052D4 80198594 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E052D8 80198598 3C028018 */  lui         $v0, %hi(gPlayer)
/* E052DC 8019859C 24428280 */  addiu       $v0, $v0, %lo(gPlayer)
/* E052E0 801985A0 AFBF0014 */  sw          $ra, 0x14($sp)
/* E052E4 801985A4 8C4E0000 */  lw          $t6, 0x0($v0)
/* E052E8 801985A8 848F0052 */  lh          $t7, 0x52($a0)
/* E052EC 801985AC C5C4007C */  lwc1        $ft0, 0x7C($t6)
/* E052F0 801985B0 1DE00008 */  bgtz        $t7, .Li1_801985D4
/* E052F4 801985B4 E484000C */   swc1       $ft0, 0xC($a0)
/* E052F8 801985B8 8C580000 */  lw          $t8, 0x0($v0)
/* E052FC 801985BC 24010003 */  addiu       $at, $zero, 0x3
/* E05300 801985C0 8F1901C8 */  lw          $t9, 0x1C8($t8)
/* E05304 801985C4 57210004 */  bnel        $t9, $at, .Li1_801985D8
/* E05308 801985C8 8FBF0014 */   lw         $ra, 0x14($sp)
/* E0530C 801985CC 0C066105 */  jal         func_i1_80198414
/* E05310 801985D0 00000000 */   nop
.Li1_801985D4:
/* E05314 801985D4 8FBF0014 */  lw          $ra, 0x14($sp)
.Li1_801985D8:
/* E05318 801985D8 27BD0018 */  addiu       $sp, $sp, 0x18
/* E0531C 801985DC 03E00008 */  jr          $ra
/* E05320 801985E0 00000000 */   nop
glabel func_i1_801985E4
/* E05324 801985E4 27BDFFD0 */  addiu       $sp, $sp, -0x30
/* E05328 801985E8 AFB00028 */  sw          $s0, 0x28($sp)
/* E0532C 801985EC 00808025 */  or          $s0, $a0, $zero
/* E05330 801985F0 AFBF002C */  sw          $ra, 0x2C($sp)
/* E05334 801985F4 860E00BC */  lh          $t6, 0xBC($s0)
/* E05338 801985F8 3C050902 */  lui         $a1, %hi(D_901C0F4)
/* E0533C 801985FC 24A5C0F4 */  addiu       $a1, $a1, %lo(D_901C0F4)
/* E05340 80198600 15C0000C */  bnez        $t6, .Li1_80198634
/* E05344 80198604 00002025 */   or         $a0, $zero, $zero
/* E05348 80198608 3C0F8019 */  lui         $t7, %hi(func_i1_80193D64)
/* E0534C 8019860C 3C18800C */  lui         $t8, %hi(gIdentityMatrix)
/* E05350 80198610 27184660 */  addiu       $t8, $t8, %lo(gIdentityMatrix)
/* E05354 80198614 25EF3D64 */  addiu       $t7, $t7, %lo(func_i1_80193D64)
/* E05358 80198618 3C078019 */  lui         $a3, %hi(func_i1_801937F4)
/* E0535C 8019861C 24E737F4 */  addiu       $a3, $a3, %lo(func_i1_801937F4)
/* E05360 80198620 AFAF0010 */  sw          $t7, 0x10($sp)
/* E05364 80198624 AFB80018 */  sw          $t8, 0x18($sp)
/* E05368 80198628 260601A0 */  addiu       $a2, $s0, 0x1A0
/* E0536C 8019862C 0C0269CB */  jal         Animation_DrawSkeleton
/* E05370 80198630 AFB00014 */   sw         $s0, 0x14($sp)
.Li1_80198634:
/* E05374 80198634 8619009A */  lh          $t9, 0x9A($s0)
/* E05378 80198638 A619004E */  sh          $t9, 0x4E($s0)
/* E0537C 8019863C 8FBF002C */  lw          $ra, 0x2C($sp)
/* E05380 80198640 8FB00028 */  lw          $s0, 0x28($sp)
/* E05384 80198644 03E00008 */  jr          $ra
/* E05388 80198648 27BD0030 */   addiu      $sp, $sp, 0x30
.section .late_rodata
dlabel D_i1_8019B630
/* E08370 8019B630 3F19999A */ .float 0.6000000238

dlabel D_i1_8019B634
/* E08374 8019B634 3C8EFA35 */ .float 0.01745329238
/* E08378 8019B638 00000000 */ .float 0
/* E0837C 8019B63C 00000000 */ .float 0


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_i1_8019864C
/* E0538C 8019864C 27BDFF58 */  addiu       $sp, $sp, -0xA8
/* E05390 80198650 AFB50054 */  sw          $s5, 0x54($sp)
/* E05394 80198654 0080A825 */  or          $s5, $a0, $zero
/* E05398 80198658 AFBF0064 */  sw          $ra, 0x64($sp)
/* E0539C 8019865C AFBE0060 */  sw          $fp, 0x60($sp)
/* E053A0 80198660 AFB7005C */  sw          $s7, 0x5C($sp)
/* E053A4 80198664 AFB60058 */  sw          $s6, 0x58($sp)
/* E053A8 80198668 AFB40050 */  sw          $s4, 0x50($sp)
/* E053AC 8019866C AFB3004C */  sw          $s3, 0x4C($sp)
/* E053B0 80198670 AFB20048 */  sw          $s2, 0x48($sp)
/* E053B4 80198674 AFB10044 */  sw          $s1, 0x44($sp)
/* E053B8 80198678 AFB00040 */  sw          $s0, 0x40($sp)
/* E053BC 8019867C F7BC0038 */  sdc1        $fs4, 0x38($sp)
/* E053C0 80198680 F7BA0030 */  sdc1        $fs3, 0x30($sp)
/* E053C4 80198684 F7B80028 */  sdc1        $fs2, 0x28($sp)
/* E053C8 80198688 F7B60020 */  sdc1        $fs1, 0x20($sp)
/* E053CC 8019868C F7B40018 */  sdc1        $fs0, 0x18($sp)
/* E053D0 80198690 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* E053D4 80198694 4481E000 */  mtc1        $at, $fs4
/* E053D8 80198698 3C01801A */  lui         $at, %hi(D_i1_8019B630)
/* E053DC 8019869C C43AB630 */  lwc1        $fs3, %lo(D_i1_8019B630)($at)
/* E053E0 801986A0 3C01C2C8 */  lui         $at, (0xC2C80000 >> 16)
/* E053E4 801986A4 4481C000 */  mtc1        $at, $fs2
/* E053E8 801986A8 3C118017 */  lui         $s1, %hi(gBosses)
/* E053EC 801986AC 3C01801A */  lui         $at, %hi(D_i1_8019B634)
/* E053F0 801986B0 3C148014 */  lui         $s4, %hi(gCalcMatrix)
/* E053F4 801986B4 2631F110 */  addiu       $s1, $s1, %lo(gBosses)
/* E053F8 801986B8 2694BBC8 */  addiu       $s4, $s4, %lo(gCalcMatrix)
/* E053FC 801986BC C434B634 */  lwc1        $fs0, %lo(D_i1_8019B634)($at)
/* E05400 801986C0 AFA000A4 */  sw          $zero, 0xA4($sp)
/* E05404 801986C4 27BE0078 */  addiu       $fp, $sp, 0x78
/* E05408 801986C8 27B70088 */  addiu       $s7, $sp, 0x88
.Li1_801986CC:
/* E0540C 801986CC 962E0002 */  lhu         $t6, 0x2($s1)
/* E05410 801986D0 2401013F */  addiu       $at, $zero, 0x13F
/* E05414 801986D4 55C10062 */  bnel        $t6, $at, .Li1_80198860
/* E05418 801986D8 8FAB00A4 */   lw         $t3, 0xA4($sp)
/* E0541C 801986DC 922F0000 */  lbu         $t7, 0x0($s1)
/* E05420 801986E0 24010002 */  addiu       $at, $zero, 0x2
/* E05424 801986E4 55E1005E */  bnel        $t7, $at, .Li1_80198860
/* E05428 801986E8 8FAB00A4 */   lw         $t3, 0xA4($sp)
/* E0542C 801986EC 8638005A */  lh          $t8, 0x5A($s1)
/* E05430 801986F0 5700005B */  bnel        $t8, $zero, .Li1_80198860
/* E05434 801986F4 8FAB00A4 */   lw         $t3, 0xA4($sp)
/* E05438 801986F8 8E300028 */  lw          $s0, 0x28($s1)
/* E0543C 801986FC C6A40044 */  lwc1        $ft0, 0x44($s5)
/* E05440 80198700 C6060000 */  lwc1        $ft1, 0x0($s0)
/* E05444 80198704 461C2582 */  mul.s       $fs1, $ft0, $fs4
/* E05448 80198708 26100004 */  addiu       $s0, $s0, 0x4
/* E0544C 8019870C 4600320D */  trunc.w.s   $ft2, $ft1
/* E05450 80198710 44164000 */  mfc1        $s6, $ft2
/* E05454 80198714 00000000 */  nop
/* E05458 80198718 52C00051 */  beql        $s6, $zero, .Li1_80198860
/* E0545C 8019871C 8FAB00A4 */   lw         $t3, 0xA4($sp)
/* E05460 80198720 1AC0004E */  blez        $s6, .Li1_8019885C
/* E05464 80198724 00009025 */   or         $s2, $zero, $zero
.Li1_80198728:
/* E05468 80198728 C60A0004 */  lwc1        $ft3, 0x4($s0)
/* E0546C 8019872C 460AC03C */  c.lt.s      $fs2, $ft3
/* E05470 80198730 00000000 */  nop
/* E05474 80198734 45020047 */  bc1fl       .Li1_80198854
/* E05478 80198738 26520001 */   addiu      $s2, $s2, 0x1
/* E0547C 8019873C C6300018 */  lwc1        $ft4, 0x18($s1)
/* E05480 80198740 3C09801A */  lui         $t1, %hi(D_i1_8019B7F0)
/* E05484 80198744 2529B7F0 */  addiu       $t1, $t1, %lo(D_i1_8019B7F0)
/* E05488 80198748 46008487 */  neg.s       $ft5, $ft4
/* E0548C 8019874C 00124040 */  sll         $t0, $s2, 1
/* E05490 80198750 46149102 */  mul.s       $ft0, $ft5, $fs0
/* E05494 80198754 01099821 */  addu        $s3, $t0, $t1
/* E05498 80198758 8E840000 */  lw          $a0, 0x0($s4)
/* E0549C 8019875C 00003025 */  or          $a2, $zero, $zero
/* E054A0 80198760 44052000 */  mfc1        $a1, $ft0
/* E054A4 80198764 0C0017F8 */  jal         Matrix_RotateZ
/* E054A8 80198768 00000000 */   nop
/* E054AC 8019876C C6260010 */  lwc1        $ft1, 0x10($s1)
/* E054B0 80198770 8E840000 */  lw          $a0, 0x0($s4)
/* E054B4 80198774 24060001 */  addiu       $a2, $zero, 0x1
/* E054B8 80198778 46003207 */  neg.s       $ft2, $ft1
/* E054BC 8019877C 46144282 */  mul.s       $ft3, $ft2, $fs0
/* E054C0 80198780 44055000 */  mfc1        $a1, $ft3
/* E054C4 80198784 0C001751 */  jal         Matrix_RotateX
/* E054C8 80198788 00000000 */   nop
/* E054CC 8019878C C6300014 */  lwc1        $ft4, 0x14($s1)
/* E054D0 80198790 8E840000 */  lw          $a0, 0x0($s4)
/* E054D4 80198794 24060001 */  addiu       $a2, $zero, 0x1
/* E054D8 80198798 46008487 */  neg.s       $ft5, $ft4
/* E054DC 8019879C 46149102 */  mul.s       $ft0, $ft5, $fs0
/* E054E0 801987A0 44052000 */  mfc1        $a1, $ft0
/* E054E4 801987A4 0C0017A4 */  jal         Matrix_RotateY
/* E054E8 801987A8 00000000 */   nop
/* E054EC 801987AC C6A60004 */  lwc1        $ft1, 0x4($s5)
/* E054F0 801987B0 C6280004 */  lwc1        $ft2, 0x4($s1)
/* E054F4 801987B4 8E840000 */  lw          $a0, 0x0($s4)
/* E054F8 801987B8 02E02825 */  or          $a1, $s7, $zero
/* E054FC 801987BC 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E05500 801987C0 03C03025 */  or          $a2, $fp, $zero
/* E05504 801987C4 E7AA0088 */  swc1        $ft3, 0x88($sp)
/* E05508 801987C8 C6320008 */  lwc1        $ft5, 0x8($s1)
/* E0550C 801987CC C6B00008 */  lwc1        $ft4, 0x8($s5)
/* E05510 801987D0 46128101 */  sub.s       $ft0, $ft4, $ft5
/* E05514 801987D4 E7A4008C */  swc1        $ft0, 0x8C($sp)
/* E05518 801987D8 C628000C */  lwc1        $ft2, 0xC($s1)
/* E0551C 801987DC C6A6000C */  lwc1        $ft1, 0xC($s5)
/* E05520 801987E0 46083281 */  sub.s       $ft3, $ft1, $ft2
/* E05524 801987E4 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* E05528 801987E8 E7AA0090 */   swc1       $ft3, 0x90($sp)
/* E0552C 801987EC C6080000 */  lwc1        $ft2, 0x0($s0)
/* E05530 801987F0 C7AA0080 */  lwc1        $ft3, 0x80($sp)
/* E05534 801987F4 C6100010 */  lwc1        $ft4, 0x10($s0)
/* E05538 801987F8 C7B20078 */  lwc1        $ft5, 0x78($sp)
/* E0553C 801987FC 460A4081 */  sub.s       $fv1, $ft2, $ft3
/* E05540 80198800 C6040008 */  lwc1        $ft0, 0x8($s0)
/* E05544 80198804 C7A6007C */  lwc1        $ft1, 0x7C($sp)
/* E05548 80198808 46128301 */  sub.s       $fa0, $ft4, $ft5
/* E0554C 8019880C 461A1082 */  mul.s       $fv1, $fv1, $fs3
/* E05550 80198810 240A0001 */  addiu       $t2, $zero, 0x1
/* E05554 80198814 46062381 */  sub.s       $fa1, $ft0, $ft1
/* E05558 80198818 460C6402 */  mul.s       $ft4, $fa0, $fa0
/* E0555C 8019881C 00000000 */  nop
/* E05560 80198820 460E7482 */  mul.s       $ft5, $fa1, $fa1
/* E05564 80198824 46128100 */  add.s       $ft0, $ft4, $ft5
/* E05568 80198828 46021182 */  mul.s       $ft1, $fv1, $fv1
/* E0556C 8019882C 46062000 */  add.s       $fv0, $ft0, $ft1
/* E05570 80198830 46000004 */  sqrt.s      $fv0, $fv0
/* E05574 80198834 4616003C */  c.lt.s      $fv0, $fs1
/* E05578 80198838 00000000 */  nop
/* E0557C 8019883C 45000003 */  bc1f        .Li1_8019884C
/* E05580 80198840 00000000 */   nop
/* E05584 80198844 10000002 */  b           .Li1_80198850
/* E05588 80198848 A66A0000 */   sh         $t2, 0x0($s3)
.Li1_8019884C:
/* E0558C 8019884C A6600000 */  sh          $zero, 0x0($s3)
.Li1_80198850:
/* E05590 80198850 26520001 */  addiu       $s2, $s2, 0x1
.Li1_80198854:
/* E05594 80198854 1656FFB4 */  bne         $s2, $s6, .Li1_80198728
/* E05598 80198858 26100018 */   addiu      $s0, $s0, 0x18
.Li1_8019885C:
/* E0559C 8019885C 8FAB00A4 */  lw          $t3, 0xA4($sp)
.Li1_80198860:
/* E055A0 80198860 24010004 */  addiu       $at, $zero, 0x4
/* E055A4 80198864 26310408 */  addiu       $s1, $s1, 0x408
/* E055A8 80198868 256C0001 */  addiu       $t4, $t3, 0x1
/* E055AC 8019886C 1581FF97 */  bne         $t4, $at, .Li1_801986CC
/* E055B0 80198870 AFAC00A4 */   sw         $t4, 0xA4($sp)
/* E055B4 80198874 8FBF0064 */  lw          $ra, 0x64($sp)
/* E055B8 80198878 D7B40018 */  ldc1        $fs0, 0x18($sp)
/* E055BC 8019887C D7B60020 */  ldc1        $fs1, 0x20($sp)
/* E055C0 80198880 D7B80028 */  ldc1        $fs2, 0x28($sp)
/* E055C4 80198884 D7BA0030 */  ldc1        $fs3, 0x30($sp)
/* E055C8 80198888 D7BC0038 */  ldc1        $fs4, 0x38($sp)
/* E055CC 8019888C 8FB00040 */  lw          $s0, 0x40($sp)
/* E055D0 80198890 8FB10044 */  lw          $s1, 0x44($sp)
/* E055D4 80198894 8FB20048 */  lw          $s2, 0x48($sp)
/* E055D8 80198898 8FB3004C */  lw          $s3, 0x4C($sp)
/* E055DC 8019889C 8FB40050 */  lw          $s4, 0x50($sp)
/* E055E0 801988A0 8FB50054 */  lw          $s5, 0x54($sp)
/* E055E4 801988A4 8FB60058 */  lw          $s6, 0x58($sp)
/* E055E8 801988A8 8FB7005C */  lw          $s7, 0x5C($sp)
/* E055EC 801988AC 8FBE0060 */  lw          $fp, 0x60($sp)
/* E055F0 801988B0 03E00008 */  jr          $ra
/* E055F4 801988B4 27BD00A8 */   addiu      $sp, $sp, 0xA8
glabel func_i1_801988B8
/* E055F8 801988B8 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* E055FC 801988BC AFBF0014 */  sw          $ra, 0x14($sp)
/* E05600 801988C0 0C025A9D */  jal         func_80096A74
/* E05604 801988C4 00000000 */   nop
/* E05608 801988C8 8FBF0014 */  lw          $ra, 0x14($sp)
/* E0560C 801988CC 27BD0018 */  addiu       $sp, $sp, 0x18
/* E05610 801988D0 03E00008 */  jr          $ra
/* E05614 801988D4 00000000 */   nop
/* E05618 801988D8 00000000 */  nop
/* E0561C 801988DC 00000000 */  nop
