/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-22 11:31
   Version 4.3.5 
   windows-mingw32-x86 [ manyargs dload ptables ]
   compiled 2010-02-17 on lenovo-1 (MINGW32_NT-6.0)
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken_syntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[255];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,28),40,97,50,51,57,55,32,102,111,114,109,50,50,48,49,32,114,50,50,48,50,32,99,50,50,48,51,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,52),40,97,50,52,48,55,32,105,110,112,117,116,50,49,55,48,50,49,56,51,32,114,101,110,97,109,101,50,49,55,57,50,49,56,52,32,99,111,109,112,97,114,101,50,49,54,55,50,49,56,53,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,52),40,97,50,52,54,51,32,105,110,112,117,116,50,49,49,56,50,49,51,49,32,114,101,110,97,109,101,50,49,50,55,50,49,51,50,32,99,111,109,112,97,114,101,50,49,49,53,50,49,51,51,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,25),40,97,50,54,50,57,32,120,50,49,48,53,32,114,50,49,48,54,32,99,50,49,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,28),40,97,50,54,53,52,32,102,111,114,109,50,48,57,56,32,114,50,48,57,57,32,99,50,49,48,48,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,28),40,97,50,54,55,54,32,102,111,114,109,50,48,57,48,32,114,50,48,57,49,32,99,50,48,57,50,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,28),40,97,50,55,49,51,32,102,111,114,109,50,48,55,54,32,114,50,48,55,55,32,99,50,48,55,56,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,37),40,108,111,111,112,32,115,50,48,51,50,32,100,50,48,51,51,32,99,115,50,48,51,52,32,101,120,112,111,114,116,115,50,48,51,53,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,28),40,97,50,56,49,55,32,102,111,114,109,50,48,50,51,32,114,50,48,50,52,32,99,50,48,50,53,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,47),40,108,111,111,112,32,120,115,49,57,57,56,32,118,97,114,115,49,57,57,57,32,98,115,50,48,48,48,32,118,97,108,115,50,48,48,49,32,114,101,115,116,50,48,48,50,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,28),40,97,51,48,57,56,32,102,111,114,109,49,57,56,57,32,114,49,57,57,48,32,99,49,57,57,49,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,40),40,108,111,111,112,32,120,115,49,57,54,50,32,118,97,114,115,49,57,54,51,32,118,97,108,115,49,57,54,52,32,114,101,115,116,49,57,54,53,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,28),40,97,51,51,50,57,32,102,111,114,109,49,57,53,51,32,114,49,57,53,52,32,99,49,57,53,53,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,108,111,116,115,49,57,50,50,32,105,49,57,50,51,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,103,49,57,49,53,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,56,57,57,32,103,49,57,48,57,49,57,49,51,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,56,55,50,32,103,49,56,56,50,49,56,56,54,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,28),40,97,51,53,50,57,32,102,111,114,109,49,56,53,51,32,114,49,56,53,52,32,99,49,56,53,53,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,103,49,56,48,54,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,55,57,48,32,103,49,56,48,48,49,56,48,52,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,20),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,49,55,54,53,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,56,50,54,32,103,49,56,51,54,49,56,52,48,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,28),40,97,52,48,48,48,32,102,111,114,109,49,55,53,48,32,114,49,55,53,49,32,99,49,55,53,50,41,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,28),40,97,52,52,50,51,32,102,111,114,109,49,55,51,53,32,114,49,55,51,54,32,99,49,55,51,55,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,28),40,97,52,54,51,55,32,102,111,114,109,49,55,48,57,32,114,49,55,49,48,32,99,49,55,49,49,41,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,53,56,51,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,15),40,103,101,110,118,97,114,115,32,110,49,53,56,49,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,52,56,57,50,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,30),40,108,111,111,112,49,54,56,48,32,103,49,54,57,48,49,54,57,53,32,103,49,54,57,49,49,54,57,54,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,27),40,98,117,105,108,100,32,118,97,114,115,50,49,54,53,50,32,118,114,101,115,116,49,54,53,51,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,27),40,97,52,57,48,50,32,118,97,114,115,49,49,54,52,56,32,118,97,114,115,50,49,54,52,57,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,34),40,97,52,56,54,48,32,118,97,114,115,49,54,51,48,32,97,114,103,99,49,54,51,49,32,114,101,115,116,49,54,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,22),40,97,52,56,53,48,32,99,49,54,50,56,32,98,111,100,121,49,54,50,57,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,34),40,97,53,50,50,53,32,118,97,114,115,49,54,48,56,32,97,114,103,99,49,54,48,57,32,114,101,115,116,49,54,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,53,56,57,32,103,49,53,57,57,49,54,48,51,41,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,28),40,97,52,55,51,57,32,102,111,114,109,49,53,55,55,32,114,49,53,55,56,32,99,49,53,55,57,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,97,114,103,115,49,53,53,53,32,118,97,114,100,101,102,115,49,53,53,54,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,28),40,97,53,50,56,55,32,102,111,114,109,49,53,51,56,32,114,49,53,51,57,32,99,49,53,52,48,41,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,28),40,97,53,54,48,49,32,102,111,114,109,49,53,49,57,32,114,49,53,50,48,32,99,49,53,50,49,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,58),40,114,101,99,117,114,32,118,97,114,115,49,51,55,49,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,49,51,55,50,32,100,101,102,115,49,51,55,51,32,110,101,120,116,45,103,117,121,49,51,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,72),40,109,97,107,101,45,100,101,102,97,117,108,116,45,112,114,111,99,115,32,118,97,114,115,49,51,54,53,32,98,111,100,121,45,112,114,111,99,49,51,54,54,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,49,51,54,55,32,100,101,102,115,49,51,54,56,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,48),40,114,101,99,117,114,32,118,97,114,115,49,51,56,55,32,100,101,102,97,117,108,116,101,114,115,49,51,56,56,32,110,111,110,45,100,101,102,97,117,108,116,115,49,51,56,57,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,61),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,49,51,56,49,32,100,101,102,97,117,108,116,101,114,115,49,51,56,50,32,98,111,100,121,45,112,114,111,99,49,51,56,51,32,114,101,115,116,49,51,56,52,41,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,31),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,49,52,50,54,32,115,121,109,49,52,50,55,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,15),40,103,49,52,57,56,32,118,97,114,49,53,48,48,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,52,56,50,32,103,49,52,57,50,49,52,57,54,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,52,53,54,32,103,49,52,54,54,49,52,55,48,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,13),40,103,49,52,52,55,32,118,49,52,52,57,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,52,51,49,32,103,49,52,52,49,49,52,52,53,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,52,48,52,32,103,49,52,49,52,49,52,49,56,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,28),40,97,53,56,50,54,32,102,111,114,109,49,51,53,52,32,114,49,51,53,53,32,99,49,51,53,54,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,103,49,51,51,55,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,51,50,49,32,103,49,51,51,49,49,51,51,53,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,20),40,101,120,112,97,110,100,32,99,108,97,117,115,101,115,49,51,48,56,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,28),40,97,54,52,49,57,32,102,111,114,109,49,50,57,51,32,114,49,50,57,52,32,99,49,50,57,53,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,13),40,102,111,108,100,32,98,115,49,50,54,53,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,28),40,97,54,54,49,57,32,102,111,114,109,49,50,53,55,32,114,49,50,53,56,32,99,49,50,53,57,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,28),40,113,117,111,116,105,102,121,45,112,114,111,99,32,120,115,49,50,51,51,32,105,100,49,50,51,52,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,28),40,97,54,55,56,50,32,102,111,114,109,49,50,50,56,32,114,49,50,50,57,32,99,49,50,51,48,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,28),40,97,54,56,56,55,32,102,111,114,109,49,50,49,56,32,114,49,50,49,57,32,99,49,50,50,48,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,8),40,108,111,111,107,117,112,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,7),40,103,49,50,48,48,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,49,56,52,32,103,49,49,57,52,49,49,57,56,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,49,54,49,32,103,49,49,55,49,49,49,55,53,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,14),40,103,49,49,53,50,32,118,98,49,49,53,52,41,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,49,51,54,32,103,49,49,52,54,49,49,53,48,41,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,49,49,50,32,103,49,49,50,50,49,49,50,54,41,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,13),40,103,49,48,57,56,32,118,49,49,48,48,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,56,50,32,103,49,48,57,50,49,48,57,54,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,53,55,32,103,49,48,54,55,49,48,55,49,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,28),40,97,54,57,55,48,32,102,111,114,109,49,48,52,54,32,114,49,48,52,55,32,99,49,48,52,56,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,20),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,49,48,51,53,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,28),40,97,55,51,52,49,32,102,111,114,109,49,48,50,55,32,114,49,48,50,56,32,99,49,48,50,57,41,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,20),40,97,112,112,101,110,100,42,32,105,108,56,54,49,32,108,56,54,50,41,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,19),40,109,97,112,42,32,112,114,111,99,56,54,51,32,108,56,54,52,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,13),40,108,111,111,107,117,112,32,118,57,51,54,41,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,11),40,103,57,56,51,32,118,57,56,53,41,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,57,54,55,32,103,57,55,55,57,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,35),40,102,111,108,100,32,108,108,105,115,116,115,57,53,50,32,101,120,112,115,57,53,51,32,108,108,105,115,116,115,50,57,53,52,41,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,48,50,32,103,49,48,49,50,49,48,49,54,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,108,105,115,116,115,57,51,57,32,97,99,99,57,52,48,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,11),40,103,57,50,57,32,118,57,51,49,41,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,57,49,51,32,103,57,50,51,57,50,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,108,105,115,116,115,56,57,56,32,97,99,99,56,57,57,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,56,55,53,32,103,56,56,53,56,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,25),40,97,55,52,49,51,32,102,111,114,109,56,53,50,32,114,56,53,51,32,99,56,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,18),40,97,55,57,54,50,32,103,56,52,49,56,52,50,56,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,25),40,97,55,57,51,56,32,102,111,114,109,56,50,56,32,114,56,50,57,32,99,56,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,55,57,54,32,103,56,48,54,56,49,49,32,103,56,48,55,56,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,55,54,57,32,103,55,55,57,55,56,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,25),40,97,55,57,56,48,32,102,111,114,109,55,52,54,32,114,55,52,55,32,99,55,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,25),40,97,56,50,48,56,32,102,111,114,109,55,51,56,32,114,55,51,57,32,99,55,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,25),40,97,56,50,54,49,32,102,111,114,109,55,51,48,32,114,55,51,49,32,99,55,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,12),40,103,55,49,56,32,97,50,55,50,49,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,54,57,56,32,103,55,48,56,55,49,51,32,103,55,48,57,55,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,54,55,49,32,103,54,56,49,54,56,54,32,103,54,56,50,54,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,54,52,52,32,103,54,53,52,54,53,57,32,103,54,53,53,54,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,6),40,103,54,51,50,41,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,54,49,54,32,103,54,50,54,54,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,6),40,103,54,48,55,41,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,53,57,49,32,103,54,48,49,54,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,53,54,55,32,103,53,55,55,53,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,53,52,51,32,103,53,53,51,53,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,25),40,97,56,51,48,54,32,102,111,114,109,53,51,49,32,114,53,51,50,32,99,53,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,115,115,53,48,51,41,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,25),40,97,56,55,57,50,32,102,111,114,109,52,56,53,32,114,52,56,54,32,99,52,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,52,53,51,32,103,52,54,51,52,54,56,32,103,52,54,52,52,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,52,50,48,32,103,52,51,48,52,51,53,32,103,52,51,49,52,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,51,56,55,32,103,51,57,55,52,48,50,32,103,51,57,56,52,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,51,53,52,32,103,51,54,52,51,54,57,32,103,51,54,53,51,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,51,50,52,32,103,51,51,52,51,51,57,32,103,51,51,53,51,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,110,51,53,48,41,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,50,55,52,32,103,50,56,52,50,56,57,32,103,50,56,53,50,57,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,51,48,49,32,103,51,49,49,51,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,6),40,103,50,54,48,41,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,52,52,32,103,50,53,52,50,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,6),40,103,50,51,53,41,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,49,57,32,103,50,50,57,50,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,49,57,53,32,103,50,48,53,50,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,25),40,97,56,57,49,51,32,102,111,114,109,49,56,54,32,114,49,56,55,32,99,49,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,25),40,97,57,53,57,57,32,102,111,114,109,49,54,56,32,114,49,54,57,32,99,49,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,25),40,97,57,55,51,54,32,102,111,114,109,49,52,54,32,114,49,52,55,32,99,49,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,7),40,97,57,56,56,50,41,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,22),40,100,111,108,111,111,112,49,51,53,32,120,49,51,57,32,120,115,49,52,48,41,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,7),40,97,57,56,56,55,41,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,7),40,97,57,57,50,48,41,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,7),40,97,57,56,55,54,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,25),40,97,57,56,53,48,32,102,111,114,109,49,49,52,32,114,49,49,53,32,99,49,49,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,25),40,97,57,57,51,57,32,102,111,114,109,49,48,55,32,114,49,48,56,32,99,49,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,22),40,97,57,57,53,55,32,102,111,114,109,57,55,32,114,57,56,32,99,57,57,41,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,23),40,97,49,48,48,53,54,32,102,111,114,109,54,55,32,114,54,56,32,99,54,57,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,22),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,52,55,32,105,52,56,41,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,20),40,97,49,48,49,57,57,32,120,50,57,32,114,51,48,32,99,51,49,41,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,22),40,97,49,48,54,52,54,32,102,111,114,109,57,32,114,49,48,32,99,49,49,41,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,20),40,97,49,48,55,53,52,32,102,111,114,109,49,32,114,50,32,99,51,41,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_chicken_syntax_toplevel)
C_externexport void C_ccall C_chicken_syntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2263)
static void C_ccall f_2263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10755)
static void C_ccall f_10755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10759)
static void C_ccall f_10759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10766)
static void C_ccall f_10766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10753)
static void C_ccall f_10753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10647)
static void C_ccall f_10647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10738)
static void C_ccall f_10738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10745)
static void C_ccall f_10745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10660)
static void C_ccall f_10660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10645)
static void C_ccall f_10645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10200)
static void C_ccall f_10200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10204)
static void C_ccall f_10204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10213)
static void C_ccall f_10213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10216)
static void C_ccall f_10216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10222)
static void C_ccall f_10222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10225)
static void C_ccall f_10225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10228)
static void C_ccall f_10228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10231)
static void C_ccall f_10231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10641)
static void C_ccall f_10641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10601)
static void C_ccall f_10601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10633)
static void C_ccall f_10633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10593)
static void C_ccall f_10593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10549)
static void C_ccall f_10549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10260)
static void C_fcall f_10260(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10270)
static void C_ccall f_10270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10537)
static void C_ccall f_10537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10273)
static void C_ccall f_10273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10533)
static void C_ccall f_10533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10276)
static void C_ccall f_10276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10323)
static void C_fcall f_10323(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10287)
static void C_ccall f_10287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10258)
static void C_ccall f_10258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10254)
static void C_ccall f_10254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10198)
static void C_ccall f_10198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10057)
static void C_ccall f_10057(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10061)
static void C_ccall f_10061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10064)
static void C_ccall f_10064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10067)
static void C_ccall f_10067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10103)
static void C_ccall f_10103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10118)
static void C_fcall f_10118(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10172)
static void C_ccall f_10172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10133)
static void C_ccall f_10133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10096)
static void C_ccall f_10096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10055)
static void C_ccall f_10055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9958)
static void C_ccall f_9958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9962)
static void C_ccall f_9962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9965)
static void C_ccall f_9965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9968)
static void C_ccall f_9968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10047)
static void C_ccall f_10047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9956)
static void C_ccall f_9956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9940)
static void C_ccall f_9940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9948)
static void C_ccall f_9948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9938)
static void C_ccall f_9938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9851)
static void C_ccall f_9851(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9855)
static void C_ccall f_9855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9858)
static void C_ccall f_9858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9861)
static void C_ccall f_9861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9927)
static void C_ccall f_9927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9864)
static void C_ccall f_9864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9877)
static void C_ccall f_9877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9921)
static void C_ccall f_9921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9888)
static void C_ccall f_9888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9896)
static void C_ccall f_9896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9898)
static void C_fcall f_9898(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9915)
static void C_ccall f_9915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9883)
static void C_ccall f_9883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9875)
static void C_ccall f_9875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9871)
static void C_ccall f_9871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9849)
static void C_ccall f_9849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2284)
static void C_ccall f_2284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9737)
static void C_ccall f_9737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9741)
static void C_ccall f_9741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9750)
static void C_ccall f_9750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9753)
static void C_ccall f_9753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9756)
static void C_fcall f_9756(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9816)
static void C_ccall f_9816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9791)
static void C_ccall f_9791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9735)
static void C_ccall f_9735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9600)
static void C_ccall f_9600(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9604)
static void C_ccall f_9604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9616)
static void C_ccall f_9616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9619)
static void C_ccall f_9619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9622)
static void C_ccall f_9622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9669)
static void C_ccall f_9669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9598)
static void C_ccall f_9598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8914)
static void C_ccall f_8914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8918)
static void C_ccall f_8918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9561)
static void C_fcall f_9561(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9590)
static void C_ccall f_9590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8927)
static void C_ccall f_8927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9517)
static void C_fcall f_9517(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9555)
static void C_ccall f_9555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9544)
static void C_fcall f_9544(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9552)
static void C_ccall f_9552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8930)
static void C_ccall f_8930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9473)
static void C_fcall f_9473(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9511)
static void C_ccall f_9511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9500)
static void C_fcall f_9500(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9508)
static void C_ccall f_9508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8933)
static void C_ccall f_8933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8936)
static void C_ccall f_8936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8939)
static void C_ccall f_8939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9438)
static void C_fcall f_9438(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9467)
static void C_ccall f_9467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9387)
static void C_ccall f_9387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9389)
static void C_fcall f_9389(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9422)
static void C_ccall f_9422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9402)
static void C_fcall f_9402(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9298)
static void C_ccall f_9298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9365)
static void C_fcall f_9365(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9379)
static void C_ccall f_9379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9310)
static void C_ccall f_9310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9312)
static void C_fcall f_9312(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9345)
static void C_ccall f_9345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9325)
static void C_fcall f_9325(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9306)
static void C_ccall f_9306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9302)
static void C_ccall f_9302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8950)
static void C_ccall f_8950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9234)
static void C_fcall f_9234(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9247)
static void C_fcall f_9247(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9154)
static void C_ccall f_9154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9172)
static void C_fcall f_9172(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9185)
static void C_fcall f_9185(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9162)
static void C_ccall f_9162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9158)
static void C_ccall f_9158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9150)
static void C_ccall f_9150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9142)
static void C_ccall f_9142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9074)
static void C_fcall f_9074(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9087)
static void C_fcall f_9087(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8994)
static void C_ccall f_8994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9012)
static void C_fcall f_9012(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9025)
static void C_fcall f_9025(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9002)
static void C_ccall f_9002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8998)
static void C_ccall f_8998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8990)
static void C_ccall f_8990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8912)
static void C_ccall f_8912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8793)
static void C_ccall f_8793(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8797)
static void C_ccall f_8797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8803)
static void C_ccall f_8803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8904)
static void C_ccall f_8904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8809)
static void C_ccall f_8809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8812)
static void C_ccall f_8812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8815)
static void C_ccall f_8815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8855)
static void C_fcall f_8855(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8878)
static void C_ccall f_8878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8885)
static void C_ccall f_8885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8892)
static void C_ccall f_8892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8868)
static void C_ccall f_8868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8818)
static void C_ccall f_8818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8791)
static void C_ccall f_8791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8307)
static void C_ccall f_8307(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8311)
static void C_ccall f_8311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8320)
static void C_ccall f_8320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8323)
static void C_ccall f_8323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8326)
static void C_ccall f_8326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8754)
static void C_fcall f_8754(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8783)
static void C_ccall f_8783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8329)
static void C_ccall f_8329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8719)
static void C_fcall f_8719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8748)
static void C_ccall f_8748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8332)
static void C_ccall f_8332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8675)
static void C_fcall f_8675(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8713)
static void C_ccall f_8713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8702)
static void C_fcall f_8702(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8710)
static void C_ccall f_8710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8335)
static void C_ccall f_8335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8631)
static void C_fcall f_8631(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8669)
static void C_ccall f_8669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8658)
static void C_fcall f_8658(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8666)
static void C_ccall f_8666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8338)
static void C_ccall f_8338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8582)
static void C_fcall f_8582(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8615)
static void C_ccall f_8615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8595)
static void C_fcall f_8595(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8527)
static void C_ccall f_8527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8533)
static void C_fcall f_8533(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8566)
static void C_ccall f_8566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8546)
static void C_fcall f_8546(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8531)
static void C_ccall f_8531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8349)
static void C_ccall f_8349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8423)
static void C_fcall f_8423(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8436)
static void C_fcall f_8436(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8454)
static C_word C_fcall f_8454(C_word *a,C_word t0,C_word t1,C_word t2);
C_noret_decl(f_8421)
static void C_ccall f_8421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8417)
static void C_ccall f_8417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8397)
static void C_ccall f_8397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8305)
static void C_ccall f_8305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8262)
static void C_ccall f_8262(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8266)
static void C_ccall f_8266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8273)
static void C_ccall f_8273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8293)
static void C_ccall f_8293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8297)
static void C_ccall f_8297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8260)
static void C_ccall f_8260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8209)
static void C_ccall f_8209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8213)
static void C_ccall f_8213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8220)
static void C_ccall f_8220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8248)
static void C_ccall f_8248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8252)
static void C_ccall f_8252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8207)
static void C_ccall f_8207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7981)
static void C_ccall f_7981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7985)
static void C_ccall f_7985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7994)
static void C_ccall f_7994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8166)
static void C_fcall f_8166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8195)
static void C_ccall f_8195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8063)
static void C_ccall f_8063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8096)
static void C_fcall f_8096(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8109)
static void C_fcall f_8109(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8094)
static void C_ccall f_8094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8090)
static void C_ccall f_8090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7979)
static void C_ccall f_7979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7939)
static void C_ccall f_7939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7943)
static void C_ccall f_7943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7963)
static void C_ccall f_7963(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7971)
static void C_ccall f_7971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7946)
static void C_ccall f_7946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7953)
static void C_ccall f_7953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7957)
static void C_ccall f_7957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7937)
static void C_ccall f_7937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7414)
static void C_ccall f_7414(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7418)
static void C_ccall f_7418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7427)
static void C_ccall f_7427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7430)
static void C_ccall f_7430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7900)
static void C_fcall f_7900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7929)
static void C_ccall f_7929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7505)
static void C_ccall f_7505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7860)
static void C_fcall f_7860(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7873)
static void C_ccall f_7873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7508)
static void C_ccall f_7508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7812)
static void C_fcall f_7812(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7854)
static void C_ccall f_7854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7839)
static void C_fcall f_7839(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7851)
static void C_ccall f_7851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7511)
static void C_ccall f_7511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7766)
static void C_fcall f_7766(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7799)
static void C_ccall f_7799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7806)
static void C_ccall f_7806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7523)
static void C_ccall f_7523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7726)
static void C_fcall f_7726(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7530)
static void C_ccall f_7530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7532)
static void C_fcall f_7532(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7720)
static void C_ccall f_7720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7604)
static void C_fcall f_7604(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7686)
static void C_ccall f_7686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7643)
static void C_ccall f_7643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7623)
static void C_ccall f_7623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7556)
static void C_fcall f_7556(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7594)
static void C_ccall f_7594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7583)
static void C_fcall f_7583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7591)
static void C_ccall f_7591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7550)
static void C_ccall f_7550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7554)
static void C_ccall f_7554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7512)
static void C_ccall f_7512(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7463)
static void C_fcall f_7463(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7486)
static void C_ccall f_7486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7490)
static void C_ccall f_7490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7432)
static void C_fcall f_7432(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7453)
static void C_ccall f_7453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7412)
static void C_ccall f_7412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7342)
static void C_ccall f_7342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7346)
static void C_ccall f_7346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7355)
static void C_ccall f_7355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7358)
static void C_ccall f_7358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7363)
static void C_fcall f_7363(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7400)
static void C_ccall f_7400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7381)
static void C_ccall f_7381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7340)
static void C_ccall f_7340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6971)
static void C_ccall f_6971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6975)
static void C_ccall f_6975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6984)
static void C_ccall f_6984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6987)
static void C_ccall f_6987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7298)
static void C_fcall f_7298(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7296)
static void C_ccall f_7296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6990)
static void C_ccall f_6990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7246)
static void C_fcall f_7246(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7288)
static void C_ccall f_7288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7273)
static void C_fcall f_7273(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7285)
static void C_ccall f_7285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7281)
static void C_ccall f_7281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7206)
static void C_fcall f_7206(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7013)
static void C_ccall f_7013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7027)
static void C_fcall f_7027(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7200)
static void C_ccall f_7200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7054)
static void C_fcall f_7054(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7152)
static void C_fcall f_7152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7082)
static void C_ccall f_7082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7096)
static void C_fcall f_7096(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7123)
static C_word C_fcall f_7123(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_7090)
static void C_ccall f_7090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7086)
static void C_ccall f_7086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7021)
static void C_ccall f_7021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7025)
static void C_ccall f_7025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7017)
static void C_ccall f_7017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6994)
static C_word C_fcall f_6994(C_word t0,C_word t1);
C_noret_decl(f_6969)
static void C_ccall f_6969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6965)
static void C_ccall f_6965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6888)
static void C_ccall f_6888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6892)
static void C_ccall f_6892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6895)
static void C_ccall f_6895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6933)
static void C_ccall f_6933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6886)
static void C_ccall f_6886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6783)
static void C_ccall f_6783(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6787)
static void C_ccall f_6787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6874)
static void C_ccall f_6874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6789)
static void C_fcall f_6789(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6793)
static void C_ccall f_6793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6850)
static void C_ccall f_6850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6802)
static void C_fcall f_6802(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6824)
static void C_ccall f_6824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6814)
static void C_fcall f_6814(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6805)
static void C_ccall f_6805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6781)
static void C_ccall f_6781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6620)
static void C_ccall f_6620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6624)
static void C_ccall f_6624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6633)
static void C_ccall f_6633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6641)
static void C_fcall f_6641(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6686)
static void C_ccall f_6686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6753)
static void C_ccall f_6753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6715)
static void C_ccall f_6715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6655)
static void C_ccall f_6655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6659)
static void C_ccall f_6659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6618)
static void C_ccall f_6618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6420)
static void C_ccall f_6420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6424)
static void C_ccall f_6424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6433)
static void C_ccall f_6433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6439)
static void C_ccall f_6439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6442)
static void C_ccall f_6442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6445)
static void C_ccall f_6445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6452)
static void C_ccall f_6452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6470)
static void C_fcall f_6470(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6486)
static void C_ccall f_6486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6492)
static void C_ccall f_6492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6552)
static void C_fcall f_6552(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6579)
static C_word C_fcall f_6579(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6546)
static void C_ccall f_6546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6534)
static void C_ccall f_6534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6530)
static void C_ccall f_6530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6499)
static void C_ccall f_6499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6468)
static void C_ccall f_6468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6418)
static void C_ccall f_6418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6414)
static void C_ccall f_6414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6410)
static void C_ccall f_6410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6361)
static void C_fcall f_6361(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6390)
static void C_ccall f_6390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6317)
static void C_fcall f_6317(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6355)
static void C_ccall f_6355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6344)
static void C_fcall f_6344(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6171)
static void C_ccall f_6171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6282)
static void C_fcall f_6282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6174)
static void C_ccall f_6174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6177)
static void C_ccall f_6177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6180)
static void C_ccall f_6180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6238)
static void C_fcall f_6238(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6276)
static void C_ccall f_6276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6265)
static void C_fcall f_6265(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6183)
static void C_ccall f_6183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6189)
static void C_ccall f_6189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6196)
static void C_ccall f_6196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6156)
static void C_fcall f_6156(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6168)
static void C_ccall f_6168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6164)
static void C_ccall f_6164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5948)
static void C_fcall f_5948(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5954)
static void C_fcall f_5954(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6142)
static void C_ccall f_6142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6130)
static void C_ccall f_6130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6114)
static void C_ccall f_6114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6028)
static void C_ccall f_6028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6016)
static void C_ccall f_6016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5851)
static void C_fcall f_5851(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5859)
static void C_ccall f_5859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5863)
static void C_ccall f_5863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5869)
static void C_fcall f_5869(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5922)
static void C_ccall f_5922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5938)
static void C_ccall f_5938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5934)
static void C_ccall f_5934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5890)
static void C_ccall f_5890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5817)
static void C_ccall f_5817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5813)
static void C_ccall f_5813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5809)
static void C_ccall f_5809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5606)
static void C_ccall f_5606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5609)
static void C_ccall f_5609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5654)
static void C_ccall f_5654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5742)
static void C_ccall f_5742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5600)
static void C_ccall f_5600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5288)
static void C_ccall f_5288(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5292)
static void C_ccall f_5292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5304)
static void C_ccall f_5304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5307)
static void C_ccall f_5307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5313)
static void C_ccall f_5313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5316)
static void C_ccall f_5316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5319)
static void C_ccall f_5319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5340)
static void C_fcall f_5340(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5568)
static void C_ccall f_5568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5286)
static void C_ccall f_5286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5278)
static void C_ccall f_5278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5274)
static void C_ccall f_5274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4781)
static void C_ccall f_4781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5189)
static void C_fcall f_5189(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5226)
static void C_ccall f_5226(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5183)
static void C_ccall f_5183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4787)
static void C_ccall f_4787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4879)
static void C_fcall f_4879(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4979)
static void C_fcall f_4979(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5127)
static void C_ccall f_5127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5047)
static void C_ccall f_5047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5066)
static void C_ccall f_5066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5036)
static void C_ccall f_5036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4907)
static void C_ccall f_4907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4930)
static void C_fcall f_4930(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4943)
static void C_fcall f_4943(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4893)
static void C_ccall f_4893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4887)
static void C_ccall f_4887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4746)
static void C_fcall f_4746(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4752)
static void C_fcall f_4752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4766)
static void C_ccall f_4766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4738)
static void C_ccall f_4738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2347)
static void C_ccall f_2347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4632)
static void C_ccall f_4632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4424)
static void C_ccall f_4424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4428)
static void C_ccall f_4428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4437)
static void C_ccall f_4437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4410)
static void C_ccall f_4410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4008)
static void C_ccall f_4008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4023)
static void C_ccall f_4023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4026)
static void C_ccall f_4026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4275)
static void C_ccall f_4275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4309)
static void C_fcall f_4309(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4028)
static void C_fcall f_4028(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4152)
static void C_fcall f_4152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4179)
static C_word C_fcall f_4179(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4150)
static void C_ccall f_4150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2353)
static void C_ccall f_2353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3552)
static void C_ccall f_3552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3938)
static void C_fcall f_3938(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3891)
static void C_fcall f_3891(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3918)
static C_word C_fcall f_3918(C_word t0,C_word t1);
C_noret_decl(f_3889)
static void C_ccall f_3889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3602)
static void C_fcall f_3602(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3628)
static void C_fcall f_3628(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3664)
static void C_fcall f_3664(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3640)
static void C_ccall f_3640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3520)
static void C_ccall f_3520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3337)
static void C_ccall f_3337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3343)
static void C_ccall f_3343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3346)
static void C_ccall f_3346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3355)
static void C_fcall f_3355(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3417)
static void C_ccall f_3417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3328)
static void C_ccall f_3328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2359)
static void C_ccall f_2359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_ccall f_3112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_fcall f_3124(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3137)
static void C_ccall f_3137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3097)
static void C_ccall f_3097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2362)
static void C_ccall f_2362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2828)
static void C_ccall f_2828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_fcall f_2846(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2992)
static void C_fcall f_2992(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11150)
static void C_ccall f11150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11146)
static void C_ccall f11146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2856)
static void C_fcall f_2856(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2704)
static void C_ccall f_2704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2655)
static void C_ccall f_2655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2464)
static void C_ccall f_2464(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2474)
static void C_fcall f_2474(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2548)
static void C_fcall f_2548(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2561)
static void C_ccall f_2561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2380)
static void C_ccall f_2380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2386)
static void C_ccall f_2386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2392)
static void C_ccall f_2392(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_10260)
static void C_fcall trf_10260(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10260(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10260(t0,t1,t2,t3);}

C_noret_decl(trf_10323)
static void C_fcall trf_10323(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10323(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10323(t0,t1);}

C_noret_decl(trf_10118)
static void C_fcall trf_10118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10118(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10118(t0,t1);}

C_noret_decl(trf_9898)
static void C_fcall trf_9898(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9898(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9898(t0,t1,t2,t3);}

C_noret_decl(trf_9756)
static void C_fcall trf_9756(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9756(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9756(t0,t1);}

C_noret_decl(trf_9561)
static void C_fcall trf_9561(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9561(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9561(t0,t1,t2);}

C_noret_decl(trf_9517)
static void C_fcall trf_9517(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9517(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9517(t0,t1,t2);}

C_noret_decl(trf_9544)
static void C_fcall trf_9544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9544(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9544(t0,t1);}

C_noret_decl(trf_9473)
static void C_fcall trf_9473(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9473(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9473(t0,t1,t2);}

C_noret_decl(trf_9500)
static void C_fcall trf_9500(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9500(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9500(t0,t1);}

C_noret_decl(trf_9438)
static void C_fcall trf_9438(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9438(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9438(t0,t1,t2);}

C_noret_decl(trf_9389)
static void C_fcall trf_9389(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9389(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9389(t0,t1,t2,t3);}

C_noret_decl(trf_9402)
static void C_fcall trf_9402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9402(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9402(t0,t1);}

C_noret_decl(trf_9365)
static void C_fcall trf_9365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9365(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9365(t0,t1,t2);}

C_noret_decl(trf_9312)
static void C_fcall trf_9312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9312(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9312(t0,t1,t2,t3);}

C_noret_decl(trf_9325)
static void C_fcall trf_9325(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9325(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9325(t0,t1);}

C_noret_decl(trf_9234)
static void C_fcall trf_9234(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9234(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9234(t0,t1,t2,t3);}

C_noret_decl(trf_9247)
static void C_fcall trf_9247(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9247(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9247(t0,t1);}

C_noret_decl(trf_9172)
static void C_fcall trf_9172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9172(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9172(t0,t1,t2,t3);}

C_noret_decl(trf_9185)
static void C_fcall trf_9185(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9185(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9185(t0,t1);}

C_noret_decl(trf_9074)
static void C_fcall trf_9074(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9074(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9074(t0,t1,t2,t3);}

C_noret_decl(trf_9087)
static void C_fcall trf_9087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9087(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9087(t0,t1);}

C_noret_decl(trf_9012)
static void C_fcall trf_9012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9012(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9012(t0,t1,t2,t3);}

C_noret_decl(trf_9025)
static void C_fcall trf_9025(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9025(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9025(t0,t1);}

C_noret_decl(trf_8855)
static void C_fcall trf_8855(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8855(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8855(t0,t1,t2);}

C_noret_decl(trf_8754)
static void C_fcall trf_8754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8754(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8754(t0,t1,t2);}

C_noret_decl(trf_8719)
static void C_fcall trf_8719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8719(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8719(t0,t1,t2);}

C_noret_decl(trf_8675)
static void C_fcall trf_8675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8675(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8675(t0,t1,t2);}

C_noret_decl(trf_8702)
static void C_fcall trf_8702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8702(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8702(t0,t1);}

C_noret_decl(trf_8631)
static void C_fcall trf_8631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8631(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8631(t0,t1,t2);}

C_noret_decl(trf_8658)
static void C_fcall trf_8658(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8658(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8658(t0,t1);}

C_noret_decl(trf_8582)
static void C_fcall trf_8582(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8582(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8582(t0,t1,t2,t3);}

C_noret_decl(trf_8595)
static void C_fcall trf_8595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8595(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8595(t0,t1);}

C_noret_decl(trf_8533)
static void C_fcall trf_8533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8533(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8533(t0,t1,t2,t3);}

C_noret_decl(trf_8546)
static void C_fcall trf_8546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8546(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8546(t0,t1);}

C_noret_decl(trf_8423)
static void C_fcall trf_8423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8423(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8423(t0,t1,t2,t3);}

C_noret_decl(trf_8436)
static void C_fcall trf_8436(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8436(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8436(t0,t1);}

C_noret_decl(trf_8166)
static void C_fcall trf_8166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8166(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8166(t0,t1,t2);}

C_noret_decl(trf_8096)
static void C_fcall trf_8096(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8096(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8096(t0,t1,t2,t3);}

C_noret_decl(trf_8109)
static void C_fcall trf_8109(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8109(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8109(t0,t1);}

C_noret_decl(trf_7900)
static void C_fcall trf_7900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7900(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7900(t0,t1,t2);}

C_noret_decl(trf_7860)
static void C_fcall trf_7860(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7860(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7860(t0,t1,t2,t3);}

C_noret_decl(trf_7812)
static void C_fcall trf_7812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7812(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7812(t0,t1,t2);}

C_noret_decl(trf_7839)
static void C_fcall trf_7839(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7839(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7839(t0,t1,t2);}

C_noret_decl(trf_7766)
static void C_fcall trf_7766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7766(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7766(t0,t1,t2,t3);}

C_noret_decl(trf_7726)
static void C_fcall trf_7726(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7726(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7726(t0,t1,t2);}

C_noret_decl(trf_7532)
static void C_fcall trf_7532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7532(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7532(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7604)
static void C_fcall trf_7604(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7604(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7604(t0,t1);}

C_noret_decl(trf_7556)
static void C_fcall trf_7556(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7556(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7556(t0,t1,t2);}

C_noret_decl(trf_7583)
static void C_fcall trf_7583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7583(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7583(t0,t1,t2);}

C_noret_decl(trf_7463)
static void C_fcall trf_7463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7463(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7463(t0,t1,t2,t3);}

C_noret_decl(trf_7432)
static void C_fcall trf_7432(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7432(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7432(t0,t1,t2,t3);}

C_noret_decl(trf_7363)
static void C_fcall trf_7363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7363(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7363(t0,t1,t2);}

C_noret_decl(trf_7298)
static void C_fcall trf_7298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7298(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7298(t0,t1,t2);}

C_noret_decl(trf_7246)
static void C_fcall trf_7246(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7246(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7246(t0,t1,t2);}

C_noret_decl(trf_7273)
static void C_fcall trf_7273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7273(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7273(t0,t1,t2);}

C_noret_decl(trf_7206)
static void C_fcall trf_7206(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7206(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7206(t0,t1,t2);}

C_noret_decl(trf_7027)
static void C_fcall trf_7027(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7027(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7027(t0,t1,t2);}

C_noret_decl(trf_7054)
static void C_fcall trf_7054(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7054(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7054(t0,t1,t2);}

C_noret_decl(trf_7152)
static void C_fcall trf_7152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7152(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7152(t0,t1,t2);}

C_noret_decl(trf_7096)
static void C_fcall trf_7096(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7096(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7096(t0,t1,t2);}

C_noret_decl(trf_6789)
static void C_fcall trf_6789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6789(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6789(t0,t1,t2,t3);}

C_noret_decl(trf_6802)
static void C_fcall trf_6802(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6802(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6802(t0,t1);}

C_noret_decl(trf_6814)
static void C_fcall trf_6814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6814(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6814(t0,t1);}

C_noret_decl(trf_6641)
static void C_fcall trf_6641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6641(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6641(t0,t1,t2);}

C_noret_decl(trf_6470)
static void C_fcall trf_6470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6470(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6470(t0,t1,t2);}

C_noret_decl(trf_6552)
static void C_fcall trf_6552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6552(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6552(t0,t1,t2);}

C_noret_decl(trf_6361)
static void C_fcall trf_6361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6361(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6361(t0,t1,t2);}

C_noret_decl(trf_6317)
static void C_fcall trf_6317(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6317(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6317(t0,t1,t2);}

C_noret_decl(trf_6344)
static void C_fcall trf_6344(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6344(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6344(t0,t1,t2);}

C_noret_decl(trf_6282)
static void C_fcall trf_6282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6282(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6282(t0,t1,t2);}

C_noret_decl(trf_6238)
static void C_fcall trf_6238(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6238(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6238(t0,t1,t2);}

C_noret_decl(trf_6265)
static void C_fcall trf_6265(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6265(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6265(t0,t1,t2);}

C_noret_decl(trf_6156)
static void C_fcall trf_6156(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6156(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6156(t0,t1,t2);}

C_noret_decl(trf_5948)
static void C_fcall trf_5948(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5948(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5948(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5954)
static void C_fcall trf_5954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5954(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5954(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5851)
static void C_fcall trf_5851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5851(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5851(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5869)
static void C_fcall trf_5869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5869(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5869(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5340)
static void C_fcall trf_5340(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5340(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5340(t0,t1,t2,t3);}

C_noret_decl(trf_5189)
static void C_fcall trf_5189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5189(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5189(t0,t1,t2);}

C_noret_decl(trf_4879)
static void C_fcall trf_4879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4879(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4879(t0,t1);}

C_noret_decl(trf_4979)
static void C_fcall trf_4979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4979(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4979(t0,t1,t2,t3);}

C_noret_decl(trf_4930)
static void C_fcall trf_4930(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4930(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4930(t0,t1,t2,t3);}

C_noret_decl(trf_4943)
static void C_fcall trf_4943(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4943(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4943(t0,t1);}

C_noret_decl(trf_4746)
static void C_fcall trf_4746(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4746(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4746(t0,t1,t2);}

C_noret_decl(trf_4752)
static void C_fcall trf_4752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4752(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4752(t0,t1,t2);}

C_noret_decl(trf_4309)
static void C_fcall trf_4309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4309(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4309(t0,t1,t2);}

C_noret_decl(trf_4028)
static void C_fcall trf_4028(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4028(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4028(t0,t1,t2);}

C_noret_decl(trf_4152)
static void C_fcall trf_4152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4152(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4152(t0,t1,t2);}

C_noret_decl(trf_3938)
static void C_fcall trf_3938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3938(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3938(t0,t1,t2);}

C_noret_decl(trf_3891)
static void C_fcall trf_3891(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3891(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3891(t0,t1,t2);}

C_noret_decl(trf_3602)
static void C_fcall trf_3602(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3602(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3602(t0,t1,t2,t3);}

C_noret_decl(trf_3628)
static void C_fcall trf_3628(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3628(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3628(t0,t1);}

C_noret_decl(trf_3664)
static void C_fcall trf_3664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3664(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3664(t0,t1);}

C_noret_decl(trf_3355)
static void C_fcall trf_3355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3355(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3355(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3124)
static void C_fcall trf_3124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3124(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3124(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2846)
static void C_fcall trf_2846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2846(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2846(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2992)
static void C_fcall trf_2992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2992(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2992(t0,t1);}

C_noret_decl(trf_2856)
static void C_fcall trf_2856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2856(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2856(t0,t1);}

C_noret_decl(trf_2474)
static void C_fcall trf_2474(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2474(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2474(t0,t1);}

C_noret_decl(trf_2548)
static void C_fcall trf_2548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2548(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2548(t0,t1);}

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
if(!C_demand_2(3380)){
C_save(t1);
C_rereclaim2(3380*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,255);
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
lf[16]=C_h_intern(&lf[16],24,"\004corelet-compiler-syntax");
lf[17]=C_h_intern(&lf[17],25,"\003syssyntax-rules-mismatch");
lf[18]=C_h_intern(&lf[18],9,"\003syslist\077");
lf[19]=C_h_intern(&lf[19],22,"define-compiler-syntax");
lf[20]=C_h_intern(&lf[20],27,"\004coredefine-compiler-syntax");
lf[21]=C_h_intern(&lf[21],6,"lambda");
lf[22]=C_h_intern(&lf[22],3,"use");
lf[23]=C_h_intern(&lf[23],22,"\004corerequire-extension");
lf[24]=C_h_intern(&lf[24],16,"\003syscheck-syntax");
lf[25]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\000");
lf[26]=C_h_intern(&lf[26],22,"define-compiled-syntax");
lf[27]=C_h_intern(&lf[27],10,"\003sysappend");
lf[28]=C_h_intern(&lf[28],13,"define-syntax");
lf[29]=C_h_intern(&lf[29],17,"define-for-syntax");
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
lf[240]=C_h_intern(&lf[240],1,"r");
lf[241]=C_h_intern(&lf[241],7,"unquote");
lf[242]=C_h_intern(&lf[242],4,"head");
lf[243]=C_h_intern(&lf[243],4,"form");
lf[244]=C_h_intern(&lf[244],16,"unquote-splicing");
lf[245]=C_h_intern(&lf[245],10,"quasiquote");
lf[246]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[247]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[248]=C_h_intern(&lf[248],15,"define-constant");
lf[249]=C_h_intern(&lf[249],20,"\004coredefine-constant");
lf[250]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[251]=C_h_intern(&lf[251],21,"\003sysmacro-environment");
lf[252]=C_h_intern(&lf[252],11,"\003sysprovide");
lf[253]=C_h_intern(&lf[253],19,"chicken-more-macros");
lf[254]=C_h_intern(&lf[254],14,"chicken-syntax");
C_register_lf2(lf,255,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2259,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 35   ##sys#provide */
t3=*((C_word*)lf[252]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[253],lf[254]);}

/* k2257 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2263,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 43   ##sys#macro-environment */
t3=*((C_word*)lf[251]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2261 in k2257 */
static void C_ccall f_2263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2266,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10753,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10755,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 48   ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a10754 in k2261 in k2257 */
static void C_ccall f_10755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10755,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10759,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 50   ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[248],t2,lf[250]);}

/* k10757 in a10754 in k2261 in k2257 */
static void C_ccall f_10759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10766,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k10764 in k10757 in a10754 in k2261 in k2257 */
static void C_ccall f_10766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10766,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[249],t1));}

/* k10751 in k2261 in k2257 */
static void C_ccall f_10753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 45   ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[248],C_SCHEME_END_OF_LIST,t1);}

/* k2264 in k2261 in k2257 */
static void C_ccall f_2266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10645,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10647,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 56   ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a10646 in k2264 in k2261 in k2257 */
static void C_ccall f_10647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10647,5,t0,t1,t2,t3,t4);}
t5=C_i_cadr(t2);
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10660,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 60   ##sys#check-syntax */
t7=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[159],t2,lf[246]);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10738,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 65   ##sys#check-syntax */
t7=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[159],t2,lf[247]);}}

/* k10736 in a10646 in k2264 in k2261 in k2257 */
static void C_ccall f_10738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10738,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10745,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k10743 in k10736 in a10646 in k2264 in k2261 in k2257 */
static void C_ccall f_10745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10745,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[162],t1));}

/* k10658 in a10646 in k2264 in k2261 in k2257 */
static void C_ccall f_10660(C_word c,C_word t0,C_word t1){
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
C_word ab[66],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10660,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,lf[21],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,lf[41],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,lf[240],t5);
t7=C_a_i_list(&a,2,lf[241],t6);
t8=C_a_i_cons(&a,2,lf[242],C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,lf[107],t8);
t10=C_a_i_list(&a,2,lf[241],t9);
t11=C_a_i_cons(&a,2,lf[243],C_SCHEME_END_OF_LIST);
t12=C_a_i_cons(&a,2,lf[107],t11);
t13=C_a_i_list(&a,2,lf[244],t12);
t14=C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
t15=C_a_i_cons(&a,2,t10,t14);
t16=C_a_i_cons(&a,2,t7,t15);
t17=C_a_i_list(&a,2,lf[245],t16);
t18=C_a_i_cons(&a,2,t17,C_SCHEME_END_OF_LIST);
t19=C_a_i_cons(&a,2,t2,t18);
t20=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,C_a_i_cons(&a,2,lf[162],t19));}

/* k10643 in k2264 in k2261 in k2257 */
static void C_ccall f_10645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 53   ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[159],C_SCHEME_END_OF_LIST,t1);}

/* k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10198,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10200,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 70   ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10200,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10204,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 72   ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[232],t2,lf[239]);}

/* k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10204,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 75   symbol->string */
t5=*((C_word*)lf[141]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10216,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 76   r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[41]);}

/* k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10216,2,t0,t1);}
t2=C_i_memq(lf[71],*((C_word*)lf[72]+1));
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 78   r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[55]);}

/* k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 79   r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[30]);}

/* k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10225,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 80   r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[67]);}

/* k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10231,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 81   r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10601,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10641,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 84   string-append */
t4=*((C_word*)lf[140]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[238],((C_word*)t0)[2]);}

/* k10639 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 84   string->symbol */
t2=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10601,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[11],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[10],t2);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[7],a[10]=t1,a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=t3,tmp=(C_word)a,a+=14,tmp);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);}

/* k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10633(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10633,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[13],t1);
t3=C_a_i_cons(&a,2,lf[69],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[12],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[11],t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,((C_word*)t0)[10],t7);
t9=C_a_i_cons(&a,2,((C_word*)t0)[9],t8);
t10=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10549,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t9,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10593,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 87   string-append */
t12=*((C_word*)lf[140]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,((C_word*)t0)[2],lf[237]);}

/* k10591 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 87   string->symbol */
t2=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10549(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10549,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[80],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[12],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,lf[41],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,lf[80],t5);
t7=C_a_i_cons(&a,2,lf[70],t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t2,t8);
t10=C_a_i_cons(&a,2,((C_word*)t0)[11],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=C_a_i_cons(&a,2,t1,t11);
t13=C_a_i_cons(&a,2,((C_word*)t0)[10],t12);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10254,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t13,tmp=(C_word)a,a+=6,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10258,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10260,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t17,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[12],a[11]=((C_word)li131),tmp=(C_word)a,a+=12,tmp));
t19=((C_word*)t17)[1];
f_10260(t19,t15,((C_word*)t0)[2],C_fix(1));}

/* mapslots in k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_10260(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10260,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t3,a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
t6=C_slot(t2,C_fix(0));
/* chicken-syntax.scm: 92   symbol->string */
t7=*((C_word*)lf[141]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}

/* k10268 in mapslots in k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_10273,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10537,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 93   string-append */
t4=*((C_word*)lf[140]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[2],lf[235],t1,lf[236]);}

/* k10535 in k10268 in mapslots in k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 93   string->symbol */
t2=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10271 in k10268 in mapslots in k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10276,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10533,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 94   string-append */
t4=*((C_word*)lf[140]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],lf[234],((C_word*)t0)[2]);}

/* k10531 in k10271 in k10268 in mapslots in k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 94   string->symbol */
t2=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10274 in k10271 in k10268 in mapslots in k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10276(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10276,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[233],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,lf[80],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[12],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,lf[80],t6);
t8=C_a_i_cons(&a,2,lf[73],t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,lf[74],t9);
t11=C_a_i_cons(&a,2,lf[233],C_SCHEME_END_OF_LIST);
t12=C_a_i_cons(&a,2,((C_word*)t0)[11],t11);
t13=C_a_i_cons(&a,2,lf[80],t12);
t14=C_a_i_cons(&a,2,lf[76],t13);
t15=C_a_i_cons(&a,2,t14,C_SCHEME_END_OF_LIST);
t16=C_a_i_cons(&a,2,t10,t15);
t17=C_a_i_cons(&a,2,t3,t16);
t18=C_a_i_cons(&a,2,((C_word*)t0)[10],t17);
t19=C_a_i_cons(&a,2,t18,C_SCHEME_END_OF_LIST);
t20=C_a_i_cons(&a,2,((C_word*)t0)[9],t19);
t21=C_a_i_cons(&a,2,((C_word*)t0)[8],t20);
t22=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10323,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t21,a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[3])){
t23=C_a_i_cons(&a,2,lf[80],C_SCHEME_END_OF_LIST);
t24=C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t25=C_a_i_cons(&a,2,((C_word*)t0)[12],t24);
t26=C_a_i_cons(&a,2,t25,C_SCHEME_END_OF_LIST);
t27=C_a_i_cons(&a,2,lf[80],t26);
t28=C_a_i_cons(&a,2,lf[73],t27);
t29=C_a_i_cons(&a,2,t28,C_SCHEME_END_OF_LIST);
t30=C_a_i_cons(&a,2,lf[74],t29);
t31=C_a_i_cons(&a,2,((C_word*)t0)[11],C_SCHEME_END_OF_LIST);
t32=C_a_i_cons(&a,2,lf[80],t31);
t33=C_a_i_cons(&a,2,lf[75],t32);
t34=C_a_i_cons(&a,2,t33,C_SCHEME_END_OF_LIST);
t35=C_a_i_cons(&a,2,t30,t34);
t36=C_a_i_cons(&a,2,t23,t35);
t37=C_a_i_cons(&a,2,((C_word*)t0)[10],t36);
t38=C_a_i_cons(&a,2,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);
t39=C_a_i_cons(&a,2,t37,t38);
t40=t22;
f_10323(t40,C_a_i_cons(&a,2,((C_word*)t0)[2],t39));}
else{
t23=C_a_i_cons(&a,2,lf[80],C_SCHEME_END_OF_LIST);
t24=C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t25=C_a_i_cons(&a,2,((C_word*)t0)[12],t24);
t26=C_a_i_cons(&a,2,t25,C_SCHEME_END_OF_LIST);
t27=C_a_i_cons(&a,2,lf[80],t26);
t28=C_a_i_cons(&a,2,lf[73],t27);
t29=C_a_i_cons(&a,2,t28,C_SCHEME_END_OF_LIST);
t30=C_a_i_cons(&a,2,lf[74],t29);
t31=C_a_i_cons(&a,2,((C_word*)t0)[11],C_SCHEME_END_OF_LIST);
t32=C_a_i_cons(&a,2,lf[80],t31);
t33=C_a_i_cons(&a,2,lf[75],t32);
t34=C_a_i_cons(&a,2,t33,C_SCHEME_END_OF_LIST);
t35=C_a_i_cons(&a,2,t30,t34);
t36=C_a_i_cons(&a,2,t23,t35);
t37=t22;
f_10323(t37,C_a_i_cons(&a,2,((C_word*)t0)[10],t36));}}

/* k10321 in k10274 in k10271 in k10268 in mapslots in k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_10323(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10323,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[8],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[6],t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10287,a[2]=t7,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_slot(((C_word*)t0)[4],C_fix(1));
t10=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm: 113  mapslots */
t11=((C_word*)((C_word*)t0)[2])[1];
f_10260(t11,t8,t9,t10);}

/* k10285 in k10321 in k10274 in k10271 in k10268 in mapslots in k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10287,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k10256 in k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k10252 in k10547 in k10631 in k10599 in k10229 in k10226 in k10223 in k10220 in k10214 in k10211 in k10202 in a10199 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10254,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k10196 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 68   ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[232],C_SCHEME_END_OF_LIST,t1);}

/* k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10055,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10057,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 118  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a10056 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10057(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10057,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10061,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 120  r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[21]);}

/* k10059 in a10056 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10064,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 121  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k10062 in k10059 in a10056 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10064,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10067,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 122  ##sys#check-syntax */
t3=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[229],((C_word*)t0)[4],lf[231]);}

/* k10065 in k10062 in k10059 in a10056 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10067,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[5]);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10096,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[5]);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10103,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 126  ##sys#check-syntax */
t4=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[229],((C_word*)t0)[5],lf[230]);}}

/* k10101 in k10065 in k10062 in k10059 in a10056 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10103,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_i_caddr(((C_word*)t0)[5]);
t4=C_i_cdddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10118,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_cdr(t2);
t7=t5;
f_10118(t7,C_i_nullp(t6));}
else{
t6=t5;
f_10118(t6,C_SCHEME_FALSE);}}

/* k10116 in k10101 in k10065 in k10062 in k10059 in a10056 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_10118(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10118,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[7]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10133,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t7=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10172,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t6=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}}

/* k10170 in k10116 in k10101 in k10065 in k10062 in k10059 in a10056 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10172,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[97],t5));}

/* k10131 in k10116 in k10101 in k10065 in k10062 in k10059 in a10056 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10133,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k10094 in k10065 in k10062 in k10059 in a10056 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10096,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[189],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[97],t5));}

/* k10053 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 115  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[229],C_SCHEME_END_OF_LIST,t1);}

/* k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2275,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9956,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9958,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 138  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9957 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9958,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9962,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 140  r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[188]);}

/* k9960 in a9957 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 141  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k9963 in k9960 in a9957 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9968,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 142  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k9966 in k9963 in k9960 in a9957 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9968,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[226],C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10047,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_END_OF_LIST);}

/* k10045 in k9966 in k9963 in k9960 in a9957 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_10047(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10047,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=C_a_i_cons(&a,2,lf[227],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,lf[228],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,lf[95],t7);
t9=C_a_i_cons(&a,2,lf[96],t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_a_i_cons(&a,2,t6,t10);
t12=C_a_i_cons(&a,2,((C_word*)t0)[5],t11);
t13=C_a_i_cons(&a,2,((C_word*)t0)[6],t12);
t14=C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
t15=C_a_i_cons(&a,2,t3,t14);
t16=C_a_i_cons(&a,2,lf[97],t15);
t17=C_a_i_cons(&a,2,t16,C_SCHEME_END_OF_LIST);
t18=C_a_i_cons(&a,2,((C_word*)t0)[4],t17);
t19=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,C_a_i_cons(&a,2,((C_word*)t0)[2],t18));}

/* k9954 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 136  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[225],C_SCHEME_END_OF_LIST,t1);}

/* k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2278,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9938,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9940,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 153  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9939 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9940,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9948,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cdr(t2);
/* ##sys#append */
t7=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}

/* k9946 in a9939 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9948,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[224],t1));}

/* k9936 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 151  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[56],C_SCHEME_END_OF_LIST,t1);}

/* k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9851,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 159  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9851(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9851,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9855,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 161  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[214],t2,lf[223]);}

/* k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9858,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-syntax.scm: 162  ##sys#resolve-include-filename */
t4=*((C_word*)lf[222]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_TRUE);}

/* k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9861,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 163  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9861,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9864,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9927,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 164  load-verbose */
t4=*((C_word*)lf[221]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k9925 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-syntax.scm: 164  print */
t2=*((C_word*)lf[218]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[219],((C_word*)t0)[2],lf[220]);}
else{
t2=((C_word*)t0)[3];
f_9864(2,t2,C_SCHEME_UNDEFINED);}}

/* k9862 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9871,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9875,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9877,a[2]=((C_word*)t0)[2],a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 166  with-input-from-file */
t5=*((C_word*)lf[217]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[2],t4);}

/* a9876 in k9862 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9877(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9877,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9883,a[2]=t3,a[3]=t5,a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9888,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9921,a[2]=t5,a[3]=t3,a[4]=((C_word)li125),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[187]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t1,t6,t7,t8);}

/* a9920 in a9876 in k9862 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9921,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[215]+1));
t3=C_mutate((C_word*)lf[215]+1 /* (set! current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a9887 in a9876 in k9862 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9896,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 169  read */
t3=*((C_word*)lf[216]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9894 in a9887 in a9876 in k9862 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9896,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9898,a[2]=t3,a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_9898(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* doloop135 in k9894 in a9887 in a9876 in k9862 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9898(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9898,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eofp(t2))){
/* chicken-syntax.scm: 172  reverse */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9915,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 169  read */
t5=*((C_word*)lf[216]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k9913 in doloop135 in k9894 in a9887 in a9876 in k9862 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9915,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_9898(t3,((C_word*)t0)[2],t1,t2);}

/* a9882 in a9876 in k9862 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9883,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[215]+1));
t3=C_mutate((C_word*)lf[215]+1 /* (set! current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k9873 in k9862 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k9869 in k9862 in k9859 in k9856 in k9853 in a9850 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9871,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k9847 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 157  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[214],C_SCHEME_END_OF_LIST,t1);}

/* k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9735,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9737,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 176  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9736 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9737,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9741,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 178  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[210],t2,lf[213]);}

/* k9739 in a9736 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9741,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9750,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 181  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[118]);}

/* k9748 in k9739 in a9736 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9753,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 182  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[41]);}

/* k9751 in k9748 in k9739 in a9736 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9756,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,lf[212],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[41],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=t2;
f_9756(t7,C_a_i_cons(&a,2,lf[128],t6));}
else{
t4=t2;
f_9756(t4,C_i_car(((C_word*)t0)[2]));}}

/* k9754 in k9751 in k9748 in k9739 in a9736 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9756(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_9756,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,lf[74],t2);
t4=C_a_i_cons(&a,2,lf[180],C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9791,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=C_i_length(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t6,C_fix(1)))){
t7=C_i_cdr(((C_word*)t0)[3]);
/* ##sys#append */
t8=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,t7,C_SCHEME_END_OF_LIST);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9816,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 192  ##sys#strip-syntax */
t8=*((C_word*)lf[211]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[6]);}}

/* k9814 in k9754 in k9751 in k9748 in k9739 in a9736 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9816,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t4,C_SCHEME_END_OF_LIST);}

/* k9789 in k9754 in k9751 in k9748 in k9739 in a9736 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9791,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=C_a_i_cons(&a,2,lf[129],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,((C_word*)t0)[2],t6));}

/* k9733 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 174  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[210],C_SCHEME_END_OF_LIST,t1);}

/* k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2287,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9598,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9600,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 197  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9599 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9600(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9600,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9604,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 199  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[205],t2,lf[209]);}

/* k9602 in a9599 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9604,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9616,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 203  r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[131]);}

/* k9614 in k9602 in a9599 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 204  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k9617 in k9614 in k9602 in a9599 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9622,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 205  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k9620 in k9617 in k9614 in k9602 in a9599 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9622(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9622,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,((C_word*)t0)[5],t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,lf[74],t7);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9669,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t1,a[6]=t8,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* ##sys#append */
t10=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}
else{
t10=C_a_i_cons(&a,2,lf[208],C_SCHEME_END_OF_LIST);
t11=C_a_i_cons(&a,2,lf[41],t10);
t12=C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=C_a_i_cons(&a,2,lf[128],t12);
t14=C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t15=C_a_i_cons(&a,2,lf[41],t14);
t16=C_a_i_cons(&a,2,t15,C_SCHEME_END_OF_LIST);
t17=C_a_i_cons(&a,2,((C_word*)t0)[6],t16);
t18=C_a_i_cons(&a,2,t13,t17);
/* ##sys#append */
t19=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t9,t18,C_SCHEME_END_OF_LIST);}}

/* k9667 in k9620 in k9617 in k9614 in k9602 in a9599 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9669(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9669,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[206],t1);
t3=C_a_i_cons(&a,2,lf[207],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[7],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[6],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,((C_word*)t0)[4],t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}

/* k9596 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 194  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[205],C_SCHEME_END_OF_LIST,t1);}

/* k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2290,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8912,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8914,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 218  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8914,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8918,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 220  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[203],t2,lf[204]);}

/* k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8918(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8918,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8927,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9561,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=((C_word)li118),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9561(t12,t8,t2);}

/* loop195 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9561(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9561,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=*((C_word*)lf[78]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9590,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g211212 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9588 in loop195 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9590(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9590,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop195208 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9561(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop195208 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9561(t6,((C_word*)t0)[3],t5);}}

/* k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8927(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8927,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9517,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li117),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_9517(t10,t6,((C_word*)t0)[3]);}

/* loop219 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9517(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9517,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9544,a[2]=((C_word*)t0)[5],a[3]=((C_word)li116),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9555,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g235236 */
t6=t3;
f_9544(t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9553 in loop219 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9555(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9555,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop219232 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9517(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop219232 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9517(t6,((C_word*)t0)[3],t5);}}

/* g235 in loop219 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9544(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9544,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9552,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 224  gensym */
t3=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9550 in g235 in loop219 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 224  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8930(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8930,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9473,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li115),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_9473(t10,t6,((C_word*)t0)[3]);}

/* loop244 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9473(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9473,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9500,a[2]=((C_word*)t0)[5],a[3]=((C_word)li114),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9511,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g260261 */
t6=t3;
f_9500(t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9509 in loop244 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9511(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9511,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop244257 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9473(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop244257 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9473(t6,((C_word*)t0)[3],t5);}}

/* g260 in loop244 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9500(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9500,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9508,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 225  gensym */
t3=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9506 in g260 in loop244 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 225  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 226  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8939,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 227  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8939(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8950,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9387,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9438,a[2]=t9,a[3]=t14,a[4]=t11,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_9438(t16,t12,((C_word*)t0)[2]);}

/* loop301 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9438(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9438,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=*((C_word*)lf[146]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9467,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g317318 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9465 in loop301 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9467(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9467,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop301314 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9438(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop301314 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9438(t6,((C_word*)t0)[3],t5);}}

/* k9385 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9387,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9389,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_9389(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop274 in k9385 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9389(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9389,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[189]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9422,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=C_slot(t2,C_fix(0));
t9=C_slot(t3,C_fix(0));
/* g294295 */
t10=t6;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9420 in loop274 in k9385 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9422,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9402,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_9402(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_9402(t5,t4);}}

/* k9400 in k9420 in loop274 in k9385 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9402(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop274288 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9389(t5,((C_word*)t0)[2],t3,t4);}

/* k9296 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9298(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9302,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9306,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9310,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t9=C_i_length(((C_word*)t0)[2]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9365,a[2]=t11,a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_9365(t13,t8,t9);}

/* loop in k9296 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9365(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_9365,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9379,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_difference(t2,C_fix(1));
/* chicken-syntax.scm: 233  loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k9377 in loop in k9296 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9379,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_SCHEME_FALSE,t1));}

/* k9308 in k9296 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9310,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9312,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_9312(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop324 in k9308 in k9296 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9312(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9312,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[189]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9345,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=C_slot(t2,C_fix(0));
t9=C_slot(t3,C_fix(0));
/* g344345 */
t10=t6;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9343 in loop324 in k9308 in k9296 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9345,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9325,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_9325(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_9325(t5,t4);}}

/* k9323 in k9343 in loop324 in k9308 in k9296 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9325(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop324338 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9312(t5,((C_word*)t0)[2],t3,t4);}

/* k9304 in k9296 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k9300 in k9296 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8950(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9154,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9234,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9234(t11,t7,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* loop354 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9234(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9234,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,lf[167],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9247,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t11,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t13=t12;
f_9247(t13,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11));}
else{
t13=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t14=t12;
f_9247(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9245 in loop354 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9247(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop354368 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9234(t5,((C_word*)t0)[2],t3,t4);}

/* k9152 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9154(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9158,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9162,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9172,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li108),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9172(t11,t7,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop387 in k9152 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9172(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9172,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,lf[167],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9185,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t11,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t13=t12;
f_9185(t13,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11));}
else{
t13=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t14=t12;
f_9185(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9183 in loop387 in k9152 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9185(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop387401 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9172(t5,((C_word*)t0)[2],t3,t4);}

/* k9160 in k9152 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9162,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[180],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k9156 in k9152 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k9148 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9150,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9142,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t3,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k9140 in k9148 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9142(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9142,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8990,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t3,a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8994,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9074,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_9074(t13,t9,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* loop420 in k9140 in k9148 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9074(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9074,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,lf[167],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9087,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t11,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t13=t12;
f_9087(t13,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11));}
else{
t13=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t14=t12;
f_9087(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9085 in loop420 in k9140 in k9148 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9087(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop420434 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9074(t5,((C_word*)t0)[2],t3,t4);}

/* k8992 in k9140 in k9148 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8994(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8994,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8998,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9002,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9012,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9012(t11,t7,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop453 in k8992 in k9140 in k9148 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9012(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9012,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,lf[167],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9025,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t11,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t13=t12;
f_9025(t13,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11));}
else{
t13=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t14=t12;
f_9025(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k9023 in loop453 in k8992 in k9140 in k9148 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_9025(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop453467 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9012(t5,((C_word*)t0)[2],t3,t4);}

/* k9000 in k8992 in k9140 in k9148 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_9002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9002,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[180],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k8996 in k8992 in k9140 in k9148 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8988 in k9140 in k9148 in k8948 in k8937 in k8934 in k8931 in k8928 in k8925 in k8916 in a8913 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8990(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8990,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[5],t5);
t7=C_a_i_cons(&a,2,lf[187],t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,((C_word*)t0)[4],t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}

/* k8910 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 216  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[203],C_SCHEME_END_OF_LIST,t1);}

/* k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8791,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8793,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 251  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8793(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8793,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8797,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 253  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[192],t2,lf[202]);}

/* k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8797,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8803,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 255  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[55]);}

/* k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8904,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k8902 in k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8904,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 257  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[201]);}

/* k8807 in k8902 in k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8809,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8812,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 258  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[200]);}

/* k8810 in k8807 in k8902 in k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8815,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 259  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[199]);}

/* k8813 in k8810 in k8807 in k8902 in k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8815(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8815,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8818,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t7,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8855,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=t7,a[8]=t3,a[9]=t10,a[10]=((C_word)li104),tmp=(C_word)a,a+=11,tmp));
t12=((C_word*)t10)[1];
f_8855(t12,t8,((C_word*)t0)[2]);}

/* loop in k8813 in k8810 in k8807 in k8902 in k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8855(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8855,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8868,a[2]=t1,a[3]=((C_word*)t0)[9],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8878,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=t2,a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 266  c */
t6=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8876 in loop in k8813 in k8810 in k8807 in k8902 in k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8878,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[12],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[11],C_fix(1));
/* chicken-syntax.scm: 270  loop */
t4=((C_word*)((C_word*)t0)[10])[1];
f_8855(t4,((C_word*)t0)[9],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8885,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 267  c */
t3=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k8883 in k8876 in loop in k8813 in k8810 in k8807 in k8902 in k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8885,2,t0,t1);}
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[10],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[9],C_fix(1));
/* chicken-syntax.scm: 270  loop */
t4=((C_word*)((C_word*)t0)[8])[1];
f_8855(t4,((C_word*)t0)[7],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8892,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 268  c */
t3=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k8890 in k8883 in k8876 in loop in k8813 in k8810 in k8807 in k8902 in k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_TRUE);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
/* chicken-syntax.scm: 270  loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8855(t4,((C_word*)t0)[3],t3);}
else{
t2=C_i_car(((C_word*)t0)[5]);
/* chicken-syntax.scm: 269  ##sys#error */
t3=*((C_word*)lf[129]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[198],t2);}}

/* k8866 in loop in k8813 in k8810 in k8807 in k8902 in k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm: 270  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8855(t3,((C_word*)t0)[2],t2);}

/* k8816 in k8813 in k8810 in k8807 in k8902 in k8801 in k8795 in a8792 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8818,2,t0,t1);}
if(C_truep(C_i_memq(lf[193],*((C_word*)lf[72]+1)))){
t2=(C_truep(((C_word*)((C_word*)t0)[6])[1])?((C_word*)((C_word*)t0)[5])[1]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[194],t3));}
else{
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[195],t3));}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)((C_word*)t0)[5])[1])?((C_word*)t0)[4]:lf[196]));}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)((C_word*)t0)[2])[1])?((C_word*)t0)[4]:lf[197]));}}

/* k8789 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 249  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[192],C_SCHEME_END_OF_LIST,t1);}

/* k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8305,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8307,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 282  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8307(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8307,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8311,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 284  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[186],t2,lf[191]);}

/* k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8311,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8320,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 287  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[190]);}

/* k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 288  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 289  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8326(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8326,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8754,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li102),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8754(t10,t6,((C_word*)t0)[2]);}

/* loop543 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8754(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8754,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=*((C_word*)lf[78]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8783,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g559560 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8781 in loop543 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8783(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8783,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop543556 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8754(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop543556 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8754(t6,((C_word*)t0)[3],t5);}}

/* k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8329(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8329,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8332,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8719,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8719(t10,t6,((C_word*)t0)[2]);}

/* loop567 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8719(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8719,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=*((C_word*)lf[146]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8748,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g583584 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8746 in loop567 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8748(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8748,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop567580 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8719(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop567580 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8719(t6,((C_word*)t0)[3],t5);}}

/* k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8332(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8332,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8675,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_8675(t10,t6,((C_word*)t0)[3]);}

/* loop591 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8675(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8675,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8702,a[2]=((C_word*)t0)[5],a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8713,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g607608 */
t6=t3;
f_8702(t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8711 in loop591 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8713(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8713,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop591604 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8675(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop591604 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8675(t6,((C_word*)t0)[3],t5);}}

/* g607 in loop591 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8702(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8702,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8710,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 292  gensym */
t3=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8708 in g607 in loop591 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 292  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8335(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8335,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8338,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8631,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_8631(t10,t6,((C_word*)t0)[3]);}

/* loop616 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8631(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8631,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8658,a[2]=((C_word*)t0)[5],a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8669,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g632633 */
t6=t3;
f_8658(t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8667 in loop616 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8669(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8669,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop616629 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8631(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop616629 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8631(t6,((C_word*)t0)[3],t5);}}

/* g632 in loop616 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8658(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8658,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8666,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 293  gensym */
t3=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8664 in g632 in loop616 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 293  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8338(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8349,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8527,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8582,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8582(t11,t7,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* loop644 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8582(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8582,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[189]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8615,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=C_slot(t2,C_fix(0));
t9=C_slot(t3,C_fix(0));
/* g664665 */
t10=t6;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8613 in loop644 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8615,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8595,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_8595(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_8595(t5,t4);}}

/* k8593 in k8613 in loop644 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8595(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop644658 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8582(t5,((C_word*)t0)[2],t3,t4);}

/* k8525 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8527(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8527,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8531,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8533,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8533(t10,t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop671 in k8525 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8533(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8533,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[189]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8566,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=C_slot(t2,C_fix(0));
t9=C_slot(t3,C_fix(0));
/* g691692 */
t10=t6;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8564 in loop671 in k8525 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8566,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8546,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_8546(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_8546(t5,t4);}}

/* k8544 in k8564 in loop671 in k8525 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8546(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop671685 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8533(t5,((C_word*)t0)[2],t3,t4);}

/* k8529 in k8525 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 294  ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8347 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8349(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8417,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8421,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8423,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word*)t0)[6],a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_8423(t11,t7,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop698 in k8347 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8423(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8423,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8454,a[2]=((C_word*)t0)[5],a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
t9=f_8454(C_a_i(&a,39),t6,t7,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8436,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t10,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t12=t11;
f_8436(t12,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t10));}
else{
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t13=t11;
f_8436(t13,t12);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8434 in loop698 in k8347 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8436(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop698712 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8423(t5,((C_word*)t0)[2],t3,t4);}

/* g718 in loop698 in k8347 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static C_word C_fcall f_8454(C_word *a,C_word t0,C_word t1,C_word t2){
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
t3=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[188],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,t1,t7);
t9=C_a_i_cons(&a,2,lf[188],C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,t2,t9);
t11=C_a_i_cons(&a,2,lf[167],t10);
t12=C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=C_a_i_cons(&a,2,t8,t12);
t14=C_a_i_cons(&a,2,t6,t13);
return(C_a_i_cons(&a,2,((C_word*)t0)[2],t14));}

/* k8419 in k8347 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k8415 in k8347 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8417(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8417,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8397,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t6,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* ##sys#append */
t8=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8395 in k8415 in k8347 in k8336 in k8333 in k8330 in k8327 in k8324 in k8321 in k8318 in k8309 in a8306 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8397(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8397,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[6],t5);
t7=C_a_i_cons(&a,2,lf[187],t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,((C_word*)t0)[5],t8);
t10=C_a_i_cons(&a,2,((C_word*)t0)[4],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=C_a_i_cons(&a,2,((C_word*)t0)[3],t11);
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_cons(&a,2,((C_word*)t0)[4],t12));}

/* k8303 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 280  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[186],C_SCHEME_END_OF_LIST,t1);}

/* k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8260,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8262,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 307  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8261 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8262(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8262,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8266,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 309  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[184],t2,lf[185]);}

/* k8264 in a8261 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 310  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k8271 in k8264 in a8261 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8273,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8293,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 311  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[55]);}

/* k8291 in k8271 in k8264 in a8261 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8297,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k8295 in k8291 in k8271 in k8264 in a8261 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8297,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k8258 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 305  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[184],C_SCHEME_END_OF_LIST,t1);}

/* k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8207,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8209,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 315  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8208 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8209,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8213,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 317  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[182],t2,lf[183]);}

/* k8211 in a8208 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 318  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k8218 in k8211 in a8208 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8220,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,lf[180],C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8248,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 320  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[55]);}

/* k8246 in k8218 in k8211 in a8208 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8248,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8252,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k8250 in k8246 in k8218 in k8211 in a8208 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8252,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k8205 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 313  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[182],C_SCHEME_END_OF_LIST,t1);}

/* k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7979,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7981,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 324  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a7980 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7981,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7985,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 326  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[175],t2,lf[181]);}

/* k7983 in a7980 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7985,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7994,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 329  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[21]);}

/* k7992 in k7983 in a7980 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7994(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7994,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,lf[180],C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t6);
t8=C_a_i_cons(&a,2,t1,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,t4,t9);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_cons(&a,2,lf[97],t10));}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
if(C_truep(C_i_nullp(t2))){
t3=C_i_car(((C_word*)t0)[4]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[167],t5));}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8063,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8166,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8166(t11,t7,((C_word*)t0)[4]);}}}

/* loop769 in k7992 in k7983 in a7980 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8166(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8166,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=*((C_word*)lf[60]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8195,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g785786 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8193 in loop769 in k7992 in k7983 in a7980 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8195(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8195,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop769782 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8166(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop769782 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8166(t6,((C_word*)t0)[3],t5);}}

/* k8061 in k7992 in k7983 in a7980 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8063(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8063,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8090,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8094,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8096,a[2]=t7,a[3]=t12,a[4]=t9,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8096(t14,t10,((C_word*)t0)[2],t1);}

/* loop796 in k8061 in k7992 in k7983 in a7980 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8096(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8096,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,lf[167],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8109,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t11,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t13=t12;
f_8109(t13,C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11));}
else{
t13=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t14=t12;
f_8109(t14,t13);}}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8107 in loop796 in k8061 in k7992 in k7983 in a7980 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_8109(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop796810 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8096(t5,((C_word*)t0)[2],t3,t4);}

/* k8092 in k8061 in k7992 in k7983 in a7980 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k8088 in k8061 in k7992 in k7983 in a7980 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_8090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8090,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[97],t5));}

/* k7977 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 322  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[175],C_SCHEME_END_OF_LIST,t1);}

/* k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7937,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7939,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 348  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a7938 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7939,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7943,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 350  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[174],t2,lf[179]);}

/* k7941 in a7938 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7963,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
/* for-each */
t5=*((C_word*)lf[178]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* a7962 in k7941 in a7938 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7963(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7963,3,t0,t1,t2);}
t3=*((C_word*)lf[176]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7971,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 351  ##sys#current-module */
t5=*((C_word*)lf[177]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k7969 in a7962 in k7941 in a7938 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g844845 */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7944 in k7941 in a7938 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7953,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 352  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[175]);}

/* k7951 in k7944 in k7941 in a7938 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7957,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k7955 in k7951 in k7944 in k7941 in a7938 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7957,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7935 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 346  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[174],C_SCHEME_END_OF_LIST,t1);}

/* k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7412,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7414,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 356  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7414(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7414,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7418,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 358  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[171],t2,lf[173]);}

/* k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7418,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7427,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 361  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[64]);}

/* k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 362  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7430(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7430,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7432,a[2]=t3,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7463,a[2]=t5,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp));
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7505,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7900,a[2]=t9,a[3]=t14,a[4]=t11,a[5]=((C_word)li84),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_7900(t16,t12,((C_word*)t0)[3]);}

/* loop875 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7900(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7900,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=*((C_word*)lf[78]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7929,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g891892 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7927 in loop875 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7929(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7929,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop875888 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7900(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop875888 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7900(t6,((C_word*)t0)[3],t5);}}

/* k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7508,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7860,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7860(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* loop in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7860(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7860,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7873,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm: 378  append */
t6=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,t3);}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm: 379  append* */
t6=((C_word*)((C_word*)t0)[2])[1];
f_7432(t6,t5,t4,t3);}
else{
t6=C_a_i_cons(&a,2,t4,t3);
t7=C_i_cdr(t2);
/* chicken-syntax.scm: 381  loop */
t10=t1;
t11=t7;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}}

/* k7871 in loop in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm: 381  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7860(t3,((C_word*)t0)[2],t2,t1);}

/* k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7508(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7508,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7511,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7812,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li82),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_7812(t10,t6,t1);}

/* loop913 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7812(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7812,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7839,a[2]=((C_word*)t0)[5],a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7854,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g929930 */
t6=t3;
f_7839(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7852 in loop913 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7854(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7854,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop913926 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7812(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop913926 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7812(t6,((C_word*)t0)[3],t5);}}

/* g929 in loop913 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7839(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7839,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7847,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7851,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 382  gensym */
t5=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k7849 in g929 in loop913 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 382  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7845 in g929 in loop913 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7847,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7512,a[2]=t1,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7523,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7766,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7766(t7,t3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* loop in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7766(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7766,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm: 386  reverse */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=C_i_car(t2);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7806,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 390  map* */
t6=((C_word*)((C_word*)t0)[3])[1];
f_7463(t6,t5,((C_word*)t0)[2],t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7799,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 389  lookup */
t6=((C_word*)t0)[2];
f_7512(3,t6,t5,t4);}}}

/* k7797 in loop in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7799,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm: 391  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7766(t4,((C_word*)t0)[2],t3,t2);}

/* k7804 in loop in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7806,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm: 391  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7766(t4,((C_word*)t0)[2],t3,t2);}

/* k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7523(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7523,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7530,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7726,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_7726(t10,t6,((C_word*)t0)[2]);}

/* loop1002 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7726(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7726,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
/* loop10021015 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
/* loop10021015 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7530,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7532,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word)li78),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_7532(t5,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7532(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_7532,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7550,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7556,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=((C_word)li77),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7556(t13,t9,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t6=C_i_car(t4);
if(C_truep(C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7720,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 397  cdar */
t8=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}
else{
t7=t5;
f_7604(t7,C_SCHEME_FALSE);}}}

/* k7718 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_7604(t2,C_i_nullp(t1));}

/* k7602 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7604(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7604,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7643,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 398  caar */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=C_i_car(((C_word*)t0)[8]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],t4);
t6=C_i_car(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7686,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=C_i_cdr(((C_word*)t0)[5]);
t9=C_i_cdr(((C_word*)t0)[8]);
t10=C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm: 403  fold */
t11=((C_word*)((C_word*)t0)[3])[1];
f_7532(t11,t7,t8,t9,t10);}}

/* k7684 in k7602 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7686,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,lf[97],t6));}

/* k7641 in k7602 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7643,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[7]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7623,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_i_cdr(((C_word*)t0)[4]);
t8=C_i_cdr(((C_word*)t0)[7]);
t9=C_i_cdr(((C_word*)t0)[3]);
/* chicken-syntax.scm: 399  fold */
t10=((C_word*)((C_word*)t0)[2])[1];
f_7532(t10,t6,t7,t8,t9);}

/* k7621 in k7641 in k7602 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7623,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* loop967 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7556(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7556,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7583,a[2]=((C_word*)t0)[5],a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7594,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g983984 */
t6=t3;
f_7583(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7592 in loop967 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7594(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7594,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop967980 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7556(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop967980 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7556(t6,((C_word*)t0)[3],t5);}}

/* g983 in loop967 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7583(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7583,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7591,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 396  lookup */
t4=((C_word*)t0)[2];
f_7512(3,t4,t3,t2);}

/* k7589 in g983 in loop967 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7591,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k7548 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7554,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t3=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k7552 in k7548 in fold in k7528 in k7521 in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7554,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* lookup in k7509 in k7506 in k7503 in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7512(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7512,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}

/* map* in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7463(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7463,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7486,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
/* chicken-syntax.scm: 371  proc */
t6=t2;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* chicken-syntax.scm: 370  proc */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}}

/* k7484 in map* in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7486,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7490,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[4]);
/* chicken-syntax.scm: 371  map* */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7463(t4,t2,((C_word*)t0)[2],t3);}

/* k7488 in k7484 in map* in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7490,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* append* in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7432(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7432,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7453,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
/* chicken-syntax.scm: 367  append* */
t8=t5;
t9=t6;
t10=t3;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}}

/* k7451 in append* in k7428 in k7425 in k7416 in a7413 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7453,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7410 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 354  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[171],C_SCHEME_END_OF_LIST,t1);}

/* k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7340,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7342,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 407  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a7341 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7342,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7346,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 409  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[170],t2,lf[172]);}

/* k7344 in a7341 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7346,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7355,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 412  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[64]);}

/* k7353 in k7344 in a7341 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7358,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 413  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[171]);}

/* k7356 in k7353 in k7344 in a7341 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7358,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7363,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li71),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_7363(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fold in k7356 in k7353 in k7344 in a7341 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7363(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7363,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7381,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7400,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cdr(t2);
/* chicken-syntax.scm: 418  fold */
t9=t5;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}

/* k7398 in fold in k7356 in k7353 in k7344 in a7341 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7400,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k7379 in fold in k7356 in k7353 in k7344 in a7341 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7381,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k7338 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 405  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[170],C_SCHEME_END_OF_LIST,t1);}

/* k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6969,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6971,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 422  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6971,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6975,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 424  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[166],t2,lf[169]);}

/* k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6975,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6984,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 427  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[64]);}

/* k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 428  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6987(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7296,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7298,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7298(t11,t7,((C_word*)t0)[3]);}

/* loop1057 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7298(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7298,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
/* loop10571070 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
/* loop10571070 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7294 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[27]+1),t1);}

/* k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6990(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6990,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6993,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7246,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li68),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_7246(t10,t6,t1);}

/* loop1082 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7246(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7246,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7273,a[2]=((C_word*)t0)[5],a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7288,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g10981099 */
t6=t3;
f_7273(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7286 in loop1082 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7288(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7288,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop10821095 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7246(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop10821095 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7246(t6,((C_word*)t0)[3],t5);}}

/* g1098 in loop1082 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7273(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7273,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7281,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7285,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 430  gensym */
t5=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k7283 in g1098 in loop1082 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 430  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7279 in g1098 in loop1082 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7281,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6993(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6994,a[2]=t1,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7013,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7206,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7206(t11,t7,((C_word*)t0)[2]);}

/* loop1112 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7206(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7206,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[168]);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
/* loop11121125 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
/* loop11121125 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7013(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7013,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7017,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7021,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7027,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word)li65),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_7027(t11,t7,((C_word*)t0)[2]);}

/* loop1136 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7027(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7027,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7054,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li64),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7200,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g11521153 */
t6=t3;
f_7054(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7198 in loop1136 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7200(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7200,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop11361149 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7027(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop11361149 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7027(t6,((C_word*)t0)[3],t5);}}

/* g1152 in loop1136 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7054(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7054,NULL,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7082,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t6,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t12=C_i_car(t2);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7152,a[2]=t8,a[3]=t14,a[4]=t10,a[5]=((C_word*)t0)[2],a[6]=((C_word)li63),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_7152(t16,t11,t12);}

/* loop1161 in g1152 in loop1136 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7152(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7152,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=f_6994(((C_word*)t0)[5],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
/* loop11611174 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
/* loop11611174 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7080 in g1152 in loop1136 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7082(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7086,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7090,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_i_car(((C_word*)t0)[3]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7096,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=((C_word)li62),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7096(t12,t7,t8);}

/* loop1184 in k7080 in g1152 in loop1136 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_7096(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7096,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7123,a[2]=((C_word*)t0)[5],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=f_7123(C_a_i(&a,9),t3,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(t2,C_fix(1));
/* loop11841197 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(t2,C_fix(1));
/* loop11841197 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g1200 in loop1184 in k7080 in g1152 in loop1136 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static C_word C_fcall f_7123(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
t2=f_6994(((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t1,t3);
return(C_a_i_cons(&a,2,lf[167],t4));}

/* k7088 in k7080 in g1152 in loop1136 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k7084 in k7080 in g1152 in loop1136 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7086,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[97],t5));}

/* k7019 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7025,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#append */
t3=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k7023 in k7019 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7015 in k7011 in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_7017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7017,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* lookup in k6991 in k6988 in k6985 in k6982 in k6973 in a6970 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static C_word C_fcall f_6994(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=C_i_assq(t1,((C_word*)t0)[2]);
return(C_i_cdr(t2));}

/* k6967 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 420  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[166],C_SCHEME_END_OF_LIST,t1);}

/* k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6965,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 443  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[163]);}

/* k6963 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6965,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[163],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6886,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6888,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 444  ##sys#er-transformer */
t6=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a6887 in k6963 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6888,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6892,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 446  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[164],t2,lf[165]);}

/* k6890 in a6887 in k6963 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 447  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[131]);}

/* k6893 in k6890 in a6887 in k6963 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 448  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k6896 in k6893 in k6890 in a6887 in k6963 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6898,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[5]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6933,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 451  r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[163]);}

/* k6931 in k6896 in k6893 in k6890 in a6887 in k6963 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6933(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6933,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[6]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[4],t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,((C_word*)t0)[3],t9);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_cons(&a,2,lf[97],t10));}

/* k6884 in k6963 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 441  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[164],((C_word*)t0)[2],t1);}

/* k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6781,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6783,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 455  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6783(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6783,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6787,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 457  r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[21]);}

/* k6785 in a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6789,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6870,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6874,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm: 471  quotify-proc */
t6=t2;
f_6789(t6,t4,t5,lf[159]);}

/* k6872 in k6785 in a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k6868 in k6785 in a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6870,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[162],t1));}

/* quotify-proc in k6785 in a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6789(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6789,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 460  ##sys#check-syntax */
t5=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t3,t2,lf[161]);}

/* k6791 in quotify-proc in k6785 in a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6793(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6793,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6850,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_i_cdr(((C_word*)t0)[5]);
/* ##sys#append */
t9=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,C_SCHEME_END_OF_LIST);}
else{
t6=t5;
f_6802(t6,C_i_cadr(((C_word*)t0)[5]));}}

/* k6848 in k6791 in quotify-proc in k6785 in a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6850,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
f_6802(t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k6800 in k6791 in quotify-proc in k6785 in a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6802(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6802,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6805,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_i_pairp(t1);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6814,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_6814(t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6824,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_car(t1);
/* chicken-syntax.scm: 466  c */
t8=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[2],t7);}}

/* k6822 in k6800 in k6791 in quotify-proc in k6785 in a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6814(t2,C_i_not(t1));}

/* k6812 in k6800 in k6791 in quotify-proc in k6785 in a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6814(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6814,NULL,2,t0,t1);}
if(C_truep(t1)){
/* chicken-syntax.scm: 467  syntax-error */
t2=*((C_word*)lf[12]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[159],lf[160],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]));}}

/* k6803 in k6800 in k6791 in quotify-proc in k6785 in a6782 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6805,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k6779 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 453  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[159],C_SCHEME_END_OF_LIST,t1);}

/* k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6618,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6620,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 475  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6619 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6620,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6624,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 477  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[157],t2,lf[158]);}

/* k6622 in a6619 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6624,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6633,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 480  r */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[118]);}

/* k6631 in k6622 in a6619 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 481  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k6634 in k6631 in k6622 in a6619 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6636,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6641,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li55),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_6641(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fold in k6634 in k6631 in k6622 in a6619 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6641(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6641,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6655,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 484  r */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[55]);}
else{
t3=C_i_car(t2);
t4=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6715,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 488  fold */
t17=t7;
t18=t4;
t1=t17;
t2=t18;
goto loop;}
else{
t6=C_i_car(t3);
t7=C_i_cadr(t3);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6753,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t10,a[5]=((C_word*)t0)[4],a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 492  fold */
t17=t11;
t18=t4;
t1=t17;
t2=t18;
goto loop;}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6686,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 487  fold */
t17=t5;
t18=t4;
t1=t17;
t2=t18;
goto loop;}}}

/* k6684 in fold in k6634 in k6631 in k6622 in a6619 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6686,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k6751 in fold in k6634 in k6631 in k6622 in a6619 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6753(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6753,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,((C_word*)t0)[2],t7));}

/* k6713 in fold in k6634 in k6631 in k6622 in a6619 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6715,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k6653 in fold in k6634 in k6631 in k6622 in a6619 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6659,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#append */
t3=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k6657 in k6653 in fold in k6634 in k6631 in k6622 in a6619 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6659,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6616 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 473  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[157],C_SCHEME_END_OF_LIST,t1);}

/* k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6418,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6420,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 496  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6420,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6424,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 498  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[151],t2,lf[156]);}

/* k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6424,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_i_cddr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6433,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 501  r */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[131]);}

/* k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 502  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 503  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[43]);}

/* k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 504  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[155]);}

/* k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 505  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6452,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 506  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6452(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6452,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6468,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6470,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=t7,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li53),tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_6470(t9,t5,((C_word*)t0)[2]);}

/* expand in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6470(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6470,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6486,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=((C_word*)t0)[8],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 512  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[151],t3,lf[153]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[154]);}}

/* k6484 in expand in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6486,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6492,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=C_i_car(((C_word*)t0)[9]);
/* chicken-syntax.scm: 513  c */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k6490 in k6484 in expand in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6492(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6492,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6499,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[7]);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6542,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6546,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_i_car(((C_word*)t0)[7]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6552,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word*)t0)[2],a[6]=((C_word)li52),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6552(t12,t7,t8);}}

/* loop1321 in k6490 in k6484 in expand in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6552(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6552,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6579,a[2]=((C_word*)t0)[5],a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=f_6579(C_a_i(&a,9),t3,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(t2,C_fix(1));
/* loop13211334 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(t2,C_fix(1));
/* loop13211334 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g1337 in loop1321 in k6490 in k6484 in expand in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static C_word C_fcall f_6579(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
return(C_a_i_cons(&a,2,lf[152],t3));}

/* k6544 in k6490 in k6484 in expand in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k6540 in k6490 in k6484 in expand in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6542,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6534,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_END_OF_LIST);}

/* k6532 in k6540 in k6490 in k6484 in expand in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6534,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6530,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 518  expand */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6470(t4,t3,((C_word*)t0)[2]);}

/* k6528 in k6532 in k6540 in k6490 in k6484 in expand in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6530,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k6497 in k6490 in k6484 in expand in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6499,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6466 in k6450 in k6443 in k6440 in k6437 in k6434 in k6431 in k6422 in a6419 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6468,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k6416 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 494  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[151],C_SCHEME_END_OF_LIST,t1);}

/* k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6414,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 599  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6414,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[78],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6410,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 600  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[107]);}

/* k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6410,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[107],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5825,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5827,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 601  ##sys#er-transformer */
t7=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5827,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5831,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 603  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[137],t2,lf[150]);}

/* k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5831,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5843,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 607  r */
t6=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[118]);}

/* k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 608  r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 609  r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5849(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5849,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5851,a[2]=t1,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5948,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6149,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 647  ##sys#check-syntax */
t9=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[137],((C_word*)t0)[2],lf[149]);}

/* k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 648  ##sys#check-syntax */
t3=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[137],((C_word*)t0)[8],lf[148]);}

/* k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6152(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6152,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6361,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_6361(t10,t6,((C_word*)t0)[2]);}

/* loop1404 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6361(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6361,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=*((C_word*)lf[78]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6390,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g14201421 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6388 in loop1404 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6390(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6390,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14041417 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6361(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14041417 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6361(t6,((C_word*)t0)[3],t5);}}

/* k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6155(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6156,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6171,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6317,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_6317(t11,t7,t1);}

/* loop1431 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6317(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6317,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6344,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6355,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g14471448 */
t6=t3;
f_6344(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6353 in loop1431 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6355(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6355,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14311444 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6317(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14311444 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6317(t6,((C_word*)t0)[3],t5);}}

/* g1447 in loop1431 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6344(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6344,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6352,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 656  prefix-sym */
f_6156(t3,lf[147],t2);}

/* k6350 in g1447 in loop1431 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 656  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6171(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6171,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6174,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6282,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_6282(t10,t6,((C_word*)t0)[2]);}

/* loop1456 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6282(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6282,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=*((C_word*)lf[146]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6311,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g14721473 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6309 in loop1456 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6311(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6311,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14561469 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6282(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14561469 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6282(t6,((C_word*)t0)[3],t5);}}

/* k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6177,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 660  r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[145]);}

/* k6175 in k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 663  r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[144]);}

/* k6178 in k6175 in k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6180(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6180,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6183,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6238,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word)li45),tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_6238(t10,t6,((C_word*)t0)[12]);}

/* loop1482 in k6178 in k6175 in k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6238(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6238,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6265,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6276,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g14981499 */
t6=t3;
f_6265(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6274 in loop1482 in k6178 in k6175 in k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6276(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6276,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14821495 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6238(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14821495 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6238(t6,((C_word*)t0)[3],t5);}}

/* g1498 in loop1482 in k6178 in k6175 in k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6265(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6265,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6273,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 665  prefix-sym */
f_6156(t3,lf[143],t2);}

/* k6271 in g1498 in loop1482 in k6178 in k6175 in k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 665  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6181 in k6178 in k6175 in k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6186,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 668  make-default-procs */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5851(t3,t2,((C_word*)t0)[4],((C_word*)t0)[8],t1,((C_word*)t0)[2]);}

/* k6184 in k6181 in k6178 in k6175 in k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6189,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 670  make-if-tree */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5948(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[11]);}

/* k6187 in k6184 in k6181 in k6178 in k6175 in k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6196,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 673  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[142]);}

/* k6194 in k6187 in k6184 in k6181 in k6178 in k6175 in k6172 in k6169 in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6196(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6196,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[7]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[4]);
t9=C_a_i_cons(&a,2,t3,t8);
t10=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t11=C_a_i_cons(&a,2,t9,t10);
t12=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_cons(&a,2,t1,t11));}

/* prefix-sym in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_6156(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6156,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6164,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6168,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 651  symbol->string */
t6=*((C_word*)lf[141]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k6166 in prefix-sym in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 651  string-append */
t2=*((C_word*)lf[140]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6162 in prefix-sym in k6153 in k6150 in k6147 in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 651  string->symbol */
t2=*((C_word*)lf[139]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* make-if-tree in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_5948(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5948,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5954,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=t5,a[8]=((C_word)li41),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_5954(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in make-if-tree in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_5954(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_5954,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6028,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 635  r */
t6=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[125]);}
else{
t5=C_i_car(t2);
t6=C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,lf[125],t6);
t8=C_i_car(t3);
t9=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6142,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=t7,a[10]=((C_word*)t0)[3],a[11]=t5,a[12]=((C_word*)t0)[7],a[13]=t8,tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 640  reverse */
t10=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t4);}}

/* k6140 in recur in make-if-tree in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6142,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[13],t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 641  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k6128 in k6140 in recur in make-if-tree in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6130,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[12],t4);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6114,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t5,a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 642  r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[107]);}

/* k6112 in k6128 in k6140 in recur in make-if-tree in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6114(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6114,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[13],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[12],t6);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6078,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=C_i_cdr(((C_word*)t0)[6]);
t10=C_i_cdr(((C_word*)t0)[5]);
t11=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* chicken-syntax.scm: 643  recur */
t12=((C_word*)((C_word*)t0)[2])[1];
f_5954(t12,t8,t9,t10,t11);}

/* k6076 in k6112 in k6128 in k6140 in recur in make-if-tree in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6078(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6078,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,((C_word*)t0)[5],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,((C_word*)t0)[2],t7));}

/* k6026 in recur in make-if-tree in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6028,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[74],t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6016,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 636  reverse */
t7=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[2]);}

/* k6014 in k6026 in recur in make-if-tree in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_6016(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6016,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=C_a_i_cons(&a,2,lf[138],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,lf[41],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,lf[128],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,lf[129],t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_a_i_cons(&a,2,t2,t10);
t12=C_a_i_cons(&a,2,((C_word*)t0)[4],t11);
t13=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_cons(&a,2,((C_word*)t0)[2],t12));}

/* make-default-procs in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_5851(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5851,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5859,a[2]=t4,a[3]=t5,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 615  reverse */
t7=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k5857 in make-default-procs in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5863,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 616  reverse */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5861 in k5857 in make-default-procs in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5867,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 617  reverse */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5865 in k5861 in k5857 in make-default-procs in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5867,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5869,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5869(t5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* recur in k5865 in k5861 in k5857 in make-default-procs in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_5869(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5869,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=C_i_cdr(t2);
t7=C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5922,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=t7,a[8]=((C_word*)t0)[3],a[9]=t5,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 622  reverse */
t9=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t6);}}

/* k5920 in recur in k5865 in k5861 in k5857 in make-default-procs in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5938,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 623  reverse */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k5936 in k5920 in recur in k5865 in k5861 in k5857 in make-default-procs in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5938,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k5932 in k5920 in recur in k5865 in k5861 in k5857 in make-default-procs in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5934(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5934,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[10],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[9],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[7],t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5890,a[2]=t7,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=C_i_cdr(((C_word*)t0)[5]);
t10=C_i_cdr(((C_word*)t0)[4]);
t11=C_i_car(((C_word*)t0)[5]);
/* chicken-syntax.scm: 624  recur */
t12=((C_word*)((C_word*)t0)[3])[1];
f_5869(t12,t8,((C_word*)t0)[2],t9,t10,t11);}

/* k5888 in k5932 in k5920 in recur in k5865 in k5861 in k5857 in make-default-procs in k5847 in k5844 in k5841 in k5829 in a5826 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5890,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5823 in k6408 in k6412 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 597  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[137],((C_word*)t0)[2],t1);}

/* k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5817,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 693  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[125]);}

/* k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5817,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[125],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5813,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 694  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5813,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[78],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 695  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[107]);}

/* k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5809(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5809,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[107],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5600,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5602,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 696  ##sys#er-transformer */
t8=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* a5601 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5602(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5602,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5606,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 698  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[133],t2,lf[136]);}

/* k5604 in a5601 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 699  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[131]);}

/* k5607 in k5604 in a5601 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 700  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k5610 in k5607 in k5604 in a5601 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5612,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 701  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k5617 in k5610 in k5607 in k5604 in a5601 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5619,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[6]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5769,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 702  r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[125]);}

/* k5767 in k5617 in k5610 in k5607 in k5604 in a5601 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5769,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_i_cddr(((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_5654(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_5654(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[129]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[135],t4);}}}

/* k5652 in k5767 in k5617 in k5610 in k5607 in k5604 in a5601 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5654,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 704  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[125]);}

/* k5728 in k5652 in k5767 in k5617 in k5610 in k5607 in k5604 in a5601 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5730,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 704  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[107]);}

/* k5740 in k5728 in k5652 in k5767 in k5617 in k5610 in k5607 in k5604 in a5601 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5742(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5742,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[9],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,lf[74],t6);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5714,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t7,a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 705  r */
t9=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[78]);}

/* k5712 in k5740 in k5728 in k5652 in k5767 in k5617 in k5610 in k5607 in k5604 in a5601 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5714(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5714,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,lf[134],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[41],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,lf[128],t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t7,t8);
t10=C_a_i_cons(&a,2,lf[129],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=C_a_i_cons(&a,2,t3,t11);
t13=C_a_i_cons(&a,2,((C_word*)t0)[8],t12);
t14=C_a_i_cons(&a,2,((C_word*)t0)[7],t13);
t15=C_a_i_cons(&a,2,t14,C_SCHEME_END_OF_LIST);
t16=C_a_i_cons(&a,2,((C_word*)t0)[6],t15);
t17=C_a_i_cons(&a,2,((C_word*)t0)[5],t16);
t18=C_a_i_cons(&a,2,((C_word*)t0)[7],t17);
t19=C_a_i_cons(&a,2,t18,C_SCHEME_END_OF_LIST);
t20=C_a_i_cons(&a,2,((C_word*)t0)[4],t19);
t21=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,C_a_i_cons(&a,2,((C_word*)t0)[2],t20));}

/* k5598 in k5807 in k5811 in k5815 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 691  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[133],((C_word*)t0)[2],t1);}

/* k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5592,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 728  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[125]);}

/* k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5592,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[125],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5286,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5288,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 729  ##sys#er-transformer */
t6=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5288(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5288,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5292,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 731  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[126],t2,lf[132]);}

/* k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5292,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5304,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 735  r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[64]);}

/* k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 736  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[125]);}

/* k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 737  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[78]);}

/* k5308 in k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5310,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 738  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[107]);}

/* k5311 in k5308 in k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 739  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k5314 in k5311 in k5308 in k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 740  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[131]);}

/* k5317 in k5314 in k5311 in k5308 in k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5319(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5319,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[11],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5338,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5340,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],a[10]=((C_word)li36),tmp=(C_word)a,a+=11,tmp));
t9=((C_word*)t7)[1];
f_5340(t9,t5,t1,((C_word*)t0)[2]);}

/* loop in k5317 in k5314 in k5311 in k5308 in k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_5340(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5340,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[9],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,lf[74],t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5406,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* ##sys#append */
t9=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}
else{
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5430,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 751  r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[130]);}
else{
t5=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5568,a[2]=((C_word*)t0)[8],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t9=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}}}

/* k5566 in loop in k5317 in k5314 in k5311 in k5308 in k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5568,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k5428 in loop in k5317 in k5314 in k5311 in k5308 in k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5430(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5430,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[11]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[9],t3);
t5=C_i_cadr(((C_word*)t0)[11]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[8],t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t5,t8);
t10=C_a_i_cons(&a,2,t4,t9);
t11=C_a_i_cons(&a,2,((C_word*)t0)[7],t10);
t12=C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=C_a_i_cons(&a,2,t2,t12);
t14=C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t15=C_a_i_cons(&a,2,((C_word*)t0)[9],t14);
t16=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t17=C_a_i_cons(&a,2,lf[41],t16);
t18=C_a_i_cons(&a,2,((C_word*)t0)[10],C_SCHEME_END_OF_LIST);
t19=C_a_i_cons(&a,2,((C_word*)t0)[6],t18);
t20=C_a_i_cons(&a,2,t19,C_SCHEME_END_OF_LIST);
t21=C_a_i_cons(&a,2,t17,t20);
t22=C_a_i_cons(&a,2,t15,t21);
t23=C_a_i_cons(&a,2,((C_word*)t0)[7],t22);
t24=C_a_i_cons(&a,2,t23,C_SCHEME_END_OF_LIST);
t25=C_a_i_cons(&a,2,t1,t24);
t26=C_a_i_cons(&a,2,t25,C_SCHEME_END_OF_LIST);
t27=C_a_i_cons(&a,2,t13,t26);
t28=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5449,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t27,tmp=(C_word)a,a+=5,tmp);
t29=C_i_cdr(((C_word*)t0)[3]);
/* chicken-syntax.scm: 758  loop */
t30=((C_word*)((C_word*)t0)[2])[1];
f_5340(t30,t28,t1,t29);}

/* k5447 in k5428 in loop in k5317 in k5314 in k5311 in k5308 in k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5449,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k5404 in loop in k5317 in k5314 in k5311 in k5308 in k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5406(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5406,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=C_a_i_cons(&a,2,lf[127],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[41],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,lf[128],t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t7,t8);
t10=C_a_i_cons(&a,2,lf[129],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=C_a_i_cons(&a,2,t3,t11);
t13=C_a_i_cons(&a,2,((C_word*)t0)[4],t12);
t14=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_cons(&a,2,((C_word*)t0)[2],t13));}

/* k5336 in k5317 in k5314 in k5311 in k5308 in k5305 in k5302 in k5290 in a5287 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5338,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k5284 in k5590 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 726  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[126],((C_word*)t0)[2],t1);}

/* k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5278,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 766  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[106]);}

/* k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5278,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[106],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5274,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 767  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5274,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[78],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 768  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[107]);}

/* k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5270,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[107],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 769  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[108]);}

/* k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5266(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5266,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[108],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4738,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4740,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 770  ##sys#er-transformer */
t9=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4740,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4744,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 772  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[109],t2,lf[124]);}

/* k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4746,a[2]=((C_word*)t0)[4],a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4781,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 778  require */
t4=*((C_word*)lf[122]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[123]);}

/* k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4781(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4781,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5183,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_i_cdr(((C_word*)t0)[3]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5189,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word)li34),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5189(t12,t7,t8);}

/* loop1589 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_5189(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5189,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5230,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5226,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 780  ##sys#decompose-lambda-list */
t7=*((C_word*)lf[115]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t5,t6);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a5225 in loop1589 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5226(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5226,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* k5228 in loop1589 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5230(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5230,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop15891602 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5189(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop15891602 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5189(t6,((C_word*)t0)[3],t5);}}

/* k5181 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[121]+1),t1);}

/* k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4787,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 784  genvars */
t3=((C_word*)t0)[2];
f_4746(t3,t2,t1);}

/* k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 785  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[120]);}

/* k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 786  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[119]);}

/* k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 787  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4796,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 788  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 789  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[106]);}

/* k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4805,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 790  r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[108]);}

/* k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4808,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 791  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[78]);}

/* k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 792  r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[107]);}

/* k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* chicken-syntax.scm: 793  r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[118]);}

/* k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* chicken-syntax.scm: 794  append */
t3=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[14]);}

/* k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4825(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4825,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[15],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,lf[110],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[14],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4849,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=t1,a[5]=((C_word*)t0)[13],a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4851,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li32),tmp=(C_word)a,a+=14,tmp);
t9=C_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm: 796  fold-right */
t10=*((C_word*)lf[116]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,t8,lf[117],t9);}

/* a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4851(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4851,4,t0,t1,t2,t3);}
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=t3,a[14]=((C_word*)t0)[12],a[15]=((C_word)li31),tmp=(C_word)a,a+=16,tmp);
/* chicken-syntax.scm: 798  ##sys#decompose-lambda-list */
t6=*((C_word*)lf[115]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t4,t5);}

/* a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4861,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_4865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=t2,a[14]=((C_word*)t0)[12],a[15]=t1,a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=t3,tmp=(C_word)a,a+=19,tmp);
t6=C_i_car(((C_word*)t0)[9]);
/* chicken-syntax.scm: 801  ##sys#check-syntax */
t7=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[109],t6,lf[114]);}

/* k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4865(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4865,2,t0,t1);}
t2=C_fixnum_difference(((C_word*)t0)[18],((C_word*)t0)[17]);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4879,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[18],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[17],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[10])){
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t3;
f_4879(t5,C_SCHEME_TRUE);}
else{
t5=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=t3;
f_4879(t7,C_a_i_cons(&a,2,((C_word*)t0)[3],t6));}}
else{
t4=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=t3;
f_4879(t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}}

/* k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_4879(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4879,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4887,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=t1,a[5]=((C_word*)t0)[15],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4893,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word)li27),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li30),tmp=(C_word)a,a+=11,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4903,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4907,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4979,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[7],a[9]=((C_word)li29),tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_4979(t8,t4,t3,((C_word*)t0)[2]);}

/* build in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_4979(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4979,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[8])){
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5004,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_i_cdr(((C_word*)t0)[6]);
/* ##sys#append */
t9=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,C_SCHEME_END_OF_LIST);}
else{
t4=C_i_cddr(((C_word*)t0)[6]);
if(C_truep(C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_cadr(((C_word*)t0)[6]));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5036,a[2]=((C_word*)t0)[7],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(((C_word*)t0)[6]);
/* ##sys#append */
t7=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}}}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5047,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5127,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 816  gensym */
t6=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k5125 in build in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 816  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5045 in build in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5047(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5047,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[8]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,((C_word*)t0)[5],t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,t1,t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=C_a_i_cons(&a,2,t6,t11);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5066,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t12,tmp=(C_word)a,a+=5,tmp);
t14=C_i_cdr(((C_word*)t0)[8]);
if(C_truep(C_i_pairp(t14))){
t15=C_i_cdr(((C_word*)t0)[8]);
/* chicken-syntax.scm: 820  build */
t16=((C_word*)((C_word*)t0)[2])[1];
f_4979(t16,t13,t15,t1);}
else{
/* chicken-syntax.scm: 821  build */
t15=((C_word*)((C_word*)t0)[2])[1];
f_4979(t15,t13,C_SCHEME_END_OF_LIST,t1);}}

/* k5064 in k5045 in build in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5066,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k5034 in build in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5036,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k5002 in build in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_5004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5004,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k4905 in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4907(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4907,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)t0)[5]))){
t2=t1;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4924,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4930,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_4930(t10,t6,((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* loop1680 in k4905 in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_4930(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4930,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[113]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4963,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=C_slot(t2,C_fix(0));
t9=C_slot(t3,C_fix(0));
/* g17001701 */
t10=t6;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4961 in loop1680 in k4905 in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4963,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4943,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_4943(t4,C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_4943(t5,t4);}}

/* k4941 in k4961 in loop1680 in k4905 in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_4943(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
/* loop16801694 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4930(t5,((C_word*)t0)[2],t3,t4);}

/* k4922 in k4905 in a4902 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4924,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* a4892 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4893,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4901,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 809  take */
t3=*((C_word*)lf[112]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4899 in a4892 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 809  split-at! */
t2=*((C_word*)lf[111]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4885 in k4877 in k4863 in a4860 in a4850 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4887,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k4847 in k4823 in k4812 in k4809 in k4806 in k4803 in k4800 in k4797 in k4794 in k4791 in k4788 in k4785 in k4782 in k4779 in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4849,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,((C_word*)t0)[2],t6));}

/* genvars in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_4746(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4746,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4752,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4752(t6,t1,C_fix(0));}

/* loop in genvars in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_4752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4752,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4766,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4778,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 777  gensym */
t5=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4776 in loop in genvars in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 777  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4764 in loop in genvars in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4766,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4770,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken-syntax.scm: 777  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4752(t4,t2,t3);}

/* k4768 in k4764 in loop in genvars in k4742 in a4739 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4770,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4736 in k5264 in k5268 in k5272 in k5276 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 764  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[109],((C_word*)t0)[2],t1);}

/* k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4636,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4638,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 834  ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a4637 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4638,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4642,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 836  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[101],t2,lf[105]);}

/* k4640 in a4637 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4642(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4642,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_a_i_cons(&a,2,t2,t3);
/* chicken-syntax.scm: 840  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[101],t5,lf[103]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4707,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,t2,t3);
/* chicken-syntax.scm: 847  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[101],t5,lf[104]);}}

/* k4705 in k4640 in a4637 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4707,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,lf[41],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4722,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k4720 in k4705 in k4640 in a4637 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4722,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[102],t2));}

/* k4655 in k4640 in a4637 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4657,2,t0,t1);}
t2=C_slot(((C_word*)t0)[5],C_fix(0));
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,lf[41],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4680,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 845  r */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[21]);}

/* k4678 in k4655 in k4640 in a4637 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4680,2,t0,t1);}
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4692,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k4690 in k4678 in k4655 in k4640 in a4637 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4692,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[102],t5));}

/* k4634 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 832  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[101],C_SCHEME_END_OF_LIST,t1);}

/* k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4632,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 855  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[93]);}

/* k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4632,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[93],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4628,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 856  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[94]);}

/* k4626 in k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4628,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[94],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4422,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4424,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 857  ##sys#er-transformer */
t7=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a4423 in k4626 in k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4424,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4428,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 859  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[88],t2,lf[100]);}

/* k4426 in a4423 in k4626 in k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 860  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[99]);}

/* k4429 in k4426 in a4423 in k4626 in k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 861  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[98]);}

/* k4432 in k4429 in k4426 in a4423 in k4626 in k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4437,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 862  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k4435 in k4432 in k4429 in k4426 in a4423 in k4626 in k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 863  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[93]);}

/* k4446 in k4435 in k4432 in k4429 in k4426 in a4423 in k4626 in k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4448,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4476,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 865  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[94]);}

/* k4474 in k4446 in k4435 in k4432 in k4429 in k4426 in a4423 in k4626 in k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4476(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4476,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[8]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_caddr(((C_word*)t0)[8]);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[7],t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,((C_word*)t0)[6],t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_a_i_cons(&a,2,t3,t10);
t12=C_a_i_cons(&a,2,((C_word*)t0)[7],t11);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t12,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t14=C_i_cdddr(((C_word*)t0)[8]);
/* ##sys#append */
t15=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,t14,C_SCHEME_END_OF_LIST);}

/* k4566 in k4474 in k4446 in k4435 in k4432 in k4429 in k4426 in a4423 in k4626 in k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4568(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4568,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[95],t4);
t6=C_a_i_cons(&a,2,lf[96],t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t7);
t9=C_a_i_cons(&a,2,lf[21],t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_a_i_cons(&a,2,((C_word*)t0)[7],t10);
t12=C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=C_a_i_cons(&a,2,((C_word*)t0)[8],t12);
t14=C_a_i_cons(&a,2,((C_word*)t0)[9],t13);
t15=C_a_i_cons(&a,2,t14,C_SCHEME_END_OF_LIST);
t16=C_a_i_cons(&a,2,t3,t15);
t17=C_a_i_cons(&a,2,lf[97],t16);
t18=C_a_i_cons(&a,2,t17,C_SCHEME_END_OF_LIST);
t19=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t18);
t20=C_a_i_cons(&a,2,((C_word*)t0)[9],t19);
t21=C_a_i_cons(&a,2,t20,C_SCHEME_END_OF_LIST);
t22=C_a_i_cons(&a,2,((C_word*)t0)[6],t21);
t23=C_a_i_cons(&a,2,((C_word*)t0)[5],t22);
t24=C_a_i_cons(&a,2,t23,C_SCHEME_END_OF_LIST);
t25=C_a_i_cons(&a,2,((C_word*)t0)[4],t24);
t26=C_a_i_cons(&a,2,((C_word*)t0)[9],t25);
t27=C_a_i_cons(&a,2,t26,C_SCHEME_END_OF_LIST);
t28=C_a_i_cons(&a,2,((C_word*)t0)[3],t27);
t29=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t29+1)))(2,t29,C_a_i_cons(&a,2,t28,C_SCHEME_END_OF_LIST));}

/* k4420 in k4626 in k4630 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 853  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[88],((C_word*)t0)[2],t1);}

/* k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4414,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 876  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[43]);}

/* k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4414,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[43],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4410,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 877  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[82]);}

/* k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4410,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[82],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3999,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4001,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 878  ##sys#er-transformer */
t7=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4001(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4001,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4005,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 880  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[83],t2,lf[92]);}

/* k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 881  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[91]);}

/* k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 882  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[90]);}

/* k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 883  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[89]);}

/* k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 884  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 885  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[41]);}

/* k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 886  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[82]);}

/* k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4023,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 887  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[43]);}

/* k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word)li20),tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4235,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 901  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[88]);}

/* k4233 in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4235(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4235,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[84],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[11],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[10],t4);
t6=C_a_i_cons(&a,2,lf[70],t5);
t7=C_a_i_cons(&a,2,C_fix(1),C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,((C_word*)t0)[10],t7);
t9=C_a_i_cons(&a,2,lf[85],t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_a_i_cons(&a,2,t6,t10);
t12=C_a_i_cons(&a,2,((C_word*)t0)[9],t11);
t13=C_a_i_cons(&a,2,t12,C_SCHEME_END_OF_LIST);
t14=C_a_i_cons(&a,2,((C_word*)t0)[8],t13);
t15=C_a_i_cons(&a,2,t14,C_SCHEME_END_OF_LIST);
t16=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4275,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t15,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 904  r */
t17=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,lf[87]);}

/* k4273 in k4233 in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4275(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4275,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4279,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4283,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t8=C_i_cddr(((C_word*)t0)[7]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t10,a[5]=t6,a[6]=((C_word)li21),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_4309(t12,t7,t8);}

/* loop1826 in k4273 in k4233 in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_4309(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4309,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4338,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* g18421843 */
t5=((C_word*)t0)[2];
f_4028(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4336 in loop1826 in k4273 in k4233 in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4338(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4338,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop18261839 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4309(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop18261839 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4309(t6,((C_word*)t0)[3],t5);}}

/* k4281 in k4273 in k4233 in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4283,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,lf[86],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[3],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
/* ##sys#append */
t7=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[2],t1,t6);}

/* k4277 in k4273 in k4233 in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4279(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4279,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[7],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=C_i_cadr(((C_word*)t0)[5]);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,t5,t7);
t9=C_a_i_cons(&a,2,((C_word*)t0)[4],t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}

/* parse-clause in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_4028(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4028,NULL,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?C_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?C_i_cadr(t2):C_i_car(t2));
t7=(C_truep(t5)?C_i_cddr(t2):C_i_cdr(t2));
if(C_truep(C_i_nullp(t6))){
if(C_truep(t5)){
t8=C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t5,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4070,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t12=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,t7,C_SCHEME_END_OF_LIST);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4089,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t9=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t7,C_SCHEME_END_OF_LIST);}}
else{
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4146,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4150,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4152,a[2]=t10,a[3]=t15,a[4]=t12,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],a[8]=((C_word)li19),tmp=(C_word)a,a+=9,tmp));
t17=((C_word*)t15)[1];
f_4152(t17,t13,t6);}}

/* loop1790 in parse-clause in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_4152(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4152,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4179,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=f_4179(C_a_i(&a,15),t3,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(t2,C_fix(1));
/* loop17901803 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(t2,C_fix(1));
/* loop17901803 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g1806 in loop1790 in parse-clause in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static C_word C_fcall f_4179(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t3,t4);
return(C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k4148 in parse-clause in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4144 in parse-clause in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4146(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4146,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
if(C_truep(((C_word*)t0)[6])){
t4=C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4119,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t8=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4138,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}

/* k4136 in k4144 in parse-clause in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4138,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k4117 in k4144 in parse-clause in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4119,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k4087 in parse-clause in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4089,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k4068 in parse-clause in k4024 in k4021 in k4018 in k4015 in k4012 in k4009 in k4006 in k4003 in a4000 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_4070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4070,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k3997 in k4408 in k4412 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 874  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[83],((C_word*)t0)[2],t1);}

/* k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2353(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[67],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,lf[41],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,lf[65],t5);
t7=C_a_i_cons(&a,2,lf[67],t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3528,a[2]=t8,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3530,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 914  ##sys#er-transformer */
t11=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}

/* a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3530,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3534,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 916  ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[68],t2,lf[81]);}

/* k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3534,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_cadddr(((C_word*)t0)[4]);
t5=C_i_cddddr(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3549,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 921  r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[55]);}

/* k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 922  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3552,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 923  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[30]);}

/* k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 924  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[41]);}

/* k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3558,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm: 925  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[67]);}

/* k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3561,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3567,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 927  r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[80]);}

/* k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 928  r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[79]);}

/* k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3570,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3938,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3938(t10,t6,((C_word*)t0)[3]);}

/* loop1872 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_3938(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3938,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=*((C_word*)lf[78]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3967,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
/* g18881889 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3965 in loop1872 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3967(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3967,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop18721885 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3938(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop18721885 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3938(t6,((C_word*)t0)[3],t5);}}

/* k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3573(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3573,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[14],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[13],t2);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3885,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t3,tmp=(C_word)a,a+=15,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3889,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3891,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=((C_word*)t0)[2],a[6]=((C_word)li15),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_3891(t13,t9,t1);}

/* loop1899 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_3891(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3891,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3918,a[2]=((C_word*)t0)[5],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=f_3918(t3,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(t2,C_fix(1));
/* loop18991912 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=C_slot(t2,C_fix(1));
/* loop18991912 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g1915 in loop1899 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static C_word C_fcall f_3918(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
if(C_truep(C_i_memq(t1,((C_word*)t0)[2]))){
t2=t1;
return(t2);}
else{
return(lf[77]);}}

/* k3887 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k3883 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3885(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3885,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[14],t1);
t3=C_a_i_cons(&a,2,lf[69],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[13],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[12],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[11],C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,((C_word*)t0)[10],t7);
t9=C_a_i_cons(&a,2,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,((C_word*)t0)[8],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=C_a_i_cons(&a,2,((C_word*)t0)[11],t11);
t13=C_a_i_cons(&a,2,lf[70],t12);
t14=C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
t15=C_a_i_cons(&a,2,t8,t14);
t16=C_a_i_cons(&a,2,((C_word*)t0)[12],t15);
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t6,a[5]=t16,tmp=(C_word)a,a+=6,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3600,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t20,a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[11],a[10]=((C_word)li13),tmp=(C_word)a,a+=11,tmp));
t22=((C_word*)t20)[1];
f_3602(t22,t18,((C_word*)t0)[2],C_fix(1));}

/* loop in k3883 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_3602(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3602,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_i_car(t2);
t5=C_i_memq(lf[71],*((C_word*)lf[72]+1));
t6=C_i_cddr(t4);
t7=C_i_pairp(t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[9],C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,((C_word*)t0)[7],t9);
t11=C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=C_a_i_cons(&a,2,((C_word*)t0)[9],t11);
t13=C_a_i_cons(&a,2,lf[73],t12);
t14=C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
t15=C_a_i_cons(&a,2,lf[74],t14);
t16=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t17=C_a_i_cons(&a,2,((C_word*)t0)[9],t16);
t18=C_a_i_cons(&a,2,lf[75],t17);
t19=C_a_i_cons(&a,2,t18,C_SCHEME_END_OF_LIST);
t20=C_a_i_cons(&a,2,t15,t19);
t21=C_a_i_cons(&a,2,t8,t20);
t22=C_a_i_cons(&a,2,((C_word*)t0)[6],t21);
t23=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3628,a[2]=((C_word*)t0)[3],a[3]=t22,a[4]=t5,a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=t2,a[9]=t1,a[10]=((C_word*)t0)[5],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t7)){
t24=C_i_caddr(t4);
t25=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t26=C_a_i_cons(&a,2,((C_word*)t0)[9],t25);
t27=C_a_i_cons(&a,2,t24,t26);
t28=C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t29=C_a_i_cons(&a,2,((C_word*)t0)[7],t28);
t30=C_a_i_cons(&a,2,t29,C_SCHEME_END_OF_LIST);
t31=C_a_i_cons(&a,2,((C_word*)t0)[9],t30);
t32=C_a_i_cons(&a,2,lf[73],t31);
t33=C_a_i_cons(&a,2,t32,C_SCHEME_END_OF_LIST);
t34=C_a_i_cons(&a,2,lf[74],t33);
t35=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t36=C_a_i_cons(&a,2,t3,t35);
t37=C_a_i_cons(&a,2,((C_word*)t0)[9],t36);
t38=C_a_i_cons(&a,2,lf[76],t37);
t39=C_a_i_cons(&a,2,t38,C_SCHEME_END_OF_LIST);
t40=C_a_i_cons(&a,2,t34,t39);
t41=C_a_i_cons(&a,2,t27,t40);
t42=C_a_i_cons(&a,2,((C_word*)t0)[5],t41);
t43=t23;
f_3628(t43,C_a_i_cons(&a,2,t42,C_SCHEME_END_OF_LIST));}
else{
t24=t23;
f_3628(t24,C_SCHEME_END_OF_LIST);}}}

/* k3626 in loop in k3883 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_3628(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3628,NULL,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3664,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_i_caddr(((C_word*)t0)[11]);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[2],t7);
t9=t3;
f_3664(t9,C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST));}
else{
t5=t3;
f_3664(t5,C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}}

/* k3662 in k3626 in loop in k3883 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_3664(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3664,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3640,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3644,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cdr(((C_word*)t0)[4]);
t7=C_fixnum_increase(((C_word*)t0)[3]);
/* chicken-syntax.scm: 958  loop */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3602(t8,t5,t6,t7);}

/* k3642 in k3662 in k3626 in loop in k3883 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k3638 in k3662 in k3626 in loop in k3883 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3640,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* ##sys#append */
t3=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k3598 in k3883 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k3594 in k3883 in k3571 in k3568 in k3565 in k3559 in k3556 in k3553 in k3550 in k3547 in k3532 in a3529 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3596,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k3526 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 911  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[68],((C_word*)t0)[2],t1);}

/* k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3520,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 965  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[58]);}

/* k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3520,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[58],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3328,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3330,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 966  ##sys#er-transformer */
t6=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3330,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3334,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 968  r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[63]);}

/* k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3337,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 969  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[62]);}

/* k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 970  r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[58]);}

/* k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 971  r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 972  r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3346,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[9]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3355,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word)li11),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_3355(t6,((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_3355(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3355,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3365,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=t5,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 975  reverse */
t7=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3458,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t4,a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t7=C_i_car(t2);
/* chicken-syntax.scm: 982  c */
t8=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[2],t7);}}

/* k3456 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3458,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3461,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3480,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 983  gensym */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3486,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[9]);
/* chicken-syntax.scm: 985  c */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}}

/* k3484 in k3456 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3486,2,t0,t1);}
if(C_truep(t1)){
/* chicken-syntax.scm: 985  loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3355(t2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST,((C_word*)t0)[4],((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* chicken-syntax.scm: 986  loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3355(t5,((C_word*)t0)[5],t2,((C_word*)t0)[4],t4,C_SCHEME_FALSE);}}

/* k3478 in k3456 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 983  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3459 in k3456 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3461,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[6]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm: 984  loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3355(t5,((C_word*)t0)[2],t2,t3,t4,C_SCHEME_FALSE);}

/* k3363 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 976  reverse */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3366 in k3363 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3368(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3368,2,t0,t1);}
if(C_truep(((C_word*)t0)[8])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3374,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3417,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 978  gensym */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_i_car(t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3440,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=C_i_cdr(t1);
/* ##sys#append */
t7=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}}

/* k3438 in k3366 in k3363 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3440,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[2],t4));}

/* k3415 in k3366 in k3363 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 978  r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3372 in k3366 in k3363 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3385,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* ##sys#append */
t3=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k3383 in k3372 in k3366 in k3363 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3385,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3405,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_i_cdr(((C_word*)t0)[6]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
/* ##sys#append */
t6=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* k3403 in k3383 in k3372 in k3366 in k3363 in loop in k3344 in k3341 in k3338 in k3335 in k3332 in a3329 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3405,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k3326 in k3518 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 963  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[66],((C_word*)t0)[2],t1);}

/* k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3320,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 990  ##sys#primitive-alias */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[58]);}

/* k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3320,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[58],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3097,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3099,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 991  ##sys#er-transformer */
t6=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3099,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3103,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 993  r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[64]);}

/* k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 994  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3106,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 995  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[58]);}

/* k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 996  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[63]);}

/* k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3112,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 997  r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[62]);}

/* k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[9]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3124,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li9),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_3124(t6,((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_3124(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3124,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3134,a[2]=t5,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t6,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 1000 reverse */
t8=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3243,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=t3,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
t8=C_i_car(t2);
/* chicken-syntax.scm: 1010 c */
t9=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,((C_word*)t0)[2],t8);}}

/* k3241 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3243,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3246,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3265,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 1011 gensym */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3271,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[10]);
/* chicken-syntax.scm: 1013 c */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}}

/* k3269 in k3241 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3271,2,t0,t1);}
if(C_truep(t1)){
/* chicken-syntax.scm: 1013 loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_3124(t2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3277,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3304,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 1015 gensym */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3302 in k3269 in k3241 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1015 r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3275 in k3269 in k3241 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3277,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[7]);
t3=C_i_car(((C_word*)t0)[7]);
t4=C_a_i_list(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[6]);
t6=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* chicken-syntax.scm: 1016 loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3124(t7,((C_word*)t0)[3],t2,((C_word*)t0)[2],t5,t6,C_SCHEME_FALSE);}

/* k3263 in k3241 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1011 r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3244 in k3241 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3246,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[7]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* chicken-syntax.scm: 1012 loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3124(t5,((C_word*)t0)[3],t2,t3,((C_word*)t0)[2],t4,C_SCHEME_FALSE);}

/* k3132 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3137,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 1001 reverse */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3135 in k3132 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3137,2,t0,t1);}
if(C_truep(((C_word*)t0)[9])){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3143,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3198,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 1003 gensym */
t4=*((C_word*)lf[60]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3233,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=C_i_cdr(t1);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_END_OF_LIST);}}

/* k3231 in k3135 in k3132 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3233,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,((C_word*)t0)[2],t7));}

/* k3196 in k3135 in k3132 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1003 r */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3141 in k3135 in k3132 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3166,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* ##sys#append */
t3=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k3164 in k3141 in k3135 in k3132 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3166,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3186,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=C_i_cdr(((C_word*)t0)[8]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
/* ##sys#append */
t6=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* k3184 in k3164 in k3141 in k3135 in k3132 in loop in k3113 in k3110 in k3107 in k3104 in k3101 in a3098 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3186(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3186,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[5],t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,((C_word*)t0)[4],t7);
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_cons(&a,2,((C_word*)t0)[2],t8));}

/* k3095 in k3318 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 988  ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[59],((C_word*)t0)[2],t1);}

/* k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2816,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2818,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1026 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2818,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2822,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 1028 ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[36],t2,lf[57]);}

/* k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 1029 r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[56]);}

/* k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 1030 r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2828,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 1031 r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[54]);}

/* k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2834,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 1032 r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[53]);}

/* k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 1033 r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[52]);}

/* k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2837,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[9]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li7),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_2846(t6,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t2,C_SCHEME_FALSE);}

/* loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_2846(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2846,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t4))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2856,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2986,a[2]=((C_word*)t0)[9],a[3]=t6,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t8=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t5,C_SCHEME_END_OF_LIST);}
else{
t7=t6;
f_2856(t7,lf[46]);}}
else{
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=t5,a[7]=t3,a[8]=t1,a[9]=((C_word*)t0)[5],a[10]=t2,a[11]=((C_word*)t0)[6],a[12]=t4,tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(t4))){
t7=C_i_car(t4);
t8=t6;
f_2992(t8,C_i_pairp(t7));}
else{
t7=t6;
f_2992(t7,C_SCHEME_FALSE);}}}

/* k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_2992(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2992,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 1048 caar */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[12]);}
else{
/* chicken-syntax.scm: 1059 syntax-error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[8],lf[36],lf[51],((C_word*)t0)[12]);}}

/* k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2995,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3004,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm: 1050 c */
t4=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t1);}

/* k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3004,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3023,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1051 cdar */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm: 1052 c */
t3=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k3027 in k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3029,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3048,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1053 cdar */
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm: 1054 c */
t3=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k3052 in k3027 in k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3054,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f11146,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 1055 cdar */
t5=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11150,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1055 cdar */
t5=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3076,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1057 caar */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k3074 in k3052 in k3027 in k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1057 syntax-error */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[36],lf[49],t1);}

/* f11150 in k3052 in k3027 in k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f11150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1055 append */
t2=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t1);}

/* f11146 in k3052 in k3027 in k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f11146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1055 append */
t2=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3059 in k3052 in k3027 in k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1055 loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2846(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3046 in k3027 in k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k3042 in k3027 in k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3044,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
/* chicken-syntax.scm: 1053 loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2846(t4,((C_word*)t0)[5],((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3021 in k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k3017 in k3002 in k2993 in k2990 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_3019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3019,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
/* chicken-syntax.scm: 1051 loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2846(t4,((C_word*)t0)[5],t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2984 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2986,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
f_2856(t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k2854 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_2856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2856,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm: 1039 r */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[45]);}

/* k2861 in k2854 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* ##sys#append */
t3=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k2969 in k2861 in k2854 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2971,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_a_i_cons(&a,2,lf[37],t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 1041 r */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[44]);}

/* k2957 in k2969 in k2861 in k2854 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2959,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[38],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k2953 in k2957 in k2969 in k2861 in k2854 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2955,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[9],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm: 1042 r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[43]);}

/* k2889 in k2953 in k2957 in k2969 in k2861 in k2854 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2891,2,t0,t1);}
t2=C_a_i_cons(&a,2,*((C_word*)lf[39]+1),C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,lf[40],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[9],t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=t5,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 1045 r */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[42]);}

/* k2917 in k2889 in k2953 in k2957 in k2969 in k2861 in k2854 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2931,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm: 1045 r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[41]);}

/* k2929 in k2917 in k2889 in k2953 in k2957 in k2969 in k2861 in k2854 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2931,2,t0,t1);}
t2=C_a_i_cons(&a,2,*((C_word*)lf[39]+1),C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[10],t4);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2915,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t5,tmp=(C_word)a,a+=10,tmp);
/* ##sys#append */
t7=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k2913 in k2929 in k2917 in k2889 in k2953 in k2957 in k2969 in k2861 in k2854 in loop in k2835 in k2832 in k2829 in k2826 in k2823 in k2820 in a2817 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2915(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2915,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[9],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[8],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[7],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[4],t7);
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_cons(&a,2,((C_word*)t0)[2],t8));}

/* k2814 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1024 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[36],C_SCHEME_END_OF_LIST,t1);}

/* k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2712,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2714,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1068 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2713 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2714,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2718,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 1070 ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[33],t2,lf[35]);}

/* k2716 in a2713 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2718,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm: 1072 r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[34]);}

/* k2722 in k2716 in a2713 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2724,2,t0,t1);}
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t2=C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2769,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm: 1075 r */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[21]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2808,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cddr(((C_word*)t0)[3]);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}}

/* k2806 in k2722 in k2716 in a2713 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2808,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k2767 in k2722 in k2716 in a2713 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2769,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2781,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=C_i_cddr(((C_word*)t0)[2]);
/* ##sys#append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_END_OF_LIST);}

/* k2779 in k2767 in k2722 in k2716 in a2713 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2781(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2781,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_car(((C_word*)t0)[4]);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t6,t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}

/* k2710 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1066 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[33],C_SCHEME_END_OF_LIST,t1);}

/* k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2675,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2677,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1085 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2676 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2677,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2681,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 1087 ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[29],t2,lf[32]);}

/* k2679 in a2676 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2688,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 1088 r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[31]);}

/* k2686 in k2679 in a2676 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2688,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2700,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm: 1089 r */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[30]);}

/* k2698 in k2686 in k2679 in a2676 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2700,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2704,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k2702 in k2698 in k2686 in k2679 in a2676 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2704,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k2673 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1083 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[29],C_SCHEME_END_OF_LIST,t1);}

/* k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2371,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2653,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2655,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1096 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2654 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2655,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2663,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 1098 r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[28]);}

/* k2661 in a2654 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2663,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2667,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* ##sys#append */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k2665 in k2661 in a2654 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2667,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2651 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1094 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[26],C_SCHEME_END_OF_LIST,t1);}

/* k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2628,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2630,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1105 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2629 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2630,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2634,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm: 1107 ##sys#check-syntax */
t6=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[22],t2,lf[25]);}

/* k2632 in a2629 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2634,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,C_SCHEME_TRUE,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t2,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,lf[23],t4));}

/* k2626 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1103 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[22],C_SCHEME_END_OF_LIST,t1);}

/* k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2462,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2464,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1115 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2463 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2464(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2464,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2474,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_i_cdr(t5);
t8=t6;
f_2474(t8,C_eqp(t7,C_SCHEME_END_OF_LIST));}
else{
t7=t6;
f_2474(t7,C_SCHEME_FALSE);}}

/* k2472 in a2463 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_2474(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2474,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2484,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* rename21272132 */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[20]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=C_i_car(((C_word*)t0)[5]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cdr(((C_word*)t0)[5]);
/* ##sys#list? */
t5=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}
else{
t4=t2;
f_2498(2,t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_2498(2,t3,C_SCHEME_FALSE);}}}

/* k2496 in k2472 in a2463 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2498,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_car(t2);
t4=C_i_car(((C_word*)t0)[5]);
t5=C_i_cdr(t4);
t6=C_i_cdr(((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2514,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t6,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* rename21272132 */
t8=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[19]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=C_i_cdr(((C_word*)t0)[5]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_cdr(t3);
t5=t2;
f_2548(t5,C_eqp(t4,C_SCHEME_END_OF_LIST));}
else{
t4=t2;
f_2548(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_2548(t3,C_SCHEME_FALSE);}}}

/* k2546 in k2496 in k2472 in a2463 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_fcall f_2548(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2548,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2561,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* rename21272132 */
t6=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[20]);}
else{
/* ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k2559 in k2546 in k2496 in k2472 in a2463 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2561,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* k2512 in k2496 in k2472 in a2463 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2530,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* rename21272132 */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* k2528 in k2512 in k2496 in k2472 in a2463 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2530,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[2],t5));}

/* k2482 in k2472 in a2463 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2484,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t1,t3));}

/* k2460 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1113 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[19],C_SCHEME_END_OF_LIST,t1);}

/* k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2406,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2408,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1126 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2407 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2408,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2418,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2447,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=C_i_car(t5);
/* ##sys#list? */
t9=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}
else{
t7=t6;
f_2418(2,t7,C_SCHEME_FALSE);}}

/* k2445 in a2407 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[3]);
/* ##sys#list? */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
f_2418(2,t2,C_SCHEME_FALSE);}}

/* k2416 in a2407 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2418,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2431,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* rename21792184 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[16]);}
else{
/* ##sys#syntax-rules-mismatch */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k2429 in k2416 in a2407 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2431,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* k2404 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1124 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[15],C_SCHEME_END_OF_LIST,t1);}

/* k2381 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2396,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2398,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1136 ##sys#er-transformer */
t5=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a2397 in k2381 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2398,5,t0,t1,t2,t3,t4);}
/* chicken-syntax.scm: 1138 syntax-error */
t5=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[11],lf[13]);}

/* k2394 in k2381 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-syntax.scm: 1134 ##sys#extend-macro-environment */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[11],C_SCHEME_END_OF_LIST,t1);}

/* k2384 in k2381 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2386,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2389,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1141 ##sys#macro-subset */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],*((C_word*)lf[9]+1));}

/* k2387 in k2384 in k2381 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2389,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! chicken-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2392,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm: 1146 register-feature! */
t4=*((C_word*)lf[1]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t3,lf[2],lf[3],lf[4],lf[5],lf[6],lf[7]);}

/* k2390 in k2387 in k2384 in k2381 in k2378 in k2375 in k2372 in k2369 in k2366 in k2363 in k2360 in k2357 in k2354 in k2351 in k2348 in k2345 in k2342 in k2339 in k2336 in k2333 in k2330 in k2327 in k2324 in k2321 in k2318 in k2315 in k2312 in k2309 in k2306 in k2303 in k2300 in k2297 in k2294 in k2291 in k2288 in k2285 in k2282 in k2279 in k2276 in k2273 in k2270 in k2267 in k2264 in k2261 in k2257 */
static void C_ccall f_2392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[701] = {
{"toplevel:chicken_syntax_scm",(void*)C_chicken_syntax_toplevel},
{"f_2259:chicken_syntax_scm",(void*)f_2259},
{"f_2263:chicken_syntax_scm",(void*)f_2263},
{"f_10755:chicken_syntax_scm",(void*)f_10755},
{"f_10759:chicken_syntax_scm",(void*)f_10759},
{"f_10766:chicken_syntax_scm",(void*)f_10766},
{"f_10753:chicken_syntax_scm",(void*)f_10753},
{"f_2266:chicken_syntax_scm",(void*)f_2266},
{"f_10647:chicken_syntax_scm",(void*)f_10647},
{"f_10738:chicken_syntax_scm",(void*)f_10738},
{"f_10745:chicken_syntax_scm",(void*)f_10745},
{"f_10660:chicken_syntax_scm",(void*)f_10660},
{"f_10645:chicken_syntax_scm",(void*)f_10645},
{"f_2269:chicken_syntax_scm",(void*)f_2269},
{"f_10200:chicken_syntax_scm",(void*)f_10200},
{"f_10204:chicken_syntax_scm",(void*)f_10204},
{"f_10213:chicken_syntax_scm",(void*)f_10213},
{"f_10216:chicken_syntax_scm",(void*)f_10216},
{"f_10222:chicken_syntax_scm",(void*)f_10222},
{"f_10225:chicken_syntax_scm",(void*)f_10225},
{"f_10228:chicken_syntax_scm",(void*)f_10228},
{"f_10231:chicken_syntax_scm",(void*)f_10231},
{"f_10641:chicken_syntax_scm",(void*)f_10641},
{"f_10601:chicken_syntax_scm",(void*)f_10601},
{"f_10633:chicken_syntax_scm",(void*)f_10633},
{"f_10593:chicken_syntax_scm",(void*)f_10593},
{"f_10549:chicken_syntax_scm",(void*)f_10549},
{"f_10260:chicken_syntax_scm",(void*)f_10260},
{"f_10270:chicken_syntax_scm",(void*)f_10270},
{"f_10537:chicken_syntax_scm",(void*)f_10537},
{"f_10273:chicken_syntax_scm",(void*)f_10273},
{"f_10533:chicken_syntax_scm",(void*)f_10533},
{"f_10276:chicken_syntax_scm",(void*)f_10276},
{"f_10323:chicken_syntax_scm",(void*)f_10323},
{"f_10287:chicken_syntax_scm",(void*)f_10287},
{"f_10258:chicken_syntax_scm",(void*)f_10258},
{"f_10254:chicken_syntax_scm",(void*)f_10254},
{"f_10198:chicken_syntax_scm",(void*)f_10198},
{"f_2272:chicken_syntax_scm",(void*)f_2272},
{"f_10057:chicken_syntax_scm",(void*)f_10057},
{"f_10061:chicken_syntax_scm",(void*)f_10061},
{"f_10064:chicken_syntax_scm",(void*)f_10064},
{"f_10067:chicken_syntax_scm",(void*)f_10067},
{"f_10103:chicken_syntax_scm",(void*)f_10103},
{"f_10118:chicken_syntax_scm",(void*)f_10118},
{"f_10172:chicken_syntax_scm",(void*)f_10172},
{"f_10133:chicken_syntax_scm",(void*)f_10133},
{"f_10096:chicken_syntax_scm",(void*)f_10096},
{"f_10055:chicken_syntax_scm",(void*)f_10055},
{"f_2275:chicken_syntax_scm",(void*)f_2275},
{"f_9958:chicken_syntax_scm",(void*)f_9958},
{"f_9962:chicken_syntax_scm",(void*)f_9962},
{"f_9965:chicken_syntax_scm",(void*)f_9965},
{"f_9968:chicken_syntax_scm",(void*)f_9968},
{"f_10047:chicken_syntax_scm",(void*)f_10047},
{"f_9956:chicken_syntax_scm",(void*)f_9956},
{"f_2278:chicken_syntax_scm",(void*)f_2278},
{"f_9940:chicken_syntax_scm",(void*)f_9940},
{"f_9948:chicken_syntax_scm",(void*)f_9948},
{"f_9938:chicken_syntax_scm",(void*)f_9938},
{"f_2281:chicken_syntax_scm",(void*)f_2281},
{"f_9851:chicken_syntax_scm",(void*)f_9851},
{"f_9855:chicken_syntax_scm",(void*)f_9855},
{"f_9858:chicken_syntax_scm",(void*)f_9858},
{"f_9861:chicken_syntax_scm",(void*)f_9861},
{"f_9927:chicken_syntax_scm",(void*)f_9927},
{"f_9864:chicken_syntax_scm",(void*)f_9864},
{"f_9877:chicken_syntax_scm",(void*)f_9877},
{"f_9921:chicken_syntax_scm",(void*)f_9921},
{"f_9888:chicken_syntax_scm",(void*)f_9888},
{"f_9896:chicken_syntax_scm",(void*)f_9896},
{"f_9898:chicken_syntax_scm",(void*)f_9898},
{"f_9915:chicken_syntax_scm",(void*)f_9915},
{"f_9883:chicken_syntax_scm",(void*)f_9883},
{"f_9875:chicken_syntax_scm",(void*)f_9875},
{"f_9871:chicken_syntax_scm",(void*)f_9871},
{"f_9849:chicken_syntax_scm",(void*)f_9849},
{"f_2284:chicken_syntax_scm",(void*)f_2284},
{"f_9737:chicken_syntax_scm",(void*)f_9737},
{"f_9741:chicken_syntax_scm",(void*)f_9741},
{"f_9750:chicken_syntax_scm",(void*)f_9750},
{"f_9753:chicken_syntax_scm",(void*)f_9753},
{"f_9756:chicken_syntax_scm",(void*)f_9756},
{"f_9816:chicken_syntax_scm",(void*)f_9816},
{"f_9791:chicken_syntax_scm",(void*)f_9791},
{"f_9735:chicken_syntax_scm",(void*)f_9735},
{"f_2287:chicken_syntax_scm",(void*)f_2287},
{"f_9600:chicken_syntax_scm",(void*)f_9600},
{"f_9604:chicken_syntax_scm",(void*)f_9604},
{"f_9616:chicken_syntax_scm",(void*)f_9616},
{"f_9619:chicken_syntax_scm",(void*)f_9619},
{"f_9622:chicken_syntax_scm",(void*)f_9622},
{"f_9669:chicken_syntax_scm",(void*)f_9669},
{"f_9598:chicken_syntax_scm",(void*)f_9598},
{"f_2290:chicken_syntax_scm",(void*)f_2290},
{"f_8914:chicken_syntax_scm",(void*)f_8914},
{"f_8918:chicken_syntax_scm",(void*)f_8918},
{"f_9561:chicken_syntax_scm",(void*)f_9561},
{"f_9590:chicken_syntax_scm",(void*)f_9590},
{"f_8927:chicken_syntax_scm",(void*)f_8927},
{"f_9517:chicken_syntax_scm",(void*)f_9517},
{"f_9555:chicken_syntax_scm",(void*)f_9555},
{"f_9544:chicken_syntax_scm",(void*)f_9544},
{"f_9552:chicken_syntax_scm",(void*)f_9552},
{"f_8930:chicken_syntax_scm",(void*)f_8930},
{"f_9473:chicken_syntax_scm",(void*)f_9473},
{"f_9511:chicken_syntax_scm",(void*)f_9511},
{"f_9500:chicken_syntax_scm",(void*)f_9500},
{"f_9508:chicken_syntax_scm",(void*)f_9508},
{"f_8933:chicken_syntax_scm",(void*)f_8933},
{"f_8936:chicken_syntax_scm",(void*)f_8936},
{"f_8939:chicken_syntax_scm",(void*)f_8939},
{"f_9438:chicken_syntax_scm",(void*)f_9438},
{"f_9467:chicken_syntax_scm",(void*)f_9467},
{"f_9387:chicken_syntax_scm",(void*)f_9387},
{"f_9389:chicken_syntax_scm",(void*)f_9389},
{"f_9422:chicken_syntax_scm",(void*)f_9422},
{"f_9402:chicken_syntax_scm",(void*)f_9402},
{"f_9298:chicken_syntax_scm",(void*)f_9298},
{"f_9365:chicken_syntax_scm",(void*)f_9365},
{"f_9379:chicken_syntax_scm",(void*)f_9379},
{"f_9310:chicken_syntax_scm",(void*)f_9310},
{"f_9312:chicken_syntax_scm",(void*)f_9312},
{"f_9345:chicken_syntax_scm",(void*)f_9345},
{"f_9325:chicken_syntax_scm",(void*)f_9325},
{"f_9306:chicken_syntax_scm",(void*)f_9306},
{"f_9302:chicken_syntax_scm",(void*)f_9302},
{"f_8950:chicken_syntax_scm",(void*)f_8950},
{"f_9234:chicken_syntax_scm",(void*)f_9234},
{"f_9247:chicken_syntax_scm",(void*)f_9247},
{"f_9154:chicken_syntax_scm",(void*)f_9154},
{"f_9172:chicken_syntax_scm",(void*)f_9172},
{"f_9185:chicken_syntax_scm",(void*)f_9185},
{"f_9162:chicken_syntax_scm",(void*)f_9162},
{"f_9158:chicken_syntax_scm",(void*)f_9158},
{"f_9150:chicken_syntax_scm",(void*)f_9150},
{"f_9142:chicken_syntax_scm",(void*)f_9142},
{"f_9074:chicken_syntax_scm",(void*)f_9074},
{"f_9087:chicken_syntax_scm",(void*)f_9087},
{"f_8994:chicken_syntax_scm",(void*)f_8994},
{"f_9012:chicken_syntax_scm",(void*)f_9012},
{"f_9025:chicken_syntax_scm",(void*)f_9025},
{"f_9002:chicken_syntax_scm",(void*)f_9002},
{"f_8998:chicken_syntax_scm",(void*)f_8998},
{"f_8990:chicken_syntax_scm",(void*)f_8990},
{"f_8912:chicken_syntax_scm",(void*)f_8912},
{"f_2293:chicken_syntax_scm",(void*)f_2293},
{"f_8793:chicken_syntax_scm",(void*)f_8793},
{"f_8797:chicken_syntax_scm",(void*)f_8797},
{"f_8803:chicken_syntax_scm",(void*)f_8803},
{"f_8904:chicken_syntax_scm",(void*)f_8904},
{"f_8809:chicken_syntax_scm",(void*)f_8809},
{"f_8812:chicken_syntax_scm",(void*)f_8812},
{"f_8815:chicken_syntax_scm",(void*)f_8815},
{"f_8855:chicken_syntax_scm",(void*)f_8855},
{"f_8878:chicken_syntax_scm",(void*)f_8878},
{"f_8885:chicken_syntax_scm",(void*)f_8885},
{"f_8892:chicken_syntax_scm",(void*)f_8892},
{"f_8868:chicken_syntax_scm",(void*)f_8868},
{"f_8818:chicken_syntax_scm",(void*)f_8818},
{"f_8791:chicken_syntax_scm",(void*)f_8791},
{"f_2296:chicken_syntax_scm",(void*)f_2296},
{"f_8307:chicken_syntax_scm",(void*)f_8307},
{"f_8311:chicken_syntax_scm",(void*)f_8311},
{"f_8320:chicken_syntax_scm",(void*)f_8320},
{"f_8323:chicken_syntax_scm",(void*)f_8323},
{"f_8326:chicken_syntax_scm",(void*)f_8326},
{"f_8754:chicken_syntax_scm",(void*)f_8754},
{"f_8783:chicken_syntax_scm",(void*)f_8783},
{"f_8329:chicken_syntax_scm",(void*)f_8329},
{"f_8719:chicken_syntax_scm",(void*)f_8719},
{"f_8748:chicken_syntax_scm",(void*)f_8748},
{"f_8332:chicken_syntax_scm",(void*)f_8332},
{"f_8675:chicken_syntax_scm",(void*)f_8675},
{"f_8713:chicken_syntax_scm",(void*)f_8713},
{"f_8702:chicken_syntax_scm",(void*)f_8702},
{"f_8710:chicken_syntax_scm",(void*)f_8710},
{"f_8335:chicken_syntax_scm",(void*)f_8335},
{"f_8631:chicken_syntax_scm",(void*)f_8631},
{"f_8669:chicken_syntax_scm",(void*)f_8669},
{"f_8658:chicken_syntax_scm",(void*)f_8658},
{"f_8666:chicken_syntax_scm",(void*)f_8666},
{"f_8338:chicken_syntax_scm",(void*)f_8338},
{"f_8582:chicken_syntax_scm",(void*)f_8582},
{"f_8615:chicken_syntax_scm",(void*)f_8615},
{"f_8595:chicken_syntax_scm",(void*)f_8595},
{"f_8527:chicken_syntax_scm",(void*)f_8527},
{"f_8533:chicken_syntax_scm",(void*)f_8533},
{"f_8566:chicken_syntax_scm",(void*)f_8566},
{"f_8546:chicken_syntax_scm",(void*)f_8546},
{"f_8531:chicken_syntax_scm",(void*)f_8531},
{"f_8349:chicken_syntax_scm",(void*)f_8349},
{"f_8423:chicken_syntax_scm",(void*)f_8423},
{"f_8436:chicken_syntax_scm",(void*)f_8436},
{"f_8454:chicken_syntax_scm",(void*)f_8454},
{"f_8421:chicken_syntax_scm",(void*)f_8421},
{"f_8417:chicken_syntax_scm",(void*)f_8417},
{"f_8397:chicken_syntax_scm",(void*)f_8397},
{"f_8305:chicken_syntax_scm",(void*)f_8305},
{"f_2299:chicken_syntax_scm",(void*)f_2299},
{"f_8262:chicken_syntax_scm",(void*)f_8262},
{"f_8266:chicken_syntax_scm",(void*)f_8266},
{"f_8273:chicken_syntax_scm",(void*)f_8273},
{"f_8293:chicken_syntax_scm",(void*)f_8293},
{"f_8297:chicken_syntax_scm",(void*)f_8297},
{"f_8260:chicken_syntax_scm",(void*)f_8260},
{"f_2302:chicken_syntax_scm",(void*)f_2302},
{"f_8209:chicken_syntax_scm",(void*)f_8209},
{"f_8213:chicken_syntax_scm",(void*)f_8213},
{"f_8220:chicken_syntax_scm",(void*)f_8220},
{"f_8248:chicken_syntax_scm",(void*)f_8248},
{"f_8252:chicken_syntax_scm",(void*)f_8252},
{"f_8207:chicken_syntax_scm",(void*)f_8207},
{"f_2305:chicken_syntax_scm",(void*)f_2305},
{"f_7981:chicken_syntax_scm",(void*)f_7981},
{"f_7985:chicken_syntax_scm",(void*)f_7985},
{"f_7994:chicken_syntax_scm",(void*)f_7994},
{"f_8166:chicken_syntax_scm",(void*)f_8166},
{"f_8195:chicken_syntax_scm",(void*)f_8195},
{"f_8063:chicken_syntax_scm",(void*)f_8063},
{"f_8096:chicken_syntax_scm",(void*)f_8096},
{"f_8109:chicken_syntax_scm",(void*)f_8109},
{"f_8094:chicken_syntax_scm",(void*)f_8094},
{"f_8090:chicken_syntax_scm",(void*)f_8090},
{"f_7979:chicken_syntax_scm",(void*)f_7979},
{"f_2308:chicken_syntax_scm",(void*)f_2308},
{"f_7939:chicken_syntax_scm",(void*)f_7939},
{"f_7943:chicken_syntax_scm",(void*)f_7943},
{"f_7963:chicken_syntax_scm",(void*)f_7963},
{"f_7971:chicken_syntax_scm",(void*)f_7971},
{"f_7946:chicken_syntax_scm",(void*)f_7946},
{"f_7953:chicken_syntax_scm",(void*)f_7953},
{"f_7957:chicken_syntax_scm",(void*)f_7957},
{"f_7937:chicken_syntax_scm",(void*)f_7937},
{"f_2311:chicken_syntax_scm",(void*)f_2311},
{"f_7414:chicken_syntax_scm",(void*)f_7414},
{"f_7418:chicken_syntax_scm",(void*)f_7418},
{"f_7427:chicken_syntax_scm",(void*)f_7427},
{"f_7430:chicken_syntax_scm",(void*)f_7430},
{"f_7900:chicken_syntax_scm",(void*)f_7900},
{"f_7929:chicken_syntax_scm",(void*)f_7929},
{"f_7505:chicken_syntax_scm",(void*)f_7505},
{"f_7860:chicken_syntax_scm",(void*)f_7860},
{"f_7873:chicken_syntax_scm",(void*)f_7873},
{"f_7508:chicken_syntax_scm",(void*)f_7508},
{"f_7812:chicken_syntax_scm",(void*)f_7812},
{"f_7854:chicken_syntax_scm",(void*)f_7854},
{"f_7839:chicken_syntax_scm",(void*)f_7839},
{"f_7851:chicken_syntax_scm",(void*)f_7851},
{"f_7847:chicken_syntax_scm",(void*)f_7847},
{"f_7511:chicken_syntax_scm",(void*)f_7511},
{"f_7766:chicken_syntax_scm",(void*)f_7766},
{"f_7799:chicken_syntax_scm",(void*)f_7799},
{"f_7806:chicken_syntax_scm",(void*)f_7806},
{"f_7523:chicken_syntax_scm",(void*)f_7523},
{"f_7726:chicken_syntax_scm",(void*)f_7726},
{"f_7530:chicken_syntax_scm",(void*)f_7530},
{"f_7532:chicken_syntax_scm",(void*)f_7532},
{"f_7720:chicken_syntax_scm",(void*)f_7720},
{"f_7604:chicken_syntax_scm",(void*)f_7604},
{"f_7686:chicken_syntax_scm",(void*)f_7686},
{"f_7643:chicken_syntax_scm",(void*)f_7643},
{"f_7623:chicken_syntax_scm",(void*)f_7623},
{"f_7556:chicken_syntax_scm",(void*)f_7556},
{"f_7594:chicken_syntax_scm",(void*)f_7594},
{"f_7583:chicken_syntax_scm",(void*)f_7583},
{"f_7591:chicken_syntax_scm",(void*)f_7591},
{"f_7550:chicken_syntax_scm",(void*)f_7550},
{"f_7554:chicken_syntax_scm",(void*)f_7554},
{"f_7512:chicken_syntax_scm",(void*)f_7512},
{"f_7463:chicken_syntax_scm",(void*)f_7463},
{"f_7486:chicken_syntax_scm",(void*)f_7486},
{"f_7490:chicken_syntax_scm",(void*)f_7490},
{"f_7432:chicken_syntax_scm",(void*)f_7432},
{"f_7453:chicken_syntax_scm",(void*)f_7453},
{"f_7412:chicken_syntax_scm",(void*)f_7412},
{"f_2314:chicken_syntax_scm",(void*)f_2314},
{"f_7342:chicken_syntax_scm",(void*)f_7342},
{"f_7346:chicken_syntax_scm",(void*)f_7346},
{"f_7355:chicken_syntax_scm",(void*)f_7355},
{"f_7358:chicken_syntax_scm",(void*)f_7358},
{"f_7363:chicken_syntax_scm",(void*)f_7363},
{"f_7400:chicken_syntax_scm",(void*)f_7400},
{"f_7381:chicken_syntax_scm",(void*)f_7381},
{"f_7340:chicken_syntax_scm",(void*)f_7340},
{"f_2317:chicken_syntax_scm",(void*)f_2317},
{"f_6971:chicken_syntax_scm",(void*)f_6971},
{"f_6975:chicken_syntax_scm",(void*)f_6975},
{"f_6984:chicken_syntax_scm",(void*)f_6984},
{"f_6987:chicken_syntax_scm",(void*)f_6987},
{"f_7298:chicken_syntax_scm",(void*)f_7298},
{"f_7296:chicken_syntax_scm",(void*)f_7296},
{"f_6990:chicken_syntax_scm",(void*)f_6990},
{"f_7246:chicken_syntax_scm",(void*)f_7246},
{"f_7288:chicken_syntax_scm",(void*)f_7288},
{"f_7273:chicken_syntax_scm",(void*)f_7273},
{"f_7285:chicken_syntax_scm",(void*)f_7285},
{"f_7281:chicken_syntax_scm",(void*)f_7281},
{"f_6993:chicken_syntax_scm",(void*)f_6993},
{"f_7206:chicken_syntax_scm",(void*)f_7206},
{"f_7013:chicken_syntax_scm",(void*)f_7013},
{"f_7027:chicken_syntax_scm",(void*)f_7027},
{"f_7200:chicken_syntax_scm",(void*)f_7200},
{"f_7054:chicken_syntax_scm",(void*)f_7054},
{"f_7152:chicken_syntax_scm",(void*)f_7152},
{"f_7082:chicken_syntax_scm",(void*)f_7082},
{"f_7096:chicken_syntax_scm",(void*)f_7096},
{"f_7123:chicken_syntax_scm",(void*)f_7123},
{"f_7090:chicken_syntax_scm",(void*)f_7090},
{"f_7086:chicken_syntax_scm",(void*)f_7086},
{"f_7021:chicken_syntax_scm",(void*)f_7021},
{"f_7025:chicken_syntax_scm",(void*)f_7025},
{"f_7017:chicken_syntax_scm",(void*)f_7017},
{"f_6994:chicken_syntax_scm",(void*)f_6994},
{"f_6969:chicken_syntax_scm",(void*)f_6969},
{"f_2320:chicken_syntax_scm",(void*)f_2320},
{"f_6965:chicken_syntax_scm",(void*)f_6965},
{"f_6888:chicken_syntax_scm",(void*)f_6888},
{"f_6892:chicken_syntax_scm",(void*)f_6892},
{"f_6895:chicken_syntax_scm",(void*)f_6895},
{"f_6898:chicken_syntax_scm",(void*)f_6898},
{"f_6933:chicken_syntax_scm",(void*)f_6933},
{"f_6886:chicken_syntax_scm",(void*)f_6886},
{"f_2323:chicken_syntax_scm",(void*)f_2323},
{"f_6783:chicken_syntax_scm",(void*)f_6783},
{"f_6787:chicken_syntax_scm",(void*)f_6787},
{"f_6874:chicken_syntax_scm",(void*)f_6874},
{"f_6870:chicken_syntax_scm",(void*)f_6870},
{"f_6789:chicken_syntax_scm",(void*)f_6789},
{"f_6793:chicken_syntax_scm",(void*)f_6793},
{"f_6850:chicken_syntax_scm",(void*)f_6850},
{"f_6802:chicken_syntax_scm",(void*)f_6802},
{"f_6824:chicken_syntax_scm",(void*)f_6824},
{"f_6814:chicken_syntax_scm",(void*)f_6814},
{"f_6805:chicken_syntax_scm",(void*)f_6805},
{"f_6781:chicken_syntax_scm",(void*)f_6781},
{"f_2326:chicken_syntax_scm",(void*)f_2326},
{"f_6620:chicken_syntax_scm",(void*)f_6620},
{"f_6624:chicken_syntax_scm",(void*)f_6624},
{"f_6633:chicken_syntax_scm",(void*)f_6633},
{"f_6636:chicken_syntax_scm",(void*)f_6636},
{"f_6641:chicken_syntax_scm",(void*)f_6641},
{"f_6686:chicken_syntax_scm",(void*)f_6686},
{"f_6753:chicken_syntax_scm",(void*)f_6753},
{"f_6715:chicken_syntax_scm",(void*)f_6715},
{"f_6655:chicken_syntax_scm",(void*)f_6655},
{"f_6659:chicken_syntax_scm",(void*)f_6659},
{"f_6618:chicken_syntax_scm",(void*)f_6618},
{"f_2329:chicken_syntax_scm",(void*)f_2329},
{"f_6420:chicken_syntax_scm",(void*)f_6420},
{"f_6424:chicken_syntax_scm",(void*)f_6424},
{"f_6433:chicken_syntax_scm",(void*)f_6433},
{"f_6436:chicken_syntax_scm",(void*)f_6436},
{"f_6439:chicken_syntax_scm",(void*)f_6439},
{"f_6442:chicken_syntax_scm",(void*)f_6442},
{"f_6445:chicken_syntax_scm",(void*)f_6445},
{"f_6452:chicken_syntax_scm",(void*)f_6452},
{"f_6470:chicken_syntax_scm",(void*)f_6470},
{"f_6486:chicken_syntax_scm",(void*)f_6486},
{"f_6492:chicken_syntax_scm",(void*)f_6492},
{"f_6552:chicken_syntax_scm",(void*)f_6552},
{"f_6579:chicken_syntax_scm",(void*)f_6579},
{"f_6546:chicken_syntax_scm",(void*)f_6546},
{"f_6542:chicken_syntax_scm",(void*)f_6542},
{"f_6534:chicken_syntax_scm",(void*)f_6534},
{"f_6530:chicken_syntax_scm",(void*)f_6530},
{"f_6499:chicken_syntax_scm",(void*)f_6499},
{"f_6468:chicken_syntax_scm",(void*)f_6468},
{"f_6418:chicken_syntax_scm",(void*)f_6418},
{"f_2332:chicken_syntax_scm",(void*)f_2332},
{"f_6414:chicken_syntax_scm",(void*)f_6414},
{"f_6410:chicken_syntax_scm",(void*)f_6410},
{"f_5827:chicken_syntax_scm",(void*)f_5827},
{"f_5831:chicken_syntax_scm",(void*)f_5831},
{"f_5843:chicken_syntax_scm",(void*)f_5843},
{"f_5846:chicken_syntax_scm",(void*)f_5846},
{"f_5849:chicken_syntax_scm",(void*)f_5849},
{"f_6149:chicken_syntax_scm",(void*)f_6149},
{"f_6152:chicken_syntax_scm",(void*)f_6152},
{"f_6361:chicken_syntax_scm",(void*)f_6361},
{"f_6390:chicken_syntax_scm",(void*)f_6390},
{"f_6155:chicken_syntax_scm",(void*)f_6155},
{"f_6317:chicken_syntax_scm",(void*)f_6317},
{"f_6355:chicken_syntax_scm",(void*)f_6355},
{"f_6344:chicken_syntax_scm",(void*)f_6344},
{"f_6352:chicken_syntax_scm",(void*)f_6352},
{"f_6171:chicken_syntax_scm",(void*)f_6171},
{"f_6282:chicken_syntax_scm",(void*)f_6282},
{"f_6311:chicken_syntax_scm",(void*)f_6311},
{"f_6174:chicken_syntax_scm",(void*)f_6174},
{"f_6177:chicken_syntax_scm",(void*)f_6177},
{"f_6180:chicken_syntax_scm",(void*)f_6180},
{"f_6238:chicken_syntax_scm",(void*)f_6238},
{"f_6276:chicken_syntax_scm",(void*)f_6276},
{"f_6265:chicken_syntax_scm",(void*)f_6265},
{"f_6273:chicken_syntax_scm",(void*)f_6273},
{"f_6183:chicken_syntax_scm",(void*)f_6183},
{"f_6186:chicken_syntax_scm",(void*)f_6186},
{"f_6189:chicken_syntax_scm",(void*)f_6189},
{"f_6196:chicken_syntax_scm",(void*)f_6196},
{"f_6156:chicken_syntax_scm",(void*)f_6156},
{"f_6168:chicken_syntax_scm",(void*)f_6168},
{"f_6164:chicken_syntax_scm",(void*)f_6164},
{"f_5948:chicken_syntax_scm",(void*)f_5948},
{"f_5954:chicken_syntax_scm",(void*)f_5954},
{"f_6142:chicken_syntax_scm",(void*)f_6142},
{"f_6130:chicken_syntax_scm",(void*)f_6130},
{"f_6114:chicken_syntax_scm",(void*)f_6114},
{"f_6078:chicken_syntax_scm",(void*)f_6078},
{"f_6028:chicken_syntax_scm",(void*)f_6028},
{"f_6016:chicken_syntax_scm",(void*)f_6016},
{"f_5851:chicken_syntax_scm",(void*)f_5851},
{"f_5859:chicken_syntax_scm",(void*)f_5859},
{"f_5863:chicken_syntax_scm",(void*)f_5863},
{"f_5867:chicken_syntax_scm",(void*)f_5867},
{"f_5869:chicken_syntax_scm",(void*)f_5869},
{"f_5922:chicken_syntax_scm",(void*)f_5922},
{"f_5938:chicken_syntax_scm",(void*)f_5938},
{"f_5934:chicken_syntax_scm",(void*)f_5934},
{"f_5890:chicken_syntax_scm",(void*)f_5890},
{"f_5825:chicken_syntax_scm",(void*)f_5825},
{"f_2335:chicken_syntax_scm",(void*)f_2335},
{"f_5817:chicken_syntax_scm",(void*)f_5817},
{"f_5813:chicken_syntax_scm",(void*)f_5813},
{"f_5809:chicken_syntax_scm",(void*)f_5809},
{"f_5602:chicken_syntax_scm",(void*)f_5602},
{"f_5606:chicken_syntax_scm",(void*)f_5606},
{"f_5609:chicken_syntax_scm",(void*)f_5609},
{"f_5612:chicken_syntax_scm",(void*)f_5612},
{"f_5619:chicken_syntax_scm",(void*)f_5619},
{"f_5769:chicken_syntax_scm",(void*)f_5769},
{"f_5654:chicken_syntax_scm",(void*)f_5654},
{"f_5730:chicken_syntax_scm",(void*)f_5730},
{"f_5742:chicken_syntax_scm",(void*)f_5742},
{"f_5714:chicken_syntax_scm",(void*)f_5714},
{"f_5600:chicken_syntax_scm",(void*)f_5600},
{"f_2338:chicken_syntax_scm",(void*)f_2338},
{"f_5592:chicken_syntax_scm",(void*)f_5592},
{"f_5288:chicken_syntax_scm",(void*)f_5288},
{"f_5292:chicken_syntax_scm",(void*)f_5292},
{"f_5304:chicken_syntax_scm",(void*)f_5304},
{"f_5307:chicken_syntax_scm",(void*)f_5307},
{"f_5310:chicken_syntax_scm",(void*)f_5310},
{"f_5313:chicken_syntax_scm",(void*)f_5313},
{"f_5316:chicken_syntax_scm",(void*)f_5316},
{"f_5319:chicken_syntax_scm",(void*)f_5319},
{"f_5340:chicken_syntax_scm",(void*)f_5340},
{"f_5568:chicken_syntax_scm",(void*)f_5568},
{"f_5430:chicken_syntax_scm",(void*)f_5430},
{"f_5449:chicken_syntax_scm",(void*)f_5449},
{"f_5406:chicken_syntax_scm",(void*)f_5406},
{"f_5338:chicken_syntax_scm",(void*)f_5338},
{"f_5286:chicken_syntax_scm",(void*)f_5286},
{"f_2341:chicken_syntax_scm",(void*)f_2341},
{"f_5278:chicken_syntax_scm",(void*)f_5278},
{"f_5274:chicken_syntax_scm",(void*)f_5274},
{"f_5270:chicken_syntax_scm",(void*)f_5270},
{"f_5266:chicken_syntax_scm",(void*)f_5266},
{"f_4740:chicken_syntax_scm",(void*)f_4740},
{"f_4744:chicken_syntax_scm",(void*)f_4744},
{"f_4781:chicken_syntax_scm",(void*)f_4781},
{"f_5189:chicken_syntax_scm",(void*)f_5189},
{"f_5226:chicken_syntax_scm",(void*)f_5226},
{"f_5230:chicken_syntax_scm",(void*)f_5230},
{"f_5183:chicken_syntax_scm",(void*)f_5183},
{"f_4784:chicken_syntax_scm",(void*)f_4784},
{"f_4787:chicken_syntax_scm",(void*)f_4787},
{"f_4790:chicken_syntax_scm",(void*)f_4790},
{"f_4793:chicken_syntax_scm",(void*)f_4793},
{"f_4796:chicken_syntax_scm",(void*)f_4796},
{"f_4799:chicken_syntax_scm",(void*)f_4799},
{"f_4802:chicken_syntax_scm",(void*)f_4802},
{"f_4805:chicken_syntax_scm",(void*)f_4805},
{"f_4808:chicken_syntax_scm",(void*)f_4808},
{"f_4811:chicken_syntax_scm",(void*)f_4811},
{"f_4814:chicken_syntax_scm",(void*)f_4814},
{"f_4825:chicken_syntax_scm",(void*)f_4825},
{"f_4851:chicken_syntax_scm",(void*)f_4851},
{"f_4861:chicken_syntax_scm",(void*)f_4861},
{"f_4865:chicken_syntax_scm",(void*)f_4865},
{"f_4879:chicken_syntax_scm",(void*)f_4879},
{"f_4903:chicken_syntax_scm",(void*)f_4903},
{"f_4979:chicken_syntax_scm",(void*)f_4979},
{"f_5127:chicken_syntax_scm",(void*)f_5127},
{"f_5047:chicken_syntax_scm",(void*)f_5047},
{"f_5066:chicken_syntax_scm",(void*)f_5066},
{"f_5036:chicken_syntax_scm",(void*)f_5036},
{"f_5004:chicken_syntax_scm",(void*)f_5004},
{"f_4907:chicken_syntax_scm",(void*)f_4907},
{"f_4930:chicken_syntax_scm",(void*)f_4930},
{"f_4963:chicken_syntax_scm",(void*)f_4963},
{"f_4943:chicken_syntax_scm",(void*)f_4943},
{"f_4924:chicken_syntax_scm",(void*)f_4924},
{"f_4893:chicken_syntax_scm",(void*)f_4893},
{"f_4901:chicken_syntax_scm",(void*)f_4901},
{"f_4887:chicken_syntax_scm",(void*)f_4887},
{"f_4849:chicken_syntax_scm",(void*)f_4849},
{"f_4746:chicken_syntax_scm",(void*)f_4746},
{"f_4752:chicken_syntax_scm",(void*)f_4752},
{"f_4778:chicken_syntax_scm",(void*)f_4778},
{"f_4766:chicken_syntax_scm",(void*)f_4766},
{"f_4770:chicken_syntax_scm",(void*)f_4770},
{"f_4738:chicken_syntax_scm",(void*)f_4738},
{"f_2344:chicken_syntax_scm",(void*)f_2344},
{"f_4638:chicken_syntax_scm",(void*)f_4638},
{"f_4642:chicken_syntax_scm",(void*)f_4642},
{"f_4707:chicken_syntax_scm",(void*)f_4707},
{"f_4722:chicken_syntax_scm",(void*)f_4722},
{"f_4657:chicken_syntax_scm",(void*)f_4657},
{"f_4680:chicken_syntax_scm",(void*)f_4680},
{"f_4692:chicken_syntax_scm",(void*)f_4692},
{"f_4636:chicken_syntax_scm",(void*)f_4636},
{"f_2347:chicken_syntax_scm",(void*)f_2347},
{"f_4632:chicken_syntax_scm",(void*)f_4632},
{"f_4628:chicken_syntax_scm",(void*)f_4628},
{"f_4424:chicken_syntax_scm",(void*)f_4424},
{"f_4428:chicken_syntax_scm",(void*)f_4428},
{"f_4431:chicken_syntax_scm",(void*)f_4431},
{"f_4434:chicken_syntax_scm",(void*)f_4434},
{"f_4437:chicken_syntax_scm",(void*)f_4437},
{"f_4448:chicken_syntax_scm",(void*)f_4448},
{"f_4476:chicken_syntax_scm",(void*)f_4476},
{"f_4568:chicken_syntax_scm",(void*)f_4568},
{"f_4422:chicken_syntax_scm",(void*)f_4422},
{"f_2350:chicken_syntax_scm",(void*)f_2350},
{"f_4414:chicken_syntax_scm",(void*)f_4414},
{"f_4410:chicken_syntax_scm",(void*)f_4410},
{"f_4001:chicken_syntax_scm",(void*)f_4001},
{"f_4005:chicken_syntax_scm",(void*)f_4005},
{"f_4008:chicken_syntax_scm",(void*)f_4008},
{"f_4011:chicken_syntax_scm",(void*)f_4011},
{"f_4014:chicken_syntax_scm",(void*)f_4014},
{"f_4017:chicken_syntax_scm",(void*)f_4017},
{"f_4020:chicken_syntax_scm",(void*)f_4020},
{"f_4023:chicken_syntax_scm",(void*)f_4023},
{"f_4026:chicken_syntax_scm",(void*)f_4026},
{"f_4235:chicken_syntax_scm",(void*)f_4235},
{"f_4275:chicken_syntax_scm",(void*)f_4275},
{"f_4309:chicken_syntax_scm",(void*)f_4309},
{"f_4338:chicken_syntax_scm",(void*)f_4338},
{"f_4283:chicken_syntax_scm",(void*)f_4283},
{"f_4279:chicken_syntax_scm",(void*)f_4279},
{"f_4028:chicken_syntax_scm",(void*)f_4028},
{"f_4152:chicken_syntax_scm",(void*)f_4152},
{"f_4179:chicken_syntax_scm",(void*)f_4179},
{"f_4150:chicken_syntax_scm",(void*)f_4150},
{"f_4146:chicken_syntax_scm",(void*)f_4146},
{"f_4138:chicken_syntax_scm",(void*)f_4138},
{"f_4119:chicken_syntax_scm",(void*)f_4119},
{"f_4089:chicken_syntax_scm",(void*)f_4089},
{"f_4070:chicken_syntax_scm",(void*)f_4070},
{"f_3999:chicken_syntax_scm",(void*)f_3999},
{"f_2353:chicken_syntax_scm",(void*)f_2353},
{"f_3530:chicken_syntax_scm",(void*)f_3530},
{"f_3534:chicken_syntax_scm",(void*)f_3534},
{"f_3549:chicken_syntax_scm",(void*)f_3549},
{"f_3552:chicken_syntax_scm",(void*)f_3552},
{"f_3555:chicken_syntax_scm",(void*)f_3555},
{"f_3558:chicken_syntax_scm",(void*)f_3558},
{"f_3561:chicken_syntax_scm",(void*)f_3561},
{"f_3567:chicken_syntax_scm",(void*)f_3567},
{"f_3570:chicken_syntax_scm",(void*)f_3570},
{"f_3938:chicken_syntax_scm",(void*)f_3938},
{"f_3967:chicken_syntax_scm",(void*)f_3967},
{"f_3573:chicken_syntax_scm",(void*)f_3573},
{"f_3891:chicken_syntax_scm",(void*)f_3891},
{"f_3918:chicken_syntax_scm",(void*)f_3918},
{"f_3889:chicken_syntax_scm",(void*)f_3889},
{"f_3885:chicken_syntax_scm",(void*)f_3885},
{"f_3602:chicken_syntax_scm",(void*)f_3602},
{"f_3628:chicken_syntax_scm",(void*)f_3628},
{"f_3664:chicken_syntax_scm",(void*)f_3664},
{"f_3644:chicken_syntax_scm",(void*)f_3644},
{"f_3640:chicken_syntax_scm",(void*)f_3640},
{"f_3600:chicken_syntax_scm",(void*)f_3600},
{"f_3596:chicken_syntax_scm",(void*)f_3596},
{"f_3528:chicken_syntax_scm",(void*)f_3528},
{"f_2356:chicken_syntax_scm",(void*)f_2356},
{"f_3520:chicken_syntax_scm",(void*)f_3520},
{"f_3330:chicken_syntax_scm",(void*)f_3330},
{"f_3334:chicken_syntax_scm",(void*)f_3334},
{"f_3337:chicken_syntax_scm",(void*)f_3337},
{"f_3340:chicken_syntax_scm",(void*)f_3340},
{"f_3343:chicken_syntax_scm",(void*)f_3343},
{"f_3346:chicken_syntax_scm",(void*)f_3346},
{"f_3355:chicken_syntax_scm",(void*)f_3355},
{"f_3458:chicken_syntax_scm",(void*)f_3458},
{"f_3486:chicken_syntax_scm",(void*)f_3486},
{"f_3480:chicken_syntax_scm",(void*)f_3480},
{"f_3461:chicken_syntax_scm",(void*)f_3461},
{"f_3365:chicken_syntax_scm",(void*)f_3365},
{"f_3368:chicken_syntax_scm",(void*)f_3368},
{"f_3440:chicken_syntax_scm",(void*)f_3440},
{"f_3417:chicken_syntax_scm",(void*)f_3417},
{"f_3374:chicken_syntax_scm",(void*)f_3374},
{"f_3385:chicken_syntax_scm",(void*)f_3385},
{"f_3405:chicken_syntax_scm",(void*)f_3405},
{"f_3328:chicken_syntax_scm",(void*)f_3328},
{"f_2359:chicken_syntax_scm",(void*)f_2359},
{"f_3320:chicken_syntax_scm",(void*)f_3320},
{"f_3099:chicken_syntax_scm",(void*)f_3099},
{"f_3103:chicken_syntax_scm",(void*)f_3103},
{"f_3106:chicken_syntax_scm",(void*)f_3106},
{"f_3109:chicken_syntax_scm",(void*)f_3109},
{"f_3112:chicken_syntax_scm",(void*)f_3112},
{"f_3115:chicken_syntax_scm",(void*)f_3115},
{"f_3124:chicken_syntax_scm",(void*)f_3124},
{"f_3243:chicken_syntax_scm",(void*)f_3243},
{"f_3271:chicken_syntax_scm",(void*)f_3271},
{"f_3304:chicken_syntax_scm",(void*)f_3304},
{"f_3277:chicken_syntax_scm",(void*)f_3277},
{"f_3265:chicken_syntax_scm",(void*)f_3265},
{"f_3246:chicken_syntax_scm",(void*)f_3246},
{"f_3134:chicken_syntax_scm",(void*)f_3134},
{"f_3137:chicken_syntax_scm",(void*)f_3137},
{"f_3233:chicken_syntax_scm",(void*)f_3233},
{"f_3198:chicken_syntax_scm",(void*)f_3198},
{"f_3143:chicken_syntax_scm",(void*)f_3143},
{"f_3166:chicken_syntax_scm",(void*)f_3166},
{"f_3186:chicken_syntax_scm",(void*)f_3186},
{"f_3097:chicken_syntax_scm",(void*)f_3097},
{"f_2362:chicken_syntax_scm",(void*)f_2362},
{"f_2818:chicken_syntax_scm",(void*)f_2818},
{"f_2822:chicken_syntax_scm",(void*)f_2822},
{"f_2825:chicken_syntax_scm",(void*)f_2825},
{"f_2828:chicken_syntax_scm",(void*)f_2828},
{"f_2831:chicken_syntax_scm",(void*)f_2831},
{"f_2834:chicken_syntax_scm",(void*)f_2834},
{"f_2837:chicken_syntax_scm",(void*)f_2837},
{"f_2846:chicken_syntax_scm",(void*)f_2846},
{"f_2992:chicken_syntax_scm",(void*)f_2992},
{"f_2995:chicken_syntax_scm",(void*)f_2995},
{"f_3004:chicken_syntax_scm",(void*)f_3004},
{"f_3029:chicken_syntax_scm",(void*)f_3029},
{"f_3054:chicken_syntax_scm",(void*)f_3054},
{"f_3076:chicken_syntax_scm",(void*)f_3076},
{"f11150:chicken_syntax_scm",(void*)f11150},
{"f11146:chicken_syntax_scm",(void*)f11146},
{"f_3061:chicken_syntax_scm",(void*)f_3061},
{"f_3048:chicken_syntax_scm",(void*)f_3048},
{"f_3044:chicken_syntax_scm",(void*)f_3044},
{"f_3023:chicken_syntax_scm",(void*)f_3023},
{"f_3019:chicken_syntax_scm",(void*)f_3019},
{"f_2986:chicken_syntax_scm",(void*)f_2986},
{"f_2856:chicken_syntax_scm",(void*)f_2856},
{"f_2863:chicken_syntax_scm",(void*)f_2863},
{"f_2971:chicken_syntax_scm",(void*)f_2971},
{"f_2959:chicken_syntax_scm",(void*)f_2959},
{"f_2955:chicken_syntax_scm",(void*)f_2955},
{"f_2891:chicken_syntax_scm",(void*)f_2891},
{"f_2919:chicken_syntax_scm",(void*)f_2919},
{"f_2931:chicken_syntax_scm",(void*)f_2931},
{"f_2915:chicken_syntax_scm",(void*)f_2915},
{"f_2816:chicken_syntax_scm",(void*)f_2816},
{"f_2365:chicken_syntax_scm",(void*)f_2365},
{"f_2714:chicken_syntax_scm",(void*)f_2714},
{"f_2718:chicken_syntax_scm",(void*)f_2718},
{"f_2724:chicken_syntax_scm",(void*)f_2724},
{"f_2808:chicken_syntax_scm",(void*)f_2808},
{"f_2769:chicken_syntax_scm",(void*)f_2769},
{"f_2781:chicken_syntax_scm",(void*)f_2781},
{"f_2712:chicken_syntax_scm",(void*)f_2712},
{"f_2368:chicken_syntax_scm",(void*)f_2368},
{"f_2677:chicken_syntax_scm",(void*)f_2677},
{"f_2681:chicken_syntax_scm",(void*)f_2681},
{"f_2688:chicken_syntax_scm",(void*)f_2688},
{"f_2700:chicken_syntax_scm",(void*)f_2700},
{"f_2704:chicken_syntax_scm",(void*)f_2704},
{"f_2675:chicken_syntax_scm",(void*)f_2675},
{"f_2371:chicken_syntax_scm",(void*)f_2371},
{"f_2655:chicken_syntax_scm",(void*)f_2655},
{"f_2663:chicken_syntax_scm",(void*)f_2663},
{"f_2667:chicken_syntax_scm",(void*)f_2667},
{"f_2653:chicken_syntax_scm",(void*)f_2653},
{"f_2374:chicken_syntax_scm",(void*)f_2374},
{"f_2630:chicken_syntax_scm",(void*)f_2630},
{"f_2634:chicken_syntax_scm",(void*)f_2634},
{"f_2628:chicken_syntax_scm",(void*)f_2628},
{"f_2377:chicken_syntax_scm",(void*)f_2377},
{"f_2464:chicken_syntax_scm",(void*)f_2464},
{"f_2474:chicken_syntax_scm",(void*)f_2474},
{"f_2498:chicken_syntax_scm",(void*)f_2498},
{"f_2548:chicken_syntax_scm",(void*)f_2548},
{"f_2561:chicken_syntax_scm",(void*)f_2561},
{"f_2514:chicken_syntax_scm",(void*)f_2514},
{"f_2530:chicken_syntax_scm",(void*)f_2530},
{"f_2484:chicken_syntax_scm",(void*)f_2484},
{"f_2462:chicken_syntax_scm",(void*)f_2462},
{"f_2380:chicken_syntax_scm",(void*)f_2380},
{"f_2408:chicken_syntax_scm",(void*)f_2408},
{"f_2447:chicken_syntax_scm",(void*)f_2447},
{"f_2418:chicken_syntax_scm",(void*)f_2418},
{"f_2431:chicken_syntax_scm",(void*)f_2431},
{"f_2406:chicken_syntax_scm",(void*)f_2406},
{"f_2383:chicken_syntax_scm",(void*)f_2383},
{"f_2398:chicken_syntax_scm",(void*)f_2398},
{"f_2396:chicken_syntax_scm",(void*)f_2396},
{"f_2386:chicken_syntax_scm",(void*)f_2386},
{"f_2389:chicken_syntax_scm",(void*)f_2389},
{"f_2392:chicken_syntax_scm",(void*)f_2392},
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
