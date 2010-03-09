/* Generated from files.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-22 11:31
   Version 4.3.5 
   windows-mingw32-x86 [ manyargs dload ptables ]
   compiled 2010-02-17 on lenovo-1 (MINGW32_NT-6.0)
   command line: files.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file files.c -extend ./private-namespace.scm
   unit: files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_regex_toplevel)
C_externimport void C_ccall C_regex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_structures_toplevel)
C_externimport void C_ccall C_data_structures_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[102];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,21),40,100,101,108,101,116,101,45,102,105,108,101,42,32,102,105,108,101,50,55,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,57,55,50,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,18),40,97,57,54,54,32,101,120,118,97,114,49,51,52,49,52,55,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,7),40,97,49,48,48,55,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,57,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,20),40,97,49,48,49,51,32,46,32,97,114,103,115,49,52,50,49,54,48,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,7),40,97,49,48,48,49,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,14),40,97,57,54,48,32,107,49,52,49,49,52,54,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,49,51,48,32,108,49,51,49,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,97,49,48,51,55,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,19),40,97,49,48,51,49,32,101,120,118,97,114,49,48,51,49,49,54,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,97,49,48,54,50,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,7),40,97,49,48,55,52,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,20),40,97,49,48,54,56,32,46,32,97,114,103,115,49,49,49,49,50,55,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,54,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,15),40,97,49,48,50,53,32,107,49,49,48,49,49,53,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,49,48,57,50,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,17),40,97,49,48,56,54,32,101,120,118,97,114,55,55,57,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,97,49,49,49,55,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,7),40,97,49,49,50,57,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,19),40,97,49,49,50,51,32,46,32,97,114,103,115,56,53,49,48,49,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,7),40,97,49,49,49,49,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,13),40,97,49,48,56,48,32,107,56,52,56,57,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,30),40,98,111,100,121,52,53,32,99,108,111,98,98,101,114,53,52,32,98,108,111,99,107,115,105,122,101,53,53,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,31),40,100,101,102,45,98,108,111,99,107,115,105,122,101,52,56,32,37,99,108,111,98,98,101,114,52,51,49,55,48,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,99,108,111,98,98,101,114,52,55,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,99,111,112,121,32,111,114,105,103,102,105,108,101,51,55,32,110,101,119,102,105,108,101,51,56,32,46,32,116,109,112,51,54,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,49,51,48,56,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,19),40,97,49,51,48,50,32,101,120,118,97,114,50,55,57,50,57,50,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,49,51,51,51,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,7),40,97,49,51,52,53,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,20),40,97,49,51,51,57,32,46,32,97,114,103,115,50,56,55,51,48,51,41,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,49,51,50,55,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,15),40,97,49,50,57,54,32,107,50,56,54,50,57,49,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,49,51,56,48,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,19),40,97,49,51,55,52,32,101,120,118,97,114,51,48,55,51,50,48,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,7),40,97,49,52,49,53,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,52,50,55,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,20),40,97,49,52,50,49,32,46,32,97,114,103,115,51,49,53,51,51,51,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,49,52,48,57,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,15),40,97,49,51,54,56,32,107,51,49,52,51,49,57,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,50,55,55,32,108,50,55,56,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,49,52,52,53,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,19),40,97,49,52,51,57,32,101,120,118,97,114,50,53,48,50,54,51,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,49,52,55,48,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,49,52,56,50,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,20),40,97,49,52,55,54,32,46,32,97,114,103,115,50,53,56,50,55,52,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,52,54,52,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,15),40,97,49,52,51,51,32,107,50,53,55,50,54,50,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,49,53,48,48,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,19),40,97,49,52,57,52,32,101,120,118,97,114,50,50,52,50,51,55,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,49,53,50,53,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,55,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,20),40,97,49,53,51,49,32,46,32,97,114,103,115,50,51,50,50,52,56,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,7),40,97,49,53,49,57,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,15),40,97,49,52,56,56,32,107,50,51,49,50,51,54,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,98,111,100,121,49,57,50,32,99,108,111,98,98,101,114,50,48,49,32,98,108,111,99,107,115,105,122,101,50,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,33),40,100,101,102,45,98,108,111,99,107,115,105,122,101,49,57,53,32,37,99,108,111,98,98,101,114,49,57,48,51,52,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,100,101,102,45,99,108,111,98,98,101,114,49,57,52,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,46),40,102,105,108,101,45,109,111,118,101,32,111,114,105,103,102,105,108,101,49,56,52,32,110,101,119,102,105,108,101,49,56,53,32,46,32,116,109,112,49,56,51,49,56,54,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,26),40,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,63,32,112,110,51,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,24),40,99,104,111,112,45,112,100,115,32,115,116,114,51,55,51,32,112,100,115,51,55,52,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,116,114,115,51,57,51,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,26),40,99,111,110,99,45,100,105,114,115,32,100,105,114,115,51,57,48,32,112,100,115,51,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,34),40,99,97,110,111,110,105,99,97,108,105,122,101,45,100,105,114,115,32,100,105,114,115,52,48,50,32,112,100,115,52,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,52),40,95,109,97,107,101,45,112,97,116,104,110,97,109,101,32,108,111,99,52,49,53,32,100,105,114,52,49,54,32,102,105,108,101,52,49,55,32,101,120,116,52,49,56,32,112,100,115,52,49,57,41,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,23),40,98,111,100,121,52,54,48,32,101,120,116,52,54,57,32,112,100,115,52,55,48,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,23),40,100,101,102,45,112,100,115,52,54,51,32,37,101,120,116,52,53,56,52,55,50,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,12),40,100,101,102,45,101,120,116,52,54,50,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,43),40,109,97,107,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,52,53,50,32,102,105,108,101,52,53,51,32,46,32,116,109,112,52,53,49,52,53,52,41,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,23),40,98,111,100,121,52,57,50,32,101,120,116,53,48,49,32,112,100,115,53,48,50,41,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,23),40,100,101,102,45,112,100,115,52,57,53,32,37,101,120,116,52,57,48,53,49,48,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,12),40,100,101,102,45,101,120,116,52,57,52,41,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,52),40,109,97,107,101,45,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,52,56,52,32,102,105,108,101,52,56,53,32,46,32,116,109,112,52,56,51,52,56,54,41,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,18),40,115,116,114,105,112,45,112,100,115,32,100,105,114,53,50,55,41,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,26),40,100,101,99,111,109,112,111,115,101,45,112,97,116,104,110,97,109,101,32,112,110,53,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,97,50,49,50,53,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,47),40,97,50,49,51,49,32,100,105,114,53,51,56,53,51,57,53,52,52,32,102,105,108,101,53,52,48,53,52,49,53,52,53,32,101,120,116,53,52,50,53,52,51,53,52,54,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,26),40,112,97,116,104,110,97,109,101,45,100,105,114,101,99,116,111,114,121,32,112,110,53,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,7),40,97,50,49,52,48,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,47),40,97,50,49,52,54,32,100,105,114,53,53,51,53,53,52,53,53,57,32,102,105,108,101,53,53,53,53,53,54,53,54,48,32,101,120,116,53,53,55,53,53,56,53,54,49,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,21),40,112,97,116,104,110,97,109,101,45,102,105,108,101,32,112,110,53,53,48,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,7),40,97,50,49,53,53,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,47),40,97,50,49,54,49,32,100,105,114,53,54,56,53,54,57,53,55,52,32,102,105,108,101,53,55,48,53,55,49,53,55,53,32,101,120,116,53,55,50,53,55,51,53,55,54,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,26),40,112,97,116,104,110,97,109,101,45,101,120,116,101,110,115,105,111,110,32,112,110,53,54,53,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,7),40,97,50,49,55,48,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,47),40,97,50,49,55,54,32,100,105,114,53,56,51,53,56,52,53,56,57,32,102,105,108,101,53,56,53,53,56,54,53,57,48,32,101,120,116,53,56,55,53,56,56,53,57,49,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,32),40,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,100,105,114,101,99,116,111,114,121,32,112,110,53,56,48,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,7),40,97,50,49,56,56,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,47),40,97,50,49,57,52,32,100,105,114,53,57,56,53,57,57,54,48,52,32,102,105,108,101,54,48,48,54,48,49,54,48,53,32,101,120,116,54,48,50,54,48,51,54,48,54,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,32),40,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,101,120,116,101,110,115,105,111,110,32,112,110,53,57,53,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,7),40,97,50,50,48,54,41,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,45),40,97,50,50,49,50,32,95,54,49,52,54,49,53,54,50,48,32,102,105,108,101,54,49,54,54,49,55,54,50,49,32,101,120,116,54,49,56,54,49,57,54,50,50,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,41),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,100,105,114,101,99,116,111,114,121,32,112,110,54,49,48,32,100,105,114,54,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,7),40,97,50,50,50,52,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,44),40,97,50,50,51,48,32,100,105,114,54,51,48,54,51,49,54,51,54,32,95,54,51,50,54,51,51,54,51,55,32,101,120,116,54,51,52,54,51,53,54,51,56,41,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,37),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,102,105,108,101,32,112,110,54,50,54,32,102,105,108,101,54,50,55,41,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,7),40,97,50,50,52,50,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,45),40,97,50,50,52,56,32,100,105,114,54,52,54,54,52,55,54,53,50,32,102,105,108,101,54,52,56,54,52,57,54,53,51,32,95,54,53,48,54,53,49,54,53,52,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,41),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,101,120,116,101,110,115,105,111,110,32,112,110,54,52,50,32,101,120,116,54,52,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,12),40,97,50,50,57,51,32,112,54,57,49,41,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,32),40,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,102,105,108,101,32,46,32,101,120,116,54,54,57,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,18),40,97,100,100,112,97,114,116,32,112,97,114,116,115,55,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,11),40,103,55,52,57,32,112,55,53,49,41,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,55,52,50,32,103,55,52,54,55,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,105,55,50,55,32,112,114,101,118,55,50,56,32,112,97,114,116,115,55,50,57,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,40),40,110,111,114,109,97,108,105,122,101,45,112,97,116,104,110,97,109,101,32,112,97,116,104,55,49,53,32,46,32,116,109,112,55,49,52,55,49,54,41};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,40),40,115,112,108,105,116,45,100,105,114,101,99,116,111,114,121,32,108,111,99,55,56,57,32,100,105,114,55,57,48,32,107,101,101,112,63,55,57,49,41};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,24),40,100,105,114,101,99,116,111,114,121,45,110,117,108,108,63,32,100,105,114,55,57,52,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,28),40,100,101,99,111,109,112,111,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,56,48,54,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,14),40,102,95,50,55,56,51,32,112,110,51,53,49,41,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,14),40,102,95,50,55,56,57,32,114,116,51,53,50,41,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,14),40,102,95,50,55,57,56,32,114,116,51,53,53,41,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,30),40,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,51,54,49,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,19),40,114,111,111,116,45,111,114,105,103,105,110,32,114,116,51,54,50,41,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,22),40,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,51,54,51,41,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_files_toplevel)
C_externexport void C_ccall C_files_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2810)
static void C_ccall f_2810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1637)
static void C_fcall f_1637(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static C_word C_fcall f_2663(C_word t0);
C_noret_decl(f_2644)
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2374)
static void C_fcall f_2374(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2574)
static void C_fcall f_2574(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2522)
static void C_fcall f_2522(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2558)
static void C_ccall f_2558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2508)
static void C_ccall f_2508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_fcall f_2384(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2464)
static void C_fcall f_2464(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2472)
static void C_fcall f_2472(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2476)
static void C_ccall f_2476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2428)
static void C_ccall f_2428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2437)
static void C_fcall f_2437(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2444)
static void C_ccall f_2444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2330)
static C_word C_fcall f_2330(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2273)
static void C_fcall f_2273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2280)
static void C_ccall f_2280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2150)
static void C_ccall f_2150(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2135)
static void C_ccall f_2135(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2147)
static void C_ccall f_2147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2060)
static void C_ccall f_2060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2089)
static void C_ccall f_2089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2030)
static void C_fcall f_2030(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1976)
static void C_fcall f_1976(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1971)
static void C_fcall f_1971(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1949)
static void C_fcall f_1949(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1963)
static void C_ccall f_1963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1899)
static void C_fcall f_1899(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_fcall f_1894(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1885)
static void C_fcall f_1885(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1797)
static void C_fcall f_1797(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1850)
static void C_fcall f_1850(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1826)
static void C_ccall f_1826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1833)
static void C_fcall f_1833(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1766)
static void C_fcall f_1766(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1705)
static void C_fcall f_1705(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1714)
static void C_fcall f_1714(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1652)
static void C_fcall f_1652(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1668)
static void C_fcall f_1668(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1650)
static void C_ccall f_1650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1225)
static void C_ccall f_1225(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1225)
static void C_ccall f_1225r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1585)
static void C_fcall f_1585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static void C_fcall f_1580(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1227)
static void C_fcall f_1227(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1240)
static void C_fcall f_1240(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1573)
static void C_ccall f_1573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1243)
static void C_ccall f_1243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1249)
static void C_ccall f_1249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1555)
static void C_ccall f_1555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1489)
static void C_ccall f_1489(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1520)
static void C_ccall f_1520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2976)
static void C_ccall f2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2972)
static void C_ccall f2972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1261)
static void C_ccall f_1261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1276)
static void C_fcall f_1276(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1391)
static void C_ccall f_1391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1356)
static void C_ccall f_1356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1346)
static void C_ccall f_1346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1309)
static void C_ccall f_1309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2966)
static void C_ccall f2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_878)
static void C_ccall f_878(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_878)
static void C_ccall f_878r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1177)
static void C_fcall f_1177(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1172)
static void C_fcall f_1172(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_880)
static void C_fcall f_880(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_893)
static void C_fcall f_893(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1165)
static void C_ccall f_1165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static void C_ccall f_899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1147)
static void C_ccall f_1147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_905)
static void C_ccall f_905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1112)
static void C_ccall f_1112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1124)
static void C_ccall f_1124(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1124)
static void C_ccall f_1124r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1130)
static void C_ccall f_1130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1118)
static void C_ccall f_1118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1087)
static void C_ccall f_1087(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1093)
static void C_ccall f_1093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2962)
static void C_ccall f2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1104)
static void C_ccall f_1104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_908)
static void C_ccall f_908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_911)
static void C_ccall f_911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1026)
static void C_ccall f_1026(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1069)
static void C_ccall f_1069(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1069)
static void C_ccall f_1069r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_ccall f_1063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1032)
static void C_ccall f_1032(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2958)
static void C_ccall f2958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1049)
static void C_ccall f_1049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_914)
static void C_ccall f_914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_917)
static void C_ccall f_917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_929)
static void C_fcall f_929(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_961)
static void C_ccall f_961(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_967)
static void C_ccall f_967(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_994)
static void C_ccall f_994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_945)
static void C_ccall f_945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_939)
static void C_ccall f_939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1637)
static void C_fcall trf_1637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1637(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1637(t0,t1);}

C_noret_decl(trf_2644)
static void C_fcall trf_2644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2644(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2644(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2374)
static void C_fcall trf_2374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2374(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2374(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2574)
static void C_fcall trf_2574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2574(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2574(t0,t1);}

C_noret_decl(trf_2522)
static void C_fcall trf_2522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2522(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2522(t0,t1);}

C_noret_decl(trf_2384)
static void C_fcall trf_2384(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2384(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2384(t0,t1);}

C_noret_decl(trf_2464)
static void C_fcall trf_2464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2464(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2464(t0,t1,t2);}

C_noret_decl(trf_2472)
static void C_fcall trf_2472(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2472(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2472(t0,t1,t2);}

C_noret_decl(trf_2437)
static void C_fcall trf_2437(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2437(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2437(t0,t1);}

C_noret_decl(trf_2273)
static void C_fcall trf_2273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2273(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2273(t0,t1);}

C_noret_decl(trf_2030)
static void C_fcall trf_2030(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2030(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2030(t0,t1);}

C_noret_decl(trf_1976)
static void C_fcall trf_1976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1976(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1976(t0,t1);}

C_noret_decl(trf_1971)
static void C_fcall trf_1971(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1971(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1971(t0,t1,t2);}

C_noret_decl(trf_1949)
static void C_fcall trf_1949(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1949(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1949(t0,t1,t2,t3);}

C_noret_decl(trf_1899)
static void C_fcall trf_1899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1899(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1899(t0,t1);}

C_noret_decl(trf_1894)
static void C_fcall trf_1894(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1894(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1894(t0,t1,t2);}

C_noret_decl(trf_1885)
static void C_fcall trf_1885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1885(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1885(t0,t1,t2,t3);}

C_noret_decl(trf_1797)
static void C_fcall trf_1797(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1797(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_1797(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1850)
static void C_fcall trf_1850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1850(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1850(t0,t1);}

C_noret_decl(trf_1833)
static void C_fcall trf_1833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1833(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1833(t0,t1);}

C_noret_decl(trf_1766)
static void C_fcall trf_1766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1766(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1766(t0,t1,t2,t3);}

C_noret_decl(trf_1705)
static void C_fcall trf_1705(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1705(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1705(t0,t1,t2,t3);}

C_noret_decl(trf_1714)
static void C_fcall trf_1714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1714(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1714(t0,t1,t2);}

C_noret_decl(trf_1652)
static void C_fcall trf_1652(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1652(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1652(t0,t1,t2);}

C_noret_decl(trf_1668)
static void C_fcall trf_1668(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1668(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1668(t0,t1);}

C_noret_decl(trf_1585)
static void C_fcall trf_1585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1585(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1585(t0,t1);}

C_noret_decl(trf_1580)
static void C_fcall trf_1580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1580(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1580(t0,t1,t2);}

C_noret_decl(trf_1227)
static void C_fcall trf_1227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1227(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1227(t0,t1,t2,t3);}

C_noret_decl(trf_1240)
static void C_fcall trf_1240(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1240(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1240(t0,t1);}

C_noret_decl(trf_1276)
static void C_fcall trf_1276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1276(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1276(t0,t1,t2,t3);}

C_noret_decl(trf_1177)
static void C_fcall trf_1177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1177(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1177(t0,t1);}

C_noret_decl(trf_1172)
static void C_fcall trf_1172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1172(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1172(t0,t1,t2);}

C_noret_decl(trf_880)
static void C_fcall trf_880(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_880(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_880(t0,t1,t2,t3);}

C_noret_decl(trf_893)
static void C_fcall trf_893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_893(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_893(t0,t1);}

C_noret_decl(trf_929)
static void C_fcall trf_929(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_929(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_929(t0,t1,t2,t3);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_files_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_files_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("files_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(561)){
C_save(t1);
C_rereclaim2(561*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,102);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],12,"file-exists\077");
lf[3]=C_h_intern(&lf[3],11,"delete-file");
lf[4]=C_h_intern(&lf[4],12,"delete-file*");
lf[5]=C_h_intern(&lf[5],9,"file-copy");
lf[6]=C_h_intern(&lf[6],17,"close-output-port");
lf[7]=C_h_intern(&lf[7],16,"close-input-port");
lf[8]=C_h_intern(&lf[8],12,"read-string!");
lf[9]=C_h_intern(&lf[9],9,"condition");
lf[10]=C_h_intern(&lf[10],9,"\003syserror");
lf[11]=C_h_intern(&lf[11],13,"string-append");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\037error writing file starting at ");
lf[13]=C_h_intern(&lf[13],12,"write-string");
lf[14]=C_h_intern(&lf[14],22,"with-exception-handler");
lf[15]=C_h_intern(&lf[15],30,"call-with-current-continuation");
lf[16]=C_h_intern(&lf[16],11,"make-string");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000#could not open newfile for write - ");
lf[18]=C_h_intern(&lf[18],16,"open-output-file");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000#could not open origfile for read - ");
lf[20]=C_h_intern(&lf[20],15,"open-input-file");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000&newfile exists but clobber is false - ");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\032origfile does not exist - ");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\0002invalid blocksize given: not a positive integer - ");
lf[24]=C_h_intern(&lf[24],9,"file-move");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\034could not remove origfile - ");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\037error writing file starting at ");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000#could not open newfile for write - ");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000#could not open origfile for read - ");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000&newfile exists but clobber is false - ");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\032origfile does not exist - ");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\0002invalid blocksize given: not a positive integer - ");
lf[35]=C_h_intern(&lf[35],12,"string-match");
lf[36]=C_h_intern(&lf[36],18,"absolute-pathname\077");
lf[38]=C_h_intern(&lf[38],13,"\003syssubstring");
lf[39]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[40]=C_h_intern(&lf[40],13,"make-pathname");
lf[41]=C_h_intern(&lf[41],22,"make-absolute-pathname");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[49]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[50]=C_h_intern(&lf[50],17,"\003sysstring-append");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[53]=C_h_intern(&lf[53],18,"decompose-pathname");
lf[54]=C_h_intern(&lf[54],18,"pathname-directory");
lf[55]=C_h_intern(&lf[55],13,"pathname-file");
lf[56]=C_h_intern(&lf[56],18,"pathname-extension");
lf[57]=C_h_intern(&lf[57],24,"pathname-strip-directory");
lf[58]=C_h_intern(&lf[58],24,"pathname-strip-extension");
lf[59]=C_h_intern(&lf[59],26,"pathname-replace-directory");
lf[60]=C_h_intern(&lf[60],21,"pathname-replace-file");
lf[61]=C_h_intern(&lf[61],26,"pathname-replace-extension");
lf[62]=C_h_intern(&lf[62],24,"get-environment-variable");
lf[63]=C_h_intern(&lf[63],21,"call-with-output-file");
lf[64]=C_h_intern(&lf[64],21,"create-temporary-file");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\003tmp");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\004/tmp");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\003TMP");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\004TEMP");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\006TMPDIR");
lf[71]=C_h_intern(&lf[71],18,"open-output-string");
lf[72]=C_h_intern(&lf[72],17,"get-output-string");
lf[73]=C_h_intern(&lf[73],7,"reverse");
lf[74]=C_h_intern(&lf[74],7,"display");
lf[75]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004msvc\376\003\000\000\002\376\001\000\000\007mingw32\376\377\016");
lf[76]=C_h_intern(&lf[76],7,"windows");
lf[77]=C_h_intern(&lf[77],4,"unix");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002..\376\377\016");
lf[81]=C_h_intern(&lf[81],18,"normalize-pathname");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[84]=C_h_intern(&lf[84],20,"\003sysexpand-home-path");
lf[85]=C_h_intern(&lf[85],16,"\003syswrite-char-0");
lf[86]=C_h_intern(&lf[86],12,"string-split");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[89]=C_h_intern(&lf[89],15,"directory-null\077");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[92]=C_h_intern(&lf[92],19,"decompose-directory");
lf[93]=C_h_intern(&lf[93],14,"build-platform");
lf[94]=C_h_intern(&lf[94],6,"regexp");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\034^(.*[\134/\134\134])\077((\134.)\077[^\134/\134\134]+)$");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000&^(.*[\134/\134\134])\077([^\134/\134\134]+)(\134.([^\134/\134\134.]+))$");
lf[97]=C_h_intern(&lf[97],20,"\003syswindows-platform");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\026([A-Za-z]:)\077([\134/\134\134]).*");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\012([\134/\134\134]).*");
lf[100]=C_h_intern(&lf[100],17,"register-feature!");
lf[101]=C_h_intern(&lf[101],5,"files");
C_register_lf2(lf,102,create_ptable());
t2=C_mutate(&lf[0] /* (set! c176 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_858,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k856 */
static void C_ccall f_858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_861,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_structures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k859 in k856 */
static void C_ccall f_861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_861,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm: 62   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[100]+1)))(3,*((C_word*)lf[100]+1),t2,lf[101]);}

/* k862 in k859 in k856 */
static void C_ccall f_864(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_864,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=*((C_word*)lf[3]+1);
t4=C_mutate((C_word*)lf[4]+1 /* (set! delete-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_866,a[2]=t2,a[3]=t3,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[5]+1 /* (set! file-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_878,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[24]+1 /* (set! file-move ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1225,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t7=lf[32] /* absolute-pathname-root */ =C_SCHEME_UNDEFINED;;
t8=lf[33] /* root-origin */ =C_SCHEME_UNDEFINED;;
t9=lf[34] /* root-directory */ =C_SCHEME_UNDEFINED;;
t10=*((C_word*)lf[35]+1);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[97]+1))){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2781,a[2]=t11,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* files.scm: 177  regexp */
t13=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,lf[98]);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2808,a[2]=t11,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* files.scm: 181  regexp */
t13=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,lf[99]);}}

/* k2806 in k862 in k859 in k856 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2808,2,t0,t1);}
t2=C_mutate(&lf[32] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2810,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li115),tmp=(C_word)a,a+=5,tmp));
t3=C_mutate(&lf[33] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2816,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[34] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_1637(t5,t4);}

/* root-directory in k2806 in k862 in k859 in k856 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2819,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_cadr(t2):C_SCHEME_FALSE));}

/* root-origin in k2806 in k862 in k859 in k856 */
static void C_ccall f_2816(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2816,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* absolute-pathname-root in k2806 in k862 in k859 in k856 */
static void C_ccall f_2810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2810,3,t0,t1,t2);}
/* files.scm: 182  string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k2779 in k862 in k859 in k856 */
static void C_ccall f_2781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2781,2,t0,t1);}
t2=C_mutate(&lf[32] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2783,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li112),tmp=(C_word)a,a+=5,tmp));
t3=C_mutate(&lf[33] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2789,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[34] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2798,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_1637(t5,t4);}

/* f_2798 in k2779 in k862 in k859 in k856 */
static void C_ccall f_2798(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2798,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_caddr(t2):C_SCHEME_FALSE));}

/* f_2789 in k2779 in k862 in k859 in k856 */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2789,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_cadr(t2):C_SCHEME_FALSE));}

/* f_2783 in k2779 in k862 in k859 in k856 */
static void C_ccall f_2783(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2783,3,t0,t1,t2);}
/* files.scm: 178  string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k1635 in k862 in k859 in k856 */
static void C_fcall f_1637(C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1637,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[36]+1 /* (set! absolute-pathname? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1639,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[37] /* (set! chop-pds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1652,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t4=C_set_block_item(lf[40] /* make-pathname */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[41] /* make-absolute-pathname */,0,C_SCHEME_UNDEFINED);
t6=*((C_word*)lf[11]+1);
t7=*((C_word*)lf[36]+1);
t8=lf[42];
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1705,a[2]=t6,a[3]=t8,a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1766,a[2]=t10,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1797,a[2]=t6,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t18=C_mutate((C_word*)lf[40]+1 /* (set! make-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1883,a[2]=t12,a[3]=t14,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t19=C_mutate((C_word*)lf[41]+1 /* (set! make-absolute-pathname ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1947,a[2]=t12,a[3]=t7,a[4]=t8,a[5]=t14,a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t20=*((C_word*)lf[35]+1);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2026,a[2]=((C_word*)t0)[2],a[3]=t20,tmp=(C_word)a,a+=4,tmp);
/* files.scm: 267  regexp */
t22=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t22+1)))(3,t22,t21,lf[96]);}

/* k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2029,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 268  regexp */
t3=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[95]);}

/* k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2029(C_word c,C_word t0,C_word t1){
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
C_word ab[56],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2030,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[53]+1 /* (set! decompose-pathname ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2044,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li75),tmp=(C_word)a,a+=7,tmp));
t4=*((C_word*)lf[53]+1);
t5=C_mutate((C_word*)lf[54]+1 /* (set! pathname-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2120,a[2]=t4,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp));
t6=C_mutate((C_word*)lf[55]+1 /* (set! pathname-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2135,a[2]=t4,a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[56]+1 /* (set! pathname-extension ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2150,a[2]=t4,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[57]+1 /* (set! pathname-strip-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2165,a[2]=t4,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[58]+1 /* (set! pathname-strip-extension ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2183,a[2]=t4,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[59]+1 /* (set! pathname-replace-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2201,a[2]=t4,a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp));
t11=C_mutate((C_word*)lf[60]+1 /* (set! pathname-replace-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2219,a[2]=t4,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[61]+1 /* (set! pathname-replace-extension ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2237,a[2]=t4,a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp));
t13=*((C_word*)lf[62]+1);
t14=*((C_word*)lf[40]+1);
t15=*((C_word*)lf[2]+1);
t16=*((C_word*)lf[63]+1);
t17=C_mutate((C_word*)lf[64]+1 /* (set! create-temporary-file ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2255,a[2]=t13,a[3]=t14,a[4]=t15,a[5]=t16,a[6]=((C_word)li102),tmp=(C_word)a,a+=7,tmp));
t18=*((C_word*)lf[71]+1);
t19=*((C_word*)lf[72]+1);
t20=*((C_word*)lf[62]+1);
t21=*((C_word*)lf[73]+1);
t22=*((C_word*)lf[74]+1);
t23=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2778,a[2]=((C_word*)t0)[2],a[3]=t18,a[4]=t21,a[5]=t22,a[6]=t19,tmp=(C_word)a,a+=7,tmp);
/* files.scm: 365  build-platform */
((C_proc2)C_retrieve_proc(*((C_word*)lf[93]+1)))(2,*((C_word*)lf[93]+1),t23);}

/* k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2778(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2778,2,t0,t1);}
t2=C_i_memq(t1,lf[75]);
t3=(C_truep(t2)?lf[76]:lf[77]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2330,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[81]+1 /* (set! normalize-pathname ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2356,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li107),tmp=(C_word)a,a+=9,tmp));
t6=*((C_word*)lf[86]+1);
t7=C_mutate(&lf[87] /* (set! split-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2644,a[2]=t6,a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[89]+1 /* (set! directory-null? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2653,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[92]+1 /* (set! decompose-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2695,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}

/* decompose-directory in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2695(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2695,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2743,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm: 456  split-directory */
t4=lf[87];
f_2644(t4,t3,lf[92],t2,C_SCHEME_FALSE);}

/* k2741 in decompose-directory in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2746,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm: 457  absolute-pathname-root */
((C_proc3)C_retrieve_proc(lf[32]))(3,lf[32],t2,((C_word*)t0)[2]);}

/* k2744 in k2741 in decompose-directory in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2749,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 458  root-origin */
((C_proc3)C_retrieve_proc(lf[33]))(3,lf[33],t2,t1);}

/* k2747 in k2744 in k2741 in decompose-directory in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 459  root-directory */
((C_proc3)C_retrieve_proc(lf[34]))(3,lf[34],t2,((C_word*)t0)[2]);}

/* k2754 in k2747 in k2744 in k2741 in decompose-directory in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2756(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2756,2,t0,t1);}
t2=C_i_nullp(((C_word*)t0)[4]);
t3=(C_truep(t2)?C_SCHEME_FALSE:((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
if(C_truep(t4)){
t5=C_i_car(t3);
t6=C_block_size(t4);
if(C_truep(C_substring_compare(t4,t5,C_fix(0),C_fix(0),t6))){
t7=C_i_cdr(t3);
t8=C_block_size(t5);
t9=C_block_size(t8);
t10=C_eqp(t6,t9);
if(C_truep(t10)){
/* files.scm: 459  values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,t7);}
else{
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2736,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* files.scm: 455  ##sys#substring */
t12=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,t5,t6,t8);}}
else{
/* files.scm: 459  values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,t3);}}
else{
/* files.scm: 459  values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,t3);}}

/* k2734 in k2754 in k2747 in k2744 in k2741 in decompose-directory in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2736,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* files.scm: 459  values */
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* directory-null? in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2653(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2653,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2661,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_listp(t2))){
t4=t3;
f_2661(2,t4,t2);}
else{
/* files.scm: 430  split-directory */
t4=lf[87];
f_2644(t4,t3,lf[89],t2,C_SCHEME_TRUE);}}

/* k2659 in directory-null? in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2663,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2663(t1));}

/* loop in k2659 in directory-null? in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static C_word C_fcall f_2663(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_i_equalp(t3,lf[90]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[91]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=C_i_cdr(t1);
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* split-directory in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2644,NULL,5,t0,t1,t2,t3,t4);}
t5=C_i_check_string_2(t3,t2);
/* files.scm: 424  string-split */
t6=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,t3,lf[88],t4);}

/* normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_2356r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2356r(t0,t1,t2,t3);}}

static void C_ccall f_2356r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2360,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2360(2,t5,((C_word*)t0)[2]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2360(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2360,2,t0,t1);}
t2=C_eqp(t1,lf[76]);
t3=(C_truep(t2)?C_make_character(92):C_make_character(47));
t4=C_i_check_string_2(((C_word*)t0)[8],lf[81]);
t5=C_block_size(((C_word*)t0)[8]);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2374,a[2]=t1,a[3]=t11,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t9,a[11]=t3,a[12]=t7,a[13]=t5,a[14]=((C_word)li106),tmp=(C_word)a,a+=15,tmp));
t13=((C_word*)t11)[1];
f_2374(t13,((C_word*)t0)[2],C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_fcall f_2374(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2374,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[13]))){
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t5,tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2508,a[2]=t6,a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 379  ##sys#substring */
t8=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,((C_word*)t0)[4],t3,t2);}
else{
t7=t6;
f_2384(t7,C_SCHEME_UNDEFINED);}}
else{
t6=C_i_string_ref(((C_word*)t0)[4],t2);
if(C_truep((C_truep(C_eqp(t6,C_make_character(92)))?C_SCHEME_TRUE:(C_truep(C_eqp(t6,C_make_character(47)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2522,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)t5)[1]))){
t8=C_eqp(t2,t3);
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[12],0,C_SCHEME_TRUE);
t10=t7;
f_2522(t10,t9);}
else{
t9=t7;
f_2522(t9,C_SCHEME_UNDEFINED);}}
else{
t8=t7;
f_2522(t8,C_SCHEME_UNDEFINED);}}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2574,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t2,a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)t5)[1]))){
t8=C_i_string_ref(((C_word*)t0)[4],t2);
t9=C_eqp(t8,C_make_character(58));
t10=t7;
f_2574(t10,(C_truep(t9)?C_eqp(lf[76],((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
t8=t7;
f_2574(t8,C_SCHEME_FALSE);}}}}

/* k2572 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_fcall f_2574(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2574,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* files.scm: 412  ##sys#substring */
t4=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[4],C_fix(0),t3);}
else{
t2=C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* files.scm: 414  loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2374(t3,((C_word*)t0)[5],t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}}

/* k2576 in k2572 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* files.scm: 413  loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2374(t5,((C_word*)t0)[2],t3,t4,C_SCHEME_END_OF_LIST);}

/* k2520 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_fcall f_2522(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2522,NULL,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[8],((C_word*)t0)[7]);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
/* files.scm: 405  loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2374(t5,((C_word*)t0)[5],t3,t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2558,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* files.scm: 408  ##sys#substring */
t6=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* k2556 in k2520 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2558,2,t0,t1);}
t2=f_2330(C_a_i(&a,3),t1,((C_word*)((C_word*)t0)[6])[1]);
/* files.scm: 406  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2374(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2506 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2508,2,t0,t1);}
t2=f_2330(C_a_i(&a,3),t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_2384(t4,t3);}

/* k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_fcall f_2384(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2384,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[12])[1]))){
if(C_truep(((C_word*)((C_word*)t0)[11])[1])){
t2=C_a_i_string(&a,1,((C_word*)t0)[10]);
/* files.scm: 382  ##sys#string-append */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[9],t2,lf[82]);}
else{
t2=C_a_i_string(&a,1,((C_word*)t0)[10]);
/* files.scm: 383  ##sys#string-append */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[9],lf[83],t2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2410,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* files.scm: 384  open-output-string */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}}

/* k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2413,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* files.scm: 385  reverse */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_i_car(t1);
/* files.scm: 386  display */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,((C_word*)t0)[5]);}

/* k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2419,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2464,a[2]=t5,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word)li105),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2464(t7,t2,t3);}

/* loop742 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_fcall f_2464(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2464,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2472,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li104),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2482,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(0));
/* g749750 */
t6=t3;
f_2472(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2480 in loop742 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2464(t3,((C_word*)t0)[2],t2);}

/* g749 in loop742 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_fcall f_2472(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2472,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2476,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* files.scm: 389  ##sys#write-char-0 */
((C_proc4)C_retrieve_proc(*((C_word*)lf[85]+1)))(4,*((C_word*)lf[85]+1),t3,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2474 in g749 in loop742 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 390  display */
t2=((C_word*)t0)[5];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2417 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2419,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2422,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t3)){
/* files.scm: 392  ##sys#write-char-0 */
((C_proc4)C_retrieve_proc(*((C_word*)lf[85]+1)))(4,*((C_word*)lf[85]+1),t2,((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
t4=t2;
f_2422(2,t4,C_SCHEME_UNDEFINED);}}

/* k2420 in k2417 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2425,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* files.scm: 393  get-output-string */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2423 in k2420 in k2417 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* files.scm: 394  ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[84]+1)))(3,*((C_word*)lf[84]+1),t2,t1);}

/* k2426 in k2423 in k2420 in k2417 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2428,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_string_equal_p(((C_word*)t0)[6],((C_word*)t3)[1]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2437,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2448,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_string(&a,1,((C_word*)t0)[2]);
/* files.scm: 397  ##sys#string-append */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,((C_word*)t3)[1]);}
else{
t5=t4;
f_2437(t5,C_SCHEME_UNDEFINED);}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t3)[1]);}}

/* k2446 in k2426 in k2423 in k2420 in k2417 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2437(t3,t2);}

/* k2435 in k2426 in k2423 in k2420 in k2417 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_fcall f_2437(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2437,NULL,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm: 399  ##sys#string-append */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}}

/* k2442 in k2435 in k2426 in k2423 in k2420 in k2417 in k2414 in k2411 in k2408 in k2382 in loop in k2358 in normalize-pathname in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[3])[1]);}

/* addpart in k2776 in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static C_word C_fcall f_2330(C_word *a,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
if(C_truep(C_i_string_equal_p(lf[78],t1))){
t3=t2;
return(t3);}
else{
if(C_truep(C_i_string_equal_p(lf[79],t1))){
t3=C_i_nullp(t2);
return((C_truep(t3)?lf[80]:C_i_cdr(t2)));}
else{
return(C_a_i_cons(&a,2,t1,t2));}}}

/* create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_2255r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2255r(t0,t1,t2);}}

static void C_ccall f_2255r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2259,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* files.scm: 343  get-environment-variable */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[70]);}

/* k2257 in create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2262,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_2262(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm: 344  get-environment-variable */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[69]);}}

/* k2310 in k2257 in create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2312,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[4];
f_2262(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2318,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm: 345  get-environment-variable */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[68]);}}

/* k2316 in k2310 in k2257 in create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_2262(2,t2,t1);}
else{
/* files.scm: 346  file-exists? */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],lf[67]);}}

/* k2260 in k2257 in create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2262,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[6]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[6]):lf[65]);
t4=C_i_check_string_2(t3,lf[64]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2273,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t6,a[8]=((C_word)li101),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_2273(t8,((C_word*)t0)[2]);}

/* loop in k2260 in k2257 in create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_fcall f_2273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2273,NULL,2,t0,t1);}
t2=C_fudge(C_fix(16));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2280,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2303,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 351  number->string */
C_number_to_string(4,0,t5,t2,C_fix(16));}

/* k2301 in loop in k2260 in k2257 in create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 351  ##sys#string-append */
t2=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[66],t1);}

/* k2297 in loop in k2260 in k2257 in create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 351  make-pathname */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2278 in loop in k2260 in k2257 in create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2286,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm: 352  file-exists? */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k2284 in k2278 in loop in k2260 in k2257 in create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2286,2,t0,t1);}
if(C_truep(t1)){
/* files.scm: 353  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2273(t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[3],a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
/* files.scm: 354  call-with-output-file */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],((C_word*)t0)[3],t2);}}

/* a2293 in k2284 in k2278 in loop in k2260 in k2257 in create-temporary-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2294(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2294,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* pathname-replace-extension in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2237,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2243,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2249,a[2]=t3,a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2248 in pathname-replace-extension in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2249(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2249,5,t0,t1,t2,t3,t4);}
/* files.scm: 335  make-pathname */
((C_proc5)C_retrieve_proc(*((C_word*)lf[40]+1)))(5,*((C_word*)lf[40]+1),t1,t2,t3,((C_word*)t0)[2]);}

/* a2242 in pathname-replace-extension in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2243,2,t0,t1);}
/* files.scm: 334  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-replace-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2219(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2219,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2225,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li94),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2231,a[2]=t3,a[3]=((C_word)li95),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2230 in pathname-replace-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2231,5,t0,t1,t2,t3,t4);}
/* files.scm: 330  make-pathname */
((C_proc5)C_retrieve_proc(*((C_word*)lf[40]+1)))(5,*((C_word*)lf[40]+1),t1,t2,((C_word*)t0)[2],t4);}

/* a2224 in pathname-replace-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2225,2,t0,t1);}
/* files.scm: 329  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-replace-directory in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2201,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2207,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2213,a[2]=t3,a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2212 in pathname-replace-directory in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2213(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2213,5,t0,t1,t2,t3,t4);}
/* files.scm: 325  make-pathname */
((C_proc5)C_retrieve_proc(*((C_word*)lf[40]+1)))(5,*((C_word*)lf[40]+1),t1,((C_word*)t0)[2],t3,t4);}

/* a2206 in pathname-replace-directory in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2207,2,t0,t1);}
/* files.scm: 324  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-strip-extension in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2183,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2189,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2195,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2194 in pathname-strip-extension in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2195,5,t0,t1,t2,t3,t4);}
/* files.scm: 320  make-pathname */
((C_proc4)C_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t1,t2,t3);}

/* a2188 in pathname-strip-extension in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2189,2,t0,t1);}
/* files.scm: 319  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-strip-directory in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2165,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2171,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2177,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2176 in pathname-strip-directory in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2177,5,t0,t1,t2,t3,t4);}
/* files.scm: 315  make-pathname */
((C_proc5)C_retrieve_proc(*((C_word*)lf[40]+1)))(5,*((C_word*)lf[40]+1),t1,C_SCHEME_FALSE,t3,t4);}

/* a2170 in pathname-strip-directory in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2171,2,t0,t1);}
/* files.scm: 314  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-extension in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2150(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2150,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2156,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2162,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2161 in pathname-extension in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2162(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2162,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* a2155 in pathname-extension in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2156,2,t0,t1);}
/* files.scm: 309  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2135(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2135,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2141,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2147,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2146 in pathname-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2147,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* a2140 in pathname-file in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2141,2,t0,t1);}
/* files.scm: 304  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-directory in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2120(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2120,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2126,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2132,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2131 in pathname-directory in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2132(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2132,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* a2125 in pathname-directory in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2126,2,t0,t1);}
/* files.scm: 299  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* decompose-pathname in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2044(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2044,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[53]);
t4=C_block_size(t2);
t5=C_eqp(C_fix(0),t4);
if(C_truep(t5)){
/* files.scm: 278  values */
C_values(5,0,t1,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2060,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* files.scm: 279  string-match */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[2],t2);}}

/* k2058 in decompose-pathname in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2060,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2070,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(t1);
/* files.scm: 281  strip-pds */
f_2030(t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2089,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 282  string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k2087 in k2058 in decompose-pathname in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2089,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2099,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(t1);
/* files.scm: 284  strip-pds */
f_2030(t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2114,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* files.scm: 285  strip-pds */
f_2030(t2,((C_word*)t0)[2]);}}

/* k2112 in k2087 in k2058 in decompose-pathname in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 285  values */
C_values(5,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2097 in k2087 in k2058 in decompose-pathname in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caddr(((C_word*)t0)[3]);
/* files.scm: 284  values */
C_values(5,0,((C_word*)t0)[2],t1,t2,C_SCHEME_FALSE);}

/* k2068 in k2058 in decompose-pathname in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_caddr(((C_word*)t0)[3]);
t3=C_i_cddddr(((C_word*)t0)[3]);
t4=C_i_car(t3);
/* files.scm: 281  values */
C_values(5,0,((C_word*)t0)[2],t1,t2,t4);}

/* strip-pds in k2027 in k2024 in k1635 in k862 in k859 in k856 */
static void C_fcall f_2030(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2030,NULL,2,t1,t2);}
if(C_truep(t2)){
t3=t2;
if(C_truep((C_truep(C_i_equalp(t3,lf[51]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[52]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
/* files.scm: 274  chop-pds */
f_1652(t1,t2,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* make-absolute-pathname in k1635 in k862 in k859 in k856 */
static void C_ccall f_1947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_1947r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1947r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1947r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1949,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word)li70),tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1971,a[2]=t5,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1976,a[2]=t6,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
/* def-ext494511 */
t8=t7;
f_1976(t8,t1);}
else{
t8=C_i_car(t4);
t9=C_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
/* def-pds495509 */
t10=t6;
f_1971(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* body492500 */
t12=t5;
f_1949(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-ext494 in make-absolute-pathname in k1635 in k862 in k859 in k856 */
static void C_fcall f_1976(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1976,NULL,2,t0,t1);}
/* def-pds495509 */
t2=((C_word*)t0)[2];
f_1971(t2,t1,C_SCHEME_FALSE);}

/* def-pds495 in make-absolute-pathname in k1635 in k862 in k859 in k856 */
static void C_fcall f_1971(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1971,NULL,3,t0,t1,t2);}
/* body492500 */
t3=((C_word*)t0)[2];
f_1949(t3,t1,t2,C_SCHEME_FALSE);}

/* body492 in make-absolute-pathname in k1635 in k862 in k859 in k856 */
static void C_fcall f_1949(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1949,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1957,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* files.scm: 257  canonicalize-dirs */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1766(t5,t4,((C_word*)t0)[2],t3);}

/* k1955 in body492 in make-absolute-pathname in k1635 in k862 in k859 in k856 */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1960,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1963,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* files.scm: 258  absolute-pathname? */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}

/* k1961 in k1955 in body492 in make-absolute-pathname in k1635 in k862 in k859 in k856 */
static void C_ccall f_1963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[9];
/* files.scm: 255  _make-pathname */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1797(t3,((C_word*)t0)[7],lf[41],t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
if(C_truep(t2)){
/* files.scm: 260  ##sys#string-append */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[9]);}
else{
/* files.scm: 260  ##sys#string-append */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[9]);}}}

/* k1958 in k1955 in body492 in make-absolute-pathname in k1635 in k862 in k859 in k856 */
static void C_ccall f_1960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 255  _make-pathname */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1797(t2,((C_word*)t0)[5],lf[41],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* make-pathname in k1635 in k862 in k859 in k856 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_1883r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1883r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1883r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1885,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1894,a[2]=t5,a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1899,a[2]=t6,a[3]=((C_word)li68),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
/* def-ext462473 */
t8=t7;
f_1899(t8,t1);}
else{
t8=C_i_car(t4);
t9=C_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
/* def-pds463471 */
t10=t6;
f_1894(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* body460468 */
t12=t5;
f_1885(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-ext462 in make-pathname in k1635 in k862 in k859 in k856 */
static void C_fcall f_1899(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1899,NULL,2,t0,t1);}
/* def-pds463471 */
t2=((C_word*)t0)[2];
f_1894(t2,t1,C_SCHEME_FALSE);}

/* def-pds463 in make-pathname in k1635 in k862 in k859 in k856 */
static void C_fcall f_1894(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1894,NULL,3,t0,t1,t2);}
/* body460468 */
t3=((C_word*)t0)[2];
f_1885(t3,t1,t2,C_SCHEME_FALSE);}

/* body460 in make-pathname in k1635 in k862 in k859 in k856 */
static void C_fcall f_1885(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1885,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1893,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm: 251  canonicalize-dirs */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1766(t5,t4,((C_word*)t0)[2],t3);}

/* k1891 in body460 in make-pathname in k1635 in k862 in k859 in k856 */
static void C_ccall f_1893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 251  _make-pathname */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1797(t2,((C_word*)t0)[5],lf[40],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* _make-pathname in k1635 in k862 in k859 in k856 */
static void C_fcall f_1797(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1797,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_truep(t5)?t5:lf[45]);
t8=(C_truep(t4)?t4:lf[46]);
t9=(C_truep(t6)?C_block_size(t6):C_fix(1));
t10=C_i_check_string_2(t3,t2);
t11=C_i_check_string_2(t8,t2);
t12=C_i_check_string_2(t7,t2);
t13=(C_truep(t6)?C_i_check_string_2(t6,t2):C_SCHEME_UNDEFINED);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1826,a[2]=t7,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1850,a[2]=t9,a[3]=t14,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t16=C_block_size(t8);
if(C_truep(C_fixnum_greater_or_equal_p(t16,t9))){
if(C_truep(t6)){
t17=C_substring_compare(t6,t8,C_fix(0),C_fix(0),t9);
t18=t15;
f_1850(t18,t17);}
else{
t17=C_subchar(t8,C_fix(0));
t18=t15;
f_1850(t18,C_i_memq(t17,lf[49]));}}
else{
t17=t15;
f_1850(t17,C_SCHEME_FALSE);}}

/* k1848 in _make-pathname in k1635 in k862 in k859 in k856 */
static void C_fcall f_1850(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[4]);
/* files.scm: 241  ##sys#substring */
t3=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[3];
f_1826(2,t2,((C_word*)t0)[4]);}}

/* k1824 in _make-pathname in k1635 in k862 in k859 in k856 */
static void C_ccall f_1826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1826,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1833,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t4=C_eqp(C_subchar(((C_word*)t0)[2],C_fix(0)),C_make_character(46));
t5=t2;
f_1833(t5,C_i_not(t4));}
else{
t4=t2;
f_1833(t4,C_SCHEME_FALSE);}}

/* k1831 in k1824 in _make-pathname in k1635 in k862 in k859 in k856 */
static void C_fcall f_1833(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm: 235  string-append */
t2=((C_word*)t0)[6];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[47],((C_word*)t0)[2]);}
else{
/* files.scm: 235  string-append */
t2=((C_word*)t0)[6];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[48],((C_word*)t0)[2]);}}

/* canonicalize-dirs in k1635 in k862 in k859 in k856 */
static void C_fcall f_1766(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1766,NULL,4,t0,t1,t2,t3);}
t4=C_i_not(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[44]);}
else{
if(C_truep(C_i_stringp(t2))){
t6=C_a_i_list(&a,1,t2);
/* files.scm: 224  conc-dirs */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1705(t7,t1,t6,t3);}
else{
/* files.scm: 225  conc-dirs */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1705(t6,t1,t2,t3);}}}

/* conc-dirs in k1635 in k862 in k859 in k856 */
static void C_fcall f_1705(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1705,NULL,4,t0,t1,t2,t3);}
t4=C_i_check_list_2(t2,lf[40]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t6,a[6]=((C_word)li62),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1714(t8,t1,t2);}

/* loop in conc-dirs in k1635 in k862 in k859 in k856 */
static void C_fcall f_1714(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1714,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[43]);}
else{
t3=C_i_car(t2);
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_i_cdr(t2);
/* files.scm: 216  loop */
t10=t1;
t11=t6;
t1=t10;
t2=t11;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1744,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
/* files.scm: 218  chop-pds */
f_1652(t6,t7,((C_word*)t0)[4]);}}}

/* k1742 in loop in conc-dirs in k1635 in k862 in k859 in k856 */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1744,2,t0,t1);}
t2=((C_word*)t0)[7];
t3=(C_truep(t2)?t2:((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1752,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_i_cdr(((C_word*)t0)[3]);
/* files.scm: 220  loop */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1714(t6,t4,t5);}

/* k1750 in k1742 in loop in conc-dirs in k1635 in k862 in k859 in k856 */
static void C_ccall f_1752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 217  string-append */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* chop-pds in k1635 in k862 in k859 in k856 */
static void C_fcall f_1652(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1652,NULL,3,t1,t2,t3);}
if(C_truep(t2)){
t4=C_block_size(t2);
t5=(C_truep(t3)?C_block_size(t3):C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1668,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t4,C_fix(1)))){
if(C_truep(t3)){
t7=C_fixnum_difference(t4,t5);
t8=C_substring_compare(t2,t3,t7,C_fix(0),t5);
t9=t6;
f_1668(t9,t8);}
else{
t7=C_fixnum_difference(t4,t5);
t8=C_subchar(t2,t7);
t9=t6;
f_1668(t9,C_i_memq(t8,lf[39]));}}
else{
t7=t6;
f_1668(t7,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1666 in chop-pds in k1635 in k862 in k859 in k856 */
static void C_fcall f_1668(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* files.scm: 200  ##sys#substring */
t3=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* absolute-pathname? in k1635 in k862 in k859 in k856 */
static void C_ccall f_1639(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1639,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[36]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1650,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 188  absolute-pathname-root */
((C_proc3)C_retrieve_proc(lf[32]))(3,lf[32],t4,t2);}

/* k1648 in absolute-pathname? in k1635 in k862 in k859 in k856 */
static void C_ccall f_1650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_pairp(t1));}

/* file-move in k862 in k859 in k856 */
static void C_ccall f_1225(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_1225r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1225r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1225r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1227,a[2]=t3,a[3]=t2,a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1580,a[2]=t5,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1585,a[2]=t6,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
/* def-clobber194344 */
t8=t7;
f_1585(t8,t1);}
else{
t8=C_i_car(t4);
t9=C_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
/* def-blocksize195342 */
t10=t6;
f_1580(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* body192200 */
t12=t5;
f_1227(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-clobber194 in file-move in k862 in k859 in k856 */
static void C_fcall f_1585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1585,NULL,2,t0,t1);}
/* def-blocksize195342 */
t2=((C_word*)t0)[2];
f_1580(t2,t1,C_SCHEME_FALSE);}

/* def-blocksize195 in file-move in k862 in k859 in k856 */
static void C_fcall f_1580(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1580,NULL,3,t0,t1,t2);}
/* body192200 */
t3=((C_word*)t0)[2];
f_1227(t3,t1,t2,C_fix(1024));}

/* body192 in file-move in k862 in k859 in k856 */
static void C_fcall f_1227(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1227,NULL,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(((C_word*)t0)[3],lf[24]);
t5=C_i_check_string_2(((C_word*)t0)[2],lf[24]);
t6=C_i_check_number_2(t3,lf[24]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1240,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t3))){
t8=t3;
t9=t7;
f_1240(t9,C_fixnum_greaterp(t8,C_fix(0)));}
else{
t8=t7;
f_1240(t8,C_SCHEME_FALSE);}}

/* k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_fcall f_1240(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1240,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_1243(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1569,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1573,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 124  number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[5]);}}

/* k1571 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 122  string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[31],t1);}

/* k1567 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 122  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* files.scm: 125  file-exists? */
t3=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_1249(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1562,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 126  string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[30],((C_word*)t0)[6]);}}

/* k1560 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 126  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1252,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1545,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 127  file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k1543 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1545,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_1252(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1555,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* files.scm: 129  string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[29],((C_word*)t0)[2]);}}
else{
t2=((C_word*)t0)[3];
f_1252(2,t2,C_SCHEME_FALSE);}}

/* k1553 in k1543 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 129  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1489,a[2]=((C_word*)t0)[5],a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a1488 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1489(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1489,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1495,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1520,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1519 in a1488 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1526,a[2]=((C_word*)t0)[3],a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1532,a[2]=((C_word*)t0)[2],a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1531 in a1519 in a1488 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1532(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1532r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1532r(t0,t1,t2);}}

static void C_ccall f_1532r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1538,a[2]=t2,a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
/* k231236 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1537 in a1531 in a1519 in a1488 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1538,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1525 in a1519 in a1488 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1526,2,t0,t1);}
/* files.scm: 132  open-input-file */
t2=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1494 in a1488 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1495(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1495,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
/* k231236 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1500 in a1494 in a1488 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1501,2,t0,t1);}
if(C_truep(C_i_structurep(((C_word*)t0)[3],lf[9]))){
t2=C_slot(((C_word*)t0)[3],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 134  string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[28],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2976,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 134  string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[28],((C_word*)t0)[2]);}}

/* f2976 in a1500 in a1494 in a1488 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 134  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1510 in a1500 in a1494 in a1488 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 134  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* g234235 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1261,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1434,a[2]=((C_word*)t0)[2],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a1433 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1434(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1434,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1440,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1465,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1464 in a1433 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1471,a[2]=((C_word*)t0)[3],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1477,a[2]=((C_word*)t0)[2],a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1476 in a1464 in a1433 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1477(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1477r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1477r(t0,t1,t2);}}

static void C_ccall f_1477r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1483,a[2]=t2,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
/* k257262 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1482 in a1476 in a1464 in a1433 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1470 in a1464 in a1433 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1471,2,t0,t1);}
/* files.scm: 137  open-output-file */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1439 in a1433 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1440,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1446,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp);
/* k257262 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1445 in a1439 in a1433 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1446,2,t0,t1);}
if(C_truep(C_i_structurep(((C_word*)t0)[3],lf[9]))){
t2=C_slot(((C_word*)t0)[3],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1457,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 139  string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[27],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2972,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 139  string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[27],((C_word*)t0)[2]);}}

/* f2972 in a1445 in a1439 in a1433 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f2972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 139  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1455 in a1445 in a1439 in a1433 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 139  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* g260261 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm: 142  make-string */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* files.scm: 143  read-string! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1274,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1276,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li41),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_1276(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_fcall f_1276(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1276,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(C_fix(0),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1286,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* files.scm: 147  close-input-port */
t7=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[5]);}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1353,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1369,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word)li40),tmp=(C_word)a,a+=8,tmp);
/* call-with-current-continuation */
t8=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}}

/* a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1369(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1369,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1375,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li35),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1410,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1409 in a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1416,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1422,a[2]=((C_word*)t0)[2],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1421 in a1409 in a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1422r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1422r(t0,t1,t2);}}

static void C_ccall f_1422r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1428,a[2]=t2,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
/* k314319 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1427 in a1421 in a1409 in a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1428,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1415 in a1409 in a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1416,2,t0,t1);}
/* files.scm: 156  write-string */
((C_proc5)C_retrieve_proc(*((C_word*)lf[13]+1)))(5,*((C_word*)lf[13]+1),t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1374 in a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1375,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1381,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word)li34),tmp=(C_word)a,a+=7,tmp);
/* k314319 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1380 in a1374 in a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1381,2,t0,t1);}
t2=C_i_structurep(((C_word*)t0)[5],lf[9]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[5],C_fix(1)):C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1388,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm: 158  close-input-port */
t5=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k1386 in a1380 in a1374 in a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1391,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm: 159  close-output-port */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1389 in k1386 in a1380 in a1374 in a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1398,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1402,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 162  number->string */
C_number_to_string(3,0,t3,((C_word*)t0)[2]);}

/* k1400 in k1389 in k1386 in a1380 in a1374 in a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 160  string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[26],t1);}

/* k1396 in k1389 in k1386 in a1380 in a1374 in a1368 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 160  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1351 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* g317318 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1354 in k1351 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1363,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* files.scm: 163  read-string! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1361 in k1354 in k1351 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* files.scm: 163  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1276(t3,((C_word*)t0)[2],t1,t2);}

/* k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1289,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 148  close-output-port */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1292,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1297,a[2]=((C_word*)t0)[2],a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a1296 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1297(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1297,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1303,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1328,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1327 in a1296 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1328,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1334,a[2]=((C_word*)t0)[3],a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1340,a[2]=((C_word*)t0)[2],a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1339 in a1327 in a1296 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1340(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1340r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1340r(t0,t1,t2);}}

static void C_ccall f_1340r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1346,a[2]=t2,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
/* k286291 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1345 in a1339 in a1327 in a1296 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1346,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1333 in a1327 in a1296 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1334,2,t0,t1);}
/* files.scm: 149  delete-file */
t2=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1302 in a1296 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1303(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1303,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1309,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp);
/* k286291 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1308 in a1302 in a1296 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1309,2,t0,t1);}
if(C_truep(C_i_structurep(((C_word*)t0)[3],lf[9]))){
t2=C_slot(((C_word*)t0)[3],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1320,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 151  string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[25],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2966,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 151  string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[25],((C_word*)t0)[2]);}}

/* f2966 in a1308 in a1302 in a1296 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 151  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1318 in a1308 in a1302 in a1296 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 151  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1290 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* g289290 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1293 in k1290 in k1287 in k1284 in loop in k1272 in k1265 in k1262 in k1259 in k1256 in k1253 in k1250 in k1247 in k1244 in k1241 in k1238 in body192 in file-move in k862 in k859 in k856 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* file-copy in k862 in k859 in k856 */
static void C_ccall f_878(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_878r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_878r(t0,t1,t2,t3,t4);}}

static void C_ccall f_878r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_880,a[2]=t3,a[3]=t2,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1172,a[2]=t5,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1177,a[2]=t6,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
/* def-clobber47171 */
t8=t7;
f_1177(t8,t1);}
else{
t8=C_i_car(t4);
t9=C_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
/* def-blocksize48169 */
t10=t6;
f_1172(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* body4553 */
t12=t5;
f_880(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-clobber47 in file-copy in k862 in k859 in k856 */
static void C_fcall f_1177(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1177,NULL,2,t0,t1);}
/* def-blocksize48169 */
t2=((C_word*)t0)[2];
f_1172(t2,t1,C_SCHEME_FALSE);}

/* def-blocksize48 in file-copy in k862 in k859 in k856 */
static void C_fcall f_1172(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1172,NULL,3,t0,t1,t2);}
/* body4553 */
t3=((C_word*)t0)[2];
f_880(t3,t1,t2,C_fix(1024));}

/* body45 in file-copy in k862 in k859 in k856 */
static void C_fcall f_880(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_880,NULL,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(((C_word*)t0)[3],lf[5]);
t5=C_i_check_string_2(((C_word*)t0)[2],lf[5]);
t6=C_i_check_number_2(t3,lf[5]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_893,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t3))){
t8=t3;
t9=t7;
f_893(t9,C_fixnum_greaterp(t8,C_fix(0)));}
else{
t8=t7;
f_893(t8,C_SCHEME_FALSE);}}

/* k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_fcall f_893(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_893,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_896(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1161,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1165,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 81   number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[6]);}}

/* k1163 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 79   string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[23],t1);}

/* k1159 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 79   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_896,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* files.scm: 82   file-exists? */
t3=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_899,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_902(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1154,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 83   string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[22],((C_word*)t0)[3]);}}

/* k1152 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 83   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_902,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_905,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1137,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 84   file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k1135 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1137,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_905(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1147,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* files.scm: 86   string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[21],((C_word*)t0)[2]);}}
else{
t2=((C_word*)t0)[3];
f_905(2,t2,C_SCHEME_FALSE);}}

/* k1145 in k1135 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 86   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_905,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_908,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1081,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a1080 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1081,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1087,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1112,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1111 in a1080 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1112,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1118,a[2]=((C_word*)t0)[3],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1124,a[2]=((C_word*)t0)[2],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1123 in a1111 in a1080 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1124(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1124r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1124r(t0,t1,t2);}}

static void C_ccall f_1124r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1130,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* k8489 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1129 in a1123 in a1111 in a1080 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1130,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1117 in a1111 in a1080 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1118,2,t0,t1);}
/* files.scm: 89   open-input-file */
t2=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1086 in a1080 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1087(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1087,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1093,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp);
/* k8489 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1092 in a1086 in a1080 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1093,2,t0,t1);}
if(C_truep(C_i_structurep(((C_word*)t0)[3],lf[9]))){
t2=C_slot(((C_word*)t0)[3],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1104,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 91   string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[19],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2962,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 91   string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[19],((C_word*)t0)[2]);}}

/* f2962 in a1092 in a1086 in a1080 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 91   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1102 in a1092 in a1086 in a1080 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 91   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_908,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* g8788 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_911,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_914,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1026,a[2]=((C_word*)t0)[2],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a1025 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1026(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1026,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1032,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1057,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1056 in a1025 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1063,a[2]=((C_word*)t0)[3],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1069,a[2]=((C_word*)t0)[2],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1068 in a1056 in a1025 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1069(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1069r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1069r(t0,t1,t2);}}

static void C_ccall f_1069r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1075,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
/* k110115 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1074 in a1068 in a1056 in a1025 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1075,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1062 in a1056 in a1025 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1063,2,t0,t1);}
/* files.scm: 94   open-output-file */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1031 in a1025 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1032(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1032,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1038,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
/* k110115 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1037 in a1031 in a1025 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1038,2,t0,t1);}
if(C_truep(C_i_structurep(((C_word*)t0)[3],lf[9]))){
t2=C_slot(((C_word*)t0)[3],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1049,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 96   string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[17],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2958,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 96   string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[17],((C_word*)t0)[2]);}}

/* f2958 in a1037 in a1031 in a1025 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f2958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 96   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1047 in a1037 in a1031 in a1025 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 96   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_914,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* g113114 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* files.scm: 99   make-string */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_927,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm: 100  read-string! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_927,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_929,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li8),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_929(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_fcall f_929(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_929,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(C_fix(0),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_939,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* files.scm: 104  close-input-port */
t7=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[5]);}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_945,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_961,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp);
/* call-with-current-continuation */
t8=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}}

/* a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_961(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_961,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_967,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li2),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1002,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li6),tmp=(C_word)a,a+=7,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1001 in a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1008,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1014,a[2]=((C_word*)t0)[2],a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1013 in a1001 in a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1014(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1014r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1014r(t0,t1,t2);}}

static void C_ccall f_1014r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1020,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
/* k141146 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1019 in a1013 in a1001 in a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1020,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1007 in a1001 in a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_1008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1008,2,t0,t1);}
/* files.scm: 108  write-string */
((C_proc5)C_retrieve_proc(*((C_word*)lf[13]+1)))(5,*((C_word*)lf[13]+1),t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a966 in a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_967(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_967,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_973,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word)li1),tmp=(C_word)a,a+=7,tmp);
/* k141146 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a972 in a966 in a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_973,2,t0,t1);}
t2=C_i_structurep(((C_word*)t0)[5],lf[9]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[5],C_fix(1)):C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_980,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm: 110  close-input-port */
t5=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k978 in a972 in a966 in a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_983,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm: 111  close-output-port */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k981 in k978 in a972 in a966 in a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_990,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_994,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 114  number->string */
C_number_to_string(3,0,t3,((C_word*)t0)[2]);}

/* k992 in k981 in k978 in a972 in a966 in a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 112  string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[12],t1);}

/* k988 in k981 in k978 in a972 in a966 in a960 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 112  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k943 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* g144145 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k946 in k943 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_955,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* files.scm: 115  read-string! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k953 in k946 in k943 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* files.scm: 115  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_929(t3,((C_word*)t0)[2],t1,t2);}

/* k937 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_942,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm: 105  close-output-port */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k940 in k937 in loop in k925 in k918 in k915 in k912 in k909 in k906 in k903 in k900 in k897 in k894 in k891 in body45 in file-copy in k862 in k859 in k856 */
static void C_ccall f_942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* delete-file* in k862 in k859 in k856 */
static void C_ccall f_866(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_866,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_873,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 71   file-exists? */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k871 in delete-file* in k862 in k859 in k856 */
static void C_ccall f_873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm: 71   delete-file */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[241] = {
{"toplevel:files_scm",(void*)C_files_toplevel},
{"f_858:files_scm",(void*)f_858},
{"f_861:files_scm",(void*)f_861},
{"f_864:files_scm",(void*)f_864},
{"f_2808:files_scm",(void*)f_2808},
{"f_2819:files_scm",(void*)f_2819},
{"f_2816:files_scm",(void*)f_2816},
{"f_2810:files_scm",(void*)f_2810},
{"f_2781:files_scm",(void*)f_2781},
{"f_2798:files_scm",(void*)f_2798},
{"f_2789:files_scm",(void*)f_2789},
{"f_2783:files_scm",(void*)f_2783},
{"f_1637:files_scm",(void*)f_1637},
{"f_2026:files_scm",(void*)f_2026},
{"f_2029:files_scm",(void*)f_2029},
{"f_2778:files_scm",(void*)f_2778},
{"f_2695:files_scm",(void*)f_2695},
{"f_2743:files_scm",(void*)f_2743},
{"f_2746:files_scm",(void*)f_2746},
{"f_2749:files_scm",(void*)f_2749},
{"f_2756:files_scm",(void*)f_2756},
{"f_2736:files_scm",(void*)f_2736},
{"f_2653:files_scm",(void*)f_2653},
{"f_2661:files_scm",(void*)f_2661},
{"f_2663:files_scm",(void*)f_2663},
{"f_2644:files_scm",(void*)f_2644},
{"f_2356:files_scm",(void*)f_2356},
{"f_2360:files_scm",(void*)f_2360},
{"f_2374:files_scm",(void*)f_2374},
{"f_2574:files_scm",(void*)f_2574},
{"f_2578:files_scm",(void*)f_2578},
{"f_2522:files_scm",(void*)f_2522},
{"f_2558:files_scm",(void*)f_2558},
{"f_2508:files_scm",(void*)f_2508},
{"f_2384:files_scm",(void*)f_2384},
{"f_2410:files_scm",(void*)f_2410},
{"f_2413:files_scm",(void*)f_2413},
{"f_2416:files_scm",(void*)f_2416},
{"f_2464:files_scm",(void*)f_2464},
{"f_2482:files_scm",(void*)f_2482},
{"f_2472:files_scm",(void*)f_2472},
{"f_2476:files_scm",(void*)f_2476},
{"f_2419:files_scm",(void*)f_2419},
{"f_2422:files_scm",(void*)f_2422},
{"f_2425:files_scm",(void*)f_2425},
{"f_2428:files_scm",(void*)f_2428},
{"f_2448:files_scm",(void*)f_2448},
{"f_2437:files_scm",(void*)f_2437},
{"f_2444:files_scm",(void*)f_2444},
{"f_2330:files_scm",(void*)f_2330},
{"f_2255:files_scm",(void*)f_2255},
{"f_2259:files_scm",(void*)f_2259},
{"f_2312:files_scm",(void*)f_2312},
{"f_2318:files_scm",(void*)f_2318},
{"f_2262:files_scm",(void*)f_2262},
{"f_2273:files_scm",(void*)f_2273},
{"f_2303:files_scm",(void*)f_2303},
{"f_2299:files_scm",(void*)f_2299},
{"f_2280:files_scm",(void*)f_2280},
{"f_2286:files_scm",(void*)f_2286},
{"f_2294:files_scm",(void*)f_2294},
{"f_2237:files_scm",(void*)f_2237},
{"f_2249:files_scm",(void*)f_2249},
{"f_2243:files_scm",(void*)f_2243},
{"f_2219:files_scm",(void*)f_2219},
{"f_2231:files_scm",(void*)f_2231},
{"f_2225:files_scm",(void*)f_2225},
{"f_2201:files_scm",(void*)f_2201},
{"f_2213:files_scm",(void*)f_2213},
{"f_2207:files_scm",(void*)f_2207},
{"f_2183:files_scm",(void*)f_2183},
{"f_2195:files_scm",(void*)f_2195},
{"f_2189:files_scm",(void*)f_2189},
{"f_2165:files_scm",(void*)f_2165},
{"f_2177:files_scm",(void*)f_2177},
{"f_2171:files_scm",(void*)f_2171},
{"f_2150:files_scm",(void*)f_2150},
{"f_2162:files_scm",(void*)f_2162},
{"f_2156:files_scm",(void*)f_2156},
{"f_2135:files_scm",(void*)f_2135},
{"f_2147:files_scm",(void*)f_2147},
{"f_2141:files_scm",(void*)f_2141},
{"f_2120:files_scm",(void*)f_2120},
{"f_2132:files_scm",(void*)f_2132},
{"f_2126:files_scm",(void*)f_2126},
{"f_2044:files_scm",(void*)f_2044},
{"f_2060:files_scm",(void*)f_2060},
{"f_2089:files_scm",(void*)f_2089},
{"f_2114:files_scm",(void*)f_2114},
{"f_2099:files_scm",(void*)f_2099},
{"f_2070:files_scm",(void*)f_2070},
{"f_2030:files_scm",(void*)f_2030},
{"f_1947:files_scm",(void*)f_1947},
{"f_1976:files_scm",(void*)f_1976},
{"f_1971:files_scm",(void*)f_1971},
{"f_1949:files_scm",(void*)f_1949},
{"f_1957:files_scm",(void*)f_1957},
{"f_1963:files_scm",(void*)f_1963},
{"f_1960:files_scm",(void*)f_1960},
{"f_1883:files_scm",(void*)f_1883},
{"f_1899:files_scm",(void*)f_1899},
{"f_1894:files_scm",(void*)f_1894},
{"f_1885:files_scm",(void*)f_1885},
{"f_1893:files_scm",(void*)f_1893},
{"f_1797:files_scm",(void*)f_1797},
{"f_1850:files_scm",(void*)f_1850},
{"f_1826:files_scm",(void*)f_1826},
{"f_1833:files_scm",(void*)f_1833},
{"f_1766:files_scm",(void*)f_1766},
{"f_1705:files_scm",(void*)f_1705},
{"f_1714:files_scm",(void*)f_1714},
{"f_1744:files_scm",(void*)f_1744},
{"f_1752:files_scm",(void*)f_1752},
{"f_1652:files_scm",(void*)f_1652},
{"f_1668:files_scm",(void*)f_1668},
{"f_1639:files_scm",(void*)f_1639},
{"f_1650:files_scm",(void*)f_1650},
{"f_1225:files_scm",(void*)f_1225},
{"f_1585:files_scm",(void*)f_1585},
{"f_1580:files_scm",(void*)f_1580},
{"f_1227:files_scm",(void*)f_1227},
{"f_1240:files_scm",(void*)f_1240},
{"f_1573:files_scm",(void*)f_1573},
{"f_1569:files_scm",(void*)f_1569},
{"f_1243:files_scm",(void*)f_1243},
{"f_1246:files_scm",(void*)f_1246},
{"f_1562:files_scm",(void*)f_1562},
{"f_1249:files_scm",(void*)f_1249},
{"f_1545:files_scm",(void*)f_1545},
{"f_1555:files_scm",(void*)f_1555},
{"f_1252:files_scm",(void*)f_1252},
{"f_1489:files_scm",(void*)f_1489},
{"f_1520:files_scm",(void*)f_1520},
{"f_1532:files_scm",(void*)f_1532},
{"f_1538:files_scm",(void*)f_1538},
{"f_1526:files_scm",(void*)f_1526},
{"f_1495:files_scm",(void*)f_1495},
{"f_1501:files_scm",(void*)f_1501},
{"f2976:files_scm",(void*)f2976},
{"f_1512:files_scm",(void*)f_1512},
{"f_1255:files_scm",(void*)f_1255},
{"f_1258:files_scm",(void*)f_1258},
{"f_1434:files_scm",(void*)f_1434},
{"f_1465:files_scm",(void*)f_1465},
{"f_1477:files_scm",(void*)f_1477},
{"f_1483:files_scm",(void*)f_1483},
{"f_1471:files_scm",(void*)f_1471},
{"f_1440:files_scm",(void*)f_1440},
{"f_1446:files_scm",(void*)f_1446},
{"f2972:files_scm",(void*)f2972},
{"f_1457:files_scm",(void*)f_1457},
{"f_1261:files_scm",(void*)f_1261},
{"f_1264:files_scm",(void*)f_1264},
{"f_1267:files_scm",(void*)f_1267},
{"f_1274:files_scm",(void*)f_1274},
{"f_1276:files_scm",(void*)f_1276},
{"f_1369:files_scm",(void*)f_1369},
{"f_1410:files_scm",(void*)f_1410},
{"f_1422:files_scm",(void*)f_1422},
{"f_1428:files_scm",(void*)f_1428},
{"f_1416:files_scm",(void*)f_1416},
{"f_1375:files_scm",(void*)f_1375},
{"f_1381:files_scm",(void*)f_1381},
{"f_1388:files_scm",(void*)f_1388},
{"f_1391:files_scm",(void*)f_1391},
{"f_1402:files_scm",(void*)f_1402},
{"f_1398:files_scm",(void*)f_1398},
{"f_1353:files_scm",(void*)f_1353},
{"f_1356:files_scm",(void*)f_1356},
{"f_1363:files_scm",(void*)f_1363},
{"f_1286:files_scm",(void*)f_1286},
{"f_1289:files_scm",(void*)f_1289},
{"f_1297:files_scm",(void*)f_1297},
{"f_1328:files_scm",(void*)f_1328},
{"f_1340:files_scm",(void*)f_1340},
{"f_1346:files_scm",(void*)f_1346},
{"f_1334:files_scm",(void*)f_1334},
{"f_1303:files_scm",(void*)f_1303},
{"f_1309:files_scm",(void*)f_1309},
{"f2966:files_scm",(void*)f2966},
{"f_1320:files_scm",(void*)f_1320},
{"f_1292:files_scm",(void*)f_1292},
{"f_1295:files_scm",(void*)f_1295},
{"f_878:files_scm",(void*)f_878},
{"f_1177:files_scm",(void*)f_1177},
{"f_1172:files_scm",(void*)f_1172},
{"f_880:files_scm",(void*)f_880},
{"f_893:files_scm",(void*)f_893},
{"f_1165:files_scm",(void*)f_1165},
{"f_1161:files_scm",(void*)f_1161},
{"f_896:files_scm",(void*)f_896},
{"f_899:files_scm",(void*)f_899},
{"f_1154:files_scm",(void*)f_1154},
{"f_902:files_scm",(void*)f_902},
{"f_1137:files_scm",(void*)f_1137},
{"f_1147:files_scm",(void*)f_1147},
{"f_905:files_scm",(void*)f_905},
{"f_1081:files_scm",(void*)f_1081},
{"f_1112:files_scm",(void*)f_1112},
{"f_1124:files_scm",(void*)f_1124},
{"f_1130:files_scm",(void*)f_1130},
{"f_1118:files_scm",(void*)f_1118},
{"f_1087:files_scm",(void*)f_1087},
{"f_1093:files_scm",(void*)f_1093},
{"f2962:files_scm",(void*)f2962},
{"f_1104:files_scm",(void*)f_1104},
{"f_908:files_scm",(void*)f_908},
{"f_911:files_scm",(void*)f_911},
{"f_1026:files_scm",(void*)f_1026},
{"f_1057:files_scm",(void*)f_1057},
{"f_1069:files_scm",(void*)f_1069},
{"f_1075:files_scm",(void*)f_1075},
{"f_1063:files_scm",(void*)f_1063},
{"f_1032:files_scm",(void*)f_1032},
{"f_1038:files_scm",(void*)f_1038},
{"f2958:files_scm",(void*)f2958},
{"f_1049:files_scm",(void*)f_1049},
{"f_914:files_scm",(void*)f_914},
{"f_917:files_scm",(void*)f_917},
{"f_920:files_scm",(void*)f_920},
{"f_927:files_scm",(void*)f_927},
{"f_929:files_scm",(void*)f_929},
{"f_961:files_scm",(void*)f_961},
{"f_1002:files_scm",(void*)f_1002},
{"f_1014:files_scm",(void*)f_1014},
{"f_1020:files_scm",(void*)f_1020},
{"f_1008:files_scm",(void*)f_1008},
{"f_967:files_scm",(void*)f_967},
{"f_973:files_scm",(void*)f_973},
{"f_980:files_scm",(void*)f_980},
{"f_983:files_scm",(void*)f_983},
{"f_994:files_scm",(void*)f_994},
{"f_990:files_scm",(void*)f_990},
{"f_945:files_scm",(void*)f_945},
{"f_948:files_scm",(void*)f_948},
{"f_955:files_scm",(void*)f_955},
{"f_939:files_scm",(void*)f_939},
{"f_942:files_scm",(void*)f_942},
{"f_866:files_scm",(void*)f_866},
{"f_873:files_scm",(void*)f_873},
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
