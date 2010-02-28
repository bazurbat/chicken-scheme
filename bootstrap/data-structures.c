/* Generated from data-structures.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-09 21:33
   Version 4.2.12
   windows-mingw32-x86 [ manyargs ptables ]
   compiled 2010-01-08 on lenovo-1 (MINGW32_NT-6.0)
   command line: data-structures.scm -optimize-level 2 -include-path . -include-path ./ -inline -explicit-use -no-trace -output-file data-structures.c -extend ./private-namespace.scm
   unit: data_structures
*/

#include "chicken.h"

#define C_mem_compare(to, from, n)   C_fix(C_memcmp(C_c_string(to), C_c_string(from), C_unfix(n)))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[116];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,105,100,101,110,116,105,116,121,32,120,50,54,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,17),40,102,95,49,50,57,55,32,46,32,97,114,103,115,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,13),40,112,114,111,106,101,99,116,32,110,50,56,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,51,52,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,102,95,49,51,48,53,32,120,51,50,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,19),40,99,111,110,106,111,105,110,32,46,32,112,114,101,100,115,51,49,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,52,57,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,102,95,49,51,51,56,32,120,52,55,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,19),40,100,105,115,106,111,105,110,32,46,32,112,114,101,100,115,52,54,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,14),40,102,95,49,51,56,52,32,46,32,95,54,51,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,14),40,102,95,49,51,56,54,32,46,32,95,54,52,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,19),40,99,111,110,115,116,97,110,116,108,121,32,46,32,120,115,54,49,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,16),40,102,95,49,51,57,56,32,120,54,55,32,121,54,56,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,13),40,102,108,105,112,32,112,114,111,99,54,54,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,17),40,102,95,49,52,48,54,32,46,32,97,114,103,115,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,99,111,109,112,108,101,109,101,110,116,32,112,54,57,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,49,52,51,50,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,17),40,102,95,49,52,50,55,32,46,32,97,114,103,115,55,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,18),40,114,101,99,32,102,48,55,52,32,46,32,102,110,115,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,17),40,99,111,109,112,111,115,101,32,46,32,102,110,115,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,12),40,102,95,49,52,55,56,32,120,56,52,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,102,110,115,56,49,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,11),40,111,32,46,32,102,110,115,55,57,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,115,116,57,50,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,102,95,49,52,57,51,32,108,115,116,57,48,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,17),40,108,105,115,116,45,111,102,63,32,112,114,101,100,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,13),40,110,111,111,112,32,46,32,95,49,48,49,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,15),40,102,95,49,53,52,53,32,46,32,95,49,49,48,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,112,114,111,99,115,49,49,51,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,18),40,102,95,49,53,53,57,32,46,32,97,114,103,115,49,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,17),40,101,97,99,104,32,46,32,112,114,111,99,115,49,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,11),40,97,110,121,63,32,120,49,49,57,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,110,111,110,101,63,32,120,49,50,49,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,16),40,97,108,119,97,121,115,63,32,46,32,95,49,50,51,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,15),40,110,101,118,101,114,63,32,46,32,95,49,50,53,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,16),40,102,95,49,54,49,48,32,46,32,120,115,49,50,57,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,32),40,108,101,102,116,45,115,101,99,116,105,111,110,32,112,114,111,99,49,50,55,32,46,32,97,114,103,115,49,50,56,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,102,95,49,54,50,56,32,46,32,120,115,49,51,53,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,33),40,114,105,103,104,116,45,115,101,99,116,105,111,110,32,112,114,111,99,49,51,50,32,46,32,97,114,103,115,49,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,12),40,97,116,111,109,63,32,120,49,51,56,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,17),40,116,97,105,108,63,32,120,49,52,48,32,121,49,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,110,115,49,54,48,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,25),40,105,110,116,101,114,115,112,101,114,115,101,32,108,115,116,49,53,55,32,120,49,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,54,54,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,98,117,116,108,97,115,116,32,108,115,116,49,54,52,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,105,115,116,115,49,55,53,32,114,101,115,116,49,55,54,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,21),40,102,108,97,116,116,101,110,32,46,32,108,105,115,116,115,48,49,55,51,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,28),40,100,111,108,111,111,112,50,48,53,32,104,100,50,48,57,32,116,108,50,49,48,32,99,50,49,49,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,115,116,49,57,55,32,105,49,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,18),40,99,104,111,112,32,108,115,116,49,56,55,32,110,49,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,108,115,116,115,50,50,49,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,23),40,106,111,105,110,32,108,115,116,115,50,49,55,32,46,32,108,115,116,50,49,56,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,108,115,116,50,52,48,32,108,115,116,50,52,49,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,25),40,99,111,109,112,114,101,115,115,32,98,108,115,116,50,51,54,32,108,115,116,50,51,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,54,51,32,103,50,55,51,50,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,17),40,97,50,48,53,56,32,120,51,48,56,32,121,51,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,11),40,103,51,48,50,32,120,51,48,52,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,56,54,32,103,50,57,54,51,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,24),40,115,104,117,102,102,108,101,32,108,50,53,56,32,114,97,110,100,111,109,50,53,57,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,51,56,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,20),40,102,95,50,49,53,54,32,120,51,51,53,32,108,115,116,51,51,54,41,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,44),40,97,108,105,115,116,45,117,112,100,97,116,101,33,32,120,51,49,55,32,121,51,49,56,32,108,115,116,51,49,57,32,46,32,116,109,112,51,49,54,51,50,48,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,56,52,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,20),40,102,95,50,50,52,55,32,120,51,56,49,32,108,115,116,51,56,50,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,27),40,98,111,100,121,51,54,50,32,99,109,112,51,55,49,32,100,101,102,97,117,108,116,51,55,50,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,100,101,102,97,117,108,116,51,54,53,32,37,99,109,112,51,54,48,51,57,51,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,12),40,100,101,102,45,99,109,112,51,54,52,41,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,35),40,97,108,105,115,116,45,114,101,102,32,120,51,53,52,32,108,115,116,51,53,53,32,46,32,116,109,112,51,53,51,51,53,54,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,52,48,57,41,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,29),40,114,97,115,115,111,99,32,120,52,48,48,32,108,115,116,52,48,49,32,46,32,116,115,116,52,48,50,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,106,52,51,48,32,107,52,51,49,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,29),40,114,101,118,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,52,50,51,32,105,52,50,52,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,28),40,114,101,118,101,114,115,101,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,52,50,49,41,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,15),40,45,62,115,116,114,105,110,103,32,120,52,51,57,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,52,53,50,32,103,52,54,50,52,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,99,111,110,99,32,46,32,97,114,103,115,52,52,57,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,105,115,116,97,114,116,52,56,50,32,105,101,110,100,52,56,51,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,52),40,116,114,97,118,101,114,115,101,32,119,104,105,99,104,52,55,52,32,119,104,101,114,101,52,55,53,32,115,116,97,114,116,52,55,54,32,116,101,115,116,52,55,55,32,108,111,99,52,55,56,41,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,17),40,97,50,54,48,57,32,105,52,57,55,32,108,52,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,52,57,52,32,119,104,101,114,101,52,57,53,32,115,116,97,114,116,52,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,17),40,97,50,54,49,56,32,105,53,48,50,32,108,53,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,52,57,57,32,119,104,101,114,101,53,48,48,32,115,116,97,114,116,53,48,49,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,47),40,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,53,49,51,32,119,104,101,114,101,53,49,52,32,46,32,116,109,112,53,49,50,53,49,53,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,50),40,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,53,50,56,32,119,104,101,114,101,53,50,57,32,46,32,116,109,112,53,50,55,53,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,29),40,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,32,115,49,53,51,55,32,115,50,53,51,56,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,32),40,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,45,99,105,32,115,49,53,52,55,32,115,50,53,52,56,41};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,56),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,53,53,55,32,115,50,53,53,56,32,115,116,97,114,116,49,53,53,57,32,115,116,97,114,116,50,53,54,48,32,110,53,54,49,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,36),40,98,111,100,121,53,56,56,32,115,116,97,114,116,49,53,57,56,32,115,116,97,114,116,50,53,57,57,32,108,101,110,54,48,48,41,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,40),40,100,101,102,45,108,101,110,53,57,50,32,37,115,116,97,114,116,49,53,56,53,54,48,50,32,37,115,116,97,114,116,50,53,56,54,54,48,51,41};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,29),40,100,101,102,45,115,116,97,114,116,50,53,57,49,32,37,115,116,97,114,116,49,53,56,53,54,48,53,41,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,115,116,97,114,116,49,53,57,48,41,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,37),40,115,117,98,115,116,114,105,110,103,61,63,32,115,49,53,55,57,32,115,50,53,56,48,32,46,32,116,109,112,53,55,56,53,56,49,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,59),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,54,49,52,32,115,50,54,49,53,32,115,116,97,114,116,49,54,49,54,32,115,116,97,114,116,50,54,49,55,32,110,54,49,56,41,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,36),40,98,111,100,121,54,52,53,32,115,116,97,114,116,49,54,53,53,32,115,116,97,114,116,50,54,53,54,32,108,101,110,54,53,55,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,40),40,100,101,102,45,108,101,110,54,52,57,32,37,115,116,97,114,116,49,54,52,50,54,53,57,32,37,115,116,97,114,116,50,54,52,51,54,54,48,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,29),40,100,101,102,45,115,116,97,114,116,50,54,52,56,32,37,115,116,97,114,116,49,54,52,50,54,54,50,41,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,115,116,97,114,116,49,54,52,55,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,40),40,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,54,51,54,32,115,50,54,51,55,32,46,32,116,109,112,54,51,53,54,51,56,41};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,27),40,97,100,100,32,102,114,111,109,54,55,57,32,116,111,54,56,48,32,108,97,115,116,54,56,49,41,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,55,48,57,41,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,105,54,56,53,32,108,97,115,116,54,56,54,32,102,114,111,109,54,56,55,41,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,42),40,115,116,114,105,110,103,45,115,112,108,105,116,32,115,116,114,54,55,48,32,46,32,100,101,108,115,116,114,45,97,110,100,45,102,108,97,103,54,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,110,50,55,53,52,41,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,49,32,115,115,55,52,51,32,110,55,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,40),40,115,116,114,105,110,103,45,105,110,116,101,114,115,112,101,114,115,101,32,115,116,114,115,55,51,52,32,46,32,116,109,112,55,51,51,55,51,53,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,13),40,102,95,51,50,51,50,32,99,55,55,57,41,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,15),40,105,110,115,116,114,105,110,103,32,115,55,55,55,41,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,105,56,49,54,32,106,56,49,55,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,13),40,102,95,51,52,48,49,32,99,55,57,54,41,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,41),40,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,32,115,116,114,55,55,50,32,102,114,111,109,55,55,51,32,46,32,116,111,55,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,109,97,112,56,52,55,41,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,37),40,99,111,108,108,101,99,116,32,105,56,52,50,32,102,114,111,109,56,52,51,32,116,111,116,97,108,56,52,52,32,102,115,56,52,53,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,34),40,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,42,32,115,116,114,56,51,56,32,115,109,97,112,56,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,116,111,116,97,108,56,54,54,32,112,111,115,56,54,55,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,27),40,115,116,114,105,110,103,45,99,104,111,112,32,115,116,114,56,54,50,32,108,101,110,56,54,51,41,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,33),40,115,116,114,105,110,103,45,99,104,111,109,112,32,115,116,114,56,56,52,32,46,32,116,109,112,56,56,51,56,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,48,57,32,105,57,49,51,41};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,108,97,115,116,57,50,49,32,110,101,120,116,57,50,50,41,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,25),40,115,111,114,116,101,100,63,32,115,101,113,57,48,48,32,108,101,115,115,63,57,48,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,120,57,52,50,32,97,57,52,51,32,121,57,52,52,32,98,57,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,26),40,109,101,114,103,101,32,97,57,51,50,32,98,57,51,51,32,108,101,115,115,63,57,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,114,57,53,56,32,97,57,53,57,32,98,57,54,48,41,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,27),40,109,101,114,103,101,33,32,97,57,52,56,32,98,57,52,57,32,108,101,115,115,63,57,53,48,41,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,11),40,115,116,101,112,32,110,57,55,48,41,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,57,57,52,32,112,57,57,56,32,105,57,57,57,41,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,23),40,115,111,114,116,33,32,115,101,113,57,54,55,32,108,101,115,115,63,57,54,56,41,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,24),40,115,111,114,116,32,115,101,113,49,48,48,53,32,108,101,115,115,63,49,48,48,54,41};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,97,116,49,48,50,54,41,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,20),40,105,110,115,101,114,116,32,120,49,48,50,51,32,121,49,48,50,52,41,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,97,116,49,48,51,54,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,14),40,108,111,111,107,117,112,32,120,49,48,51,52,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,13),40,103,49,48,53,53,32,118,49,48,53,55,41,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,52,56,32,103,49,48,53,50,49,48,53,52,41,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,26),40,118,105,115,105,116,32,117,49,48,52,52,32,97,100,106,45,108,105,115,116,49,48,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,15),40,103,49,48,56,52,32,100,101,102,49,48,56,54,41,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,55,55,32,103,49,48,56,49,49,48,56,51,41,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,15),40,103,49,48,55,48,32,100,101,102,49,48,55,50,41,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,49,53,32,103,49,48,49,57,49,48,54,57,41,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,35),40,116,111,112,111,108,111,103,105,99,97,108,45,115,111,114,116,32,100,97,103,49,48,48,56,32,112,114,101,100,49,48,48,57,41,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,112,115,49,49,48,51,32,112,101,49,49,48,52,41,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,32),40,98,105,110,97,114,121,45,115,101,97,114,99,104,32,118,101,99,49,48,57,55,32,112,114,111,99,49,48,57,56,41};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,12),40,109,97,107,101,45,113,117,101,117,101,41,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,14),40,113,117,101,117,101,63,32,120,49,49,50,51,41,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,20),40,113,117,101,117,101,45,101,109,112,116,121,63,32,113,49,49,50,53,41,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,19),40,113,117,101,117,101,45,102,105,114,115,116,32,113,49,49,50,55,41,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,18),40,113,117,101,117,101,45,108,97,115,116,32,113,49,49,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,28),40,113,117,101,117,101,45,97,100,100,33,32,113,49,49,52,56,32,100,97,116,117,109,49,49,52,57,41,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,21),40,113,117,101,117,101,45,114,101,109,111,118,101,33,32,113,49,49,54,48,41,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,19),40,113,117,101,117,101,45,62,108,105,115,116,32,113,49,49,55,52,41,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,49,49,55,56,32,108,115,116,49,49,56,50,41,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,22),40,108,105,115,116,45,62,113,117,101,117,101,32,108,115,116,48,49,49,55,55,41,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,33),40,113,117,101,117,101,45,112,117,115,104,45,98,97,99,107,33,32,113,49,49,57,50,32,105,116,101,109,49,49,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,49,50,48,55,41,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,42),40,113,117,101,117,101,45,112,117,115,104,45,98,97,99,107,45,108,105,115,116,33,32,113,49,49,57,57,32,105,116,101,109,108,105,115,116,49,50,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_data_structures_toplevel)
C_externexport void C_ccall C_data_structures_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1290)
static void C_ccall f_1290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4766)
static C_word C_fcall f_4766(C_word t0);
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4673)
static void C_fcall f_4673(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4683)
static void C_ccall f_4683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4665)
static void C_ccall f_4665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4645)
static void C_ccall f_4645(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4619)
static void C_ccall f_4619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4556)
static void C_ccall f_4556(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4522)
static void C_ccall f_4522(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4427)
static void C_ccall f_4427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4431)
static void C_fcall f_4431(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4445)
static void C_fcall f_4445(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4391)
static void C_fcall f_4391(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_fcall f_4399(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4326)
static void C_fcall f_4326(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4334)
static void C_fcall f_4334(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4255)
static void C_fcall f_4255(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4259)
static void C_ccall f_4259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_fcall f_4268(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4276)
static void C_fcall f_4276(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4220)
static void C_fcall f_4220(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4226)
static void C_fcall f_4226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4173)
static void C_fcall f_4173(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4179)
static void C_fcall f_4179(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4218)
static void C_ccall f_4218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4103)
static void C_fcall f_4103(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4007)
static void C_fcall f_4007(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4026)
static void C_ccall f_4026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3875)
static void C_fcall f_3875(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3807)
static void C_fcall f_3807(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3739)
static void C_fcall f_3739(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3691)
static void C_fcall f_3691(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3616)
static void C_ccall f_3616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3563)
static void C_fcall f_3563(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3594)
static void C_ccall f_3594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3438)
static void C_fcall f_3438(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3471)
static void C_fcall f_3471(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3510)
static void C_fcall f_3510(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3224)
static void C_ccall f_3224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3224)
static void C_ccall f_3224r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3281)
static void C_fcall f_3281(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3227)
static void C_fcall f_3227(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3232)
static void C_ccall f_3232(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3238)
static C_word C_fcall f_3238(C_word t0,C_word t1);
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3127)
static void C_fcall f_3127(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3137)
static void C_ccall f_3137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static C_word C_fcall f_3142(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3015)
static void C_fcall f_3015(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3042)
static void C_fcall f_3042(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_fcall f_2995(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2911)
static void C_fcall f_2911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_fcall f_2906(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2901)
static void C_fcall f_2901(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2896)
static void C_fcall f_2896(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2867)
static void C_fcall f_2867(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2794)
static void C_fcall f_2794(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2789)
static void C_fcall f_2789(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2784)
static void C_fcall f_2784(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2779)
static void C_fcall f_2779(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2750)
static void C_fcall f_2750(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2557)
static void C_fcall f_2557(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2578)
static void C_fcall f_2578(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2522)
static void C_fcall f_2522(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2504)
static void C_ccall f_2504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2393)
static void C_fcall f_2393(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_fcall f_2418(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2352)
static void C_fcall f_2352(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2292)
static void C_fcall f_2292(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2287)
static void C_fcall f_2287(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2218)
static void C_fcall f_2218(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2253)
static void C_fcall f_2253(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2222)
static void C_fcall f_2222(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2121)
static void C_ccall f_2121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2162)
static void C_fcall f_2162(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2124)
static void C_fcall f_2124(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2127)
static void C_ccall f_2127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2073)
static void C_fcall f_2073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2100)
static void C_fcall f_2100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2057)
static void C_ccall f_2057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_fcall f_2020(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1927)
static void C_ccall f_1927(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1936)
static void C_fcall f_1936(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1868)
static void C_ccall f_1868(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1868)
static void C_ccall f_1868r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1880)
static void C_fcall f_1880(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1798)
static void C_fcall f_1798(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1819)
static void C_fcall f_1819(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1748)
static void C_fcall f_1748(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1774)
static void C_ccall f_1774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1719)
static void C_fcall f_1719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1683)
static void C_fcall f_1683(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1649)
static void C_ccall f_1649(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1661)
static C_word C_fcall f_1661(C_word t0,C_word t1);
C_noret_decl(f_1646)
static void C_ccall f_1646(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1565)
static void C_fcall f_1565(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1584)
static void C_ccall f_1584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1493)
static void C_ccall f_1493(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1499)
static void C_fcall f_1499(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1464)
static void C_fcall f_1464(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1478)
static void C_ccall f_1478(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1489)
static void C_ccall f_1489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1414)
static void C_ccall f_1414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1336)
static void C_ccall f_1336(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1336)
static void C_ccall f_1336r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1344)
static void C_fcall f_1344(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1305)
static void C_ccall f_1305(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1311)
static void C_fcall f_1311(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1327)
static void C_ccall f_1327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_4673)
static void C_fcall trf_4673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4673(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4673(t0,t1,t2);}

C_noret_decl(trf_4431)
static void C_fcall trf_4431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4431(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4431(t0,t1);}

C_noret_decl(trf_4445)
static void C_fcall trf_4445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4445(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4445(t0,t1,t2,t3);}

C_noret_decl(trf_4391)
static void C_fcall trf_4391(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4391(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4391(t0,t1,t2);}

C_noret_decl(trf_4399)
static void C_fcall trf_4399(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4399(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4399(t0,t1,t2);}

C_noret_decl(trf_4326)
static void C_fcall trf_4326(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4326(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4326(t0,t1,t2);}

C_noret_decl(trf_4334)
static void C_fcall trf_4334(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4334(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4334(t0,t1,t2);}

C_noret_decl(trf_4255)
static void C_fcall trf_4255(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4255(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4255(t0,t1,t2,t3);}

C_noret_decl(trf_4268)
static void C_fcall trf_4268(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4268(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4268(t0,t1,t2);}

C_noret_decl(trf_4276)
static void C_fcall trf_4276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4276(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4276(t0,t1,t2);}

C_noret_decl(trf_4220)
static void C_fcall trf_4220(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4220(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4220(t0,t1,t2);}

C_noret_decl(trf_4226)
static void C_fcall trf_4226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4226(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4226(t0,t1,t2);}

C_noret_decl(trf_4173)
static void C_fcall trf_4173(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4173(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4173(t0,t1,t2,t3);}

C_noret_decl(trf_4179)
static void C_fcall trf_4179(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4179(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4179(t0,t1,t2);}

C_noret_decl(trf_4103)
static void C_fcall trf_4103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4103(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4103(t0,t1,t2,t3);}

C_noret_decl(trf_4007)
static void C_fcall trf_4007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4007(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4007(t0,t1,t2);}

C_noret_decl(trf_3875)
static void C_fcall trf_3875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3875(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3875(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3807)
static void C_fcall trf_3807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3807(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3807(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3739)
static void C_fcall trf_3739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3739(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3739(t0,t1,t2,t3);}

C_noret_decl(trf_3691)
static void C_fcall trf_3691(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3691(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3691(t0,t1,t2);}

C_noret_decl(trf_3563)
static void C_fcall trf_3563(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3563(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3563(t0,t1,t2,t3);}

C_noret_decl(trf_3438)
static void C_fcall trf_3438(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3438(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3438(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3471)
static void C_fcall trf_3471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3471(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3471(t0,t1,t2);}

C_noret_decl(trf_3510)
static void C_fcall trf_3510(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3510(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3510(t0,t1);}

C_noret_decl(trf_3281)
static void C_fcall trf_3281(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3281(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3281(t0,t1,t2,t3);}

C_noret_decl(trf_3227)
static void C_fcall trf_3227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3227(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3227(t0,t1);}

C_noret_decl(trf_3127)
static void C_fcall trf_3127(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3127(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3127(t0,t1,t2,t3);}

C_noret_decl(trf_3015)
static void C_fcall trf_3015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3015(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3015(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3042)
static void C_fcall trf_3042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3042(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3042(t0,t1,t2);}

C_noret_decl(trf_2995)
static void C_fcall trf_2995(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2995(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2995(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2911)
static void C_fcall trf_2911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2911(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2911(t0,t1);}

C_noret_decl(trf_2906)
static void C_fcall trf_2906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2906(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2906(t0,t1,t2);}

C_noret_decl(trf_2901)
static void C_fcall trf_2901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2901(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2901(t0,t1,t2,t3);}

C_noret_decl(trf_2896)
static void C_fcall trf_2896(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2896(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2896(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2867)
static void C_fcall trf_2867(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2867(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2867(t0,t1);}

C_noret_decl(trf_2794)
static void C_fcall trf_2794(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2794(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2794(t0,t1);}

C_noret_decl(trf_2789)
static void C_fcall trf_2789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2789(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2789(t0,t1,t2);}

C_noret_decl(trf_2784)
static void C_fcall trf_2784(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2784(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2784(t0,t1,t2,t3);}

C_noret_decl(trf_2779)
static void C_fcall trf_2779(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2779(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2779(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2750)
static void C_fcall trf_2750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2750(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2750(t0,t1);}

C_noret_decl(trf_2557)
static void C_fcall trf_2557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2557(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2557(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2578)
static void C_fcall trf_2578(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2578(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2578(t0,t1,t2,t3);}

C_noret_decl(trf_2522)
static void C_fcall trf_2522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2522(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2522(t0,t1,t2);}

C_noret_decl(trf_2393)
static void C_fcall trf_2393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2393(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2393(t0,t1,t2,t3);}

C_noret_decl(trf_2418)
static void C_fcall trf_2418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2418(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2418(t0,t1,t2,t3);}

C_noret_decl(trf_2352)
static void C_fcall trf_2352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2352(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2352(t0,t1,t2);}

C_noret_decl(trf_2292)
static void C_fcall trf_2292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2292(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2292(t0,t1);}

C_noret_decl(trf_2287)
static void C_fcall trf_2287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2287(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2287(t0,t1,t2);}

C_noret_decl(trf_2218)
static void C_fcall trf_2218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2218(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2218(t0,t1,t2,t3);}

C_noret_decl(trf_2253)
static void C_fcall trf_2253(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2253(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2253(t0,t1,t2);}

C_noret_decl(trf_2222)
static void C_fcall trf_2222(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2222(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2222(t0,t1);}

C_noret_decl(trf_2162)
static void C_fcall trf_2162(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2162(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2162(t0,t1,t2);}

C_noret_decl(trf_2124)
static void C_fcall trf_2124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2124(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2124(t0,t1);}

C_noret_decl(trf_2073)
static void C_fcall trf_2073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2073(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2073(t0,t1,t2);}

C_noret_decl(trf_2100)
static void C_fcall trf_2100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2100(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2100(t0,t1,t2);}

C_noret_decl(trf_2020)
static void C_fcall trf_2020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2020(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2020(t0,t1,t2);}

C_noret_decl(trf_1936)
static void C_fcall trf_1936(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1936(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1936(t0,t1,t2,t3);}

C_noret_decl(trf_1880)
static void C_fcall trf_1880(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1880(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1880(t0,t1,t2);}

C_noret_decl(trf_1798)
static void C_fcall trf_1798(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1798(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1798(t0,t1,t2,t3);}

C_noret_decl(trf_1819)
static void C_fcall trf_1819(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1819(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1819(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1748)
static void C_fcall trf_1748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1748(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1748(t0,t1,t2,t3);}

C_noret_decl(trf_1719)
static void C_fcall trf_1719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1719(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1719(t0,t1,t2);}

C_noret_decl(trf_1683)
static void C_fcall trf_1683(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1683(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1683(t0,t1,t2);}

C_noret_decl(trf_1565)
static void C_fcall trf_1565(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1565(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1565(t0,t1,t2);}

C_noret_decl(trf_1499)
static void C_fcall trf_1499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1499(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1499(t0,t1,t2);}

C_noret_decl(trf_1464)
static void C_fcall trf_1464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1464(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1464(t0,t1,t2);}

C_noret_decl(trf_1344)
static void C_fcall trf_1344(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1344(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1344(t0,t1,t2);}

C_noret_decl(trf_1311)
static void C_fcall trf_1311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1311(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1311(t0,t1,t2);}

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr5r)
static void C_fcall tr5r(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5r(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n*3);
t5=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr2r)
static void C_fcall tr2r(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2r(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n*3);
t2=C_restore_rest(a,n);
(k)(t0,t1,t2);}

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

C_noret_decl(tr2rv)
static void C_fcall tr2rv(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2rv(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n+1);
t2=C_restore_rest_vector(a,n);
(k)(t0,t1,t2);}

C_noret_decl(tr4rv)
static void C_fcall tr4rv(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4rv(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n+1);
t4=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr3rv)
static void C_fcall tr3rv(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3rv(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n+1);
t3=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_data_structures_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_data_structures_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("data_structures_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1040)){
C_save(t1);
C_rereclaim2(1040*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,116);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],8,"identity");
lf[3]=C_h_intern(&lf[3],7,"project");
lf[4]=C_h_intern(&lf[4],7,"conjoin");
lf[5]=C_h_intern(&lf[5],7,"disjoin");
lf[6]=C_h_intern(&lf[6],10,"constantly");
lf[7]=C_h_intern(&lf[7],4,"flip");
lf[8]=C_h_intern(&lf[8],10,"complement");
lf[9]=C_h_intern(&lf[9],7,"compose");
lf[10]=C_h_intern(&lf[10],6,"values");
lf[11]=C_h_intern(&lf[11],1,"o");
lf[12]=C_h_intern(&lf[12],8,"list-of\077");
lf[13]=C_h_intern(&lf[13],4,"noop");
lf[14]=C_h_intern(&lf[14],19,"\003sysundefined-value");
lf[15]=C_h_intern(&lf[15],4,"each");
lf[16]=C_h_intern(&lf[16],4,"any\077");
lf[17]=C_h_intern(&lf[17],5,"none\077");
lf[18]=C_h_intern(&lf[18],7,"always\077");
lf[19]=C_h_intern(&lf[19],6,"never\077");
lf[20]=C_h_intern(&lf[20],12,"left-section");
lf[21]=C_h_intern(&lf[21],10,"\003sysappend");
lf[22]=C_h_intern(&lf[22],17,"\003syscheck-closure");
lf[23]=C_h_intern(&lf[23],7,"reverse");
lf[24]=C_h_intern(&lf[24],13,"right-section");
lf[25]=C_h_intern(&lf[25],5,"atom\077");
lf[26]=C_h_intern(&lf[26],5,"tail\077");
lf[27]=C_h_intern(&lf[27],11,"intersperse");
lf[28]=C_h_intern(&lf[28],7,"butlast");
lf[29]=C_h_intern(&lf[29],7,"flatten");
lf[30]=C_h_intern(&lf[30],4,"chop");
lf[31]=C_h_intern(&lf[31],9,"\003syserror");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid numeric argument");
lf[33]=C_h_intern(&lf[33],4,"join");
lf[34]=C_h_intern(&lf[34],27,"\003syserror-not-a-proper-list");
lf[35]=C_h_intern(&lf[35],8,"compress");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000%bad argument type - not a proper list");
lf[37]=C_h_intern(&lf[37],15,"\003syssignal-hook");
lf[38]=C_h_intern(&lf[38],11,"\000type-error");
lf[39]=C_h_intern(&lf[39],7,"shuffle");
lf[40]=C_h_intern(&lf[40],3,"cdr");
lf[41]=C_h_intern(&lf[41],5,"sort!");
lf[42]=C_h_intern(&lf[42],13,"alist-update!");
lf[43]=C_h_intern(&lf[43],3,"eq\077");
lf[44]=C_h_intern(&lf[44],4,"assq");
lf[45]=C_h_intern(&lf[45],4,"eqv\077");
lf[46]=C_h_intern(&lf[46],4,"assv");
lf[47]=C_h_intern(&lf[47],6,"equal\077");
lf[48]=C_h_intern(&lf[48],5,"assoc");
lf[49]=C_h_intern(&lf[49],9,"alist-ref");
lf[50]=C_h_intern(&lf[50],6,"rassoc");
lf[51]=C_h_intern(&lf[51],21,"reverse-string-append");
lf[52]=C_h_intern(&lf[52],11,"make-string");
lf[53]=C_h_intern(&lf[53],18,"open-output-string");
lf[54]=C_h_intern(&lf[54],7,"display");
lf[55]=C_h_intern(&lf[55],6,"string");
lf[56]=C_h_intern(&lf[56],17,"get-output-string");
lf[57]=C_h_intern(&lf[57],8,"->string");
lf[58]=C_h_intern(&lf[58],14,"symbol->string");
lf[59]=C_h_intern(&lf[59],18,"\003sysnumber->string");
lf[60]=C_h_intern(&lf[60],13,"string-append");
lf[61]=C_h_intern(&lf[61],4,"conc");
lf[62]=C_h_intern(&lf[62],19,"\003syssubstring-index");
lf[63]=C_h_intern(&lf[63],15,"substring-index");
lf[64]=C_h_intern(&lf[64],22,"\003syssubstring-index-ci");
lf[65]=C_h_intern(&lf[65],18,"substring-index-ci");
lf[66]=C_h_intern(&lf[66],15,"string-compare3");
lf[67]=C_h_intern(&lf[67],18,"string-compare3-ci");
lf[68]=C_h_intern(&lf[68],15,"\003syssubstring=\077");
lf[69]=C_h_intern(&lf[69],11,"substring=\077");
lf[70]=C_h_intern(&lf[70],18,"\003syssubstring-ci=\077");
lf[71]=C_h_intern(&lf[71],14,"substring-ci=\077");
lf[72]=C_h_intern(&lf[72],12,"string-split");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\003\011\012 ");
lf[74]=C_h_intern(&lf[74],13,"\003syssubstring");
lf[75]=C_h_intern(&lf[75],18,"string-intersperse");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[77]=C_h_intern(&lf[77],19,"\003sysallocate-vector");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[79]=C_h_intern(&lf[79],12,"list->string");
lf[80]=C_h_intern(&lf[80],16,"string-translate");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid translation destination");
lf[82]=C_h_intern(&lf[82],17,"string-translate*");
lf[83]=C_h_intern(&lf[83],21,"\003sysfragments->string");
lf[84]=C_h_intern(&lf[84],11,"string-chop");
lf[85]=C_h_intern(&lf[85],12,"string-chomp");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[87]=C_h_intern(&lf[87],7,"sorted\077");
lf[88]=C_h_intern(&lf[88],5,"merge");
lf[89]=C_h_intern(&lf[89],6,"merge!");
lf[90]=C_h_intern(&lf[90],12,"vector->list");
lf[91]=C_h_intern(&lf[91],4,"sort");
lf[92]=C_h_intern(&lf[92],12,"list->vector");
lf[93]=C_h_intern(&lf[93],6,"append");
lf[94]=C_h_intern(&lf[94],16,"topological-sort");
lf[95]=C_h_intern(&lf[95],4,"caar");
lf[96]=C_h_intern(&lf[96],4,"cdar");
lf[97]=C_h_intern(&lf[97],7,"colored");
lf[98]=C_h_intern(&lf[98],13,"binary-search");
lf[99]=C_h_intern(&lf[99],10,"make-queue");
lf[100]=C_h_intern(&lf[100],5,"queue");
lf[101]=C_h_intern(&lf[101],6,"queue\077");
lf[102]=C_h_intern(&lf[102],12,"queue-empty\077");
lf[103]=C_h_intern(&lf[103],11,"queue-first");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[105]=C_h_intern(&lf[105],10,"queue-last");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[107]=C_h_intern(&lf[107],10,"queue-add!");
lf[108]=C_h_intern(&lf[108],13,"queue-remove!");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[110]=C_h_intern(&lf[110],11,"queue->list");
lf[111]=C_h_intern(&lf[111],11,"list->queue");
lf[112]=C_h_intern(&lf[112],16,"queue-push-back!");
lf[113]=C_h_intern(&lf[113],21,"queue-push-back-list!");
lf[114]=C_h_intern(&lf[114],17,"register-feature!");
lf[115]=C_h_intern(&lf[115],15,"data-structures");
C_register_lf2(lf,116,create_ptable());
t2=C_mutate(&lf[0] /* (set! c326 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1290,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm: 72   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[114]+1)))(3,*((C_word*)lf[114]+1),t3,lf[115]);}

/* k1288 */
static void C_ccall f_1290(C_word c,C_word t0,C_word t1){
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
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word ab[216],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1290,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! identity ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1292,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! project ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! conjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1303,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[5]+1 /* (set! disjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1336,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[6]+1 /* (set! constantly ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1373,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[7]+1 /* (set! flip ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1396,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[8]+1 /* (set! complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1404,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[9]+1 /* (set! compose ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1416,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[11]+1 /* (set! o ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1452,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[12]+1 /* (set! list-of? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1491,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[13]+1 /* (set! noop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1531,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[15]+1 /* (set! each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1537,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[16]+1 /* (set! any? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1593,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[17]+1 /* (set! none? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1596,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[18]+1 /* (set! always? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1599,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[19]+1 /* (set! never? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1602,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[20]+1 /* (set! left-section ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1605,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t19=*((C_word*)lf[23]+1);
t20=C_mutate((C_word*)lf[24]+1 /* (set! right-section ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1620,a[2]=t19,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t21=C_mutate((C_word*)lf[25]+1 /* (set! atom? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1646,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[26]+1 /* (set! tail? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1649,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[27]+1 /* (set! intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1677,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[28]+1 /* (set! butlast ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1710,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[29]+1 /* (set! flatten ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1742,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t26=*((C_word*)lf[23]+1);
t27=C_mutate((C_word*)lf[30]+1 /* (set! chop ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1783,a[2]=t26,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp));
t28=C_mutate((C_word*)lf[33]+1 /* (set! join ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1868,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[35]+1 /* (set! compress ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1927,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[39]+1 /* (set! shuffle ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2007,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[42]+1 /* (set! alist-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2117,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[49]+1 /* (set! alist-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2216,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[50]+1 /* (set! rassoc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2340,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[51]+1 /* (set! reverse-string-append ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2390,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t35=*((C_word*)lf[53]+1);
t36=*((C_word*)lf[54]+1);
t37=*((C_word*)lf[55]+1);
t38=*((C_word*)lf[56]+1);
t39=C_mutate((C_word*)lf[57]+1 /* (set! ->string ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2467,a[2]=t35,a[3]=t36,a[4]=t38,a[5]=t37,a[6]=((C_word)li74),tmp=(C_word)a,a+=7,tmp));
t40=*((C_word*)lf[60]+1);
t41=C_mutate((C_word*)lf[61]+1 /* (set! conc ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2512,a[2]=t40,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp));
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2557,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
t43=C_mutate((C_word*)lf[62]+1 /* (set! substring-index ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2604,a[2]=t42,a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp));
t44=C_mutate((C_word*)lf[64]+1 /* (set! substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2613,a[2]=t42,a[3]=((C_word)li82),tmp=(C_word)a,a+=4,tmp));
t45=C_mutate((C_word*)lf[63]+1 /* (set! substring-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2622,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[65]+1 /* (set! substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2650,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[66]+1 /* (set! string-compare3 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2678,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[67]+1 /* (set! string-compare3-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2709,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[68]+1 /* (set! substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2740,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[69]+1 /* (set! substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2777,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[70]+1 /* (set! substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[71]+1 /* (set! substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2894,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[72]+1 /* (set! string-split ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2974,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[75]+1 /* (set! string-intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3109,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t55=*((C_word*)lf[52]+1);
t56=*((C_word*)lf[79]+1);
t57=C_mutate((C_word*)lf[80]+1 /* (set! string-translate ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3224,a[2]=t56,a[3]=t55,a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp));
t58=C_mutate((C_word*)lf[82]+1 /* (set! string-translate* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3426,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[84]+1 /* (set! string-chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3548,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[85]+1 /* (set! string-chomp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3612,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[87]+1 /* (set! sorted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3664,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[88]+1 /* (set! merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3773,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[89]+1 /* (set! merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3872,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[41]+1 /* (set! sort! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4004,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[91]+1 /* (set! sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4137,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[94]+1 /* (set! topological-sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4164,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp));
t67=*((C_word*)lf[92]+1);
t68=C_mutate((C_word*)lf[98]+1 /* (set! binary-search ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4427,a[2]=t67,a[3]=((C_word)li142),tmp=(C_word)a,a+=4,tmp));
t69=C_mutate((C_word*)lf[99]+1 /* (set! make-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4510,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[101]+1 /* (set! queue? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4516,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[102]+1 /* (set! queue-empty? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4522,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[103]+1 /* (set! queue-first ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4535,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[105]+1 /* (set! queue-last ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4556,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t74=C_mutate((C_word*)lf[107]+1 /* (set! queue-add! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4577,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[108]+1 /* (set! queue-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4609,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[110]+1 /* (set! queue->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4645,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t77=C_mutate((C_word*)lf[111]+1 /* (set! list->queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4654,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t78=C_mutate((C_word*)lf[112]+1 /* (set! queue-push-back! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4708,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[113]+1 /* (set! queue-push-back-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4737,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t80=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t80+1)))(2,t80,C_SCHEME_UNDEFINED);}

/* queue-push-back-list! in k1288 */
static void C_ccall f_4737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4737,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[100],lf[113]);
t5=(C_word)C_i_check_list_2(t3,lf[113]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4747,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_slot(t2,C_fix(1));
/* data-structures.scm: 952  append */
t8=*((C_word*)lf[93]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t3,t7);}

/* k4745 in queue-push-back-list! in k1288 */
static void C_ccall f_4747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4747,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST));}
else{
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4766,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
t5=f_4766(t3);
t6=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(2),t5));}}

/* doloop1207 in k4745 in queue-push-back-list! in k1288 */
static C_word C_fcall f_4766(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
t2=(C_word)C_slot(t1,C_fix(1));
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
return(t4);}
else{
t4=(C_word)C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}}

/* queue-push-back! in k1288 */
static void C_ccall f_4708(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4708,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[100],lf[112]);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
t7=(C_word)C_i_setslot(t2,C_fix(1),t6);
t8=(C_word)C_slot(t2,C_fix(2));
t9=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t8);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_i_setslot(t2,C_fix(2),t6));}
else{
t10=C_SCHEME_UNDEFINED;
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}

/* list->queue in k1288 */
static void C_ccall f_4654(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4654,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,lf[111]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4665,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,3,lf[100],t2,C_SCHEME_END_OF_LIST));}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4673,a[2]=t2,a[3]=t7,a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4673(t9,t4,t2);}}

/* doloop1178 in list->queue in k1288 */
static void C_fcall f_4673(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4673,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4683,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_not((C_word)C_blockp(t2));
t7=(C_truep(t6)?t6:(C_word)C_i_not((C_word)C_pairp(t2)));
if(C_truep(t7)){
/* data-structures.scm: 928  ##sys#error-not-a-proper-list */
t8=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,((C_word*)t0)[2],lf[111]);}
else{
t8=(C_word)C_slot(t2,C_fix(1));
t11=t1;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}}

/* k4681 in doloop1178 in list->queue in k1288 */
static void C_ccall f_4683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4673(t3,((C_word*)t0)[2],t2);}

/* k4663 in list->queue in k1288 */
static void C_ccall f_4665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4665,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[100],((C_word*)t0)[2],t1));}

/* queue->list in k1288 */
static void C_ccall f_4645(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4645,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[100],lf[110]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* queue-remove! in k1288 */
static void C_ccall f_4609(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4609,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[100],lf[108]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4619,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm: 906  ##sys#error */
t7=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[108],lf[109],t2);}
else{
t7=t5;
f_4619(2,t7,C_SCHEME_UNDEFINED);}}

/* k4617 in queue-remove! in k1288 */
static void C_ccall f_4619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t2);
if(C_truep(t4)){
t5=(C_word)C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_slot(((C_word*)t0)[4],C_fix(0)));}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_slot(((C_word*)t0)[4],C_fix(0)));}}

/* queue-add! in k1288 */
static void C_ccall f_4577(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4577,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[100],lf[107]);
t5=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t6);
if(C_truep(t7)){
t8=(C_word)C_i_setslot(t2,C_fix(1),t5);
t9=(C_word)C_i_setslot(t2,C_fix(2),t5);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}
else{
t8=(C_word)C_slot(t2,C_fix(2));
t9=(C_word)C_i_setslot(t8,C_fix(1),t5);
t10=(C_word)C_i_setslot(t2,C_fix(2),t5);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_UNDEFINED);}}

/* queue-last in k1288 */
static void C_ccall f_4556(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4556,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[100],lf[105]);
t4=(C_word)C_slot(t2,C_fix(2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4566,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm: 887  ##sys#error */
t7=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[105],lf[106],t2);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_slot(t4,C_fix(0)));}}

/* k4564 in queue-last in k1288 */
static void C_ccall f_4566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(0)));}

/* queue-first in k1288 */
static void C_ccall f_4535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4535,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[100],lf[103]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4545,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm: 876  ##sys#error */
t7=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[103],lf[104],t2);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_slot(t4,C_fix(0)));}}

/* k4543 in queue-first in k1288 */
static void C_ccall f_4545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(0)));}

/* queue-empty? in k1288 */
static void C_ccall f_4522(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4522,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[100],lf[102]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4));}

/* queue? in k1288 */
static void C_ccall f_4516(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4516,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[100]));}

/* make-queue in k1288 */
static void C_ccall f_4510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4510,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[100],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* binary-search in k1288 */
static void C_ccall f_4427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4427,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4431,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4505,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 833  list->vector */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_4431(t6,(C_word)C_i_check_vector_2(((C_word*)t4)[1],lf[98]));}}

/* k4503 in binary-search in k1288 */
static void C_ccall f_4505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_4431(t3,t2);}

/* k4429 in binary-search in k1288 */
static void C_fcall f_4431(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4431,NULL,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)((C_word*)t0)[4])[1]);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4445,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li141),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4445(t6,((C_word*)t0)[2],C_fix(0),t2);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* loop in k4429 in binary-search in k1288 */
static void C_fcall f_4445(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4445,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,t2);
t5=(C_word)C_fixnum_divide(t4,C_fix(2));
t6=(C_word)C_fixnum_plus(t2,t5);
t7=(C_word)C_slot(((C_word*)((C_word*)t0)[4])[1],t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4455,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t6,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm: 841  proc */
t9=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t7);}

/* k4453 in loop in k4429 in binary-search in k1288 */
static void C_ccall f_4455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t3=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* data-structures.scm: 843  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4445(t4,((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[5]);}}
else{
t3=(C_word)C_eqp(((C_word*)t0)[2],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* data-structures.scm: 844  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4445(t4,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}}}}

/* topological-sort in k1288 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[41],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4164,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4173,a[2]=t3,a[3]=t5,a[4]=((C_word)li130),tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4220,a[2]=t5,a[3]=t3,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp));
t16=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4255,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t7,a[6]=((C_word)li135),tmp=(C_word)a,a+=7,tmp));
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4314,a[2]=t11,a[3]=t13,a[4]=t2,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t18=(C_word)C_i_cdr(t2);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4391,a[2]=t20,a[3]=t9,a[4]=((C_word)li139),tmp=(C_word)a,a+=5,tmp));
t22=((C_word*)t20)[1];
f_4391(t22,t17,t18);}}

/* loop1015 in topological-sort in k1288 */
static void C_fcall f_4391(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4391,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[3],a[3]=((C_word)li138),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4414,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g10701071 */
t6=t3;
f_4399(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4412 in loop1015 in topological-sort in k1288 */
static void C_ccall f_4414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4391(t3,((C_word*)t0)[2],t2);}

/* g1070 in loop1015 in topological-sort in k1288 */
static void C_fcall f_4399(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4399,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
/* data-structures.scm: 815  insert */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4173(t5,t1,t3,t4);}

/* k4312 in topological-sort in k1288 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 818  caar */
t4=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k4379 in k4312 in topological-sort in k1288 */
static void C_ccall f_4381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4385,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 818  cdar */
t3=*((C_word*)lf[96]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4383 in k4379 in k4312 in topological-sort in k1288 */
static void C_ccall f_4385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 818  visit */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4255(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4315 in k4312 in topological-sort in k1288 */
static void C_ccall f_4317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4320,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4326,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li137),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4326(t7,t2,t3);}

/* loop1077 in k4315 in k4312 in topological-sort in k1288 */
static void C_fcall f_4326(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4326,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4334,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li136),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4366,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g10841085 */
t6=t3;
f_4334(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4364 in loop1077 in k4315 in k4312 in topological-sort in k1288 */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4326(t3,((C_word*)t0)[2],t2);}

/* g1084 in loop1077 in k4315 in k4312 in topological-sort in k1288 */
static void C_fcall f_4334(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4334,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4338,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* data-structures.scm: 820  lookup */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4220(t5,t3,t4);}

/* k4336 in g1084 in loop1077 in k4315 in k4312 in topological-sort in k1288 */
static void C_ccall f_4338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_eqp(t1,lf[97]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm: 822  visit */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4255(t5,((C_word*)t0)[4],t3,t4);}}

/* k4318 in k4315 in k4312 in topological-sort in k1288 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* visit in topological-sort in k1288 */
static void C_fcall f_4255(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4255,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4259,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm: 803  insert */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4173(t5,t4,t2,lf[97]);}

/* k4257 in visit in topological-sort in k1288 */
static void C_ccall f_4259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4262,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4268,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li134),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4268(t6,t2,((C_word*)t0)[2]);}

/* loop1048 in k4257 in visit in topological-sort in k1288 */
static void C_fcall f_4268(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4268,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4276,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li133),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4300,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g10551056 */
t6=t3;
f_4276(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4298 in loop1048 in k4257 in visit in topological-sort in k1288 */
static void C_ccall f_4300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4268(t3,((C_word*)t0)[2],t2);}

/* g1055 in loop1048 in k4257 in visit in topological-sort in k1288 */
static void C_fcall f_4276(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4276,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4280,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 806  lookup */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4220(t4,t3,t2);}

/* k4278 in g1055 in loop1048 in k4257 in visit in topological-sort in k1288 */
static void C_ccall f_4280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_eqp(t1,lf[97]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(t1)){
t3=t1;
/* data-structures.scm: 808  visit */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4255(t4,((C_word*)t0)[4],((C_word*)t0)[2],t3);}
else{
/* data-structures.scm: 808  visit */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4255(t3,((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}}

/* k4260 in k4257 in visit in topological-sort in k1288 */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4262,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* lookup in topological-sort in k1288 */
static void C_fcall f_4220(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4220,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4226,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word)li131),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4226(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in lookup in topological-sort in k1288 */
static void C_fcall f_4226(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4226,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4239,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4253,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 798  caar */
t5=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k4251 in loop in lookup in topological-sort in k1288 */
static void C_ccall f_4253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 798  pred */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4237 in loop in lookup in topological-sort in k1288 */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* data-structures.scm: 798  cdar */
t2=*((C_word*)lf[96]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm: 799  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4226(t3,((C_word*)t0)[4],t2);}}

/* insert in topological-sort in k1288 */
static void C_fcall f_4173(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4173,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4179,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word)li129),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_4179(t7,t1,((C_word*)((C_word*)t0)[3])[1]);}

/* loop in insert in topological-sort in k1288 */
static void C_fcall f_4179(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4179,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4200,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4218,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 792  caar */
t5=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k4216 in loop in insert in topological-sort in k1288 */
static void C_ccall f_4218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 792  pred */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4198 in loop in insert in topological-sort in k1288 */
static void C_ccall f_4200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_set_cdr(t2,((C_word*)t0)[3]));}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm: 793  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4179(t3,((C_word*)t0)[4],t2);}}

/* sort in k1288 */
static void C_ccall f_4137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4137,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4151,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4155,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 775  vector->list */
t6=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4162,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 776  append */
t5=*((C_word*)lf[93]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_SCHEME_END_OF_LIST);}}

/* k4160 in sort in k1288 */
static void C_ccall f_4162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 776  sort! */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4153 in sort in k1288 */
static void C_ccall f_4155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 775  sort! */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4149 in sort in k1288 */
static void C_ccall f_4151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 775  list->vector */
t2=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* sort! in k1288 */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4004,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4007,a[2]=t4,a[3]=t6,a[4]=t3,a[5]=((C_word)li125),tmp=(C_word)a,a+=6,tmp));
if(C_truep((C_word)C_i_vectorp(((C_word*)t4)[1]))){
t8=(C_word)C_i_vector_length(((C_word*)t4)[1]);
t9=((C_word*)t4)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4094,a[2]=t8,a[3]=t6,a[4]=t1,a[5]=t9,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm: 758  vector->list */
t11=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,((C_word*)t4)[1]);}
else{
t8=(C_word)C_i_length(((C_word*)t4)[1]);
/* data-structures.scm: 764  step */
t9=((C_word*)t6)[1];
f_4007(t9,t1,t8);}}

/* k4092 in sort! in k1288 */
static void C_ccall f_4094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4094,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4101,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 759  step */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4007(t4,t3,((C_word*)t0)[2]);}

/* k4099 in k4092 in sort! in k1288 */
static void C_ccall f_4101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4101,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4103,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4103(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* doloop994 in k4099 in k4092 in sort! in k1288 */
static void C_fcall f_4103(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4103,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_vector_set(((C_word*)t0)[3],t3,t4);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_a_i_plus(&a,2,t3,C_fix(1));
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* step in sort! in k1288 */
static void C_fcall f_4007(C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4007,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4017,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_quotient(4,0,t3,t2,C_fix(2));}
else{
if(C_truep((C_word)C_i_nequalp(t2,C_fix(2)))){
t3=(C_word)C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=(C_word)C_i_cadr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(C_word)C_i_cddr(((C_word*)((C_word*)t0)[2])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4058,a[2]=t1,a[3]=t3,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 743  less? */
t9=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t9))(4,t9,t8,t4,t3);}
else{
if(C_truep((C_word)C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=(C_word)C_i_set_cdr(t3,C_SCHEME_END_OF_LIST);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}}}

/* k4056 in step in sort! in k1288 */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_set_car(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=(C_word)C_i_set_car(t3,((C_word*)t0)[3]);
t5=(C_word)C_i_cdr(((C_word*)t0)[5]);
t6=(C_word)C_i_set_cdr(t5,C_SCHEME_END_OF_LIST);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[5]);}}

/* k4015 in step in sort! in k1288 */
static void C_ccall f_4017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm: 734  step */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4007(t3,t2,t1);}

/* k4018 in k4015 in step in sort! in k1288 */
static void C_ccall f_4020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4020,2,t0,t1);}
t2=(C_word)C_a_i_minus(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4026,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 736  step */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4007(t4,t3,t2);}

/* k4024 in k4018 in k4015 in step in sort! in k1288 */
static void C_ccall f_4026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 737  merge! */
t2=*((C_word*)lf[89]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* merge! in k1288 */
static void C_ccall f_3872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3872,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3875,a[2]=t4,a[3]=t6,a[4]=((C_word)li123),tmp=(C_word)a,a+=5,tmp));
if(C_truep((C_word)C_i_nullp(t2))){
t8=t3;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3954,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_i_car(t3);
t10=(C_word)C_i_car(t2);
/* data-structures.scm: 711  less? */
t11=t4;
((C_proc4)C_retrieve_proc(t11))(4,t11,t8,t9,t10);}}}

/* k3952 in merge! in k1288 */
static void C_ccall f_3954(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3954,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3957,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_set_cdr(((C_word*)t0)[5],((C_word*)t0)[3]);
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm: 714  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3875(t5,t2,((C_word*)t0)[5],((C_word*)t0)[3],t4);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_set_cdr(((C_word*)t0)[3],((C_word*)t0)[5]);
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm: 719  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3875(t5,t2,((C_word*)t0)[3],t4,((C_word*)t0)[5]);}}}

/* k3975 in k3952 in merge! in k1288 */
static void C_ccall f_3977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3955 in k3952 in merge! in k1288 */
static void C_ccall f_3957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* loop in merge! in k1288 */
static void C_fcall f_3875(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3875,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3882,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(t4);
t7=(C_word)C_i_car(t3);
/* data-structures.scm: 696  less? */
t8=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t8))(4,t8,t5,t6,t7);}

/* k3880 in loop in merge! in k1288 */
static void C_ccall f_3882(C_word c,C_word t0,C_word t1){
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
t2=(C_word)C_i_set_cdr(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_cdr(((C_word*)t0)[5],((C_word*)t0)[3]));}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm: 701  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3875(t5,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3],t4);}}
else{
t2=(C_word)C_i_set_cdr(((C_word*)t0)[6],((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_cdr(((C_word*)t0)[3],((C_word*)t0)[5]));}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm: 707  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3875(t5,((C_word*)t0)[4],((C_word*)t0)[3],t4,((C_word*)t0)[5]);}}}

/* merge in k1288 */
static void C_ccall f_3773(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3773,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3807,a[2]=t4,a[3]=t10,a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3807(t12,t1,t5,t6,t7,t8);}}}

/* loop in merge in k1288 */
static void C_fcall f_3807(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3807,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3814,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm: 679  less? */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t4,t2);}

/* k3812 in loop in merge in k1288 */
static void C_ccall f_3814(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3814,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[7]))){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3834,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* data-structures.scm: 682  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3807(t5,t2,((C_word*)t0)[6],((C_word*)t0)[5],t3,t4);}}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[5]))){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[7]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3862,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm: 686  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3807(t5,t2,t3,t4,((C_word*)t0)[3],((C_word*)t0)[7]);}}}

/* k3860 in k3812 in loop in merge in k1288 */
static void C_ccall f_3862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3862,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3832 in k3812 in loop in merge in k1288 */
static void C_ccall f_3834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3834,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* sorted? in k1288 */
static void C_ccall f_3664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3664,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_vectorp(t2))){
t4=(C_word)C_i_vector_length(t2);
if(C_truep((C_word)C_i_less_or_equalp(t4,C_fix(1)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3691,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t4,a[6]=((C_word)li118),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3691(t8,t1,C_fix(1));}}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3739,a[2]=t3,a[3]=t7,a[4]=((C_word)li119),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_3739(t9,t1,t4,t5);}}}

/* loop in sorted? in k1288 */
static void C_fcall f_3739(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3739,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t3);
/* data-structures.scm: 662  less? */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,t6,t2);}}

/* k3765 in loop in sorted? in k1288 */
static void C_ccall f_3767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm: 663  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3739(t4,((C_word*)t0)[4],t2,t3);}}

/* doloop909 in sorted? in k1288 */
static void C_fcall f_3691(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3691,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nequalp(t2,((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_3701(2,t5,t3);}
else{
t5=(C_word)C_i_vector_ref(((C_word*)t0)[3],t2);
t6=(C_word)C_a_i_minus(&a,2,t2,C_fix(1));
t7=(C_word)C_i_vector_ref(((C_word*)t0)[3],t6);
/* data-structures.scm: 656  less? */
t8=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t8))(4,t8,t4,t5,t7);}}

/* k3699 in doloop909 in sorted? in k1288 */
static void C_ccall f_3701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3701,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_nequalp(((C_word*)t0)[4],((C_word*)t0)[3]));}
else{
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[2])[1];
f_3691(t3,((C_word*)t0)[5],t2);}}

/* string-chomp in k1288 */
static void C_ccall f_3612(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3612r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3612r(t0,t1,t2,t3);}}

static void C_ccall f_3612r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3616,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_3616(2,t5,lf[86]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_3616(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3614 in string-chomp in k1288 */
static void C_ccall f_3616(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=(C_word)C_i_check_string_2(((C_word*)t0)[3],lf[85]);
t3=(C_word)C_i_check_string_2(t1,lf[85]);
t4=(C_word)C_block_size(((C_word*)t0)[3]);
t5=(C_word)C_block_size(t1);
t6=(C_word)C_fixnum_difference(t4,t5);
t7=(C_word)C_fixnum_greater_or_equal_p(t4,t5);
t8=(C_truep(t7)?(C_word)C_substring_compare(((C_word*)t0)[3],t1,t6,C_fix(0),t5):C_SCHEME_FALSE);
if(C_truep(t8)){
/* data-structures.scm: 623  ##sys#substring */
t9=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t6);}
else{
t9=((C_word*)t0)[3];
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* string-chop in k1288 */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3548,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[84]);
t5=(C_word)C_i_check_exact_2(t3,lf[84]);
t6=(C_word)C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3563,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3563(t10,t1,t6,C_fix(0));}

/* loop in string-chop in k1288 */
static void C_fcall f_3563(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3563,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3583,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_fixnum_plus(t3,t2);
/* data-structures.scm: 609  ##sys#substring */
t6=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[3],t3,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3594,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_fixnum_plus(t3,((C_word*)t0)[4]);
/* data-structures.scm: 610  ##sys#substring */
t6=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[3],t3,t5);}}}

/* k3592 in loop in string-chop in k1288 */
static void C_ccall f_3594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3598,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[3],((C_word*)t0)[4]);
/* data-structures.scm: 610  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3563(t5,t2,t3,t4);}

/* k3596 in k3592 in loop in string-chop in k1288 */
static void C_ccall f_3598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3598,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3581 in loop in string-chop in k1288 */
static void C_ccall f_3583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3583,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,1,t1));}

/* string-translate* in k1288 */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3426,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[82]);
t5=(C_word)C_i_check_list_2(t3,lf[82]);
t6=(C_word)C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3438,a[2]=t3,a[3]=t8,a[4]=t2,a[5]=t6,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
/* data-structures.scm: 598  collect */
t10=((C_word*)t8)[1];
f_3438(t10,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* collect in string-translate* in k1288 */
static void C_fcall f_3438(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3438,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3452,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t2,t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3466,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 580  ##sys#substring */
t9=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,((C_word*)t0)[4],t3,t2);}
else{
t8=((C_word*)t6)[1];
/* data-structures.scm: 578  reverse */
t9=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3471,a[2]=t8,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=t2,a[9]=((C_word)li112),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_3471(t10,t1,((C_word*)t0)[2]);}}

/* loop in collect in string-translate* in k1288 */
static void C_fcall f_3471(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3471,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm: 584  collect */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3438(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_car(t3);
t5=(C_word)C_i_string_length(t4);
t6=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_substring_compare(((C_word*)t0)[3],t4,((C_word*)t0)[8],C_fix(0),t5))){
t7=(C_word)C_fixnum_plus(((C_word*)t0)[8],t5);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3510,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[8],((C_word*)t0)[5]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3536,a[2]=t8,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 592  ##sys#substring */
t10=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[8]);}
else{
t9=t8;
f_3510(t9,C_SCHEME_UNDEFINED);}}
else{
t7=(C_word)C_i_cdr(t2);
/* data-structures.scm: 597  loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}}}

/* k3534 in loop in collect in string-translate* in k1288 */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3536,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_3510(t4,t3);}

/* k3508 in loop in collect in string-translate* in k1288 */
static void C_fcall f_3510(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3510,NULL,2,t0,t1);}
t2=(C_word)C_i_string_length(((C_word*)t0)[7]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);
/* data-structures.scm: 593  collect */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3438(t5,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[2],t3,t4);}

/* k3464 in collect in string-translate* in k1288 */
static void C_ccall f_3466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3466,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
/* data-structures.scm: 578  reverse */
t3=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k3450 in collect in string-translate* in k1288 */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 576  ##sys#fragments->string */
t2=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* string-translate in k1288 */
static void C_ccall f_3224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr4r,(void*)f_3224r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3224r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3224r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3261,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_charp(t3))){
t7=t6;
f_3261(2,t7,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3401,a[2]=t3,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp));}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3418,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 534  list->string */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}
else{
t7=(C_word)C_i_check_string_2(t3,lf[80]);
/* data-structures.scm: 537  instring */
f_3227(t6,t3);}}}

/* k3416 in string-translate in k1288 */
static void C_ccall f_3418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 534  instring */
f_3227(((C_word*)t0)[2],t1);}

/* f_3401 in string-translate in k1288 */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3401,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(t2,((C_word*)t0)[2]));}

/* k3259 in string-translate in k1288 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3264,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
if(C_truep((C_word)C_charp(t3))){
t4=t2;
f_3264(2,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
/* data-structures.scm: 542  list->string */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t4=(C_word)C_i_check_string_2(t3,lf[80]);
t5=t2;
f_3264(2,t5,t3);}}}
else{
t3=t2;
f_3264(2,t3,C_SCHEME_FALSE);}}

/* k3262 in k3259 in string-translate in k1288 */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3264,2,t0,t1);}
t2=(C_word)C_i_stringp(t1);
t3=(C_truep(t2)?(C_word)C_block_size(t1):C_SCHEME_FALSE);
t4=(C_word)C_i_check_string_2(((C_word*)t0)[5],lf[80]);
t5=(C_word)C_block_size(((C_word*)t0)[5]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3276,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm: 549  make-string */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t5);}

/* k3274 in k3262 in k3259 in string-translate in k1288 */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3276,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3281,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word)li109),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_3281(t5,((C_word*)t0)[2],C_fix(0),C_fix(0));}

/* loop in k3274 in k3262 in k3259 in string-translate in k1288 */
static void C_fcall f_3281(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3281,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[8]))){
if(C_truep((C_word)C_fixnum_lessp(t3,t2))){
/* data-structures.scm: 553  ##sys#substring */
t4=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[7],C_fix(0),t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[7]);}}
else{
t4=(C_word)C_subchar(((C_word*)t0)[6],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3300,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm: 556  from */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}}

/* k3298 in loop in k3274 in k3262 in k3259 in string-translate in k1288 */
static void C_ccall f_3300(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=t1;
if(C_truep(t2)){
t3=((C_word*)t0)[9];
if(C_truep(t3)){
if(C_truep((C_word)C_charp(((C_word*)t0)[9]))){
t4=(C_word)C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[9]);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t6=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm: 563  loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3281(t7,((C_word*)t0)[4],t5,t6);}
else{
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[3]))){
/* data-structures.scm: 565  ##sys#error */
t4=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[4],lf[80],lf[81],((C_word*)t0)[6],((C_word*)t0)[9]);}
else{
t4=(C_word)C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],(C_word)C_subchar(((C_word*)t0)[9],t1));
t5=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t6=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm: 568  loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3281(t7,((C_word*)t0)[4],t5,t6);}}}
else{
t4=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
/* data-structures.scm: 560  loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3281(t5,((C_word*)t0)[4],t4,((C_word*)t0)[7]);}}
else{
t3=(C_word)C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[2]);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t5=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm: 559  loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3281(t6,((C_word*)t0)[4],t4,t5);}}

/* instring in string-translate in k1288 */
static void C_fcall f_3227(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3227,NULL,2,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3232,a[2]=t2,a[3]=t3,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp));}

/* f_3232 in instring in string-translate in k1288 */
static void C_ccall f_3232(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3232,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3238,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_3238(t3,C_fix(0)));}

/* loop */
static C_word C_fcall f_3238(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],(C_word)C_subchar(((C_word*)t0)[2],t1));
if(C_truep(t2)){
return(t1);}
else{
t3=(C_word)C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}}

/* string-intersperse in k1288 */
static void C_ccall f_3109(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3109r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3109r(t0,t1,t2,t3);}}

static void C_ccall f_3109r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3113,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_3113(2,t5,lf[78]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_3113(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3111 in string-intersperse in k1288 */
static void C_ccall f_3113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3113,2,t0,t1);}
t2=(C_word)C_i_check_list_2(((C_word*)t0)[3],lf[75]);
t3=(C_word)C_i_check_string_2(t1,lf[75]);
t4=(C_word)C_block_size(t1);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3127,a[2]=t6,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li104),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3127(t8,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* loop1 in k3111 in string-intersperse in k1288 */
static void C_fcall f_3127(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3127,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep((C_word)C_eqp(((C_word*)t0)[5],C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[76]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3137,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_fixnum_difference(t3,((C_word*)t0)[3]);
/* data-structures.scm: 497  ##sys#allocate-vector */
t6=*((C_word*)lf[77]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,t5,C_SCHEME_TRUE,C_make_character(32),C_SCHEME_FALSE);}}
else{
t4=(C_truep((C_word)C_blockp(t2))?(C_word)C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_i_check_string_2(t5,lf[75]);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_block_size(t5);
t9=(C_word)C_fixnum_plus(((C_word*)t0)[3],t3);
t10=(C_word)C_fixnum_plus(t8,t9);
/* data-structures.scm: 512  loop1 */
t14=t1;
t15=t7;
t16=t10;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
/* data-structures.scm: 514  ##sys#error-not-a-proper-list */
t5=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,((C_word*)t0)[5]);}}}

/* k3135 in loop1 in k3111 in string-intersperse in k1288 */
static void C_ccall f_3137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3142,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word)li103),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_3142(t2,((C_word*)t0)[2],C_fix(0)));}

/* loop2 in k3135 in loop1 in k3111 in string-intersperse in k1288 */
static C_word C_fcall f_3142(C_word t0,C_word t1,C_word t2){
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
loop:
C_stack_check;
t3=(C_word)C_slot(t1,C_fix(0));
t4=(C_word)C_slot(t1,C_fix(1));
t5=(C_word)C_block_size(t3);
t6=(C_word)C_substring_copy(t3,((C_word*)t0)[4],C_fix(0),t5,t2);
t7=(C_word)C_fixnum_plus(t2,t5);
if(C_truep((C_word)C_eqp(t4,C_SCHEME_END_OF_LIST))){
t8=((C_word*)t0)[4];
return(t8);}
else{
t8=(C_word)C_substring_copy(((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2],t7);
t9=(C_word)C_fixnum_plus(t7,((C_word*)t0)[2]);
t12=t4;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}

/* string-split in k1288 */
static void C_ccall f_2974(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2974r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2974r(t0,t1,t2,t3);}}

static void C_ccall f_2974r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(20);
t4=(C_word)C_i_check_string_2(t2,lf[72]);
t5=(C_word)C_vemptyp(t3);
t6=(C_truep(t5)?lf[73]:(C_word)C_i_vector_ref(t3,C_fix(0)));
t7=(C_word)C_block_size(t3);
t8=(C_word)C_eqp(t7,C_fix(2));
t9=(C_truep(t8)?(C_word)C_i_vector_ref(t3,C_fix(1)):C_SCHEME_FALSE);
t10=(C_word)C_block_size(t2);
t11=(C_word)C_i_check_string_2(t6,lf[72]);
t12=(C_word)C_block_size(t6);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2995,a[2]=t2,a[3]=t14,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3015,a[2]=t6,a[3]=t17,a[4]=t12,a[5]=t2,a[6]=t15,a[7]=t9,a[8]=t14,a[9]=t10,a[10]=((C_word)li101),tmp=(C_word)a,a+=11,tmp));
t19=((C_word*)t17)[1];
f_3015(t19,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* loop in string-split in k1288 */
static void C_fcall f_3015(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3015,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[9]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3025,a[2]=t1,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[7]);
if(C_truep(t7)){
/* data-structures.scm: 473  add */
t8=((C_word*)t0)[6];
f_2995(t8,t5,t4,t2,t3);}
else{
t8=((C_word*)((C_word*)t0)[8])[1];
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(t8)?t8:C_SCHEME_END_OF_LIST));}}
else{
t5=(C_word)C_subchar(((C_word*)t0)[5],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3042,a[2]=t7,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=t4,a[8]=t3,a[9]=((C_word*)t0)[3],a[10]=t2,a[11]=((C_word*)t0)[4],a[12]=((C_word)li100),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_3042(t9,t1,C_fix(0));}}

/* scan in loop in string-split in k1288 */
static void C_fcall f_3042(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3042,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[11]))){
t3=(C_word)C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
/* data-structures.scm: 478  loop */
t4=((C_word*)((C_word*)t0)[9])[1];
f_3015(t4,t1,t3,((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],(C_word)C_subchar(((C_word*)t0)[5],t2));
if(C_truep(t3)){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
t5=(C_word)C_fixnum_greaterp(((C_word*)t0)[10],((C_word*)t0)[7]);
t6=(C_truep(t5)?t5:((C_word*)t0)[4]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3081,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 482  add */
t8=((C_word*)t0)[3];
f_2995(t8,t7,((C_word*)t0)[7],((C_word*)t0)[10],((C_word*)t0)[8]);}
else{
/* data-structures.scm: 483  loop */
t7=((C_word*)((C_word*)t0)[9])[1];
f_3015(t7,t1,t4,((C_word*)t0)[8],t4);}}
else{
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* data-structures.scm: 484  scan */
t11=t1;
t12=t4;
t1=t11;
t2=t12;
goto loop;}}}

/* k3079 in scan in loop in string-split in k1288 */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 482  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3015(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,((C_word*)t0)[2]);}

/* k3023 in loop in string-split in k1288 */
static void C_ccall f_3025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:C_SCHEME_END_OF_LIST));}

/* add in string-split in k1288 */
static void C_fcall f_2995(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2995,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3010,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 466  ##sys#substring */
t6=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[2],t2,t3);}

/* k3008 in add in string-split in k1288 */
static void C_ccall f_3010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3010,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* substring-ci=? in k1288 */
static void C_ccall f_2894(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_2894r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2894r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2894r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2896,a[2]=t3,a[3]=t2,a[4]=((C_word)li94),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2901,a[2]=t5,a[3]=((C_word)li95),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2906,a[2]=t6,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2911,a[2]=t7,a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-start1647663 */
t9=t8;
f_2911(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-start2648661 */
t11=t7;
f_2906(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-len649658 */
t13=t6;
f_2901(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body645654 */
t15=t5;
f_2896(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}}}}

/* def-start1647 in substring-ci=? in k1288 */
static void C_fcall f_2911(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2911,NULL,2,t0,t1);}
/* def-start2648661 */
t2=((C_word*)t0)[2];
f_2906(t2,t1,C_fix(0));}

/* def-start2648 in substring-ci=? in k1288 */
static void C_fcall f_2906(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2906,NULL,3,t0,t1,t2);}
/* def-len649658 */
t3=((C_word*)t0)[2];
f_2901(t3,t1,t2,C_fix(0));}

/* def-len649 in substring-ci=? in k1288 */
static void C_fcall f_2901(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2901,NULL,4,t0,t1,t2,t3);}
/* body645654 */
t4=((C_word*)t0)[2];
f_2896(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body645 in substring-ci=? in k1288 */
static void C_fcall f_2896(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2896,NULL,5,t0,t1,t2,t3,t4);}
/* data-structures.scm: 451  ##sys#substring-ci=? */
((C_proc7)C_retrieve_proc(*((C_word*)lf[70]+1)))(7,*((C_word*)lf[70]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3,t4);}

/* ##sys#substring-ci=? in k1288 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2857,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_string_2(t2,lf[71]);
t8=(C_word)C_i_check_string_2(t3,lf[71]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2867,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2867(t10,t6);}
else{
t10=(C_word)C_block_size(t2);
t11=(C_word)C_fixnum_difference(t10,t4);
t12=(C_word)C_block_size(t3);
t13=(C_word)C_fixnum_difference(t12,t5);
t14=t9;
f_2867(t14,(C_word)C_i_fixnum_min(t11,t13));}}

/* k2865 in ##sys#substring-ci=? in k1288 */
static void C_fcall f_2867(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[71]);
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[71]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[5],t1));}

/* substring=? in k1288 */
static void C_ccall f_2777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_2777r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2777r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2777r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2779,a[2]=t3,a[3]=t2,a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2784,a[2]=t5,a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2789,a[2]=t6,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2794,a[2]=t7,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-start1590606 */
t9=t8;
f_2794(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-start2591604 */
t11=t7;
f_2789(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-len592601 */
t13=t6;
f_2784(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body588597 */
t15=t5;
f_2779(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}}}}

/* def-start1590 in substring=? in k1288 */
static void C_fcall f_2794(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2794,NULL,2,t0,t1);}
/* def-start2591604 */
t2=((C_word*)t0)[2];
f_2789(t2,t1,C_fix(0));}

/* def-start2591 in substring=? in k1288 */
static void C_fcall f_2789(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2789,NULL,3,t0,t1,t2);}
/* def-len592601 */
t3=((C_word*)t0)[2];
f_2784(t3,t1,t2,C_fix(0));}

/* def-len592 in substring=? in k1288 */
static void C_fcall f_2784(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2784,NULL,4,t0,t1,t2,t3);}
/* body588597 */
t4=((C_word*)t0)[2];
f_2779(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body588 in substring=? in k1288 */
static void C_fcall f_2779(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2779,NULL,5,t0,t1,t2,t3,t4);}
/* data-structures.scm: 437  ##sys#substring=? */
((C_proc7)C_retrieve_proc(*((C_word*)lf[68]+1)))(7,*((C_word*)lf[68]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3,t4);}

/* ##sys#substring=? in k1288 */
static void C_ccall f_2740(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2740,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_string_2(t2,lf[69]);
t8=(C_word)C_i_check_string_2(t3,lf[69]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2750,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2750(t10,t6);}
else{
t10=(C_word)C_block_size(t2);
t11=(C_word)C_fixnum_difference(t10,t4);
t12=(C_word)C_block_size(t3);
t13=(C_word)C_fixnum_difference(t12,t5);
t14=t9;
f_2750(t14,(C_word)C_i_fixnum_min(t11,t13));}}

/* k2748 in ##sys#substring=? in k1288 */
static void C_fcall f_2750(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[69]);
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[69]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[5],t1));}

/* string-compare3-ci in k1288 */
static void C_ccall f_2709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2709,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[67]);
t5=(C_word)C_i_check_string_2(t3,lf[67]);
t6=(C_word)C_block_size(t2);
t7=(C_word)C_block_size(t3);
t8=(C_word)C_fixnum_difference(t6,t7);
t9=(C_word)C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=(C_word)C_string_compare_case_insensitive(t2,t3,t10);
t12=(C_word)C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* string-compare3 in k1288 */
static void C_ccall f_2678(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2678,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[66]);
t5=(C_word)C_i_check_string_2(t3,lf[66]);
t6=(C_word)C_block_size(t2);
t7=(C_word)C_block_size(t3);
t8=(C_word)C_fixnum_difference(t6,t7);
t9=(C_word)C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=(C_word)C_mem_compare(t2,t3,t10);
t12=(C_word)C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* substring-index-ci in k1288 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2650r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2650r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2650r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2654,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* data-structures.scm: 396  ##sys#substring-index-ci */
((C_proc5)C_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),t1,t2,t3,C_fix(0));}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=(C_word)C_i_car(t4);
/* data-structures.scm: 396  ##sys#substring-index-ci */
((C_proc5)C_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),t1,t2,t3,t7);}
else{
/* ##sys#error */
t7=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k2652 in substring-index-ci in k1288 */
static void C_ccall f_2654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 396  ##sys#substring-index-ci */
((C_proc5)C_retrieve_proc(*((C_word*)lf[64]+1)))(5,*((C_word*)lf[64]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* substring-index in k1288 */
static void C_ccall f_2622(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2622r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2622r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2622r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2626,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* data-structures.scm: 393  ##sys#substring-index */
((C_proc5)C_retrieve_proc(*((C_word*)lf[62]+1)))(5,*((C_word*)lf[62]+1),t1,t2,t3,C_fix(0));}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=(C_word)C_i_car(t4);
/* data-structures.scm: 393  ##sys#substring-index */
((C_proc5)C_retrieve_proc(*((C_word*)lf[62]+1)))(5,*((C_word*)lf[62]+1),t1,t2,t3,t7);}
else{
/* ##sys#error */
t7=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k2624 in substring-index in k1288 */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 393  ##sys#substring-index */
((C_proc5)C_retrieve_proc(*((C_word*)lf[62]+1)))(5,*((C_word*)lf[62]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#substring-index-ci in k1288 */
static void C_ccall f_2613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2613,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2619,a[2]=t3,a[3]=t2,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 387  traverse */
f_2557(t1,t2,t3,t4,t5,lf[65]);}

/* a2618 in ##sys#substring-index-ci in k1288 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2619,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2,t3));}

/* ##sys#substring-index in k1288 */
static void C_ccall f_2604(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2604,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2610,a[2]=t3,a[3]=t2,a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 381  traverse */
f_2557(t1,t2,t3,t4,t5,lf[63]);}

/* a2609 in ##sys#substring-index in k1288 */
static void C_ccall f_2610(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2610,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2,t3));}

/* traverse in k1288 */
static void C_fcall f_2557(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2557,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_string_2(t2,t6);
t8=(C_word)C_i_check_string_2(t3,t6);
t9=(C_word)C_block_size(t3);
t10=(C_word)C_block_size(t2);
t11=(C_word)C_i_check_exact_2(t4,t6);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2578,a[2]=t10,a[3]=t5,a[4]=t13,a[5]=t9,a[6]=((C_word)li77),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_2578(t15,t1,t4,t10);}

/* loop in traverse in k1288 */
static void C_fcall f_2578(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2578,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greaterp(t3,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2591,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 375  test */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t2,((C_word*)t0)[2]);}}

/* k2589 in loop in traverse in k1288 */
static void C_ccall f_2591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm: 377  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2578(t4,((C_word*)t0)[5],t2,t3);}}

/* conc in k1288 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr2r,(void*)f_2512r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2512r(t0,t1,t2);}}

static void C_ccall f_2512r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(16);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2520,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2522,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2522(t11,t7,t2);}

/* loop452 in conc in k1288 */
static void C_fcall f_2522(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2522,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[57]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g468469 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2549 in loop452 in conc in k1288 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop452465 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2522(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop452465 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2522(t6,((C_word*)t0)[3],t5);}}

/* k2518 in conc in k1288 */
static void C_ccall f_2520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ->string in k1288 */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2467,3,t0,t1,t2);}
if(C_truep((C_word)C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* data-structures.scm: 350  symbol->string */
t3=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_charp(t2))){
/* data-structures.scm: 351  string */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_i_numberp(t2))){
/* data-structures.scm: 352  ##sys#number->string */
t3=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2504,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 354  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}}}}

/* k2502 in ->string in k1288 */
static void C_ccall f_2504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2507,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 355  display */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k2505 in k2502 in ->string in k1288 */
static void C_ccall f_2507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 356  get-output-string */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* reverse-string-append in k1288 */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2390,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2393,a[2]=t4,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
/* data-structures.scm: 339  rev-string-append */
t6=((C_word*)t4)[1];
f_2393(t6,t1,t2,C_fix(0));}

/* rev-string-append in reverse-string-append in k1288 */
static void C_fcall f_2393(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(10);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2393,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_string_length(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2409,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_cdr(t2);
t8=(C_word)C_a_i_plus(&a,2,t3,t5);
/* data-structures.scm: 330  rev-string-append */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
/* data-structures.scm: 337  make-string */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k2407 in rev-string-append in reverse-string-append in k1288 */
static void C_ccall f_2409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2409,2,t0,t1);}
t2=(C_word)C_i_string_length(t1);
t3=(C_word)C_a_i_minus(&a,2,t2,((C_word*)t0)[5]);
t4=(C_word)C_a_i_minus(&a,2,t3,((C_word*)t0)[4]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2418,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li71),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2418(t8,((C_word*)t0)[2],C_fix(0),t4);}

/* loop in k2407 in rev-string-append in reverse-string-append in k1288 */
static void C_fcall f_2418(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2418,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_lessp(t2,((C_word*)t0)[5]))){
t4=(C_word)C_i_string_ref(((C_word*)t0)[4],t2);
t5=(C_word)C_i_string_set(((C_word*)t0)[3],t3,t4);
t6=(C_word)C_a_i_plus(&a,2,t2,C_fix(1));
t7=(C_word)C_a_i_plus(&a,2,t3,C_fix(1));
/* data-structures.scm: 335  loop */
t10=t1;
t11=t6;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t4=((C_word*)t0)[3];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* rassoc in k1288 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2340r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2340r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2340r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(8);
t5=(C_word)C_i_check_list_2(t3,lf[50]);
t6=(C_word)C_notvemptyp(t4);
t7=(C_truep(t6)?(C_word)C_i_vector_ref(t4,C_fix(0)):*((C_word*)lf[45]+1));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2352,a[2]=t2,a[3]=t7,a[4]=t9,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2352(t11,t1,t3);}

/* loop in rassoc in k1288 */
static void C_fcall f_2352(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2352,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_check_pair_2(t3,lf[50]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2371,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_slot(t3,C_fix(1));
/* data-structures.scm: 316  tst */
t7=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2369 in loop in rassoc in k1288 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm: 318  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2352(t3,((C_word*)t0)[5],t2);}}

/* alist-ref in k1288 */
static void C_ccall f_2216(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_2216r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2216r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2216r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(13);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2218,a[2]=t3,a[3]=t2,a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2287,a[2]=t5,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2292,a[2]=t6,a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-cmp364394 */
t8=t7;
f_2292(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-default365392 */
t10=t6;
f_2287(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body362370 */
t12=t5;
f_2218(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-cmp364 in alist-ref in k1288 */
static void C_fcall f_2292(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2292,NULL,2,t0,t1);}
/* def-default365392 */
t2=((C_word*)t0)[2];
f_2287(t2,t1,*((C_word*)lf[45]+1));}

/* def-default365 in alist-ref in k1288 */
static void C_fcall f_2287(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2287,NULL,3,t0,t1,t2);}
/* body362370 */
t3=((C_word*)t0)[2];
f_2218(t3,t1,t2,C_SCHEME_FALSE);}

/* body362 in alist-ref in k1288 */
static void C_fcall f_2218(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2218,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(*((C_word*)lf[43]+1),t2);
if(C_truep(t5)){
t6=t4;
f_2222(t6,*((C_word*)lf[44]+1));}
else{
t6=(C_word)C_eqp(*((C_word*)lf[45]+1),t2);
if(C_truep(t6)){
t7=*((C_word*)lf[46]+1);
t8=t4;
f_2222(t8,t7);}
else{
t7=(C_word)C_eqp(*((C_word*)lf[47]+1),t2);
t8=t4;
f_2222(t8,(C_truep(t7)?*((C_word*)lf[48]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2247,a[2]=t2,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp)));}}}

/* f_2247 in body362 in alist-ref in k1288 */
static void C_ccall f_2247(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2247,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2253,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2253(t7,t1,t3);}

/* loop */
static void C_fcall f_2253(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2253,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2269,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
/* data-structures.scm: 301  cmp */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_2269(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2267 in loop */
static void C_ccall f_2269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm: 303  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2253(t3,((C_word*)t0)[5],t2);}}

/* k2220 in body362 in alist-ref in k1288 */
static void C_fcall f_2222(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2222,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2225,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 304  aq */
t3=t1;
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2223 in k2220 in body362 in alist-ref in k1288 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(t1,C_fix(1)));}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* alist-update! in k1288 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr5r,(void*)f_2117r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2117r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2117r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2121,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
t7=t6;
f_2121(2,t7,*((C_word*)lf[45]+1));}
else{
t7=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t7))){
t8=t6;
f_2121(2,t8,(C_word)C_i_car(t5));}
else{
/* ##sys#error */
t8=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t5);}}}

/* k2119 in alist-update! in k1288 */
static void C_ccall f_2121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2121,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(*((C_word*)lf[43]+1),t1);
if(C_truep(t3)){
t4=t2;
f_2124(t4,*((C_word*)lf[44]+1));}
else{
t4=(C_word)C_eqp(*((C_word*)lf[45]+1),t1);
if(C_truep(t4)){
t5=*((C_word*)lf[46]+1);
t6=t2;
f_2124(t6,t5);}
else{
t5=(C_word)C_eqp(*((C_word*)lf[47]+1),t1);
t6=t2;
f_2124(t6,(C_truep(t5)?*((C_word*)lf[48]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2156,a[2]=t1,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp)));}}}

/* f_2156 in k2119 in alist-update! in k1288 */
static void C_ccall f_2156(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2156,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2162,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2162(t7,t1,t3);}

/* loop */
static void C_fcall f_2162(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2162,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2178,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
/* data-structures.scm: 282  cmp */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_2178(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2176 in loop */
static void C_ccall f_2178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm: 284  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2162(t3,((C_word*)t0)[5],t2);}}

/* k2122 in k2119 in alist-update! in k1288 */
static void C_fcall f_2124(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2124,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 285  aq */
t3=t1;
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k2125 in k2122 in k2119 in alist-update! in k1288 */
static void C_ccall f_2127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2127,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_setslot(t1,C_fix(1),((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]));}}

/* shuffle in k1288 */
static void C_ccall f_2007(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[26],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2007,4,t0,t1,t2,t3);}
t4=(C_word)C_i_length(t2);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2018,a[2]=t1,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2057,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2073,a[2]=t11,a[3]=t16,a[4]=t13,a[5]=t4,a[6]=t3,a[7]=((C_word)li58),tmp=(C_word)a,a+=8,tmp));
t18=((C_word*)t16)[1];
f_2073(t18,t14,t2);}

/* loop286 in shuffle in k1288 */
static void C_fcall f_2073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2073,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2100,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2111,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g302303 */
t6=t3;
f_2100(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2109 in loop286 in shuffle in k1288 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2111,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop286299 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2073(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop286299 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2073(t6,((C_word*)t0)[3],t5);}}

/* g302 in loop286 in shuffle in k1288 */
static void C_fcall f_2100(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2100,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2108,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 267  random */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2106 in g302 in loop286 in shuffle in k1288 */
static void C_ccall f_2108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2108,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k2055 in shuffle in k1288 */
static void C_ccall f_2057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2059,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm: 267  sort! */
t3=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* a2058 in k2055 in shuffle in k1288 */
static void C_ccall f_2059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2059,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_car(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_lessp(t4,t5));}

/* k2016 in shuffle in k1288 */
static void C_ccall f_2018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2018,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2020,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2020(t5,((C_word*)t0)[2],t1);}

/* loop263 in k2016 in shuffle in k1288 */
static void C_fcall f_2020(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2020,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[40]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2049,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g279280 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2047 in loop263 in k2016 in shuffle in k1288 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2049,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop263276 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2020(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop263276 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2020(t6,((C_word*)t0)[3],t5);}}

/* compress in k1288 */
static void C_ccall f_1927(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1927,4,t0,t1,t2,t3);}
t4=lf[36];
t5=(C_word)C_i_check_list_2(t3,lf[35]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1936,a[2]=t4,a[3]=t7,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1936(t9,t1,t2,t3);}

/* loop in compress in k1288 */
static void C_fcall f_1936(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1936,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
if(C_truep((C_word)C_i_pairp(t3))){
if(C_truep((C_word)C_slot(t2,C_fix(0)))){
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1978,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_slot(t3,C_fix(1));
/* data-structures.scm: 259  loop */
t11=t5;
t12=t6;
t13=t7;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t3,C_fix(1));
/* data-structures.scm: 260  loop */
t11=t1;
t12=t4;
t13=t5;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}
else{
/* data-structures.scm: 258  ##sys#signal-hook */
t4=*((C_word*)lf[37]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[38],lf[35],((C_word*)t0)[2],t3);}}
else{
/* data-structures.scm: 256  ##sys#signal-hook */
t4=*((C_word*)lf[37]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[38],lf[35],((C_word*)t0)[2],t2);}}}

/* k1976 in loop in compress in k1288 */
static void C_ccall f_1978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1978,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* join in k1288 */
static void C_ccall f_1868(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1868r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1868r(t0,t1,t2,t3);}}

static void C_ccall f_1868r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(7);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_END_OF_LIST);
t6=(C_word)C_i_check_list_2(t5,lf[33]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1880,a[2]=t8,a[3]=t5,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1880(t10,t1,t2);}

/* loop in join in k1288 */
static void C_fcall f_1880(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1880,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1915,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 247  loop */
t7=t5;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}
else{
/* data-structures.scm: 241  ##sys#error-not-a-proper-list */
t3=*((C_word*)lf[34]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}}}

/* k1913 in loop in join in k1288 */
static void C_ccall f_1915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 247  ##sys#append */
t2=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* chop in k1288 */
static void C_ccall f_1783(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1783,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[30]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1790,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t3,C_fix(0)))){
/* data-structures.scm: 222  ##sys#error */
t6=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[30],lf[32],t3);}
else{
t6=t5;
f_1790(2,t6,C_SCHEME_UNDEFINED);}}

/* k1788 in chop in k1288 */
static void C_ccall f_1790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1790,2,t0,t1);}
t2=(C_word)C_i_length(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1798(t6,((C_word*)t0)[2],((C_word*)t0)[5],t2);}

/* loop in k1788 in chop in k1288 */
static void C_fcall f_1798(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1798,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_fixnum_lessp(t3,((C_word*)t0)[4]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,1,t2));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1819,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1819(t7,t1,C_SCHEME_END_OF_LIST,t2,((C_word*)t0)[4]);}}}

/* doloop205 in loop in k1788 in chop in k1288 */
static void C_fcall f_1819(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1819,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1833,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm: 233  reverse */
t7=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t2);}
else{
t6=(C_word)C_slot(t3,C_fix(0));
t7=(C_word)C_a_i_cons(&a,2,t6,t2);
t8=(C_word)C_slot(t3,C_fix(1));
t9=(C_word)C_fixnum_difference(t4,C_fix(1));
t12=t1;
t13=t7;
t14=t8;
t15=t9;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}}

/* k1831 in doloop205 in loop in k1788 in chop in k1288 */
static void C_ccall f_1833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1837,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* data-structures.scm: 233  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1798(t4,t2,((C_word*)t0)[2],t3);}

/* k1835 in k1831 in doloop205 in loop in k1788 in chop in k1288 */
static void C_ccall f_1837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1837,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* flatten in k1288 */
static void C_ccall f_1742(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1742r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1742r(t0,t1,t2);}}

static void C_ccall f_1742r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1748,a[2]=t4,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1748(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in flatten in k1288 */
static void C_fcall f_1748(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1748,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_listp(t4))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1774,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 214  loop */
t10=t6;
t11=t5;
t12=t3;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1781,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 215  loop */
t10=t6;
t11=t5;
t12=t3;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* k1779 in loop in flatten in k1288 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1781,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1772 in loop in flatten in k1288 */
static void C_ccall f_1774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 214  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1748(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* butlast in k1288 */
static void C_ccall f_1710(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1710,3,t0,t1,t2);}
t3=(C_word)C_i_check_pair_2(t2,lf[28]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1719,a[2]=t5,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1719(t7,t1,t2);}

/* loop in butlast in k1288 */
static void C_fcall f_1719(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1719,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_truep((C_word)C_blockp(t3))?(C_word)C_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1740,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 204  loop */
t8=t6;
t9=t3;
t1=t8;
t2=t9;
goto loop;}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k1738 in loop in butlast in k1288 */
static void C_ccall f_1740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1740,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* intersperse in k1288 */
static void C_ccall f_1677(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1677,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1683,a[2]=t5,a[3]=t3,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1683(t7,t1,t2);}

/* loop in intersperse in k1288 */
static void C_fcall f_1683(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1683,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_eqp(t3,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1708,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 197  loop */
t8=t5;
t9=t3;
t1=t8;
t2=t9;
goto loop;}}}

/* k1706 in loop in intersperse in k1288 */
static void C_ccall f_1708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1708,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* tail? in k1288 */
static void C_ccall f_1649(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1649,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_list_2(t3,lf[26]);
t5=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1661,a[2]=t2,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_1661(t6,t3));}}

/* loop in tail? in k1288 */
static C_word C_fcall f_1661(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:
C_stack_check;
if(C_truep((C_word)C_eqp(t1,C_SCHEME_END_OF_LIST))){
return(C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_eqp(((C_word*)t0)[2],t1))){
return(C_SCHEME_TRUE);}
else{
t2=(C_word)C_slot(t1,C_fix(1));
t4=t2;
t1=t4;
goto loop;}}}

/* atom? in k1288 */
static void C_ccall f_1646(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1646,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not_pair_p(t2));}

/* right-section in k1288 */
static void C_ccall f_1620(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1620r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1620r(t0,t1,t2,t3);}}

static void C_ccall f_1620r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1624,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 171  ##sys#check-closure */
t5=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[24]);}

/* k1622 in right-section in k1288 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1627,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 172  ##sys#reverse */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1625 in k1622 in right-section in k1288 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1627,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1628,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li37),tmp=(C_word)a,a+=6,tmp));}

/* f_1628 in k1625 in k1622 in right-section in k1288 */
static void C_ccall f_1628(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_1628r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1628r(t0,t1,t2);}}

static void C_ccall f_1628r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1636,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1640,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1644,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 174  ##sys#reverse */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1642 */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 174  ##sys#append */
t2=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1638 */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 174  ##sys#reverse */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1634 */
static void C_ccall f_1636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* left-section in k1288 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1605r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1605r(t0,t1,t2,t3);}}

static void C_ccall f_1605r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1609,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 164  ##sys#check-closure */
t5=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[20]);}

/* k1607 in left-section in k1288 */
static void C_ccall f_1609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1609,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));}

/* f_1610 in k1607 in left-section in k1288 */
static void C_ccall f_1610(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1610r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1610r(t0,t1,t2);}}

static void C_ccall f_1610r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1618,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 166  ##sys#append */
t4=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k1616 */
static void C_ccall f_1618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* never? in k1288 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1602,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* always? in k1288 */
static void C_ccall f_1599(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1599,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* none? in k1288 */
static void C_ccall f_1596(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1596,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* any? in k1288 */
static void C_ccall f_1593(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1593,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* each in k1288 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1537r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1537r(t0,t1,t2);}}

static void C_ccall f_1537r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1545,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_i_nullp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?(C_word)C_slot(t2,C_fix(0)):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1559,a[2]=t2,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp)));}}

/* f_1559 in each in k1288 */
static void C_ccall f_1559(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_1559r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1559r(t0,t1,t2);}}

static void C_ccall f_1559r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1565,a[2]=t4,a[3]=t2,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1565(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1565(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1565,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t4))){
C_apply(4,0,t1,t3,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1584,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,t3,((C_word*)t0)[3]);}}

/* k1582 in loop */
static void C_ccall f_1584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 153  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1565(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1545 in each in k1288 */
static void C_ccall f_1545(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1545,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[14]+1));}

/* noop in k1288 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1531,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[14]+1));}

/* list-of? in k1288 */
static void C_ccall f_1491(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1491,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1493,a[2]=t2,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp));}

/* f_1493 in list-of? in k1288 */
static void C_ccall f_1493(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1493,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1499,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1499(t6,t1,t2);}

/* loop */
static void C_fcall f_1499(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1499,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_not_pair_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1518,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* data-structures.scm: 136  pred */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}}}

/* k1516 in loop */
static void C_ccall f_1518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm: 136  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1499(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* o in k1288 */
static void C_ccall f_1452(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1452r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1452r(t0,t1,t2);}}

static void C_ccall f_1452r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
if(C_truep((C_word)C_i_nullp(t2))){
t3=*((C_word*)lf[2]+1);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1464,a[2]=t4,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1464(t6,t1,t2);}}

/* loop in o in k1288 */
static void C_fcall f_1464(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1464,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1478,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_1478 in loop in o in k1288 */
static void C_ccall f_1478(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1478,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1486,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 129  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1464(t4,t3,((C_word*)t0)[2]);}

/* k1484 */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1486,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1489,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* g8586 */
t3=t1;
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1487 in k1484 */
static void C_ccall f_1489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 129  h */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* compose in k1288 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1416r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1416r(t0,t1,t2);}}

static void C_ccall f_1416r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1419,a[2]=t4,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp));
if(C_truep((C_word)C_i_nullp(t2))){
t6=*((C_word*)lf[10]+1);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
C_apply(4,0,t1,((C_word*)t4)[1],t2);}}

/* rec in compose in k1288 */
static void C_ccall f_1419(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1419r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1419r(t0,t1,t2,t3);}}

static void C_ccall f_1419r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
if(C_truep((C_word)C_i_nullp(t3))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1427,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_1427 in rec in compose in k1288 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1427r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1427r(t0,t1,t2);}}

static void C_ccall f_1427r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1433,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 114  call-with-values */
C_call_with_values(4,0,t1,t3,((C_word*)t0)[2]);}

/* a1432 */
static void C_ccall f_1433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1441,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k1439 in a1432 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* complement in k1288 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1404,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1406,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));}

/* f_1406 in complement in k1288 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1406r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1406r(t0,t1,t2);}}

static void C_ccall f_1406r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1414,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(4,0,t3,((C_word*)t0)[2],t2);}

/* k1412 */
static void C_ccall f_1414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* flip in k1288 */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1396,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1398,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));}

/* f_1398 in flip in k1288 */
static void C_ccall f_1398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1398,4,t0,t1,t2,t3);}
/* data-structures.scm: 103  proc */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t3,t2);}

/* constantly in k1288 */
static void C_ccall f_1373(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1373r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1373r(t0,t1,t2);}}

static void C_ccall f_1373r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t3=(C_word)C_i_length(t2);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1384,a[2]=t5,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1386,a[2]=t2,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_1386 in constantly in k1288 */
static void C_ccall f_1386(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1386,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_1384 in constantly in k1288 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1384,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* disjoin in k1288 */
static void C_ccall f_1336(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1336r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1336r(t0,t1,t2);}}

static void C_ccall f_1336r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1338,a[2]=t2,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));}

/* f_1338 in disjoin in k1288 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1338,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1344,a[2]=t2,a[3]=t4,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1344(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1344(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1344,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1357,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* g5758 */
t5=t3;
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}}

/* k1355 in loop */
static void C_ccall f_1357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm: 95   loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1344(t3,((C_word*)t0)[4],t2);}}

/* conjoin in k1288 */
static void C_ccall f_1303(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1303r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1303r(t0,t1,t2);}}

static void C_ccall f_1303r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1305,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));}

/* f_1305 in conjoin in k1288 */
static void C_ccall f_1305(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1305,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1311,a[2]=t2,a[3]=t4,a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1311(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1311(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1311,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1327,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* g4243 */
t6=t4;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}}

/* k1325 in loop */
static void C_ccall f_1327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm: 88   loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1311(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* project in k1288 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1295,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1297,a[2]=t2,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));}

/* f_1297 in project in k1288 */
static void C_ccall f_1297(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1297r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1297r(t0,t1,t2);}}

static void C_ccall f_1297r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_vector_ref(t2,((C_word*)t0)[2]));}

/* identity in k1288 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1292,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[267] = {
{"toplevel:data_structures_scm",(void*)C_data_structures_toplevel},
{"f_1290:data_structures_scm",(void*)f_1290},
{"f_4737:data_structures_scm",(void*)f_4737},
{"f_4747:data_structures_scm",(void*)f_4747},
{"f_4766:data_structures_scm",(void*)f_4766},
{"f_4708:data_structures_scm",(void*)f_4708},
{"f_4654:data_structures_scm",(void*)f_4654},
{"f_4673:data_structures_scm",(void*)f_4673},
{"f_4683:data_structures_scm",(void*)f_4683},
{"f_4665:data_structures_scm",(void*)f_4665},
{"f_4645:data_structures_scm",(void*)f_4645},
{"f_4609:data_structures_scm",(void*)f_4609},
{"f_4619:data_structures_scm",(void*)f_4619},
{"f_4577:data_structures_scm",(void*)f_4577},
{"f_4556:data_structures_scm",(void*)f_4556},
{"f_4566:data_structures_scm",(void*)f_4566},
{"f_4535:data_structures_scm",(void*)f_4535},
{"f_4545:data_structures_scm",(void*)f_4545},
{"f_4522:data_structures_scm",(void*)f_4522},
{"f_4516:data_structures_scm",(void*)f_4516},
{"f_4510:data_structures_scm",(void*)f_4510},
{"f_4427:data_structures_scm",(void*)f_4427},
{"f_4505:data_structures_scm",(void*)f_4505},
{"f_4431:data_structures_scm",(void*)f_4431},
{"f_4445:data_structures_scm",(void*)f_4445},
{"f_4455:data_structures_scm",(void*)f_4455},
{"f_4164:data_structures_scm",(void*)f_4164},
{"f_4391:data_structures_scm",(void*)f_4391},
{"f_4414:data_structures_scm",(void*)f_4414},
{"f_4399:data_structures_scm",(void*)f_4399},
{"f_4314:data_structures_scm",(void*)f_4314},
{"f_4381:data_structures_scm",(void*)f_4381},
{"f_4385:data_structures_scm",(void*)f_4385},
{"f_4317:data_structures_scm",(void*)f_4317},
{"f_4326:data_structures_scm",(void*)f_4326},
{"f_4366:data_structures_scm",(void*)f_4366},
{"f_4334:data_structures_scm",(void*)f_4334},
{"f_4338:data_structures_scm",(void*)f_4338},
{"f_4320:data_structures_scm",(void*)f_4320},
{"f_4255:data_structures_scm",(void*)f_4255},
{"f_4259:data_structures_scm",(void*)f_4259},
{"f_4268:data_structures_scm",(void*)f_4268},
{"f_4300:data_structures_scm",(void*)f_4300},
{"f_4276:data_structures_scm",(void*)f_4276},
{"f_4280:data_structures_scm",(void*)f_4280},
{"f_4262:data_structures_scm",(void*)f_4262},
{"f_4220:data_structures_scm",(void*)f_4220},
{"f_4226:data_structures_scm",(void*)f_4226},
{"f_4253:data_structures_scm",(void*)f_4253},
{"f_4239:data_structures_scm",(void*)f_4239},
{"f_4173:data_structures_scm",(void*)f_4173},
{"f_4179:data_structures_scm",(void*)f_4179},
{"f_4218:data_structures_scm",(void*)f_4218},
{"f_4200:data_structures_scm",(void*)f_4200},
{"f_4137:data_structures_scm",(void*)f_4137},
{"f_4162:data_structures_scm",(void*)f_4162},
{"f_4155:data_structures_scm",(void*)f_4155},
{"f_4151:data_structures_scm",(void*)f_4151},
{"f_4004:data_structures_scm",(void*)f_4004},
{"f_4094:data_structures_scm",(void*)f_4094},
{"f_4101:data_structures_scm",(void*)f_4101},
{"f_4103:data_structures_scm",(void*)f_4103},
{"f_4007:data_structures_scm",(void*)f_4007},
{"f_4058:data_structures_scm",(void*)f_4058},
{"f_4017:data_structures_scm",(void*)f_4017},
{"f_4020:data_structures_scm",(void*)f_4020},
{"f_4026:data_structures_scm",(void*)f_4026},
{"f_3872:data_structures_scm",(void*)f_3872},
{"f_3954:data_structures_scm",(void*)f_3954},
{"f_3977:data_structures_scm",(void*)f_3977},
{"f_3957:data_structures_scm",(void*)f_3957},
{"f_3875:data_structures_scm",(void*)f_3875},
{"f_3882:data_structures_scm",(void*)f_3882},
{"f_3773:data_structures_scm",(void*)f_3773},
{"f_3807:data_structures_scm",(void*)f_3807},
{"f_3814:data_structures_scm",(void*)f_3814},
{"f_3862:data_structures_scm",(void*)f_3862},
{"f_3834:data_structures_scm",(void*)f_3834},
{"f_3664:data_structures_scm",(void*)f_3664},
{"f_3739:data_structures_scm",(void*)f_3739},
{"f_3767:data_structures_scm",(void*)f_3767},
{"f_3691:data_structures_scm",(void*)f_3691},
{"f_3701:data_structures_scm",(void*)f_3701},
{"f_3612:data_structures_scm",(void*)f_3612},
{"f_3616:data_structures_scm",(void*)f_3616},
{"f_3548:data_structures_scm",(void*)f_3548},
{"f_3563:data_structures_scm",(void*)f_3563},
{"f_3594:data_structures_scm",(void*)f_3594},
{"f_3598:data_structures_scm",(void*)f_3598},
{"f_3583:data_structures_scm",(void*)f_3583},
{"f_3426:data_structures_scm",(void*)f_3426},
{"f_3438:data_structures_scm",(void*)f_3438},
{"f_3471:data_structures_scm",(void*)f_3471},
{"f_3536:data_structures_scm",(void*)f_3536},
{"f_3510:data_structures_scm",(void*)f_3510},
{"f_3466:data_structures_scm",(void*)f_3466},
{"f_3452:data_structures_scm",(void*)f_3452},
{"f_3224:data_structures_scm",(void*)f_3224},
{"f_3418:data_structures_scm",(void*)f_3418},
{"f_3401:data_structures_scm",(void*)f_3401},
{"f_3261:data_structures_scm",(void*)f_3261},
{"f_3264:data_structures_scm",(void*)f_3264},
{"f_3276:data_structures_scm",(void*)f_3276},
{"f_3281:data_structures_scm",(void*)f_3281},
{"f_3300:data_structures_scm",(void*)f_3300},
{"f_3227:data_structures_scm",(void*)f_3227},
{"f_3232:data_structures_scm",(void*)f_3232},
{"f_3238:data_structures_scm",(void*)f_3238},
{"f_3109:data_structures_scm",(void*)f_3109},
{"f_3113:data_structures_scm",(void*)f_3113},
{"f_3127:data_structures_scm",(void*)f_3127},
{"f_3137:data_structures_scm",(void*)f_3137},
{"f_3142:data_structures_scm",(void*)f_3142},
{"f_2974:data_structures_scm",(void*)f_2974},
{"f_3015:data_structures_scm",(void*)f_3015},
{"f_3042:data_structures_scm",(void*)f_3042},
{"f_3081:data_structures_scm",(void*)f_3081},
{"f_3025:data_structures_scm",(void*)f_3025},
{"f_2995:data_structures_scm",(void*)f_2995},
{"f_3010:data_structures_scm",(void*)f_3010},
{"f_2894:data_structures_scm",(void*)f_2894},
{"f_2911:data_structures_scm",(void*)f_2911},
{"f_2906:data_structures_scm",(void*)f_2906},
{"f_2901:data_structures_scm",(void*)f_2901},
{"f_2896:data_structures_scm",(void*)f_2896},
{"f_2857:data_structures_scm",(void*)f_2857},
{"f_2867:data_structures_scm",(void*)f_2867},
{"f_2777:data_structures_scm",(void*)f_2777},
{"f_2794:data_structures_scm",(void*)f_2794},
{"f_2789:data_structures_scm",(void*)f_2789},
{"f_2784:data_structures_scm",(void*)f_2784},
{"f_2779:data_structures_scm",(void*)f_2779},
{"f_2740:data_structures_scm",(void*)f_2740},
{"f_2750:data_structures_scm",(void*)f_2750},
{"f_2709:data_structures_scm",(void*)f_2709},
{"f_2678:data_structures_scm",(void*)f_2678},
{"f_2650:data_structures_scm",(void*)f_2650},
{"f_2654:data_structures_scm",(void*)f_2654},
{"f_2622:data_structures_scm",(void*)f_2622},
{"f_2626:data_structures_scm",(void*)f_2626},
{"f_2613:data_structures_scm",(void*)f_2613},
{"f_2619:data_structures_scm",(void*)f_2619},
{"f_2604:data_structures_scm",(void*)f_2604},
{"f_2610:data_structures_scm",(void*)f_2610},
{"f_2557:data_structures_scm",(void*)f_2557},
{"f_2578:data_structures_scm",(void*)f_2578},
{"f_2591:data_structures_scm",(void*)f_2591},
{"f_2512:data_structures_scm",(void*)f_2512},
{"f_2522:data_structures_scm",(void*)f_2522},
{"f_2551:data_structures_scm",(void*)f_2551},
{"f_2520:data_structures_scm",(void*)f_2520},
{"f_2467:data_structures_scm",(void*)f_2467},
{"f_2504:data_structures_scm",(void*)f_2504},
{"f_2507:data_structures_scm",(void*)f_2507},
{"f_2390:data_structures_scm",(void*)f_2390},
{"f_2393:data_structures_scm",(void*)f_2393},
{"f_2409:data_structures_scm",(void*)f_2409},
{"f_2418:data_structures_scm",(void*)f_2418},
{"f_2340:data_structures_scm",(void*)f_2340},
{"f_2352:data_structures_scm",(void*)f_2352},
{"f_2371:data_structures_scm",(void*)f_2371},
{"f_2216:data_structures_scm",(void*)f_2216},
{"f_2292:data_structures_scm",(void*)f_2292},
{"f_2287:data_structures_scm",(void*)f_2287},
{"f_2218:data_structures_scm",(void*)f_2218},
{"f_2247:data_structures_scm",(void*)f_2247},
{"f_2253:data_structures_scm",(void*)f_2253},
{"f_2269:data_structures_scm",(void*)f_2269},
{"f_2222:data_structures_scm",(void*)f_2222},
{"f_2225:data_structures_scm",(void*)f_2225},
{"f_2117:data_structures_scm",(void*)f_2117},
{"f_2121:data_structures_scm",(void*)f_2121},
{"f_2156:data_structures_scm",(void*)f_2156},
{"f_2162:data_structures_scm",(void*)f_2162},
{"f_2178:data_structures_scm",(void*)f_2178},
{"f_2124:data_structures_scm",(void*)f_2124},
{"f_2127:data_structures_scm",(void*)f_2127},
{"f_2007:data_structures_scm",(void*)f_2007},
{"f_2073:data_structures_scm",(void*)f_2073},
{"f_2111:data_structures_scm",(void*)f_2111},
{"f_2100:data_structures_scm",(void*)f_2100},
{"f_2108:data_structures_scm",(void*)f_2108},
{"f_2057:data_structures_scm",(void*)f_2057},
{"f_2059:data_structures_scm",(void*)f_2059},
{"f_2018:data_structures_scm",(void*)f_2018},
{"f_2020:data_structures_scm",(void*)f_2020},
{"f_2049:data_structures_scm",(void*)f_2049},
{"f_1927:data_structures_scm",(void*)f_1927},
{"f_1936:data_structures_scm",(void*)f_1936},
{"f_1978:data_structures_scm",(void*)f_1978},
{"f_1868:data_structures_scm",(void*)f_1868},
{"f_1880:data_structures_scm",(void*)f_1880},
{"f_1915:data_structures_scm",(void*)f_1915},
{"f_1783:data_structures_scm",(void*)f_1783},
{"f_1790:data_structures_scm",(void*)f_1790},
{"f_1798:data_structures_scm",(void*)f_1798},
{"f_1819:data_structures_scm",(void*)f_1819},
{"f_1833:data_structures_scm",(void*)f_1833},
{"f_1837:data_structures_scm",(void*)f_1837},
{"f_1742:data_structures_scm",(void*)f_1742},
{"f_1748:data_structures_scm",(void*)f_1748},
{"f_1781:data_structures_scm",(void*)f_1781},
{"f_1774:data_structures_scm",(void*)f_1774},
{"f_1710:data_structures_scm",(void*)f_1710},
{"f_1719:data_structures_scm",(void*)f_1719},
{"f_1740:data_structures_scm",(void*)f_1740},
{"f_1677:data_structures_scm",(void*)f_1677},
{"f_1683:data_structures_scm",(void*)f_1683},
{"f_1708:data_structures_scm",(void*)f_1708},
{"f_1649:data_structures_scm",(void*)f_1649},
{"f_1661:data_structures_scm",(void*)f_1661},
{"f_1646:data_structures_scm",(void*)f_1646},
{"f_1620:data_structures_scm",(void*)f_1620},
{"f_1624:data_structures_scm",(void*)f_1624},
{"f_1627:data_structures_scm",(void*)f_1627},
{"f_1628:data_structures_scm",(void*)f_1628},
{"f_1644:data_structures_scm",(void*)f_1644},
{"f_1640:data_structures_scm",(void*)f_1640},
{"f_1636:data_structures_scm",(void*)f_1636},
{"f_1605:data_structures_scm",(void*)f_1605},
{"f_1609:data_structures_scm",(void*)f_1609},
{"f_1610:data_structures_scm",(void*)f_1610},
{"f_1618:data_structures_scm",(void*)f_1618},
{"f_1602:data_structures_scm",(void*)f_1602},
{"f_1599:data_structures_scm",(void*)f_1599},
{"f_1596:data_structures_scm",(void*)f_1596},
{"f_1593:data_structures_scm",(void*)f_1593},
{"f_1537:data_structures_scm",(void*)f_1537},
{"f_1559:data_structures_scm",(void*)f_1559},
{"f_1565:data_structures_scm",(void*)f_1565},
{"f_1584:data_structures_scm",(void*)f_1584},
{"f_1545:data_structures_scm",(void*)f_1545},
{"f_1531:data_structures_scm",(void*)f_1531},
{"f_1491:data_structures_scm",(void*)f_1491},
{"f_1493:data_structures_scm",(void*)f_1493},
{"f_1499:data_structures_scm",(void*)f_1499},
{"f_1518:data_structures_scm",(void*)f_1518},
{"f_1452:data_structures_scm",(void*)f_1452},
{"f_1464:data_structures_scm",(void*)f_1464},
{"f_1478:data_structures_scm",(void*)f_1478},
{"f_1486:data_structures_scm",(void*)f_1486},
{"f_1489:data_structures_scm",(void*)f_1489},
{"f_1416:data_structures_scm",(void*)f_1416},
{"f_1419:data_structures_scm",(void*)f_1419},
{"f_1427:data_structures_scm",(void*)f_1427},
{"f_1433:data_structures_scm",(void*)f_1433},
{"f_1441:data_structures_scm",(void*)f_1441},
{"f_1404:data_structures_scm",(void*)f_1404},
{"f_1406:data_structures_scm",(void*)f_1406},
{"f_1414:data_structures_scm",(void*)f_1414},
{"f_1396:data_structures_scm",(void*)f_1396},
{"f_1398:data_structures_scm",(void*)f_1398},
{"f_1373:data_structures_scm",(void*)f_1373},
{"f_1386:data_structures_scm",(void*)f_1386},
{"f_1384:data_structures_scm",(void*)f_1384},
{"f_1336:data_structures_scm",(void*)f_1336},
{"f_1338:data_structures_scm",(void*)f_1338},
{"f_1344:data_structures_scm",(void*)f_1344},
{"f_1357:data_structures_scm",(void*)f_1357},
{"f_1303:data_structures_scm",(void*)f_1303},
{"f_1305:data_structures_scm",(void*)f_1305},
{"f_1311:data_structures_scm",(void*)f_1311},
{"f_1327:data_structures_scm",(void*)f_1327},
{"f_1295:data_structures_scm",(void*)f_1295},
{"f_1297:data_structures_scm",(void*)f_1297},
{"f_1292:data_structures_scm",(void*)f_1292},
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
