/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:27
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken_syntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[244];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,28),40,97,50,52,49,52,32,102,111,114,109,50,50,51,48,32,114,50,50,51,49,32,99,50,50,51,50,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,32),40,97,50,52,54,48,32,110,97,109,101,50,50,50,56,32,116,114,97,110,115,102,111,114,109,101,114,50,50,50,57,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,50,50,48,53,32,103,50,50,49,53,50,50,49,57,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,50,49,56,48,32,103,50,49,57,48,50,49,57,52,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,50,49,51,54,32,108,50,49,51,49,50,49,53,57,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,52),40,97,50,52,50,52,32,105,110,112,117,116,50,49,51,48,50,49,52,51,32,114,101,110,97,109,101,50,49,51,57,50,49,52,52,32,99,111,109,112,97,114,101,50,49,50,55,50,49,52,53,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,52),40,97,50,54,51,57,32,105,110,112,117,116,50,48,56,51,50,48,57,54,32,114,101,110,97,109,101,50,48,57,50,50,48,57,55,32,99,111,109,112,97,114,101,50,48,56,48,50,48,57,56,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,25),40,97,50,55,55,49,32,120,50,48,55,48,32,114,50,48,55,49,32,99,50,48,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,28),40,97,50,55,57,54,32,102,111,114,109,50,48,54,50,32,114,50,48,54,51,32,99,50,48,54,52,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,28),40,97,50,56,51,51,32,102,111,114,109,50,48,52,56,32,114,50,48,52,57,32,99,50,48,53,48,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,37),40,108,111,111,112,32,115,50,48,48,52,32,100,50,48,48,53,32,99,115,50,48,48,54,32,101,120,112,111,114,116,115,50,48,48,55,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,28),40,97,50,57,51,55,32,102,111,114,109,49,57,57,53,32,114,49,57,57,54,32,99,49,57,57,55,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,47),40,108,111,111,112,32,120,115,49,57,55,48,32,118,97,114,115,49,57,55,49,32,98,115,49,57,55,50,32,118,97,108,115,49,57,55,51,32,114,101,115,116,49,57,55,52,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,28),40,97,51,50,49,56,32,102,111,114,109,49,57,54,49,32,114,49,57,54,50,32,99,49,57,54,51,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,40),40,108,111,111,112,32,120,115,49,57,51,52,32,118,97,114,115,49,57,51,53,32,118,97,108,115,49,57,51,54,32,114,101,115,116,49,57,51,55,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,28),40,97,51,52,52,57,32,102,111,114,109,49,57,50,53,32,114,49,57,50,54,32,99,49,57,50,55,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,108,111,116,115,49,56,57,52,32,105,49,56,57,53,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,7),40,103,49,56,56,55,41,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,56,55,49,32,103,49,56,56,49,49,56,56,53,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,56,52,52,32,103,49,56,53,52,49,56,53,56,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,28),40,97,51,54,52,57,32,102,111,114,109,49,56,50,53,32,114,49,56,50,54,32,99,49,56,50,55,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,7),40,103,49,55,55,56,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,55,54,50,32,103,49,55,55,50,49,55,55,54,41,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,20),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,49,55,51,55,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,55,57,56,32,103,49,56,48,56,49,56,49,50,41,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,28),40,97,52,49,50,48,32,102,111,114,109,49,55,50,50,32,114,49,55,50,51,32,99,49,55,50,52,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,28),40,97,52,53,52,51,32,102,111,114,109,49,55,48,55,32,114,49,55,48,56,32,99,49,55,48,57,41,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,28),40,97,52,55,53,55,32,102,111,114,109,49,54,56,49,32,114,49,54,56,50,32,99,49,54,56,51,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,53,53,53,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,15),40,103,101,110,118,97,114,115,32,110,49,53,53,51,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,7),40,97,53,48,49,50,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,30),40,108,111,111,112,49,54,53,50,32,103,49,54,54,50,49,54,54,55,32,103,49,54,54,51,49,54,54,56,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,27),40,98,117,105,108,100,32,118,97,114,115,50,49,54,50,52,32,118,114,101,115,116,49,54,50,53,41,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,27),40,97,53,48,50,50,32,118,97,114,115,49,49,54,50,48,32,118,97,114,115,50,49,54,50,49,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,34),40,97,52,57,56,48,32,118,97,114,115,49,54,48,50,32,97,114,103,99,49,54,48,51,32,114,101,115,116,49,54,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,22),40,97,52,57,55,48,32,99,49,54,48,48,32,98,111,100,121,49,54,48,49,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,34),40,97,53,51,52,53,32,118,97,114,115,49,53,56,48,32,97,114,103,99,49,53,56,49,32,114,101,115,116,49,53,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,53,54,49,32,103,49,53,55,49,49,53,55,53,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,28),40,97,52,56,53,57,32,102,111,114,109,49,53,52,57,32,114,49,53,53,48,32,99,49,53,53,49,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,97,114,103,115,49,53,50,55,32,118,97,114,100,101,102,115,49,53,50,56,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,28),40,97,53,52,48,55,32,102,111,114,109,49,53,49,48,32,114,49,53,49,49,32,99,49,53,49,50,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,28),40,97,53,55,50,49,32,102,111,114,109,49,52,57,49,32,114,49,52,57,50,32,99,49,52,57,51,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,58),40,114,101,99,117,114,32,118,97,114,115,49,51,52,51,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,49,51,52,52,32,100,101,102,115,49,51,52,53,32,110,101,120,116,45,103,117,121,49,51,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,72),40,109,97,107,101,45,100,101,102,97,117,108,116,45,112,114,111,99,115,32,118,97,114,115,49,51,51,55,32,98,111,100,121,45,112,114,111,99,49,51,51,56,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,49,51,51,57,32,100,101,102,115,49,51,52,48,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,48),40,114,101,99,117,114,32,118,97,114,115,49,51,53,57,32,100,101,102,97,117,108,116,101,114,115,49,51,54,48,32,110,111,110,45,100,101,102,97,117,108,116,115,49,51,54,49,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,61),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,49,51,53,51,32,100,101,102,97,117,108,116,101,114,115,49,51,53,52,32,98,111,100,121,45,112,114,111,99,49,51,53,53,32,114,101,115,116,49,51,53,54,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,31),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,49,51,57,56,32,115,121,109,49,51,57,57,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,15),40,103,49,52,55,48,32,118,97,114,49,52,55,50,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,52,53,52,32,103,49,52,54,52,49,52,54,56,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,52,50,56,32,103,49,52,51,56,49,52,52,50,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,13),40,103,49,52,49,57,32,118,49,52,50,49,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,52,48,51,32,103,49,52,49,51,49,52,49,55,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,51,55,54,32,103,49,51,56,54,49,51,57,48,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,28),40,97,53,57,52,54,32,102,111,114,109,49,51,50,54,32,114,49,51,50,55,32,99,49,51,50,56,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,7),40,103,49,51,48,57,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,50,57,51,32,103,49,51,48,51,49,51,48,55,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,20),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,50,56,48,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,28),40,97,54,53,51,57,32,102,111,114,109,49,50,54,53,32,114,49,50,54,54,32,99,49,50,54,55,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,13),40,102,111,108,100,32,98,115,49,50,51,55,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,28),40,97,54,55,51,57,32,102,111,114,109,49,50,50,57,32,114,49,50,51,48,32,99,49,50,51,49,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,28),40,113,117,111,116,105,102,121,45,112,114,111,99,32,120,115,49,50,48,53,32,105,100,49,50,48,54,41,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,28),40,97,54,57,48,50,32,102,111,114,109,49,50,48,48,32,114,49,50,48,49,32,99,49,50,48,50,41,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,28),40,97,55,48,48,55,32,102,111,114,109,49,49,57,48,32,114,49,49,57,49,32,99,49,49,57,50,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,8),40,108,111,111,107,117,112,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,7),40,103,49,49,55,50,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,49,53,54,32,103,49,49,54,54,49,49,55,48,41,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,49,51,51,32,103,49,49,52,51,49,49,52,55,41,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,14),40,103,49,49,50,52,32,118,98,49,49,50,54,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,49,48,56,32,103,49,49,49,56,49,49,50,50,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,56,52,32,103,49,48,57,52,49,48,57,56,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,13),40,103,49,48,55,48,32,118,49,48,55,50,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,53,52,32,103,49,48,54,52,49,48,54,56,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,50,57,32,103,49,48,51,57,49,48,52,51,41,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,28),40,97,55,48,57,48,32,102,111,114,109,49,48,49,56,32,114,49,48,49,57,32,99,49,48,50,48,41,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,20),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,49,48,48,55,41,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,27),40,97,55,52,54,49,32,102,111,114,109,57,57,57,32,114,49,48,48,48,32,99,49,48,48,49,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,20),40,97,112,112,101,110,100,42,32,105,108,56,51,51,32,108,56,51,52,41,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,19),40,109,97,112,42,32,112,114,111,99,56,51,53,32,108,56,51,54,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,13),40,108,111,111,107,117,112,32,118,57,48,56,41,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,11),40,103,57,53,53,32,118,57,53,55,41,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,57,51,57,32,103,57,52,57,57,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,35),40,102,111,108,100,32,108,108,105,115,116,115,57,50,52,32,101,120,112,115,57,50,53,32,108,108,105,115,116,115,50,57,50,54,41,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,57,55,52,32,103,57,56,52,57,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,108,105,115,116,115,57,49,49,32,97,99,99,57,49,50,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,11),40,103,57,48,49,32,118,57,48,51,41,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,56,56,53,32,103,56,57,53,56,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,108,105,115,116,115,56,55,48,32,97,99,99,56,55,49,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,56,52,55,32,103,56,53,55,56,54,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,25),40,97,55,53,51,51,32,102,111,114,109,56,50,52,32,114,56,50,53,32,99,56,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,18),40,97,56,48,56,50,32,103,56,49,51,56,49,52,56,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,25),40,97,56,48,53,56,32,102,111,114,109,56,48,48,32,114,56,48,49,32,99,56,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,55,54,56,32,103,55,55,56,55,56,51,32,103,55,55,57,55,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,55,52,49,32,103,55,53,49,55,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,25),40,97,56,49,48,48,32,102,111,114,109,55,49,56,32,114,55,49,57,32,99,55,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,25),40,97,56,51,50,56,32,102,111,114,109,55,49,48,32,114,55,49,49,32,99,55,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,25),40,97,56,51,56,49,32,102,111,114,109,55,48,50,32,114,55,48,51,32,99,55,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,12),40,103,54,57,48,32,97,50,54,57,51,41,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,54,55,48,32,103,54,56,48,54,56,53,32,103,54,56,49,54,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,54,52,51,32,103,54,53,51,54,53,56,32,103,54,53,52,54,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,54,49,54,32,103,54,50,54,54,51,49,32,103,54,50,55,54,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,6),40,103,54,48,52,41,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,53,56,56,32,103,53,57,56,54,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,6),40,103,53,55,57,41,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,53,54,51,32,103,53,55,51,53,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,53,51,57,32,103,53,52,57,53,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,53,49,53,32,103,53,50,53,53,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,25),40,97,56,52,50,54,32,102,111,114,109,53,48,51,32,114,53,48,52,32,99,53,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,115,52,55,53,41,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,25),40,97,56,57,49,50,32,102,111,114,109,52,53,55,32,114,52,53,56,32,99,52,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,52,50,53,32,103,52,51,53,52,52,48,32,103,52,51,54,52,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,51,57,50,32,103,52,48,50,52,48,55,32,103,52,48,51,52,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,51,53,57,32,103,51,54,57,51,55,52,32,103,51,55,48,51,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,51,50,54,32,103,51,51,54,51,52,49,32,103,51,51,55,51,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,50,57,54,32,103,51,48,54,51,49,49,32,103,51,48,55,51,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,110,51,50,50,41,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,50,52,54,32,103,50,53,54,50,54,49,32,103,50,53,55,50,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,55,51,32,103,50,56,51,50,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,6),40,103,50,51,50,41,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,49,54,32,103,50,50,54,50,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,6),40,103,50,48,55,41,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,49,57,49,32,103,50,48,49,50,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,49,54,55,32,103,49,55,55,49,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,25),40,97,57,48,51,51,32,102,111,114,109,49,53,56,32,114,49,53,57,32,99,49,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,25),40,97,57,55,49,57,32,102,111,114,109,49,52,48,32,114,49,52,49,32,99,49,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,25),40,97,57,56,53,54,32,102,111,114,109,49,49,56,32,114,49,49,57,32,99,49,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,48,50,41};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,22),40,100,111,108,111,111,112,49,48,55,32,120,49,49,49,32,120,115,49,49,50,41,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,48,55,41};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,52,48,41};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,7),40,97,57,57,57,54,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,22),40,97,57,57,55,48,32,102,111,114,109,56,54,32,114,56,55,32,99,56,56,41,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,23),40,97,49,48,48,53,57,32,102,111,114,109,55,57,32,114,56,48,32,99,56,49,41,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,23),40,97,49,48,48,55,55,32,102,111,114,109,54,57,32,114,55,48,32,99,55,49,41,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,23),40,97,49,48,49,55,54,32,102,111,114,109,51,57,32,114,52,48,32,99,52,49,41,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,22),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,49,57,32,105,50,48,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,17),40,97,49,48,51,49,57,32,120,49,32,114,50,32,99,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_chicken_syntax_toplevel)
C_externexport void C_ccall C_chicken_syntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10320)
static void C_ccall f_10320(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10324)
static void C_ccall f_10324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10333)
static void C_ccall f_10333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10336)
static void C_ccall f_10336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10342)
static void C_ccall f_10342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10345)
static void C_ccall f_10345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10348)
static void C_ccall f_10348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10351)
static void C_ccall f_10351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10761)
static void C_ccall f_10761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10721)
static void C_ccall f_10721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10753)
static void C_ccall f_10753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10713)
static void C_ccall f_10713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10669)
static void C_ccall f_10669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10380)
static void C_fcall f_10380(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10390)
static void C_ccall f_10390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10657)
static void C_ccall f_10657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10393)
static void C_ccall f_10393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10653)
static void C_ccall f_10653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10396)
static void C_ccall f_10396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10443)
static void C_fcall f_10443(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10407)
static void C_ccall f_10407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10378)
static void C_ccall f_10378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10374)
static void C_ccall f_10374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10318)
static void C_ccall f_10318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10177)
static void C_ccall f_10177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10181)
static void C_ccall f_10181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10184)
static void C_ccall f_10184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10187)
static void C_ccall f_10187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10223)
static void C_ccall f_10223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10238)
static void C_fcall f_10238(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10292)
static void C_ccall f_10292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10253)
static void C_ccall f_10253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10216)
static void C_ccall f_10216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10175)
static void C_ccall f_10175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10078)
static void C_ccall f_10078(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10082)
static void C_ccall f_10082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10085)
static void C_ccall f_10085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10088)
static void C_ccall f_10088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10167)
static void C_ccall f_10167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10076)
static void C_ccall f_10076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10060)
static void C_ccall f_10060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10068)
static void C_ccall f_10068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10058)
static void C_ccall f_10058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2301)
static void C_ccall f_2301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9971)
static void C_ccall f_9971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9975)
static void C_ccall f_9975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9978)
static void C_ccall f_9978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9981)
static void C_ccall f_9981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10047)
static void C_ccall f_10047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9984)
static void C_ccall f_9984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9997)
static void C_ccall f_9997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10041)
static void C_ccall f_10041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10008)
static void C_ccall f_10008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10016)
static void C_ccall f_10016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10018)
static void C_fcall f_10018(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10035)
static void C_ccall f_10035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10003)
static void C_ccall f_10003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9995)
static void C_ccall f_9995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9991)
static void C_ccall f_9991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9969)
static void C_ccall f_9969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9857)
static void C_ccall f_9857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9861)
static void C_ccall f_9861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9870)
static void C_ccall f_9870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9873)
static void C_ccall f_9873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9876)
static void C_fcall f_9876(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9936)
static void C_ccall f_9936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9911)
static void C_ccall f_9911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9855)
static void C_ccall f_9855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9720)
static void C_ccall f_9720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9724)
static void C_ccall f_9724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9736)
static void C_ccall f_9736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9739)
static void C_ccall f_9739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9742)
static void C_ccall f_9742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9789)
static void C_ccall f_9789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9718)
static void C_ccall f_9718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9034)
static void C_ccall f_9034(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9038)
static void C_ccall f_9038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9681)
static void C_fcall f_9681(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9710)
static void C_ccall f_9710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9047)
static void C_ccall f_9047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9637)
static void C_fcall f_9637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9675)
static void C_ccall f_9675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9664)
static void C_fcall f_9664(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9672)
static void C_ccall f_9672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9050)
static void C_ccall f_9050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9593)
static void C_fcall f_9593(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9631)
static void C_ccall f_9631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9620)
static void C_fcall f_9620(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9628)
static void C_ccall f_9628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9053)
static void C_ccall f_9053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9056)
static void C_ccall f_9056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9059)
static void C_ccall f_9059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9558)
static void C_fcall f_9558(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9587)
static void C_ccall f_9587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9507)
static void C_ccall f_9507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9509)
static void C_fcall f_9509(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9542)
static void C_ccall f_9542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9522)
static void C_fcall f_9522(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9418)
static void C_ccall f_9418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9485)
static void C_fcall f_9485(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9499)
static void C_ccall f_9499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9430)
static void C_ccall f_9430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9432)
static void C_fcall f_9432(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9465)
static void C_ccall f_9465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9445)
static void C_fcall f_9445(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9426)
static void C_ccall f_9426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9422)
static void C_ccall f_9422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9070)
static void C_ccall f_9070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9354)
static void C_fcall f_9354(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9367)
static void C_fcall f_9367(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9274)
static void C_ccall f_9274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9292)
static void C_fcall f_9292(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9305)
static void C_fcall f_9305(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9282)
static void C_ccall f_9282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9278)
static void C_ccall f_9278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9270)
static void C_ccall f_9270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9262)
static void C_ccall f_9262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9194)
static void C_fcall f_9194(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9207)
static void C_fcall f_9207(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9114)
static void C_ccall f_9114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9132)
static void C_fcall f_9132(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9145)
static void C_fcall f_9145(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9122)
static void C_ccall f_9122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9118)
static void C_ccall f_9118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9110)
static void C_ccall f_9110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9032)
static void C_ccall f_9032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8913)
static void C_ccall f_8913(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8917)
static void C_ccall f_8917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8923)
static void C_ccall f_8923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9024)
static void C_ccall f_9024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8929)
static void C_ccall f_8929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8932)
static void C_ccall f_8932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8935)
static void C_ccall f_8935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8975)
static void C_fcall f_8975(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8998)
static void C_ccall f_8998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9005)
static void C_ccall f_9005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9012)
static void C_ccall f_9012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8988)
static void C_ccall f_8988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8938)
static void C_ccall f_8938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8911)
static void C_ccall f_8911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8427)
static void C_ccall f_8427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8431)
static void C_ccall f_8431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8440)
static void C_ccall f_8440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8443)
static void C_ccall f_8443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8446)
static void C_ccall f_8446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8874)
static void C_fcall f_8874(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8903)
static void C_ccall f_8903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8449)
static void C_ccall f_8449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8839)
static void C_fcall f_8839(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8868)
static void C_ccall f_8868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8452)
static void C_ccall f_8452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8795)
static void C_fcall f_8795(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8833)
static void C_ccall f_8833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8822)
static void C_fcall f_8822(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8830)
static void C_ccall f_8830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8455)
static void C_ccall f_8455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8751)
static void C_fcall f_8751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8789)
static void C_ccall f_8789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8778)
static void C_fcall f_8778(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8786)
static void C_ccall f_8786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8458)
static void C_ccall f_8458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8702)
static void C_fcall f_8702(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8735)
static void C_ccall f_8735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8715)
static void C_fcall f_8715(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8647)
static void C_ccall f_8647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8653)
static void C_fcall f_8653(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8686)
static void C_ccall f_8686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8666)
static void C_fcall f_8666(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8651)
static void C_ccall f_8651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8469)
static void C_ccall f_8469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8543)
static void C_fcall f_8543(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8556)
static void C_fcall f_8556(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8574)
static C_word C_fcall f_8574(C_word *a,C_word t0,C_word t1,C_word t2);
C_noret_decl(f_8541)
static void C_ccall f_8541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8537)
static void C_ccall f_8537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8517)
static void C_ccall f_8517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8425)
static void C_ccall f_8425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8382)
static void C_ccall f_8382(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8386)
static void C_ccall f_8386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8393)
static void C_ccall f_8393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8413)
static void C_ccall f_8413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8417)
static void C_ccall f_8417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8380)
static void C_ccall f_8380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8329)
static void C_ccall f_8329(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8333)
static void C_ccall f_8333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8340)
static void C_ccall f_8340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8368)
static void C_ccall f_8368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8372)
static void C_ccall f_8372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8327)
static void C_ccall f_8327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8101)
static void C_ccall f_8101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8105)
static void C_ccall f_8105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8114)
static void C_ccall f_8114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8286)
static void C_fcall f_8286(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8315)
static void C_ccall f_8315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8183)
static void C_ccall f_8183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8216)
static void C_fcall f_8216(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8229)
static void C_fcall f_8229(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8214)
static void C_ccall f_8214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8210)
static void C_ccall f_8210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8099)
static void C_ccall f_8099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8059)
static void C_ccall f_8059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8063)
static void C_ccall f_8063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8083)
static void C_ccall f_8083(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8091)
static void C_ccall f_8091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8066)
static void C_ccall f_8066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8073)
static void C_ccall f_8073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8077)
static void C_ccall f_8077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8057)
static void C_ccall f_8057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7534)
static void C_ccall f_7534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7538)
static void C_ccall f_7538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7547)
static void C_ccall f_7547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7550)
static void C_ccall f_7550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8020)
static void C_fcall f_8020(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8049)
static void C_ccall f_8049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7625)
static void C_ccall f_7625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7980)
static void C_fcall f_7980(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7993)
static void C_ccall f_7993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7628)
static void C_ccall f_7628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7932)
static void C_fcall f_7932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7974)
static void C_ccall f_7974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7959)
static void C_fcall f_7959(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7971)
static void C_ccall f_7971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7967)
static void C_ccall f_7967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7631)
static void C_ccall f_7631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7886)
static void C_fcall f_7886(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7919)
static void C_ccall f_7919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7926)
static void C_ccall f_7926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7643)
static void C_ccall f_7643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7846)
static void C_fcall f_7846(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7650)
static void C_ccall f_7650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7652)
static void C_fcall f_7652(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7840)
static void C_ccall f_7840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7724)
static void C_fcall f_7724(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7806)
static void C_ccall f_7806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7763)
static void C_ccall f_7763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7743)
static void C_ccall f_7743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7676)
static void C_fcall f_7676(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7714)
static void C_ccall f_7714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7703)
static void C_fcall f_7703(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7711)
static void C_ccall f_7711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7670)
static void C_ccall f_7670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7674)
static void C_ccall f_7674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7632)
static void C_ccall f_7632(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7583)
static void C_fcall f_7583(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7606)
static void C_ccall f_7606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7610)
static void C_ccall f_7610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7552)
static void C_fcall f_7552(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7573)
static void C_ccall f_7573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7532)
static void C_ccall f_7532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7462)
static void C_ccall f_7462(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7466)
static void C_ccall f_7466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7475)
static void C_ccall f_7475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7478)
static void C_ccall f_7478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7483)
static void C_fcall f_7483(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7501)
static void C_ccall f_7501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7460)
static void C_ccall f_7460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7095)
static void C_ccall f_7095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7104)
static void C_ccall f_7104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7107)
static void C_ccall f_7107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7418)
static void C_fcall f_7418(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7416)
static void C_ccall f_7416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7110)
static void C_ccall f_7110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7366)
static void C_fcall f_7366(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7408)
static void C_ccall f_7408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7393)
static void C_fcall f_7393(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7405)
static void C_ccall f_7405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7401)
static void C_ccall f_7401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7113)
static void C_ccall f_7113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7326)
static void C_fcall f_7326(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7133)
static void C_ccall f_7133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7147)
static void C_fcall f_7147(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7320)
static void C_ccall f_7320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7174)
static void C_fcall f_7174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7272)
static void C_fcall f_7272(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7202)
static void C_ccall f_7202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7216)
static void C_fcall f_7216(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7243)
static C_word C_fcall f_7243(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_7210)
static void C_ccall f_7210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7206)
static void C_ccall f_7206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7141)
static void C_ccall f_7141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7145)
static void C_ccall f_7145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7137)
static void C_ccall f_7137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7114)
static C_word C_fcall f_7114(C_word t0,C_word t1);
C_noret_decl(f_7089)
static void C_ccall f_7089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7085)
static void C_ccall f_7085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7008)
static void C_ccall f_7008(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7012)
static void C_ccall f_7012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7015)
static void C_ccall f_7015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7053)
static void C_ccall f_7053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7006)
static void C_ccall f_7006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6903)
static void C_ccall f_6903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6907)
static void C_ccall f_6907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6994)
static void C_ccall f_6994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6990)
static void C_ccall f_6990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6909)
static void C_fcall f_6909(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6913)
static void C_ccall f_6913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6970)
static void C_ccall f_6970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6922)
static void C_fcall f_6922(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6944)
static void C_ccall f_6944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6934)
static void C_fcall f_6934(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6925)
static void C_ccall f_6925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6901)
static void C_ccall f_6901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6744)
static void C_ccall f_6744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6753)
static void C_ccall f_6753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6756)
static void C_ccall f_6756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6761)
static void C_fcall f_6761(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6806)
static void C_ccall f_6806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6873)
static void C_ccall f_6873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6835)
static void C_ccall f_6835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6775)
static void C_ccall f_6775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6779)
static void C_ccall f_6779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6738)
static void C_ccall f_6738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6540)
static void C_ccall f_6540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6544)
static void C_ccall f_6544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6553)
static void C_ccall f_6553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6556)
static void C_ccall f_6556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6559)
static void C_ccall f_6559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6562)
static void C_ccall f_6562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6565)
static void C_ccall f_6565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6590)
static void C_fcall f_6590(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6606)
static void C_ccall f_6606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6612)
static void C_ccall f_6612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6672)
static void C_fcall f_6672(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6699)
static C_word C_fcall f_6699(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6666)
static void C_ccall f_6666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6662)
static void C_ccall f_6662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6654)
static void C_ccall f_6654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6650)
static void C_ccall f_6650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6619)
static void C_ccall f_6619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6588)
static void C_ccall f_6588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6538)
static void C_ccall f_6538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6534)
static void C_ccall f_6534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6530)
static void C_ccall f_6530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5947)
static void C_ccall f_5947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5963)
static void C_ccall f_5963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5966)
static void C_ccall f_5966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6269)
static void C_ccall f_6269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6272)
static void C_ccall f_6272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6481)
static void C_fcall f_6481(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6510)
static void C_ccall f_6510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6275)
static void C_ccall f_6275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6437)
static void C_fcall f_6437(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6475)
static void C_ccall f_6475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6464)
static void C_fcall f_6464(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6472)
static void C_ccall f_6472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6402)
static void C_fcall f_6402(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6431)
static void C_ccall f_6431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6294)
static void C_ccall f_6294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6297)
static void C_ccall f_6297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6358)
static void C_fcall f_6358(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6385)
static void C_fcall f_6385(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6393)
static void C_ccall f_6393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6303)
static void C_ccall f_6303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6306)
static void C_ccall f_6306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6309)
static void C_ccall f_6309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6316)
static void C_ccall f_6316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6276)
static void C_fcall f_6276(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6288)
static void C_ccall f_6288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6068)
static void C_fcall f_6068(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6074)
static void C_fcall f_6074(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6262)
static void C_ccall f_6262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6234)
static void C_ccall f_6234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6198)
static void C_ccall f_6198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6136)
static void C_ccall f_6136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5971)
static void C_fcall f_5971(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5979)
static void C_ccall f_5979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5989)
static void C_fcall f_5989(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6058)
static void C_ccall f_6058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6010)
static void C_ccall f_6010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5937)
static void C_ccall f_5937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5933)
static void C_ccall f_5933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5726)
static void C_ccall f_5726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5729)
static void C_ccall f_5729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5732)
static void C_ccall f_5732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5889)
static void C_ccall f_5889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5774)
static void C_ccall f_5774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5850)
static void C_ccall f_5850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5720)
static void C_ccall f_5720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5712)
static void C_ccall f_5712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5412)
static void C_ccall f_5412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5436)
static void C_ccall f_5436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5439)
static void C_ccall f_5439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5460)
static void C_fcall f_5460(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5550)
static void C_ccall f_5550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5398)
static void C_ccall f_5398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5394)
static void C_ccall f_5394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5386)
static void C_ccall f_5386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5309)
static void C_fcall f_5309(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5346)
static void C_ccall f_5346(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5350)
static void C_ccall f_5350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5303)
static void C_ccall f_5303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4907)
static void C_ccall f_4907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4913)
static void C_ccall f_4913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4922)
static void C_ccall f_4922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4928)
static void C_ccall f_4928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4971)
static void C_ccall f_4971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4981)
static void C_ccall f_4981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4985)
static void C_ccall f_4985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4999)
static void C_fcall f_4999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5099)
static void C_fcall f_5099(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5247)
static void C_ccall f_5247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5186)
static void C_ccall f_5186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5124)
static void C_ccall f_5124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5050)
static void C_fcall f_5050(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5083)
static void C_ccall f_5083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5063)
static void C_fcall f_5063(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5013)
static void C_ccall f_5013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5021)
static void C_ccall f_5021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5007)
static void C_ccall f_5007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4866)
static void C_fcall f_4866(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4872)
static void C_fcall f_4872(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4890)
static void C_ccall f_4890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4758)
static void C_ccall f_4758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4827)
static void C_ccall f_4827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4800)
static void C_ccall f_4800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4812)
static void C_ccall f_4812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4596)
static void C_ccall f_4596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2370)
static void C_ccall f_2370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4530)
static void C_ccall f_4530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4128)
static void C_ccall f_4128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4134)
static void C_ccall f_4134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4143)
static void C_ccall f_4143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4429)
static void C_fcall f_4429(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4148)
static void C_fcall f_4148(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4272)
static void C_fcall f_4272(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4299)
static C_word C_fcall f_4299(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4190)
static void C_ccall f_4190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3675)
static void C_ccall f_3675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3678)
static void C_ccall f_3678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3681)
static void C_ccall f_3681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3690)
static void C_ccall f_3690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4058)
static void C_fcall f_4058(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4011)
static void C_fcall f_4011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4038)
static C_word C_fcall f_4038(C_word t0,C_word t1);
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_fcall f_3722(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3748)
static void C_fcall f_3748(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3784)
static void C_fcall f_3784(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3640)
static void C_ccall f_3640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3454)
static void C_ccall f_3454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3457)
static void C_ccall f_3457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3460)
static void C_ccall f_3460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3463)
static void C_ccall f_3463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3475)
static void C_fcall f_3475(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3505)
static void C_ccall f_3505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3448)
static void C_ccall f_3448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3232)
static void C_ccall f_3232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3244)
static void C_fcall f_3244(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3257)
static void C_ccall f_3257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3353)
static void C_ccall f_3353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3306)
static void C_ccall f_3306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2382)
static void C_ccall f_2382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_fcall f_2966(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3112)
static void C_fcall f_3112(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3174)
static void C_ccall f_3174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11165)
static void C_ccall f11165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11161)
static void C_ccall f11161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_fcall f_2976(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3091)
static void C_ccall f_3091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2385)
static void C_ccall f_2385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2770)
static void C_ccall f_2770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_fcall f_2700(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2586)
static void C_fcall f_2586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_fcall f_2523(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_fcall f_2475(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_10380)
static void C_fcall trf_10380(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10380(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10380(t0,t1,t2,t3);}

C_noret_decl(trf_10443)
static void C_fcall trf_10443(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10443(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10443(t0,t1);}

C_noret_decl(trf_10238)
static void C_fcall trf_10238(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10238(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10238(t0,t1);}

C_noret_decl(trf_10018)
static void C_fcall trf_10018(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10018(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10018(t0,t1,t2,t3);}

C_noret_decl(trf_9876)
static void C_fcall trf_9876(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9876(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9876(t0,t1);}

C_noret_decl(trf_9681)
static void C_fcall trf_9681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9681(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9681(t0,t1,t2);}

C_noret_decl(trf_9637)
static void C_fcall trf_9637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9637(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9637(t0,t1,t2);}

C_noret_decl(trf_9664)
static void C_fcall trf_9664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9664(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9664(t0,t1);}

C_noret_decl(trf_9593)
static void C_fcall trf_9593(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9593(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9593(t0,t1,t2);}

C_noret_decl(trf_9620)
static void C_fcall trf_9620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9620(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9620(t0,t1);}

C_noret_decl(trf_9558)
static void C_fcall trf_9558(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9558(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9558(t0,t1,t2);}

C_noret_decl(trf_9509)
static void C_fcall trf_9509(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9509(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9509(t0,t1,t2,t3);}

C_noret_decl(trf_9522)
static void C_fcall trf_9522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9522(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9522(t0,t1);}

C_noret_decl(trf_9485)
static void C_fcall trf_9485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9485(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9485(t0,t1,t2);}

C_noret_decl(trf_9432)
static void C_fcall trf_9432(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9432(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9432(t0,t1,t2,t3);}

C_noret_decl(trf_9445)
static void C_fcall trf_9445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9445(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9445(t0,t1);}

C_noret_decl(trf_9354)
static void C_fcall trf_9354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9354(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9354(t0,t1,t2,t3);}

C_noret_decl(trf_9367)
static void C_fcall trf_9367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9367(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9367(t0,t1);}

C_noret_decl(trf_9292)
static void C_fcall trf_9292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9292(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9292(t0,t1,t2,t3);}

C_noret_decl(trf_9305)
static void C_fcall trf_9305(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9305(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9305(t0,t1);}

C_noret_decl(trf_9194)
static void C_fcall trf_9194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9194(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9194(t0,t1,t2,t3);}

C_noret_decl(trf_9207)
static void C_fcall trf_9207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9207(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9207(t0,t1);}

C_noret_decl(trf_9132)
static void C_fcall trf_9132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9132(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9132(t0,t1,t2,t3);}

C_noret_decl(trf_9145)
static void C_fcall trf_9145(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9145(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9145(t0,t1);}

C_noret_decl(trf_8975)
static void C_fcall trf_8975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8975(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8975(t0,t1,t2);}

C_noret_decl(trf_8874)
static void C_fcall trf_8874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8874(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8874(t0,t1,t2);}

C_noret_decl(trf_8839)
static void C_fcall trf_8839(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8839(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8839(t0,t1,t2);}

C_noret_decl(trf_8795)
static void C_fcall trf_8795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8795(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8795(t0,t1,t2);}

C_noret_decl(trf_8822)
static void C_fcall trf_8822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8822(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8822(t0,t1);}

C_noret_decl(trf_8751)
static void C_fcall trf_8751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8751(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8751(t0,t1,t2);}

C_noret_decl(trf_8778)
static void C_fcall trf_8778(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8778(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8778(t0,t1);}

C_noret_decl(trf_8702)
static void C_fcall trf_8702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8702(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8702(t0,t1,t2,t3);}

C_noret_decl(trf_8715)
static void C_fcall trf_8715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8715(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8715(t0,t1);}

C_noret_decl(trf_8653)
static void C_fcall trf_8653(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8653(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8653(t0,t1,t2,t3);}

C_noret_decl(trf_8666)
static void C_fcall trf_8666(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8666(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8666(t0,t1);}

C_noret_decl(trf_8543)
static void C_fcall trf_8543(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8543(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8543(t0,t1,t2,t3);}

C_noret_decl(trf_8556)
static void C_fcall trf_8556(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8556(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8556(t0,t1);}

C_noret_decl(trf_8286)
static void C_fcall trf_8286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8286(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8286(t0,t1,t2);}

C_noret_decl(trf_8216)
static void C_fcall trf_8216(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8216(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8216(t0,t1,t2,t3);}

C_noret_decl(trf_8229)
static void C_fcall trf_8229(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8229(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8229(t0,t1);}

C_noret_decl(trf_8020)
static void C_fcall trf_8020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8020(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8020(t0,t1,t2);}

C_noret_decl(trf_7980)
static void C_fcall trf_7980(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7980(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7980(t0,t1,t2,t3);}

C_noret_decl(trf_7932)
static void C_fcall trf_7932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7932(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7932(t0,t1,t2);}

C_noret_decl(trf_7959)
static void C_fcall trf_7959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7959(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7959(t0,t1,t2);}

C_noret_decl(trf_7886)
static void C_fcall trf_7886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7886(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7886(t0,t1,t2,t3);}

C_noret_decl(trf_7846)
static void C_fcall trf_7846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7846(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7846(t0,t1,t2);}

C_noret_decl(trf_7652)
static void C_fcall trf_7652(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7652(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7652(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7724)
static void C_fcall trf_7724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7724(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7724(t0,t1);}

C_noret_decl(trf_7676)
static void C_fcall trf_7676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7676(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7676(t0,t1,t2);}

C_noret_decl(trf_7703)
static void C_fcall trf_7703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7703(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7703(t0,t1,t2);}

C_noret_decl(trf_7583)
static void C_fcall trf_7583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7583(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7583(t0,t1,t2,t3);}

C_noret_decl(trf_7552)
static void C_fcall trf_7552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7552(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7552(t0,t1,t2,t3);}

C_noret_decl(trf_7483)
static void C_fcall trf_7483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7483(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7483(t0,t1,t2);}

C_noret_decl(trf_7418)
static void C_fcall trf_7418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7418(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7418(t0,t1,t2);}

C_noret_decl(trf_7366)
static void C_fcall trf_7366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7366(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7366(t0,t1,t2);}

C_noret_decl(trf_7393)
static void C_fcall trf_7393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7393(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7393(t0,t1,t2);}

C_noret_decl(trf_7326)
static void C_fcall trf_7326(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7326(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7326(t0,t1,t2);}

C_noret_decl(trf_7147)
static void C_fcall trf_7147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7147(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7147(t0,t1,t2);}

C_noret_decl(trf_7174)
static void C_fcall trf_7174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7174(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7174(t0,t1,t2);}

C_noret_decl(trf_7272)
static void C_fcall trf_7272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7272(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7272(t0,t1,t2);}

C_noret_decl(trf_7216)
static void C_fcall trf_7216(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7216(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7216(t0,t1,t2);}

C_noret_decl(trf_6909)
static void C_fcall trf_6909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6909(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6909(t0,t1,t2,t3);}

C_noret_decl(trf_6922)
static void C_fcall trf_6922(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6922(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6922(t0,t1);}

C_noret_decl(trf_6934)
static void C_fcall trf_6934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6934(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6934(t0,t1);}

C_noret_decl(trf_6761)
static void C_fcall trf_6761(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6761(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6761(t0,t1,t2);}

C_noret_decl(trf_6590)
static void C_fcall trf_6590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6590(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6590(t0,t1,t2);}

C_noret_decl(trf_6672)
static void C_fcall trf_6672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6672(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6672(t0,t1,t2);}

C_noret_decl(trf_6481)
static void C_fcall trf_6481(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6481(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6481(t0,t1,t2);}

C_noret_decl(trf_6437)
static void C_fcall trf_6437(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6437(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6437(t0,t1,t2);}

C_noret_decl(trf_6464)
static void C_fcall trf_6464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6464(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6464(t0,t1,t2);}

C_noret_decl(trf_6402)
static void C_fcall trf_6402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6402(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6402(t0,t1,t2);}

C_noret_decl(trf_6358)
static void C_fcall trf_6358(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6358(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6358(t0,t1,t2);}

C_noret_decl(trf_6385)
static void C_fcall trf_6385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6385(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6385(t0,t1,t2);}

C_noret_decl(trf_6276)
static void C_fcall trf_6276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6276(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6276(t0,t1,t2);}

C_noret_decl(trf_6068)
static void C_fcall trf_6068(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6068(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6068(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6074)
static void C_fcall trf_6074(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6074(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6074(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5971)
static void C_fcall trf_5971(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5971(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5971(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5989)
static void C_fcall trf_5989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5989(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5989(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5460)
static void C_fcall trf_5460(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5460(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5460(t0,t1,t2,t3);}

C_noret_decl(trf_5309)
static void C_fcall trf_5309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5309(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5309(t0,t1,t2);}

C_noret_decl(trf_4999)
static void C_fcall trf_4999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4999(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4999(t0,t1);}

C_noret_decl(trf_5099)
static void C_fcall trf_5099(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5099(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5099(t0,t1,t2,t3);}

C_noret_decl(trf_5050)
static void C_fcall trf_5050(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5050(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5050(t0,t1,t2,t3);}

C_noret_decl(trf_5063)
static void C_fcall trf_5063(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5063(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5063(t0,t1);}

C_noret_decl(trf_4866)
static void C_fcall trf_4866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4866(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4866(t0,t1,t2);}

C_noret_decl(trf_4872)
static void C_fcall trf_4872(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4872(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4872(t0,t1,t2);}

C_noret_decl(trf_4429)
static void C_fcall trf_4429(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4429(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4429(t0,t1,t2);}

C_noret_decl(trf_4148)
static void C_fcall trf_4148(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4148(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4148(t0,t1,t2);}

C_noret_decl(trf_4272)
static void C_fcall trf_4272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4272(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4272(t0,t1,t2);}

C_noret_decl(trf_4058)
static void C_fcall trf_4058(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4058(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4058(t0,t1,t2);}

C_noret_decl(trf_4011)
static void C_fcall trf_4011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4011(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4011(t0,t1,t2);}

C_noret_decl(trf_3722)
static void C_fcall trf_3722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3722(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3722(t0,t1,t2,t3);}

C_noret_decl(trf_3748)
static void C_fcall trf_3748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3748(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3748(t0,t1);}

C_noret_decl(trf_3784)
static void C_fcall trf_3784(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3784(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3784(t0,t1);}

C_noret_decl(trf_3475)
static void C_fcall trf_3475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3475(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3475(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3244)
static void C_fcall trf_3244(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3244(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3244(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2966)
static void C_fcall trf_2966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2966(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2966(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3112)
static void C_fcall trf_3112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3112(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3112(t0,t1);}

C_noret_decl(trf_2976)
static void C_fcall trf_2976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2976(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2976(t0,t1);}

C_noret_decl(trf_2700)
static void C_fcall trf_2700(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2700(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2700(t0,t1);}

C_noret_decl(trf_2586)
static void C_fcall trf_2586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2586(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2586(t0,t1,t2);}

C_noret_decl(trf_2523)
static void C_fcall trf_2523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2523(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2523(t0,t1,t2);}

C_noret_decl(trf_2475)
static void C_fcall trf_2475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2475(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2475(t0,t1,t2);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_chicken_syntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_chicken_syntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("chicken_syntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3170)){
C_save(t1);
C_rereclaim2(3170*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,244);
lf[0]=C_h_intern(&lf[0],29,"\003syschicken-macro-environment");
lf[1]=C_h_intern(&lf[1],17,"register-feature!");
lf[2]=C_h_intern(&lf[2],6,"srfi-8");
lf[3]=C_h_intern(&lf[3],7,"srfi-16");
lf[4]=C_h_intern(&lf[4],7,"srfi-26");
lf[5]=C_h_intern(&lf[5],7,"srfi-31");
lf[6]=C_h_intern(&lf[6],7,"srfi-15");
lf[7]=C_h_intern(&lf[7],7,"srfi-11");
lf[8]=C_h_intern(&lf[8],16,"\003sysmacro-subset");
lf[9]=C_h_intern(&lf[9],29,"\003sysdefault-macro-environment");
lf[10]=C_h_intern(&lf[10],28,"\003sysextend-macro-environment");
lf[11]=C_h_intern(&lf[11],12,"define-macro");
lf[12]=C_h_intern(&lf[12],12,"syntax-error");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000<`define-macro\047 is not supported - please use `define-syntax\047");
lf[14]=C_h_intern(&lf[14],18,"\003syser-transformer");
lf[15]=C_h_intern(&lf[15],19,"let-compiler-syntax");
lf[16]=C_h_intern(&lf[16],9,"\003sysmap-n");
lf[17]=C_h_intern(&lf[17],24,"\004corelet-compiler-syntax");
lf[18]=C_h_intern(&lf[18],25,"\003syssyntax-rules-mismatch");
lf[19]=C_h_intern(&lf[19],9,"\003syslist\077");
lf[20]=C_h_intern(&lf[20],9,"\003sysnull\077");
lf[21]=C_h_intern(&lf[21],22,"define-compiler-syntax");
lf[22]=C_h_intern(&lf[22],6,"lambda");
lf[23]=C_h_intern(&lf[23],27,"\004coredefine-compiler-syntax");
lf[24]=C_h_intern(&lf[24],3,"use");
lf[25]=C_h_intern(&lf[25],22,"\004corerequire-extension");
lf[26]=C_h_intern(&lf[26],16,"\003syscheck-syntax");
lf[27]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[28]=C_h_intern(&lf[28],17,"define-for-syntax");
lf[29]=C_h_intern(&lf[29],10,"\003sysappend");
lf[30]=C_h_intern(&lf[30],6,"define");
lf[31]=C_h_intern(&lf[31],16,"begin-for-syntax");
lf[32]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[33]=C_h_intern(&lf[33],3,"rec");
lf[34]=C_h_intern(&lf[34],6,"letrec");
lf[35]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[36]=C_h_intern(&lf[36],16,"define-extension");
lf[37]=C_h_intern(&lf[37],22,"chicken-compile-shared");
lf[38]=C_h_intern(&lf[38],9,"compiling");
lf[39]=C_h_intern(&lf[39],4,"name");
lf[40]=C_h_intern(&lf[40],4,"unit");
lf[41]=C_h_intern(&lf[41],5,"quote");
lf[42]=C_h_intern(&lf[42],7,"provide");
lf[43]=C_h_intern(&lf[43],4,"else");
lf[44]=C_h_intern(&lf[44],3,"not");
lf[45]=C_h_intern(&lf[45],11,"cond-expand");
lf[46]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007unquote\376\003\000\000\002\376\001\000\000\006%begin\376\377\016\376\377\016");
lf[47]=C_h_intern(&lf[47],4,"cdar");
lf[48]=C_h_intern(&lf[48],6,"append");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid clause specifier");
lf[50]=C_h_intern(&lf[50],4,"caar");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid clause syntax");
lf[52]=C_h_intern(&lf[52],6,"export");
lf[53]=C_h_intern(&lf[53],7,"dynamic");
lf[54]=C_h_intern(&lf[54],6,"static");
lf[55]=C_h_intern(&lf[55],5,"begin");
lf[56]=C_h_intern(&lf[56],7,"declare");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\001_");
lf[58]=C_h_intern(&lf[58],5,"apply");
lf[59]=C_h_intern(&lf[59],4,"cute");
lf[60]=C_h_intern(&lf[60],6,"gensym");
lf[61]=C_h_intern(&lf[61],7,"reverse");
lf[62]=C_h_intern(&lf[62],5,"<...>");
lf[63]=C_h_intern(&lf[63],2,"<>");
lf[64]=C_h_intern(&lf[64],3,"let");
lf[65]=C_h_intern(&lf[65],19,"\003sysprimitive-alias");
lf[66]=C_h_intern(&lf[66],3,"cut");
lf[67]=C_h_intern(&lf[67],18,"getter-with-setter");
lf[68]=C_h_intern(&lf[68],18,"define-record-type");
lf[69]=C_h_intern(&lf[69],18,"\003sysmake-structure");
lf[70]=C_h_intern(&lf[70],14,"\003sysstructure\077");
lf[71]=C_h_intern(&lf[71],15,"\000record-setters");
lf[72]=C_h_intern(&lf[72],12,"\003sysfeatures");
lf[73]=C_h_intern(&lf[73],19,"\003syscheck-structure");
lf[74]=C_h_intern(&lf[74],10,"\004corecheck");
lf[75]=C_h_intern(&lf[75],13,"\003sysblock-ref");
lf[76]=C_h_intern(&lf[76],14,"\003sysblock-set!");
lf[77]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[78]=C_h_intern(&lf[78],3,"car");
lf[79]=C_h_intern(&lf[79],1,"y");
lf[80]=C_h_intern(&lf[80],1,"x");
lf[81]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\001\376\003\000\000\002\376\001\000\000\010variable\376\001\000"
"\000\001_");
lf[82]=C_h_intern(&lf[82],4,"memv");
lf[83]=C_h_intern(&lf[83],14,"condition-case");
lf[84]=C_h_intern(&lf[84],9,"condition");
lf[85]=C_h_intern(&lf[85],8,"\003sysslot");
lf[86]=C_h_intern(&lf[86],10,"\003syssignal");
lf[87]=C_h_intern(&lf[87],4,"cond");
lf[88]=C_h_intern(&lf[88],17,"handle-exceptions");
lf[89]=C_h_intern(&lf[89],3,"and");
lf[90]=C_h_intern(&lf[90],4,"kvar");
lf[91]=C_h_intern(&lf[91],5,"exvar");
lf[92]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[93]=C_h_intern(&lf[93],30,"call-with-current-continuation");
lf[94]=C_h_intern(&lf[94],22,"with-exception-handler");
lf[95]=C_h_intern(&lf[95],10,"\003sysvalues");
lf[96]=C_h_intern(&lf[96],9,"\003sysapply");
lf[97]=C_h_intern(&lf[97],20,"\003syscall-with-values");
lf[98]=C_h_intern(&lf[98],4,"args");
lf[99]=C_h_intern(&lf[99],1,"k");
lf[100]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[101]=C_h_intern(&lf[101],21,"define-record-printer");
lf[102]=C_h_intern(&lf[102],27,"\003sysregister-record-printer");
lf[103]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[104]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[105]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[106]=C_h_intern(&lf[106],2,">=");
lf[107]=C_h_intern(&lf[107],3,"cdr");
lf[108]=C_h_intern(&lf[108],3,"eq\077");
lf[109]=C_h_intern(&lf[109],11,"case-lambda");
lf[110]=C_h_intern(&lf[110],6,"length");
lf[111]=C_h_intern(&lf[111],9,"split-at!");
lf[112]=C_h_intern(&lf[112],4,"take");
lf[113]=C_h_intern(&lf[113],4,"list");
lf[114]=C_h_intern(&lf[114],11,"lambda-list");
lf[115]=C_h_intern(&lf[115],25,"\003sysdecompose-lambda-list");
lf[116]=C_h_intern(&lf[116],10,"fold-right");
lf[117]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\012\004corecheck\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\003syserror\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreimmutable\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376B\000\0000no matching clause in call to \047case-lambda\047 form\376\377\016\376\377\016\376\377\016"
"\376\377\016");
lf[118]=C_h_intern(&lf[118],2,"if");
lf[119]=C_h_intern(&lf[119],4,"lvar");
lf[120]=C_h_intern(&lf[120],4,"rvar");
lf[121]=C_h_intern(&lf[121],3,"min");
lf[122]=C_h_intern(&lf[122],7,"require");
lf[123]=C_h_intern(&lf[123],6,"srfi-1");
lf[124]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[125]=C_h_intern(&lf[125],5,"null\077");
lf[126]=C_h_intern(&lf[126],14,"let-optionals*");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[128]=C_h_intern(&lf[128],14,"\004coreimmutable");
lf[129]=C_h_intern(&lf[129],9,"\003syserror");
lf[130]=C_h_intern(&lf[130],4,"tmp2");
lf[131]=C_h_intern(&lf[131],3,"tmp");
lf[132]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[133]=C_h_intern(&lf[133],8,"optional");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[136]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[137]=C_h_intern(&lf[137],13,"let-optionals");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[139]=C_h_intern(&lf[139],14,"string->symbol");
lf[140]=C_h_intern(&lf[140],13,"string-append");
lf[141]=C_h_intern(&lf[141],14,"symbol->string");
lf[142]=C_h_intern(&lf[142],4,"let*");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\004def-");
lf[144]=C_h_intern(&lf[144],5,"%rest");
lf[145]=C_h_intern(&lf[145],4,"body");
lf[146]=C_h_intern(&lf[146],4,"cadr");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\001%");
lf[148]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[149]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000");
lf[150]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[151]=C_h_intern(&lf[151],6,"select");
lf[152]=C_h_intern(&lf[152],8,"\003syseqv\077");
lf[153]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[154]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[155]=C_h_intern(&lf[155],2,"or");
lf[156]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[157]=C_h_intern(&lf[157],8,"and-let*");
lf[158]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[159]=C_h_intern(&lf[159],13,"define-inline");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000*invalid substitution form - must be lambda");
lf[161]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[162]=C_h_intern(&lf[162],18,"\004coredefine-inline");
lf[163]=C_h_intern(&lf[163],8,"list-ref");
lf[164]=C_h_intern(&lf[164],9,"nth-value");
lf[165]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[166]=C_h_intern(&lf[166],13,"letrec-values");
lf[167]=C_h_intern(&lf[167],9,"\004coreset!");
lf[168]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[169]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[170]=C_h_intern(&lf[170],11,"let*-values");
lf[171]=C_h_intern(&lf[171],10,"let-values");
lf[172]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[173]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\004list\376\001\000\000\001_");
lf[174]=C_h_intern(&lf[174],13,"define-values");
lf[175]=C_h_intern(&lf[175],11,"set!-values");
lf[176]=C_h_intern(&lf[176],19,"\003sysregister-export");
lf[177]=C_h_intern(&lf[177],18,"\003syscurrent-module");
lf[178]=C_h_intern(&lf[178],12,"\003sysfor-each");
lf[179]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[180]=C_h_intern(&lf[180],14,"\004coreundefined");
lf[181]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010variable\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[182]=C_h_intern(&lf[182],6,"unless");
lf[183]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[184]=C_h_intern(&lf[184],4,"when");
lf[185]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[186]=C_h_intern(&lf[186],12,"parameterize");
lf[187]=C_h_intern(&lf[187],16,"\003sysdynamic-wind");
lf[188]=C_h_intern(&lf[188],1,"t");
lf[189]=C_h_intern(&lf[189],8,"\003syslist");
lf[190]=C_h_intern(&lf[190],4,"swap");
lf[191]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[192]=C_h_intern(&lf[192],9,"eval-when");
lf[193]=C_h_intern(&lf[193],10,"\000compiling");
lf[194]=C_h_intern(&lf[194],19,"\004corecompiletimetoo");
lf[195]=C_h_intern(&lf[195],20,"\004corecompiletimeonly");
lf[196]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[197]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid situation specifier");
lf[199]=C_h_intern(&lf[199],4,"load");
lf[200]=C_h_intern(&lf[200],7,"compile");
lf[201]=C_h_intern(&lf[201],4,"eval");
lf[202]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\002");
lf[203]=C_h_intern(&lf[203],9,"fluid-let");
lf[204]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016\376\377\001\000\000\000\000\376\001\000\000\001_");
lf[205]=C_h_intern(&lf[205],6,"ensure");
lf[206]=C_h_intern(&lf[206],11,"\000type-error");
lf[207]=C_h_intern(&lf[207],15,"\003syssignal-hook");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\033argument has incorrect type");
lf[209]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\003");
lf[210]=C_h_intern(&lf[210],6,"assert");
lf[211]=C_h_intern(&lf[211],16,"\003sysstrip-syntax");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\020assertion failed");
lf[213]=C_decode_literal(C_heaptop,"\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[214]=C_h_intern(&lf[214],7,"include");
lf[215]=C_h_intern(&lf[215],27,"\003syscurrent-source-filename");
lf[216]=C_h_intern(&lf[216],4,"read");
lf[217]=C_h_intern(&lf[217],20,"with-input-from-file");
lf[218]=C_h_intern(&lf[218],5,"print");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\014; including ");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[221]=C_h_intern(&lf[221],12,"load-verbose");
lf[222]=C_h_intern(&lf[222],28,"\003sysresolve-include-filename");
lf[223]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[224]=C_h_intern(&lf[224],12,"\004coredeclare");
lf[225]=C_h_intern(&lf[225],4,"time");
lf[226]=C_h_intern(&lf[226],15,"\003sysstart-timer");
lf[227]=C_h_intern(&lf[227],14,"\003sysstop-timer");
lf[228]=C_h_intern(&lf[228],17,"\003sysdisplay-times");
lf[229]=C_h_intern(&lf[229],7,"receive");
lf[230]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\013lambda-list\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[231]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[232]=C_h_intern(&lf[232],13,"define-record");
lf[233]=C_h_intern(&lf[233],3,"val");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\005-set!");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\001\077");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\005make-");
lf[239]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\001\000\000\006symbol\376\377\001\000\000\000\000");
lf[240]=C_h_intern(&lf[240],21,"\003sysmacro-environment");
lf[241]=C_h_intern(&lf[241],11,"\003sysprovide");
lf[242]=C_h_intern(&lf[242],19,"chicken-more-macros");
lf[243]=C_h_intern(&lf[243],14,"chicken-syntax");
C_register_lf2(lf,244,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2285,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 35   ##sys#provide */
t3=*((C_word*)lf[241]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[242],lf[243]);}

/* k2283 */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 43   ##sys#macro-environment */
t3=*((C_word*)lf[240]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2287 in k2283 */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2292,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10318,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10320,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 47   ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a10319 in k2287 in k2283 */
static void C_ccall f_10320(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10320,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10324,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 49   ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[232],t2,lf[239]);}

/* k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10324,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 52   symbol->string */
t5=*((C_word*)lf[141]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10336,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 53   r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[41]);}

/* k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10336,2,t0,t1);}
t2=(C_word)C_i_memq(lf[71],*((C_word*)lf[72]+1));
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 55   r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[55]);}

/* k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 56   r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[30]);}

/* k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 57   r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[67]);}

/* k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10351,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 58   r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10761,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 61   string-append */
t4=*((C_word*)lf[140]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[238],((C_word*)t0)[2]);}

/* k10759 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 61   string->symbol */
t2=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10721,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t2);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[7],a[10]=t1,a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=t3,tmp=(C_word)a,a+=14,tmp);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);}

/* k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10753,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[69],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t7);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t8);
t10=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10669,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t9,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10713,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 64   string-append */
t12=*((C_word*)lf[140]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,((C_word*)t0)[2],lf[237]);}

/* k10711 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 64   string->symbol */
t2=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word ab[59],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10669,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[80],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[41],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[80],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[70],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t2,t8);
t10=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,t1,t11);
t13=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t12);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10374,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t13,tmp=(C_word)a,a+=6,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10378,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10380,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t17,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[12],a[11]=((C_word)li134),tmp=(C_word)a,a+=12,tmp));
t19=((C_word*)t17)[1];
f_10380(t19,t15,((C_word*)t0)[2],C_fix(1));}

/* mapslots in k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_fcall f_10380(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10380,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t3,a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
t6=(C_word)C_slot(t2,C_fix(0));
/* chicken-syntax.scm: 69   symbol->string */
t7=*((C_word*)lf[141]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}

/* k10388 in mapslots in k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_10393,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10657,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 70   string-append */
t4=*((C_word*)lf[140]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[2],lf[235],t1,lf[236]);}

/* k10655 in k10388 in mapslots in k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 70   string->symbol */
t2=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10391 in k10388 in mapslots in k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10396,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10653,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 71   string-append */
t4=*((C_word*)lf[140]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],lf[234],((C_word*)t0)[2]);}

/* k10651 in k10391 in k10388 in mapslots in k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 71   string->symbol */
t2=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10394 in k10391 in k10388 in mapslots in k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word ab[124],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10396,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[233],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[80],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[80],t6);
t8=(C_word)C_a_i_cons(&a,2,lf[73],t7);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,lf[74],t9);
t11=(C_word)C_a_i_cons(&a,2,lf[233],C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],t11);
t13=(C_word)C_a_i_cons(&a,2,lf[80],t12);
t14=(C_word)C_a_i_cons(&a,2,lf[76],t13);
t15=(C_word)C_a_i_cons(&a,2,t14,C_SCHEME_END_OF_LIST);
t16=(C_word)C_a_i_cons(&a,2,t10,t15);
t17=(C_word)C_a_i_cons(&a,2,t3,t16);
t18=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t17);
t19=(C_word)C_a_i_cons(&a,2,t18,C_SCHEME_END_OF_LIST);
t20=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t19);
t21=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t20);
t22=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10443,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t21,a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[3])){
t23=(C_word)C_a_i_cons(&a,2,lf[80],C_SCHEME_END_OF_LIST);
t24=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t25=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t24);
t26=(C_word)C_a_i_cons(&a,2,t25,C_SCHEME_END_OF_LIST);
t27=(C_word)C_a_i_cons(&a,2,lf[80],t26);
t28=(C_word)C_a_i_cons(&a,2,lf[73],t27);
t29=(C_word)C_a_i_cons(&a,2,t28,C_SCHEME_END_OF_LIST);
t30=(C_word)C_a_i_cons(&a,2,lf[74],t29);
t31=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],C_SCHEME_END_OF_LIST);
t32=(C_word)C_a_i_cons(&a,2,lf[80],t31);
t33=(C_word)C_a_i_cons(&a,2,lf[75],t32);
t34=(C_word)C_a_i_cons(&a,2,t33,C_SCHEME_END_OF_LIST);
t35=(C_word)C_a_i_cons(&a,2,t30,t34);
t36=(C_word)C_a_i_cons(&a,2,t23,t35);
t37=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t36);
t38=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);
t39=(C_word)C_a_i_cons(&a,2,t37,t38);
t40=t22;
f_10443(t40,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t39));}
else{
t23=(C_word)C_a_i_cons(&a,2,lf[80],C_SCHEME_END_OF_LIST);
t24=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t25=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t24);
t26=(C_word)C_a_i_cons(&a,2,t25,C_SCHEME_END_OF_LIST);
t27=(C_word)C_a_i_cons(&a,2,lf[80],t26);
t28=(C_word)C_a_i_cons(&a,2,lf[73],t27);
t29=(C_word)C_a_i_cons(&a,2,t28,C_SCHEME_END_OF_LIST);
t30=(C_word)C_a_i_cons(&a,2,lf[74],t29);
t31=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],C_SCHEME_END_OF_LIST);
t32=(C_word)C_a_i_cons(&a,2,lf[80],t31);
t33=(C_word)C_a_i_cons(&a,2,lf[75],t32);
t34=(C_word)C_a_i_cons(&a,2,t33,C_SCHEME_END_OF_LIST);
t35=(C_word)C_a_i_cons(&a,2,t30,t34);
t36=(C_word)C_a_i_cons(&a,2,t23,t35);
t37=t22;
f_10443(t37,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t36));}}

/* k10441 in k10394 in k10391 in k10388 in mapslots in k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_fcall f_10443(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10443,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10407,a[2]=t7,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t10=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm: 90   mapslots */
t11=((C_word*)((C_word*)t0)[2])[1];
f_10380(t11,t8,t9,t10);}

/* k10405 in k10441 in k10394 in k10391 in k10388 in mapslots in k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10407,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k10376 in k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k10372 in k10667 in k10751 in k10719 in k10349 in k10346 in k10343 in k10340 in k10334 in k10331 in k10322 in a10319 in k2287 in k2283 */
static void C_ccall f_10374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10374,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k10316 in k2287 in k2283 */
static void C_ccall f_10318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 45   ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[232],C_SCHEME_END_OF_LIST,t1);}

/* k2290 in k2287 in k2283 */
static void C_ccall f_2292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10175,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10177,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 95   ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a10176 in k2290 in k2287 in k2283 */
static void C_ccall f_10177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10177,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10181,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 97   r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[22]);}

/* k10179 in a10176 in k2290 in k2287 in k2283 */
static void C_ccall f_10181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10184,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 98   r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k10182 in k10179 in a10176 in k2290 in k2287 in k2283 */
static void C_ccall f_10184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10187,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 99   ##sys#check-syntax */
t3=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[229],((C_word*)t0)[4],lf[231]);}

/* k10185 in k10182 in k10179 in a10176 in k2290 in k2287 in k2283 */
static void C_ccall f_10187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10187,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10216,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10223,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 103  ##sys#check-syntax */
t4=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[229],((C_word*)t0)[5],lf[230]);}}

/* k10221 in k10185 in k10182 in k10179 in a10176 in k2290 in k2287 in k2283 */
static void C_ccall f_10223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10223,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
t4=(C_word)C_i_cdddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10238,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_i_cdr(t2);
t7=t5;
f_10238(t7,(C_word)C_i_nullp(t6));}
else{
t6=t5;
f_10238(t6,C_SCHEME_FALSE);}}

/* k10236 in k10221 in k10185 in k10182 in k10179 in a10176 in k2290 in k2287 in k2283 */
static void C_fcall f_10238(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10238,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10253,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t7=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10292,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t6=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}}

/* k10290 in k10236 in k10221 in k10185 in k10182 in k10179 in a10176 in k2290 in k2287 in k2283 */
static void C_ccall f_10292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10292,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,lf[97],t5));}

/* k10251 in k10236 in k10221 in k10185 in k10182 in k10179 in a10176 in k2290 in k2287 in k2283 */
static void C_ccall f_10253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10253,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k10214 in k10185 in k10182 in k10179 in a10176 in k2290 in k2287 in k2283 */
static void C_ccall f_10216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10216,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[189],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,lf[97],t5));}

/* k10173 in k2290 in k2287 in k2283 */
static void C_ccall f_10175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 92   ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[229],C_SCHEME_END_OF_LIST,t1);}

/* k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10076,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10078,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 115  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a10077 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10078(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10078,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10082,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 117  r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[188]);}

/* k10080 in a10077 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 118  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k10083 in k10080 in a10077 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10088,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 119  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k10086 in k10083 in k10080 in a10077 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10088,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[226],C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_END_OF_LIST);}

/* k10165 in k10086 in k10083 in k10080 in a10077 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word ab[54],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10167,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[227],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[228],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,lf[95],t7);
t9=(C_word)C_a_i_cons(&a,2,lf[96],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t6,t10);
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t11);
t13=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t12);
t14=(C_word)C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
t15=(C_word)C_a_i_cons(&a,2,t3,t14);
t16=(C_word)C_a_i_cons(&a,2,lf[97],t15);
t17=(C_word)C_a_i_cons(&a,2,t16,C_SCHEME_END_OF_LIST);
t18=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t17);
t19=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t18));}

/* k10074 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 113  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[225],C_SCHEME_END_OF_LIST,t1);}

/* k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10058,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10060,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 130  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a10059 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10060,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10068,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_i_cdr(t2);
/* ##sys#append */
t7=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}

/* k10066 in a10059 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10068,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[224],t1));}

/* k10056 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 128  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[56],C_SCHEME_END_OF_LIST,t1);}

/* k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9969,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9971,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 136  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9971,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9975,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 138  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[214],t2,lf[223]);}

/* k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9978,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* chicken-syntax.scm: 139  ##sys#resolve-include-filename */
t4=*((C_word*)lf[222]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_TRUE);}

/* k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9981,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 140  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9984,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10047,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 141  load-verbose */
t4=*((C_word*)lf[221]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k10045 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-syntax.scm: 141  print */
t2=*((C_word*)lf[218]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[219],((C_word*)t0)[2],lf[220]);}
else{
t2=((C_word*)t0)[3];
f_9984(2,t2,C_SCHEME_UNDEFINED);}}

/* k9982 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9991,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9995,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9997,a[2]=((C_word*)t0)[2],a[3]=((C_word)li129),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 143  with-input-from-file */
t5=*((C_word*)lf[217]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[2],t4);}

/* a9996 in k9982 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9997,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10003,a[2]=t3,a[3]=t5,a[4]=((C_word)li125),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10008,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10041,a[2]=t5,a[3]=t3,a[4]=((C_word)li128),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[187]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t1,t6,t7,t8);}

/* a10040 in a9996 in k9982 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10041,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[215]+1));
t3=C_mutate((C_word*)lf[215]+1 /* (set! current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a10007 in a9996 in k9982 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10016,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 146  read */
t3=*((C_word*)lf[216]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k10014 in a10007 in a9996 in k9982 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10016,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10018,a[2]=t3,a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_10018(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* doloop107 in k10014 in a10007 in a9996 in k9982 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_10018(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10018,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eofp(t2))){
/* chicken-syntax.scm: 149  reverse */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10035,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 146  read */
t5=*((C_word*)lf[216]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k10033 in doloop107 in k10014 in a10007 in a9996 in k9982 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10035,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_10018(t3,((C_word*)t0)[2],t1,t2);}

/* a10002 in a9996 in k9982 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_10003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10003,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[215]+1));
t3=C_mutate((C_word*)lf[215]+1 /* (set! current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k9993 in k9982 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k9989 in k9982 in k9979 in k9976 in k9973 in a9970 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9991,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k9967 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 134  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[214],C_SCHEME_END_OF_LIST,t1);}

/* k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9855,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9857,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 153  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9856 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9857,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9861,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 155  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[210],t2,lf[213]);}

/* k9859 in a9856 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9861,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9870,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 158  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[118]);}

/* k9868 in k9859 in a9856 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9873,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 159  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[41]);}

/* k9871 in k9868 in k9859 in a9856 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9876,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_eqp(C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=(C_word)C_a_i_cons(&a,2,lf[212],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[41],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=t2;
f_9876(t7,(C_word)C_a_i_cons(&a,2,lf[128],t6));}
else{
t4=t2;
f_9876(t4,(C_word)C_i_car(((C_word*)t0)[2]));}}

/* k9874 in k9871 in k9868 in k9859 in a9856 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9876(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9876,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[74],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[180],C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9911,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_length(((C_word*)t0)[3]);
if(C_truep((C_word)C_fixnum_greaterp(t6,C_fix(1)))){
t7=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* ##sys#append */
t8=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,t7,C_SCHEME_END_OF_LIST);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9936,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 169  ##sys#strip-syntax */
t8=*((C_word*)lf[211]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[6]);}}

/* k9934 in k9874 in k9871 in k9868 in k9859 in a9856 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9936,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t4,C_SCHEME_END_OF_LIST);}

/* k9909 in k9874 in k9871 in k9868 in k9859 in a9856 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9911,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[129],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t6));}

/* k9853 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 151  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[210],C_SCHEME_END_OF_LIST,t1);}

/* k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9718,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9720,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 174  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9719 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9720,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9724,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 176  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[205],t2,lf[209]);}

/* k9722 in a9719 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9724,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=(C_word)C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9736,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 180  r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[131]);}

/* k9734 in k9722 in a9719 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 181  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k9737 in k9734 in k9722 in a9719 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9742,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 182  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k9740 in k9737 in k9734 in k9722 in a9719 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word ab[56],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9742,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,lf[74],t7);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9789,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t1,a[6]=t8,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
/* ##sys#append */
t10=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}
else{
t10=(C_word)C_a_i_cons(&a,2,lf[208],C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,lf[41],t10);
t12=(C_word)C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=(C_word)C_a_i_cons(&a,2,lf[128],t12);
t14=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t15=(C_word)C_a_i_cons(&a,2,lf[41],t14);
t16=(C_word)C_a_i_cons(&a,2,t15,C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t16);
t18=(C_word)C_a_i_cons(&a,2,t13,t17);
/* ##sys#append */
t19=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t9,t18,C_SCHEME_END_OF_LIST);}}

/* k9787 in k9740 in k9737 in k9734 in k9722 in a9719 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9789,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[206],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[207],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}

/* k9716 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 171  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[205],C_SCHEME_END_OF_LIST,t1);}

/* k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2310,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9032,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9034,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 195  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9034(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9034,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9038,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 197  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[203],t2,lf[204]);}

/* k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9038,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9047,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9681,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=((C_word)li121),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9681(t12,t8,t2);}

/* loop167 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9681(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9681,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[78]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9710,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g183184 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9708 in loop167 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9710,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop167180 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9681(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop167180 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9681(t6,((C_word*)t0)[3],t5);}}

/* k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9047,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9637,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li120),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_9637(t10,t6,((C_word*)t0)[3]);}

/* loop191 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9637(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9637,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9664,a[2]=((C_word*)t0)[5],a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9675,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g207208 */
t6=t3;
f_9664(t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9673 in loop191 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9675,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop191204 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9637(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop191204 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9637(t6,((C_word*)t0)[3],t5);}}

/* g207 in loop191 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9664(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9664,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9672,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 201  gensym */
t3=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9670 in g207 in loop191 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 201  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9050,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9593,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li118),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_9593(t10,t6,((C_word*)t0)[3]);}

/* loop216 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9593(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9593,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9620,a[2]=((C_word*)t0)[5],a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9631,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g232233 */
t6=t3;
f_9620(t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9629 in loop216 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9631,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop216229 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9593(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop216229 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9593(t6,((C_word*)t0)[3],t5);}}

/* g232 in loop216 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9620(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9620,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9628,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 202  gensym */
t3=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9626 in g232 in loop216 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 202  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 203  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9056,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9059,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 204  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9070,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9507,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9558,a[2]=t9,a[3]=t14,a[4]=t11,a[5]=((C_word)li116),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_9558(t16,t12,((C_word*)t0)[2]);}

/* loop273 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9558(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9558,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[146]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9587,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g289290 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9585 in loop273 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9587,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop273286 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9558(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop273286 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9558(t6,((C_word*)t0)[3],t5);}}

/* k9505 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9507,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9509,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_9509(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop246 in k9505 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9509(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9509,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[189]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9542,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g266267 */
t10=t6;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9540 in loop246 in k9505 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9542,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9522,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_9522(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_9522(t5,t4);}}

/* k9520 in k9540 in loop246 in k9505 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9522(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop246260 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9509(t5,((C_word*)t0)[2],t3,t4);}

/* k9416 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9422,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9426,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9430,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_i_length(((C_word*)t0)[2]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9485,a[2]=t11,a[3]=((C_word)li114),tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_9485(t13,t8,t9);}

/* loop in k9416 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9485(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9485,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9499,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
/* chicken-syntax.scm: 210  loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k9497 in loop in k9416 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9499,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t1));}

/* k9428 in k9416 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9430,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9432,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_9432(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop296 in k9428 in k9416 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9432(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9432,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[189]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9465,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g316317 */
t10=t6;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9463 in loop296 in k9428 in k9416 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9465,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9445,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_9445(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_9445(t5,t4);}}

/* k9443 in k9463 in loop296 in k9428 in k9416 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9445(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop296310 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9432(t5,((C_word*)t0)[2],t3,t4);}

/* k9424 in k9416 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k9420 in k9416 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9070,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9274,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9354,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9354(t11,t7,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* loop326 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9354(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9354,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(C_word)C_slot(t2,C_fix(0));
t7=(C_word)C_slot(t3,C_fix(0));
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t6,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[167],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9367,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t11,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t13=t12;
f_9367(t13,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11));}
else{
t13=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t14=t12;
f_9367(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9365 in loop326 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9367(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop326340 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9354(t5,((C_word*)t0)[2],t3,t4);}

/* k9272 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9278,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9282,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9292,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9292(t11,t7,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop359 in k9272 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9292(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9292,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(C_word)C_slot(t2,C_fix(0));
t7=(C_word)C_slot(t3,C_fix(0));
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t6,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[167],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9305,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t11,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t13=t12;
f_9305(t13,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11));}
else{
t13=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t14=t12;
f_9305(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9303 in loop359 in k9272 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9305(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop359373 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9292(t5,((C_word*)t0)[2],t3,t4);}

/* k9280 in k9272 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9282,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[180],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k9276 in k9272 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k9268 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9270,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9262,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t3,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k9260 in k9268 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9262,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9110,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t3,a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9114,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9194,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_9194(t13,t9,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* loop392 in k9260 in k9268 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9194(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9194,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(C_word)C_slot(t2,C_fix(0));
t7=(C_word)C_slot(t3,C_fix(0));
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t6,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[167],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9207,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t11,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t13=t12;
f_9207(t13,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11));}
else{
t13=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t14=t12;
f_9207(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9205 in loop392 in k9260 in k9268 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9207(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop392406 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9194(t5,((C_word*)t0)[2],t3,t4);}

/* k9112 in k9260 in k9268 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9118,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9122,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9132,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9132(t11,t7,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop425 in k9112 in k9260 in k9268 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9132(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9132,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(C_word)C_slot(t2,C_fix(0));
t7=(C_word)C_slot(t3,C_fix(0));
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t6,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[167],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9145,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t11,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t13=t12;
f_9145(t13,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11));}
else{
t13=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t14=t12;
f_9145(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9143 in loop425 in k9112 in k9260 in k9268 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_9145(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop425439 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9132(t5,((C_word*)t0)[2],t3,t4);}

/* k9120 in k9112 in k9260 in k9268 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9122,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[180],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k9116 in k9112 in k9260 in k9268 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k9108 in k9260 in k9268 in k9068 in k9057 in k9054 in k9051 in k9048 in k9045 in k9036 in a9033 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9110,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[187],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}

/* k9030 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 193  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[203],C_SCHEME_END_OF_LIST,t1);}

/* k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8911,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8913,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 228  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8913(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8913,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8917,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 230  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[192],t2,lf[202]);}

/* k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8917,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8923,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 232  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[55]);}

/* k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9024,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k9022 in k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9024,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 234  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[201]);}

/* k8927 in k9022 in k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 235  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[200]);}

/* k8930 in k8927 in k9022 in k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8935,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 236  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[199]);}

/* k8933 in k8930 in k8927 in k9022 in k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8935,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8938,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t7,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8975,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=t7,a[8]=t3,a[9]=t10,a[10]=((C_word)li107),tmp=(C_word)a,a+=11,tmp));
t12=((C_word*)t10)[1];
f_8975(t12,t8,((C_word*)t0)[2]);}

/* loop in k8933 in k8930 in k8927 in k9022 in k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8975(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8975,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8988,a[2]=t1,a[3]=((C_word*)t0)[9],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8998,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=t2,a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 243  c */
t6=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8996 in loop in k8933 in k8930 in k8927 in k9022 in k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8998,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[12],0,C_SCHEME_TRUE);
t3=(C_word)C_slot(((C_word*)t0)[11],C_fix(1));
/* chicken-syntax.scm: 247  loop */
t4=((C_word*)((C_word*)t0)[10])[1];
f_8975(t4,((C_word*)t0)[9],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9005,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 244  c */
t3=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k9003 in k8996 in loop in k8933 in k8930 in k8927 in k9022 in k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9005,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[10],0,C_SCHEME_TRUE);
t3=(C_word)C_slot(((C_word*)t0)[9],C_fix(1));
/* chicken-syntax.scm: 247  loop */
t4=((C_word*)((C_word*)t0)[8])[1];
f_8975(t4,((C_word*)t0)[7],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9012,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 245  c */
t3=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k9010 in k9003 in k8996 in loop in k8933 in k8930 in k8927 in k9022 in k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_9012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_TRUE);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* chicken-syntax.scm: 247  loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8975(t4,((C_word*)t0)[3],t3);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
/* chicken-syntax.scm: 246  ##sys#error */
t3=*((C_word*)lf[129]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[198],t2);}}

/* k8986 in loop in k8933 in k8930 in k8927 in k9022 in k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm: 247  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8975(t3,((C_word*)t0)[2],t2);}

/* k8936 in k8933 in k8930 in k8927 in k9022 in k8921 in k8915 in a8912 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8938,2,t0,t1);}
if(C_truep((C_word)C_i_memq(lf[193],*((C_word*)lf[72]+1)))){
t2=(C_truep(((C_word*)((C_word*)t0)[6])[1])?((C_word*)((C_word*)t0)[5])[1]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[194],t3));}
else{
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[195],t3));}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)((C_word*)t0)[5])[1])?((C_word*)t0)[4]:lf[196]));}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)((C_word*)t0)[2])[1])?((C_word*)t0)[4]:lf[197]));}}

/* k8909 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 226  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[192],C_SCHEME_END_OF_LIST,t1);}

/* k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8425,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8427,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 259  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8427,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8431,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 261  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[186],t2,lf[191]);}

/* k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8431,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8440,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 264  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[190]);}

/* k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 265  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 266  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8446,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8874,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8874(t10,t6,((C_word*)t0)[2]);}

/* loop515 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8874(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8874,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[78]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8903,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g531532 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8901 in loop515 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8903,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop515528 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8874(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop515528 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8874(t6,((C_word*)t0)[3],t5);}}

/* k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8449,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8452,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8839,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li104),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8839(t10,t6,((C_word*)t0)[2]);}

/* loop539 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8839(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8839,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[146]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8868,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g555556 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8866 in loop539 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8868,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop539552 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8839(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop539552 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8839(t6,((C_word*)t0)[3],t5);}}

/* k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8452,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8795,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li103),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_8795(t10,t6,((C_word*)t0)[3]);}

/* loop563 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8795(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8795,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8822,a[2]=((C_word*)t0)[5],a[3]=((C_word)li102),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8833,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g579580 */
t6=t3;
f_8822(t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8831 in loop563 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8833,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop563576 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8795(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop563576 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8795(t6,((C_word*)t0)[3],t5);}}

/* g579 in loop563 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8822(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8822,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8830,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 269  gensym */
t3=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8828 in g579 in loop563 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 269  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8455,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8458,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8751,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li101),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_8751(t10,t6,((C_word*)t0)[3]);}

/* loop588 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8751(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8751,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8778,a[2]=((C_word*)t0)[5],a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8789,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g604605 */
t6=t3;
f_8778(t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8787 in loop588 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8789,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop588601 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8751(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop588601 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8751(t6,((C_word*)t0)[3],t5);}}

/* g604 in loop588 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8778(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8778,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8786,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 270  gensym */
t3=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8784 in g604 in loop588 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 270  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8469,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8647,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8702,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li99),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8702(t11,t7,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* loop616 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8702(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8702,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[189]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8735,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g636637 */
t10=t6;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8733 in loop616 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8735,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8715,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_8715(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_8715(t5,t4);}}

/* k8713 in k8733 in loop616 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8715(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop616630 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8702(t5,((C_word*)t0)[2],t3,t4);}

/* k8645 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8647,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8651,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8653,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li98),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8653(t10,t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop643 in k8645 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8653(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8653,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[189]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8686,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g663664 */
t10=t6;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8684 in loop643 in k8645 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8686,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8666,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_8666(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_8666(t5,t4);}}

/* k8664 in k8684 in loop643 in k8645 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8666(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop643657 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8653(t5,((C_word*)t0)[2],t3,t4);}

/* k8649 in k8645 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 271  ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8467 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8537,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8541,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8543,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word*)t0)[6],a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_8543(t11,t7,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop670 in k8467 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8543(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[54],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8543,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8574,a[2]=((C_word*)t0)[5],a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
t8=(C_word)C_slot(t3,C_fix(0));
t9=f_8574(C_a_i(&a,39),t6,t7,t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8556,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t10,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t12=t11;
f_8556(t12,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t10));}
else{
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t13=t11;
f_8556(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8554 in loop670 in k8467 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8556(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop670684 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8543(t5,((C_word*)t0)[2],t3,t4);}

/* g690 in loop670 in k8467 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static C_word C_fcall f_8574(C_word *a,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_stack_check;
t3=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[188],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,t1,t7);
t9=(C_word)C_a_i_cons(&a,2,lf[188],C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,t2,t9);
t11=(C_word)C_a_i_cons(&a,2,lf[167],t10);
t12=(C_word)C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=(C_word)C_a_i_cons(&a,2,t8,t12);
t14=(C_word)C_a_i_cons(&a,2,t6,t13);
return((C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t14));}

/* k8539 in k8467 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k8535 in k8467 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8537,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8517,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t6,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* ##sys#append */
t8=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8515 in k8535 in k8467 in k8456 in k8453 in k8450 in k8447 in k8444 in k8441 in k8438 in k8429 in a8426 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8517,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[187],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t8);
t10=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t11);
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t12));}

/* k8423 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 257  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[186],C_SCHEME_END_OF_LIST,t1);}

/* k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8380,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8382,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 284  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8381 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8382(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8382,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8386,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 286  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[184],t2,lf[185]);}

/* k8384 in a8381 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8386,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 287  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k8391 in k8384 in a8381 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8393,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8413,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 288  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[55]);}

/* k8411 in k8391 in k8384 in a8381 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8417,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k8415 in k8411 in k8391 in k8384 in a8381 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8417,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k8378 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 282  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[184],C_SCHEME_END_OF_LIST,t1);}

/* k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8327,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8329,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 292  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8328 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8329(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8329,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8333,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 294  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[182],t2,lf[183]);}

/* k8331 in a8328 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 295  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k8338 in k8331 in a8328 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8340,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_a_i_cons(&a,2,lf[180],C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8368,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 297  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[55]);}

/* k8366 in k8338 in k8331 in a8328 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8372,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k8370 in k8366 in k8338 in k8331 in a8328 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8372,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k8325 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 290  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[182],C_SCHEME_END_OF_LIST,t1);}

/* k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8099,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8101,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 301  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8100 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8101,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8105,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 303  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[175],t2,lf[181]);}

/* k8103 in a8100 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8105,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8114,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 306  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[22]);}

/* k8112 in k8103 in a8100 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8114,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_a_i_cons(&a,2,t1,t3);
t5=(C_word)C_a_i_cons(&a,2,lf[180],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t6);
t8=(C_word)C_a_i_cons(&a,2,t1,t7);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,t4,t9);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_cons(&a,2,lf[97],t10));}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_car(((C_word*)t0)[4]);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,lf[167],t5));}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8183,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8286,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8286(t11,t7,((C_word*)t0)[4]);}}}

/* loop741 in k8112 in k8103 in a8100 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8286(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8286,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[60]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8315,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g757758 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8313 in loop741 in k8112 in k8103 in a8100 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8315,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop741754 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8286(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop741754 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8286(t6,((C_word*)t0)[3],t5);}}

/* k8181 in k8112 in k8103 in a8100 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8183,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8210,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8214,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8216,a[2]=t7,a[3]=t12,a[4]=t9,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8216(t14,t10,((C_word*)t0)[2],t1);}

/* loop768 in k8181 in k8112 in k8103 in a8100 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8216(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8216,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(C_word)C_slot(t2,C_fix(0));
t7=(C_word)C_slot(t3,C_fix(0));
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t6,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[167],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8229,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t11,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t13=t12;
f_8229(t13,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11));}
else{
t13=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t14=t12;
f_8229(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8227 in loop768 in k8181 in k8112 in k8103 in a8100 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8229(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop768782 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8216(t5,((C_word*)t0)[2],t3,t4);}

/* k8212 in k8181 in k8112 in k8103 in a8100 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k8208 in k8181 in k8112 in k8103 in a8100 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8210,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,lf[97],t5));}

/* k8097 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 299  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[175],C_SCHEME_END_OF_LIST,t1);}

/* k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2328,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8057,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8059,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 325  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8058 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8059,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8063,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 327  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[174],t2,lf[179]);}

/* k8061 in a8058 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8083,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[3]);
/* for-each */
t5=*((C_word*)lf[178]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* a8082 in k8061 in a8058 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8083(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8083,3,t0,t1,t2);}
t3=*((C_word*)lf[176]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8091,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 328  ##sys#current-module */
t5=*((C_word*)lf[177]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k8089 in a8082 in k8061 in a8058 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g816817 */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8064 in k8061 in a8058 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8073,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 329  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[175]);}

/* k8071 in k8064 in k8061 in a8058 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8077,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k8075 in k8071 in k8064 in k8061 in a8058 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8077,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k8055 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 323  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[174],C_SCHEME_END_OF_LIST,t1);}

/* k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7532,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7534,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 333  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7534,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7538,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 335  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[171],t2,lf[173]);}

/* k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7538,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7547,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 338  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[64]);}

/* k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7550,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 339  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7550,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7552,a[2]=t3,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7583,a[2]=t5,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp));
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7625,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8020,a[2]=t9,a[3]=t14,a[4]=t11,a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_8020(t16,t12,((C_word*)t0)[3]);}

/* loop847 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_8020(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8020,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[78]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8049,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g863864 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8047 in loop847 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_8049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8049,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop847860 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8020(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop847860 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8020(t6,((C_word*)t0)[3],t5);}}

/* k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7628,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7980,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7980(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* loop in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7980(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7980,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7993,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_listp(t4))){
/* chicken-syntax.scm: 355  append */
t6=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t4))){
/* chicken-syntax.scm: 356  append* */
t6=((C_word*)((C_word*)t0)[2])[1];
f_7552(t6,t5,t4,t3);}
else{
t6=(C_word)C_a_i_cons(&a,2,t4,t3);
t7=(C_word)C_i_cdr(t2);
/* chicken-syntax.scm: 358  loop */
t10=t1;
t11=t7;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}}

/* k7991 in loop in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm: 358  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7980(t3,((C_word*)t0)[2],t2,t1);}

/* k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7628,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7631,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7932,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li85),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_7932(t10,t6,t1);}

/* loop885 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7932(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7932,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7959,a[2]=((C_word*)t0)[5],a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7974,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g901902 */
t6=t3;
f_7959(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7972 in loop885 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7974,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop885898 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7932(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop885898 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7932(t6,((C_word*)t0)[3],t5);}}

/* g901 in loop885 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7959(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7959,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7967,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7971,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 359  gensym */
t5=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k7969 in g901 in loop885 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 359  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7965 in g901 in loop885 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7967,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7632,a[2]=t1,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7643,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7886,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7886(t7,t3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* loop in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7886(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7886,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* chicken-syntax.scm: 363  reverse */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7926,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 367  map* */
t6=((C_word*)((C_word*)t0)[3])[1];
f_7583(t6,t5,((C_word*)t0)[2],t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7919,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 366  lookup */
t6=((C_word*)t0)[2];
f_7632(3,t6,t5,t4);}}}

/* k7917 in loop in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7919,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm: 368  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7886(t4,((C_word*)t0)[2],t3,t2);}

/* k7924 in loop in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7926,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm: 368  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7886(t4,((C_word*)t0)[2],t3,t2);}

/* k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7643,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7650,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7846,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_7846(t10,t6,((C_word*)t0)[2]);}

/* loop974 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7846(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7846,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_cadr(t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop974987 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop974987 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7650,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7652,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word)li81),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_7652(t5,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7652(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7652,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7670,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7676,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=((C_word)li80),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7676(t13,t9,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t6=(C_word)C_i_car(t4);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7840,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 374  cdar */
t8=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}
else{
t7=t5;
f_7724(t7,C_SCHEME_FALSE);}}}

/* k7838 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_7724(t2,(C_word)C_i_nullp(t1));}

/* k7722 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7724(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7724,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7763,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 375  caar */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[8]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7806,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_cdr(((C_word*)t0)[5]);
t9=(C_word)C_i_cdr(((C_word*)t0)[8]);
t10=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm: 380  fold */
t11=((C_word*)((C_word*)t0)[3])[1];
f_7652(t11,t7,t8,t9,t10);}}

/* k7804 in k7722 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7806,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_cons(&a,2,lf[97],t6));}

/* k7761 in k7722 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7763,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,t1,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7743,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_cdr(((C_word*)t0)[4]);
t8=(C_word)C_i_cdr(((C_word*)t0)[7]);
t9=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* chicken-syntax.scm: 376  fold */
t10=((C_word*)((C_word*)t0)[2])[1];
f_7652(t10,t6,t7,t8,t9);}

/* k7741 in k7761 in k7722 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7743,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* loop939 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7676(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7676,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7703,a[2]=((C_word*)t0)[5],a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7714,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g955956 */
t6=t3;
f_7703(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7712 in loop939 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7714,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop939952 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7676(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop939952 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7676(t6,((C_word*)t0)[3],t5);}}

/* g955 in loop939 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7703(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7703,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7711,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 373  lookup */
t4=((C_word*)t0)[2];
f_7632(3,t4,t3,t2);}

/* k7709 in g955 in loop939 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7711,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k7668 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7670,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7674,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t3=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k7672 in k7668 in fold in k7648 in k7641 in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7674,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* lookup in k7629 in k7626 in k7623 in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7632(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7632,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_cdr(t3));}

/* map* in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7583(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7583,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7606,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
/* chicken-syntax.scm: 348  proc */
t6=t2;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* chicken-syntax.scm: 347  proc */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}}

/* k7604 in map* in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7610,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm: 348  map* */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7583(t4,t2,((C_word*)t0)[2],t3);}

/* k7608 in k7604 in map* in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7610,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* append* in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7552(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7552,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7573,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* chicken-syntax.scm: 344  append* */
t8=t5;
t9=t6;
t10=t3;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}}

/* k7571 in append* in k7548 in k7545 in k7536 in a7533 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7573,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7530 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 331  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[171],C_SCHEME_END_OF_LIST,t1);}

/* k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7460,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7462,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 384  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a7461 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7462(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7462,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7466,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 386  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[170],t2,lf[172]);}

/* k7464 in a7461 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7466,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7475,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 389  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[64]);}

/* k7473 in k7464 in a7461 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7478,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 390  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[171]);}

/* k7476 in k7473 in k7464 in a7461 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7478,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7483,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li74),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_7483(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fold in k7476 in k7473 in k7464 in a7461 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7483(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7483,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7501,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7520,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cdr(t2);
/* chicken-syntax.scm: 395  fold */
t9=t5;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}

/* k7518 in fold in k7476 in k7473 in k7464 in a7461 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7520,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k7499 in fold in k7476 in k7473 in k7464 in a7461 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7501,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k7458 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 382  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[170],C_SCHEME_END_OF_LIST,t1);}

/* k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7089,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7091,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 399  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7091(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7091,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7095,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 401  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[166],t2,lf[169]);}

/* k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7095,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7104,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 404  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[64]);}

/* k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 405  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7416,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7418,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7418(t11,t7,((C_word*)t0)[3]);}

/* loop1029 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7418(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7418,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_car(t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop10291042 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop10291042 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7414 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[29]+1),t1);}

/* k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7110,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7113,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7366,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li71),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_7366(t10,t6,t1);}

/* loop1054 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7366(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7366,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7393,a[2]=((C_word*)t0)[5],a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7408,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g10701071 */
t6=t3;
f_7393(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7406 in loop1054 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7408,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop10541067 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7366(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop10541067 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7366(t6,((C_word*)t0)[3],t5);}}

/* g1070 in loop1054 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7393(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7393,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7401,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7405,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 407  gensym */
t5=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k7403 in g1070 in loop1054 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 407  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7399 in g1070 in loop1054 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7401,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7114,a[2]=t1,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7133,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7326,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7326(t11,t7,((C_word*)t0)[2]);}

/* loop1084 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7326(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7326,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_a_i_list(&a,2,t3,lf[168]);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop10841097 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop10841097 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7137,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7141,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7147,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word)li68),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_7147(t11,t7,((C_word*)t0)[2]);}

/* loop1108 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7147(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7147,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7174,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7320,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g11241125 */
t6=t3;
f_7174(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7318 in loop1108 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7320,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop11081121 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7147(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop11081121 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7147(t6,((C_word*)t0)[3],t5);}}

/* g1124 in loop1108 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7174,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7202,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t6,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t12=(C_word)C_i_car(t2);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7272,a[2]=t8,a[3]=t14,a[4]=t10,a[5]=((C_word*)t0)[2],a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_7272(t16,t11,t12);}

/* loop1133 in g1124 in loop1108 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7272(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7272,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=f_7114(((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop11331146 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop11331146 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7200 in g1124 in loop1108 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7206,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7210,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_i_car(((C_word*)t0)[3]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7216,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7216(t12,t7,t8);}

/* loop1156 in k7200 in g1124 in loop1108 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_7216(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7216,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7243,a[2]=((C_word*)t0)[5],a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_7243(C_a_i(&a,9),t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop11561169 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop11561169 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g1172 in loop1156 in k7200 in g1124 in loop1108 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static C_word C_fcall f_7243(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
t2=f_7114(((C_word*)t0)[2],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,t1,t3);
return((C_word)C_a_i_cons(&a,2,lf[167],t4));}

/* k7208 in k7200 in g1124 in loop1108 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k7204 in k7200 in g1124 in loop1108 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7206,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,lf[97],t5));}

/* k7139 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7145,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#append */
t3=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k7143 in k7139 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7135 in k7131 in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7137,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* lookup in k7111 in k7108 in k7105 in k7102 in k7093 in a7090 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static C_word C_fcall f_7114(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_assq(t1,((C_word*)t0)[2]);
return((C_word)C_i_cdr(t2));}

/* k7087 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 397  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[166],C_SCHEME_END_OF_LIST,t1);}

/* k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7085,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 420  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[163]);}

/* k7083 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7085,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[163],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7006,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7008,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 421  ##sys#er-transformer */
t6=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a7007 in k7083 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7008(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7008,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7012,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 423  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[164],t2,lf[165]);}

/* k7010 in a7007 in k7083 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 424  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[131]);}

/* k7013 in k7010 in a7007 in k7083 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7015,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 425  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k7016 in k7013 in k7010 in a7007 in k7083 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7018,2,t0,t1);}
t2=(C_word)C_i_caddr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=(C_word)C_a_i_cons(&a,2,t1,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7053,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 428  r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[163]);}

/* k7051 in k7016 in k7013 in k7010 in a7007 in k7083 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7053,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,t1,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t7);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t9);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_cons(&a,2,lf[97],t10));}

/* k7004 in k7083 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_7006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 418  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[164],((C_word*)t0)[2],t1);}

/* k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6901,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6903,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 432  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6903,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6907,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 434  r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[22]);}

/* k6905 in a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6909,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6990,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6994,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm: 448  quotify-proc */
t6=t2;
f_6909(t6,t4,t5,lf[159]);}

/* k6992 in k6905 in a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k6988 in k6905 in a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6990,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[162],t1));}

/* quotify-proc in k6905 in a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6909(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6909,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 437  ##sys#check-syntax */
t5=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t3,t2,lf[161]);}

/* k6911 in quotify-proc in k6905 in a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6913,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6970,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* ##sys#append */
t9=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,C_SCHEME_END_OF_LIST);}
else{
t6=t5;
f_6922(t6,(C_word)C_i_cadr(((C_word*)t0)[5]));}}

/* k6968 in k6911 in quotify-proc in k6905 in a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6970,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
f_6922(t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k6920 in k6911 in quotify-proc in k6905 in a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6922(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6922,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6925,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_pairp(t1);
t4=(C_word)C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6934,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_6934(t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6944,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_i_car(t1);
/* chicken-syntax.scm: 443  c */
t8=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[2],t7);}}

/* k6942 in k6920 in k6911 in quotify-proc in k6905 in a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6934(t2,(C_word)C_i_not(t1));}

/* k6932 in k6920 in k6911 in quotify-proc in k6905 in a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6934(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6934,NULL,2,t0,t1);}
if(C_truep(t1)){
/* chicken-syntax.scm: 444  syntax-error */
t2=*((C_word*)lf[12]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[159],lf[160],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]));}}

/* k6923 in k6920 in k6911 in quotify-proc in k6905 in a6902 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6925,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k6899 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 430  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[159],C_SCHEME_END_OF_LIST,t1);}

/* k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6738,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6740,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 452  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6739 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6740,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6744,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 454  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[157],t2,lf[158]);}

/* k6742 in a6739 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6744,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6753,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 457  r */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[118]);}

/* k6751 in k6742 in a6739 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 458  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k6754 in k6751 in k6742 in a6739 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6756,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6761,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li58),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_6761(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fold in k6754 in k6751 in k6742 in a6739 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6761(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6761,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6775,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 461  r */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[55]);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6835,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 465  fold */
t17=t7;
t18=t4;
t1=t17;
t2=t18;
goto loop;}
else{
t6=(C_word)C_i_car(t3);
t7=(C_word)C_i_cadr(t3);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t6,t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6873,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t10,a[5]=((C_word*)t0)[4],a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 469  fold */
t17=t11;
t18=t4;
t1=t17;
t2=t18;
goto loop;}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6806,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 464  fold */
t17=t5;
t18=t4;
t1=t17;
t2=t18;
goto loop;}}}

/* k6804 in fold in k6754 in k6751 in k6742 in a6739 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6806,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k6871 in fold in k6754 in k6751 in k6742 in a6739 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6873,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t7));}

/* k6833 in fold in k6754 in k6751 in k6742 in a6739 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6835,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k6773 in fold in k6754 in k6751 in k6742 in a6739 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6779,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#append */
t3=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k6777 in k6773 in fold in k6754 in k6751 in k6742 in a6739 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6779,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6736 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 450  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[157],C_SCHEME_END_OF_LIST,t1);}

/* k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6538,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6540,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 473  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6540,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6544,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 475  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[151],t2,lf[156]);}

/* k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6544,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_cddr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6553,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 478  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[131]);}

/* k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 479  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 480  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[43]);}

/* k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 481  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[155]);}

/* k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 482  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6572,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 483  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6572,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6588,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6590,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=t7,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li56),tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_6590(t9,t5,((C_word*)t0)[2]);}

/* expand in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6590(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6590,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=((C_word*)t0)[8],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 489  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[151],t3,lf[153]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[154]);}}

/* k6604 in expand in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6612,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[9]);
/* chicken-syntax.scm: 490  c */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k6610 in k6604 in expand in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6612,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6619,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6662,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6666,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_i_car(((C_word*)t0)[7]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6672,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=((C_word)li55),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6672(t12,t7,t8);}}

/* loop1293 in k6610 in k6604 in expand in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6672(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6672,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6699,a[2]=((C_word*)t0)[5],a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_6699(C_a_i(&a,9),t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop12931306 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop12931306 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g1309 in loop1293 in k6610 in k6604 in expand in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static C_word C_fcall f_6699(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
return((C_word)C_a_i_cons(&a,2,lf[152],t3));}

/* k6664 in k6610 in k6604 in expand in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k6660 in k6610 in k6604 in expand in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6662,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6654,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_END_OF_LIST);}

/* k6652 in k6660 in k6610 in k6604 in expand in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6654,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6650,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 495  expand */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6590(t4,t3,((C_word*)t0)[2]);}

/* k6648 in k6652 in k6660 in k6610 in k6604 in expand in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6650,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k6617 in k6610 in k6604 in expand in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6619,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6586 in k6570 in k6563 in k6560 in k6557 in k6554 in k6551 in k6542 in a6539 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6588,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k6536 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 471  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[151],C_SCHEME_END_OF_LIST,t1);}

/* k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6534,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 576  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6534,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[78],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6530,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 577  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[107]);}

/* k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6530,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[107],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5945,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5947,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 578  ##sys#er-transformer */
t7=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5947,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5951,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 580  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[137],t2,lf[150]);}

/* k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5951,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=(C_word)C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5963,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 584  r */
t6=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[118]);}

/* k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 585  r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 586  r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5969,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5971,a[2]=t1,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6068,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6269,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 624  ##sys#check-syntax */
t9=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[137],((C_word*)t0)[2],lf[149]);}

/* k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 625  ##sys#check-syntax */
t3=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[137],((C_word*)t0)[8],lf[148]);}

/* k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6272,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6481,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_6481(t10,t6,((C_word*)t0)[2]);}

/* loop1376 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6481(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6481,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[78]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6510,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g13921393 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6508 in loop1376 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6510,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop13761389 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6481(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop13761389 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6481(t6,((C_word*)t0)[3],t5);}}

/* k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6275,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6276,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6291,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6437,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_6437(t11,t7,t1);}

/* loop1403 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6437(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6437,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6464,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6475,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g14191420 */
t6=t3;
f_6464(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6473 in loop1403 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6475,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14031416 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6437(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14031416 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6437(t6,((C_word*)t0)[3],t5);}}

/* g1419 in loop1403 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6464(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6464,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6472,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 633  prefix-sym */
f_6276(t3,lf[147],t2);}

/* k6470 in g1419 in loop1403 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 633  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6291,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6294,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6402,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_6402(t10,t6,((C_word*)t0)[2]);}

/* loop1428 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6402(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6402,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[146]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6431,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g14441445 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6429 in loop1428 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6431,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14281441 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6402(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14281441 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6402(t6,((C_word*)t0)[3],t5);}}

/* k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6297,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 637  r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[145]);}

/* k6295 in k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6297,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 640  r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[144]);}

/* k6298 in k6295 in k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6300,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6303,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6358,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_6358(t10,t6,((C_word*)t0)[12]);}

/* loop1454 in k6298 in k6295 in k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6358(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6358,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6385,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6396,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g14701471 */
t6=t3;
f_6385(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6394 in loop1454 in k6298 in k6295 in k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6396,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14541467 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6358(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14541467 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6358(t6,((C_word*)t0)[3],t5);}}

/* g1470 in loop1454 in k6298 in k6295 in k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6385(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6385,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6393,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 642  prefix-sym */
f_6276(t3,lf[143],t2);}

/* k6391 in g1470 in loop1454 in k6298 in k6295 in k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 642  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6301 in k6298 in k6295 in k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6306,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 645  make-default-procs */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5971(t3,t2,((C_word*)t0)[4],((C_word*)t0)[8],t1,((C_word*)t0)[2]);}

/* k6304 in k6301 in k6298 in k6295 in k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6309,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 647  make-if-tree */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6068(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[11]);}

/* k6307 in k6304 in k6301 in k6298 in k6295 in k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6316,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 650  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[142]);}

/* k6314 in k6307 in k6304 in k6301 in k6298 in k6295 in k6292 in k6289 in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6316,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[7]);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,((C_word*)t0)[4]);
t9=(C_word)C_a_i_cons(&a,2,t3,t8);
t10=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t9,t10);
t12=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_cons(&a,2,t1,t11));}

/* prefix-sym in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6276(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6276,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6284,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6288,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 628  symbol->string */
t6=*((C_word*)lf[141]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k6286 in prefix-sym in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 628  string-append */
t2=*((C_word*)lf[140]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6282 in prefix-sym in k6273 in k6270 in k6267 in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 628  string->symbol */
t2=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* make-if-tree in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6068(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6068,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6074,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=t5,a[8]=((C_word)li44),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_6074(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in make-if-tree in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_6074(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6074,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6148,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 612  r */
t6=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[125]);}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[125],t6);
t8=(C_word)C_i_car(t3);
t9=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6262,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=t7,a[10]=((C_word*)t0)[3],a[11]=t5,a[12]=((C_word*)t0)[7],a[13]=t8,tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 617  reverse */
t10=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t4);}}

/* k6260 in recur in make-if-tree in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6262,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 618  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k6248 in k6260 in recur in make-if-tree in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6250,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t4);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6234,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t5,a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 619  r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[107]);}

/* k6232 in k6248 in k6260 in recur in make-if-tree in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6234,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t6);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6198,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=(C_word)C_i_cdr(((C_word*)t0)[6]);
t10=(C_word)C_i_cdr(((C_word*)t0)[5]);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* chicken-syntax.scm: 620  recur */
t12=((C_word*)((C_word*)t0)[2])[1];
f_6074(t12,t8,t9,t10,t11);}

/* k6196 in k6232 in k6248 in k6260 in recur in make-if-tree in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6198,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t7));}

/* k6146 in recur in make-if-tree in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6148,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[74],t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6136,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 613  reverse */
t7=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[2]);}

/* k6134 in k6146 in recur in make-if-tree in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6136,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[138],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[41],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[128],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,t6,t7);
t9=(C_word)C_a_i_cons(&a,2,lf[129],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t2,t10);
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t11);
t13=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t12));}

/* make-default-procs in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_5971(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5971,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5979,a[2]=t4,a[3]=t5,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 592  reverse */
t7=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k5977 in make-default-procs in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5979,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5983,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 593  reverse */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5981 in k5977 in make-default-procs in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5987,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 594  reverse */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5985 in k5981 in k5977 in make-default-procs in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5987,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5989,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5989(t5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* recur in k5985 in k5981 in k5977 in make-default-procs in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_5989(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5989,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6042,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=t7,a[8]=((C_word*)t0)[3],a[9]=t5,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 599  reverse */
t9=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t6);}}

/* k6040 in recur in k5985 in k5981 in k5977 in make-default-procs in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6058,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 600  reverse */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k6056 in k6040 in recur in k5985 in k5981 in k5977 in make-default-procs in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6058,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k6052 in k6040 in recur in k5985 in k5981 in k5977 in make-default-procs in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6054,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6010,a[2]=t7,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_i_cdr(((C_word*)t0)[5]);
t10=(C_word)C_i_cdr(((C_word*)t0)[4]);
t11=(C_word)C_i_car(((C_word*)t0)[5]);
/* chicken-syntax.scm: 601  recur */
t12=((C_word*)((C_word*)t0)[3])[1];
f_5989(t12,t8,((C_word*)t0)[2],t9,t10,t11);}

/* k6008 in k6052 in k6040 in recur in k5985 in k5981 in k5977 in make-default-procs in k5967 in k5964 in k5961 in k5949 in a5946 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_6010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6010,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5943 in k6528 in k6532 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 574  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[137],((C_word*)t0)[2],t1);}

/* k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5937,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 670  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[125]);}

/* k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5937,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[125],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5933,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 671  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5933,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[78],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 672  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[107]);}

/* k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5929,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[107],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5720,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5722,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 673  ##sys#er-transformer */
t8=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* a5721 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5722,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5726,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 675  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[133],t2,lf[136]);}

/* k5724 in a5721 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5729,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 676  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[131]);}

/* k5727 in k5724 in a5721 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5729,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 677  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k5730 in k5727 in k5724 in a5721 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5732,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 678  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k5737 in k5730 in k5727 in k5724 in a5721 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5739,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5889,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 679  r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[125]);}

/* k5887 in k5737 in k5730 in k5727 in k5724 in a5721 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5889,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_i_cddr(((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_5774(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_5774(2,t7,(C_word)C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[129]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[135],t4);}}}

/* k5772 in k5887 in k5737 in k5730 in k5727 in k5724 in a5721 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 681  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[125]);}

/* k5848 in k5772 in k5887 in k5737 in k5730 in k5727 in k5724 in a5721 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 681  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[107]);}

/* k5860 in k5848 in k5772 in k5887 in k5737 in k5730 in k5727 in k5724 in a5721 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5862,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[74],t6);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5834,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t7,a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 682  r */
t9=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[78]);}

/* k5832 in k5860 in k5848 in k5772 in k5887 in k5737 in k5730 in k5727 in k5724 in a5721 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word ab[60],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5834,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[134],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[41],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[128],t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t7,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[129],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,t3,t11);
t13=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t12);
t14=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t13);
t15=(C_word)C_a_i_cons(&a,2,t14,C_SCHEME_END_OF_LIST);
t16=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t15);
t17=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t16);
t18=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t17);
t19=(C_word)C_a_i_cons(&a,2,t18,C_SCHEME_END_OF_LIST);
t20=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t19);
t21=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t20));}

/* k5718 in k5927 in k5931 in k5935 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 668  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[133],((C_word*)t0)[2],t1);}

/* k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5712,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 705  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[125]);}

/* k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5712,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[125],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5406,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5408,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 706  ##sys#er-transformer */
t6=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5408,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5412,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 708  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[126],t2,lf[132]);}

/* k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5412,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=(C_word)C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5424,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 712  r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[64]);}

/* k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 713  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[125]);}

/* k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 714  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[78]);}

/* k5428 in k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 715  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[107]);}

/* k5431 in k5428 in k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 716  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k5434 in k5431 in k5428 in k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 717  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[131]);}

/* k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5439,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5458,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5460,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],a[10]=((C_word)li39),tmp=(C_word)a,a+=11,tmp));
t9=((C_word*)t7)[1];
f_5460(t9,t5,t1,((C_word*)t0)[2]);}

/* loop in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_5460(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5460,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[74],t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5526,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* ##sys#append */
t9=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_car(t3);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5550,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 728  r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[130]);}
else{
t5=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5688,a[2]=((C_word*)t0)[8],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t9=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}}}

/* k5686 in loop in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5688,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k5548 in loop in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word ab[77],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5550,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[11]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t3);
t5=(C_word)C_i_cadr(((C_word*)t0)[11]);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t5,t8);
t10=(C_word)C_a_i_cons(&a,2,t4,t9);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t10);
t12=(C_word)C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=(C_word)C_a_i_cons(&a,2,t2,t12);
t14=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t15=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t14);
t16=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,lf[41],t16);
t18=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t19=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t18);
t20=(C_word)C_a_i_cons(&a,2,t19,C_SCHEME_END_OF_LIST);
t21=(C_word)C_a_i_cons(&a,2,t17,t20);
t22=(C_word)C_a_i_cons(&a,2,t15,t21);
t23=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t22);
t24=(C_word)C_a_i_cons(&a,2,t23,C_SCHEME_END_OF_LIST);
t25=(C_word)C_a_i_cons(&a,2,t1,t24);
t26=(C_word)C_a_i_cons(&a,2,t25,C_SCHEME_END_OF_LIST);
t27=(C_word)C_a_i_cons(&a,2,t13,t26);
t28=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t27,tmp=(C_word)a,a+=5,tmp);
t29=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* chicken-syntax.scm: 735  loop */
t30=((C_word*)((C_word*)t0)[2])[1];
f_5460(t30,t28,t1,t29);}

/* k5567 in k5548 in loop in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5569,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k5524 in loop in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5526,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[127],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[41],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[128],t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t7,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[129],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,t3,t11);
t13=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t12);
t14=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t13));}

/* k5456 in k5437 in k5434 in k5431 in k5428 in k5425 in k5422 in k5410 in a5407 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5458,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k5404 in k5710 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 703  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[126],((C_word*)t0)[2],t1);}

/* k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5398,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 743  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[106]);}

/* k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5398,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[106],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5394,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 744  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5394,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[78],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 745  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[107]);}

/* k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5390,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[107],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 746  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[108]);}

/* k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5386,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[108],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4858,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4860,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 747  ##sys#er-transformer */
t9=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4860,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4864,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 749  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[109],t2,lf[124]);}

/* k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4866,a[2]=((C_word*)t0)[4],a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4901,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 755  require */
t4=*((C_word*)lf[122]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[123]);}

/* k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5303,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_i_cdr(((C_word*)t0)[3]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5309,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word)li37),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5309(t12,t7,t8);}

/* loop1561 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_5309(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5309,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5350,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5346,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 757  ##sys#decompose-lambda-list */
t7=*((C_word*)lf[115]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t5,t6);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a5345 in loop1561 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5346(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5346,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* k5348 in loop1561 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5350,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop15611574 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5309(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop15611574 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5309(t6,((C_word*)t0)[3],t5);}}

/* k5301 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[121]+1),t1);}

/* k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4907,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 761  genvars */
t3=((C_word*)t0)[2];
f_4866(t3,t2,t1);}

/* k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 762  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[120]);}

/* k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 763  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[119]);}

/* k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 764  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 765  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 766  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[106]);}

/* k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4925,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 767  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[108]);}

/* k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4928,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 768  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[78]);}

/* k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4928,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 769  r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[107]);}

/* k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4931,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* chicken-syntax.scm: 770  r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4934,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* chicken-syntax.scm: 771  append */
t3=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[14]);}

/* k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4945,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[15],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[110],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[14],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4969,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=t1,a[5]=((C_word*)t0)[13],a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li35),tmp=(C_word)a,a+=14,tmp);
t9=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm: 773  fold-right */
t10=*((C_word*)lf[116]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t8,lf[117],t9);}

/* a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4971,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=t3,a[14]=((C_word*)t0)[12],a[15]=((C_word)li34),tmp=(C_word)a,a+=16,tmp);
/* chicken-syntax.scm: 775  ##sys#decompose-lambda-list */
t6=*((C_word*)lf[115]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t4,t5);}

/* a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4981,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_4985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=t2,a[14]=((C_word*)t0)[12],a[15]=t1,a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=t3,tmp=(C_word)a,a+=19,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[9]);
/* chicken-syntax.scm: 778  ##sys#check-syntax */
t7=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[109],t6,lf[114]);}

/* k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4985,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[18],((C_word*)t0)[17]);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4999,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[18],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[17],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[10])){
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t3;
f_4999(t5,C_SCHEME_TRUE);}
else{
t5=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=t3;
f_4999(t7,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t6));}}
else{
t4=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=t3;
f_4999(t6,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}}

/* k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_4999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4999,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5007,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=t1,a[5]=((C_word*)t0)[15],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5013,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word)li30),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li33),tmp=(C_word)a,a+=11,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5023(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5023,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5027,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[7],a[9]=((C_word)li32),tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_5099(t8,t4,t3,((C_word*)t0)[2]);}

/* build in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_5099(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5099,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[8])){
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5124,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* ##sys#append */
t9=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_cddr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_cadr(((C_word*)t0)[6]));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5156,a[2]=((C_word*)t0)[7],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* ##sys#append */
t7=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}}}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5247,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 793  gensym */
t6=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k5245 in build in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 793  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5165 in build in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5167,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[8]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t2,t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t7);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,t1,t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,t6,t11);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5186,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t12,tmp=(C_word)a,a+=5,tmp);
t14=(C_word)C_i_cdr(((C_word*)t0)[8]);
if(C_truep((C_word)C_i_pairp(t14))){
t15=(C_word)C_i_cdr(((C_word*)t0)[8]);
/* chicken-syntax.scm: 797  build */
t16=((C_word*)((C_word*)t0)[2])[1];
f_5099(t16,t13,t15,t1);}
else{
/* chicken-syntax.scm: 798  build */
t15=((C_word*)((C_word*)t0)[2])[1];
f_5099(t15,t13,C_SCHEME_END_OF_LIST,t1);}}

/* k5184 in k5165 in build in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5186,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k5154 in build in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5156,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k5122 in build in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5124,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k5025 in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5027,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[5]))){
t2=t1;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5050,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_5050(t10,t6,((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* loop1652 in k5025 in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_5050(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5050,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[113]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5083,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g16721673 */
t10=t6;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5081 in loop1652 in k5025 in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5083,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5063,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_5063(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_5063(t5,t4);}}

/* k5061 in k5081 in loop1652 in k5025 in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_5063(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop16521666 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5050(t5,((C_word*)t0)[2],t3,t4);}

/* k5042 in k5025 in a5022 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5044,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* a5012 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5013,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5021,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 786  take */
t3=*((C_word*)lf[112]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5019 in a5012 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 786  split-at! */
t2=*((C_word*)lf[111]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5005 in k4997 in k4983 in a4980 in a4970 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_5007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5007,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k4967 in k4943 in k4932 in k4929 in k4926 in k4923 in k4920 in k4917 in k4914 in k4911 in k4908 in k4905 in k4902 in k4899 in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4969,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t6));}

/* genvars in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_4866(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4866,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4872,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4872(t6,t1,C_fix(0));}

/* loop in genvars in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_4872(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4872,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4898,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 754  gensym */
t5=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4896 in loop in genvars in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 754  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4884 in loop in genvars in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4886,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4890,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm: 754  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4872(t4,t2,t3);}

/* k4888 in k4884 in loop in genvars in k4862 in a4859 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4890,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4856 in k5384 in k5388 in k5392 in k5396 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 741  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[109],((C_word*)t0)[2],t1);}

/* k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4756,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4758,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 811  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a4757 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4758,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4762,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 813  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[101],t2,lf[105]);}

/* k4760 in a4757 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4762,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_a_i_cons(&a,2,t2,t3);
/* chicken-syntax.scm: 817  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[101],t5,lf[103]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4827,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_a_i_cons(&a,2,t2,t3);
/* chicken-syntax.scm: 824  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[101],t5,lf[104]);}}

/* k4825 in k4760 in a4757 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4827,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[41],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4842,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k4840 in k4825 in k4760 in a4757 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4842,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[102],t2));}

/* k4775 in k4760 in a4757 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4777,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(0));
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[41],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4800,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 822  r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[22]);}

/* k4798 in k4775 in k4760 in a4757 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4800,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4812,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k4810 in k4798 in k4775 in k4760 in a4757 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4812,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,lf[102],t5));}

/* k4754 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 809  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[101],C_SCHEME_END_OF_LIST,t1);}

/* k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4752,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 832  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[93]);}

/* k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4752,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[93],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4748,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 833  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[94]);}

/* k4746 in k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4748,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[94],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4542,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4544,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 834  ##sys#er-transformer */
t7=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a4543 in k4746 in k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4544,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4548,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 836  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[88],t2,lf[100]);}

/* k4546 in a4543 in k4746 in k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 837  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[99]);}

/* k4549 in k4546 in a4543 in k4746 in k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 838  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[98]);}

/* k4552 in k4549 in k4546 in a4543 in k4746 in k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 839  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k4555 in k4552 in k4549 in k4546 in a4543 in k4746 in k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 840  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[93]);}

/* k4566 in k4555 in k4552 in k4549 in k4546 in a4543 in k4746 in k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4568,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4596,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 842  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[94]);}

/* k4594 in k4566 in k4555 in k4552 in k4549 in k4546 in a4543 in k4746 in k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4596,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[8]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_i_caddr(((C_word*)t0)[8]);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t3,t10);
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t11);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4688,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t12,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t14=(C_word)C_i_cdddr(((C_word*)t0)[8]);
/* ##sys#append */
t15=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,t14,C_SCHEME_END_OF_LIST);}

/* k4686 in k4594 in k4566 in k4555 in k4552 in k4549 in k4546 in a4543 in k4746 in k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word ab[84],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4688,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[95],t4);
t6=(C_word)C_a_i_cons(&a,2,lf[96],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t7);
t9=(C_word)C_a_i_cons(&a,2,lf[22],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t10);
t12=(C_word)C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t12);
t14=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t13);
t15=(C_word)C_a_i_cons(&a,2,t14,C_SCHEME_END_OF_LIST);
t16=(C_word)C_a_i_cons(&a,2,t3,t15);
t17=(C_word)C_a_i_cons(&a,2,lf[97],t16);
t18=(C_word)C_a_i_cons(&a,2,t17,C_SCHEME_END_OF_LIST);
t19=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t18);
t20=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t19);
t21=(C_word)C_a_i_cons(&a,2,t20,C_SCHEME_END_OF_LIST);
t22=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t21);
t23=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t22);
t24=(C_word)C_a_i_cons(&a,2,t23,C_SCHEME_END_OF_LIST);
t25=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t24);
t26=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t25);
t27=(C_word)C_a_i_cons(&a,2,t26,C_SCHEME_END_OF_LIST);
t28=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t27);
t29=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t29+1)))(2,t29,(C_word)C_a_i_cons(&a,2,t28,C_SCHEME_END_OF_LIST));}

/* k4540 in k4746 in k4750 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 830  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[88],((C_word*)t0)[2],t1);}

/* k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4534,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 853  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[43]);}

/* k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4534,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[43],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4530,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 854  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[82]);}

/* k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4530,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[82],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4119,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4121,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 855  ##sys#er-transformer */
t7=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4121(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4121,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4125,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 857  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[83],t2,lf[92]);}

/* k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4125,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 858  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[91]);}

/* k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 859  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[90]);}

/* k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 860  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[89]);}

/* k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 861  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 862  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[41]);}

/* k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 863  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[82]);}

/* k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 864  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[43]);}

/* k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4146,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4148,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word)li23),tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4355,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 878  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[88]);}

/* k4353 in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word ab[52],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4355,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[84],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t4);
t6=(C_word)C_a_i_cons(&a,2,lf[70],t5);
t7=(C_word)C_a_i_cons(&a,2,C_fix(1),C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t7);
t9=(C_word)C_a_i_cons(&a,2,lf[85],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t6,t10);
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t11);
t13=(C_word)C_a_i_cons(&a,2,t12,C_SCHEME_END_OF_LIST);
t14=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t13);
t15=(C_word)C_a_i_cons(&a,2,t14,C_SCHEME_END_OF_LIST);
t16=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4395,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t15,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 881  r */
t17=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,lf[87]);}

/* k4393 in k4353 in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4403,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_cddr(((C_word*)t0)[7]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4429,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t10,a[5]=t6,a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4429(t12,t7,t8);}

/* loop1798 in k4393 in k4353 in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_4429(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4429,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4458,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g18141815 */
t5=((C_word*)t0)[2];
f_4148(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4456 in loop1798 in k4393 in k4353 in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4458,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop17981811 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4429(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop17981811 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4429(t6,((C_word*)t0)[3],t5);}}

/* k4401 in k4393 in k4353 in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4403,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[86],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
/* ##sys#append */
t7=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[2],t1,t6);}

/* k4397 in k4393 in k4353 in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4399,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=(C_word)C_i_cadr(((C_word*)t0)[5]);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,t5,t7);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}

/* parse-clause in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_4148(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4148,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_symbolp(t3);
t5=(C_truep(t4)?(C_word)C_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?(C_word)C_i_cadr(t2):(C_word)C_i_car(t2));
t7=(C_truep(t5)?(C_word)C_i_cddr(t2):(C_word)C_i_cdr(t2));
if(C_truep((C_word)C_i_nullp(t6))){
if(C_truep(t5)){
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t5,t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4190,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t12=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,t7,C_SCHEME_END_OF_LIST);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4209,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t9=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t7,C_SCHEME_END_OF_LIST);}}
else{
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4266,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4270,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4272,a[2]=t10,a[3]=t15,a[4]=t12,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],a[8]=((C_word)li22),tmp=(C_word)a,a+=9,tmp));
t17=((C_word*)t15)[1];
f_4272(t17,t13,t6);}}

/* loop1762 in parse-clause in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_4272(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
a=C_alloc(24);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4272,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4299,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word)li21),tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_4299(C_a_i(&a,15),t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop17621775 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop17621775 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g1778 in loop1762 in parse-clause in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static C_word C_fcall f_4299(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
return((C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k4268 in parse-clause in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4264 in parse-clause in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4266,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
if(C_truep(((C_word*)t0)[6])){
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4239,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t8=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4258,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}

/* k4256 in k4264 in parse-clause in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4258,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k4237 in k4264 in parse-clause in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4239,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k4207 in parse-clause in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4209,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k4188 in parse-clause in k4144 in k4141 in k4138 in k4135 in k4132 in k4129 in k4126 in k4123 in a4120 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4190,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k4117 in k4528 in k4532 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 851  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[83],((C_word*)t0)[2],t1);}

/* k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_cons(&a,2,lf[67],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[41],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[65],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[67],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3648,a[2]=t8,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3650,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 891  ##sys#er-transformer */
t11=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}

/* a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3650(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3650,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3654,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 893  ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[68],t2,lf[81]);}

/* k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3654,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=(C_word)C_i_cadddr(((C_word*)t0)[4]);
t5=(C_word)C_i_cddddr(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3669,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 898  r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[55]);}

/* k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3669,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 899  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3672,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 900  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[30]);}

/* k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3675,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 901  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[41]);}

/* k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3678,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 902  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[67]);}

/* k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3681,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3687,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 904  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[80]);}

/* k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3690,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 905  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[79]);}

/* k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3690,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4058,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li19),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_4058(t10,t6,((C_word*)t0)[3]);}

/* loop1844 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_4058(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4058,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[78]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4087,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g18601861 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4085 in loop1844 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4087,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop18441857 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4058(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop18441857 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4058(t6,((C_word*)t0)[3],t5);}}

/* k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3693,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[14],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],t2);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4005,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t3,tmp=(C_word)a,a+=15,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4009,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4011,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=((C_word*)t0)[2],a[6]=((C_word)li18),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_4011(t13,t9,t1);}

/* loop1871 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_4011(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4011,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4038,a[2]=((C_word*)t0)[5],a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_4038(t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop18711884 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop18711884 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g1887 in loop1871 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static C_word C_fcall f_4038(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
if(C_truep((C_word)C_i_memq(t1,((C_word*)t0)[2]))){
t2=t1;
return(t2);}
else{
return(lf[77]);}}

/* k4007 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4003 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word ab[67],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4005,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[14],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[69],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t7);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],t11);
t13=(C_word)C_a_i_cons(&a,2,lf[70],t12);
t14=(C_word)C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
t15=(C_word)C_a_i_cons(&a,2,t8,t14);
t16=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t15);
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3716,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t6,a[5]=t16,tmp=(C_word)a,a+=6,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3720,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3722,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t20,a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[11],a[10]=((C_word)li16),tmp=(C_word)a,a+=11,tmp));
t22=((C_word*)t20)[1];
f_3722(t22,t18,((C_word*)t0)[2],C_fix(1));}

/* loop in k4003 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_3722(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word ab[114],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3722,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_memq(lf[71],*((C_word*)lf[72]+1));
t6=(C_word)C_i_cddr(t4);
t7=(C_word)C_i_pairp(t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t11);
t13=(C_word)C_a_i_cons(&a,2,lf[73],t12);
t14=(C_word)C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
t15=(C_word)C_a_i_cons(&a,2,lf[74],t14);
t16=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t16);
t18=(C_word)C_a_i_cons(&a,2,lf[75],t17);
t19=(C_word)C_a_i_cons(&a,2,t18,C_SCHEME_END_OF_LIST);
t20=(C_word)C_a_i_cons(&a,2,t15,t19);
t21=(C_word)C_a_i_cons(&a,2,t8,t20);
t22=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t21);
t23=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3748,a[2]=((C_word*)t0)[3],a[3]=t22,a[4]=t5,a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=t2,a[9]=t1,a[10]=((C_word*)t0)[5],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t7)){
t24=(C_word)C_i_caddr(t4);
t25=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t26=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t25);
t27=(C_word)C_a_i_cons(&a,2,t24,t26);
t28=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t29=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t28);
t30=(C_word)C_a_i_cons(&a,2,t29,C_SCHEME_END_OF_LIST);
t31=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t30);
t32=(C_word)C_a_i_cons(&a,2,lf[73],t31);
t33=(C_word)C_a_i_cons(&a,2,t32,C_SCHEME_END_OF_LIST);
t34=(C_word)C_a_i_cons(&a,2,lf[74],t33);
t35=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t36=(C_word)C_a_i_cons(&a,2,t3,t35);
t37=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t36);
t38=(C_word)C_a_i_cons(&a,2,lf[76],t37);
t39=(C_word)C_a_i_cons(&a,2,t38,C_SCHEME_END_OF_LIST);
t40=(C_word)C_a_i_cons(&a,2,t34,t39);
t41=(C_word)C_a_i_cons(&a,2,t27,t40);
t42=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t41);
t43=t23;
f_3748(t43,(C_word)C_a_i_cons(&a,2,t42,C_SCHEME_END_OF_LIST));}
else{
t24=t23;
f_3748(t24,C_SCHEME_END_OF_LIST);}}}

/* k3746 in loop in k4003 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_3748(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3748,NULL,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3784,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_i_caddr(((C_word*)t0)[11]);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t7);
t9=t3;
f_3784(t9,(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST));}
else{
t5=t3;
f_3784(t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}}

/* k3782 in k3746 in loop in k4003 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_3784(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3784,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3760,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3764,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
t7=(C_word)C_fixnum_increase(((C_word*)t0)[3]);
/* chicken-syntax.scm: 935  loop */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3722(t8,t5,t6,t7);}

/* k3762 in k3782 in k3746 in loop in k4003 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k3758 in k3782 in k3746 in loop in k4003 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3760,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* ##sys#append */
t3=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k3718 in k4003 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k3714 in k4003 in k3691 in k3688 in k3685 in k3679 in k3676 in k3673 in k3670 in k3667 in k3652 in a3649 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3716,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k3646 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 888  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[68],((C_word*)t0)[2],t1);}

/* k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3640,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 942  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[58]);}

/* k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3640,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[58],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3448,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3450,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 943  ##sys#er-transformer */
t6=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3450,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3454,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 945  r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[63]);}

/* k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3457,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 946  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[62]);}

/* k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 947  r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[58]);}

/* k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 948  r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3463,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 949  r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3466,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[9]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3475,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word)li14),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_3475(t6,((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_3475(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3475,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3485,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=t5,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 952  reverse */
t7=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t4,a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t7=(C_word)C_i_car(t2);
/* chicken-syntax.scm: 959  c */
t8=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[2],t7);}}

/* k3576 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3578,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3581,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3600,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 960  gensym */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3606,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[9]);
/* chicken-syntax.scm: 962  c */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}}

/* k3604 in k3576 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3606,2,t0,t1);}
if(C_truep(t1)){
/* chicken-syntax.scm: 962  loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3475(t2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST,((C_word*)t0)[4],((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[2]);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* chicken-syntax.scm: 963  loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3475(t5,((C_word*)t0)[5],t2,((C_word*)t0)[4],t4,C_SCHEME_FALSE);}}

/* k3598 in k3576 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 960  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3579 in k3576 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3581,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm: 961  loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3475(t5,((C_word*)t0)[2],t2,t3,t4,C_SCHEME_FALSE);}

/* k3483 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3488,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 953  reverse */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3486 in k3483 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3488,2,t0,t1);}
if(C_truep(((C_word*)t0)[8])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3494,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3537,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 955  gensym */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(C_word)C_i_car(t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3560,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_cdr(t1);
/* ##sys#append */
t7=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}}

/* k3558 in k3486 in k3483 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3560,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k3535 in k3486 in k3483 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 955  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3492 in k3486 in k3483 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3505,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* ##sys#append */
t3=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k3503 in k3492 in k3486 in k3483 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3505,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3525,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
/* ##sys#append */
t6=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* k3523 in k3503 in k3492 in k3486 in k3483 in loop in k3464 in k3461 in k3458 in k3455 in k3452 in a3449 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3525,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k3446 in k3638 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 940  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[66],((C_word*)t0)[2],t1);}

/* k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3440,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 967  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[58]);}

/* k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3440,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[58],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3217,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3219,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 968  ##sys#er-transformer */
t6=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3219(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3219,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3223,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 970  r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[64]);}

/* k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 971  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 972  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[58]);}

/* k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3229,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 973  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[63]);}

/* k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3235,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 974  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[62]);}

/* k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3235,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[9]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3244,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li12),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_3244(t6,((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_3244(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3244,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep((C_word)C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3254,a[2]=t5,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t6,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 977  reverse */
t8=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3363,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=t3,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
t8=(C_word)C_i_car(t2);
/* chicken-syntax.scm: 987  c */
t9=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,((C_word*)t0)[2],t8);}}

/* k3361 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3363,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3385,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 988  gensym */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3391,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[10]);
/* chicken-syntax.scm: 990  c */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}}

/* k3389 in k3361 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3391,2,t0,t1);}
if(C_truep(t1)){
/* chicken-syntax.scm: 990  loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_3244(t2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3397,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3424,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 992  gensym */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3422 in k3389 in k3361 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 992  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3395 in k3389 in k3361 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3397,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(C_word)C_a_i_list(&a,2,t1,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[6]);
t6=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* chicken-syntax.scm: 993  loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3244(t7,((C_word*)t0)[3],t2,((C_word*)t0)[2],t5,t6,C_SCHEME_FALSE);}

/* k3383 in k3361 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 988  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3364 in k3361 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3366,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
t4=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* chicken-syntax.scm: 989  loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3244(t5,((C_word*)t0)[3],t2,t3,((C_word*)t0)[2],t4,C_SCHEME_FALSE);}

/* k3252 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3257,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 978  reverse */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3255 in k3252 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3257,2,t0,t1);}
if(C_truep(((C_word*)t0)[9])){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3263,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3318,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 980  gensym */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(C_word)C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3353,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_i_cdr(t1);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_END_OF_LIST);}}

/* k3351 in k3255 in k3252 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3353,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t7));}

/* k3316 in k3255 in k3252 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 980  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3261 in k3255 in k3252 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3286,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* ##sys#append */
t3=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k3284 in k3261 in k3255 in k3252 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3286,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3306,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[8]);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
/* ##sys#append */
t6=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* k3304 in k3284 in k3261 in k3255 in k3252 in loop in k3233 in k3230 in k3227 in k3224 in k3221 in a3218 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3306,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t7);
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t8));}

/* k3215 in k3438 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 965  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[59],((C_word*)t0)[2],t1);}

/* k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2938,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1003 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2938(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2938,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2942,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 1005 ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[36],t2,lf[57]);}

/* k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 1006 r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[56]);}

/* k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 1007 r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 1008 r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[54]);}

/* k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 1009 r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[53]);}

/* k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 1010 r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[52]);}

/* k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2957,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[9]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li10),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_2966(t6,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t2,C_SCHEME_FALSE);}

/* loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_2966(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2966,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t4))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2976,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[9],a[3]=t6,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t8=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t5,C_SCHEME_END_OF_LIST);}
else{
t7=t6;
f_2976(t7,lf[46]);}}
else{
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=t5,a[7]=t3,a[8]=t1,a[9]=((C_word*)t0)[5],a[10]=t2,a[11]=((C_word*)t0)[6],a[12]=t4,tmp=(C_word)a,a+=13,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t7=(C_word)C_i_car(t4);
t8=t6;
f_3112(t8,(C_word)C_i_pairp(t7));}
else{
t7=t6;
f_3112(t7,C_SCHEME_FALSE);}}}

/* k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_3112(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3112,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 1025 caar */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[12]);}
else{
/* chicken-syntax.scm: 1036 syntax-error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[8],lf[36],lf[51],((C_word*)t0)[12]);}}

/* k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3124,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 1027 c */
t4=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t1);}

/* k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3124,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3139,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3143,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1028 cdar */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 1029 c */
t3=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k3147 in k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3149,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3164,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3168,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1030 cdar */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3174,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 1031 c */
t3=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k3172 in k3147 in k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3174,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3181,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f11161,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 1032 cdar */
t5=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11165,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1032 cdar */
t5=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3196,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1034 caar */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k3194 in k3172 in k3147 in k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1034 syntax-error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[36],lf[49],t1);}

/* f11165 in k3172 in k3147 in k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f11165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1032 append */
t2=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t1);}

/* f11161 in k3172 in k3147 in k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f11161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1032 append */
t2=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3179 in k3172 in k3147 in k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1032 loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2966(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3166 in k3147 in k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k3162 in k3147 in k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3164,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
/* chicken-syntax.scm: 1030 loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2966(t4,((C_word*)t0)[5],((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3141 in k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k3137 in k3122 in k3113 in k3110 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3139,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
/* chicken-syntax.scm: 1028 loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2966(t4,((C_word*)t0)[5],t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3104 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3106,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
f_2976(t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k2974 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_2976(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2976,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 1016 r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[45]);}

/* k2981 in k2974 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* ##sys#append */
t3=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k3089 in k2981 in k2974 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3091,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[37],t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 1018 r */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[44]);}

/* k3077 in k3089 in k2981 in k2974 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3079,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[38],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k3073 in k3077 in k3089 in k2981 in k2974 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3075,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 1019 r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[43]);}

/* k3009 in k3073 in k3077 in k3089 in k2981 in k2974 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3011,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[39]+1),C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[40],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=t5,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 1022 r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[42]);}

/* k3037 in k3009 in k3073 in k3077 in k3089 in k2981 in k2974 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 1022 r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[41]);}

/* k3049 in k3037 in k3009 in k3073 in k3077 in k3089 in k2981 in k2974 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3051,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[39]+1),C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t4);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t5,tmp=(C_word)a,a+=10,tmp);
/* ##sys#append */
t7=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k3033 in k3049 in k3037 in k3009 in k3073 in k3077 in k3089 in k2981 in k2974 in loop in k2955 in k2952 in k2949 in k2946 in k2943 in k2940 in a2937 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3035,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t7);
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t8));}

/* k2934 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1001 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[36],C_SCHEME_END_OF_LIST,t1);}

/* k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2832,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2834,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1045 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2833 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2834,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2838,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 1047 ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[33],t2,lf[35]);}

/* k2836 in a2833 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2838,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 1049 r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[34]);}

/* k2842 in k2836 in a2833 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2844,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[5]))){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2889,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 1052 r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[22]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2928,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[3]);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}}

/* k2926 in k2842 in k2836 in a2833 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2928,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k2887 in k2842 in k2836 in a2833 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2889,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_i_cddr(((C_word*)t0)[2]);
/* ##sys#append */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_END_OF_LIST);}

/* k2899 in k2887 in k2842 in k2836 in a2833 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2901,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t6,t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}

/* k2830 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1043 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[33],C_SCHEME_END_OF_LIST,t1);}

/* k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2795,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2797,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1062 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2796 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2797,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2801,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 1064 ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[28],t2,lf[32]);}

/* k2799 in a2796 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 1065 r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[31]);}

/* k2806 in k2799 in a2796 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 1066 r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[30]);}

/* k2818 in k2806 in k2799 in a2796 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2824,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k2822 in k2818 in k2806 in k2799 in a2796 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2824,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k2793 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1060 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[28],C_SCHEME_END_OF_LIST,t1);}

/* k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2770,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2772,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1073 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2771 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2772,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2776,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 1075 ##sys#check-syntax */
t6=*((C_word*)lf[26]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[24],t2,lf[27]);}

/* k2774 in a2771 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2776,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_TRUE,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[25],t4));}

/* k2768 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1071 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[24],C_SCHEME_END_OF_LIST,t1);}

/* k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2638,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2640,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1083 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2639 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2640,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2650,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t5))){
t7=(C_word)C_i_car(t5);
if(C_truep((C_word)C_i_pairp(t7))){
t8=(C_word)C_i_cdr(t5);
/* ##sys#list? */
t9=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t6,t8);}
else{
t8=t6;
f_2650(2,t8,C_SCHEME_FALSE);}}
else{
t7=t6;
f_2650(2,t7,C_SCHEME_FALSE);}}

/* k2648 in a2639 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2650,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_car(((C_word*)t0)[5]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2666,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t6,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* rename20922097 */
t8=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[21]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[5]))){
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cdr(t3);
t5=t2;
f_2700(t5,(C_word)C_eqp(t4,C_SCHEME_END_OF_LIST));}
else{
t4=t2;
f_2700(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_2700(t3,C_SCHEME_FALSE);}}}

/* k2698 in k2648 in a2639 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_2700(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2700,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2713,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* rename20922097 */
t6=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[23]);}
else{
/* ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k2711 in k2698 in k2648 in a2639 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2713,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t1,t3));}

/* k2664 in k2648 in a2639 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2682,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* rename20922097 */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k2680 in k2664 in k2648 in a2639 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2682,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k2636 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1081 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[21],C_SCHEME_END_OF_LIST,t1);}

/* k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2397,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2423,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2425,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1092 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[16],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2425,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2435,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2573,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_car(t5);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2586,a[2]=t10,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_2586(t12,t7,t8);}
else{
t7=t6;
f_2435(2,t7,C_SCHEME_FALSE);}}

/* loop2136 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_2586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2586,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#null? */
t4=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2588 in loop2136 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t2=(C_word)C_i_car(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_eqp(t4,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* loop21362158 */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2586(t7,((C_word*)t0)[4],t6);}
else{
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k2571 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* ##sys#list? */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
f_2435(2,t2,C_SCHEME_FALSE);}}

/* k2433 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2435,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2438,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_car(((C_word*)t0)[5]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2523,a[2]=t3,a[3]=t9,a[4]=t5,a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2523(t11,t6,t7);}
else{
/* ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* loop2180 in k2433 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_2523(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2523,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_car(t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop21802193 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop21802193 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2436 in k2433 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2438,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2475,a[2]=t3,a[3]=t9,a[4]=t5,a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2475(t11,t6,t7);}

/* loop2205 in k2436 in k2433 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_fcall f_2475(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2475,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_i_car(t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop22052218 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop22052218 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2439 in k2436 in k2433 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2441,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2451,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* rename21392144 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[17]);}

/* k2449 in k2439 in k2436 in k2433 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2459,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2461,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* ##sys#map-n */
t4=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2460 in k2449 in k2439 in k2436 in k2433 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2461,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,t2,t4));}

/* k2457 in k2449 in k2439 in k2436 in k2433 in a2424 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2459,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k2421 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1090 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[15],C_SCHEME_END_OF_LIST,t1);}

/* k2398 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2413,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2415,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1102 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2414 in k2398 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2415(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2415,5,t0,t1,t2,t3,t4);}
/* chicken-syntax.scm: 1104 syntax-error */
t5=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[11],lf[13]);}

/* k2411 in k2398 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1100 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[11],C_SCHEME_END_OF_LIST,t1);}

/* k2401 in k2398 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2406,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1107 ##sys#macro-subset */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],*((C_word*)lf[9]+1));}

/* k2404 in k2401 in k2398 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2406,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! chicken-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2409,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1112 register-feature! */
t4=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t3,lf[2],lf[3],lf[4],lf[5],lf[6],lf[7]);}

/* k2407 in k2404 in k2401 in k2398 in k2395 in k2392 in k2389 in k2386 in k2383 in k2380 in k2377 in k2374 in k2371 in k2368 in k2365 in k2362 in k2359 in k2356 in k2353 in k2350 in k2347 in k2344 in k2341 in k2338 in k2335 in k2332 in k2329 in k2326 in k2323 in k2320 in k2317 in k2314 in k2311 in k2308 in k2305 in k2302 in k2299 in k2296 in k2293 in k2290 in k2287 in k2283 */
static void C_ccall f_2409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[691] = {
{"toplevel:chicken_syntax_scm",(void*)C_chicken_syntax_toplevel},
{"f_2285:chicken_syntax_scm",(void*)f_2285},
{"f_2289:chicken_syntax_scm",(void*)f_2289},
{"f_10320:chicken_syntax_scm",(void*)f_10320},
{"f_10324:chicken_syntax_scm",(void*)f_10324},
{"f_10333:chicken_syntax_scm",(void*)f_10333},
{"f_10336:chicken_syntax_scm",(void*)f_10336},
{"f_10342:chicken_syntax_scm",(void*)f_10342},
{"f_10345:chicken_syntax_scm",(void*)f_10345},
{"f_10348:chicken_syntax_scm",(void*)f_10348},
{"f_10351:chicken_syntax_scm",(void*)f_10351},
{"f_10761:chicken_syntax_scm",(void*)f_10761},
{"f_10721:chicken_syntax_scm",(void*)f_10721},
{"f_10753:chicken_syntax_scm",(void*)f_10753},
{"f_10713:chicken_syntax_scm",(void*)f_10713},
{"f_10669:chicken_syntax_scm",(void*)f_10669},
{"f_10380:chicken_syntax_scm",(void*)f_10380},
{"f_10390:chicken_syntax_scm",(void*)f_10390},
{"f_10657:chicken_syntax_scm",(void*)f_10657},
{"f_10393:chicken_syntax_scm",(void*)f_10393},
{"f_10653:chicken_syntax_scm",(void*)f_10653},
{"f_10396:chicken_syntax_scm",(void*)f_10396},
{"f_10443:chicken_syntax_scm",(void*)f_10443},
{"f_10407:chicken_syntax_scm",(void*)f_10407},
{"f_10378:chicken_syntax_scm",(void*)f_10378},
{"f_10374:chicken_syntax_scm",(void*)f_10374},
{"f_10318:chicken_syntax_scm",(void*)f_10318},
{"f_2292:chicken_syntax_scm",(void*)f_2292},
{"f_10177:chicken_syntax_scm",(void*)f_10177},
{"f_10181:chicken_syntax_scm",(void*)f_10181},
{"f_10184:chicken_syntax_scm",(void*)f_10184},
{"f_10187:chicken_syntax_scm",(void*)f_10187},
{"f_10223:chicken_syntax_scm",(void*)f_10223},
{"f_10238:chicken_syntax_scm",(void*)f_10238},
{"f_10292:chicken_syntax_scm",(void*)f_10292},
{"f_10253:chicken_syntax_scm",(void*)f_10253},
{"f_10216:chicken_syntax_scm",(void*)f_10216},
{"f_10175:chicken_syntax_scm",(void*)f_10175},
{"f_2295:chicken_syntax_scm",(void*)f_2295},
{"f_10078:chicken_syntax_scm",(void*)f_10078},
{"f_10082:chicken_syntax_scm",(void*)f_10082},
{"f_10085:chicken_syntax_scm",(void*)f_10085},
{"f_10088:chicken_syntax_scm",(void*)f_10088},
{"f_10167:chicken_syntax_scm",(void*)f_10167},
{"f_10076:chicken_syntax_scm",(void*)f_10076},
{"f_2298:chicken_syntax_scm",(void*)f_2298},
{"f_10060:chicken_syntax_scm",(void*)f_10060},
{"f_10068:chicken_syntax_scm",(void*)f_10068},
{"f_10058:chicken_syntax_scm",(void*)f_10058},
{"f_2301:chicken_syntax_scm",(void*)f_2301},
{"f_9971:chicken_syntax_scm",(void*)f_9971},
{"f_9975:chicken_syntax_scm",(void*)f_9975},
{"f_9978:chicken_syntax_scm",(void*)f_9978},
{"f_9981:chicken_syntax_scm",(void*)f_9981},
{"f_10047:chicken_syntax_scm",(void*)f_10047},
{"f_9984:chicken_syntax_scm",(void*)f_9984},
{"f_9997:chicken_syntax_scm",(void*)f_9997},
{"f_10041:chicken_syntax_scm",(void*)f_10041},
{"f_10008:chicken_syntax_scm",(void*)f_10008},
{"f_10016:chicken_syntax_scm",(void*)f_10016},
{"f_10018:chicken_syntax_scm",(void*)f_10018},
{"f_10035:chicken_syntax_scm",(void*)f_10035},
{"f_10003:chicken_syntax_scm",(void*)f_10003},
{"f_9995:chicken_syntax_scm",(void*)f_9995},
{"f_9991:chicken_syntax_scm",(void*)f_9991},
{"f_9969:chicken_syntax_scm",(void*)f_9969},
{"f_2304:chicken_syntax_scm",(void*)f_2304},
{"f_9857:chicken_syntax_scm",(void*)f_9857},
{"f_9861:chicken_syntax_scm",(void*)f_9861},
{"f_9870:chicken_syntax_scm",(void*)f_9870},
{"f_9873:chicken_syntax_scm",(void*)f_9873},
{"f_9876:chicken_syntax_scm",(void*)f_9876},
{"f_9936:chicken_syntax_scm",(void*)f_9936},
{"f_9911:chicken_syntax_scm",(void*)f_9911},
{"f_9855:chicken_syntax_scm",(void*)f_9855},
{"f_2307:chicken_syntax_scm",(void*)f_2307},
{"f_9720:chicken_syntax_scm",(void*)f_9720},
{"f_9724:chicken_syntax_scm",(void*)f_9724},
{"f_9736:chicken_syntax_scm",(void*)f_9736},
{"f_9739:chicken_syntax_scm",(void*)f_9739},
{"f_9742:chicken_syntax_scm",(void*)f_9742},
{"f_9789:chicken_syntax_scm",(void*)f_9789},
{"f_9718:chicken_syntax_scm",(void*)f_9718},
{"f_2310:chicken_syntax_scm",(void*)f_2310},
{"f_9034:chicken_syntax_scm",(void*)f_9034},
{"f_9038:chicken_syntax_scm",(void*)f_9038},
{"f_9681:chicken_syntax_scm",(void*)f_9681},
{"f_9710:chicken_syntax_scm",(void*)f_9710},
{"f_9047:chicken_syntax_scm",(void*)f_9047},
{"f_9637:chicken_syntax_scm",(void*)f_9637},
{"f_9675:chicken_syntax_scm",(void*)f_9675},
{"f_9664:chicken_syntax_scm",(void*)f_9664},
{"f_9672:chicken_syntax_scm",(void*)f_9672},
{"f_9050:chicken_syntax_scm",(void*)f_9050},
{"f_9593:chicken_syntax_scm",(void*)f_9593},
{"f_9631:chicken_syntax_scm",(void*)f_9631},
{"f_9620:chicken_syntax_scm",(void*)f_9620},
{"f_9628:chicken_syntax_scm",(void*)f_9628},
{"f_9053:chicken_syntax_scm",(void*)f_9053},
{"f_9056:chicken_syntax_scm",(void*)f_9056},
{"f_9059:chicken_syntax_scm",(void*)f_9059},
{"f_9558:chicken_syntax_scm",(void*)f_9558},
{"f_9587:chicken_syntax_scm",(void*)f_9587},
{"f_9507:chicken_syntax_scm",(void*)f_9507},
{"f_9509:chicken_syntax_scm",(void*)f_9509},
{"f_9542:chicken_syntax_scm",(void*)f_9542},
{"f_9522:chicken_syntax_scm",(void*)f_9522},
{"f_9418:chicken_syntax_scm",(void*)f_9418},
{"f_9485:chicken_syntax_scm",(void*)f_9485},
{"f_9499:chicken_syntax_scm",(void*)f_9499},
{"f_9430:chicken_syntax_scm",(void*)f_9430},
{"f_9432:chicken_syntax_scm",(void*)f_9432},
{"f_9465:chicken_syntax_scm",(void*)f_9465},
{"f_9445:chicken_syntax_scm",(void*)f_9445},
{"f_9426:chicken_syntax_scm",(void*)f_9426},
{"f_9422:chicken_syntax_scm",(void*)f_9422},
{"f_9070:chicken_syntax_scm",(void*)f_9070},
{"f_9354:chicken_syntax_scm",(void*)f_9354},
{"f_9367:chicken_syntax_scm",(void*)f_9367},
{"f_9274:chicken_syntax_scm",(void*)f_9274},
{"f_9292:chicken_syntax_scm",(void*)f_9292},
{"f_9305:chicken_syntax_scm",(void*)f_9305},
{"f_9282:chicken_syntax_scm",(void*)f_9282},
{"f_9278:chicken_syntax_scm",(void*)f_9278},
{"f_9270:chicken_syntax_scm",(void*)f_9270},
{"f_9262:chicken_syntax_scm",(void*)f_9262},
{"f_9194:chicken_syntax_scm",(void*)f_9194},
{"f_9207:chicken_syntax_scm",(void*)f_9207},
{"f_9114:chicken_syntax_scm",(void*)f_9114},
{"f_9132:chicken_syntax_scm",(void*)f_9132},
{"f_9145:chicken_syntax_scm",(void*)f_9145},
{"f_9122:chicken_syntax_scm",(void*)f_9122},
{"f_9118:chicken_syntax_scm",(void*)f_9118},
{"f_9110:chicken_syntax_scm",(void*)f_9110},
{"f_9032:chicken_syntax_scm",(void*)f_9032},
{"f_2313:chicken_syntax_scm",(void*)f_2313},
{"f_8913:chicken_syntax_scm",(void*)f_8913},
{"f_8917:chicken_syntax_scm",(void*)f_8917},
{"f_8923:chicken_syntax_scm",(void*)f_8923},
{"f_9024:chicken_syntax_scm",(void*)f_9024},
{"f_8929:chicken_syntax_scm",(void*)f_8929},
{"f_8932:chicken_syntax_scm",(void*)f_8932},
{"f_8935:chicken_syntax_scm",(void*)f_8935},
{"f_8975:chicken_syntax_scm",(void*)f_8975},
{"f_8998:chicken_syntax_scm",(void*)f_8998},
{"f_9005:chicken_syntax_scm",(void*)f_9005},
{"f_9012:chicken_syntax_scm",(void*)f_9012},
{"f_8988:chicken_syntax_scm",(void*)f_8988},
{"f_8938:chicken_syntax_scm",(void*)f_8938},
{"f_8911:chicken_syntax_scm",(void*)f_8911},
{"f_2316:chicken_syntax_scm",(void*)f_2316},
{"f_8427:chicken_syntax_scm",(void*)f_8427},
{"f_8431:chicken_syntax_scm",(void*)f_8431},
{"f_8440:chicken_syntax_scm",(void*)f_8440},
{"f_8443:chicken_syntax_scm",(void*)f_8443},
{"f_8446:chicken_syntax_scm",(void*)f_8446},
{"f_8874:chicken_syntax_scm",(void*)f_8874},
{"f_8903:chicken_syntax_scm",(void*)f_8903},
{"f_8449:chicken_syntax_scm",(void*)f_8449},
{"f_8839:chicken_syntax_scm",(void*)f_8839},
{"f_8868:chicken_syntax_scm",(void*)f_8868},
{"f_8452:chicken_syntax_scm",(void*)f_8452},
{"f_8795:chicken_syntax_scm",(void*)f_8795},
{"f_8833:chicken_syntax_scm",(void*)f_8833},
{"f_8822:chicken_syntax_scm",(void*)f_8822},
{"f_8830:chicken_syntax_scm",(void*)f_8830},
{"f_8455:chicken_syntax_scm",(void*)f_8455},
{"f_8751:chicken_syntax_scm",(void*)f_8751},
{"f_8789:chicken_syntax_scm",(void*)f_8789},
{"f_8778:chicken_syntax_scm",(void*)f_8778},
{"f_8786:chicken_syntax_scm",(void*)f_8786},
{"f_8458:chicken_syntax_scm",(void*)f_8458},
{"f_8702:chicken_syntax_scm",(void*)f_8702},
{"f_8735:chicken_syntax_scm",(void*)f_8735},
{"f_8715:chicken_syntax_scm",(void*)f_8715},
{"f_8647:chicken_syntax_scm",(void*)f_8647},
{"f_8653:chicken_syntax_scm",(void*)f_8653},
{"f_8686:chicken_syntax_scm",(void*)f_8686},
{"f_8666:chicken_syntax_scm",(void*)f_8666},
{"f_8651:chicken_syntax_scm",(void*)f_8651},
{"f_8469:chicken_syntax_scm",(void*)f_8469},
{"f_8543:chicken_syntax_scm",(void*)f_8543},
{"f_8556:chicken_syntax_scm",(void*)f_8556},
{"f_8574:chicken_syntax_scm",(void*)f_8574},
{"f_8541:chicken_syntax_scm",(void*)f_8541},
{"f_8537:chicken_syntax_scm",(void*)f_8537},
{"f_8517:chicken_syntax_scm",(void*)f_8517},
{"f_8425:chicken_syntax_scm",(void*)f_8425},
{"f_2319:chicken_syntax_scm",(void*)f_2319},
{"f_8382:chicken_syntax_scm",(void*)f_8382},
{"f_8386:chicken_syntax_scm",(void*)f_8386},
{"f_8393:chicken_syntax_scm",(void*)f_8393},
{"f_8413:chicken_syntax_scm",(void*)f_8413},
{"f_8417:chicken_syntax_scm",(void*)f_8417},
{"f_8380:chicken_syntax_scm",(void*)f_8380},
{"f_2322:chicken_syntax_scm",(void*)f_2322},
{"f_8329:chicken_syntax_scm",(void*)f_8329},
{"f_8333:chicken_syntax_scm",(void*)f_8333},
{"f_8340:chicken_syntax_scm",(void*)f_8340},
{"f_8368:chicken_syntax_scm",(void*)f_8368},
{"f_8372:chicken_syntax_scm",(void*)f_8372},
{"f_8327:chicken_syntax_scm",(void*)f_8327},
{"f_2325:chicken_syntax_scm",(void*)f_2325},
{"f_8101:chicken_syntax_scm",(void*)f_8101},
{"f_8105:chicken_syntax_scm",(void*)f_8105},
{"f_8114:chicken_syntax_scm",(void*)f_8114},
{"f_8286:chicken_syntax_scm",(void*)f_8286},
{"f_8315:chicken_syntax_scm",(void*)f_8315},
{"f_8183:chicken_syntax_scm",(void*)f_8183},
{"f_8216:chicken_syntax_scm",(void*)f_8216},
{"f_8229:chicken_syntax_scm",(void*)f_8229},
{"f_8214:chicken_syntax_scm",(void*)f_8214},
{"f_8210:chicken_syntax_scm",(void*)f_8210},
{"f_8099:chicken_syntax_scm",(void*)f_8099},
{"f_2328:chicken_syntax_scm",(void*)f_2328},
{"f_8059:chicken_syntax_scm",(void*)f_8059},
{"f_8063:chicken_syntax_scm",(void*)f_8063},
{"f_8083:chicken_syntax_scm",(void*)f_8083},
{"f_8091:chicken_syntax_scm",(void*)f_8091},
{"f_8066:chicken_syntax_scm",(void*)f_8066},
{"f_8073:chicken_syntax_scm",(void*)f_8073},
{"f_8077:chicken_syntax_scm",(void*)f_8077},
{"f_8057:chicken_syntax_scm",(void*)f_8057},
{"f_2331:chicken_syntax_scm",(void*)f_2331},
{"f_7534:chicken_syntax_scm",(void*)f_7534},
{"f_7538:chicken_syntax_scm",(void*)f_7538},
{"f_7547:chicken_syntax_scm",(void*)f_7547},
{"f_7550:chicken_syntax_scm",(void*)f_7550},
{"f_8020:chicken_syntax_scm",(void*)f_8020},
{"f_8049:chicken_syntax_scm",(void*)f_8049},
{"f_7625:chicken_syntax_scm",(void*)f_7625},
{"f_7980:chicken_syntax_scm",(void*)f_7980},
{"f_7993:chicken_syntax_scm",(void*)f_7993},
{"f_7628:chicken_syntax_scm",(void*)f_7628},
{"f_7932:chicken_syntax_scm",(void*)f_7932},
{"f_7974:chicken_syntax_scm",(void*)f_7974},
{"f_7959:chicken_syntax_scm",(void*)f_7959},
{"f_7971:chicken_syntax_scm",(void*)f_7971},
{"f_7967:chicken_syntax_scm",(void*)f_7967},
{"f_7631:chicken_syntax_scm",(void*)f_7631},
{"f_7886:chicken_syntax_scm",(void*)f_7886},
{"f_7919:chicken_syntax_scm",(void*)f_7919},
{"f_7926:chicken_syntax_scm",(void*)f_7926},
{"f_7643:chicken_syntax_scm",(void*)f_7643},
{"f_7846:chicken_syntax_scm",(void*)f_7846},
{"f_7650:chicken_syntax_scm",(void*)f_7650},
{"f_7652:chicken_syntax_scm",(void*)f_7652},
{"f_7840:chicken_syntax_scm",(void*)f_7840},
{"f_7724:chicken_syntax_scm",(void*)f_7724},
{"f_7806:chicken_syntax_scm",(void*)f_7806},
{"f_7763:chicken_syntax_scm",(void*)f_7763},
{"f_7743:chicken_syntax_scm",(void*)f_7743},
{"f_7676:chicken_syntax_scm",(void*)f_7676},
{"f_7714:chicken_syntax_scm",(void*)f_7714},
{"f_7703:chicken_syntax_scm",(void*)f_7703},
{"f_7711:chicken_syntax_scm",(void*)f_7711},
{"f_7670:chicken_syntax_scm",(void*)f_7670},
{"f_7674:chicken_syntax_scm",(void*)f_7674},
{"f_7632:chicken_syntax_scm",(void*)f_7632},
{"f_7583:chicken_syntax_scm",(void*)f_7583},
{"f_7606:chicken_syntax_scm",(void*)f_7606},
{"f_7610:chicken_syntax_scm",(void*)f_7610},
{"f_7552:chicken_syntax_scm",(void*)f_7552},
{"f_7573:chicken_syntax_scm",(void*)f_7573},
{"f_7532:chicken_syntax_scm",(void*)f_7532},
{"f_2334:chicken_syntax_scm",(void*)f_2334},
{"f_7462:chicken_syntax_scm",(void*)f_7462},
{"f_7466:chicken_syntax_scm",(void*)f_7466},
{"f_7475:chicken_syntax_scm",(void*)f_7475},
{"f_7478:chicken_syntax_scm",(void*)f_7478},
{"f_7483:chicken_syntax_scm",(void*)f_7483},
{"f_7520:chicken_syntax_scm",(void*)f_7520},
{"f_7501:chicken_syntax_scm",(void*)f_7501},
{"f_7460:chicken_syntax_scm",(void*)f_7460},
{"f_2337:chicken_syntax_scm",(void*)f_2337},
{"f_7091:chicken_syntax_scm",(void*)f_7091},
{"f_7095:chicken_syntax_scm",(void*)f_7095},
{"f_7104:chicken_syntax_scm",(void*)f_7104},
{"f_7107:chicken_syntax_scm",(void*)f_7107},
{"f_7418:chicken_syntax_scm",(void*)f_7418},
{"f_7416:chicken_syntax_scm",(void*)f_7416},
{"f_7110:chicken_syntax_scm",(void*)f_7110},
{"f_7366:chicken_syntax_scm",(void*)f_7366},
{"f_7408:chicken_syntax_scm",(void*)f_7408},
{"f_7393:chicken_syntax_scm",(void*)f_7393},
{"f_7405:chicken_syntax_scm",(void*)f_7405},
{"f_7401:chicken_syntax_scm",(void*)f_7401},
{"f_7113:chicken_syntax_scm",(void*)f_7113},
{"f_7326:chicken_syntax_scm",(void*)f_7326},
{"f_7133:chicken_syntax_scm",(void*)f_7133},
{"f_7147:chicken_syntax_scm",(void*)f_7147},
{"f_7320:chicken_syntax_scm",(void*)f_7320},
{"f_7174:chicken_syntax_scm",(void*)f_7174},
{"f_7272:chicken_syntax_scm",(void*)f_7272},
{"f_7202:chicken_syntax_scm",(void*)f_7202},
{"f_7216:chicken_syntax_scm",(void*)f_7216},
{"f_7243:chicken_syntax_scm",(void*)f_7243},
{"f_7210:chicken_syntax_scm",(void*)f_7210},
{"f_7206:chicken_syntax_scm",(void*)f_7206},
{"f_7141:chicken_syntax_scm",(void*)f_7141},
{"f_7145:chicken_syntax_scm",(void*)f_7145},
{"f_7137:chicken_syntax_scm",(void*)f_7137},
{"f_7114:chicken_syntax_scm",(void*)f_7114},
{"f_7089:chicken_syntax_scm",(void*)f_7089},
{"f_2340:chicken_syntax_scm",(void*)f_2340},
{"f_7085:chicken_syntax_scm",(void*)f_7085},
{"f_7008:chicken_syntax_scm",(void*)f_7008},
{"f_7012:chicken_syntax_scm",(void*)f_7012},
{"f_7015:chicken_syntax_scm",(void*)f_7015},
{"f_7018:chicken_syntax_scm",(void*)f_7018},
{"f_7053:chicken_syntax_scm",(void*)f_7053},
{"f_7006:chicken_syntax_scm",(void*)f_7006},
{"f_2343:chicken_syntax_scm",(void*)f_2343},
{"f_6903:chicken_syntax_scm",(void*)f_6903},
{"f_6907:chicken_syntax_scm",(void*)f_6907},
{"f_6994:chicken_syntax_scm",(void*)f_6994},
{"f_6990:chicken_syntax_scm",(void*)f_6990},
{"f_6909:chicken_syntax_scm",(void*)f_6909},
{"f_6913:chicken_syntax_scm",(void*)f_6913},
{"f_6970:chicken_syntax_scm",(void*)f_6970},
{"f_6922:chicken_syntax_scm",(void*)f_6922},
{"f_6944:chicken_syntax_scm",(void*)f_6944},
{"f_6934:chicken_syntax_scm",(void*)f_6934},
{"f_6925:chicken_syntax_scm",(void*)f_6925},
{"f_6901:chicken_syntax_scm",(void*)f_6901},
{"f_2346:chicken_syntax_scm",(void*)f_2346},
{"f_6740:chicken_syntax_scm",(void*)f_6740},
{"f_6744:chicken_syntax_scm",(void*)f_6744},
{"f_6753:chicken_syntax_scm",(void*)f_6753},
{"f_6756:chicken_syntax_scm",(void*)f_6756},
{"f_6761:chicken_syntax_scm",(void*)f_6761},
{"f_6806:chicken_syntax_scm",(void*)f_6806},
{"f_6873:chicken_syntax_scm",(void*)f_6873},
{"f_6835:chicken_syntax_scm",(void*)f_6835},
{"f_6775:chicken_syntax_scm",(void*)f_6775},
{"f_6779:chicken_syntax_scm",(void*)f_6779},
{"f_6738:chicken_syntax_scm",(void*)f_6738},
{"f_2349:chicken_syntax_scm",(void*)f_2349},
{"f_6540:chicken_syntax_scm",(void*)f_6540},
{"f_6544:chicken_syntax_scm",(void*)f_6544},
{"f_6553:chicken_syntax_scm",(void*)f_6553},
{"f_6556:chicken_syntax_scm",(void*)f_6556},
{"f_6559:chicken_syntax_scm",(void*)f_6559},
{"f_6562:chicken_syntax_scm",(void*)f_6562},
{"f_6565:chicken_syntax_scm",(void*)f_6565},
{"f_6572:chicken_syntax_scm",(void*)f_6572},
{"f_6590:chicken_syntax_scm",(void*)f_6590},
{"f_6606:chicken_syntax_scm",(void*)f_6606},
{"f_6612:chicken_syntax_scm",(void*)f_6612},
{"f_6672:chicken_syntax_scm",(void*)f_6672},
{"f_6699:chicken_syntax_scm",(void*)f_6699},
{"f_6666:chicken_syntax_scm",(void*)f_6666},
{"f_6662:chicken_syntax_scm",(void*)f_6662},
{"f_6654:chicken_syntax_scm",(void*)f_6654},
{"f_6650:chicken_syntax_scm",(void*)f_6650},
{"f_6619:chicken_syntax_scm",(void*)f_6619},
{"f_6588:chicken_syntax_scm",(void*)f_6588},
{"f_6538:chicken_syntax_scm",(void*)f_6538},
{"f_2352:chicken_syntax_scm",(void*)f_2352},
{"f_6534:chicken_syntax_scm",(void*)f_6534},
{"f_6530:chicken_syntax_scm",(void*)f_6530},
{"f_5947:chicken_syntax_scm",(void*)f_5947},
{"f_5951:chicken_syntax_scm",(void*)f_5951},
{"f_5963:chicken_syntax_scm",(void*)f_5963},
{"f_5966:chicken_syntax_scm",(void*)f_5966},
{"f_5969:chicken_syntax_scm",(void*)f_5969},
{"f_6269:chicken_syntax_scm",(void*)f_6269},
{"f_6272:chicken_syntax_scm",(void*)f_6272},
{"f_6481:chicken_syntax_scm",(void*)f_6481},
{"f_6510:chicken_syntax_scm",(void*)f_6510},
{"f_6275:chicken_syntax_scm",(void*)f_6275},
{"f_6437:chicken_syntax_scm",(void*)f_6437},
{"f_6475:chicken_syntax_scm",(void*)f_6475},
{"f_6464:chicken_syntax_scm",(void*)f_6464},
{"f_6472:chicken_syntax_scm",(void*)f_6472},
{"f_6291:chicken_syntax_scm",(void*)f_6291},
{"f_6402:chicken_syntax_scm",(void*)f_6402},
{"f_6431:chicken_syntax_scm",(void*)f_6431},
{"f_6294:chicken_syntax_scm",(void*)f_6294},
{"f_6297:chicken_syntax_scm",(void*)f_6297},
{"f_6300:chicken_syntax_scm",(void*)f_6300},
{"f_6358:chicken_syntax_scm",(void*)f_6358},
{"f_6396:chicken_syntax_scm",(void*)f_6396},
{"f_6385:chicken_syntax_scm",(void*)f_6385},
{"f_6393:chicken_syntax_scm",(void*)f_6393},
{"f_6303:chicken_syntax_scm",(void*)f_6303},
{"f_6306:chicken_syntax_scm",(void*)f_6306},
{"f_6309:chicken_syntax_scm",(void*)f_6309},
{"f_6316:chicken_syntax_scm",(void*)f_6316},
{"f_6276:chicken_syntax_scm",(void*)f_6276},
{"f_6288:chicken_syntax_scm",(void*)f_6288},
{"f_6284:chicken_syntax_scm",(void*)f_6284},
{"f_6068:chicken_syntax_scm",(void*)f_6068},
{"f_6074:chicken_syntax_scm",(void*)f_6074},
{"f_6262:chicken_syntax_scm",(void*)f_6262},
{"f_6250:chicken_syntax_scm",(void*)f_6250},
{"f_6234:chicken_syntax_scm",(void*)f_6234},
{"f_6198:chicken_syntax_scm",(void*)f_6198},
{"f_6148:chicken_syntax_scm",(void*)f_6148},
{"f_6136:chicken_syntax_scm",(void*)f_6136},
{"f_5971:chicken_syntax_scm",(void*)f_5971},
{"f_5979:chicken_syntax_scm",(void*)f_5979},
{"f_5983:chicken_syntax_scm",(void*)f_5983},
{"f_5987:chicken_syntax_scm",(void*)f_5987},
{"f_5989:chicken_syntax_scm",(void*)f_5989},
{"f_6042:chicken_syntax_scm",(void*)f_6042},
{"f_6058:chicken_syntax_scm",(void*)f_6058},
{"f_6054:chicken_syntax_scm",(void*)f_6054},
{"f_6010:chicken_syntax_scm",(void*)f_6010},
{"f_5945:chicken_syntax_scm",(void*)f_5945},
{"f_2355:chicken_syntax_scm",(void*)f_2355},
{"f_5937:chicken_syntax_scm",(void*)f_5937},
{"f_5933:chicken_syntax_scm",(void*)f_5933},
{"f_5929:chicken_syntax_scm",(void*)f_5929},
{"f_5722:chicken_syntax_scm",(void*)f_5722},
{"f_5726:chicken_syntax_scm",(void*)f_5726},
{"f_5729:chicken_syntax_scm",(void*)f_5729},
{"f_5732:chicken_syntax_scm",(void*)f_5732},
{"f_5739:chicken_syntax_scm",(void*)f_5739},
{"f_5889:chicken_syntax_scm",(void*)f_5889},
{"f_5774:chicken_syntax_scm",(void*)f_5774},
{"f_5850:chicken_syntax_scm",(void*)f_5850},
{"f_5862:chicken_syntax_scm",(void*)f_5862},
{"f_5834:chicken_syntax_scm",(void*)f_5834},
{"f_5720:chicken_syntax_scm",(void*)f_5720},
{"f_2358:chicken_syntax_scm",(void*)f_2358},
{"f_5712:chicken_syntax_scm",(void*)f_5712},
{"f_5408:chicken_syntax_scm",(void*)f_5408},
{"f_5412:chicken_syntax_scm",(void*)f_5412},
{"f_5424:chicken_syntax_scm",(void*)f_5424},
{"f_5427:chicken_syntax_scm",(void*)f_5427},
{"f_5430:chicken_syntax_scm",(void*)f_5430},
{"f_5433:chicken_syntax_scm",(void*)f_5433},
{"f_5436:chicken_syntax_scm",(void*)f_5436},
{"f_5439:chicken_syntax_scm",(void*)f_5439},
{"f_5460:chicken_syntax_scm",(void*)f_5460},
{"f_5688:chicken_syntax_scm",(void*)f_5688},
{"f_5550:chicken_syntax_scm",(void*)f_5550},
{"f_5569:chicken_syntax_scm",(void*)f_5569},
{"f_5526:chicken_syntax_scm",(void*)f_5526},
{"f_5458:chicken_syntax_scm",(void*)f_5458},
{"f_5406:chicken_syntax_scm",(void*)f_5406},
{"f_2361:chicken_syntax_scm",(void*)f_2361},
{"f_5398:chicken_syntax_scm",(void*)f_5398},
{"f_5394:chicken_syntax_scm",(void*)f_5394},
{"f_5390:chicken_syntax_scm",(void*)f_5390},
{"f_5386:chicken_syntax_scm",(void*)f_5386},
{"f_4860:chicken_syntax_scm",(void*)f_4860},
{"f_4864:chicken_syntax_scm",(void*)f_4864},
{"f_4901:chicken_syntax_scm",(void*)f_4901},
{"f_5309:chicken_syntax_scm",(void*)f_5309},
{"f_5346:chicken_syntax_scm",(void*)f_5346},
{"f_5350:chicken_syntax_scm",(void*)f_5350},
{"f_5303:chicken_syntax_scm",(void*)f_5303},
{"f_4904:chicken_syntax_scm",(void*)f_4904},
{"f_4907:chicken_syntax_scm",(void*)f_4907},
{"f_4910:chicken_syntax_scm",(void*)f_4910},
{"f_4913:chicken_syntax_scm",(void*)f_4913},
{"f_4916:chicken_syntax_scm",(void*)f_4916},
{"f_4919:chicken_syntax_scm",(void*)f_4919},
{"f_4922:chicken_syntax_scm",(void*)f_4922},
{"f_4925:chicken_syntax_scm",(void*)f_4925},
{"f_4928:chicken_syntax_scm",(void*)f_4928},
{"f_4931:chicken_syntax_scm",(void*)f_4931},
{"f_4934:chicken_syntax_scm",(void*)f_4934},
{"f_4945:chicken_syntax_scm",(void*)f_4945},
{"f_4971:chicken_syntax_scm",(void*)f_4971},
{"f_4981:chicken_syntax_scm",(void*)f_4981},
{"f_4985:chicken_syntax_scm",(void*)f_4985},
{"f_4999:chicken_syntax_scm",(void*)f_4999},
{"f_5023:chicken_syntax_scm",(void*)f_5023},
{"f_5099:chicken_syntax_scm",(void*)f_5099},
{"f_5247:chicken_syntax_scm",(void*)f_5247},
{"f_5167:chicken_syntax_scm",(void*)f_5167},
{"f_5186:chicken_syntax_scm",(void*)f_5186},
{"f_5156:chicken_syntax_scm",(void*)f_5156},
{"f_5124:chicken_syntax_scm",(void*)f_5124},
{"f_5027:chicken_syntax_scm",(void*)f_5027},
{"f_5050:chicken_syntax_scm",(void*)f_5050},
{"f_5083:chicken_syntax_scm",(void*)f_5083},
{"f_5063:chicken_syntax_scm",(void*)f_5063},
{"f_5044:chicken_syntax_scm",(void*)f_5044},
{"f_5013:chicken_syntax_scm",(void*)f_5013},
{"f_5021:chicken_syntax_scm",(void*)f_5021},
{"f_5007:chicken_syntax_scm",(void*)f_5007},
{"f_4969:chicken_syntax_scm",(void*)f_4969},
{"f_4866:chicken_syntax_scm",(void*)f_4866},
{"f_4872:chicken_syntax_scm",(void*)f_4872},
{"f_4898:chicken_syntax_scm",(void*)f_4898},
{"f_4886:chicken_syntax_scm",(void*)f_4886},
{"f_4890:chicken_syntax_scm",(void*)f_4890},
{"f_4858:chicken_syntax_scm",(void*)f_4858},
{"f_2364:chicken_syntax_scm",(void*)f_2364},
{"f_4758:chicken_syntax_scm",(void*)f_4758},
{"f_4762:chicken_syntax_scm",(void*)f_4762},
{"f_4827:chicken_syntax_scm",(void*)f_4827},
{"f_4842:chicken_syntax_scm",(void*)f_4842},
{"f_4777:chicken_syntax_scm",(void*)f_4777},
{"f_4800:chicken_syntax_scm",(void*)f_4800},
{"f_4812:chicken_syntax_scm",(void*)f_4812},
{"f_4756:chicken_syntax_scm",(void*)f_4756},
{"f_2367:chicken_syntax_scm",(void*)f_2367},
{"f_4752:chicken_syntax_scm",(void*)f_4752},
{"f_4748:chicken_syntax_scm",(void*)f_4748},
{"f_4544:chicken_syntax_scm",(void*)f_4544},
{"f_4548:chicken_syntax_scm",(void*)f_4548},
{"f_4551:chicken_syntax_scm",(void*)f_4551},
{"f_4554:chicken_syntax_scm",(void*)f_4554},
{"f_4557:chicken_syntax_scm",(void*)f_4557},
{"f_4568:chicken_syntax_scm",(void*)f_4568},
{"f_4596:chicken_syntax_scm",(void*)f_4596},
{"f_4688:chicken_syntax_scm",(void*)f_4688},
{"f_4542:chicken_syntax_scm",(void*)f_4542},
{"f_2370:chicken_syntax_scm",(void*)f_2370},
{"f_4534:chicken_syntax_scm",(void*)f_4534},
{"f_4530:chicken_syntax_scm",(void*)f_4530},
{"f_4121:chicken_syntax_scm",(void*)f_4121},
{"f_4125:chicken_syntax_scm",(void*)f_4125},
{"f_4128:chicken_syntax_scm",(void*)f_4128},
{"f_4131:chicken_syntax_scm",(void*)f_4131},
{"f_4134:chicken_syntax_scm",(void*)f_4134},
{"f_4137:chicken_syntax_scm",(void*)f_4137},
{"f_4140:chicken_syntax_scm",(void*)f_4140},
{"f_4143:chicken_syntax_scm",(void*)f_4143},
{"f_4146:chicken_syntax_scm",(void*)f_4146},
{"f_4355:chicken_syntax_scm",(void*)f_4355},
{"f_4395:chicken_syntax_scm",(void*)f_4395},
{"f_4429:chicken_syntax_scm",(void*)f_4429},
{"f_4458:chicken_syntax_scm",(void*)f_4458},
{"f_4403:chicken_syntax_scm",(void*)f_4403},
{"f_4399:chicken_syntax_scm",(void*)f_4399},
{"f_4148:chicken_syntax_scm",(void*)f_4148},
{"f_4272:chicken_syntax_scm",(void*)f_4272},
{"f_4299:chicken_syntax_scm",(void*)f_4299},
{"f_4270:chicken_syntax_scm",(void*)f_4270},
{"f_4266:chicken_syntax_scm",(void*)f_4266},
{"f_4258:chicken_syntax_scm",(void*)f_4258},
{"f_4239:chicken_syntax_scm",(void*)f_4239},
{"f_4209:chicken_syntax_scm",(void*)f_4209},
{"f_4190:chicken_syntax_scm",(void*)f_4190},
{"f_4119:chicken_syntax_scm",(void*)f_4119},
{"f_2373:chicken_syntax_scm",(void*)f_2373},
{"f_3650:chicken_syntax_scm",(void*)f_3650},
{"f_3654:chicken_syntax_scm",(void*)f_3654},
{"f_3669:chicken_syntax_scm",(void*)f_3669},
{"f_3672:chicken_syntax_scm",(void*)f_3672},
{"f_3675:chicken_syntax_scm",(void*)f_3675},
{"f_3678:chicken_syntax_scm",(void*)f_3678},
{"f_3681:chicken_syntax_scm",(void*)f_3681},
{"f_3687:chicken_syntax_scm",(void*)f_3687},
{"f_3690:chicken_syntax_scm",(void*)f_3690},
{"f_4058:chicken_syntax_scm",(void*)f_4058},
{"f_4087:chicken_syntax_scm",(void*)f_4087},
{"f_3693:chicken_syntax_scm",(void*)f_3693},
{"f_4011:chicken_syntax_scm",(void*)f_4011},
{"f_4038:chicken_syntax_scm",(void*)f_4038},
{"f_4009:chicken_syntax_scm",(void*)f_4009},
{"f_4005:chicken_syntax_scm",(void*)f_4005},
{"f_3722:chicken_syntax_scm",(void*)f_3722},
{"f_3748:chicken_syntax_scm",(void*)f_3748},
{"f_3784:chicken_syntax_scm",(void*)f_3784},
{"f_3764:chicken_syntax_scm",(void*)f_3764},
{"f_3760:chicken_syntax_scm",(void*)f_3760},
{"f_3720:chicken_syntax_scm",(void*)f_3720},
{"f_3716:chicken_syntax_scm",(void*)f_3716},
{"f_3648:chicken_syntax_scm",(void*)f_3648},
{"f_2376:chicken_syntax_scm",(void*)f_2376},
{"f_3640:chicken_syntax_scm",(void*)f_3640},
{"f_3450:chicken_syntax_scm",(void*)f_3450},
{"f_3454:chicken_syntax_scm",(void*)f_3454},
{"f_3457:chicken_syntax_scm",(void*)f_3457},
{"f_3460:chicken_syntax_scm",(void*)f_3460},
{"f_3463:chicken_syntax_scm",(void*)f_3463},
{"f_3466:chicken_syntax_scm",(void*)f_3466},
{"f_3475:chicken_syntax_scm",(void*)f_3475},
{"f_3578:chicken_syntax_scm",(void*)f_3578},
{"f_3606:chicken_syntax_scm",(void*)f_3606},
{"f_3600:chicken_syntax_scm",(void*)f_3600},
{"f_3581:chicken_syntax_scm",(void*)f_3581},
{"f_3485:chicken_syntax_scm",(void*)f_3485},
{"f_3488:chicken_syntax_scm",(void*)f_3488},
{"f_3560:chicken_syntax_scm",(void*)f_3560},
{"f_3537:chicken_syntax_scm",(void*)f_3537},
{"f_3494:chicken_syntax_scm",(void*)f_3494},
{"f_3505:chicken_syntax_scm",(void*)f_3505},
{"f_3525:chicken_syntax_scm",(void*)f_3525},
{"f_3448:chicken_syntax_scm",(void*)f_3448},
{"f_2379:chicken_syntax_scm",(void*)f_2379},
{"f_3440:chicken_syntax_scm",(void*)f_3440},
{"f_3219:chicken_syntax_scm",(void*)f_3219},
{"f_3223:chicken_syntax_scm",(void*)f_3223},
{"f_3226:chicken_syntax_scm",(void*)f_3226},
{"f_3229:chicken_syntax_scm",(void*)f_3229},
{"f_3232:chicken_syntax_scm",(void*)f_3232},
{"f_3235:chicken_syntax_scm",(void*)f_3235},
{"f_3244:chicken_syntax_scm",(void*)f_3244},
{"f_3363:chicken_syntax_scm",(void*)f_3363},
{"f_3391:chicken_syntax_scm",(void*)f_3391},
{"f_3424:chicken_syntax_scm",(void*)f_3424},
{"f_3397:chicken_syntax_scm",(void*)f_3397},
{"f_3385:chicken_syntax_scm",(void*)f_3385},
{"f_3366:chicken_syntax_scm",(void*)f_3366},
{"f_3254:chicken_syntax_scm",(void*)f_3254},
{"f_3257:chicken_syntax_scm",(void*)f_3257},
{"f_3353:chicken_syntax_scm",(void*)f_3353},
{"f_3318:chicken_syntax_scm",(void*)f_3318},
{"f_3263:chicken_syntax_scm",(void*)f_3263},
{"f_3286:chicken_syntax_scm",(void*)f_3286},
{"f_3306:chicken_syntax_scm",(void*)f_3306},
{"f_3217:chicken_syntax_scm",(void*)f_3217},
{"f_2382:chicken_syntax_scm",(void*)f_2382},
{"f_2938:chicken_syntax_scm",(void*)f_2938},
{"f_2942:chicken_syntax_scm",(void*)f_2942},
{"f_2945:chicken_syntax_scm",(void*)f_2945},
{"f_2948:chicken_syntax_scm",(void*)f_2948},
{"f_2951:chicken_syntax_scm",(void*)f_2951},
{"f_2954:chicken_syntax_scm",(void*)f_2954},
{"f_2957:chicken_syntax_scm",(void*)f_2957},
{"f_2966:chicken_syntax_scm",(void*)f_2966},
{"f_3112:chicken_syntax_scm",(void*)f_3112},
{"f_3115:chicken_syntax_scm",(void*)f_3115},
{"f_3124:chicken_syntax_scm",(void*)f_3124},
{"f_3149:chicken_syntax_scm",(void*)f_3149},
{"f_3174:chicken_syntax_scm",(void*)f_3174},
{"f_3196:chicken_syntax_scm",(void*)f_3196},
{"f11165:chicken_syntax_scm",(void*)f11165},
{"f11161:chicken_syntax_scm",(void*)f11161},
{"f_3181:chicken_syntax_scm",(void*)f_3181},
{"f_3168:chicken_syntax_scm",(void*)f_3168},
{"f_3164:chicken_syntax_scm",(void*)f_3164},
{"f_3143:chicken_syntax_scm",(void*)f_3143},
{"f_3139:chicken_syntax_scm",(void*)f_3139},
{"f_3106:chicken_syntax_scm",(void*)f_3106},
{"f_2976:chicken_syntax_scm",(void*)f_2976},
{"f_2983:chicken_syntax_scm",(void*)f_2983},
{"f_3091:chicken_syntax_scm",(void*)f_3091},
{"f_3079:chicken_syntax_scm",(void*)f_3079},
{"f_3075:chicken_syntax_scm",(void*)f_3075},
{"f_3011:chicken_syntax_scm",(void*)f_3011},
{"f_3039:chicken_syntax_scm",(void*)f_3039},
{"f_3051:chicken_syntax_scm",(void*)f_3051},
{"f_3035:chicken_syntax_scm",(void*)f_3035},
{"f_2936:chicken_syntax_scm",(void*)f_2936},
{"f_2385:chicken_syntax_scm",(void*)f_2385},
{"f_2834:chicken_syntax_scm",(void*)f_2834},
{"f_2838:chicken_syntax_scm",(void*)f_2838},
{"f_2844:chicken_syntax_scm",(void*)f_2844},
{"f_2928:chicken_syntax_scm",(void*)f_2928},
{"f_2889:chicken_syntax_scm",(void*)f_2889},
{"f_2901:chicken_syntax_scm",(void*)f_2901},
{"f_2832:chicken_syntax_scm",(void*)f_2832},
{"f_2388:chicken_syntax_scm",(void*)f_2388},
{"f_2797:chicken_syntax_scm",(void*)f_2797},
{"f_2801:chicken_syntax_scm",(void*)f_2801},
{"f_2808:chicken_syntax_scm",(void*)f_2808},
{"f_2820:chicken_syntax_scm",(void*)f_2820},
{"f_2824:chicken_syntax_scm",(void*)f_2824},
{"f_2795:chicken_syntax_scm",(void*)f_2795},
{"f_2391:chicken_syntax_scm",(void*)f_2391},
{"f_2772:chicken_syntax_scm",(void*)f_2772},
{"f_2776:chicken_syntax_scm",(void*)f_2776},
{"f_2770:chicken_syntax_scm",(void*)f_2770},
{"f_2394:chicken_syntax_scm",(void*)f_2394},
{"f_2640:chicken_syntax_scm",(void*)f_2640},
{"f_2650:chicken_syntax_scm",(void*)f_2650},
{"f_2700:chicken_syntax_scm",(void*)f_2700},
{"f_2713:chicken_syntax_scm",(void*)f_2713},
{"f_2666:chicken_syntax_scm",(void*)f_2666},
{"f_2682:chicken_syntax_scm",(void*)f_2682},
{"f_2638:chicken_syntax_scm",(void*)f_2638},
{"f_2397:chicken_syntax_scm",(void*)f_2397},
{"f_2425:chicken_syntax_scm",(void*)f_2425},
{"f_2586:chicken_syntax_scm",(void*)f_2586},
{"f_2590:chicken_syntax_scm",(void*)f_2590},
{"f_2573:chicken_syntax_scm",(void*)f_2573},
{"f_2435:chicken_syntax_scm",(void*)f_2435},
{"f_2523:chicken_syntax_scm",(void*)f_2523},
{"f_2438:chicken_syntax_scm",(void*)f_2438},
{"f_2475:chicken_syntax_scm",(void*)f_2475},
{"f_2441:chicken_syntax_scm",(void*)f_2441},
{"f_2451:chicken_syntax_scm",(void*)f_2451},
{"f_2461:chicken_syntax_scm",(void*)f_2461},
{"f_2459:chicken_syntax_scm",(void*)f_2459},
{"f_2423:chicken_syntax_scm",(void*)f_2423},
{"f_2400:chicken_syntax_scm",(void*)f_2400},
{"f_2415:chicken_syntax_scm",(void*)f_2415},
{"f_2413:chicken_syntax_scm",(void*)f_2413},
{"f_2403:chicken_syntax_scm",(void*)f_2403},
{"f_2406:chicken_syntax_scm",(void*)f_2406},
{"f_2409:chicken_syntax_scm",(void*)f_2409},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}
/* end of file */
